#pragma once
#include "Audio__pf179872773.generated.h"
UENUM(BlueprintType, meta=(ReplaceConverted="/Game/Modes/Options/Audio.Audio", OverrideNativeName="Audio", EnumDisplayNameFn="E__Audio__pf__GetUserFriendlyName") )
enum class E__Audio__pf  : uint8
{
	E__Audio__pf_MAX = 0 UMETA(OverrideName = "Audio::Audio_MAX"),
};
FText E__Audio__pf__GetUserFriendlyName(int32 InValue);
