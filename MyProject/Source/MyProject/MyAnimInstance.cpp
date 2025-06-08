// Fill out your copyright notice in the Description page of Project Settings.


#include "MyAnimInstance.h"
#include "MyCharacter.h"
#include "GameframeWork/CharacterMovementComponent.h"
#include "KismetAnimationLibrary.h"//애니메이션 계산관련 라이브러리 //빌드에 AnimGraphRuntime포함

void UMyAnimInstance::NativeUpdateAnimation(float DeltaSeconds)
{
	//Pawn 정보를 가져온다.
	//Pawn의 속성을 멤버 변수로 만든다.
	//Pawn의 정보를 가져옴
	Super::NativeUpdateAnimation(DeltaSeconds);

	//애니 인스턴스가 바인딩된 폰을  AMyCharacter형 폰으로 가져온다. 
	//TryGetPawnOwner는 애니메이션 인스턴스가 바인딩된 폰을 가져옴
	AMyCharacter* Pawn = Cast<AMyCharacter>(TryGetPawnOwner());
	if (IsValid(Pawn))
	{

		
		Speed = Pawn->GetCharacterMovement()->Velocity.Size2D();
		bIsCrouched = !Pawn->CanCrouch();//예외처리 "이 Pawn이 앉을 수 없는 상태라면 bIsCrouched를 true로 간주하자"

		//방향 계산 함수 CalculateDirection(velocity,Rotation)
		Direction = UKismetAnimationLibrary::CalculateDirection(Pawn->GetCharacterMovement()->Velocity,
			Pawn->GetActorRotation());
	
		//Pawn의 변수를 갖고옴
		bIsFire = Pawn->bIsFire;
		bIsLeftLean = Pawn->bIsLeftLean;
		bIsRightLean = Pawn->bIsRightLean;
	
		
		//왼쪽 각도 설정
		if (bIsLeftLean)
		{
			TargetSpineAngle = -30.0f;
		}

		if (bIsRightLean)
		{
			TargetSpineAngle = 30.0f;
		}
		//둘다 아닌 경우 && and
		if (!bIsRightLean && !bIsLeftLean)
		{
			TargetSpineAngle = 0.0f;
		}


		//
		CurrentSpineAngle = FMath::FInterpTo(CurrentSpineAngle, TargetSpineAngle, DeltaSeconds, 8.0f);


		AimYaw = Pawn->GetBaseAimRotation().Yaw;
		AimPitch = Pawn->GetBaseAimRotation().Pitch;
	

	}

}
//Animnotify
void UMyAnimInstance::AnimNotify_HelloWorldCpp(UAnimNotify* Notify)
{
	UE_LOG(LogTemp, Warning, TEXT("HelloWorldCPP"));
}
