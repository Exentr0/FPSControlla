// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "FPCharacterMovementData.generated.h"

UCLASS()
class FPCONTROLLA_API UFPCharacterMovementData : public UDataAsset
{
	GENERATED_BODY()
public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Look", meta = (ClampMin = "0.01", UIMin = "0.01"))
		float LookSensitivity = 5.0f;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Move")
		float WalkingMoveSpeed = 60.0f;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Jumping")
		float GravityScaleMultiplier = 2.0f;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Jumping")
		float LandStateVelocityThreshold = -20.0f;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Move")
		float LightLandingDuration = 0.15f;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Move")
		float MidLandingDuration = 0.3f;
	bool CanJump = true;
};