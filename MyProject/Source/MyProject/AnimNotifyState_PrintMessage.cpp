// Fill out your copyright notice in the Description page of Project Settings.


#include "AnimNotifyState_PrintMessage.h"

void UAnimNotifyState_PrintMessage::NotifyBegin(USkeletalMeshComponent* MeshComp, UAnimSequenceBase* Animation, float TotalDuration, const FAnimNotifyEventReference& EventReference)
{
	NotifyBegin(MeshComp, Animation, TotalDuration, EventReference);

	UE_LOG(LogTemp, Warning, TEXT("NotifyBegin"));
	Count = 0;

};

void UAnimNotifyState_PrintMessage::NotifyTick(USkeletalMeshComponent* MeshComp, UAnimSequenceBase* Animation, float FrameDeltaTime, const FAnimNotifyEventReference& EventReference)
{
	NotifyTick(MeshComp, Animation, FrameDeltaTime, EventReference);
	//ī��Ʈ 1�� ���Ͽ� ǥ��
	UE_LOG(LogTemp, Warning, TEXT("Tick %d"), Count++);
};

void UAnimNotifyState_PrintMessage::NotifyEnd(USkeletalMeshComponent* MeshComp, UAnimSequenceBase* Animation, const FAnimNotifyEventReference& EventReference)
{
	NotifyEnd(MeshComp, Animation, EventReference);

	UE_LOG(LogTemp, Warning, TEXT("NotifyEnd"));

};
