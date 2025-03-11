// Copyright jB 2024/2025

#pragma once

#include "CoreMinimal.h"
#include "Character/ShifterCharacterBase.h"
#include "ShifterEnemy.generated.h"

/**
 * 
 */
UCLASS()
class WORLDSHIFTER_API AShifterEnemy : public AShifterCharacterBase
{
	GENERATED_BODY()

public:
	AShifterEnemy();

private:
	UPROPERTY(EditAnywhere, Category= "Gear")
	TObjectPtr<UStaticMeshComponent> Shield;
};
