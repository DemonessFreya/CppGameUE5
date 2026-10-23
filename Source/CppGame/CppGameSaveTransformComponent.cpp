// Fill out your copyright notice in the Description page of Project Settings.


#include "CppGameSaveTransformComponent.h"

// Sets default values for this component's properties
UCppGameSaveTransformComponent::UCppGameSaveTransformComponent()
{
	// Since it is a component that is owned by an actor, it does not need to tick every frame. Therefore, we can disable ticking for this component.
	PrimaryComponentTick.bCanEverTick = false;

	// ...
}


bool UCppGameSaveTransformComponent::SaveTransfrom(FTransform& saveTransform)
{
	AActor* owner = GetOwner();
	saveTransform = owner->GetActorTransform();

	return true;
}

void UCppGameSaveTransformComponent::LoadTransform(const FTransform& loadTransform)
{
	AActor* owner = GetOwner();
	owner->SetActorTransform(loadTransform);
}

// Called when the game starts
void UCppGameSaveTransformComponent::BeginPlay()
{
	Super::BeginPlay();

	// ...
	
}
