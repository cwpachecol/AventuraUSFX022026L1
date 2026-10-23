// Fill out your copyright notice in the Description page of Project Settings.


#include "FabricaEnemigosAnimales.h"
#include "EnemigoAnimal.h"
#include "EnemigoAcuaticoAnimal.h"

AEnemigo* AFabricaEnemigosAnimales::CrearEnemigo(FString TipoEnemigo)
{
	{
		if (TipoEnemigo == "Aereo")
		{
			return GetWorld()->SpawnActor<AEnemigoAnimal>();
		}
		else if (TipoEnemigo == "Terrestre")
		{
			return GetWorld()->SpawnActor<AEnemigoAcuaticoAnimal>();
		}
		else if (TipoEnemigo == "Acuatico")
		{
			return GetWorld()->SpawnActor<AEnemigoAcuaticoAnimal>();
		}
		else
		{
			return nullptr;
		}
	}
}
