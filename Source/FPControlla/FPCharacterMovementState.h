// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "FPCharacterBaseState.h"
#include "InputActionValue.h"
#include "Kismet/GameplayStatics.h"
#include "FPCharacterMovementState.generated.h"

/**
 * 
 */
UCLASS()
class FPCONTROLLA_API UFPCharacterMovementState : public UFPCharacterBaseState
{
	GENERATED_BODY()

public:
	float MoveSpeed = 60.0f;
protected:
	virtual void OnStateEnter(AActor* OwnerRef) override;
	virtual void StateTick() override;
	virtual void OnStateExit() override;

private:
	void Look(const FInputActionValue& Value);
	void Move(const FInputActionValue& Value);
};
