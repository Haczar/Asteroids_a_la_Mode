#pragma once
#include "SRotate__pf3227778944.generated.h"
UENUM(BlueprintType, meta=(ReplaceConverted="/Game/Ship/SRotate.SRotate", OverrideNativeName="SRotate", EnumDisplayNameFn="E__SRotate__pf__GetUserFriendlyName") )
enum class E__SRotate__pf  : uint8
{
	NewEnumerator0 = 0 UMETA(OverrideName = "SRotate::NewEnumerator0"),
	NewEnumerator1 = 1 UMETA(OverrideName = "SRotate::NewEnumerator1"),
	NewEnumerator2 = 2 UMETA(OverrideName = "SRotate::NewEnumerator2"),
	E__SRotate__pf_MAX = 3 UMETA(OverrideName = "SRotate::SRotate_MAX"),
};
FText E__SRotate__pf__GetUserFriendlyName(int32 InValue);
