// Fill out your copyright notice in the Description page of Project Settings.


#include "Grilla.h"
#include "UObject/ConstructorHelpers.h"
#include "Materials/Material.h"





// Sets default values
AGrilla::AGrilla()
{
	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;


	RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("RootComp"));
	MeshGrilla = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("TileMesh"));
	MeshGrilla->SetupAttachment(RootComponent);

	static ConstructorHelpers::FObjectFinder<UStaticMesh> ModeloGrilla0(TEXT("StaticMesh'/Game/StarterContent/Shapes/Shape_Plane.Shape_Plane'"));
	MeshGrilla->SetStaticMesh(ModeloGrilla0.Object);

	MeshGrilla->SetMaterial(0, MaterialGrilla0);// Assign newly defined material to mesh component


	TipoGrilla = EHexTileType::INVALIDO;

}

// Called when the game starts or when spawned
void AGrilla::BeginPlay()
{
	Super::BeginPlay();

}

// Called every frame
void AGrilla::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

