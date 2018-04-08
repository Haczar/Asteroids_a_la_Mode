#pragma once
#include "BorderSide__pf2174024837.generated.h"
UENUM(BlueprintType, meta=(ReplaceConverted="/Game/Levels/Assets/Colliders/BorderSide.BorderSide", OverrideNativeName="BorderSide", EnumDisplayNameFn="E__BorderSide__pf__GetUserFriendlyName") )
enum class E__BorderSide__pf  : uint8
{
	NewEnumerator0 = 0 UMETA(OverrideName = "BorderSide::NewEnumerator0"),
	NewEnumerator1 = 1 UMETA(OverrideName = "BorderSide::NewEnumerator1"),
	NewEnumerator2 = 2 UMETA(OverrideName = "BorderSide::NewEnumerator2"),
	NewEnumerator3 = 3 UMETA(OverrideName = "BorderSide::NewEnumerator3"),
	E__BorderSide__pf_MAX = 4 UMETA(OverrideName = "BorderSide::BorderSide_MAX"),
};
FText E__BorderSide__pf__GetUserFriendlyName(int32 InValue);
