// Fill out your copyright notice in the Description page of Project Settings.

#include "Shotgun_Prototype.h"
#include "LowerShieldState.h"
#include "IdleState.h"

void ULowerShieldState::OnBeginState()
{
	DestroyShieldEvent.Broadcast();
}
void ULowerShieldState::TickState(float DeltaTime)
{
	if (TimeSinceStateStarted >= 11 * FPS60ToSeconds)
	{
		DestroyShieldEvent.Broadcast();
		ChangeUpperState(Owner->Idle);
	}
	//GetWorld()->SpawnActor()

	TimeSinceStateStarted += DeltaTime;
}
