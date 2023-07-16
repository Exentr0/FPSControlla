#include "FPCharacterMidLandingState.h"
#include "FPCharacter.h"
#include "FPCharacterMovementData.h"

void UFPCharacterMidLandingState::OnStateEnter(AActor* OwnerRef)
{
	Super::OnStateEnter(OwnerRef);
	LandingDuration = FPCharacterRef->MovementData->MidLandingDuration;
}
