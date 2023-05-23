// Fill out your copyright notice in the Description page of Project Settings.


#include "FPCharacterAirState.h"
#include "StateManagerComponent.h"
#include "GameFramework/CharacterMovementComponent.h"

#pragma region BaseState Methodes
void UFPCharacterAirState::OnStateEnter(AActor* OwnerRef)
{
	Super::OnStateEnter(OwnerRef);
}

void UFPCharacterAirState::StateTick()
{
	Super::StateTick();
	if (FPCharacterRef->GetMovementComponent()->IsMovingOnGround())
	{
		FPCharacterRef->StateManager->SwitchStateByKey("Idle");
	}
}

void UFPCharacterAirState::OnStateExit()
{
	Super::OnStateExit();
}
#pragma endregion
