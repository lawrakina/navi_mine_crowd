#include "pch-cpp.hpp"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <limits>
#include <stdint.h>


template <typename T1>
struct VirtualActionInvoker1
{
	typedef void (*Action)(void*, T1, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
template <typename T1, typename T2>
struct VirtualActionInvoker2
{
	typedef void (*Action)(void*, T1, T2, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1, T2 p2)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, p1, p2, invokeData.method);
	}
};
template <typename R>
struct VirtualFuncInvoker0
{
	typedef R (*Func)(void*, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, invokeData.method);
	}
};
template <typename R, typename T1, typename T2>
struct VirtualFuncInvoker2
{
	typedef R (*Func)(void*, T1, T2, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1, T2 p2)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, p1, p2, invokeData.method);
	}
};

// System.Collections.Generic.Dictionary`2<System.Int32,System.Globalization.CultureInfo>
struct Dictionary_2_t9FA6D82CAFC18769F7515BB51D1C56DAE09381C3;
// System.Collections.Generic.Dictionary`2<System.String,System.Globalization.CultureInfo>
struct Dictionary_2_tE1603CE612C16451D1E56FF4D4859D4FE4087C28;
// System.Collections.Generic.Dictionary`2<System.String,System.Int32>
struct Dictionary_2_t5C8F46F5D57502270DD9E1DA8303B23C7FE85588;
// System.Byte[]
struct ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031;
// System.Int32[]
struct Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C;
// System.IntPtr[]
struct IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832;
// System.Object[]
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918;
// System.Diagnostics.StackTrace[]
struct StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF;
// System.String[]
struct StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248;
// System.Type[]
struct TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB;
// System.ArgumentException
struct ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263;
// System.Reflection.Binder
struct Binder_t91BFCE95A7057FADF4D8A1A342AFE52872246235;
// System.Globalization.Calendar
struct Calendar_t0A117CC7532A54C17188C2EFEA1F79DB20DF3A3B;
// System.Globalization.CompareInfo
struct CompareInfo_t1B1A6AC3486B570C76ABA52149C9BD4CD82F9E57;
// System.Globalization.CultureData
struct CultureData_tEEFDCF4ECA1BBF6C0C8C94EB3541657245598F9D;
// System.Globalization.CultureInfo
struct CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0;
// System.Data.DataCommonEventSource
struct DataCommonEventSource_tC3BB57E78CED1A7EFBCC8F852266121F4641CBFE;
// System.Globalization.DateTimeFormatInfo
struct DateTimeFormatInfo_t0457520F9FA7B5C8EAAEB3AD50413B6AEEB7458A;
// System.Diagnostics.Tracing.EventSource
struct EventSource_tA86759A1E6F272632C299AAC181C0A67E5C52F25;
// System.Exception
struct Exception_t;
// System.Collections.Hashtable
struct Hashtable_tEFC3B6496E6747787D8BB761B51F2AE3A8CFFE2D;
// System.Collections.IDictionary
struct IDictionary_t6D03155AF1FA9083817AA5B6AD7DEEACC26AB220;
// System.IFormatProvider
struct IFormatProvider_tC202922D43BFF3525109ABF3FB79625F5646AB52;
// System.Runtime.Serialization.IFormatterConverter
struct IFormatterConverter_t726606DAC82C384B08C82471313C340968DDB609;
// System.Reflection.MemberFilter
struct MemberFilter_tF644F1AE82F611B677CE1964D5A3277DDA21D553;
// System.Globalization.NumberFormatInfo
struct NumberFormatInfo_t8E26808B202927FEBF9064FCFEEA4D6E076E6472;
// System.OverflowException
struct OverflowException_t6F6AD8CACE20C37F701C05B373A215C4802FAB0C;
// System.Runtime.Serialization.SafeSerializationManager
struct SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6;
// System.Xml.Schema.SchemaInfo
struct SchemaInfo_t42F4B1099B63BCF2D3BBF7F35A79AF6B90B0927E;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37;
// System.Collections.SortedList
struct SortedList_t847331629BA06B518F1B5203BD22B59746EDDBF3;
// System.Data.SqlTypes.SqlNullValueException
struct SqlNullValueException_t84216F8C86727B62B1C84EFCE7CFC403674ECAD7;
// System.Data.SqlTypes.SqlTypeException
struct SqlTypeException_t93D97B141C16DC7DC601ED2ED8166B0596C4494E;
// System.String
struct String_t;
// System.SystemException
struct SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295;
// System.Globalization.TextInfo
struct TextInfo_tD3BAFCFD77418851E7D5CB8D2588F47019E414B4;
// System.Type
struct Type_t;
// System.Xml.Schema.ValidationEventHandler
struct ValidationEventHandler_t400B20AD482B62613818392D3E5588426332560A;
// System.Void
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915;
// System.Xml.XmlNameTable
struct XmlNameTable_tBDBAACFF3DB40A8E6AF3BDC11F0FF166CF11ABB8;
// System.Xml.XmlQualifiedName
struct XmlQualifiedName_t2794880B373257E4108CC3F36D7373A343ACC5B9;
// System.Xml.XmlReader
struct XmlReader_t4C709DEF5F01606ECB60B638F1BD6F6E0A9116FD;
// System.Xml.XmlReaderSettings
struct XmlReaderSettings_t8D51BA3ED2A013EE1F44525C9861326CAFB44AEA;
// System.Xml.Schema.XmlSchema
struct XmlSchema_t5C9506D00418BF5FD524254D0C6C405C620C941D;
// System.Xml.Schema.XmlSchemaCompilationSettings
struct XmlSchemaCompilationSettings_tAD528503343C490A9030FEF019E313661390249C;
// System.Xml.Schema.XmlSchemaSet
struct XmlSchemaSet_t048A12CE7D00EF330EF32A388B69A240899F88D1;
// System.Xml.XmlWriter
struct XmlWriter_tCBC8D0C4891828A0A384C68D0414337F20E1A17F;
// System.Xml.XmlQualifiedName/HashCodeOfStringDelegate
struct HashCodeOfStringDelegate_t25F1FA9B737C4313ED341BA7AAB31694DC3669DA;

IL2CPP_EXTERN_C RuntimeClass* ADP_t2C39CD1D5CEFC1B88FF6F7C7AD1916F0FD538CC0_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* DataCommonEventSource_tC3BB57E78CED1A7EFBCC8F852266121F4641CBFE_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* OverflowException_t6F6AD8CACE20C37F701C05B373A215C4802FAB0C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SqlBoolean_tAD22108BE5F656A5AAFE19B054B2CA56C0AEE1D7_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SqlDateTime_tFB5902479382E8A61934E274E7BBF3280A3D25B2_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SqlNullValueException_t84216F8C86727B62B1C84EFCE7CFC403674ECAD7_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SqlTypeException_t93D97B141C16DC7DC601ED2ED8166B0596C4494E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Type_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* XmlConvert_t5D100AFD62FF717BD4F8A6CABA9EDF7A5DF719EA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* XmlQualifiedName_t2794880B373257E4108CC3F36D7373A343ACC5B9_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeField* U3CPrivateImplementationDetailsU3E_t7A9A2AD29BEDCB07843BEF77FA3BA6C06C48D73C____5857EE4CE98BFABBD62B385C1098507DD0052FF3951043AAD6A1DABD495F18AA_0_FieldInfo_var;
IL2CPP_EXTERN_C RuntimeField* U3CPrivateImplementationDetailsU3E_t7A9A2AD29BEDCB07843BEF77FA3BA6C06C48D73C____FADB218011E7702BB9575D0C32A685DA10B5C72EB809BD9A955DB1C76E4D8315_1_FieldInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral05119745D20F83C96FF64EC9238D16AE415068EB;
IL2CPP_EXTERN_C String_t* _stringLiteral237CCA189DD9C0D0A4D5FDF9797BB97D32BE95D8;
IL2CPP_EXTERN_C String_t* _stringLiteral2C2E4FE4D6B4BAC5113AC6E0E45AB9DB49769880;
IL2CPP_EXTERN_C String_t* _stringLiteral2CAB73EF57D40E8B63A7CA91D057C0B68DB59100;
IL2CPP_EXTERN_C String_t* _stringLiteral2F586A9A065DC63095A51E546B1FFD249131F7D1;
IL2CPP_EXTERN_C String_t* _stringLiteral381B7C83B74E5866B084D94F2F697986A6FD36A8;
IL2CPP_EXTERN_C String_t* _stringLiteral5081C2BB000D6FA0C2CDA4A8B7ED516A31C70DC6;
IL2CPP_EXTERN_C String_t* _stringLiteral571BAA4944D3BB4767DADF9048FE535DAECFAB49;
IL2CPP_EXTERN_C String_t* _stringLiteral5A78BFA6674BB1EE4BD54CF77926CA1EBD26D045;
IL2CPP_EXTERN_C String_t* _stringLiteral6D67ADE9CC145DA3A39BC63DF500A7B0EC88CE4A;
IL2CPP_EXTERN_C String_t* _stringLiteral74C3760424E078A3B22452637B9991F932BEE533;
IL2CPP_EXTERN_C String_t* _stringLiteral77D38C0623F92B292B925F6E72CF5CF99A20D4EB;
IL2CPP_EXTERN_C String_t* _stringLiteral7C014955313A7D33D5D04696B884B25325E6393C;
IL2CPP_EXTERN_C String_t* _stringLiteral8EB252E15BE98B57C1DEDDE29773A1A775DE4000;
IL2CPP_EXTERN_C String_t* _stringLiteralA1C147A4B101755BFA4EBF8AEDD06334BB72A6C5;
IL2CPP_EXTERN_C String_t* _stringLiteralA2F789ACB65F4C6497E44B69E2C6438E28D539AC;
IL2CPP_EXTERN_C String_t* _stringLiteralA4F7CCED08DD7ACFDAD13195A519ABCFDCF46FC9;
IL2CPP_EXTERN_C String_t* _stringLiteralA74E383D268F2088952766436F909896A69F55BB;
IL2CPP_EXTERN_C String_t* _stringLiteralAAB352F1CC4AC4E0DA45060A468CB75DC7B60E0F;
IL2CPP_EXTERN_C String_t* _stringLiteralAFF39379ED0674D4BE1C6007B342CA8DA65BC816;
IL2CPP_EXTERN_C String_t* _stringLiteralB7C45DD316C68ABF3429C20058C2981C652192F2;
IL2CPP_EXTERN_C String_t* _stringLiteralB9C4E7450F845E633DEE5CC15FF62B87B4778826;
IL2CPP_EXTERN_C String_t* _stringLiteralC1D0D292C33F1F64AB45A4955EAF5BB638C50F4B;
IL2CPP_EXTERN_C String_t* _stringLiteralC25E3D04278F824992570E3C4FD054806D8FE244;
IL2CPP_EXTERN_C String_t* _stringLiteralCA3AA03CDCD53448690DF9E0FFBFB3608CD54D2A;
IL2CPP_EXTERN_C String_t* _stringLiteralCB23F9937D80B1A1E1D2A5F53949DF4876BAB314;
IL2CPP_EXTERN_C String_t* _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709;
IL2CPP_EXTERN_C String_t* _stringLiteralDA4BE0F963380DB493604E9CA0B0B54F040F58C9;
IL2CPP_EXTERN_C String_t* _stringLiteralE249DDFD90EBFAAEE63734F28F6668A2FB5BD5AF;
IL2CPP_EXTERN_C String_t* _stringLiteralEC8D2B1EC3E954083D64BF4DDCCC9E46BE24B490;
IL2CPP_EXTERN_C String_t* _stringLiteralECC887A6FB8315456AE4F577AA0E1646BEB717E7;
IL2CPP_EXTERN_C const RuntimeMethod* DataCommonEventSource_Trace_TisException_t_m6AD40C3B6CFE3732C2E9A642A4D2A2727D26AE7E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* SqlBoolean_CompareTo_mD8954B2D5AAF295449721C6FAE8A054DA3EA6D82_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* SqlBoolean_get_ByteValue_m0DAA32AF074F4F826BE41D06F219CE3087DC4C81_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* SqlBoolean_get_Value_m26D2659D06D56FFBF158051EB3726BAB693A7D97_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* SqlDateTime_CompareTo_m82CED8E48367B756FD2F10929C6230D8F018EF77_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* SqlDateTime_FromTimeSpan_m5519F16CE76C7468EC508278EED4E1863C491AC8_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* SqlDateTime_System_Xml_Serialization_IXmlSerializable_ReadXml_m6F05BF9F400FA1CB4FD51EBC1F5EB161C9B01141_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* SqlDateTime__ctor_m90301DA22BE353FE15A11AB194B07D12652AABAC_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* SqlDateTime_get_DayTicks_m75DB01D0E6B95AB21C9C07756DA966223AC68396_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* SqlDateTime_get_TimeTicks_m653A467CA66F037A012E60BA69696ACEFD366936_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* SqlDateTime_get_Value_mDF93B79BDCDEBC53B67611B9426399F69BDFDDE5_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeType* AccessViolationException_t2359EDFDD20FE77D56A496DB4F6854A3D2DC4190_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* NullReferenceException_tBDE63A6D24569B964908408389070C6A9F5005BB_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* OutOfMemoryException_tE6DC2F937EC4A8699271D5151C4DF83BDE99EE7F_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* SecurityException_t025CB4C23107E67E07CF085826B40EDE72F8165C_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* SqlBoolean_tAD22108BE5F656A5AAFE19B054B2CA56C0AEE1D7_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* SqlDateTime_tFB5902479382E8A61934E274E7BBF3280A3D25B2_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* StackOverflowException_t938C753F2BB15F526FD564CCF52061BBE5BC97C9_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* ThreadAbortException_tCA1833E5D49782387EDF3BDCBDB90597B273F3C4_0_0_0_var;
struct CultureData_tEEFDCF4ECA1BBF6C0C8C94EB3541657245598F9D_marshaled_com;
struct CultureData_tEEFDCF4ECA1BBF6C0C8C94EB3541657245598F9D_marshaled_pinvoke;
struct CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0_marshaled_com;
struct CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0_marshaled_pinvoke;
struct Exception_t_marshaled_com;
struct Exception_t_marshaled_pinvoke;

struct Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C;
struct StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <Module>
struct U3CModuleU3E_t66E744E2558AA35C4499FDDF45FBC6369682A695 
{
};
struct Il2CppArrayBounds;

// System.Globalization.CultureInfo
struct CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0  : public RuntimeObject
{
	// System.Boolean System.Globalization.CultureInfo::m_isReadOnly
	bool ___m_isReadOnly_3;
	// System.Int32 System.Globalization.CultureInfo::cultureID
	int32_t ___cultureID_4;
	// System.Int32 System.Globalization.CultureInfo::parent_lcid
	int32_t ___parent_lcid_5;
	// System.Int32 System.Globalization.CultureInfo::datetime_index
	int32_t ___datetime_index_6;
	// System.Int32 System.Globalization.CultureInfo::number_index
	int32_t ___number_index_7;
	// System.Int32 System.Globalization.CultureInfo::default_calendar_type
	int32_t ___default_calendar_type_8;
	// System.Boolean System.Globalization.CultureInfo::m_useUserOverride
	bool ___m_useUserOverride_9;
	// System.Globalization.NumberFormatInfo modreq(System.Runtime.CompilerServices.IsVolatile) System.Globalization.CultureInfo::numInfo
	NumberFormatInfo_t8E26808B202927FEBF9064FCFEEA4D6E076E6472* ___numInfo_10;
	// System.Globalization.DateTimeFormatInfo modreq(System.Runtime.CompilerServices.IsVolatile) System.Globalization.CultureInfo::dateTimeInfo
	DateTimeFormatInfo_t0457520F9FA7B5C8EAAEB3AD50413B6AEEB7458A* ___dateTimeInfo_11;
	// System.Globalization.TextInfo modreq(System.Runtime.CompilerServices.IsVolatile) System.Globalization.CultureInfo::textInfo
	TextInfo_tD3BAFCFD77418851E7D5CB8D2588F47019E414B4* ___textInfo_12;
	// System.String System.Globalization.CultureInfo::m_name
	String_t* ___m_name_13;
	// System.String System.Globalization.CultureInfo::englishname
	String_t* ___englishname_14;
	// System.String System.Globalization.CultureInfo::nativename
	String_t* ___nativename_15;
	// System.String System.Globalization.CultureInfo::iso3lang
	String_t* ___iso3lang_16;
	// System.String System.Globalization.CultureInfo::iso2lang
	String_t* ___iso2lang_17;
	// System.String System.Globalization.CultureInfo::win3lang
	String_t* ___win3lang_18;
	// System.String System.Globalization.CultureInfo::territory
	String_t* ___territory_19;
	// System.String[] System.Globalization.CultureInfo::native_calendar_names
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___native_calendar_names_20;
	// System.Globalization.CompareInfo modreq(System.Runtime.CompilerServices.IsVolatile) System.Globalization.CultureInfo::compareInfo
	CompareInfo_t1B1A6AC3486B570C76ABA52149C9BD4CD82F9E57* ___compareInfo_21;
	// System.Void* System.Globalization.CultureInfo::textinfo_data
	void* ___textinfo_data_22;
	// System.Int32 System.Globalization.CultureInfo::m_dataItem
	int32_t ___m_dataItem_23;
	// System.Globalization.Calendar System.Globalization.CultureInfo::calendar
	Calendar_t0A117CC7532A54C17188C2EFEA1F79DB20DF3A3B* ___calendar_24;
	// System.Globalization.CultureInfo System.Globalization.CultureInfo::parent_culture
	CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0* ___parent_culture_25;
	// System.Boolean System.Globalization.CultureInfo::constructed
	bool ___constructed_26;
	// System.Byte[] System.Globalization.CultureInfo::cached_serialized_form
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___cached_serialized_form_27;
	// System.Globalization.CultureData System.Globalization.CultureInfo::m_cultureData
	CultureData_tEEFDCF4ECA1BBF6C0C8C94EB3541657245598F9D* ___m_cultureData_28;
	// System.Boolean System.Globalization.CultureInfo::m_isInherited
	bool ___m_isInherited_29;
};

struct CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0_StaticFields
{
	// System.Globalization.CultureInfo modreq(System.Runtime.CompilerServices.IsVolatile) System.Globalization.CultureInfo::invariant_culture_info
	CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0* ___invariant_culture_info_0;
	// System.Object System.Globalization.CultureInfo::shared_table_lock
	RuntimeObject* ___shared_table_lock_1;
	// System.Globalization.CultureInfo System.Globalization.CultureInfo::default_current_culture
	CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0* ___default_current_culture_2;
	// System.Globalization.CultureInfo modreq(System.Runtime.CompilerServices.IsVolatile) System.Globalization.CultureInfo::s_DefaultThreadCurrentUICulture
	CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0* ___s_DefaultThreadCurrentUICulture_34;
	// System.Globalization.CultureInfo modreq(System.Runtime.CompilerServices.IsVolatile) System.Globalization.CultureInfo::s_DefaultThreadCurrentCulture
	CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0* ___s_DefaultThreadCurrentCulture_35;
	// System.Collections.Generic.Dictionary`2<System.Int32,System.Globalization.CultureInfo> System.Globalization.CultureInfo::shared_by_number
	Dictionary_2_t9FA6D82CAFC18769F7515BB51D1C56DAE09381C3* ___shared_by_number_36;
	// System.Collections.Generic.Dictionary`2<System.String,System.Globalization.CultureInfo> System.Globalization.CultureInfo::shared_by_name
	Dictionary_2_tE1603CE612C16451D1E56FF4D4859D4FE4087C28* ___shared_by_name_37;
	// System.Globalization.CultureInfo System.Globalization.CultureInfo::s_UserPreferredCultureInfoInAppX
	CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0* ___s_UserPreferredCultureInfoInAppX_38;
	// System.Boolean System.Globalization.CultureInfo::IsTaiwanSku
	bool ___IsTaiwanSku_39;
};
// Native definition for P/Invoke marshalling of System.Globalization.CultureInfo
struct CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0_marshaled_pinvoke
{
	int32_t ___m_isReadOnly_3;
	int32_t ___cultureID_4;
	int32_t ___parent_lcid_5;
	int32_t ___datetime_index_6;
	int32_t ___number_index_7;
	int32_t ___default_calendar_type_8;
	int32_t ___m_useUserOverride_9;
	NumberFormatInfo_t8E26808B202927FEBF9064FCFEEA4D6E076E6472* ___numInfo_10;
	DateTimeFormatInfo_t0457520F9FA7B5C8EAAEB3AD50413B6AEEB7458A* ___dateTimeInfo_11;
	TextInfo_tD3BAFCFD77418851E7D5CB8D2588F47019E414B4* ___textInfo_12;
	char* ___m_name_13;
	char* ___englishname_14;
	char* ___nativename_15;
	char* ___iso3lang_16;
	char* ___iso2lang_17;
	char* ___win3lang_18;
	char* ___territory_19;
	char** ___native_calendar_names_20;
	CompareInfo_t1B1A6AC3486B570C76ABA52149C9BD4CD82F9E57* ___compareInfo_21;
	void* ___textinfo_data_22;
	int32_t ___m_dataItem_23;
	Calendar_t0A117CC7532A54C17188C2EFEA1F79DB20DF3A3B* ___calendar_24;
	CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0_marshaled_pinvoke* ___parent_culture_25;
	int32_t ___constructed_26;
	Il2CppSafeArray/*NONE*/* ___cached_serialized_form_27;
	CultureData_tEEFDCF4ECA1BBF6C0C8C94EB3541657245598F9D_marshaled_pinvoke* ___m_cultureData_28;
	int32_t ___m_isInherited_29;
};
// Native definition for COM marshalling of System.Globalization.CultureInfo
struct CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0_marshaled_com
{
	int32_t ___m_isReadOnly_3;
	int32_t ___cultureID_4;
	int32_t ___parent_lcid_5;
	int32_t ___datetime_index_6;
	int32_t ___number_index_7;
	int32_t ___default_calendar_type_8;
	int32_t ___m_useUserOverride_9;
	NumberFormatInfo_t8E26808B202927FEBF9064FCFEEA4D6E076E6472* ___numInfo_10;
	DateTimeFormatInfo_t0457520F9FA7B5C8EAAEB3AD50413B6AEEB7458A* ___dateTimeInfo_11;
	TextInfo_tD3BAFCFD77418851E7D5CB8D2588F47019E414B4* ___textInfo_12;
	Il2CppChar* ___m_name_13;
	Il2CppChar* ___englishname_14;
	Il2CppChar* ___nativename_15;
	Il2CppChar* ___iso3lang_16;
	Il2CppChar* ___iso2lang_17;
	Il2CppChar* ___win3lang_18;
	Il2CppChar* ___territory_19;
	Il2CppChar** ___native_calendar_names_20;
	CompareInfo_t1B1A6AC3486B570C76ABA52149C9BD4CD82F9E57* ___compareInfo_21;
	void* ___textinfo_data_22;
	int32_t ___m_dataItem_23;
	Calendar_t0A117CC7532A54C17188C2EFEA1F79DB20DF3A3B* ___calendar_24;
	CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0_marshaled_com* ___parent_culture_25;
	int32_t ___constructed_26;
	Il2CppSafeArray/*NONE*/* ___cached_serialized_form_27;
	CultureData_tEEFDCF4ECA1BBF6C0C8C94EB3541657245598F9D_marshaled_com* ___m_cultureData_28;
	int32_t ___m_isInherited_29;
};

// System.Diagnostics.Tracing.EventSource
struct EventSource_tA86759A1E6F272632C299AAC181C0A67E5C52F25  : public RuntimeObject
{
	// System.String System.Diagnostics.Tracing.EventSource::<Name>k__BackingField
	String_t* ___U3CNameU3Ek__BackingField_0;
};

// System.Reflection.MemberInfo
struct MemberInfo_t  : public RuntimeObject
{
};

// System.Data.SqlTypes.SQLResource
struct SQLResource_t27E5E08A5D2E2656605F1733A3A25C38097D51D5  : public RuntimeObject
{
};

// SR
struct SR_t6A32C805D5F7527751DF149FEBF5B3A8927C73D6  : public RuntimeObject
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

// System.Xml.XmlQualifiedName
struct XmlQualifiedName_t2794880B373257E4108CC3F36D7373A343ACC5B9  : public RuntimeObject
{
	// System.String System.Xml.XmlQualifiedName::name
	String_t* ___name_1;
	// System.String System.Xml.XmlQualifiedName::ns
	String_t* ___ns_2;
	// System.Int32 System.Xml.XmlQualifiedName::hash
	int32_t ___hash_3;
};

struct XmlQualifiedName_t2794880B373257E4108CC3F36D7373A343ACC5B9_StaticFields
{
	// System.Xml.XmlQualifiedName/HashCodeOfStringDelegate System.Xml.XmlQualifiedName::hashCodeDelegate
	HashCodeOfStringDelegate_t25F1FA9B737C4313ED341BA7AAB31694DC3669DA* ___hashCodeDelegate_0;
	// System.Xml.XmlQualifiedName System.Xml.XmlQualifiedName::Empty
	XmlQualifiedName_t2794880B373257E4108CC3F36D7373A343ACC5B9* ___Empty_4;
};

// System.Xml.XmlReader
struct XmlReader_t4C709DEF5F01606ECB60B638F1BD6F6E0A9116FD  : public RuntimeObject
{
};

struct XmlReader_t4C709DEF5F01606ECB60B638F1BD6F6E0A9116FD_StaticFields
{
	// System.UInt32 System.Xml.XmlReader::IsTextualNodeBitmap
	uint32_t ___IsTextualNodeBitmap_0;
	// System.UInt32 System.Xml.XmlReader::CanReadContentAsBitmap
	uint32_t ___CanReadContentAsBitmap_1;
	// System.UInt32 System.Xml.XmlReader::HasValueBitmap
	uint32_t ___HasValueBitmap_2;
};

// System.Xml.Schema.XmlSchemaObject
struct XmlSchemaObject_t82CCD87AADB4BEF4E9DFE4C501F09EDA372AA19D  : public RuntimeObject
{
};

// System.Xml.Schema.XmlSchemaSet
struct XmlSchemaSet_t048A12CE7D00EF330EF32A388B69A240899F88D1  : public RuntimeObject
{
	// System.Xml.XmlNameTable System.Xml.Schema.XmlSchemaSet::nameTable
	XmlNameTable_tBDBAACFF3DB40A8E6AF3BDC11F0FF166CF11ABB8* ___nameTable_0;
	// System.Collections.SortedList System.Xml.Schema.XmlSchemaSet::schemas
	SortedList_t847331629BA06B518F1B5203BD22B59746EDDBF3* ___schemas_1;
	// System.Xml.Schema.ValidationEventHandler System.Xml.Schema.XmlSchemaSet::internalEventHandler
	ValidationEventHandler_t400B20AD482B62613818392D3E5588426332560A* ___internalEventHandler_2;
	// System.Xml.Schema.ValidationEventHandler System.Xml.Schema.XmlSchemaSet::eventHandler
	ValidationEventHandler_t400B20AD482B62613818392D3E5588426332560A* ___eventHandler_3;
	// System.Collections.Hashtable System.Xml.Schema.XmlSchemaSet::schemaLocations
	Hashtable_tEFC3B6496E6747787D8BB761B51F2AE3A8CFFE2D* ___schemaLocations_4;
	// System.Collections.Hashtable System.Xml.Schema.XmlSchemaSet::chameleonSchemas
	Hashtable_tEFC3B6496E6747787D8BB761B51F2AE3A8CFFE2D* ___chameleonSchemas_5;
	// System.Collections.Hashtable System.Xml.Schema.XmlSchemaSet::targetNamespaces
	Hashtable_tEFC3B6496E6747787D8BB761B51F2AE3A8CFFE2D* ___targetNamespaces_6;
	// System.Boolean System.Xml.Schema.XmlSchemaSet::compileAll
	bool ___compileAll_7;
	// System.Xml.Schema.SchemaInfo System.Xml.Schema.XmlSchemaSet::cachedCompiledInfo
	SchemaInfo_t42F4B1099B63BCF2D3BBF7F35A79AF6B90B0927E* ___cachedCompiledInfo_8;
	// System.Xml.XmlReaderSettings System.Xml.Schema.XmlSchemaSet::readerSettings
	XmlReaderSettings_t8D51BA3ED2A013EE1F44525C9861326CAFB44AEA* ___readerSettings_9;
	// System.Xml.Schema.XmlSchemaCompilationSettings System.Xml.Schema.XmlSchemaSet::compilationSettings
	XmlSchemaCompilationSettings_tAD528503343C490A9030FEF019E313661390249C* ___compilationSettings_10;
};

// System.Xml.XmlWriter
struct XmlWriter_tCBC8D0C4891828A0A384C68D0414337F20E1A17F  : public RuntimeObject
{
};

// System.Boolean
struct Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22 
{
	// System.Boolean System.Boolean::m_value
	bool ___m_value_0;
};

struct Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_StaticFields
{
	// System.String System.Boolean::TrueString
	String_t* ___TrueString_5;
	// System.String System.Boolean::FalseString
	String_t* ___FalseString_6;
};

// System.Byte
struct Byte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3 
{
	// System.Byte System.Byte::m_value
	uint8_t ___m_value_0;
};

// System.Data.DataCommonEventSource
struct DataCommonEventSource_tC3BB57E78CED1A7EFBCC8F852266121F4641CBFE  : public EventSource_tA86759A1E6F272632C299AAC181C0A67E5C52F25
{
};

struct DataCommonEventSource_tC3BB57E78CED1A7EFBCC8F852266121F4641CBFE_StaticFields
{
	// System.Data.DataCommonEventSource System.Data.DataCommonEventSource::Log
	DataCommonEventSource_tC3BB57E78CED1A7EFBCC8F852266121F4641CBFE* ___Log_1;
	// System.Int64 System.Data.DataCommonEventSource::s_nextScopeId
	int64_t ___s_nextScopeId_2;
};

// System.DateTime
struct DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D 
{
	// System.UInt64 System.DateTime::_dateData
	uint64_t ____dateData_46;
};

struct DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D_StaticFields
{
	// System.Int32[] System.DateTime::s_daysToMonth365
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___s_daysToMonth365_30;
	// System.Int32[] System.DateTime::s_daysToMonth366
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___s_daysToMonth366_31;
	// System.DateTime System.DateTime::MinValue
	DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D ___MinValue_32;
	// System.DateTime System.DateTime::MaxValue
	DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D ___MaxValue_33;
	// System.DateTime System.DateTime::UnixEpoch
	DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D ___UnixEpoch_34;
};

// System.Double
struct Double_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F 
{
	// System.Double System.Double::m_value
	double ___m_value_0;
};

// System.Int32
struct Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C 
{
	// System.Int32 System.Int32::m_value
	int32_t ___m_value_0;
};

