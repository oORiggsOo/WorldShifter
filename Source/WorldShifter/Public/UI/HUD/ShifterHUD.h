// Copyright jB 2024/2025

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/HUD.h"
#include "ShifterHUD.generated.h"


class UAbilitySystemComponent;
class UAttributeSet;
class UOverLayWidgetController;
class UShifterUserWidget;
struct FWidgetControllerParams;


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

	UOverLayWidgetController* GetOverLayWidgetController(const FWidgetControllerParams& WCParams);

	void InitOverlay(APlayerController* PC, APlayerState* PS, UAbilitySystemComponent* ASC,UAttributeSet* AS);



private:

	UPROPERTY(EditAnywhere)
	TSubclassOf<UShifterUserWidget> OverLayWidgetClass;

	UPROPERTY()
	TObjectPtr<UOverLayWidgetController> OverLayWidgetController;

	UPROPERTY(EditAnywhere)
	TSubclassOf<UOverLayWidgetController> OverLayWidgetControllerClass;
};
