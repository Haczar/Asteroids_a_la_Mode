#include "NativizedAssets.h"
#include "EServerRow__pf1232574660.h"
FText E__EServerRow__pf__GetUserFriendlyName(int32 InValue)
{
	FText Text;
	const auto EnumValue = static_cast<E__EServerRow__pf>(InValue);
	switch(EnumValue)
	{
		case E__EServerRow__pf::E__EServerRow__pf_MAX: FTextStringHelper::ReadFromString(TEXT("EServer Row MAX"), Text); break;
		default: ensure(false);
	};
	return Text;
};
