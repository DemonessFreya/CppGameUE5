// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "CppGameSaveTransformComponent.generated.h"


UCLASS( ClassGroup=(Custom), meta=(BlueprintSpawnableComponent) )
class CPPGAME_API UCppGameSaveTransformComponent : public UActorComponent
{
	GENERATED_BODY()

public:	
	// Sets default values for this component's properties
	UCppGameSaveTransformComponent();

	bool SaveTransfrom(FTransform& saveTransform);
	void LoadTransform(const FTransform& loadTransform);

protected:
	// Called when the game starts
	virtual void BeginPlay() override;
		
};
