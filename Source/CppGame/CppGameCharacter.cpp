// Fill out your copyright notice in the Description page of Project Settings.


#include "CppGameCharacter.h"
#include "CppGameGameMode.h"
#include "EnhancedInputComponent.h" // For enhanced input binding

// Sets default values
ACppGameCharacter::ACppGameCharacter()
{
 	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void ACppGameCharacter::BeginPlay()
{
	Super::BeginPlay();
	
	ACppGameGameMode* gameMode = GetWorld()->GetAuthGameMode<ACppGameGameMode>();
	if (IsValid(gameMode))
	{
		bool isDefaultLocation = gameMode->GetLastSavedPlayerLocation() == FVector::ZeroVector;
		if (!isDefaultLocation)
		{
			TeleportTo(gameMode->GetLastSavedPlayerLocation(), GetActorRotation());
		}
	}
}

// Called every frame
void ACppGameCharacter::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

// Called to bind functionality to input
void ACppGameCharacter::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

	UEnhancedInputComponent* enhancedInputComponent = Cast<UEnhancedInputComponent>(PlayerInputComponent);
	if (IsValid(enhancedInputComponent))
	{
		// Bind the Jump action to the JumpAction input action
		enhancedInputComponent->BindAction(JumpAction, ETriggerEvent::Started, this, &ACppGameCharacter::Jump);
		enhancedInputComponent->BindAction(JumpAction, ETriggerEvent::Completed, this, &ACppGameCharacter::StopJumping);
	}
	else
	{
		UE_LOG(LogTemp, Error, TEXT("EnhancedInputComponent is missing!"));
	}
}

// Function to add points to player
void ACppGameCharacter::AddPoints(int PointsToAdd)
{
	PlayerPoints += PointsToAdd;
	UE_LOG(LogTemp, Log, TEXT("Player points: %d"), PlayerPoints);

	if (UWorld* World = GetWorld())
	{
		ACppGameGameMode* GameMode = Cast<ACppGameGameMode>(World->GetAuthGameMode());

		if (IsValid(GameMode))
		{
			GameMode->ReportScore(PlayerPoints);
		}
	}
}
