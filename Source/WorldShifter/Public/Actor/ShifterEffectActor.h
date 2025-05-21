// Copyright jB 2024/2025

#pragma once

#include "CoreMinimal.h"
#include "GameplayEffect.h"
#include "GameFramework/Actor.h"
#include "ShifterEffectActor.generated.h"

class USphereComponent;

UCLASS()
class WORLDSHIFTER_API AShifterEffectActor : public AActor
{
	GENERATED_BODY()

public:
	AShifterEffectActor();

protected:
	virtual void BeginPlay() override;

	UFUNCTION(BlueprintCallable)
	void ApplyEffectToTarget(AActor* TargetActor, TSubclassOf<UGameplayEffect> GameplayEffectClass);

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Applied Effects")
	TSubclassOf<UGameplayEffect> InstantGamePlayEffectClass;
};
