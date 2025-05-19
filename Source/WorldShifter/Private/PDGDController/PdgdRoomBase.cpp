// Copyright jB 2024/2025


#include "PDGDController/PdgdRoomBase.h"
#include "Components/ArrowComponent.h"
#include "Components/BoxComponent.h"
#include "Components/StaticMeshComponent.h"


APdgdRoomBase::APdgdRoomBase()
{
	PrimaryActorTick.bCanEverTick = true;

	DefaultSceneRoot = CreateDefaultSubobject<USceneComponent>("DefaultSceneRoot");
	DefaultSceneRoot->SetupAttachment(RootComponent.Get(), FName("DefaultSceneRoot"));

	GeometryFolder = CreateDefaultSubobject<UStaticMeshComponent>("GeometryFolder");
	GeometryFolder->SetupAttachment(DefaultSceneRoot.Get(), FName("GeometryFolder"));

	OverLapFolder = CreateDefaultSubobject<UBoxComponent>("OverLapFolder");
	OverLapFolder->SetupAttachment(DefaultSceneRoot.Get(), FName("OverLapFolder"));

	LinkPointFolder = CreateDefaultSubobject<UBoxComponent>("LinkPointFolder");
	LinkPointFolder->SetupAttachment(DefaultSceneRoot.Get(), FName("LinkPointFolder"));
	
	Arrow = CreateDefaultSubobject<UArrowComponent>("Arrow");
	Arrow->SetupAttachment(DefaultSceneRoot.Get(), FName("Arrow"));
	Arrow->bHiddenInGame = false;

	BoxCollision = CreateDefaultSubobject<UBoxComponent>("BoxCollision");
	BoxCollision->SetupAttachment(OverLapFolder.Get(), FName("BoxCollision"));

	Floor = CreateDefaultSubobject<UStaticMeshComponent>("Floor");
	Floor->SetupAttachment(GeometryFolder.Get(), FName("Floor"));

	Wall_1 = CreateDefaultSubobject<UStaticMeshComponent>("Wall_1");
	Wall_1->SetupAttachment(GeometryFolder.Get(), FName("Wall_1"));

	Wall_2 = CreateDefaultSubobject<UStaticMeshComponent>("Wall_2");
	Wall_2->SetupAttachment(GeometryFolder.Get(), FName("Wall_2"));

	Wall_3 = CreateDefaultSubobject<UStaticMeshComponent>("Wall_3");
	Wall_3->SetupAttachment(GeometryFolder.Get(), FName("Wall_3"));

	Wall_4 = CreateDefaultSubobject<UStaticMeshComponent>("Wall_4");
	Wall_4->SetupAttachment(GeometryFolder.Get(), FName("Wall_4"));

	Wall_5 = CreateDefaultSubobject<UStaticMeshComponent>("Wall_5");
	Wall_5->SetupAttachment(GeometryFolder.Get(), FName("Wall_5"));

	Wall_6 = CreateDefaultSubobject<UStaticMeshComponent>("Wall_6");
	Wall_6->SetupAttachment(GeometryFolder.Get(), FName("Wall_6"));

	Wall_7 = CreateDefaultSubobject<UStaticMeshComponent>("Wall_7");
	Wall_7->SetupAttachment(GeometryFolder.Get(), FName("Wall_7"));

	Wall_8 = CreateDefaultSubobject<UStaticMeshComponent>("Wall_8");
	Wall_8->SetupAttachment(GeometryFolder.Get(), FName("Wall_8"));
}

void APdgdRoomBase::BeginPlay()
{
	Super::BeginPlay();
}

void APdgdRoomBase::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
}
