#include "NativizedAssets.h"
#include "EOptionSel__pf1232574660.h"
FText E__EOptionSel__pf__GetUserFriendlyName(int32 InValue)
{
	FText Text;
	const auto EnumValue = static_cast<E__EOptionSel__pf>(InValue);
	switch(EnumValue)
	{
		case E__EOptionSel__pf::NewEnumerator0: FTextStringHelper::ReadFromString(TEXT("NSLOCTEXT(\"[70146B7140DEA169A15E9CA852D33081]\", \"A95AFA25401A9F01EBFCEAAAFC6E1D0C\", \"Display Mode\")"), Text); break;
		case E__EOptionSel__pf::NewEnumerator1: FTextStringHelper::ReadFromString(TEXT("NSLOCTEXT(\"[70146B7140DEA169A15E9CA852D33081]\", \"C69B0C5D491997BF76B7BFAEDBAEEFFD\", \"Display Resolution\")"), Text); break;
		case E__EOptionSel__pf::NewEnumerator3: FTextStringHelper::ReadFromString(TEXT("NSLOCTEXT(\"[70146B7140DEA169A15E9CA852D33081]\", \"F392E0CB41FA85E5E4CA5C9B43D67D1A\", \"V-Sync\")"), Text); break;
		case E__EOptionSel__pf::NewEnumerator4: FTextStringHelper::ReadFromString(TEXT("NSLOCTEXT(\"[70146B7140DEA169A15E9CA852D33081]\", \"6E1207EA468CC0A3857991BB1422A0B2\", \"Render Scale\")"), Text); break;
		case E__EOptionSel__pf::NewEnumerator2: FTextStringHelper::ReadFromString(TEXT("NSLOCTEXT(\"[70146B7140DEA169A15E9CA852D33081]\", \"C709DEFE42A3655ED997D298F3DFC247\", \"Graphics Skin\")"), Text); break;
		case E__EOptionSel__pf::NewEnumerator5: FTextStringHelper::ReadFromString(TEXT("NSLOCTEXT(\"[70146B7140DEA169A15E9CA852D33081]\", \"BAB46FB34BA7EB8E4A65DEABB27E8464\", \"Master Volume\")"), Text); break;
		case E__EOptionSel__pf::NewEnumerator6: FTextStringHelper::ReadFromString(TEXT("NSLOCTEXT(\"[70146B7140DEA169A15E9CA852D33081]\", \"9BA4617F488BE35B0728458B43F91901\", \"Music\")"), Text); break;
		case E__EOptionSel__pf::NewEnumerator7: FTextStringHelper::ReadFromString(TEXT("NSLOCTEXT(\"[70146B7140DEA169A15E9CA852D33081]\", \"FFBA0EB74C51352B790B7F82332E419D\", \"SFX\")"), Text); break;
		case E__EOptionSel__pf::E__EOptionSel__pf_MAX: FTextStringHelper::ReadFromString(TEXT("EOption Sel MAX"), Text); break;
		default: ensure(false);
	};
	return Text;
};
