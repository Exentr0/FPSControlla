// Fill out your copyright notice in the Description page of Project Settings.


#include "FPCharacterGroundedState.h"
#include "StateManagerComponent.h"
#include "GameFramework/CharacterMovementComponent.h"

void UFPCharacterGroundedState::Jump()
{
	if (FPCharacterRef->CanJump)
	{
		FPCharacterRef->CanJump = false;
		FPCharacterRef->Jump();
	}
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
	if(!FPCharacterRef->GetMovementComponent()->IsMovingOnGround())
	{
		FPCharacterRef->StateManager->SwitchStateByKey("Jumping");
	}
}

void UFPCharacterGroundedState::OnStateExit()
{
	Super::OnStateExit();
	FPController->GetJumpDelegate()->RemoveAll(this);
}
#pragma endregion