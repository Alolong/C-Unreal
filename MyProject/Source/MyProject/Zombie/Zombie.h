// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "Zombie.generated.h"

class UBehaviorTree;

UENUM(BlueprintType)
// 상태 체크
// 기본적으로 C++ enum 은 int(4바이트)를 사용
// uint8 = 1바이트 (8비트)만 사용
enum class EZombieState : uint8
{
	Patrol = 0 UMETA(DisplayName = "Patrol"),
	Battle = 1 UMETA(DisplayName = "Battle"),
	Chase = 2 UMETA(DisplayName = "Chase"),
	Dead = 3 UMETA(DisplayName = "Dead")
};

UCLASS()
class MYPROJECT_API AZombie : public ACharacter
{
	GENERATED_BODY()

public:
	// Sets default values for this character's properties
	AZombie();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

	UPROPERTY(BlueprintReadWrite, Category = "State", EditAnywhere)
	EZombieState CurrentState;







};
