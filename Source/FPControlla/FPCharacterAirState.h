// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "FPCharacterMovementState.h"
#include "FPCharacterAirState.generated.h"

/**
 * 
 */
UCLASS()
class FPCONTROLLA_API UFPCharacterAirState : public UFPCharacterMovementState
{
	GENERATED_BODY()
	
protected:
	virtual void OnStateEnter(AActor* OwnerRef) override;
	virtual void StateTick() override;
	virtual void OnStateExit() override;
};
