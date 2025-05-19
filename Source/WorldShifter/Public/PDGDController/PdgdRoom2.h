// Copyright jB 2024/2025

#pragma once

#include "CoreMinimal.h"
#include "PDGDController/PdgdRoomBase.h"
#include "PdgdRoom2.generated.h"

/**
 * 
 */
UCLASS()
class WORLDSHIFTER_API APdgdRoom2 : public APdgdRoomBase
{
	GENERATED_BODY()

public:

	APdgdRoom2();
	
	UPROPERTY(VisibleAnywhere, Category = "Components")
	TObjectPtr<UArrowComponent> LinkArrow1;

	UPROPERTY(VisibleAnywhere, Category = "Components")
	TObjectPtr<UArrowComponent> LinkArrow2;
	
	UPROPERTY(VisibleAnywhere, Category = "Components")
	TObjectPtr<UStaticMeshComponent> Wall_Close;
};
