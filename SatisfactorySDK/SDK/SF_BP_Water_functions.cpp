// Satisfactory SDK (V0.1.6 - CL#98445)

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SF_BP_Water_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BP_Water.BP_Water_C.UserConstructionScript
// ()

void ABP_Water_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Water.BP_Water_C.UserConstructionScript");

	ABP_Water_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif