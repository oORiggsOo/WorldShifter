// Copyright jB 2024/2025


#include "Player/ShifterPlayerState.h"

#include "AbilitySystem/ShifterAbilitySystemComponent.h"
#include "AbilitySystem/ShifterAttributeSet.h"

AShifterPlayerState::AShifterPlayerState()
{
	AbilitySystemComponent = CreateDefaultSubobject<UShifterAbilitySystemComponent>("AbilitySystem_Component");
	AbilitySystemComponent->SetIsReplicated(true);
	AbilitySystemComponent->SetReplicationMode(EGameplayEffectReplicationMode::Mixed);

	AttributeSet = CreateDefaultSubobject<UShifterAttributeSet>("AttributeSet");
	
	SetNetUpdateFrequency(100.f); 
}

UAbilitySystemComponent* AShifterPlayerState::GetAbilitySystemComponent() const
{
	return AbilitySystemComponent;
}
