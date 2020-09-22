// Fill out your copyright notice in the Description page of Project Settings.


// ReSharper disable CppMemberFunctionMayBeConst
#include "Paddle_Player_Controller.h"


#include "Kismet/GameplayStatics.h"
#include "Camera/CameraActor.h"

#include "Paddle.h"
#include "Ball.h"


APaddle_Player_Controller::APaddle_Player_Controller()
{

}

void APaddle_Player_Controller::BeginPlay()
{
	TArray<AActor*> CameraActors;
	UGameplayStatics::GetAllActorsOfClass(GetWorld(), ACameraActor::StaticClass(), CameraActors);

	const FViewTargetTransitionParams Params;
	SetViewTarget(CameraActors[0], Params);

	Paddle = Cast<APaddle>(UGameplayStatics::GetActorOfClass(GetWorld(), APaddle::StaticClass()));

	if (!MyBall) { SpawnNewBall(); }
}

void APaddle_Player_Controller::SetupInputComponent()
{
	Super::SetupInputComponent();

	EnableInput(this);

	// Input Bindings:
	InputComponent->BindAxis("MoveHorizontal", this, &APaddle_Player_Controller::MoveHorizontal);
	InputComponent->BindAction("Launch", IE_Pressed, this, &APaddle_Player_Controller::Launch);
}

void APaddle_Player_Controller::MoveHorizontal(float AxisValue)
{
	Paddle->MoveHorizontal(AxisValue);
}

void APaddle_Player_Controller::Launch()
{
	if (!MyBall)
	{
		SpawnNewBall();
		return;
	}
	MyBall->Launch();
}

void APaddle_Player_Controller::SpawnNewBall()
{
	if (!MyBall)
	{
		MyBall = nullptr;
	}

	if (BallObj)
	{ 
		MyBall = GetWorld()->SpawnActor<ABall>(BallObj, SpawnLocation, SpawnRotation, SpawnInfo);
	}
}

void APaddle_Player_Controller::BallDestroyed()
{
	MyBall = nullptr;
}
