// This file has been automatically generated by the Unreal Header Implementation tool

#include "Buildables/FGBuildableGeneratorNuclear.h"
#include "Hologram/FGFactoryHologram.h"
#include "FGPowerInfoComponent.h"
#include "Replication/FGReplicationDetailInventoryComponent.h"

AFGBuildableGeneratorNuclear::AFGBuildableGeneratorNuclear() : Super() {
	this->mOutputInventoryHandler = CreateDefaultSubobject<UFGReplicationDetailInventoryComponent>(TEXT("WasteInventoryHandler"));
	this->mFuelResourceForm = EResourceForm::RF_SOLID;
	this->mFuelLoadAmount = 1;
	this->mPowerProductionExponent = 1.29999995231628;
	this->mPowerConsumptionExponent = 1.60000002384186;
	this->mPowerInfoClass = UFGPowerInfoComponent::StaticClass();
	this->mMinimumProducingTime = 2;
	this->mMinimumStoppedTime = 5;
	this->mNumCyclesForProductivity = 20;
	this->mCanChangePotential = true;
	this->mPendingPotential = 1;
	this->mMinPotential = 0.00999999977648258;
	this->mMaxPotential = 1;
	this->mMaxPotentialIncreasePerCrystal = 0.5;
	this->mFluidStackSizeDefault = EStackSize::SS_FLUID;
	this->mFluidStackSizeMultiplier = 1;
	this->mSignificanceRange = 18000;
	this->mHologramClass = AFGFactoryHologram::StaticClass();
	this->MaxRenderDistance = -1;
	this->mFactoryTickFunction.TickGroup = TG_PrePhysics; this->mFactoryTickFunction.EndTickGroup = TG_PrePhysics; this->mFactoryTickFunction.bTickEvenWhenPaused = false; this->mFactoryTickFunction.bCanEverTick = true; this->mFactoryTickFunction.bStartWithTickEnabled = true; this->mFactoryTickFunction.bAllowTickOnDedicatedServer = true; this->mFactoryTickFunction.TickInterval = 0;
	this->mPrimaryColor.R = -1; this->mPrimaryColor.G = -1; this->mPrimaryColor.B = -1; this->mPrimaryColor.A = 1;
	this->mSecondaryColor.R = -1; this->mSecondaryColor.G = -1; this->mSecondaryColor.B = -1; this->mSecondaryColor.A = 1;
	this->mDismantleEffectClassName = FSoftClassPath("/Game/FactoryGame/Buildable/Factory/-Shared/BP_MaterialEffect_Dismantle.BP_MaterialEffect_Dismantle_C");
	this->mBuildEffectClassName = FSoftClassPath("/Game/FactoryGame/Buildable/Factory/-Shared/BP_MaterialEffect_Build.BP_MaterialEffect_Build_C");
	this->mHighlightParticleClassName = FSoftClassPath("/Game/FactoryGame/Buildable/-Shared/Particle/NewBuildingPing.NewBuildingPing_C");
	this->PrimaryActorTick.TickGroup = TG_PrePhysics; this->PrimaryActorTick.EndTickGroup = TG_PrePhysics; this->PrimaryActorTick.bTickEvenWhenPaused = false; this->PrimaryActorTick.bCanEverTick = true; this->PrimaryActorTick.bStartWithTickEnabled = true; this->PrimaryActorTick.bAllowTickOnDedicatedServer = true; this->PrimaryActorTick.TickInterval = 0;
	this->SetReplicates(true);
	this->NetDormancy = DORM_Awake;
	this->NetCullDistanceSquared = 5624999936;
}
void AFGBuildableGeneratorNuclear::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const{ }
void AFGBuildableGeneratorNuclear::BeginPlay(){ }
void AFGBuildableGeneratorNuclear::Factory_Tick(float dt){ }
void AFGBuildableGeneratorNuclear::LoadFuel(){ }
bool AFGBuildableGeneratorNuclear::HasPower() const{ return bool(); }
bool AFGBuildableGeneratorNuclear::CanStartPowerProduction_Implementation() const{ return bool(); }
void AFGBuildableGeneratorNuclear::OnReplicationDetailActorRemoved(){ }
bool AFGBuildableGeneratorNuclear::IsWasteFull() const{ return bool(); }
bool AFGBuildableGeneratorNuclear::CanLoadFuel() const{ return bool(); }
void AFGBuildableGeneratorNuclear::TryProduceWaste(){ }
void AFGBuildableGeneratorNuclear::OnRep_ReplicationDetailActor(){ }
AFGReplicationDetailActor_GeneratorNuclear* AFGBuildableGeneratorNuclear::GetCastRepDetailsActor() const{ return nullptr; }
bool AFGBuildableGeneratorNuclear::CanFitWasteOfNextFuelClass() const{ return bool(); }
