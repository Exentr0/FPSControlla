#pragma once

#include "CoreMinimal.h"
#include "FPControllerInterface.h"
#include "GameFramework/PlayerController.h"
#include "InputActionValue.h"
#include "FPController.generated.h"

class UInputMappingContext;
class InputAction;

UCLASS()
class FPCONTROLLA_API AFPController : public APlayerController, public IFPControllerInterface
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = Input)
		class UInputMappingContext* PlayerMappingContext;
	void BindActions(UEnhancedInputComponent* EIC);

	/*Jump*/
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = Input)
		class UInputAction* JumpAction;
	FJumpSignature JumpDelegate;
	void PressJump();

protected:
	virtual FJumpSignature* GetJumpDelegate() override;
};
