// This file has been automatically generated by the Unreal Header Implementation tool

#include "FGGameUserSettings.h"

void UFGGameUserSettings::ApplyNonResolutionSettings(){ }
void UFGGameUserSettings::ApplyResolutionSettings(bool bCheckForCommandLineOverrides){ }
void UFGGameUserSettings::ApplySettings(bool bCheckForCommandLineOverrides){ }
void UFGGameUserSettings::SaveSettings(){ }
void UFGGameUserSettings::LoadSettings(bool bForceReload){ }
float UFGGameUserSettings::GetEffectiveFrameRateLimit(){ return float(); }
void UFGGameUserSettings::ConfirmVideoMode(){ }
void UFGGameUserSettings::ResetOption(FString cvar){ }
void UFGGameUserSettings::ResetOptionCategory(EOptionCategory optionCategory){ }
void UFGGameUserSettings::RevertUnsavedChanges(){ }
void UFGGameUserSettings::SetupBindings(){ }
bool UFGGameUserSettings::IsStableVideoModeDirty(){ return bool(); }
void UFGGameUserSettings::ResetVideoModeToLatestStable(){ }
void UFGGameUserSettings::ConfirmStableVideoMode(){ }
void UFGGameUserSettings::SanitizeResolution(){ }
void UFGGameUserSettings::ToggleFullscreenMode(){ }
UFGGameUserSettings* UFGGameUserSettings::GetFGGameUserSettings(){ return nullptr; }
void UFGGameUserSettings::UpdateAudioOption(FString updatedCvar){ }
void UFGGameUserSettings::OnArachnophobiaModeUpdated(FString updatedCvar){ }
void UFGGameUserSettings::OnFoliageQualityUpdated(FString updatedCvar){ }
void UFGGameUserSettings::OnMotionBlurEnabledUpdated(FString updatedCvar){ }
void UFGGameUserSettings::OnPoolLightQualityUpdated(FString updatedCvar){ }
void UFGGameUserSettings::OnNetworkQualityUpdated(FString updatedCvar){ }
int32 UFGGameUserSettings::GetDefaultPostProcessQualitySetting(FString settingName){ return int32(); }
void UFGGameUserSettings::RefreshNetworkQualityValues(){ }
void UFGGameUserSettings::AddCustomActionMapping(FFGKeyMapping newMapping){ }
void UFGGameUserSettings::RemoveAllCustomActionMappings(){ }
bool UFGGameUserSettings::GetRequireSessionRestart() const{ return bool(); }
bool UFGGameUserSettings::GetRequireGameRestart() const{ return bool(); }
bool UFGGameUserSettings::GetBoolOptionValue(FString cvar){ return bool(); }
void UFGGameUserSettings::SetBoolOptionValue(FString cvar, bool value){ }
int32 UFGGameUserSettings::GetIntOptionValue(FString cvar){ return int32(); }
void UFGGameUserSettings::SetIntOptionValue(FString cvar, int32 newValue){ }
float UFGGameUserSettings::GetFloatOptionValue(FString cvar){ return float(); }
float UFGGameUserSettings::GetFloatUIDisplayValue(FString cvar){ return float(); }
int32 UFGGameUserSettings::GetIntUIDisplayValue(FString cvar){ return int32(); }
bool UFGGameUserSettings::GetBoolUIDisplayValue(FString cvar){ return bool(); }
bool UFGGameUserSettings::HasAnyUnsavedOptionValueChanges(){ return bool(); }
bool UFGGameUserSettings::HasPendingApplyOptionValue(FString cvar){ return bool(); }
bool UFGGameUserSettings::HasPendingAnyRestartOptionValue(FString cvar){ return bool(); }
void UFGGameUserSettings::SetFloatOptionValue(FString cvar, float newValue){ }
void UFGGameUserSettings::SetCvarValue(FString cvar, int32 value){ }
void UFGGameUserSettings::SetCvarValue(FString cvar, float value){ }
void UFGGameUserSettings::InitDefaultIntOptionValue(FString cvar, int32 value, FText tooltip, EOptionApplyType optionApplyType){ }
void UFGGameUserSettings::InitDefaultFloatOptionValue(FString cvar, float value, FText tooltip, EOptionApplyType optionApplyType){ }
void UFGGameUserSettings::SetupDefaultOptionsValues(){ }
void UFGGameUserSettings::SetupAudioOption( FOptionRowData data){ }
void UFGGameUserSettings::RegisterConsoleVariable(FString cvar, int32 value, FString tooltip){ }
void UFGGameUserSettings::RegisterConsoleVariable(FString cvar, float value, FString tooltip){ }
void UFGGameUserSettings::ApplyPendingChanges(){ }
void UFGGameUserSettings::CheckForCvarOverrides(){ }
void UFGGameUserSettings::CheckForVideoCvarOverrides(){ }
void UFGGameUserSettings::OnExitToMainMenu(){ }
void UFGGameUserSettings::OnExitToDesktop(){ }
void UFGGameUserSettings::CVarSinkHandler(){ }
void UFGGameUserSettings::UpdateCvars(){ }
void UFGGameUserSettings::SubscribeToDynamicOptionUpdate(FString cvar, const FOptionUpdated& optionUpdatedDelegate){ }
void UFGGameUserSettings::UnsubscribeToDynamicOptionUpdate(FString cvar, const FOptionUpdated& optionUpdatedDelegate){ }
void UFGGameUserSettings::UnsubscribeToAllDynamicOptionUpdate(UObject* boundObject){ }
TMap<FString, FText> UFGGameUserSettings::GetLanguageData(){ return TMap<FString,FText>(); }
void UFGGameUserSettings::SetLanguageData(TMap<FString, FText> languageData){ }
void UFGGameUserSettings::QuickSwitchLanguage(){ }
void UFGGameUserSettings::ResetLanguageToPrimary(){ }
void UFGGameUserSettings::HandleFGGameUserSettingsVersionChanged(){ }
void UFGGameUserSettings::DumpDynamicOptionsSettings(){ }
void UFGGameUserSettings::GetOptionsDebugData(TArray<FString>& out_debugData){ }
bool UFGGameUserSettings::ValidateCVar(FString &cvar){ return bool(); }
void UFGGameUserSettings::BroadcastDynamicOptionUpdate(FString cvar){ }
FAutoConsoleVariableSink UFGGameUserSettings::mCVarSink = NULL;