// System.Int64
struct Int64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3 
{
	// System.Int64 System.Int64::m_value
	int64_t ___m_value_0;
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

// System.Data.SqlTypes.SqlBoolean
struct SqlBoolean_tAD22108BE5F656A5AAFE19B054B2CA56C0AEE1D7 
{
	// System.Byte System.Data.SqlTypes.SqlBoolean::m_value
	uint8_t ___m_value_0;
};

struct SqlBoolean_tAD22108BE5F656A5AAFE19B054B2CA56C0AEE1D7_StaticFields
{
	// System.Data.SqlTypes.SqlBoolean System.Data.SqlTypes.SqlBoolean::True
	SqlBoolean_tAD22108BE5F656A5AAFE19B054B2CA56C0AEE1D7 ___True_1;
	// System.Data.SqlTypes.SqlBoolean System.Data.SqlTypes.SqlBoolean::False
	SqlBoolean_tAD22108BE5F656A5AAFE19B054B2CA56C0AEE1D7 ___False_2;
	// System.Data.SqlTypes.SqlBoolean System.Data.SqlTypes.SqlBoolean::Null
	SqlBoolean_tAD22108BE5F656A5AAFE19B054B2CA56C0AEE1D7 ___Null_3;
	// System.Data.SqlTypes.SqlBoolean System.Data.SqlTypes.SqlBoolean::Zero
	SqlBoolean_tAD22108BE5F656A5AAFE19B054B2CA56C0AEE1D7 ___Zero_4;
	// System.Data.SqlTypes.SqlBoolean System.Data.SqlTypes.SqlBoolean::One
	SqlBoolean_tAD22108BE5F656A5AAFE19B054B2CA56C0AEE1D7 ___One_5;
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

// System.TimeSpan
struct TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A 
{
	// System.Int64 System.TimeSpan::_ticks
	int64_t ____ticks_22;
};

struct TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A_StaticFields
{
	// System.TimeSpan System.TimeSpan::Zero
	TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A ___Zero_19;
	// System.TimeSpan System.TimeSpan::MaxValue
	TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A ___MaxValue_20;
	// System.TimeSpan System.TimeSpan::MinValue
	TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A ___MinValue_21;
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

// System.Xml.Schema.XmlSchema
struct XmlSchema_t5C9506D00418BF5FD524254D0C6C405C620C941D  : public XmlSchemaObject_t82CCD87AADB4BEF4E9DFE4C501F09EDA372AA19D
{
	// System.String System.Xml.Schema.XmlSchema::id
	String_t* ___id_0;
};

struct XmlSchema_t5C9506D00418BF5FD524254D0C6C405C620C941D_StaticFields
{
	// System.Int32 System.Xml.Schema.XmlSchema::globalIdCounter
	int32_t ___globalIdCounter_1;
};

// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=52
#pragma pack(push, tp, 1)
struct __StaticArrayInitTypeSizeU3D52_tED95E9726E6FE716D48863E9A8521D5525AEE99C 
{
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t __StaticArrayInitTypeSizeU3D52_tED95E9726E6FE716D48863E9A8521D5525AEE99C__padding[52];
	};
};
#pragma pack(pop, tp)

// <PrivateImplementationDetails>
struct U3CPrivateImplementationDetailsU3E_t7A9A2AD29BEDCB07843BEF77FA3BA6C06C48D73C  : public RuntimeObject
{
};

struct U3CPrivateImplementationDetailsU3E_t7A9A2AD29BEDCB07843BEF77FA3BA6C06C48D73C_StaticFields
{
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=52 <PrivateImplementationDetails>::5857EE4CE98BFABBD62B385C1098507DD0052FF3951043AAD6A1DABD495F18AA
	__StaticArrayInitTypeSizeU3D52_tED95E9726E6FE716D48863E9A8521D5525AEE99C ___5857EE4CE98BFABBD62B385C1098507DD0052FF3951043AAD6A1DABD495F18AA_0;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=52 <PrivateImplementationDetails>::FADB218011E7702BB9575D0C32A685DA10B5C72EB809BD9A955DB1C76E4D8315
	__StaticArrayInitTypeSizeU3D52_tED95E9726E6FE716D48863E9A8521D5525AEE99C ___FADB218011E7702BB9575D0C32A685DA10B5C72EB809BD9A955DB1C76E4D8315_1;
};

// System.Data.Common.ADP
struct ADP_t2C39CD1D5CEFC1B88FF6F7C7AD1916F0FD538CC0  : public RuntimeObject
{
};

struct ADP_t2C39CD1D5CEFC1B88FF6F7C7AD1916F0FD538CC0_StaticFields
{
	// System.Type System.Data.Common.ADP::s_stackOverflowType
	Type_t* ___s_stackOverflowType_0;
	// System.Type System.Data.Common.ADP::s_outOfMemoryType
	Type_t* ___s_outOfMemoryType_1;
	// System.Type System.Data.Common.ADP::s_threadAbortType
	Type_t* ___s_threadAbortType_2;
	// System.Type System.Data.Common.ADP::s_nullReferenceType
	Type_t* ___s_nullReferenceType_3;
	// System.Type System.Data.Common.ADP::s_accessViolationType
	Type_t* ___s_accessViolationType_4;
	// System.Type System.Data.Common.ADP::s_securityType
	Type_t* ___s_securityType_5;
	// System.String System.Data.Common.ADP::StrEmpty
	String_t* ___StrEmpty_6;
	// System.String[] System.Data.Common.ADP::AzureSqlServerEndpoints
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___AzureSqlServerEndpoints_7;
	// System.IntPtr System.Data.Common.ADP::PtrZero
	intptr_t ___PtrZero_8;
	// System.Int32 System.Data.Common.ADP::PtrSize
	int32_t ___PtrSize_9;
};

// System.Exception
struct Exception_t  : public RuntimeObject
{
	// System.String System.Exception::_className
	String_t* ____className_1;
	// System.String System.Exception::_message
	String_t* ____message_2;
	// System.Collections.IDictionary System.Exception::_data
	RuntimeObject* ____data_3;
	// System.Exception System.Exception::_innerException
	Exception_t* ____innerException_4;
	// System.String System.Exception::_helpURL
	String_t* ____helpURL_5;
	// System.Object System.Exception::_stackTrace
	RuntimeObject* ____stackTrace_6;
	// System.String System.Exception::_stackTraceString
	String_t* ____stackTraceString_7;
	// System.String System.Exception::_remoteStackTraceString
	String_t* ____remoteStackTraceString_8;
	// System.Int32 System.Exception::_remoteStackIndex
	int32_t ____remoteStackIndex_9;
	// System.Object System.Exception::_dynamicMethods
	RuntimeObject* ____dynamicMethods_10;
	// System.Int32 System.Exception::_HResult
	int32_t ____HResult_11;
	// System.String System.Exception::_source
	String_t* ____source_12;
	// System.Runtime.Serialization.SafeSerializationManager System.Exception::_safeSerializationManager
	SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6* ____safeSerializationManager_13;
	// System.Diagnostics.StackTrace[] System.Exception::captured_traces
	StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF* ___captured_traces_14;
	// System.IntPtr[] System.Exception::native_trace_ips
	IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832* ___native_trace_ips_15;
	// System.Int32 System.Exception::caught_in_unmanaged
	int32_t ___caught_in_unmanaged_16;
};

struct Exception_t_StaticFields
{
	// System.Object System.Exception::s_EDILock
	RuntimeObject* ___s_EDILock_0;
};
// Native definition for P/Invoke marshalling of System.Exception
struct Exception_t_marshaled_pinvoke
{
	char* ____className_1;
	char* ____message_2;
	RuntimeObject* ____data_3;
	Exception_t_marshaled_pinvoke* ____innerException_4;
	char* ____helpURL_5;
	Il2CppIUnknown* ____stackTrace_6;
	char* ____stackTraceString_7;
	char* ____remoteStackTraceString_8;
	int32_t ____remoteStackIndex_9;
	Il2CppIUnknown* ____dynamicMethods_10;
	int32_t ____HResult_11;
	char* ____source_12;
	SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6* ____safeSerializationManager_13;
	StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF* ___captured_traces_14;
	Il2CppSafeArray/*NONE*/* ___native_trace_ips_15;
	int32_t ___caught_in_unmanaged_16;
};
// Native definition for COM marshalling of System.Exception
struct Exception_t_marshaled_com
{
	Il2CppChar* ____className_1;
	Il2CppChar* ____message_2;
	RuntimeObject* ____data_3;
	Exception_t_marshaled_com* ____innerException_4;
	Il2CppChar* ____helpURL_5;
	Il2CppIUnknown* ____stackTrace_6;
	Il2CppChar* ____stackTraceString_7;
	Il2CppChar* ____remoteStackTraceString_8;
	int32_t ____remoteStackIndex_9;
	Il2CppIUnknown* ____dynamicMethods_10;
	int32_t ____HResult_11;
	Il2CppChar* ____source_12;
	SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6* ____safeSerializationManager_13;
	StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF* ___captured_traces_14;
	Il2CppSafeArray/*NONE*/* ___native_trace_ips_15;
	int32_t ___caught_in_unmanaged_16;
};

// System.RuntimeFieldHandle
struct RuntimeFieldHandle_t6E4C45B6D2EA12FC99185805A7E77527899B25C5 
{
	// System.IntPtr System.RuntimeFieldHandle::value
	intptr_t ___value_0;
};

// System.RuntimeTypeHandle
struct RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B 
{
	// System.IntPtr System.RuntimeTypeHandle::value
	intptr_t ___value_0;
};

// System.Data.SqlTypes.SqlDateTime
struct SqlDateTime_tFB5902479382E8A61934E274E7BBF3280A3D25B2 
{
	// System.Boolean System.Data.SqlTypes.SqlDateTime::m_fNotNull
	bool ___m_fNotNull_0;
	// System.Int32 System.Data.SqlTypes.SqlDateTime::m_day
	int32_t ___m_day_1;
	// System.Int32 System.Data.SqlTypes.SqlDateTime::m_time
	int32_t ___m_time_2;
};

struct SqlDateTime_tFB5902479382E8A61934E274E7BBF3280A3D25B2_StaticFields
{
	// System.Double System.Data.SqlTypes.SqlDateTime::s_SQLTicksPerMillisecond
	double ___s_SQLTicksPerMillisecond_3;
	// System.Int32 System.Data.SqlTypes.SqlDateTime::SQLTicksPerSecond
	int32_t ___SQLTicksPerSecond_4;
	// System.Int32 System.Data.SqlTypes.SqlDateTime::SQLTicksPerMinute
	int32_t ___SQLTicksPerMinute_5;
	// System.Int32 System.Data.SqlTypes.SqlDateTime::SQLTicksPerHour
	int32_t ___SQLTicksPerHour_6;
	// System.Int32 System.Data.SqlTypes.SqlDateTime::s_SQLTicksPerDay
	int32_t ___s_SQLTicksPerDay_7;
	// System.Int64 System.Data.SqlTypes.SqlDateTime::s_ticksPerSecond
	int64_t ___s_ticksPerSecond_8;
	// System.DateTime System.Data.SqlTypes.SqlDateTime::s_SQLBaseDate
	DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D ___s_SQLBaseDate_9;
	// System.Int64 System.Data.SqlTypes.SqlDateTime::s_SQLBaseDateTicks
	int64_t ___s_SQLBaseDateTicks_10;
	// System.Int32 System.Data.SqlTypes.SqlDateTime::s_minYear
	int32_t ___s_minYear_11;
	// System.Int32 System.Data.SqlTypes.SqlDateTime::s_maxYear
	int32_t ___s_maxYear_12;
	// System.Int32 System.Data.SqlTypes.SqlDateTime::s_minDay
	int32_t ___s_minDay_13;
	// System.Int32 System.Data.SqlTypes.SqlDateTime::s_maxDay
	int32_t ___s_maxDay_14;
	// System.Int32 System.Data.SqlTypes.SqlDateTime::s_minTime
	int32_t ___s_minTime_15;
	// System.Int32 System.Data.SqlTypes.SqlDateTime::s_maxTime
	int32_t ___s_maxTime_16;
	// System.Int32 System.Data.SqlTypes.SqlDateTime::s_dayBase
	int32_t ___s_dayBase_17;
	// System.Int32[] System.Data.SqlTypes.SqlDateTime::s_daysToMonth365
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___s_daysToMonth365_18;
	// System.Int32[] System.Data.SqlTypes.SqlDateTime::s_daysToMonth366
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___s_daysToMonth366_19;
	// System.DateTime System.Data.SqlTypes.SqlDateTime::s_minDateTime
	DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D ___s_minDateTime_20;
	// System.DateTime System.Data.SqlTypes.SqlDateTime::s_maxDateTime
	DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D ___s_maxDateTime_21;
	// System.TimeSpan System.Data.SqlTypes.SqlDateTime::s_minTimeSpan
	TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A ___s_minTimeSpan_22;
	// System.TimeSpan System.Data.SqlTypes.SqlDateTime::s_maxTimeSpan
	TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A ___s_maxTimeSpan_23;
	// System.String System.Data.SqlTypes.SqlDateTime::s_ISO8601_DateTimeFormat
	String_t* ___s_ISO8601_DateTimeFormat_24;
	// System.String[] System.Data.SqlTypes.SqlDateTime::s_dateTimeFormats
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___s_dateTimeFormats_25;
	// System.Data.SqlTypes.SqlDateTime System.Data.SqlTypes.SqlDateTime::MinValue
	SqlDateTime_tFB5902479382E8A61934E274E7BBF3280A3D25B2 ___MinValue_26;
	// System.Data.SqlTypes.SqlDateTime System.Data.SqlTypes.SqlDateTime::MaxValue
	SqlDateTime_tFB5902479382E8A61934E274E7BBF3280A3D25B2 ___MaxValue_27;
	// System.Data.SqlTypes.SqlDateTime System.Data.SqlTypes.SqlDateTime::Null
	SqlDateTime_tFB5902479382E8A61934E274E7BBF3280A3D25B2 ___Null_28;
};
// Native definition for P/Invoke marshalling of System.Data.SqlTypes.SqlDateTime
struct SqlDateTime_tFB5902479382E8A61934E274E7BBF3280A3D25B2_marshaled_pinvoke
{
	int32_t ___m_fNotNull_0;
	int32_t ___m_day_1;
	int32_t ___m_time_2;
};
// Native definition for COM marshalling of System.Data.SqlTypes.SqlDateTime
struct SqlDateTime_tFB5902479382E8A61934E274E7BBF3280A3D25B2_marshaled_com
{
	int32_t ___m_fNotNull_0;
	int32_t ___m_day_1;
	int32_t ___m_time_2;
};

// System.SystemException
struct SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295  : public Exception_t
{
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

// System.ArgumentException
struct ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263  : public SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295
{
	// System.String System.ArgumentException::_paramName
	String_t* ____paramName_18;
};

// System.ArithmeticException
struct ArithmeticException_t07E77822D0007642BC8959A671E70D1F33C84FEA  : public SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295
{
};

// System.Data.SqlTypes.SqlTypeException
struct SqlTypeException_t93D97B141C16DC7DC601ED2ED8166B0596C4494E  : public SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295
{
};

// System.OverflowException
struct OverflowException_t6F6AD8CACE20C37F701C05B373A215C4802FAB0C  : public ArithmeticException_t07E77822D0007642BC8959A671E70D1F33C84FEA
{
};

// System.Data.SqlTypes.SqlNullValueException
struct SqlNullValueException_t84216F8C86727B62B1C84EFCE7CFC403674ECAD7  : public SqlTypeException_t93D97B141C16DC7DC601ED2ED8166B0596C4494E
{
};
#ifdef __clang__
#pragma clang diagnostic pop
#endif
// System.Int32[]
struct Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C  : public RuntimeArray
{
	ALIGN_FIELD (8) int32_t m_Items[1];

	inline int32_t GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline int32_t* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, int32_t value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline int32_t GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline int32_t* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, int32_t value)
	{
		m_Items[index] = value;
	}
};
// System.String[]
struct StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248  : public RuntimeArray
{
	ALIGN_FIELD (8) String_t* m_Items[1];

