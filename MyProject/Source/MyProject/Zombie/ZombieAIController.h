// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "AIController.h"

#include "Perception/AIPerceptionTypes.h"
#include "Perception/AIPerceptionComponent.h"


#include "ZombieAIController.generated.h"

/**
 * ���� AI ��Ʈ�ѷ� :
 * �⺻ 
 1. AI ��Ʈ�ѷ� ������
 
 2. Tick / OnPossess / BeginPlay -> Tick ,BeginPlay�� ������ ��ӹ���

 3. �����ϴ� �Լ� Perception
	1. ������Ʈ ���, ����FAIStimulus
	2. ���� ��� �ر�
	3. ���� ������Ʈ FActorPerceptionUpdateInfo
	
 * 
 */

class UAIPerceptionComponent;

UCLASS()
class MYPROJECT_API AZombieAIController : public AAIController
{
	GENERATED_BODY()
	
public:
	AZombieAIController();

		virtual void Tick(float DeltaSeconds) override;
		virtual void OnPossess(APawn* InPawn) override;
		virtual void BeginPlay() override;


		UPROPERTY(VisibleAnywhere, BlueprintReadWrite, Category = AI)
		TObjectPtr<UAIPerceptionComponent> Perception;


		//U�� ���̴� ���� : 
		UFUNCTION()
		void ProcessPerceptionUpdated(AActor* Actor, FAIStimulus Stimulus);
		UFUNCTION()
		void ProcessPerceptionForgetUpdated(AActor* Actor);
		UFUNCTION()
		void ProcessPerceptionInfoUpdated(const FActorPerceptionUpdateInfo& UpdateInfo );



};
