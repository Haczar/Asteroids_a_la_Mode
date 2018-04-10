#include "NativizedAssets.h"
#include "Arcade_Deluxe_1981__pf179872773.h"
FText E__Arcade_Deluxe_1981__pf__GetUserFriendlyName(int32 InValue)
{
	FText Text;
	const auto EnumValue = static_cast<E__Arcade_Deluxe_1981__pf>(InValue);
	switch(EnumValue)
	{
		case E__Arcade_Deluxe_1981__pf::E__Arcade_Deluxe_1981__pf_MAX: FTextStringHelper::ReadFromString(TEXT("Arcade Deluxe 1981 MAX"), Text); break;
		default: ensure(false);
	};
	return Text;
};
