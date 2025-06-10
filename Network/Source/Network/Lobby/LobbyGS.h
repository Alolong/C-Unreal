// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/GameStateBase.h"
#include "LobbyGS.generated.h"

/**
* 게임 스테이트
 * 1. 접속 카운트 세기
 * 2. 시작 카운트다운 세기
 */
UCLASS()
class NETWORK_API ALobbyGS : public AGameStateBase
{
	GENERATED_BODY()
public:

	//Uint16 부호없는 16비트 정수형 - 작은 값을 쓸 때 사용: 사이즈 줄이기
	//ReplicatedUsing- 변수가 네트워크 동기화 될때 호출할 함수 지정
	UPROPERTY(ReplicatedUsing = "OnRep_LeftTime")
	uint16 LeftTime = 10;

	UPROPERTY(ReplicatedUsing = OnRep_ConnectCount)
	uint16 ConnectCount = 0;

	UFUNCTION()
	void OnRep_LeftTime();
	UFUNCTION()
	void OnRep_ConnectCount();

	//리플리케이트 연동- lefttime과 connecttime을 연동시켜주는 함수
	virtual void GetLifetimeReplicatedProps(TArray< FLifetimeProperty >& OutLifetimeProps) const override;

};
