// Copyright jB 2024/2025

#pragma once

#include "CoreMinimal.h"
#include "PDGDController/PdgdRoomBase.h"
#include "PdgdRoom3.generated.h"

/**
 * 
 */
UCLASS()
class WORLDSHIFTER_API APdgdRoom3 : public APdgdRoomBase
{
	GENERATED_BODY()

public:

	APdgdRoom3();
	
	UPROPERTY(VisibleAnywhere, Category = "Components")
	TObjectPtr<UArrowComponent> LinkArrow1;
	
	UPROPERTY(VisibleAnywhere, Category = "Components")
	TObjectPtr<UStaticMeshComponent> Wall_Close;

	UPROPERTY(VisibleAnywhere, Category = "Components")
	TObjectPtr<UStaticMeshComponent> Wall_Close2;
};
