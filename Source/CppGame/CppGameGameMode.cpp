// Fill out your copyright notice in the Description page of Project Settings.


#include "CppGameGameMode.h"

#include "Kismet/GameplayStatics.h" // For save/load functions
#include "CppGameSaveGame.h" // for our save game type
#include "EngineUtils.h" // For TActorIterator
#include "CppGameCharacter.h" // For player character
#include "CppGameSaveTransformComponent.h" // For saving/loading transforms

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

	if (!mySave->SaveTransformsByName.IsEmpty())
	{
		for (TObjectIterator<UCppGameSaveTransformComponent> savedTransforms; savedTransforms; ++savedTransforms)
		{
			// Don't load if object is not from a game/PIE world
			if (!IsValid(*savedTransforms) || savedTransforms->GetWorld() != GetWorld() || savedTransforms->GetOwner()->GetLevel() != GetLevel())
			{
				continue;
			}
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
		UGameplayStatics::SaveGameToSlot(mySave, TEXT("SINGLEPLAYER"), 0);
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

FVector ACppGameGameMode::GetLastSavedPlayerLocation() const
{
	return LastPlayerSavedLocation;
}
