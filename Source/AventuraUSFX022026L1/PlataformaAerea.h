// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Plataforma.h"
#include "PlataformaAerea.generated.h"

/**
 * 
 */
UCLASS()
class AVENTURAUSFX022026L1_API APlataformaAerea : public APlataforma
{
	GENERATED_BODY()
	
public:
	APlataformaAerea();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	int numeroPaso;

};
