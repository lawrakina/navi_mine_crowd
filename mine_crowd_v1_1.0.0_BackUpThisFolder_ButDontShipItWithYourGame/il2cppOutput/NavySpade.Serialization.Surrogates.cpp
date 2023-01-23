#include "pch-cpp.hpp"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <limits>
#include <stdint.h>


template <typename T1, typename T2, typename T3>
struct VirtualActionInvoker3
{
	typedef void (*Action)(void*, T1, T2, T3, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1, T2 p2, T3 p3)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, p1, p2, p3, invokeData.method);
	}
};

// System.Collections.Generic.Dictionary`2<System.String,System.Int32>
struct Dictionary_2_t5C8F46F5D57502270DD9E1DA8303B23C7FE85588;
// System.Object[]
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918;
// System.String[]
struct StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248;
// System.Type[]
struct TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB;
// System.Reflection.Binder
struct Binder_t91BFCE95A7057FADF4D8A1A342AFE52872246235;
// NavySpade.Modules.Utils.Serialization.Surrogates.ColorSerializationSurrogate
struct ColorSerializationSurrogate_tF1C7C07AD63CD52A8C1F9CEEABB354A02ECAAECE;
// System.Runtime.Serialization.IFormatterConverter
struct IFormatterConverter_t726606DAC82C384B08C82471313C340968DDB609;
// System.Runtime.Serialization.ISurrogateSelector
struct ISurrogateSelector_t35CC72FCAD57FCB71968799C400627F09E81FB01;
// System.Reflection.MemberFilter
struct MemberFilter_tF644F1AE82F611B677CE1964D5A3277DDA21D553;
// NavySpade.Modules.Utils.Serialization.Surrogates.QuaternionSerializationSurrogate
struct QuaternionSerializationSurrogate_t01E6B253BF54374BE1DA031F0A17E861D87EBC2F;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37;
// System.String
struct String_t;
// System.Runtime.Serialization.SurrogateHashtable
struct SurrogateHashtable_t7984ADA2143252F74820046721C2887B104EAC87;
// System.Runtime.Serialization.SurrogateSelector
struct SurrogateSelector_t8A877793013470A8B4FE67F6FE9D202A14754118;
// System.Type
struct Type_t;
// NavySpade.Modules.Utils.Serialization.Surrogates.Vector2IntSerializationSurrogate
struct Vector2IntSerializationSurrogate_tD64C23E3A5C3B5D56EFB94544D49E5E1C9CE1580;
// NavySpade.Modules.Utils.Serialization.Surrogates.Vector2SerializationSurrogate
struct Vector2SerializationSurrogate_t20404049BB698DBA7C8C5C3993ECC42E125F8F72;
// NavySpade.Modules.Utils.Serialization.Surrogates.Vector3IntSerializationSurrogate
struct Vector3IntSerializationSurrogate_tCCA3031054573B428ED34444A7EE608CC54D90A7;
// NavySpade.Modules.Utils.Serialization.Surrogates.Vector3SerializationSurrogate
struct Vector3SerializationSurrogate_tEFA1934DF11BDE7A6CD69C1DAB89A814E97649A2;
// NavySpade.Modules.Utils.Serialization.Surrogates.Vector4SerializationSurrogate
struct Vector4SerializationSurrogate_t1715E0BE9AA90E50B0B821B6131C00E08658B28A;
// System.Void
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915;

IL2CPP_EXTERN_C RuntimeClass* ColorSerializationSurrogate_tF1C7C07AD63CD52A8C1F9CEEABB354A02ECAAECE_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Color_tD001788D726C3A7F1379BEED0260B9591F440C1F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* QuaternionSerializationSurrogate_t01E6B253BF54374BE1DA031F0A17E861D87EBC2F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Type_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Vector2IntSerializationSurrogate_tD64C23E3A5C3B5D56EFB94544D49E5E1C9CE1580_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Vector2SerializationSurrogate_t20404049BB698DBA7C8C5C3993ECC42E125F8F72_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Vector3IntSerializationSurrogate_tCCA3031054573B428ED34444A7EE608CC54D90A7_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Vector3SerializationSurrogate_tEFA1934DF11BDE7A6CD69C1DAB89A814E97649A2_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Vector4SerializationSurrogate_t1715E0BE9AA90E50B0B821B6131C00E08658B28A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral062DB096C728515E033CF8C48A1C1F0B9A79384B;
IL2CPP_EXTERN_C String_t* _stringLiteral0A04B971B03DA607CE6C455184037B660CA89F78;
IL2CPP_EXTERN_C String_t* _stringLiteral2B9B6C84CC15492CCB290C4B79418FA6D7DD24C1;
IL2CPP_EXTERN_C String_t* _stringLiteral4609D79FE2FAD95C38B6DA64FC671E8594984D4C;
IL2CPP_EXTERN_C String_t* _stringLiteral9384C6EF2DA5C0BD5274A0DACFF291D0ABBFD8B1;
IL2CPP_EXTERN_C String_t* _stringLiteral9CE1604D659135925CCC4DD1F526AFFE42E689F1;
IL2CPP_EXTERN_C String_t* _stringLiteralA33A5CAE02B786C2060461DF8C6764B4C05E9423;
IL2CPP_EXTERN_C String_t* _stringLiteralA9FEAF5F50923952C1AC3A473DE3C7E17D23B907;
IL2CPP_EXTERN_C const RuntimeType* Color_tD001788D726C3A7F1379BEED0260B9591F440C1F_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3_0_0_0_var;


IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <Module>
struct U3CModuleU3E_t159F42051D733ED25300435E4988ECF63079407B 
{
};
struct Il2CppArrayBounds;

// NavySpade.Modules.Utils.Serialization.Surrogates.ColorSerializationSurrogate
struct ColorSerializationSurrogate_tF1C7C07AD63CD52A8C1F9CEEABB354A02ECAAECE  : public RuntimeObject
{
};

// System.Reflection.MemberInfo
struct MemberInfo_t  : public RuntimeObject
{
};

// NavySpade.Modules.Utils.Serialization.Surrogates.QuaternionSerializationSurrogate
struct QuaternionSerializationSurrogate_t01E6B253BF54374BE1DA031F0A17E861D87EBC2F  : public RuntimeObject
{
};

// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37  : public RuntimeObject
{
	// System.String[] System.Runtime.Serialization.SerializationInfo::m_members
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___m_members_3;
	// System.Object[] System.Runtime.Serialization.SerializationInfo::m_data
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___m_data_4;
	// System.Type[] System.Runtime.Serialization.SerializationInfo::m_types
	TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* ___m_types_5;
	// System.Collections.Generic.Dictionary`2<System.String,System.Int32> System.Runtime.Serialization.SerializationInfo::m_nameToIndex
	Dictionary_2_t5C8F46F5D57502270DD9E1DA8303B23C7FE85588* ___m_nameToIndex_6;
	// System.Int32 System.Runtime.Serialization.SerializationInfo::m_currMember
	int32_t ___m_currMember_7;
	// System.Runtime.Serialization.IFormatterConverter System.Runtime.Serialization.SerializationInfo::m_converter
	RuntimeObject* ___m_converter_8;
	// System.String System.Runtime.Serialization.SerializationInfo::m_fullTypeName
	String_t* ___m_fullTypeName_9;
	// System.String System.Runtime.Serialization.SerializationInfo::m_assemName
	String_t* ___m_assemName_10;
	// System.Type System.Runtime.Serialization.SerializationInfo::objectType
	Type_t* ___objectType_11;
	// System.Boolean System.Runtime.Serialization.SerializationInfo::isFullTypeNameSetExplicit
	bool ___isFullTypeNameSetExplicit_12;
	// System.Boolean System.Runtime.Serialization.SerializationInfo::isAssemblyNameSetExplicit
	bool ___isAssemblyNameSetExplicit_13;
	// System.Boolean System.Runtime.Serialization.SerializationInfo::requireSameTokenInPartialTrust
	bool ___requireSameTokenInPartialTrust_14;
};

// NavySpade.Modules.Utils.Serialization.Surrogates.SerializationInfoExtension
struct SerializationInfoExtension_t23831172978991646AA8C21EA56D21F431A5CBD7  : public RuntimeObject
{
};

// System.String
struct String_t  : public RuntimeObject
{
	// System.Int32 System.String::_stringLength
	int32_t ____stringLength_4;
	// System.Char System.String::_firstChar
	Il2CppChar ____firstChar_5;
};

struct String_t_StaticFields
{
	// System.String System.String::Empty
	String_t* ___Empty_6;
};

// System.Runtime.Serialization.SurrogateSelector
struct SurrogateSelector_t8A877793013470A8B4FE67F6FE9D202A14754118  : public RuntimeObject
{
	// System.Runtime.Serialization.SurrogateHashtable System.Runtime.Serialization.SurrogateSelector::m_surrogates
	SurrogateHashtable_t7984ADA2143252F74820046721C2887B104EAC87* ___m_surrogates_0;
	// System.Runtime.Serialization.ISurrogateSelector System.Runtime.Serialization.SurrogateSelector::m_nextSelector
	RuntimeObject* ___m_nextSelector_1;
};

// NavySpade.Modules.Utils.Serialization.Surrogates.SurrogateSelectorExtension
struct SurrogateSelectorExtension_t00C027BE08AE43EDBACEF7B76A066675A2D318D7  : public RuntimeObject
{
};

// System.ValueType
struct ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F  : public RuntimeObject
{
};
// Native definition for P/Invoke marshalling of System.ValueType
struct ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.ValueType
struct ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F_marshaled_com
{
};

// NavySpade.Modules.Utils.Serialization.Surrogates.Vector2IntSerializationSurrogate
struct Vector2IntSerializationSurrogate_tD64C23E3A5C3B5D56EFB94544D49E5E1C9CE1580  : public RuntimeObject
{
};

// NavySpade.Modules.Utils.Serialization.Surrogates.Vector2SerializationSurrogate
struct Vector2SerializationSurrogate_t20404049BB698DBA7C8C5C3993ECC42E125F8F72  : public RuntimeObject
{
};

// NavySpade.Modules.Utils.Serialization.Surrogates.Vector3IntSerializationSurrogate
struct Vector3IntSerializationSurrogate_tCCA3031054573B428ED34444A7EE608CC54D90A7  : public RuntimeObject
{
};

// NavySpade.Modules.Utils.Serialization.Surrogates.Vector3SerializationSurrogate
struct Vector3SerializationSurrogate_tEFA1934DF11BDE7A6CD69C1DAB89A814E97649A2  : public RuntimeObject
{
};

// NavySpade.Modules.Utils.Serialization.Surrogates.Vector4SerializationSurrogate
struct Vector4SerializationSurrogate_t1715E0BE9AA90E50B0B821B6131C00E08658B28A  : public RuntimeObject
{
};

// UnityEngine.Color
struct Color_tD001788D726C3A7F1379BEED0260B9591F440C1F 
{
	// System.Single UnityEngine.Color::r
	float ___r_0;
	// System.Single UnityEngine.Color::g
	float ___g_1;
	// System.Single UnityEngine.Color::b
	float ___b_2;
	// System.Single UnityEngine.Color::a
	float ___a_3;
};

// System.Int32
struct Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C 
{
	// System.Int32 System.Int32::m_value
	int32_t ___m_value_0;
};

