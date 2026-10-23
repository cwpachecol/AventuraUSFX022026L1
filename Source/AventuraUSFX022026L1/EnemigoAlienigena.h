// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Enemigo.h"
#include "EnemigoAlienigena.generated.h"

/**
 * 
 */
UCLASS()
class AVENTURAUSFX022026L1_API AEnemigoAlienigena : public AEnemigo
{
	GENERATED_BODY()

public:
	void Atacar() override
	{
		UE_LOG(LogTemp, Warning, TEXT("El enemigo acuático ataca con un chorro de agua."));
	}
};
