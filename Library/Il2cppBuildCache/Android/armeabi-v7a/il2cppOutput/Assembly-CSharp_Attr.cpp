#include "pch-cpp.hpp"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <limits>
#include <stdint.h>



// System.Char[]
struct CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34;
// Mirror.CommandAttribute
struct CommandAttribute_tA3EFF094D5A3EE6A69DFEF91B410C286D68F3FED;
// System.Runtime.CompilerServices.CompilationRelaxationsAttribute
struct CompilationRelaxationsAttribute_t661FDDC06629BDA607A42BD660944F039FE03AFF;
// System.Diagnostics.DebuggableAttribute
struct DebuggableAttribute_tA8054EBD0FC7511695D494B690B5771658E3191B;
// System.Runtime.CompilerServices.RuntimeCompatibilityAttribute
struct RuntimeCompatibilityAttribute_tFF99AB2963098F9CBCD47A20D9FD3D51C17C1C80;
// UnityEngine.RuntimeInitializeOnLoadMethodAttribute
struct RuntimeInitializeOnLoadMethodAttribute_tDE87D2AA72896514411AC9F8F48A4084536BDC2D;
// Mirror.ServerAttribute
struct ServerAttribute_tD8686EAC32E05ED828C7CA0C40D1EA85022718D4;
// System.String
struct String_t;
// Mirror.SyncVarAttribute
struct SyncVarAttribute_t68608CC0E0E751346276F1A6ABC18F4414E60305;



IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Object


// System.Attribute
struct Attribute_t037CA9D9F3B742C063DB364D2EEBBF9FC5772C71  : public RuntimeObject
{
public:

public:
};


// System.ValueType
struct ValueType_tDBF999C1B75C48C68621878250DBF6CDBCF51E52  : public RuntimeObject
{
public:

public:
};

// Native definition for P/Invoke marshalling of System.ValueType
struct ValueType_tDBF999C1B75C48C68621878250DBF6CDBCF51E52_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.ValueType
struct ValueType_tDBF999C1B75C48C68621878250DBF6CDBCF51E52_marshaled_com
{
};

// System.Boolean
struct Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37 
{
public:
	// System.Boolean System.Boolean::m_value
	bool ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37, ___m_value_0)); }
	inline bool get_m_value_0() const { return ___m_value_0; }
	inline bool* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(bool value)
	{
		___m_value_0 = value;
	}
};

struct Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_StaticFields
{
public:
	// System.String System.Boolean::TrueString
	String_t* ___TrueString_5;
	// System.String System.Boolean::FalseString
	String_t* ___FalseString_6;

public:
	inline static int32_t get_offset_of_TrueString_5() { return static_cast<int32_t>(offsetof(Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_StaticFields, ___TrueString_5)); }
	inline String_t* get_TrueString_5() const { return ___TrueString_5; }
	inline String_t** get_address_of_TrueString_5() { return &___TrueString_5; }
	inline void set_TrueString_5(String_t* value)
	{
		___TrueString_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___TrueString_5), (void*)value);
	}

	inline static int32_t get_offset_of_FalseString_6() { return static_cast<int32_t>(offsetof(Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_StaticFields, ___FalseString_6)); }
	inline String_t* get_FalseString_6() const { return ___FalseString_6; }
	inline String_t** get_address_of_FalseString_6() { return &___FalseString_6; }
	inline void set_FalseString_6(String_t* value)
	{
		___FalseString_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___FalseString_6), (void*)value);
	}
};


// Mirror.CommandAttribute
struct CommandAttribute_tA3EFF094D5A3EE6A69DFEF91B410C286D68F3FED  : public Attribute_t037CA9D9F3B742C063DB364D2EEBBF9FC5772C71
{
public:
	// System.Int32 Mirror.CommandAttribute::channel
	int32_t ___channel_0;
	// System.Boolean Mirror.CommandAttribute::requiresAuthority
	bool ___requiresAuthority_1;

public:
	inline static int32_t get_offset_of_channel_0() { return static_cast<int32_t>(offsetof(CommandAttribute_tA3EFF094D5A3EE6A69DFEF91B410C286D68F3FED, ___channel_0)); }
	inline int32_t get_channel_0() const { return ___channel_0; }
	inline int32_t* get_address_of_channel_0() { return &___channel_0; }
	inline void set_channel_0(int32_t value)
	{
		___channel_0 = value;
	}

