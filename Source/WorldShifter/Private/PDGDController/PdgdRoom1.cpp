// Copyright jB 2024/2025


#include "PDGDController/PdgdRoom1.h"
#include "Components/ArrowComponent.h"


APdgdRoom1::APdgdRoom1()
{
	LinkArrow1 = CreateDefaultSubobject<UArrowComponent>("LinkArrow1");
	LinkArrow1->SetupAttachment(LinkPointFolder.Get(), FName("LinkArrow1"));

	LinkArrow2 = CreateDefaultSubobject<UArrowComponent>("LinkArrow2");
	LinkArrow2->SetupAttachment(LinkPointFolder.Get(), FName("LinkArrow2"));

	LinkArrow3 = CreateDefaultSubobject<UArrowComponent>("LinkArrow3");
	LinkArrow3->SetupAttachment(LinkPointFolder.Get(), FName("LinkArrow3"));
}
