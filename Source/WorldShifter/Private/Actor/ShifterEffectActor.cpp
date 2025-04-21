// Copyright jB 2024/2025


#include "Actor/ShifterEffectActor.h"

#include "AbilitySystemComponent.h"
#include "AbilitySystemInterface.h"
#include "AbilitySystem/ShifterAttributeSet.h"
#include "Components/SphereComponent.h"


AShifterEffectActor::AShifterEffectActor()
{
	PrimaryActorTick.bCanEverTick = false;
	
	Mesh = CreateDefaultSubobject<UStaticMeshComponent>("Mesh");
	SetRootComponent(Mesh);

	Sphere = CreateDefaultSubobject<USphereComponent>("Sphere");
	Sphere->SetupAttachment(GetRootComponent());
}

void AShifterEffectActor::OnOverlap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor,
                                    UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep,
                                    const FHitResult& SweepResult)
{
	//TODO: Change this to apply a Gameplay Effect. Cons_cast Hack active!
	if (IAbilitySystemInterface* ASCInterface = Cast<IAbilitySystemInterface>(OtherActor))
	{
	const UShifterAttributeSet* ShifterAttributeSet = Cast<UShifterAttributeSet>(
	ASCInterface->GetAbilitySystemComponent()->GetAttributeSet(UShifterAttributeSet::StaticClass()));
		
		// Hack "MutableShifterAtrributeSet"
		UShifterAttributeSet* MutableShifterAtrributeSet = const_cast<UShifterAttributeSet*>(ShifterAttributeSet);
		MutableShifterAtrributeSet->SetLife(ShifterAttributeSet->GetLife() + 25.f);
		MutableShifterAtrributeSet->SetMagic(ShifterAttributeSet->GetMagic() + 25.f);
		Destroy();
		// Hack "MutableShifterAtrributeSet"
	}
}

void AShifterEffectActor::EndOverlap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor,
                                     UPrimitiveComponent* OtherComp, int32 OtherBodyIndex)
{
}


void AShifterEffectActor::BeginPlay()
{
	Super::BeginPlay();

	Sphere->OnComponentBeginOverlap.AddDynamic(this, &AShifterEffectActor::OnOverlap);
	Sphere->OnComponentEndOverlap.AddDynamic(this, &AShifterEffectActor::EndOverlap);
}
