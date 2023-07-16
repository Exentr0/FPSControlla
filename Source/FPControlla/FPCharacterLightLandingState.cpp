#include "FPCharacterLightLandingState.h"
#include "FPCharacterLandingState.h"
#include "FPCharacter.h"
#include "FPCharacterMovementData.h"


void UFPCharacterLightLandingState::OnStateEnter(AActor* OwnerRef)
{
	Super::OnStateEnter(OwnerRef);
	LandingDuration = FPCharacterRef->MovementData->LightLandingDuration;
}
