// Fill out your copyright notice in the Description page of Project Settings.


#include "ZombieAIController.h"
#include "Zombie.h"

#include "Perception/AIPerceptionComponent.h"
#include "Perception/AISense_Sight.h"//�þ� ���� ���� 
#include "Perception/AISenseConfig_Sight.h"// �þ߰��� ������

#include "Kismet/GameplayStatics.h"

#include "BehaviorTree/BehaviorTreeComponent.h"
#include "BehaviorTree/BlackboardComponent.h"

AZombieAIController::AZombieAIController()
{
	Perception = CreateDefaultSubobject<UAIPerceptionComponent>(TEXT("Perception"));

	SetPerceptionComponent(*Perception);

	//��������  ����(AI�þ߰������� �ڷ���) - ���ø����� �ν��Ͻ�ȭ�Ͽ� ȣ��
	UAISenseConfig_Sight* SightConfig = CreateDefaultSubobject<UAISenseConfig_Sight>(TEXT("Sight_Config"));
	//�þ߰��� AISenseConfig_Sight
	SightConfig->SightRadius = 300.0f;
	SightConfig->LoseSightRadius = 350.0f;
	SightConfig->PeripheralVisionAngleDegrees = 900.0f; //AI�� �󸶳� �ָ� ������
	SightConfig->AutoSuccessRangeFromLastSeenLocation = 900.0f; //
	SightConfig->DetectionByAffiliation.bDetectEnemies = true;
	SightConfig->DetectionByAffiliation.bDetectFriendlies = true;
	SightConfig->DetectionByAffiliation.bDetectNeutrals = true;
	//AISenseConfig�� =AISenseConfig_Sight�� �θ�
	SightConfig->SetMaxAge(1.0f);

	//perception������Ʈ�� ���� - sightConfig�� ����, �⺻ ���� ����
	GetPerceptionComponent()->ConfigureSense(*SightConfig);
	GetPerceptionComponent()->SetDominantSense(*SightConfig->GetSenseImplementation());
	//�켱���� GetSenseImplementation()�� UAISense_Sight Ŭ������ ����.. �̰� �� �� �˾ƺ���..
	
		
}

void AZombieAIController::Tick(float DeltaSeconds)
{
	//�ϵ��ڵ��� if�����ΰ迡������ ���´�.
	// Cast<T>(); �ٿ�ĳ���� : ���� AZombieŸ�� ������
	//AZombie* Pawn = Cast<AZombie>(GetPawn());
	//if (Pawn)
	//{
	//	//Task
	//	//�÷��̸� ã�´�.
	//	//�÷��̾ �׾����� Ȯ���Ѵ�.
	//	//���� �׾����� Ȯ���Ѵ�.
	//	if (Pawn->CurrentState == EZombieState::Patrol)
	//	{
	//		//������ ��ġ�� ���Ѵ�.
	//		//������ ��ġ�� �̵��Ѵ�.
	//	}
	//	else if(Pawn->CurrentState == EZombieState::Battle)
	//	{
	//		//�÷��̾ ���� ������ �ִ��� Ȯ���Ѵ�.
	//		//�����Ѵ�.
	//	}
	//	else if (Pawn->CurrentState == EZombieState::Chase)
	//	{
	//		//�÷��̾ �i�ư���.
	//		//���� ������ Ȯ���Ѵ�.
	//	}
	//	if (Pawn->CurrentState == EZombieState::Dead)
	//	{
	//		//3�� ��ٸ���
	//		//1�������.
	//	}
	//}
}

void AZombieAIController::OnPossess(APawn* InPawn)
{
	Super::OnPossess(InPawn);

	PerceptionComponent; // ������Ʈ ����?


}

void AZombieAIController::BeginPlay()
{
	Super::BeginPlay();
	//UBrainComponent�� ���ο��� Blackboard�� ����ϱ� ������  Blackboard.h �����ؾ� �� �� ����
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
