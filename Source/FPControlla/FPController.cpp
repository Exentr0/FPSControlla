#include "FPController.h"
#include "EnhancedInputComponent.h"
#include "EnhancedInputSubsystems.h"
#include "InputMappingContext.h"

/*Jump*/
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

/*Bind Actions*/
void AFPController::BindActions(UEnhancedInputComponent* EIC)
{
    EIC->BindAction(JumpAction, ETriggerEvent::Triggered, this, &AFPController::PressJump);
}