// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "InputActionValue.h"
#include "FPControllerInterface.generated.h"

// This class does not need to be modified.
DECLARE_MULTICAST_DELEGATE(FJumpSignature);
DECLARE_MULTICAST_DELEGATE_OneParam(FLookSignature, const FInputActionValue&);
DECLARE_MULTICAST_DELEGATE_OneParam(FMoveSignature, const FInputActionValue&);

UINTERFACE(MinimalAPI)
class UFPControllerInterface : public UInterface
{
	GENERATED_BODY()
};

/**
 *
 */
class FPCONTROLLA_API IFPControllerInterface
{
	GENERATED_BODY()

		// Add interface functions to this class. This is the class that will be inherited to implement this interface.
public:
	virtual FJumpSignature* GetJumpDelegate() = 0;
	virtual FLookSignature* GetLookDelegate() = 0;
	virtual FMoveSignature* GetMoveDelegate() = 0;
};