	inline String_t* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline String_t** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, String_t* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline String_t* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline String_t** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, String_t* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};


// System.Void System.Data.DataCommonEventSource::Trace<System.Object>(System.String,T0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DataCommonEventSource_Trace_TisRuntimeObject_m0EDE55B17966DCB42AFD9FC6D69AE77D5EBF7E83_gshared (DataCommonEventSource_tC3BB57E78CED1A7EFBCC8F852266121F4641CBFE* __this, String_t* ___format0, RuntimeObject* ___arg01, const RuntimeMethod* method) ;

// System.Globalization.CultureInfo System.Globalization.CultureInfo::get_InvariantCulture()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0* CultureInfo_get_InvariantCulture_mD1E96DC845E34B10F78CB744B0CB5D7D63CEB1E6 (const RuntimeMethod* method) ;
// System.String System.String::Format(System.IFormatProvider,System.String,System.Object,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Format_m44BF8BF44DC9B67D6CF265A1A2703A6D743F5C56 (RuntimeObject* ___provider0, String_t* ___format1, RuntimeObject* ___arg02, RuntimeObject* ___arg13, const RuntimeMethod* method) ;
// System.Void System.Diagnostics.Tracing.EventSource::WriteEvent(System.Int32,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EventSource_WriteEvent_m0A746CC3F239957C62A390FE12CAEE5399C51FDE (EventSource_tA86759A1E6F272632C299AAC181C0A67E5C52F25* __this, int32_t ___eventId0, String_t* ___arg11, const RuntimeMethod* method) ;
// System.Void System.Diagnostics.Tracing.EventSource::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EventSource__ctor_mDF751901186604B47C80B7DCC8DCB624FE5664BC (EventSource_tA86759A1E6F272632C299AAC181C0A67E5C52F25* __this, const RuntimeMethod* method) ;
// System.Void System.Data.DataCommonEventSource::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DataCommonEventSource__ctor_m25B2FC680B88CA6791B3FE34B60E4EB02F79E814 (DataCommonEventSource_tC3BB57E78CED1A7EFBCC8F852266121F4641CBFE* __this, const RuntimeMethod* method) ;
// System.Void System.Data.SqlTypes.SqlBoolean::.ctor(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SqlBoolean__ctor_mB96F7558946F0B492BCC878FA3C5F52EBE300900 (SqlBoolean_tAD22108BE5F656A5AAFE19B054B2CA56C0AEE1D7* __this, bool ___value0, const RuntimeMethod* method) ;
// System.Void System.Data.SqlTypes.SqlBoolean::.ctor(System.Int32,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SqlBoolean__ctor_m8CF5274440F81052315F7112440E1AF96CFB6C48 (SqlBoolean_tAD22108BE5F656A5AAFE19B054B2CA56C0AEE1D7* __this, int32_t ___value0, bool ___fNull1, const RuntimeMethod* method) ;
// System.Void System.Data.SqlTypes.SqlBoolean::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SqlBoolean__ctor_m764B67E4D8AF0EE2E199765A9BB6AC0207513571 (SqlBoolean_tAD22108BE5F656A5AAFE19B054B2CA56C0AEE1D7* __this, int32_t ___value0, const RuntimeMethod* method) ;
// System.Boolean System.Data.SqlTypes.SqlBoolean::get_IsNull()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool SqlBoolean_get_IsNull_mA4ECA927DBC05F2D362301DA216CAEF9CE7BCCBB (SqlBoolean_tAD22108BE5F656A5AAFE19B054B2CA56C0AEE1D7* __this, const RuntimeMethod* method) ;
// System.Void System.Data.SqlTypes.SqlNullValueException::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SqlNullValueException__ctor_m069C95E1867258A1B57BD8719252132DFB6DE222 (SqlNullValueException_t84216F8C86727B62B1C84EFCE7CFC403674ECAD7* __this, const RuntimeMethod* method) ;
// System.Boolean System.Data.SqlTypes.SqlBoolean::get_Value()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool SqlBoolean_get_Value_m26D2659D06D56FFBF158051EB3726BAB693A7D97 (SqlBoolean_tAD22108BE5F656A5AAFE19B054B2CA56C0AEE1D7* __this, const RuntimeMethod* method) ;
// System.Boolean System.Data.SqlTypes.SqlBoolean::get_IsTrue()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool SqlBoolean_get_IsTrue_mD2491FECA6D8BEC7F00C0071C6299187B28B52D4 (SqlBoolean_tAD22108BE5F656A5AAFE19B054B2CA56C0AEE1D7* __this, const RuntimeMethod* method) ;
// System.Byte System.Data.SqlTypes.SqlBoolean::get_ByteValue()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint8_t SqlBoolean_get_ByteValue_m0DAA32AF074F4F826BE41D06F219CE3087DC4C81 (SqlBoolean_tAD22108BE5F656A5AAFE19B054B2CA56C0AEE1D7* __this, const RuntimeMethod* method) ;
// System.String System.Boolean::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Boolean_ToString_m6646C8026B1DF381A1EE8CD13549175E9703CC63 (bool* __this, const RuntimeMethod* method) ;
// System.String System.Data.SqlTypes.SQLResource::get_NullString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* SQLResource_get_NullString_m597166B3FD1AB8CE8AD7030876EA0F77472CC1E8 (const RuntimeMethod* method) ;
// System.String System.Data.SqlTypes.SqlBoolean::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* SqlBoolean_ToString_mCE39DD8EC9E279E7BFF34B476F425032DE957572 (SqlBoolean_tAD22108BE5F656A5AAFE19B054B2CA56C0AEE1D7* __this, const RuntimeMethod* method) ;
// System.Int32 System.Data.SqlTypes.SqlBoolean::CompareTo(System.Data.SqlTypes.SqlBoolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t SqlBoolean_CompareTo_mAB4868F894724D6FFEA7678910365C1797973FB5 (SqlBoolean_tAD22108BE5F656A5AAFE19B054B2CA56C0AEE1D7* __this, SqlBoolean_tAD22108BE5F656A5AAFE19B054B2CA56C0AEE1D7 ___value0, const RuntimeMethod* method) ;
// System.Type System.Object::GetType()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t* Object_GetType_mE10A8FC1E57F3DF29972CCBC026C2DC3942263B3 (RuntimeObject* __this, const RuntimeMethod* method) ;
// System.Type System.Type::GetTypeFromHandle(System.RuntimeTypeHandle)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t* Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57 (RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B ___handle0, const RuntimeMethod* method) ;
// System.Exception System.Data.Common.ADP::WrongType(System.Type,System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Exception_t* ADP_WrongType_mCCF6317939800042630DACE6F6CA69C48565B472 (Type_t* ___got0, Type_t* ___expected1, const RuntimeMethod* method) ;
// System.Int32 System.Data.SqlTypes.SqlBoolean::CompareTo(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t SqlBoolean_CompareTo_mD8954B2D5AAF295449721C6FAE8A054DA3EA6D82 (SqlBoolean_tAD22108BE5F656A5AAFE19B054B2CA56C0AEE1D7* __this, RuntimeObject* ___value0, const RuntimeMethod* method) ;
// System.Data.SqlTypes.SqlBoolean System.Data.SqlTypes.SqlBoolean::op_Equality(System.Data.SqlTypes.SqlBoolean,System.Data.SqlTypes.SqlBoolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR SqlBoolean_tAD22108BE5F656A5AAFE19B054B2CA56C0AEE1D7 SqlBoolean_op_Equality_m7061AC1737A529F7DC37561C102345B402558695 (SqlBoolean_tAD22108BE5F656A5AAFE19B054B2CA56C0AEE1D7 ___x0, SqlBoolean_tAD22108BE5F656A5AAFE19B054B2CA56C0AEE1D7 ___y1, const RuntimeMethod* method) ;
// System.Boolean System.Data.SqlTypes.SqlBoolean::Equals(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool SqlBoolean_Equals_m561B9537FA9804DB2EAF73AC786AFA658C83E2D3 (SqlBoolean_tAD22108BE5F656A5AAFE19B054B2CA56C0AEE1D7* __this, RuntimeObject* ___value0, const RuntimeMethod* method) ;
// System.Int32 System.Boolean::GetHashCode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Boolean_GetHashCode_mEDB6904770C962BAF4510E5D24F08083C33900E3 (bool* __this, const RuntimeMethod* method) ;
// System.Int32 System.Data.SqlTypes.SqlBoolean::GetHashCode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t SqlBoolean_GetHashCode_m538B83DEDCA7A4A8AC70EA335A9BC5E9080CD8EC (SqlBoolean_tAD22108BE5F656A5AAFE19B054B2CA56C0AEE1D7* __this, const RuntimeMethod* method) ;
// System.Xml.Schema.XmlSchema System.Data.SqlTypes.SqlBoolean::System.Xml.Serialization.IXmlSerializable.GetSchema()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR XmlSchema_t5C9506D00418BF5FD524254D0C6C405C620C941D* SqlBoolean_System_Xml_Serialization_IXmlSerializable_GetSchema_m58E2B3F1E05E04A8897F8448469808B5F4303695 (SqlBoolean_tAD22108BE5F656A5AAFE19B054B2CA56C0AEE1D7* __this, const RuntimeMethod* method) ;
// System.Boolean System.Xml.XmlConvert::ToBoolean(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool XmlConvert_ToBoolean_mB95C798BD6D849071E6A686CBF85851C25C7006A (String_t* ___s0, const RuntimeMethod* method) ;
// System.Void System.Data.SqlTypes.SqlBoolean::System.Xml.Serialization.IXmlSerializable.ReadXml(System.Xml.XmlReader)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SqlBoolean_System_Xml_Serialization_IXmlSerializable_ReadXml_m8DF928E8A31EB12D893AA37DFFE4CA31E73FDCFA (SqlBoolean_tAD22108BE5F656A5AAFE19B054B2CA56C0AEE1D7* __this, XmlReader_t4C709DEF5F01606ECB60B638F1BD6F6E0A9116FD* ___reader0, const RuntimeMethod* method) ;
// System.Void System.Xml.XmlWriter::WriteAttributeString(System.String,System.String,System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XmlWriter_WriteAttributeString_m9BECE5A394F9A9601AB66932AF0D7EF25E16AE0B (XmlWriter_tCBC8D0C4891828A0A384C68D0414337F20E1A17F* __this, String_t* ___prefix0, String_t* ___localName1, String_t* ___ns2, String_t* ___value3, const RuntimeMethod* method) ;
// System.Void System.Data.SqlTypes.SqlBoolean::System.Xml.Serialization.IXmlSerializable.WriteXml(System.Xml.XmlWriter)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SqlBoolean_System_Xml_Serialization_IXmlSerializable_WriteXml_m0C54CDA6C6982BD0320365DEF95CABB898DE67FE (SqlBoolean_tAD22108BE5F656A5AAFE19B054B2CA56C0AEE1D7* __this, XmlWriter_tCBC8D0C4891828A0A384C68D0414337F20E1A17F* ___writer0, const RuntimeMethod* method) ;
// System.Void System.Xml.XmlQualifiedName::.ctor(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XmlQualifiedName__ctor_m65632114A1726D9FAD0338BC2A8C28BB9D262C7B (XmlQualifiedName_t2794880B373257E4108CC3F36D7373A343ACC5B9* __this, String_t* ___name0, String_t* ___ns1, const RuntimeMethod* method) ;
// System.Void System.Data.SqlTypes.SqlDateTime::.ctor(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SqlDateTime__ctor_m64066729561058739B6C9F62E8115E180E097F11 (SqlDateTime_tFB5902479382E8A61934E274E7BBF3280A3D25B2* __this, bool ___fNull0, const RuntimeMethod* method) ;
// System.String System.Data.SqlTypes.SQLResource::get_DateTimeOverflowMessage()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* SQLResource_get_DateTimeOverflowMessage_mEEEDB21E3930021128D500ECD9DA08CC80FF8299 (const RuntimeMethod* method) ;
// System.Void System.OverflowException::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OverflowException__ctor_m2B99D79236B7B87C0BB6C9AB2E557DECE481C264 (OverflowException_t6F6AD8CACE20C37F701C05B373A215C4802FAB0C* __this, String_t* ___message0, const RuntimeMethod* method) ;
// System.Void System.Data.SqlTypes.SqlDateTime::.ctor(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SqlDateTime__ctor_m90301DA22BE353FE15A11AB194B07D12652AABAC (SqlDateTime_tFB5902479382E8A61934E274E7BBF3280A3D25B2* __this, int32_t ___dayTicks0, int32_t ___timeTicks1, const RuntimeMethod* method) ;
// System.Boolean System.Data.SqlTypes.SqlDateTime::get_IsNull()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool SqlDateTime_get_IsNull_m2B4C4F9196F7F0ED02EDD5110E06764EBED19D14 (SqlDateTime_tFB5902479382E8A61934E274E7BBF3280A3D25B2* __this, const RuntimeMethod* method) ;
// System.Void System.TimeSpan::.ctor(System.Int64)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void TimeSpan__ctor_m061B122FA11D2063FE751C1F1D019DF1C8B10B1F_inline (TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A* __this, int64_t ___ticks0, const RuntimeMethod* method) ;
// System.TimeSpan System.Data.SqlTypes.SqlDateTime::ToTimeSpan(System.Data.SqlTypes.SqlDateTime)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A SqlDateTime_ToTimeSpan_m019418131216BCE556E01F515DF436816EB6DA93 (SqlDateTime_tFB5902479382E8A61934E274E7BBF3280A3D25B2 ___value0, const RuntimeMethod* method) ;
// System.DateTime System.DateTime::Add(System.TimeSpan)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D DateTime_Add_mC882C6BBE75862360A1A0C733B4FFE3210D4B9B1 (DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D* __this, TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A ___value0, const RuntimeMethod* method) ;
// System.Boolean System.TimeSpan::op_LessThan(System.TimeSpan,System.TimeSpan)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TimeSpan_op_LessThan_m91C76FBEB38D80680A92A5FACA3A93810349B0FF (TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A ___t10, TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A ___t21, const RuntimeMethod* method) ;
// System.Boolean System.TimeSpan::op_GreaterThan(System.TimeSpan,System.TimeSpan)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TimeSpan_op_GreaterThan_m346676C36494E3CD2560A604996F88CEC3D845C0 (TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A ___t10, TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A ___t21, const RuntimeMethod* method) ;
// System.Void System.Data.SqlTypes.SqlTypeException::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SqlTypeException__ctor_m31F48828AF14CF370270AC18D8AC5CCB176C3675 (SqlTypeException_t93D97B141C16DC7DC601ED2ED8166B0596C4494E* __this, String_t* ___message0, const RuntimeMethod* method) ;
// System.Int32 System.TimeSpan::get_Days()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t TimeSpan_get_Days_m1317F48F8D9849E161D1CDBEB5CA08344EAAC107 (TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A* __this, const RuntimeMethod* method) ;
// System.Int64 System.TimeSpan::get_Ticks()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int64_t TimeSpan_get_Ticks_mC50131E57621F29FACC53B3241432ABB874FA1B5_inline (TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A* __this, const RuntimeMethod* method) ;
// System.Boolean System.DateTime::op_Equality(System.DateTime,System.DateTime)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool DateTime_op_Equality_m568A6320E27F3F7708C77BF8751925C8775DD921 (DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D ___d10, DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D ___d21, const RuntimeMethod* method) ;
// System.TimeSpan System.DateTime::Subtract(System.DateTime)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A DateTime_Subtract_m4064A98F489219E9C414DF5C03EE041351B4502A (DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D* __this, DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D ___value0, const RuntimeMethod* method) ;
// System.Data.SqlTypes.SqlDateTime System.Data.SqlTypes.SqlDateTime::FromTimeSpan(System.TimeSpan)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR SqlDateTime_tFB5902479382E8A61934E274E7BBF3280A3D25B2 SqlDateTime_FromTimeSpan_m5519F16CE76C7468EC508278EED4E1863C491AC8 (TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A ___value0, const RuntimeMethod* method) ;
// System.DateTime System.Data.SqlTypes.SqlDateTime::ToDateTime(System.Data.SqlTypes.SqlDateTime)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D SqlDateTime_ToDateTime_m3041C978E6E1D35B5FE2AC4FAAB9A73C9863B9B1 (SqlDateTime_tFB5902479382E8A61934E274E7BBF3280A3D25B2 ___value0, const RuntimeMethod* method) ;
// System.DateTime System.Data.SqlTypes.SqlDateTime::get_Value()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D SqlDateTime_get_Value_mDF93B79BDCDEBC53B67611B9426399F69BDFDDE5 (SqlDateTime_tFB5902479382E8A61934E274E7BBF3280A3D25B2* __this, const RuntimeMethod* method) ;
// System.Int32 System.Data.SqlTypes.SqlDateTime::get_DayTicks()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t SqlDateTime_get_DayTicks_m75DB01D0E6B95AB21C9C07756DA966223AC68396 (SqlDateTime_tFB5902479382E8A61934E274E7BBF3280A3D25B2* __this, const RuntimeMethod* method) ;
// System.Int32 System.Data.SqlTypes.SqlDateTime::get_TimeTicks()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t SqlDateTime_get_TimeTicks_m653A467CA66F037A012E60BA69696ACEFD366936 (SqlDateTime_tFB5902479382E8A61934E274E7BBF3280A3D25B2* __this, const RuntimeMethod* method) ;
// System.String System.DateTime::ToString(System.IFormatProvider)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* DateTime_ToString_m66457C11C42C07E2F437A9D899E6E3FB9FD77B50 (DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D* __this, RuntimeObject* ___provider0, const RuntimeMethod* method) ;
// System.String System.Data.SqlTypes.SqlDateTime::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* SqlDateTime_ToString_m23C8FE9641BD64B9BE5D9022F24DBC68739CF8AE (SqlDateTime_tFB5902479382E8A61934E274E7BBF3280A3D25B2* __this, const RuntimeMethod* method) ;
// System.Int32 System.Data.SqlTypes.SqlDateTime::CompareTo(System.Data.SqlTypes.SqlDateTime)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t SqlDateTime_CompareTo_mFC30CA07C33E98986C7B6B91D2C7F02F644F28A3 (SqlDateTime_tFB5902479382E8A61934E274E7BBF3280A3D25B2* __this, SqlDateTime_tFB5902479382E8A61934E274E7BBF3280A3D25B2 ___value0, const RuntimeMethod* method) ;
// System.Int32 System.Data.SqlTypes.SqlDateTime::CompareTo(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t SqlDateTime_CompareTo_m82CED8E48367B756FD2F10929C6230D8F018EF77 (SqlDateTime_tFB5902479382E8A61934E274E7BBF3280A3D25B2* __this, RuntimeObject* ___value0, const RuntimeMethod* method) ;
// System.Data.SqlTypes.SqlBoolean System.Data.SqlTypes.SqlDateTime::op_LessThan(System.Data.SqlTypes.SqlDateTime,System.Data.SqlTypes.SqlDateTime)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR SqlBoolean_tAD22108BE5F656A5AAFE19B054B2CA56C0AEE1D7 SqlDateTime_op_LessThan_mBA24CB38DF87C8DC64F764157557746A410C49A7 (SqlDateTime_tFB5902479382E8A61934E274E7BBF3280A3D25B2 ___x0, SqlDateTime_tFB5902479382E8A61934E274E7BBF3280A3D25B2 ___y1, const RuntimeMethod* method) ;
// System.Boolean System.Data.SqlTypes.SqlBoolean::op_True(System.Data.SqlTypes.SqlBoolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool SqlBoolean_op_True_m5CC9CAC092080E77EB6322BB0CDD656DFD38FF94 (SqlBoolean_tAD22108BE5F656A5AAFE19B054B2CA56C0AEE1D7 ___x0, const RuntimeMethod* method) ;
// System.Data.SqlTypes.SqlBoolean System.Data.SqlTypes.SqlDateTime::op_GreaterThan(System.Data.SqlTypes.SqlDateTime,System.Data.SqlTypes.SqlDateTime)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR SqlBoolean_tAD22108BE5F656A5AAFE19B054B2CA56C0AEE1D7 SqlDateTime_op_GreaterThan_m3599C4B6184D571C1319706F64C34ED32A229D43 (SqlDateTime_tFB5902479382E8A61934E274E7BBF3280A3D25B2 ___x0, SqlDateTime_tFB5902479382E8A61934E274E7BBF3280A3D25B2 ___y1, const RuntimeMethod* method) ;
// System.Data.SqlTypes.SqlBoolean System.Data.SqlTypes.SqlDateTime::op_Equality(System.Data.SqlTypes.SqlDateTime,System.Data.SqlTypes.SqlDateTime)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR SqlBoolean_tAD22108BE5F656A5AAFE19B054B2CA56C0AEE1D7 SqlDateTime_op_Equality_m69832276B8B7F615ABB2E5FC94BD20626F9806A8 (SqlDateTime_tFB5902479382E8A61934E274E7BBF3280A3D25B2 ___x0, SqlDateTime_tFB5902479382E8A61934E274E7BBF3280A3D25B2 ___y1, const RuntimeMethod* method) ;
// System.Boolean System.Data.SqlTypes.SqlDateTime::Equals(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool SqlDateTime_Equals_m9401BFF901122AAD43042D8F4D54DFA26C0D6634 (SqlDateTime_tFB5902479382E8A61934E274E7BBF3280A3D25B2* __this, RuntimeObject* ___value0, const RuntimeMethod* method) ;
// System.Int32 System.DateTime::GetHashCode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t DateTime_GetHashCode_m206A3B9394E6D089311A1A81305A5A1AB30B2D99 (DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D* __this, const RuntimeMethod* method) ;
// System.Int32 System.Data.SqlTypes.SqlDateTime::GetHashCode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t SqlDateTime_GetHashCode_mA64AF3F47A16ABE3388BCADFA4C4AB9B2D34ED8C (SqlDateTime_tFB5902479382E8A61934E274E7BBF3280A3D25B2* __this, const RuntimeMethod* method) ;
// System.Xml.Schema.XmlSchema System.Data.SqlTypes.SqlDateTime::System.Xml.Serialization.IXmlSerializable.GetSchema()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR XmlSchema_t5C9506D00418BF5FD524254D0C6C405C620C941D* SqlDateTime_System_Xml_Serialization_IXmlSerializable_GetSchema_mC4C4D26114D5A0A665F1C3EDF1035C1819E39EB5 (SqlDateTime_tFB5902479382E8A61934E274E7BBF3280A3D25B2* __this, const RuntimeMethod* method) ;
// System.DateTime System.Xml.XmlConvert::ToDateTime(System.String,System.Xml.XmlDateTimeSerializationMode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D XmlConvert_ToDateTime_m658051D16D0072FD3F58E4E6BFE8FB75F4F00A16 (String_t* ___s0, int32_t ___dateTimeOption1, const RuntimeMethod* method) ;
// System.DateTimeKind System.DateTime::get_Kind()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t DateTime_get_Kind_m83D45222D9386873333A178B9AB31AC2B2F2C993 (DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D* __this, const RuntimeMethod* method) ;
// System.String System.Data.SqlTypes.SQLResource::get_TimeZoneSpecifiedMessage()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* SQLResource_get_TimeZoneSpecifiedMessage_m23324A7E1D2337998092F5677B72973A604911A7 (const RuntimeMethod* method) ;
// System.Data.SqlTypes.SqlDateTime System.Data.SqlTypes.SqlDateTime::FromDateTime(System.DateTime)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR SqlDateTime_tFB5902479382E8A61934E274E7BBF3280A3D25B2 SqlDateTime_FromDateTime_m804E9FA80E78F929BDEEE914D3D19532A6EE5618 (DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D ___value0, const RuntimeMethod* method) ;
// System.Void System.Data.SqlTypes.SqlDateTime::System.Xml.Serialization.IXmlSerializable.ReadXml(System.Xml.XmlReader)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SqlDateTime_System_Xml_Serialization_IXmlSerializable_ReadXml_m6F05BF9F400FA1CB4FD51EBC1F5EB161C9B01141 (SqlDateTime_tFB5902479382E8A61934E274E7BBF3280A3D25B2* __this, XmlReader_t4C709DEF5F01606ECB60B638F1BD6F6E0A9116FD* ___reader0, const RuntimeMethod* method) ;
// System.String System.Xml.XmlConvert::ToString(System.DateTime,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* XmlConvert_ToString_mF6401456776BBF2637E1AB3FAA6F4187D6FAFD2D (DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D ___value0, String_t* ___format1, const RuntimeMethod* method) ;
// System.Void System.Data.SqlTypes.SqlDateTime::System.Xml.Serialization.IXmlSerializable.WriteXml(System.Xml.XmlWriter)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SqlDateTime_System_Xml_Serialization_IXmlSerializable_WriteXml_mEDF294D37DAEE8AC569B023A2E43E7ECA1318263 (SqlDateTime_tFB5902479382E8A61934E274E7BBF3280A3D25B2* __this, XmlWriter_tCBC8D0C4891828A0A384C68D0414337F20E1A17F* ___writer0, const RuntimeMethod* method) ;
// System.Void System.DateTime::.ctor(System.Int32,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DateTime__ctor_mA3BF7CE28807F0A02634FD43913FAAFD989CEE88 (DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D* __this, int32_t ___year0, int32_t ___month1, int32_t ___day2, const RuntimeMethod* method) ;
// System.Int64 System.DateTime::get_Ticks()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int64_t DateTime_get_Ticks_mC2CF04ED0EAB425C72C2532FFC5743777F3C93A6 (DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D* __this, const RuntimeMethod* method) ;
// System.Void System.Runtime.CompilerServices.RuntimeHelpers::InitializeArray(System.Array,System.RuntimeFieldHandle)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RuntimeHelpers_InitializeArray_m751372AA3F24FBF6DA9B9D687CBFA2DE436CAB9B (RuntimeArray* ___array0, RuntimeFieldHandle_t6E4C45B6D2EA12FC99185805A7E77527899B25C5 ___fldHandle1, const RuntimeMethod* method) ;
// System.Void System.Data.SqlTypes.SqlTypeException::.ctor(System.String,System.Exception)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SqlTypeException__ctor_m0DB2CB60AB67AC31B9D1A2E2A730793D41FE7240 (SqlTypeException_t93D97B141C16DC7DC601ED2ED8166B0596C4494E* __this, String_t* ___message0, Exception_t* ___e1, const RuntimeMethod* method) ;
// System.Void System.SystemException::.ctor(System.String,System.Exception)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SystemException__ctor_m0FC84CACD2A5D66222998AA601A5C41CEC36A611 (SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295* __this, String_t* ___message0, Exception_t* ___innerException1, const RuntimeMethod* method) ;
// System.Void System.Exception::set_HResult(System.Int32)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Exception_set_HResult_m010A171183E240EBF4F7611E924B533FAB2E471F_inline (Exception_t* __this, int32_t ___value0, const RuntimeMethod* method) ;
// System.Runtime.Serialization.SerializationInfo System.Data.SqlTypes.SqlTypeException::SqlTypeExceptionSerialization(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* SqlTypeException_SqlTypeExceptionSerialization_m0ED24EDA1BA418051614BBD33C496CB8DECAEC02 (SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* ___si0, StreamingContext_t56760522A751890146EE45F82F866B55B7E33677 ___sc1, const RuntimeMethod* method) ;
// System.Void System.SystemException::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SystemException__ctor_mA2BB392E0F4CD8A4C132984F76B7A9FBDB3B6879 (SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295* __this, SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* ___info0, StreamingContext_t56760522A751890146EE45F82F866B55B7E33677 ___context1, const RuntimeMethod* method) ;
// System.Int32 System.Runtime.Serialization.SerializationInfo::get_MemberCount()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t SerializationInfo_get_MemberCount_mB4ECB820E0C88CF7D1031B09B0E32040DE464B9E_inline (SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* __this, const RuntimeMethod* method) ;
// System.String System.Runtime.Serialization.SerializationInfo::GetString(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* SerializationInfo_GetString_mF0753AFAA13AABF8A30B8F0890AEC52BFBBC73E9 (SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* __this, String_t* ___name0, const RuntimeMethod* method) ;
// System.String System.Data.SqlTypes.SQLResource::get_NullValueMessage()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* SQLResource_get_NullValueMessage_mE062AEA06DEB89B9077FACD2940994F00AB2C468 (const RuntimeMethod* method) ;
// System.Void System.Data.SqlTypes.SqlNullValueException::.ctor(System.String,System.Exception)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SqlNullValueException__ctor_m8491E048CF6871FED5EA78347A0C83E22EFA048F (SqlNullValueException_t84216F8C86727B62B1C84EFCE7CFC403674ECAD7* __this, String_t* ___message0, Exception_t* ___e1, const RuntimeMethod* method) ;
// System.Runtime.Serialization.SerializationInfo System.Data.SqlTypes.SqlNullValueException::SqlNullValueExceptionSerialization(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* SqlNullValueException_SqlNullValueExceptionSerialization_mB100C77DBE8DB64E00FEAA5D9A9B98A515A4E64F (SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* ___si0, StreamingContext_t56760522A751890146EE45F82F866B55B7E33677 ___sc1, const RuntimeMethod* method) ;
// System.Void System.Data.SqlTypes.SqlTypeException::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SqlTypeException__ctor_mE38A98DAF789689F6BAC1B151B08C12D13FF04FC (SqlTypeException_t93D97B141C16DC7DC601ED2ED8166B0596C4494E* __this, SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* ___si0, StreamingContext_t56760522A751890146EE45F82F866B55B7E33677 ___sc1, const RuntimeMethod* method) ;
// System.Void System.Data.SqlTypes.SqlNullValueException::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SqlNullValueException__ctor_mE8C5BCE9B16E4D47E8E01C91016DEB5390527969 (SqlNullValueException_t84216F8C86727B62B1C84EFCE7CFC403674ECAD7* __this, String_t* ___message0, const RuntimeMethod* method) ;
// System.Void System.Data.DataCommonEventSource::Trace<System.Exception>(System.String,T0)
inline void DataCommonEventSource_Trace_TisException_t_m6AD40C3B6CFE3732C2E9A642A4D2A2727D26AE7E (DataCommonEventSource_tC3BB57E78CED1A7EFBCC8F852266121F4641CBFE* __this, String_t* ___format0, Exception_t* ___arg01, const RuntimeMethod* method)
{
	((  void (*) (DataCommonEventSource_tC3BB57E78CED1A7EFBCC8F852266121F4641CBFE*, String_t*, Exception_t*, const RuntimeMethod*))DataCommonEventSource_Trace_TisRuntimeObject_m0EDE55B17966DCB42AFD9FC6D69AE77D5EBF7E83_gshared)(__this, ___format0, ___arg01, method);
}
// System.Void System.Data.Common.ADP::TraceException(System.String,System.Exception)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ADP_TraceException_m15E86536756671161579E85D14124BB7AB77C61B (String_t* ___trace0, Exception_t* ___e1, const RuntimeMethod* method) ;
// System.Void System.ArgumentException::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArgumentException__ctor_m026938A67AF9D36BB7ED27F80425D7194B514465 (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* __this, String_t* ___message0, const RuntimeMethod* method) ;
// System.Void System.Data.Common.ADP::TraceExceptionAsReturnValue(System.Exception)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ADP_TraceExceptionAsReturnValue_mB1D3FEFE4B0AA3A99B9DC266657F6278F09284E4 (Exception_t* ___e0, const RuntimeMethod* method) ;
// System.String SR::Format(System.String,System.Object,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* SR_Format_m821F9C4ABA354C3C712A210A72AFE77AF17D6C79 (String_t* ___resourceFormat0, RuntimeObject* ___p11, RuntimeObject* ___p22, const RuntimeMethod* method) ;
// System.ArgumentException System.Data.Common.ADP::Argument(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* ADP_Argument_mD87295643203342A402470771011DA9751630053 (String_t* ___error0, const RuntimeMethod* method) ;
// System.String SR::GetString(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* SR_GetString_m58741957905E7886BFE3D92BEE1233DA13C1AAD5 (String_t* ___name0, const RuntimeMethod* method) ;
// System.Void System.IntPtr::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IntPtr__ctor_m20A566609A091311C734617C699E61F545250AC7 (intptr_t* __this, int32_t ___value0, const RuntimeMethod* method) ;
// System.Int32 System.IntPtr::get_Size()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t IntPtr_get_Size_m1FAAA59DA73D7E32BB1AB55DD92A90AFE3251DBE (const RuntimeMethod* method) ;
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
// System.String SR::GetString(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* SR_GetString_m58741957905E7886BFE3D92BEE1233DA13C1AAD5 (String_t* ___name0, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = ___name0;
		return L_0;
	}
}
// System.String SR::Format(System.String,System.Object,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* SR_Format_m821F9C4ABA354C3C712A210A72AFE77AF17D6C79 (String_t* ___resourceFormat0, RuntimeObject* ___p11, RuntimeObject* ___p22, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_runtime_class_init_inline(CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0_il2cpp_TypeInfo_var);
		CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0* L_0;
		L_0 = CultureInfo_get_InvariantCulture_mD1E96DC845E34B10F78CB744B0CB5D7D63CEB1E6(NULL);
		String_t* L_1 = ___resourceFormat0;
		RuntimeObject* L_2 = ___p11;
		RuntimeObject* L_3 = ___p22;
		String_t* L_4;
		L_4 = String_Format_m44BF8BF44DC9B67D6CF265A1A2703A6D743F5C56(L_0, L_1, L_2, L_3, NULL);
		return L_4;
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
// System.Void System.Data.DataCommonEventSource::Trace(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DataCommonEventSource_Trace_m4EF3D0040126080B6D92AD692A7946A5E7026B00 (DataCommonEventSource_tC3BB57E78CED1A7EFBCC8F852266121F4641CBFE* __this, String_t* ___message0, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = ___message0;
		EventSource_WriteEvent_m0A746CC3F239957C62A390FE12CAEE5399C51FDE(__this, 1, L_0, NULL);
		return;
	}
}
// System.Void System.Data.DataCommonEventSource::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DataCommonEventSource__ctor_m25B2FC680B88CA6791B3FE34B60E4EB02F79E814 (DataCommonEventSource_tC3BB57E78CED1A7EFBCC8F852266121F4641CBFE* __this, const RuntimeMethod* method) 
{
	{
		EventSource__ctor_mDF751901186604B47C80B7DCC8DCB624FE5664BC(__this, NULL);
		return;
	}
}
// System.Void System.Data.DataCommonEventSource::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DataCommonEventSource__cctor_mCBD446CE73EDDA129495EB9B3DC3D96551577C04 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DataCommonEventSource_tC3BB57E78CED1A7EFBCC8F852266121F4641CBFE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		DataCommonEventSource_tC3BB57E78CED1A7EFBCC8F852266121F4641CBFE* L_0 = (DataCommonEventSource_tC3BB57E78CED1A7EFBCC8F852266121F4641CBFE*)il2cpp_codegen_object_new(DataCommonEventSource_tC3BB57E78CED1A7EFBCC8F852266121F4641CBFE_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		DataCommonEventSource__ctor_m25B2FC680B88CA6791B3FE34B60E4EB02F79E814(L_0, NULL);
		((DataCommonEventSource_tC3BB57E78CED1A7EFBCC8F852266121F4641CBFE_StaticFields*)il2cpp_codegen_static_fields_for(DataCommonEventSource_tC3BB57E78CED1A7EFBCC8F852266121F4641CBFE_il2cpp_TypeInfo_var))->___Log_1 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&((DataCommonEventSource_tC3BB57E78CED1A7EFBCC8F852266121F4641CBFE_StaticFields*)il2cpp_codegen_static_fields_for(DataCommonEventSource_tC3BB57E78CED1A7EFBCC8F852266121F4641CBFE_il2cpp_TypeInfo_var))->___Log_1), (void*)L_0);
		((DataCommonEventSource_tC3BB57E78CED1A7EFBCC8F852266121F4641CBFE_StaticFields*)il2cpp_codegen_static_fields_for(DataCommonEventSource_tC3BB57E78CED1A7EFBCC8F852266121F4641CBFE_il2cpp_TypeInfo_var))->___s_nextScopeId_2 = ((int64_t)0);
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
// System.String System.Data.SqlTypes.SQLResource::get_NullString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* SQLResource_get_NullString_m597166B3FD1AB8CE8AD7030876EA0F77472CC1E8 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDA4BE0F963380DB493604E9CA0B0B54F040F58C9);
		s_Il2CppMethodInitialized = true;
	}
	{
		return _stringLiteralDA4BE0F963380DB493604E9CA0B0B54F040F58C9;
	}
}
// System.String System.Data.SqlTypes.SQLResource::get_NullValueMessage()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* SQLResource_get_NullValueMessage_mE062AEA06DEB89B9077FACD2940994F00AB2C468 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral74C3760424E078A3B22452637B9991F932BEE533);
		s_Il2CppMethodInitialized = true;
	}
	{
		return _stringLiteral74C3760424E078A3B22452637B9991F932BEE533;
	}
}
// System.String System.Data.SqlTypes.SQLResource::get_DateTimeOverflowMessage()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* SQLResource_get_DateTimeOverflowMessage_mEEEDB21E3930021128D500ECD9DA08CC80FF8299 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral8EB252E15BE98B57C1DEDDE29773A1A775DE4000);
		s_Il2CppMethodInitialized = true;
	}
	{
		return _stringLiteral8EB252E15BE98B57C1DEDDE29773A1A775DE4000;
	}
}
// System.String System.Data.SqlTypes.SQLResource::get_TimeZoneSpecifiedMessage()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* SQLResource_get_TimeZoneSpecifiedMessage_m23324A7E1D2337998092F5677B72973A604911A7 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA1C147A4B101755BFA4EBF8AEDD06334BB72A6C5);
		s_Il2CppMethodInitialized = true;
	}
	{
		return _stringLiteralA1C147A4B101755BFA4EBF8AEDD06334BB72A6C5;
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
// System.Void System.Data.SqlTypes.SqlBoolean::.ctor(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SqlBoolean__ctor_mB96F7558946F0B492BCC878FA3C5F52EBE300900 (SqlBoolean_tAD22108BE5F656A5AAFE19B054B2CA56C0AEE1D7* __this, bool ___value0, const RuntimeMethod* method) 
{
	SqlBoolean_tAD22108BE5F656A5AAFE19B054B2CA56C0AEE1D7* G_B2_0 = NULL;
	SqlBoolean_tAD22108BE5F656A5AAFE19B054B2CA56C0AEE1D7* G_B1_0 = NULL;
	int32_t G_B3_0 = 0;
	SqlBoolean_tAD22108BE5F656A5AAFE19B054B2CA56C0AEE1D7* G_B3_1 = NULL;
	{
		bool L_0 = ___value0;
		G_B1_0 = __this;
		if (L_0)
		{
			G_B2_0 = __this;
			goto IL_0007;
		}
	}
	{
		G_B3_0 = 1;
		G_B3_1 = G_B1_0;
		goto IL_0008;
	}

IL_0007:
	{
		G_B3_0 = 2;
		G_B3_1 = G_B2_0;
	}

IL_0008:
	{
		G_B3_1->___m_value_0 = (uint8_t)G_B3_0;
		return;
	}
}
IL2CPP_EXTERN_C  void SqlBoolean__ctor_mB96F7558946F0B492BCC878FA3C5F52EBE300900_AdjustorThunk (RuntimeObject* __this, bool ___value0, const RuntimeMethod* method)
{
	SqlBoolean_tAD22108BE5F656A5AAFE19B054B2CA56C0AEE1D7* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<SqlBoolean_tAD22108BE5F656A5AAFE19B054B2CA56C0AEE1D7*>(__this + _offset);
	SqlBoolean__ctor_mB96F7558946F0B492BCC878FA3C5F52EBE300900(_thisAdjusted, ___value0, method);
}
// System.Void System.Data.SqlTypes.SqlBoolean::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SqlBoolean__ctor_m764B67E4D8AF0EE2E199765A9BB6AC0207513571 (SqlBoolean_tAD22108BE5F656A5AAFE19B054B2CA56C0AEE1D7* __this, int32_t ___value0, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___value0;
		SqlBoolean__ctor_m8CF5274440F81052315F7112440E1AF96CFB6C48(__this, L_0, (bool)0, NULL);
		return;
	}
}
IL2CPP_EXTERN_C  void SqlBoolean__ctor_m764B67E4D8AF0EE2E199765A9BB6AC0207513571_AdjustorThunk (RuntimeObject* __this, int32_t ___value0, const RuntimeMethod* method)
{
	SqlBoolean_tAD22108BE5F656A5AAFE19B054B2CA56C0AEE1D7* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<SqlBoolean_tAD22108BE5F656A5AAFE19B054B2CA56C0AEE1D7*>(__this + _offset);
	SqlBoolean__ctor_m764B67E4D8AF0EE2E199765A9BB6AC0207513571(_thisAdjusted, ___value0, method);
}
// System.Void System.Data.SqlTypes.SqlBoolean::.ctor(System.Int32,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SqlBoolean__ctor_m8CF5274440F81052315F7112440E1AF96CFB6C48 (SqlBoolean_tAD22108BE5F656A5AAFE19B054B2CA56C0AEE1D7* __this, int32_t ___value0, bool ___fNull1, const RuntimeMethod* method) 
{
	SqlBoolean_tAD22108BE5F656A5AAFE19B054B2CA56C0AEE1D7* G_B4_0 = NULL;
	SqlBoolean_tAD22108BE5F656A5AAFE19B054B2CA56C0AEE1D7* G_B3_0 = NULL;
	int32_t G_B5_0 = 0;
	SqlBoolean_tAD22108BE5F656A5AAFE19B054B2CA56C0AEE1D7* G_B5_1 = NULL;
	{
		bool L_0 = ___fNull1;
		if (!L_0)
		{
			goto IL_000b;
		}
	}
	{
		__this->___m_value_0 = (uint8_t)0;
		return;
	}

IL_000b:
	{
		int32_t L_1 = ___value0;
		G_B3_0 = __this;
		if (L_1)
		{
			G_B4_0 = __this;
			goto IL_0012;
		}
	}
	{
		G_B5_0 = 1;
		G_B5_1 = G_B3_0;
		goto IL_0013;
	}

IL_0012:
	{
		G_B5_0 = 2;
		G_B5_1 = G_B4_0;
	}

IL_0013:
	{
		G_B5_1->___m_value_0 = (uint8_t)G_B5_0;
		return;
	}
}
IL2CPP_EXTERN_C  void SqlBoolean__ctor_m8CF5274440F81052315F7112440E1AF96CFB6C48_AdjustorThunk (RuntimeObject* __this, int32_t ___value0, bool ___fNull1, const RuntimeMethod* method)
{
	SqlBoolean_tAD22108BE5F656A5AAFE19B054B2CA56C0AEE1D7* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<SqlBoolean_tAD22108BE5F656A5AAFE19B054B2CA56C0AEE1D7*>(__this + _offset);
	SqlBoolean__ctor_m8CF5274440F81052315F7112440E1AF96CFB6C48(_thisAdjusted, ___value0, ___fNull1, method);
}
// System.Boolean System.Data.SqlTypes.SqlBoolean::get_IsNull()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool SqlBoolean_get_IsNull_mA4ECA927DBC05F2D362301DA216CAEF9CE7BCCBB (SqlBoolean_tAD22108BE5F656A5AAFE19B054B2CA56C0AEE1D7* __this, const RuntimeMethod* method) 
{
	{
		uint8_t L_0 = __this->___m_value_0;
		return (bool)((((int32_t)L_0) == ((int32_t)0))? 1 : 0);
	}
}
IL2CPP_EXTERN_C  bool SqlBoolean_get_IsNull_mA4ECA927DBC05F2D362301DA216CAEF9CE7BCCBB_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	SqlBoolean_tAD22108BE5F656A5AAFE19B054B2CA56C0AEE1D7* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<SqlBoolean_tAD22108BE5F656A5AAFE19B054B2CA56C0AEE1D7*>(__this + _offset);
	bool _returnValue;
	_returnValue = SqlBoolean_get_IsNull_mA4ECA927DBC05F2D362301DA216CAEF9CE7BCCBB(_thisAdjusted, method);
	return _returnValue;
}
// System.Boolean System.Data.SqlTypes.SqlBoolean::get_Value()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool SqlBoolean_get_Value_m26D2659D06D56FFBF158051EB3726BAB693A7D97 (SqlBoolean_tAD22108BE5F656A5AAFE19B054B2CA56C0AEE1D7* __this, const RuntimeMethod* method) 
{
	uint8_t V_0 = 0x0;
	{
		uint8_t L_0 = __this->___m_value_0;
		V_0 = L_0;
		uint8_t L_1 = V_0;
		if ((((int32_t)L_1) == ((int32_t)1)))
		{
			goto IL_0011;
		}
	}
	{
		uint8_t L_2 = V_0;
		if ((!(((uint32_t)L_2) == ((uint32_t)2))))
		{
			goto IL_0013;
		}
	}
	{
		return (bool)1;
	}

IL_0011:
	{
		return (bool)0;
	}

IL_0013:
	{
		SqlNullValueException_t84216F8C86727B62B1C84EFCE7CFC403674ECAD7* L_3 = (SqlNullValueException_t84216F8C86727B62B1C84EFCE7CFC403674ECAD7*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&SqlNullValueException_t84216F8C86727B62B1C84EFCE7CFC403674ECAD7_il2cpp_TypeInfo_var)));
		NullCheck(L_3);
		SqlNullValueException__ctor_m069C95E1867258A1B57BD8719252132DFB6DE222(L_3, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_3, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&SqlBoolean_get_Value_m26D2659D06D56FFBF158051EB3726BAB693A7D97_RuntimeMethod_var)));
	}
}
IL2CPP_EXTERN_C  bool SqlBoolean_get_Value_m26D2659D06D56FFBF158051EB3726BAB693A7D97_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	SqlBoolean_tAD22108BE5F656A5AAFE19B054B2CA56C0AEE1D7* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<SqlBoolean_tAD22108BE5F656A5AAFE19B054B2CA56C0AEE1D7*>(__this + _offset);
	bool _returnValue;
	_returnValue = SqlBoolean_get_Value_m26D2659D06D56FFBF158051EB3726BAB693A7D97(_thisAdjusted, method);
	return _returnValue;
}
// System.Boolean System.Data.SqlTypes.SqlBoolean::get_IsTrue()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool SqlBoolean_get_IsTrue_mD2491FECA6D8BEC7F00C0071C6299187B28B52D4 (SqlBoolean_tAD22108BE5F656A5AAFE19B054B2CA56C0AEE1D7* __this, const RuntimeMethod* method) 
{
	{
		uint8_t L_0 = __this->___m_value_0;
		return (bool)((((int32_t)L_0) == ((int32_t)2))? 1 : 0);
	}
}
IL2CPP_EXTERN_C  bool SqlBoolean_get_IsTrue_mD2491FECA6D8BEC7F00C0071C6299187B28B52D4_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	SqlBoolean_tAD22108BE5F656A5AAFE19B054B2CA56C0AEE1D7* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<SqlBoolean_tAD22108BE5F656A5AAFE19B054B2CA56C0AEE1D7*>(__this + _offset);
	bool _returnValue;
	_returnValue = SqlBoolean_get_IsTrue_mD2491FECA6D8BEC7F00C0071C6299187B28B52D4(_thisAdjusted, method);
	return _returnValue;
}
// System.Boolean System.Data.SqlTypes.SqlBoolean::op_True(System.Data.SqlTypes.SqlBoolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool SqlBoolean_op_True_m5CC9CAC092080E77EB6322BB0CDD656DFD38FF94 (SqlBoolean_tAD22108BE5F656A5AAFE19B054B2CA56C0AEE1D7 ___x0, const RuntimeMethod* method) 
{
	{
		bool L_0;
		L_0 = SqlBoolean_get_IsTrue_mD2491FECA6D8BEC7F00C0071C6299187B28B52D4((&___x0), NULL);
		return L_0;
	}
}
// System.Byte System.Data.SqlTypes.SqlBoolean::get_ByteValue()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint8_t SqlBoolean_get_ByteValue_m0DAA32AF074F4F826BE41D06F219CE3087DC4C81 (SqlBoolean_tAD22108BE5F656A5AAFE19B054B2CA56C0AEE1D7* __this, const RuntimeMethod* method) 
{
	{
		bool L_0;
		L_0 = SqlBoolean_get_IsNull_mA4ECA927DBC05F2D362301DA216CAEF9CE7BCCBB(__this, NULL);
		if (L_0)
		{
			goto IL_0015;
		}
	}
	{
		uint8_t L_1 = __this->___m_value_0;
		if ((((int32_t)L_1) == ((int32_t)2)))
		{
			goto IL_0013;
		}
	}
	{
		return (uint8_t)0;
	}

IL_0013:
	{
		return (uint8_t)1;
	}

IL_0015:
	{
		SqlNullValueException_t84216F8C86727B62B1C84EFCE7CFC403674ECAD7* L_2 = (SqlNullValueException_t84216F8C86727B62B1C84EFCE7CFC403674ECAD7*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&SqlNullValueException_t84216F8C86727B62B1C84EFCE7CFC403674ECAD7_il2cpp_TypeInfo_var)));
		NullCheck(L_2);
		SqlNullValueException__ctor_m069C95E1867258A1B57BD8719252132DFB6DE222(L_2, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&SqlBoolean_get_ByteValue_m0DAA32AF074F4F826BE41D06F219CE3087DC4C81_RuntimeMethod_var)));
	}
}
IL2CPP_EXTERN_C  uint8_t SqlBoolean_get_ByteValue_m0DAA32AF074F4F826BE41D06F219CE3087DC4C81_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	SqlBoolean_tAD22108BE5F656A5AAFE19B054B2CA56C0AEE1D7* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<SqlBoolean_tAD22108BE5F656A5AAFE19B054B2CA56C0AEE1D7*>(__this + _offset);
	uint8_t _returnValue;
	_returnValue = SqlBoolean_get_ByteValue_m0DAA32AF074F4F826BE41D06F219CE3087DC4C81(_thisAdjusted, method);
	return _returnValue;
}
// System.String System.Data.SqlTypes.SqlBoolean::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* SqlBoolean_ToString_mCE39DD8EC9E279E7BFF34B476F425032DE957572 (SqlBoolean_tAD22108BE5F656A5AAFE19B054B2CA56C0AEE1D7* __this, const RuntimeMethod* method) 
{
	bool V_0 = false;
	{
		bool L_0;
		L_0 = SqlBoolean_get_IsNull_mA4ECA927DBC05F2D362301DA216CAEF9CE7BCCBB(__this, NULL);
		if (L_0)
		{
			goto IL_0017;
		}
	}
	{
		bool L_1;
		L_1 = SqlBoolean_get_Value_m26D2659D06D56FFBF158051EB3726BAB693A7D97(__this, NULL);
		V_0 = L_1;
		String_t* L_2;
		L_2 = Boolean_ToString_m6646C8026B1DF381A1EE8CD13549175E9703CC63((&V_0), NULL);
		return L_2;
	}

IL_0017:
	{
		String_t* L_3;
		L_3 = SQLResource_get_NullString_m597166B3FD1AB8CE8AD7030876EA0F77472CC1E8(NULL);
		return L_3;
	}
}
IL2CPP_EXTERN_C  String_t* SqlBoolean_ToString_mCE39DD8EC9E279E7BFF34B476F425032DE957572_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	SqlBoolean_tAD22108BE5F656A5AAFE19B054B2CA56C0AEE1D7* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<SqlBoolean_tAD22108BE5F656A5AAFE19B054B2CA56C0AEE1D7*>(__this + _offset);
	String_t* _returnValue;
	_returnValue = SqlBoolean_ToString_mCE39DD8EC9E279E7BFF34B476F425032DE957572(_thisAdjusted, method);
	return _returnValue;
}
// System.Data.SqlTypes.SqlBoolean System.Data.SqlTypes.SqlBoolean::op_Equality(System.Data.SqlTypes.SqlBoolean,System.Data.SqlTypes.SqlBoolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR SqlBoolean_tAD22108BE5F656A5AAFE19B054B2CA56C0AEE1D7 SqlBoolean_op_Equality_m7061AC1737A529F7DC37561C102345B402558695 (SqlBoolean_tAD22108BE5F656A5AAFE19B054B2CA56C0AEE1D7 ___x0, SqlBoolean_tAD22108BE5F656A5AAFE19B054B2CA56C0AEE1D7 ___y1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SqlBoolean_tAD22108BE5F656A5AAFE19B054B2CA56C0AEE1D7_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		bool L_0;
		L_0 = SqlBoolean_get_IsNull_mA4ECA927DBC05F2D362301DA216CAEF9CE7BCCBB((&___x0), NULL);
		if (L_0)
		{
			goto IL_0026;
		}
	}
	{
		bool L_1;
		L_1 = SqlBoolean_get_IsNull_mA4ECA927DBC05F2D362301DA216CAEF9CE7BCCBB((&___y1), NULL);
		if (L_1)
		{
			goto IL_0026;
		}
	}
	{
		SqlBoolean_tAD22108BE5F656A5AAFE19B054B2CA56C0AEE1D7 L_2 = ___x0;
		uint8_t L_3 = L_2.___m_value_0;
		SqlBoolean_tAD22108BE5F656A5AAFE19B054B2CA56C0AEE1D7 L_4 = ___y1;
		uint8_t L_5 = L_4.___m_value_0;
		SqlBoolean_tAD22108BE5F656A5AAFE19B054B2CA56C0AEE1D7 L_6;
		memset((&L_6), 0, sizeof(L_6));
		SqlBoolean__ctor_mB96F7558946F0B492BCC878FA3C5F52EBE300900((&L_6), (bool)((((int32_t)L_3) == ((int32_t)L_5))? 1 : 0), /*hidden argument*/NULL);
		return L_6;
	}

