
#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "CStaticMeshBase.generated.h"

UCLASS()
class THIRDPERONCPP_API ACStaticMeshBase : public AActor
{
	GENERATED_BODY()
	
public:	
	ACStaticMeshBase();

protected:
	virtual void BeginPlay() override;

protected:
	UPROPERTY(EditAnywhere)
	UStaticMeshComponent* MeshComp;

};