	inline static int32_t get_offset_of_requiresAuthority_1() { return static_cast<int32_t>(offsetof(CommandAttribute_tA3EFF094D5A3EE6A69DFEF91B410C286D68F3FED, ___requiresAuthority_1)); }
	inline bool get_requiresAuthority_1() const { return ___requiresAuthority_1; }
	inline bool* get_address_of_requiresAuthority_1() { return &___requiresAuthority_1; }
	inline void set_requiresAuthority_1(bool value)
	{
		___requiresAuthority_1 = value;
	}
};


// System.Runtime.CompilerServices.CompilationRelaxationsAttribute
struct CompilationRelaxationsAttribute_t661FDDC06629BDA607A42BD660944F039FE03AFF  : public Attribute_t037CA9D9F3B742C063DB364D2EEBBF9FC5772C71
{
public:
	// System.Int32 System.Runtime.CompilerServices.CompilationRelaxationsAttribute::m_relaxations
	int32_t ___m_relaxations_0;

public:
	inline static int32_t get_offset_of_m_relaxations_0() { return static_cast<int32_t>(offsetof(CompilationRelaxationsAttribute_t661FDDC06629BDA607A42BD660944F039FE03AFF, ___m_relaxations_0)); }
	inline int32_t get_m_relaxations_0() const { return ___m_relaxations_0; }
	inline int32_t* get_address_of_m_relaxations_0() { return &___m_relaxations_0; }
	inline void set_m_relaxations_0(int32_t value)
	{
		___m_relaxations_0 = value;
	}
};


// System.Enum
struct Enum_t23B90B40F60E677A8025267341651C94AE079CDA  : public ValueType_tDBF999C1B75C48C68621878250DBF6CDBCF51E52
{
public:

public:
};

struct Enum_t23B90B40F60E677A8025267341651C94AE079CDA_StaticFields
{
public:
	// System.Char[] System.Enum::enumSeperatorCharArray
	CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* ___enumSeperatorCharArray_0;

public:
	inline static int32_t get_offset_of_enumSeperatorCharArray_0() { return static_cast<int32_t>(offsetof(Enum_t23B90B40F60E677A8025267341651C94AE079CDA_StaticFields, ___enumSeperatorCharArray_0)); }
	inline CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* get_enumSeperatorCharArray_0() const { return ___enumSeperatorCharArray_0; }
	inline CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34** get_address_of_enumSeperatorCharArray_0() { return &___enumSeperatorCharArray_0; }
	inline void set_enumSeperatorCharArray_0(CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* value)
	{
		___enumSeperatorCharArray_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___enumSeperatorCharArray_0), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of System.Enum
struct Enum_t23B90B40F60E677A8025267341651C94AE079CDA_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.Enum
struct Enum_t23B90B40F60E677A8025267341651C94AE079CDA_marshaled_com
{
};

// UnityEngine.Scripting.PreserveAttribute
struct PreserveAttribute_tD3CDF1454F8E64CEF59CF7094B45BBACE2C69948  : public Attribute_t037CA9D9F3B742C063DB364D2EEBBF9FC5772C71
{
public:

public:
};


// UnityEngine.PropertyAttribute
struct PropertyAttribute_t4A352471DF625C56C811E27AC86B7E1CE6444052  : public Attribute_t037CA9D9F3B742C063DB364D2EEBBF9FC5772C71
{
public:

public:
};


// System.Runtime.CompilerServices.RuntimeCompatibilityAttribute
struct RuntimeCompatibilityAttribute_tFF99AB2963098F9CBCD47A20D9FD3D51C17C1C80  : public Attribute_t037CA9D9F3B742C063DB364D2EEBBF9FC5772C71
{
public:
	// System.Boolean System.Runtime.CompilerServices.RuntimeCompatibilityAttribute::m_wrapNonExceptionThrows
	bool ___m_wrapNonExceptionThrows_0;

public:
	inline static int32_t get_offset_of_m_wrapNonExceptionThrows_0() { return static_cast<int32_t>(offsetof(RuntimeCompatibilityAttribute_tFF99AB2963098F9CBCD47A20D9FD3D51C17C1C80, ___m_wrapNonExceptionThrows_0)); }
	inline bool get_m_wrapNonExceptionThrows_0() const { return ___m_wrapNonExceptionThrows_0; }
	inline bool* get_address_of_m_wrapNonExceptionThrows_0() { return &___m_wrapNonExceptionThrows_0; }
	inline void set_m_wrapNonExceptionThrows_0(bool value)
	{
		___m_wrapNonExceptionThrows_0 = value;
	}
};


// Mirror.ServerAttribute
struct ServerAttribute_tD8686EAC32E05ED828C7CA0C40D1EA85022718D4  : public Attribute_t037CA9D9F3B742C063DB364D2EEBBF9FC5772C71
{
public:

public:
};


// System.Void
struct Void_t700C6383A2A510C2CF4DD86DABD5CA9FF70ADAC5 
{
public:
	union
	{
		struct
		{
		};
		uint8_t Void_t700C6383A2A510C2CF4DD86DABD5CA9FF70ADAC5__padding[1];
	};

public:
};


// UnityEngine.RuntimeInitializeLoadType
struct RuntimeInitializeLoadType_t78BE0E3079AE8955C97DF6A9814A6E6BFA146EA5 
{
public:
	// System.Int32 UnityEngine.RuntimeInitializeLoadType::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(RuntimeInitializeLoadType_t78BE0E3079AE8955C97DF6A9814A6E6BFA146EA5, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// Mirror.SyncVarAttribute
struct SyncVarAttribute_t68608CC0E0E751346276F1A6ABC18F4414E60305  : public PropertyAttribute_t4A352471DF625C56C811E27AC86B7E1CE6444052
{
public:
	// System.String Mirror.SyncVarAttribute::hook
	String_t* ___hook_0;

public:
	inline static int32_t get_offset_of_hook_0() { return static_cast<int32_t>(offsetof(SyncVarAttribute_t68608CC0E0E751346276F1A6ABC18F4414E60305, ___hook_0)); }
	inline String_t* get_hook_0() const { return ___hook_0; }
	inline String_t** get_address_of_hook_0() { return &___hook_0; }
	inline void set_hook_0(String_t* value)
	{
		___hook_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___hook_0), (void*)value);
	}
};


