// Copyright jB 2024/2025

#pragma once

#include "CoreMinimal.h"
#include "InputMappingContext.h"
#include "GameFramework/PlayerController.h"
#include "ShifterPlayerController.generated.h"

class UInputMappingContext;
class UInputComponent;
struct FInputActionValue;

class IEnemyInterface;

UCLASS()
class WORLDSHIFTER_API AShifterPlayerController : public APlayerController
{
	GENERATED_BODY()

public:
	AShifterPlayerController();
	virtual void PlayerTick(float DeltaTime) override;

private:
	UPROPERTY(EditAnywhere, Category = "Input")
	TObjectPtr<UInputMappingContext> ShifterContext;

	UPROPERTY(EditAnywhere, Category = "Input")
	TObjectPtr<UInputAction> MoveAction;
	
	void Move(const FInputActionValue& InputActionValue);

	//CursorTrace
	void CursorTrace();
	TScriptInterface<IEnemyInterface> LastActor;
	TScriptInterface<IEnemyInterface> ThisActor;

protected:
	virtual void BeginPlay() override;
	virtual void SetupInputComponent() override;
};
