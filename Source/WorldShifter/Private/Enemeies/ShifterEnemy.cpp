// Copyright jB 2024/2025


#include "Enemeies/ShifterEnemy.h"
#include "WorldShifter/WorldShifter.h"



AShifterEnemy::AShifterEnemy()
{
	// Set Highlighting for all enemies 
	GetMesh()->SetCollisionResponseToChannel(ECC_Visibility, ECR_Block);
	
	Shield = CreateDefaultSubobject<UStaticMeshComponent>("Shield");
	Shield->SetupAttachment(GetMesh(), FName("Shield"));
	Shield->SetCollisionEnabled(ECollisionEnabled::NoCollision);
	
}

void AShifterEnemy::HighlightActor()
{
	GetMesh()->SetRenderCustomDepth(true);
	GetMesh()->SetCustomDepthStencilValue(CUSTOM_DEPTH_RED);
	WeaponR->SetRenderCustomDepth(true);
	WeaponR->SetCustomDepthStencilValue(CUSTOM_DEPTH_RED);
	WeaponL->SetRenderCustomDepth(true);
	WeaponL->SetCustomDepthStencilValue(CUSTOM_DEPTH_RED);
	Shield->SetRenderCustomDepth(true);
	Shield->SetCustomDepthStencilValue(CUSTOM_DEPTH_RED);
}

void AShifterEnemy::UnHighlightActor()
{
	GetMesh()->SetRenderCustomDepth(false);
	WeaponR->SetRenderCustomDepth(false);
	WeaponL->SetRenderCustomDepth(false);
	Shield->SetRenderCustomDepth(false);
	
}


