// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/GameStateBase.h"
#include "LobbyGS.generated.h"

/**
* ���� ������Ʈ
 * 1. ���� ī��Ʈ ����
 * 2. ���� ī��Ʈ�ٿ� ����
 */
UCLASS()
class NETWORK_API ALobbyGS : public AGameStateBase
{
	GENERATED_BODY()
public:

	//Uint16 ��ȣ���� 16��Ʈ ������ - ���� ���� �� �� ���: ������ ���̱�
	//ReplicatedUsing- ������ ��Ʈ��ũ ����ȭ �ɶ� ȣ���� �Լ� ����
	UPROPERTY(ReplicatedUsing = "OnRep_LeftTime")
	uint16 LeftTime = 10;

	UPROPERTY(ReplicatedUsing = OnRep_ConnectCount)
	uint16 ConnectCount = 0;

	UFUNCTION()
	void OnRep_LeftTime();
	UFUNCTION()
	void OnRep_ConnectCount();

	//���ø�����Ʈ ����- lefttime�� connecttime�� ���������ִ� �Լ�
	virtual void GetLifetimeReplicatedProps(TArray< FLifetimeProperty >& OutLifetimeProps) const override;

};
