// Fill out your copyright notice in the Description page of Project Settings.


#include "FPCharacterBaseState.h"
#include "FPControllerInterface.h"
#include "Kismet/GameplayStatics.h"

void UFPCharacterBaseState::OnStateEnter(AActor* StateOwner)
{
	Super::OnStateEnter(StateOwner);
	
	//Save FPCharacter for later
	if (!FPCharacter)
	{
		FPCharacter = Cast<AFPCharacter>(StateOwner);
	}

	/*Save Player Controller*/
	if (!FPController)
	{
		FPController = Cast<IFPControllerInterface>(UGameplayStatics::GetPlayerController(this, 0));
	}
}
