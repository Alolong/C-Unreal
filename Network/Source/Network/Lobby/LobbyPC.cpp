// Fill out your copyright notice in the Description page of Project Settings.
#include "LobbyPC.h"

#include "LobbyWidget.h"


//Server,Client
void ALobbyPC::BeginPlay()
{
	Super::BeginPlay();

	//#include "WB_Lobby" �ϴ� ������ �Լ�
	//TEXT("")- ��� ���۷��� ���� �� _C ���̱�-�������Ʈ Ŭ���� ��Ÿ�� ����
	FSoftClassPath LobbyWidgetPath(TEXT("/Script/UMGEditor.WidgetBlueprint'/Game/BP/Lobby/WB_Lobby.WB_Lobby_C'"));

	UClass* WidgetClass = LobbyWidgetPath.TryLoadClass<ULobbyWidget>();
	if (WidgetClass)
	{

		if(IsLocalPlayerController())
		{

			//ULobbyWidgetBase *(WidgetObject = new WB_Lobby
			WidgetObject = CreateWidget<ULobbyWidget>(this, WidgetClass);


			//Liseten Server(Client), Client
			WidgetObject->AddToViewport();

			if (HasAuthority())
			{
			WidgetObject->ShowStartButton();

			}

			bShowMouseCursor = true;

			SetInputMode(FInputModeGameAndUI());



		}

	}

}




bool ALobbyPC::C2S_SendMessage_Validate( FText const& Message)
{

	return true;

}

void ALobbyPC::C2S_SendMessage_Implementation( FText const& Message)
{
	//at Server
	//������ ���� �ϴ� �ٽ� �����ִ�
	UE_LOG(LogTemp, Warning, TEXT("server %s"), *Message.ToString());
	
	
	//Iter- �ݺ�
	//GetPlayerControllerIterator() ��ȸŽ��
	for (auto Iter = GetWorld()->GetPlayerControllerIterator(); Iter; ++Iter)
	{
		ALobbyPC* PC = Cast<ALobbyPC>(*Iter);
		if (IsValid(PC))
		{
			PC->S2C_SendMessage(Message);
		}
	}
}
/// <summary>
/// �޼��� ������
/// </summary>
/// <param name="Message"></param>
void ALobbyPC::S2C_SendMessage_Implementation(const FText& Message)
{
	UE_LOG(LogTemp, Warning, TEXT("client %s"), *Message.ToString());
	if (WidgetObject)
	{
		WidgetObject->AddMessage(Message);
	}
}
