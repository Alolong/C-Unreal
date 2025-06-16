// Fill out your copyright notice in the Description page of Project Settings.


#include "InGameHUD.h"
#include "Engine/Canvas.h"
#include "Gameframework/Character.h"
#include "Components/CapsuleComponent.h"



void AInGameHUD::DrawHUD()
{
	//폰을 갖고와서 씀
	ACharacter *Pawn =  Cast<ACharacter>(GetOwningPawn());
	if (IsValid(Pawn))
	{

		Super::DrawHUD();


		float Speed = Pawn->GetVelocity().Size(); // 속력을 비율로
		float SpeedRatio = Speed / 300.0f;// 속도 비율


		//단위로 변경 - 1m = 1티모
		float Unit = Canvas->SizeX / 100.0f;
	

		//중앙의 축 정의?
		float CenterX = Canvas->SizeX / 2.0f;
		float CenterY = Canvas->SizeY / 2.0f;

		/*그리려는 시작점, 끝점 정의
		float CrosshairstartX = CenterX - (unit*4);
		float CrosshairstartY = CenterY - (unit * 2);
		float CrosshairEndX = CenterX + (unit * 2);
		float CrosshairEndY = CenterY + (unit * 2);
		*/

		//DrawLine(시작좌표X, 시작좌표Y, 끝좌표X ,끝좌표 Y , FLinearColor ::컬러,float 두께);
		//DrawLine(0, 0, Canvas->SizeX, Canvas->SizeY, FLinearColor::Red,  2,0f);// 가상의  선 먼저 그려 위치를 확인

		//Left
		DrawLine(CenterX - (Unit * 2) - (Unit * SpeedRatio),//시작점 - 얼마나 떨어지는가(속도만큼)
			CenterY,
			CenterX + (Unit * 2) + (Unit * SpeedRatio),//
			CenterY,
			FLinearColor::Red, 2.0f);


		//Right
		DrawLine(CenterX + (Unit * SpeedRatio),
			CenterY,
			CenterX + (Unit * 2) + (Unit * SpeedRatio),
			CenterY,
			FLinearColor::Red, 2.0f);


		//Up
		DrawLine(CenterX,
			CenterY - (Unit * 2) - (Unit * SpeedRatio),
			CenterX,
			CenterY - (Unit * SpeedRatio),
			FLinearColor::Red, 2.0f);

		//Down
		DrawLine(CenterX,
			CenterY + (Unit * SpeedRatio),
			CenterX,
			CenterY + (Unit * 2) + (Unit * SpeedRatio),
			FLinearColor::Red, 2.0f);

		//AI 페어 프로그래밍. 익스트림 프로그래밍 - 소프트웨어 엔진 방법론
	
	
	//디버깅
		if (bShowHeight)
		{
			FVector FootStep = Pawn->GetActorLocation();
			FootStep.Z -= Pawn->GetCapsuleComponent()->GetScaledCapsuleHalfHeight();
			FVector Height = Pawn->GetActorLocation();
			Height.Z += Pawn->GetCapsuleComponent()->GetScaledCapsuleHalfHeight();

			DrawDebugLine(GetWorld(),
				FootStep,
				Height,
				FColor::Green,
				false,
				0.5f
			);

			DrawDebugCapsule(
				GetWorld(),
				Pawn->GetActorLocation(),
				Pawn->GetCapsuleComponent()->GetScaledCapsuleHalfHeight(),
				Pawn->GetCapsuleComponent()->GetScaledCapsuleRadius(),
				Pawn->GetActorQuat(),
				FColor::Green
			);
		}
	
	}
	


}

void AInGameHUD::ShowHeight()
{
	bShowHeight = (bool)bShowHeight == true ? false : false;
}
