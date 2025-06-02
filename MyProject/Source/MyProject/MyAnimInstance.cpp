// Fill out your copyright notice in the Description page of Project Settings.


#include "MyAnimInstance.h"
#include "MyCharacter.h"
#include "GameframeWork/CharacterMovementComponent.h"
#include "KismetAnimationLibrary.h"//�ִϸ��̼� ������ ���̺귯�� //���忡 AnimGraphRuntime����

void UMyAnimInstance::NativeUpdateAnimation(float DeltaSeconds)
{
	//Pawn ������ �����´�.
	//Pawn�� �Ӽ��� ��� ������ �����.
	//Pawn�� ������ ������
	Super::NativeUpdateAnimation(DeltaSeconds);

	AMyCharacter* Pawn = Cast<AMyCharacter>(TryGetPawnOwner());
	if (IsValid(Pawn))
	{

		
		Speed = Pawn->GetCharacterMovement()->Velocity.Size2D();
		bIsCrouched = !Pawn->CanCrouch();//�� �ƴҰ��? �ɱ��Լ�

		//���� ��� �Լ� CalculateDirection(velocity,Rotation)
		Direction = UKismetAnimationLibrary::CalculateDirection(Pawn->GetCharacterMovement()->Velocity,
			Pawn->GetActorRotation());
	
		//Pawn�� ������ �����
		bIsFire = Pawn->bIsFire;
		bIsLeftLean = Pawn->bIsLeftLean;
		bIsRightLean = Pawn->bIsRightLean;
	//���� ���� ����
		if (bIsLeftLean)
		{
			TargetSpineAngle = -30.0f;
		}

		if (bIsRightLean)
		{
			TargetSpineAngle = 30.0f;
		}
		//�Ѵ� �ƴ� ���
		if (!bIsRightLean && !bIsLeftLean)
		{
			TargetSpineAngle = 0.0f;
		}
	
	

	}

}
//Animnotify
void UMyAnimInstance::AnimNotify_HelloWorldCpp(UAnimNotify* Notify)
{
	UE_LOG(LogTemp, Warning, TEXT("HelloWorldCPP"));
}
