// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "DirectorEP.generated.h"

class IBuilderEstructuraPlataforma;

UCLASS()
class AVENTURAUSFX022026L1_API ADirectorEP : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	ADirectorEP();

	IBuilderEstructuraPlataforma* builderEstructuraPlataforma;

	void setBuilderEstructuraPlataforma(IBuilderEstructuraPlataforma* builder);

	void construirEstructuraPlataforma();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

};
