// Fill out your copyright notice in the Description page of Project Settings.


#include "MyPawn.h"
#include "Camera/CameraComponent.h"
#include "Components/StaticMeshComponent.h"
#include "Components/ArrowComponent.h"
#include "Components/BoxComponent.h"
#include "GameFramework/FloatingPawnMovement.h"
#include "GameFramework/SpringArmComponent.h"//�̻���..

// Sets default values
AMyPawn::AMyPawn()
{
 	// Set this pawn to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
	
	///() �Ұ�ȣ�� �ִ� �Ա�
	/// <> ���ȣ�� �ڷ���
	/// ��� ������ �Լ�
	/// ���������Ʈ�� �������� ��������
	///
	/// ������ = CreateDefaultSubobject<Ŭ�����ڷ���> (TEXT("�̸�"));
	Box = CreateDefaultSubobject<UBoxComponent>(TEXT("Box"));
	RootComponent = Box;

	Body = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Body"));
	Body -> SetupAttachment(Box);

	//�𵨸� �θ����� UStaticMesh��
	static ConstructorHelpers::FObjectFinder<UStaticMesh>SM_Body(TEXT("/Script/Engine.StaticMesh'/Game/Resouces/SM_P38_Body.SM_P38_Body'"));
	if (SM_Body.Succeeded())
	{
		Body->SetStaticMesh(SM_Body.Object);
	}


	//�����緯
	Left = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Left"));
	Right= CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Right"));






	Camera = CreateDefaultSubobject<UCameraComponent>(TEXT("Camera"));
	SpringArm = CreateDefaultSubobject<USpringArmComponent>(TEXT("SpringArm"));

	Movement = CreateDefaultSubobject<UFloatingPawnMovement>(TEXT("Movement"));




	MoveSpeed = 0.5f;
	RotateSpeed = 10.0f;
	BoostSpeed = 60.0f;

}

// Called when the game starts or when spawned
void AMyPawn::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AMyPawn::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

// Called to bind functionality to input
void AMyPawn::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

}

