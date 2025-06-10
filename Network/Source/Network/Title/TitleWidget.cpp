// Fill out your copyright notice in the Description page of Project Settings.


#include "TitleWidget.h"
#include "Components/EditableTextBox.h"
#include "Components/Button.h"
#include "basePlayerController.h"
#include "../MyGameInstance.h"
#include "Kismet/GameplayStatics.h"





	//�ý��� ���� ���� ���� �� �� ����ϴ� �Լ�
	/*�� �Լ� �ȿ���:
1.��ư�̳� �ؽ�Ʈ ���� UI ������ �ʱ�ȭ�ϰ�,

2.�̺�Ʈ ���ε��� �ϰų�,

3.������ �����ϴ� �۾��� �� �� �ֽ��ϴ�.*/
void UTitleWidget::NativeConstruct()
{
	Super::NativeConstruct();

	//GetWidgetFromName(TEXT("UserIDText"))

	//GetWidgetFromName :  ���� �̸� �����ͼ� ĳ����
	UserIDText = Cast<UEditableTextBox>(GetWidgetFromName(TEXT("UserID")));
	PasswordText = Cast<UEditableTextBox>(GetWidgetFromName(TEXT("Password")));

	ServerIDText = Cast<UEditableTextBox>(GetWidgetFromName(TEXT("ServerIP")));

	StartServerButton = Cast<UButton>(GetWidgetFromName(TEXT("StartServerButton")));
	ConnectButton = Cast<UButton>(GetWidgetFromName(TEXT("Connect")));


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
	//Cast<UMyGameInstance>(UGameplayStatics::GetGameInstance(GetWorld())) ��ȯ�� �����ν��Ͻ��� ����ȯ
	//GetWorld() -> ���� ��ȯ
	UMyGameInstance* GI = Cast<UMyGameInstance>(UGameplayStatics::GetGameInstance(GetWorld()));
	if (GI && UserIDText)
	{
		GI->UserId = UserIDText->GetText().ToString();
	}
}
