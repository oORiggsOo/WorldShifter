// Copyright jB 2024/2025


#include "WorldShifter/Public/UI/HUD/ShfiterHUD.h"
#include "WorldShifter/Public/UI/Widget/ShifterUserWidget.h"

void AShifterHUD::BeginPlay()
{
	Super::BeginPlay();

	UUserWidget* Widget = CreateWidget<UUserWidget>(GetWorld(), OverLayWidgetClass);
	Widget->AddToViewport();
}
