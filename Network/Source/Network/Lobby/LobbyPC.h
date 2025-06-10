// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/PlayerController.h"
#include "LobbyPC.generated.h"


class ULobbyWidget;
/**
 * 로비 플레이어 컨트롤러
 * 1. 위젯 오브젝트 변수
 * 2. 서버와 클라간 통신
 * 
 */



UCLASS()
class NETWORK_API ALobbyPC : public APlayerController
{
	GENERATED_BODY()


public:
	virtual void BeginPlay() override;


	UPROPERTY(VisibleAnywhere, Category = "UI", BlueprintReadOnly)
	TObjectPtr<ULobbyWidget> WidgetObject;


	UFUNCTION(server,Reliable,WithValidation)//서버에서 실행,엔진에서 구현-응답 받을 때까지 계속 보냄 (Reliable 확실하게 보내야할 것만)// Unreliable은 받아도 안받아도 보냄, 검증
	void C2S_SendMessage(const FText  & Message);//클라에서 서버로
	bool C2S_SendMessage_Validate(class FText const& Message);//서버에서 검증
	void C2S_SendMessage_Implementation(class FText const& Message);//서버에서 작동



	UFUNCTION(Client,Reliable)
	void S2C_SendMessage(const FText  & Message);//서버에서 클라로

	void S2C_SendMessage_Implementation(const FText& Message);//클라에서 작동 
};