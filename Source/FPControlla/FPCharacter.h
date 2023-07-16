#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "InputActionValue.h"
#include "FPCharacter.generated.h"

// Forward declaration of UFPCharacterMovementData to avoid circular dependency
class UFPCharacterMovementData;

UCLASS()
class FPCONTROLLA_API AFPCharacter : public ACharacter
{
	GENERATED_BODY()

public:
	// Sets default values for this character's properties
	AFPCharacter();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:
	//Variables
	UPROPERTY(EditAnywhere, BlueprintReadOnly)
		class UStateManagerComponent* StateManager;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Data")
		UFPCharacterMovementData* MovementData;

	//Functions
	virtual void Tick(float DeltaTime) override;

	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;
};