IL_0026:
	{
		il2cpp_codegen_runtime_class_init_inline(SqlBoolean_tAD22108BE5F656A5AAFE19B054B2CA56C0AEE1D7_il2cpp_TypeInfo_var);
		SqlBoolean_tAD22108BE5F656A5AAFE19B054B2CA56C0AEE1D7 L_7 = ((SqlBoolean_tAD22108BE5F656A5AAFE19B054B2CA56C0AEE1D7_StaticFields*)il2cpp_codegen_static_fields_for(SqlBoolean_tAD22108BE5F656A5AAFE19B054B2CA56C0AEE1D7_il2cpp_TypeInfo_var))->___Null_3;
		return L_7;
	}
}
// System.Int32 System.Data.SqlTypes.SqlBoolean::CompareTo(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t SqlBoolean_CompareTo_mD8954B2D5AAF295449721C6FAE8A054DA3EA6D82 (SqlBoolean_tAD22108BE5F656A5AAFE19B054B2CA56C0AEE1D7* __this, RuntimeObject* ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SqlBoolean_tAD22108BE5F656A5AAFE19B054B2CA56C0AEE1D7_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	SqlBoolean_tAD22108BE5F656A5AAFE19B054B2CA56C0AEE1D7 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		RuntimeObject* L_0 = ___value0;
		if (!((RuntimeObject*)IsInstSealed((RuntimeObject*)L_0, SqlBoolean_tAD22108BE5F656A5AAFE19B054B2CA56C0AEE1D7_il2cpp_TypeInfo_var)))
		{
			goto IL_0017;
		}
	}
	{
		RuntimeObject* L_1 = ___value0;
		V_0 = ((*(SqlBoolean_tAD22108BE5F656A5AAFE19B054B2CA56C0AEE1D7*)((SqlBoolean_tAD22108BE5F656A5AAFE19B054B2CA56C0AEE1D7*)(SqlBoolean_tAD22108BE5F656A5AAFE19B054B2CA56C0AEE1D7*)UnBox(L_1, SqlBoolean_tAD22108BE5F656A5AAFE19B054B2CA56C0AEE1D7_il2cpp_TypeInfo_var))));
		SqlBoolean_tAD22108BE5F656A5AAFE19B054B2CA56C0AEE1D7 L_2 = V_0;
		int32_t L_3;
		L_3 = SqlBoolean_CompareTo_mAB4868F894724D6FFEA7678910365C1797973FB5(__this, L_2, NULL);
		return L_3;
	}

IL_0017:
	{
		RuntimeObject* L_4 = ___value0;
		NullCheck(L_4);
		Type_t* L_5;
		L_5 = Object_GetType_mE10A8FC1E57F3DF29972CCBC026C2DC3942263B3(L_4, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_6 = { reinterpret_cast<intptr_t> (((RuntimeType*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&SqlBoolean_tAD22108BE5F656A5AAFE19B054B2CA56C0AEE1D7_0_0_0_var))) };
		il2cpp_codegen_runtime_class_init_inline(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Type_t_il2cpp_TypeInfo_var)));
		Type_t* L_7;
		L_7 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_6, NULL);
		il2cpp_codegen_runtime_class_init_inline(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ADP_t2C39CD1D5CEFC1B88FF6F7C7AD1916F0FD538CC0_il2cpp_TypeInfo_var)));
		Exception_t* L_8;
		L_8 = ADP_WrongType_mCCF6317939800042630DACE6F6CA69C48565B472(L_5, L_7, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_8, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&SqlBoolean_CompareTo_mD8954B2D5AAF295449721C6FAE8A054DA3EA6D82_RuntimeMethod_var)));
	}
}
IL2CPP_EXTERN_C  int32_t SqlBoolean_CompareTo_mD8954B2D5AAF295449721C6FAE8A054DA3EA6D82_AdjustorThunk (RuntimeObject* __this, RuntimeObject* ___value0, const RuntimeMethod* method)
{
	SqlBoolean_tAD22108BE5F656A5AAFE19B054B2CA56C0AEE1D7* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<SqlBoolean_tAD22108BE5F656A5AAFE19B054B2CA56C0AEE1D7*>(__this + _offset);
	int32_t _returnValue;
	_returnValue = SqlBoolean_CompareTo_mD8954B2D5AAF295449721C6FAE8A054DA3EA6D82(_thisAdjusted, ___value0, method);
	return _returnValue;
}
// System.Int32 System.Data.SqlTypes.SqlBoolean::CompareTo(System.Data.SqlTypes.SqlBoolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t SqlBoolean_CompareTo_mAB4868F894724D6FFEA7678910365C1797973FB5 (SqlBoolean_tAD22108BE5F656A5AAFE19B054B2CA56C0AEE1D7* __this, SqlBoolean_tAD22108BE5F656A5AAFE19B054B2CA56C0AEE1D7 ___value0, const RuntimeMethod* method) 
{
	{
		bool L_0;
		L_0 = SqlBoolean_get_IsNull_mA4ECA927DBC05F2D362301DA216CAEF9CE7BCCBB(__this, NULL);
		if (!L_0)
		{
			goto IL_0015;
		}
	}
	{
		bool L_1;
		L_1 = SqlBoolean_get_IsNull_mA4ECA927DBC05F2D362301DA216CAEF9CE7BCCBB((&___value0), NULL);
		if (L_1)
		{
			goto IL_0013;
		}
	}
	{
		return (-1);
	}

IL_0013:
	{
		return 0;
	}

IL_0015:
	{
		bool L_2;
		L_2 = SqlBoolean_get_IsNull_mA4ECA927DBC05F2D362301DA216CAEF9CE7BCCBB((&___value0), NULL);
		if (!L_2)
		{
			goto IL_0020;
		}
	}
	{
		return 1;
	}

IL_0020:
	{
		uint8_t L_3;
		L_3 = SqlBoolean_get_ByteValue_m0DAA32AF074F4F826BE41D06F219CE3087DC4C81(__this, NULL);
		uint8_t L_4;
		L_4 = SqlBoolean_get_ByteValue_m0DAA32AF074F4F826BE41D06F219CE3087DC4C81((&___value0), NULL);
		if ((((int32_t)L_3) >= ((int32_t)L_4)))
		{
			goto IL_0031;
		}
	}
	{
		return (-1);
	}

IL_0031:
	{
		uint8_t L_5;
		L_5 = SqlBoolean_get_ByteValue_m0DAA32AF074F4F826BE41D06F219CE3087DC4C81(__this, NULL);
		uint8_t L_6;
		L_6 = SqlBoolean_get_ByteValue_m0DAA32AF074F4F826BE41D06F219CE3087DC4C81((&___value0), NULL);
		if ((((int32_t)L_5) <= ((int32_t)L_6)))
		{
			goto IL_0042;
		}
	}
	{
		return 1;
	}

IL_0042:
	{
		return 0;
	}
}
IL2CPP_EXTERN_C  int32_t SqlBoolean_CompareTo_mAB4868F894724D6FFEA7678910365C1797973FB5_AdjustorThunk (RuntimeObject* __this, SqlBoolean_tAD22108BE5F656A5AAFE19B054B2CA56C0AEE1D7 ___value0, const RuntimeMethod* method)
{
	SqlBoolean_tAD22108BE5F656A5AAFE19B054B2CA56C0AEE1D7* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<SqlBoolean_tAD22108BE5F656A5AAFE19B054B2CA56C0AEE1D7*>(__this + _offset);
	int32_t _returnValue;
	_returnValue = SqlBoolean_CompareTo_mAB4868F894724D6FFEA7678910365C1797973FB5(_thisAdjusted, ___value0, method);
	return _returnValue;
}
// System.Boolean System.Data.SqlTypes.SqlBoolean::Equals(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool SqlBoolean_Equals_m561B9537FA9804DB2EAF73AC786AFA658C83E2D3 (SqlBoolean_tAD22108BE5F656A5AAFE19B054B2CA56C0AEE1D7* __this, RuntimeObject* ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SqlBoolean_tAD22108BE5F656A5AAFE19B054B2CA56C0AEE1D7_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	SqlBoolean_tAD22108BE5F656A5AAFE19B054B2CA56C0AEE1D7 V_0;
	memset((&V_0), 0, sizeof(V_0));
	SqlBoolean_tAD22108BE5F656A5AAFE19B054B2CA56C0AEE1D7 V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		RuntimeObject* L_0 = ___value0;
		if (((RuntimeObject*)IsInstSealed((RuntimeObject*)L_0, SqlBoolean_tAD22108BE5F656A5AAFE19B054B2CA56C0AEE1D7_il2cpp_TypeInfo_var)))
		{
			goto IL_000a;
		}
	}
	{
		return (bool)0;
	}

IL_000a:
	{
		RuntimeObject* L_1 = ___value0;
		V_0 = ((*(SqlBoolean_tAD22108BE5F656A5AAFE19B054B2CA56C0AEE1D7*)((SqlBoolean_tAD22108BE5F656A5AAFE19B054B2CA56C0AEE1D7*)(SqlBoolean_tAD22108BE5F656A5AAFE19B054B2CA56C0AEE1D7*)UnBox(L_1, SqlBoolean_tAD22108BE5F656A5AAFE19B054B2CA56C0AEE1D7_il2cpp_TypeInfo_var))));
		bool L_2;
		L_2 = SqlBoolean_get_IsNull_mA4ECA927DBC05F2D362301DA216CAEF9CE7BCCBB((&V_0), NULL);
		if (L_2)
		{
			goto IL_0022;
		}
	}
	{
		bool L_3;
		L_3 = SqlBoolean_get_IsNull_mA4ECA927DBC05F2D362301DA216CAEF9CE7BCCBB(__this, NULL);
		if (!L_3)
		{
			goto IL_0034;
		}
	}

IL_0022:
	{
		bool L_4;
		L_4 = SqlBoolean_get_IsNull_mA4ECA927DBC05F2D362301DA216CAEF9CE7BCCBB((&V_0), NULL);
		if (!L_4)
		{
			goto IL_0032;
		}
	}
	{
		bool L_5;
		L_5 = SqlBoolean_get_IsNull_mA4ECA927DBC05F2D362301DA216CAEF9CE7BCCBB(__this, NULL);
		return L_5;
	}

IL_0032:
	{
		return (bool)0;
	}

IL_0034:
	{
		SqlBoolean_tAD22108BE5F656A5AAFE19B054B2CA56C0AEE1D7 L_6 = (*(SqlBoolean_tAD22108BE5F656A5AAFE19B054B2CA56C0AEE1D7*)__this);
		SqlBoolean_tAD22108BE5F656A5AAFE19B054B2CA56C0AEE1D7 L_7 = V_0;
		il2cpp_codegen_runtime_class_init_inline(SqlBoolean_tAD22108BE5F656A5AAFE19B054B2CA56C0AEE1D7_il2cpp_TypeInfo_var);
		SqlBoolean_tAD22108BE5F656A5AAFE19B054B2CA56C0AEE1D7 L_8;
		L_8 = SqlBoolean_op_Equality_m7061AC1737A529F7DC37561C102345B402558695(L_6, L_7, NULL);
		V_1 = L_8;
		bool L_9;
		L_9 = SqlBoolean_get_Value_m26D2659D06D56FFBF158051EB3726BAB693A7D97((&V_1), NULL);
		return L_9;
	}
}
IL2CPP_EXTERN_C  bool SqlBoolean_Equals_m561B9537FA9804DB2EAF73AC786AFA658C83E2D3_AdjustorThunk (RuntimeObject* __this, RuntimeObject* ___value0, const RuntimeMethod* method)
{
	SqlBoolean_tAD22108BE5F656A5AAFE19B054B2CA56C0AEE1D7* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<SqlBoolean_tAD22108BE5F656A5AAFE19B054B2CA56C0AEE1D7*>(__this + _offset);
	bool _returnValue;
	_returnValue = SqlBoolean_Equals_m561B9537FA9804DB2EAF73AC786AFA658C83E2D3(_thisAdjusted, ___value0, method);
	return _returnValue;
}
// System.Int32 System.Data.SqlTypes.SqlBoolean::GetHashCode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t SqlBoolean_GetHashCode_m538B83DEDCA7A4A8AC70EA335A9BC5E9080CD8EC (SqlBoolean_tAD22108BE5F656A5AAFE19B054B2CA56C0AEE1D7* __this, const RuntimeMethod* method) 
{
	bool V_0 = false;
	{
		bool L_0;
		L_0 = SqlBoolean_get_IsNull_mA4ECA927DBC05F2D362301DA216CAEF9CE7BCCBB(__this, NULL);
		if (L_0)
		{
			goto IL_0017;
		}
	}
	{
		bool L_1;
		L_1 = SqlBoolean_get_Value_m26D2659D06D56FFBF158051EB3726BAB693A7D97(__this, NULL);
		V_0 = L_1;
		int32_t L_2;
		L_2 = Boolean_GetHashCode_mEDB6904770C962BAF4510E5D24F08083C33900E3((&V_0), NULL);
		return L_2;
	}

IL_0017:
	{
		return 0;
	}
}
IL2CPP_EXTERN_C  int32_t SqlBoolean_GetHashCode_m538B83DEDCA7A4A8AC70EA335A9BC5E9080CD8EC_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	SqlBoolean_tAD22108BE5F656A5AAFE19B054B2CA56C0AEE1D7* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<SqlBoolean_tAD22108BE5F656A5AAFE19B054B2CA56C0AEE1D7*>(__this + _offset);
	int32_t _returnValue;
	_returnValue = SqlBoolean_GetHashCode_m538B83DEDCA7A4A8AC70EA335A9BC5E9080CD8EC(_thisAdjusted, method);
	return _returnValue;
}
// System.Xml.Schema.XmlSchema System.Data.SqlTypes.SqlBoolean::System.Xml.Serialization.IXmlSerializable.GetSchema()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR XmlSchema_t5C9506D00418BF5FD524254D0C6C405C620C941D* SqlBoolean_System_Xml_Serialization_IXmlSerializable_GetSchema_m58E2B3F1E05E04A8897F8448469808B5F4303695 (SqlBoolean_tAD22108BE5F656A5AAFE19B054B2CA56C0AEE1D7* __this, const RuntimeMethod* method) 
{
	{
		return (XmlSchema_t5C9506D00418BF5FD524254D0C6C405C620C941D*)NULL;
	}
}
IL2CPP_EXTERN_C  XmlSchema_t5C9506D00418BF5FD524254D0C6C405C620C941D* SqlBoolean_System_Xml_Serialization_IXmlSerializable_GetSchema_m58E2B3F1E05E04A8897F8448469808B5F4303695_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	SqlBoolean_tAD22108BE5F656A5AAFE19B054B2CA56C0AEE1D7* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<SqlBoolean_tAD22108BE5F656A5AAFE19B054B2CA56C0AEE1D7*>(__this + _offset);
	XmlSchema_t5C9506D00418BF5FD524254D0C6C405C620C941D* _returnValue;
	_returnValue = SqlBoolean_System_Xml_Serialization_IXmlSerializable_GetSchema_m58E2B3F1E05E04A8897F8448469808B5F4303695(_thisAdjusted, method);
	return _returnValue;
}
// System.Void System.Data.SqlTypes.SqlBoolean::System.Xml.Serialization.IXmlSerializable.ReadXml(System.Xml.XmlReader)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SqlBoolean_System_Xml_Serialization_IXmlSerializable_ReadXml_m8DF928E8A31EB12D893AA37DFFE4CA31E73FDCFA (SqlBoolean_tAD22108BE5F656A5AAFE19B054B2CA56C0AEE1D7* __this, XmlReader_t4C709DEF5F01606ECB60B638F1BD6F6E0A9116FD* ___reader0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&XmlConvert_t5D100AFD62FF717BD4F8A6CABA9EDF7A5DF719EA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2CAB73EF57D40E8B63A7CA91D057C0B68DB59100);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral7C014955313A7D33D5D04696B884B25325E6393C);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	SqlBoolean_tAD22108BE5F656A5AAFE19B054B2CA56C0AEE1D7* G_B5_0 = NULL;
	SqlBoolean_tAD22108BE5F656A5AAFE19B054B2CA56C0AEE1D7* G_B4_0 = NULL;
	int32_t G_B6_0 = 0;
	SqlBoolean_tAD22108BE5F656A5AAFE19B054B2CA56C0AEE1D7* G_B6_1 = NULL;
	{
		XmlReader_t4C709DEF5F01606ECB60B638F1BD6F6E0A9116FD* L_0 = ___reader0;
		NullCheck(L_0);
		String_t* L_1;
		L_1 = VirtualFuncInvoker2< String_t*, String_t*, String_t* >::Invoke(18 /* System.String System.Xml.XmlReader::GetAttribute(System.String,System.String) */, L_0, _stringLiteral2CAB73EF57D40E8B63A7CA91D057C0B68DB59100, _stringLiteral7C014955313A7D33D5D04696B884B25325E6393C);
		V_0 = L_1;
		String_t* L_2 = V_0;
		if (!L_2)
		{
			goto IL_002b;
		}
	}
	{
		String_t* L_3 = V_0;
		il2cpp_codegen_runtime_class_init_inline(XmlConvert_t5D100AFD62FF717BD4F8A6CABA9EDF7A5DF719EA_il2cpp_TypeInfo_var);
		bool L_4;
		L_4 = XmlConvert_ToBoolean_mB95C798BD6D849071E6A686CBF85851C25C7006A(L_3, NULL);
		if (!L_4)
		{
			goto IL_002b;
		}
	}
	{
		XmlReader_t4C709DEF5F01606ECB60B638F1BD6F6E0A9116FD* L_5 = ___reader0;
		NullCheck(L_5);
		String_t* L_6;
		L_6 = VirtualFuncInvoker0< String_t* >::Invoke(35 /* System.String System.Xml.XmlReader::ReadElementString() */, L_5);
		__this->___m_value_0 = (uint8_t)0;
		return;
	}

IL_002b:
	{
		XmlReader_t4C709DEF5F01606ECB60B638F1BD6F6E0A9116FD* L_7 = ___reader0;
		NullCheck(L_7);
		String_t* L_8;
		L_8 = VirtualFuncInvoker0< String_t* >::Invoke(35 /* System.String System.Xml.XmlReader::ReadElementString() */, L_7);
		il2cpp_codegen_runtime_class_init_inline(XmlConvert_t5D100AFD62FF717BD4F8A6CABA9EDF7A5DF719EA_il2cpp_TypeInfo_var);
		bool L_9;
		L_9 = XmlConvert_ToBoolean_mB95C798BD6D849071E6A686CBF85851C25C7006A(L_8, NULL);
		G_B4_0 = __this;
		if (L_9)
		{
			G_B5_0 = __this;
			goto IL_003c;
		}
	}
	{
		G_B6_0 = 1;
		G_B6_1 = G_B4_0;
		goto IL_003d;
	}

IL_003c:
	{
		G_B6_0 = 2;
		G_B6_1 = G_B5_0;
	}

IL_003d:
	{
		G_B6_1->___m_value_0 = (uint8_t)G_B6_0;
		return;
	}
}
IL2CPP_EXTERN_C  void SqlBoolean_System_Xml_Serialization_IXmlSerializable_ReadXml_m8DF928E8A31EB12D893AA37DFFE4CA31E73FDCFA_AdjustorThunk (RuntimeObject* __this, XmlReader_t4C709DEF5F01606ECB60B638F1BD6F6E0A9116FD* ___reader0, const RuntimeMethod* method)
{
	SqlBoolean_tAD22108BE5F656A5AAFE19B054B2CA56C0AEE1D7* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<SqlBoolean_tAD22108BE5F656A5AAFE19B054B2CA56C0AEE1D7*>(__this + _offset);
	SqlBoolean_System_Xml_Serialization_IXmlSerializable_ReadXml_m8DF928E8A31EB12D893AA37DFFE4CA31E73FDCFA(_thisAdjusted, ___reader0, method);
}
// System.Void System.Data.SqlTypes.SqlBoolean::System.Xml.Serialization.IXmlSerializable.WriteXml(System.Xml.XmlWriter)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SqlBoolean_System_Xml_Serialization_IXmlSerializable_WriteXml_m0C54CDA6C6982BD0320365DEF95CABB898DE67FE (SqlBoolean_tAD22108BE5F656A5AAFE19B054B2CA56C0AEE1D7* __this, XmlWriter_tCBC8D0C4891828A0A384C68D0414337F20E1A17F* ___writer0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2CAB73EF57D40E8B63A7CA91D057C0B68DB59100);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral6D67ADE9CC145DA3A39BC63DF500A7B0EC88CE4A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral77D38C0623F92B292B925F6E72CF5CF99A20D4EB);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral7C014955313A7D33D5D04696B884B25325E6393C);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB7C45DD316C68ABF3429C20058C2981C652192F2);
		s_Il2CppMethodInitialized = true;
	}
	XmlWriter_tCBC8D0C4891828A0A384C68D0414337F20E1A17F* G_B4_0 = NULL;
	XmlWriter_tCBC8D0C4891828A0A384C68D0414337F20E1A17F* G_B3_0 = NULL;
	String_t* G_B5_0 = NULL;
	XmlWriter_tCBC8D0C4891828A0A384C68D0414337F20E1A17F* G_B5_1 = NULL;
	{
		bool L_0;
		L_0 = SqlBoolean_get_IsNull_mA4ECA927DBC05F2D362301DA216CAEF9CE7BCCBB(__this, NULL);
		if (!L_0)
		{
			goto IL_0023;
		}
	}
	{
		XmlWriter_tCBC8D0C4891828A0A384C68D0414337F20E1A17F* L_1 = ___writer0;
		NullCheck(L_1);
		XmlWriter_WriteAttributeString_m9BECE5A394F9A9601AB66932AF0D7EF25E16AE0B(L_1, _stringLiteral6D67ADE9CC145DA3A39BC63DF500A7B0EC88CE4A, _stringLiteral2CAB73EF57D40E8B63A7CA91D057C0B68DB59100, _stringLiteral7C014955313A7D33D5D04696B884B25325E6393C, _stringLiteralB7C45DD316C68ABF3429C20058C2981C652192F2, NULL);
		return;
	}

IL_0023:
	{
		XmlWriter_tCBC8D0C4891828A0A384C68D0414337F20E1A17F* L_2 = ___writer0;
		uint8_t L_3 = __this->___m_value_0;
		G_B3_0 = L_2;
		if ((((int32_t)L_3) == ((int32_t)2)))
		{
			G_B4_0 = L_2;
			goto IL_0034;
		}
	}
	{
		G_B5_0 = _stringLiteral77D38C0623F92B292B925F6E72CF5CF99A20D4EB;
		G_B5_1 = G_B3_0;
		goto IL_0039;
	}

IL_0034:
	{
		G_B5_0 = _stringLiteralB7C45DD316C68ABF3429C20058C2981C652192F2;
		G_B5_1 = G_B4_0;
	}

