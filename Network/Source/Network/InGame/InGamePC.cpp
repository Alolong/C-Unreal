// Fill out your copyright notice in the Description page of Project Settings.


#include "InGamePC.h"
#include "Blueprint/UserWidget.h"
#include "EnhancedInputSubsystems.h"
#include "EnhancedInputComponent.h"

void AInGamePC::BeginPlay()
{
	Super::BeginPlay();
	//FinputModeGameOnly
	SetInputMode((FInputModeGameOnly()));
	bShowMouseCursor = false;//기본값 false

	//로컬플레이어 컨트롤러반환할시,
	if (IsLocalPlayerController())
	{
		InventoryWidget = CreateWidget<UUserWidget>(this, InventoryTemplate);
		
		InventoryWidget->AddToViewport();
		InventoryWidget->SetVisibility(ESlateVisibility::Collapsed);
		bShowInventory = false;//인벤토리 기본값 false
	}
}

void AInGamePC::ShowInventory(bool bShow)
{
	//인풋, 인벤토리 가시성 visible화, 체크,
	if (bShow)
	{
		bShowMouseCursor = true;
		SetInputMode((FInputModeGameAndUI()));//GameAndUI

		bShowInventory = bShow;//true

		InventoryWidget->SetVisibility(ESlateVisibility::Visible);
	}
	else 
	{
		bShowMouseCursor = false;
		SetInputMode((FInputModeGameOnly()));//GameOnly
		bShowInventory = bShow;//false
		InventoryWidget->SetVisibility(ESlateVisibility::Collapsed);
	}


}
//인벤토리 키  EnhancedInputComponent로 바인딩
void AInGamePC::SwitchInventory()
{
	Super::SetupInputComponent();
	UEnhancedInputComponent* UIC = Cast<UEnhancedInputComponent>(InputComponent);
	if (IsValid(UIC))
	{
		UIC->BindAction(InventoryInput, ETriggerEvent::Completed, this, &AInGamePC::SwitchInventory);
	}

}

void AInGamePC::SetupInputComponent()
{
	bShowInventory = !bShowInventory;
	ShowInventory(bShowInventory)
}
