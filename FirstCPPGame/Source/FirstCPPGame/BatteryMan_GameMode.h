// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/GameMode.h"
#include "BatteryMan_GameMode.generated.h"

/**
 * 
 */
UCLASS()
class FIRSTCPPGAME_API ABatteryMan_GameMode : public AGameMode
{
	GENERATED_BODY()

public:
	ABatteryMan_GameMode();

	virtual void BeginPlay() override;
	virtual void Tick(float DeltaTime) override;

	UPROPERTY(EditAnywhere, Category = "Player Recharge Pickup")
		TSubclassOf<APawn> PlayerRechargePickup;

	float Spawn_Z = 500.0f;

	UPROPERTY(EditAnywhere, Category = "Player Recharge Pickup")
		float Spawn_X_Min;

	UPROPERTY(EditAnywhere, Category = "Player Recharge Pickup")
		float Spawn_X_Max;

	UPROPERTY(EditAnywhere, Category = "Player Recharge Pickup")
		float Spawn_Y_Min;

	UPROPERTY(EditAnywhere, Category = "Player Recharge Pickup")
		float Spawn_Y_Max;

	UPROPERTY(EditAnywhere, Category = "Player Recharge Pickup")
		float Spawn_Time_Min;

	UPROPERTY(EditAnywhere, Category = "Player Recharge Pickup")
		float Spawn_Time_Max;

	void SpawnPlayerRechargePickup();


};
