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



	//ī�޶�

	UPROPERTY(VisibleAnywhere, Category="Components",BlueprintReadOnly)
	TObjectPtr<USpringArmComponent> CameraBoom;

	UPROPERTY(VisibleAnywhere, Category = "Components", BlueprintReadOnly)
	TObjectPtr<UCameraComponent> Camera;


	//����
	//TObjectPtr<> - ����ü <Ŭ����> 

	UPROPERTY(EditAnywhere, Category="Input")
	TObjectPtr<UInputAction> IA_Move;

	UPROPERTY(EditAnywhere, Category = "Input")
	TObjectPtr<UInputAction> IA_Look;

	UPROPERTY(EditAnywhere, Category = "Input")
	TObjectPtr<UInputAction> IA_Zoom;

	UPROPERTY(EditAnywhere, Category = "Input")
	TObjectPtr<UInputAction> IA_Jump;

	UPROPERTY(EditAnywhere, Category = "Input")
	TObjectPtr<UInputAction> IA_Crouch;

	//�ѱ� �¿�
	UPROPERTY(EditAnywhere, Category = "Input")
	TObjectPtr<UInputAction> IA_Fire;

	UPROPERTY(EditAnywhere, Category = "Input")
	TObjectPtr<UInputAction> IA_RightLean;

	UPROPERTY(EditAnywhere, Category = "Input")
	TObjectPtr<UInputAction> IA_LeftLean;



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

	void EndFire(const FInputActionValue& value);

	void EndRightLean(const FInputActionValue& value);

	void EndLeftLean(const FInputActionValue& value);


	UPROPERTY(BlueprintReadOnly, Category = "Animations", EditAnywhere)
	TObjectPtr<UAnimMontage> AM_Reload;

	UPROPERTY(BlueprintReadOnly, Category = "Animations", EditAnywhere)
	TObjectPtr<UAnimMontage> AM_Hit;


	UPROPERTY(EditAnywhere, Category = "State")
	uint8 bIsFire : 1;

	UPROPERTY(EditAnywhere, Category = "State")
	uint8 bIsLeftLean : 1;

	UPROPERTY(EditAnywhere, Category = "State")
	uint8 bIsRightLean : 1;


};
 