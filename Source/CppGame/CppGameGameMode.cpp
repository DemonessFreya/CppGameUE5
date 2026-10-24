// Fill out your copyright notice in the Description page of Project Settings.


#include "CppGameGameMode.h"

#include "Kismet/GameplayStatics.h" // For save/load functions
#include "CppGameSaveGame.h" // for our save game type
#include "EngineUtils.h" // For TActorIterator
#include "CppGameCharacter.h" // For player character
#include "CppGameSaveTransformComponent.h" // For saving/loading transforms
#include "Misc/Paths.h" // For FPaths

ACppGameGameMode::ACppGameGameMode()
{
	// Enable ticking for this GameMode
	PrimaryActorTick.bCanEverTick = true;
}

// Called when the game starts or when spawned
void ACppGameGameMode::BeginPlay()
{
	Super::BeginPlay();

	USaveGame* loadSave = UGameplayStatics::LoadGameFromSlot(TEXT("SINGLEPLAYER"), 0);
	UCppGameSaveGame* mySave = Cast<UCppGameSaveGame>(loadSave);

	// If save is valid
	if (IsValid(mySave))
	{
		// Copy the saved high score
		HighScore = mySave->HighScore;

		UE_LOG(LogTemp, Log, TEXT("Loaded high score: %d"), HighScore);
		LastPlayerSavedLocation = mySave->LastPlayerLocation;
	}

	if (IsValid(mySave) && !mySave->SaveTransformsByName.IsEmpty()) // If the save is valid AND there are saved transforms
	{
		for (TObjectIterator<UCppGameSaveTransformComponent> savedTransforms; savedTransforms; ++savedTransforms)
		{
			// Don't load if object is not from a game/PIE world or level is different from the current level
			if (!IsValid(*savedTransforms) || savedTransforms->GetWorld() != GetWorld() || savedTransforms->GetOwner()->GetLevel() != GetLevel())
			{
				continue;
			}

			// A component and its owner should never belong to different worlds
			check(savedTransforms->GetWorld() == savedTransforms->GetOwner()->GetWorld());

			EWorldType::Type ownerWorldType = savedTransforms->GetOwner()->GetWorld()->WorldType;
			if (!(ownerWorldType == EWorldType::PIE || ownerWorldType == EWorldType::Game)) continue;

			AActor* saveOwner = (*savedTransforms)->GetOwner();
			FString ownerName = saveOwner->GetName();
			FTransform* savedTransform = mySave->SaveTransformsByName.Find(ownerName);
			if (savedTransform)
			{
				(*savedTransforms)->LoadTransform(mySave->SaveTransformsByName[saveOwner->GetName()]);
			}
		}
	}
}

void ACppGameGameMode::Tick(float DeltaSeconds)
{
	Super::Tick(DeltaSeconds);
}

void ACppGameGameMode::EndPlay(const EEndPlayReason::Type EndPlayReason)
{
	// Create a copy of the save data
	USaveGame* newSave = UGameplayStatics::CreateSaveGameObject(UCppGameSaveGame::StaticClass());
	// Cast it to our save game type
	UCppGameSaveGame* mySave = Cast<UCppGameSaveGame>(newSave);

	// If the cast was successful
	if (IsValid(mySave))
	{
		// Copy the high score into the save data object
		mySave->HighScore = HighScore;
		// Copy the last player location into the save data object
		for (TActorIterator<ACppGameCharacter> player(GetWorld()); player; ++player)
		{
			// Skip invalid players
			if (!IsValid(*player)) return;
			mySave->LastPlayerLocation = player->GetActorLocation();
			break;
		}

		// Save persistent transforms
		for (TObjectIterator<UCppGameSaveTransformComponent> savedTransforms; savedTransforms; ++savedTransforms)
		{
			// Skip invalid objects
			if (!IsValid(*savedTransforms) || savedTransforms->GetWorld() != GetWorld() || savedTransforms->GetOwner()->GetLevel() != GetLevel())
			{
				continue;
			}
			// Don't load if object is not from a game world
			AActor* saveOwner = savedTransforms->GetOwner();
			EWorldType::Type ownerWorldType = saveOwner->GetWorld()->WorldType;
			if (!(ownerWorldType == EWorldType::PIE || ownerWorldType == EWorldType::Game)) continue;

			// Associate name with transform information
			FString ownerName = saveOwner->GetName();
			FTransform newSaveTransform;
			savedTransforms->SaveTransfrom(newSaveTransform);

			mySave->SaveTransformsByName.FindOrAdd(saveOwner->GetName(), newSaveTransform);
		}

		// Save to slot where "SINGLEPLAYER" is the name and 0 is the slot index
		//UGameplayStatics::SaveGameToSlot(mySave, TEXT("SINGLEPLAYER"), 0);
		ensure(UGameplayStatics::SaveGameToSlot(mySave, TEXT("SINGLEPLAYER"), 0)); // Test that the save operation was successful
	}

	// Call Super class's EndPlay function
	Super::EndPlay(EndPlayReason);
}

