#pragma once
#include "Camera__pf179872773.generated.h"
UENUM(BlueprintType, meta=(ReplaceConverted="/Game/Modes/Options/Camera.Camera", OverrideNativeName="Camera", EnumDisplayNameFn="E__Camera__pf__GetUserFriendlyName") )
enum class E__Camera__pf  : uint8
{
	E__Camera__pf_MAX = 0 UMETA(OverrideName = "Camera::Camera_MAX"),
};
FText E__Camera__pf__GetUserFriendlyName(int32 InValue);
