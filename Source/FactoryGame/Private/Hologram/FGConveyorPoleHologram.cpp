// This file has been automatically generated by the Unreal Header Implementation tool

#include "Hologram/FGConveyorPoleHologram.h"
#include "Buildables/FGBuildableRoad.h"
#include "Buildables/FGBuildableRailroadTrack.h"
#include "Buildables/FGBuildableFoundation.h"

AFGConveyorPoleHologram::AFGConveyorPoleHologram() : Super() {
	this->mMaxPlacementFloorAngle = 35;
	this->mValidHitClasses.Add(AFGBuildableFoundation::StaticClass()); this->mValidHitClasses.Add(AFGBuildableRailroadTrack::StaticClass()); this->mValidHitClasses.Add(AFGBuildableRoad::StaticClass());
	this->SetHidden(true);
	this->SetReplicates(true);
}
void AFGConveyorPoleHologram::BeginPlay(){ }
void AFGConveyorPoleHologram::SnapToConnection(UFGFactoryConnectionComponent* connection,  AFGConveyorBeltHologram* parentConveyor){ }
void AFGConveyorPoleHologram::SetSnappBuilding( AFGBuildable* snappedBuilding){ }
