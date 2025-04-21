// Copyright jB 2024/2025

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "PDGRoomBase.generated.h"


class UArrowComponent;
class UBoxComponent;

UCLASS()
class WORLDSHIFTER_API APDGRoomBase : public AActor
{
	GENERATED_BODY()
	
public:	
	APDGRoomBase();


	virtual void Tick(float DeltaTime) override;
	
protected:
	virtual void BeginPlay() override;
	
	UPROPERTY(VisibleAnywhere, Category = "Components")
	UStaticMeshComponent* Wall_1;

	UPROPERTY(VisibleAnywhere, Category = "Components")
	UStaticMeshComponent* Wall_2;

	UPROPERTY(VisibleAnywhere, Category = "Components")
	UStaticMeshComponent* Wall_3;

	UPROPERTY(VisibleAnywhere, Category = "Components")
	UStaticMeshComponent* Wall_4;

	UPROPERTY(VisibleAnywhere, Category = "Components")
	UStaticMeshComponent* Wall_5;

	UPROPERTY(VisibleAnywhere, Category = "Components")
	UStaticMeshComponent* Wall_6;

	UPROPERTY(VisibleAnywhere, Category = "Components")
	UStaticMeshComponent* Wall_7;

	UPROPERTY(VisibleAnywhere, Category = "Components")
	UStaticMeshComponent* Wall_8;
	
	UPROPERTY(VisibleAnywhere, Category = "Components")
	UStaticMeshComponent* Floor;

	UPROPERTY(VisibleAnywhere, Category = "Components")
	UBoxComponent* BoxCollision;

	UPROPERTY(VisibleAnywhere, Category = "Components")
	UArrowComponent* Arrow;
	
};
