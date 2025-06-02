// Fill out your copyright notice in the Description page of Project Settings.


#include "MyCharacter.h"
#include "GameFramework/SpringArmComponent.h"
#include "Camera/CameraComponent.h"
#include "Components/SkeletalMeshComponent.h"
#include "Components/CapsuleComponent.h"
#include "EnhancedInputComponent.h"
//
#include "Kismet/KismetMathLibrary.h"
#include "Kismet/GameplayStatics.h"



// Sets default values
AMyCharacter::AMyCharacter()
{
 	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	CameraBoom = CreateDefaultSubobject<USpringArmComponent>(TEXT("CameraBoom"));
	CameraBoom->SetupAttachment(RootComponent);

	Camera = CreateDefaultSubobject<UCameraComponent>(TEXT("Camera"));
	Camera -> SetupAttachment(CameraBoom);

	GetMesh()->SetRelativeLocationAndRotation(
		FVector(0, 0, -GetCapsuleComponent()->GetScaledCapsuleHalfHeight()),
		FRotator(0, -90.0f, 0)
	);
	
}

// Called when the game starts or when spawned
void AMyCharacter::BeginPlay()
{
	Super::BeginPlay();
	APlayerController* PC = Cast<APlayerController>(Controller);

	
}

// Called every frame
void AMyCharacter::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

// Called to bind functionality to input
void AMyCharacter::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

	
	//ĳ���Ϳ� ���ε�
	//PlayerInputComponent�� UEnhancedInputComponent�� ĳ�����Ͽ� ���
	//�𸮾��� ���ο� Enhanced Input System�� ����� ���� UEnhancedInputComponent�� ���ؼ� InputAction ���ε��� �ؾ� �ϱ� ������ �� ĳ������ �ʿ�
	UEnhancedInputComponent* UEIC = Cast<UEnhancedInputComponent>(PlayerInputComponent);

	if (UEIC)//UEIC�� ���̸�
	{
		//UEIC�� BIndAction�Լ� ���
		//BindAction�� (Ű �̸�,Ʈ�����̺�Ʈ,�����Ͽ�����Ʈ,����ϴ� ��� )
		//BindAction(const UInputAction* Action, ETriggerEvent TriggerEvent, UObject* Object, FName FunctionName)
		UEIC->BindAction(IA_Move, ETriggerEvent::Triggered, this, &AMyCharacter::OnMove);
		
		UEIC->BindAction(IA_Look, ETriggerEvent::Triggered, this, &AMyCharacter::OnLook);
		
		UEIC->BindAction(IA_Jump, ETriggerEvent::Triggered, this, &AMyCharacter::OnJump);

		UEIC->BindAction(IA_Zoom, ETriggerEvent::Triggered, this, &AMyCharacter::OnZoom);
		
		UEIC->BindAction(IA_Fire, ETriggerEvent::Triggered, this, &AMyCharacter::OnFire);

		UEIC->BindAction(IA_RightLean, ETriggerEvent::Triggered, this, &AMyCharacter::OnRightLean);

		UEIC->BindAction(IA_LeftLean, ETriggerEvent::Triggered, this, &AMyCharacter::OnLeftLean);

		//IMC
		UEIC->BindAction(IA_Crouch, ETriggerEvent::Triggered, this, &AMyCharacter::OnCrouch);
	}



}

