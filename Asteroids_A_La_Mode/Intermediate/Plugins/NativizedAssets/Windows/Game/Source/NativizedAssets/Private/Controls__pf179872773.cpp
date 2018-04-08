#include "NativizedAssets.h"
#include "Controls__pf179872773.h"
FText E__Controls__pf__GetUserFriendlyName(int32 InValue)
{
	FText Text;
	const auto EnumValue = static_cast<E__Controls__pf>(InValue);
	switch(EnumValue)
	{
		case E__Controls__pf::NewEnumerator0: FTextStringHelper::ReadFromString(TEXT("NSLOCTEXT(\"[661D536E4CE2FF14BC0057AFB97D95B0]\", \"667E322643E54CC7D67D15AEE8F193EA\", \"Menu Select\")"), Text); break;
		case E__Controls__pf::NewEnumerator1: FTextStringHelper::ReadFromString(TEXT("NSLOCTEXT(\"[661D536E4CE2FF14BC0057AFB97D95B0]\", \"1F98D0A34EAC29E5AB436EBEC2B5BFC5\", \"Menu \")"), Text); break;
		case E__Controls__pf::E__Controls__pf_MAX: FTextStringHelper::ReadFromString(TEXT("Controls MAX"), Text); break;
		default: ensure(false);
	};
	return Text;
};
