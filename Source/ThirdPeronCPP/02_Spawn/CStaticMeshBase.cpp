// Fill out your copyright notice in the Description page of Project Settings.


#include "02_Spawn/CStaticMeshBase.h"

// Sets default values
ACStaticMeshBase::ACStaticMeshBase()
{
	MeshComp = CreateDefaultSubobject<UStaticMeshComponent>("MeshComp");
	SetRootComponent(MeshComp);
}

void ACStaticMeshBase::BeginPlay()
{
	Super::BeginPlay();
	
}



