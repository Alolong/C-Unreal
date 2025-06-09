// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"

#include "InputActionValue.h"//EnhancedInput-�������Ͽ��� �����ؾߵ�

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


	// TObjectPtr - �ش��ϴ� ����� �����ϰ� �ϴ� ĭ�� �������
	// TObjectPtr<Ŭ����Ÿ��> ������

	UPROPERTY(VisibleAnywhere, Category="Components",BlueprintReadOnly)
	TObjectPtr<USpringArmComponent> CameraBoom;

	UPROPERTY(VisibleAnywhere, Category = "Components", BlueprintReadOnly)
	TObjectPtr<UCameraComponent> Camera;

	UPROPERTY(VisibleAnywhere, Category = "Components", BlueprintReadOnly)
	TObjectPtr<USkeletalMeshComponent> Weapon;

	//����
	//TObjectPtr<> - ����ü <Ŭ����> 

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

	//�ѱ� �¿�
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







	//���� ���� �Լ�
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
 