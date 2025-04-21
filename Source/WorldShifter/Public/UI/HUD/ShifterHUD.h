// Copyright jB 2024/2025

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/HUD.h"
#include "ShfiterHUD.generated.h"

class UShifterUserWidget;
/**
 * 
 */
UCLASS()
class WORLDSHIFTER_API AShifterHUD : public AHUD
{
	GENERATED_BODY()

public:

	UPROPERTY()
	TObjectPtr<UShifterUserWidget> OverLayWidget;

	protected:

	virtual void BeginPlay() override;

private:

	UPROPERTY(EditAnywhere)
	TSubclassOf<UShifterUserWidget> OverLayWidgetClass;
	
	
};
