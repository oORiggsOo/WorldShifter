// Copyright jB 2024/2025


#include "Character/ShifterCharacter.h"


AShifterCharacter::AShifterCharacter()
{
	Head = CreateDefaultSubobject<UStaticMeshComponent>("Head");
	Head->SetupAttachment(GetMesh(), FName("Head"));
	Head->SetCollisionEnabled(ECollisionEnabled::NoCollision);
}
