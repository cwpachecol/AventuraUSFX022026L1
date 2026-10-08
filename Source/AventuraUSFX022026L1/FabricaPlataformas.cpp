// Fill out your copyright notice in the Description page of Project Settings.


#include "FabricaPlataformas.h"
#include "PlataformaAerea.h"
#include "PlataformaAcuatica.h"
#include "PlataformaTerrestre.h"
#include "PlataformaSubterranea.h"

// Sets default values
AFabricaPlataformas::AFabricaPlataformas()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

APlataforma* AFabricaPlataformas::CrearPlataforma(FString _tipoPlataforma, FVector Location, FRotator Rotation)
{
	//Select which potion to spawn depending on the passed string
	if (_tipoPlataforma.Equals("Area")) {
		return GetWorld()->SpawnActor<APlataformaAerea>(Location, Rotation);
	}
	else if (_tipoPlataforma.Equals("Acuatica")) {
		return GetWorld()->SpawnActor<APlataformaAcuatica>
			(APlataformaAcuatica::StaticClass());
	}
	else if (_tipoPlataforma.Equals("Terrestre")) {
		return GetWorld()->SpawnActor<APlataformaTerrestre>
			(APlataformaTerrestre::StaticClass());
	}
	else return nullptr; //Return n
}

// Called when the game starts or when spawned
void AFabricaPlataformas::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AFabricaPlataformas::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

