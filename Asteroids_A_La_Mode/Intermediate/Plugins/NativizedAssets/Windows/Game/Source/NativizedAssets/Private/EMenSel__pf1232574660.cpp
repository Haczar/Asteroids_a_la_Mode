#include "NativizedAssets.h"
#include "EMenSel__pf1232574660.h"
FText E__EMenSel__pf__GetUserFriendlyName(int32 InValue)
{
	FText Text;
	const auto EnumValue = static_cast<E__EMenSel__pf>(InValue);
	switch(EnumValue)
	{
		case E__EMenSel__pf::NewEnumerator0: FTextStringHelper::ReadFromString(TEXT("NSLOCTEXT(\"[56125A4E492943F6C79B55AC232D9577]\", \"FA1B51504B212AA0A1218D9CA9B8410C\", \"StartGame\")"), Text); break;
		case E__EMenSel__pf::NewEnumerator1: FTextStringHelper::ReadFromString(TEXT("NSLOCTEXT(\"[56125A4E492943F6C79B55AC232D9577]\", \"7FCE26414C68B9DCDB975AAA26E95A50\", \"Co-Op\")"), Text); break;
		case E__EMenSel__pf::NewEnumerator2: FTextStringHelper::ReadFromString(TEXT("NSLOCTEXT(\"[56125A4E492943F6C79B55AC232D9577]\", \"C33C6B0740C188966FC4FD95ABA2566D\", \"Options\")"), Text); break;
		case E__EMenSel__pf::NewEnumerator3: FTextStringHelper::ReadFromString(TEXT("NSLOCTEXT(\"[56125A4E492943F6C79B55AC232D9577]\", \"7F2C42564F879F2326695696CC3F896B\", \"Exit\")"), Text); break;
		case E__EMenSel__pf::E__EMenSel__pf_MAX: FTextStringHelper::ReadFromString(TEXT("EMen Sel MAX"), Text); break;
		default: ensure(false);
	};
	return Text;
};
