// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "State.h"
#include "NoDollarsState.generated.h"

UCLASS()
class PVZ_USFX_LAB02_API ANoDollarsState : public AActor, public IState
{
	GENERATED_BODY()

public:
	// Sets default values for this actor's properties
	ANoDollarsState();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:
	// Called every frame
	virtual void Tick(float DeltaTime) override;

private:
	//The Slot Machine of this State
	UPROPERTY()
	class AOldSchoolSlotMachine* OldSchoolSlotMachine;


public:
	//Execute the routine when a coin is inserted
	virtual void InsertCoin() override;
	//Execute the routine when a coin is rejected
	virtual void RejectCoin() override;
	//Execute the routine when the lever is pulled
	virtual void PullLever() override;
	//Execute the routine of the payout
	virtual void Payout() override;
	//Restock the Slot Machine
	virtual void RestockDollars() override;
	//Get the String this State
	virtual FString ToString() override;
	//Set the Slot Machine of this state
	virtual void SetSlotMachine(class AOldSchoolSlotMachine* SlotMachine)override;


};
