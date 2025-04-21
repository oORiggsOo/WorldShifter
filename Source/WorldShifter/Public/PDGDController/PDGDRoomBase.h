// Copyright jB 2024/2025

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "PDGDRoomBase.generated.h"


class UArrowComponent;
class UBoxComponent;

UCLASS()
class WORLDSHIFTER_API APDGDRoomBase : public AActor
{
	GENERATED_BODY()

public:
	APDGDRoomBase();


	virtual void Tick(float DeltaTime) override;

protected:
	virtual void BeginPlay() override;

	UPROPERTY(EditAnywhere, Category = "Components")
	TObjectPtr<UStaticMeshComponent>  Wall_1;

	UPROPERTY(EditAnywhere, Category = "Components")
	TObjectPtr<UStaticMeshComponent> Wall_2;

	UPROPERTY(EditAnywhere, Category = "Components")
	TObjectPtr<UStaticMeshComponent> Wall_3;

	UPROPERTY(EditAnywhere, Category = "Components")
	TObjectPtr<UStaticMeshComponent> Wall_4;

	UPROPERTY(EditAnywhere, Category = "Components")
	TObjectPtr<UStaticMeshComponent> Wall_5;

	UPROPERTY(EditAnywhere, Category = "Components")
	TObjectPtr<UStaticMeshComponent> Wall_6;

	UPROPERTY(EditAnywhere, Category = "Components")
	TObjectPtr<UStaticMeshComponent> Wall_7;

	UPROPERTY(EditAnywhere, Category = "Components")
	TObjectPtr<UStaticMeshComponent> Wall_8;

	UPROPERTY(EditAnywhere, Category = "Components")
	TObjectPtr<UStaticMeshComponent>  Floor;
	
	UPROPERTY(EditAnywhere, Category = "Components")
	TObjectPtr<UBoxComponent> BoxCollision;

	UPROPERTY(EditAnywhere, Category = "Components")
	TObjectPtr<UArrowComponent> Arrow;
};
