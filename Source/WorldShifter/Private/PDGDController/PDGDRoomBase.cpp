// Copyright jB 2024/2025


#include "PDGDController/PDGDRoomBase.h"

#include "Components/ArrowComponent.h"
#include "Components/BoxComponent.h"

APDGDRoomBase::APDGDRoomBase()
{
	PrimaryActorTick.bCanEverTick = true;
	
	Wall_1 = CreateDefaultSubobject<UStaticMeshComponent>("Wall_1");
	Wall_1->SetupAttachment( Floor, FName("Wall_1"));

	
	Wall_2 = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Wall_2"));
	Wall_2->SetupAttachment( Floor, FName("Wall_2"));
	
	
	Wall_3 = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Wall_3"));
	Wall_3->SetupAttachment( Floor, FName("Wall_3"));

	
	Wall_4 = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Wall_4"));
	Wall_4->SetupAttachment( Floor, FName("Wall_4"));
	

	
	Wall_5 = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Wall_5"));
	Wall_5->SetupAttachment( Floor, FName("Wall_5"));

	
	Wall_6 = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Wall_6"));
	Wall_6->SetupAttachment( Floor, FName("Wall_6"));

	
	Wall_7 = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Wall_7"));
	Wall_7->SetupAttachment( Floor, FName("Wall_7"));

	
	Wall_8 = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Wall_8"));
	Wall_8->SetupAttachment( Floor, FName("Wall_8"));
	
	
	BoxCollision = CreateDefaultSubobject<UBoxComponent>(TEXT("BoxCollision"));
	BoxCollision->SetupAttachment( RootComponent, FName("BoxCollision"));

	
	Floor = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Floor"));
	Floor->SetupAttachment( BoxCollision, FName("Floor"));

	
	Arrow = CreateDefaultSubobject<UArrowComponent>(TEXT("Arrow"));

	
	
	
}

void APDGDRoomBase::BeginPlay()
{
	Super::BeginPlay();
}

void APDGDRoomBase::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
}
