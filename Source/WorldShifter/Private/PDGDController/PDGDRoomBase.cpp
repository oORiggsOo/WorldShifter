// Copyright jB 2024/2025


#include "PDGDController/PDGRoomBase.h"

#include "Components/ArrowComponent.h"
#include "Components/BoxComponent.h"

APDGRoomBase::APDGRoomBase()
{
 	
	PrimaryActorTick.bCanEverTick = true;

	Wall_1 = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Wall_1"));
	Wall_2 = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Wall_2"));
	Wall_3 = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Wall_3"));
	Wall_4 = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Wall_4"));
	Wall_5 = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Wall_5"));
	Wall_6 = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Wall_6"));
	Wall_7 = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Wall_7"));
	Wall_8 = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Wall_8"));
	Floor = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Floor"));
	BoxCollision = CreateDefaultSubobject<UBoxComponent>(TEXT("BoxCollision"));
	Arrow = CreateDefaultSubobject<UArrowComponent>(TEXT("Arrow"));
}

void APDGRoomBase::BeginPlay()
{
	Super::BeginPlay();
	
}

void APDGRoomBase::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

