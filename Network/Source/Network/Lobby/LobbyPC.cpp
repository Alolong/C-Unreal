// Fill out your copyright notice in the Description page of Project Settings.
#include "LobbyPC.h"

#include "LobbyWidget.h"


//Server,Client
void ALobbyPC::BeginPlay()
{
	Super::BeginPlay();

	//#include "WB_Lobby" 하는 느낌의 함수
	//TEXT("")- 대상 레퍼런스 복사 후 _C 붙이기-블루프린트 클래스 런타임 참조
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
	//정보를 가공 하던 다시 보내주던
	UE_LOG(LogTemp, Warning, TEXT("server %s"), *Message.ToString());
	
	
	//Iter- 반복
	//GetPlayerControllerIterator() 순회탐색
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
/// 메세지 보내기
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
