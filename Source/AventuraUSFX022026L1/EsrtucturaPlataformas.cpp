// Fill out your copyright notice in the Description page of Project Settings.


#include "EsrtucturaPlataformas.h"
#include "PlataformaAerea.h"
#include "FabricaPlataformas.h"

// Sets default values
AEsrtucturaPlataformas::AEsrtucturaPlataformas()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

void AEsrtucturaPlataformas::DetenerMovimientoPlataformas()
{
	for (APlataformaAerea* plataformaAereaAcual : aPlataformasAereas)
	{
		plataformaAereaAcual->bMovimientoActivo = true;
	}

}

void AEsrtucturaPlataformas::ReanudarMovimientoPlataformas()
{
	for (APlataformaAerea* plataformaAereaAcual : aPlataformasAereas)
	{
		plataformaAereaAcual->bMovimientoActivo = false;
	}

}

void AEsrtucturaPlataformas::crearPlataformas()
{
	UWorld* World = GetWorld();

	if (World == nullptr)
	{
		return;
	}

	AFabricaPlataformas* FabricaPlataformas = World->SpawnActor<AFabricaPlataformas>(AFabricaPlataformas::StaticClass());


	FRotator Rotacion = FRotator::ZeroRotator;
	FVector SpawnLocation = FVector::ZeroVector;


	Rotacion = FRotator(0.0f, 0.0f, 0.0f);
	SpawnLocation = FVector(-950.0f, 50.0f, 200.0f);

	for (int i = 0; i < 10; i++) {
		SpawnLocation = FVector(FMath::RandRange(-1500.0f, 1500.0f), FMath::RandRange(-1500.0f, 1500.0f), FMath::RandRange(50.0f, 1000.0f));
		FabricaPlataformas->CrearPlataforma("Aerea", SpawnLocation, Rotacion);
	}


}

// Called when the game starts or when spawned
void AEsrtucturaPlataformas::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AEsrtucturaPlataformas::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