// System.Diagnostics.DebuggableAttribute/DebuggingModes
struct DebuggingModes_t279D5B9C012ABA935887CB73C5A63A1F46AF08A8 
{
public:
	// System.Int32 System.Diagnostics.DebuggableAttribute/DebuggingModes::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(DebuggingModes_t279D5B9C012ABA935887CB73C5A63A1F46AF08A8, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// System.Diagnostics.DebuggableAttribute
struct DebuggableAttribute_tA8054EBD0FC7511695D494B690B5771658E3191B  : public Attribute_t037CA9D9F3B742C063DB364D2EEBBF9FC5772C71
{
public:
	// System.Diagnostics.DebuggableAttribute/DebuggingModes System.Diagnostics.DebuggableAttribute::m_debuggingModes
	int32_t ___m_debuggingModes_0;

public:
	inline static int32_t get_offset_of_m_debuggingModes_0() { return static_cast<int32_t>(offsetof(DebuggableAttribute_tA8054EBD0FC7511695D494B690B5771658E3191B, ___m_debuggingModes_0)); }
	inline int32_t get_m_debuggingModes_0() const { return ___m_debuggingModes_0; }
	inline int32_t* get_address_of_m_debuggingModes_0() { return &___m_debuggingModes_0; }
	inline void set_m_debuggingModes_0(int32_t value)
	{
		___m_debuggingModes_0 = value;
	}
};


// UnityEngine.RuntimeInitializeOnLoadMethodAttribute
struct RuntimeInitializeOnLoadMethodAttribute_tDE87D2AA72896514411AC9F8F48A4084536BDC2D  : public PreserveAttribute_tD3CDF1454F8E64CEF59CF7094B45BBACE2C69948
{
public:
	// UnityEngine.RuntimeInitializeLoadType UnityEngine.RuntimeInitializeOnLoadMethodAttribute::m_LoadType
	int32_t ___m_LoadType_0;

public:
	inline static int32_t get_offset_of_m_LoadType_0() { return static_cast<int32_t>(offsetof(RuntimeInitializeOnLoadMethodAttribute_tDE87D2AA72896514411AC9F8F48A4084536BDC2D, ___m_LoadType_0)); }
	inline int32_t get_m_LoadType_0() const { return ___m_LoadType_0; }
	inline int32_t* get_address_of_m_LoadType_0() { return &___m_LoadType_0; }
	inline void set_m_LoadType_0(int32_t value)
	{
		___m_LoadType_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif



// System.Void System.Runtime.CompilerServices.CompilationRelaxationsAttribute::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CompilationRelaxationsAttribute__ctor_mAC3079EBC4EEAB474EED8208EF95DB39C922333B (CompilationRelaxationsAttribute_t661FDDC06629BDA607A42BD660944F039FE03AFF * __this, int32_t ___relaxations0, const RuntimeMethod* method);
// System.Void System.Runtime.CompilerServices.RuntimeCompatibilityAttribute::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RuntimeCompatibilityAttribute__ctor_m551DDF1438CE97A984571949723F30F44CF7317C (RuntimeCompatibilityAttribute_tFF99AB2963098F9CBCD47A20D9FD3D51C17C1C80 * __this, const RuntimeMethod* method);
// System.Void System.Runtime.CompilerServices.RuntimeCompatibilityAttribute::set_WrapNonExceptionThrows(System.Boolean)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void RuntimeCompatibilityAttribute_set_WrapNonExceptionThrows_m8562196F90F3EBCEC23B5708EE0332842883C490_inline (RuntimeCompatibilityAttribute_tFF99AB2963098F9CBCD47A20D9FD3D51C17C1C80 * __this, bool ___value0, const RuntimeMethod* method);
// System.Void System.Diagnostics.DebuggableAttribute::.ctor(System.Diagnostics.DebuggableAttribute/DebuggingModes)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DebuggableAttribute__ctor_m7FF445C8435494A4847123A668D889E692E55550 (DebuggableAttribute_tA8054EBD0FC7511695D494B690B5771658E3191B * __this, int32_t ___modes0, const RuntimeMethod* method);
// System.Void Mirror.ServerAttribute::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ServerAttribute__ctor_m413F135143ED76C9B8C3F41B2DB6597E4382E0A6 (ServerAttribute_tD8686EAC32E05ED828C7CA0C40D1EA85022718D4 * __this, const RuntimeMethod* method);
// System.Void Mirror.SyncVarAttribute::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SyncVarAttribute__ctor_m4E99C2B45DDA311F1D9B684B967978541348C875 (SyncVarAttribute_t68608CC0E0E751346276F1A6ABC18F4414E60305 * __this, const RuntimeMethod* method);
// System.Void Mirror.CommandAttribute::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CommandAttribute__ctor_m583940E69A6305050FEF54E57CBAF339A8E77FFC (CommandAttribute_tA3EFF094D5A3EE6A69DFEF91B410C286D68F3FED * __this, const RuntimeMethod* method);
// System.Void UnityEngine.RuntimeInitializeOnLoadMethodAttribute::.ctor(UnityEngine.RuntimeInitializeLoadType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RuntimeInitializeOnLoadMethodAttribute__ctor_mE79C8FD7B18EC53391334A6E6A66CAF09CDA8516 (RuntimeInitializeOnLoadMethodAttribute_tDE87D2AA72896514411AC9F8F48A4084536BDC2D * __this, int32_t ___loadType0, const RuntimeMethod* method);
static void AssemblyU2DCSharp_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	{
		CompilationRelaxationsAttribute_t661FDDC06629BDA607A42BD660944F039FE03AFF * tmp = (CompilationRelaxationsAttribute_t661FDDC06629BDA607A42BD660944F039FE03AFF *)cache->attributes[0];
		CompilationRelaxationsAttribute__ctor_mAC3079EBC4EEAB474EED8208EF95DB39C922333B(tmp, 8LL, NULL);
	}
	{
		RuntimeCompatibilityAttribute_tFF99AB2963098F9CBCD47A20D9FD3D51C17C1C80 * tmp = (RuntimeCompatibilityAttribute_tFF99AB2963098F9CBCD47A20D9FD3D51C17C1C80 *)cache->attributes[1];
		RuntimeCompatibilityAttribute__ctor_m551DDF1438CE97A984571949723F30F44CF7317C(tmp, NULL);
		RuntimeCompatibilityAttribute_set_WrapNonExceptionThrows_m8562196F90F3EBCEC23B5708EE0332842883C490_inline(tmp, true, NULL);
	}
	{
		DebuggableAttribute_tA8054EBD0FC7511695D494B690B5771658E3191B * tmp = (DebuggableAttribute_tA8054EBD0FC7511695D494B690B5771658E3191B *)cache->attributes[2];
		DebuggableAttribute__ctor_m7FF445C8435494A4847123A668D889E692E55550(tmp, 2LL, NULL);
	}
}
static void OnlineSceneManager_t287ADA5ED70F92A1159039DE8F704F8A0B23F6C7_CustomAttributesCacheGenerator_OnlineSceneManager_Start_m2DFD62FCE9DA2621FA014927EA6890E300F533FB(CustomAttributesCache* cache)
{
	{
		ServerAttribute_tD8686EAC32E05ED828C7CA0C40D1EA85022718D4 * tmp = (ServerAttribute_tD8686EAC32E05ED828C7CA0C40D1EA85022718D4 *)cache->attributes[0];
		ServerAttribute__ctor_m413F135143ED76C9B8C3F41B2DB6597E4382E0A6(tmp, NULL);
	}
}
static void VarsContainer_tEB2588C1D64D6ED38444170F237AF84FCA68ABB3_CustomAttributesCacheGenerator_n(CustomAttributesCache* cache)
{
	{
		SyncVarAttribute_t68608CC0E0E751346276F1A6ABC18F4414E60305 * tmp = (SyncVarAttribute_t68608CC0E0E751346276F1A6ABC18F4414E60305 *)cache->attributes[0];
		SyncVarAttribute__ctor_m4E99C2B45DDA311F1D9B684B967978541348C875(tmp, NULL);
		tmp->set_hook_0(il2cpp_codegen_string_new_wrapper("\x4E\x75\x6D\x62\x65\x72\x43\x68\x61\x6E\x67\x65\x64"));
	}
}
static void Player_t5689617909B48F7640EA0892D85C92C13CC22C6F_CustomAttributesCacheGenerator_Player_AddNumber_m0087F6E9178724F09E8D9672952FB2F568069B48(CustomAttributesCache* cache)
{
	{
		CommandAttribute_tA3EFF094D5A3EE6A69DFEF91B410C286D68F3FED * tmp = (CommandAttribute_tA3EFF094D5A3EE6A69DFEF91B410C286D68F3FED *)cache->attributes[0];
		CommandAttribute__ctor_m583940E69A6305050FEF54E57CBAF339A8E77FFC(tmp, NULL);
		tmp->set_requiresAuthority_1(false);
	}
}
static void GeneratedNetworkCode_tA5DCDE73EABE64446CC3985FE891D3CA9B55A51E_CustomAttributesCacheGenerator_GeneratedNetworkCode_InitReadWriters_mF3F676E480CD76ED8819C76E79234EED4737891B(CustomAttributesCache* cache)
{
	{
		RuntimeInitializeOnLoadMethodAttribute_tDE87D2AA72896514411AC9F8F48A4084536BDC2D * tmp = (RuntimeInitializeOnLoadMethodAttribute_tDE87D2AA72896514411AC9F8F48A4084536BDC2D *)cache->attributes[0];
		RuntimeInitializeOnLoadMethodAttribute__ctor_mE79C8FD7B18EC53391334A6E6A66CAF09CDA8516(tmp, 1LL, NULL);
	}
}
IL2CPP_EXTERN_C const CustomAttributesCacheGenerator g_AssemblyU2DCSharp_AttributeGenerators[];
const CustomAttributesCacheGenerator g_AssemblyU2DCSharp_AttributeGenerators[5] = 
{
	VarsContainer_tEB2588C1D64D6ED38444170F237AF84FCA68ABB3_CustomAttributesCacheGenerator_n,
	OnlineSceneManager_t287ADA5ED70F92A1159039DE8F704F8A0B23F6C7_CustomAttributesCacheGenerator_OnlineSceneManager_Start_m2DFD62FCE9DA2621FA014927EA6890E300F533FB,
	Player_t5689617909B48F7640EA0892D85C92C13CC22C6F_CustomAttributesCacheGenerator_Player_AddNumber_m0087F6E9178724F09E8D9672952FB2F568069B48,
	GeneratedNetworkCode_tA5DCDE73EABE64446CC3985FE891D3CA9B55A51E_CustomAttributesCacheGenerator_GeneratedNetworkCode_InitReadWriters_mF3F676E480CD76ED8819C76E79234EED4737891B,
	AssemblyU2DCSharp_CustomAttributesCacheGenerator,
};
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void RuntimeCompatibilityAttribute_set_WrapNonExceptionThrows_m8562196F90F3EBCEC23B5708EE0332842883C490_inline (RuntimeCompatibilityAttribute_tFF99AB2963098F9CBCD47A20D9FD3D51C17C1C80 * __this, bool ___value0, const RuntimeMethod* method)
{
	{
		bool L_0 = ___value0;
		__this->set_m_wrapNonExceptionThrows_0(L_0);
		return;
	}
}
