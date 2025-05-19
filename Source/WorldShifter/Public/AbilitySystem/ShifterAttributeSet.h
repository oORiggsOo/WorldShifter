// Copyright jB 2024/2025

#pragma once

#include "CoreMinimal.h"
#include "AttributeSet.h"
#include "AbilitySystemComponent.h"
#include "ShifterAttributeSet.generated.h"


#define ATTRIBUTE_ACCESSORS(ClassName, PropertyName) \
	GAMEPLAYATTRIBUTE_PROPERTY_GETTER(ClassName, PropertyName) \
	GAMEPLAYATTRIBUTE_VALUE_GETTER(PropertyName) \
	GAMEPLAYATTRIBUTE_VALUE_SETTER(PropertyName) \
	GAMEPLAYATTRIBUTE_VALUE_INITTER(PropertyName)

UCLASS()
class WORLDSHIFTER_API UShifterAttributeSet : public UAttributeSet
{
	GENERATED_BODY()

public:
	UShifterAttributeSet();

	virtual void GetLifetimeReplicatedProps(TArray<class FLifetimeProperty>& OutLifetimeProps) const override;

/* Look at implementing a Cypher System for the main Attributes
 *
 *  Life
 *  Power
 *  Magic
 *  
 */
	
	// Life Attribute
	UPROPERTY(BlueprintReadOnly, ReplicatedUsing = OnRep_Life, Category = "Vital Attributes")
	FGameplayAttributeData Life;
	ATTRIBUTE_ACCESSORS(UShifterAttributeSet, Life);
	
	UFUNCTION()
	void OnRep_Life(const FGameplayAttributeData& OldLife) const;
	
	UPROPERTY(BlueprintReadOnly, ReplicatedUsing = OnRep_MaxLife, Category = "Vital Attributes")
	FGameplayAttributeData MaxLife;
	ATTRIBUTE_ACCESSORS(UShifterAttributeSet, MaxLife);
	
	UFUNCTION()
	void OnRep_MaxLife(const FGameplayAttributeData& OldMaxLife) const; 


	// Power Attribute
	UPROPERTY(BlueprintReadOnly, ReplicatedUsing = OnRep_Power, Category = "Vital Attributes")
	FGameplayAttributeData Power;
	ATTRIBUTE_ACCESSORS(UShifterAttributeSet, Power);
	
	UFUNCTION()
	void OnRep_Power(const FGameplayAttributeData& OldPower) const;
	
	UPROPERTY(BlueprintReadOnly, ReplicatedUsing = OnRep_MaxPower, Category = "Vital Attributes")
	FGameplayAttributeData MaxPower;
	ATTRIBUTE_ACCESSORS(UShifterAttributeSet, MaxPower);

	UFUNCTION()
	void OnRep_MaxPower(const FGameplayAttributeData& OldMaxPower) const;
	
	
	// Magic Attribute
	UPROPERTY(BlueprintReadOnly, ReplicatedUsing = OnRep_Magic, Category = "Vital Attributes")
	FGameplayAttributeData Magic;
	ATTRIBUTE_ACCESSORS(UShifterAttributeSet, Magic);

	UFUNCTION()
	void OnRep_Magic(const FGameplayAttributeData& OldMagic) const;
	
	UPROPERTY(BlueprintReadOnly, ReplicatedUsing = OnRep_MaxMagic, Category = "Vital Attributes")
	FGameplayAttributeData MaxMagic;
	ATTRIBUTE_ACCESSORS(UShifterAttributeSet, MaxMagic);
	
	UFUNCTION()
	void OnRep_MaxMagic(const FGameplayAttributeData& OldMaxMagic) const;




	
};


