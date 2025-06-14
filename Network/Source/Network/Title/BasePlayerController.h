// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/PlayerController.h"
#include "BasePlayerController.generated.h"

/**
 * 
 */
UCLASS()
class NETWORK_API ABasePlayerController : public APlayerController
{
	GENERATED_BODY()

public:
	void StartServer();

	void ConnectClient(FText ServerIP);
};
