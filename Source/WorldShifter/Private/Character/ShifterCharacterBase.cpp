// Copyright jB 2024/2025


#include "Character/ShifterCharacterBase.h"

// Sets default values
AShifterCharacterBase::AShifterCharacterBase()
{
	PrimaryActorTick.bCanEverTick = false;


	WeaponR = CreateDefaultSubobject<USkeletalMeshComponent>("WeaponR");
	WeaponL = CreateDefaultSubobject<USkeletalMeshComponent>("WeaponL");

	WeaponR->SetupAttachment(GetMesh(), FName("WeaponR"));
	WeaponL->SetupAttachment(GetMesh(), FName("WeaponL"));

	WeaponR->SetCollisionEnabled(ECollisionEnabled::NoCollision);
	WeaponL->SetCollisionEnabled(ECollisionEnabled::NoCollision);
}


void AShifterCharacterBase::BeginPlay()
{
	Super::BeginPlay();
}
