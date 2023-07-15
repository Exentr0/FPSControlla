// Fill out your copyright notice in the Description page of Project Settings.


#include "FPCharacterAirState.h"
#include "StateManagerComponent.h"
#include "FPCharacter.h"
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
        FVector characterVelocity = FPCharacterRef->GetCharacterMovement()->Velocity;
        float verticalVelocity = characterVelocity.Z;

        if (verticalVelocity < -20.0f)
        {
            FPCharacterRef->StateManager->SwitchStateByKey("MidLanding");
        }
        else
        {
            FPCharacterRef->StateManager->SwitchStateByKey("LightLanding");
        }
	}
}

void UFPCharacterAirState::OnStateExit()
{
	Super::OnStateExit();
}
#pragma endregion
