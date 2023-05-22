// Fill out your copyright notice in the Description page of Project Settings.


#include "FPCharacterGroundedState.h"
#include "StateManagerComponent.h"

void UFPCharacterGroundedState::Jump()
{
	FPCharacterRef->Jump();
	FPCharacterRef->StateManager->SwitchStateByKey("Jumping");
}

#pragma region BaseState Methodes
void UFPCharacterGroundedState::OnStateEnter(AActor* OwnerRef)
{
	Super::OnStateEnter(OwnerRef);

	//Bind Actions
	if (FPController)
	{
		FPController->GetJumpDelegate()->AddUObject(this, &UFPCharacterGroundedState::Jump);
	}
}

void UFPCharacterGroundedState::StateTick()
{
	Super::StateTick();
}

void UFPCharacterGroundedState::OnStateExit()
{
	Super::OnStateExit();
	FPController->GetJumpDelegate()->RemoveAll(this);
}
#pragma endregion