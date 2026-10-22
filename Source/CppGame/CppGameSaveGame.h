// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/SaveGame.h"
#include "CppGameSaveGame.generated.h"

/**
 * 
 */
UCLASS()
class CPPGAME_API UCppGameSaveGame : public USaveGame
{
	GENERATED_BODY()

public:
	UPROPERTY()
	int HighScore = 0;

	UPROPERTY()
	FVector LastPlayerLocation = FVector::ZeroVector;

	// Map of transforms
	// Key: Name of the actor
	// Value: Transform of the actor at the time of saving
	UPROPERTY()
	TMap<FString, FTransform> SaveTransformsByName;
};
