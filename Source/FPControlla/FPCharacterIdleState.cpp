// Fill out your copyright notice in the Description page of Project Settings.


#include "FPCharacterIdleState.h"
#include "FPCharacter.h"
#include "GameFramework/PawnMovementComponent.h"
#include "StateManagerComponent.h"

#pragma region Base State Methods

void UFPCharacterIdleState::StateTick()
{
	Super::StateTick();
	if (FPCharacterRef->GetMovementComponent()->Velocity != FVector::ZeroVector)
	{
		FPCharacterRef->StateManager->SwitchStateByKey("Walking");
	}
}
#pragma endregion
