// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/PlayerController.h"
#include "InGamePC.generated.h"

/**
 * 
 */
class UInputAction;


UCLASS()
class NETWORK_API AInGamePC : public APlayerController
{
	GENERATED_BODY()
public: 
	
	virtual void BeginPlay() override;

	UPROPERTY(BlueprintReadWrite, Category = "UI",EditAnywhere)
	TObjectPtr <UUserWidget> InventoryWidget;
	UPROPERTY(BlueprintReadWrite, Category = "UI", EditAnywhere)
	TObjectPtr <UUserWidget> InventoryTemplate;

	UFUNCTION()
	void ShowInventory(bool bShow);

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "UI")
	uint32 bShowInventory : 1;

	UPROPERTY(EditAnywhere, Category = "Input", BlueprintReadWrite)
	TObjectPtr<UInputAction> InventoryInput;

	void SwitchInventory();

	virtual void SetupInputComponent() override;

};
