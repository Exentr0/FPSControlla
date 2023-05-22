// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "FPCharacterGroundedState.h"
#include "FPCharacterIdleState.generated.h"

/**
 * 
 */
UCLASS()
class FPCONTROLLA_API UFPCharacterIdleState : public UFPCharacterGroundedState
{
	GENERATED_BODY()
	
protected:
	virtual void StateTick() override;
};
