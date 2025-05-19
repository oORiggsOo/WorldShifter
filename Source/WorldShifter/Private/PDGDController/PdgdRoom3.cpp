// Copyright jB 2024/2025


#include "PDGDController/PdgdRoom3.h"
#include "Components/ArrowComponent.h"
#include "Components/StaticMeshComponent.h"

APdgdRoom3::APdgdRoom3()
{
	LinkArrow1 = CreateDefaultSubobject<UArrowComponent>("LinkArrow1");
	LinkArrow1->SetupAttachment(LinkPointFolder.Get(), FName("LinkArrow1"));

	Wall_Close = CreateDefaultSubobject<UStaticMeshComponent>("Wall_Close");
	Wall_Close->SetupAttachment(GeometryFolder.Get(), FName("Wall_Close"));

	Wall_Close2 = CreateDefaultSubobject<UStaticMeshComponent>("Wall_Close2");
	Wall_Close2->SetupAttachment(GeometryFolder.Get(), FName("Wall_Close2"));
}
