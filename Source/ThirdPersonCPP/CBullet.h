#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "CBullet.generated.h"

class UStaticMeshComponent;
class UProjectalMovementComponent

UCLASS()
class THIRDPERSONCPP_API ACBullet : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	ACBullet();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

private:
	UPROPERTY(VisibleDefaultsOnly)
		UStaticMeshComponent* MeshComp;

	UPROPERTY(VisibleDefaultsOnly)
		UProjectileMovementComponent* ProjectileComp;
};
