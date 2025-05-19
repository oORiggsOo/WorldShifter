// Copyright jB 2024/2025

#pragma once

#include "CoreMinimal.h"
#include "PDGDController/PdgdRoomBase.h"
#include "PdgdRoom4.generated.h"

/**
 * 
 */
UCLASS()
class WORLDSHIFTER_API APdgdRoom4 : public APdgdRoomBase
{
	GENERATED_BODY()

	public:
	
	APdgdRoom4();
	
	UPROPERTY(VisibleAnywhere, Category = "Components")
	TObjectPtr<UArrowComponent> LinkArrow1;

	
	
	UPROPERTY(VisibleAnywhere, Category = "Components")
	TObjectPtr<UStaticMeshComponent> Wall_Close;

	UPROPERTY(VisibleAnywhere, Category = "Components")
	TObjectPtr<UStaticMeshComponent> Wall_Close2;
	
};
