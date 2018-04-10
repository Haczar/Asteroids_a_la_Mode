#include "NativizedAssets.h"
#include "EServerSel__pf1232574660.h"
FText E__EServerSel__pf__GetUserFriendlyName(int32 InValue)
{
	FText Text;
	const auto EnumValue = static_cast<E__EServerSel__pf>(InValue);
	switch(EnumValue)
	{
		case E__EServerSel__pf::NewEnumerator0: FTextStringHelper::ReadFromString(TEXT("NSLOCTEXT(\"[AA65041F40A9FEAC812487A918798C96]\", \"ADC537FD422240EC1E15F49CCD89F724\", \"ServerList\")"), Text); break;
		case E__EServerSel__pf::NewEnumerator1: FTextStringHelper::ReadFromString(TEXT("NSLOCTEXT(\"[AA65041F40A9FEAC812487A918798C96]\", \"71EEA0E04C30DADF2DE1F3A629B515BF\", \"Refresh\")"), Text); break;
		case E__EServerSel__pf::NewEnumerator2: FTextStringHelper::ReadFromString(TEXT("NSLOCTEXT(\"[AA65041F40A9FEAC812487A918798C96]\", \"5F5520814DFD3A6370D8969CDED2F094\", \"Back\")"), Text); break;
		case E__EServerSel__pf::E__EServerSel__pf_MAX: FTextStringHelper::ReadFromString(TEXT("EServer Sel MAX"), Text); break;
		default: ensure(false);
	};
	return Text;
};