void ACppGameGameMode::ReportScore(int newScore)
{
	// If newScore is greater, update, otherwise, no change
	if (newScore > HighScore)
	{
		HighScore = newScore;
	}
}

UCppGameSaveGame* ACppGameGameMode::LoadGame(const FString& saveName)
{
	// Actual save data
	UCppGameSaveGame* mySave = nullptr;
	// Intermediate save data object as loaded from file
	USaveGame* loadSave = nullptr;

	if (UseJSONSaveGame) { loadSave = LoadGameFromJSONFile(saveName); }
	else { loadSave = UGameplayStatics::LoadGameFromSlot(saveName, 0); }

	mySave = Cast<UCppGameSaveGame>(loadSave);

	// If the save is valid and can be used
	if (IsValid(mySave))
	{
		// Safe to read from properties here

		// Copy saved highscore into our game mode
		HighScore = mySave->HighScore;
		LastPlayerSavedLocation = mySave->LastPlayerLocation;
	}

	return mySave;
}

bool ACppGameGameMode::SaveGame(const FString& saveName)
{
	// Create a copy of the save data
	USaveGame* newSave = UGameplayStatics::CreateSaveGameObject(UCppGameSaveGame::StaticClass());
	// Cast it to our save data type
	UCppGameSaveGame* mySave = Cast<UCppGameSaveGame>(newSave);

	// If the save is valid and can be used
	if (IsValid(mySave))
	{
		// Write the properties we need to share

		// Copy the best highscore into the save data object
		mySave->HighScore = HighScore;
		// Save the last player location
		for (TActorIterator<ACppGameCharacter> player(GetWorld()); player; ++player)
		{
			// Skip invalid players
			if (!IsValid(*player)) return false;
			mySave->LastPlayerLocation = player->GetActorLocation();
			break;
		}

		// Save persistent transforms
		for (TObjectIterator<UCppGameSaveTransformComponent> savedTransforms; savedTransforms; ++savedTransforms)
		{
			// Skip invalid objects
			if (!IsValid(*savedTransforms) || savedTransforms->GetWorld() != GetWorld()) { continue; }
			AActor* saveOwner = savedTransforms->GetOwner();
			ensure(IsValid(saveOwner));

			// Don't load if object is not from a game world
			EWorldType::Type ownerWorldType = saveOwner->GetWorld()->WorldType;
			if (!(ownerWorldType == EWorldType::PIE || ownerWorldType == EWorldType::Game)) { continue; }

			// Associate name with transform information
			FString ownerName = saveOwner->GetName();
			FTransform newSaveTransform;
			savedTransforms->SaveTransfrom(newSaveTransform);

			mySave->SaveTransformsByName.FindOrAdd(saveOwner->GetName(), newSaveTransform);
		}

		if (UseJSONSaveGame) { SaveGameToJSONFile(mySave, saveName); }
		else { UGameplayStatics::SaveGameToSlot(mySave, saveName, 0); }
	}

	return true;
}

