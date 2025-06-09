// Fill out your copyright notice in the Description page of Project Settings.


#include "BasePlayerController.h"
#include "Kismet/GameplayStatics.h"

void ABasePlayerController::StartServer()
{
	UGameplayStatics::OpenLevel(GetWorld(), FName("Lobby"), true, TEXT("Listen"));
}

void ABasePlayerController::ConnectClient(FText ServerIP)
{
	UGameplayStatics::OpenLevel(GetWorld(), FName(ServerIP.ToString()));

}
