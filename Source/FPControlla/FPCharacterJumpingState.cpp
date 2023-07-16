#include "FPCharacterJumpingState.h"
#include "FPCharacter.h"
#include "GameFramework/CharacterMovementComponent.h"
#include "StateManagerComponent.h"
#include "FPCharacterMovementData.h"

#pragma region BaseState Methods


void UFPCharacterJumpingState::OnStateEnter(AActor* OwnerRef)
{
    Super::OnStateEnter(OwnerRef);

    if (initialGravityScale == 0)
    {
        initialGravityScale = FPCharacterRef->GetCharacterMovement()->GravityScale;
    }
}

void UFPCharacterJumpingState::StateTick()
{
    Super::StateTick();

    if (FPCharacterRef->GetMovementComponent()->Velocity.Z <= 0 && reachedJumpApex == false)
    {
        reachedJumpApex = true;
        FPCharacterRef->GetCharacterMovement()->GravityScale *= FPCharacterRef->MovementData->GravityScaleMultiplier;
    }
}

void UFPCharacterJumpingState::OnStateExit()
{
    Super::OnStateExit();

    if (reachedJumpApex && FPCharacterRef->GetMovementComponent()->IsMovingOnGround())
    {
        FPCharacterRef->GetCharacterMovement()->GravityScale = initialGravityScale;
        reachedJumpApex = false;
    }
}
#pragma endregion
