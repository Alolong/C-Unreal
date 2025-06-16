// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"

#include "InGameChar.generated.h"

class UInputAction;
UCLASS()
class NETWORK_API AInGameChar : public ACharacter
{
	GENERATED_BODY()

public:
	// Sets default values for this character's properties
	AInGameChar();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

	UPROPERTY(EditAnywhere,Category = "Input",BlueprintReadWrite)
	TObjectPtr<UInputAction> FireInput;

	UFUNCTION()
	void OnFire();

	UFUNCTION(Server,Reliable,WithValidation)
	void C2S_Fire(const FVector& SpawnPosition, const FRotator& SpawnRotation);
	bool C2S_Fire_Validate(const FVector& SpawnPosition, const FRotator& SpawnRotation);
	void C2S_Fire_Implementation(const FVector& SpawnPosition, const FRotator& SpawnRotation);
	//Validate 인증
	//Implementation 실행
	
	UFUNCTION()
	void S2A_Dead(const FVector& ImpulseDirection);
	void S2A_Dead_Implementation(const FVector& ImpulseDirection);

	UPROPERTY(EditAnywhere, Category = "Data", BlueprintReadWrite)
	TObjectPtr<AActor> BulletActor;


	virtual float TakeDamage(float DamageAmount, struct FDamageEvent const& DamageEvent, class AController* EventInstigator, AActor* DamageCauser) override;
};
