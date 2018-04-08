#include "NativizedAssets.h"
#include "ECoOpSel__pf1232574660.h"
FText E__ECoOpSel__pf__GetUserFriendlyName(int32 InValue)
{
	FText Text;
	const auto EnumValue = static_cast<E__ECoOpSel__pf>(InValue);
	switch(EnumValue)
	{
		case E__ECoOpSel__pf::NewEnumerator0: FTextStringHelper::ReadFromString(TEXT("NSLOCTEXT(\"[43C3AE4E4738A0AF7DDF579E0F415C1B]\", \"DD9961114FD08BAFEA27A0AC90C142BF\", \"Host Game\")"), Text); break;
		case E__ECoOpSel__pf::NewEnumerator1: FTextStringHelper::ReadFromString(TEXT("NSLOCTEXT(\"[43C3AE4E4738A0AF7DDF579E0F415C1B]\", \"333626C4481650BE1EB42981CCB42897\", \"Join Game\")"), Text); break;
		case E__ECoOpSel__pf::NewEnumerator2: FTextStringHelper::ReadFromString(TEXT("NSLOCTEXT(\"[43C3AE4E4738A0AF7DDF579E0F415C1B]\", \"C868F2604FC485004A25C89E17AFD988\", \"Back\")"), Text); break;
		case E__ECoOpSel__pf::E__ECoOpSel__pf_MAX: FTextStringHelper::ReadFromString(TEXT("ECo Op Sel MAX"), Text); break;
		default: ensure(false);
	};
	return Text;
};
