// Copyright jB 2024/2025

#pragma once

#include "CoreMinimal.h"
#include "PDGDController/PdgdRoomBase.h"
#include "PdgdRoom1.generated.h"

/**
 * 
 */
UCLASS()
class WORLDSHIFTER_API APdgdRoom1 : public APdgdRoomBase
{
	GENERATED_BODY()

public:

	APdgdRoom1();
	
	UPROPERTY(VisibleAnywhere, Category = "Components")
	TObjectPtr<UArrowComponent> LinkArrow1;

	UPROPERTY(VisibleAnywhere, Category = "Components")
	TObjectPtr<UArrowComponent> LinkArrow2;

	UPROPERTY(VisibleAnywhere, Category = "Components")
	TObjectPtr<UArrowComponent> LinkArrow3;
};
