// Copyright jB 2024/2025

#pragma once

#include "CoreMinimal.h"
#include "Character/ShifterCharacterBase.h"
#include "Components/StaticMeshComponent.h"
#include "ShifterCharacter.generated.h"


/**
 * 
 */
UCLASS()
class WORLDSHIFTER_API AShifterCharacter : public AShifterCharacterBase
{
	GENERATED_BODY()

public:
	AShifterCharacter();
	
protected:
	UPROPERTY(EditAnywhere, Category= "Character")
	TObjectPtr<UStaticMeshComponent> Head;
};
