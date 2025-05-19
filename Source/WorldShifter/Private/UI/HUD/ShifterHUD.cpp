// Copyright jB 2024/2025


#include "UI/HUD/ShifterHUD.h"
#include "UI/Widget/ShifterUserWidget.h"
#include "UI/WidgetController/OverLayWidgetController.h"


UOverLayWidgetController* AShifterHUD::GetOverLayWidgetController(const FWidgetControllerParams& WCParams)
{
	if (OverLayWidgetController == nullptr)
	{
		OverLayWidgetController = NewObject<UOverLayWidgetController>(this, OverLayWidgetControllerClass );
		OverLayWidgetController->SetWidgetControllerParams(WCParams);
		OverLayWidgetController->BindCallbacksToDependencies();
		
		return OverLayWidgetController;
		
	}
	return OverLayWidgetController;
}

void AShifterHUD::InitOverlay(APlayerController* PC, APlayerState* PS, UAbilitySystemComponent* ASC, UAttributeSet* AS)
{
	checkf(OverLayWidgetClass, TEXT("Overlay Widget Class uninitialized, fill out BP_ShifterHUD"));
	checkf(OverLayWidgetControllerClass, TEXT("Overlay Widget Controller Class uninitialized, fill out BP_ShifterHUD "));
	
	UUserWidget* Widget = CreateWidget<UUserWidget>(GetWorld(), OverLayWidgetClass);
	OverLayWidget = Cast<UShifterUserWidget>(Widget);

	const FWidgetControllerParams WidgetControllerParams(PC, PS, ASC, AS);
	UOverLayWidgetController* WidgetController = GetOverLayWidgetController(WidgetControllerParams);

	OverLayWidget->SetWidgetController(WidgetController);
	WidgetController->BrodcastIntValues();
	Widget->AddToViewport();
}

