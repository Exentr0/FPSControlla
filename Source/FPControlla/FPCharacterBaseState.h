// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "BaseState.h"
#include "FPCharacter.h"
#include "FPControllerInterface.h"
#include "FPCharacterBaseState.generated.h"

/**
 * 
 */
UCLASS()
class FPCONTROLLA_API UFPCharacterBaseState : public UBaseState
{
	GENERATED_BODY()

protected:
	UPROPERTY(EditAnywhere, BlueprintReadOnly)
	AFPCharacter* FPCharacterRef = nullptr;
	IFPControllerInterface* FPController = nullptr;

	virtual void OnStateEnter(AActor* StateOwner) override;
};
