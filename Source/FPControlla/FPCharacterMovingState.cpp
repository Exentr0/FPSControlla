// Fill out your copyright notice in the Description page of Project Settings.


#include "FPCharacterMovingState.h"
#include "FPCharacter.h"
#include "GameFramework/PawnMovementComponent.h"
#include "StateManagerComponent.h"

void UFPCharacterMovingState::StateTick()
{
	Super::StateTick();
	if (FPCharacterRef->GetMovementComponent()->Velocity == FVector::ZeroVector)
	{
		FPCharacterRef->StateManager->SwitchStateByKey("Idle");
	}
}

