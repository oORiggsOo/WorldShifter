// Copyright jB 2024/2025

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "ShifterEffectActor.generated.h"

UCLASS()
class WORLDSHIFTER_API AShifterEffectActor : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AShifterEffectActor();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

};
