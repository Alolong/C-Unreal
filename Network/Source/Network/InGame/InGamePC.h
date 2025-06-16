// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/PlayerController.h"
#include "InGamePC.generated.h"

/**
 * 
 */
class UUserWidget;


UCLASS()
class NETWORK_API AInGamePC : public APlayerController
{
	GENERATED_BODY()
public: 
	
	virtual void BeginPlay() override;


	UFUNCTION()
	void ShowInventory(bool bshow);



	UPROPERTY(BlueprintReadWrite, Category = "Widget",EditAnywhere)
	TObjectPtr <UUserWidget> InventoryWidget;
	UPROPERTY(BlueprintReadWrite, Category = "Widget", EditAnywhere)
	TObjectPtr <UUserWidget> InventoryTemplate;
};
