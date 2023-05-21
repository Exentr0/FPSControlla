#pragma once

#include "CoreMinimal.h"
#include "FPControllerInterface.h"
#include "GameFramework/PlayerController.h"
#include "FPController.generated.h"

class UInputMappingContext;

UCLASS()
class FPCONTROLLA_API AFPController : public APlayerController, public IFPControllerInterface
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = Input)
	class UInputMappingContext* PlayerMappingContext;
	void BindActions(UEnhancedInputComponent* EIC);

	/*Jump*/
	FJumpSignature JumpDelegate;
	void PressJump();

protected:
	virtual FJumpSignature* GetJumpDelegate() override;
};