IL_0039:
	{
		NullCheck(G_B5_1);
		VirtualActionInvoker1< String_t* >::Invoke(18 /* System.Void System.Xml.XmlWriter::WriteString(System.String) */, G_B5_1, G_B5_0);
		return;
	}
}
IL2CPP_EXTERN_C  void SqlBoolean_System_Xml_Serialization_IXmlSerializable_WriteXml_m0C54CDA6C6982BD0320365DEF95CABB898DE67FE_AdjustorThunk (RuntimeObject* __this, XmlWriter_tCBC8D0C4891828A0A384C68D0414337F20E1A17F* ___writer0, const RuntimeMethod* method)
{
	SqlBoolean_tAD22108BE5F656A5AAFE19B054B2CA56C0AEE1D7* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<SqlBoolean_tAD22108BE5F656A5AAFE19B054B2CA56C0AEE1D7*>(__this + _offset);
	SqlBoolean_System_Xml_Serialization_IXmlSerializable_WriteXml_m0C54CDA6C6982BD0320365DEF95CABB898DE67FE(_thisAdjusted, ___writer0, method);
}
// System.Xml.XmlQualifiedName System.Data.SqlTypes.SqlBoolean::GetXsdType(System.Xml.Schema.XmlSchemaSet)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR XmlQualifiedName_t2794880B373257E4108CC3F36D7373A343ACC5B9* SqlBoolean_GetXsdType_m578831C80216CA930CCF66B742347FC9A7F52C00 (XmlSchemaSet_t048A12CE7D00EF330EF32A388B69A240899F88D1* ___schemaSet0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&XmlQualifiedName_t2794880B373257E4108CC3F36D7373A343ACC5B9_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE249DDFD90EBFAAEE63734F28F6668A2FB5BD5AF);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralEC8D2B1EC3E954083D64BF4DDCCC9E46BE24B490);
		s_Il2CppMethodInitialized = true;
	}
	{
		XmlQualifiedName_t2794880B373257E4108CC3F36D7373A343ACC5B9* L_0 = (XmlQualifiedName_t2794880B373257E4108CC3F36D7373A343ACC5B9*)il2cpp_codegen_object_new(XmlQualifiedName_t2794880B373257E4108CC3F36D7373A343ACC5B9_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		XmlQualifiedName__ctor_m65632114A1726D9FAD0338BC2A8C28BB9D262C7B(L_0, _stringLiteralEC8D2B1EC3E954083D64BF4DDCCC9E46BE24B490, _stringLiteralE249DDFD90EBFAAEE63734F28F6668A2FB5BD5AF, NULL);
		return L_0;
	}
}
// System.Void System.Data.SqlTypes.SqlBoolean::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SqlBoolean__cctor_mDCE077B84B1EAFF5AF8E3DB0B8FF7930E10CB992 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SqlBoolean_tAD22108BE5F656A5AAFE19B054B2CA56C0AEE1D7_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		SqlBoolean_tAD22108BE5F656A5AAFE19B054B2CA56C0AEE1D7 L_0;
		memset((&L_0), 0, sizeof(L_0));
		SqlBoolean__ctor_mB96F7558946F0B492BCC878FA3C5F52EBE300900((&L_0), (bool)1, /*hidden argument*/NULL);
		((SqlBoolean_tAD22108BE5F656A5AAFE19B054B2CA56C0AEE1D7_StaticFields*)il2cpp_codegen_static_fields_for(SqlBoolean_tAD22108BE5F656A5AAFE19B054B2CA56C0AEE1D7_il2cpp_TypeInfo_var))->___True_1 = L_0;
		SqlBoolean_tAD22108BE5F656A5AAFE19B054B2CA56C0AEE1D7 L_1;
		memset((&L_1), 0, sizeof(L_1));
		SqlBoolean__ctor_mB96F7558946F0B492BCC878FA3C5F52EBE300900((&L_1), (bool)0, /*hidden argument*/NULL);
		((SqlBoolean_tAD22108BE5F656A5AAFE19B054B2CA56C0AEE1D7_StaticFields*)il2cpp_codegen_static_fields_for(SqlBoolean_tAD22108BE5F656A5AAFE19B054B2CA56C0AEE1D7_il2cpp_TypeInfo_var))->___False_2 = L_1;
		SqlBoolean_tAD22108BE5F656A5AAFE19B054B2CA56C0AEE1D7 L_2;
		memset((&L_2), 0, sizeof(L_2));
		SqlBoolean__ctor_m8CF5274440F81052315F7112440E1AF96CFB6C48((&L_2), 0, (bool)1, /*hidden argument*/NULL);
		((SqlBoolean_tAD22108BE5F656A5AAFE19B054B2CA56C0AEE1D7_StaticFields*)il2cpp_codegen_static_fields_for(SqlBoolean_tAD22108BE5F656A5AAFE19B054B2CA56C0AEE1D7_il2cpp_TypeInfo_var))->___Null_3 = L_2;
		SqlBoolean_tAD22108BE5F656A5AAFE19B054B2CA56C0AEE1D7 L_3;
		memset((&L_3), 0, sizeof(L_3));
		SqlBoolean__ctor_m764B67E4D8AF0EE2E199765A9BB6AC0207513571((&L_3), 0, /*hidden argument*/NULL);
		((SqlBoolean_tAD22108BE5F656A5AAFE19B054B2CA56C0AEE1D7_StaticFields*)il2cpp_codegen_static_fields_for(SqlBoolean_tAD22108BE5F656A5AAFE19B054B2CA56C0AEE1D7_il2cpp_TypeInfo_var))->___Zero_4 = L_3;
		SqlBoolean_tAD22108BE5F656A5AAFE19B054B2CA56C0AEE1D7 L_4;
		memset((&L_4), 0, sizeof(L_4));
		SqlBoolean__ctor_m764B67E4D8AF0EE2E199765A9BB6AC0207513571((&L_4), 1, /*hidden argument*/NULL);
		((SqlBoolean_tAD22108BE5F656A5AAFE19B054B2CA56C0AEE1D7_StaticFields*)il2cpp_codegen_static_fields_for(SqlBoolean_tAD22108BE5F656A5AAFE19B054B2CA56C0AEE1D7_il2cpp_TypeInfo_var))->___One_5 = L_4;
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
// Conversion methods for marshalling of: System.Data.SqlTypes.SqlDateTime
IL2CPP_EXTERN_C void SqlDateTime_tFB5902479382E8A61934E274E7BBF3280A3D25B2_marshal_pinvoke(const SqlDateTime_tFB5902479382E8A61934E274E7BBF3280A3D25B2& unmarshaled, SqlDateTime_tFB5902479382E8A61934E274E7BBF3280A3D25B2_marshaled_pinvoke& marshaled)
{
	marshaled.___m_fNotNull_0 = static_cast<int32_t>(unmarshaled.___m_fNotNull_0);
	marshaled.___m_day_1 = unmarshaled.___m_day_1;
	marshaled.___m_time_2 = unmarshaled.___m_time_2;
}
IL2CPP_EXTERN_C void SqlDateTime_tFB5902479382E8A61934E274E7BBF3280A3D25B2_marshal_pinvoke_back(const SqlDateTime_tFB5902479382E8A61934E274E7BBF3280A3D25B2_marshaled_pinvoke& marshaled, SqlDateTime_tFB5902479382E8A61934E274E7BBF3280A3D25B2& unmarshaled)
{
	bool unmarshaledm_fNotNull_temp_0 = false;
	unmarshaledm_fNotNull_temp_0 = static_cast<bool>(marshaled.___m_fNotNull_0);
	unmarshaled.___m_fNotNull_0 = unmarshaledm_fNotNull_temp_0;
	int32_t unmarshaledm_day_temp_1 = 0;
	unmarshaledm_day_temp_1 = marshaled.___m_day_1;
	unmarshaled.___m_day_1 = unmarshaledm_day_temp_1;
	int32_t unmarshaledm_time_temp_2 = 0;
	unmarshaledm_time_temp_2 = marshaled.___m_time_2;
	unmarshaled.___m_time_2 = unmarshaledm_time_temp_2;
}
// Conversion method for clean up from marshalling of: System.Data.SqlTypes.SqlDateTime
IL2CPP_EXTERN_C void SqlDateTime_tFB5902479382E8A61934E274E7BBF3280A3D25B2_marshal_pinvoke_cleanup(SqlDateTime_tFB5902479382E8A61934E274E7BBF3280A3D25B2_marshaled_pinvoke& marshaled)
{
}
// Conversion methods for marshalling of: System.Data.SqlTypes.SqlDateTime
IL2CPP_EXTERN_C void SqlDateTime_tFB5902479382E8A61934E274E7BBF3280A3D25B2_marshal_com(const SqlDateTime_tFB5902479382E8A61934E274E7BBF3280A3D25B2& unmarshaled, SqlDateTime_tFB5902479382E8A61934E274E7BBF3280A3D25B2_marshaled_com& marshaled)
{
	marshaled.___m_fNotNull_0 = static_cast<int32_t>(unmarshaled.___m_fNotNull_0);
	marshaled.___m_day_1 = unmarshaled.___m_day_1;
	marshaled.___m_time_2 = unmarshaled.___m_time_2;
}
IL2CPP_EXTERN_C void SqlDateTime_tFB5902479382E8A61934E274E7BBF3280A3D25B2_marshal_com_back(const SqlDateTime_tFB5902479382E8A61934E274E7BBF3280A3D25B2_marshaled_com& marshaled, SqlDateTime_tFB5902479382E8A61934E274E7BBF3280A3D25B2& unmarshaled)
{
	bool unmarshaledm_fNotNull_temp_0 = false;
	unmarshaledm_fNotNull_temp_0 = static_cast<bool>(marshaled.___m_fNotNull_0);
	unmarshaled.___m_fNotNull_0 = unmarshaledm_fNotNull_temp_0;
	int32_t unmarshaledm_day_temp_1 = 0;
	unmarshaledm_day_temp_1 = marshaled.___m_day_1;
	unmarshaled.___m_day_1 = unmarshaledm_day_temp_1;
	int32_t unmarshaledm_time_temp_2 = 0;
	unmarshaledm_time_temp_2 = marshaled.___m_time_2;
	unmarshaled.___m_time_2 = unmarshaledm_time_temp_2;
}
// Conversion method for clean up from marshalling of: System.Data.SqlTypes.SqlDateTime
IL2CPP_EXTERN_C void SqlDateTime_tFB5902479382E8A61934E274E7BBF3280A3D25B2_marshal_com_cleanup(SqlDateTime_tFB5902479382E8A61934E274E7BBF3280A3D25B2_marshaled_com& marshaled)
{
}
// System.Void System.Data.SqlTypes.SqlDateTime::.ctor(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SqlDateTime__ctor_m64066729561058739B6C9F62E8115E180E097F11 (SqlDateTime_tFB5902479382E8A61934E274E7BBF3280A3D25B2* __this, bool ___fNull0, const RuntimeMethod* method) 
{
	{
		__this->___m_fNotNull_0 = (bool)0;
		__this->___m_day_1 = 0;
		__this->___m_time_2 = 0;
		return;
	}
}
IL2CPP_EXTERN_C  void SqlDateTime__ctor_m64066729561058739B6C9F62E8115E180E097F11_AdjustorThunk (RuntimeObject* __this, bool ___fNull0, const RuntimeMethod* method)
{
	SqlDateTime_tFB5902479382E8A61934E274E7BBF3280A3D25B2* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<SqlDateTime_tFB5902479382E8A61934E274E7BBF3280A3D25B2*>(__this + _offset);
	SqlDateTime__ctor_m64066729561058739B6C9F62E8115E180E097F11(_thisAdjusted, ___fNull0, method);
}
// System.Void System.Data.SqlTypes.SqlDateTime::.ctor(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SqlDateTime__ctor_m90301DA22BE353FE15A11AB194B07D12652AABAC (SqlDateTime_tFB5902479382E8A61934E274E7BBF3280A3D25B2* __this, int32_t ___dayTicks0, int32_t ___timeTicks1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SqlDateTime_tFB5902479382E8A61934E274E7BBF3280A3D25B2_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		int32_t L_0 = ___dayTicks0;
		il2cpp_codegen_runtime_class_init_inline(SqlDateTime_tFB5902479382E8A61934E274E7BBF3280A3D25B2_il2cpp_TypeInfo_var);
		int32_t L_1 = ((SqlDateTime_tFB5902479382E8A61934E274E7BBF3280A3D25B2_StaticFields*)il2cpp_codegen_static_fields_for(SqlDateTime_tFB5902479382E8A61934E274E7BBF3280A3D25B2_il2cpp_TypeInfo_var))->___s_minDay_13;
		if ((((int32_t)L_0) < ((int32_t)L_1)))
		{
			goto IL_0020;
		}
	}
	{
		int32_t L_2 = ___dayTicks0;
		il2cpp_codegen_runtime_class_init_inline(SqlDateTime_tFB5902479382E8A61934E274E7BBF3280A3D25B2_il2cpp_TypeInfo_var);
		int32_t L_3 = ((SqlDateTime_tFB5902479382E8A61934E274E7BBF3280A3D25B2_StaticFields*)il2cpp_codegen_static_fields_for(SqlDateTime_tFB5902479382E8A61934E274E7BBF3280A3D25B2_il2cpp_TypeInfo_var))->___s_maxDay_14;
		if ((((int32_t)L_2) > ((int32_t)L_3)))
		{
			goto IL_0020;
		}
	}
	{
		int32_t L_4 = ___timeTicks1;
		il2cpp_codegen_runtime_class_init_inline(SqlDateTime_tFB5902479382E8A61934E274E7BBF3280A3D25B2_il2cpp_TypeInfo_var);
		int32_t L_5 = ((SqlDateTime_tFB5902479382E8A61934E274E7BBF3280A3D25B2_StaticFields*)il2cpp_codegen_static_fields_for(SqlDateTime_tFB5902479382E8A61934E274E7BBF3280A3D25B2_il2cpp_TypeInfo_var))->___s_minTime_15;
		if ((((int32_t)L_4) < ((int32_t)L_5)))
		{
			goto IL_0020;
		}
	}
	{
		int32_t L_6 = ___timeTicks1;
		il2cpp_codegen_runtime_class_init_inline(SqlDateTime_tFB5902479382E8A61934E274E7BBF3280A3D25B2_il2cpp_TypeInfo_var);
		int32_t L_7 = ((SqlDateTime_tFB5902479382E8A61934E274E7BBF3280A3D25B2_StaticFields*)il2cpp_codegen_static_fields_for(SqlDateTime_tFB5902479382E8A61934E274E7BBF3280A3D25B2_il2cpp_TypeInfo_var))->___s_maxTime_16;
		if ((((int32_t)L_6) <= ((int32_t)L_7)))
		{
			goto IL_0032;
		}
	}

IL_0020:
	{
		__this->___m_fNotNull_0 = (bool)0;
		String_t* L_8;
		L_8 = SQLResource_get_DateTimeOverflowMessage_mEEEDB21E3930021128D500ECD9DA08CC80FF8299(NULL);
		OverflowException_t6F6AD8CACE20C37F701C05B373A215C4802FAB0C* L_9 = (OverflowException_t6F6AD8CACE20C37F701C05B373A215C4802FAB0C*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&OverflowException_t6F6AD8CACE20C37F701C05B373A215C4802FAB0C_il2cpp_TypeInfo_var)));
		NullCheck(L_9);
		OverflowException__ctor_m2B99D79236B7B87C0BB6C9AB2E557DECE481C264(L_9, L_8, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_9, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&SqlDateTime__ctor_m90301DA22BE353FE15A11AB194B07D12652AABAC_RuntimeMethod_var)));
	}

IL_0032:
	{
		int32_t L_10 = ___dayTicks0;
		__this->___m_day_1 = L_10;
		int32_t L_11 = ___timeTicks1;
		__this->___m_time_2 = L_11;
		__this->___m_fNotNull_0 = (bool)1;
		return;
	}
}
IL2CPP_EXTERN_C  void SqlDateTime__ctor_m90301DA22BE353FE15A11AB194B07D12652AABAC_AdjustorThunk (RuntimeObject* __this, int32_t ___dayTicks0, int32_t ___timeTicks1, const RuntimeMethod* method)
{
	SqlDateTime_tFB5902479382E8A61934E274E7BBF3280A3D25B2* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<SqlDateTime_tFB5902479382E8A61934E274E7BBF3280A3D25B2*>(__this + _offset);
	SqlDateTime__ctor_m90301DA22BE353FE15A11AB194B07D12652AABAC(_thisAdjusted, ___dayTicks0, ___timeTicks1, method);
}
// System.Boolean System.Data.SqlTypes.SqlDateTime::get_IsNull()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool SqlDateTime_get_IsNull_m2B4C4F9196F7F0ED02EDD5110E06764EBED19D14 (SqlDateTime_tFB5902479382E8A61934E274E7BBF3280A3D25B2* __this, const RuntimeMethod* method) 
{
	{
		bool L_0 = __this->___m_fNotNull_0;
		return (bool)((((int32_t)L_0) == ((int32_t)0))? 1 : 0);
	}
}
IL2CPP_EXTERN_C  bool SqlDateTime_get_IsNull_m2B4C4F9196F7F0ED02EDD5110E06764EBED19D14_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	SqlDateTime_tFB5902479382E8A61934E274E7BBF3280A3D25B2* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<SqlDateTime_tFB5902479382E8A61934E274E7BBF3280A3D25B2*>(__this + _offset);
	bool _returnValue;
	_returnValue = SqlDateTime_get_IsNull_m2B4C4F9196F7F0ED02EDD5110E06764EBED19D14(_thisAdjusted, method);
	return _returnValue;
}
// System.TimeSpan System.Data.SqlTypes.SqlDateTime::ToTimeSpan(System.Data.SqlTypes.SqlDateTime)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A SqlDateTime_ToTimeSpan_m019418131216BCE556E01F515DF436816EB6DA93 (SqlDateTime_tFB5902479382E8A61934E274E7BBF3280A3D25B2 ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SqlDateTime_tFB5902479382E8A61934E274E7BBF3280A3D25B2_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int64_t V_0 = 0;
	{
		SqlDateTime_tFB5902479382E8A61934E274E7BBF3280A3D25B2 L_0 = ___value0;
		int32_t L_1 = L_0.___m_time_2;
		il2cpp_codegen_runtime_class_init_inline(SqlDateTime_tFB5902479382E8A61934E274E7BBF3280A3D25B2_il2cpp_TypeInfo_var);
		double L_2 = ((SqlDateTime_tFB5902479382E8A61934E274E7BBF3280A3D25B2_StaticFields*)il2cpp_codegen_static_fields_for(SqlDateTime_tFB5902479382E8A61934E274E7BBF3280A3D25B2_il2cpp_TypeInfo_var))->___s_SQLTicksPerMillisecond_3;
		V_0 = il2cpp_codegen_cast_double_to_int<int64_t>(((double)il2cpp_codegen_add(((double)(((double)L_1)/L_2)), (0.5))));
		SqlDateTime_tFB5902479382E8A61934E274E7BBF3280A3D25B2 L_3 = ___value0;
		int32_t L_4 = L_3.___m_day_1;
		int64_t L_5 = V_0;
		TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A L_6;
		memset((&L_6), 0, sizeof(L_6));
		TimeSpan__ctor_m061B122FA11D2063FE751C1F1D019DF1C8B10B1F_inline((&L_6), ((int64_t)il2cpp_codegen_add(((int64_t)il2cpp_codegen_multiply(((int64_t)L_4), ((int64_t)864000000000LL))), ((int64_t)il2cpp_codegen_multiply(L_5, ((int64_t)((int32_t)10000)))))), /*hidden argument*/NULL);
		return L_6;
	}
}
// System.DateTime System.Data.SqlTypes.SqlDateTime::ToDateTime(System.Data.SqlTypes.SqlDateTime)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D SqlDateTime_ToDateTime_m3041C978E6E1D35B5FE2AC4FAAB9A73C9863B9B1 (SqlDateTime_tFB5902479382E8A61934E274E7BBF3280A3D25B2 ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SqlDateTime_tFB5902479382E8A61934E274E7BBF3280A3D25B2_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_runtime_class_init_inline(SqlDateTime_tFB5902479382E8A61934E274E7BBF3280A3D25B2_il2cpp_TypeInfo_var);
		SqlDateTime_tFB5902479382E8A61934E274E7BBF3280A3D25B2 L_0 = ___value0;
		TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A L_1;
		L_1 = SqlDateTime_ToTimeSpan_m019418131216BCE556E01F515DF436816EB6DA93(L_0, NULL);
		DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D L_2;
		L_2 = DateTime_Add_mC882C6BBE75862360A1A0C733B4FFE3210D4B9B1((&((SqlDateTime_tFB5902479382E8A61934E274E7BBF3280A3D25B2_StaticFields*)il2cpp_codegen_static_fields_for(SqlDateTime_tFB5902479382E8A61934E274E7BBF3280A3D25B2_il2cpp_TypeInfo_var))->___s_SQLBaseDate_9), L_1, NULL);
		return L_2;
	}
}
// System.Data.SqlTypes.SqlDateTime System.Data.SqlTypes.SqlDateTime::FromTimeSpan(System.TimeSpan)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR SqlDateTime_tFB5902479382E8A61934E274E7BBF3280A3D25B2 SqlDateTime_FromTimeSpan_m5519F16CE76C7468EC508278EED4E1863C491AC8 (TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SqlDateTime_tFB5902479382E8A61934E274E7BBF3280A3D25B2_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int64_t V_1 = 0;
	int32_t V_2 = 0;
	{
		TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A L_0 = ___value0;
		il2cpp_codegen_runtime_class_init_inline(SqlDateTime_tFB5902479382E8A61934E274E7BBF3280A3D25B2_il2cpp_TypeInfo_var);
		TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A L_1 = ((SqlDateTime_tFB5902479382E8A61934E274E7BBF3280A3D25B2_StaticFields*)il2cpp_codegen_static_fields_for(SqlDateTime_tFB5902479382E8A61934E274E7BBF3280A3D25B2_il2cpp_TypeInfo_var))->___s_minTimeSpan_22;
		il2cpp_codegen_runtime_class_init_inline(TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A_il2cpp_TypeInfo_var);
		bool L_2;
		L_2 = TimeSpan_op_LessThan_m91C76FBEB38D80680A92A5FACA3A93810349B0FF(L_0, L_1, NULL);
		if (L_2)
		{
			goto IL_001a;
		}
	}
	{
		TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A L_3 = ___value0;
		il2cpp_codegen_runtime_class_init_inline(SqlDateTime_tFB5902479382E8A61934E274E7BBF3280A3D25B2_il2cpp_TypeInfo_var);
		TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A L_4 = ((SqlDateTime_tFB5902479382E8A61934E274E7BBF3280A3D25B2_StaticFields*)il2cpp_codegen_static_fields_for(SqlDateTime_tFB5902479382E8A61934E274E7BBF3280A3D25B2_il2cpp_TypeInfo_var))->___s_maxTimeSpan_23;
		il2cpp_codegen_runtime_class_init_inline(TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A_il2cpp_TypeInfo_var);
		bool L_5;
		L_5 = TimeSpan_op_GreaterThan_m346676C36494E3CD2560A604996F88CEC3D845C0(L_3, L_4, NULL);
		if (!L_5)
		{
			goto IL_0025;
		}
	}

IL_001a:
	{
		String_t* L_6;
		L_6 = SQLResource_get_DateTimeOverflowMessage_mEEEDB21E3930021128D500ECD9DA08CC80FF8299(NULL);
		SqlTypeException_t93D97B141C16DC7DC601ED2ED8166B0596C4494E* L_7 = (SqlTypeException_t93D97B141C16DC7DC601ED2ED8166B0596C4494E*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&SqlTypeException_t93D97B141C16DC7DC601ED2ED8166B0596C4494E_il2cpp_TypeInfo_var)));
		NullCheck(L_7);
		SqlTypeException__ctor_m31F48828AF14CF370270AC18D8AC5CCB176C3675(L_7, L_6, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_7, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&SqlDateTime_FromTimeSpan_m5519F16CE76C7468EC508278EED4E1863C491AC8_RuntimeMethod_var)));
	}

IL_0025:
	{
		int32_t L_8;
		L_8 = TimeSpan_get_Days_m1317F48F8D9849E161D1CDBEB5CA08344EAAC107((&___value0), NULL);
		V_0 = L_8;
		int64_t L_9;
		L_9 = TimeSpan_get_Ticks_mC50131E57621F29FACC53B3241432ABB874FA1B5_inline((&___value0), NULL);
		int32_t L_10 = V_0;
		V_1 = ((int64_t)il2cpp_codegen_subtract(L_9, ((int64_t)il2cpp_codegen_multiply(((int64_t)L_10), ((int64_t)864000000000LL)))));
		int64_t L_11 = V_1;
		if ((((int64_t)L_11) >= ((int64_t)((int64_t)0))))
		{
			goto IL_0057;
		}
	}
	{
		int32_t L_12 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_subtract(L_12, 1));
		int64_t L_13 = V_1;
		V_1 = ((int64_t)il2cpp_codegen_add(L_13, ((int64_t)864000000000LL)));
	}

IL_0057:
	{
		int64_t L_14 = V_1;
		il2cpp_codegen_runtime_class_init_inline(SqlDateTime_tFB5902479382E8A61934E274E7BBF3280A3D25B2_il2cpp_TypeInfo_var);
		double L_15 = ((SqlDateTime_tFB5902479382E8A61934E274E7BBF3280A3D25B2_StaticFields*)il2cpp_codegen_static_fields_for(SqlDateTime_tFB5902479382E8A61934E274E7BBF3280A3D25B2_il2cpp_TypeInfo_var))->___s_SQLTicksPerMillisecond_3;
		V_2 = il2cpp_codegen_cast_double_to_int<int32_t>(((double)il2cpp_codegen_add(((double)il2cpp_codegen_multiply(((double)(((double)L_14)/(10000.0))), L_15)), (0.5))));
		int32_t L_16 = V_2;
		int32_t L_17 = ((SqlDateTime_tFB5902479382E8A61934E274E7BBF3280A3D25B2_StaticFields*)il2cpp_codegen_static_fields_for(SqlDateTime_tFB5902479382E8A61934E274E7BBF3280A3D25B2_il2cpp_TypeInfo_var))->___s_maxTime_16;
		if ((((int32_t)L_16) <= ((int32_t)L_17)))
		{
			goto IL_0083;
		}
	}
	{
		V_2 = 0;
		int32_t L_18 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_18, 1));
	}

IL_0083:
	{
		int32_t L_19 = V_0;
		int32_t L_20 = V_2;
		SqlDateTime_tFB5902479382E8A61934E274E7BBF3280A3D25B2 L_21;
		memset((&L_21), 0, sizeof(L_21));
		SqlDateTime__ctor_m90301DA22BE353FE15A11AB194B07D12652AABAC((&L_21), L_19, L_20, /*hidden argument*/NULL);
		return L_21;
	}
}
// System.Data.SqlTypes.SqlDateTime System.Data.SqlTypes.SqlDateTime::FromDateTime(System.DateTime)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR SqlDateTime_tFB5902479382E8A61934E274E7BBF3280A3D25B2 SqlDateTime_FromDateTime_m804E9FA80E78F929BDEEE914D3D19532A6EE5618 (DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SqlDateTime_tFB5902479382E8A61934E274E7BBF3280A3D25B2_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D L_0 = ___value0;
		il2cpp_codegen_runtime_class_init_inline(DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D_il2cpp_TypeInfo_var);
		DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D L_1 = ((DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D_StaticFields*)il2cpp_codegen_static_fields_for(DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D_il2cpp_TypeInfo_var))->___MaxValue_33;
		bool L_2;
		L_2 = DateTime_op_Equality_m568A6320E27F3F7708C77BF8751925C8775DD921(L_0, L_1, NULL);
		if (!L_2)
		{
			goto IL_0013;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(SqlDateTime_tFB5902479382E8A61934E274E7BBF3280A3D25B2_il2cpp_TypeInfo_var);
		SqlDateTime_tFB5902479382E8A61934E274E7BBF3280A3D25B2 L_3 = ((SqlDateTime_tFB5902479382E8A61934E274E7BBF3280A3D25B2_StaticFields*)il2cpp_codegen_static_fields_for(SqlDateTime_tFB5902479382E8A61934E274E7BBF3280A3D25B2_il2cpp_TypeInfo_var))->___MaxValue_27;
		return L_3;
	}

IL_0013:
	{
		il2cpp_codegen_runtime_class_init_inline(SqlDateTime_tFB5902479382E8A61934E274E7BBF3280A3D25B2_il2cpp_TypeInfo_var);
		DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D L_4 = ((SqlDateTime_tFB5902479382E8A61934E274E7BBF3280A3D25B2_StaticFields*)il2cpp_codegen_static_fields_for(SqlDateTime_tFB5902479382E8A61934E274E7BBF3280A3D25B2_il2cpp_TypeInfo_var))->___s_SQLBaseDate_9;
		TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A L_5;
		L_5 = DateTime_Subtract_m4064A98F489219E9C414DF5C03EE041351B4502A((&___value0), L_4, NULL);
		SqlDateTime_tFB5902479382E8A61934E274E7BBF3280A3D25B2 L_6;
		L_6 = SqlDateTime_FromTimeSpan_m5519F16CE76C7468EC508278EED4E1863C491AC8(L_5, NULL);
		return L_6;
	}
}
// System.DateTime System.Data.SqlTypes.SqlDateTime::get_Value()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D SqlDateTime_get_Value_mDF93B79BDCDEBC53B67611B9426399F69BDFDDE5 (SqlDateTime_tFB5902479382E8A61934E274E7BBF3280A3D25B2* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SqlDateTime_tFB5902479382E8A61934E274E7BBF3280A3D25B2_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		bool L_0 = __this->___m_fNotNull_0;
		if (!L_0)
		{
			goto IL_0014;
		}
	}
	{
		SqlDateTime_tFB5902479382E8A61934E274E7BBF3280A3D25B2 L_1 = (*(SqlDateTime_tFB5902479382E8A61934E274E7BBF3280A3D25B2*)__this);
		il2cpp_codegen_runtime_class_init_inline(SqlDateTime_tFB5902479382E8A61934E274E7BBF3280A3D25B2_il2cpp_TypeInfo_var);
		DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D L_2;
		L_2 = SqlDateTime_ToDateTime_m3041C978E6E1D35B5FE2AC4FAAB9A73C9863B9B1(L_1, NULL);
		return L_2;
	}

