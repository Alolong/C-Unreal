// Fill out your copyright notice in the Description page of Project Settings.


#include "InGameChar.h"
#include "EnhancedInputSubsystems.h"
#include "EnhancedInputComponent.h"
#include "Kismet/GameplayStatics.h"
#include "Kismet/KismetSystemLibrary.h"
// Sets default values
AInGameChar::AInGameChar()
{
 	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void AInGameChar::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AInGameChar::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
	
}

// Called to bind functionality to input
//인풋 바인딩용도
void AInGameChar::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

	UEnhancedInputComponent* UIC = Cast<UEnhancedInputComponent>(PlayerInputComponent);
	if (IsValid(UIC))
	{
		//bindaction - (키이름 , 트리거 이벤트 ,바인딩 할 곳, 바인딩할 함수기능)
		UIC->BindAction(FireInput, ETriggerEvent::Completed, this, &AInGameChar::OnFire);
	}


}

void AInGameChar::OnFire()
{
	APlayerController* PC = Cast<APlayerController>(GetController());
	if (IsValid(PC))
	{
		int32 SizeX;
		int32 SizeY;
		FVector WorldPosition;
		FVector WorldDirection;
		FVector CameraLocation;
		FRotator CameraRotation;
		PC->GetViewportSize(SizeX, SizeY);
		PC->GetPlayerViewPoint(CameraLocation, CameraRotation);
		//Deproject -> 화면 좌표를 3d좌표로
		PC->DeprojectScreenPositionToWorld(SizeX / 2.0f,
			SizeY / 2.0f,
			WorldPosition,
			WorldDirection
		);
		//FVector SpawnPosition = GetActorLocation() + (WorldDirection * 100.f);
			//FRotator SpawnRotation = WorldDirection.Rotation();
		FVector SpawnPosition = CameraLocation;
		FRotator SpawnRotation = CameraRotation;

		C2S_Fire(SpawnPosition, SpawnRotation);
	}
}
//클라에서 서버로 인증 진행
bool AInGameChar::C2S_Fire_Validate(const FVector& SpawnPosition, const FRotator& SpawnRotation)
{
	return true;
}
//클라에서 서버로 실행 승인
void AInGameChar::C2S_Fire_Implementation(const FVector& SpawnPosition, const FRotator& SpawnRotation)
{
	
	TArray<TEnumAsByte<EObjectTypeQuery>> ObjectTypes;

	//배열 월드다이나믹을 배열에 더하기 ECC는 Enum형
	ObjectTypes.Add(UEngineTypes::ConvertToObjectType(ECollisionChannel::ECC_WorldDynamic));

	ObjectTypes.Add(UEngineTypes::ConvertToObjectType(ECollisionChannel::ECC_WorldStatic));

	ObjectTypes.Add(UEngineTypes::ConvertToObjectType(ECollisionChannel::ECC_PhysicsBody));

	TArray<AActor*> IgnoreActor;

	FHitResult OutHit;

	bool bResult = UKismetSystemLibrary::LineTraceSingleForObjects(
		GetWorld(),
		SpawnPosition,
		SpawnPosition + (SpawnRotation.Vector() * 10000.0f),
		ObjectTypes,
		true,
		IgnoreActor,
		EDrawDebugTrace::ForDuration,
		OutHit,
		true,
		FLinearColor::Red,
		FLinearColor::Green,
		2.0f
	);






}



void AInGameChar::S2A_Dead_Implementation(const FVector& ImpulseDirection)
{
}


//데미지 받음
float AInGameChar::TakeDamage(float DamageAmount, FDamageEvent const& DamageEvent, AController* EventInstigator, AActor* DamageCauser)
{
	return 0.0f;
}




