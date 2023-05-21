// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "FPControllerInterface.generated.h"

// This class does not need to be modified.
DECLARE_MULTICAST_DELEGATE(FJumpSignature);

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
};
