// Copyright jB 2024/2025


#include "Character/ShifterCharacter.h"

#include "GameFramework/CharacterMovementComponent.h"


AShifterCharacter::AShifterCharacter()
{
	//Skeletal Mesh's
	Cloak = CreateDefaultSubobject<USkeletalMeshComponent>("Cloak");
	Cloak->SetupAttachment(GetMesh(), FName("Cloak"));
	Cloak->SetCollisionEnabled(ECollisionEnabled::NoCollision);
	BackPack = CreateDefaultSubobject<USkeletalMeshComponent>("BackPack");
	BackPack->SetupAttachment(GetMesh(), FName("BackPack"));
	BackPack->SetCollisionEnabled(ECollisionEnabled::NoCollision);
	
	//Static Mesh's
	Head = CreateDefaultSubobject<UStaticMeshComponent>("Head");
	Head->SetupAttachment(GetMesh(), FName("Head"));
	Head->SetCollisionEnabled(ECollisionEnabled::NoCollision);
	Mouth = CreateDefaultSubobject<UStaticMeshComponent>("Mouth");
	Mouth->SetupAttachment(Head, FName("Mouth"));
	Mouth->SetCollisionEnabled(ECollisionEnabled::NoCollision);
	Eyes = CreateDefaultSubobject<UStaticMeshComponent>("Eyes");
	Eyes->SetupAttachment(Head, FName("Eyes"));
	Eyes->SetCollisionEnabled(ECollisionEnabled::NoCollision);
	HatHair = CreateDefaultSubobject<UStaticMeshComponent>("HatHair");
	HatHair->SetupAttachment(Head, FName("HatHair"));
	HatHair->SetCollisionEnabled(ECollisionEnabled::NoCollision);
	Shield = CreateDefaultSubobject<UStaticMeshComponent>("Shield");
	Shield->SetupAttachment(GetMesh(), FName("Shield"));
	Shield->SetCollisionEnabled(ECollisionEnabled::NoCollision);
	Accessory01 = CreateDefaultSubobject<UStaticMeshComponent>("Accessory01");
	Accessory01->SetupAttachment(Head, FName("Accessory01"));
	Accessory01->SetCollisionEnabled(ECollisionEnabled::NoCollision);
	Accessory02 = CreateDefaultSubobject<UStaticMeshComponent>("Accessory02");
	Accessory02->SetupAttachment(Head, FName("Accessory02"));
	Accessory02->SetCollisionEnabled(ECollisionEnabled::NoCollision);
	Accessory03 = CreateDefaultSubobject<UStaticMeshComponent>("Accessory03");
	Accessory03->SetupAttachment(Head, FName("Accessory03"));
	Accessory03->SetCollisionEnabled(ECollisionEnabled::NoCollision);

	// Character Movement
	GetCharacterMovement()->bOrientRotationToMovement = true;
	GetCharacterMovement()->RotationRate = FRotator(0.f, 400.f, 0.f);
	GetCharacterMovement()->bConstrainToPlane = true;
	GetCharacterMovement()->bSnapToPlaneAtStart = true;

	bUseControllerRotationPitch = false;
	bUseControllerRotationYaw = false;
	bUseControllerRotationRoll = false;

}


