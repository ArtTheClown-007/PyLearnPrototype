// Fill out your copyright notice in the Description page of Project Settings.


#include "LevelTransitionvolume.h"
#include "Components/BoxComponent.h"
#include "Components/BillboardComponent.h"
#include "Player1.h"

// Sets default values
ALevelTransitionvolume::ALevelTransitionvolume()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = false;

	TransitionVolume = CreateDefaultSubobject<UBoxComponent>(TEXT("TransitionVolume"));
	RootComponent = TransitionVolume;

	Billboard = CreateDefaultSubobject<UBillboardComponent>(TEXT("Billboard"));
	Billboard->SetupAttachment(GetRootComponent());

	TransitionLevelName = "Minimal_Default";
}

// Called when the game starts or when spawned
void ALevelTransitionvolume::BeginPlay()
{
	Super::BeginPlay();

	TransitionVolume->OnComponentBeginOverlap.AddDynamic(this, &ALevelTransitionvolume::OnOverlapBegin);
	
}

// Called every frame
void ALevelTransitionvolume::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void ALevelTransitionvolume::OnOverlapBegin(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult)
{
	if (OtherActor)
	{
		APlayer1* Player1 = Cast<APlayer1>(OtherActor);
		if (Player1)
		{
			Player1->SwitchLevel(TransitionLevelName);
		}

	}

}



