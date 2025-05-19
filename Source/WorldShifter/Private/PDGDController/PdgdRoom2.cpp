// Copyright jB 2024/2025


#include "PDGDController/PdgdRoom2.h"
#include "Components/ArrowComponent.h"
#include "Components/StaticMeshComponent.h"


APdgdRoom2::APdgdRoom2()
{
	LinkArrow1 = CreateDefaultSubobject<UArrowComponent>("LinkArrow1");
	LinkArrow1->SetupAttachment(LinkPointFolder.Get(), FName("LinkArrow1"));

	LinkArrow2 = CreateDefaultSubobject<UArrowComponent>("LinkArrow2");
	LinkArrow2->SetupAttachment(LinkPointFolder.Get(), FName("LinkArrow2"));
	
	Wall_Close = CreateDefaultSubobject<UStaticMeshComponent>("Wall_Close");
	Wall_Close->SetupAttachment(GeometryFolder.Get(), FName("Wall_Close"));
}
