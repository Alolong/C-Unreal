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

	//�ִ� �ν��Ͻ��� ���ε��� ����  AMyCharacter�� ������ �����´�. 
	//TryGetPawnOwner�� �ִϸ��̼� �ν��Ͻ��� ���ε��� ���� ������
	AMyCharacter* Pawn = Cast<AMyCharacter>(TryGetPawnOwner());
	if (IsValid(Pawn))
	{

		
		Speed = Pawn->GetCharacterMovement()->Velocity.Size2D();
		bIsCrouched = !Pawn->CanCrouch();//����ó�� "�� Pawn�� ���� �� ���� ���¶�� bIsCrouched�� true�� ��������"

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
		//�Ѵ� �ƴ� ��� && and
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
