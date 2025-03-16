// Copyright jB 2024/2025

#pragma once

#include "CoreMinimal.h"
#include "Character/ShifterCharacterBase.h"
#include "Interaction/EnemyInterface.h"
#include "ShifterEnemy.generated.h"

/**
 * 
 */
UCLASS()
class WORLDSHIFTER_API AShifterEnemy : public AShifterCharacterBase, public IEnemyInterface
{
	GENERATED_BODY()
	
public:
	virtual void HighlightActor() override;
	virtual void UnHighlightActor() override;
	AShifterEnemy();

private:
	UPROPERTY(EditAnywhere, Category= "Gear")
	TObjectPtr<UStaticMeshComponent> Shield;
};