void AMyCharacter::OnMove(const FInputActionValue& value)
{
	//��ǥ// FVector2D�� 2���� �迭�̱� ������ Get<>�� FVector2D�� �������
	//�̵��� ��ǥ ����
	//Enhanced Input �ý��ۿ��� �Է����� ���� value ���� FVector2D Ÿ������ �����ͼ� DirectionVector��� ������ �����Ѵ�.
	FVector2D DirectionVector = value.Get<FVector2D>();
	
	
	//ȸ��

	//1.�Էµ� ȸ���� �����ϴ� ��
	FRotator CameraRotation = GetControlRotation();

	//2.������ ȸ������ �ϳ��� ������ ����
	//FRotator - ȸ���� ǥ���ϴ� ����ü FRotator(Pitch, Yaw, Roll) - FRotator�� Yaw�� Z���� ��Ÿ����- pitch�� ���� �ٴ� �ȶհ��Ϸ�����
	FRotator FloorProjectionRotation = FRotator(0, CameraRotation.Yaw, CameraRotation.Roll);
	
	//3.������ ��Ÿ���� ��/ FVector ����
	//UKismetMathLibrary::GetForwardVector() -Ư�� ȸ������ �������� �չ����� ���ҋ� ���
	//FloorProjectionRotation-�� �չ���, �� ī�޶� �������� ����ϴ� ��
	FVector CameraForward = UKismetMathLibrary::GetForwardVector(FloorProjectionRotation);
	

	//4.y���� ���³��� �� FVector ����
	FVector CameraRight = UKismetMathLibrary::GetRightVector(FloorProjectionRotation);


	//ī�޶� ������ Y�� ����? �� ��� ��
	AddMovementInput(CameraForward, DirectionVector.Y);
	AddMovementInput(CameraRight, DirectionVector.X);



}

void AMyCharacter::OnLook(const FInputActionValue& value)
{
	//CameraBoom->TargetArmLength = FMath::FInterpTo(SpringArm->TargetArmLength, SpringArm->TargetArmLength + Value.Get<float>() * -200.0f, UGameplayStatics::GetWorldDeltaSeconds(GetWorld()), 10.0f);
	FVector2D LookVector = value.Get<FVector2D>();

	AddControllerYawInput(LookVector.X);//������������
	AddControllerPitchInput(LookVector.Y);//������������

}

void AMyCharacter::OnZoom(const FInputActionValue& value)
{

	CameraBoom->TargetArmLength += value.Get<float>() * -10.0f;
	CameraBoom->TargetArmLength = FMath::Clamp(CameraBoom->TargetArmLength,100.0f,
		600.0f);
}

void AMyCharacter::OnJump(const FInputActionValue& value)
{
	Jump(); // ������ �� �� �ִ� �Լ��� ����
}

void AMyCharacter::OnCrouch(const FInputActionValue& value)
{
	if (CanCrouch())
	{
		Crouch();
	}
	else
	{
		UnCrouch();
	}
}
//���ε�
void AMyCharacter::OnReload(const FInputActionValue& Value)
{
	if (AM_Reload)
	{
		//������ ��Ÿ�ְ� ��������� ������, PlyaAnimMontage�� �Ѵ�.
		//!GetMesh() : ���̷�Ż �޽ù�ȯ
		//GetAnimInstance() �޽ð� ����ϴ� �ִϸ��̼� �ν��Ͻ��� �����´�
		//Montage_IsPlaying(AM_Reload) ���޵� �ִϸ�Ÿ�ְ� ���� ���������Ȯ�� -��ȯ bool
		if (!GetMesh()->GetAnimInstance()->Montage_IsPlaying(AM_Reload))
		{
			PlayAnimMontage(AM_Reload, 1.0f, TEXT("Rifle"));
		}
	}
}

void AMyCharacter::OnFire(const FInputActionValue& value)
{
	bIsFire = true;
}

void AMyCharacter::OnRightLean(const FInputActionValue& value)
{
	bIsRightLean = true;
}

void AMyCharacter::OnLeftLean(const FInputActionValue& value)
{
	bIsLeftLean = true;
}

void AMyCharacter::EndFire(const FInputActionValue& value)
{
	bIsFire = false;
}

void AMyCharacter::EndRightLean(const FInputActionValue& value)
{
	bIsRightLean = false;
}

void AMyCharacter::EndLeftLean(const FInputActionValue& value)
{
	bIsLeftLean = false;
}

