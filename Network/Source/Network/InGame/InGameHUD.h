// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/HUD.h"
#include "Engine/Canvas.h"

#include "InGameHUD.generated.h"
//언제나 제너레이트는 맨 아래
/**
 * 
 */
UCLASS()
class NETWORK_API AInGameHUD : public AHUD
{
	GENERATED_BODY()

public:
	virtual void DrawHUD() override;
	


	int8 bShowHeight : 1;

	UFUNCTION(Exec)
	void ShowHeight();




};
