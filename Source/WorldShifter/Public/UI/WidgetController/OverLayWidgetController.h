// Copyright jB 2024/2025

#pragma once

#include "CoreMinimal.h"
#include "UI/WidgetController/ShifterWidgetController.h"
#include "OverLayWidgetController.generated.h"

// Life
DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnLifeChangedSignature, float, NewLife);
DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnMaxLifeChangedSignature, float, NewMaxLife);

// Power
DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnPowerChangedSignature, float, NewPower);
DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnMaxPowerChangedSignature, float, NewMaxPower);

// Magic
DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnMagicChangedSignature, float, NewMagic);
DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnMaxMagicChangedSignature, float, NewMaxMagic);

/**
 * 
 */
UCLASS(BlueprintType, Blueprintable)
class WORLDSHIFTER_API UOverLayWidgetController : public UShifterWidgetController
{
	GENERATED_BODY()

public:
	virtual void BrodcastIntValues() override;
	virtual void BindCallbacksToDependencies() override;

	// Life
	UPROPERTY(BlueprintAssignable, Category = "GAS|Attributes")
	FOnLifeChangedSignature OnLifeChanged;

	UPROPERTY(BlueprintAssignable, Category = "GAS|Attributes")
	FOnLifeChangedSignature OnMaxLifeChanged;

	// Power
	UPROPERTY(BlueprintAssignable, Category = "GAS|Attributes")
	FOnPowerChangedSignature OnPowerChanged;

	UPROPERTY(BlueprintAssignable, Category = "GAS|Attributes")
	FOnMaxPowerChangedSignature OnMaxPowerChanged;

	// Magic
	UPROPERTY(BlueprintAssignable, Category = "GAS|Attributes")
	FOnMagicChangedSignature OnMagicChanged;

	UPROPERTY(BlueprintAssignable, Category = "GAS|Attributes")
	FOnMaxMagicChangedSignature OnMaxMagicChanged;

protected:
	// Life
	void LifeChanged(const FOnAttributeChangeData& Data) const;
	void MaxLifeChanged(const FOnAttributeChangeData& Data) const;

	// Power
	void PowerChanged(const FOnAttributeChangeData& Data) const;
	void MaxPowerChanged(const FOnAttributeChangeData& Data) const;

	// Magic
	void MagicChanged(const FOnAttributeChangeData& Data) const; 
	void MaxMagicChanged(const FOnAttributeChangeData& Data) const;
};