// System.IntPtr
struct IntPtr_t 
{
	// System.Void* System.IntPtr::m_value
	void* ___m_value_0;
};

struct IntPtr_t_StaticFields
{
	// System.IntPtr System.IntPtr::Zero
	intptr_t ___Zero_1;
};

// UnityEngine.Quaternion
struct Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 
{
	// System.Single UnityEngine.Quaternion::x
	float ___x_0;
	// System.Single UnityEngine.Quaternion::y
	float ___y_1;
	// System.Single UnityEngine.Quaternion::z
	float ___z_2;
	// System.Single UnityEngine.Quaternion::w
	float ___w_3;
};

struct Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974_StaticFields
{
	// UnityEngine.Quaternion UnityEngine.Quaternion::identityQuaternion
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___identityQuaternion_4;
};

// System.Single
struct Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C 
{
	// System.Single System.Single::m_value
	float ___m_value_0;
};

// System.Runtime.Serialization.StreamingContext
struct StreamingContext_t56760522A751890146EE45F82F866B55B7E33677 
{
	// System.Object System.Runtime.Serialization.StreamingContext::m_additionalContext
	RuntimeObject* ___m_additionalContext_0;
	// System.Runtime.Serialization.StreamingContextStates System.Runtime.Serialization.StreamingContext::m_state
	int32_t ___m_state_1;
};
// Native definition for P/Invoke marshalling of System.Runtime.Serialization.StreamingContext
struct StreamingContext_t56760522A751890146EE45F82F866B55B7E33677_marshaled_pinvoke
{
	Il2CppIUnknown* ___m_additionalContext_0;
	int32_t ___m_state_1;
};
// Native definition for COM marshalling of System.Runtime.Serialization.StreamingContext
struct StreamingContext_t56760522A751890146EE45F82F866B55B7E33677_marshaled_com
{
	Il2CppIUnknown* ___m_additionalContext_0;
	int32_t ___m_state_1;
};

// UnityEngine.Vector2
struct Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 
{
	// System.Single UnityEngine.Vector2::x
	float ___x_0;
	// System.Single UnityEngine.Vector2::y
	float ___y_1;
};

struct Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_StaticFields
{
	// UnityEngine.Vector2 UnityEngine.Vector2::zeroVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___zeroVector_2;
	// UnityEngine.Vector2 UnityEngine.Vector2::oneVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___oneVector_3;
	// UnityEngine.Vector2 UnityEngine.Vector2::upVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___upVector_4;
	// UnityEngine.Vector2 UnityEngine.Vector2::downVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___downVector_5;
	// UnityEngine.Vector2 UnityEngine.Vector2::leftVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___leftVector_6;
	// UnityEngine.Vector2 UnityEngine.Vector2::rightVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___rightVector_7;
	// UnityEngine.Vector2 UnityEngine.Vector2::positiveInfinityVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___positiveInfinityVector_8;
	// UnityEngine.Vector2 UnityEngine.Vector2::negativeInfinityVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___negativeInfinityVector_9;
};

// UnityEngine.Vector2Int
struct Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A 
{
	// System.Int32 UnityEngine.Vector2Int::m_X
	int32_t ___m_X_0;
	// System.Int32 UnityEngine.Vector2Int::m_Y
	int32_t ___m_Y_1;
};

struct Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A_StaticFields
{
	// UnityEngine.Vector2Int UnityEngine.Vector2Int::s_Zero
	Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A ___s_Zero_2;
	// UnityEngine.Vector2Int UnityEngine.Vector2Int::s_One
	Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A ___s_One_3;
	// UnityEngine.Vector2Int UnityEngine.Vector2Int::s_Up
	Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A ___s_Up_4;
	// UnityEngine.Vector2Int UnityEngine.Vector2Int::s_Down
	Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A ___s_Down_5;
	// UnityEngine.Vector2Int UnityEngine.Vector2Int::s_Left
	Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A ___s_Left_6;
	// UnityEngine.Vector2Int UnityEngine.Vector2Int::s_Right
	Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A ___s_Right_7;
};

// UnityEngine.Vector3
struct Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 
{
	// System.Single UnityEngine.Vector3::x
	float ___x_2;
	// System.Single UnityEngine.Vector3::y
	float ___y_3;
	// System.Single UnityEngine.Vector3::z
	float ___z_4;
};

struct Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_StaticFields
{
	// UnityEngine.Vector3 UnityEngine.Vector3::zeroVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___zeroVector_5;
	// UnityEngine.Vector3 UnityEngine.Vector3::oneVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___oneVector_6;
	// UnityEngine.Vector3 UnityEngine.Vector3::upVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___upVector_7;
	// UnityEngine.Vector3 UnityEngine.Vector3::downVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___downVector_8;
	// UnityEngine.Vector3 UnityEngine.Vector3::leftVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___leftVector_9;
	// UnityEngine.Vector3 UnityEngine.Vector3::rightVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___rightVector_10;
	// UnityEngine.Vector3 UnityEngine.Vector3::forwardVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___forwardVector_11;
	// UnityEngine.Vector3 UnityEngine.Vector3::backVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___backVector_12;
	// UnityEngine.Vector3 UnityEngine.Vector3::positiveInfinityVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___positiveInfinityVector_13;
	// UnityEngine.Vector3 UnityEngine.Vector3::negativeInfinityVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___negativeInfinityVector_14;
};

// UnityEngine.Vector3Int
struct Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376 
{
	// System.Int32 UnityEngine.Vector3Int::m_X
	int32_t ___m_X_0;
	// System.Int32 UnityEngine.Vector3Int::m_Y
	int32_t ___m_Y_1;
	// System.Int32 UnityEngine.Vector3Int::m_Z
	int32_t ___m_Z_2;
};

struct Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376_StaticFields
{
	// UnityEngine.Vector3Int UnityEngine.Vector3Int::s_Zero
	Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376 ___s_Zero_3;
	// UnityEngine.Vector3Int UnityEngine.Vector3Int::s_One
	Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376 ___s_One_4;
	// UnityEngine.Vector3Int UnityEngine.Vector3Int::s_Up
	Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376 ___s_Up_5;
	// UnityEngine.Vector3Int UnityEngine.Vector3Int::s_Down
	Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376 ___s_Down_6;
	// UnityEngine.Vector3Int UnityEngine.Vector3Int::s_Left
	Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376 ___s_Left_7;
	// UnityEngine.Vector3Int UnityEngine.Vector3Int::s_Right
	Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376 ___s_Right_8;
	// UnityEngine.Vector3Int UnityEngine.Vector3Int::s_Forward
	Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376 ___s_Forward_9;
	// UnityEngine.Vector3Int UnityEngine.Vector3Int::s_Back
	Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376 ___s_Back_10;
};

// UnityEngine.Vector4
struct Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 
{
	// System.Single UnityEngine.Vector4::x
	float ___x_1;
	// System.Single UnityEngine.Vector4::y
	float ___y_2;
	// System.Single UnityEngine.Vector4::z
	float ___z_3;
	// System.Single UnityEngine.Vector4::w
	float ___w_4;
};

struct Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3_StaticFields
{
	// UnityEngine.Vector4 UnityEngine.Vector4::zeroVector
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___zeroVector_5;
	// UnityEngine.Vector4 UnityEngine.Vector4::oneVector
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___oneVector_6;
	// UnityEngine.Vector4 UnityEngine.Vector4::positiveInfinityVector
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___positiveInfinityVector_7;
	// UnityEngine.Vector4 UnityEngine.Vector4::negativeInfinityVector
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___negativeInfinityVector_8;
};

// System.Void
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915 
{
	union
	{
		struct
		{
		};
		uint8_t Void_t4861ACF8F4594C3437BB48B6E56783494B843915__padding[1];
	};
};

// System.RuntimeTypeHandle
struct RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B 
{
	// System.IntPtr System.RuntimeTypeHandle::value
	intptr_t ___value_0;
};

// System.Type
struct Type_t  : public MemberInfo_t
{
	// System.RuntimeTypeHandle System.Type::_impl
	RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B ____impl_8;
};

struct Type_t_StaticFields
{
	// System.Reflection.Binder modreq(System.Runtime.CompilerServices.IsVolatile) System.Type::s_defaultBinder
	Binder_t91BFCE95A7057FADF4D8A1A342AFE52872246235* ___s_defaultBinder_0;
	// System.Char System.Type::Delimiter
	Il2CppChar ___Delimiter_1;
	// System.Type[] System.Type::EmptyTypes
	TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* ___EmptyTypes_2;
	// System.Object System.Type::Missing
	RuntimeObject* ___Missing_3;
	// System.Reflection.MemberFilter System.Type::FilterAttribute
	MemberFilter_tF644F1AE82F611B677CE1964D5A3277DDA21D553* ___FilterAttribute_4;
	// System.Reflection.MemberFilter System.Type::FilterName
	MemberFilter_tF644F1AE82F611B677CE1964D5A3277DDA21D553* ___FilterName_5;
	// System.Reflection.MemberFilter System.Type::FilterNameIgnoreCase
	MemberFilter_tF644F1AE82F611B677CE1964D5A3277DDA21D553* ___FilterNameIgnoreCase_6;
};
#ifdef __clang__
#pragma clang diagnostic pop
#endif



