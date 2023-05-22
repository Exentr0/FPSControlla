// Fill out your copyright notice in the Description page of Project Settings.


#include "FPCharacterJumpingState.h"
#include "StateManagerComponent.h"
#include "GameFramework/CharacterMovementComponent.h"

#pragma region BaseState Methodes
void UFPCharacterJumpingState::OnStateEnter(AActor* OwnerRef)
{
	Super::OnStateEnter(OwnerRef);
}

void UFPCharacterJumpingState::StateTick()
{
	Super::StateTick();
	if (FPCharacterRef->GetMovementComponent()->IsMovingOnGround())
	{
		FPCharacterRef->StateManager->SwitchStateByKey("Idle");
	}
}

void UFPCharacterJumpingState::OnStateExit()
{
	Super::OnStateExit();
}
#pragma endregion

