// Copyright jB 2024/2025


#include "UI/WidgetController/OverLayWidgetController.h"

#include "AbilitySystem/ShifterAttributeSet.h"

void UOverLayWidgetController::BrodcastIntValues()
{
	const UShifterAttributeSet* ShifterAttributeSet = CastChecked<UShifterAttributeSet>(AttributeSet);

	OnLifeChanged.Broadcast(ShifterAttributeSet->GetLife());
	OnMaxLifeChanged.Broadcast(ShifterAttributeSet->GetMaxLife());
}
