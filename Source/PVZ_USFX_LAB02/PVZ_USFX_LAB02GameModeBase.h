// Copyright Epic Games, Inc. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/GameModeBase.h"
#include "PVZ_USFX_LAB02GameModeBase.generated.h"

/**
 * 
 */
class AZombie;
class APlant;
class APlanta_Ataque;
UCLASS()
class PVZ_USFX_LAB02_API APVZ_USFX_LAB02GameModeBase : public AGameModeBase
{
	GENERATED_BODY()
	

public:
	// Sets default values for this actor's properties
	APVZ_USFX_LAB02GameModeBase();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	FTimerHandle Temporizador;

	void Spawn();

	FVector contador;


	int contador2;


	FVector localizacion;


	// Declarar un vector de objetos
	TArray<AZombie*> Zombies;
	

	// Declarar un mapa de objetos
	TMap<FString, APlanta_Ataque*> Plantas;

	TArray<APlanta_Ataque*> Plantas2;

	float TiempoTranscurrido;

	void aumentovelocidad();

	void MostrarEnergiaDePlantas();

	AZombie* NuevoZombie;


	FTimerHandle Temporizador2;

	FString NombrePlanta;

	APlanta_Ataque* NuevaPlanta;



	int FilaActual;
	int ColumnaActual;


};

