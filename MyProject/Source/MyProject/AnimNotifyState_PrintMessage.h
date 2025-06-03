// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Animation/AnimNotifies/AnimNotifyState.h"
#include "AnimNotifyState_PrintMessage.generated.h"

/**
 * 
 */
//UClASS의 meta  : 부가 정보를 전달 
//displayname -> 언리얼 UI 창에서 Print Messages로 나타남
UCLASS(meta = (DisplayName = "Print Messages"))
class MYPROJECT_API UAnimNotifyState_PrintMessage : public UAnimNotifyState
{
	GENERATED_BODY()
public :
	//Begin, Tick, End 이벤트
	virtual void NotifyBegin(USkeletalMeshComponent* MeshComp, UAnimSequenceBase* Animation, float TotalDuration, const FAnimNotifyEventReference& EventReference) override;

	virtual void NotifyTick(USkeletalMeshComponent* MeshComp, UAnimSequenceBase* Animation, float FrameDeltaTime, const FAnimNotifyEventReference& EventReference) override;

	virtual void NotifyEnd(USkeletalMeshComponent* MeshComp, UAnimSequenceBase* Animation, const FAnimNotifyEventReference& EventReference) override;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Mesasage")
	FString Message;

	uint32 Count = 0;
};
