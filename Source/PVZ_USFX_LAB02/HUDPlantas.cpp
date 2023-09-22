// Fill out your copyright notice in the Description page of Project Settings.

#include "HUDPlantas.h"
#include "SSeleccion_plantas.h"
#include "Widgets/SWeakWidget.h"
#include "GameFramework/PlayerController.h"
#include "Engine.h"


void AHUDPlantas::BeginPlay()
{
	Super::BeginPlay();

	if (GEngine && GEngine->GameViewport)
	{

		WidgetSeleccion = SNew(SSeleccion_plantas).OwningHUD(this);
		GEngine->GameViewport->AddViewportWidgetContent(SAssignNew(WidgetActivo, SWeakWidget).PossiblyNullContent(WidgetSeleccion.ToSharedRef()));

	}

}

void AHUDPlantas::QuitarHud()
{
	if (GEngine && GEngine->GameViewport && WidgetActivo.IsValid())
	{
		GEngine->GameViewport->RemoveViewportWidgetContent(WidgetActivo.ToSharedRef());

		if (PlayerOwner) {
			//PlayerOwner->bShowMouseCursor = false;
			PlayerOwner->SetInputMode(FInputModeGameOnly());
		}
	}



}
