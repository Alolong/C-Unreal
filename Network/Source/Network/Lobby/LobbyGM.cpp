// Fill out your copyright notice in the Description page of Project Settings.


#include "LobbyGM.h"
#include "LobbyGS.h"
#include "Engine/World.h"
#include "Kismet/KismetSystemLibrary.h"
#include "TimerManager.h"
#include "Kismet/GameplayStatics.h"

//언리얼 클라이언트- 서버에 받아옴, 방만들고 비밀번호 등등
void ALobbyGM::PreLogin(const FString& Options, const FString& Address, const FUniqueNetIdRepl& UniqueId, FString& ErrorMessage)
{

	Super::PreLogin(Options, Address, UniqueId, ErrorMessage);



	UE_LOG(LogTemp, Warning, TEXT("PreLogin: %s%s"), *Options, *Address);

	//ErrorMessage = TEXT("GetOut");


}
//NewPlayer - 네트워크 속도 맞춰주고 알려줌 
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
//게임모드 자체가 서버
void ALobbyGM::CountConnect()
{
	uint16 ConnectCount = 0;
	//GetPlayerControllerIterator - 플레이어 컨트롤러를 하나씩 순회할 수 있는 반복자
	// Iterator : 반복자
	//Iter -> 반복
	//현재 월드에서 존재하는 모든 플레이어 컨트롤러 수를 세는 로직
	for(auto Iter = GetWorld()->GetPlayerControllerIterator(); Iter;++Iter)
	{
		ConnectCount++;

	}

}

//시간매초마다 -1하는 로직
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
		GS->LeftTime = FMath::Clamp(GS->LeftTime, 0, 60); // 초 제한 0 부터 60까지
		GS->OnRep_LeftTime(); //Server, client auto execute
	}



}

void ALobbyGM::StartGame()
{
	GetWorld()->ServerTravel(TEXT("InGame"));
}