IL_0014:
	{
		SqlNullValueException_t84216F8C86727B62B1C84EFCE7CFC403674ECAD7* L_3 = (SqlNullValueException_t84216F8C86727B62B1C84EFCE7CFC403674ECAD7*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&SqlNullValueException_t84216F8C86727B62B1C84EFCE7CFC403674ECAD7_il2cpp_TypeInfo_var)));
		NullCheck(L_3);
		SqlNullValueException__ctor_m069C95E1867258A1B57BD8719252132DFB6DE222(L_3, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_3, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&SqlDateTime_get_Value_mDF93B79BDCDEBC53B67611B9426399F69BDFDDE5_RuntimeMethod_var)));
	}
}
IL2CPP_EXTERN_C  DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D SqlDateTime_get_Value_mDF93B79BDCDEBC53B67611B9426399F69BDFDDE5_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	SqlDateTime_tFB5902479382E8A61934E274E7BBF3280A3D25B2* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<SqlDateTime_tFB5902479382E8A61934E274E7BBF3280A3D25B2*>(__this + _offset);
	DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D _returnValue;
	_returnValue = SqlDateTime_get_Value_mDF93B79BDCDEBC53B67611B9426399F69BDFDDE5(_thisAdjusted, method);
	return _returnValue;
}
// System.Int32 System.Data.SqlTypes.SqlDateTime::get_DayTicks()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t SqlDateTime_get_DayTicks_m75DB01D0E6B95AB21C9C07756DA966223AC68396 (SqlDateTime_tFB5902479382E8A61934E274E7BBF3280A3D25B2* __this, const RuntimeMethod* method) 
{
	{
		bool L_0 = __this->___m_fNotNull_0;
		if (!L_0)
		{
			goto IL_000f;
		}
	}
	{
		int32_t L_1 = __this->___m_day_1;
		return L_1;
	}

IL_000f:
	{
		SqlNullValueException_t84216F8C86727B62B1C84EFCE7CFC403674ECAD7* L_2 = (SqlNullValueException_t84216F8C86727B62B1C84EFCE7CFC403674ECAD7*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&SqlNullValueException_t84216F8C86727B62B1C84EFCE7CFC403674ECAD7_il2cpp_TypeInfo_var)));
		NullCheck(L_2);
		SqlNullValueException__ctor_m069C95E1867258A1B57BD8719252132DFB6DE222(L_2, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&SqlDateTime_get_DayTicks_m75DB01D0E6B95AB21C9C07756DA966223AC68396_RuntimeMethod_var)));
	}
}
IL2CPP_EXTERN_C  int32_t SqlDateTime_get_DayTicks_m75DB01D0E6B95AB21C9C07756DA966223AC68396_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	SqlDateTime_tFB5902479382E8A61934E274E7BBF3280A3D25B2* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<SqlDateTime_tFB5902479382E8A61934E274E7BBF3280A3D25B2*>(__this + _offset);
	int32_t _returnValue;
	_returnValue = SqlDateTime_get_DayTicks_m75DB01D0E6B95AB21C9C07756DA966223AC68396(_thisAdjusted, method);
	return _returnValue;
}
// System.Int32 System.Data.SqlTypes.SqlDateTime::get_TimeTicks()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t SqlDateTime_get_TimeTicks_m653A467CA66F037A012E60BA69696ACEFD366936 (SqlDateTime_tFB5902479382E8A61934E274E7BBF3280A3D25B2* __this, const RuntimeMethod* method) 
{
	{
		bool L_0 = __this->___m_fNotNull_0;
		if (!L_0)
		{
			goto IL_000f;
		}
	}
	{
		int32_t L_1 = __this->___m_time_2;
		return L_1;
	}

IL_000f:
	{
		SqlNullValueException_t84216F8C86727B62B1C84EFCE7CFC403674ECAD7* L_2 = (SqlNullValueException_t84216F8C86727B62B1C84EFCE7CFC403674ECAD7*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&SqlNullValueException_t84216F8C86727B62B1C84EFCE7CFC403674ECAD7_il2cpp_TypeInfo_var)));
		NullCheck(L_2);
		SqlNullValueException__ctor_m069C95E1867258A1B57BD8719252132DFB6DE222(L_2, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&SqlDateTime_get_TimeTicks_m653A467CA66F037A012E60BA69696ACEFD366936_RuntimeMethod_var)));
	}
}
IL2CPP_EXTERN_C  int32_t SqlDateTime_get_TimeTicks_m653A467CA66F037A012E60BA69696ACEFD366936_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	SqlDateTime_tFB5902479382E8A61934E274E7BBF3280A3D25B2* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<SqlDateTime_tFB5902479382E8A61934E274E7BBF3280A3D25B2*>(__this + _offset);
	int32_t _returnValue;
	_returnValue = SqlDateTime_get_TimeTicks_m653A467CA66F037A012E60BA69696ACEFD366936(_thisAdjusted, method);
	return _returnValue;
}
// System.String System.Data.SqlTypes.SqlDateTime::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* SqlDateTime_ToString_m23C8FE9641BD64B9BE5D9022F24DBC68739CF8AE (SqlDateTime_tFB5902479382E8A61934E274E7BBF3280A3D25B2* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SqlDateTime_tFB5902479382E8A61934E274E7BBF3280A3D25B2_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		bool L_0;
		L_0 = SqlDateTime_get_IsNull_m2B4C4F9196F7F0ED02EDD5110E06764EBED19D14(__this, NULL);
		if (!L_0)
		{
			goto IL_000e;
		}
	}
	{
		String_t* L_1;
		L_1 = SQLResource_get_NullString_m597166B3FD1AB8CE8AD7030876EA0F77472CC1E8(NULL);
		return L_1;
	}

IL_000e:
	{
		SqlDateTime_tFB5902479382E8A61934E274E7BBF3280A3D25B2 L_2 = (*(SqlDateTime_tFB5902479382E8A61934E274E7BBF3280A3D25B2*)__this);
		il2cpp_codegen_runtime_class_init_inline(SqlDateTime_tFB5902479382E8A61934E274E7BBF3280A3D25B2_il2cpp_TypeInfo_var);
		DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D L_3;
		L_3 = SqlDateTime_ToDateTime_m3041C978E6E1D35B5FE2AC4FAAB9A73C9863B9B1(L_2, NULL);
		V_0 = L_3;
		String_t* L_4;
		L_4 = DateTime_ToString_m66457C11C42C07E2F437A9D899E6E3FB9FD77B50((&V_0), (RuntimeObject*)NULL, NULL);
		return L_4;
	}
}
IL2CPP_EXTERN_C  String_t* SqlDateTime_ToString_m23C8FE9641BD64B9BE5D9022F24DBC68739CF8AE_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	SqlDateTime_tFB5902479382E8A61934E274E7BBF3280A3D25B2* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<SqlDateTime_tFB5902479382E8A61934E274E7BBF3280A3D25B2*>(__this + _offset);
	String_t* _returnValue;
	_returnValue = SqlDateTime_ToString_m23C8FE9641BD64B9BE5D9022F24DBC68739CF8AE(_thisAdjusted, method);
	return _returnValue;
}
// System.Data.SqlTypes.SqlBoolean System.Data.SqlTypes.SqlDateTime::op_Equality(System.Data.SqlTypes.SqlDateTime,System.Data.SqlTypes.SqlDateTime)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR SqlBoolean_tAD22108BE5F656A5AAFE19B054B2CA56C0AEE1D7 SqlDateTime_op_Equality_m69832276B8B7F615ABB2E5FC94BD20626F9806A8 (SqlDateTime_tFB5902479382E8A61934E274E7BBF3280A3D25B2 ___x0, SqlDateTime_tFB5902479382E8A61934E274E7BBF3280A3D25B2 ___y1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SqlBoolean_tAD22108BE5F656A5AAFE19B054B2CA56C0AEE1D7_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t G_B5_0 = 0;
	{
		bool L_0;
		L_0 = SqlDateTime_get_IsNull_m2B4C4F9196F7F0ED02EDD5110E06764EBED19D14((&___x0), NULL);
		if (L_0)
		{
			goto IL_0037;
		}
	}
	{
		bool L_1;
		L_1 = SqlDateTime_get_IsNull_m2B4C4F9196F7F0ED02EDD5110E06764EBED19D14((&___y1), NULL);
		if (L_1)
		{
			goto IL_0037;
		}
	}
	{
		SqlDateTime_tFB5902479382E8A61934E274E7BBF3280A3D25B2 L_2 = ___x0;
		int32_t L_3 = L_2.___m_day_1;
		SqlDateTime_tFB5902479382E8A61934E274E7BBF3280A3D25B2 L_4 = ___y1;
		int32_t L_5 = L_4.___m_day_1;
		if ((!(((uint32_t)L_3) == ((uint32_t)L_5))))
		{
			goto IL_0030;
		}
	}
	{
		SqlDateTime_tFB5902479382E8A61934E274E7BBF3280A3D25B2 L_6 = ___x0;
		int32_t L_7 = L_6.___m_time_2;
		SqlDateTime_tFB5902479382E8A61934E274E7BBF3280A3D25B2 L_8 = ___y1;
		int32_t L_9 = L_8.___m_time_2;
		G_B5_0 = ((((int32_t)L_7) == ((int32_t)L_9))? 1 : 0);
		goto IL_0031;
	}

IL_0030:
	{
		G_B5_0 = 0;
	}

IL_0031:
	{
		SqlBoolean_tAD22108BE5F656A5AAFE19B054B2CA56C0AEE1D7 L_10;
		memset((&L_10), 0, sizeof(L_10));
		SqlBoolean__ctor_mB96F7558946F0B492BCC878FA3C5F52EBE300900((&L_10), (bool)G_B5_0, /*hidden argument*/NULL);
		return L_10;
	}

IL_0037:
	{
		il2cpp_codegen_runtime_class_init_inline(SqlBoolean_tAD22108BE5F656A5AAFE19B054B2CA56C0AEE1D7_il2cpp_TypeInfo_var);
		SqlBoolean_tAD22108BE5F656A5AAFE19B054B2CA56C0AEE1D7 L_11 = ((SqlBoolean_tAD22108BE5F656A5AAFE19B054B2CA56C0AEE1D7_StaticFields*)il2cpp_codegen_static_fields_for(SqlBoolean_tAD22108BE5F656A5AAFE19B054B2CA56C0AEE1D7_il2cpp_TypeInfo_var))->___Null_3;
		return L_11;
	}
}
// System.Data.SqlTypes.SqlBoolean System.Data.SqlTypes.SqlDateTime::op_LessThan(System.Data.SqlTypes.SqlDateTime,System.Data.SqlTypes.SqlDateTime)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR SqlBoolean_tAD22108BE5F656A5AAFE19B054B2CA56C0AEE1D7 SqlDateTime_op_LessThan_mBA24CB38DF87C8DC64F764157557746A410C49A7 (SqlDateTime_tFB5902479382E8A61934E274E7BBF3280A3D25B2 ___x0, SqlDateTime_tFB5902479382E8A61934E274E7BBF3280A3D25B2 ___y1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SqlBoolean_tAD22108BE5F656A5AAFE19B054B2CA56C0AEE1D7_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t G_B7_0 = 0;
	{
		bool L_0;
		L_0 = SqlDateTime_get_IsNull_m2B4C4F9196F7F0ED02EDD5110E06764EBED19D14((&___x0), NULL);
		if (L_0)
		{
			goto IL_0048;
		}
	}
	{
		bool L_1;
		L_1 = SqlDateTime_get_IsNull_m2B4C4F9196F7F0ED02EDD5110E06764EBED19D14((&___y1), NULL);
		if (L_1)
		{
			goto IL_0048;
		}
	}
	{
		SqlDateTime_tFB5902479382E8A61934E274E7BBF3280A3D25B2 L_2 = ___x0;
		int32_t L_3 = L_2.___m_day_1;
		SqlDateTime_tFB5902479382E8A61934E274E7BBF3280A3D25B2 L_4 = ___y1;
		int32_t L_5 = L_4.___m_day_1;
		if ((((int32_t)L_3) < ((int32_t)L_5)))
		{
			goto IL_0041;
		}
	}
	{
		SqlDateTime_tFB5902479382E8A61934E274E7BBF3280A3D25B2 L_6 = ___x0;
		int32_t L_7 = L_6.___m_day_1;
		SqlDateTime_tFB5902479382E8A61934E274E7BBF3280A3D25B2 L_8 = ___y1;
		int32_t L_9 = L_8.___m_day_1;
		if ((!(((uint32_t)L_7) == ((uint32_t)L_9))))
		{
			goto IL_003e;
		}
	}
	{
		SqlDateTime_tFB5902479382E8A61934E274E7BBF3280A3D25B2 L_10 = ___x0;
		int32_t L_11 = L_10.___m_time_2;
		SqlDateTime_tFB5902479382E8A61934E274E7BBF3280A3D25B2 L_12 = ___y1;
		int32_t L_13 = L_12.___m_time_2;
		G_B7_0 = ((((int32_t)L_11) < ((int32_t)L_13))? 1 : 0);
		goto IL_0042;
	}

IL_003e:
	{
		G_B7_0 = 0;
		goto IL_0042;
	}

IL_0041:
	{
		G_B7_0 = 1;
	}

IL_0042:
	{
		SqlBoolean_tAD22108BE5F656A5AAFE19B054B2CA56C0AEE1D7 L_14;
		memset((&L_14), 0, sizeof(L_14));
		SqlBoolean__ctor_mB96F7558946F0B492BCC878FA3C5F52EBE300900((&L_14), (bool)G_B7_0, /*hidden argument*/NULL);
		return L_14;
	}

IL_0048:
	{
		il2cpp_codegen_runtime_class_init_inline(SqlBoolean_tAD22108BE5F656A5AAFE19B054B2CA56C0AEE1D7_il2cpp_TypeInfo_var);
		SqlBoolean_tAD22108BE5F656A5AAFE19B054B2CA56C0AEE1D7 L_15 = ((SqlBoolean_tAD22108BE5F656A5AAFE19B054B2CA56C0AEE1D7_StaticFields*)il2cpp_codegen_static_fields_for(SqlBoolean_tAD22108BE5F656A5AAFE19B054B2CA56C0AEE1D7_il2cpp_TypeInfo_var))->___Null_3;
		return L_15;
	}
}
// System.Data.SqlTypes.SqlBoolean System.Data.SqlTypes.SqlDateTime::op_GreaterThan(System.Data.SqlTypes.SqlDateTime,System.Data.SqlTypes.SqlDateTime)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR SqlBoolean_tAD22108BE5F656A5AAFE19B054B2CA56C0AEE1D7 SqlDateTime_op_GreaterThan_m3599C4B6184D571C1319706F64C34ED32A229D43 (SqlDateTime_tFB5902479382E8A61934E274E7BBF3280A3D25B2 ___x0, SqlDateTime_tFB5902479382E8A61934E274E7BBF3280A3D25B2 ___y1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SqlBoolean_tAD22108BE5F656A5AAFE19B054B2CA56C0AEE1D7_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t G_B7_0 = 0;
	{
		bool L_0;
		L_0 = SqlDateTime_get_IsNull_m2B4C4F9196F7F0ED02EDD5110E06764EBED19D14((&___x0), NULL);
		if (L_0)
		{
			goto IL_0048;
		}
	}
	{
		bool L_1;
		L_1 = SqlDateTime_get_IsNull_m2B4C4F9196F7F0ED02EDD5110E06764EBED19D14((&___y1), NULL);
		if (L_1)
		{
			goto IL_0048;
		}
	}
	{
		SqlDateTime_tFB5902479382E8A61934E274E7BBF3280A3D25B2 L_2 = ___x0;
		int32_t L_3 = L_2.___m_day_1;
		SqlDateTime_tFB5902479382E8A61934E274E7BBF3280A3D25B2 L_4 = ___y1;
		int32_t L_5 = L_4.___m_day_1;
		if ((((int32_t)L_3) > ((int32_t)L_5)))
		{
			goto IL_0041;
		}
	}
	{
		SqlDateTime_tFB5902479382E8A61934E274E7BBF3280A3D25B2 L_6 = ___x0;
		int32_t L_7 = L_6.___m_day_1;
		SqlDateTime_tFB5902479382E8A61934E274E7BBF3280A3D25B2 L_8 = ___y1;
		int32_t L_9 = L_8.___m_day_1;
		if ((!(((uint32_t)L_7) == ((uint32_t)L_9))))
		{
			goto IL_003e;
		}
	}
	{
		SqlDateTime_tFB5902479382E8A61934E274E7BBF3280A3D25B2 L_10 = ___x0;
		int32_t L_11 = L_10.___m_time_2;
		SqlDateTime_tFB5902479382E8A61934E274E7BBF3280A3D25B2 L_12 = ___y1;
		int32_t L_13 = L_12.___m_time_2;
		G_B7_0 = ((((int32_t)L_11) > ((int32_t)L_13))? 1 : 0);
		goto IL_0042;
	}

IL_003e:
	{
		G_B7_0 = 0;
		goto IL_0042;
	}

IL_0041:
	{
		G_B7_0 = 1;
	}

IL_0042:
	{
		SqlBoolean_tAD22108BE5F656A5AAFE19B054B2CA56C0AEE1D7 L_14;
		memset((&L_14), 0, sizeof(L_14));
		SqlBoolean__ctor_mB96F7558946F0B492BCC878FA3C5F52EBE300900((&L_14), (bool)G_B7_0, /*hidden argument*/NULL);
		return L_14;
	}

IL_0048:
	{
		il2cpp_codegen_runtime_class_init_inline(SqlBoolean_tAD22108BE5F656A5AAFE19B054B2CA56C0AEE1D7_il2cpp_TypeInfo_var);
		SqlBoolean_tAD22108BE5F656A5AAFE19B054B2CA56C0AEE1D7 L_15 = ((SqlBoolean_tAD22108BE5F656A5AAFE19B054B2CA56C0AEE1D7_StaticFields*)il2cpp_codegen_static_fields_for(SqlBoolean_tAD22108BE5F656A5AAFE19B054B2CA56C0AEE1D7_il2cpp_TypeInfo_var))->___Null_3;
		return L_15;
	}
}
// System.Int32 System.Data.SqlTypes.SqlDateTime::CompareTo(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t SqlDateTime_CompareTo_m82CED8E48367B756FD2F10929C6230D8F018EF77 (SqlDateTime_tFB5902479382E8A61934E274E7BBF3280A3D25B2* __this, RuntimeObject* ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SqlDateTime_tFB5902479382E8A61934E274E7BBF3280A3D25B2_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	SqlDateTime_tFB5902479382E8A61934E274E7BBF3280A3D25B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		RuntimeObject* L_0 = ___value0;
		if (!((RuntimeObject*)IsInstSealed((RuntimeObject*)L_0, SqlDateTime_tFB5902479382E8A61934E274E7BBF3280A3D25B2_il2cpp_TypeInfo_var)))
		{
			goto IL_0017;
		}
	}
	{
		RuntimeObject* L_1 = ___value0;
		V_0 = ((*(SqlDateTime_tFB5902479382E8A61934E274E7BBF3280A3D25B2*)((SqlDateTime_tFB5902479382E8A61934E274E7BBF3280A3D25B2*)(SqlDateTime_tFB5902479382E8A61934E274E7BBF3280A3D25B2*)UnBox(L_1, SqlDateTime_tFB5902479382E8A61934E274E7BBF3280A3D25B2_il2cpp_TypeInfo_var))));
		SqlDateTime_tFB5902479382E8A61934E274E7BBF3280A3D25B2 L_2 = V_0;
		int32_t L_3;
		L_3 = SqlDateTime_CompareTo_mFC30CA07C33E98986C7B6B91D2C7F02F644F28A3(__this, L_2, NULL);
		return L_3;
	}

IL_0017:
	{
		RuntimeObject* L_4 = ___value0;
		NullCheck(L_4);
		Type_t* L_5;
		L_5 = Object_GetType_mE10A8FC1E57F3DF29972CCBC026C2DC3942263B3(L_4, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_6 = { reinterpret_cast<intptr_t> (((RuntimeType*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&SqlDateTime_tFB5902479382E8A61934E274E7BBF3280A3D25B2_0_0_0_var))) };
		il2cpp_codegen_runtime_class_init_inline(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Type_t_il2cpp_TypeInfo_var)));
		Type_t* L_7;
		L_7 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_6, NULL);
		il2cpp_codegen_runtime_class_init_inline(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ADP_t2C39CD1D5CEFC1B88FF6F7C7AD1916F0FD538CC0_il2cpp_TypeInfo_var)));
		Exception_t* L_8;
		L_8 = ADP_WrongType_mCCF6317939800042630DACE6F6CA69C48565B472(L_5, L_7, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_8, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&SqlDateTime_CompareTo_m82CED8E48367B756FD2F10929C6230D8F018EF77_RuntimeMethod_var)));
	}
}
IL2CPP_EXTERN_C  int32_t SqlDateTime_CompareTo_m82CED8E48367B756FD2F10929C6230D8F018EF77_AdjustorThunk (RuntimeObject* __this, RuntimeObject* ___value0, const RuntimeMethod* method)
{
	SqlDateTime_tFB5902479382E8A61934E274E7BBF3280A3D25B2* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<SqlDateTime_tFB5902479382E8A61934E274E7BBF3280A3D25B2*>(__this + _offset);
	int32_t _returnValue;
	_returnValue = SqlDateTime_CompareTo_m82CED8E48367B756FD2F10929C6230D8F018EF77(_thisAdjusted, ___value0, method);
	return _returnValue;
}
// System.Int32 System.Data.SqlTypes.SqlDateTime::CompareTo(System.Data.SqlTypes.SqlDateTime)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t SqlDateTime_CompareTo_mFC30CA07C33E98986C7B6B91D2C7F02F644F28A3 (SqlDateTime_tFB5902479382E8A61934E274E7BBF3280A3D25B2* __this, SqlDateTime_tFB5902479382E8A61934E274E7BBF3280A3D25B2 ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SqlBoolean_tAD22108BE5F656A5AAFE19B054B2CA56C0AEE1D7_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SqlDateTime_tFB5902479382E8A61934E274E7BBF3280A3D25B2_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		bool L_0;
		L_0 = SqlDateTime_get_IsNull_m2B4C4F9196F7F0ED02EDD5110E06764EBED19D14(__this, NULL);
		if (!L_0)
		{
			goto IL_0015;
		}
	}
	{
		bool L_1;
		L_1 = SqlDateTime_get_IsNull_m2B4C4F9196F7F0ED02EDD5110E06764EBED19D14((&___value0), NULL);
		if (L_1)
		{
			goto IL_0013;
		}
	}
	{
		return (-1);
	}

IL_0013:
	{
		return 0;
	}

IL_0015:
	{
		bool L_2;
		L_2 = SqlDateTime_get_IsNull_m2B4C4F9196F7F0ED02EDD5110E06764EBED19D14((&___value0), NULL);
		if (!L_2)
		{
			goto IL_0020;
		}
	}
	{
		return 1;
	}

IL_0020:
	{
		SqlDateTime_tFB5902479382E8A61934E274E7BBF3280A3D25B2 L_3 = (*(SqlDateTime_tFB5902479382E8A61934E274E7BBF3280A3D25B2*)__this);
		SqlDateTime_tFB5902479382E8A61934E274E7BBF3280A3D25B2 L_4 = ___value0;
		il2cpp_codegen_runtime_class_init_inline(SqlDateTime_tFB5902479382E8A61934E274E7BBF3280A3D25B2_il2cpp_TypeInfo_var);
		SqlBoolean_tAD22108BE5F656A5AAFE19B054B2CA56C0AEE1D7 L_5;
		L_5 = SqlDateTime_op_LessThan_mBA24CB38DF87C8DC64F764157557746A410C49A7(L_3, L_4, NULL);
		il2cpp_codegen_runtime_class_init_inline(SqlBoolean_tAD22108BE5F656A5AAFE19B054B2CA56C0AEE1D7_il2cpp_TypeInfo_var);
		bool L_6;
		L_6 = SqlBoolean_op_True_m5CC9CAC092080E77EB6322BB0CDD656DFD38FF94(L_5, NULL);
		if (!L_6)
		{
			goto IL_0035;
		}
	}
	{
		return (-1);
	}

IL_0035:
	{
		SqlDateTime_tFB5902479382E8A61934E274E7BBF3280A3D25B2 L_7 = (*(SqlDateTime_tFB5902479382E8A61934E274E7BBF3280A3D25B2*)__this);
		SqlDateTime_tFB5902479382E8A61934E274E7BBF3280A3D25B2 L_8 = ___value0;
		il2cpp_codegen_runtime_class_init_inline(SqlDateTime_tFB5902479382E8A61934E274E7BBF3280A3D25B2_il2cpp_TypeInfo_var);
		SqlBoolean_tAD22108BE5F656A5AAFE19B054B2CA56C0AEE1D7 L_9;
		L_9 = SqlDateTime_op_GreaterThan_m3599C4B6184D571C1319706F64C34ED32A229D43(L_7, L_8, NULL);
		il2cpp_codegen_runtime_class_init_inline(SqlBoolean_tAD22108BE5F656A5AAFE19B054B2CA56C0AEE1D7_il2cpp_TypeInfo_var);
		bool L_10;
		L_10 = SqlBoolean_op_True_m5CC9CAC092080E77EB6322BB0CDD656DFD38FF94(L_9, NULL);
		if (!L_10)
		{
			goto IL_004a;
		}
	}
	{
		return 1;
	}

IL_004a:
	{
		return 0;
	}
}
IL2CPP_EXTERN_C  int32_t SqlDateTime_CompareTo_mFC30CA07C33E98986C7B6B91D2C7F02F644F28A3_AdjustorThunk (RuntimeObject* __this, SqlDateTime_tFB5902479382E8A61934E274E7BBF3280A3D25B2 ___value0, const RuntimeMethod* method)
{
	SqlDateTime_tFB5902479382E8A61934E274E7BBF3280A3D25B2* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<SqlDateTime_tFB5902479382E8A61934E274E7BBF3280A3D25B2*>(__this + _offset);
	int32_t _returnValue;
	_returnValue = SqlDateTime_CompareTo_mFC30CA07C33E98986C7B6B91D2C7F02F644F28A3(_thisAdjusted, ___value0, method);
	return _returnValue;
}
// System.Boolean System.Data.SqlTypes.SqlDateTime::Equals(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool SqlDateTime_Equals_m9401BFF901122AAD43042D8F4D54DFA26C0D6634 (SqlDateTime_tFB5902479382E8A61934E274E7BBF3280A3D25B2* __this, RuntimeObject* ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SqlDateTime_tFB5902479382E8A61934E274E7BBF3280A3D25B2_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	SqlDateTime_tFB5902479382E8A61934E274E7BBF3280A3D25B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	SqlBoolean_tAD22108BE5F656A5AAFE19B054B2CA56C0AEE1D7 V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		RuntimeObject* L_0 = ___value0;
		if (((RuntimeObject*)IsInstSealed((RuntimeObject*)L_0, SqlDateTime_tFB5902479382E8A61934E274E7BBF3280A3D25B2_il2cpp_TypeInfo_var)))
		{
			goto IL_000a;
		}
	}
	{
		return (bool)0;
	}

IL_000a:
	{
		RuntimeObject* L_1 = ___value0;
		V_0 = ((*(SqlDateTime_tFB5902479382E8A61934E274E7BBF3280A3D25B2*)((SqlDateTime_tFB5902479382E8A61934E274E7BBF3280A3D25B2*)(SqlDateTime_tFB5902479382E8A61934E274E7BBF3280A3D25B2*)UnBox(L_1, SqlDateTime_tFB5902479382E8A61934E274E7BBF3280A3D25B2_il2cpp_TypeInfo_var))));
		bool L_2;
		L_2 = SqlDateTime_get_IsNull_m2B4C4F9196F7F0ED02EDD5110E06764EBED19D14((&V_0), NULL);
		if (L_2)
		{
			goto IL_0022;
		}
	}
	{
		bool L_3;
		L_3 = SqlDateTime_get_IsNull_m2B4C4F9196F7F0ED02EDD5110E06764EBED19D14(__this, NULL);
		if (!L_3)
		{
			goto IL_0034;
		}
	}

IL_0022:
	{
		bool L_4;
		L_4 = SqlDateTime_get_IsNull_m2B4C4F9196F7F0ED02EDD5110E06764EBED19D14((&V_0), NULL);
		if (!L_4)
		{
			goto IL_0032;
		}
	}
	{
		bool L_5;
		L_5 = SqlDateTime_get_IsNull_m2B4C4F9196F7F0ED02EDD5110E06764EBED19D14(__this, NULL);
		return L_5;
	}

IL_0032:
	{
		return (bool)0;
	}

IL_0034:
	{
		SqlDateTime_tFB5902479382E8A61934E274E7BBF3280A3D25B2 L_6 = (*(SqlDateTime_tFB5902479382E8A61934E274E7BBF3280A3D25B2*)__this);
		SqlDateTime_tFB5902479382E8A61934E274E7BBF3280A3D25B2 L_7 = V_0;
		il2cpp_codegen_runtime_class_init_inline(SqlDateTime_tFB5902479382E8A61934E274E7BBF3280A3D25B2_il2cpp_TypeInfo_var);
		SqlBoolean_tAD22108BE5F656A5AAFE19B054B2CA56C0AEE1D7 L_8;
		L_8 = SqlDateTime_op_Equality_m69832276B8B7F615ABB2E5FC94BD20626F9806A8(L_6, L_7, NULL);
		V_1 = L_8;
		bool L_9;
		L_9 = SqlBoolean_get_Value_m26D2659D06D56FFBF158051EB3726BAB693A7D97((&V_1), NULL);
		return L_9;
	}
}
IL2CPP_EXTERN_C  bool SqlDateTime_Equals_m9401BFF901122AAD43042D8F4D54DFA26C0D6634_AdjustorThunk (RuntimeObject* __this, RuntimeObject* ___value0, const RuntimeMethod* method)
{
	SqlDateTime_tFB5902479382E8A61934E274E7BBF3280A3D25B2* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<SqlDateTime_tFB5902479382E8A61934E274E7BBF3280A3D25B2*>(__this + _offset);
	bool _returnValue;
	_returnValue = SqlDateTime_Equals_m9401BFF901122AAD43042D8F4D54DFA26C0D6634(_thisAdjusted, ___value0, method);
	return _returnValue;
}
// System.Int32 System.Data.SqlTypes.SqlDateTime::GetHashCode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t SqlDateTime_GetHashCode_mA64AF3F47A16ABE3388BCADFA4C4AB9B2D34ED8C (SqlDateTime_tFB5902479382E8A61934E274E7BBF3280A3D25B2* __this, const RuntimeMethod* method) 
{
	DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		bool L_0;
		L_0 = SqlDateTime_get_IsNull_m2B4C4F9196F7F0ED02EDD5110E06764EBED19D14(__this, NULL);
		if (L_0)
		{
			goto IL_0017;
		}
	}
	{
		DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D L_1;
		L_1 = SqlDateTime_get_Value_mDF93B79BDCDEBC53B67611B9426399F69BDFDDE5(__this, NULL);
		V_0 = L_1;
		int32_t L_2;
		L_2 = DateTime_GetHashCode_m206A3B9394E6D089311A1A81305A5A1AB30B2D99((&V_0), NULL);
		return L_2;
	}

