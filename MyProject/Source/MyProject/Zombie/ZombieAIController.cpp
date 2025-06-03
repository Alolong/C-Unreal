// Fill out your copyright notice in the Description page of Project Settings.


#include "ZombieAIController.h"
#include "Zombie.h"

#include "Perception/AIPerceptionComponent.h"
#include "Perception/AISense_Sight.h"//시야 감지 수행 
#include "Perception/AISenseConfig_Sight.h"// 시야감지 설정값

#include "Kismet/GameplayStatics.h"

#include "BehaviorTree/BehaviorTreeComponent.h"
#include "BehaviorTree/BlackboardComponent.h"

AZombieAIController::AZombieAIController()
{
	Perception = CreateDefaultSubobject<UAIPerceptionComponent>(TEXT("Perception"));

	SetPerceptionComponent(*Perception);

	//지역변수  선언(AI시야감지설정 자료형) - 템플릿으로 인스턴스화하여 호출
	UAISenseConfig_Sight* SightConfig = CreateDefaultSubobject<UAISenseConfig_Sight>(TEXT("Sight_Config"));
	//시야감지 AISenseConfig_Sight
	SightConfig->SightRadius = 300.0f;
	SightConfig->LoseSightRadius = 350.0f;
	SightConfig->PeripheralVisionAngleDegrees = 900.0f; //AI가 얼마나 멀리 보는지
	SightConfig->AutoSuccessRangeFromLastSeenLocation = 900.0f; //
	SightConfig->DetectionByAffiliation.bDetectEnemies = true;
	SightConfig->DetectionByAffiliation.bDetectFriendlies = true;
	SightConfig->DetectionByAffiliation.bDetectNeutrals = true;
	//AISenseConfig값 =AISenseConfig_Sight의 부모
	SightConfig->SetMaxAge(1.0f);

	//perception컴포넌트의 설정 - sightConfig로 설정, 기본 감지 설정
	GetPerceptionComponent()->ConfigureSense(*SightConfig);
	GetPerceptionComponent()->SetDominantSense(*SightConfig->GetSenseImplementation());
	//우선설정 GetSenseImplementation()는 UAISense_Sight 클래스를 리턴.. 이건 좀 더 알아봐야..
	
		
}

void AZombieAIController::Tick(float DeltaSeconds)
{
	//하드코딩시 if문으로계에에에속 적는다.
	// Cast<T>(); 다운캐스팅 : 폰을 AZombie타입 폰으로
	//AZombie* Pawn = Cast<AZombie>(GetPawn());
	//if (Pawn)
	//{
	//	//Task
	//	//플레이를 찾는다.
	//	//플레이어가 죽었는지 확인한다.
	//	//내가 죽었는지 확인한다.
	//	if (Pawn->CurrentState == EZombieState::Patrol)
	//	{
	//		//랜덤한 위치를 정한다.
	//		//정해진 위치로 이동한다.
	//	}
	//	else if(Pawn->CurrentState == EZombieState::Battle)
	//	{
	//		//플레이어가 공격 범위에 있는지 확인한다.
	//		//공격한다.
	//	}
	//	else if (Pawn->CurrentState == EZombieState::Chase)
	//	{
	//		//플레이어를 쫒아간다.
	//		//범위 밖인지 확인한다.
	//	}
	//	if (Pawn->CurrentState == EZombieState::Dead)
	//	{
	//		//3초 기다린다
	//		//1사라진다.
	//	}
	//}
}

void AZombieAIController::OnPossess(APawn* InPawn)
{
	Super::OnPossess(InPawn);

	PerceptionComponent; // 컴포넌트 장착?


}

void AZombieAIController::BeginPlay()
{
	Super::BeginPlay();
	//UBrainComponent는 내부에서 Blackboard를 사용하기 떄문에  Blackboard.h 연결해야 할 수 있음
	BrainComponent->GetBlackboardComponent()->SetValueAsObject(TEXT("Player"), UGameplayStatics::GetPlayerController(GetWorld(), 0)->GetPawn());

	//Perception->OnPerceptionUpdated.AddDynamic(this, &AZombieAIController::ProcessPerceptionUpdated);
	GetPerceptionComponent()->OnTargetPerceptionUpdated.AddDynamic(this,
		&AZombieAIController::ProcessPerceptionUpdated);

	GetPerceptionComponent()->OnTargetPerceptionForgotten.AddDynamic(this, &AZombieAIController::ProcessPerceptionForgetUpdated);

	GetPerceptionComponent()->OnTargetPerceptionInfoUpdated.AddDynamic(this, &AZombieAIController::ProcessPerceptionInfoUpdated);

}

void AZombieAIController::ProcessPerceptionUpdated(AActor* Actor, FAIStimulus Stimulus)
{
	UE_LOG(LogTemp, Warning, TEXT("ProcessPerceptionUpdated Actor"));
	AZombie* Zombie = Cast<AZombie>(GetPawn());
	if (Zombie)
	{
		Zombie->CurrentState = EZombieState::Chase;
		BrainComponent->GetBlackboardComponent()->SetValueAsEnum(TEXT("CurrentState"), (uint8)(EZombieState::Chase));

	}
}

void AZombieAIController::ProcessPerceptionForgetUpdated(AActor* Actor)
{
	UE_LOG(LogTemp, Warning, TEXT("ProcessPerceptionForgetUpdated Actor"));
	AZombie* Zombie = Cast<AZombie>(GetPawn());
	if (Zombie)
	{
		Zombie->CurrentState = EZombieState::Patrol;
		BrainComponent->GetBlackboardComponent()->SetValueAsEnum(TEXT("CurrentState"), (uint8)(EZombieState::Chase));
	}
}

void AZombieAIController::ProcessPerceptionInfoUpdated(const FActorPerceptionUpdateInfo& UpdateInfo)
{
	UE_LOG(LogTemp, Warning, TEXT("ProcessPerceptionInfoUpdated Actor"));
}
