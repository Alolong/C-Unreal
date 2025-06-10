// Fill out your copyright notice in the Description page of Project Settings.


#include "LobbyGS.h"
#include "Net/UnrealNetwork.h"
#include "LobbyPC.h"
#include "Kismet/GameplayStatics.h"
#include "LobbyWidget.h"
#include "Components/TextBlock.h"

//초 세는 기능 
//1. 플레이어컨트롤러 형변환-> PC로
//2. LeftTime- 위젯에 연결하기

void ALobbyGS::OnRep_LeftTime()
{
	ALobbyPC* PC = Cast<ALobbyPC>(UGameplayStatics::GetPlayerController(GetWorld(), 0));
	if (PC)
	{
		//LeftTime을 FString형 Temp로 단순화
		FString Temp = FString::Printf(TEXT("%d초 남음"), LeftTime);
		if (PC->WidgetObject)
		{
			//#include "Components/TextBlock.h" 필요(SetText함수)
			//위젯오브젝트의 텍스트박스의 텍스트를 Temp로 나타냄
			PC->WidgetObject->LeftTimeText->SetText(FText::FromString(Temp));
		}
	}
}

//접속 카운트세기
//1. 플레이어컨트롤러 형변환-> PC로
//2. ConnectCount - 위젯에 연결하기
void ALobbyGS::OnRep_ConnectCount()
{
	ALobbyPC* PC = Cast<ALobbyPC>(UGameplayStatics::GetPlayerController(GetWorld(), 0));

	if (PC)
	{
		FString Temp = FString::Printf(TEXT("%d명 접속"), ConnectCount);
		if (PC->WidgetObject)
		{
			PC->WidgetObject->ConnectCountText->SetText(FText::FromString(Temp));
		}
	}
}

//
void ALobbyGS::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const
{
	Super::GetLifetimeReplicatedProps(OutLifetimeProps);

	//DOREPLIFETIME include의 Net쪽에 있음
	DOREPLIFETIME(ALobbyGS, LeftTime);
	DOREPLIFETIME(ALobbyGS, ConnectCount);
}
