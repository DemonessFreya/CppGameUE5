// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/GameModeBase.h"
#include "CppGameGameMode.generated.h"

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
	
public:
	ACppGameGameMode(); // Set default classes

	// At the start of the level, load our data
	virtual void BeginPlay() override;

	virtual void Tick(float DeltaSeconds) override;

	// At the end of the level, save our data
	virtual void EndPlay(const EEndPlayReason::Type EndPlayReason) override;

	// This public function should be called whenever the player score changes.
	void ReportScore(int newScore);

	// Returns a copy of the player's last saved location
	FVector GetLastSavedPlayerLocation() const;
};
