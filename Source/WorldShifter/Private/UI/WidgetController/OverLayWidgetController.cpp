// Copyright jB 2024/2025


#include "UI/WidgetController/OverLayWidgetController.h"

#include "AbilitySystem/ShifterAttributeSet.h"

void UOverLayWidgetController::BrodcastIntValues()
{
	const UShifterAttributeSet* ShifterAttributeSet = CastChecked<UShifterAttributeSet>(AttributeSet);

	// Life
	OnLifeChanged.Broadcast(ShifterAttributeSet->GetLife());
	OnMaxLifeChanged.Broadcast(ShifterAttributeSet->GetMaxLife());

	// Power
	OnPowerChanged.Broadcast(ShifterAttributeSet->GetPower());
	OnMaxPowerChanged.Broadcast(ShifterAttributeSet->GetMaxPower());

	// Magic
	OnMagicChanged.Broadcast(ShifterAttributeSet->GetMagic());
	OnMaxMagicChanged.Broadcast(ShifterAttributeSet->GetMaxMagic());
}

void UOverLayWidgetController::BindCallbacksToDependencies()
{
	const UShifterAttributeSet* ShifterAttributeSet = CastChecked<UShifterAttributeSet>(AttributeSet);

	// Life
	AbilitySystemComponent->GetGameplayAttributeValueChangeDelegate(ShifterAttributeSet->GetLifeAttribute()).
							AddUObject(this, &UOverLayWidgetController::LifeChanged);

	AbilitySystemComponent->GetGameplayAttributeValueChangeDelegate(ShifterAttributeSet->GetMaxLifeAttribute()).
	                        AddUObject(this, &UOverLayWidgetController::MaxLifeChanged);

	// Power
	AbilitySystemComponent->GetGameplayAttributeValueChangeDelegate(ShifterAttributeSet->GetPowerAttribute()).
	                        AddUObject(this, &UOverLayWidgetController::PowerChanged);

	AbilitySystemComponent->GetGameplayAttributeValueChangeDelegate(ShifterAttributeSet->GetMaxPowerAttribute()).
	                        AddUObject(this, &UOverLayWidgetController::MaxPowerChanged);

	// Magic
	AbilitySystemComponent->GetGameplayAttributeValueChangeDelegate(ShifterAttributeSet->GetMagicAttribute()).
	                        AddUObject(this, &UOverLayWidgetController::MagicChanged);

	AbilitySystemComponent->GetGameplayAttributeValueChangeDelegate(ShifterAttributeSet->GetMaxMagicAttribute()).
	                        AddUObject(this, &UOverLayWidgetController::MaxMagicChanged);
}

// Life
void UOverLayWidgetController::LifeChanged(const FOnAttributeChangeData& Data) const
{
	OnLifeChanged.Broadcast(Data.NewValue);
}

void UOverLayWidgetController::MaxLifeChanged(const FOnAttributeChangeData& Data) const
{
	OnMaxLifeChanged.Broadcast(Data.NewValue);
}

// Power
void UOverLayWidgetController::PowerChanged(const FOnAttributeChangeData& Data) const
{
	OnPowerChanged.Broadcast(Data.NewValue);
}

void UOverLayWidgetController::MaxPowerChanged(const FOnAttributeChangeData& Data) const
{
	OnMaxPowerChanged.Broadcast(Data.NewValue);
}

// Magic
void UOverLayWidgetController::MagicChanged(const FOnAttributeChangeData& Data) const
{
	OnMagicChanged.Broadcast(Data.NewValue);
}

void UOverLayWidgetController::MaxMagicChanged(const FOnAttributeChangeData& Data) const
{
	OnMaxMagicChanged.Broadcast(Data.NewValue);
}
