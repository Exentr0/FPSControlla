// Fill out your copyright notice in the Description page of Project Settings.


#include "FPCharacterMovementState.h"

#pragma region BaseState Methodes
void UFPCharacterMovementState::OnStateEnter(AActor* OwnerRef)
{
	Super::OnStateEnter(OwnerRef);
}

void UFPCharacterMovementState::StateTick()
{
	Super::StateTick();
}

void UFPCharacterMovementState::OnStateExit()
{
	Super::OnStateExit();
}
#pragma endregion

