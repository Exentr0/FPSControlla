// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "FPCharacterGroundedState.h"
#include "FPCharacterLandingState.generated.h"

UCLASS()
class FPCONTROLLA_API UFPCharacterLandingState : public UFPCharacterGroundedState
{
	GENERATED_BODY()
	
public:
	float LandingDuration = 0.3f;

protected:
	virtual void OnStateEnter(AActor* OwnerRef) override;
	virtual void StateTick() override;
	virtual void OnStateExit() override;

private:
	FTimerHandle FuzeTimerHandle;
	void LandingFinished();
};