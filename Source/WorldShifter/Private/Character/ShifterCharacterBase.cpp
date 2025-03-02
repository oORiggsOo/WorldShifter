// Copyright jB 2024/2025


#include "Character/ShifterCharacterBase.h"

// Sets default values
AShifterCharacterBase::AShifterCharacterBase()
{
	PrimaryActorTick.bCanEverTick = false;
	Weapon = CreateDefaultSubobject<USkeletalMeshComponent>("Weapon");
	Weapon->SetupAttachment(GetMesh(), FName("WeaponL"));
	Weapon->SetCollisionEnabled(ECollisionEnabled::NoCollision);
}


void AShifterCharacterBase::BeginPlay()
{
	Super::BeginPlay();
}
