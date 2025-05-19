// Copyright jB 2024/2025


#include "WorldShifter/Public/UI/WidgetController/ShifterWidgetController.h"

void UShifterWidgetController::SetWidgetControllerParams(const FWidgetControllerParams& WCParams)
{
	PlayerController = WCParams.PlayerController;
	PlayerState = WCParams.PlayerState;
	AbilitySystemComponent = WCParams.AbilitySystemComponent;
	AttributeSet = WCParams.AttributeSet;
}

void UShifterWidgetController::BrodcastIntValues()
{
	
}

void UShifterWidgetController::BindCallbacksToDependencies()
{
	
}
