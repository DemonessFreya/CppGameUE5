// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/GameModeBase.h"
#include "CppGameGameMode.generated.h"

class UCppGameSaveGame;
class USaveGame;

/**
 * 
 */
UCLASS()
class CPPGAME_API ACppGameGameMode : public AGameModeBase
{
	GENERATED_BODY()

	float TimeElapsed = 0.0f;

	// Used to store the running high score of the player
	int HighScore = 0;

	// Store the last player location for saving/loading
	FVector LastPlayerSavedLocation = FVector::ZeroVector;

protected:
	UPROPERTY(EditDefaultsOnly)
	bool UseJSONSaveGame = true;
	
public:
	ACppGameGameMode(); // Set default classes

	// At the start of the level, load our data
	virtual void BeginPlay() override;

	virtual void Tick(float DeltaSeconds) override;

	// At the end of the level, save our data
	virtual void EndPlay(const EEndPlayReason::Type EndPlayReason) override;

	// This public function should be called whenever the player score changes.
	void ReportScore(int newScore);

	// Function to load game using either native UE SaveGame system or our JSON system
	UCppGameSaveGame* LoadGame(const FString& saveName);

	// Function to save game using either native UE SaveGame system or our JSON system
	bool SaveGame(const FString& saveName);

	// Create a sub directory dedicated to our save data, followed by name and extension
	FString CreateSaveFilePath(const FString& saveName) const;

	// Create FJson object and save it to JSON file
	bool SaveGameToJSONFile(UCppGameSaveGame* saveGameObject, const FString saveName);

	USaveGame* LoadGameFromJSONFile(const FString& saveName);

	// Returns a copy of the player's last saved location
	FVector GetLastSavedPlayerLocation() const;
};
