// Copyright jB 2024/2025


#include "AbilitySystem/ShifterAttributeSet.h"
#include "Net/UnrealNetwork.h"

UShifterAttributeSet::UShifterAttributeSet()
{
	InitLife(25.f);
	InitMaxLife(100.f);
	InitMagic(50.f);
	InitMaxMagic(100.f);
	InitPower(25.f);
	InitMaxPower(100.f);
}

void UShifterAttributeSet::GetLifetimeReplicatedProps(TArray<class FLifetimeProperty>& OutLifetimeProps) const
{
	Super::GetLifetimeReplicatedProps(OutLifetimeProps);
	DOREPLIFETIME_CONDITION_NOTIFY(UShifterAttributeSet, Life, COND_None, REPNOTIFY_Always);
	DOREPLIFETIME_CONDITION_NOTIFY(UShifterAttributeSet, MaxLife, COND_None, REPNOTIFY_Always);
	DOREPLIFETIME_CONDITION_NOTIFY(UShifterAttributeSet, Magic, COND_None, REPNOTIFY_Always);
	DOREPLIFETIME_CONDITION_NOTIFY(UShifterAttributeSet, MaxMagic, COND_None, REPNOTIFY_Always);
	DOREPLIFETIME_CONDITION_NOTIFY(UShifterAttributeSet, Power, COND_None, REPNOTIFY_Always);
	DOREPLIFETIME_CONDITION_NOTIFY(UShifterAttributeSet, MaxPower, COND_None, REPNOTIFY_Always);
}

void UShifterAttributeSet::OnRep_Life(const FGameplayAttributeData& OldLife) const
{
	GAMEPLAYATTRIBUTE_REPNOTIFY(UShifterAttributeSet, Life, OldLife);
}

void UShifterAttributeSet::OnRep_MaxLife(const FGameplayAttributeData& OldMaxLife) const
{
	GAMEPLAYATTRIBUTE_REPNOTIFY(UShifterAttributeSet, MaxLife, OldMaxLife);
}

void UShifterAttributeSet::OnRep_Magic(const FGameplayAttributeData& OldMagic) const
{
	GAMEPLAYATTRIBUTE_REPNOTIFY(UShifterAttributeSet, Magic, OldMagic);
}

void UShifterAttributeSet::OnRep_MaxMagic(const FGameplayAttributeData& OldMaxMagic) const
{
	GAMEPLAYATTRIBUTE_REPNOTIFY(UShifterAttributeSet, MaxMagic, OldMaxMagic);
}


void UShifterAttributeSet::OnRep_Power(const FGameplayAttributeData& OldPower) const
{
	GAMEPLAYATTRIBUTE_REPNOTIFY(UShifterAttributeSet, Power, OldPower);
}

void UShifterAttributeSet::OnRep_MaxPower(const FGameplayAttributeData& OldMaxPower) const
{
	GAMEPLAYATTRIBUTE_REPNOTIFY(UShifterAttributeSet, MaxPower, OldMaxPower);
}
