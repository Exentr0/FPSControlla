// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "FPCharacterAirState.h"
#include "FPCharacterJumpingState.generated.h"

UCLASS()
class FPCONTROLLA_API UFPCharacterJumpingState : public UFPCharacterAirState
{
	GENERATED_BODY()

protected:
	virtual void OnStateEnter(AActor* OwnerRef) override;
	virtual void StateTick() override;
	virtual void OnStateExit() override;

private:
	float initialGravityScale = 0;
	bool reachedJumpApex = false;
};