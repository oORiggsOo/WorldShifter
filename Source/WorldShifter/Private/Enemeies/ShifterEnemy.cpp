// Copyright jB 2024/2025


#include "Enemeies/ShifterEnemy.h"

AShifterEnemy::AShifterEnemy()
{

	Shield = CreateDefaultSubobject<UStaticMeshComponent>("Shield");
	Shield->SetupAttachment(GetMesh(), FName("Shield"));
	Shield->SetCollisionEnabled(ECollisionEnabled::NoCollision);
	
}
