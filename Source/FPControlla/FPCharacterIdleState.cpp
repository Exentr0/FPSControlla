// Fill out your copyright notice in the Description page of Project Settings.


#include "FPCharacterIdleState.h"
#include "FPCharacter.h"
#include "GameFramework/PawnMovementComponent.h"
#include "StateManagerComponent.h"
#include "Kismet/KismetMathLibrary.h"

#pragma region Base State Methods
void UFPCharacterIdleState::StateTick()
{
	Super::StateTick();
	const FVector Velocity = FPCharacterRef->GetMovementComponent()->Velocity;
	if (UKismetMathLibrary::Abs(Velocity.X) > 0.0f || UKismetMathLibrary::Abs(Velocity.Y) > 0.0f)
	{
		FPCharacterRef->StateManager->SwitchStateByKey("Walking");
	}
}
#pragma endregion
 