#pragma once
#include "EServerSel__pf1232574660.generated.h"
UENUM(BlueprintType, meta=(ReplaceConverted="/Game/UserInterface/MainScreen/EServerSel.EServerSel", OverrideNativeName="EServerSel", EnumDisplayNameFn="E__EServerSel__pf__GetUserFriendlyName") )
enum class E__EServerSel__pf  : uint8
{
	NewEnumerator0 = 0 UMETA(OverrideName = "EServerSel::NewEnumerator0"),
	NewEnumerator1 = 1 UMETA(OverrideName = "EServerSel::NewEnumerator1"),
	NewEnumerator2 = 2 UMETA(OverrideName = "EServerSel::NewEnumerator2"),
	E__EServerSel__pf_MAX = 3 UMETA(OverrideName = "EServerSel::EServerSel_MAX"),
};
FText E__EServerSel__pf__GetUserFriendlyName(int32 InValue);