// System.Void System.Runtime.Serialization.SerializationInfo::AddValue(System.String,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SerializationInfo_AddValue_m6237DBFE29011A85D27E76E64BD806D7BFC4D46C (SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* __this, String_t* ___name0, float ___value1, const RuntimeMethod* method) ;
// System.Type System.Type::GetTypeFromHandle(System.RuntimeTypeHandle)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t* Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57 (RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B ___handle0, const RuntimeMethod* method) ;
// System.Object System.Runtime.Serialization.SerializationInfo::GetValue(System.String,System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* SerializationInfo_GetValue_mE6091C2E906E113455D05E734C86F43B8E1D1034 (SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* __this, String_t* ___name0, Type_t* ___type1, const RuntimeMethod* method) ;
// System.Void System.Object::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2 (RuntimeObject* __this, const RuntimeMethod* method) ;
// System.Void NavySpade.Modules.Utils.Serialization.Surrogates.ColorSerializationSurrogate::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ColorSerializationSurrogate__ctor_m13DCF071088B8897A09B283A0D11EE9C272CCEF6 (ColorSerializationSurrogate_tF1C7C07AD63CD52A8C1F9CEEABB354A02ECAAECE* __this, const RuntimeMethod* method) ;
// System.Void NavySpade.Modules.Utils.Serialization.Surrogates.QuaternionSerializationSurrogate::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void QuaternionSerializationSurrogate__ctor_m53F7279A4B67882E7C0BAC731D3865CA39A8AC54 (QuaternionSerializationSurrogate_t01E6B253BF54374BE1DA031F0A17E861D87EBC2F* __this, const RuntimeMethod* method) ;
// System.Void NavySpade.Modules.Utils.Serialization.Surrogates.Vector2IntSerializationSurrogate::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Vector2IntSerializationSurrogate__ctor_m6AD00A12BBFE7772E4894BF50FF69A4F6A289E18 (Vector2IntSerializationSurrogate_tD64C23E3A5C3B5D56EFB94544D49E5E1C9CE1580* __this, const RuntimeMethod* method) ;
// System.Void NavySpade.Modules.Utils.Serialization.Surrogates.Vector2SerializationSurrogate::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Vector2SerializationSurrogate__ctor_m5D9BD57DC25631A91F4427E96CA8C54B7A6A47AE (Vector2SerializationSurrogate_t20404049BB698DBA7C8C5C3993ECC42E125F8F72* __this, const RuntimeMethod* method) ;
// System.Void NavySpade.Modules.Utils.Serialization.Surrogates.Vector3IntSerializationSurrogate::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Vector3IntSerializationSurrogate__ctor_mC9D2B3ACBDBA06187029826EF5EAE128C7B2C644 (Vector3IntSerializationSurrogate_tCCA3031054573B428ED34444A7EE608CC54D90A7* __this, const RuntimeMethod* method) ;
// System.Void NavySpade.Modules.Utils.Serialization.Surrogates.Vector3SerializationSurrogate::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Vector3SerializationSurrogate__ctor_m3FBD275B87353B6420119CD676EE5248E44FB954 (Vector3SerializationSurrogate_tEFA1934DF11BDE7A6CD69C1DAB89A814E97649A2* __this, const RuntimeMethod* method) ;
// System.Void NavySpade.Modules.Utils.Serialization.Surrogates.Vector4SerializationSurrogate::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Vector4SerializationSurrogate__ctor_mB07F2F89A5A4E0880DD1857A2ACD43D3ABA9762E (Vector4SerializationSurrogate_t1715E0BE9AA90E50B0B821B6131C00E08658B28A* __this, const RuntimeMethod* method) ;
// System.Void System.Runtime.Serialization.StreamingContext::.ctor(System.Runtime.Serialization.StreamingContextStates)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StreamingContext__ctor_m76D85BCE7F2DFF192969B8A820A0DCC1E79F647E (StreamingContext_t56760522A751890146EE45F82F866B55B7E33677* __this, int32_t ___state0, const RuntimeMethod* method) ;
// System.Int32 UnityEngine.Vector2Int::get_x()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Vector2Int_get_x_mA2CACB1B6E6B5AD0CCC32B2CD2EDCE3ECEB50576_inline (Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A* __this, const RuntimeMethod* method) ;
// System.Void System.Runtime.Serialization.SerializationInfo::AddValue(System.String,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SerializationInfo_AddValue_m9D6ADD10966D1FE8D19050F3A269747C23FE9FC4 (SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* __this, String_t* ___name0, int32_t ___value1, const RuntimeMethod* method) ;
// System.Int32 UnityEngine.Vector2Int::get_y()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Vector2Int_get_y_m48454163ECF0B463FB5A16A0C4FC4B14DB0768B3_inline (Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Vector2Int::set_x(System.Int32)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector2Int_set_x_m291ECF246536852F0B8EE049C4A3768E4999CDC8_inline (Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A* __this, int32_t ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Vector2Int::set_y(System.Int32)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector2Int_set_y_mF81881204EEE272BA409728C7EBFDE3A979DDF6A_inline (Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A* __this, int32_t ___value0, const RuntimeMethod* method) ;
// System.Int32 UnityEngine.Vector3Int::get_x()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Vector3Int_get_x_m21C268D2AA4C03CE35AA49DF6155347C9748054C_inline (Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376* __this, const RuntimeMethod* method) ;
// System.Int32 UnityEngine.Vector3Int::get_y()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Vector3Int_get_y_m42F43000F85D356557CAF03442273E7AA08F7F72_inline (Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376* __this, const RuntimeMethod* method) ;
// System.Int32 UnityEngine.Vector3Int::get_z()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Vector3Int_get_z_m96E180F866145E373F42358F2371EFF446F08AED_inline (Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Vector3Int::set_x(System.Int32)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector3Int_set_x_m8745C5976D035EBBAC6F6191B5838D58631D8685_inline (Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376* __this, int32_t ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Vector3Int::set_y(System.Int32)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector3Int_set_y_mA856F32D1BF187BD4091DDF3C6872FD01F7D3377_inline (Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376* __this, int32_t ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Vector3Int::set_z(System.Int32)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector3Int_set_z_m5782180F67C4257C505F124971985D99C3422F74_inline (Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376* __this, int32_t ___value0, const RuntimeMethod* method) ;
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void NavySpade.Modules.Utils.Serialization.Surrogates.ColorSerializationSurrogate::GetObjectData(System.Object,System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ColorSerializationSurrogate_GetObjectData_mD1F4DEFC03266829C0B54D8C520E24974AC1886D (ColorSerializationSurrogate_tF1C7C07AD63CD52A8C1F9CEEABB354A02ECAAECE* __this, RuntimeObject* ___obj0, SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* ___info1, StreamingContext_t56760522A751890146EE45F82F866B55B7E33677 ___context2, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Color_tD001788D726C3A7F1379BEED0260B9591F440C1F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0A04B971B03DA607CE6C455184037B660CA89F78);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2B9B6C84CC15492CCB290C4B79418FA6D7DD24C1);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral4609D79FE2FAD95C38B6DA64FC671E8594984D4C);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA33A5CAE02B786C2060461DF8C6764B4C05E9423);
		s_Il2CppMethodInitialized = true;
	}
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// var color = (Color)obj;
		RuntimeObject* L_0 = ___obj0;
		V_0 = ((*(Color_tD001788D726C3A7F1379BEED0260B9591F440C1F*)((Color_tD001788D726C3A7F1379BEED0260B9591F440C1F*)(Color_tD001788D726C3A7F1379BEED0260B9591F440C1F*)UnBox(L_0, Color_tD001788D726C3A7F1379BEED0260B9591F440C1F_il2cpp_TypeInfo_var))));
		// info.AddValue("r", color.r);
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_1 = ___info1;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_2 = V_0;
		float L_3 = L_2.___r_0;
		NullCheck(L_1);
		SerializationInfo_AddValue_m6237DBFE29011A85D27E76E64BD806D7BFC4D46C(L_1, _stringLiteralA33A5CAE02B786C2060461DF8C6764B4C05E9423, L_3, NULL);
		// info.AddValue("g", color.g);
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_4 = ___info1;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_5 = V_0;
		float L_6 = L_5.___g_1;
		NullCheck(L_4);
		SerializationInfo_AddValue_m6237DBFE29011A85D27E76E64BD806D7BFC4D46C(L_4, _stringLiteral2B9B6C84CC15492CCB290C4B79418FA6D7DD24C1, L_6, NULL);
		// info.AddValue("b", color.b);
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_7 = ___info1;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_8 = V_0;
		float L_9 = L_8.___b_2;
		NullCheck(L_7);
		SerializationInfo_AddValue_m6237DBFE29011A85D27E76E64BD806D7BFC4D46C(L_7, _stringLiteral4609D79FE2FAD95C38B6DA64FC671E8594984D4C, L_9, NULL);
		// info.AddValue("a", color.a);
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_10 = ___info1;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_11 = V_0;
		float L_12 = L_11.___a_3;
		NullCheck(L_10);
		SerializationInfo_AddValue_m6237DBFE29011A85D27E76E64BD806D7BFC4D46C(L_10, _stringLiteral0A04B971B03DA607CE6C455184037B660CA89F78, L_12, NULL);
		// }
		return;
	}
}
// System.Object NavySpade.Modules.Utils.Serialization.Surrogates.ColorSerializationSurrogate::SetObjectData(System.Object,System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext,System.Runtime.Serialization.ISurrogateSelector)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ColorSerializationSurrogate_SetObjectData_mBF1AC51906677599EEEAC66DD8984FBFB1868608 (ColorSerializationSurrogate_tF1C7C07AD63CD52A8C1F9CEEABB354A02ECAAECE* __this, RuntimeObject* ___obj0, SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* ___info1, StreamingContext_t56760522A751890146EE45F82F866B55B7E33677 ___context2, RuntimeObject* ___selector3, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Color_tD001788D726C3A7F1379BEED0260B9591F440C1F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0A04B971B03DA607CE6C455184037B660CA89F78);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2B9B6C84CC15492CCB290C4B79418FA6D7DD24C1);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral4609D79FE2FAD95C38B6DA64FC671E8594984D4C);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA33A5CAE02B786C2060461DF8C6764B4C05E9423);
		s_Il2CppMethodInitialized = true;
	}
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// var color = (Color)obj;
		RuntimeObject* L_0 = ___obj0;
		V_0 = ((*(Color_tD001788D726C3A7F1379BEED0260B9591F440C1F*)((Color_tD001788D726C3A7F1379BEED0260B9591F440C1F*)(Color_tD001788D726C3A7F1379BEED0260B9591F440C1F*)UnBox(L_0, Color_tD001788D726C3A7F1379BEED0260B9591F440C1F_il2cpp_TypeInfo_var))));
		// color.r = (float)info.GetValue("r", typeof(float));
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_1 = ___info1;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_2 = { reinterpret_cast<intptr_t> (Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_3;
		L_3 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_2, NULL);
		NullCheck(L_1);
		RuntimeObject* L_4;
		L_4 = SerializationInfo_GetValue_mE6091C2E906E113455D05E734C86F43B8E1D1034(L_1, _stringLiteralA33A5CAE02B786C2060461DF8C6764B4C05E9423, L_3, NULL);
		(&V_0)->___r_0 = ((*(float*)((float*)(float*)UnBox(L_4, Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_il2cpp_TypeInfo_var))));
		// color.g = (float)info.GetValue("g", typeof(float));
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_5 = ___info1;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_6 = { reinterpret_cast<intptr_t> (Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_0_0_0_var) };
		Type_t* L_7;
		L_7 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_6, NULL);
		NullCheck(L_5);
		RuntimeObject* L_8;
		L_8 = SerializationInfo_GetValue_mE6091C2E906E113455D05E734C86F43B8E1D1034(L_5, _stringLiteral2B9B6C84CC15492CCB290C4B79418FA6D7DD24C1, L_7, NULL);
		(&V_0)->___g_1 = ((*(float*)((float*)(float*)UnBox(L_8, Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_il2cpp_TypeInfo_var))));
		// color.b = (float)info.GetValue("b", typeof(float));
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_9 = ___info1;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_10 = { reinterpret_cast<intptr_t> (Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_0_0_0_var) };
		Type_t* L_11;
		L_11 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_10, NULL);
		NullCheck(L_9);
		RuntimeObject* L_12;
		L_12 = SerializationInfo_GetValue_mE6091C2E906E113455D05E734C86F43B8E1D1034(L_9, _stringLiteral4609D79FE2FAD95C38B6DA64FC671E8594984D4C, L_11, NULL);
		(&V_0)->___b_2 = ((*(float*)((float*)(float*)UnBox(L_12, Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_il2cpp_TypeInfo_var))));
		// color.a = (float)info.GetValue("a", typeof(float));
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_13 = ___info1;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_14 = { reinterpret_cast<intptr_t> (Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_0_0_0_var) };
		Type_t* L_15;
		L_15 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_14, NULL);
		NullCheck(L_13);
		RuntimeObject* L_16;
		L_16 = SerializationInfo_GetValue_mE6091C2E906E113455D05E734C86F43B8E1D1034(L_13, _stringLiteral0A04B971B03DA607CE6C455184037B660CA89F78, L_15, NULL);
		(&V_0)->___a_3 = ((*(float*)((float*)(float*)UnBox(L_16, Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_il2cpp_TypeInfo_var))));
		// obj = color;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_17 = V_0;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_18 = L_17;
		RuntimeObject* L_19 = Box(Color_tD001788D726C3A7F1379BEED0260B9591F440C1F_il2cpp_TypeInfo_var, &L_18);
		___obj0 = L_19;
		// return obj;
		RuntimeObject* L_20 = ___obj0;
		return L_20;
	}
}
// System.Void NavySpade.Modules.Utils.Serialization.Surrogates.ColorSerializationSurrogate::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ColorSerializationSurrogate__ctor_m13DCF071088B8897A09B283A0D11EE9C272CCEF6 (ColorSerializationSurrogate_tF1C7C07AD63CD52A8C1F9CEEABB354A02ECAAECE* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void NavySpade.Modules.Utils.Serialization.Surrogates.QuaternionSerializationSurrogate::GetObjectData(System.Object,System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void QuaternionSerializationSurrogate_GetObjectData_mF0550867C966043728E7647B7585A99330A01207 (QuaternionSerializationSurrogate_t01E6B253BF54374BE1DA031F0A17E861D87EBC2F* __this, RuntimeObject* ___obj0, SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* ___info1, StreamingContext_t56760522A751890146EE45F82F866B55B7E33677 ___context2, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral062DB096C728515E033CF8C48A1C1F0B9A79384B);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9384C6EF2DA5C0BD5274A0DACFF291D0ABBFD8B1);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9CE1604D659135925CCC4DD1F526AFFE42E689F1);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA9FEAF5F50923952C1AC3A473DE3C7E17D23B907);
		s_Il2CppMethodInitialized = true;
	}
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// var quaternion = (Quaternion)obj;
		RuntimeObject* L_0 = ___obj0;
		V_0 = ((*(Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974*)((Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974*)(Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974*)UnBox(L_0, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974_il2cpp_TypeInfo_var))));
		// info.AddValue("x", quaternion.x);
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_1 = ___info1;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_2 = V_0;
		float L_3 = L_2.___x_0;
		NullCheck(L_1);
		SerializationInfo_AddValue_m6237DBFE29011A85D27E76E64BD806D7BFC4D46C(L_1, _stringLiteral062DB096C728515E033CF8C48A1C1F0B9A79384B, L_3, NULL);
		// info.AddValue("y", quaternion.y);
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_4 = ___info1;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_5 = V_0;
		float L_6 = L_5.___y_1;
		NullCheck(L_4);
		SerializationInfo_AddValue_m6237DBFE29011A85D27E76E64BD806D7BFC4D46C(L_4, _stringLiteral9384C6EF2DA5C0BD5274A0DACFF291D0ABBFD8B1, L_6, NULL);
		// info.AddValue("z", quaternion.z);
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_7 = ___info1;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_8 = V_0;
		float L_9 = L_8.___z_2;
		NullCheck(L_7);
		SerializationInfo_AddValue_m6237DBFE29011A85D27E76E64BD806D7BFC4D46C(L_7, _stringLiteral9CE1604D659135925CCC4DD1F526AFFE42E689F1, L_9, NULL);
		// info.AddValue("w", quaternion.w);
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_10 = ___info1;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_11 = V_0;
		float L_12 = L_11.___w_3;
		NullCheck(L_10);
		SerializationInfo_AddValue_m6237DBFE29011A85D27E76E64BD806D7BFC4D46C(L_10, _stringLiteralA9FEAF5F50923952C1AC3A473DE3C7E17D23B907, L_12, NULL);
		// }
		return;
	}
}
// System.Object NavySpade.Modules.Utils.Serialization.Surrogates.QuaternionSerializationSurrogate::SetObjectData(System.Object,System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext,System.Runtime.Serialization.ISurrogateSelector)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* QuaternionSerializationSurrogate_SetObjectData_mEAF7089E71713458084648B7E56BF5488723BDED (QuaternionSerializationSurrogate_t01E6B253BF54374BE1DA031F0A17E861D87EBC2F* __this, RuntimeObject* ___obj0, SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* ___info1, StreamingContext_t56760522A751890146EE45F82F866B55B7E33677 ___context2, RuntimeObject* ___selector3, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral062DB096C728515E033CF8C48A1C1F0B9A79384B);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9384C6EF2DA5C0BD5274A0DACFF291D0ABBFD8B1);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9CE1604D659135925CCC4DD1F526AFFE42E689F1);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA9FEAF5F50923952C1AC3A473DE3C7E17D23B907);
		s_Il2CppMethodInitialized = true;
	}
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// var quaternion = (Quaternion)obj;
		RuntimeObject* L_0 = ___obj0;
		V_0 = ((*(Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974*)((Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974*)(Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974*)UnBox(L_0, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974_il2cpp_TypeInfo_var))));
		// quaternion.x = (float)info.GetValue("x", typeof(float));
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_1 = ___info1;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_2 = { reinterpret_cast<intptr_t> (Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_3;
		L_3 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_2, NULL);
		NullCheck(L_1);
		RuntimeObject* L_4;
		L_4 = SerializationInfo_GetValue_mE6091C2E906E113455D05E734C86F43B8E1D1034(L_1, _stringLiteral062DB096C728515E033CF8C48A1C1F0B9A79384B, L_3, NULL);
		(&V_0)->___x_0 = ((*(float*)((float*)(float*)UnBox(L_4, Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_il2cpp_TypeInfo_var))));
		// quaternion.y = (float)info.GetValue("y", typeof(float));
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_5 = ___info1;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_6 = { reinterpret_cast<intptr_t> (Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_0_0_0_var) };
		Type_t* L_7;
		L_7 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_6, NULL);
		NullCheck(L_5);
		RuntimeObject* L_8;
		L_8 = SerializationInfo_GetValue_mE6091C2E906E113455D05E734C86F43B8E1D1034(L_5, _stringLiteral9384C6EF2DA5C0BD5274A0DACFF291D0ABBFD8B1, L_7, NULL);
		(&V_0)->___y_1 = ((*(float*)((float*)(float*)UnBox(L_8, Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_il2cpp_TypeInfo_var))));
		// quaternion.z = (float)info.GetValue("z", typeof(float));
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_9 = ___info1;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_10 = { reinterpret_cast<intptr_t> (Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_0_0_0_var) };
		Type_t* L_11;
		L_11 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_10, NULL);
		NullCheck(L_9);
		RuntimeObject* L_12;
		L_12 = SerializationInfo_GetValue_mE6091C2E906E113455D05E734C86F43B8E1D1034(L_9, _stringLiteral9CE1604D659135925CCC4DD1F526AFFE42E689F1, L_11, NULL);
		(&V_0)->___z_2 = ((*(float*)((float*)(float*)UnBox(L_12, Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_il2cpp_TypeInfo_var))));
		// quaternion.w = (float)info.GetValue("w", typeof(float));
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_13 = ___info1;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_14 = { reinterpret_cast<intptr_t> (Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_0_0_0_var) };
		Type_t* L_15;
		L_15 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_14, NULL);
		NullCheck(L_13);
		RuntimeObject* L_16;
		L_16 = SerializationInfo_GetValue_mE6091C2E906E113455D05E734C86F43B8E1D1034(L_13, _stringLiteralA9FEAF5F50923952C1AC3A473DE3C7E17D23B907, L_15, NULL);
		(&V_0)->___w_3 = ((*(float*)((float*)(float*)UnBox(L_16, Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_il2cpp_TypeInfo_var))));
		// obj = quaternion;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_17 = V_0;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_18 = L_17;
		RuntimeObject* L_19 = Box(Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974_il2cpp_TypeInfo_var, &L_18);
		___obj0 = L_19;
		// return obj;
		RuntimeObject* L_20 = ___obj0;
		return L_20;
	}
}
// System.Void NavySpade.Modules.Utils.Serialization.Surrogates.QuaternionSerializationSurrogate::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void QuaternionSerializationSurrogate__ctor_m53F7279A4B67882E7C0BAC731D3865CA39A8AC54 (QuaternionSerializationSurrogate_t01E6B253BF54374BE1DA031F0A17E861D87EBC2F* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void NavySpade.Modules.Utils.Serialization.Surrogates.SurrogateSelectorExtension::AddAllUnitySurrogate(System.Runtime.Serialization.SurrogateSelector)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SurrogateSelectorExtension_AddAllUnitySurrogate_m8D0B9C031B3EB43DB657722D927CAE234C84099D (SurrogateSelector_t8A877793013470A8B4FE67F6FE9D202A14754118* ___surrogateSelector0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ColorSerializationSurrogate_tF1C7C07AD63CD52A8C1F9CEEABB354A02ECAAECE_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Color_tD001788D726C3A7F1379BEED0260B9591F440C1F_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&QuaternionSerializationSurrogate_t01E6B253BF54374BE1DA031F0A17E861D87EBC2F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vector2IntSerializationSurrogate_tD64C23E3A5C3B5D56EFB94544D49E5E1C9CE1580_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vector2SerializationSurrogate_t20404049BB698DBA7C8C5C3993ECC42E125F8F72_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vector3IntSerializationSurrogate_tCCA3031054573B428ED34444A7EE608CC54D90A7_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vector3SerializationSurrogate_tEFA1934DF11BDE7A6CD69C1DAB89A814E97649A2_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vector4SerializationSurrogate_t1715E0BE9AA90E50B0B821B6131C00E08658B28A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3_0_0_0_var);
		s_Il2CppMethodInitialized = true;
	}
	ColorSerializationSurrogate_tF1C7C07AD63CD52A8C1F9CEEABB354A02ECAAECE* V_0 = NULL;
	QuaternionSerializationSurrogate_t01E6B253BF54374BE1DA031F0A17E861D87EBC2F* V_1 = NULL;
	Vector2IntSerializationSurrogate_tD64C23E3A5C3B5D56EFB94544D49E5E1C9CE1580* V_2 = NULL;
	Vector2SerializationSurrogate_t20404049BB698DBA7C8C5C3993ECC42E125F8F72* V_3 = NULL;
	Vector3IntSerializationSurrogate_tCCA3031054573B428ED34444A7EE608CC54D90A7* V_4 = NULL;
	Vector3SerializationSurrogate_tEFA1934DF11BDE7A6CD69C1DAB89A814E97649A2* V_5 = NULL;
	Vector4SerializationSurrogate_t1715E0BE9AA90E50B0B821B6131C00E08658B28A* V_6 = NULL;
	{
		// ColorSerializationSurrogate colorSS = new ColorSerializationSurrogate();
		ColorSerializationSurrogate_tF1C7C07AD63CD52A8C1F9CEEABB354A02ECAAECE* L_0 = (ColorSerializationSurrogate_tF1C7C07AD63CD52A8C1F9CEEABB354A02ECAAECE*)il2cpp_codegen_object_new(ColorSerializationSurrogate_tF1C7C07AD63CD52A8C1F9CEEABB354A02ECAAECE_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		ColorSerializationSurrogate__ctor_m13DCF071088B8897A09B283A0D11EE9C272CCEF6(L_0, NULL);
		V_0 = L_0;
		// QuaternionSerializationSurrogate quaternionSS = new QuaternionSerializationSurrogate();
		QuaternionSerializationSurrogate_t01E6B253BF54374BE1DA031F0A17E861D87EBC2F* L_1 = (QuaternionSerializationSurrogate_t01E6B253BF54374BE1DA031F0A17E861D87EBC2F*)il2cpp_codegen_object_new(QuaternionSerializationSurrogate_t01E6B253BF54374BE1DA031F0A17E861D87EBC2F_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		QuaternionSerializationSurrogate__ctor_m53F7279A4B67882E7C0BAC731D3865CA39A8AC54(L_1, NULL);
		V_1 = L_1;
		// Vector2IntSerializationSurrogate vector2IntSS = new Vector2IntSerializationSurrogate();
		Vector2IntSerializationSurrogate_tD64C23E3A5C3B5D56EFB94544D49E5E1C9CE1580* L_2 = (Vector2IntSerializationSurrogate_tD64C23E3A5C3B5D56EFB94544D49E5E1C9CE1580*)il2cpp_codegen_object_new(Vector2IntSerializationSurrogate_tD64C23E3A5C3B5D56EFB94544D49E5E1C9CE1580_il2cpp_TypeInfo_var);
		NullCheck(L_2);
		Vector2IntSerializationSurrogate__ctor_m6AD00A12BBFE7772E4894BF50FF69A4F6A289E18(L_2, NULL);
		V_2 = L_2;
		// Vector2SerializationSurrogate vector2SS = new Vector2SerializationSurrogate();
		Vector2SerializationSurrogate_t20404049BB698DBA7C8C5C3993ECC42E125F8F72* L_3 = (Vector2SerializationSurrogate_t20404049BB698DBA7C8C5C3993ECC42E125F8F72*)il2cpp_codegen_object_new(Vector2SerializationSurrogate_t20404049BB698DBA7C8C5C3993ECC42E125F8F72_il2cpp_TypeInfo_var);
		NullCheck(L_3);
		Vector2SerializationSurrogate__ctor_m5D9BD57DC25631A91F4427E96CA8C54B7A6A47AE(L_3, NULL);
		V_3 = L_3;
		// Vector3IntSerializationSurrogate vector3IntSS = new Vector3IntSerializationSurrogate();
		Vector3IntSerializationSurrogate_tCCA3031054573B428ED34444A7EE608CC54D90A7* L_4 = (Vector3IntSerializationSurrogate_tCCA3031054573B428ED34444A7EE608CC54D90A7*)il2cpp_codegen_object_new(Vector3IntSerializationSurrogate_tCCA3031054573B428ED34444A7EE608CC54D90A7_il2cpp_TypeInfo_var);
		NullCheck(L_4);
		Vector3IntSerializationSurrogate__ctor_mC9D2B3ACBDBA06187029826EF5EAE128C7B2C644(L_4, NULL);
		V_4 = L_4;
		// Vector3SerializationSurrogate vector3SS = new Vector3SerializationSurrogate();
		Vector3SerializationSurrogate_tEFA1934DF11BDE7A6CD69C1DAB89A814E97649A2* L_5 = (Vector3SerializationSurrogate_tEFA1934DF11BDE7A6CD69C1DAB89A814E97649A2*)il2cpp_codegen_object_new(Vector3SerializationSurrogate_tEFA1934DF11BDE7A6CD69C1DAB89A814E97649A2_il2cpp_TypeInfo_var);
		NullCheck(L_5);
		Vector3SerializationSurrogate__ctor_m3FBD275B87353B6420119CD676EE5248E44FB954(L_5, NULL);
		V_5 = L_5;
		// Vector4SerializationSurrogate vector4SS = new Vector4SerializationSurrogate();
		Vector4SerializationSurrogate_t1715E0BE9AA90E50B0B821B6131C00E08658B28A* L_6 = (Vector4SerializationSurrogate_t1715E0BE9AA90E50B0B821B6131C00E08658B28A*)il2cpp_codegen_object_new(Vector4SerializationSurrogate_t1715E0BE9AA90E50B0B821B6131C00E08658B28A_il2cpp_TypeInfo_var);
		NullCheck(L_6);
		Vector4SerializationSurrogate__ctor_mB07F2F89A5A4E0880DD1857A2ACD43D3ABA9762E(L_6, NULL);
		V_6 = L_6;
		// surrogateSelector.AddSurrogate(typeof(Color), new StreamingContext(StreamingContextStates.All), colorSS);
		SurrogateSelector_t8A877793013470A8B4FE67F6FE9D202A14754118* L_7 = ___surrogateSelector0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_8 = { reinterpret_cast<intptr_t> (Color_tD001788D726C3A7F1379BEED0260B9591F440C1F_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_9;
		L_9 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_8, NULL);
		StreamingContext_t56760522A751890146EE45F82F866B55B7E33677 L_10;
		memset((&L_10), 0, sizeof(L_10));
		StreamingContext__ctor_m76D85BCE7F2DFF192969B8A820A0DCC1E79F647E((&L_10), ((int32_t)255), /*hidden argument*/NULL);
		ColorSerializationSurrogate_tF1C7C07AD63CD52A8C1F9CEEABB354A02ECAAECE* L_11 = V_0;
		NullCheck(L_7);
		VirtualActionInvoker3< Type_t*, StreamingContext_t56760522A751890146EE45F82F866B55B7E33677, RuntimeObject* >::Invoke(5 /* System.Void System.Runtime.Serialization.SurrogateSelector::AddSurrogate(System.Type,System.Runtime.Serialization.StreamingContext,System.Runtime.Serialization.ISerializationSurrogate) */, L_7, L_9, L_10, L_11);
		// surrogateSelector.AddSurrogate(typeof(Quaternion), new StreamingContext(StreamingContextStates.All), quaternionSS);
		SurrogateSelector_t8A877793013470A8B4FE67F6FE9D202A14754118* L_12 = ___surrogateSelector0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_13 = { reinterpret_cast<intptr_t> (Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974_0_0_0_var) };
		Type_t* L_14;
		L_14 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_13, NULL);
		StreamingContext_t56760522A751890146EE45F82F866B55B7E33677 L_15;
		memset((&L_15), 0, sizeof(L_15));
		StreamingContext__ctor_m76D85BCE7F2DFF192969B8A820A0DCC1E79F647E((&L_15), ((int32_t)255), /*hidden argument*/NULL);
		QuaternionSerializationSurrogate_t01E6B253BF54374BE1DA031F0A17E861D87EBC2F* L_16 = V_1;
		NullCheck(L_12);
		VirtualActionInvoker3< Type_t*, StreamingContext_t56760522A751890146EE45F82F866B55B7E33677, RuntimeObject* >::Invoke(5 /* System.Void System.Runtime.Serialization.SurrogateSelector::AddSurrogate(System.Type,System.Runtime.Serialization.StreamingContext,System.Runtime.Serialization.ISerializationSurrogate) */, L_12, L_14, L_15, L_16);
		// surrogateSelector.AddSurrogate(typeof(Vector2Int), new StreamingContext(StreamingContextStates.All), vector2IntSS);
		SurrogateSelector_t8A877793013470A8B4FE67F6FE9D202A14754118* L_17 = ___surrogateSelector0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_18 = { reinterpret_cast<intptr_t> (Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A_0_0_0_var) };
		Type_t* L_19;
		L_19 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_18, NULL);
		StreamingContext_t56760522A751890146EE45F82F866B55B7E33677 L_20;
		memset((&L_20), 0, sizeof(L_20));
		StreamingContext__ctor_m76D85BCE7F2DFF192969B8A820A0DCC1E79F647E((&L_20), ((int32_t)255), /*hidden argument*/NULL);
		Vector2IntSerializationSurrogate_tD64C23E3A5C3B5D56EFB94544D49E5E1C9CE1580* L_21 = V_2;
		NullCheck(L_17);
		VirtualActionInvoker3< Type_t*, StreamingContext_t56760522A751890146EE45F82F866B55B7E33677, RuntimeObject* >::Invoke(5 /* System.Void System.Runtime.Serialization.SurrogateSelector::AddSurrogate(System.Type,System.Runtime.Serialization.StreamingContext,System.Runtime.Serialization.ISerializationSurrogate) */, L_17, L_19, L_20, L_21);
		// surrogateSelector.AddSurrogate(typeof(Vector2), new StreamingContext(StreamingContextStates.All), vector2SS);
		SurrogateSelector_t8A877793013470A8B4FE67F6FE9D202A14754118* L_22 = ___surrogateSelector0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_23 = { reinterpret_cast<intptr_t> (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_0_0_0_var) };
		Type_t* L_24;
		L_24 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_23, NULL);
		StreamingContext_t56760522A751890146EE45F82F866B55B7E33677 L_25;
		memset((&L_25), 0, sizeof(L_25));
		StreamingContext__ctor_m76D85BCE7F2DFF192969B8A820A0DCC1E79F647E((&L_25), ((int32_t)255), /*hidden argument*/NULL);
		Vector2SerializationSurrogate_t20404049BB698DBA7C8C5C3993ECC42E125F8F72* L_26 = V_3;
		NullCheck(L_22);
		VirtualActionInvoker3< Type_t*, StreamingContext_t56760522A751890146EE45F82F866B55B7E33677, RuntimeObject* >::Invoke(5 /* System.Void System.Runtime.Serialization.SurrogateSelector::AddSurrogate(System.Type,System.Runtime.Serialization.StreamingContext,System.Runtime.Serialization.ISerializationSurrogate) */, L_22, L_24, L_25, L_26);
		// surrogateSelector.AddSurrogate(typeof(Vector3Int), new StreamingContext(StreamingContextStates.All), vector3IntSS);
		SurrogateSelector_t8A877793013470A8B4FE67F6FE9D202A14754118* L_27 = ___surrogateSelector0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_28 = { reinterpret_cast<intptr_t> (Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376_0_0_0_var) };
		Type_t* L_29;
		L_29 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_28, NULL);
		StreamingContext_t56760522A751890146EE45F82F866B55B7E33677 L_30;
		memset((&L_30), 0, sizeof(L_30));
		StreamingContext__ctor_m76D85BCE7F2DFF192969B8A820A0DCC1E79F647E((&L_30), ((int32_t)255), /*hidden argument*/NULL);
		Vector3IntSerializationSurrogate_tCCA3031054573B428ED34444A7EE608CC54D90A7* L_31 = V_4;
		NullCheck(L_27);
		VirtualActionInvoker3< Type_t*, StreamingContext_t56760522A751890146EE45F82F866B55B7E33677, RuntimeObject* >::Invoke(5 /* System.Void System.Runtime.Serialization.SurrogateSelector::AddSurrogate(System.Type,System.Runtime.Serialization.StreamingContext,System.Runtime.Serialization.ISerializationSurrogate) */, L_27, L_29, L_30, L_31);
		// surrogateSelector.AddSurrogate(typeof(Vector3), new StreamingContext(StreamingContextStates.All), vector3SS);
		SurrogateSelector_t8A877793013470A8B4FE67F6FE9D202A14754118* L_32 = ___surrogateSelector0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_33 = { reinterpret_cast<intptr_t> (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_0_0_0_var) };
		Type_t* L_34;
		L_34 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_33, NULL);
		StreamingContext_t56760522A751890146EE45F82F866B55B7E33677 L_35;
		memset((&L_35), 0, sizeof(L_35));
		StreamingContext__ctor_m76D85BCE7F2DFF192969B8A820A0DCC1E79F647E((&L_35), ((int32_t)255), /*hidden argument*/NULL);
		Vector3SerializationSurrogate_tEFA1934DF11BDE7A6CD69C1DAB89A814E97649A2* L_36 = V_5;
		NullCheck(L_32);
		VirtualActionInvoker3< Type_t*, StreamingContext_t56760522A751890146EE45F82F866B55B7E33677, RuntimeObject* >::Invoke(5 /* System.Void System.Runtime.Serialization.SurrogateSelector::AddSurrogate(System.Type,System.Runtime.Serialization.StreamingContext,System.Runtime.Serialization.ISerializationSurrogate) */, L_32, L_34, L_35, L_36);
		// surrogateSelector.AddSurrogate(typeof(Vector4), new StreamingContext(StreamingContextStates.All), vector4SS);
		SurrogateSelector_t8A877793013470A8B4FE67F6FE9D202A14754118* L_37 = ___surrogateSelector0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_38 = { reinterpret_cast<intptr_t> (Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3_0_0_0_var) };
		Type_t* L_39;
		L_39 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_38, NULL);
		StreamingContext_t56760522A751890146EE45F82F866B55B7E33677 L_40;
		memset((&L_40), 0, sizeof(L_40));
		StreamingContext__ctor_m76D85BCE7F2DFF192969B8A820A0DCC1E79F647E((&L_40), ((int32_t)255), /*hidden argument*/NULL);
		Vector4SerializationSurrogate_t1715E0BE9AA90E50B0B821B6131C00E08658B28A* L_41 = V_6;
		NullCheck(L_37);
		VirtualActionInvoker3< Type_t*, StreamingContext_t56760522A751890146EE45F82F866B55B7E33677, RuntimeObject* >::Invoke(5 /* System.Void System.Runtime.Serialization.SurrogateSelector::AddSurrogate(System.Type,System.Runtime.Serialization.StreamingContext,System.Runtime.Serialization.ISerializationSurrogate) */, L_37, L_39, L_40, L_41);
		// }
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void NavySpade.Modules.Utils.Serialization.Surrogates.Vector2IntSerializationSurrogate::GetObjectData(System.Object,System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Vector2IntSerializationSurrogate_GetObjectData_mA44839408067528A99C4C6747822EDF9125CBAC6 (Vector2IntSerializationSurrogate_tD64C23E3A5C3B5D56EFB94544D49E5E1C9CE1580* __this, RuntimeObject* ___obj0, SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* ___info1, StreamingContext_t56760522A751890146EE45F82F866B55B7E33677 ___context2, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral062DB096C728515E033CF8C48A1C1F0B9A79384B);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9384C6EF2DA5C0BD5274A0DACFF291D0ABBFD8B1);
		s_Il2CppMethodInitialized = true;
	}
	Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// Vector2Int v2 = (Vector2Int)obj;
		RuntimeObject* L_0 = ___obj0;
		V_0 = ((*(Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A*)((Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A*)(Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A*)UnBox(L_0, Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A_il2cpp_TypeInfo_var))));
		// info.AddValue("x", v2.x);
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_1 = ___info1;
		int32_t L_2;
		L_2 = Vector2Int_get_x_mA2CACB1B6E6B5AD0CCC32B2CD2EDCE3ECEB50576_inline((&V_0), NULL);
		NullCheck(L_1);
		SerializationInfo_AddValue_m9D6ADD10966D1FE8D19050F3A269747C23FE9FC4(L_1, _stringLiteral062DB096C728515E033CF8C48A1C1F0B9A79384B, L_2, NULL);
		// info.AddValue("y", v2.y);
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_3 = ___info1;
		int32_t L_4;
		L_4 = Vector2Int_get_y_m48454163ECF0B463FB5A16A0C4FC4B14DB0768B3_inline((&V_0), NULL);
		NullCheck(L_3);
		SerializationInfo_AddValue_m9D6ADD10966D1FE8D19050F3A269747C23FE9FC4(L_3, _stringLiteral9384C6EF2DA5C0BD5274A0DACFF291D0ABBFD8B1, L_4, NULL);
		// }
		return;
	}
}
// System.Object NavySpade.Modules.Utils.Serialization.Surrogates.Vector2IntSerializationSurrogate::SetObjectData(System.Object,System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext,System.Runtime.Serialization.ISurrogateSelector)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Vector2IntSerializationSurrogate_SetObjectData_m0C33F61EE7D2F0421060E5DCB49523C1AF2D3905 (Vector2IntSerializationSurrogate_tD64C23E3A5C3B5D56EFB94544D49E5E1C9CE1580* __this, RuntimeObject* ___obj0, SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* ___info1, StreamingContext_t56760522A751890146EE45F82F866B55B7E33677 ___context2, RuntimeObject* ___selector3, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral062DB096C728515E033CF8C48A1C1F0B9A79384B);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9384C6EF2DA5C0BD5274A0DACFF291D0ABBFD8B1);
		s_Il2CppMethodInitialized = true;
	}
	Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// Vector2Int v2 = (Vector2Int)obj;
		RuntimeObject* L_0 = ___obj0;
		V_0 = ((*(Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A*)((Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A*)(Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A*)UnBox(L_0, Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A_il2cpp_TypeInfo_var))));
		// v2.x = (int)info.GetValue("x", typeof(int));
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_1 = ___info1;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_2 = { reinterpret_cast<intptr_t> (Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_3;
		L_3 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_2, NULL);
		NullCheck(L_1);
		RuntimeObject* L_4;
		L_4 = SerializationInfo_GetValue_mE6091C2E906E113455D05E734C86F43B8E1D1034(L_1, _stringLiteral062DB096C728515E033CF8C48A1C1F0B9A79384B, L_3, NULL);
		Vector2Int_set_x_m291ECF246536852F0B8EE049C4A3768E4999CDC8_inline((&V_0), ((*(int32_t*)((int32_t*)(int32_t*)UnBox(L_4, Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var)))), NULL);
		// v2.y = (int)info.GetValue("y", typeof(int));
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_5 = ___info1;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_6 = { reinterpret_cast<intptr_t> (Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_0_0_0_var) };
		Type_t* L_7;
		L_7 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_6, NULL);
		NullCheck(L_5);
		RuntimeObject* L_8;
		L_8 = SerializationInfo_GetValue_mE6091C2E906E113455D05E734C86F43B8E1D1034(L_5, _stringLiteral9384C6EF2DA5C0BD5274A0DACFF291D0ABBFD8B1, L_7, NULL);
		Vector2Int_set_y_mF81881204EEE272BA409728C7EBFDE3A979DDF6A_inline((&V_0), ((*(int32_t*)((int32_t*)(int32_t*)UnBox(L_8, Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var)))), NULL);
		// obj = v2;
		Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A L_9 = V_0;
		Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A L_10 = L_9;
		RuntimeObject* L_11 = Box(Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A_il2cpp_TypeInfo_var, &L_10);
		___obj0 = L_11;
		// return obj;
		RuntimeObject* L_12 = ___obj0;
		return L_12;
	}
}
// System.Void NavySpade.Modules.Utils.Serialization.Surrogates.Vector2IntSerializationSurrogate::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Vector2IntSerializationSurrogate__ctor_m6AD00A12BBFE7772E4894BF50FF69A4F6A289E18 (Vector2IntSerializationSurrogate_tD64C23E3A5C3B5D56EFB94544D49E5E1C9CE1580* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void NavySpade.Modules.Utils.Serialization.Surrogates.Vector2SerializationSurrogate::GetObjectData(System.Object,System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Vector2SerializationSurrogate_GetObjectData_m517331FF60D97064AE07801BDBBDA615CA568757 (Vector2SerializationSurrogate_t20404049BB698DBA7C8C5C3993ECC42E125F8F72* __this, RuntimeObject* ___obj0, SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* ___info1, StreamingContext_t56760522A751890146EE45F82F866B55B7E33677 ___context2, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral062DB096C728515E033CF8C48A1C1F0B9A79384B);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9384C6EF2DA5C0BD5274A0DACFF291D0ABBFD8B1);
		s_Il2CppMethodInitialized = true;
	}
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// Vector2 v2 = (Vector2)obj;
		RuntimeObject* L_0 = ___obj0;
		V_0 = ((*(Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7*)((Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7*)(Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7*)UnBox(L_0, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_il2cpp_TypeInfo_var))));
		// info.AddValue("x", v2.x);
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_1 = ___info1;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_2 = V_0;
		float L_3 = L_2.___x_0;
		NullCheck(L_1);
		SerializationInfo_AddValue_m6237DBFE29011A85D27E76E64BD806D7BFC4D46C(L_1, _stringLiteral062DB096C728515E033CF8C48A1C1F0B9A79384B, L_3, NULL);
		// info.AddValue("y", v2.y);
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_4 = ___info1;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_5 = V_0;
		float L_6 = L_5.___y_1;
		NullCheck(L_4);
		SerializationInfo_AddValue_m6237DBFE29011A85D27E76E64BD806D7BFC4D46C(L_4, _stringLiteral9384C6EF2DA5C0BD5274A0DACFF291D0ABBFD8B1, L_6, NULL);
		// }
		return;
	}
}
// System.Object NavySpade.Modules.Utils.Serialization.Surrogates.Vector2SerializationSurrogate::SetObjectData(System.Object,System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext,System.Runtime.Serialization.ISurrogateSelector)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Vector2SerializationSurrogate_SetObjectData_mEF5677DD0424AF6C26B62699EC0F5C97B0FA8587 (Vector2SerializationSurrogate_t20404049BB698DBA7C8C5C3993ECC42E125F8F72* __this, RuntimeObject* ___obj0, SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* ___info1, StreamingContext_t56760522A751890146EE45F82F866B55B7E33677 ___context2, RuntimeObject* ___selector3, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral062DB096C728515E033CF8C48A1C1F0B9A79384B);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9384C6EF2DA5C0BD5274A0DACFF291D0ABBFD8B1);
		s_Il2CppMethodInitialized = true;
	}
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// Vector2 v2 = (Vector2)obj;
		RuntimeObject* L_0 = ___obj0;
		V_0 = ((*(Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7*)((Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7*)(Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7*)UnBox(L_0, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_il2cpp_TypeInfo_var))));
		// v2.x = (float)info.GetValue("x", typeof(float));
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_1 = ___info1;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_2 = { reinterpret_cast<intptr_t> (Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_3;
		L_3 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_2, NULL);
		NullCheck(L_1);
		RuntimeObject* L_4;
		L_4 = SerializationInfo_GetValue_mE6091C2E906E113455D05E734C86F43B8E1D1034(L_1, _stringLiteral062DB096C728515E033CF8C48A1C1F0B9A79384B, L_3, NULL);
		(&V_0)->___x_0 = ((*(float*)((float*)(float*)UnBox(L_4, Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_il2cpp_TypeInfo_var))));
		// v2.y = (float)info.GetValue("y", typeof(float));
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_5 = ___info1;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_6 = { reinterpret_cast<intptr_t> (Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_0_0_0_var) };
		Type_t* L_7;
		L_7 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_6, NULL);
		NullCheck(L_5);
		RuntimeObject* L_8;
		L_8 = SerializationInfo_GetValue_mE6091C2E906E113455D05E734C86F43B8E1D1034(L_5, _stringLiteral9384C6EF2DA5C0BD5274A0DACFF291D0ABBFD8B1, L_7, NULL);
		(&V_0)->___y_1 = ((*(float*)((float*)(float*)UnBox(L_8, Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_il2cpp_TypeInfo_var))));
		// obj = v2;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_9 = V_0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_10 = L_9;
		RuntimeObject* L_11 = Box(Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_il2cpp_TypeInfo_var, &L_10);
		___obj0 = L_11;
		// return obj;
		RuntimeObject* L_12 = ___obj0;
		return L_12;
	}
}
// System.Void NavySpade.Modules.Utils.Serialization.Surrogates.Vector2SerializationSurrogate::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Vector2SerializationSurrogate__ctor_m5D9BD57DC25631A91F4427E96CA8C54B7A6A47AE (Vector2SerializationSurrogate_t20404049BB698DBA7C8C5C3993ECC42E125F8F72* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void NavySpade.Modules.Utils.Serialization.Surrogates.Vector3IntSerializationSurrogate::GetObjectData(System.Object,System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Vector3IntSerializationSurrogate_GetObjectData_m1BE9BFDDFF4D177844A213016982E797BB757F4B (Vector3IntSerializationSurrogate_tCCA3031054573B428ED34444A7EE608CC54D90A7* __this, RuntimeObject* ___obj0, SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* ___info1, StreamingContext_t56760522A751890146EE45F82F866B55B7E33677 ___context2, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral062DB096C728515E033CF8C48A1C1F0B9A79384B);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9384C6EF2DA5C0BD5274A0DACFF291D0ABBFD8B1);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9CE1604D659135925CCC4DD1F526AFFE42E689F1);
		s_Il2CppMethodInitialized = true;
	}
	Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// Vector3Int v3 = (Vector3Int)obj;
		RuntimeObject* L_0 = ___obj0;
		V_0 = ((*(Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376*)((Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376*)(Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376*)UnBox(L_0, Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376_il2cpp_TypeInfo_var))));
		// info.AddValue("x", v3.x);
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_1 = ___info1;
		int32_t L_2;
		L_2 = Vector3Int_get_x_m21C268D2AA4C03CE35AA49DF6155347C9748054C_inline((&V_0), NULL);
		NullCheck(L_1);
		SerializationInfo_AddValue_m9D6ADD10966D1FE8D19050F3A269747C23FE9FC4(L_1, _stringLiteral062DB096C728515E033CF8C48A1C1F0B9A79384B, L_2, NULL);
		// info.AddValue("y", v3.y);
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_3 = ___info1;
		int32_t L_4;
		L_4 = Vector3Int_get_y_m42F43000F85D356557CAF03442273E7AA08F7F72_inline((&V_0), NULL);
		NullCheck(L_3);
		SerializationInfo_AddValue_m9D6ADD10966D1FE8D19050F3A269747C23FE9FC4(L_3, _stringLiteral9384C6EF2DA5C0BD5274A0DACFF291D0ABBFD8B1, L_4, NULL);
		// info.AddValue("z", v3.z);
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_5 = ___info1;
		int32_t L_6;
		L_6 = Vector3Int_get_z_m96E180F866145E373F42358F2371EFF446F08AED_inline((&V_0), NULL);
		NullCheck(L_5);
		SerializationInfo_AddValue_m9D6ADD10966D1FE8D19050F3A269747C23FE9FC4(L_5, _stringLiteral9CE1604D659135925CCC4DD1F526AFFE42E689F1, L_6, NULL);
		// }
		return;
	}
}
// System.Object NavySpade.Modules.Utils.Serialization.Surrogates.Vector3IntSerializationSurrogate::SetObjectData(System.Object,System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext,System.Runtime.Serialization.ISurrogateSelector)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Vector3IntSerializationSurrogate_SetObjectData_m35C1AD5AC0E809465D3BB48FB3F66A3A916FC30A (Vector3IntSerializationSurrogate_tCCA3031054573B428ED34444A7EE608CC54D90A7* __this, RuntimeObject* ___obj0, SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* ___info1, StreamingContext_t56760522A751890146EE45F82F866B55B7E33677 ___context2, RuntimeObject* ___selector3, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral062DB096C728515E033CF8C48A1C1F0B9A79384B);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9384C6EF2DA5C0BD5274A0DACFF291D0ABBFD8B1);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9CE1604D659135925CCC4DD1F526AFFE42E689F1);
		s_Il2CppMethodInitialized = true;
	}
	Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// Vector3Int v3 = (Vector3Int)obj;
		RuntimeObject* L_0 = ___obj0;
		V_0 = ((*(Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376*)((Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376*)(Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376*)UnBox(L_0, Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376_il2cpp_TypeInfo_var))));
		// v3.x = (int)info.GetValue("x", typeof(int));
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_1 = ___info1;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_2 = { reinterpret_cast<intptr_t> (Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_3;
		L_3 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_2, NULL);
		NullCheck(L_1);
		RuntimeObject* L_4;
		L_4 = SerializationInfo_GetValue_mE6091C2E906E113455D05E734C86F43B8E1D1034(L_1, _stringLiteral062DB096C728515E033CF8C48A1C1F0B9A79384B, L_3, NULL);
		Vector3Int_set_x_m8745C5976D035EBBAC6F6191B5838D58631D8685_inline((&V_0), ((*(int32_t*)((int32_t*)(int32_t*)UnBox(L_4, Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var)))), NULL);
		// v3.y = (int)info.GetValue("y", typeof(int));
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_5 = ___info1;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_6 = { reinterpret_cast<intptr_t> (Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_0_0_0_var) };
		Type_t* L_7;
		L_7 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_6, NULL);
		NullCheck(L_5);
		RuntimeObject* L_8;
		L_8 = SerializationInfo_GetValue_mE6091C2E906E113455D05E734C86F43B8E1D1034(L_5, _stringLiteral9384C6EF2DA5C0BD5274A0DACFF291D0ABBFD8B1, L_7, NULL);
		Vector3Int_set_y_mA856F32D1BF187BD4091DDF3C6872FD01F7D3377_inline((&V_0), ((*(int32_t*)((int32_t*)(int32_t*)UnBox(L_8, Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var)))), NULL);
		// v3.z = (int)info.GetValue("z", typeof(int));
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_9 = ___info1;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_10 = { reinterpret_cast<intptr_t> (Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_0_0_0_var) };
		Type_t* L_11;
		L_11 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_10, NULL);
		NullCheck(L_9);
		RuntimeObject* L_12;
		L_12 = SerializationInfo_GetValue_mE6091C2E906E113455D05E734C86F43B8E1D1034(L_9, _stringLiteral9CE1604D659135925CCC4DD1F526AFFE42E689F1, L_11, NULL);
		Vector3Int_set_z_m5782180F67C4257C505F124971985D99C3422F74_inline((&V_0), ((*(int32_t*)((int32_t*)(int32_t*)UnBox(L_12, Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var)))), NULL);
		// obj = v3;
		Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376 L_13 = V_0;
		Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376 L_14 = L_13;
		RuntimeObject* L_15 = Box(Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376_il2cpp_TypeInfo_var, &L_14);
		___obj0 = L_15;
		// return obj;
		RuntimeObject* L_16 = ___obj0;
		return L_16;
	}
}
// System.Void NavySpade.Modules.Utils.Serialization.Surrogates.Vector3IntSerializationSurrogate::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Vector3IntSerializationSurrogate__ctor_mC9D2B3ACBDBA06187029826EF5EAE128C7B2C644 (Vector3IntSerializationSurrogate_tCCA3031054573B428ED34444A7EE608CC54D90A7* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void NavySpade.Modules.Utils.Serialization.Surrogates.Vector3SerializationSurrogate::GetObjectData(System.Object,System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Vector3SerializationSurrogate_GetObjectData_mCE89D6F6E66756FDDFCB0FC069E4138CC1D30097 (Vector3SerializationSurrogate_tEFA1934DF11BDE7A6CD69C1DAB89A814E97649A2* __this, RuntimeObject* ___obj0, SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* ___info1, StreamingContext_t56760522A751890146EE45F82F866B55B7E33677 ___context2, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral062DB096C728515E033CF8C48A1C1F0B9A79384B);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9384C6EF2DA5C0BD5274A0DACFF291D0ABBFD8B1);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9CE1604D659135925CCC4DD1F526AFFE42E689F1);
		s_Il2CppMethodInitialized = true;
	}
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// Vector3 v3 = (Vector3)obj;
		RuntimeObject* L_0 = ___obj0;
		V_0 = ((*(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2*)((Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2*)(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2*)UnBox(L_0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var))));
		// info.AddValue("x", v3.x);
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_1 = ___info1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2 = V_0;
		float L_3 = L_2.___x_2;
		NullCheck(L_1);
		SerializationInfo_AddValue_m6237DBFE29011A85D27E76E64BD806D7BFC4D46C(L_1, _stringLiteral062DB096C728515E033CF8C48A1C1F0B9A79384B, L_3, NULL);
		// info.AddValue("y", v3.y);
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_4 = ___info1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_5 = V_0;
		float L_6 = L_5.___y_3;
		NullCheck(L_4);
		SerializationInfo_AddValue_m6237DBFE29011A85D27E76E64BD806D7BFC4D46C(L_4, _stringLiteral9384C6EF2DA5C0BD5274A0DACFF291D0ABBFD8B1, L_6, NULL);
		// info.AddValue("z", v3.z);
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_7 = ___info1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8 = V_0;
		float L_9 = L_8.___z_4;
		NullCheck(L_7);
		SerializationInfo_AddValue_m6237DBFE29011A85D27E76E64BD806D7BFC4D46C(L_7, _stringLiteral9CE1604D659135925CCC4DD1F526AFFE42E689F1, L_9, NULL);
		// }
		return;
	}
}
// System.Object NavySpade.Modules.Utils.Serialization.Surrogates.Vector3SerializationSurrogate::SetObjectData(System.Object,System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext,System.Runtime.Serialization.ISurrogateSelector)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Vector3SerializationSurrogate_SetObjectData_m88FF33F9EC0C4BFB336FE2C952F881941412E3B8 (Vector3SerializationSurrogate_tEFA1934DF11BDE7A6CD69C1DAB89A814E97649A2* __this, RuntimeObject* ___obj0, SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* ___info1, StreamingContext_t56760522A751890146EE45F82F866B55B7E33677 ___context2, RuntimeObject* ___selector3, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral062DB096C728515E033CF8C48A1C1F0B9A79384B);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9384C6EF2DA5C0BD5274A0DACFF291D0ABBFD8B1);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9CE1604D659135925CCC4DD1F526AFFE42E689F1);
		s_Il2CppMethodInitialized = true;
	}
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// Vector3 v3 = (Vector3)obj;
		RuntimeObject* L_0 = ___obj0;
		V_0 = ((*(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2*)((Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2*)(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2*)UnBox(L_0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var))));
		// v3.x = (float)info.GetValue("x", typeof(float));
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_1 = ___info1;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_2 = { reinterpret_cast<intptr_t> (Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_3;
		L_3 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_2, NULL);
		NullCheck(L_1);
		RuntimeObject* L_4;
		L_4 = SerializationInfo_GetValue_mE6091C2E906E113455D05E734C86F43B8E1D1034(L_1, _stringLiteral062DB096C728515E033CF8C48A1C1F0B9A79384B, L_3, NULL);
		(&V_0)->___x_2 = ((*(float*)((float*)(float*)UnBox(L_4, Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_il2cpp_TypeInfo_var))));
		// v3.y = (float)info.GetValue("y", typeof(float));
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_5 = ___info1;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_6 = { reinterpret_cast<intptr_t> (Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_0_0_0_var) };
		Type_t* L_7;
		L_7 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_6, NULL);
		NullCheck(L_5);
		RuntimeObject* L_8;
		L_8 = SerializationInfo_GetValue_mE6091C2E906E113455D05E734C86F43B8E1D1034(L_5, _stringLiteral9384C6EF2DA5C0BD5274A0DACFF291D0ABBFD8B1, L_7, NULL);
		(&V_0)->___y_3 = ((*(float*)((float*)(float*)UnBox(L_8, Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_il2cpp_TypeInfo_var))));
		// v3.z = (float)info.GetValue("z", typeof(float));
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_9 = ___info1;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_10 = { reinterpret_cast<intptr_t> (Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_0_0_0_var) };
		Type_t* L_11;
		L_11 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_10, NULL);
		NullCheck(L_9);
		RuntimeObject* L_12;
		L_12 = SerializationInfo_GetValue_mE6091C2E906E113455D05E734C86F43B8E1D1034(L_9, _stringLiteral9CE1604D659135925CCC4DD1F526AFFE42E689F1, L_11, NULL);
		(&V_0)->___z_4 = ((*(float*)((float*)(float*)UnBox(L_12, Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_il2cpp_TypeInfo_var))));
		// obj = v3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_13 = V_0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_14 = L_13;
		RuntimeObject* L_15 = Box(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var, &L_14);
		___obj0 = L_15;
		// return obj;
		RuntimeObject* L_16 = ___obj0;
		return L_16;
	}
}
// System.Void NavySpade.Modules.Utils.Serialization.Surrogates.Vector3SerializationSurrogate::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Vector3SerializationSurrogate__ctor_m3FBD275B87353B6420119CD676EE5248E44FB954 (Vector3SerializationSurrogate_tEFA1934DF11BDE7A6CD69C1DAB89A814E97649A2* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void NavySpade.Modules.Utils.Serialization.Surrogates.Vector4SerializationSurrogate::GetObjectData(System.Object,System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Vector4SerializationSurrogate_GetObjectData_m4FEC8F0671C49BFDF42735DB1EA8D5E3A02222A1 (Vector4SerializationSurrogate_t1715E0BE9AA90E50B0B821B6131C00E08658B28A* __this, RuntimeObject* ___obj0, SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* ___info1, StreamingContext_t56760522A751890146EE45F82F866B55B7E33677 ___context2, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral062DB096C728515E033CF8C48A1C1F0B9A79384B);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9384C6EF2DA5C0BD5274A0DACFF291D0ABBFD8B1);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9CE1604D659135925CCC4DD1F526AFFE42E689F1);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA9FEAF5F50923952C1AC3A473DE3C7E17D23B907);
		s_Il2CppMethodInitialized = true;
	}
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// Vector4 v4 = (Vector4)obj;
		RuntimeObject* L_0 = ___obj0;
		V_0 = ((*(Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3*)((Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3*)(Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3*)UnBox(L_0, Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3_il2cpp_TypeInfo_var))));
		// info.AddValue("x", v4.x);
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_1 = ___info1;
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_2 = V_0;
		float L_3 = L_2.___x_1;
		NullCheck(L_1);
		SerializationInfo_AddValue_m6237DBFE29011A85D27E76E64BD806D7BFC4D46C(L_1, _stringLiteral062DB096C728515E033CF8C48A1C1F0B9A79384B, L_3, NULL);
		// info.AddValue("y", v4.y);
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_4 = ___info1;
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_5 = V_0;
		float L_6 = L_5.___y_2;
		NullCheck(L_4);
		SerializationInfo_AddValue_m6237DBFE29011A85D27E76E64BD806D7BFC4D46C(L_4, _stringLiteral9384C6EF2DA5C0BD5274A0DACFF291D0ABBFD8B1, L_6, NULL);
		// info.AddValue("z", v4.z);
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_7 = ___info1;
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_8 = V_0;
		float L_9 = L_8.___z_3;
		NullCheck(L_7);
		SerializationInfo_AddValue_m6237DBFE29011A85D27E76E64BD806D7BFC4D46C(L_7, _stringLiteral9CE1604D659135925CCC4DD1F526AFFE42E689F1, L_9, NULL);
		// info.AddValue("w", v4.w);
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_10 = ___info1;
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_11 = V_0;
		float L_12 = L_11.___w_4;
		NullCheck(L_10);
		SerializationInfo_AddValue_m6237DBFE29011A85D27E76E64BD806D7BFC4D46C(L_10, _stringLiteralA9FEAF5F50923952C1AC3A473DE3C7E17D23B907, L_12, NULL);
		// }
		return;
	}
}
// System.Object NavySpade.Modules.Utils.Serialization.Surrogates.Vector4SerializationSurrogate::SetObjectData(System.Object,System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext,System.Runtime.Serialization.ISurrogateSelector)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Vector4SerializationSurrogate_SetObjectData_m66E3A1346D1CB2F141FBCD6D08DFE41A20A7E662 (Vector4SerializationSurrogate_t1715E0BE9AA90E50B0B821B6131C00E08658B28A* __this, RuntimeObject* ___obj0, SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* ___info1, StreamingContext_t56760522A751890146EE45F82F866B55B7E33677 ___context2, RuntimeObject* ___selector3, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral062DB096C728515E033CF8C48A1C1F0B9A79384B);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9384C6EF2DA5C0BD5274A0DACFF291D0ABBFD8B1);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9CE1604D659135925CCC4DD1F526AFFE42E689F1);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA9FEAF5F50923952C1AC3A473DE3C7E17D23B907);
		s_Il2CppMethodInitialized = true;
	}
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// Vector4 v4 = (Vector4)obj;
		RuntimeObject* L_0 = ___obj0;
		V_0 = ((*(Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3*)((Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3*)(Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3*)UnBox(L_0, Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3_il2cpp_TypeInfo_var))));
		// v4.x = (float)info.GetValue("x", typeof(float));
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_1 = ___info1;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_2 = { reinterpret_cast<intptr_t> (Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_3;
		L_3 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_2, NULL);
		NullCheck(L_1);
		RuntimeObject* L_4;
		L_4 = SerializationInfo_GetValue_mE6091C2E906E113455D05E734C86F43B8E1D1034(L_1, _stringLiteral062DB096C728515E033CF8C48A1C1F0B9A79384B, L_3, NULL);
		(&V_0)->___x_1 = ((*(float*)((float*)(float*)UnBox(L_4, Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_il2cpp_TypeInfo_var))));
		// v4.y = (float)info.GetValue("y", typeof(float));
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_5 = ___info1;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_6 = { reinterpret_cast<intptr_t> (Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_0_0_0_var) };
		Type_t* L_7;
		L_7 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_6, NULL);
		NullCheck(L_5);
		RuntimeObject* L_8;
		L_8 = SerializationInfo_GetValue_mE6091C2E906E113455D05E734C86F43B8E1D1034(L_5, _stringLiteral9384C6EF2DA5C0BD5274A0DACFF291D0ABBFD8B1, L_7, NULL);
		(&V_0)->___y_2 = ((*(float*)((float*)(float*)UnBox(L_8, Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_il2cpp_TypeInfo_var))));
		// v4.z = (float)info.GetValue("z", typeof(float));
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_9 = ___info1;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_10 = { reinterpret_cast<intptr_t> (Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_0_0_0_var) };
		Type_t* L_11;
		L_11 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_10, NULL);
		NullCheck(L_9);
		RuntimeObject* L_12;
		L_12 = SerializationInfo_GetValue_mE6091C2E906E113455D05E734C86F43B8E1D1034(L_9, _stringLiteral9CE1604D659135925CCC4DD1F526AFFE42E689F1, L_11, NULL);
		(&V_0)->___z_3 = ((*(float*)((float*)(float*)UnBox(L_12, Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_il2cpp_TypeInfo_var))));
		// v4.w = (float)info.GetValue("w", typeof(float));
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_13 = ___info1;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_14 = { reinterpret_cast<intptr_t> (Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_0_0_0_var) };
		Type_t* L_15;
		L_15 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_14, NULL);
		NullCheck(L_13);
		RuntimeObject* L_16;
		L_16 = SerializationInfo_GetValue_mE6091C2E906E113455D05E734C86F43B8E1D1034(L_13, _stringLiteralA9FEAF5F50923952C1AC3A473DE3C7E17D23B907, L_15, NULL);
		(&V_0)->___w_4 = ((*(float*)((float*)(float*)UnBox(L_16, Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_il2cpp_TypeInfo_var))));
		// obj = v4;
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_17 = V_0;
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_18 = L_17;
		RuntimeObject* L_19 = Box(Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3_il2cpp_TypeInfo_var, &L_18);
		___obj0 = L_19;
		// return obj;
		RuntimeObject* L_20 = ___obj0;
		return L_20;
	}
}
// System.Void NavySpade.Modules.Utils.Serialization.Surrogates.Vector4SerializationSurrogate::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Vector4SerializationSurrogate__ctor_mB07F2F89A5A4E0880DD1857A2ACD43D3ABA9762E (Vector4SerializationSurrogate_t1715E0BE9AA90E50B0B821B6131C00E08658B28A* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Vector2Int_get_x_mA2CACB1B6E6B5AD0CCC32B2CD2EDCE3ECEB50576_inline (Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = __this->___m_X_0;
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		int32_t L_1 = V_0;
		return L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Vector2Int_get_y_m48454163ECF0B463FB5A16A0C4FC4B14DB0768B3_inline (Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = __this->___m_Y_1;
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		int32_t L_1 = V_0;
		return L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector2Int_set_x_m291ECF246536852F0B8EE049C4A3768E4999CDC8_inline (Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A* __this, int32_t ___value0, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___value0;
		__this->___m_X_0 = L_0;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector2Int_set_y_mF81881204EEE272BA409728C7EBFDE3A979DDF6A_inline (Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A* __this, int32_t ___value0, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___value0;
		__this->___m_Y_1 = L_0;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Vector3Int_get_x_m21C268D2AA4C03CE35AA49DF6155347C9748054C_inline (Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = __this->___m_X_0;
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		int32_t L_1 = V_0;
		return L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Vector3Int_get_y_m42F43000F85D356557CAF03442273E7AA08F7F72_inline (Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = __this->___m_Y_1;
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		int32_t L_1 = V_0;
		return L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Vector3Int_get_z_m96E180F866145E373F42358F2371EFF446F08AED_inline (Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = __this->___m_Z_2;
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		int32_t L_1 = V_0;
		return L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector3Int_set_x_m8745C5976D035EBBAC6F6191B5838D58631D8685_inline (Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376* __this, int32_t ___value0, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___value0;
		__this->___m_X_0 = L_0;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector3Int_set_y_mA856F32D1BF187BD4091DDF3C6872FD01F7D3377_inline (Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376* __this, int32_t ___value0, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___value0;
		__this->___m_Y_1 = L_0;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector3Int_set_z_m5782180F67C4257C505F124971985D99C3422F74_inline (Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376* __this, int32_t ___value0, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___value0;
		__this->___m_Z_2 = L_0;
		return;
	}
}
