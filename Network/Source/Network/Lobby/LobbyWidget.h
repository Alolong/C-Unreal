// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "LobbyWidget.generated.h"


class UScrollBox;
class UButton;
class UTextBlock;
class UEditableTextBox;


/**
* �κ� ����
* 1. �κ� ������ �ʿ��� ������ , ������� 
*	
* 2. ������ �ʿ��� �Լ���
*	1. ���� ���̰�
*	2. ä�� ���� - �÷��̾� ��Ʈ�ѷ����� ���� ���
*	3. ���� ���(���۹�ư)
*	4. �޼��� �ۼ����
 * 
 */
UCLASS()
class NETWORK_API ULobbyWidget : public UUserWidget
{
	GENERATED_BODY()
public:
	UPROPERTY(meta = (BindWidget), BlueprintReadWrite, Category = "UI", EditAnywhere)
	TObjectPtr<UTextBlock> LeftTimeText;

	UPROPERTY(meta = (BindWidget), BlueprintReadWrite, Category = "UI", EditAnywhere)
	TObjectPtr<UTextBlock> ConnectCountText;

	UPROPERTY(meta = (BindWidget), BlueprintReadWrite, Category = "UI", EditAnywhere)
	TObjectPtr<UScrollBox> ChatScroll;


	UPROPERTY(meta = (BindWidget), BlueprintReadWrite, Category = "UI", EditAnywhere)
	TObjectPtr<UButton> ChatEnterButton;

	UPROPERTY(meta = (BindWidget), BlueprintReadWrite, Category = "UI", EditAnywhere)
	TObjectPtr<UButton> StartButton;


	UPROPERTY(meta = (BindWidget), BlueprintReadWrite, Category = "UI", EditAnywhere)
	TObjectPtr<UEditableTextBox> ChatInput;

	//
	virtual void NativeConstruct() override;


	UFUNCTION()
	void Start();
	UFUNCTION()
	void EnterChat();

	UFUNCTION()
	void OnChangedEvent(const FText& Text);	//�ؽ�Ʈ �ۼ�


	UFUNCTION()
	// ���͸� �ƴ°�
	void OnCommitEvent(const FText& Text, ETextCommit::Type CommitMethod);


	void ShowStartButton();


	void AddMessage(const FText& Text);


	virtual void NativeTick(const FGeometry& MyGeometry, float InDeltaTime) override;

};