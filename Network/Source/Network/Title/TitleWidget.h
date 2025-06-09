// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "TitleWidget.generated.h"

/**
 * 
 */


class UEditableTextBox;
class UButton;

UCLASS()
class NETWORK_API UTitleWidget : public UUserWidget
{
	GENERATED_BODY()
	
public:
	//시스템 위에 위젯 생성 될 시 사용하는 함수
	/*이 함수 안에서:
버튼이나 텍스트 같은 UI 위젯을 초기화하고,

이벤트 바인딩을 하거나,

변수를 설정하는 작업을 할 수 있습니다.*/
	virtual void NativeConstruct() override;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category="Components")
	TObjectPtr<UEditableTextBox> UserIDText;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Components")
	TObjectPtr<UEditableTextBox> PasswordText;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Components")
	TObjectPtr<UEditableTextBox> ServerIDText;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Components")
	TObjectPtr<UButton> StartServerButton;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Components")
	TObjectPtr<UButton> ConnectButton;


	UPROPERTY(VisibleAnywhere, Category = "Components", BlueprintReadOnly)
	TObjectPtr<UEditableTextBox> ServerIPText;

	UFUNCTION()
	void OnClickServerStartButton();
	UFUNCTION()
	void OnClickConnectButton();


	void SaveUserId();
};
