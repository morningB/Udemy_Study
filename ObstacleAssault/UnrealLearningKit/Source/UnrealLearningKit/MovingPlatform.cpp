// Fill out your copyright notice in the Description page of Project Settings.


#include "MovingPlatform.h" // 정의된 헤더 호출

// Sets default values
AMovingPlatform::AMovingPlatform()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned 게임 시작시 실행
void AMovingPlatform::BeginPlay()
{
	Super::BeginPlay();
	

	SetActorLocation(MyFloat);
}

// Called every frame
void AMovingPlatform::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

