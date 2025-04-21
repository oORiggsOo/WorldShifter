// Copyright jB 2024/2025


#include "WorldShifter/Public/UI/Widget/ShifterUserWidget.h"

void UShifterUserWidget::SetWidgetController(UObject* InWidgetController)
{
	WidgetController = InWidgetController;
	WidgetControllerSet();
}