IL_0017:
	{
		return 0;
	}
}
IL2CPP_EXTERN_C  int32_t SqlDateTime_GetHashCode_mA64AF3F47A16ABE3388BCADFA4C4AB9B2D34ED8C_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	SqlDateTime_tFB5902479382E8A61934E274E7BBF3280A3D25B2* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<SqlDateTime_tFB5902479382E8A61934E274E7BBF3280A3D25B2*>(__this + _offset);
	int32_t _returnValue;
	_returnValue = SqlDateTime_GetHashCode_mA64AF3F47A16ABE3388BCADFA4C4AB9B2D34ED8C(_thisAdjusted, method);
	return _returnValue;
}
// System.Xml.Schema.XmlSchema System.Data.SqlTypes.SqlDateTime::System.Xml.Serialization.IXmlSerializable.GetSchema()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR XmlSchema_t5C9506D00418BF5FD524254D0C6C405C620C941D* SqlDateTime_System_Xml_Serialization_IXmlSerializable_GetSchema_mC4C4D26114D5A0A665F1C3EDF1035C1819E39EB5 (SqlDateTime_tFB5902479382E8A61934E274E7BBF3280A3D25B2* __this, const RuntimeMethod* method) 
{
	{
		return (XmlSchema_t5C9506D00418BF5FD524254D0C6C405C620C941D*)NULL;
	}
}
IL2CPP_EXTERN_C  XmlSchema_t5C9506D00418BF5FD524254D0C6C405C620C941D* SqlDateTime_System_Xml_Serialization_IXmlSerializable_GetSchema_mC4C4D26114D5A0A665F1C3EDF1035C1819E39EB5_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	SqlDateTime_tFB5902479382E8A61934E274E7BBF3280A3D25B2* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<SqlDateTime_tFB5902479382E8A61934E274E7BBF3280A3D25B2*>(__this + _offset);
	XmlSchema_t5C9506D00418BF5FD524254D0C6C405C620C941D* _returnValue;
	_returnValue = SqlDateTime_System_Xml_Serialization_IXmlSerializable_GetSchema_mC4C4D26114D5A0A665F1C3EDF1035C1819E39EB5(_thisAdjusted, method);
	return _returnValue;
}
// System.Void System.Data.SqlTypes.SqlDateTime::System.Xml.Serialization.IXmlSerializable.ReadXml(System.Xml.XmlReader)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SqlDateTime_System_Xml_Serialization_IXmlSerializable_ReadXml_m6F05BF9F400FA1CB4FD51EBC1F5EB161C9B01141 (SqlDateTime_tFB5902479382E8A61934E274E7BBF3280A3D25B2* __this, XmlReader_t4C709DEF5F01606ECB60B638F1BD6F6E0A9116FD* ___reader0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SqlDateTime_tFB5902479382E8A61934E274E7BBF3280A3D25B2_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&XmlConvert_t5D100AFD62FF717BD4F8A6CABA9EDF7A5DF719EA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2CAB73EF57D40E8B63A7CA91D057C0B68DB59100);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral7C014955313A7D33D5D04696B884B25325E6393C);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D V_1;
	memset((&V_1), 0, sizeof(V_1));
	SqlDateTime_tFB5902479382E8A61934E274E7BBF3280A3D25B2 V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		XmlReader_t4C709DEF5F01606ECB60B638F1BD6F6E0A9116FD* L_0 = ___reader0;
		NullCheck(L_0);
		String_t* L_1;
		L_1 = VirtualFuncInvoker2< String_t*, String_t*, String_t* >::Invoke(18 /* System.String System.Xml.XmlReader::GetAttribute(System.String,System.String) */, L_0, _stringLiteral2CAB73EF57D40E8B63A7CA91D057C0B68DB59100, _stringLiteral7C014955313A7D33D5D04696B884B25325E6393C);
		V_0 = L_1;
		String_t* L_2 = V_0;
		if (!L_2)
		{
			goto IL_002b;
		}
	}
	{
		String_t* L_3 = V_0;
		il2cpp_codegen_runtime_class_init_inline(XmlConvert_t5D100AFD62FF717BD4F8A6CABA9EDF7A5DF719EA_il2cpp_TypeInfo_var);
		bool L_4;
		L_4 = XmlConvert_ToBoolean_mB95C798BD6D849071E6A686CBF85851C25C7006A(L_3, NULL);
		if (!L_4)
		{
			goto IL_002b;
		}
	}
	{
		XmlReader_t4C709DEF5F01606ECB60B638F1BD6F6E0A9116FD* L_5 = ___reader0;
		NullCheck(L_5);
		String_t* L_6;
		L_6 = VirtualFuncInvoker0< String_t* >::Invoke(35 /* System.String System.Xml.XmlReader::ReadElementString() */, L_5);
		__this->___m_fNotNull_0 = (bool)0;
		return;
	}

IL_002b:
	{
		XmlReader_t4C709DEF5F01606ECB60B638F1BD6F6E0A9116FD* L_7 = ___reader0;
		NullCheck(L_7);
		String_t* L_8;
		L_8 = VirtualFuncInvoker0< String_t* >::Invoke(35 /* System.String System.Xml.XmlReader::ReadElementString() */, L_7);
		il2cpp_codegen_runtime_class_init_inline(XmlConvert_t5D100AFD62FF717BD4F8A6CABA9EDF7A5DF719EA_il2cpp_TypeInfo_var);
		DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D L_9;
		L_9 = XmlConvert_ToDateTime_m658051D16D0072FD3F58E4E6BFE8FB75F4F00A16(L_8, 3, NULL);
		V_1 = L_9;
		int32_t L_10;
		L_10 = DateTime_get_Kind_m83D45222D9386873333A178B9AB31AC2B2F2C993((&V_1), NULL);
		if (!L_10)
		{
			goto IL_004c;
		}
	}
	{
		String_t* L_11;
		L_11 = SQLResource_get_TimeZoneSpecifiedMessage_m23324A7E1D2337998092F5677B72973A604911A7(NULL);
		SqlTypeException_t93D97B141C16DC7DC601ED2ED8166B0596C4494E* L_12 = (SqlTypeException_t93D97B141C16DC7DC601ED2ED8166B0596C4494E*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&SqlTypeException_t93D97B141C16DC7DC601ED2ED8166B0596C4494E_il2cpp_TypeInfo_var)));
		NullCheck(L_12);
		SqlTypeException__ctor_m31F48828AF14CF370270AC18D8AC5CCB176C3675(L_12, L_11, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_12, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&SqlDateTime_System_Xml_Serialization_IXmlSerializable_ReadXml_m6F05BF9F400FA1CB4FD51EBC1F5EB161C9B01141_RuntimeMethod_var)));
	}

IL_004c:
	{
		DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D L_13 = V_1;
		il2cpp_codegen_runtime_class_init_inline(SqlDateTime_tFB5902479382E8A61934E274E7BBF3280A3D25B2_il2cpp_TypeInfo_var);
		SqlDateTime_tFB5902479382E8A61934E274E7BBF3280A3D25B2 L_14;
		L_14 = SqlDateTime_FromDateTime_m804E9FA80E78F929BDEEE914D3D19532A6EE5618(L_13, NULL);
		V_2 = L_14;
		int32_t L_15;
		L_15 = SqlDateTime_get_DayTicks_m75DB01D0E6B95AB21C9C07756DA966223AC68396((&V_2), NULL);
		__this->___m_day_1 = L_15;
		int32_t L_16;
		L_16 = SqlDateTime_get_TimeTicks_m653A467CA66F037A012E60BA69696ACEFD366936((&V_2), NULL);
		__this->___m_time_2 = L_16;
		__this->___m_fNotNull_0 = (bool)1;
		return;
	}
}
IL2CPP_EXTERN_C  void SqlDateTime_System_Xml_Serialization_IXmlSerializable_ReadXml_m6F05BF9F400FA1CB4FD51EBC1F5EB161C9B01141_AdjustorThunk (RuntimeObject* __this, XmlReader_t4C709DEF5F01606ECB60B638F1BD6F6E0A9116FD* ___reader0, const RuntimeMethod* method)
{
	SqlDateTime_tFB5902479382E8A61934E274E7BBF3280A3D25B2* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<SqlDateTime_tFB5902479382E8A61934E274E7BBF3280A3D25B2*>(__this + _offset);
	SqlDateTime_System_Xml_Serialization_IXmlSerializable_ReadXml_m6F05BF9F400FA1CB4FD51EBC1F5EB161C9B01141(_thisAdjusted, ___reader0, method);
}
// System.Void System.Data.SqlTypes.SqlDateTime::System.Xml.Serialization.IXmlSerializable.WriteXml(System.Xml.XmlWriter)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SqlDateTime_System_Xml_Serialization_IXmlSerializable_WriteXml_mEDF294D37DAEE8AC569B023A2E43E7ECA1318263 (SqlDateTime_tFB5902479382E8A61934E274E7BBF3280A3D25B2* __this, XmlWriter_tCBC8D0C4891828A0A384C68D0414337F20E1A17F* ___writer0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SqlDateTime_tFB5902479382E8A61934E274E7BBF3280A3D25B2_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&XmlConvert_t5D100AFD62FF717BD4F8A6CABA9EDF7A5DF719EA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2CAB73EF57D40E8B63A7CA91D057C0B68DB59100);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral6D67ADE9CC145DA3A39BC63DF500A7B0EC88CE4A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral7C014955313A7D33D5D04696B884B25325E6393C);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB7C45DD316C68ABF3429C20058C2981C652192F2);
		s_Il2CppMethodInitialized = true;
	}
	{
		bool L_0;
		L_0 = SqlDateTime_get_IsNull_m2B4C4F9196F7F0ED02EDD5110E06764EBED19D14(__this, NULL);
		if (!L_0)
		{
			goto IL_0023;
		}
	}
	{
		XmlWriter_tCBC8D0C4891828A0A384C68D0414337F20E1A17F* L_1 = ___writer0;
		NullCheck(L_1);
		XmlWriter_WriteAttributeString_m9BECE5A394F9A9601AB66932AF0D7EF25E16AE0B(L_1, _stringLiteral6D67ADE9CC145DA3A39BC63DF500A7B0EC88CE4A, _stringLiteral2CAB73EF57D40E8B63A7CA91D057C0B68DB59100, _stringLiteral7C014955313A7D33D5D04696B884B25325E6393C, _stringLiteralB7C45DD316C68ABF3429C20058C2981C652192F2, NULL);
		return;
	}

IL_0023:
	{
		XmlWriter_tCBC8D0C4891828A0A384C68D0414337F20E1A17F* L_2 = ___writer0;
		DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D L_3;
		L_3 = SqlDateTime_get_Value_mDF93B79BDCDEBC53B67611B9426399F69BDFDDE5(__this, NULL);
		il2cpp_codegen_runtime_class_init_inline(SqlDateTime_tFB5902479382E8A61934E274E7BBF3280A3D25B2_il2cpp_TypeInfo_var);
		String_t* L_4 = ((SqlDateTime_tFB5902479382E8A61934E274E7BBF3280A3D25B2_StaticFields*)il2cpp_codegen_static_fields_for(SqlDateTime_tFB5902479382E8A61934E274E7BBF3280A3D25B2_il2cpp_TypeInfo_var))->___s_ISO8601_DateTimeFormat_24;
		il2cpp_codegen_runtime_class_init_inline(XmlConvert_t5D100AFD62FF717BD4F8A6CABA9EDF7A5DF719EA_il2cpp_TypeInfo_var);
		String_t* L_5;
		L_5 = XmlConvert_ToString_mF6401456776BBF2637E1AB3FAA6F4187D6FAFD2D(L_3, L_4, NULL);
		NullCheck(L_2);
		VirtualActionInvoker1< String_t* >::Invoke(18 /* System.Void System.Xml.XmlWriter::WriteString(System.String) */, L_2, L_5);
		return;
	}
}
IL2CPP_EXTERN_C  void SqlDateTime_System_Xml_Serialization_IXmlSerializable_WriteXml_mEDF294D37DAEE8AC569B023A2E43E7ECA1318263_AdjustorThunk (RuntimeObject* __this, XmlWriter_tCBC8D0C4891828A0A384C68D0414337F20E1A17F* ___writer0, const RuntimeMethod* method)
{
	SqlDateTime_tFB5902479382E8A61934E274E7BBF3280A3D25B2* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<SqlDateTime_tFB5902479382E8A61934E274E7BBF3280A3D25B2*>(__this + _offset);
	SqlDateTime_System_Xml_Serialization_IXmlSerializable_WriteXml_mEDF294D37DAEE8AC569B023A2E43E7ECA1318263(_thisAdjusted, ___writer0, method);
}
// System.Xml.XmlQualifiedName System.Data.SqlTypes.SqlDateTime::GetXsdType(System.Xml.Schema.XmlSchemaSet)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR XmlQualifiedName_t2794880B373257E4108CC3F36D7373A343ACC5B9* SqlDateTime_GetXsdType_m6E136531E5DE2EDDC3FFDB65502A5D9AE9731594 (XmlSchemaSet_t048A12CE7D00EF330EF32A388B69A240899F88D1* ___schemaSet0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&XmlQualifiedName_t2794880B373257E4108CC3F36D7373A343ACC5B9_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral5081C2BB000D6FA0C2CDA4A8B7ED516A31C70DC6);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE249DDFD90EBFAAEE63734F28F6668A2FB5BD5AF);
		s_Il2CppMethodInitialized = true;
	}
	{
		XmlQualifiedName_t2794880B373257E4108CC3F36D7373A343ACC5B9* L_0 = (XmlQualifiedName_t2794880B373257E4108CC3F36D7373A343ACC5B9*)il2cpp_codegen_object_new(XmlQualifiedName_t2794880B373257E4108CC3F36D7373A343ACC5B9_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		XmlQualifiedName__ctor_m65632114A1726D9FAD0338BC2A8C28BB9D262C7B(L_0, _stringLiteral5081C2BB000D6FA0C2CDA4A8B7ED516A31C70DC6, _stringLiteralE249DDFD90EBFAAEE63734F28F6668A2FB5BD5AF, NULL);
		return L_0;
	}
}
// System.Void System.Data.SqlTypes.SqlDateTime::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SqlDateTime__cctor_m345F0623D393439A5A636EB0A7BAA1705436D789 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SqlDateTime_tFB5902479382E8A61934E274E7BBF3280A3D25B2_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CPrivateImplementationDetailsU3E_t7A9A2AD29BEDCB07843BEF77FA3BA6C06C48D73C____5857EE4CE98BFABBD62B385C1098507DD0052FF3951043AAD6A1DABD495F18AA_0_FieldInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CPrivateImplementationDetailsU3E_t7A9A2AD29BEDCB07843BEF77FA3BA6C06C48D73C____FADB218011E7702BB9575D0C32A685DA10B5C72EB809BD9A955DB1C76E4D8315_1_FieldInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2C2E4FE4D6B4BAC5113AC6E0E45AB9DB49769880);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2F586A9A065DC63095A51E546B1FFD249131F7D1);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral381B7C83B74E5866B084D94F2F697986A6FD36A8);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral571BAA4944D3BB4767DADF9048FE535DAECFAB49);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral5A78BFA6674BB1EE4BD54CF77926CA1EBD26D045);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA2F789ACB65F4C6497E44B69E2C6438E28D539AC);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA4F7CCED08DD7ACFDAD13195A519ABCFDCF46FC9);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA74E383D268F2088952766436F909896A69F55BB);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralCA3AA03CDCD53448690DF9E0FFBFB3608CD54D2A);
		s_Il2CppMethodInitialized = true;
	}
	{
		((SqlDateTime_tFB5902479382E8A61934E274E7BBF3280A3D25B2_StaticFields*)il2cpp_codegen_static_fields_for(SqlDateTime_tFB5902479382E8A61934E274E7BBF3280A3D25B2_il2cpp_TypeInfo_var))->___s_SQLTicksPerMillisecond_3 = (0.29999999999999999);
		((SqlDateTime_tFB5902479382E8A61934E274E7BBF3280A3D25B2_StaticFields*)il2cpp_codegen_static_fields_for(SqlDateTime_tFB5902479382E8A61934E274E7BBF3280A3D25B2_il2cpp_TypeInfo_var))->___SQLTicksPerSecond_4 = ((int32_t)300);
		int32_t L_0 = ((SqlDateTime_tFB5902479382E8A61934E274E7BBF3280A3D25B2_StaticFields*)il2cpp_codegen_static_fields_for(SqlDateTime_tFB5902479382E8A61934E274E7BBF3280A3D25B2_il2cpp_TypeInfo_var))->___SQLTicksPerSecond_4;
		((SqlDateTime_tFB5902479382E8A61934E274E7BBF3280A3D25B2_StaticFields*)il2cpp_codegen_static_fields_for(SqlDateTime_tFB5902479382E8A61934E274E7BBF3280A3D25B2_il2cpp_TypeInfo_var))->___SQLTicksPerMinute_5 = ((int32_t)il2cpp_codegen_multiply(L_0, ((int32_t)60)));
		int32_t L_1 = ((SqlDateTime_tFB5902479382E8A61934E274E7BBF3280A3D25B2_StaticFields*)il2cpp_codegen_static_fields_for(SqlDateTime_tFB5902479382E8A61934E274E7BBF3280A3D25B2_il2cpp_TypeInfo_var))->___SQLTicksPerMinute_5;
		((SqlDateTime_tFB5902479382E8A61934E274E7BBF3280A3D25B2_StaticFields*)il2cpp_codegen_static_fields_for(SqlDateTime_tFB5902479382E8A61934E274E7BBF3280A3D25B2_il2cpp_TypeInfo_var))->___SQLTicksPerHour_6 = ((int32_t)il2cpp_codegen_multiply(L_1, ((int32_t)60)));
		int32_t L_2 = ((SqlDateTime_tFB5902479382E8A61934E274E7BBF3280A3D25B2_StaticFields*)il2cpp_codegen_static_fields_for(SqlDateTime_tFB5902479382E8A61934E274E7BBF3280A3D25B2_il2cpp_TypeInfo_var))->___SQLTicksPerHour_6;
		((SqlDateTime_tFB5902479382E8A61934E274E7BBF3280A3D25B2_StaticFields*)il2cpp_codegen_static_fields_for(SqlDateTime_tFB5902479382E8A61934E274E7BBF3280A3D25B2_il2cpp_TypeInfo_var))->___s_SQLTicksPerDay_7 = ((int32_t)il2cpp_codegen_multiply(L_2, ((int32_t)24)));
		((SqlDateTime_tFB5902479382E8A61934E274E7BBF3280A3D25B2_StaticFields*)il2cpp_codegen_static_fields_for(SqlDateTime_tFB5902479382E8A61934E274E7BBF3280A3D25B2_il2cpp_TypeInfo_var))->___s_ticksPerSecond_8 = ((int64_t)((int32_t)10000000));
		DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D L_3;
		memset((&L_3), 0, sizeof(L_3));
		DateTime__ctor_mA3BF7CE28807F0A02634FD43913FAAFD989CEE88((&L_3), ((int32_t)1900), 1, 1, /*hidden argument*/NULL);
		((SqlDateTime_tFB5902479382E8A61934E274E7BBF3280A3D25B2_StaticFields*)il2cpp_codegen_static_fields_for(SqlDateTime_tFB5902479382E8A61934E274E7BBF3280A3D25B2_il2cpp_TypeInfo_var))->___s_SQLBaseDate_9 = L_3;
		int64_t L_4;
		L_4 = DateTime_get_Ticks_mC2CF04ED0EAB425C72C2532FFC5743777F3C93A6((&((SqlDateTime_tFB5902479382E8A61934E274E7BBF3280A3D25B2_StaticFields*)il2cpp_codegen_static_fields_for(SqlDateTime_tFB5902479382E8A61934E274E7BBF3280A3D25B2_il2cpp_TypeInfo_var))->___s_SQLBaseDate_9), NULL);
		((SqlDateTime_tFB5902479382E8A61934E274E7BBF3280A3D25B2_StaticFields*)il2cpp_codegen_static_fields_for(SqlDateTime_tFB5902479382E8A61934E274E7BBF3280A3D25B2_il2cpp_TypeInfo_var))->___s_SQLBaseDateTicks_10 = L_4;
		((SqlDateTime_tFB5902479382E8A61934E274E7BBF3280A3D25B2_StaticFields*)il2cpp_codegen_static_fields_for(SqlDateTime_tFB5902479382E8A61934E274E7BBF3280A3D25B2_il2cpp_TypeInfo_var))->___s_minYear_11 = ((int32_t)1753);
		((SqlDateTime_tFB5902479382E8A61934E274E7BBF3280A3D25B2_StaticFields*)il2cpp_codegen_static_fields_for(SqlDateTime_tFB5902479382E8A61934E274E7BBF3280A3D25B2_il2cpp_TypeInfo_var))->___s_maxYear_12 = ((int32_t)9999);
		((SqlDateTime_tFB5902479382E8A61934E274E7BBF3280A3D25B2_StaticFields*)il2cpp_codegen_static_fields_for(SqlDateTime_tFB5902479382E8A61934E274E7BBF3280A3D25B2_il2cpp_TypeInfo_var))->___s_minDay_13 = ((int32_t)-53690);
		((SqlDateTime_tFB5902479382E8A61934E274E7BBF3280A3D25B2_StaticFields*)il2cpp_codegen_static_fields_for(SqlDateTime_tFB5902479382E8A61934E274E7BBF3280A3D25B2_il2cpp_TypeInfo_var))->___s_maxDay_14 = ((int32_t)2958463);
		((SqlDateTime_tFB5902479382E8A61934E274E7BBF3280A3D25B2_StaticFields*)il2cpp_codegen_static_fields_for(SqlDateTime_tFB5902479382E8A61934E274E7BBF3280A3D25B2_il2cpp_TypeInfo_var))->___s_minTime_15 = 0;
		int32_t L_5 = ((SqlDateTime_tFB5902479382E8A61934E274E7BBF3280A3D25B2_StaticFields*)il2cpp_codegen_static_fields_for(SqlDateTime_tFB5902479382E8A61934E274E7BBF3280A3D25B2_il2cpp_TypeInfo_var))->___s_SQLTicksPerDay_7;
		((SqlDateTime_tFB5902479382E8A61934E274E7BBF3280A3D25B2_StaticFields*)il2cpp_codegen_static_fields_for(SqlDateTime_tFB5902479382E8A61934E274E7BBF3280A3D25B2_il2cpp_TypeInfo_var))->___s_maxTime_16 = ((int32_t)il2cpp_codegen_subtract(L_5, 1));
		((SqlDateTime_tFB5902479382E8A61934E274E7BBF3280A3D25B2_StaticFields*)il2cpp_codegen_static_fields_for(SqlDateTime_tFB5902479382E8A61934E274E7BBF3280A3D25B2_il2cpp_TypeInfo_var))->___s_dayBase_17 = ((int32_t)693595);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_6 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)SZArrayNew(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var, (uint32_t)((int32_t)13));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_7 = L_6;
		RuntimeFieldHandle_t6E4C45B6D2EA12FC99185805A7E77527899B25C5 L_8 = { reinterpret_cast<intptr_t> (U3CPrivateImplementationDetailsU3E_t7A9A2AD29BEDCB07843BEF77FA3BA6C06C48D73C____5857EE4CE98BFABBD62B385C1098507DD0052FF3951043AAD6A1DABD495F18AA_0_FieldInfo_var) };
		RuntimeHelpers_InitializeArray_m751372AA3F24FBF6DA9B9D687CBFA2DE436CAB9B((RuntimeArray*)L_7, L_8, NULL);
		((SqlDateTime_tFB5902479382E8A61934E274E7BBF3280A3D25B2_StaticFields*)il2cpp_codegen_static_fields_for(SqlDateTime_tFB5902479382E8A61934E274E7BBF3280A3D25B2_il2cpp_TypeInfo_var))->___s_daysToMonth365_18 = L_7;
		Il2CppCodeGenWriteBarrier((void**)(&((SqlDateTime_tFB5902479382E8A61934E274E7BBF3280A3D25B2_StaticFields*)il2cpp_codegen_static_fields_for(SqlDateTime_tFB5902479382E8A61934E274E7BBF3280A3D25B2_il2cpp_TypeInfo_var))->___s_daysToMonth365_18), (void*)L_7);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_9 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)SZArrayNew(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var, (uint32_t)((int32_t)13));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_10 = L_9;
		RuntimeFieldHandle_t6E4C45B6D2EA12FC99185805A7E77527899B25C5 L_11 = { reinterpret_cast<intptr_t> (U3CPrivateImplementationDetailsU3E_t7A9A2AD29BEDCB07843BEF77FA3BA6C06C48D73C____FADB218011E7702BB9575D0C32A685DA10B5C72EB809BD9A955DB1C76E4D8315_1_FieldInfo_var) };
		RuntimeHelpers_InitializeArray_m751372AA3F24FBF6DA9B9D687CBFA2DE436CAB9B((RuntimeArray*)L_10, L_11, NULL);
		((SqlDateTime_tFB5902479382E8A61934E274E7BBF3280A3D25B2_StaticFields*)il2cpp_codegen_static_fields_for(SqlDateTime_tFB5902479382E8A61934E274E7BBF3280A3D25B2_il2cpp_TypeInfo_var))->___s_daysToMonth366_19 = L_10;
		Il2CppCodeGenWriteBarrier((void**)(&((SqlDateTime_tFB5902479382E8A61934E274E7BBF3280A3D25B2_StaticFields*)il2cpp_codegen_static_fields_for(SqlDateTime_tFB5902479382E8A61934E274E7BBF3280A3D25B2_il2cpp_TypeInfo_var))->___s_daysToMonth366_19), (void*)L_10);
		DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D L_12;
		memset((&L_12), 0, sizeof(L_12));
		DateTime__ctor_mA3BF7CE28807F0A02634FD43913FAAFD989CEE88((&L_12), ((int32_t)1753), 1, 1, /*hidden argument*/NULL);
		((SqlDateTime_tFB5902479382E8A61934E274E7BBF3280A3D25B2_StaticFields*)il2cpp_codegen_static_fields_for(SqlDateTime_tFB5902479382E8A61934E274E7BBF3280A3D25B2_il2cpp_TypeInfo_var))->___s_minDateTime_20 = L_12;
		il2cpp_codegen_runtime_class_init_inline(DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D_il2cpp_TypeInfo_var);
		DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D L_13 = ((DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D_StaticFields*)il2cpp_codegen_static_fields_for(DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D_il2cpp_TypeInfo_var))->___MaxValue_33;
		((SqlDateTime_tFB5902479382E8A61934E274E7BBF3280A3D25B2_StaticFields*)il2cpp_codegen_static_fields_for(SqlDateTime_tFB5902479382E8A61934E274E7BBF3280A3D25B2_il2cpp_TypeInfo_var))->___s_maxDateTime_21 = L_13;
		DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D L_14 = ((SqlDateTime_tFB5902479382E8A61934E274E7BBF3280A3D25B2_StaticFields*)il2cpp_codegen_static_fields_for(SqlDateTime_tFB5902479382E8A61934E274E7BBF3280A3D25B2_il2cpp_TypeInfo_var))->___s_SQLBaseDate_9;
		TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A L_15;
		L_15 = DateTime_Subtract_m4064A98F489219E9C414DF5C03EE041351B4502A((&((SqlDateTime_tFB5902479382E8A61934E274E7BBF3280A3D25B2_StaticFields*)il2cpp_codegen_static_fields_for(SqlDateTime_tFB5902479382E8A61934E274E7BBF3280A3D25B2_il2cpp_TypeInfo_var))->___s_minDateTime_20), L_14, NULL);
		((SqlDateTime_tFB5902479382E8A61934E274E7BBF3280A3D25B2_StaticFields*)il2cpp_codegen_static_fields_for(SqlDateTime_tFB5902479382E8A61934E274E7BBF3280A3D25B2_il2cpp_TypeInfo_var))->___s_minTimeSpan_22 = L_15;
		DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D L_16 = ((SqlDateTime_tFB5902479382E8A61934E274E7BBF3280A3D25B2_StaticFields*)il2cpp_codegen_static_fields_for(SqlDateTime_tFB5902479382E8A61934E274E7BBF3280A3D25B2_il2cpp_TypeInfo_var))->___s_SQLBaseDate_9;
		TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A L_17;
		L_17 = DateTime_Subtract_m4064A98F489219E9C414DF5C03EE041351B4502A((&((SqlDateTime_tFB5902479382E8A61934E274E7BBF3280A3D25B2_StaticFields*)il2cpp_codegen_static_fields_for(SqlDateTime_tFB5902479382E8A61934E274E7BBF3280A3D25B2_il2cpp_TypeInfo_var))->___s_maxDateTime_21), L_16, NULL);
		((SqlDateTime_tFB5902479382E8A61934E274E7BBF3280A3D25B2_StaticFields*)il2cpp_codegen_static_fields_for(SqlDateTime_tFB5902479382E8A61934E274E7BBF3280A3D25B2_il2cpp_TypeInfo_var))->___s_maxTimeSpan_23 = L_17;
		((SqlDateTime_tFB5902479382E8A61934E274E7BBF3280A3D25B2_StaticFields*)il2cpp_codegen_static_fields_for(SqlDateTime_tFB5902479382E8A61934E274E7BBF3280A3D25B2_il2cpp_TypeInfo_var))->___s_ISO8601_DateTimeFormat_24 = _stringLiteralA74E383D268F2088952766436F909896A69F55BB;
		Il2CppCodeGenWriteBarrier((void**)(&((SqlDateTime_tFB5902479382E8A61934E274E7BBF3280A3D25B2_StaticFields*)il2cpp_codegen_static_fields_for(SqlDateTime_tFB5902479382E8A61934E274E7BBF3280A3D25B2_il2cpp_TypeInfo_var))->___s_ISO8601_DateTimeFormat_24), (void*)_stringLiteralA74E383D268F2088952766436F909896A69F55BB);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_18 = (StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)(StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)SZArrayNew(StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var, (uint32_t)8);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_19 = L_18;
		NullCheck(L_19);
		ArrayElementTypeCheck (L_19, _stringLiteral2F586A9A065DC63095A51E546B1FFD249131F7D1);
		(L_19)->SetAt(static_cast<il2cpp_array_size_t>(0), (String_t*)_stringLiteral2F586A9A065DC63095A51E546B1FFD249131F7D1);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_20 = L_19;
		NullCheck(L_20);
		ArrayElementTypeCheck (L_20, _stringLiteralA2F789ACB65F4C6497E44B69E2C6438E28D539AC);
		(L_20)->SetAt(static_cast<il2cpp_array_size_t>(1), (String_t*)_stringLiteralA2F789ACB65F4C6497E44B69E2C6438E28D539AC);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_21 = L_20;
		NullCheck(L_21);
		ArrayElementTypeCheck (L_21, _stringLiteralCA3AA03CDCD53448690DF9E0FFBFB3608CD54D2A);
		(L_21)->SetAt(static_cast<il2cpp_array_size_t>(2), (String_t*)_stringLiteralCA3AA03CDCD53448690DF9E0FFBFB3608CD54D2A);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_22 = L_21;
		NullCheck(L_22);
		ArrayElementTypeCheck (L_22, _stringLiteral571BAA4944D3BB4767DADF9048FE535DAECFAB49);
		(L_22)->SetAt(static_cast<il2cpp_array_size_t>(3), (String_t*)_stringLiteral571BAA4944D3BB4767DADF9048FE535DAECFAB49);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_23 = L_22;
		NullCheck(L_23);
		ArrayElementTypeCheck (L_23, _stringLiteralA4F7CCED08DD7ACFDAD13195A519ABCFDCF46FC9);
		(L_23)->SetAt(static_cast<il2cpp_array_size_t>(4), (String_t*)_stringLiteralA4F7CCED08DD7ACFDAD13195A519ABCFDCF46FC9);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_24 = L_23;
		NullCheck(L_24);
		ArrayElementTypeCheck (L_24, _stringLiteral2C2E4FE4D6B4BAC5113AC6E0E45AB9DB49769880);
		(L_24)->SetAt(static_cast<il2cpp_array_size_t>(5), (String_t*)_stringLiteral2C2E4FE4D6B4BAC5113AC6E0E45AB9DB49769880);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_25 = L_24;
		NullCheck(L_25);
		ArrayElementTypeCheck (L_25, _stringLiteral5A78BFA6674BB1EE4BD54CF77926CA1EBD26D045);
		(L_25)->SetAt(static_cast<il2cpp_array_size_t>(6), (String_t*)_stringLiteral5A78BFA6674BB1EE4BD54CF77926CA1EBD26D045);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_26 = L_25;
		NullCheck(L_26);
		ArrayElementTypeCheck (L_26, _stringLiteral381B7C83B74E5866B084D94F2F697986A6FD36A8);
		(L_26)->SetAt(static_cast<il2cpp_array_size_t>(7), (String_t*)_stringLiteral381B7C83B74E5866B084D94F2F697986A6FD36A8);
		((SqlDateTime_tFB5902479382E8A61934E274E7BBF3280A3D25B2_StaticFields*)il2cpp_codegen_static_fields_for(SqlDateTime_tFB5902479382E8A61934E274E7BBF3280A3D25B2_il2cpp_TypeInfo_var))->___s_dateTimeFormats_25 = L_26;
		Il2CppCodeGenWriteBarrier((void**)(&((SqlDateTime_tFB5902479382E8A61934E274E7BBF3280A3D25B2_StaticFields*)il2cpp_codegen_static_fields_for(SqlDateTime_tFB5902479382E8A61934E274E7BBF3280A3D25B2_il2cpp_TypeInfo_var))->___s_dateTimeFormats_25), (void*)L_26);
		int32_t L_27 = ((SqlDateTime_tFB5902479382E8A61934E274E7BBF3280A3D25B2_StaticFields*)il2cpp_codegen_static_fields_for(SqlDateTime_tFB5902479382E8A61934E274E7BBF3280A3D25B2_il2cpp_TypeInfo_var))->___s_minDay_13;
		SqlDateTime_tFB5902479382E8A61934E274E7BBF3280A3D25B2 L_28;
		memset((&L_28), 0, sizeof(L_28));
		SqlDateTime__ctor_m90301DA22BE353FE15A11AB194B07D12652AABAC((&L_28), L_27, 0, /*hidden argument*/NULL);
		((SqlDateTime_tFB5902479382E8A61934E274E7BBF3280A3D25B2_StaticFields*)il2cpp_codegen_static_fields_for(SqlDateTime_tFB5902479382E8A61934E274E7BBF3280A3D25B2_il2cpp_TypeInfo_var))->___MinValue_26 = L_28;
		int32_t L_29 = ((SqlDateTime_tFB5902479382E8A61934E274E7BBF3280A3D25B2_StaticFields*)il2cpp_codegen_static_fields_for(SqlDateTime_tFB5902479382E8A61934E274E7BBF3280A3D25B2_il2cpp_TypeInfo_var))->___s_maxDay_14;
		int32_t L_30 = ((SqlDateTime_tFB5902479382E8A61934E274E7BBF3280A3D25B2_StaticFields*)il2cpp_codegen_static_fields_for(SqlDateTime_tFB5902479382E8A61934E274E7BBF3280A3D25B2_il2cpp_TypeInfo_var))->___s_maxTime_16;
		SqlDateTime_tFB5902479382E8A61934E274E7BBF3280A3D25B2 L_31;
		memset((&L_31), 0, sizeof(L_31));
		SqlDateTime__ctor_m90301DA22BE353FE15A11AB194B07D12652AABAC((&L_31), L_29, L_30, /*hidden argument*/NULL);
		((SqlDateTime_tFB5902479382E8A61934E274E7BBF3280A3D25B2_StaticFields*)il2cpp_codegen_static_fields_for(SqlDateTime_tFB5902479382E8A61934E274E7BBF3280A3D25B2_il2cpp_TypeInfo_var))->___MaxValue_27 = L_31;
		SqlDateTime_tFB5902479382E8A61934E274E7BBF3280A3D25B2 L_32;
		memset((&L_32), 0, sizeof(L_32));
		SqlDateTime__ctor_m64066729561058739B6C9F62E8115E180E097F11((&L_32), (bool)1, /*hidden argument*/NULL);
		((SqlDateTime_tFB5902479382E8A61934E274E7BBF3280A3D25B2_StaticFields*)il2cpp_codegen_static_fields_for(SqlDateTime_tFB5902479382E8A61934E274E7BBF3280A3D25B2_il2cpp_TypeInfo_var))->___Null_28 = L_32;
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
// System.Void System.Data.SqlTypes.SqlTypeException::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SqlTypeException__ctor_m3B7A1DB4341103DD38E2B733FF6A355855979FE1 (SqlTypeException_t93D97B141C16DC7DC601ED2ED8166B0596C4494E* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral237CCA189DD9C0D0A4D5FDF9797BB97D32BE95D8);
		s_Il2CppMethodInitialized = true;
	}
	{
		SqlTypeException__ctor_m0DB2CB60AB67AC31B9D1A2E2A730793D41FE7240(__this, _stringLiteral237CCA189DD9C0D0A4D5FDF9797BB97D32BE95D8, (Exception_t*)NULL, NULL);
		return;
	}
}
// System.Void System.Data.SqlTypes.SqlTypeException::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SqlTypeException__ctor_m31F48828AF14CF370270AC18D8AC5CCB176C3675 (SqlTypeException_t93D97B141C16DC7DC601ED2ED8166B0596C4494E* __this, String_t* ___message0, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = ___message0;
		SqlTypeException__ctor_m0DB2CB60AB67AC31B9D1A2E2A730793D41FE7240(__this, L_0, (Exception_t*)NULL, NULL);
		return;
	}
}
// System.Void System.Data.SqlTypes.SqlTypeException::.ctor(System.String,System.Exception)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SqlTypeException__ctor_m0DB2CB60AB67AC31B9D1A2E2A730793D41FE7240 (SqlTypeException_t93D97B141C16DC7DC601ED2ED8166B0596C4494E* __this, String_t* ___message0, Exception_t* ___e1, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = ___message0;
		Exception_t* L_1 = ___e1;
		SystemException__ctor_m0FC84CACD2A5D66222998AA601A5C41CEC36A611(__this, L_0, L_1, NULL);
		Exception_set_HResult_m010A171183E240EBF4F7611E924B533FAB2E471F_inline(__this, ((int32_t)-2146232016), NULL);
		return;
	}
}
// System.Void System.Data.SqlTypes.SqlTypeException::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SqlTypeException__ctor_mE38A98DAF789689F6BAC1B151B08C12D13FF04FC (SqlTypeException_t93D97B141C16DC7DC601ED2ED8166B0596C4494E* __this, SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* ___si0, StreamingContext_t56760522A751890146EE45F82F866B55B7E33677 ___sc1, const RuntimeMethod* method) 
{
	{
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_0 = ___si0;
		StreamingContext_t56760522A751890146EE45F82F866B55B7E33677 L_1 = ___sc1;
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_2;
		L_2 = SqlTypeException_SqlTypeExceptionSerialization_m0ED24EDA1BA418051614BBD33C496CB8DECAEC02(L_0, L_1, NULL);
		StreamingContext_t56760522A751890146EE45F82F866B55B7E33677 L_3 = ___sc1;
		SystemException__ctor_mA2BB392E0F4CD8A4C132984F76B7A9FBDB3B6879(__this, L_2, L_3, NULL);
		return;
	}
}
// System.Runtime.Serialization.SerializationInfo System.Data.SqlTypes.SqlTypeException::SqlTypeExceptionSerialization(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* SqlTypeException_SqlTypeExceptionSerialization_m0ED24EDA1BA418051614BBD33C496CB8DECAEC02 (SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* ___si0, StreamingContext_t56760522A751890146EE45F82F866B55B7E33677 ___sc1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SqlTypeException_t93D97B141C16DC7DC601ED2ED8166B0596C4494E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralAFF39379ED0674D4BE1C6007B342CA8DA65BC816);
		s_Il2CppMethodInitialized = true;
	}
	{
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_0 = ___si0;
		if (!L_0)
		{
			goto IL_0023;
		}
	}
	{
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_1 = ___si0;
		NullCheck(L_1);
		int32_t L_2;
		L_2 = SerializationInfo_get_MemberCount_mB4ECB820E0C88CF7D1031B09B0E32040DE464B9E_inline(L_1, NULL);
		if ((!(((uint32_t)1) == ((uint32_t)L_2))))
		{
			goto IL_0023;
		}
	}
	{
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_3 = ___si0;
		NullCheck(L_3);
		String_t* L_4;
		L_4 = SerializationInfo_GetString_mF0753AFAA13AABF8A30B8F0890AEC52BFBBC73E9(L_3, _stringLiteralAFF39379ED0674D4BE1C6007B342CA8DA65BC816, NULL);
		SqlTypeException_t93D97B141C16DC7DC601ED2ED8166B0596C4494E* L_5 = (SqlTypeException_t93D97B141C16DC7DC601ED2ED8166B0596C4494E*)il2cpp_codegen_object_new(SqlTypeException_t93D97B141C16DC7DC601ED2ED8166B0596C4494E_il2cpp_TypeInfo_var);
		NullCheck(L_5);
		SqlTypeException__ctor_m31F48828AF14CF370270AC18D8AC5CCB176C3675(L_5, L_4, NULL);
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_6 = ___si0;
		StreamingContext_t56760522A751890146EE45F82F866B55B7E33677 L_7 = ___sc1;
		NullCheck(L_5);
		VirtualActionInvoker2< SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37*, StreamingContext_t56760522A751890146EE45F82F866B55B7E33677 >::Invoke(11 /* System.Void System.Exception::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext) */, L_5, L_6, L_7);
	}

