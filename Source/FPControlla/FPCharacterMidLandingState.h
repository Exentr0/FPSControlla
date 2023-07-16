#pragma once

#include "CoreMinimal.h"
#include "FPCharacterLandingState.h"
#include "FPCharacterMidLandingState.generated.h"

UCLASS()
class FPCONTROLLA_API UFPCharacterMidLandingState : public UFPCharacterLandingState
{
	GENERATED_BODY()
	
protected:
	virtual void OnStateEnter(AActor* OwnerRef) override;
};
