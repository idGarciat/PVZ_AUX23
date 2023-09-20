// Fill out your copyright notice in the Description page of Project Settings.


#include "Plant.h"
#include "Zombie.h"
#include "PVZ_USFX_LAB02GameModeBase.h"
#include "UObject/ConstructorHelpers.h"
#include "Components/StaticMeshComponent.h"

// Sets default values
APlant::APlant()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	
	PrimaryActorTick.bCanEverTick = true;

	MeshPlanta = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("PlantMesh"));
	MeshPlanta->SetCollisionProfileName(UCollisionProfile::BlockAll_ProfileName);
	MeshPlanta->SetSimulatePhysics(true);
	MeshPlanta->SetCollisionEnabled(ECollisionEnabled::QueryAndPhysics);

	MeshPlanta->SetMassScale(NAME_None, 1000.f);

	RootComponent = MeshPlanta;


	static ConstructorHelpers::FObjectFinder<UStaticMesh> PlantaMesh(TEXT("StaticMesh'/Game/StarterContent/Shapes/Shape_Cylinder.Shape_Cylinder'"));


	MeshPlanta->SetStaticMesh(PlantaMesh.Object);

	energia = 100;


}

// Called when the game starts or when spawned
void APlant::BeginPlay()
{
	Super::BeginPlay();


	UWorld* const World = GetWorld();

	const FVector direcciondisparo = FVector(10,10, 100.f);

	//World->GetTimerManager().SetTimer(temporizadordisparo, this, &APlant::disparo(direcciondisparo), 2, true);

}

// Called every frame
void APlant::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}








