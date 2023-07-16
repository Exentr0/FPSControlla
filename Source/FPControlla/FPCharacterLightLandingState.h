// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "FPCharacterLandingState.h"
#include "FPCharacterLightLandingState.generated.h"

UCLASS()
class FPCONTROLLA_API UFPCharacterLightLandingState : public UFPCharacterLandingState
{
	GENERATED_BODY()

protected:	
	virtual void OnStateEnter(AActor* OwnerRef) override;
};
