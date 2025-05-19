// Copyright jB 2024/2025

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "PdgdGenerator.generated.h"

class APdgdRoomBase;
class APdgdRoom1;

UCLASS()
class WORLDSHIFTER_API APdgdGenerator : public AActor
{
	GENERATED_BODY()

public:
	APdgdGenerator();
	virtual void Tick(float DeltaTime) override;

	UPROPERTY(EditAnywhere, Category = "Rooms")
	TSubclassOf<APdgdRoom1> StarterRoom;

	UPROPERTY(EditAnywhere, Category = "Rooms")
	TArray<TSubclassOf<APdgdRoomBase>> SpawnRooms;

	UPROPERTY(EditAnywhere, Category = "Rooms")
	TArray<USceneComponent*> Links;

	UPROPERTY(EditAnywhere, Category = "Room Info")
	int32 RoomAmount;

protected:
	APdgdRoomBase* LatestSpawnRoom;

	bool bCanSpawn;

	void SpawnRoom();
	void SpawnNextRoom();
	void RemoveOverLappingRoom();


	virtual void BeginPlay() override;
};
