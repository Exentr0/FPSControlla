#include "FPCharacter.h"
#include "FPController.h"
#include "EnhancedInputComponent.h"
#include "EnhancedInputSubsystems.h"
#include "StateManagerComponent.h"


// Sets default values
AFPCharacter::AFPCharacter()
{
    //Create StateManager
    StateManager = CreateDefaultSubobject<UStateManagerComponent>(TEXT("StateManager"));

    // Set this character to call Tick() every frame
    PrimaryActorTick.bCanEverTick = true;
}

// Called when the game starts or when spawned
void AFPCharacter::BeginPlay()
{
    Super::BeginPlay();

    StateManager->InitStateManager();
}


// Called every frame
void AFPCharacter::Tick(float DeltaTime)
{
    Super::Tick(DeltaTime);
}

// Called to bind functionality to input
void AFPCharacter::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
    Super::SetupPlayerInputComponent(PlayerInputComponent);

    UEnhancedInputComponent* EIC = Cast<UEnhancedInputComponent>(PlayerInputComponent);
    AFPController* FPC = Cast<AFPController>(GetController());
    check(EIC && FPC);

    // Bind the  action in FPController
    FPC->BindActions(EIC);

    ULocalPlayer* LocalPlayer = FPC->GetLocalPlayer();
    UEnhancedInputLocalPlayerSubsystem* Subsystem = LocalPlayer->GetSubsystem<UEnhancedInputLocalPlayerSubsystem>();
    Subsystem->ClearAllMappings();
    Subsystem->AddMappingContext(FPC->PlayerMappingContext, 0);
}
