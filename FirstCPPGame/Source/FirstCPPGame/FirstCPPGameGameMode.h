// Copyright Epic Games, Inc. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/GameModeBase.h"
#include "FirstCPPGameGameMode.generated.h"

UCLASS(minimalapi)
class AFirstCPPGameGameMode : public AGameModeBase
{
	GENERATED_BODY()

public:
	AFirstCPPGameGameMode();

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



