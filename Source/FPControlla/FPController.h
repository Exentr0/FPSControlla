#pragma once

#include "CoreMinimal.h"
#include "FPControllerInterface.h"
#include "GameFramework/PlayerController.h"
#include "InputActionValue.h"
#include "FPController.generated.h"

class UInputMappingContext;
class UInputAction;

UCLASS()
class FPCONTROLLA_API AFPController : public APlayerController, public IFPControllerInterface
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = Input)
		UInputMappingContext* PlayerMappingContext;
	void BindActions(UEnhancedInputComponent* EIC);

	/* Look */
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = Input)
		UInputAction* LookAction;
	FLookSignature LookDelegate;
	void LookInput(const FInputActionValue& Value);

	/*Move*/
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = Input)
		UInputAction* MoveAction;
	FMoveSignature MoveDelegate;
	void MoveInput(const FInputActionValue& Value);

	/* Jump */
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = Input)
		UInputAction* JumpAction;
	FJumpSignature JumpDelegate;
	void PressJump();

protected:
	virtual FJumpSignature* GetJumpDelegate() override;
	virtual FMoveSignature* GetLookDelegate() override;
	virtual FLookSignature* GetMoveDelegate() override;

};