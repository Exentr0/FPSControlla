// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "FPCharacterMovingState.h"
#include "FPCharacterWalkingState.generated.h"


UCLASS()
class FPCONTROLLA_API UFPCharacterWalkingState : public UFPCharacterMovingState
{
	GENERATED_BODY()
	
protected:
	virtual void StateTick() override;
	virtual void OnStateEnter(AActor* OwnerRef) override;
};
