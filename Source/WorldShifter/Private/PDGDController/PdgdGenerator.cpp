// Copyright jB 2024/2025


#include "PDGDController/PdgdGenerator.h"
#include "Components/BoxComponent.h"
#include "PDGDController/PdgdRoomBase.h"
#include "PDGDController/PdgdRoom1.h"


APdgdGenerator::APdgdGenerator() //RoomAmount(0), LatestSpawnRoom(nullptr)
{
	PrimaryActorTick.bCanEverTick = true;
}

void APdgdGenerator::SpawnRoom()
{
	APdgdRoom1* SpawnRoom = this->GetWorld()->SpawnActor<APdgdRoom1>(StarterRoom);

	SpawnRoom->SetActorLocation(this->GetActorLocation());
	SpawnRoom->LinkPointFolder->GetChildrenComponents(false, Links);
}

void APdgdGenerator::SpawnNextRoom()
{
	bCanSpawn = true;

	LatestSpawnRoom = this->GetWorld()->SpawnActor<APdgdRoomBase>(SpawnRooms[rand() % SpawnRooms.Num()]);

	USceneComponent* SelectedLinkPoint = Links[rand() % Links.Num()];

	LatestSpawnRoom->SetActorLocation(SelectedLinkPoint->GetComponentLocation());
	LatestSpawnRoom->SetActorRotation(SelectedLinkPoint->GetComponentRotation());

	RemoveOverLappingRoom();

	if (bCanSpawn)
	{
		Links.Remove(SelectedLinkPoint);
		TArray<USceneComponent*> LatestLinkPoints;
		LatestSpawnRoom->LinkPointFolder->GetChildrenComponents(false, LatestLinkPoints);
		Links.Append(LatestLinkPoints);
	}

	RoomAmount = RoomAmount - 1;

	if (RoomAmount > 0)
	{
		SpawnNextRoom();
	}
}

void APdgdGenerator::RemoveOverLappingRoom()
{
	TArray<USceneComponent*> OverLappedRooms;
	LatestSpawnRoom->OverLapFolder->GetChildrenComponents(false, OverLappedRooms);

	TArray<UPrimitiveComponent*> OverLappingComponents;
	for (USceneComponent* Element : OverLappedRooms)
	{
		Cast<UBoxComponent>(Element)->GetOverlappingComponents(OverLappingComponents);
	}
	for (UPrimitiveComponent* Element : OverLappingComponents)
	{
		bCanSpawn = false;
		RoomAmount = RoomAmount - 1;
		LatestSpawnRoom->Destroy();
	}
}

void APdgdGenerator::BeginPlay()
{
	Super::BeginPlay();
	SpawnRoom();
	SpawnNextRoom();
}

void APdgdGenerator::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
}
