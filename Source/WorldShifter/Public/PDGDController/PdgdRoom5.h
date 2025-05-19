// Copyright jB 2024/2025

#pragma once

#include "CoreMinimal.h"
#include "PDGDController/PdgdRoomBase.h"
#include "PdgdRoom5.generated.h"

/**
 * 
 */
UCLASS()
class WORLDSHIFTER_API APdgdRoom5 : public APdgdRoomBase
{
	GENERATED_BODY()
public:

	APdgdRoom5();
	
	//UPROPERTY(VisibleAnywhere, Category = "Components")
	//TObjectPtr<UArrowComponent> LinkArrow1;
	
	UPROPERTY(VisibleAnywhere, Category = "Components")
	TObjectPtr<UStaticMeshComponent> Wall_Close;

	UPROPERTY(VisibleAnywhere, Category = "Components")
	TObjectPtr<UStaticMeshComponent> Wall_Close2;

	UPROPERTY(VisibleAnywhere, Category = "Components")
	TObjectPtr<UStaticMeshComponent> Wall_Close3;
	
};
