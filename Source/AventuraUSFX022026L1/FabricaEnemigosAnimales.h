// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "FabricaEnemigos.h"
#include "FabricaEnemigosAnimales.generated.h"

/**
 * 
 */
UCLASS()
class AVENTURAUSFX022026L1_API AFabricaEnemigosAnimales : public AFabricaEnemigos
{
	GENERATED_BODY()
	
public:
	AEnemigo* CrearEnemigo(FString TipoEnemigo) override;

};
