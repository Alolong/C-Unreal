// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "AIController.h"

#include "Perception/AIPerceptionTypes.h"
#include "Perception/AIPerceptionComponent.h"


#include "ZombieAIController.generated.h"

/**
 * 좀비 AI 컨트롤러 :
 * 기본 
 1. AI 컨트롤러 생성자
 
 2. Tick / OnPossess / BeginPlay -> Tick ,BeginPlay는 폰에서 상속받음

 3. 지각하는 함수 Perception
	1. 업데이트 대상, 유발FAIStimulus
	2. 지각 대상 잊기
	3. 정보 업데이트 FActorPerceptionUpdateInfo
	
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


		//U를 붙이는 이유 : 
		UFUNCTION()
		void ProcessPerceptionUpdated(AActor* Actor, FAIStimulus Stimulus);
		UFUNCTION()
		void ProcessPerceptionForgetUpdated(AActor* Actor);
		UFUNCTION()
		void ProcessPerceptionInfoUpdated(const FActorPerceptionUpdateInfo& UpdateInfo );



};
