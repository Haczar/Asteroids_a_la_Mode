#include "NativizedAssets.h"
#include "Presets__pf179872773.h"
FText E__Presets__pf__GetUserFriendlyName(int32 InValue)
{
	FText Text;
	const auto EnumValue = static_cast<E__Presets__pf>(InValue);
	switch(EnumValue)
	{
		case E__Presets__pf::E__Presets__pf_MAX: FTextStringHelper::ReadFromString(TEXT("Presets MAX"), Text); break;
		default: ensure(false);
	};
	return Text;
};
