// Copyright jB 2024/2025

#pragma once

#include "CoreMinimal.h"
#include "Character/ShifterCharacterBase.h"
#include "Components/StaticMeshComponent.h"
#include "ShifterCharacter.generated.h"


UCLASS()
class WORLDSHIFTER_API AShifterCharacter : public AShifterCharacterBase
{
	GENERATED_BODY()

public:
	AShifterCharacter();
	
protected:

	UPROPERTY(EditAnywhere, Category= "Gear")
	TObjectPtr<USkeletalMeshComponent> Cloak;

	UPROPERTY(EditAnywhere, Category = "Gear")
	TObjectPtr<USkeletalMeshComponent> BackPack;
	
	UPROPERTY(EditAnywhere, Category= "Character")
	TObjectPtr<UStaticMeshComponent> Head;

	UPROPERTY(EditAnywhere, Category= "Character")
	TObjectPtr<UStaticMeshComponent> Mouth;

	UPROPERTY(EditAnywhere, Category= "Character")
	TObjectPtr<UStaticMeshComponent> Eyes;

	UPROPERTY(EditAnywhere, Category= "Character")
	TObjectPtr<UStaticMeshComponent> HatHair;
	
	UPROPERTY(EditAnywhere, Category= "Gear")
	TObjectPtr<UStaticMeshComponent> Shield;

	UPROPERTY(EditAnywhere, Category= "Accessory")
	TObjectPtr<UStaticMeshComponent> Accessory01;

	UPROPERTY(EditAnywhere, Category= "Accessory")
	TObjectPtr<UStaticMeshComponent> Accessory02;
	
	UPROPERTY(EditAnywhere, Category= "Accessory")
	TObjectPtr<UStaticMeshComponent> Accessory03;
	

};
