// Fill out your copyright notice in the Description page of Project Settings.


#include "TitleWidget.h"
#include "Components/EditableTextBox.h"
#include "Components/Button.h"
#include "basePlayerController.h"
#include "../MyGameInstance.h"
#include "Kismet/GameplayStatics.h"





	//시스템 위에 위젯 생성 될 시 사용하는 함수
	/*이 함수 안에서:
1.버튼이나 텍스트 같은 UI 위젯을 초기화하고,

2.이벤트 바인딩을 하거나,

3.변수를 설정하는 작업을 할 수 있습니다.*/
void UTitleWidget::NativeConstruct()
{
	Super::NativeConstruct();

	//GetWidgetFromName(TEXT("UserIDText"))

	//GetWidgetFromName :  위젯 이름 가져와서 캐스팅
	UserIDText = Cast<UEditableTextBox>(GetWidgetFromName(TEXT("UserID")));
	PasswordText = Cast<UEditableTextBox>(GetWidgetFromName(TEXT("Password")));

	ServerIDText = Cast<UEditableTextBox>(GetWidgetFromName(TEXT("ServerIP")));

	StartServerButton = Cast<UButton>(GetWidgetFromName(TEXT("StartServerButton")));
	ConnectButton = Cast<UButton>(GetWidgetFromName(TEXT("Connect")));


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
	//Cast<UMyGameInstance>(UGameplayStatics::GetGameInstance(GetWorld())) 반환한 월드인스턴스를 형변환
	//GetWorld() -> 월드 반환
	UMyGameInstance* GI = Cast<UMyGameInstance>(UGameplayStatics::GetGameInstance(GetWorld()));
	if (GI && UserIDText)
	{
		GI->UserId = UserIDText->GetText().ToString();
	}
}
