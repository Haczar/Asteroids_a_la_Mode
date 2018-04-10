#include "NativizedAssets.h"
#include "Arcade_1979__pf179872773.h"
FText E__Arcade_1979__pf__GetUserFriendlyName(int32 InValue)
{
	FText Text;
	const auto EnumValue = static_cast<E__Arcade_1979__pf>(InValue);
	switch(EnumValue)
	{
		case E__Arcade_1979__pf::E__Arcade_1979__pf_MAX: FTextStringHelper::ReadFromString(TEXT("Arcade 1979 MAX"), Text); break;
		default: ensure(false);
	};
	return Text;
};
