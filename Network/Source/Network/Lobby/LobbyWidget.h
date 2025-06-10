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
* 로비 위젯
* 1. 로비 위젯에 필요한 변수들 , 구성요소 
*	
* 2. 위젯에 필요한 함수들
*	1. 위젯 보이게
*	2. 채팅 엔터 - 플레이어 컨트롤러에서 서버 통신
*	3. 시작 기능(시작버튼)
*	4. 메세지 작성기능
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
	void OnChangedEvent(const FText& Text);	//텍스트 작성


	UFUNCTION()
	// 엔터를 쳤는가
	void OnCommitEvent(const FText& Text, ETextCommit::Type CommitMethod);


	void ShowStartButton();


	void AddMessage(const FText& Text);


	virtual void NativeTick(const FGeometry& MyGeometry, float InDeltaTime) override;

};