// Fill out your copyright notice in the Description page of Project Settings.


#include "FPCharacterMovementState.h"
#include "InputActionValue.h"
#include "Kismet/GameplayStatics.h"
#include "Kismet/KismetMathLibrary.h"
#include "FPCharacterMovementData.h"
#include "FPCharacter.h"


void UFPCharacterMovementState::Look(const FInputActionValue& Value)
{
	const FVector2D LookAxisVector = Value.Get<FVector2D>();
	if (LookAxisVector != FVector2D::ZeroVector)
	{
		FPCharacterRef->AddControllerPitchInput(LookAxisVector.X * FPCharacterRef->MovementData->LookSensitivity * GetWorld()->GetDeltaSeconds());
		FPCharacterRef->AddControllerYawInput(LookAxisVector.Y * FPCharacterRef->MovementData->LookSensitivity * GetWorld()->GetDeltaSeconds());
	}
}

void UFPCharacterMovementState::Move(const FInputActionValue& Value)
{
	FVector2D MoveInputVector = Value.Get<FVector2D>();

	if (MoveInputVector != FVector2D::ZeroVector)
	{
		FPCharacterRef->AddMovementInput(FPCharacterRef->GetActorForwardVector(), MoveInputVector.Y * MoveSpeed * GetWorld()->GetDeltaSeconds());
		FPCharacterRef->AddMovementInput(FPCharacterRef->GetActorRightVector(), MoveInputVector.X * MoveSpeed * GetWorld()->GetDeltaSeconds());
	}
}

#pragma region BaseState Methodes
void UFPCharacterMovementState::OnStateEnter(AActor* OwnerRef)
{
	Super::OnStateEnter(OwnerRef);

	if (FPController)
	{
		FPController->GetLookDelegate()->AddUObject(this, &UFPCharacterMovementState::Look);
		FPController->GetMoveDelegate()->AddUObject(this, &UFPCharacterMovementState::Move);
	}
}

void UFPCharacterMovementState::StateTick()
{
	Super::StateTick();
}

void UFPCharacterMovementState::OnStateExit()
{
	Super::OnStateExit();

	if (FPController)
	{
		FPController->GetLookDelegate()->RemoveAll(this);
		FPController->GetMoveDelegate()->RemoveAll(this);
	}
}
#pragma endregion