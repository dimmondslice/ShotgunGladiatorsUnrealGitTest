// Fill out your copyright notice in the Description page of Project Settings.

#include "Shotgun_Prototype.h"
#include "WalkingState.h"
#include "JumpCrouchState.h"
#include "DodgeState.h"


void UWalkingState::TickState(float DeltaTime)
{   
}

void UWalkingState::ProcessInput(float DeltaTime)
{
	Super::ProcessInput(DeltaTime);
	
	float xSpeed = Owner->MoveForwardAxis * 30.0f;
	float ySpeed = Owner->MoveRightAxis * 30.0f;
	UE_LOG(LogTemp, Warning, TEXT("xSpeed: %f"), xSpeed);
	MoveDirection(xSpeed, ySpeed);

	if (Owner->bJumpAction)
	{
		ChangeLowerState(Owner->JumpCrouch);
	}
	if (Owner->bDodgeAction)
	{
		UE_LOG(LogTemp, Warning, TEXT("pressed dodge"));
		ChangeLowerState(Owner->Dodge);
	}
}
