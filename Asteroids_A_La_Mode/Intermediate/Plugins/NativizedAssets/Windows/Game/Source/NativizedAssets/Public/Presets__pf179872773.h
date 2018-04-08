#pragma once
#include "Presets__pf179872773.generated.h"
UENUM(BlueprintType, meta=(ReplaceConverted="/Game/Modes/Options/Presets.Presets", OverrideNativeName="Presets", EnumDisplayNameFn="E__Presets__pf__GetUserFriendlyName") )
enum class E__Presets__pf  : uint8
{
	E__Presets__pf_MAX = 0 UMETA(OverrideName = "Presets::Presets_MAX"),
};
FText E__Presets__pf__GetUserFriendlyName(int32 InValue);
