// Fill out your copyright notice in the Description page of Project Settings.


#include "LobbyWidget.h"
#include "Components/Button.h"
#include "Components/ScrollBox.h"
#include "Components/EditableTextBox.h"
#include "Components/TextBlock.h"
#include "Kismet/GameplayStatics.h"
#include "LobbyPC.h"
#include "LobbyGS.h"
#include "LobbyGM.h"
//Nativeconstruct: 위젯이 생성(구성)될 때 호출됩니다. 초기화 로직 작성에 사용. BeginPlay와 유사.

void ULobbyWidget::NativeConstruct()
{
	Super::NativeConstruct();

	if (StartButton)
	{
		StartButton->OnClicked.AddDynamic(this, &ULobbyWidget::Start);
	}

	if (ChatEnterButton)
	{
		ChatEnterButton->OnClicked.AddDynamic(this, &ULobbyWidget::EnterChat);
	}

	if (ChatInput)
	{
		ChatInput->OnTextChanged.AddDynamic(this, &ULobbyWidget::OnChangedEvent);

		ChatInput->OnTextCommitted.AddDynamic(this, &ULobbyWidget::OnCommitEvent);
	}
}
//스타트 게임 버튼의 함수
//게임모드 형변환 ->게임 스타트 함수 실행
void ULobbyWidget::Start()
{
	ALobbyGM* GM = Cast<ALobbyGM>(UGameplayStatics::GetGameMode(GetWorld()));
	if (GM)
	{
		GM->StartGame();
	}
}

void ULobbyWidget::EnterChat()
{
	ALobbyPC* PC = Cast<ALobbyPC>(GetOwningPlayer());
	if (PC)
	{
		PC->C2S_SendMessage(ChatInput->GetText());
	}
}

//연구 필요 텍스트 작성
void ULobbyWidget::OnChangedEvent(const FText& Text)
{
	FString Temp = Text.ToString();//변수에 함수 대입

	Temp = Temp.Replace(TEXT("바보"), TEXT("**"));

	ChatInput->SetText(FText::FromString(Temp));

	UE_LOG(LogTemp, Warning, TEXT("%s"), *Temp);
}

void ULobbyWidget::OnCommitEvent(const FText& Text, ETextCommit::Type CommitMethod)
{
	switch (CommitMethod)
	{
	case ETextCommit::OnEnter: //Enum 엔터 눌렀을시
	{
		ALobbyPC* PC = Cast<ALobbyPC>(GetOwningPlayer());
		if (PC)
		{
			PC->C2S_SendMessage(ChatInput->GetText());
			ChatInput->SetText(FText::FromString(TEXT("")));
		}
	}
	case ETextCommit::OnCleared:
	{
		ChatInput->SetUserFocus(GetOwningPlayer());
	}
	}
}

//시작버튼 보이기
void ULobbyWidget::ShowStartButton()
{
	if (StartButton)
	{
		StartButton->SetVisibility(ESlateVisibility::Visible);
	}
}

void ULobbyWidget::AddMessage(const FText& Text)
{
	UTextBlock* NewMessage = NewObject<UTextBlock>(ChatScroll);
	if(IsValid(NewMessage))
	{
		
		NewMessage->SetText(Text);
		FSlateFontInfo NewFont = NewMessage->GetFont();
		NewFont.Size = 18;
		NewMessage->SetFont(NewFont);

		ChatScroll->AddChild(NewMessage);
		ChatScroll->ScrollToEnd();
	}
}

void ULobbyWidget::NativeTick(const FGeometry& MyGeometry, float InDeltaTime)
{
	Super::NativeTick(MyGeometry, InDeltaTime);

	
}
