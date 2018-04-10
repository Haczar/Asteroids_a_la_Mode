#pragma once
#include "SuperAsteroids__pf179872773.generated.h"
UENUM(BlueprintType, meta=(ReplaceConverted="/Game/Modes/Options/SuperAsteroids.SuperAsteroids", OverrideNativeName="SuperAsteroids", EnumDisplayNameFn="E__SuperAsteroids__pf__GetUserFriendlyName") )
enum class E__SuperAsteroids__pf  : uint8
{
	E__SuperAsteroids__pf_MAX = 0 UMETA(OverrideName = "SuperAsteroids::SuperAsteroids_MAX"),
};
FText E__SuperAsteroids__pf__GetUserFriendlyName(int32 InValue);
