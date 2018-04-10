#include "NativizedAssets.h"
#include "ERenderValDirection__pf1232574660.h"
FText E__ERenderValDirection__pf__GetUserFriendlyName(int32 InValue)
{
	FText Text;
	const auto EnumValue = static_cast<E__ERenderValDirection__pf>(InValue);
	switch(EnumValue)
	{
		case E__ERenderValDirection__pf::NewEnumerator0: FTextStringHelper::ReadFromString(TEXT("NSLOCTEXT(\"[0827065D41BF00BCC113419E9BF1DC14]\", \"F72D06DC49038E6C05B76391BF4DD0E1\", \"Neutral\")"), Text); break;
		case E__ERenderValDirection__pf::NewEnumerator1: FTextStringHelper::ReadFromString(TEXT("NSLOCTEXT(\"[0827065D41BF00BCC113419E9BF1DC14]\", \"40EE93474BD4F8DC236541ABE94ED3F6\", \"Increasing\")"), Text); break;
		case E__ERenderValDirection__pf::NewEnumerator2: FTextStringHelper::ReadFromString(TEXT("NSLOCTEXT(\"[0827065D41BF00BCC113419E9BF1DC14]\", \"854BCCCA4FC35902723B05BC4E10F388\", \"Decreasing\")"), Text); break;
		case E__ERenderValDirection__pf::E__ERenderValDirection__pf_MAX: FTextStringHelper::ReadFromString(TEXT("ERender Val Direction MAX"), Text); break;
		default: ensure(false);
	};
	return Text;
};