// Create a sub directory dedicated to our save data, followed by name and extension
FString ACppGameGameMode::CreateSaveFilePath(const FString& saveName) const
{
	return FPaths::ProjectSavedDir() + "SaveJson/" + saveName + TEXT(".json.sav");
}

bool ACppGameGameMode::SaveGameToJSONFile(UCppGameSaveGame* saveGameObject, const FString saveName)
{
	// Create JSON object
	TSharedPtr<FJsonObject> saveJson = MakeShareable(new FJsonObject());
	// Write JSON properties
	saveJson->SetNumberField(TEXT("Highscore"), saveGameObject->HighScore);
	saveJson->SetStringField(TEXT("LastPlayerLocation"), saveGameObject->LastPlayerLocation.ToString());

	TArray<TSharedPtr<FJsonValue>> jsonTransformValues;
	for (auto& transformPair : saveGameObject->SaveTransformsByName)
	{
		TSharedPtr<FJsonObject> saveTransform = MakeShareable(new FJsonObject());

		saveTransform->SetStringField(TEXT("Name"), transformPair.Key);
		saveTransform->SetStringField(TEXT("Transform"), transformPair.Value.ToString());

		jsonTransformValues.Add(MakeShareable(new FJsonValueObject(saveTransform)));
	}
	saveJson->SetArrayField(TEXT("SaveTransformsByName"), jsonTransformValues);

	// Serialise JSON to string for storage
	FString contents;
	TSharedRef<TJsonWriter<>> saveWriter = TJsonWriterFactory<>::Create(&contents);
	FJsonSerializer::Serialize(saveJson.ToSharedRef(), saveWriter);

	// Write JSON string to file
	const FString saveGamePath = CreateSaveFilePath(saveName);
	bool saveSuccess = FFileHelper::SaveStringToFile(contents, *saveGamePath);

	// Return whether write was successful
	return saveSuccess;
}

USaveGame* ACppGameGameMode::LoadGameFromJSONFile(const FString& saveName)
{
	// Load JSON string from file
	const FString saveGamePath = CreateSaveFilePath(saveName);

	FString contents;
	bool loadSuccess = FFileHelper::LoadFileToString(contents, *saveGamePath);

	// Early exit if failed to load
	if (!loadSuccess) return nullptr;

	// Create SaveGame and JSON object
	UCppGameSaveGame* saveGameInstance = Cast<UCppGameSaveGame>(UGameplayStatics::CreateSaveGameObject(UCppGameSaveGame::StaticClass()));
	TSharedPtr<FJsonObject> saveJson = MakeShareable(new FJsonObject());

	// Parse JSON and write to SaveGame object
	TSharedRef<TJsonReader<>> saveReader = TJsonReaderFactory<>::Create(contents);
	if (FJsonSerializer::Deserialize(saveReader, saveJson) && saveJson.IsValid())
	{
		saveJson->TryGetNumberField(TEXT("Highscore"), saveGameInstance->HighScore);
		FString lastPlayerLocation;
		saveJson->TryGetStringField(TEXT("LastPlayerLocation"), lastPlayerLocation);
		saveGameInstance->LastPlayerLocation.InitFromString(lastPlayerLocation);

		const TArray<TSharedPtr<FJsonValue>>* saveTransforms;
		bool hasSaveTransforms = saveJson->TryGetArrayField(TEXT("SaveTransformsByName"), saveTransforms);
		if (hasSaveTransforms)
		{
			for (auto& transformPair : *saveTransforms)
			{
				TSharedPtr<FJsonObject> saveTransform = transformPair->AsObject();
				FString transformName;
				saveTransform->TryGetStringField(TEXT("Name"), transformName);
				FString transformValue;
				saveTransform->TryGetStringField(TEXT("Transform"), transformValue);
				FTransform transformParsed;
				transformParsed.InitFromString(transformValue);

				saveGameInstance->SaveTransformsByName.Add(transformName, transformParsed);
			}
		}
	}

	return saveGameInstance;
}

FVector ACppGameGameMode::GetLastSavedPlayerLocation() const
{
	return LastPlayerSavedLocation;
}
