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
		//OnClicked.AddDynamic(��� ��ü, �Լ� �̸�): �𸮾� �������� ��������Ʈ �ý����� ���, �̺�Ʈ�� �Լ�(�޼���)�� ���ε��ϴ� ��
		//�ٸ������ ���ε��� ���̳���, ������Ʈ,����,���� �ִ�.
		StartServerButton->OnClicked.AddDynamic(this, &UTitleWidget::OnClickServerStartButton);
	}
	if (ConnectButton)
	{
		ConnectButton->OnClicked.AddDynamic(this, &UTitleWidget::OnClickConnectButton);
	}

}

//���� ��ŸƮ ���
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
