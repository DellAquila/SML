// This file has been automatically generated by the Unreal Header Implementation tool

#include "Equipment/FGHoverPack.h"
#include "FGPowerConnectionComponent.h"
#include "FGPowerInfoComponent.h"

AFGHoverPack::AFGHoverPack() : Super() {
	this->mHoverSpeed = 800;
	this->mHoverAccelerationSpeed = 2000;
	this->mHoverSprintMultiplier = 2;
	this->mRailRoadSurfSpeed = 2500;
	this->mRailroadSurfSensitivity = 0.100000001490116;
	this->mHoverFriction = 0.990000009536743;
	this->mJumpKeyHoldActivationTime = 0.300000011920929;
	this->mFallSpeedLimitWhenPowered = 300;
	this->mPowerConnectionSearchRadius = 3000;
	this->mPowerConnectionSearchTickRate = 0.100000001490116;
	this->mPowerConnectionDisconnectionTime = 0.5;
	this->mPowerCapacity = 3;
	this->mPowerDrainRate = 0.5;
	this->mRangeWarningNormalizedDistanceThreshold = 0.75;
	this->mCrouchHoverCancelTime = 0.300000011920929;
	this->mPowerInfo = CreateDefaultSubobject<UFGPowerInfoComponent>(TEXT("Power Info"));
	this->mPowerConnection = CreateDefaultSubobject<UFGPowerConnectionComponent>(TEXT("Power Connection")); this->mPowerConnection->SetupAttachment(this->RootComponent);
	this->mEquipmentSlot = EEquipmentSlot::ES_BACK;
	this->mBackAnimation = EBackEquipment::BE_Jetpack;
	this->PrimaryActorTick.TickGroup = TG_PrePhysics; this->PrimaryActorTick.EndTickGroup = TG_PrePhysics; this->PrimaryActorTick.bTickEvenWhenPaused = false; this->PrimaryActorTick.bCanEverTick = true; this->PrimaryActorTick.bStartWithTickEnabled = false; this->PrimaryActorTick.bAllowTickOnDedicatedServer = true; this->PrimaryActorTick.TickInterval = 0;
	this->bOnlyRelevantToOwner = true;
	this->bNetUseOwnerRelevancy = true;
	this->SetReplicates(true);
}
void AFGHoverPack::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const{ }
void AFGHoverPack::BeginPlay(){ }
void AFGHoverPack::Tick(float deltaTime){ }
void AFGHoverPack::PreReplication(IRepChangedPropertyTracker& ChangedPropertyTracker){ }
void AFGHoverPack::Equip( AFGCharacterPlayer* character){ }
void AFGHoverPack::UnEquip(){ }
void AFGHoverPack::OnCharacterMovementModeChanged(EMovementMode PreviousMovementMode, uint8 PreviousCustomMode, EMovementMode NewMovementMode, uint8 NewCustomMode){ }
void AFGHoverPack::AddEquipmentActionBindings(){ }
float AFGHoverPack::GetCharacterUseDistanceOverride() const{ return float(); }
float AFGHoverPack::GetMaxSpeed(bool IsSprinting) const{ return float(); }
float AFGHoverPack::GetHoverSpeed(bool IsSprinting) const{ return float(); }
float AFGHoverPack::GetHoverAccelerationSpeed(bool IsSprinting) const{ return float(); }
float AFGHoverPack::GetNormalizedDistanceFromConnection() const{ return float(); }
float AFGHoverPack::GetDistanceFromCurrentConnection() const{ return float(); }
float AFGHoverPack::GetMaxDistanceFromCurrentConnection() const{ return float(); }
float AFGHoverPack::GetHeightAboveCurrentConnection() const{ return float(); }
void AFGHoverPack::SetHoverMode(EHoverPackMode HoverMode, bool UpdateMovementMode){ }
void AFGHoverPack::ConnectToNearestPowerConnection(){ }
EHoverConnectionStatus AFGHoverPack::GetPowerConnectionStatus( UFGPowerConnectionComponent* Connection) const{ return EHoverConnectionStatus(); }
bool AFGHoverPack::IsPowerConnectionValid( UFGPowerConnectionComponent* Connection, bool CheckDistance) const{ return bool(); }
bool AFGHoverPack::IsRailroadTrackValid( AFGBuildableRailroadTrack* RailroadTrack, bool CheckDistance) const{ return bool(); }
void AFGHoverPack::OnHoverModeChanged_Implementation(EHoverPackMode NewMode){ }
void AFGHoverPack::OnPowerConnectionLocationUpdated_Implementation(const FVector& NewLocation){ }
void AFGHoverPack::OnConnectionStatusUpdated_Implementation(const bool HasConnection){ }
void AFGHoverPack::OnRangeWarningToggle_Implementation(const bool ShouldDisplayWarning){ }
void AFGHoverPack::HandlePowerConnection(const float DeltaTime){ }
void AFGHoverPack::ConnectToPowerConnection( UFGPowerConnectionComponent* Connection){ }
void AFGHoverPack::DisconnectFromCurrentPowerConnection(){ }
void AFGHoverPack::ConnectToRailroadTrack( AFGBuildableRailroadTrack* RailroadTrack){ }
void AFGHoverPack::SetCharacterHoverMovementMode() const{ }
void AFGHoverPack::OnCrouchPressed(){ }
void AFGHoverPack::PlayerStopHover_Server_Implementation(){ }
bool AFGHoverPack::PlayerStopHover_Server_Validate(){ return bool(); }
void AFGHoverPack::PlayerStopHover(){ }
bool AFGHoverPack::PlayerIsInHoverMovementMode() const{ return bool(); }
void AFGHoverPack::OnRep_HasConnection(){ }
void AFGHoverPack::OnRep_CurrentHoverMode(){ }
void AFGHoverPack::OnRep_CurrentConnectionLocation(){ }
AFGHoverPackAttachment::AFGHoverPackAttachment() : Super() {
	this->PrimaryActorTick.TickGroup = TG_PrePhysics; this->PrimaryActorTick.EndTickGroup = TG_PrePhysics; this->PrimaryActorTick.bTickEvenWhenPaused = false; this->PrimaryActorTick.bCanEverTick = true; this->PrimaryActorTick.bStartWithTickEnabled = false; this->PrimaryActorTick.bAllowTickOnDedicatedServer = true; this->PrimaryActorTick.TickInterval = 0;
	this->bNetUseOwnerRelevancy = true;
	this->SetReplicates(true);
}
void AFGHoverPackAttachment::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const{ }
void AFGHoverPackAttachment::SetCurrentHoverMode(EHoverPackMode NewMode){ }
void AFGHoverPackAttachment::SetConnectionStatus(bool HasConnection){ }
void AFGHoverPackAttachment::SetCurrentRailroadTrack( AFGBuildableRailroadTrack* RailroadTrack){ }
void AFGHoverPackAttachment::SetConnectionLocation(const FVector& NewLocation){ }
void AFGHoverPackAttachment::OnRep_CurrentHoverMode(){ }
void AFGHoverPackAttachment::OnRep_HasConnection(){ }
void AFGHoverPackAttachment::OnRep_CurrentConnectionLocation(){ }