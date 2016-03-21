// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "LowerBodyState.h"
#include "JumpCrouchState.generated.h"

/**
 * 
 */
UCLASS()
class SHOTGUN_PROTOTYPE_API UJumpCrouchState : public ULowerBodyState
{
	GENERATED_BODY()
	
	virtual void TickState(float DeltaTime) override;
	virtual void ProcessInput() override;
	virtual void OnBeginState() override;
	
	
};
