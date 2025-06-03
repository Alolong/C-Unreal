// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Animation/AnimNotifies/AnimNotify.h"
#include "AnimNotify_PrintMessage.generated.h"

/**
 * 
 */
//meta = (DisplayName = "Print Message"
UCLASS(meta = (DisplayName = "Print Message"))
class MYPROJECT_API UAnimNotify_PrintMessage : public UAnimNotify
{
	GENERATED_BODY()
	
public:
	//Notify의 함수 형식 f12 -> 함수 (메쉬컴포넌트, 애니메이션, 이벤트레퍼)
	virtual void Notify(USkeletalMeshComponent* MeshComp, UAnimSequenceBase*Animation,const FAnimNotifyEventReference& EventReference)override;


	UPROPERTY(EditAnywhere,BlueprintReadWrite, Category ="Data")
	FString PrintMessage;

};
