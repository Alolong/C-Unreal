// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"

#include "InputActionValue.h"//EnhancedInput-빌드파일에서 설정해야됨

#include "MyCharacter.generated.h"



class UCameraComponent;
class USpringArmComponent;
class UInputAction;
class UInputMappingContext;





UCLASS()
class MYPROJECT_API AMyCharacter : public ACharacter
{
	GENERATED_BODY()

public:
	// Sets default values for this character's properties
	AMyCharacter();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;


	// TObjectPtr - 해당하는 기능을 설정하게 하는 칸을 만들어줌
	// TObjectPtr<클래스타입> 변수명

	UPROPERTY(VisibleAnywhere, Category="Components",BlueprintReadOnly)
	TObjectPtr<USpringArmComponent> CameraBoom;

	UPROPERTY(VisibleAnywhere, Category = "Components", BlueprintReadOnly)
	TObjectPtr<UCameraComponent> Camera;

	UPROPERTY(VisibleAnywhere, Category = "Components", BlueprintReadOnly)
	TObjectPtr<USkeletalMeshComponent> Weapon;

	//매핑
	//TObjectPtr<> - 구조체 <클래스> 

	UPROPERTY(BlueprintReadOnly, Category="Input", EditAnywhere)
	TObjectPtr<UInputAction> IA_Move;

	UPROPERTY(BlueprintReadOnly, EditAnywhere, Category = "Input")
	TObjectPtr<UInputAction> IA_Look;

	UPROPERTY(BlueprintReadOnly, EditAnywhere, Category = "Input")
	TObjectPtr<UInputAction> IA_Zoom;

	UPROPERTY(BlueprintReadOnly, EditAnywhere, Category = "Input")
	TObjectPtr<UInputAction> IA_Jump;

	UPROPERTY(BlueprintReadOnly, EditAnywhere, Category = "Input")
	TObjectPtr<UInputAction> IA_Crouch;

	//총기 좌우
	UPROPERTY(BlueprintReadOnly, EditAnywhere, Category = "Input")
	TObjectPtr<UInputAction> IA_Fire;

	UPROPERTY(BlueprintReadOnly, EditAnywhere, Category = "Input")
	TObjectPtr<UInputAction> IA_RightLean;

	UPROPERTY(BlueprintReadOnly, EditAnywhere, Category = "Input")
	TObjectPtr<UInputAction> IA_LeftLean;

	UPROPERTY(BlueprintReadOnly, EditAnywhere, Category = "Input")
	TObjectPtr<UInputAction> IA_Reload;

	//IMC
	UPROPERTY(EditAnywhere, Category = "Input")
	TObjectPtr<UInputMappingContext> IMC_Default;







	//조작 관련 함수
	void OnMove(const FInputActionValue& value);

	void OnLook(const FInputActionValue& value);
	
	void OnZoom(const FInputActionValue& value);
	
	void OnJump(const FInputActionValue& value);
	
	void OnCrouch(const FInputActionValue& value);

	void OnReload(const FInputActionValue& Value);

	void OnFire(const FInputActionValue& value);

	void OnRightLean(const FInputActionValue& value);

	void OnLeftLean(const FInputActionValue& value);

	void OnEndFire(const FInputActionValue& value);

	void OnEndRightLean(const FInputActionValue& value);

	void OnEndLeftLean(const FInputActionValue& value);


	UPROPERTY(BlueprintReadOnly, Category = "Animations", EditAnywhere)
	TObjectPtr<UAnimMontage> AM_Reload;

	UPROPERTY(BlueprintReadOnly, Category = "Animations", EditAnywhere)
	TObjectPtr<UAnimMontage> AM_Hit;


	UPROPERTY(BlueprintReadOnly, Category = "State", EditAnywhere)
	uint8 bIsFire : 1;

	UPROPERTY(BlueprintReadOnly,  Category = "State", EditAnywhere)
	uint8 bIsLeftLean : 1;

	UPROPERTY(BlueprintReadOnly,  Category = "State", EditAnywhere)
	uint8 bIsRightLean : 1;


};
 