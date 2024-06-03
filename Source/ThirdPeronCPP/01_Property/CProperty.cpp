#include "CProperty.h"

ACProperty::ACProperty()
{
	PrimaryActorTick.bCanEverTick = true;

	NumA = 999;
	NumB = 20;
	NumC = 30;

	RealA = 100.1f;
	RealB = 200.2f;
	RealC = 300.3f;
}

void ACProperty::BeginPlay()
{
	Super::BeginPlay();

	GEngine->AddOnScreenDebugMessage(-1, 10.0f, FColor::Red, actor->GetNameSafe(this));

	FString str;
	str += "A";
	str += FString:FormInt(NumA);
	str += "B";
	str += FString:FormInt(NumB);
	str += "C";
	str += FString:FormInt(NumC);

	GEngine->AddOnScreenDebugMessage(-1, 10.0f, FColor::Blue , str);
}

void ACProperty::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}


