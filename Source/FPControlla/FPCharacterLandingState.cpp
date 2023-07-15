#include "FPCharacter.h"
#include "GameFramework/PawnMovementComponent.h"
#include "StateManagerComponent.h"
#include "FPCharacterLandingState.h"

void UFPCharacterLandingState::LandingFinished()
{
	if (FPCharacterRef->GetMovementComponent()->Velocity == FVector::ZeroVector)
	{
		FPCharacterRef->StateManager->SwitchStateByKey("Idle");
	}
	else
	{
		FPCharacterRef->StateManager->SwitchStateByKey("Walking");
	}
}
#pragma region BaseStateMethods

void UFPCharacterLandingState::OnStateEnter(AActor* OwnerRef)
{
	Super::OnStateEnter(OwnerRef);
	GetWorld()->GetTimerManager().SetTimer(FuzeTimerHandle, this, &UFPCharacterLandingState::LandingFinished, LandingDuration, false);
}

void UFPCharacterLandingState::StateTick()
{
	Super::StateTick();
}

void UFPCharacterLandingState::OnStateExit()
{
	Super::OnStateExit();
	FPCharacterRef->CanJump = true;
}
#pragma endregion