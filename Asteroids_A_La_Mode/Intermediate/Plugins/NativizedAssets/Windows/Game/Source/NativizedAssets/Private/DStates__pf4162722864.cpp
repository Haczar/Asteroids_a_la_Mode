#include "NativizedAssets.h"
#include "DStates__pf4162722864.h"
FText E__DStates__pf__GetUserFriendlyName(int32 InValue)
{
	FText Text;
	const auto EnumValue = static_cast<E__DStates__pf>(InValue);
	switch(EnumValue)
	{
		case E__DStates__pf::NewEnumerator0: FTextStringHelper::ReadFromString(TEXT("NSLOCTEXT(\"[03A2564F4FFC1E4A5017AFA68A85CDC1]\", \"3A0B22D049930471F807C0B3A1B146C4\", \"Arcade1979\")"), Text); break;
		case E__DStates__pf::NewEnumerator1: FTextStringHelper::ReadFromString(TEXT("NSLOCTEXT(\"[03A2564F4FFC1E4A5017AFA68A85CDC1]\", \"F334920F462706B1DE6AD58A2D495A3C\", \"Arcade1981\")"), Text); break;
		case E__DStates__pf::NewEnumerator2: FTextStringHelper::ReadFromString(TEXT("NSLOCTEXT(\"[03A2564F4FFC1E4A5017AFA68A85CDC1]\", \"13667054435A0D24C20D5AAB16B3A200\", \"SuperAsteroids\")"), Text); break;
		case E__DStates__pf::NewEnumerator3: FTextStringHelper::ReadFromString(TEXT("NSLOCTEXT(\"[03A2564F4FFC1E4A5017AFA68A85CDC1]\", \"846870934E61D0DDBAE1F4B7287F3A1E\", \"GameOver\")"), Text); break;
		case E__DStates__pf::NewEnumerator5: FTextStringHelper::ReadFromString(TEXT("NSLOCTEXT(\"[03A2564F4FFC1E4A5017AFA68A85CDC1]\", \"34D2BD9B498D0308F001C5A43FB463AE\", \"DataLibrary\")"), Text); break;
		case E__DStates__pf::NewEnumerator4: FTextStringHelper::ReadFromString(TEXT("NSLOCTEXT(\"[03A2564F4FFC1E4A5017AFA68A85CDC1]\", \"D759E25840244B08D65678B321EBAB5B\", \"DebugMode\")"), Text); break;
		case E__DStates__pf::NewEnumerator6: FTextStringHelper::ReadFromString(TEXT("NSLOCTEXT(\"[03A2564F4FFC1E4A5017AFA68A85CDC1]\", \"FF18F97644F82AA1F3550EAF8DFFA1C4\", \"MainScreen\")"), Text); break;
		case E__DStates__pf::NewEnumerator7: FTextStringHelper::ReadFromString(TEXT("NSLOCTEXT(\"[03A2564F4FFC1E4A5017AFA68A85CDC1]\", \"74259AC44E1D623CC4082FAD7D9D7C5A\", \"StateNotInit\")"), Text); break;
		case E__DStates__pf::E__DStates__pf_MAX: FTextStringHelper::ReadFromString(TEXT("DStates MAX"), Text); break;
		default: ensure(false);
	};
	return Text;
};
