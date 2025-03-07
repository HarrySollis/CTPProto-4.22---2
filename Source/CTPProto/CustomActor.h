// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "CustomActor.generated.h"

UCLASS()
class CTPPROTO_API ACustomActor : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	ACustomActor();

	

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;
	//virtual void SetColorParameter(FName, FLinearColor);
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "CTP_PS")
	UParticleSystemComponent* ParticleSystem;
public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

};
