// Fill out your copyright notice in the Description page of Project Settings.


#include "InGamePC.h"
#include "Blueprint/UserWidget.h"
#include "EnhancedInputSubsystems.h"
#include "EnhancedInputComponent.h"

void AInGamePC::BeginPlay()
{
	Super::BeginPlay();
	
	SetInputMode((FInputModeGameOnly()));
	bShowMouseCursor = false;

	//InventoryWidget = CreateWidget<UUserWidget>(this, InventoryTemplate);

}

void AInGamePC::ShowInventory(bool bshow)
{
}
