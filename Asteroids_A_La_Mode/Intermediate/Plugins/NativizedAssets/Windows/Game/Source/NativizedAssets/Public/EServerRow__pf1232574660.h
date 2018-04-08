#pragma once
#include "EServerRow__pf1232574660.generated.h"
UENUM(BlueprintType, meta=(ReplaceConverted="/Game/UserInterface/MainScreen/EServerRow.EServerRow", OverrideNativeName="EServerRow", EnumDisplayNameFn="E__EServerRow__pf__GetUserFriendlyName") )
enum class E__EServerRow__pf  : uint8
{
	E__EServerRow__pf_MAX = 0 UMETA(OverrideName = "EServerRow::EServerRow_MAX"),
};
FText E__EServerRow__pf__GetUserFriendlyName(int32 InValue);
