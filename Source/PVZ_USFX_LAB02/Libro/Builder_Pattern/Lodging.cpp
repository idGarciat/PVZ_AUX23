// Fill out your copyright notice in the Description page of Project Settings.


#include "Lodging.h"

// Sets default values
ALodging::ALodging()
{
	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void ALodging::BeginPlay()
{
	Super::BeginPlay();

}

// Called every frame
void ALodging::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void ALodging::SetSwimmingPool(FString mySwimmingPool)
{
	//Set the name of the Swimming Pool with the passed String
	SwimmingPool = mySwimmingPool;

}

void ALodging::SetLobbyArea(FString myLobbyArea)
{
	LobbyArea = myLobbyArea;
}

void ALodging::SetRooms(FString myRooms)
{
	Rooms = myRooms;
}

void ALodging::SetRestaurants(FString myRestaurants)
{
	Restaurants = myRestaurants;
}

void ALodging::LodgingCharacteristics()
{
	//Logs the name of each floors
	GEngine->AddOnScreenDebugMessage(-1, 15.f, FColor::Yellow, FString::Printf(TEXT("%s"), *SwimmingPool));

	GEngine->AddOnScreenDebugMessage(-1, 15.f, FColor::Yellow, FString::Printf(TEXT("%s"), *LobbyArea));

	GEngine->AddOnScreenDebugMessage(-1, 15.f, FColor::Yellow, FString::Printf(TEXT("%s"), *Rooms));

	GEngine->AddOnScreenDebugMessage(-1, 15.f, FColor::Yellow, FString::Printf(TEXT("%s"), *Restaurants));

}

