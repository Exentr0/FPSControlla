#include "FPController.h"
#include "EnhancedInputComponent.h"
#include "EnhancedInputSubsystems.h"
#include "InputActionValue.h"
#include "InputMappingContext.h"

void AFPController::LookInput(const FInputActionValue& Value)
{
	if (LookDelegate.IsBound())
	{
		LookDelegate.Broadcast(Value);
	}
}

void AFPController::MoveInput(const FInputActionValue& Value)
{
	if (MoveDelegate.IsBound())
	{
		MoveDelegate.Broadcast(Value);
	}
}

void AFPController::PressJump()
{
	if (JumpDelegate.IsBound())
	{
		JumpDelegate.Broadcast();
	}
}

FJumpSignature* AFPController::GetJumpDelegate()
{
	return &JumpDelegate;
}

FLookSignature* AFPController::GetLookDelegate()
{
	return &LookDelegate;
}

FMoveSignature* AFPController::GetMoveDelegate()
{
	return &MoveDelegate;
}

void AFPController::BindActions(UEnhancedInputComponent* EIC)
{
	EIC->BindAction(JumpAction, ETriggerEvent::Triggered, this, &AFPController::PressJump);
	EIC->BindAction(LookAction, ETriggerEvent::Triggered, this, &AFPController::LookInput);
	EIC->BindAction(MoveAction, ETriggerEvent::Triggered, this, &AFPController::MoveInput);
}