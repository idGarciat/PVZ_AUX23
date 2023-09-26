// Fill out your copyright notice in the Description page of Project Settings.


#include "Plant.h"
#include "Zombie.h"
#include "Proyectil.h"
#include "PVZ_USFX_LAB02GameModeBase.h"
#include "UObject/ConstructorHelpers.h"
#include "Components/StaticMeshComponent.h"
#include "Components/BoxComponent.h"


// Sets default values
APlant::APlant()
{
	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.

	PrimaryActorTick.bCanEverTick = true;

	MeshPlanta = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("PlantMesh"));
	//MeshPlanta->SetSimulatePhysics(true);
	MeshPlanta->SetupAttachment(RootComponent);

	MeshPlanta->SetCollisionEnabled(ECollisionEnabled::QueryAndPhysics);
	//MeshPlanta->SetSimulatePhysics(true);

	//ECollisionChannel ECC_MiCanal = ECC_GameTraceChannel1;

	MeshPlanta->SetCollisionObjectType(ECollisionChannel::ECC_Pawn);


	MeshPlanta->SetCollisionProfileName(UCollisionProfile::BlockAllDynamic_ProfileName);
	MeshPlanta->BodyInstance.SetCollisionProfileName("Item");




	RootComponent = MeshPlanta;


	static ConstructorHelpers::FObjectFinder<UStaticMesh> PlantaMesh(TEXT("StaticMesh'/Game/StarterContent/Shapes/Shape_Cylinder.Shape_Cylinder'"));


	MeshPlanta->SetStaticMesh(PlantaMesh.Object);

	energia = 100;

	Tags.Add(TEXT("Plant"));


}

// Called when the game starts or when spawned
void APlant::BeginPlay()
{
	Super::BeginPlay();


	UWorld* const World = GetWorld();


	//World->GetTimerManager().SetTimer(temporizadordisparo, this, &APlant::disparo(direcciondisparo), 2, true);

}


// Called every frame
void APlant::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void APlant::NotifyHit(UPrimitiveComponent* MyComp, AActor* Other, UPrimitiveComponent* OtherComp, bool bSelfMoved, FVector HitLocation, FVector HitNormal, FVector NormalImpulse, const FHitResult& Hit)
{
	//GEngine->AddOnScreenDebugMessage(-1, 15.f, FColor::Yellow, FString::Printf(TEXT("Este es un mensaje")));

	//Destroy();

}












