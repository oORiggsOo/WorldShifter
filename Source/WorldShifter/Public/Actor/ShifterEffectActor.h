// Copyright jB 2024/2025

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "ShifterEffectActor.generated.h"

class USphereComponent;

UCLASS()
class WORLDSHIFTER_API AShifterEffectActor : public AActor
{
	GENERATED_BODY()

public:
	AShifterEffectActor();

	UFUNCTION()
	virtual void OnOverlap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent*
	                       OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);

	UFUNCTION()
	virtual void EndOverlap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent*
	                        OtherComp, int32 OtherBodyIndex);

protected:
	virtual void BeginPlay() override;

private:
	UPROPERTY(VisibleAnywhere)
	TObjectPtr<USphereComponent> Sphere;

	UPROPERTY(VisibleAnywhere)
	TObjectPtr<UStaticMeshComponent> Mesh;
};
