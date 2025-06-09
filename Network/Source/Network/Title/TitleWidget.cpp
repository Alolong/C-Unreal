// Fill out your copyright notice in the Description page of Project Settings.


#include "TitleWidget.h"
#include "Components/EditableTextBox.h"
#include "Components/Button.h"
#include "../BasePlayerController.h"
#include "../MyGameInstance.h"
#include "Kismet/GameplayStatics.h"





void UTitleWidget::NativeConstruct()
{
	Super::NativeConstruct();

	//GetWidgetFromName(TEXT("UserIDText"))


	UserIDText = Cast<UEditableTextBox>(GetWidgetFromName(TEXT("UserIDText")));

	ServerIDText = Cast<UEditableTextBox>(GetWidgetFromName(TEXT("ServerIDText")));
	PasswordText = Cast<UEditableTextBox>(GetWidgetFromName(TEXT("PasswordText")));

	StartServerButton = Cast<UButton>(GetWidgetFromName(TEXT("StartServerButton")));
	ConnectButton = Cast<UButton>(GetWidgetFromName(TEXT("ConnectButton")));


	if (StartServerButton)
	{
		//OnClicked.AddDynamic(대상 객체, 함수 이름): 언리얼 엔진에서 델리게이트 시스템을 사용, 이벤트에 함수(메서드)를 바인딩하는 것
		//다른방식의 바인딩은 다이나믹, 오브젝트,람다,등이 있다.
		StartServerButton->OnClicked.AddDynamic(this, &UTitleWidget::OnClickServerStartButton);
	}
	if (ConnectButton)
	{
		ConnectButton->OnClicked.AddDynamic(this, &UTitleWidget::OnClickConnectButton);
	}

}

//서버 스타트 기능
void UTitleWidget::OnClickServerStartButton()
{
	UE_LOG(LogTemp, Warning, TEXT("ServerStarted"));
	SaveUserId();


	ABasePlayerController* PC = Cast<ABasePlayerController>(GetOwningPlayer());
	if (PC)
	{
		PC->StartServer();
	}



}

void UTitleWidget::OnClickConnectButton()
{
	UE_LOG(LogTemp, Warning, TEXT("Connected"));
	SaveUserId();

	ABasePlayerController* PC = Cast<ABasePlayerController>(GetOwningPlayer());

	if (PC && ServerIPText)
	{
		PC->ConnectClient(ServerIPText->GetText());
	}
}

void UTitleWidget::SaveUserId()
{
	UMyGameInstance* GI = Cast<UMyGameInstance>(UGameplayStatics::GetGameInstance(GetWorld()));
	if (GI && UserIDText)
	{
		GI->UserId = UserIDText->GetText().ToString();
	}
}