IL_0023:
	{
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_8 = ___si0;
		return L_8;
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
// System.Void System.Data.SqlTypes.SqlNullValueException::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SqlNullValueException__ctor_m069C95E1867258A1B57BD8719252132DFB6DE222 (SqlNullValueException_t84216F8C86727B62B1C84EFCE7CFC403674ECAD7* __this, const RuntimeMethod* method) 
{
	{
		String_t* L_0;
		L_0 = SQLResource_get_NullValueMessage_mE062AEA06DEB89B9077FACD2940994F00AB2C468(NULL);
		SqlNullValueException__ctor_m8491E048CF6871FED5EA78347A0C83E22EFA048F(__this, L_0, (Exception_t*)NULL, NULL);
		return;
	}
}
// System.Void System.Data.SqlTypes.SqlNullValueException::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SqlNullValueException__ctor_mE8C5BCE9B16E4D47E8E01C91016DEB5390527969 (SqlNullValueException_t84216F8C86727B62B1C84EFCE7CFC403674ECAD7* __this, String_t* ___message0, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = ___message0;
		SqlNullValueException__ctor_m8491E048CF6871FED5EA78347A0C83E22EFA048F(__this, L_0, (Exception_t*)NULL, NULL);
		return;
	}
}
// System.Void System.Data.SqlTypes.SqlNullValueException::.ctor(System.String,System.Exception)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SqlNullValueException__ctor_m8491E048CF6871FED5EA78347A0C83E22EFA048F (SqlNullValueException_t84216F8C86727B62B1C84EFCE7CFC403674ECAD7* __this, String_t* ___message0, Exception_t* ___e1, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = ___message0;
		Exception_t* L_1 = ___e1;
		SqlTypeException__ctor_m0DB2CB60AB67AC31B9D1A2E2A730793D41FE7240(__this, L_0, L_1, NULL);
		Exception_set_HResult_m010A171183E240EBF4F7611E924B533FAB2E471F_inline(__this, ((int32_t)-2146232015), NULL);
		return;
	}
}
// System.Void System.Data.SqlTypes.SqlNullValueException::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SqlNullValueException__ctor_mB59F0B48D09586856A414E118D9B42F8A03EE4DE (SqlNullValueException_t84216F8C86727B62B1C84EFCE7CFC403674ECAD7* __this, SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* ___si0, StreamingContext_t56760522A751890146EE45F82F866B55B7E33677 ___sc1, const RuntimeMethod* method) 
{
	{
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_0 = ___si0;
		StreamingContext_t56760522A751890146EE45F82F866B55B7E33677 L_1 = ___sc1;
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_2;
		L_2 = SqlNullValueException_SqlNullValueExceptionSerialization_mB100C77DBE8DB64E00FEAA5D9A9B98A515A4E64F(L_0, L_1, NULL);
		StreamingContext_t56760522A751890146EE45F82F866B55B7E33677 L_3 = ___sc1;
		SqlTypeException__ctor_mE38A98DAF789689F6BAC1B151B08C12D13FF04FC(__this, L_2, L_3, NULL);
		return;
	}
}
// System.Runtime.Serialization.SerializationInfo System.Data.SqlTypes.SqlNullValueException::SqlNullValueExceptionSerialization(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* SqlNullValueException_SqlNullValueExceptionSerialization_mB100C77DBE8DB64E00FEAA5D9A9B98A515A4E64F (SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* ___si0, StreamingContext_t56760522A751890146EE45F82F866B55B7E33677 ___sc1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SqlNullValueException_t84216F8C86727B62B1C84EFCE7CFC403674ECAD7_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralAAB352F1CC4AC4E0DA45060A468CB75DC7B60E0F);
		s_Il2CppMethodInitialized = true;
	}
	{
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_0 = ___si0;
		if (!L_0)
		{
			goto IL_0023;
		}
	}
	{
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_1 = ___si0;
		NullCheck(L_1);
		int32_t L_2;
		L_2 = SerializationInfo_get_MemberCount_mB4ECB820E0C88CF7D1031B09B0E32040DE464B9E_inline(L_1, NULL);
		if ((!(((uint32_t)1) == ((uint32_t)L_2))))
		{
			goto IL_0023;
		}
	}
	{
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_3 = ___si0;
		NullCheck(L_3);
		String_t* L_4;
		L_4 = SerializationInfo_GetString_mF0753AFAA13AABF8A30B8F0890AEC52BFBBC73E9(L_3, _stringLiteralAAB352F1CC4AC4E0DA45060A468CB75DC7B60E0F, NULL);
		SqlNullValueException_t84216F8C86727B62B1C84EFCE7CFC403674ECAD7* L_5 = (SqlNullValueException_t84216F8C86727B62B1C84EFCE7CFC403674ECAD7*)il2cpp_codegen_object_new(SqlNullValueException_t84216F8C86727B62B1C84EFCE7CFC403674ECAD7_il2cpp_TypeInfo_var);
		NullCheck(L_5);
		SqlNullValueException__ctor_mE8C5BCE9B16E4D47E8E01C91016DEB5390527969(L_5, L_4, NULL);
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_6 = ___si0;
		StreamingContext_t56760522A751890146EE45F82F866B55B7E33677 L_7 = ___sc1;
		NullCheck(L_5);
		VirtualActionInvoker2< SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37*, StreamingContext_t56760522A751890146EE45F82F866B55B7E33677 >::Invoke(11 /* System.Void System.Exception::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext) */, L_5, L_6, L_7);
	}

IL_0023:
	{
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_8 = ___si0;
		return L_8;
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
// System.Void System.Data.Common.ADP::TraceException(System.String,System.Exception)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ADP_TraceException_m15E86536756671161579E85D14124BB7AB77C61B (String_t* ___trace0, Exception_t* ___e1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DataCommonEventSource_Trace_TisException_t_m6AD40C3B6CFE3732C2E9A642A4D2A2727D26AE7E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DataCommonEventSource_tC3BB57E78CED1A7EFBCC8F852266121F4641CBFE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		Exception_t* L_0 = ___e1;
		if (!L_0)
		{
			goto IL_000f;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(DataCommonEventSource_tC3BB57E78CED1A7EFBCC8F852266121F4641CBFE_il2cpp_TypeInfo_var);
		DataCommonEventSource_tC3BB57E78CED1A7EFBCC8F852266121F4641CBFE* L_1 = ((DataCommonEventSource_tC3BB57E78CED1A7EFBCC8F852266121F4641CBFE_StaticFields*)il2cpp_codegen_static_fields_for(DataCommonEventSource_tC3BB57E78CED1A7EFBCC8F852266121F4641CBFE_il2cpp_TypeInfo_var))->___Log_1;
		String_t* L_2 = ___trace0;
		Exception_t* L_3 = ___e1;
		NullCheck(L_1);
		DataCommonEventSource_Trace_TisException_t_m6AD40C3B6CFE3732C2E9A642A4D2A2727D26AE7E(L_1, L_2, L_3, DataCommonEventSource_Trace_TisException_t_m6AD40C3B6CFE3732C2E9A642A4D2A2727D26AE7E_RuntimeMethod_var);
	}

IL_000f:
	{
		return;
	}
}
// System.Void System.Data.Common.ADP::TraceExceptionAsReturnValue(System.Exception)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ADP_TraceExceptionAsReturnValue_mB1D3FEFE4B0AA3A99B9DC266657F6278F09284E4 (Exception_t* ___e0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ADP_t2C39CD1D5CEFC1B88FF6F7C7AD1916F0FD538CC0_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralCB23F9937D80B1A1E1D2A5F53949DF4876BAB314);
		s_Il2CppMethodInitialized = true;
	}
	{
		Exception_t* L_0 = ___e0;
		il2cpp_codegen_runtime_class_init_inline(ADP_t2C39CD1D5CEFC1B88FF6F7C7AD1916F0FD538CC0_il2cpp_TypeInfo_var);
		ADP_TraceException_m15E86536756671161579E85D14124BB7AB77C61B(_stringLiteralCB23F9937D80B1A1E1D2A5F53949DF4876BAB314, L_0, NULL);
		return;
	}
}
// System.ArgumentException System.Data.Common.ADP::Argument(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* ADP_Argument_mD87295643203342A402470771011DA9751630053 (String_t* ___error0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ADP_t2C39CD1D5CEFC1B88FF6F7C7AD1916F0FD538CC0_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		String_t* L_0 = ___error0;
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_1 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		ArgumentException__ctor_m026938A67AF9D36BB7ED27F80425D7194B514465(L_1, L_0, NULL);
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_2 = L_1;
		il2cpp_codegen_runtime_class_init_inline(ADP_t2C39CD1D5CEFC1B88FF6F7C7AD1916F0FD538CC0_il2cpp_TypeInfo_var);
		ADP_TraceExceptionAsReturnValue_mB1D3FEFE4B0AA3A99B9DC266657F6278F09284E4(L_2, NULL);
		return L_2;
	}
}
// System.Exception System.Data.Common.ADP::WrongType(System.Type,System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Exception_t* ADP_WrongType_mCCF6317939800042630DACE6F6CA69C48565B472 (Type_t* ___got0, Type_t* ___expected1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ADP_t2C39CD1D5CEFC1B88FF6F7C7AD1916F0FD538CC0_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC25E3D04278F824992570E3C4FD054806D8FE244);
		s_Il2CppMethodInitialized = true;
	}
	{
		Type_t* L_0 = ___got0;
		NullCheck(L_0);
		String_t* L_1;
		L_1 = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_0);
		Type_t* L_2 = ___expected1;
		NullCheck(L_2);
		String_t* L_3;
		L_3 = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_2);
		String_t* L_4;
		L_4 = SR_Format_m821F9C4ABA354C3C712A210A72AFE77AF17D6C79(_stringLiteralC25E3D04278F824992570E3C4FD054806D8FE244, L_1, L_3, NULL);
		il2cpp_codegen_runtime_class_init_inline(ADP_t2C39CD1D5CEFC1B88FF6F7C7AD1916F0FD538CC0_il2cpp_TypeInfo_var);
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_5;
		L_5 = ADP_Argument_mD87295643203342A402470771011DA9751630053(L_4, NULL);
		return L_5;
	}
}
// System.Void System.Data.Common.ADP::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ADP__cctor_m0F35DFF175DEA7BEA99F2576C111F46337F12EAA (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ADP_t2C39CD1D5CEFC1B88FF6F7C7AD1916F0FD538CC0_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AccessViolationException_t2359EDFDD20FE77D56A496DB4F6854A3D2DC4190_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NullReferenceException_tBDE63A6D24569B964908408389070C6A9F5005BB_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&OutOfMemoryException_tE6DC2F937EC4A8699271D5151C4DF83BDE99EE7F_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SecurityException_t025CB4C23107E67E07CF085826B40EDE72F8165C_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StackOverflowException_t938C753F2BB15F526FD564CCF52061BBE5BC97C9_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ThreadAbortException_tCA1833E5D49782387EDF3BDCBDB90597B273F3C4_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral05119745D20F83C96FF64EC9238D16AE415068EB);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB9C4E7450F845E633DEE5CC15FF62B87B4778826);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC1D0D292C33F1F64AB45A4955EAF5BB638C50F4B);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralECC887A6FB8315456AE4F577AA0E1646BEB717E7);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (StackOverflowException_t938C753F2BB15F526FD564CCF52061BBE5BC97C9_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		((ADP_t2C39CD1D5CEFC1B88FF6F7C7AD1916F0FD538CC0_StaticFields*)il2cpp_codegen_static_fields_for(ADP_t2C39CD1D5CEFC1B88FF6F7C7AD1916F0FD538CC0_il2cpp_TypeInfo_var))->___s_stackOverflowType_0 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&((ADP_t2C39CD1D5CEFC1B88FF6F7C7AD1916F0FD538CC0_StaticFields*)il2cpp_codegen_static_fields_for(ADP_t2C39CD1D5CEFC1B88FF6F7C7AD1916F0FD538CC0_il2cpp_TypeInfo_var))->___s_stackOverflowType_0), (void*)L_1);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_2 = { reinterpret_cast<intptr_t> (OutOfMemoryException_tE6DC2F937EC4A8699271D5151C4DF83BDE99EE7F_0_0_0_var) };
		Type_t* L_3;
		L_3 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_2, NULL);
		((ADP_t2C39CD1D5CEFC1B88FF6F7C7AD1916F0FD538CC0_StaticFields*)il2cpp_codegen_static_fields_for(ADP_t2C39CD1D5CEFC1B88FF6F7C7AD1916F0FD538CC0_il2cpp_TypeInfo_var))->___s_outOfMemoryType_1 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&((ADP_t2C39CD1D5CEFC1B88FF6F7C7AD1916F0FD538CC0_StaticFields*)il2cpp_codegen_static_fields_for(ADP_t2C39CD1D5CEFC1B88FF6F7C7AD1916F0FD538CC0_il2cpp_TypeInfo_var))->___s_outOfMemoryType_1), (void*)L_3);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_4 = { reinterpret_cast<intptr_t> (ThreadAbortException_tCA1833E5D49782387EDF3BDCBDB90597B273F3C4_0_0_0_var) };
		Type_t* L_5;
		L_5 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_4, NULL);
		((ADP_t2C39CD1D5CEFC1B88FF6F7C7AD1916F0FD538CC0_StaticFields*)il2cpp_codegen_static_fields_for(ADP_t2C39CD1D5CEFC1B88FF6F7C7AD1916F0FD538CC0_il2cpp_TypeInfo_var))->___s_threadAbortType_2 = L_5;
		Il2CppCodeGenWriteBarrier((void**)(&((ADP_t2C39CD1D5CEFC1B88FF6F7C7AD1916F0FD538CC0_StaticFields*)il2cpp_codegen_static_fields_for(ADP_t2C39CD1D5CEFC1B88FF6F7C7AD1916F0FD538CC0_il2cpp_TypeInfo_var))->___s_threadAbortType_2), (void*)L_5);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_6 = { reinterpret_cast<intptr_t> (NullReferenceException_tBDE63A6D24569B964908408389070C6A9F5005BB_0_0_0_var) };
		Type_t* L_7;
		L_7 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_6, NULL);
		((ADP_t2C39CD1D5CEFC1B88FF6F7C7AD1916F0FD538CC0_StaticFields*)il2cpp_codegen_static_fields_for(ADP_t2C39CD1D5CEFC1B88FF6F7C7AD1916F0FD538CC0_il2cpp_TypeInfo_var))->___s_nullReferenceType_3 = L_7;
		Il2CppCodeGenWriteBarrier((void**)(&((ADP_t2C39CD1D5CEFC1B88FF6F7C7AD1916F0FD538CC0_StaticFields*)il2cpp_codegen_static_fields_for(ADP_t2C39CD1D5CEFC1B88FF6F7C7AD1916F0FD538CC0_il2cpp_TypeInfo_var))->___s_nullReferenceType_3), (void*)L_7);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_8 = { reinterpret_cast<intptr_t> (AccessViolationException_t2359EDFDD20FE77D56A496DB4F6854A3D2DC4190_0_0_0_var) };
		Type_t* L_9;
		L_9 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_8, NULL);
		((ADP_t2C39CD1D5CEFC1B88FF6F7C7AD1916F0FD538CC0_StaticFields*)il2cpp_codegen_static_fields_for(ADP_t2C39CD1D5CEFC1B88FF6F7C7AD1916F0FD538CC0_il2cpp_TypeInfo_var))->___s_accessViolationType_4 = L_9;
		Il2CppCodeGenWriteBarrier((void**)(&((ADP_t2C39CD1D5CEFC1B88FF6F7C7AD1916F0FD538CC0_StaticFields*)il2cpp_codegen_static_fields_for(ADP_t2C39CD1D5CEFC1B88FF6F7C7AD1916F0FD538CC0_il2cpp_TypeInfo_var))->___s_accessViolationType_4), (void*)L_9);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_10 = { reinterpret_cast<intptr_t> (SecurityException_t025CB4C23107E67E07CF085826B40EDE72F8165C_0_0_0_var) };
		Type_t* L_11;
		L_11 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_10, NULL);
		((ADP_t2C39CD1D5CEFC1B88FF6F7C7AD1916F0FD538CC0_StaticFields*)il2cpp_codegen_static_fields_for(ADP_t2C39CD1D5CEFC1B88FF6F7C7AD1916F0FD538CC0_il2cpp_TypeInfo_var))->___s_securityType_5 = L_11;
		Il2CppCodeGenWriteBarrier((void**)(&((ADP_t2C39CD1D5CEFC1B88FF6F7C7AD1916F0FD538CC0_StaticFields*)il2cpp_codegen_static_fields_for(ADP_t2C39CD1D5CEFC1B88FF6F7C7AD1916F0FD538CC0_il2cpp_TypeInfo_var))->___s_securityType_5), (void*)L_11);
		((ADP_t2C39CD1D5CEFC1B88FF6F7C7AD1916F0FD538CC0_StaticFields*)il2cpp_codegen_static_fields_for(ADP_t2C39CD1D5CEFC1B88FF6F7C7AD1916F0FD538CC0_il2cpp_TypeInfo_var))->___StrEmpty_6 = _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709;
		Il2CppCodeGenWriteBarrier((void**)(&((ADP_t2C39CD1D5CEFC1B88FF6F7C7AD1916F0FD538CC0_StaticFields*)il2cpp_codegen_static_fields_for(ADP_t2C39CD1D5CEFC1B88FF6F7C7AD1916F0FD538CC0_il2cpp_TypeInfo_var))->___StrEmpty_6), (void*)_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_12 = (StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)(StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)SZArrayNew(StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var, (uint32_t)4);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_13 = L_12;
		String_t* L_14;
		L_14 = SR_GetString_m58741957905E7886BFE3D92BEE1233DA13C1AAD5(_stringLiteralB9C4E7450F845E633DEE5CC15FF62B87B4778826, NULL);
		NullCheck(L_13);
		ArrayElementTypeCheck (L_13, L_14);
		(L_13)->SetAt(static_cast<il2cpp_array_size_t>(0), (String_t*)L_14);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_15 = L_13;
		String_t* L_16;
		L_16 = SR_GetString_m58741957905E7886BFE3D92BEE1233DA13C1AAD5(_stringLiteralECC887A6FB8315456AE4F577AA0E1646BEB717E7, NULL);
		NullCheck(L_15);
		ArrayElementTypeCheck (L_15, L_16);
		(L_15)->SetAt(static_cast<il2cpp_array_size_t>(1), (String_t*)L_16);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_17 = L_15;
		String_t* L_18;
		L_18 = SR_GetString_m58741957905E7886BFE3D92BEE1233DA13C1AAD5(_stringLiteral05119745D20F83C96FF64EC9238D16AE415068EB, NULL);
		NullCheck(L_17);
		ArrayElementTypeCheck (L_17, L_18);
		(L_17)->SetAt(static_cast<il2cpp_array_size_t>(2), (String_t*)L_18);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_19 = L_17;
		String_t* L_20;
		L_20 = SR_GetString_m58741957905E7886BFE3D92BEE1233DA13C1AAD5(_stringLiteralC1D0D292C33F1F64AB45A4955EAF5BB638C50F4B, NULL);
		NullCheck(L_19);
		ArrayElementTypeCheck (L_19, L_20);
		(L_19)->SetAt(static_cast<il2cpp_array_size_t>(3), (String_t*)L_20);
		((ADP_t2C39CD1D5CEFC1B88FF6F7C7AD1916F0FD538CC0_StaticFields*)il2cpp_codegen_static_fields_for(ADP_t2C39CD1D5CEFC1B88FF6F7C7AD1916F0FD538CC0_il2cpp_TypeInfo_var))->___AzureSqlServerEndpoints_7 = L_19;
		Il2CppCodeGenWriteBarrier((void**)(&((ADP_t2C39CD1D5CEFC1B88FF6F7C7AD1916F0FD538CC0_StaticFields*)il2cpp_codegen_static_fields_for(ADP_t2C39CD1D5CEFC1B88FF6F7C7AD1916F0FD538CC0_il2cpp_TypeInfo_var))->___AzureSqlServerEndpoints_7), (void*)L_19);
		intptr_t L_21;
		memset((&L_21), 0, sizeof(L_21));
		IntPtr__ctor_m20A566609A091311C734617C699E61F545250AC7((&L_21), 0, /*hidden argument*/NULL);
		((ADP_t2C39CD1D5CEFC1B88FF6F7C7AD1916F0FD538CC0_StaticFields*)il2cpp_codegen_static_fields_for(ADP_t2C39CD1D5CEFC1B88FF6F7C7AD1916F0FD538CC0_il2cpp_TypeInfo_var))->___PtrZero_8 = L_21;
		int32_t L_22;
		L_22 = IntPtr_get_Size_m1FAAA59DA73D7E32BB1AB55DD92A90AFE3251DBE(NULL);
		((ADP_t2C39CD1D5CEFC1B88FF6F7C7AD1916F0FD538CC0_StaticFields*)il2cpp_codegen_static_fields_for(ADP_t2C39CD1D5CEFC1B88FF6F7C7AD1916F0FD538CC0_il2cpp_TypeInfo_var))->___PtrSize_9 = L_22;
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
#ifdef __clang__
#pragma clang diagnostic pop
#endif
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void TimeSpan__ctor_m061B122FA11D2063FE751C1F1D019DF1C8B10B1F_inline (TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A* __this, int64_t ___ticks0, const RuntimeMethod* method) 
{
	{
		int64_t L_0 = ___ticks0;
		__this->____ticks_22 = L_0;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int64_t TimeSpan_get_Ticks_mC50131E57621F29FACC53B3241432ABB874FA1B5_inline (TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A* __this, const RuntimeMethod* method) 
{
	{
		int64_t L_0 = __this->____ticks_22;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Exception_set_HResult_m010A171183E240EBF4F7611E924B533FAB2E471F_inline (Exception_t* __this, int32_t ___value0, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___value0;
		__this->____HResult_11 = L_0;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t SerializationInfo_get_MemberCount_mB4ECB820E0C88CF7D1031B09B0E32040DE464B9E_inline (SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->___m_currMember_7;
		return L_0;
	}
}
