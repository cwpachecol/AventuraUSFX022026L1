// Copyright Epic Games, Inc. All Rights Reserved.

#include "AventuraUSFX022026L1GameMode.h"
#include "AventuraUSFX022026L1Pawn.h"
#include "Plataforma.h"
#include "PlataformaAerea.h"
#include "PlataformaTerrestre.h"
#include "PlataformaSubterranea.h"
#include "PlataformaAcuatica.h"

AAventuraUSFX022026L1GameMode::AAventuraUSFX022026L1GameMode()
{
	// set default pawn class to our character class
	DefaultPawnClass = AAventuraUSFX022026L1Pawn::StaticClass();

	tipoPlataformaActual = 0;
}

void AAventuraUSFX022026L1GameMode::BeginPlay()
{
	Super::BeginPlay();

	UWorld* World = GetWorld();

	if (World == nullptr)
	{
		return;
	}

	FRotator Rotacion = FRotator::ZeroRotator;
	FVector SpawnLocation = FVector::ZeroVector;
	
	APlataforma* plataformaActual;

	//ETipoPlataforma tipoPlataformaActual;
	int tipoPlataformaRandom;

	for (int i = 0; i < 50; i++) {
		
		SpawnLocation = FVector(FMath::RandRange(-1500.0f, 1500.0f), FMath::RandRange(-1500.0f, 1500.0f), FMath::RandRange(50.0f, 1000.0f));

		//plataformaActual->movimientoDireccion = FVector(1.0f, 0.0f, 0.0f);
		
		
		tipoPlataformaRandom = FMath::RandRange(0, 3);

		switch (tipoPlataformaRandom) {
			case 0:
				plataformaActual = World->SpawnActor<APlataformaAerea>(SpawnLocation, Rotacion);

				//tipoPlataformaActual = ETipoPlataforma::PLATAFORMA_AEREA;
				break;
			case 1:
				plataformaActual = World->SpawnActor<APlataformaTerrestre>(SpawnLocation, Rotacion);
				//tipoPlataformaActual = ETipoPlataforma::PLATAFORMA_TERRESTRE;
				break;
			case 2:
				plataformaActual = World->SpawnActor<APlataformaSubterranea>(SpawnLocation, Rotacion);
				//tipoPlataformaActual = ETipoPlataforma::PLATAFORMA_SUBTERRANEA;
				break;
			case 3:
				plataformaActual = World->SpawnActor<APlataformaAcuatica>(SpawnLocation, Rotacion);
				//tipoPlataformaActual = ETipoPlataforma::PLATAFORMA_ACUATICA;
				break;
			default:
				//tipoPlataformaActual = ETipoPlataforma::PLATAFORMA_TERRESTRE;
				break;
			}
		
		aPlataformas.Add(plataformaActual);

	}

	/*

	plataformaActual = World->SpawnActor<APlataformaAerea>(SpawnLocation, Rotacion);
	//plataformaActual->movimientoDireccion = FVector(1.0f, 1.0f, 0.0f);
	aPlataformas.Add(plataformaActual);

	Rotacion = FRotator(0.0f, 0.0f, 0.0f);
	SpawnLocation = FVector(-950.0f, 50.0f, 200.0f);
	
	for (int i = 0; i < 10; i++) {
		SpawnLocation = FVector(FMath::RandRange(-1500.0f, 1500.0f), FMath::RandRange(-1500.0f, 1500.0f), FMath::RandRange(50.0f, 1000.0f));
	
		plataformaActual = World->SpawnActor<APlataforma>(SpawnLocation, Rotacion);
		plataformaActual->movimientoDireccion = FVector(1.0f, 0.0f, 0.0f);
		aPlataformas.Add(plataformaActual);

		plataformaActual = World->SpawnActor<APlataforma>(SpawnLocation, Rotacion);
		plataformaActual->movimientoDireccion = FVector(0.0f, 1.0f, 0.0f);
		aPlataformas.Add(plataformaActual);
	}
	*/
	GetWorldTimerManager().SetTimer(TimerEliminarPlataforma, this, &AAventuraUSFX022026L1GameMode::EliminarPlataforma, 1.0f, true);

}

void AAventuraUSFX022026L1GameMode::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
}

void AAventuraUSFX022026L1GameMode::EliminarPlataforma()
{
	//switch (tipoPlataformaActual){
	//	case 0:
	//		tipoPlataformaActual = 1;
	//		break;
	//	case 1:
	//		tipoPlataformaActual = 2;
	//		break;
	//	case 2:
	//		tipoPlataformaActual = 3;
	//		break;
	//	case 3:
	//		tipoPlataformaActual = 0;
	//		break;
	//	default:
	//		//int32 Indice = FMath::RandRange(0, aPlataformas.Num());
	//		break;
	//}

	for (int32 i = 0; i < aPlataformas.Num(); i++)
	{
		if (aPlataformas[i] != nullptr)
		{
			// Verifica si la plataforma es de tipo ATerrestre
			APlataforma * plataformaActual = aPlataformas[i];

			if (plataformaActual != nullptr)
			{
				if (plataformaActual->tipoPlataforma == static_cast<ETipoPlataforma>(tipoPlataformaActual))
				{
					// Eliminamos el objeto del escenario
					plataformaActual->Destroy();

					// Lo eliminamos también del TArray
					aPlataformas.RemoveAt(i);

					// Salimos del bucle después de eliminar el primero
					break;
				}
			}
		}
	}
	if (tipoPlataformaActual >= 3)
	{
		tipoPlataformaActual = 0;
	}
	else
		tipoPlataformaActual++;

	/*if (aPlataformas.IsValidIndex(Indice))
	{
		if (IsValid(aPlataformas[Indice]))
		{
			aPlataformas[Indice]->Destroy();

			aPlataformas[Indice] = nullptr;
			aPlataformas.RemoveAt(Indice);
		}
	}*/

}

