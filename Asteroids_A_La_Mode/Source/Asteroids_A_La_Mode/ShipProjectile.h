// We don't have a legal team rip.

#pragma once

#include "CoreMinimal.h"

#include "UObject/ConstructorHelpers.h"
#include "GameFramework/ProjectileMovementComponent.h"
#include "GameFramework/Actor.h"

//Must be last?
#include "ShipProjectile.generated.h"

UCLASS()
class ASTEROIDS_A_LA_MODE_API AShipProjectile : public AActor
{
	GENERATED_BODY()

public:   
	//Construction
	AShipProjectile();

	//Blueprint Events
	UFUNCTION(BlueprintNativeEvent, BlueprintCallable) 
	void Collided(UObject *objectCollided);

	//Blueprint Functions
	UFUNCTION(BlueprintImplementableEvent) 
	void HandleAsteroidCollision(UObject *AsteroidObj);

protected:   // Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:   //Logic Loop
	virtual void Tick(float DeltaTime) override;

private:   //Internal Functionality
	void setupSProjectile	    ();
	void setupMovementAndPhysics();

public:   //Native and foriegn declareations and refrences.

	//Native
	float TimeElapsed;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly ) USceneComponent		    *sceneRoot	   ; 
	UPROPERTY(VisibleAnywhere, BlueprintReadWrite) UStaticMeshComponent	    *projectileMesh;
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly ) UProjectileMovementComponent *projMoveComp  ;

	//Foreign Objects
};  
