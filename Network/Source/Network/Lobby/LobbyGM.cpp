// Fill out your copyright notice in the Description page of Project Settings.


#include "LobbyGM.h"
#include "LobbyGS.h"
#include "Engine/World.h"
#include "Kismet/KismetSystemLibrary.h"
#include "TimerManager.h"
#include "Kismet/GameplayStatics.h"

//�𸮾� Ŭ���̾�Ʈ- ������ �޾ƿ�, �游��� ��й�ȣ ���
void ALobbyGM::PreLogin(const FString& Options, const FString& Address, const FUniqueNetIdRepl& UniqueId, FString& ErrorMessage)
{

	Super::PreLogin(Options, Address, UniqueId, ErrorMessage);



	UE_LOG(LogTemp, Warning, TEXT("PreLogin: %s%s"), *Options, *Address);

	//ErrorMessage = TEXT("GetOut");


}
//NewPlayer - ��Ʈ��ũ �ӵ� �����ְ� �˷��� 
APlayerController* ALobbyGM::Login(UPlayer* NewPlayer, ENetRole InRemoteRole, const FString& Portal, const FString& Options, const FUniqueNetIdRepl& UniqueId, FString& ErrorMessage)
{
	return Super::Login(NewPlayer, InRemoteRole, Portal, Options, UniqueId, ErrorMessage);


	//UE_LOG(LogTemp, Warning, TEXT("Login: %d%s"), InRemoteRole, *Options);

	
}

void ALobbyGM::PostLogin(APlayerController* NewPlayer)
{
	Super::PostLogin(NewPlayer);

		//GetName
		UE_LOG(LogTemp, Warning, TEXT("PostLogin : %s"), *NewPlayer->GetName());


		
		CountConnect();
	
		
			//
}

void ALobbyGM::Logout(AController* Exiting)
{
	CountConnect();

}
//���Ӹ�� ��ü�� ����
void ALobbyGM::CountConnect()
{
	uint16 ConnectCount = 0;
	//GetPlayerControllerIterator - �÷��̾� ��Ʈ�ѷ��� �ϳ��� ��ȸ�� �� �ִ� �ݺ���
	// Iterator : �ݺ���
	//Iter -> �ݺ�
	//���� ���忡�� �����ϴ� ��� �÷��̾� ��Ʈ�ѷ� ���� ���� ����
	for(auto Iter = GetWorld()->GetPlayerControllerIterator(); Iter;++Iter)
	{
		ConnectCount++;

	}

}

//�ð����ʸ��� -1�ϴ� ����
void ALobbyGM::BeginPlay()
{
	Super::BeginPlay();
	GetWorld()->GetTimerManager().SetTimer
	(
		LeftTimeHandle,
		this,
		&ALobbyGM::DecreaseTime,
		1.0f,
		true
	);
}

void ALobbyGM::DecreaseTime()
{
	ALobbyGS* GS = GetGameState<ALobbyGS>();
	if (GS)
	{
		GS->LeftTime--;
		if (GS->LeftTime == 0)
		{
			//UKismetSystemLibrary::K2_ClearTimer(this, TEXT("DecreaseTime"));
			GetWorld()->GetTimerManager().ClearTimer(LeftTimeHandle);
		}
		GS->LeftTime = FMath::Clamp(GS->LeftTime, 0, 60); // �� ���� 0 ���� 60����
		GS->OnRep_LeftTime(); //Server, client auto execute
	}



}

void ALobbyGM::StartGame()
{
	GetWorld()->ServerTravel(TEXT("InGame"));
}
