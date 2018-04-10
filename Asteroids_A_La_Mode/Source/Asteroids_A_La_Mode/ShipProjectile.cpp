// We don't have a legal team rip.

#include "ShipProjectile.h"   //Must be first.

#include "Components/StaticMeshComponent.h"


// Sets default values
AShipProjectile::AShipProjectile()
{
	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;



	setupSProjectile	   ();   //Performs proper setup for this object at construction.
	setupMovementAndPhysics();

	sceneRoot	  ->SetupAttachment(RootComponent);
	projectileMesh->SetupAttachment(RootComponent);
}

void AShipProjectile::Collided_Implementation(UObject *objectCollided)
{
	HandleAsteroidCollision(objectCollided);
}

// Called when the game starts or when spawned
void AShipProjectile::BeginPlay()
{
	Super::BeginPlay();
}

// Called every frame
void AShipProjectile::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	TimeElapsed += DeltaTime;

	if (TimeElapsed >= 1.0)
	{
		Destroy();
	}
}

//Setup
void AShipProjectile::setupSProjectile()
{
	//Native component creation.
	sceneRoot	   = CreateDefaultSubobject<USceneComponent				>(TEXT("Projectile Root"	));
	projectileMesh = CreateDefaultSubobject<UStaticMeshComponent		>(TEXT("Projectile SMesh"	));
	projMoveComp   = CreateDefaultSubobject<UProjectileMovementComponent>(TEXT("Projectile Movement"));
}

void AShipProjectile::setupMovementAndPhysics()
{
	projMoveComp->InitialSpeed			 = 2000.0;
	projMoveComp->ProjectileGravityScale =		0;

	projMoveComp->Velocity.Set(0.0, 0.0, -1.0);
}