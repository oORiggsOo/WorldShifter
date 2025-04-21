// Copyright jB 2024/2025

#pragma once

#include "CoreMinimal.h"
#include "UI/WidgetController/ShifterWidgetController.h"
#include "OverLayWidgetController.generated.h"


DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnLifeChangedSignature,float, NewLife);
DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnMaxLifeChangedSignature,float, NewMaxLife);

/**
 * 
 */
UCLASS(BlueprintType, Blueprintable)
class WORLDSHIFTER_API UOverLayWidgetController : public UShifterWidgetController
{
	GENERATED_BODY()

public:
	virtual void BrodcastIntValues() override;

	UPROPERTY(BlueprintAssignable, Category = "GAS|Attributes")
	FOnLifeChangedSignature OnLifeChanged;

	UPROPERTY(BlueprintAssignable, Category = "GAS|Attributes")
	FOnLifeChangedSignature OnMaxLifeChanged;
};
