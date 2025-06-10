// Fill out your copyright notice in the Description page of Project Settings.


#include "LobbyGS.h"
#include "Net/UnrealNetwork.h"
#include "LobbyPC.h"
#include "Kismet/GameplayStatics.h"
#include "LobbyWidget.h"
#include "Components/TextBlock.h"

//�� ���� ��� 
//1. �÷��̾���Ʈ�ѷ� ����ȯ-> PC��
//2. LeftTime- ������ �����ϱ�

void ALobbyGS::OnRep_LeftTime()
{
	ALobbyPC* PC = Cast<ALobbyPC>(UGameplayStatics::GetPlayerController(GetWorld(), 0));
	if (PC)
	{
		//LeftTime�� FString�� Temp�� �ܼ�ȭ
		FString Temp = FString::Printf(TEXT("%d�� ����"), LeftTime);
		if (PC->WidgetObject)
		{
			//#include "Components/TextBlock.h" �ʿ�(SetText�Լ�)
			//����������Ʈ�� �ؽ�Ʈ�ڽ��� �ؽ�Ʈ�� Temp�� ��Ÿ��
			PC->WidgetObject->LeftTimeText->SetText(FText::FromString(Temp));
		}
	}
}

//���� ī��Ʈ����
//1. �÷��̾���Ʈ�ѷ� ����ȯ-> PC��
//2. ConnectCount - ������ �����ϱ�
void ALobbyGS::OnRep_ConnectCount()
{
	ALobbyPC* PC = Cast<ALobbyPC>(UGameplayStatics::GetPlayerController(GetWorld(), 0));

	if (PC)
	{
		FString Temp = FString::Printf(TEXT("%d�� ����"), ConnectCount);
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

	//DOREPLIFETIME include�� Net�ʿ� ����
	DOREPLIFETIME(ALobbyGS, LeftTime);
	DOREPLIFETIME(ALobbyGS, ConnectCount);
}
