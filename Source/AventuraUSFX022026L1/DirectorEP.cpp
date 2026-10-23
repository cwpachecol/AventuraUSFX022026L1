// Fill out your copyright notice in the Description page of Project Settings.


#include "DirectorEP.h"
#include "BuilderEstructuraPlataforma.h"
#include "BuilderEPAleatoria.h"

// Sets default values
ADirectorEP::ADirectorEP()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

void ADirectorEP::setBuilderEstructuraPlataforma(IBuilderEstructuraPlataforma* builder)
{
	this->builderEstructuraPlataforma = builder;
}

void ADirectorEP::construirEstructuraPlataforma()
{
	builderEstructuraPlataforma->construirEstructuraPlataforma();
}

// Called when the game starts or when spawned
void ADirectorEP::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void ADirectorEP::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

