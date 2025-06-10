// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/PlayerController.h"
#include "LobbyPC.generated.h"


class ULobbyWidget;
/**
 * �κ� �÷��̾� ��Ʈ�ѷ�
 * 1. ���� ������Ʈ ����
 * 2. ������ Ŭ�� ���
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


	UFUNCTION(server,Reliable,WithValidation)//�������� ����,�������� ����-���� ���� ������ ��� ���� (Reliable Ȯ���ϰ� �������� �͸�)// Unreliable�� �޾Ƶ� �ȹ޾Ƶ� ����, ����
	void C2S_SendMessage(const FText  & Message);//Ŭ�󿡼� ������
	bool C2S_SendMessage_Validate(class FText const& Message);//�������� ����
	void C2S_SendMessage_Implementation(class FText const& Message);//�������� �۵�



	UFUNCTION(Client,Reliable)
	void S2C_SendMessage(const FText  & Message);//�������� Ŭ���

	void S2C_SendMessage_Implementation(const FText& Message);//Ŭ�󿡼� �۵� 
};