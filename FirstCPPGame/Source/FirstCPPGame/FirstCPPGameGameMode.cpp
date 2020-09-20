// Copyright Epic Games, Inc. All Rights Reserved.

#include "FirstCPPGameGameMode.h"
#include "FirstCPPGameCharacter.h"
#include "UObject/ConstructorHelpers.h"

#include "BatteryMan_GameMode.h"
#include "GameFramework/Actor.h"

AFirstCPPGameGameMode::AFirstCPPGameGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPersonCPP/Blueprints/ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}


	PrimaryActorTick.bCanEverTick = true;
}

void AFirstCPPGameGameMode::BeginPlay()
{
	Super::BeginPlay();

	FTimerHandle UnusedHandle;
	GetWorldTimerManager().SetTimer(
		UnusedHandle, this, &AFirstCPPGameGameMode::SpawnPlayerRechargePickup,
		FMath::RandRange(Spawn_Time_Min, Spawn_Time_Max), false);
}

void AFirstCPPGameGameMode::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
}

void AFirstCPPGameGameMode::SpawnPlayerRechargePickup()
{
	float RandX = FMath::RandRange(Spawn_X_Min, Spawn_X_Max);
	float RandY = FMath::RandRange(Spawn_Y_Min, Spawn_Y_Max);

	FVector SpawnPosition = FVector(RandX, RandY, Spawn_Z);
	FRotator SpawnRotation = FRotator(0.0f, 0.0f, 0.0f);

	GetWorld()->SpawnActor(PlayerRechargePickup, &SpawnPosition, &SpawnRotation);
}
