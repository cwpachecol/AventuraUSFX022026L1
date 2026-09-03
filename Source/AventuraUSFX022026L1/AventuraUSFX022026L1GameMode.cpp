// Copyright Epic Games, Inc. All Rights Reserved.

#include "AventuraUSFX022026L1GameMode.h"
#include "AventuraUSFX022026L1Pawn.h"
#include "Plataforma.h"
#include "PlataformaAerea.h"

AAventuraUSFX022026L1GameMode::AAventuraUSFX022026L1GameMode()
{
	// set default pawn class to our character class
	DefaultPawnClass = AAventuraUSFX022026L1Pawn::StaticClass();
}

void AAventuraUSFX022026L1GameMode::BeginPlay()
{
	Super::BeginPlay();

	UWorld* World = GetWorld();

	if (World == nullptr)
	{
		return;
	}

	FRotator Rotacion = FRotator(0.0f, 0.0f, 0.0f);
	FVector SpawnLocation = FVector(-1100.0f, 1100.0f, 600.0f);
	APlataforma* plataformaActual;

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
	
	GetWorldTimerManager().SetTimer(TimerEliminarPlataforma, this, &AAventuraUSFX022026L1GameMode::EliminarPlataforma, 15.0f, true, 5.0f);

}

void AAventuraUSFX022026L1GameMode::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
}

void AAventuraUSFX022026L1GameMode::EliminarPlataforma()
{
	int32 Indice = FMath::RandRange(0, aPlataformas.Num());


	if (aPlataformas.IsValidIndex(Indice))
	{
		if (IsValid(aPlataformas[Indice]))
		{
			aPlataformas[Indice]->Destroy();

			aPlataformas[Indice] = nullptr;
			aPlataformas.RemoveAt(Indice);
		}
	}

}

