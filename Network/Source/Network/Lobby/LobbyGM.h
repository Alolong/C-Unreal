// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/GameModeBase.h"
#include "LobbyGM.generated.h"

/**
 * 
 */
UCLASS()
class NETWORK_API ALobbyGM : public AGameModeBase
{
	GENERATED_BODY()
	
	virtual void PreLogin(const FString& Options, const FString& Address, const FUniqueNetIdRepl& UniqueId, FString& ErrorMessage) override;


	virtual APlayerController* Login(UPlayer* NewPlayer, ENetRole InRemoteRole, const FString& Portal, const FString& Options, const FUniqueNetIdRepl& UniqueId, FString& ErrorMessage) override;

	//
	 virtual void PostLogin(APlayerController* NewPlayer) override;

	 //빌드하거나 따로 만들어야함
	 virtual void Logout(AController* Exiting)override;

	 void CountConnect();


	 virtual void BeginPlay() override;


	 UFUNCTION()
	 void DecreaseTime();

	 void StarGame();

	 FTimerHandle LeftTimeHandle;





};
