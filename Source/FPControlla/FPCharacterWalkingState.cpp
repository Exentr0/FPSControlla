#include "FPCharacterWalkingState.h"
#include "FPCharacter.h"
#include "FPCharacterMovementData.h"
#include "StateManagerComponent.h"

void UFPCharacterWalkingState::OnStateEnter(AActor* OwnerRef)
{
	Super::OnStateEnter(OwnerRef);
	MoveSpeed = FPCharacterRef->MovementData->WalkingMoveSpeed;
}

void UFPCharacterWalkingState::StateTick()
{
	Super::StateTick();
}
