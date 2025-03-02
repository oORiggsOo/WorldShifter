// Copyright jB 2024/2025

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "ShifterCharacterBase.generated.h"

UCLASS(Abstract)
class WORLDSHIFTER_API AShifterCharacterBase : public ACharacter
{
	GENERATED_BODY()

public:
	AShifterCharacterBase();

protected:
	virtual void BeginPlay() override;

	UPROPERTY(EditAnywhere, Category= "Combat")
	TObjectPtr<USkeletalMeshComponent> Weapon;
	
};
