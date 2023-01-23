#include "pch-cpp.hpp"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <limits>
#include <stdint.h>


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
template <typename T1>
struct InterfaceActionInvoker1
{
	typedef void (*Action)(void*, T1, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		((Action)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
template <typename R>
struct InterfaceFuncInvoker0
{
	typedef R (*Func)(void*, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		return ((Func)invokeData.methodPtr)(obj, invokeData.method);
	}
};
template <typename T1>
struct GenericInterfaceActionInvoker1
{
	typedef void (*Action)(void*, T1, const RuntimeMethod*);

	static inline void Invoke (const RuntimeMethod* method, RuntimeObject* obj, T1 p1)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_interface_invoke_data(method, obj, &invokeData);
		((Action)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
template <typename T1, typename T2>
struct GenericInterfaceActionInvoker2
{
	typedef void (*Action)(void*, T1, T2, const RuntimeMethod*);

	static inline void Invoke (const RuntimeMethod* method, RuntimeObject* obj, T1 p1, T2 p2)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_interface_invoke_data(method, obj, &invokeData);
		((Action)invokeData.methodPtr)(obj, p1, p2, invokeData.method);
	}
};

// System.Action`1<System.Object[]>
struct Action_1_t12A760F019B1942FA3868174D10CBA1CCC90A535;
// System.Action`1<EventSystem.Runtime.Bus.CustomEvent>
struct Action_1_tF305089B51289C676688BE915607D76DCAD5528B;
// System.Action`1<System.Object>
struct Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87;
// System.Action`1<EventSystem.Runtime.Core.Events.Static.ObjectEvent>
struct Action_1_t0BC6F6703C2891500454846778FB9FAF4895D38D;
// System.Action`3<System.Runtime.CompilerServices.CallSite,System.Action`1<System.Object>,System.Object>
struct Action_3_t2B71C88FAB139B334F875C524BBFA20969B9CA61;
// System.Action`3<System.Object,System.Object,System.Object>
struct Action_3_tCDB60724FE7702C8848DCEE7A25283B015D0DA58;
// System.Action`4<System.Runtime.CompilerServices.CallSite,EventSystem.Runtime.Core.Events.Dynamic.DynamicArgEvent,System.String,System.Object>
struct Action_4_t524CB5C6C54D837D0FBEED90EC928B275DA1B4B1;
// System.Action`4<System.Runtime.CompilerServices.CallSite,System.Type,System.String,System.Object>
struct Action_4_t81AD7F810D67CA5D307DC607DFE02F6E50B943E4;
// System.Action`4<System.Object,System.Object,System.Object,System.Object>
struct Action_4_tAF05E98E3DA1B2D4E4629E152AB8AE2793BEE120;
// System.Dynamic.Utils.CacheDict`2<System.Type,System.Func`2<System.Runtime.CompilerServices.CallSiteBinder,System.Runtime.CompilerServices.CallSite>>
struct CacheDict_2_t51D4B7C0FC5BE04893EE3AD20CA06419A2F6C532;
// System.Runtime.CompilerServices.CallSite`1<System.Action`3<System.Runtime.CompilerServices.CallSite,System.Action`1<System.Object>,System.Object>>
struct CallSite_1_tB0F9C96400730A68BE3C595626330079F1217D3A;
// System.Runtime.CompilerServices.CallSite`1<System.Action`4<System.Runtime.CompilerServices.CallSite,EventSystem.Runtime.Core.Events.Dynamic.DynamicArgEvent,System.String,System.Object>>
struct CallSite_1_t0C8F4178F25F2B040A07CD24906589CEF4067422;
// System.Runtime.CompilerServices.CallSite`1<System.Action`4<System.Runtime.CompilerServices.CallSite,System.Type,System.String,System.Object>>
struct CallSite_1_t8262E1A720D6042B566DF07A65A318A509025451;
// System.Runtime.CompilerServices.CallSite`1<System.Object>
struct CallSite_1_t8003A47F608763107DBCC0D06FFD87AE4EE7BA98;
// System.Collections.Generic.Dictionary`2<System.Object,System.Object>
struct Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA;
// System.Collections.Generic.Dictionary`2<System.String,System.Collections.Generic.List`1<System.Action`1<System.Object[]>>>
struct Dictionary_2_t36E2587B3FD6C44141C9F14D532FDFAAD4E3E963;
// System.Collections.Generic.Dictionary`2<System.String,System.Collections.Generic.List`1<System.Action`1<System.Object>>>
struct Dictionary_2_t1B4B07393C1CA6FC57C34061B19D3C60432BD009;
// System.Collections.Generic.Dictionary`2<System.String,System.Collections.Generic.List`1<System.Action>>
struct Dictionary_2_t215F4C3C2E9B1B610937281F8E80C984A643D095;
// System.Collections.Generic.Dictionary`2<System.String,System.Int32>
struct Dictionary_2_t5C8F46F5D57502270DD9E1DA8303B23C7FE85588;
// System.Collections.Generic.Dictionary`2<System.Type,System.Collections.Generic.List`1<EventSystem.Runtime.Bus.Interfaces.ISubscription>>
struct Dictionary_2_t63D9CDC65755610F2ECF2FF21363753AAD3C1BB7;
// System.Collections.Generic.Dictionary`2<System.Type,EventSystem.Runtime.Core.Events.Base.IEvent>
struct Dictionary_2_t8B48DAE0DB53621894893AF0FE471EC563B9F6FD;
// System.Collections.Generic.Dictionary`2<System.Type,System.Object>
struct Dictionary_2_t954AEC357FE7190582B8255D4ACEF81F5E94A6A5;
// System.Func`2<EventSystem.Runtime.Bus.Interfaces.ISubscription,System.Boolean>
struct Func_2_t74A96543A4E6C66ED10B61FFB551D80AA076E046;
// System.Func`2<System.Object,System.Boolean>
struct Func_2_tE1F0D41563EE092E5E5540B061449FDE88F1DC00;
// System.Collections.Generic.IEnumerable`1<Microsoft.CSharp.RuntimeBinder.CSharpArgumentInfo>
struct IEnumerable_1_tE90B0742EE69C2EF82EA5E1F9F5B9B9C1435D616;
// System.Collections.Generic.IEnumerable`1<EventSystem.Runtime.Bus.Interfaces.ISubscription>
struct IEnumerable_1_tA3E78B654F512E12EB5C3D4DCB01003AE7921BAD;
// System.Collections.Generic.IEnumerable`1<System.Object>
struct IEnumerable_1_tF95C9E01A913DD50575531C8305932628663D9E9;
// System.Collections.Generic.IEnumerable`1<System.Type>
struct IEnumerable_1_t6686595E4CB7AC210F0EF075F7B1DD4A21D3902B;
// System.Collections.Generic.IEqualityComparer`1<System.String>
struct IEqualityComparer_1_tAE94C8F24AD5B94D4EE85CA9FC59E3409D41CAF7;
// System.Collections.Generic.IEqualityComparer`1<System.Type>
struct IEqualityComparer_1_t0C79004BFE79D9DBCE6C2250109D31D468A9A68E;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.String,System.Collections.Generic.List`1<System.Action`1<System.Object[]>>>
struct KeyCollection_tCB00EC96A387220A3EE01711C2F8EE459D49B855;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.String,System.Collections.Generic.List`1<System.Action`1<System.Object>>>
struct KeyCollection_tC8376829CF90477FABF08FC88038463E4B003722;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.String,System.Collections.Generic.List`1<System.Action>>
struct KeyCollection_t3F7A8FAD3531F91E07BA902CB67C91487522AC07;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.Type,System.Collections.Generic.List`1<EventSystem.Runtime.Bus.Interfaces.ISubscription>>
struct KeyCollection_t7A19EAAEBBBB2C4F796AA36F0A48B4B3718E3B35;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.Type,EventSystem.Runtime.Core.Events.Base.IEvent>
struct KeyCollection_t9FE06C6CA9070BF665E0D36C90433169D08D9AE1;
// System.Collections.Generic.List`1<System.Action`1<System.Object[]>>
struct List_1_tB12CCD7FC908B47BBBD4FA3CBF0D9B1A35310012;
// System.Collections.Generic.List`1<System.Action`1<System.Object>>
struct List_1_t8ED86F5A318743E9CE1F85A351EB862E45361BE0;
// System.Collections.Generic.List`1<System.Action>
struct List_1_tDB72209F35D56F62A287633F9450978E90B90987;
// System.Collections.Generic.List`1<EventSystem.Runtime.Core.Dispose.DisposeContainer>
struct List_1_tC388E105FE5D097387E8CE94B853FBD4EB87B6E0;
// System.Collections.Generic.List`1<EventSystem.Runtime.Bus.Interfaces.ISubscription>
struct List_1_tC2324A4441524F04698D5BC263697C1B8B51CDC4;
// System.Collections.Generic.List`1<System.Object>
struct List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.String,System.Collections.Generic.List`1<System.Action`1<System.Object[]>>>
struct ValueCollection_tD0EF75B7A0B1C749065685671B4992179B4C5CFE;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.String,System.Collections.Generic.List`1<System.Action`1<System.Object>>>
struct ValueCollection_t258879E4018381A44310F1009AD108DFD05E165F;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.String,System.Collections.Generic.List`1<System.Action>>
struct ValueCollection_t8DFEC4732E4259C29ED9C425F8DD60D09B73C5E8;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.Type,System.Collections.Generic.List`1<EventSystem.Runtime.Bus.Interfaces.ISubscription>>
struct ValueCollection_t46C734A2CB95AB659C1B3B158FE89AE1DD5115D8;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.Type,EventSystem.Runtime.Core.Events.Base.IEvent>
struct ValueCollection_tB2860A752668FC0A0FC58BC2AE9C9EDC9F805216;
// System.Action`1<System.Object[]>[]
struct Action_1U5BU5D_t78E146773623CCF7D76CBEE0FFE9CCE5115780B8;
// System.Action`1<System.Object>[]
struct Action_1U5BU5D_t9AF7A60AA589F7071315F3DA2F77CD32CB43FB5D;
// System.Action`3<System.Runtime.CompilerServices.CallSite,System.Action`1<System.Object>,System.Object>[]
struct Action_3U5BU5D_tB168A1B3B24909072C9273BEBE96D05D0B73B13B;
// System.Action`4<System.Runtime.CompilerServices.CallSite,EventSystem.Runtime.Core.Events.Dynamic.DynamicArgEvent,System.String,System.Object>[]
struct Action_4U5BU5D_t39285D6DFF7273A0E984EE2D73765C75EB4660EE;
// System.Action`4<System.Runtime.CompilerServices.CallSite,System.Type,System.String,System.Object>[]
struct Action_4U5BU5D_t39D935729D9E068F361D881D66859FB5614CDC18;
// System.Collections.Generic.Dictionary`2/Entry<System.String,System.Collections.Generic.List`1<System.Action`1<System.Object[]>>>[]
struct EntryU5BU5D_t1BEF6B3B694ABA22796BB439455261D3D2E1C121;
// System.Collections.Generic.Dictionary`2/Entry<System.String,System.Collections.Generic.List`1<System.Action`1<System.Object>>>[]
struct EntryU5BU5D_t4A2C7B60139CAE2B810C5F2C9015817F5964F08A;
// System.Collections.Generic.Dictionary`2/Entry<System.String,System.Collections.Generic.List`1<System.Action>>[]
struct EntryU5BU5D_t38F036D9BA9CE7DF12B6DF46C2190A6693CB5731;
// System.Collections.Generic.Dictionary`2/Entry<System.Type,System.Collections.Generic.List`1<EventSystem.Runtime.Bus.Interfaces.ISubscription>>[]
struct EntryU5BU5D_t39740CAD7B05BD34789CEE1B5598AE1D67739EED;
// System.Collections.Generic.Dictionary`2/Entry<System.Type,EventSystem.Runtime.Core.Events.Base.IEvent>[]
struct EntryU5BU5D_tA5D13304B95D0C66B18F17241232EB171194EE72;
// System.Action[]
struct ActionU5BU5D_tF6161335A0A12A221AB081D78725C8AB6FE506D2;
// System.Char[]
struct CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB;
// System.Delegate[]
struct DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771;
// EventSystem.Runtime.Core.Dispose.DisposeContainer[]
struct DisposeContainerU5BU5D_t0DAD5FA2295AC7F310BCF16B68CD96D16E59548C;
// EventSystem.Runtime.Bus.Interfaces.ISubscription[]
struct ISubscriptionU5BU5D_t862C619E1004C71AB339E0EB3E4B73290B35597B;
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
// System.Action
struct Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07;
// EventSystem.Runtime.Bus.Exceptions.AlreadyRegisteredException
struct AlreadyRegisteredException_tE953372A34938995FF32D1BA757FFBE930247947;
// System.ArgumentNullException
struct ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129;
// System.AsyncCallback
struct AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C;
// System.Reflection.Binder
struct Binder_t91BFCE95A7057FADF4D8A1A342AFE52872246235;
// Microsoft.CSharp.RuntimeBinder.CSharpArgumentInfo
struct CSharpArgumentInfo_tC298899BB33AB3FF7B82A90878CD3EDB3DBAD43A;
// System.Runtime.CompilerServices.CallSite
struct CallSite_t7E03097DD9D28AA5BB84A32493F38B8AF731B5AF;
// System.Runtime.CompilerServices.CallSiteBinder
struct CallSiteBinder_tAFC922BA1DD2D1AEF6BC2742E0E375F936D5059F;
// EventSystem.Runtime.Core.Events.Base.CancelableEventBase
struct CancelableEventBase_t3E558D21980C25374A6F9C35C7A43815110A935A;
// EventSystem.Runtime.Bus.CustomEvent
struct CustomEvent_tBEDC67626FF1C53DC5C0C06B9F6A6BEC954EC7B5;
// System.DelegateData
struct DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E;
// EventSystem.Runtime.Core.Dispose.DisposeContainer
struct DisposeContainer_t1201D3858AAFCED17DD46A94CF7B1B4059A964F6;
// EventSystem.Runtime.Core.Events.Dynamic.DynamicArgEvent
struct DynamicArgEvent_t0E2BBF690EFB77F74D10D049589FDDC35F2E9321;
// EventSystem.Runtime.Core.Events.Dynamic.DynamicArgsEvent
struct DynamicArgsEvent_t44D5B68696ABC8A0AB00CFF19C33A985C399A797;
// System.Enum
struct Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2;
// EventSystem.Runtime.Bus.EventBus
struct EventBus_t38EEAA31225B2E5DA42372B418AF82481D6929D3;
// EventSystem.Runtime.Bus.Configuration.EventBusConfiguration
struct EventBusConfiguration_tF8A2907FC2B49AEF9A4B90732802DE0924AF223D;
// EventSystem.Runtime.Core.Dispose.EventDisposal
struct EventDisposal_tA44FC96FC224E6398FC2E7AB40B8A11D6E617A41;
// System.Exception
struct Exception_t;
// EventSystem.Runtime.Bus.Unity.GlobalEventBus
struct GlobalEventBus_t1A9E0D0263A42224275D763EDF55D5C639E7B8D3;
// System.IAsyncResult
struct IAsyncResult_t7B9B5A0ECB35DCEC31B8A8122C37D687369253B5;
// System.Collections.IDictionary
struct IDictionary_t6D03155AF1FA9083817AA5B6AD7DEEACC26AB220;
// EventSystem.Runtime.Core.Events.Base.IEvent
struct IEvent_t1831D69A2AFE60EA1F46CE1909F26AAF21867C14;
// EventSystem.Runtime.Bus.Interfaces.IEventBus
struct IEventBus_t738E39D3FAC5F14B8531D5948E49D7497968A1C8;
// EventSystem.Runtime.Bus.Configuration.IEventBusConfiguration
struct IEventBusConfiguration_t107A4B4B16AA9CE76D64B442EE1553C653596137;
// System.Runtime.Serialization.IFormatterConverter
struct IFormatterConverter_t726606DAC82C384B08C82471313C340968DDB609;
// EventSystem.Runtime.Bus.Interfaces.ISubscription
struct ISubscription_tB9F6107F91F37F9840190342A8860A8BB7BD9997;
// System.Linq.Expressions.LabelTarget
struct LabelTarget_t8082D0D35E4D9BE77C683DCDF2AB10DA5C0EB9C5;
// System.Reflection.MemberFilter
struct MemberFilter_tF644F1AE82F611B677CE1964D5A3277DDA21D553;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// UnityEngine.MonoBehaviour
struct MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71;
// EventSystem.Runtime.Bus.Configuration.MonoBehaviourProxy
struct MonoBehaviourProxy_t8EF8DC6E8A10422656F746DEA0375D14FE1DFE9D;
// System.NotImplementedException
struct NotImplementedException_t6366FE4DCF15094C51F4833B91A2AE68D4DA90E8;
// EventSystem.Runtime.Core.Events.Static.ObjectArgsEvent
struct ObjectArgsEvent_tBA5DA05238A2C5E0801083B9345A915757A965A9;
// EventSystem.Runtime.Core.Events.Static.ObjectEvent
struct ObjectEvent_t0DC53C5597C4D5A069A4DC526396F5501BA22E9A;
// System.Runtime.Serialization.SafeSerializationManager
struct SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37;
// EventSystem.Runtime.Core.Events.Static.SingleEvent
struct SingleEvent_t74A1A527F011A34A7FCD670FD1D93C354E79CE78;
// System.String
struct String_t;
// EventSystem.Runtime.Bus.SubscriptionResult
struct SubscriptionResult_t6AF632194890A72CCD10EC3528AD6559D825B3A4;
// EventSystem.Runtime.Bus.SubscriptionToken
struct SubscriptionToken_tD978A093982292F2797A7B52299C4178FDD69760;
// System.Type
struct Type_t;
// EventSystem.Runtime.Bus.Exceptions.TypeNotRegisteredException
struct TypeNotRegisteredException_t7DCA95FC37A8DE3F7525E29CBAE850342EEEE0A3;
// System.Void
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915;
// EventSystem.Runtime.Core.Handlers.Dynamic.DynamicArgHandler/<>c__DisplayClass1_0
struct U3CU3Ec__DisplayClass1_0_t46819A260C814A1852949B0A65E5A24312882E72;
// EventSystem.Runtime.Core.Handlers.Dynamic.DynamicArgsHandler/<>c__DisplayClass1_0
struct U3CU3Ec__DisplayClass1_0_t691BE5DCD173FF625487029F87DEF63F04F7D077;
// EventSystem.Runtime.Bus.EventBus/<>c__DisplayClass5_0
struct U3CU3Ec__DisplayClass5_0_t6D3925E50D36CC480F0E06364C38D5A624A5F8B0;
// EventSystem.Runtime.Bus.EventBusExtensions/<>c__DisplayClass0_0
struct U3CU3Ec__DisplayClass0_0_t6BB545FCC9F8924FD745AA27E5AD9702FBDFDAFD;
// EventSystem.Runtime.Core.Handlers.Static.ObjectArgsHandler/<>c__DisplayClass1_0
struct U3CU3Ec__DisplayClass1_0_tF5CF98D5477139AE5BBF216C4B7AF08F2C9F9CDD;
// EventSystem.Runtime.Core.Handlers.Static.SingleEventHandler/<>c__DisplayClass1_0
struct U3CU3Ec__DisplayClass1_0_tAC42DC9A517648C6BEFC7A89F7AB44C1472481FD;

IL2CPP_EXTERN_C RuntimeClass* Action_1_tF305089B51289C676688BE915607D76DCAD5528B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* CSharpArgumentInfoU5BU5D_t5070B0B1D45658E97396A584A619F5289E69A5D5_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* CSharpArgumentInfo_tC298899BB33AB3FF7B82A90878CD3EDB3DBAD43A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Dictionary_2_t1B4B07393C1CA6FC57C34061B19D3C60432BD009_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Dictionary_2_t215F4C3C2E9B1B610937281F8E80C984A643D095_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Dictionary_2_t36E2587B3FD6C44141C9F14D532FDFAAD4E3E963_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Dictionary_2_t63D9CDC65755610F2ECF2FF21363753AAD3C1BB7_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Dictionary_2_t8B48DAE0DB53621894893AF0FE471EC563B9F6FD_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* DisposeContainer_t1201D3858AAFCED17DD46A94CF7B1B4059A964F6_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* DynamicArgEvent_t0E2BBF690EFB77F74D10D049589FDDC35F2E9321_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* DynamicArgHandler_t409726FCDE13E0898C72A24C4FBEF235D4C67C06_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* DynamicArgsEvent_t44D5B68696ABC8A0AB00CFF19C33A985C399A797_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* DynamicArgsHandler_t328B58DACAB12F1A5FDA7E2EAF6CEF8593E04AEC_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* EventBusConfiguration_tF8A2907FC2B49AEF9A4B90732802DE0924AF223D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* EventBus_t38EEAA31225B2E5DA42372B418AF82481D6929D3_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Exception_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* FuncEventHandler_t36FC616BABE4EB47E45602D49C0BFCEFF606B34B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Func_2_t74A96543A4E6C66ED10B61FFB551D80AA076E046_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* GenericEventHandler_tC5C0F849D77D4FEBD3190DBD7D781C4C97C77E4F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* GlobalEventBus_t1A9E0D0263A42224275D763EDF55D5C639E7B8D3_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IEventBus_t738E39D3FAC5F14B8531D5948E49D7497968A1C8_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ISubscription_tB9F6107F91F37F9840190342A8860A8BB7BD9997_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_t8ED86F5A318743E9CE1F85A351EB862E45361BE0_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_tB12CCD7FC908B47BBBD4FA3CBF0D9B1A35310012_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_tC388E105FE5D097387E8CE94B853FBD4EB87B6E0_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_tDB72209F35D56F62A287633F9450978E90B90987_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* NotImplementedException_t6366FE4DCF15094C51F4833B91A2AE68D4DA90E8_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ObjectArgsEvent_tBA5DA05238A2C5E0801083B9345A915757A965A9_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ObjectArgsHandler_tBB4ADAA1A53BAD3B6DDCA150B5A6429A7BF5E790_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* RuntimeObject_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SingleEventHandler_tB06F6AB4ECA2EB2BEFDF9598F389A74FDF328203_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SingleEvent_t74A1A527F011A34A7FCD670FD1D93C354E79CE78_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Type_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec__DisplayClass0_0_t6BB545FCC9F8924FD745AA27E5AD9702FBDFDAFD_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec__DisplayClass1_0_t46819A260C814A1852949B0A65E5A24312882E72_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec__DisplayClass1_0_t691BE5DCD173FF625487029F87DEF63F04F7D077_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec__DisplayClass1_0_tAC42DC9A517648C6BEFC7A89F7AB44C1472481FD_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec__DisplayClass1_0_tF5CF98D5477139AE5BBF216C4B7AF08F2C9F9CDD_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec__DisplayClass5_0_t6D3925E50D36CC480F0E06364C38D5A624A5F8B0_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Eo__3_t7979F3704D77D1F72F8DE249DF5187C3919D5FD3_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Eo__3_tCB1BE07F6BC790612009C853F37D920AF720F186_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Eo__4_tB8894DA93786D6B229FC0B813A11E319AEC7D3B0_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral3988471A2015D5CC894E22E1A900B66E97CD4306;
IL2CPP_EXTERN_C String_t* _stringLiteral855E742A508B4E551CF2C010724592FC556EBDDA;
IL2CPP_EXTERN_C String_t* _stringLiteralD7A66F857F6E3FCCC482964755DB79017BF35DD2;
IL2CPP_EXTERN_C const RuntimeMethod* Array_Empty_TisRuntimeObject_mFB8A63D602BB6974D31E20300D9EB89C6FE7C278_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* CallSite_1_Create_m95E290AF16A6307077D5DB3F3CCFFA7CD362977C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* CallSite_1_Create_mD991B036FFE6C23DCFD0A5463E79851B70D34F74_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* CallSite_1_Create_mF5B0646F08A95138D59D668220D0B8FE64BD953B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_Add_m5430A7BDC749CA45B13E436D3198AA6E415E5600_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_Add_m5D58F08D53B7B3B01A339D009E2B4ACF2377EDCF_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_Add_mC02BAAF29AE44983EE79F4D1D5C50C2AC0FAE3F3_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_ContainsKey_m13AC0CB75FBDCAA36C5C4D84D6DDB0036900E796_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_ContainsKey_m69C0A3B198028058CAAEE9E38AA444246A61EB24_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_ContainsKey_mB656AC2F9B2904897A92EB57472336010451CCBE_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_ContainsKey_mE78C3713C2BA139602AB3309D6C1BE241E5EE17F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_TryGetValue_m20A1763DD4A8F7A495F166EA1F70F2EA6CBAC209_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_TryGetValue_m7290D30EC519F6C28DAB4BAC370ADDB043B306B5_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_TryGetValue_mA079F1B109F3A7DA0F7F4D517A3BC9C1F63C56C1_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2__ctor_m3F022BDCBB85004A669A5F7D106781D0CCBA9ADA_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2__ctor_m66BE736D9CF3800A91724B77F3530B0428DCEC69_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2__ctor_m827C3E5AF2F5F19326C9AE3DCD2DB29622C15FD0_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2__ctor_m8F162D16E464E89665BB23C7E9B47ABA1A7D8F74_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2__ctor_mA2F1CEA75ACE9B1D80BA8AACC8D0CDADD0C42953_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_get_Item_mAE3A58C0EFCD66EE9DA9219B12B4701905CE21E8_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_get_Item_mB4270CC4458D07C58A69BC63B8A471E347565A2E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_get_Item_mB7CC23F2BCA262B527F687329A95685023C95AA7_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_get_Item_mCC1E9938262CDB48DC8BBC73486007FB973EBD00_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerable_FirstOrDefault_TisISubscription_tB9F6107F91F37F9840190342A8860A8BB7BD9997_m3C84B2ED2DDAC39665DA1884B4048C2DE55FCEBA_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_Dispose_m4821ECE7ACC42349915D2A5A500554AA9D940D59_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_Dispose_m7AF54658D389DA447BBE4C9F2D82278217B0972B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_Dispose_mAAA02395BBE0001C0717A334CA907BEF7368074C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_MoveNext_m6096A4A06C95B18044A650D3E9AE2AA3D2ECA568_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_MoveNext_m8908FDF150F1F4D1D4C14AB6EC4CE12C5896985C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_MoveNext_mFCFC05B06F0795F57A483B2E0353DDE0CA99BBF4_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_get_Current_m348B0AB5C479F2DDBA33D8840965F9EAEC4D3B9F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_get_Current_m5CDD305956FDEFA478FF8F1F8D44992132542261_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_get_Current_mFF78CE53B64DC481C6D8CD5552A53341449DA2E3_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* EventBus_Subscribe_TisCustomEvent_tBEDC67626FF1C53DC5C0C06B9F6A6BEC954EC7B5_m4A14BCD42BA8006D9438DB492961755E0ABFDF5B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* EventBus_Subscribe_TisObjectEvent_t0DC53C5597C4D5A069A4DC526396F5501BA22E9A_mB86CD9ACD395F2CBA268DBCDC9AA69D19A218180_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* EventBus_Unsubscribe_mA32040FCE03283568AAF9D24BF9DA116B24B6C94_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* IEventBus_PublishAsync_TisIEvent_t1831D69A2AFE60EA1F46CE1909F26AAF21867C14_m23BC8003DBF732629BC04E8486E91E98D4F81E07_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* IEventBus_PublishAsync_TisIEvent_t1831D69A2AFE60EA1F46CE1909F26AAF21867C14_mB413F808435C36F11FE862DF98CB4E4ACB841E25_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* IEventBus_Publish_TisIEvent_t1831D69A2AFE60EA1F46CE1909F26AAF21867C14_m492C61F415F6BB1F7B7CCD321945CDAE788A65BD_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Add_m5B99D67CB378BFA8A1142343F9DB44D94322EAD3_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Add_m7C0B3C8A41DCC24FBC819063AC78366909036E8F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Add_mA7C789A830108A82F925F9EB53FFC1F288C02908_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Add_mCDF65A3E3E2FA2DA10783D7F242594C65D95576D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_GetEnumerator_m2FD2347FB8BBD09FB936D767FDC21455FB46E41A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_GetEnumerator_mB6C244AAEBAD19DF16131057B7A205817A226254_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_GetEnumerator_mE37F4750417904F3A77CF6F6F4FB663327363DE7_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Remove_m28CB4A6AD8E8981E1CCB90CDD68A78DFC526844C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Remove_m2B2B28A78C773EFB5B780A7C6C71928E6F3BFA82_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Remove_m2F58C9F48DA11B2DF2D297626E97A25B1050D822_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Remove_m738498D00E6764A0840AAD35CEFBF7942DE3ADD8_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Remove_mE6512D4A1E979C7C76457505A4D56A017B01BA61_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_m0A75F746E80B7130E71A3570E155D3F6FAFDA996_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_mB7DADBE282893C53D8CA68E1BCBD48787184E2AA_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_mBF1E71A430CCE6F5EF73FEF23B15B18CBB988E8D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_mBFD6DF02E045EDF3C322E2112C922457016C8212_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Count_m4BA9AE4A25328A2A8056D7BBFA95C9060EB5A2AD_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Item_m2E3722FDF333A2F6E2E62AF5694332D459A891B9_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* MonoBehaviourProxy_get_Subscription_mFE43FAC31FD52B141DCEFEBC41CDAD6080D9962F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec__DisplayClass0_0_U3CSubscribeU3Eb__0_mCBD8552075D608AF3844BAA6121485E0C1E6B73C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec__DisplayClass1_0_U3CAddU3Eb__0_m1B8BE214BB04485E041694A39E59C2B150DA113F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec__DisplayClass1_0_U3CAddU3Eb__0_m50F748871A9441E7CFBFDB58B375BBF1A6B07C23_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec__DisplayClass1_0_U3CAddU3Eb__0_m87272CFAA7283687488BB2E5E24A5DC623B65EB3_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec__DisplayClass1_0_U3CAddU3Eb__0_mAAC1AD544256C6ED8F6735A1FDE5E875D8A45615_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec__DisplayClass5_0_U3CUnsubscribeU3Eb__0_m6B8038AB04A64AE08E2C05E22EF7563C5A06FEF3_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeType* DynamicArgEvent_t0E2BBF690EFB77F74D10D049589FDDC35F2E9321_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* DynamicArgHandler_t409726FCDE13E0898C72A24C4FBEF235D4C67C06_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* DynamicEventManager_tBA8B5285D8DDBF1D544B82115081E2A0ECBB95C5_0_0_0_var;
struct Delegate_t_marshaled_com;
struct Delegate_t_marshaled_pinvoke;
struct Exception_t_marshaled_com;
struct Exception_t_marshaled_pinvoke;

struct CSharpArgumentInfoU5BU5D_t5070B0B1D45658E97396A584A619F5289E69A5D5;
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <Module>
struct U3CModuleU3E_t0285B10AD80F1F18512E62D770384005CA157D9C 
{
};

// System.Collections.Generic.Dictionary`2<System.String,System.Collections.Generic.List`1<System.Action`1<System.Object[]>>>
struct Dictionary_2_t36E2587B3FD6C44141C9F14D532FDFAAD4E3E963  : public RuntimeObject
{
	// System.Int32[] System.Collections.Generic.Dictionary`2::_buckets
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ____buckets_0;
	// System.Collections.Generic.Dictionary`2/Entry<TKey,TValue>[] System.Collections.Generic.Dictionary`2::_entries
	EntryU5BU5D_t1BEF6B3B694ABA22796BB439455261D3D2E1C121* ____entries_1;
	// System.Int32 System.Collections.Generic.Dictionary`2::_count
	int32_t ____count_2;
	// System.Int32 System.Collections.Generic.Dictionary`2::_freeList
	int32_t ____freeList_3;
	// System.Int32 System.Collections.Generic.Dictionary`2::_freeCount
	int32_t ____freeCount_4;
	// System.Int32 System.Collections.Generic.Dictionary`2::_version
	int32_t ____version_5;
	// System.Collections.Generic.IEqualityComparer`1<TKey> System.Collections.Generic.Dictionary`2::_comparer
	RuntimeObject* ____comparer_6;
	// System.Collections.Generic.Dictionary`2/KeyCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::_keys
	KeyCollection_tCB00EC96A387220A3EE01711C2F8EE459D49B855* ____keys_7;
	// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::_values
	ValueCollection_tD0EF75B7A0B1C749065685671B4992179B4C5CFE* ____values_8;
	// System.Object System.Collections.Generic.Dictionary`2::_syncRoot
	RuntimeObject* ____syncRoot_9;
};

// System.Collections.Generic.Dictionary`2<System.String,System.Collections.Generic.List`1<System.Action`1<System.Object>>>
struct Dictionary_2_t1B4B07393C1CA6FC57C34061B19D3C60432BD009  : public RuntimeObject
{
	// System.Int32[] System.Collections.Generic.Dictionary`2::_buckets
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ____buckets_0;
	// System.Collections.Generic.Dictionary`2/Entry<TKey,TValue>[] System.Collections.Generic.Dictionary`2::_entries
	EntryU5BU5D_t4A2C7B60139CAE2B810C5F2C9015817F5964F08A* ____entries_1;
	// System.Int32 System.Collections.Generic.Dictionary`2::_count
	int32_t ____count_2;
	// System.Int32 System.Collections.Generic.Dictionary`2::_freeList
	int32_t ____freeList_3;
	// System.Int32 System.Collections.Generic.Dictionary`2::_freeCount
	int32_t ____freeCount_4;
	// System.Int32 System.Collections.Generic.Dictionary`2::_version
	int32_t ____version_5;
	// System.Collections.Generic.IEqualityComparer`1<TKey> System.Collections.Generic.Dictionary`2::_comparer
	RuntimeObject* ____comparer_6;
	// System.Collections.Generic.Dictionary`2/KeyCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::_keys
	KeyCollection_tC8376829CF90477FABF08FC88038463E4B003722* ____keys_7;
	// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::_values
	ValueCollection_t258879E4018381A44310F1009AD108DFD05E165F* ____values_8;
	// System.Object System.Collections.Generic.Dictionary`2::_syncRoot
	RuntimeObject* ____syncRoot_9;
};

// System.Collections.Generic.Dictionary`2<System.String,System.Collections.Generic.List`1<System.Action>>
struct Dictionary_2_t215F4C3C2E9B1B610937281F8E80C984A643D095  : public RuntimeObject
{
	// System.Int32[] System.Collections.Generic.Dictionary`2::_buckets
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ____buckets_0;
	// System.Collections.Generic.Dictionary`2/Entry<TKey,TValue>[] System.Collections.Generic.Dictionary`2::_entries
	EntryU5BU5D_t38F036D9BA9CE7DF12B6DF46C2190A6693CB5731* ____entries_1;
	// System.Int32 System.Collections.Generic.Dictionary`2::_count
	int32_t ____count_2;
	// System.Int32 System.Collections.Generic.Dictionary`2::_freeList
	int32_t ____freeList_3;
	// System.Int32 System.Collections.Generic.Dictionary`2::_freeCount
	int32_t ____freeCount_4;
	// System.Int32 System.Collections.Generic.Dictionary`2::_version
	int32_t ____version_5;
	// System.Collections.Generic.IEqualityComparer`1<TKey> System.Collections.Generic.Dictionary`2::_comparer
	RuntimeObject* ____comparer_6;
	// System.Collections.Generic.Dictionary`2/KeyCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::_keys
	KeyCollection_t3F7A8FAD3531F91E07BA902CB67C91487522AC07* ____keys_7;
	// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::_values
	ValueCollection_t8DFEC4732E4259C29ED9C425F8DD60D09B73C5E8* ____values_8;
	// System.Object System.Collections.Generic.Dictionary`2::_syncRoot
	RuntimeObject* ____syncRoot_9;
};

// System.Collections.Generic.Dictionary`2<System.Type,System.Collections.Generic.List`1<EventSystem.Runtime.Bus.Interfaces.ISubscription>>
struct Dictionary_2_t63D9CDC65755610F2ECF2FF21363753AAD3C1BB7  : public RuntimeObject
{
	// System.Int32[] System.Collections.Generic.Dictionary`2::_buckets
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ____buckets_0;
	// System.Collections.Generic.Dictionary`2/Entry<TKey,TValue>[] System.Collections.Generic.Dictionary`2::_entries
	EntryU5BU5D_t39740CAD7B05BD34789CEE1B5598AE1D67739EED* ____entries_1;
	// System.Int32 System.Collections.Generic.Dictionary`2::_count
	int32_t ____count_2;
	// System.Int32 System.Collections.Generic.Dictionary`2::_freeList
	int32_t ____freeList_3;
	// System.Int32 System.Collections.Generic.Dictionary`2::_freeCount
	int32_t ____freeCount_4;
	// System.Int32 System.Collections.Generic.Dictionary`2::_version
	int32_t ____version_5;
	// System.Collections.Generic.IEqualityComparer`1<TKey> System.Collections.Generic.Dictionary`2::_comparer
	RuntimeObject* ____comparer_6;
	// System.Collections.Generic.Dictionary`2/KeyCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::_keys
	KeyCollection_t7A19EAAEBBBB2C4F796AA36F0A48B4B3718E3B35* ____keys_7;
	// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::_values
	ValueCollection_t46C734A2CB95AB659C1B3B158FE89AE1DD5115D8* ____values_8;
	// System.Object System.Collections.Generic.Dictionary`2::_syncRoot
	RuntimeObject* ____syncRoot_9;
};

// System.Collections.Generic.Dictionary`2<System.Type,EventSystem.Runtime.Core.Events.Base.IEvent>
struct Dictionary_2_t8B48DAE0DB53621894893AF0FE471EC563B9F6FD  : public RuntimeObject
{
	// System.Int32[] System.Collections.Generic.Dictionary`2::_buckets
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ____buckets_0;
	// System.Collections.Generic.Dictionary`2/Entry<TKey,TValue>[] System.Collections.Generic.Dictionary`2::_entries
	EntryU5BU5D_tA5D13304B95D0C66B18F17241232EB171194EE72* ____entries_1;
	// System.Int32 System.Collections.Generic.Dictionary`2::_count
	int32_t ____count_2;
	// System.Int32 System.Collections.Generic.Dictionary`2::_freeList
	int32_t ____freeList_3;
	// System.Int32 System.Collections.Generic.Dictionary`2::_freeCount
	int32_t ____freeCount_4;
	// System.Int32 System.Collections.Generic.Dictionary`2::_version
	int32_t ____version_5;
	// System.Collections.Generic.IEqualityComparer`1<TKey> System.Collections.Generic.Dictionary`2::_comparer
	RuntimeObject* ____comparer_6;
	// System.Collections.Generic.Dictionary`2/KeyCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::_keys
	KeyCollection_t9FE06C6CA9070BF665E0D36C90433169D08D9AE1* ____keys_7;
	// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::_values
	ValueCollection_tB2860A752668FC0A0FC58BC2AE9C9EDC9F805216* ____values_8;
	// System.Object System.Collections.Generic.Dictionary`2::_syncRoot
	RuntimeObject* ____syncRoot_9;
};

// System.EmptyArray`1<System.Object>
struct EmptyArray_1_tDF0DD7256B115243AA6BD5558417387A734240EE  : public RuntimeObject
{
};

struct EmptyArray_1_tDF0DD7256B115243AA6BD5558417387A734240EE_StaticFields
{
	// T[] System.EmptyArray`1::Value
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___Value_0;
};

// System.Collections.Generic.List`1<System.Action`1<System.Object[]>>
struct List_1_tB12CCD7FC908B47BBBD4FA3CBF0D9B1A35310012  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	Action_1U5BU5D_t78E146773623CCF7D76CBEE0FFE9CCE5115780B8* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

struct List_1_tB12CCD7FC908B47BBBD4FA3CBF0D9B1A35310012_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	Action_1U5BU5D_t78E146773623CCF7D76CBEE0FFE9CCE5115780B8* ___s_emptyArray_5;
};

// System.Collections.Generic.List`1<System.Action`1<System.Object>>
struct List_1_t8ED86F5A318743E9CE1F85A351EB862E45361BE0  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	Action_1U5BU5D_t9AF7A60AA589F7071315F3DA2F77CD32CB43FB5D* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

struct List_1_t8ED86F5A318743E9CE1F85A351EB862E45361BE0_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	Action_1U5BU5D_t9AF7A60AA589F7071315F3DA2F77CD32CB43FB5D* ___s_emptyArray_5;
};

// System.Collections.Generic.List`1<System.Action>
struct List_1_tDB72209F35D56F62A287633F9450978E90B90987  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	ActionU5BU5D_tF6161335A0A12A221AB081D78725C8AB6FE506D2* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

struct List_1_tDB72209F35D56F62A287633F9450978E90B90987_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	ActionU5BU5D_tF6161335A0A12A221AB081D78725C8AB6FE506D2* ___s_emptyArray_5;
};

// System.Collections.Generic.List`1<EventSystem.Runtime.Core.Dispose.DisposeContainer>
struct List_1_tC388E105FE5D097387E8CE94B853FBD4EB87B6E0  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	DisposeContainerU5BU5D_t0DAD5FA2295AC7F310BCF16B68CD96D16E59548C* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

struct List_1_tC388E105FE5D097387E8CE94B853FBD4EB87B6E0_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	DisposeContainerU5BU5D_t0DAD5FA2295AC7F310BCF16B68CD96D16E59548C* ___s_emptyArray_5;
};

// System.Collections.Generic.List`1<EventSystem.Runtime.Bus.Interfaces.ISubscription>
struct List_1_tC2324A4441524F04698D5BC263697C1B8B51CDC4  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	ISubscriptionU5BU5D_t862C619E1004C71AB339E0EB3E4B73290B35597B* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

struct List_1_tC2324A4441524F04698D5BC263697C1B8B51CDC4_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	ISubscriptionU5BU5D_t862C619E1004C71AB339E0EB3E4B73290B35597B* ___s_emptyArray_5;
};

// System.Collections.Generic.List`1<System.Object>
struct List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

struct List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___s_emptyArray_5;
};
struct Il2CppArrayBounds;

// Microsoft.CSharp.RuntimeBinder.CSharpArgumentInfo
struct CSharpArgumentInfo_tC298899BB33AB3FF7B82A90878CD3EDB3DBAD43A  : public RuntimeObject
{
	// Microsoft.CSharp.RuntimeBinder.CSharpArgumentInfoFlags Microsoft.CSharp.RuntimeBinder.CSharpArgumentInfo::<Flags>k__BackingField
	int32_t ___U3CFlagsU3Ek__BackingField_1;
	// System.String Microsoft.CSharp.RuntimeBinder.CSharpArgumentInfo::<Name>k__BackingField
	String_t* ___U3CNameU3Ek__BackingField_2;
};

struct CSharpArgumentInfo_tC298899BB33AB3FF7B82A90878CD3EDB3DBAD43A_StaticFields
{
	// Microsoft.CSharp.RuntimeBinder.CSharpArgumentInfo Microsoft.CSharp.RuntimeBinder.CSharpArgumentInfo::None
	CSharpArgumentInfo_tC298899BB33AB3FF7B82A90878CD3EDB3DBAD43A* ___None_0;
};

// System.Runtime.CompilerServices.CallSite
struct CallSite_t7E03097DD9D28AA5BB84A32493F38B8AF731B5AF  : public RuntimeObject
{
	// System.Runtime.CompilerServices.CallSiteBinder System.Runtime.CompilerServices.CallSite::_binder
	CallSiteBinder_tAFC922BA1DD2D1AEF6BC2742E0E375F936D5059F* ____binder_1;
	// System.Boolean System.Runtime.CompilerServices.CallSite::_match
	bool ____match_2;
};

struct CallSite_t7E03097DD9D28AA5BB84A32493F38B8AF731B5AF_StaticFields
{
	// System.Dynamic.Utils.CacheDict`2<System.Type,System.Func`2<System.Runtime.CompilerServices.CallSiteBinder,System.Runtime.CompilerServices.CallSite>> modreq(System.Runtime.CompilerServices.IsVolatile) System.Runtime.CompilerServices.CallSite::s_siteCtors
	CacheDict_2_t51D4B7C0FC5BE04893EE3AD20CA06419A2F6C532* ___s_siteCtors_0;
};

// System.Runtime.CompilerServices.CallSiteBinder
struct CallSiteBinder_tAFC922BA1DD2D1AEF6BC2742E0E375F936D5059F  : public RuntimeObject
{
	// System.Collections.Generic.Dictionary`2<System.Type,System.Object> System.Runtime.CompilerServices.CallSiteBinder::Cache
	Dictionary_2_t954AEC357FE7190582B8255D4ACEF81F5E94A6A5* ___Cache_0;
};

struct CallSiteBinder_tAFC922BA1DD2D1AEF6BC2742E0E375F936D5059F_StaticFields
{
	// System.Linq.Expressions.LabelTarget System.Runtime.CompilerServices.CallSiteBinder::<UpdateLabel>k__BackingField
	LabelTarget_t8082D0D35E4D9BE77C683DCDF2AB10DA5C0EB9C5* ___U3CUpdateLabelU3Ek__BackingField_1;
};

// EventSystem.Runtime.Core.Events.Base.CancelableEventBase
struct CancelableEventBase_t3E558D21980C25374A6F9C35C7A43815110A935A  : public RuntimeObject
{
	// System.Boolean EventSystem.Runtime.Core.Events.Base.CancelableEventBase::<Canceled>k__BackingField
	bool ___U3CCanceledU3Ek__BackingField_0;
};

// EventSystem.Runtime.Bus.CustomEvent
struct CustomEvent_tBEDC67626FF1C53DC5C0C06B9F6A6BEC954EC7B5  : public RuntimeObject
{
	// System.String EventSystem.Runtime.Bus.CustomEvent::<Key>k__BackingField
	String_t* ___U3CKeyU3Ek__BackingField_0;
};

// EventSystem.Runtime.Core.Dispose.DisposeContainer
struct DisposeContainer_t1201D3858AAFCED17DD46A94CF7B1B4059A964F6  : public RuntimeObject
{
	// System.Action EventSystem.Runtime.Core.Dispose.DisposeContainer::_disposeAction
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ____disposeAction_0;
};

// EventSystem.Runtime.Core.Events.Dynamic.DynamicArgEvent
struct DynamicArgEvent_t0E2BBF690EFB77F74D10D049589FDDC35F2E9321  : public RuntimeObject
{
	// System.Collections.Generic.Dictionary`2<System.String,System.Collections.Generic.List`1<System.Action`1<System.Object>>> EventSystem.Runtime.Core.Events.Dynamic.DynamicArgEvent::_events
	Dictionary_2_t1B4B07393C1CA6FC57C34061B19D3C60432BD009* ____events_0;
};

// EventSystem.Runtime.Core.Handlers.Dynamic.DynamicArgHandler
struct DynamicArgHandler_t409726FCDE13E0898C72A24C4FBEF235D4C67C06  : public RuntimeObject
{
};

struct DynamicArgHandler_t409726FCDE13E0898C72A24C4FBEF235D4C67C06_StaticFields
{
	// EventSystem.Runtime.Core.Events.Dynamic.DynamicArgEvent EventSystem.Runtime.Core.Handlers.Dynamic.DynamicArgHandler::_events
	DynamicArgEvent_t0E2BBF690EFB77F74D10D049589FDDC35F2E9321* ____events_0;
};

// EventSystem.Runtime.Core.Events.Dynamic.DynamicArgsEvent
struct DynamicArgsEvent_t44D5B68696ABC8A0AB00CFF19C33A985C399A797  : public RuntimeObject
{
	// System.Collections.Generic.Dictionary`2<System.String,System.Collections.Generic.List`1<System.Action`1<System.Object[]>>> EventSystem.Runtime.Core.Events.Dynamic.DynamicArgsEvent::_actions
	Dictionary_2_t36E2587B3FD6C44141C9F14D532FDFAAD4E3E963* ____actions_0;
};

// EventSystem.Runtime.Core.Handlers.Dynamic.DynamicArgsHandler
struct DynamicArgsHandler_t328B58DACAB12F1A5FDA7E2EAF6CEF8593E04AEC  : public RuntimeObject
{
};

struct DynamicArgsHandler_t328B58DACAB12F1A5FDA7E2EAF6CEF8593E04AEC_StaticFields
{
	// EventSystem.Runtime.Core.Events.Dynamic.DynamicArgsEvent EventSystem.Runtime.Core.Handlers.Dynamic.DynamicArgsHandler::_events
	DynamicArgsEvent_t44D5B68696ABC8A0AB00CFF19C33A985C399A797* ____events_0;
};

// EventSystem.Runtime.Core.Managers.DynamicEventManager
struct DynamicEventManager_tBA8B5285D8DDBF1D544B82115081E2A0ECBB95C5  : public RuntimeObject
{
};

// EventSystem.Runtime.Bus.EventBus
struct EventBus_t38EEAA31225B2E5DA42372B418AF82481D6929D3  : public RuntimeObject
{
	// EventSystem.Runtime.Bus.Configuration.IEventBusConfiguration EventSystem.Runtime.Bus.EventBus::_eventBusConfiguration
	RuntimeObject* ____eventBusConfiguration_0;
	// System.Collections.Generic.Dictionary`2<System.Type,System.Collections.Generic.List`1<EventSystem.Runtime.Bus.Interfaces.ISubscription>> EventSystem.Runtime.Bus.EventBus::_subscriptions
	Dictionary_2_t63D9CDC65755610F2ECF2FF21363753AAD3C1BB7* ____subscriptions_1;
};

struct EventBus_t38EEAA31225B2E5DA42372B418AF82481D6929D3_StaticFields
{
	// System.Object EventSystem.Runtime.Bus.EventBus::SubscriptionsLock
	RuntimeObject* ___SubscriptionsLock_2;
};

// EventSystem.Runtime.Bus.Configuration.EventBusConfiguration
struct EventBusConfiguration_tF8A2907FC2B49AEF9A4B90732802DE0924AF223D  : public RuntimeObject
{
	// System.Boolean EventSystem.Runtime.Bus.Configuration.EventBusConfiguration::<ThrowSubscriberException>k__BackingField
	bool ___U3CThrowSubscriberExceptionU3Ek__BackingField_0;
};

struct EventBusConfiguration_tF8A2907FC2B49AEF9A4B90732802DE0924AF223D_StaticFields
{
	// EventSystem.Runtime.Bus.Configuration.EventBusConfiguration EventSystem.Runtime.Bus.Configuration.EventBusConfiguration::Default
	EventBusConfiguration_tF8A2907FC2B49AEF9A4B90732802DE0924AF223D* ___Default_1;
};

// EventSystem.Runtime.Bus.EventBusExtensions
struct EventBusExtensions_t73ED1349C2D1BEFE89B29DC425A1F6B3B4009A7E  : public RuntimeObject
{
};

// EventSystem.Runtime.Bus.Extensions.EventBusExtensions
struct EventBusExtensions_tB1BFB3F00962BA4F508644D081C428E35D5C923F  : public RuntimeObject
{
};

// EventSystem.Runtime.Core.Dispose.EventDisposal
struct EventDisposal_tA44FC96FC224E6398FC2E7AB40B8A11D6E617A41  : public RuntimeObject
{
	// System.Collections.Generic.List`1<EventSystem.Runtime.Core.Dispose.DisposeContainer> EventSystem.Runtime.Core.Dispose.EventDisposal::_disposeActions
	List_1_tC388E105FE5D097387E8CE94B853FBD4EB87B6E0* ____disposeActions_0;
};

// EventSystem.Runtime.Core.Dispose.EventDisposalExtension
struct EventDisposalExtension_t8A560A65E234253377F63FF0AAFFAFF55747302E  : public RuntimeObject
{
};

// EventSystem.Runtime.Core.Managers.EventManager
struct EventManager_tAA0249D8254DCA78E35F684DA5FA6EA1911901EB  : public RuntimeObject
{
};

// EventSystem.Runtime.Core.Handlers.Static.FuncEventHandler
struct FuncEventHandler_t36FC616BABE4EB47E45602D49C0BFCEFF606B34B  : public RuntimeObject
{
};

struct FuncEventHandler_t36FC616BABE4EB47E45602D49C0BFCEFF606B34B_StaticFields
{
	// System.Collections.Generic.Dictionary`2<System.Type,EventSystem.Runtime.Core.Events.Base.IEvent> EventSystem.Runtime.Core.Handlers.Static.FuncEventHandler::Events
	Dictionary_2_t8B48DAE0DB53621894893AF0FE471EC563B9F6FD* ___Events_0;
};

// EventSystem.Runtime.Core.Handlers.Static.GenericEventHandler
struct GenericEventHandler_tC5C0F849D77D4FEBD3190DBD7D781C4C97C77E4F  : public RuntimeObject
{
};

struct GenericEventHandler_tC5C0F849D77D4FEBD3190DBD7D781C4C97C77E4F_StaticFields
{
	// System.Collections.Generic.Dictionary`2<System.Type,EventSystem.Runtime.Core.Events.Base.IEvent> EventSystem.Runtime.Core.Handlers.Static.GenericEventHandler::Events
	Dictionary_2_t8B48DAE0DB53621894893AF0FE471EC563B9F6FD* ___Events_0;
};

// System.Reflection.MemberInfo
struct MemberInfo_t  : public RuntimeObject
{
};

// EventSystem.Runtime.Core.Events.Static.ObjectArgsEvent
struct ObjectArgsEvent_tBA5DA05238A2C5E0801083B9345A915757A965A9  : public RuntimeObject
{
	// System.Collections.Generic.Dictionary`2<System.String,System.Collections.Generic.List`1<System.Action`1<System.Object[]>>> EventSystem.Runtime.Core.Events.Static.ObjectArgsEvent::_actions
	Dictionary_2_t36E2587B3FD6C44141C9F14D532FDFAAD4E3E963* ____actions_0;
};

// EventSystem.Runtime.Core.Handlers.Static.ObjectArgsHandler
struct ObjectArgsHandler_tBB4ADAA1A53BAD3B6DDCA150B5A6429A7BF5E790  : public RuntimeObject
{
};

struct ObjectArgsHandler_tBB4ADAA1A53BAD3B6DDCA150B5A6429A7BF5E790_StaticFields
{
	// EventSystem.Runtime.Core.Events.Static.ObjectArgsEvent EventSystem.Runtime.Core.Handlers.Static.ObjectArgsHandler::_events
	ObjectArgsEvent_tBA5DA05238A2C5E0801083B9345A915757A965A9* ____events_0;
};

// EventSystem.Runtime.Core.Events.Static.ObjectEvent
struct ObjectEvent_t0DC53C5597C4D5A069A4DC526396F5501BA22E9A  : public RuntimeObject
{
	// System.Action`1<System.Object[]> EventSystem.Runtime.Core.Events.Static.ObjectEvent::<Action>k__BackingField
	Action_1_t12A760F019B1942FA3868174D10CBA1CCC90A535* ___U3CActionU3Ek__BackingField_0;
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

// EventSystem.Runtime.Core.Events.Static.SingleEvent
struct SingleEvent_t74A1A527F011A34A7FCD670FD1D93C354E79CE78  : public RuntimeObject
{
	// System.Collections.Generic.Dictionary`2<System.String,System.Collections.Generic.List`1<System.Action>> EventSystem.Runtime.Core.Events.Static.SingleEvent::_events
	Dictionary_2_t215F4C3C2E9B1B610937281F8E80C984A643D095* ____events_0;
};

// EventSystem.Runtime.Core.Handlers.Static.SingleEventHandler
struct SingleEventHandler_tB06F6AB4ECA2EB2BEFDF9598F389A74FDF328203  : public RuntimeObject
{
};

struct SingleEventHandler_tB06F6AB4ECA2EB2BEFDF9598F389A74FDF328203_StaticFields
{
	// EventSystem.Runtime.Core.Events.Static.SingleEvent EventSystem.Runtime.Core.Handlers.Static.SingleEventHandler::_singleEvents
	SingleEvent_t74A1A527F011A34A7FCD670FD1D93C354E79CE78* ____singleEvents_0;
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

// EventSystem.Runtime.Bus.SubscriptionResult
struct SubscriptionResult_t6AF632194890A72CCD10EC3528AD6559D825B3A4  : public RuntimeObject
{
	// EventSystem.Runtime.Bus.SubscriptionToken EventSystem.Runtime.Bus.SubscriptionResult::<Token>k__BackingField
	SubscriptionToken_tD978A093982292F2797A7B52299C4178FDD69760* ___U3CTokenU3Ek__BackingField_0;
	// EventSystem.Runtime.Core.Dispose.DisposeContainer EventSystem.Runtime.Bus.SubscriptionResult::<Container>k__BackingField
	DisposeContainer_t1201D3858AAFCED17DD46A94CF7B1B4059A964F6* ___U3CContainerU3Ek__BackingField_1;
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

// EventSystem.Runtime.Core.Events.Dynamic.DynamicArgEvent/<>o__3
struct U3CU3Eo__3_tCB1BE07F6BC790612009C853F37D920AF720F186  : public RuntimeObject
{
};

struct U3CU3Eo__3_tCB1BE07F6BC790612009C853F37D920AF720F186_StaticFields
{
	// System.Runtime.CompilerServices.CallSite`1<System.Action`3<System.Runtime.CompilerServices.CallSite,System.Action`1<System.Object>,System.Object>> EventSystem.Runtime.Core.Events.Dynamic.DynamicArgEvent/<>o__3::<>p__0
	CallSite_1_tB0F9C96400730A68BE3C595626330079F1217D3A* ___U3CU3Ep__0_0;
};

// EventSystem.Runtime.Core.Handlers.Dynamic.DynamicArgHandler/<>c__DisplayClass1_0
struct U3CU3Ec__DisplayClass1_0_t46819A260C814A1852949B0A65E5A24312882E72  : public RuntimeObject
{
	// System.String EventSystem.Runtime.Core.Handlers.Dynamic.DynamicArgHandler/<>c__DisplayClass1_0::key
	String_t* ___key_0;
	// System.Action`1<System.Object> EventSystem.Runtime.Core.Handlers.Dynamic.DynamicArgHandler/<>c__DisplayClass1_0::action
	Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* ___action_1;
};

// EventSystem.Runtime.Core.Handlers.Dynamic.DynamicArgHandler/<>o__3
struct U3CU3Eo__3_t7979F3704D77D1F72F8DE249DF5187C3919D5FD3  : public RuntimeObject
{
};

struct U3CU3Eo__3_t7979F3704D77D1F72F8DE249DF5187C3919D5FD3_StaticFields
{
	// System.Runtime.CompilerServices.CallSite`1<System.Action`4<System.Runtime.CompilerServices.CallSite,EventSystem.Runtime.Core.Events.Dynamic.DynamicArgEvent,System.String,System.Object>> EventSystem.Runtime.Core.Handlers.Dynamic.DynamicArgHandler/<>o__3::<>p__0
	CallSite_1_t0C8F4178F25F2B040A07CD24906589CEF4067422* ___U3CU3Ep__0_0;
};

// EventSystem.Runtime.Core.Handlers.Dynamic.DynamicArgsHandler/<>c__DisplayClass1_0
struct U3CU3Ec__DisplayClass1_0_t691BE5DCD173FF625487029F87DEF63F04F7D077  : public RuntimeObject
{
	// System.String EventSystem.Runtime.Core.Handlers.Dynamic.DynamicArgsHandler/<>c__DisplayClass1_0::key
	String_t* ___key_0;
	// System.Action`1<System.Object[]> EventSystem.Runtime.Core.Handlers.Dynamic.DynamicArgsHandler/<>c__DisplayClass1_0::action
	Action_1_t12A760F019B1942FA3868174D10CBA1CCC90A535* ___action_1;
};

// EventSystem.Runtime.Core.Managers.DynamicEventManager/<>o__4
struct U3CU3Eo__4_tB8894DA93786D6B229FC0B813A11E319AEC7D3B0  : public RuntimeObject
{
};

struct U3CU3Eo__4_tB8894DA93786D6B229FC0B813A11E319AEC7D3B0_StaticFields
{
	// System.Runtime.CompilerServices.CallSite`1<System.Action`4<System.Runtime.CompilerServices.CallSite,System.Type,System.String,System.Object>> EventSystem.Runtime.Core.Managers.DynamicEventManager/<>o__4::<>p__0
	CallSite_1_t8262E1A720D6042B566DF07A65A318A509025451* ___U3CU3Ep__0_0;
};

// EventSystem.Runtime.Bus.EventBus/<>c__DisplayClass5_0
struct U3CU3Ec__DisplayClass5_0_t6D3925E50D36CC480F0E06364C38D5A624A5F8B0  : public RuntimeObject
{
	// EventSystem.Runtime.Bus.SubscriptionToken EventSystem.Runtime.Bus.EventBus/<>c__DisplayClass5_0::token
	SubscriptionToken_tD978A093982292F2797A7B52299C4178FDD69760* ___token_0;
};

// EventSystem.Runtime.Bus.EventBusExtensions/<>c__DisplayClass0_0
struct U3CU3Ec__DisplayClass0_0_t6BB545FCC9F8924FD745AA27E5AD9702FBDFDAFD  : public RuntimeObject
{
	// System.Action EventSystem.Runtime.Bus.EventBusExtensions/<>c__DisplayClass0_0::action
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ___action_0;
};

// EventSystem.Runtime.Core.Handlers.Static.ObjectArgsHandler/<>c__DisplayClass1_0
struct U3CU3Ec__DisplayClass1_0_tF5CF98D5477139AE5BBF216C4B7AF08F2C9F9CDD  : public RuntimeObject
{
	// System.String EventSystem.Runtime.Core.Handlers.Static.ObjectArgsHandler/<>c__DisplayClass1_0::key
	String_t* ___key_0;
	// System.Action`1<System.Object[]> EventSystem.Runtime.Core.Handlers.Static.ObjectArgsHandler/<>c__DisplayClass1_0::action
	Action_1_t12A760F019B1942FA3868174D10CBA1CCC90A535* ___action_1;
};

// EventSystem.Runtime.Core.Handlers.Static.SingleEventHandler/<>c__DisplayClass1_0
struct U3CU3Ec__DisplayClass1_0_tAC42DC9A517648C6BEFC7A89F7AB44C1472481FD  : public RuntimeObject
{
	// System.String EventSystem.Runtime.Core.Handlers.Static.SingleEventHandler/<>c__DisplayClass1_0::key
	String_t* ___key_0;
	// System.Action EventSystem.Runtime.Core.Handlers.Static.SingleEventHandler/<>c__DisplayClass1_0::action
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ___action_1;
};

// System.Runtime.CompilerServices.CallSite`1<System.Action`3<System.Runtime.CompilerServices.CallSite,System.Action`1<System.Object>,System.Object>>
struct CallSite_1_tB0F9C96400730A68BE3C595626330079F1217D3A  : public CallSite_t7E03097DD9D28AA5BB84A32493F38B8AF731B5AF
{
	// T System.Runtime.CompilerServices.CallSite`1::Target
	Action_3_t2B71C88FAB139B334F875C524BBFA20969B9CA61* ___Target_3;
	// T[] System.Runtime.CompilerServices.CallSite`1::Rules
	Action_3U5BU5D_tB168A1B3B24909072C9273BEBE96D05D0B73B13B* ___Rules_4;
};

struct CallSite_1_tB0F9C96400730A68BE3C595626330079F1217D3A_StaticFields
{
	// T System.Runtime.CompilerServices.CallSite`1::s_cachedUpdate
	Action_3_t2B71C88FAB139B334F875C524BBFA20969B9CA61* ___s_cachedUpdate_5;
	// T modreq(System.Runtime.CompilerServices.IsVolatile) System.Runtime.CompilerServices.CallSite`1::s_cachedNoMatch
	Action_3_t2B71C88FAB139B334F875C524BBFA20969B9CA61* ___s_cachedNoMatch_6;
};

// System.Runtime.CompilerServices.CallSite`1<System.Action`4<System.Runtime.CompilerServices.CallSite,EventSystem.Runtime.Core.Events.Dynamic.DynamicArgEvent,System.String,System.Object>>
struct CallSite_1_t0C8F4178F25F2B040A07CD24906589CEF4067422  : public CallSite_t7E03097DD9D28AA5BB84A32493F38B8AF731B5AF
{
	// T System.Runtime.CompilerServices.CallSite`1::Target
	Action_4_t524CB5C6C54D837D0FBEED90EC928B275DA1B4B1* ___Target_3;
	// T[] System.Runtime.CompilerServices.CallSite`1::Rules
	Action_4U5BU5D_t39285D6DFF7273A0E984EE2D73765C75EB4660EE* ___Rules_4;
};

struct CallSite_1_t0C8F4178F25F2B040A07CD24906589CEF4067422_StaticFields
{
	// T System.Runtime.CompilerServices.CallSite`1::s_cachedUpdate
	Action_4_t524CB5C6C54D837D0FBEED90EC928B275DA1B4B1* ___s_cachedUpdate_5;
	// T modreq(System.Runtime.CompilerServices.IsVolatile) System.Runtime.CompilerServices.CallSite`1::s_cachedNoMatch
	Action_4_t524CB5C6C54D837D0FBEED90EC928B275DA1B4B1* ___s_cachedNoMatch_6;
};

// System.Runtime.CompilerServices.CallSite`1<System.Action`4<System.Runtime.CompilerServices.CallSite,System.Type,System.String,System.Object>>
struct CallSite_1_t8262E1A720D6042B566DF07A65A318A509025451  : public CallSite_t7E03097DD9D28AA5BB84A32493F38B8AF731B5AF
{
	// T System.Runtime.CompilerServices.CallSite`1::Target
	Action_4_t81AD7F810D67CA5D307DC607DFE02F6E50B943E4* ___Target_3;
	// T[] System.Runtime.CompilerServices.CallSite`1::Rules
	Action_4U5BU5D_t39D935729D9E068F361D881D66859FB5614CDC18* ___Rules_4;
};

struct CallSite_1_t8262E1A720D6042B566DF07A65A318A509025451_StaticFields
{
	// T System.Runtime.CompilerServices.CallSite`1::s_cachedUpdate
	Action_4_t81AD7F810D67CA5D307DC607DFE02F6E50B943E4* ___s_cachedUpdate_5;
	// T modreq(System.Runtime.CompilerServices.IsVolatile) System.Runtime.CompilerServices.CallSite`1::s_cachedNoMatch
	Action_4_t81AD7F810D67CA5D307DC607DFE02F6E50B943E4* ___s_cachedNoMatch_6;
};

// System.Collections.Generic.List`1/Enumerator<System.Action`1<System.Object[]>>
struct Enumerator_tADE5E62B83E596FEB9A074D6C1AACC4A4E9CAB5F 
{
	// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1/Enumerator::_list
	List_1_tB12CCD7FC908B47BBBD4FA3CBF0D9B1A35310012* ____list_0;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::_index
	int32_t ____index_1;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::_version
	int32_t ____version_2;
	// T System.Collections.Generic.List`1/Enumerator::_current
	Action_1_t12A760F019B1942FA3868174D10CBA1CCC90A535* ____current_3;
};

// System.Collections.Generic.List`1/Enumerator<System.Action`1<System.Object>>
struct Enumerator_t5D47FF3EEF2C14FA66538784050E787CA7943C2E 
{
	// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1/Enumerator::_list
	List_1_t8ED86F5A318743E9CE1F85A351EB862E45361BE0* ____list_0;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::_index
	int32_t ____index_1;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::_version
	int32_t ____version_2;
	// T System.Collections.Generic.List`1/Enumerator::_current
	Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* ____current_3;
};

// System.Collections.Generic.List`1/Enumerator<System.Action>
struct Enumerator_t3787AC8C42D500C005E2D239B9F7650C1E44A58D 
{
	// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1/Enumerator::_list
	List_1_tDB72209F35D56F62A287633F9450978E90B90987* ____list_0;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::_index
	int32_t ____index_1;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::_version
	int32_t ____version_2;
	// T System.Collections.Generic.List`1/Enumerator::_current
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ____current_3;
};

// System.Collections.Generic.List`1/Enumerator<System.Object>
struct Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A 
{
	// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1/Enumerator::_list
	List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* ____list_0;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::_index
	int32_t ____index_1;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::_version
	int32_t ____version_2;
	// T System.Collections.Generic.List`1/Enumerator::_current
	RuntimeObject* ____current_3;
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

// System.Enum
struct Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2  : public ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F
{
};

struct Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2_StaticFields
{
	// System.Char[] System.Enum::enumSeperatorCharArray
	CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* ___enumSeperatorCharArray_0;
};
// Native definition for P/Invoke marshalling of System.Enum
struct Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.Enum
struct Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2_marshaled_com
{
};

// EventSystem.Runtime.Bus.Unity.GlobalEventBus
struct GlobalEventBus_t1A9E0D0263A42224275D763EDF55D5C639E7B8D3  : public EventBus_t38EEAA31225B2E5DA42372B418AF82481D6929D3
{
};

struct GlobalEventBus_t1A9E0D0263A42224275D763EDF55D5C639E7B8D3_StaticFields
{
	// EventSystem.Runtime.Bus.Unity.GlobalEventBus EventSystem.Runtime.Bus.Unity.GlobalEventBus::_instance
	GlobalEventBus_t1A9E0D0263A42224275D763EDF55D5C639E7B8D3* ____instance_3;
};

// System.Guid
struct Guid_t 
{
	// System.Int32 System.Guid::_a
	int32_t ____a_1;
	// System.Int16 System.Guid::_b
	int16_t ____b_2;
	// System.Int16 System.Guid::_c
	int16_t ____c_3;
	// System.Byte System.Guid::_d
	uint8_t ____d_4;
	// System.Byte System.Guid::_e
	uint8_t ____e_5;
	// System.Byte System.Guid::_f
	uint8_t ____f_6;
	// System.Byte System.Guid::_g
	uint8_t ____g_7;
	// System.Byte System.Guid::_h
	uint8_t ____h_8;
	// System.Byte System.Guid::_i
	uint8_t ____i_9;
	// System.Byte System.Guid::_j
	uint8_t ____j_10;
	// System.Byte System.Guid::_k
	uint8_t ____k_11;
};

struct Guid_t_StaticFields
{
	// System.Guid System.Guid::Empty
	Guid_t ___Empty_0;
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

// System.Delegate
struct Delegate_t  : public RuntimeObject
{
	// System.IntPtr System.Delegate::method_ptr
	Il2CppMethodPointer ___method_ptr_0;
	// System.IntPtr System.Delegate::invoke_impl
	intptr_t ___invoke_impl_1;
	// System.Object System.Delegate::m_target
	RuntimeObject* ___m_target_2;
	// System.IntPtr System.Delegate::method
	intptr_t ___method_3;
	// System.IntPtr System.Delegate::delegate_trampoline
	intptr_t ___delegate_trampoline_4;
	// System.IntPtr System.Delegate::extra_arg
	intptr_t ___extra_arg_5;
	// System.IntPtr System.Delegate::method_code
	intptr_t ___method_code_6;
	// System.IntPtr System.Delegate::interp_method
	intptr_t ___interp_method_7;
	// System.IntPtr System.Delegate::interp_invoke_impl
	intptr_t ___interp_invoke_impl_8;
	// System.Reflection.MethodInfo System.Delegate::method_info
	MethodInfo_t* ___method_info_9;
	// System.Reflection.MethodInfo System.Delegate::original_method_info
	MethodInfo_t* ___original_method_info_10;
	// System.DelegateData System.Delegate::data
	DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E* ___data_11;
	// System.Boolean System.Delegate::method_is_virtual
	bool ___method_is_virtual_12;
};
// Native definition for P/Invoke marshalling of System.Delegate
struct Delegate_t_marshaled_pinvoke
{
	intptr_t ___method_ptr_0;
	intptr_t ___invoke_impl_1;
	Il2CppIUnknown* ___m_target_2;
	intptr_t ___method_3;
	intptr_t ___delegate_trampoline_4;
	intptr_t ___extra_arg_5;
	intptr_t ___method_code_6;
	intptr_t ___interp_method_7;
	intptr_t ___interp_invoke_impl_8;
	MethodInfo_t* ___method_info_9;
	MethodInfo_t* ___original_method_info_10;
	DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E* ___data_11;
	int32_t ___method_is_virtual_12;
};
// Native definition for COM marshalling of System.Delegate
struct Delegate_t_marshaled_com
{
	intptr_t ___method_ptr_0;
	intptr_t ___invoke_impl_1;
	Il2CppIUnknown* ___m_target_2;
	intptr_t ___method_3;
	intptr_t ___delegate_trampoline_4;
	intptr_t ___extra_arg_5;
	intptr_t ___method_code_6;
	intptr_t ___interp_method_7;
	intptr_t ___interp_invoke_impl_8;
	MethodInfo_t* ___method_info_9;
	MethodInfo_t* ___original_method_info_10;
	DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E* ___data_11;
	int32_t ___method_is_virtual_12;
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

// UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C  : public RuntimeObject
{
	// System.IntPtr UnityEngine.Object::m_CachedPtr
	intptr_t ___m_CachedPtr_0;
};

struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_StaticFields
{
	// System.Int32 UnityEngine.Object::OffsetOfInstanceIDInCPlusPlusObject
	int32_t ___OffsetOfInstanceIDInCPlusPlusObject_1;
};
// Native definition for P/Invoke marshalling of UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_marshaled_pinvoke
{
	intptr_t ___m_CachedPtr_0;
};
// Native definition for COM marshalling of UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_marshaled_com
{
	intptr_t ___m_CachedPtr_0;
};

// System.RuntimeTypeHandle
struct RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B 
{
	// System.IntPtr System.RuntimeTypeHandle::value
	intptr_t ___value_0;
};

// EventSystem.Runtime.Bus.SubscriptionToken
struct SubscriptionToken_tD978A093982292F2797A7B52299C4178FDD69760  : public RuntimeObject
{
	// System.Guid EventSystem.Runtime.Bus.SubscriptionToken::<Token>k__BackingField
	Guid_t ___U3CTokenU3Ek__BackingField_0;
	// System.Type EventSystem.Runtime.Bus.SubscriptionToken::<EventItemType>k__BackingField
	Type_t* ___U3CEventItemTypeU3Ek__BackingField_1;
};

// EventSystem.Runtime.Bus.Exceptions.AlreadyRegisteredException
struct AlreadyRegisteredException_tE953372A34938995FF32D1BA757FFBE930247947  : public Exception_t
{
	// EventSystem.Runtime.Bus.Interfaces.IEventBus EventSystem.Runtime.Bus.Exceptions.AlreadyRegisteredException::<EventBus>k__BackingField
	RuntimeObject* ___U3CEventBusU3Ek__BackingField_18;
	// System.Object EventSystem.Runtime.Bus.Exceptions.AlreadyRegisteredException::<EventProxy>k__BackingField
	RuntimeObject* ___U3CEventProxyU3Ek__BackingField_19;
};

// UnityEngine.Component
struct Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
};

// System.MulticastDelegate
struct MulticastDelegate_t  : public Delegate_t
{
	// System.Delegate[] System.MulticastDelegate::delegates
	DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771* ___delegates_13;
};
// Native definition for P/Invoke marshalling of System.MulticastDelegate
struct MulticastDelegate_t_marshaled_pinvoke : public Delegate_t_marshaled_pinvoke
{
	Delegate_t_marshaled_pinvoke** ___delegates_13;
};
// Native definition for COM marshalling of System.MulticastDelegate
struct MulticastDelegate_t_marshaled_com : public Delegate_t_marshaled_com
{
	Delegate_t_marshaled_com** ___delegates_13;
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

// EventSystem.Runtime.Bus.Exceptions.TypeNotRegisteredException
struct TypeNotRegisteredException_t7DCA95FC37A8DE3F7525E29CBAE850342EEEE0A3  : public Exception_t
{
	// System.Type EventSystem.Runtime.Bus.Exceptions.TypeNotRegisteredException::<NonRegisteredType>k__BackingField
	Type_t* ___U3CNonRegisteredTypeU3Ek__BackingField_18;
};

// System.Action`1<System.Object[]>
struct Action_1_t12A760F019B1942FA3868174D10CBA1CCC90A535  : public MulticastDelegate_t
{
};

// System.Action`1<EventSystem.Runtime.Bus.CustomEvent>
struct Action_1_tF305089B51289C676688BE915607D76DCAD5528B  : public MulticastDelegate_t
{
};

// System.Action`1<System.Object>
struct Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87  : public MulticastDelegate_t
{
};

// System.Action`1<EventSystem.Runtime.Core.Events.Static.ObjectEvent>
struct Action_1_t0BC6F6703C2891500454846778FB9FAF4895D38D  : public MulticastDelegate_t
{
};

// System.Action`3<System.Runtime.CompilerServices.CallSite,System.Action`1<System.Object>,System.Object>
struct Action_3_t2B71C88FAB139B334F875C524BBFA20969B9CA61  : public MulticastDelegate_t
{
};

// System.Action`3<System.Object,System.Object,System.Object>
struct Action_3_tCDB60724FE7702C8848DCEE7A25283B015D0DA58  : public MulticastDelegate_t
{
};

// System.Action`4<System.Runtime.CompilerServices.CallSite,EventSystem.Runtime.Core.Events.Dynamic.DynamicArgEvent,System.String,System.Object>
struct Action_4_t524CB5C6C54D837D0FBEED90EC928B275DA1B4B1  : public MulticastDelegate_t
{
};

// System.Action`4<System.Runtime.CompilerServices.CallSite,System.Type,System.String,System.Object>
struct Action_4_t81AD7F810D67CA5D307DC607DFE02F6E50B943E4  : public MulticastDelegate_t
{
};

// System.Action`4<System.Object,System.Object,System.Object,System.Object>
struct Action_4_tAF05E98E3DA1B2D4E4629E152AB8AE2793BEE120  : public MulticastDelegate_t
{
};

// System.Func`2<EventSystem.Runtime.Bus.Interfaces.ISubscription,System.Boolean>
struct Func_2_t74A96543A4E6C66ED10B61FFB551D80AA076E046  : public MulticastDelegate_t
{
};

// System.Action
struct Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07  : public MulticastDelegate_t
{
};

// System.ArgumentException
struct ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263  : public SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295
{
	// System.String System.ArgumentException::_paramName
	String_t* ____paramName_18;
};

// System.AsyncCallback
struct AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C  : public MulticastDelegate_t
{
};

// UnityEngine.Behaviour
struct Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA  : public Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3
{
};

// System.NotImplementedException
struct NotImplementedException_t6366FE4DCF15094C51F4833B91A2AE68D4DA90E8  : public SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295
{
};

// System.ArgumentNullException
struct ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129  : public ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263
{
};

// UnityEngine.MonoBehaviour
struct MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71  : public Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA
{
};

// EventSystem.Runtime.Bus.Configuration.MonoBehaviourProxy
struct MonoBehaviourProxy_t8EF8DC6E8A10422656F746DEA0375D14FE1DFE9D  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
};
#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Microsoft.CSharp.RuntimeBinder.CSharpArgumentInfo[]
struct CSharpArgumentInfoU5BU5D_t5070B0B1D45658E97396A584A619F5289E69A5D5  : public RuntimeArray
{
	ALIGN_FIELD (8) CSharpArgumentInfo_tC298899BB33AB3FF7B82A90878CD3EDB3DBAD43A* m_Items[1];

	inline CSharpArgumentInfo_tC298899BB33AB3FF7B82A90878CD3EDB3DBAD43A* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline CSharpArgumentInfo_tC298899BB33AB3FF7B82A90878CD3EDB3DBAD43A** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, CSharpArgumentInfo_tC298899BB33AB3FF7B82A90878CD3EDB3DBAD43A* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline CSharpArgumentInfo_tC298899BB33AB3FF7B82A90878CD3EDB3DBAD43A* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline CSharpArgumentInfo_tC298899BB33AB3FF7B82A90878CD3EDB3DBAD43A** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, CSharpArgumentInfo_tC298899BB33AB3FF7B82A90878CD3EDB3DBAD43A* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// System.Object[]
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918  : public RuntimeArray
{
	ALIGN_FIELD (8) RuntimeObject* m_Items[1];

	inline RuntimeObject* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline RuntimeObject** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, RuntimeObject* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline RuntimeObject* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline RuntimeObject** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, RuntimeObject* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};


// System.Runtime.CompilerServices.CallSite`1<T> System.Runtime.CompilerServices.CallSite`1<System.Object>::Create(System.Runtime.CompilerServices.CallSiteBinder)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR CallSite_1_t8003A47F608763107DBCC0D06FFD87AE4EE7BA98* CallSite_1_Create_m96936720C342472E6485A9CE9F8112C93F765C7C_gshared (CallSiteBinder_tAFC922BA1DD2D1AEF6BC2742E0E375F936D5059F* ___binder0, const RuntimeMethod* method) ;
// System.Void System.Action`4<System.Object,System.Object,System.Object,System.Object>::Invoke(T1,T2,T3,T4)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Action_4_Invoke_mC8C8B8A8D0B62945087E4740BF7ED7D7E4F38A16_gshared_inline (Action_4_tAF05E98E3DA1B2D4E4629E152AB8AE2793BEE120* __this, RuntimeObject* ___arg10, RuntimeObject* ___arg21, RuntimeObject* ___arg32, RuntimeObject* ___arg43, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_m5B32FBC624618211EB461D59CFBB10E987FD1329_gshared (Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA* __this, const RuntimeMethod* method) ;
// T[] System.Array::Empty<System.Object>()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* Array_Empty_TisRuntimeObject_mFB8A63D602BB6974D31E20300D9EB89C6FE7C278_gshared_inline (const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Object>::ContainsKey(TKey)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_ContainsKey_m703047C213F7AB55C9DC346596287773A1F670CD_gshared (Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA* __this, RuntimeObject* ___key0, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__ctor_m7F078BB342729BDF11327FD89D7872265328F690_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::Add(TKey,TValue)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_Add_m93FFFABE8FCE7FA9793F0915E2A8842C7CD0C0C1_gshared (Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA* __this, RuntimeObject* ___key0, RuntimeObject* ___value1, const RuntimeMethod* method) ;
// TValue System.Collections.Generic.Dictionary`2<System.Object,System.Object>::get_Item(TKey)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Dictionary_2_get_Item_m4AAAECBE902A211BF2126E6AFA280AEF73A3E0D6_gshared (Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA* __this, RuntimeObject* ___key0, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.Object>::Add(T)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Add_mEBCF994CC3814631017F46A387B1A192ED6C85C7_gshared_inline (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, RuntimeObject* ___item0, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Object>::TryGetValue(TKey,TValue&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_TryGetValue_mD15380A4ED7CDEE99EA45881577D26BA9CE1B849_gshared (Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA* __this, RuntimeObject* ___key0, RuntimeObject** ___value1, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.List`1<System.Object>::Remove(T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool List_1_Remove_m4DFA48F4CEB9169601E75FC28517C5C06EFA5AD7_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, RuntimeObject* ___item0, const RuntimeMethod* method) ;
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<System.Object>::GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A List_1_GetEnumerator_mD8294A7FA2BEB1929487127D476F8EC1CDC23BFC_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1/Enumerator<System.Object>::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enumerator_Dispose_mD9DC3E3C3697830A4823047AB29A77DBBB5ED419_gshared (Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A* __this, const RuntimeMethod* method) ;
// T System.Collections.Generic.List`1/Enumerator<System.Object>::get_Current()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* Enumerator_get_Current_m6330F15D18EE4F547C05DF9BF83C5EB710376027_gshared_inline (Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A* __this, const RuntimeMethod* method) ;
// System.Void System.Action`1<System.Object>::Invoke(T)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Action_1_Invoke_mF2422B2DD29F74CE66F791C3F68E288EC7C3DB9E_gshared_inline (Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* __this, RuntimeObject* ___obj0, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.List`1/Enumerator<System.Object>::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Enumerator_MoveNext_mE921CC8F29FBBDE7CC3209A0ED0D921D58D00BCB_gshared (Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A* __this, const RuntimeMethod* method) ;
// System.Void System.Action`3<System.Object,System.Object,System.Object>::Invoke(T1,T2,T3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Action_3_Invoke_m399A0EB5E51EFD9B7D25DFE0EB7BF5EC0BE98346_gshared_inline (Action_3_tCDB60724FE7702C8848DCEE7A25283B015D0DA58* __this, RuntimeObject* ___arg10, RuntimeObject* ___arg21, RuntimeObject* ___arg32, const RuntimeMethod* method) ;
// T System.Collections.Generic.List`1<System.Object>::get_Item(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* List_1_get_Item_m33561245D64798C2AB07584C0EC4F240E4839A38_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, int32_t ___index0, const RuntimeMethod* method) ;
// System.Int32 System.Collections.Generic.List`1<System.Object>::get_Count()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t List_1_get_Count_m4407E4C389F22B8CEC282C15D56516658746C383_gshared_inline (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method) ;
// System.Void System.Func`2<System.Object,System.Boolean>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Func_2__ctor_m13C0A7F33154D861E2A041B52E88461832DA1697_gshared (Func_2_tE1F0D41563EE092E5E5540B061449FDE88F1DC00* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) ;
// TSource System.Linq.Enumerable::FirstOrDefault<System.Object>(System.Collections.Generic.IEnumerable`1<TSource>,System.Func`2<TSource,System.Boolean>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Enumerable_FirstOrDefault_TisRuntimeObject_mFACC750E4D7AF7B43F5B866C84F613B3ECC41994_gshared (RuntimeObject* ___source0, Func_2_tE1F0D41563EE092E5E5540B061449FDE88F1DC00* ___predicate1, const RuntimeMethod* method) ;
// System.Void System.Action`1<System.Object>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Action_1__ctor_m2E1DFA67718FC1A0B6E5DFEB78831FFE9C059EB4_gshared (Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) ;
// EventSystem.Runtime.Bus.SubscriptionResult EventSystem.Runtime.Bus.EventBus::Subscribe<System.Object>(System.Action`1<TEvent>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR SubscriptionResult_t6AF632194890A72CCD10EC3528AD6559D825B3A4* EventBus_Subscribe_TisRuntimeObject_mE4C23843CBD954B5B434115C602D29FF1F3A7D94_gshared (EventBus_t38EEAA31225B2E5DA42372B418AF82481D6929D3* __this, Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* ___action0, const RuntimeMethod* method) ;

// EventSystem.Runtime.Core.Dispose.DisposeContainer EventSystem.Runtime.Core.Handlers.Dynamic.DynamicArgHandler::Add(System.String,System.Action`1<System.Object>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR DisposeContainer_t1201D3858AAFCED17DD46A94CF7B1B4059A964F6* DynamicArgHandler_Add_m5D7E6C0E8556ABA5A73391294E0223B2F9C912AD (String_t* ___key0, Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* ___action1, const RuntimeMethod* method) ;
// EventSystem.Runtime.Core.Dispose.DisposeContainer EventSystem.Runtime.Core.Handlers.Dynamic.DynamicArgsHandler::Add(System.String,System.Action`1<System.Object[]>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR DisposeContainer_t1201D3858AAFCED17DD46A94CF7B1B4059A964F6* DynamicArgsHandler_Add_mE1DF7F12D2C6E4208BC74B98875B9AB6916011EE (String_t* ___key0, Action_1_t12A760F019B1942FA3868174D10CBA1CCC90A535* ___action1, const RuntimeMethod* method) ;
// System.Void EventSystem.Runtime.Core.Handlers.Dynamic.DynamicArgHandler::Remove(System.String,System.Action`1<System.Object>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DynamicArgHandler_Remove_m41505BB233B2523C6FB6060D248E600561E053C4 (String_t* ___key0, Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* ___action1, const RuntimeMethod* method) ;
// System.Void EventSystem.Runtime.Core.Handlers.Dynamic.DynamicArgsHandler::Remove(System.String,System.Action`1<System.Object[]>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DynamicArgsHandler_Remove_m675136873EAB4794943A8F4AE73D0D65D7DAD877 (String_t* ___key0, Action_1_t12A760F019B1942FA3868174D10CBA1CCC90A535* ___action1, const RuntimeMethod* method) ;
// System.Type System.Type::GetTypeFromHandle(System.RuntimeTypeHandle)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t* Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57 (RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B ___handle0, const RuntimeMethod* method) ;
// Microsoft.CSharp.RuntimeBinder.CSharpArgumentInfo Microsoft.CSharp.RuntimeBinder.CSharpArgumentInfo::Create(Microsoft.CSharp.RuntimeBinder.CSharpArgumentInfoFlags,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR CSharpArgumentInfo_tC298899BB33AB3FF7B82A90878CD3EDB3DBAD43A* CSharpArgumentInfo_Create_m4427E46681802570E3D2E20BCD164A8A6A9CCA5E (int32_t ___flags0, String_t* ___name1, const RuntimeMethod* method) ;
// System.Runtime.CompilerServices.CallSiteBinder Microsoft.CSharp.RuntimeBinder.Binder::InvokeMember(Microsoft.CSharp.RuntimeBinder.CSharpBinderFlags,System.String,System.Collections.Generic.IEnumerable`1<System.Type>,System.Type,System.Collections.Generic.IEnumerable`1<Microsoft.CSharp.RuntimeBinder.CSharpArgumentInfo>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR CallSiteBinder_tAFC922BA1DD2D1AEF6BC2742E0E375F936D5059F* Binder_InvokeMember_m9AC152D3F20F5502C4408288B8F253114C23B85E (int32_t ___flags0, String_t* ___name1, RuntimeObject* ___typeArguments2, Type_t* ___context3, RuntimeObject* ___argumentInfo4, const RuntimeMethod* method) ;
// System.Runtime.CompilerServices.CallSite`1<T> System.Runtime.CompilerServices.CallSite`1<System.Action`4<System.Runtime.CompilerServices.CallSite,System.Type,System.String,System.Object>>::Create(System.Runtime.CompilerServices.CallSiteBinder)
inline CallSite_1_t8262E1A720D6042B566DF07A65A318A509025451* CallSite_1_Create_mD991B036FFE6C23DCFD0A5463E79851B70D34F74 (CallSiteBinder_tAFC922BA1DD2D1AEF6BC2742E0E375F936D5059F* ___binder0, const RuntimeMethod* method)
{
	return ((  CallSite_1_t8262E1A720D6042B566DF07A65A318A509025451* (*) (CallSiteBinder_tAFC922BA1DD2D1AEF6BC2742E0E375F936D5059F*, const RuntimeMethod*))CallSite_1_Create_m96936720C342472E6485A9CE9F8112C93F765C7C_gshared)(___binder0, method);
}
// System.Void System.Action`4<System.Runtime.CompilerServices.CallSite,System.Type,System.String,System.Object>::Invoke(T1,T2,T3,T4)
inline void Action_4_Invoke_m262F84B42D2446D41F7751B0B28CC3B85DCF1E0B_inline (Action_4_t81AD7F810D67CA5D307DC607DFE02F6E50B943E4* __this, CallSite_t7E03097DD9D28AA5BB84A32493F38B8AF731B5AF* ___arg10, Type_t* ___arg21, String_t* ___arg32, RuntimeObject* ___arg43, const RuntimeMethod* method)
{
	((  void (*) (Action_4_t81AD7F810D67CA5D307DC607DFE02F6E50B943E4*, CallSite_t7E03097DD9D28AA5BB84A32493F38B8AF731B5AF*, Type_t*, String_t*, RuntimeObject*, const RuntimeMethod*))Action_4_Invoke_mC8C8B8A8D0B62945087E4740BF7ED7D7E4F38A16_gshared_inline)(__this, ___arg10, ___arg21, ___arg32, ___arg43, method);
}
// System.Void EventSystem.Runtime.Core.Handlers.Dynamic.DynamicArgsHandler::Invoke(System.String,System.Object[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DynamicArgsHandler_Invoke_mD74C674187FE81DE7B9C4CC81516C95F81FE428E (String_t* ___key0, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___value1, const RuntimeMethod* method) ;
// EventSystem.Runtime.Core.Dispose.DisposeContainer EventSystem.Runtime.Core.Handlers.Static.SingleEventHandler::Add(System.String,System.Action)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR DisposeContainer_t1201D3858AAFCED17DD46A94CF7B1B4059A964F6* SingleEventHandler_Add_mF176A21786526AB3466A9BFA9DFAC2119B1447B0 (String_t* ___key0, Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ___action1, const RuntimeMethod* method) ;
// EventSystem.Runtime.Core.Dispose.DisposeContainer EventSystem.Runtime.Core.Handlers.Static.ObjectArgsHandler::Add(System.String,System.Action`1<System.Object[]>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR DisposeContainer_t1201D3858AAFCED17DD46A94CF7B1B4059A964F6* ObjectArgsHandler_Add_m3E484AA1609DEE5FA64FCF627AF9AA63B3857437 (String_t* ___key0, Action_1_t12A760F019B1942FA3868174D10CBA1CCC90A535* ___action1, const RuntimeMethod* method) ;
// System.Void EventSystem.Runtime.Core.Handlers.Static.SingleEventHandler::Remove(System.String,System.Action)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SingleEventHandler_Remove_mA63C0F808C0BBB00FB1B8DA74E939BEFFC202478 (String_t* ___key0, Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ___action1, const RuntimeMethod* method) ;
// System.Void EventSystem.Runtime.Core.Handlers.Static.ObjectArgsHandler::Remove(System.String,System.Action`1<System.Object[]>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ObjectArgsHandler_Remove_m8D42CEC707364E7E17C35D6312BC874177BE049A (String_t* ___key0, Action_1_t12A760F019B1942FA3868174D10CBA1CCC90A535* ___action1, const RuntimeMethod* method) ;
// System.Void EventSystem.Runtime.Core.Handlers.Static.SingleEventHandler::Invoke(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SingleEventHandler_Invoke_m3F1AFE9F89B1182E029554E5AB4CC0461816BAF3 (String_t* ___key0, const RuntimeMethod* method) ;
// System.Void EventSystem.Runtime.Core.Handlers.Static.ObjectArgsHandler::Invoke(System.String,System.Object[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ObjectArgsHandler_Invoke_mEC63BD39C6E0327813D4E6E3EE7BBE6ACF19E259 (String_t* ___key0, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___arg1, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Dictionary`2<System.Type,EventSystem.Runtime.Core.Events.Base.IEvent>::.ctor()
inline void Dictionary_2__ctor_m8F162D16E464E89665BB23C7E9B47ABA1A7D8F74 (Dictionary_2_t8B48DAE0DB53621894893AF0FE471EC563B9F6FD* __this, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t8B48DAE0DB53621894893AF0FE471EC563B9F6FD*, const RuntimeMethod*))Dictionary_2__ctor_m5B32FBC624618211EB461D59CFBB10E987FD1329_gshared)(__this, method);
}
// System.Void EventSystem.Runtime.Core.Handlers.Static.ObjectArgsHandler/<>c__DisplayClass1_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass1_0__ctor_m6F38441C91D483112A852CBDB3996577DBD5FE57 (U3CU3Ec__DisplayClass1_0_tF5CF98D5477139AE5BBF216C4B7AF08F2C9F9CDD* __this, const RuntimeMethod* method) ;
// System.Void EventSystem.Runtime.Core.Events.Static.ObjectArgsEvent::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ObjectArgsEvent__ctor_m157B1566969665956702FEA90CE85F4B668DFD8C (ObjectArgsEvent_tBA5DA05238A2C5E0801083B9345A915757A965A9* __this, const RuntimeMethod* method) ;
// System.Void EventSystem.Runtime.Core.Events.Static.ObjectArgsEvent::Add(System.String,System.Action`1<System.Object[]>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ObjectArgsEvent_Add_mCA32687B48FFC42EF5ACEF356A7B1BA2845360CE (ObjectArgsEvent_tBA5DA05238A2C5E0801083B9345A915757A965A9* __this, String_t* ___key0, Action_1_t12A760F019B1942FA3868174D10CBA1CCC90A535* ___action1, const RuntimeMethod* method) ;
// System.Void System.Action::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Action__ctor_mBDC7B0B4A3F583B64C2896F01BDED360772F67DC (Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) ;
// System.Void EventSystem.Runtime.Core.Dispose.DisposeContainer::.ctor(System.Action)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DisposeContainer__ctor_m88024B7DDB5A0CAD0FE1AA8A0B87E1CB628555E2 (DisposeContainer_t1201D3858AAFCED17DD46A94CF7B1B4059A964F6* __this, Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ___disposeAction0, const RuntimeMethod* method) ;
// System.Void EventSystem.Runtime.Core.Events.Static.ObjectArgsEvent::Remove(System.String,System.Action`1<System.Object[]>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ObjectArgsEvent_Remove_m3AEF2B95BC058D808763A07F08C3A810A1D4EE85 (ObjectArgsEvent_tBA5DA05238A2C5E0801083B9345A915757A965A9* __this, String_t* ___key0, Action_1_t12A760F019B1942FA3868174D10CBA1CCC90A535* ___action1, const RuntimeMethod* method) ;
// T[] System.Array::Empty<System.Object>()
inline ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* Array_Empty_TisRuntimeObject_mFB8A63D602BB6974D31E20300D9EB89C6FE7C278_inline (const RuntimeMethod* method)
{
	return ((  ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* (*) (const RuntimeMethod*))Array_Empty_TisRuntimeObject_mFB8A63D602BB6974D31E20300D9EB89C6FE7C278_gshared_inline)(method);
}
// System.Void EventSystem.Runtime.Core.Events.Static.ObjectArgsEvent::Invoke(System.String,System.Object[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ObjectArgsEvent_Invoke_m9E35B2A46A61170A73BBDF1CAAE1057828AD3DE0 (ObjectArgsEvent_tBA5DA05238A2C5E0801083B9345A915757A965A9* __this, String_t* ___key0, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___parameters1, const RuntimeMethod* method) ;
// System.Void System.Object::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2 (RuntimeObject* __this, const RuntimeMethod* method) ;
// System.Void EventSystem.Runtime.Core.Handlers.Static.SingleEventHandler/<>c__DisplayClass1_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass1_0__ctor_m7DBAA8FA4405AC2F5C4620EE9FDB04321FE50B0E (U3CU3Ec__DisplayClass1_0_tAC42DC9A517648C6BEFC7A89F7AB44C1472481FD* __this, const RuntimeMethod* method) ;
// System.Void EventSystem.Runtime.Core.Events.Static.SingleEvent::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SingleEvent__ctor_m917F55CFB90457061DF4902F9A429413C5FF1B3C (SingleEvent_t74A1A527F011A34A7FCD670FD1D93C354E79CE78* __this, const RuntimeMethod* method) ;
// System.Void EventSystem.Runtime.Core.Events.Static.SingleEvent::Add(System.String,System.Action)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SingleEvent_Add_mA3DC9105E518544054C16B951226DA62D17B4C3C (SingleEvent_t74A1A527F011A34A7FCD670FD1D93C354E79CE78* __this, String_t* ___key0, Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ___action1, const RuntimeMethod* method) ;
// System.Void EventSystem.Runtime.Core.Events.Static.SingleEvent::Remove(System.String,System.Action)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SingleEvent_Remove_mCCB09B84E9FBF942F5827C87EC3D592FECEFDD78 (SingleEvent_t74A1A527F011A34A7FCD670FD1D93C354E79CE78* __this, String_t* ___key0, Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ___action1, const RuntimeMethod* method) ;
// System.Void EventSystem.Runtime.Core.Events.Static.SingleEvent::Invoke(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SingleEvent_Invoke_m426F5D481BE51994A6DFEB741B0AA05D9B82F0D9 (SingleEvent_t74A1A527F011A34A7FCD670FD1D93C354E79CE78* __this, String_t* ___key0, const RuntimeMethod* method) ;
// System.Void EventSystem.Runtime.Core.Handlers.Dynamic.DynamicArgHandler/<>c__DisplayClass1_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass1_0__ctor_m2F282C7A95F2BBDE7F38F6CF973CB430CA39AD02 (U3CU3Ec__DisplayClass1_0_t46819A260C814A1852949B0A65E5A24312882E72* __this, const RuntimeMethod* method) ;
// System.Void EventSystem.Runtime.Core.Events.Dynamic.DynamicArgEvent::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DynamicArgEvent__ctor_m5E0360C350401F2E800EECA65449BD3867EDEB13 (DynamicArgEvent_t0E2BBF690EFB77F74D10D049589FDDC35F2E9321* __this, const RuntimeMethod* method) ;
// System.Void EventSystem.Runtime.Core.Events.Dynamic.DynamicArgEvent::Add(System.String,System.Action`1<System.Object>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DynamicArgEvent_Add_m4C095D343326CB86CDA82D029C3EBFABCA7D765F (DynamicArgEvent_t0E2BBF690EFB77F74D10D049589FDDC35F2E9321* __this, String_t* ___key0, Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* ___action1, const RuntimeMethod* method) ;
// System.Void EventSystem.Runtime.Core.Events.Dynamic.DynamicArgEvent::Remove(System.String,System.Action`1<System.Object>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DynamicArgEvent_Remove_m2841AB7A8CDE690F71C5444719F707014D236504 (DynamicArgEvent_t0E2BBF690EFB77F74D10D049589FDDC35F2E9321* __this, String_t* ___key0, Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* ___action1, const RuntimeMethod* method) ;
// System.Runtime.CompilerServices.CallSite`1<T> System.Runtime.CompilerServices.CallSite`1<System.Action`4<System.Runtime.CompilerServices.CallSite,EventSystem.Runtime.Core.Events.Dynamic.DynamicArgEvent,System.String,System.Object>>::Create(System.Runtime.CompilerServices.CallSiteBinder)
inline CallSite_1_t0C8F4178F25F2B040A07CD24906589CEF4067422* CallSite_1_Create_mF5B0646F08A95138D59D668220D0B8FE64BD953B (CallSiteBinder_tAFC922BA1DD2D1AEF6BC2742E0E375F936D5059F* ___binder0, const RuntimeMethod* method)
{
	return ((  CallSite_1_t0C8F4178F25F2B040A07CD24906589CEF4067422* (*) (CallSiteBinder_tAFC922BA1DD2D1AEF6BC2742E0E375F936D5059F*, const RuntimeMethod*))CallSite_1_Create_m96936720C342472E6485A9CE9F8112C93F765C7C_gshared)(___binder0, method);
}
// System.Void System.Action`4<System.Runtime.CompilerServices.CallSite,EventSystem.Runtime.Core.Events.Dynamic.DynamicArgEvent,System.String,System.Object>::Invoke(T1,T2,T3,T4)
inline void Action_4_Invoke_mD326FBCBCCAFF278E95D2BF4D510D1140D855CA4_inline (Action_4_t524CB5C6C54D837D0FBEED90EC928B275DA1B4B1* __this, CallSite_t7E03097DD9D28AA5BB84A32493F38B8AF731B5AF* ___arg10, DynamicArgEvent_t0E2BBF690EFB77F74D10D049589FDDC35F2E9321* ___arg21, String_t* ___arg32, RuntimeObject* ___arg43, const RuntimeMethod* method)
{
	((  void (*) (Action_4_t524CB5C6C54D837D0FBEED90EC928B275DA1B4B1*, CallSite_t7E03097DD9D28AA5BB84A32493F38B8AF731B5AF*, DynamicArgEvent_t0E2BBF690EFB77F74D10D049589FDDC35F2E9321*, String_t*, RuntimeObject*, const RuntimeMethod*))Action_4_Invoke_mC8C8B8A8D0B62945087E4740BF7ED7D7E4F38A16_gshared_inline)(__this, ___arg10, ___arg21, ___arg32, ___arg43, method);
}
// System.Void EventSystem.Runtime.Core.Handlers.Dynamic.DynamicArgsHandler/<>c__DisplayClass1_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass1_0__ctor_m8E9E59B54DC6F1799B7E48C21B631BF8E0C5EC0A (U3CU3Ec__DisplayClass1_0_t691BE5DCD173FF625487029F87DEF63F04F7D077* __this, const RuntimeMethod* method) ;
// System.Void EventSystem.Runtime.Core.Events.Dynamic.DynamicArgsEvent::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DynamicArgsEvent__ctor_m597816885570F9FE01A317296BA270B6E5FE8C5F (DynamicArgsEvent_t44D5B68696ABC8A0AB00CFF19C33A985C399A797* __this, const RuntimeMethod* method) ;
// System.Void EventSystem.Runtime.Core.Events.Dynamic.DynamicArgsEvent::Add(System.String,System.Action`1<System.Object[]>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DynamicArgsEvent_Add_m49EABE3538937E13B56DE8484EE451202007BCE8 (DynamicArgsEvent_t44D5B68696ABC8A0AB00CFF19C33A985C399A797* __this, String_t* ___key0, Action_1_t12A760F019B1942FA3868174D10CBA1CCC90A535* ___action1, const RuntimeMethod* method) ;
// System.Void EventSystem.Runtime.Core.Events.Dynamic.DynamicArgsEvent::Remove(System.String,System.Action`1<System.Object[]>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DynamicArgsEvent_Remove_m2B095619BA9DD7841E89D224B97FF698CC647ED3 (DynamicArgsEvent_t44D5B68696ABC8A0AB00CFF19C33A985C399A797* __this, String_t* ___key0, Action_1_t12A760F019B1942FA3868174D10CBA1CCC90A535* ___action1, const RuntimeMethod* method) ;
// System.Void EventSystem.Runtime.Core.Events.Dynamic.DynamicArgsEvent::Invoke(System.String,System.Object[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DynamicArgsEvent_Invoke_m038EF52D6DC73A8D508E96C08740FB54061CB60A (DynamicArgsEvent_t44D5B68696ABC8A0AB00CFF19C33A985C399A797* __this, String_t* ___key0, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___parameters1, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.Dictionary`2<System.String,System.Collections.Generic.List`1<System.Action`1<System.Object[]>>>::ContainsKey(TKey)
inline bool Dictionary_2_ContainsKey_m13AC0CB75FBDCAA36C5C4D84D6DDB0036900E796 (Dictionary_2_t36E2587B3FD6C44141C9F14D532FDFAAD4E3E963* __this, String_t* ___key0, const RuntimeMethod* method)
{
	return ((  bool (*) (Dictionary_2_t36E2587B3FD6C44141C9F14D532FDFAAD4E3E963*, String_t*, const RuntimeMethod*))Dictionary_2_ContainsKey_m703047C213F7AB55C9DC346596287773A1F670CD_gshared)(__this, ___key0, method);
}
// System.Void System.Collections.Generic.List`1<System.Action`1<System.Object[]>>::.ctor()
inline void List_1__ctor_mBF1E71A430CCE6F5EF73FEF23B15B18CBB988E8D (List_1_tB12CCD7FC908B47BBBD4FA3CBF0D9B1A35310012* __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_tB12CCD7FC908B47BBBD4FA3CBF0D9B1A35310012*, const RuntimeMethod*))List_1__ctor_m7F078BB342729BDF11327FD89D7872265328F690_gshared)(__this, method);
}
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.Collections.Generic.List`1<System.Action`1<System.Object[]>>>::Add(TKey,TValue)
inline void Dictionary_2_Add_mC02BAAF29AE44983EE79F4D1D5C50C2AC0FAE3F3 (Dictionary_2_t36E2587B3FD6C44141C9F14D532FDFAAD4E3E963* __this, String_t* ___key0, List_1_tB12CCD7FC908B47BBBD4FA3CBF0D9B1A35310012* ___value1, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t36E2587B3FD6C44141C9F14D532FDFAAD4E3E963*, String_t*, List_1_tB12CCD7FC908B47BBBD4FA3CBF0D9B1A35310012*, const RuntimeMethod*))Dictionary_2_Add_m93FFFABE8FCE7FA9793F0915E2A8842C7CD0C0C1_gshared)(__this, ___key0, ___value1, method);
}
// TValue System.Collections.Generic.Dictionary`2<System.String,System.Collections.Generic.List`1<System.Action`1<System.Object[]>>>::get_Item(TKey)
inline List_1_tB12CCD7FC908B47BBBD4FA3CBF0D9B1A35310012* Dictionary_2_get_Item_mAE3A58C0EFCD66EE9DA9219B12B4701905CE21E8 (Dictionary_2_t36E2587B3FD6C44141C9F14D532FDFAAD4E3E963* __this, String_t* ___key0, const RuntimeMethod* method)
{
	return ((  List_1_tB12CCD7FC908B47BBBD4FA3CBF0D9B1A35310012* (*) (Dictionary_2_t36E2587B3FD6C44141C9F14D532FDFAAD4E3E963*, String_t*, const RuntimeMethod*))Dictionary_2_get_Item_m4AAAECBE902A211BF2126E6AFA280AEF73A3E0D6_gshared)(__this, ___key0, method);
}
// System.Void System.Collections.Generic.List`1<System.Action`1<System.Object[]>>::Add(T)
inline void List_1_Add_mCDF65A3E3E2FA2DA10783D7F242594C65D95576D_inline (List_1_tB12CCD7FC908B47BBBD4FA3CBF0D9B1A35310012* __this, Action_1_t12A760F019B1942FA3868174D10CBA1CCC90A535* ___item0, const RuntimeMethod* method)
{
	((  void (*) (List_1_tB12CCD7FC908B47BBBD4FA3CBF0D9B1A35310012*, Action_1_t12A760F019B1942FA3868174D10CBA1CCC90A535*, const RuntimeMethod*))List_1_Add_mEBCF994CC3814631017F46A387B1A192ED6C85C7_gshared_inline)(__this, ___item0, method);
}
// System.Boolean System.Collections.Generic.Dictionary`2<System.String,System.Collections.Generic.List`1<System.Action`1<System.Object[]>>>::TryGetValue(TKey,TValue&)
inline bool Dictionary_2_TryGetValue_m7290D30EC519F6C28DAB4BAC370ADDB043B306B5 (Dictionary_2_t36E2587B3FD6C44141C9F14D532FDFAAD4E3E963* __this, String_t* ___key0, List_1_tB12CCD7FC908B47BBBD4FA3CBF0D9B1A35310012** ___value1, const RuntimeMethod* method)
{
	return ((  bool (*) (Dictionary_2_t36E2587B3FD6C44141C9F14D532FDFAAD4E3E963*, String_t*, List_1_tB12CCD7FC908B47BBBD4FA3CBF0D9B1A35310012**, const RuntimeMethod*))Dictionary_2_TryGetValue_mD15380A4ED7CDEE99EA45881577D26BA9CE1B849_gshared)(__this, ___key0, ___value1, method);
}
// System.Boolean System.Collections.Generic.List`1<System.Action`1<System.Object[]>>::Remove(T)
inline bool List_1_Remove_mE6512D4A1E979C7C76457505A4D56A017B01BA61 (List_1_tB12CCD7FC908B47BBBD4FA3CBF0D9B1A35310012* __this, Action_1_t12A760F019B1942FA3868174D10CBA1CCC90A535* ___item0, const RuntimeMethod* method)
{
	return ((  bool (*) (List_1_tB12CCD7FC908B47BBBD4FA3CBF0D9B1A35310012*, Action_1_t12A760F019B1942FA3868174D10CBA1CCC90A535*, const RuntimeMethod*))List_1_Remove_m4DFA48F4CEB9169601E75FC28517C5C06EFA5AD7_gshared)(__this, ___item0, method);
}
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<System.Action`1<System.Object[]>>::GetEnumerator()
inline Enumerator_tADE5E62B83E596FEB9A074D6C1AACC4A4E9CAB5F List_1_GetEnumerator_m2FD2347FB8BBD09FB936D767FDC21455FB46E41A (List_1_tB12CCD7FC908B47BBBD4FA3CBF0D9B1A35310012* __this, const RuntimeMethod* method)
{
	return ((  Enumerator_tADE5E62B83E596FEB9A074D6C1AACC4A4E9CAB5F (*) (List_1_tB12CCD7FC908B47BBBD4FA3CBF0D9B1A35310012*, const RuntimeMethod*))List_1_GetEnumerator_mD8294A7FA2BEB1929487127D476F8EC1CDC23BFC_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1/Enumerator<System.Action`1<System.Object[]>>::Dispose()
inline void Enumerator_Dispose_m4821ECE7ACC42349915D2A5A500554AA9D940D59 (Enumerator_tADE5E62B83E596FEB9A074D6C1AACC4A4E9CAB5F* __this, const RuntimeMethod* method)
{
	((  void (*) (Enumerator_tADE5E62B83E596FEB9A074D6C1AACC4A4E9CAB5F*, const RuntimeMethod*))Enumerator_Dispose_mD9DC3E3C3697830A4823047AB29A77DBBB5ED419_gshared)(__this, method);
}
// T System.Collections.Generic.List`1/Enumerator<System.Action`1<System.Object[]>>::get_Current()
inline Action_1_t12A760F019B1942FA3868174D10CBA1CCC90A535* Enumerator_get_Current_mFF78CE53B64DC481C6D8CD5552A53341449DA2E3_inline (Enumerator_tADE5E62B83E596FEB9A074D6C1AACC4A4E9CAB5F* __this, const RuntimeMethod* method)
{
	return ((  Action_1_t12A760F019B1942FA3868174D10CBA1CCC90A535* (*) (Enumerator_tADE5E62B83E596FEB9A074D6C1AACC4A4E9CAB5F*, const RuntimeMethod*))Enumerator_get_Current_m6330F15D18EE4F547C05DF9BF83C5EB710376027_gshared_inline)(__this, method);
}
// System.Void System.Action`1<System.Object[]>::Invoke(T)
inline void Action_1_Invoke_m05304E9227D6DDBDC60CE8468ACFECEDD786E2B5_inline (Action_1_t12A760F019B1942FA3868174D10CBA1CCC90A535* __this, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___obj0, const RuntimeMethod* method)
{
	((  void (*) (Action_1_t12A760F019B1942FA3868174D10CBA1CCC90A535*, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*, const RuntimeMethod*))Action_1_Invoke_mF2422B2DD29F74CE66F791C3F68E288EC7C3DB9E_gshared_inline)(__this, ___obj0, method);
}
// System.Boolean System.Collections.Generic.List`1/Enumerator<System.Action`1<System.Object[]>>::MoveNext()
inline bool Enumerator_MoveNext_m8908FDF150F1F4D1D4C14AB6EC4CE12C5896985C (Enumerator_tADE5E62B83E596FEB9A074D6C1AACC4A4E9CAB5F* __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Enumerator_tADE5E62B83E596FEB9A074D6C1AACC4A4E9CAB5F*, const RuntimeMethod*))Enumerator_MoveNext_mE921CC8F29FBBDE7CC3209A0ED0D921D58D00BCB_gshared)(__this, method);
}
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.Collections.Generic.List`1<System.Action`1<System.Object[]>>>::.ctor()
inline void Dictionary_2__ctor_m827C3E5AF2F5F19326C9AE3DCD2DB29622C15FD0 (Dictionary_2_t36E2587B3FD6C44141C9F14D532FDFAAD4E3E963* __this, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t36E2587B3FD6C44141C9F14D532FDFAAD4E3E963*, const RuntimeMethod*))Dictionary_2__ctor_m5B32FBC624618211EB461D59CFBB10E987FD1329_gshared)(__this, method);
}
// System.Boolean System.Collections.Generic.Dictionary`2<System.String,System.Collections.Generic.List`1<System.Action>>::ContainsKey(TKey)
inline bool Dictionary_2_ContainsKey_mE78C3713C2BA139602AB3309D6C1BE241E5EE17F (Dictionary_2_t215F4C3C2E9B1B610937281F8E80C984A643D095* __this, String_t* ___key0, const RuntimeMethod* method)
{
	return ((  bool (*) (Dictionary_2_t215F4C3C2E9B1B610937281F8E80C984A643D095*, String_t*, const RuntimeMethod*))Dictionary_2_ContainsKey_m703047C213F7AB55C9DC346596287773A1F670CD_gshared)(__this, ___key0, method);
}
// System.Void System.Collections.Generic.List`1<System.Action>::.ctor()
inline void List_1__ctor_mBFD6DF02E045EDF3C322E2112C922457016C8212 (List_1_tDB72209F35D56F62A287633F9450978E90B90987* __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_tDB72209F35D56F62A287633F9450978E90B90987*, const RuntimeMethod*))List_1__ctor_m7F078BB342729BDF11327FD89D7872265328F690_gshared)(__this, method);
}
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.Collections.Generic.List`1<System.Action>>::Add(TKey,TValue)
inline void Dictionary_2_Add_m5D58F08D53B7B3B01A339D009E2B4ACF2377EDCF (Dictionary_2_t215F4C3C2E9B1B610937281F8E80C984A643D095* __this, String_t* ___key0, List_1_tDB72209F35D56F62A287633F9450978E90B90987* ___value1, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t215F4C3C2E9B1B610937281F8E80C984A643D095*, String_t*, List_1_tDB72209F35D56F62A287633F9450978E90B90987*, const RuntimeMethod*))Dictionary_2_Add_m93FFFABE8FCE7FA9793F0915E2A8842C7CD0C0C1_gshared)(__this, ___key0, ___value1, method);
}
// TValue System.Collections.Generic.Dictionary`2<System.String,System.Collections.Generic.List`1<System.Action>>::get_Item(TKey)
inline List_1_tDB72209F35D56F62A287633F9450978E90B90987* Dictionary_2_get_Item_mB7CC23F2BCA262B527F687329A95685023C95AA7 (Dictionary_2_t215F4C3C2E9B1B610937281F8E80C984A643D095* __this, String_t* ___key0, const RuntimeMethod* method)
{
	return ((  List_1_tDB72209F35D56F62A287633F9450978E90B90987* (*) (Dictionary_2_t215F4C3C2E9B1B610937281F8E80C984A643D095*, String_t*, const RuntimeMethod*))Dictionary_2_get_Item_m4AAAECBE902A211BF2126E6AFA280AEF73A3E0D6_gshared)(__this, ___key0, method);
}
// System.Void System.Collections.Generic.List`1<System.Action>::Add(T)
inline void List_1_Add_m5B99D67CB378BFA8A1142343F9DB44D94322EAD3_inline (List_1_tDB72209F35D56F62A287633F9450978E90B90987* __this, Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ___item0, const RuntimeMethod* method)
{
	((  void (*) (List_1_tDB72209F35D56F62A287633F9450978E90B90987*, Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07*, const RuntimeMethod*))List_1_Add_mEBCF994CC3814631017F46A387B1A192ED6C85C7_gshared_inline)(__this, ___item0, method);
}
// System.Boolean System.Collections.Generic.Dictionary`2<System.String,System.Collections.Generic.List`1<System.Action>>::TryGetValue(TKey,TValue&)
inline bool Dictionary_2_TryGetValue_mA079F1B109F3A7DA0F7F4D517A3BC9C1F63C56C1 (Dictionary_2_t215F4C3C2E9B1B610937281F8E80C984A643D095* __this, String_t* ___key0, List_1_tDB72209F35D56F62A287633F9450978E90B90987** ___value1, const RuntimeMethod* method)
{
	return ((  bool (*) (Dictionary_2_t215F4C3C2E9B1B610937281F8E80C984A643D095*, String_t*, List_1_tDB72209F35D56F62A287633F9450978E90B90987**, const RuntimeMethod*))Dictionary_2_TryGetValue_mD15380A4ED7CDEE99EA45881577D26BA9CE1B849_gshared)(__this, ___key0, ___value1, method);
}
// System.Boolean System.Collections.Generic.List`1<System.Action>::Remove(T)
inline bool List_1_Remove_m2F58C9F48DA11B2DF2D297626E97A25B1050D822 (List_1_tDB72209F35D56F62A287633F9450978E90B90987* __this, Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ___item0, const RuntimeMethod* method)
{
	return ((  bool (*) (List_1_tDB72209F35D56F62A287633F9450978E90B90987*, Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07*, const RuntimeMethod*))List_1_Remove_m4DFA48F4CEB9169601E75FC28517C5C06EFA5AD7_gshared)(__this, ___item0, method);
}
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<System.Action>::GetEnumerator()
inline Enumerator_t3787AC8C42D500C005E2D239B9F7650C1E44A58D List_1_GetEnumerator_mB6C244AAEBAD19DF16131057B7A205817A226254 (List_1_tDB72209F35D56F62A287633F9450978E90B90987* __this, const RuntimeMethod* method)
{
	return ((  Enumerator_t3787AC8C42D500C005E2D239B9F7650C1E44A58D (*) (List_1_tDB72209F35D56F62A287633F9450978E90B90987*, const RuntimeMethod*))List_1_GetEnumerator_mD8294A7FA2BEB1929487127D476F8EC1CDC23BFC_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1/Enumerator<System.Action>::Dispose()
inline void Enumerator_Dispose_m7AF54658D389DA447BBE4C9F2D82278217B0972B (Enumerator_t3787AC8C42D500C005E2D239B9F7650C1E44A58D* __this, const RuntimeMethod* method)
{
	((  void (*) (Enumerator_t3787AC8C42D500C005E2D239B9F7650C1E44A58D*, const RuntimeMethod*))Enumerator_Dispose_mD9DC3E3C3697830A4823047AB29A77DBBB5ED419_gshared)(__this, method);
}
// T System.Collections.Generic.List`1/Enumerator<System.Action>::get_Current()
inline Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* Enumerator_get_Current_m5CDD305956FDEFA478FF8F1F8D44992132542261_inline (Enumerator_t3787AC8C42D500C005E2D239B9F7650C1E44A58D* __this, const RuntimeMethod* method)
{
	return ((  Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* (*) (Enumerator_t3787AC8C42D500C005E2D239B9F7650C1E44A58D*, const RuntimeMethod*))Enumerator_get_Current_m6330F15D18EE4F547C05DF9BF83C5EB710376027_gshared_inline)(__this, method);
}
// System.Void System.Action::Invoke()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Action_Invoke_m7126A54DACA72B845424072887B5F3A51FC3808E_inline (Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* __this, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.List`1/Enumerator<System.Action>::MoveNext()
inline bool Enumerator_MoveNext_m6096A4A06C95B18044A650D3E9AE2AA3D2ECA568 (Enumerator_t3787AC8C42D500C005E2D239B9F7650C1E44A58D* __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Enumerator_t3787AC8C42D500C005E2D239B9F7650C1E44A58D*, const RuntimeMethod*))Enumerator_MoveNext_mE921CC8F29FBBDE7CC3209A0ED0D921D58D00BCB_gshared)(__this, method);
}
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.Collections.Generic.List`1<System.Action>>::.ctor()
inline void Dictionary_2__ctor_m66BE736D9CF3800A91724B77F3530B0428DCEC69 (Dictionary_2_t215F4C3C2E9B1B610937281F8E80C984A643D095* __this, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t215F4C3C2E9B1B610937281F8E80C984A643D095*, const RuntimeMethod*))Dictionary_2__ctor_m5B32FBC624618211EB461D59CFBB10E987FD1329_gshared)(__this, method);
}
// System.Boolean System.Collections.Generic.Dictionary`2<System.String,System.Collections.Generic.List`1<System.Action`1<System.Object>>>::ContainsKey(TKey)
inline bool Dictionary_2_ContainsKey_mB656AC2F9B2904897A92EB57472336010451CCBE (Dictionary_2_t1B4B07393C1CA6FC57C34061B19D3C60432BD009* __this, String_t* ___key0, const RuntimeMethod* method)
{
	return ((  bool (*) (Dictionary_2_t1B4B07393C1CA6FC57C34061B19D3C60432BD009*, String_t*, const RuntimeMethod*))Dictionary_2_ContainsKey_m703047C213F7AB55C9DC346596287773A1F670CD_gshared)(__this, ___key0, method);
}
// System.Void System.Collections.Generic.List`1<System.Action`1<System.Object>>::.ctor()
inline void List_1__ctor_m0A75F746E80B7130E71A3570E155D3F6FAFDA996 (List_1_t8ED86F5A318743E9CE1F85A351EB862E45361BE0* __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_t8ED86F5A318743E9CE1F85A351EB862E45361BE0*, const RuntimeMethod*))List_1__ctor_m7F078BB342729BDF11327FD89D7872265328F690_gshared)(__this, method);
}
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.Collections.Generic.List`1<System.Action`1<System.Object>>>::Add(TKey,TValue)
inline void Dictionary_2_Add_m5430A7BDC749CA45B13E436D3198AA6E415E5600 (Dictionary_2_t1B4B07393C1CA6FC57C34061B19D3C60432BD009* __this, String_t* ___key0, List_1_t8ED86F5A318743E9CE1F85A351EB862E45361BE0* ___value1, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t1B4B07393C1CA6FC57C34061B19D3C60432BD009*, String_t*, List_1_t8ED86F5A318743E9CE1F85A351EB862E45361BE0*, const RuntimeMethod*))Dictionary_2_Add_m93FFFABE8FCE7FA9793F0915E2A8842C7CD0C0C1_gshared)(__this, ___key0, ___value1, method);
}
// TValue System.Collections.Generic.Dictionary`2<System.String,System.Collections.Generic.List`1<System.Action`1<System.Object>>>::get_Item(TKey)
inline List_1_t8ED86F5A318743E9CE1F85A351EB862E45361BE0* Dictionary_2_get_Item_mCC1E9938262CDB48DC8BBC73486007FB973EBD00 (Dictionary_2_t1B4B07393C1CA6FC57C34061B19D3C60432BD009* __this, String_t* ___key0, const RuntimeMethod* method)
{
	return ((  List_1_t8ED86F5A318743E9CE1F85A351EB862E45361BE0* (*) (Dictionary_2_t1B4B07393C1CA6FC57C34061B19D3C60432BD009*, String_t*, const RuntimeMethod*))Dictionary_2_get_Item_m4AAAECBE902A211BF2126E6AFA280AEF73A3E0D6_gshared)(__this, ___key0, method);
}
// System.Void System.Collections.Generic.List`1<System.Action`1<System.Object>>::Add(T)
inline void List_1_Add_mA7C789A830108A82F925F9EB53FFC1F288C02908_inline (List_1_t8ED86F5A318743E9CE1F85A351EB862E45361BE0* __this, Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* ___item0, const RuntimeMethod* method)
{
	((  void (*) (List_1_t8ED86F5A318743E9CE1F85A351EB862E45361BE0*, Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87*, const RuntimeMethod*))List_1_Add_mEBCF994CC3814631017F46A387B1A192ED6C85C7_gshared_inline)(__this, ___item0, method);
}
// System.Boolean System.Collections.Generic.Dictionary`2<System.String,System.Collections.Generic.List`1<System.Action`1<System.Object>>>::TryGetValue(TKey,TValue&)
inline bool Dictionary_2_TryGetValue_m20A1763DD4A8F7A495F166EA1F70F2EA6CBAC209 (Dictionary_2_t1B4B07393C1CA6FC57C34061B19D3C60432BD009* __this, String_t* ___key0, List_1_t8ED86F5A318743E9CE1F85A351EB862E45361BE0** ___value1, const RuntimeMethod* method)
{
	return ((  bool (*) (Dictionary_2_t1B4B07393C1CA6FC57C34061B19D3C60432BD009*, String_t*, List_1_t8ED86F5A318743E9CE1F85A351EB862E45361BE0**, const RuntimeMethod*))Dictionary_2_TryGetValue_mD15380A4ED7CDEE99EA45881577D26BA9CE1B849_gshared)(__this, ___key0, ___value1, method);
}
// System.Boolean System.Collections.Generic.List`1<System.Action`1<System.Object>>::Remove(T)
inline bool List_1_Remove_m2B2B28A78C773EFB5B780A7C6C71928E6F3BFA82 (List_1_t8ED86F5A318743E9CE1F85A351EB862E45361BE0* __this, Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* ___item0, const RuntimeMethod* method)
{
	return ((  bool (*) (List_1_t8ED86F5A318743E9CE1F85A351EB862E45361BE0*, Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87*, const RuntimeMethod*))List_1_Remove_m4DFA48F4CEB9169601E75FC28517C5C06EFA5AD7_gshared)(__this, ___item0, method);
}
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<System.Action`1<System.Object>>::GetEnumerator()
inline Enumerator_t5D47FF3EEF2C14FA66538784050E787CA7943C2E List_1_GetEnumerator_mE37F4750417904F3A77CF6F6F4FB663327363DE7 (List_1_t8ED86F5A318743E9CE1F85A351EB862E45361BE0* __this, const RuntimeMethod* method)
{
	return ((  Enumerator_t5D47FF3EEF2C14FA66538784050E787CA7943C2E (*) (List_1_t8ED86F5A318743E9CE1F85A351EB862E45361BE0*, const RuntimeMethod*))List_1_GetEnumerator_mD8294A7FA2BEB1929487127D476F8EC1CDC23BFC_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1/Enumerator<System.Action`1<System.Object>>::Dispose()
inline void Enumerator_Dispose_mAAA02395BBE0001C0717A334CA907BEF7368074C (Enumerator_t5D47FF3EEF2C14FA66538784050E787CA7943C2E* __this, const RuntimeMethod* method)
{
	((  void (*) (Enumerator_t5D47FF3EEF2C14FA66538784050E787CA7943C2E*, const RuntimeMethod*))Enumerator_Dispose_mD9DC3E3C3697830A4823047AB29A77DBBB5ED419_gshared)(__this, method);
}
// T System.Collections.Generic.List`1/Enumerator<System.Action`1<System.Object>>::get_Current()
inline Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* Enumerator_get_Current_m348B0AB5C479F2DDBA33D8840965F9EAEC4D3B9F_inline (Enumerator_t5D47FF3EEF2C14FA66538784050E787CA7943C2E* __this, const RuntimeMethod* method)
{
	return ((  Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* (*) (Enumerator_t5D47FF3EEF2C14FA66538784050E787CA7943C2E*, const RuntimeMethod*))Enumerator_get_Current_m6330F15D18EE4F547C05DF9BF83C5EB710376027_gshared_inline)(__this, method);
}
// System.Runtime.CompilerServices.CallSite`1<T> System.Runtime.CompilerServices.CallSite`1<System.Action`3<System.Runtime.CompilerServices.CallSite,System.Action`1<System.Object>,System.Object>>::Create(System.Runtime.CompilerServices.CallSiteBinder)
inline CallSite_1_tB0F9C96400730A68BE3C595626330079F1217D3A* CallSite_1_Create_m95E290AF16A6307077D5DB3F3CCFFA7CD362977C (CallSiteBinder_tAFC922BA1DD2D1AEF6BC2742E0E375F936D5059F* ___binder0, const RuntimeMethod* method)
{
	return ((  CallSite_1_tB0F9C96400730A68BE3C595626330079F1217D3A* (*) (CallSiteBinder_tAFC922BA1DD2D1AEF6BC2742E0E375F936D5059F*, const RuntimeMethod*))CallSite_1_Create_m96936720C342472E6485A9CE9F8112C93F765C7C_gshared)(___binder0, method);
}
// System.Void System.Action`3<System.Runtime.CompilerServices.CallSite,System.Action`1<System.Object>,System.Object>::Invoke(T1,T2,T3)
inline void Action_3_Invoke_mC63F199B0C680A8216FB1F39A660E3F58CCE37A0_inline (Action_3_t2B71C88FAB139B334F875C524BBFA20969B9CA61* __this, CallSite_t7E03097DD9D28AA5BB84A32493F38B8AF731B5AF* ___arg10, Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* ___arg21, RuntimeObject* ___arg32, const RuntimeMethod* method)
{
	((  void (*) (Action_3_t2B71C88FAB139B334F875C524BBFA20969B9CA61*, CallSite_t7E03097DD9D28AA5BB84A32493F38B8AF731B5AF*, Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87*, RuntimeObject*, const RuntimeMethod*))Action_3_Invoke_m399A0EB5E51EFD9B7D25DFE0EB7BF5EC0BE98346_gshared_inline)(__this, ___arg10, ___arg21, ___arg32, method);
}
// System.Boolean System.Collections.Generic.List`1/Enumerator<System.Action`1<System.Object>>::MoveNext()
inline bool Enumerator_MoveNext_mFCFC05B06F0795F57A483B2E0353DDE0CA99BBF4 (Enumerator_t5D47FF3EEF2C14FA66538784050E787CA7943C2E* __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Enumerator_t5D47FF3EEF2C14FA66538784050E787CA7943C2E*, const RuntimeMethod*))Enumerator_MoveNext_mE921CC8F29FBBDE7CC3209A0ED0D921D58D00BCB_gshared)(__this, method);
}
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.Collections.Generic.List`1<System.Action`1<System.Object>>>::.ctor()
inline void Dictionary_2__ctor_m3F022BDCBB85004A669A5F7D106781D0CCBA9ADA (Dictionary_2_t1B4B07393C1CA6FC57C34061B19D3C60432BD009* __this, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t1B4B07393C1CA6FC57C34061B19D3C60432BD009*, const RuntimeMethod*))Dictionary_2__ctor_m5B32FBC624618211EB461D59CFBB10E987FD1329_gshared)(__this, method);
}
// System.Void EventSystem.Runtime.Core.Events.Base.CancelableEventBase::set_Canceled(System.Boolean)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void CancelableEventBase_set_Canceled_m2E87281F0CF6E101399B465ACB6EC770507C4CC9_inline (CancelableEventBase_t3E558D21980C25374A6F9C35C7A43815110A935A* __this, bool ___value0, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<EventSystem.Runtime.Core.Dispose.DisposeContainer>::Add(T)
inline void List_1_Add_m7C0B3C8A41DCC24FBC819063AC78366909036E8F_inline (List_1_tC388E105FE5D097387E8CE94B853FBD4EB87B6E0* __this, DisposeContainer_t1201D3858AAFCED17DD46A94CF7B1B4059A964F6* ___item0, const RuntimeMethod* method)
{
	((  void (*) (List_1_tC388E105FE5D097387E8CE94B853FBD4EB87B6E0*, DisposeContainer_t1201D3858AAFCED17DD46A94CF7B1B4059A964F6*, const RuntimeMethod*))List_1_Add_mEBCF994CC3814631017F46A387B1A192ED6C85C7_gshared_inline)(__this, ___item0, method);
}
// T System.Collections.Generic.List`1<EventSystem.Runtime.Core.Dispose.DisposeContainer>::get_Item(System.Int32)
inline DisposeContainer_t1201D3858AAFCED17DD46A94CF7B1B4059A964F6* List_1_get_Item_m2E3722FDF333A2F6E2E62AF5694332D459A891B9 (List_1_tC388E105FE5D097387E8CE94B853FBD4EB87B6E0* __this, int32_t ___index0, const RuntimeMethod* method)
{
	return ((  DisposeContainer_t1201D3858AAFCED17DD46A94CF7B1B4059A964F6* (*) (List_1_tC388E105FE5D097387E8CE94B853FBD4EB87B6E0*, int32_t, const RuntimeMethod*))List_1_get_Item_m33561245D64798C2AB07584C0EC4F240E4839A38_gshared)(__this, ___index0, method);
}
// System.Boolean System.Collections.Generic.List`1<EventSystem.Runtime.Core.Dispose.DisposeContainer>::Remove(T)
inline bool List_1_Remove_m738498D00E6764A0840AAD35CEFBF7942DE3ADD8 (List_1_tC388E105FE5D097387E8CE94B853FBD4EB87B6E0* __this, DisposeContainer_t1201D3858AAFCED17DD46A94CF7B1B4059A964F6* ___item0, const RuntimeMethod* method)
{
	return ((  bool (*) (List_1_tC388E105FE5D097387E8CE94B853FBD4EB87B6E0*, DisposeContainer_t1201D3858AAFCED17DD46A94CF7B1B4059A964F6*, const RuntimeMethod*))List_1_Remove_m4DFA48F4CEB9169601E75FC28517C5C06EFA5AD7_gshared)(__this, ___item0, method);
}
// System.Void EventSystem.Runtime.Core.Dispose.DisposeContainer::Invoke()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DisposeContainer_Invoke_m75D0B9981A8454DE7F0CFC494D3CD3A5C93FAABA (DisposeContainer_t1201D3858AAFCED17DD46A94CF7B1B4059A964F6* __this, const RuntimeMethod* method) ;
// System.Int32 System.Collections.Generic.List`1<EventSystem.Runtime.Core.Dispose.DisposeContainer>::get_Count()
inline int32_t List_1_get_Count_m4BA9AE4A25328A2A8056D7BBFA95C9060EB5A2AD_inline (List_1_tC388E105FE5D097387E8CE94B853FBD4EB87B6E0* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (List_1_tC388E105FE5D097387E8CE94B853FBD4EB87B6E0*, const RuntimeMethod*))List_1_get_Count_m4407E4C389F22B8CEC282C15D56516658746C383_gshared_inline)(__this, method);
}
// System.Void System.Collections.Generic.List`1<EventSystem.Runtime.Core.Dispose.DisposeContainer>::.ctor()
inline void List_1__ctor_mB7DADBE282893C53D8CA68E1BCBD48787184E2AA (List_1_tC388E105FE5D097387E8CE94B853FBD4EB87B6E0* __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_tC388E105FE5D097387E8CE94B853FBD4EB87B6E0*, const RuntimeMethod*))List_1__ctor_m7F078BB342729BDF11327FD89D7872265328F690_gshared)(__this, method);
}
// System.Void EventSystem.Runtime.Core.Dispose.EventDisposal::Add(EventSystem.Runtime.Core.Dispose.DisposeContainer)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EventDisposal_Add_mA3DCB50140332D5887CDD12D4A9126F883F70141 (EventDisposal_tA44FC96FC224E6398FC2E7AB40B8A11D6E617A41* __this, DisposeContainer_t1201D3858AAFCED17DD46A94CF7B1B4059A964F6* ___container0, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Dictionary`2<System.Type,System.Collections.Generic.List`1<EventSystem.Runtime.Bus.Interfaces.ISubscription>>::.ctor()
inline void Dictionary_2__ctor_mA2F1CEA75ACE9B1D80BA8AACC8D0CDADD0C42953 (Dictionary_2_t63D9CDC65755610F2ECF2FF21363753AAD3C1BB7* __this, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t63D9CDC65755610F2ECF2FF21363753AAD3C1BB7*, const RuntimeMethod*))Dictionary_2__ctor_m5B32FBC624618211EB461D59CFBB10E987FD1329_gshared)(__this, method);
}
// System.Void EventSystem.Runtime.Bus.EventBus/<>c__DisplayClass5_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass5_0__ctor_m96B989506D76F097DCE4B42A35F7B93C09375E3F (U3CU3Ec__DisplayClass5_0_t6D3925E50D36CC480F0E06364C38D5A624A5F8B0* __this, const RuntimeMethod* method) ;
// System.Void System.ArgumentNullException::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* __this, String_t* ___paramName0, const RuntimeMethod* method) ;
// System.Void System.Threading.Monitor::Exit(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Monitor_Exit_m05B2CF037E2214B3208198C282490A2A475653FA (RuntimeObject* ___obj0, const RuntimeMethod* method) ;
// System.Void System.Threading.Monitor::Enter(System.Object,System.Boolean&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Monitor_Enter_m3CDB589DA1300B513D55FDCFB52B63E879794149 (RuntimeObject* ___obj0, bool* ___lockTaken1, const RuntimeMethod* method) ;
// System.Type EventSystem.Runtime.Bus.SubscriptionToken::get_EventItemType()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Type_t* SubscriptionToken_get_EventItemType_mE7AEBC74D88E9B5A8A157482FD96EE91263BDF84_inline (SubscriptionToken_tD978A093982292F2797A7B52299C4178FDD69760* __this, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.Dictionary`2<System.Type,System.Collections.Generic.List`1<EventSystem.Runtime.Bus.Interfaces.ISubscription>>::ContainsKey(TKey)
inline bool Dictionary_2_ContainsKey_m69C0A3B198028058CAAEE9E38AA444246A61EB24 (Dictionary_2_t63D9CDC65755610F2ECF2FF21363753AAD3C1BB7* __this, Type_t* ___key0, const RuntimeMethod* method)
{
	return ((  bool (*) (Dictionary_2_t63D9CDC65755610F2ECF2FF21363753AAD3C1BB7*, Type_t*, const RuntimeMethod*))Dictionary_2_ContainsKey_m703047C213F7AB55C9DC346596287773A1F670CD_gshared)(__this, ___key0, method);
}
// TValue System.Collections.Generic.Dictionary`2<System.Type,System.Collections.Generic.List`1<EventSystem.Runtime.Bus.Interfaces.ISubscription>>::get_Item(TKey)
inline List_1_tC2324A4441524F04698D5BC263697C1B8B51CDC4* Dictionary_2_get_Item_mB4270CC4458D07C58A69BC63B8A471E347565A2E (Dictionary_2_t63D9CDC65755610F2ECF2FF21363753AAD3C1BB7* __this, Type_t* ___key0, const RuntimeMethod* method)
{
	return ((  List_1_tC2324A4441524F04698D5BC263697C1B8B51CDC4* (*) (Dictionary_2_t63D9CDC65755610F2ECF2FF21363753AAD3C1BB7*, Type_t*, const RuntimeMethod*))Dictionary_2_get_Item_m4AAAECBE902A211BF2126E6AFA280AEF73A3E0D6_gshared)(__this, ___key0, method);
}
// System.Void System.Func`2<EventSystem.Runtime.Bus.Interfaces.ISubscription,System.Boolean>::.ctor(System.Object,System.IntPtr)
inline void Func_2__ctor_m5999860582EACFE007E9C1A4A1877CB6A7732D00 (Func_2_t74A96543A4E6C66ED10B61FFB551D80AA076E046* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (Func_2_t74A96543A4E6C66ED10B61FFB551D80AA076E046*, RuntimeObject*, intptr_t, const RuntimeMethod*))Func_2__ctor_m13C0A7F33154D861E2A041B52E88461832DA1697_gshared)(__this, ___object0, ___method1, method);
}
// TSource System.Linq.Enumerable::FirstOrDefault<EventSystem.Runtime.Bus.Interfaces.ISubscription>(System.Collections.Generic.IEnumerable`1<TSource>,System.Func`2<TSource,System.Boolean>)
inline RuntimeObject* Enumerable_FirstOrDefault_TisISubscription_tB9F6107F91F37F9840190342A8860A8BB7BD9997_m3C84B2ED2DDAC39665DA1884B4048C2DE55FCEBA (RuntimeObject* ___source0, Func_2_t74A96543A4E6C66ED10B61FFB551D80AA076E046* ___predicate1, const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (RuntimeObject*, Func_2_t74A96543A4E6C66ED10B61FFB551D80AA076E046*, const RuntimeMethod*))Enumerable_FirstOrDefault_TisRuntimeObject_mFACC750E4D7AF7B43F5B866C84F613B3ECC41994_gshared)(___source0, ___predicate1, method);
}
// System.Boolean System.Collections.Generic.List`1<EventSystem.Runtime.Bus.Interfaces.ISubscription>::Remove(T)
inline bool List_1_Remove_m28CB4A6AD8E8981E1CCB90CDD68A78DFC526844C (List_1_tC2324A4441524F04698D5BC263697C1B8B51CDC4* __this, RuntimeObject* ___item0, const RuntimeMethod* method)
{
	return ((  bool (*) (List_1_tC2324A4441524F04698D5BC263697C1B8B51CDC4*, RuntimeObject*, const RuntimeMethod*))List_1_Remove_m4DFA48F4CEB9169601E75FC28517C5C06EFA5AD7_gshared)(__this, ___item0, method);
}
// System.Guid EventSystem.Runtime.Bus.SubscriptionToken::get_Token()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Guid_t SubscriptionToken_get_Token_mB6D67FC5FF9E31F0E5BD1B51289729D8FBD790B7_inline (SubscriptionToken_tD978A093982292F2797A7B52299C4178FDD69760* __this, const RuntimeMethod* method) ;
// System.Boolean System.Guid::op_Equality(System.Guid,System.Guid)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Guid_op_Equality_mAD728A1A4FB970715E84B7D346E094FE5EF2A240 (Guid_t ___a0, Guid_t ___b1, const RuntimeMethod* method) ;
// System.Void EventSystem.Runtime.Bus.EventBusExtensions/<>c__DisplayClass0_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass0_0__ctor_mD1B7B80A7AB785172DCB56E343372288CA2181D1 (U3CU3Ec__DisplayClass0_0_t6BB545FCC9F8924FD745AA27E5AD9702FBDFDAFD* __this, const RuntimeMethod* method) ;
// System.Void System.Action`1<EventSystem.Runtime.Bus.CustomEvent>::.ctor(System.Object,System.IntPtr)
inline void Action_1__ctor_mC83FD2F7902EE001C5690B66D24E3A7E884D3D6B (Action_1_tF305089B51289C676688BE915607D76DCAD5528B* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (Action_1_tF305089B51289C676688BE915607D76DCAD5528B*, RuntimeObject*, intptr_t, const RuntimeMethod*))Action_1__ctor_m2E1DFA67718FC1A0B6E5DFEB78831FFE9C059EB4_gshared)(__this, ___object0, ___method1, method);
}
// EventSystem.Runtime.Bus.SubscriptionResult EventSystem.Runtime.Bus.EventBus::Subscribe<EventSystem.Runtime.Bus.CustomEvent>(System.Action`1<TEvent>)
inline SubscriptionResult_t6AF632194890A72CCD10EC3528AD6559D825B3A4* EventBus_Subscribe_TisCustomEvent_tBEDC67626FF1C53DC5C0C06B9F6A6BEC954EC7B5_m4A14BCD42BA8006D9438DB492961755E0ABFDF5B (EventBus_t38EEAA31225B2E5DA42372B418AF82481D6929D3* __this, Action_1_tF305089B51289C676688BE915607D76DCAD5528B* ___action0, const RuntimeMethod* method)
{
	return ((  SubscriptionResult_t6AF632194890A72CCD10EC3528AD6559D825B3A4* (*) (EventBus_t38EEAA31225B2E5DA42372B418AF82481D6929D3*, Action_1_tF305089B51289C676688BE915607D76DCAD5528B*, const RuntimeMethod*))EventBus_Subscribe_TisRuntimeObject_mE4C23843CBD954B5B434115C602D29FF1F3A7D94_gshared)(__this, ___action0, method);
}
// EventSystem.Runtime.Bus.SubscriptionResult EventSystem.Runtime.Bus.EventBus::Subscribe<EventSystem.Runtime.Core.Events.Static.ObjectEvent>(System.Action`1<TEvent>)
inline SubscriptionResult_t6AF632194890A72CCD10EC3528AD6559D825B3A4* EventBus_Subscribe_TisObjectEvent_t0DC53C5597C4D5A069A4DC526396F5501BA22E9A_mB86CD9ACD395F2CBA268DBCDC9AA69D19A218180 (EventBus_t38EEAA31225B2E5DA42372B418AF82481D6929D3* __this, Action_1_t0BC6F6703C2891500454846778FB9FAF4895D38D* ___action0, const RuntimeMethod* method)
{
	return ((  SubscriptionResult_t6AF632194890A72CCD10EC3528AD6559D825B3A4* (*) (EventBus_t38EEAA31225B2E5DA42372B418AF82481D6929D3*, Action_1_t0BC6F6703C2891500454846778FB9FAF4895D38D*, const RuntimeMethod*))EventBus_Subscribe_TisRuntimeObject_mE4C23843CBD954B5B434115C602D29FF1F3A7D94_gshared)(__this, ___action0, method);
}
// System.Guid System.Guid::NewGuid()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Guid_t Guid_NewGuid_m1F4894E8DC089811D6252148AD5858E58D43A7BD (const RuntimeMethod* method) ;
// System.Void System.Exception::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Exception__ctor_m203319D1EA1274689B380A947B4ADC8445662B8F (Exception_t* __this, const RuntimeMethod* method) ;
// System.String EventSystem.Runtime.Bus.Exceptions.AlreadyRegisteredException::GetDefaultMessage(System.Object,EventSystem.Runtime.Bus.Interfaces.IEventBus)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* AlreadyRegisteredException_GetDefaultMessage_mCE2CD8969909A21867F36A9D44EDE1C0FAC8D595 (RuntimeObject* ___eventProxy0, RuntimeObject* ___eventBus1, const RuntimeMethod* method) ;
// System.Void System.Exception::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Exception__ctor_m9B2BD92CD68916245A75109105D9071C9D430E7F (Exception_t* __this, String_t* ___message0, const RuntimeMethod* method) ;
// System.Void System.Exception::.ctor(System.String,System.Exception)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Exception__ctor_m9BC141AAB08F47C34B7ED40C1A6C0C1ADDEC5CB3 (Exception_t* __this, String_t* ___message0, Exception_t* ___innerException1, const RuntimeMethod* method) ;
// System.String System.String::Format(System.String,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Format_mA8DBB4C2516B9723C5A41E6CB1E2FAF4BBE96DD8 (String_t* ___format0, RuntimeObject* ___arg01, const RuntimeMethod* method) ;
// System.Void System.Exception::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Exception__ctor_m412D5FC4D69035738F1DB88FD771ABD6B0E9E120 (Exception_t* __this, SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* ___info0, StreamingContext_t56760522A751890146EE45F82F866B55B7E33677 ___context1, const RuntimeMethod* method) ;
// System.Void EventSystem.Runtime.Bus.Configuration.EventBusConfiguration::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EventBusConfiguration__ctor_m6CF1EE7D05E68C66877CF5B7094715C1158396B7 (EventBusConfiguration_tF8A2907FC2B49AEF9A4B90732802DE0924AF223D* __this, const RuntimeMethod* method) ;
// System.Void EventSystem.Runtime.Bus.Configuration.EventBusConfiguration::set_ThrowSubscriberException(System.Boolean)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void EventBusConfiguration_set_ThrowSubscriberException_m9E84A586EE9069DB07903B1385CD00134B66EC8A_inline (EventBusConfiguration_tF8A2907FC2B49AEF9A4B90732802DE0924AF223D* __this, bool ___value0, const RuntimeMethod* method) ;
// System.Void System.NotImplementedException::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NotImplementedException__ctor_mDAB47BC6BD0E342E8F2171E5CABE3E67EA049F1C (NotImplementedException_t6366FE4DCF15094C51F4833B91A2AE68D4DA90E8* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.MonoBehaviour::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E (MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71* __this, const RuntimeMethod* method) ;
// System.Void EventSystem.Runtime.Bus.Unity.GlobalEventBus::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GlobalEventBus__ctor_mE7EA7196640D4EC8567EBF2DBF4E202AFAD01BEF (GlobalEventBus_t1A9E0D0263A42224275D763EDF55D5C639E7B8D3* __this, const RuntimeMethod* method) ;
// System.Void EventSystem.Runtime.Bus.EventBus::.ctor(EventSystem.Runtime.Bus.Configuration.IEventBusConfiguration)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EventBus__ctor_mDC912761AD18CACE59DE24C175BEA593F1341740 (EventBus_t38EEAA31225B2E5DA42372B418AF82481D6929D3* __this, RuntimeObject* ___configuration0, const RuntimeMethod* method) ;
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
// EventSystem.Runtime.Core.Dispose.DisposeContainer EventSystem.Runtime.Core.Managers.DynamicEventManager::Add(System.String,System.Action`1<System.Object>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR DisposeContainer_t1201D3858AAFCED17DD46A94CF7B1B4059A964F6* DynamicEventManager_Add_m9AEA6679709C5D814F0F5448BDDFFAC24C5358E8 (String_t* ___key0, Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* ___action1, const RuntimeMethod* method) 
{
	{
		// public static DisposeContainer Add(string key, Action<dynamic> action) => DynamicArgHandler.Add(key, action);
		String_t* L_0 = ___key0;
		Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* L_1 = ___action1;
		DisposeContainer_t1201D3858AAFCED17DD46A94CF7B1B4059A964F6* L_2;
		L_2 = DynamicArgHandler_Add_m5D7E6C0E8556ABA5A73391294E0223B2F9C912AD(L_0, L_1, NULL);
		return L_2;
	}
}
// EventSystem.Runtime.Core.Dispose.DisposeContainer EventSystem.Runtime.Core.Managers.DynamicEventManager::Add(System.String,System.Action`1<System.Object[]>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR DisposeContainer_t1201D3858AAFCED17DD46A94CF7B1B4059A964F6* DynamicEventManager_Add_mF73BE24DADFF2BC0159D039AAA1BA24132884A9D (String_t* ___key0, Action_1_t12A760F019B1942FA3868174D10CBA1CCC90A535* ___action1, const RuntimeMethod* method) 
{
	{
		// public static DisposeContainer Add(string key, Action<dynamic[]> action) => DynamicArgsHandler.Add(key, action);
		String_t* L_0 = ___key0;
		Action_1_t12A760F019B1942FA3868174D10CBA1CCC90A535* L_1 = ___action1;
		DisposeContainer_t1201D3858AAFCED17DD46A94CF7B1B4059A964F6* L_2;
		L_2 = DynamicArgsHandler_Add_mE1DF7F12D2C6E4208BC74B98875B9AB6916011EE(L_0, L_1, NULL);
		return L_2;
	}
}
// System.Void EventSystem.Runtime.Core.Managers.DynamicEventManager::Remove(System.String,System.Action`1<System.Object>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DynamicEventManager_Remove_mBF4B8F35FCAC214BBE58DA3010C7E53CA0454EEB (String_t* ___key0, Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* ___action1, const RuntimeMethod* method) 
{
	{
		// public static void Remove(string key, Action<dynamic> action) => DynamicArgHandler.Remove(key, action);
		String_t* L_0 = ___key0;
		Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* L_1 = ___action1;
		DynamicArgHandler_Remove_m41505BB233B2523C6FB6060D248E600561E053C4(L_0, L_1, NULL);
		return;
	}
}
// System.Void EventSystem.Runtime.Core.Managers.DynamicEventManager::Remove(System.String,System.Action`1<System.Object[]>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DynamicEventManager_Remove_m4DD8E811D49E69F8BA2048CE3B20B7AA36B1661B (String_t* ___key0, Action_1_t12A760F019B1942FA3868174D10CBA1CCC90A535* ___action1, const RuntimeMethod* method) 
{
	{
		// public static void Remove(string key, Action<dynamic[]> action) => DynamicArgsHandler.Remove(key, action);
		String_t* L_0 = ___key0;
		Action_1_t12A760F019B1942FA3868174D10CBA1CCC90A535* L_1 = ___action1;
		DynamicArgsHandler_Remove_m675136873EAB4794943A8F4AE73D0D65D7DAD877(L_0, L_1, NULL);
		return;
	}
}
// System.Void EventSystem.Runtime.Core.Managers.DynamicEventManager::Invoke(System.String,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DynamicEventManager_Invoke_m62185DE8FA248E533503DFA7E539133192D7EFD7 (String_t* ___key0, RuntimeObject* ___value1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CSharpArgumentInfoU5BU5D_t5070B0B1D45658E97396A584A619F5289E69A5D5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CSharpArgumentInfo_tC298899BB33AB3FF7B82A90878CD3EDB3DBAD43A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CallSite_1_Create_mD991B036FFE6C23DCFD0A5463E79851B70D34F74_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DynamicArgHandler_t409726FCDE13E0898C72A24C4FBEF235D4C67C06_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DynamicEventManager_tBA8B5285D8DDBF1D544B82115081E2A0ECBB95C5_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Eo__4_tB8894DA93786D6B229FC0B813A11E319AEC7D3B0_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD7A66F857F6E3FCCC482964755DB79017BF35DD2);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public static void Invoke(string key, dynamic value) => DynamicArgHandler.Invoke(key, value);
		CallSite_1_t8262E1A720D6042B566DF07A65A318A509025451* L_0 = ((U3CU3Eo__4_tB8894DA93786D6B229FC0B813A11E319AEC7D3B0_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Eo__4_tB8894DA93786D6B229FC0B813A11E319AEC7D3B0_il2cpp_TypeInfo_var))->___U3CU3Ep__0_0;
		if (L_0)
		{
			goto IL_0050;
		}
	}
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_1 = { reinterpret_cast<intptr_t> (DynamicEventManager_tBA8B5285D8DDBF1D544B82115081E2A0ECBB95C5_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_2;
		L_2 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_1, NULL);
		CSharpArgumentInfoU5BU5D_t5070B0B1D45658E97396A584A619F5289E69A5D5* L_3 = (CSharpArgumentInfoU5BU5D_t5070B0B1D45658E97396A584A619F5289E69A5D5*)(CSharpArgumentInfoU5BU5D_t5070B0B1D45658E97396A584A619F5289E69A5D5*)SZArrayNew(CSharpArgumentInfoU5BU5D_t5070B0B1D45658E97396A584A619F5289E69A5D5_il2cpp_TypeInfo_var, (uint32_t)3);
		CSharpArgumentInfoU5BU5D_t5070B0B1D45658E97396A584A619F5289E69A5D5* L_4 = L_3;
		il2cpp_codegen_runtime_class_init_inline(CSharpArgumentInfo_tC298899BB33AB3FF7B82A90878CD3EDB3DBAD43A_il2cpp_TypeInfo_var);
		CSharpArgumentInfo_tC298899BB33AB3FF7B82A90878CD3EDB3DBAD43A* L_5;
		L_5 = CSharpArgumentInfo_Create_m4427E46681802570E3D2E20BCD164A8A6A9CCA5E(((int32_t)33), (String_t*)NULL, NULL);
		NullCheck(L_4);
		ArrayElementTypeCheck (L_4, L_5);
		(L_4)->SetAt(static_cast<il2cpp_array_size_t>(0), (CSharpArgumentInfo_tC298899BB33AB3FF7B82A90878CD3EDB3DBAD43A*)L_5);
		CSharpArgumentInfoU5BU5D_t5070B0B1D45658E97396A584A619F5289E69A5D5* L_6 = L_4;
		CSharpArgumentInfo_tC298899BB33AB3FF7B82A90878CD3EDB3DBAD43A* L_7;
		L_7 = CSharpArgumentInfo_Create_m4427E46681802570E3D2E20BCD164A8A6A9CCA5E(1, (String_t*)NULL, NULL);
		NullCheck(L_6);
		ArrayElementTypeCheck (L_6, L_7);
		(L_6)->SetAt(static_cast<il2cpp_array_size_t>(1), (CSharpArgumentInfo_tC298899BB33AB3FF7B82A90878CD3EDB3DBAD43A*)L_7);
		CSharpArgumentInfoU5BU5D_t5070B0B1D45658E97396A584A619F5289E69A5D5* L_8 = L_6;
		CSharpArgumentInfo_tC298899BB33AB3FF7B82A90878CD3EDB3DBAD43A* L_9;
		L_9 = CSharpArgumentInfo_Create_m4427E46681802570E3D2E20BCD164A8A6A9CCA5E(0, (String_t*)NULL, NULL);
		NullCheck(L_8);
		ArrayElementTypeCheck (L_8, L_9);
		(L_8)->SetAt(static_cast<il2cpp_array_size_t>(2), (CSharpArgumentInfo_tC298899BB33AB3FF7B82A90878CD3EDB3DBAD43A*)L_9);
		CallSiteBinder_tAFC922BA1DD2D1AEF6BC2742E0E375F936D5059F* L_10;
		L_10 = Binder_InvokeMember_m9AC152D3F20F5502C4408288B8F253114C23B85E(((int32_t)256), _stringLiteralD7A66F857F6E3FCCC482964755DB79017BF35DD2, (RuntimeObject*)NULL, L_2, (RuntimeObject*)L_8, NULL);
		CallSite_1_t8262E1A720D6042B566DF07A65A318A509025451* L_11;
		L_11 = CallSite_1_Create_mD991B036FFE6C23DCFD0A5463E79851B70D34F74(L_10, CallSite_1_Create_mD991B036FFE6C23DCFD0A5463E79851B70D34F74_RuntimeMethod_var);
		((U3CU3Eo__4_tB8894DA93786D6B229FC0B813A11E319AEC7D3B0_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Eo__4_tB8894DA93786D6B229FC0B813A11E319AEC7D3B0_il2cpp_TypeInfo_var))->___U3CU3Ep__0_0 = L_11;
		Il2CppCodeGenWriteBarrier((void**)(&((U3CU3Eo__4_tB8894DA93786D6B229FC0B813A11E319AEC7D3B0_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Eo__4_tB8894DA93786D6B229FC0B813A11E319AEC7D3B0_il2cpp_TypeInfo_var))->___U3CU3Ep__0_0), (void*)L_11);
	}

IL_0050:
	{
		CallSite_1_t8262E1A720D6042B566DF07A65A318A509025451* L_12 = ((U3CU3Eo__4_tB8894DA93786D6B229FC0B813A11E319AEC7D3B0_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Eo__4_tB8894DA93786D6B229FC0B813A11E319AEC7D3B0_il2cpp_TypeInfo_var))->___U3CU3Ep__0_0;
		NullCheck(L_12);
		Action_4_t81AD7F810D67CA5D307DC607DFE02F6E50B943E4* L_13 = L_12->___Target_3;
		CallSite_1_t8262E1A720D6042B566DF07A65A318A509025451* L_14 = ((U3CU3Eo__4_tB8894DA93786D6B229FC0B813A11E319AEC7D3B0_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Eo__4_tB8894DA93786D6B229FC0B813A11E319AEC7D3B0_il2cpp_TypeInfo_var))->___U3CU3Ep__0_0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_15 = { reinterpret_cast<intptr_t> (DynamicArgHandler_t409726FCDE13E0898C72A24C4FBEF235D4C67C06_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_16;
		L_16 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_15, NULL);
		String_t* L_17 = ___key0;
		RuntimeObject* L_18 = ___value1;
		NullCheck(L_13);
		Action_4_Invoke_m262F84B42D2446D41F7751B0B28CC3B85DCF1E0B_inline(L_13, L_14, L_16, L_17, L_18, NULL);
		return;
	}
}
// System.Void EventSystem.Runtime.Core.Managers.DynamicEventManager::InvokeArray(System.String,System.Object[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DynamicEventManager_InvokeArray_m05962DEF43C8740603129419AC31656D8B93C582 (String_t* ___key0, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___value1, const RuntimeMethod* method) 
{
	{
		// public static void InvokeArray(string key, params dynamic[] value) => DynamicArgsHandler.Invoke(key, value);
		String_t* L_0 = ___key0;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_1 = ___value1;
		DynamicArgsHandler_Invoke_mD74C674187FE81DE7B9C4CC81516C95F81FE428E(L_0, L_1, NULL);
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
// EventSystem.Runtime.Core.Dispose.DisposeContainer EventSystem.Runtime.Core.Managers.EventManager::Add(System.String,System.Action)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR DisposeContainer_t1201D3858AAFCED17DD46A94CF7B1B4059A964F6* EventManager_Add_m5236689A72C480A641D6BF047CDBBEDB7B902B6A (String_t* ___key0, Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ___action1, const RuntimeMethod* method) 
{
	{
		// public static DisposeContainer Add(string key, Action action) => SingleEventHandler.Add(key, action);
		String_t* L_0 = ___key0;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_1 = ___action1;
		DisposeContainer_t1201D3858AAFCED17DD46A94CF7B1B4059A964F6* L_2;
		L_2 = SingleEventHandler_Add_mF176A21786526AB3466A9BFA9DFAC2119B1447B0(L_0, L_1, NULL);
		return L_2;
	}
}
// EventSystem.Runtime.Core.Dispose.DisposeContainer EventSystem.Runtime.Core.Managers.EventManager::Add(System.Enum,System.Action)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR DisposeContainer_t1201D3858AAFCED17DD46A94CF7B1B4059A964F6* EventManager_Add_m2F006D70C945E265DCC81C31893E007EC833DAFC (Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2* ___key0, Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ___action1, const RuntimeMethod* method) 
{
	{
		// public static DisposeContainer Add(Enum key, Action action) => SingleEventHandler.Add(key.ToString(), action);
		Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2* L_0 = ___key0;
		NullCheck(L_0);
		String_t* L_1;
		L_1 = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_0);
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_2 = ___action1;
		DisposeContainer_t1201D3858AAFCED17DD46A94CF7B1B4059A964F6* L_3;
		L_3 = SingleEventHandler_Add_mF176A21786526AB3466A9BFA9DFAC2119B1447B0(L_1, L_2, NULL);
		return L_3;
	}
}
// EventSystem.Runtime.Core.Dispose.DisposeContainer EventSystem.Runtime.Core.Managers.EventManager::Add(System.String,System.Action`1<System.Object[]>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR DisposeContainer_t1201D3858AAFCED17DD46A94CF7B1B4059A964F6* EventManager_Add_m1877AF7A3EC9907AA4487E0FB8D70841D28A4A8A (String_t* ___key0, Action_1_t12A760F019B1942FA3868174D10CBA1CCC90A535* ___action1, const RuntimeMethod* method) 
{
	{
		// public static DisposeContainer Add(string key, Action<object[]> action) => ObjectArgsHandler.Add(key, action);
		String_t* L_0 = ___key0;
		Action_1_t12A760F019B1942FA3868174D10CBA1CCC90A535* L_1 = ___action1;
		DisposeContainer_t1201D3858AAFCED17DD46A94CF7B1B4059A964F6* L_2;
		L_2 = ObjectArgsHandler_Add_m3E484AA1609DEE5FA64FCF627AF9AA63B3857437(L_0, L_1, NULL);
		return L_2;
	}
}
// System.Void EventSystem.Runtime.Core.Managers.EventManager::Remove(System.String,System.Action)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EventManager_Remove_mB4D94D06D9F70AEB93BB45C81217A1D8BA74B8B3 (String_t* ___key0, Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ___action1, const RuntimeMethod* method) 
{
	{
		// public static void Remove(string key, Action action) => SingleEventHandler.Remove(key, action);
		String_t* L_0 = ___key0;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_1 = ___action1;
		SingleEventHandler_Remove_mA63C0F808C0BBB00FB1B8DA74E939BEFFC202478(L_0, L_1, NULL);
		return;
	}
}
// System.Void EventSystem.Runtime.Core.Managers.EventManager::Remove(System.Enum,System.Action)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EventManager_Remove_m87D026168B6B065912DB1C0A1DC5767AB63BFE23 (Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2* ___key0, Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ___action1, const RuntimeMethod* method) 
{
	{
		// public static void Remove(Enum key, Action action) => SingleEventHandler.Remove(key.ToString(), action);
		Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2* L_0 = ___key0;
		NullCheck(L_0);
		String_t* L_1;
		L_1 = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_0);
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_2 = ___action1;
		SingleEventHandler_Remove_mA63C0F808C0BBB00FB1B8DA74E939BEFFC202478(L_1, L_2, NULL);
		return;
	}
}
// System.Void EventSystem.Runtime.Core.Managers.EventManager::Remove(System.String,System.Action`1<System.Object[]>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EventManager_Remove_mEC6F4F8FBA91427485B6DABDBF61325DE6D20344 (String_t* ___key0, Action_1_t12A760F019B1942FA3868174D10CBA1CCC90A535* ___action1, const RuntimeMethod* method) 
{
	{
		// public static void Remove(string key, Action<object[]> action) => ObjectArgsHandler.Remove(key, action);
		String_t* L_0 = ___key0;
		Action_1_t12A760F019B1942FA3868174D10CBA1CCC90A535* L_1 = ___action1;
		ObjectArgsHandler_Remove_m8D42CEC707364E7E17C35D6312BC874177BE049A(L_0, L_1, NULL);
		return;
	}
}
// System.Void EventSystem.Runtime.Core.Managers.EventManager::Remove(System.Enum,System.Action`1<System.Object[]>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EventManager_Remove_m8F80CC32A48041BDBBEA5B4B09E704EED561CD55 (Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2* ___key0, Action_1_t12A760F019B1942FA3868174D10CBA1CCC90A535* ___action1, const RuntimeMethod* method) 
{
	{
		// public static void Remove(Enum key, Action<object[]> action) => ObjectArgsHandler.Remove(key.ToString(), action);
		Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2* L_0 = ___key0;
		NullCheck(L_0);
		String_t* L_1;
		L_1 = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_0);
		Action_1_t12A760F019B1942FA3868174D10CBA1CCC90A535* L_2 = ___action1;
		ObjectArgsHandler_Remove_m8D42CEC707364E7E17C35D6312BC874177BE049A(L_1, L_2, NULL);
		return;
	}
}
// System.Void EventSystem.Runtime.Core.Managers.EventManager::Invoke(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EventManager_Invoke_m949245FD699D575100DCCABD693E21CC4B6E3791 (String_t* ___key0, const RuntimeMethod* method) 
{
	{
		// public static void Invoke(string key) => SingleEventHandler.Invoke(key);
		String_t* L_0 = ___key0;
		SingleEventHandler_Invoke_m3F1AFE9F89B1182E029554E5AB4CC0461816BAF3(L_0, NULL);
		return;
	}
}
// System.Void EventSystem.Runtime.Core.Managers.EventManager::Invoke(System.Enum)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EventManager_Invoke_m20A12D1F80490BF7DB163FB13237937B84C9332C (Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2* ___key0, const RuntimeMethod* method) 
{
	{
		// public static void Invoke(Enum key) => SingleEventHandler.Invoke(key.ToString());
		Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2* L_0 = ___key0;
		NullCheck(L_0);
		String_t* L_1;
		L_1 = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_0);
		SingleEventHandler_Invoke_m3F1AFE9F89B1182E029554E5AB4CC0461816BAF3(L_1, NULL);
		return;
	}
}
// System.Void EventSystem.Runtime.Core.Managers.EventManager::InvokeArray(System.String,System.Object[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EventManager_InvokeArray_mB971F05F1B0B018A311260438D27EB8D89DA9164 (String_t* ___key0, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___value1, const RuntimeMethod* method) 
{
	{
		// public static void InvokeArray(string key, params object[] value) => ObjectArgsHandler.Invoke(key, value);
		String_t* L_0 = ___key0;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_1 = ___value1;
		ObjectArgsHandler_Invoke_mEC63BD39C6E0327813D4E6E3EE7BBE6ACF19E259(L_0, L_1, NULL);
		return;
	}
}
// System.Void EventSystem.Runtime.Core.Managers.EventManager::Invoke(System.Enum,System.Object[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EventManager_Invoke_m37B8F1BDD5CE62E8804979CEE613E4E626210D46 (Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2* ___key0, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___value1, const RuntimeMethod* method) 
{
	{
		// public static void Invoke(Enum key,params object[] value) => ObjectArgsHandler.Invoke(key.ToString(), value);
		Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2* L_0 = ___key0;
		NullCheck(L_0);
		String_t* L_1;
		L_1 = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_0);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_2 = ___value1;
		ObjectArgsHandler_Invoke_mEC63BD39C6E0327813D4E6E3EE7BBE6ACF19E259(L_1, L_2, NULL);
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
// System.Void EventSystem.Runtime.Core.Handlers.Static.FuncEventHandler::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FuncEventHandler__cctor_mC09A2D94D8F27B56028C697B3C3C4056E2A04680 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2__ctor_m8F162D16E464E89665BB23C7E9B47ABA1A7D8F74_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_t8B48DAE0DB53621894893AF0FE471EC563B9F6FD_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FuncEventHandler_t36FC616BABE4EB47E45602D49C0BFCEFF606B34B_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// private static readonly Dictionary<Type, IEvent> Events = new Dictionary<Type, IEvent>();
		Dictionary_2_t8B48DAE0DB53621894893AF0FE471EC563B9F6FD* L_0 = (Dictionary_2_t8B48DAE0DB53621894893AF0FE471EC563B9F6FD*)il2cpp_codegen_object_new(Dictionary_2_t8B48DAE0DB53621894893AF0FE471EC563B9F6FD_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		Dictionary_2__ctor_m8F162D16E464E89665BB23C7E9B47ABA1A7D8F74(L_0, Dictionary_2__ctor_m8F162D16E464E89665BB23C7E9B47ABA1A7D8F74_RuntimeMethod_var);
		((FuncEventHandler_t36FC616BABE4EB47E45602D49C0BFCEFF606B34B_StaticFields*)il2cpp_codegen_static_fields_for(FuncEventHandler_t36FC616BABE4EB47E45602D49C0BFCEFF606B34B_il2cpp_TypeInfo_var))->___Events_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&((FuncEventHandler_t36FC616BABE4EB47E45602D49C0BFCEFF606B34B_StaticFields*)il2cpp_codegen_static_fields_for(FuncEventHandler_t36FC616BABE4EB47E45602D49C0BFCEFF606B34B_il2cpp_TypeInfo_var))->___Events_0), (void*)L_0);
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
// System.Void EventSystem.Runtime.Core.Handlers.Static.GenericEventHandler::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GenericEventHandler__cctor_m5ED944E0DE0B6F0B4D79D60BE532E494EA67114A (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2__ctor_m8F162D16E464E89665BB23C7E9B47ABA1A7D8F74_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_t8B48DAE0DB53621894893AF0FE471EC563B9F6FD_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GenericEventHandler_tC5C0F849D77D4FEBD3190DBD7D781C4C97C77E4F_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// private static readonly Dictionary<Type, IEvent> Events = new Dictionary<Type, IEvent>();
		Dictionary_2_t8B48DAE0DB53621894893AF0FE471EC563B9F6FD* L_0 = (Dictionary_2_t8B48DAE0DB53621894893AF0FE471EC563B9F6FD*)il2cpp_codegen_object_new(Dictionary_2_t8B48DAE0DB53621894893AF0FE471EC563B9F6FD_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		Dictionary_2__ctor_m8F162D16E464E89665BB23C7E9B47ABA1A7D8F74(L_0, Dictionary_2__ctor_m8F162D16E464E89665BB23C7E9B47ABA1A7D8F74_RuntimeMethod_var);
		((GenericEventHandler_tC5C0F849D77D4FEBD3190DBD7D781C4C97C77E4F_StaticFields*)il2cpp_codegen_static_fields_for(GenericEventHandler_tC5C0F849D77D4FEBD3190DBD7D781C4C97C77E4F_il2cpp_TypeInfo_var))->___Events_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&((GenericEventHandler_tC5C0F849D77D4FEBD3190DBD7D781C4C97C77E4F_StaticFields*)il2cpp_codegen_static_fields_for(GenericEventHandler_tC5C0F849D77D4FEBD3190DBD7D781C4C97C77E4F_il2cpp_TypeInfo_var))->___Events_0), (void*)L_0);
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
// EventSystem.Runtime.Core.Dispose.DisposeContainer EventSystem.Runtime.Core.Handlers.Static.ObjectArgsHandler::Add(System.String,System.Action`1<System.Object[]>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR DisposeContainer_t1201D3858AAFCED17DD46A94CF7B1B4059A964F6* ObjectArgsHandler_Add_m3E484AA1609DEE5FA64FCF627AF9AA63B3857437 (String_t* ___key0, Action_1_t12A760F019B1942FA3868174D10CBA1CCC90A535* ___action1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DisposeContainer_t1201D3858AAFCED17DD46A94CF7B1B4059A964F6_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectArgsEvent_tBA5DA05238A2C5E0801083B9345A915757A965A9_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectArgsHandler_tBB4ADAA1A53BAD3B6DDCA150B5A6429A7BF5E790_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass1_0_U3CAddU3Eb__0_m1B8BE214BB04485E041694A39E59C2B150DA113F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass1_0_tF5CF98D5477139AE5BBF216C4B7AF08F2C9F9CDD_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	U3CU3Ec__DisplayClass1_0_tF5CF98D5477139AE5BBF216C4B7AF08F2C9F9CDD* V_0 = NULL;
	{
		U3CU3Ec__DisplayClass1_0_tF5CF98D5477139AE5BBF216C4B7AF08F2C9F9CDD* L_0 = (U3CU3Ec__DisplayClass1_0_tF5CF98D5477139AE5BBF216C4B7AF08F2C9F9CDD*)il2cpp_codegen_object_new(U3CU3Ec__DisplayClass1_0_tF5CF98D5477139AE5BBF216C4B7AF08F2C9F9CDD_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		U3CU3Ec__DisplayClass1_0__ctor_m6F38441C91D483112A852CBDB3996577DBD5FE57(L_0, NULL);
		V_0 = L_0;
		U3CU3Ec__DisplayClass1_0_tF5CF98D5477139AE5BBF216C4B7AF08F2C9F9CDD* L_1 = V_0;
		String_t* L_2 = ___key0;
		NullCheck(L_1);
		L_1->___key_0 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&L_1->___key_0), (void*)L_2);
		U3CU3Ec__DisplayClass1_0_tF5CF98D5477139AE5BBF216C4B7AF08F2C9F9CDD* L_3 = V_0;
		Action_1_t12A760F019B1942FA3868174D10CBA1CCC90A535* L_4 = ___action1;
		NullCheck(L_3);
		L_3->___action_1 = L_4;
		Il2CppCodeGenWriteBarrier((void**)(&L_3->___action_1), (void*)L_4);
		// _events ??= new ObjectArgsEvent();
		ObjectArgsEvent_tBA5DA05238A2C5E0801083B9345A915757A965A9* L_5 = ((ObjectArgsHandler_tBB4ADAA1A53BAD3B6DDCA150B5A6429A7BF5E790_StaticFields*)il2cpp_codegen_static_fields_for(ObjectArgsHandler_tBB4ADAA1A53BAD3B6DDCA150B5A6429A7BF5E790_il2cpp_TypeInfo_var))->____events_0;
		if (L_5)
		{
			goto IL_0025;
		}
	}
	{
		ObjectArgsEvent_tBA5DA05238A2C5E0801083B9345A915757A965A9* L_6 = (ObjectArgsEvent_tBA5DA05238A2C5E0801083B9345A915757A965A9*)il2cpp_codegen_object_new(ObjectArgsEvent_tBA5DA05238A2C5E0801083B9345A915757A965A9_il2cpp_TypeInfo_var);
		NullCheck(L_6);
		ObjectArgsEvent__ctor_m157B1566969665956702FEA90CE85F4B668DFD8C(L_6, NULL);
		((ObjectArgsHandler_tBB4ADAA1A53BAD3B6DDCA150B5A6429A7BF5E790_StaticFields*)il2cpp_codegen_static_fields_for(ObjectArgsHandler_tBB4ADAA1A53BAD3B6DDCA150B5A6429A7BF5E790_il2cpp_TypeInfo_var))->____events_0 = L_6;
		Il2CppCodeGenWriteBarrier((void**)(&((ObjectArgsHandler_tBB4ADAA1A53BAD3B6DDCA150B5A6429A7BF5E790_StaticFields*)il2cpp_codegen_static_fields_for(ObjectArgsHandler_tBB4ADAA1A53BAD3B6DDCA150B5A6429A7BF5E790_il2cpp_TypeInfo_var))->____events_0), (void*)L_6);
	}

IL_0025:
	{
		// _events.Add(key, action);
		ObjectArgsEvent_tBA5DA05238A2C5E0801083B9345A915757A965A9* L_7 = ((ObjectArgsHandler_tBB4ADAA1A53BAD3B6DDCA150B5A6429A7BF5E790_StaticFields*)il2cpp_codegen_static_fields_for(ObjectArgsHandler_tBB4ADAA1A53BAD3B6DDCA150B5A6429A7BF5E790_il2cpp_TypeInfo_var))->____events_0;
		U3CU3Ec__DisplayClass1_0_tF5CF98D5477139AE5BBF216C4B7AF08F2C9F9CDD* L_8 = V_0;
		NullCheck(L_8);
		String_t* L_9 = L_8->___key_0;
		U3CU3Ec__DisplayClass1_0_tF5CF98D5477139AE5BBF216C4B7AF08F2C9F9CDD* L_10 = V_0;
		NullCheck(L_10);
		Action_1_t12A760F019B1942FA3868174D10CBA1CCC90A535* L_11 = L_10->___action_1;
		NullCheck(L_7);
		ObjectArgsEvent_Add_mCA32687B48FFC42EF5ACEF356A7B1BA2845360CE(L_7, L_9, L_11, NULL);
		// return new DisposeContainer(() => Remove(key, action));
		U3CU3Ec__DisplayClass1_0_tF5CF98D5477139AE5BBF216C4B7AF08F2C9F9CDD* L_12 = V_0;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_13 = (Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07*)il2cpp_codegen_object_new(Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07_il2cpp_TypeInfo_var);
		NullCheck(L_13);
		Action__ctor_mBDC7B0B4A3F583B64C2896F01BDED360772F67DC(L_13, L_12, (intptr_t)((void*)U3CU3Ec__DisplayClass1_0_U3CAddU3Eb__0_m1B8BE214BB04485E041694A39E59C2B150DA113F_RuntimeMethod_var), NULL);
		DisposeContainer_t1201D3858AAFCED17DD46A94CF7B1B4059A964F6* L_14 = (DisposeContainer_t1201D3858AAFCED17DD46A94CF7B1B4059A964F6*)il2cpp_codegen_object_new(DisposeContainer_t1201D3858AAFCED17DD46A94CF7B1B4059A964F6_il2cpp_TypeInfo_var);
		NullCheck(L_14);
		DisposeContainer__ctor_m88024B7DDB5A0CAD0FE1AA8A0B87E1CB628555E2(L_14, L_13, NULL);
		return L_14;
	}
}
// System.Void EventSystem.Runtime.Core.Handlers.Static.ObjectArgsHandler::Remove(System.String,System.Action`1<System.Object[]>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ObjectArgsHandler_Remove_m8D42CEC707364E7E17C35D6312BC874177BE049A (String_t* ___key0, Action_1_t12A760F019B1942FA3868174D10CBA1CCC90A535* ___action1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectArgsHandler_tBB4ADAA1A53BAD3B6DDCA150B5A6429A7BF5E790_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	ObjectArgsEvent_tBA5DA05238A2C5E0801083B9345A915757A965A9* G_B2_0 = NULL;
	ObjectArgsEvent_tBA5DA05238A2C5E0801083B9345A915757A965A9* G_B1_0 = NULL;
	{
		// _events?.Remove(key, action);
		ObjectArgsEvent_tBA5DA05238A2C5E0801083B9345A915757A965A9* L_0 = ((ObjectArgsHandler_tBB4ADAA1A53BAD3B6DDCA150B5A6429A7BF5E790_StaticFields*)il2cpp_codegen_static_fields_for(ObjectArgsHandler_tBB4ADAA1A53BAD3B6DDCA150B5A6429A7BF5E790_il2cpp_TypeInfo_var))->____events_0;
		ObjectArgsEvent_tBA5DA05238A2C5E0801083B9345A915757A965A9* L_1 = L_0;
		G_B1_0 = L_1;
		if (L_1)
		{
			G_B2_0 = L_1;
			goto IL_000a;
		}
	}
	{
		return;
	}

IL_000a:
	{
		String_t* L_2 = ___key0;
		Action_1_t12A760F019B1942FA3868174D10CBA1CCC90A535* L_3 = ___action1;
		NullCheck(G_B2_0);
		ObjectArgsEvent_Remove_m3AEF2B95BC058D808763A07F08C3A810A1D4EE85(G_B2_0, L_2, L_3, NULL);
		// }
		return;
	}
}
// System.Void EventSystem.Runtime.Core.Handlers.Static.ObjectArgsHandler::Invoke(System.String,System.Object[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ObjectArgsHandler_Invoke_mEC63BD39C6E0327813D4E6E3EE7BBE6ACF19E259 (String_t* ___key0, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___arg1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Array_Empty_TisRuntimeObject_mFB8A63D602BB6974D31E20300D9EB89C6FE7C278_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectArgsHandler_tBB4ADAA1A53BAD3B6DDCA150B5A6429A7BF5E790_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	ObjectArgsEvent_tBA5DA05238A2C5E0801083B9345A915757A965A9* G_B2_0 = NULL;
	ObjectArgsEvent_tBA5DA05238A2C5E0801083B9345A915757A965A9* G_B1_0 = NULL;
	{
		// _events?.Invoke(key);
		ObjectArgsEvent_tBA5DA05238A2C5E0801083B9345A915757A965A9* L_0 = ((ObjectArgsHandler_tBB4ADAA1A53BAD3B6DDCA150B5A6429A7BF5E790_StaticFields*)il2cpp_codegen_static_fields_for(ObjectArgsHandler_tBB4ADAA1A53BAD3B6DDCA150B5A6429A7BF5E790_il2cpp_TypeInfo_var))->____events_0;
		ObjectArgsEvent_tBA5DA05238A2C5E0801083B9345A915757A965A9* L_1 = L_0;
		G_B1_0 = L_1;
		if (L_1)
		{
			G_B2_0 = L_1;
			goto IL_000a;
		}
	}
	{
		return;
	}

IL_000a:
	{
		String_t* L_2 = ___key0;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_3;
		L_3 = Array_Empty_TisRuntimeObject_mFB8A63D602BB6974D31E20300D9EB89C6FE7C278_inline(Array_Empty_TisRuntimeObject_mFB8A63D602BB6974D31E20300D9EB89C6FE7C278_RuntimeMethod_var);
		NullCheck(G_B2_0);
		ObjectArgsEvent_Invoke_m9E35B2A46A61170A73BBDF1CAAE1057828AD3DE0(G_B2_0, L_2, L_3, NULL);
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
// System.Void EventSystem.Runtime.Core.Handlers.Static.ObjectArgsHandler/<>c__DisplayClass1_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass1_0__ctor_m6F38441C91D483112A852CBDB3996577DBD5FE57 (U3CU3Ec__DisplayClass1_0_tF5CF98D5477139AE5BBF216C4B7AF08F2C9F9CDD* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
// System.Void EventSystem.Runtime.Core.Handlers.Static.ObjectArgsHandler/<>c__DisplayClass1_0::<Add>b__0()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass1_0_U3CAddU3Eb__0_m1B8BE214BB04485E041694A39E59C2B150DA113F (U3CU3Ec__DisplayClass1_0_tF5CF98D5477139AE5BBF216C4B7AF08F2C9F9CDD* __this, const RuntimeMethod* method) 
{
	{
		// return new DisposeContainer(() => Remove(key, action));
		String_t* L_0 = __this->___key_0;
		Action_1_t12A760F019B1942FA3868174D10CBA1CCC90A535* L_1 = __this->___action_1;
		ObjectArgsHandler_Remove_m8D42CEC707364E7E17C35D6312BC874177BE049A(L_0, L_1, NULL);
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
// EventSystem.Runtime.Core.Dispose.DisposeContainer EventSystem.Runtime.Core.Handlers.Static.SingleEventHandler::Add(System.String,System.Action)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR DisposeContainer_t1201D3858AAFCED17DD46A94CF7B1B4059A964F6* SingleEventHandler_Add_mF176A21786526AB3466A9BFA9DFAC2119B1447B0 (String_t* ___key0, Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ___action1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DisposeContainer_t1201D3858AAFCED17DD46A94CF7B1B4059A964F6_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SingleEventHandler_tB06F6AB4ECA2EB2BEFDF9598F389A74FDF328203_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SingleEvent_t74A1A527F011A34A7FCD670FD1D93C354E79CE78_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass1_0_U3CAddU3Eb__0_m50F748871A9441E7CFBFDB58B375BBF1A6B07C23_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass1_0_tAC42DC9A517648C6BEFC7A89F7AB44C1472481FD_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	U3CU3Ec__DisplayClass1_0_tAC42DC9A517648C6BEFC7A89F7AB44C1472481FD* V_0 = NULL;
	{
		U3CU3Ec__DisplayClass1_0_tAC42DC9A517648C6BEFC7A89F7AB44C1472481FD* L_0 = (U3CU3Ec__DisplayClass1_0_tAC42DC9A517648C6BEFC7A89F7AB44C1472481FD*)il2cpp_codegen_object_new(U3CU3Ec__DisplayClass1_0_tAC42DC9A517648C6BEFC7A89F7AB44C1472481FD_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		U3CU3Ec__DisplayClass1_0__ctor_m7DBAA8FA4405AC2F5C4620EE9FDB04321FE50B0E(L_0, NULL);
		V_0 = L_0;
		U3CU3Ec__DisplayClass1_0_tAC42DC9A517648C6BEFC7A89F7AB44C1472481FD* L_1 = V_0;
		String_t* L_2 = ___key0;
		NullCheck(L_1);
		L_1->___key_0 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&L_1->___key_0), (void*)L_2);
		U3CU3Ec__DisplayClass1_0_tAC42DC9A517648C6BEFC7A89F7AB44C1472481FD* L_3 = V_0;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_4 = ___action1;
		NullCheck(L_3);
		L_3->___action_1 = L_4;
		Il2CppCodeGenWriteBarrier((void**)(&L_3->___action_1), (void*)L_4);
		// _singleEvents ??= new SingleEvent();
		SingleEvent_t74A1A527F011A34A7FCD670FD1D93C354E79CE78* L_5 = ((SingleEventHandler_tB06F6AB4ECA2EB2BEFDF9598F389A74FDF328203_StaticFields*)il2cpp_codegen_static_fields_for(SingleEventHandler_tB06F6AB4ECA2EB2BEFDF9598F389A74FDF328203_il2cpp_TypeInfo_var))->____singleEvents_0;
		if (L_5)
		{
			goto IL_0025;
		}
	}
	{
		SingleEvent_t74A1A527F011A34A7FCD670FD1D93C354E79CE78* L_6 = (SingleEvent_t74A1A527F011A34A7FCD670FD1D93C354E79CE78*)il2cpp_codegen_object_new(SingleEvent_t74A1A527F011A34A7FCD670FD1D93C354E79CE78_il2cpp_TypeInfo_var);
		NullCheck(L_6);
		SingleEvent__ctor_m917F55CFB90457061DF4902F9A429413C5FF1B3C(L_6, NULL);
		((SingleEventHandler_tB06F6AB4ECA2EB2BEFDF9598F389A74FDF328203_StaticFields*)il2cpp_codegen_static_fields_for(SingleEventHandler_tB06F6AB4ECA2EB2BEFDF9598F389A74FDF328203_il2cpp_TypeInfo_var))->____singleEvents_0 = L_6;
		Il2CppCodeGenWriteBarrier((void**)(&((SingleEventHandler_tB06F6AB4ECA2EB2BEFDF9598F389A74FDF328203_StaticFields*)il2cpp_codegen_static_fields_for(SingleEventHandler_tB06F6AB4ECA2EB2BEFDF9598F389A74FDF328203_il2cpp_TypeInfo_var))->____singleEvents_0), (void*)L_6);
	}

IL_0025:
	{
		// _singleEvents.Add(key, action);
		SingleEvent_t74A1A527F011A34A7FCD670FD1D93C354E79CE78* L_7 = ((SingleEventHandler_tB06F6AB4ECA2EB2BEFDF9598F389A74FDF328203_StaticFields*)il2cpp_codegen_static_fields_for(SingleEventHandler_tB06F6AB4ECA2EB2BEFDF9598F389A74FDF328203_il2cpp_TypeInfo_var))->____singleEvents_0;
		U3CU3Ec__DisplayClass1_0_tAC42DC9A517648C6BEFC7A89F7AB44C1472481FD* L_8 = V_0;
		NullCheck(L_8);
		String_t* L_9 = L_8->___key_0;
		U3CU3Ec__DisplayClass1_0_tAC42DC9A517648C6BEFC7A89F7AB44C1472481FD* L_10 = V_0;
		NullCheck(L_10);
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_11 = L_10->___action_1;
		NullCheck(L_7);
		SingleEvent_Add_mA3DC9105E518544054C16B951226DA62D17B4C3C(L_7, L_9, L_11, NULL);
		// return new DisposeContainer(() => Remove(key, action));
		U3CU3Ec__DisplayClass1_0_tAC42DC9A517648C6BEFC7A89F7AB44C1472481FD* L_12 = V_0;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_13 = (Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07*)il2cpp_codegen_object_new(Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07_il2cpp_TypeInfo_var);
		NullCheck(L_13);
		Action__ctor_mBDC7B0B4A3F583B64C2896F01BDED360772F67DC(L_13, L_12, (intptr_t)((void*)U3CU3Ec__DisplayClass1_0_U3CAddU3Eb__0_m50F748871A9441E7CFBFDB58B375BBF1A6B07C23_RuntimeMethod_var), NULL);
		DisposeContainer_t1201D3858AAFCED17DD46A94CF7B1B4059A964F6* L_14 = (DisposeContainer_t1201D3858AAFCED17DD46A94CF7B1B4059A964F6*)il2cpp_codegen_object_new(DisposeContainer_t1201D3858AAFCED17DD46A94CF7B1B4059A964F6_il2cpp_TypeInfo_var);
		NullCheck(L_14);
		DisposeContainer__ctor_m88024B7DDB5A0CAD0FE1AA8A0B87E1CB628555E2(L_14, L_13, NULL);
		return L_14;
	}
}
// System.Void EventSystem.Runtime.Core.Handlers.Static.SingleEventHandler::Remove(System.String,System.Action)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SingleEventHandler_Remove_mA63C0F808C0BBB00FB1B8DA74E939BEFFC202478 (String_t* ___key0, Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ___action1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SingleEventHandler_tB06F6AB4ECA2EB2BEFDF9598F389A74FDF328203_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	SingleEvent_t74A1A527F011A34A7FCD670FD1D93C354E79CE78* G_B2_0 = NULL;
	SingleEvent_t74A1A527F011A34A7FCD670FD1D93C354E79CE78* G_B1_0 = NULL;
	{
		// _singleEvents?.Remove(key, action);
		SingleEvent_t74A1A527F011A34A7FCD670FD1D93C354E79CE78* L_0 = ((SingleEventHandler_tB06F6AB4ECA2EB2BEFDF9598F389A74FDF328203_StaticFields*)il2cpp_codegen_static_fields_for(SingleEventHandler_tB06F6AB4ECA2EB2BEFDF9598F389A74FDF328203_il2cpp_TypeInfo_var))->____singleEvents_0;
		SingleEvent_t74A1A527F011A34A7FCD670FD1D93C354E79CE78* L_1 = L_0;
		G_B1_0 = L_1;
		if (L_1)
		{
			G_B2_0 = L_1;
			goto IL_000a;
		}
	}
	{
		return;
	}

IL_000a:
	{
		String_t* L_2 = ___key0;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_3 = ___action1;
		NullCheck(G_B2_0);
		SingleEvent_Remove_mCCB09B84E9FBF942F5827C87EC3D592FECEFDD78(G_B2_0, L_2, L_3, NULL);
		// }
		return;
	}
}
// System.Void EventSystem.Runtime.Core.Handlers.Static.SingleEventHandler::Invoke(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SingleEventHandler_Invoke_m3F1AFE9F89B1182E029554E5AB4CC0461816BAF3 (String_t* ___key0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SingleEventHandler_tB06F6AB4ECA2EB2BEFDF9598F389A74FDF328203_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	SingleEvent_t74A1A527F011A34A7FCD670FD1D93C354E79CE78* G_B2_0 = NULL;
	SingleEvent_t74A1A527F011A34A7FCD670FD1D93C354E79CE78* G_B1_0 = NULL;
	{
		// _singleEvents?.Invoke(key);
		SingleEvent_t74A1A527F011A34A7FCD670FD1D93C354E79CE78* L_0 = ((SingleEventHandler_tB06F6AB4ECA2EB2BEFDF9598F389A74FDF328203_StaticFields*)il2cpp_codegen_static_fields_for(SingleEventHandler_tB06F6AB4ECA2EB2BEFDF9598F389A74FDF328203_il2cpp_TypeInfo_var))->____singleEvents_0;
		SingleEvent_t74A1A527F011A34A7FCD670FD1D93C354E79CE78* L_1 = L_0;
		G_B1_0 = L_1;
		if (L_1)
		{
			G_B2_0 = L_1;
			goto IL_000a;
		}
	}
	{
		return;
	}

IL_000a:
	{
		String_t* L_2 = ___key0;
		NullCheck(G_B2_0);
		SingleEvent_Invoke_m426F5D481BE51994A6DFEB741B0AA05D9B82F0D9(G_B2_0, L_2, NULL);
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
// System.Void EventSystem.Runtime.Core.Handlers.Static.SingleEventHandler/<>c__DisplayClass1_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass1_0__ctor_m7DBAA8FA4405AC2F5C4620EE9FDB04321FE50B0E (U3CU3Ec__DisplayClass1_0_tAC42DC9A517648C6BEFC7A89F7AB44C1472481FD* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
// System.Void EventSystem.Runtime.Core.Handlers.Static.SingleEventHandler/<>c__DisplayClass1_0::<Add>b__0()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass1_0_U3CAddU3Eb__0_m50F748871A9441E7CFBFDB58B375BBF1A6B07C23 (U3CU3Ec__DisplayClass1_0_tAC42DC9A517648C6BEFC7A89F7AB44C1472481FD* __this, const RuntimeMethod* method) 
{
	{
		// return new DisposeContainer(() => Remove(key, action));
		String_t* L_0 = __this->___key_0;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_1 = __this->___action_1;
		SingleEventHandler_Remove_mA63C0F808C0BBB00FB1B8DA74E939BEFFC202478(L_0, L_1, NULL);
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
// EventSystem.Runtime.Core.Dispose.DisposeContainer EventSystem.Runtime.Core.Handlers.Dynamic.DynamicArgHandler::Add(System.String,System.Action`1<System.Object>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR DisposeContainer_t1201D3858AAFCED17DD46A94CF7B1B4059A964F6* DynamicArgHandler_Add_m5D7E6C0E8556ABA5A73391294E0223B2F9C912AD (String_t* ___key0, Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* ___action1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DisposeContainer_t1201D3858AAFCED17DD46A94CF7B1B4059A964F6_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DynamicArgEvent_t0E2BBF690EFB77F74D10D049589FDDC35F2E9321_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DynamicArgHandler_t409726FCDE13E0898C72A24C4FBEF235D4C67C06_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass1_0_U3CAddU3Eb__0_mAAC1AD544256C6ED8F6735A1FDE5E875D8A45615_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass1_0_t46819A260C814A1852949B0A65E5A24312882E72_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	U3CU3Ec__DisplayClass1_0_t46819A260C814A1852949B0A65E5A24312882E72* V_0 = NULL;
	{
		U3CU3Ec__DisplayClass1_0_t46819A260C814A1852949B0A65E5A24312882E72* L_0 = (U3CU3Ec__DisplayClass1_0_t46819A260C814A1852949B0A65E5A24312882E72*)il2cpp_codegen_object_new(U3CU3Ec__DisplayClass1_0_t46819A260C814A1852949B0A65E5A24312882E72_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		U3CU3Ec__DisplayClass1_0__ctor_m2F282C7A95F2BBDE7F38F6CF973CB430CA39AD02(L_0, NULL);
		V_0 = L_0;
		U3CU3Ec__DisplayClass1_0_t46819A260C814A1852949B0A65E5A24312882E72* L_1 = V_0;
		String_t* L_2 = ___key0;
		NullCheck(L_1);
		L_1->___key_0 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&L_1->___key_0), (void*)L_2);
		U3CU3Ec__DisplayClass1_0_t46819A260C814A1852949B0A65E5A24312882E72* L_3 = V_0;
		Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* L_4 = ___action1;
		NullCheck(L_3);
		L_3->___action_1 = L_4;
		Il2CppCodeGenWriteBarrier((void**)(&L_3->___action_1), (void*)L_4);
		// _events ??= new DynamicArgEvent();
		DynamicArgEvent_t0E2BBF690EFB77F74D10D049589FDDC35F2E9321* L_5 = ((DynamicArgHandler_t409726FCDE13E0898C72A24C4FBEF235D4C67C06_StaticFields*)il2cpp_codegen_static_fields_for(DynamicArgHandler_t409726FCDE13E0898C72A24C4FBEF235D4C67C06_il2cpp_TypeInfo_var))->____events_0;
		if (L_5)
		{
			goto IL_0025;
		}
	}
	{
		DynamicArgEvent_t0E2BBF690EFB77F74D10D049589FDDC35F2E9321* L_6 = (DynamicArgEvent_t0E2BBF690EFB77F74D10D049589FDDC35F2E9321*)il2cpp_codegen_object_new(DynamicArgEvent_t0E2BBF690EFB77F74D10D049589FDDC35F2E9321_il2cpp_TypeInfo_var);
		NullCheck(L_6);
		DynamicArgEvent__ctor_m5E0360C350401F2E800EECA65449BD3867EDEB13(L_6, NULL);
		((DynamicArgHandler_t409726FCDE13E0898C72A24C4FBEF235D4C67C06_StaticFields*)il2cpp_codegen_static_fields_for(DynamicArgHandler_t409726FCDE13E0898C72A24C4FBEF235D4C67C06_il2cpp_TypeInfo_var))->____events_0 = L_6;
		Il2CppCodeGenWriteBarrier((void**)(&((DynamicArgHandler_t409726FCDE13E0898C72A24C4FBEF235D4C67C06_StaticFields*)il2cpp_codegen_static_fields_for(DynamicArgHandler_t409726FCDE13E0898C72A24C4FBEF235D4C67C06_il2cpp_TypeInfo_var))->____events_0), (void*)L_6);
	}

IL_0025:
	{
		// _events.Add(key, action);
		DynamicArgEvent_t0E2BBF690EFB77F74D10D049589FDDC35F2E9321* L_7 = ((DynamicArgHandler_t409726FCDE13E0898C72A24C4FBEF235D4C67C06_StaticFields*)il2cpp_codegen_static_fields_for(DynamicArgHandler_t409726FCDE13E0898C72A24C4FBEF235D4C67C06_il2cpp_TypeInfo_var))->____events_0;
		U3CU3Ec__DisplayClass1_0_t46819A260C814A1852949B0A65E5A24312882E72* L_8 = V_0;
		NullCheck(L_8);
		String_t* L_9 = L_8->___key_0;
		U3CU3Ec__DisplayClass1_0_t46819A260C814A1852949B0A65E5A24312882E72* L_10 = V_0;
		NullCheck(L_10);
		Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* L_11 = L_10->___action_1;
		NullCheck(L_7);
		DynamicArgEvent_Add_m4C095D343326CB86CDA82D029C3EBFABCA7D765F(L_7, L_9, L_11, NULL);
		// return new DisposeContainer(() => Remove(key, action));
		U3CU3Ec__DisplayClass1_0_t46819A260C814A1852949B0A65E5A24312882E72* L_12 = V_0;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_13 = (Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07*)il2cpp_codegen_object_new(Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07_il2cpp_TypeInfo_var);
		NullCheck(L_13);
		Action__ctor_mBDC7B0B4A3F583B64C2896F01BDED360772F67DC(L_13, L_12, (intptr_t)((void*)U3CU3Ec__DisplayClass1_0_U3CAddU3Eb__0_mAAC1AD544256C6ED8F6735A1FDE5E875D8A45615_RuntimeMethod_var), NULL);
		DisposeContainer_t1201D3858AAFCED17DD46A94CF7B1B4059A964F6* L_14 = (DisposeContainer_t1201D3858AAFCED17DD46A94CF7B1B4059A964F6*)il2cpp_codegen_object_new(DisposeContainer_t1201D3858AAFCED17DD46A94CF7B1B4059A964F6_il2cpp_TypeInfo_var);
		NullCheck(L_14);
		DisposeContainer__ctor_m88024B7DDB5A0CAD0FE1AA8A0B87E1CB628555E2(L_14, L_13, NULL);
		return L_14;
	}
}
// System.Void EventSystem.Runtime.Core.Handlers.Dynamic.DynamicArgHandler::Remove(System.String,System.Action`1<System.Object>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DynamicArgHandler_Remove_m41505BB233B2523C6FB6060D248E600561E053C4 (String_t* ___key0, Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* ___action1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DynamicArgHandler_t409726FCDE13E0898C72A24C4FBEF235D4C67C06_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	DynamicArgEvent_t0E2BBF690EFB77F74D10D049589FDDC35F2E9321* G_B2_0 = NULL;
	DynamicArgEvent_t0E2BBF690EFB77F74D10D049589FDDC35F2E9321* G_B1_0 = NULL;
	{
		// _events?.Remove(key, action);
		DynamicArgEvent_t0E2BBF690EFB77F74D10D049589FDDC35F2E9321* L_0 = ((DynamicArgHandler_t409726FCDE13E0898C72A24C4FBEF235D4C67C06_StaticFields*)il2cpp_codegen_static_fields_for(DynamicArgHandler_t409726FCDE13E0898C72A24C4FBEF235D4C67C06_il2cpp_TypeInfo_var))->____events_0;
		DynamicArgEvent_t0E2BBF690EFB77F74D10D049589FDDC35F2E9321* L_1 = L_0;
		G_B1_0 = L_1;
		if (L_1)
		{
			G_B2_0 = L_1;
			goto IL_000a;
		}
	}
	{
		return;
	}

IL_000a:
	{
		String_t* L_2 = ___key0;
		Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* L_3 = ___action1;
		NullCheck(G_B2_0);
		DynamicArgEvent_Remove_m2841AB7A8CDE690F71C5444719F707014D236504(G_B2_0, L_2, L_3, NULL);
		// }
		return;
	}
}
// System.Void EventSystem.Runtime.Core.Handlers.Dynamic.DynamicArgHandler::Invoke(System.String,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DynamicArgHandler_Invoke_m036DCEFCBD64EECD54607560F850686F80CEB6DE (String_t* ___key0, RuntimeObject* ___value1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CSharpArgumentInfoU5BU5D_t5070B0B1D45658E97396A584A619F5289E69A5D5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CSharpArgumentInfo_tC298899BB33AB3FF7B82A90878CD3EDB3DBAD43A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CallSite_1_Create_mF5B0646F08A95138D59D668220D0B8FE64BD953B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DynamicArgHandler_t409726FCDE13E0898C72A24C4FBEF235D4C67C06_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DynamicArgHandler_t409726FCDE13E0898C72A24C4FBEF235D4C67C06_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Eo__3_t7979F3704D77D1F72F8DE249DF5187C3919D5FD3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD7A66F857F6E3FCCC482964755DB79017BF35DD2);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (_events != null)
		DynamicArgEvent_t0E2BBF690EFB77F74D10D049589FDDC35F2E9321* L_0 = ((DynamicArgHandler_t409726FCDE13E0898C72A24C4FBEF235D4C67C06_StaticFields*)il2cpp_codegen_static_fields_for(DynamicArgHandler_t409726FCDE13E0898C72A24C4FBEF235D4C67C06_il2cpp_TypeInfo_var))->____events_0;
		if (!L_0)
		{
			goto IL_0071;
		}
	}
	{
		// _events.Invoke(key, value);
		CallSite_1_t0C8F4178F25F2B040A07CD24906589CEF4067422* L_1 = ((U3CU3Eo__3_t7979F3704D77D1F72F8DE249DF5187C3919D5FD3_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Eo__3_t7979F3704D77D1F72F8DE249DF5187C3919D5FD3_il2cpp_TypeInfo_var))->___U3CU3Ep__0_0;
		if (L_1)
		{
			goto IL_0056;
		}
	}
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_2 = { reinterpret_cast<intptr_t> (DynamicArgHandler_t409726FCDE13E0898C72A24C4FBEF235D4C67C06_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_3;
		L_3 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_2, NULL);
		CSharpArgumentInfoU5BU5D_t5070B0B1D45658E97396A584A619F5289E69A5D5* L_4 = (CSharpArgumentInfoU5BU5D_t5070B0B1D45658E97396A584A619F5289E69A5D5*)(CSharpArgumentInfoU5BU5D_t5070B0B1D45658E97396A584A619F5289E69A5D5*)SZArrayNew(CSharpArgumentInfoU5BU5D_t5070B0B1D45658E97396A584A619F5289E69A5D5_il2cpp_TypeInfo_var, (uint32_t)3);
		CSharpArgumentInfoU5BU5D_t5070B0B1D45658E97396A584A619F5289E69A5D5* L_5 = L_4;
		il2cpp_codegen_runtime_class_init_inline(CSharpArgumentInfo_tC298899BB33AB3FF7B82A90878CD3EDB3DBAD43A_il2cpp_TypeInfo_var);
		CSharpArgumentInfo_tC298899BB33AB3FF7B82A90878CD3EDB3DBAD43A* L_6;
		L_6 = CSharpArgumentInfo_Create_m4427E46681802570E3D2E20BCD164A8A6A9CCA5E(1, (String_t*)NULL, NULL);
		NullCheck(L_5);
		ArrayElementTypeCheck (L_5, L_6);
		(L_5)->SetAt(static_cast<il2cpp_array_size_t>(0), (CSharpArgumentInfo_tC298899BB33AB3FF7B82A90878CD3EDB3DBAD43A*)L_6);
		CSharpArgumentInfoU5BU5D_t5070B0B1D45658E97396A584A619F5289E69A5D5* L_7 = L_5;
		CSharpArgumentInfo_tC298899BB33AB3FF7B82A90878CD3EDB3DBAD43A* L_8;
		L_8 = CSharpArgumentInfo_Create_m4427E46681802570E3D2E20BCD164A8A6A9CCA5E(1, (String_t*)NULL, NULL);
		NullCheck(L_7);
		ArrayElementTypeCheck (L_7, L_8);
		(L_7)->SetAt(static_cast<il2cpp_array_size_t>(1), (CSharpArgumentInfo_tC298899BB33AB3FF7B82A90878CD3EDB3DBAD43A*)L_8);
		CSharpArgumentInfoU5BU5D_t5070B0B1D45658E97396A584A619F5289E69A5D5* L_9 = L_7;
		CSharpArgumentInfo_tC298899BB33AB3FF7B82A90878CD3EDB3DBAD43A* L_10;
		L_10 = CSharpArgumentInfo_Create_m4427E46681802570E3D2E20BCD164A8A6A9CCA5E(0, (String_t*)NULL, NULL);
		NullCheck(L_9);
		ArrayElementTypeCheck (L_9, L_10);
		(L_9)->SetAt(static_cast<il2cpp_array_size_t>(2), (CSharpArgumentInfo_tC298899BB33AB3FF7B82A90878CD3EDB3DBAD43A*)L_10);
		CallSiteBinder_tAFC922BA1DD2D1AEF6BC2742E0E375F936D5059F* L_11;
		L_11 = Binder_InvokeMember_m9AC152D3F20F5502C4408288B8F253114C23B85E(((int32_t)256), _stringLiteralD7A66F857F6E3FCCC482964755DB79017BF35DD2, (RuntimeObject*)NULL, L_3, (RuntimeObject*)L_9, NULL);
		CallSite_1_t0C8F4178F25F2B040A07CD24906589CEF4067422* L_12;
		L_12 = CallSite_1_Create_mF5B0646F08A95138D59D668220D0B8FE64BD953B(L_11, CallSite_1_Create_mF5B0646F08A95138D59D668220D0B8FE64BD953B_RuntimeMethod_var);
		((U3CU3Eo__3_t7979F3704D77D1F72F8DE249DF5187C3919D5FD3_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Eo__3_t7979F3704D77D1F72F8DE249DF5187C3919D5FD3_il2cpp_TypeInfo_var))->___U3CU3Ep__0_0 = L_12;
		Il2CppCodeGenWriteBarrier((void**)(&((U3CU3Eo__3_t7979F3704D77D1F72F8DE249DF5187C3919D5FD3_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Eo__3_t7979F3704D77D1F72F8DE249DF5187C3919D5FD3_il2cpp_TypeInfo_var))->___U3CU3Ep__0_0), (void*)L_12);
	}

IL_0056:
	{
		CallSite_1_t0C8F4178F25F2B040A07CD24906589CEF4067422* L_13 = ((U3CU3Eo__3_t7979F3704D77D1F72F8DE249DF5187C3919D5FD3_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Eo__3_t7979F3704D77D1F72F8DE249DF5187C3919D5FD3_il2cpp_TypeInfo_var))->___U3CU3Ep__0_0;
		NullCheck(L_13);
		Action_4_t524CB5C6C54D837D0FBEED90EC928B275DA1B4B1* L_14 = L_13->___Target_3;
		CallSite_1_t0C8F4178F25F2B040A07CD24906589CEF4067422* L_15 = ((U3CU3Eo__3_t7979F3704D77D1F72F8DE249DF5187C3919D5FD3_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Eo__3_t7979F3704D77D1F72F8DE249DF5187C3919D5FD3_il2cpp_TypeInfo_var))->___U3CU3Ep__0_0;
		DynamicArgEvent_t0E2BBF690EFB77F74D10D049589FDDC35F2E9321* L_16 = ((DynamicArgHandler_t409726FCDE13E0898C72A24C4FBEF235D4C67C06_StaticFields*)il2cpp_codegen_static_fields_for(DynamicArgHandler_t409726FCDE13E0898C72A24C4FBEF235D4C67C06_il2cpp_TypeInfo_var))->____events_0;
		String_t* L_17 = ___key0;
		RuntimeObject* L_18 = ___value1;
		NullCheck(L_14);
		Action_4_Invoke_mD326FBCBCCAFF278E95D2BF4D510D1140D855CA4_inline(L_14, L_15, L_16, L_17, L_18, NULL);
	}

IL_0071:
	{
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
// System.Void EventSystem.Runtime.Core.Handlers.Dynamic.DynamicArgHandler/<>c__DisplayClass1_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass1_0__ctor_m2F282C7A95F2BBDE7F38F6CF973CB430CA39AD02 (U3CU3Ec__DisplayClass1_0_t46819A260C814A1852949B0A65E5A24312882E72* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
// System.Void EventSystem.Runtime.Core.Handlers.Dynamic.DynamicArgHandler/<>c__DisplayClass1_0::<Add>b__0()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass1_0_U3CAddU3Eb__0_mAAC1AD544256C6ED8F6735A1FDE5E875D8A45615 (U3CU3Ec__DisplayClass1_0_t46819A260C814A1852949B0A65E5A24312882E72* __this, const RuntimeMethod* method) 
{
	{
		// return new DisposeContainer(() => Remove(key, action));
		String_t* L_0 = __this->___key_0;
		Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* L_1 = __this->___action_1;
		DynamicArgHandler_Remove_m41505BB233B2523C6FB6060D248E600561E053C4(L_0, L_1, NULL);
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
// EventSystem.Runtime.Core.Dispose.DisposeContainer EventSystem.Runtime.Core.Handlers.Dynamic.DynamicArgsHandler::Add(System.String,System.Action`1<System.Object[]>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR DisposeContainer_t1201D3858AAFCED17DD46A94CF7B1B4059A964F6* DynamicArgsHandler_Add_mE1DF7F12D2C6E4208BC74B98875B9AB6916011EE (String_t* ___key0, Action_1_t12A760F019B1942FA3868174D10CBA1CCC90A535* ___action1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DisposeContainer_t1201D3858AAFCED17DD46A94CF7B1B4059A964F6_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DynamicArgsEvent_t44D5B68696ABC8A0AB00CFF19C33A985C399A797_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DynamicArgsHandler_t328B58DACAB12F1A5FDA7E2EAF6CEF8593E04AEC_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass1_0_U3CAddU3Eb__0_m87272CFAA7283687488BB2E5E24A5DC623B65EB3_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass1_0_t691BE5DCD173FF625487029F87DEF63F04F7D077_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	U3CU3Ec__DisplayClass1_0_t691BE5DCD173FF625487029F87DEF63F04F7D077* V_0 = NULL;
	{
		U3CU3Ec__DisplayClass1_0_t691BE5DCD173FF625487029F87DEF63F04F7D077* L_0 = (U3CU3Ec__DisplayClass1_0_t691BE5DCD173FF625487029F87DEF63F04F7D077*)il2cpp_codegen_object_new(U3CU3Ec__DisplayClass1_0_t691BE5DCD173FF625487029F87DEF63F04F7D077_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		U3CU3Ec__DisplayClass1_0__ctor_m8E9E59B54DC6F1799B7E48C21B631BF8E0C5EC0A(L_0, NULL);
		V_0 = L_0;
		U3CU3Ec__DisplayClass1_0_t691BE5DCD173FF625487029F87DEF63F04F7D077* L_1 = V_0;
		String_t* L_2 = ___key0;
		NullCheck(L_1);
		L_1->___key_0 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&L_1->___key_0), (void*)L_2);
		U3CU3Ec__DisplayClass1_0_t691BE5DCD173FF625487029F87DEF63F04F7D077* L_3 = V_0;
		Action_1_t12A760F019B1942FA3868174D10CBA1CCC90A535* L_4 = ___action1;
		NullCheck(L_3);
		L_3->___action_1 = L_4;
		Il2CppCodeGenWriteBarrier((void**)(&L_3->___action_1), (void*)L_4);
		// _events ??= new DynamicArgsEvent();
		DynamicArgsEvent_t44D5B68696ABC8A0AB00CFF19C33A985C399A797* L_5 = ((DynamicArgsHandler_t328B58DACAB12F1A5FDA7E2EAF6CEF8593E04AEC_StaticFields*)il2cpp_codegen_static_fields_for(DynamicArgsHandler_t328B58DACAB12F1A5FDA7E2EAF6CEF8593E04AEC_il2cpp_TypeInfo_var))->____events_0;
		if (L_5)
		{
			goto IL_0025;
		}
	}
	{
		DynamicArgsEvent_t44D5B68696ABC8A0AB00CFF19C33A985C399A797* L_6 = (DynamicArgsEvent_t44D5B68696ABC8A0AB00CFF19C33A985C399A797*)il2cpp_codegen_object_new(DynamicArgsEvent_t44D5B68696ABC8A0AB00CFF19C33A985C399A797_il2cpp_TypeInfo_var);
		NullCheck(L_6);
		DynamicArgsEvent__ctor_m597816885570F9FE01A317296BA270B6E5FE8C5F(L_6, NULL);
		((DynamicArgsHandler_t328B58DACAB12F1A5FDA7E2EAF6CEF8593E04AEC_StaticFields*)il2cpp_codegen_static_fields_for(DynamicArgsHandler_t328B58DACAB12F1A5FDA7E2EAF6CEF8593E04AEC_il2cpp_TypeInfo_var))->____events_0 = L_6;
		Il2CppCodeGenWriteBarrier((void**)(&((DynamicArgsHandler_t328B58DACAB12F1A5FDA7E2EAF6CEF8593E04AEC_StaticFields*)il2cpp_codegen_static_fields_for(DynamicArgsHandler_t328B58DACAB12F1A5FDA7E2EAF6CEF8593E04AEC_il2cpp_TypeInfo_var))->____events_0), (void*)L_6);
	}

IL_0025:
	{
		// _events.Add(key, action);
		DynamicArgsEvent_t44D5B68696ABC8A0AB00CFF19C33A985C399A797* L_7 = ((DynamicArgsHandler_t328B58DACAB12F1A5FDA7E2EAF6CEF8593E04AEC_StaticFields*)il2cpp_codegen_static_fields_for(DynamicArgsHandler_t328B58DACAB12F1A5FDA7E2EAF6CEF8593E04AEC_il2cpp_TypeInfo_var))->____events_0;
		U3CU3Ec__DisplayClass1_0_t691BE5DCD173FF625487029F87DEF63F04F7D077* L_8 = V_0;
		NullCheck(L_8);
		String_t* L_9 = L_8->___key_0;
		U3CU3Ec__DisplayClass1_0_t691BE5DCD173FF625487029F87DEF63F04F7D077* L_10 = V_0;
		NullCheck(L_10);
		Action_1_t12A760F019B1942FA3868174D10CBA1CCC90A535* L_11 = L_10->___action_1;
		NullCheck(L_7);
		DynamicArgsEvent_Add_m49EABE3538937E13B56DE8484EE451202007BCE8(L_7, L_9, L_11, NULL);
		// return new DisposeContainer(() => Remove(key, action));
		U3CU3Ec__DisplayClass1_0_t691BE5DCD173FF625487029F87DEF63F04F7D077* L_12 = V_0;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_13 = (Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07*)il2cpp_codegen_object_new(Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07_il2cpp_TypeInfo_var);
		NullCheck(L_13);
		Action__ctor_mBDC7B0B4A3F583B64C2896F01BDED360772F67DC(L_13, L_12, (intptr_t)((void*)U3CU3Ec__DisplayClass1_0_U3CAddU3Eb__0_m87272CFAA7283687488BB2E5E24A5DC623B65EB3_RuntimeMethod_var), NULL);
		DisposeContainer_t1201D3858AAFCED17DD46A94CF7B1B4059A964F6* L_14 = (DisposeContainer_t1201D3858AAFCED17DD46A94CF7B1B4059A964F6*)il2cpp_codegen_object_new(DisposeContainer_t1201D3858AAFCED17DD46A94CF7B1B4059A964F6_il2cpp_TypeInfo_var);
		NullCheck(L_14);
		DisposeContainer__ctor_m88024B7DDB5A0CAD0FE1AA8A0B87E1CB628555E2(L_14, L_13, NULL);
		return L_14;
	}
}
// System.Void EventSystem.Runtime.Core.Handlers.Dynamic.DynamicArgsHandler::Remove(System.String,System.Action`1<System.Object[]>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DynamicArgsHandler_Remove_m675136873EAB4794943A8F4AE73D0D65D7DAD877 (String_t* ___key0, Action_1_t12A760F019B1942FA3868174D10CBA1CCC90A535* ___action1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DynamicArgsHandler_t328B58DACAB12F1A5FDA7E2EAF6CEF8593E04AEC_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	DynamicArgsEvent_t44D5B68696ABC8A0AB00CFF19C33A985C399A797* G_B2_0 = NULL;
	DynamicArgsEvent_t44D5B68696ABC8A0AB00CFF19C33A985C399A797* G_B1_0 = NULL;
	{
		// _events?.Remove(key, action);
		DynamicArgsEvent_t44D5B68696ABC8A0AB00CFF19C33A985C399A797* L_0 = ((DynamicArgsHandler_t328B58DACAB12F1A5FDA7E2EAF6CEF8593E04AEC_StaticFields*)il2cpp_codegen_static_fields_for(DynamicArgsHandler_t328B58DACAB12F1A5FDA7E2EAF6CEF8593E04AEC_il2cpp_TypeInfo_var))->____events_0;
		DynamicArgsEvent_t44D5B68696ABC8A0AB00CFF19C33A985C399A797* L_1 = L_0;
		G_B1_0 = L_1;
		if (L_1)
		{
			G_B2_0 = L_1;
			goto IL_000a;
		}
	}
	{
		return;
	}

IL_000a:
	{
		String_t* L_2 = ___key0;
		Action_1_t12A760F019B1942FA3868174D10CBA1CCC90A535* L_3 = ___action1;
		NullCheck(G_B2_0);
		DynamicArgsEvent_Remove_m2B095619BA9DD7841E89D224B97FF698CC647ED3(G_B2_0, L_2, L_3, NULL);
		// }
		return;
	}
}
// System.Void EventSystem.Runtime.Core.Handlers.Dynamic.DynamicArgsHandler::Invoke(System.String,System.Object[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DynamicArgsHandler_Invoke_mD74C674187FE81DE7B9C4CC81516C95F81FE428E (String_t* ___key0, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___value1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DynamicArgsHandler_t328B58DACAB12F1A5FDA7E2EAF6CEF8593E04AEC_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	DynamicArgsEvent_t44D5B68696ABC8A0AB00CFF19C33A985C399A797* G_B2_0 = NULL;
	DynamicArgsEvent_t44D5B68696ABC8A0AB00CFF19C33A985C399A797* G_B1_0 = NULL;
	{
		// _events?.Invoke(key, value);
		DynamicArgsEvent_t44D5B68696ABC8A0AB00CFF19C33A985C399A797* L_0 = ((DynamicArgsHandler_t328B58DACAB12F1A5FDA7E2EAF6CEF8593E04AEC_StaticFields*)il2cpp_codegen_static_fields_for(DynamicArgsHandler_t328B58DACAB12F1A5FDA7E2EAF6CEF8593E04AEC_il2cpp_TypeInfo_var))->____events_0;
		DynamicArgsEvent_t44D5B68696ABC8A0AB00CFF19C33A985C399A797* L_1 = L_0;
		G_B1_0 = L_1;
		if (L_1)
		{
			G_B2_0 = L_1;
			goto IL_000a;
		}
	}
	{
		return;
	}

IL_000a:
	{
		String_t* L_2 = ___key0;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_3 = ___value1;
		NullCheck(G_B2_0);
		DynamicArgsEvent_Invoke_m038EF52D6DC73A8D508E96C08740FB54061CB60A(G_B2_0, L_2, L_3, NULL);
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
// System.Void EventSystem.Runtime.Core.Handlers.Dynamic.DynamicArgsHandler/<>c__DisplayClass1_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass1_0__ctor_m8E9E59B54DC6F1799B7E48C21B631BF8E0C5EC0A (U3CU3Ec__DisplayClass1_0_t691BE5DCD173FF625487029F87DEF63F04F7D077* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
// System.Void EventSystem.Runtime.Core.Handlers.Dynamic.DynamicArgsHandler/<>c__DisplayClass1_0::<Add>b__0()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass1_0_U3CAddU3Eb__0_m87272CFAA7283687488BB2E5E24A5DC623B65EB3 (U3CU3Ec__DisplayClass1_0_t691BE5DCD173FF625487029F87DEF63F04F7D077* __this, const RuntimeMethod* method) 
{
	{
		// return new DisposeContainer(() => Remove(key, action));
		String_t* L_0 = __this->___key_0;
		Action_1_t12A760F019B1942FA3868174D10CBA1CCC90A535* L_1 = __this->___action_1;
		DynamicArgsHandler_Remove_m675136873EAB4794943A8F4AE73D0D65D7DAD877(L_0, L_1, NULL);
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
// System.Void EventSystem.Runtime.Core.Events.Static.ObjectArgsEvent::Add(System.String,System.Action`1<System.Object[]>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ObjectArgsEvent_Add_mCA32687B48FFC42EF5ACEF356A7B1BA2845360CE (ObjectArgsEvent_tBA5DA05238A2C5E0801083B9345A915757A965A9* __this, String_t* ___key0, Action_1_t12A760F019B1942FA3868174D10CBA1CCC90A535* ___action1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_Add_mC02BAAF29AE44983EE79F4D1D5C50C2AC0FAE3F3_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_ContainsKey_m13AC0CB75FBDCAA36C5C4D84D6DDB0036900E796_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_get_Item_mAE3A58C0EFCD66EE9DA9219B12B4701905CE21E8_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_mCDF65A3E3E2FA2DA10783D7F242594C65D95576D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_mBF1E71A430CCE6F5EF73FEF23B15B18CBB988E8D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_tB12CCD7FC908B47BBBD4FA3CBF0D9B1A35310012_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (_actions.ContainsKey(key) == false)
		Dictionary_2_t36E2587B3FD6C44141C9F14D532FDFAAD4E3E963* L_0 = __this->____actions_0;
		String_t* L_1 = ___key0;
		NullCheck(L_0);
		bool L_2;
		L_2 = Dictionary_2_ContainsKey_m13AC0CB75FBDCAA36C5C4D84D6DDB0036900E796(L_0, L_1, Dictionary_2_ContainsKey_m13AC0CB75FBDCAA36C5C4D84D6DDB0036900E796_RuntimeMethod_var);
		if (L_2)
		{
			goto IL_001f;
		}
	}
	{
		// _actions.Add(key, new List<Action<object[]>>());
		Dictionary_2_t36E2587B3FD6C44141C9F14D532FDFAAD4E3E963* L_3 = __this->____actions_0;
		String_t* L_4 = ___key0;
		List_1_tB12CCD7FC908B47BBBD4FA3CBF0D9B1A35310012* L_5 = (List_1_tB12CCD7FC908B47BBBD4FA3CBF0D9B1A35310012*)il2cpp_codegen_object_new(List_1_tB12CCD7FC908B47BBBD4FA3CBF0D9B1A35310012_il2cpp_TypeInfo_var);
		NullCheck(L_5);
		List_1__ctor_mBF1E71A430CCE6F5EF73FEF23B15B18CBB988E8D(L_5, List_1__ctor_mBF1E71A430CCE6F5EF73FEF23B15B18CBB988E8D_RuntimeMethod_var);
		NullCheck(L_3);
		Dictionary_2_Add_mC02BAAF29AE44983EE79F4D1D5C50C2AC0FAE3F3(L_3, L_4, L_5, Dictionary_2_Add_mC02BAAF29AE44983EE79F4D1D5C50C2AC0FAE3F3_RuntimeMethod_var);
	}

IL_001f:
	{
		// _actions[key].Add(action);
		Dictionary_2_t36E2587B3FD6C44141C9F14D532FDFAAD4E3E963* L_6 = __this->____actions_0;
		String_t* L_7 = ___key0;
		NullCheck(L_6);
		List_1_tB12CCD7FC908B47BBBD4FA3CBF0D9B1A35310012* L_8;
		L_8 = Dictionary_2_get_Item_mAE3A58C0EFCD66EE9DA9219B12B4701905CE21E8(L_6, L_7, Dictionary_2_get_Item_mAE3A58C0EFCD66EE9DA9219B12B4701905CE21E8_RuntimeMethod_var);
		Action_1_t12A760F019B1942FA3868174D10CBA1CCC90A535* L_9 = ___action1;
		NullCheck(L_8);
		List_1_Add_mCDF65A3E3E2FA2DA10783D7F242594C65D95576D_inline(L_8, L_9, List_1_Add_mCDF65A3E3E2FA2DA10783D7F242594C65D95576D_RuntimeMethod_var);
		// }
		return;
	}
}
// System.Void EventSystem.Runtime.Core.Events.Static.ObjectArgsEvent::Remove(System.String,System.Action`1<System.Object[]>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ObjectArgsEvent_Remove_m3AEF2B95BC058D808763A07F08C3A810A1D4EE85 (ObjectArgsEvent_tBA5DA05238A2C5E0801083B9345A915757A965A9* __this, String_t* ___key0, Action_1_t12A760F019B1942FA3868174D10CBA1CCC90A535* ___action1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_TryGetValue_m7290D30EC519F6C28DAB4BAC370ADDB043B306B5_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Remove_mE6512D4A1E979C7C76457505A4D56A017B01BA61_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	List_1_tB12CCD7FC908B47BBBD4FA3CBF0D9B1A35310012* V_0 = NULL;
	{
		// if (_actions.TryGetValue(key, out var val))
		Dictionary_2_t36E2587B3FD6C44141C9F14D532FDFAAD4E3E963* L_0 = __this->____actions_0;
		String_t* L_1 = ___key0;
		NullCheck(L_0);
		bool L_2;
		L_2 = Dictionary_2_TryGetValue_m7290D30EC519F6C28DAB4BAC370ADDB043B306B5(L_0, L_1, (&V_0), Dictionary_2_TryGetValue_m7290D30EC519F6C28DAB4BAC370ADDB043B306B5_RuntimeMethod_var);
		if (!L_2)
		{
			goto IL_0018;
		}
	}
	{
		// val.Remove(action);
		List_1_tB12CCD7FC908B47BBBD4FA3CBF0D9B1A35310012* L_3 = V_0;
		Action_1_t12A760F019B1942FA3868174D10CBA1CCC90A535* L_4 = ___action1;
		NullCheck(L_3);
		bool L_5;
		L_5 = List_1_Remove_mE6512D4A1E979C7C76457505A4D56A017B01BA61(L_3, L_4, List_1_Remove_mE6512D4A1E979C7C76457505A4D56A017B01BA61_RuntimeMethod_var);
	}

IL_0018:
	{
		// }
		return;
	}
}
// System.Void EventSystem.Runtime.Core.Events.Static.ObjectArgsEvent::Invoke(System.String,System.Object[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ObjectArgsEvent_Invoke_m9E35B2A46A61170A73BBDF1CAAE1057828AD3DE0 (ObjectArgsEvent_tBA5DA05238A2C5E0801083B9345A915757A965A9* __this, String_t* ___key0, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___parameters1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_TryGetValue_m7290D30EC519F6C28DAB4BAC370ADDB043B306B5_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_Dispose_m4821ECE7ACC42349915D2A5A500554AA9D940D59_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_MoveNext_m8908FDF150F1F4D1D4C14AB6EC4CE12C5896985C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_get_Current_mFF78CE53B64DC481C6D8CD5552A53341449DA2E3_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_GetEnumerator_m2FD2347FB8BBD09FB936D767FDC21455FB46E41A_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	List_1_tB12CCD7FC908B47BBBD4FA3CBF0D9B1A35310012* V_0 = NULL;
	Enumerator_tADE5E62B83E596FEB9A074D6C1AACC4A4E9CAB5F V_1;
	memset((&V_1), 0, sizeof(V_1));
	Action_1_t12A760F019B1942FA3868174D10CBA1CCC90A535* G_B6_0 = NULL;
	Action_1_t12A760F019B1942FA3868174D10CBA1CCC90A535* G_B5_0 = NULL;
	{
		// if (_actions.TryGetValue(key, out var actions) == false)
		Dictionary_2_t36E2587B3FD6C44141C9F14D532FDFAAD4E3E963* L_0 = __this->____actions_0;
		String_t* L_1 = ___key0;
		NullCheck(L_0);
		bool L_2;
		L_2 = Dictionary_2_TryGetValue_m7290D30EC519F6C28DAB4BAC370ADDB043B306B5(L_0, L_1, (&V_0), Dictionary_2_TryGetValue_m7290D30EC519F6C28DAB4BAC370ADDB043B306B5_RuntimeMethod_var);
		if (L_2)
		{
			goto IL_0011;
		}
	}
	{
		// return;
		return;
	}

IL_0011:
	{
		// foreach (var action in actions)
		List_1_tB12CCD7FC908B47BBBD4FA3CBF0D9B1A35310012* L_3 = V_0;
		NullCheck(L_3);
		Enumerator_tADE5E62B83E596FEB9A074D6C1AACC4A4E9CAB5F L_4;
		L_4 = List_1_GetEnumerator_m2FD2347FB8BBD09FB936D767FDC21455FB46E41A(L_3, List_1_GetEnumerator_m2FD2347FB8BBD09FB936D767FDC21455FB46E41A_RuntimeMethod_var);
		V_1 = L_4;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0038:
			{// begin finally (depth: 1)
				Enumerator_Dispose_m4821ECE7ACC42349915D2A5A500554AA9D940D59((&V_1), Enumerator_Dispose_m4821ECE7ACC42349915D2A5A500554AA9D940D59_RuntimeMethod_var);
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				goto IL_002d_1;
			}

IL_001a_1:
			{
				// foreach (var action in actions)
				Action_1_t12A760F019B1942FA3868174D10CBA1CCC90A535* L_5;
				L_5 = Enumerator_get_Current_mFF78CE53B64DC481C6D8CD5552A53341449DA2E3_inline((&V_1), Enumerator_get_Current_mFF78CE53B64DC481C6D8CD5552A53341449DA2E3_RuntimeMethod_var);
				// action?.Invoke(parameters);
				Action_1_t12A760F019B1942FA3868174D10CBA1CCC90A535* L_6 = L_5;
				G_B5_0 = L_6;
				if (L_6)
				{
					G_B6_0 = L_6;
					goto IL_0027_1;
				}
			}
			{
				goto IL_002d_1;
			}

IL_0027_1:
			{
				ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_7 = ___parameters1;
				NullCheck(G_B6_0);
				Action_1_Invoke_m05304E9227D6DDBDC60CE8468ACFECEDD786E2B5_inline(G_B6_0, L_7, NULL);
			}

IL_002d_1:
			{
				// foreach (var action in actions)
				bool L_8;
				L_8 = Enumerator_MoveNext_m8908FDF150F1F4D1D4C14AB6EC4CE12C5896985C((&V_1), Enumerator_MoveNext_m8908FDF150F1F4D1D4C14AB6EC4CE12C5896985C_RuntimeMethod_var);
				if (L_8)
				{
					goto IL_001a_1;
				}
			}
			{
				goto IL_0046;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0046:
	{
		// }
		return;
	}
}
// System.Void EventSystem.Runtime.Core.Events.Static.ObjectArgsEvent::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ObjectArgsEvent__ctor_m157B1566969665956702FEA90CE85F4B668DFD8C (ObjectArgsEvent_tBA5DA05238A2C5E0801083B9345A915757A965A9* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2__ctor_m827C3E5AF2F5F19326C9AE3DCD2DB29622C15FD0_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_t36E2587B3FD6C44141C9F14D532FDFAAD4E3E963_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// private readonly Dictionary<string, List<Action<object[]>>> _actions =
		//     new Dictionary<string, List<Action<object[]>>>();
		Dictionary_2_t36E2587B3FD6C44141C9F14D532FDFAAD4E3E963* L_0 = (Dictionary_2_t36E2587B3FD6C44141C9F14D532FDFAAD4E3E963*)il2cpp_codegen_object_new(Dictionary_2_t36E2587B3FD6C44141C9F14D532FDFAAD4E3E963_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		Dictionary_2__ctor_m827C3E5AF2F5F19326C9AE3DCD2DB29622C15FD0(L_0, Dictionary_2__ctor_m827C3E5AF2F5F19326C9AE3DCD2DB29622C15FD0_RuntimeMethod_var);
		__this->____actions_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____actions_0), (void*)L_0);
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
// System.Action`1<System.Object[]> EventSystem.Runtime.Core.Events.Static.ObjectEvent::get_Action()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Action_1_t12A760F019B1942FA3868174D10CBA1CCC90A535* ObjectEvent_get_Action_m11E93EC93DFA00F6726D0A62C99AF5C079F12ACE (ObjectEvent_t0DC53C5597C4D5A069A4DC526396F5501BA22E9A* __this, const RuntimeMethod* method) 
{
	{
		// public Action<object[]> Action { get; }
		Action_1_t12A760F019B1942FA3868174D10CBA1CCC90A535* L_0 = __this->___U3CActionU3Ek__BackingField_0;
		return L_0;
	}
}
// System.Void EventSystem.Runtime.Core.Events.Static.ObjectEvent::.ctor(System.Action`1<System.Object[]>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ObjectEvent__ctor_m8DEB38CA4CC579A0A94BA798A80FDE40D490CA1E (ObjectEvent_t0DC53C5597C4D5A069A4DC526396F5501BA22E9A* __this, Action_1_t12A760F019B1942FA3868174D10CBA1CCC90A535* ___action0, const RuntimeMethod* method) 
{
	{
		// public ObjectEvent(Action<object[]> action)
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		// Action = action;
		Action_1_t12A760F019B1942FA3868174D10CBA1CCC90A535* L_0 = ___action0;
		__this->___U3CActionU3Ek__BackingField_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CActionU3Ek__BackingField_0), (void*)L_0);
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
// System.Void EventSystem.Runtime.Core.Events.Static.SingleEvent::Add(System.String,System.Action)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SingleEvent_Add_mA3DC9105E518544054C16B951226DA62D17B4C3C (SingleEvent_t74A1A527F011A34A7FCD670FD1D93C354E79CE78* __this, String_t* ___key0, Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ___action1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_Add_m5D58F08D53B7B3B01A339D009E2B4ACF2377EDCF_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_ContainsKey_mE78C3713C2BA139602AB3309D6C1BE241E5EE17F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_get_Item_mB7CC23F2BCA262B527F687329A95685023C95AA7_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_m5B99D67CB378BFA8A1142343F9DB44D94322EAD3_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_mBFD6DF02E045EDF3C322E2112C922457016C8212_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_tDB72209F35D56F62A287633F9450978E90B90987_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (_events.ContainsKey(key) == false)
		Dictionary_2_t215F4C3C2E9B1B610937281F8E80C984A643D095* L_0 = __this->____events_0;
		String_t* L_1 = ___key0;
		NullCheck(L_0);
		bool L_2;
		L_2 = Dictionary_2_ContainsKey_mE78C3713C2BA139602AB3309D6C1BE241E5EE17F(L_0, L_1, Dictionary_2_ContainsKey_mE78C3713C2BA139602AB3309D6C1BE241E5EE17F_RuntimeMethod_var);
		if (L_2)
		{
			goto IL_001f;
		}
	}
	{
		// _events.Add(key, new List<Action>());
		Dictionary_2_t215F4C3C2E9B1B610937281F8E80C984A643D095* L_3 = __this->____events_0;
		String_t* L_4 = ___key0;
		List_1_tDB72209F35D56F62A287633F9450978E90B90987* L_5 = (List_1_tDB72209F35D56F62A287633F9450978E90B90987*)il2cpp_codegen_object_new(List_1_tDB72209F35D56F62A287633F9450978E90B90987_il2cpp_TypeInfo_var);
		NullCheck(L_5);
		List_1__ctor_mBFD6DF02E045EDF3C322E2112C922457016C8212(L_5, List_1__ctor_mBFD6DF02E045EDF3C322E2112C922457016C8212_RuntimeMethod_var);
		NullCheck(L_3);
		Dictionary_2_Add_m5D58F08D53B7B3B01A339D009E2B4ACF2377EDCF(L_3, L_4, L_5, Dictionary_2_Add_m5D58F08D53B7B3B01A339D009E2B4ACF2377EDCF_RuntimeMethod_var);
	}

IL_001f:
	{
		// _events[key].Add(action);
		Dictionary_2_t215F4C3C2E9B1B610937281F8E80C984A643D095* L_6 = __this->____events_0;
		String_t* L_7 = ___key0;
		NullCheck(L_6);
		List_1_tDB72209F35D56F62A287633F9450978E90B90987* L_8;
		L_8 = Dictionary_2_get_Item_mB7CC23F2BCA262B527F687329A95685023C95AA7(L_6, L_7, Dictionary_2_get_Item_mB7CC23F2BCA262B527F687329A95685023C95AA7_RuntimeMethod_var);
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_9 = ___action1;
		NullCheck(L_8);
		List_1_Add_m5B99D67CB378BFA8A1142343F9DB44D94322EAD3_inline(L_8, L_9, List_1_Add_m5B99D67CB378BFA8A1142343F9DB44D94322EAD3_RuntimeMethod_var);
		// }
		return;
	}
}
// System.Void EventSystem.Runtime.Core.Events.Static.SingleEvent::Remove(System.String,System.Action)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SingleEvent_Remove_mCCB09B84E9FBF942F5827C87EC3D592FECEFDD78 (SingleEvent_t74A1A527F011A34A7FCD670FD1D93C354E79CE78* __this, String_t* ___key0, Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ___action1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_TryGetValue_mA079F1B109F3A7DA0F7F4D517A3BC9C1F63C56C1_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Remove_m2F58C9F48DA11B2DF2D297626E97A25B1050D822_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	List_1_tDB72209F35D56F62A287633F9450978E90B90987* V_0 = NULL;
	{
		// if (_events.TryGetValue(key, out var list))
		Dictionary_2_t215F4C3C2E9B1B610937281F8E80C984A643D095* L_0 = __this->____events_0;
		String_t* L_1 = ___key0;
		NullCheck(L_0);
		bool L_2;
		L_2 = Dictionary_2_TryGetValue_mA079F1B109F3A7DA0F7F4D517A3BC9C1F63C56C1(L_0, L_1, (&V_0), Dictionary_2_TryGetValue_mA079F1B109F3A7DA0F7F4D517A3BC9C1F63C56C1_RuntimeMethod_var);
		if (!L_2)
		{
			goto IL_0018;
		}
	}
	{
		// list.Remove(action);
		List_1_tDB72209F35D56F62A287633F9450978E90B90987* L_3 = V_0;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_4 = ___action1;
		NullCheck(L_3);
		bool L_5;
		L_5 = List_1_Remove_m2F58C9F48DA11B2DF2D297626E97A25B1050D822(L_3, L_4, List_1_Remove_m2F58C9F48DA11B2DF2D297626E97A25B1050D822_RuntimeMethod_var);
	}

IL_0018:
	{
		// }
		return;
	}
}
// System.Void EventSystem.Runtime.Core.Events.Static.SingleEvent::Invoke(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SingleEvent_Invoke_m426F5D481BE51994A6DFEB741B0AA05D9B82F0D9 (SingleEvent_t74A1A527F011A34A7FCD670FD1D93C354E79CE78* __this, String_t* ___key0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_TryGetValue_mA079F1B109F3A7DA0F7F4D517A3BC9C1F63C56C1_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_Dispose_m7AF54658D389DA447BBE4C9F2D82278217B0972B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_MoveNext_m6096A4A06C95B18044A650D3E9AE2AA3D2ECA568_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_get_Current_m5CDD305956FDEFA478FF8F1F8D44992132542261_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_GetEnumerator_mB6C244AAEBAD19DF16131057B7A205817A226254_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	List_1_tDB72209F35D56F62A287633F9450978E90B90987* V_0 = NULL;
	Enumerator_t3787AC8C42D500C005E2D239B9F7650C1E44A58D V_1;
	memset((&V_1), 0, sizeof(V_1));
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* G_B6_0 = NULL;
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* G_B5_0 = NULL;
	{
		// if (_events.TryGetValue(key, out var lastInvokeList) == false)
		Dictionary_2_t215F4C3C2E9B1B610937281F8E80C984A643D095* L_0 = __this->____events_0;
		String_t* L_1 = ___key0;
		NullCheck(L_0);
		bool L_2;
		L_2 = Dictionary_2_TryGetValue_mA079F1B109F3A7DA0F7F4D517A3BC9C1F63C56C1(L_0, L_1, (&V_0), Dictionary_2_TryGetValue_mA079F1B109F3A7DA0F7F4D517A3BC9C1F63C56C1_RuntimeMethod_var);
		if (L_2)
		{
			goto IL_0011;
		}
	}
	{
		// return;
		return;
	}

IL_0011:
	{
		// foreach (var action in lastInvokeList)
		List_1_tDB72209F35D56F62A287633F9450978E90B90987* L_3 = V_0;
		NullCheck(L_3);
		Enumerator_t3787AC8C42D500C005E2D239B9F7650C1E44A58D L_4;
		L_4 = List_1_GetEnumerator_mB6C244AAEBAD19DF16131057B7A205817A226254(L_3, List_1_GetEnumerator_mB6C244AAEBAD19DF16131057B7A205817A226254_RuntimeMethod_var);
		V_1 = L_4;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0037:
			{// begin finally (depth: 1)
				Enumerator_Dispose_m7AF54658D389DA447BBE4C9F2D82278217B0972B((&V_1), Enumerator_Dispose_m7AF54658D389DA447BBE4C9F2D82278217B0972B_RuntimeMethod_var);
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				goto IL_002c_1;
			}

IL_001a_1:
			{
				// foreach (var action in lastInvokeList)
				Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_5;
				L_5 = Enumerator_get_Current_m5CDD305956FDEFA478FF8F1F8D44992132542261_inline((&V_1), Enumerator_get_Current_m5CDD305956FDEFA478FF8F1F8D44992132542261_RuntimeMethod_var);
				// action?.Invoke();
				Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_6 = L_5;
				G_B5_0 = L_6;
				if (L_6)
				{
					G_B6_0 = L_6;
					goto IL_0027_1;
				}
			}
			{
				goto IL_002c_1;
			}

IL_0027_1:
			{
				NullCheck(G_B6_0);
				Action_Invoke_m7126A54DACA72B845424072887B5F3A51FC3808E_inline(G_B6_0, NULL);
			}

IL_002c_1:
			{
				// foreach (var action in lastInvokeList)
				bool L_7;
				L_7 = Enumerator_MoveNext_m6096A4A06C95B18044A650D3E9AE2AA3D2ECA568((&V_1), Enumerator_MoveNext_m6096A4A06C95B18044A650D3E9AE2AA3D2ECA568_RuntimeMethod_var);
				if (L_7)
				{
					goto IL_001a_1;
				}
			}
			{
				goto IL_0045;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0045:
	{
		// }
		return;
	}
}
// System.Void EventSystem.Runtime.Core.Events.Static.SingleEvent::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SingleEvent__ctor_m917F55CFB90457061DF4902F9A429413C5FF1B3C (SingleEvent_t74A1A527F011A34A7FCD670FD1D93C354E79CE78* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2__ctor_m66BE736D9CF3800A91724B77F3530B0428DCEC69_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_t215F4C3C2E9B1B610937281F8E80C984A643D095_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// private readonly Dictionary<string, List<Action>> _events = new Dictionary<string, List<Action>>();
		Dictionary_2_t215F4C3C2E9B1B610937281F8E80C984A643D095* L_0 = (Dictionary_2_t215F4C3C2E9B1B610937281F8E80C984A643D095*)il2cpp_codegen_object_new(Dictionary_2_t215F4C3C2E9B1B610937281F8E80C984A643D095_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		Dictionary_2__ctor_m66BE736D9CF3800A91724B77F3530B0428DCEC69(L_0, Dictionary_2__ctor_m66BE736D9CF3800A91724B77F3530B0428DCEC69_RuntimeMethod_var);
		__this->____events_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____events_0), (void*)L_0);
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
// System.Void EventSystem.Runtime.Core.Events.Dynamic.DynamicArgEvent::Add(System.String,System.Action`1<System.Object>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DynamicArgEvent_Add_m4C095D343326CB86CDA82D029C3EBFABCA7D765F (DynamicArgEvent_t0E2BBF690EFB77F74D10D049589FDDC35F2E9321* __this, String_t* ___key0, Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* ___action1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_Add_m5430A7BDC749CA45B13E436D3198AA6E415E5600_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_ContainsKey_mB656AC2F9B2904897A92EB57472336010451CCBE_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_get_Item_mCC1E9938262CDB48DC8BBC73486007FB973EBD00_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_mA7C789A830108A82F925F9EB53FFC1F288C02908_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_m0A75F746E80B7130E71A3570E155D3F6FAFDA996_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_t8ED86F5A318743E9CE1F85A351EB862E45361BE0_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (_events.ContainsKey(key) == false)
		Dictionary_2_t1B4B07393C1CA6FC57C34061B19D3C60432BD009* L_0 = __this->____events_0;
		String_t* L_1 = ___key0;
		NullCheck(L_0);
		bool L_2;
		L_2 = Dictionary_2_ContainsKey_mB656AC2F9B2904897A92EB57472336010451CCBE(L_0, L_1, Dictionary_2_ContainsKey_mB656AC2F9B2904897A92EB57472336010451CCBE_RuntimeMethod_var);
		if (L_2)
		{
			goto IL_001f;
		}
	}
	{
		// _events.Add(key,new List<Action<dynamic>>());
		Dictionary_2_t1B4B07393C1CA6FC57C34061B19D3C60432BD009* L_3 = __this->____events_0;
		String_t* L_4 = ___key0;
		List_1_t8ED86F5A318743E9CE1F85A351EB862E45361BE0* L_5 = (List_1_t8ED86F5A318743E9CE1F85A351EB862E45361BE0*)il2cpp_codegen_object_new(List_1_t8ED86F5A318743E9CE1F85A351EB862E45361BE0_il2cpp_TypeInfo_var);
		NullCheck(L_5);
		List_1__ctor_m0A75F746E80B7130E71A3570E155D3F6FAFDA996(L_5, List_1__ctor_m0A75F746E80B7130E71A3570E155D3F6FAFDA996_RuntimeMethod_var);
		NullCheck(L_3);
		Dictionary_2_Add_m5430A7BDC749CA45B13E436D3198AA6E415E5600(L_3, L_4, L_5, Dictionary_2_Add_m5430A7BDC749CA45B13E436D3198AA6E415E5600_RuntimeMethod_var);
	}

IL_001f:
	{
		// _events[key].Add(action);
		Dictionary_2_t1B4B07393C1CA6FC57C34061B19D3C60432BD009* L_6 = __this->____events_0;
		String_t* L_7 = ___key0;
		NullCheck(L_6);
		List_1_t8ED86F5A318743E9CE1F85A351EB862E45361BE0* L_8;
		L_8 = Dictionary_2_get_Item_mCC1E9938262CDB48DC8BBC73486007FB973EBD00(L_6, L_7, Dictionary_2_get_Item_mCC1E9938262CDB48DC8BBC73486007FB973EBD00_RuntimeMethod_var);
		Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* L_9 = ___action1;
		NullCheck(L_8);
		List_1_Add_mA7C789A830108A82F925F9EB53FFC1F288C02908_inline(L_8, L_9, List_1_Add_mA7C789A830108A82F925F9EB53FFC1F288C02908_RuntimeMethod_var);
		// }
		return;
	}
}
// System.Void EventSystem.Runtime.Core.Events.Dynamic.DynamicArgEvent::Remove(System.String,System.Action`1<System.Object>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DynamicArgEvent_Remove_m2841AB7A8CDE690F71C5444719F707014D236504 (DynamicArgEvent_t0E2BBF690EFB77F74D10D049589FDDC35F2E9321* __this, String_t* ___key0, Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* ___action1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_TryGetValue_m20A1763DD4A8F7A495F166EA1F70F2EA6CBAC209_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Remove_m2B2B28A78C773EFB5B780A7C6C71928E6F3BFA82_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	List_1_t8ED86F5A318743E9CE1F85A351EB862E45361BE0* V_0 = NULL;
	{
		// if (_events.TryGetValue(key, out var list))
		Dictionary_2_t1B4B07393C1CA6FC57C34061B19D3C60432BD009* L_0 = __this->____events_0;
		String_t* L_1 = ___key0;
		NullCheck(L_0);
		bool L_2;
		L_2 = Dictionary_2_TryGetValue_m20A1763DD4A8F7A495F166EA1F70F2EA6CBAC209(L_0, L_1, (&V_0), Dictionary_2_TryGetValue_m20A1763DD4A8F7A495F166EA1F70F2EA6CBAC209_RuntimeMethod_var);
		if (!L_2)
		{
			goto IL_0018;
		}
	}
	{
		// list.Remove(action);
		List_1_t8ED86F5A318743E9CE1F85A351EB862E45361BE0* L_3 = V_0;
		Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* L_4 = ___action1;
		NullCheck(L_3);
		bool L_5;
		L_5 = List_1_Remove_m2B2B28A78C773EFB5B780A7C6C71928E6F3BFA82(L_3, L_4, List_1_Remove_m2B2B28A78C773EFB5B780A7C6C71928E6F3BFA82_RuntimeMethod_var);
	}

IL_0018:
	{
		// }
		return;
	}
}
// System.Void EventSystem.Runtime.Core.Events.Dynamic.DynamicArgEvent::Invoke(System.String,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DynamicArgEvent_Invoke_m3D724025D83D65F6B43791A9BE6FB44517BF3C61 (DynamicArgEvent_t0E2BBF690EFB77F74D10D049589FDDC35F2E9321* __this, String_t* ___key0, RuntimeObject* ___value1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CSharpArgumentInfoU5BU5D_t5070B0B1D45658E97396A584A619F5289E69A5D5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CSharpArgumentInfo_tC298899BB33AB3FF7B82A90878CD3EDB3DBAD43A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CallSite_1_Create_m95E290AF16A6307077D5DB3F3CCFFA7CD362977C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_TryGetValue_m20A1763DD4A8F7A495F166EA1F70F2EA6CBAC209_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DynamicArgEvent_t0E2BBF690EFB77F74D10D049589FDDC35F2E9321_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_Dispose_mAAA02395BBE0001C0717A334CA907BEF7368074C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_MoveNext_mFCFC05B06F0795F57A483B2E0353DDE0CA99BBF4_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_get_Current_m348B0AB5C479F2DDBA33D8840965F9EAEC4D3B9F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_GetEnumerator_mE37F4750417904F3A77CF6F6F4FB663327363DE7_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Eo__3_tCB1BE07F6BC790612009C853F37D920AF720F186_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD7A66F857F6E3FCCC482964755DB79017BF35DD2);
		s_Il2CppMethodInitialized = true;
	}
	List_1_t8ED86F5A318743E9CE1F85A351EB862E45361BE0* V_0 = NULL;
	Enumerator_t5D47FF3EEF2C14FA66538784050E787CA7943C2E V_1;
	memset((&V_1), 0, sizeof(V_1));
	Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* V_2 = NULL;
	{
		// if (_events.TryGetValue(key, out var lastInvokeList) == false)
		Dictionary_2_t1B4B07393C1CA6FC57C34061B19D3C60432BD009* L_0 = __this->____events_0;
		String_t* L_1 = ___key0;
		NullCheck(L_0);
		bool L_2;
		L_2 = Dictionary_2_TryGetValue_m20A1763DD4A8F7A495F166EA1F70F2EA6CBAC209(L_0, L_1, (&V_0), Dictionary_2_TryGetValue_m20A1763DD4A8F7A495F166EA1F70F2EA6CBAC209_RuntimeMethod_var);
		if (L_2)
		{
			goto IL_0011;
		}
	}
	{
		// return;
		return;
	}

IL_0011:
	{
		// foreach (var action in lastInvokeList)
		List_1_t8ED86F5A318743E9CE1F85A351EB862E45361BE0* L_3 = V_0;
		NullCheck(L_3);
		Enumerator_t5D47FF3EEF2C14FA66538784050E787CA7943C2E L_4;
		L_4 = List_1_GetEnumerator_mE37F4750417904F3A77CF6F6F4FB663327363DE7(L_3, List_1_GetEnumerator_mE37F4750417904F3A77CF6F6F4FB663327363DE7_RuntimeMethod_var);
		V_1 = L_4;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_008b:
			{// begin finally (depth: 1)
				Enumerator_Dispose_mAAA02395BBE0001C0717A334CA907BEF7368074C((&V_1), Enumerator_Dispose_mAAA02395BBE0001C0717A334CA907BEF7368074C_RuntimeMethod_var);
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				goto IL_0080_1;
			}

IL_001a_1:
			{
				// foreach (var action in lastInvokeList)
				Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* L_5;
				L_5 = Enumerator_get_Current_m348B0AB5C479F2DDBA33D8840965F9EAEC4D3B9F_inline((&V_1), Enumerator_get_Current_m348B0AB5C479F2DDBA33D8840965F9EAEC4D3B9F_RuntimeMethod_var);
				// action?.Invoke(value);
				V_2 = L_5;
				Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* L_6 = V_2;
				if (!L_6)
				{
					goto IL_0080_1;
				}
			}
			{
				CallSite_1_tB0F9C96400730A68BE3C595626330079F1217D3A* L_7 = ((U3CU3Eo__3_tCB1BE07F6BC790612009C853F37D920AF720F186_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Eo__3_tCB1BE07F6BC790612009C853F37D920AF720F186_il2cpp_TypeInfo_var))->___U3CU3Ep__0_0;
				if (L_7)
				{
					goto IL_006a_1;
				}
			}
			{
				RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_8 = { reinterpret_cast<intptr_t> (DynamicArgEvent_t0E2BBF690EFB77F74D10D049589FDDC35F2E9321_0_0_0_var) };
				il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
				Type_t* L_9;
				L_9 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_8, NULL);
				CSharpArgumentInfoU5BU5D_t5070B0B1D45658E97396A584A619F5289E69A5D5* L_10 = (CSharpArgumentInfoU5BU5D_t5070B0B1D45658E97396A584A619F5289E69A5D5*)(CSharpArgumentInfoU5BU5D_t5070B0B1D45658E97396A584A619F5289E69A5D5*)SZArrayNew(CSharpArgumentInfoU5BU5D_t5070B0B1D45658E97396A584A619F5289E69A5D5_il2cpp_TypeInfo_var, (uint32_t)2);
				CSharpArgumentInfoU5BU5D_t5070B0B1D45658E97396A584A619F5289E69A5D5* L_11 = L_10;
				il2cpp_codegen_runtime_class_init_inline(CSharpArgumentInfo_tC298899BB33AB3FF7B82A90878CD3EDB3DBAD43A_il2cpp_TypeInfo_var);
				CSharpArgumentInfo_tC298899BB33AB3FF7B82A90878CD3EDB3DBAD43A* L_12;
				L_12 = CSharpArgumentInfo_Create_m4427E46681802570E3D2E20BCD164A8A6A9CCA5E(1, (String_t*)NULL, NULL);
				NullCheck(L_11);
				ArrayElementTypeCheck (L_11, L_12);
				(L_11)->SetAt(static_cast<il2cpp_array_size_t>(0), (CSharpArgumentInfo_tC298899BB33AB3FF7B82A90878CD3EDB3DBAD43A*)L_12);
				CSharpArgumentInfoU5BU5D_t5070B0B1D45658E97396A584A619F5289E69A5D5* L_13 = L_11;
				CSharpArgumentInfo_tC298899BB33AB3FF7B82A90878CD3EDB3DBAD43A* L_14;
				L_14 = CSharpArgumentInfo_Create_m4427E46681802570E3D2E20BCD164A8A6A9CCA5E(0, (String_t*)NULL, NULL);
				NullCheck(L_13);
				ArrayElementTypeCheck (L_13, L_14);
				(L_13)->SetAt(static_cast<il2cpp_array_size_t>(1), (CSharpArgumentInfo_tC298899BB33AB3FF7B82A90878CD3EDB3DBAD43A*)L_14);
				CallSiteBinder_tAFC922BA1DD2D1AEF6BC2742E0E375F936D5059F* L_15;
				L_15 = Binder_InvokeMember_m9AC152D3F20F5502C4408288B8F253114C23B85E(((int32_t)256), _stringLiteralD7A66F857F6E3FCCC482964755DB79017BF35DD2, (RuntimeObject*)NULL, L_9, (RuntimeObject*)L_13, NULL);
				CallSite_1_tB0F9C96400730A68BE3C595626330079F1217D3A* L_16;
				L_16 = CallSite_1_Create_m95E290AF16A6307077D5DB3F3CCFFA7CD362977C(L_15, CallSite_1_Create_m95E290AF16A6307077D5DB3F3CCFFA7CD362977C_RuntimeMethod_var);
				((U3CU3Eo__3_tCB1BE07F6BC790612009C853F37D920AF720F186_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Eo__3_tCB1BE07F6BC790612009C853F37D920AF720F186_il2cpp_TypeInfo_var))->___U3CU3Ep__0_0 = L_16;
				Il2CppCodeGenWriteBarrier((void**)(&((U3CU3Eo__3_tCB1BE07F6BC790612009C853F37D920AF720F186_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Eo__3_tCB1BE07F6BC790612009C853F37D920AF720F186_il2cpp_TypeInfo_var))->___U3CU3Ep__0_0), (void*)L_16);
			}

IL_006a_1:
			{
				CallSite_1_tB0F9C96400730A68BE3C595626330079F1217D3A* L_17 = ((U3CU3Eo__3_tCB1BE07F6BC790612009C853F37D920AF720F186_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Eo__3_tCB1BE07F6BC790612009C853F37D920AF720F186_il2cpp_TypeInfo_var))->___U3CU3Ep__0_0;
				NullCheck(L_17);
				Action_3_t2B71C88FAB139B334F875C524BBFA20969B9CA61* L_18 = L_17->___Target_3;
				CallSite_1_tB0F9C96400730A68BE3C595626330079F1217D3A* L_19 = ((U3CU3Eo__3_tCB1BE07F6BC790612009C853F37D920AF720F186_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Eo__3_tCB1BE07F6BC790612009C853F37D920AF720F186_il2cpp_TypeInfo_var))->___U3CU3Ep__0_0;
				Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* L_20 = V_2;
				RuntimeObject* L_21 = ___value1;
				NullCheck(L_18);
				Action_3_Invoke_mC63F199B0C680A8216FB1F39A660E3F58CCE37A0_inline(L_18, L_19, L_20, L_21, NULL);
			}

IL_0080_1:
			{
				// foreach (var action in lastInvokeList)
				bool L_22;
				L_22 = Enumerator_MoveNext_mFCFC05B06F0795F57A483B2E0353DDE0CA99BBF4((&V_1), Enumerator_MoveNext_mFCFC05B06F0795F57A483B2E0353DDE0CA99BBF4_RuntimeMethod_var);
				if (L_22)
				{
					goto IL_001a_1;
				}
			}
			{
				goto IL_0099;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0099:
	{
		// }
		return;
	}
}
// System.Void EventSystem.Runtime.Core.Events.Dynamic.DynamicArgEvent::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DynamicArgEvent__ctor_m5E0360C350401F2E800EECA65449BD3867EDEB13 (DynamicArgEvent_t0E2BBF690EFB77F74D10D049589FDDC35F2E9321* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2__ctor_m3F022BDCBB85004A669A5F7D106781D0CCBA9ADA_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_t1B4B07393C1CA6FC57C34061B19D3C60432BD009_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// private readonly Dictionary<string, List<Action<dynamic>>> _events = new Dictionary<string, List<Action<dynamic>>>();
		Dictionary_2_t1B4B07393C1CA6FC57C34061B19D3C60432BD009* L_0 = (Dictionary_2_t1B4B07393C1CA6FC57C34061B19D3C60432BD009*)il2cpp_codegen_object_new(Dictionary_2_t1B4B07393C1CA6FC57C34061B19D3C60432BD009_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		Dictionary_2__ctor_m3F022BDCBB85004A669A5F7D106781D0CCBA9ADA(L_0, Dictionary_2__ctor_m3F022BDCBB85004A669A5F7D106781D0CCBA9ADA_RuntimeMethod_var);
		__this->____events_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____events_0), (void*)L_0);
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
// System.Void EventSystem.Runtime.Core.Events.Dynamic.DynamicArgsEvent::Add(System.String,System.Action`1<System.Object[]>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DynamicArgsEvent_Add_m49EABE3538937E13B56DE8484EE451202007BCE8 (DynamicArgsEvent_t44D5B68696ABC8A0AB00CFF19C33A985C399A797* __this, String_t* ___key0, Action_1_t12A760F019B1942FA3868174D10CBA1CCC90A535* ___action1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_Add_mC02BAAF29AE44983EE79F4D1D5C50C2AC0FAE3F3_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_ContainsKey_m13AC0CB75FBDCAA36C5C4D84D6DDB0036900E796_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_get_Item_mAE3A58C0EFCD66EE9DA9219B12B4701905CE21E8_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_mCDF65A3E3E2FA2DA10783D7F242594C65D95576D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_mBF1E71A430CCE6F5EF73FEF23B15B18CBB988E8D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_tB12CCD7FC908B47BBBD4FA3CBF0D9B1A35310012_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (_actions.ContainsKey(key) == false)
		Dictionary_2_t36E2587B3FD6C44141C9F14D532FDFAAD4E3E963* L_0 = __this->____actions_0;
		String_t* L_1 = ___key0;
		NullCheck(L_0);
		bool L_2;
		L_2 = Dictionary_2_ContainsKey_m13AC0CB75FBDCAA36C5C4D84D6DDB0036900E796(L_0, L_1, Dictionary_2_ContainsKey_m13AC0CB75FBDCAA36C5C4D84D6DDB0036900E796_RuntimeMethod_var);
		if (L_2)
		{
			goto IL_001f;
		}
	}
	{
		// _actions.Add(key, new List<Action<dynamic[]>>());
		Dictionary_2_t36E2587B3FD6C44141C9F14D532FDFAAD4E3E963* L_3 = __this->____actions_0;
		String_t* L_4 = ___key0;
		List_1_tB12CCD7FC908B47BBBD4FA3CBF0D9B1A35310012* L_5 = (List_1_tB12CCD7FC908B47BBBD4FA3CBF0D9B1A35310012*)il2cpp_codegen_object_new(List_1_tB12CCD7FC908B47BBBD4FA3CBF0D9B1A35310012_il2cpp_TypeInfo_var);
		NullCheck(L_5);
		List_1__ctor_mBF1E71A430CCE6F5EF73FEF23B15B18CBB988E8D(L_5, List_1__ctor_mBF1E71A430CCE6F5EF73FEF23B15B18CBB988E8D_RuntimeMethod_var);
		NullCheck(L_3);
		Dictionary_2_Add_mC02BAAF29AE44983EE79F4D1D5C50C2AC0FAE3F3(L_3, L_4, L_5, Dictionary_2_Add_mC02BAAF29AE44983EE79F4D1D5C50C2AC0FAE3F3_RuntimeMethod_var);
	}

IL_001f:
	{
		// _actions[key].Add(action);
		Dictionary_2_t36E2587B3FD6C44141C9F14D532FDFAAD4E3E963* L_6 = __this->____actions_0;
		String_t* L_7 = ___key0;
		NullCheck(L_6);
		List_1_tB12CCD7FC908B47BBBD4FA3CBF0D9B1A35310012* L_8;
		L_8 = Dictionary_2_get_Item_mAE3A58C0EFCD66EE9DA9219B12B4701905CE21E8(L_6, L_7, Dictionary_2_get_Item_mAE3A58C0EFCD66EE9DA9219B12B4701905CE21E8_RuntimeMethod_var);
		Action_1_t12A760F019B1942FA3868174D10CBA1CCC90A535* L_9 = ___action1;
		NullCheck(L_8);
		List_1_Add_mCDF65A3E3E2FA2DA10783D7F242594C65D95576D_inline(L_8, L_9, List_1_Add_mCDF65A3E3E2FA2DA10783D7F242594C65D95576D_RuntimeMethod_var);
		// }
		return;
	}
}
// System.Void EventSystem.Runtime.Core.Events.Dynamic.DynamicArgsEvent::Remove(System.String,System.Action`1<System.Object[]>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DynamicArgsEvent_Remove_m2B095619BA9DD7841E89D224B97FF698CC647ED3 (DynamicArgsEvent_t44D5B68696ABC8A0AB00CFF19C33A985C399A797* __this, String_t* ___key0, Action_1_t12A760F019B1942FA3868174D10CBA1CCC90A535* ___action1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_TryGetValue_m7290D30EC519F6C28DAB4BAC370ADDB043B306B5_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Remove_mE6512D4A1E979C7C76457505A4D56A017B01BA61_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	List_1_tB12CCD7FC908B47BBBD4FA3CBF0D9B1A35310012* V_0 = NULL;
	{
		// if (_actions.TryGetValue(key, out var val))
		Dictionary_2_t36E2587B3FD6C44141C9F14D532FDFAAD4E3E963* L_0 = __this->____actions_0;
		String_t* L_1 = ___key0;
		NullCheck(L_0);
		bool L_2;
		L_2 = Dictionary_2_TryGetValue_m7290D30EC519F6C28DAB4BAC370ADDB043B306B5(L_0, L_1, (&V_0), Dictionary_2_TryGetValue_m7290D30EC519F6C28DAB4BAC370ADDB043B306B5_RuntimeMethod_var);
		if (!L_2)
		{
			goto IL_0018;
		}
	}
	{
		// val.Remove(action);
		List_1_tB12CCD7FC908B47BBBD4FA3CBF0D9B1A35310012* L_3 = V_0;
		Action_1_t12A760F019B1942FA3868174D10CBA1CCC90A535* L_4 = ___action1;
		NullCheck(L_3);
		bool L_5;
		L_5 = List_1_Remove_mE6512D4A1E979C7C76457505A4D56A017B01BA61(L_3, L_4, List_1_Remove_mE6512D4A1E979C7C76457505A4D56A017B01BA61_RuntimeMethod_var);
	}

IL_0018:
	{
		// }
		return;
	}
}
// System.Void EventSystem.Runtime.Core.Events.Dynamic.DynamicArgsEvent::Invoke(System.String,System.Object[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DynamicArgsEvent_Invoke_m038EF52D6DC73A8D508E96C08740FB54061CB60A (DynamicArgsEvent_t44D5B68696ABC8A0AB00CFF19C33A985C399A797* __this, String_t* ___key0, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___parameters1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_TryGetValue_m7290D30EC519F6C28DAB4BAC370ADDB043B306B5_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_Dispose_m4821ECE7ACC42349915D2A5A500554AA9D940D59_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_MoveNext_m8908FDF150F1F4D1D4C14AB6EC4CE12C5896985C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_get_Current_mFF78CE53B64DC481C6D8CD5552A53341449DA2E3_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_GetEnumerator_m2FD2347FB8BBD09FB936D767FDC21455FB46E41A_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	List_1_tB12CCD7FC908B47BBBD4FA3CBF0D9B1A35310012* V_0 = NULL;
	Enumerator_tADE5E62B83E596FEB9A074D6C1AACC4A4E9CAB5F V_1;
	memset((&V_1), 0, sizeof(V_1));
	Action_1_t12A760F019B1942FA3868174D10CBA1CCC90A535* G_B6_0 = NULL;
	Action_1_t12A760F019B1942FA3868174D10CBA1CCC90A535* G_B5_0 = NULL;
	{
		// if (_actions.TryGetValue(key, out var actions) == false)
		Dictionary_2_t36E2587B3FD6C44141C9F14D532FDFAAD4E3E963* L_0 = __this->____actions_0;
		String_t* L_1 = ___key0;
		NullCheck(L_0);
		bool L_2;
		L_2 = Dictionary_2_TryGetValue_m7290D30EC519F6C28DAB4BAC370ADDB043B306B5(L_0, L_1, (&V_0), Dictionary_2_TryGetValue_m7290D30EC519F6C28DAB4BAC370ADDB043B306B5_RuntimeMethod_var);
		if (L_2)
		{
			goto IL_0011;
		}
	}
	{
		// return;
		return;
	}

IL_0011:
	{
		// foreach (var action in actions)
		List_1_tB12CCD7FC908B47BBBD4FA3CBF0D9B1A35310012* L_3 = V_0;
		NullCheck(L_3);
		Enumerator_tADE5E62B83E596FEB9A074D6C1AACC4A4E9CAB5F L_4;
		L_4 = List_1_GetEnumerator_m2FD2347FB8BBD09FB936D767FDC21455FB46E41A(L_3, List_1_GetEnumerator_m2FD2347FB8BBD09FB936D767FDC21455FB46E41A_RuntimeMethod_var);
		V_1 = L_4;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0038:
			{// begin finally (depth: 1)
				Enumerator_Dispose_m4821ECE7ACC42349915D2A5A500554AA9D940D59((&V_1), Enumerator_Dispose_m4821ECE7ACC42349915D2A5A500554AA9D940D59_RuntimeMethod_var);
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				goto IL_002d_1;
			}

IL_001a_1:
			{
				// foreach (var action in actions)
				Action_1_t12A760F019B1942FA3868174D10CBA1CCC90A535* L_5;
				L_5 = Enumerator_get_Current_mFF78CE53B64DC481C6D8CD5552A53341449DA2E3_inline((&V_1), Enumerator_get_Current_mFF78CE53B64DC481C6D8CD5552A53341449DA2E3_RuntimeMethod_var);
				// action?.Invoke(parameters);
				Action_1_t12A760F019B1942FA3868174D10CBA1CCC90A535* L_6 = L_5;
				G_B5_0 = L_6;
				if (L_6)
				{
					G_B6_0 = L_6;
					goto IL_0027_1;
				}
			}
			{
				goto IL_002d_1;
			}

IL_0027_1:
			{
				ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_7 = ___parameters1;
				NullCheck(G_B6_0);
				Action_1_Invoke_m05304E9227D6DDBDC60CE8468ACFECEDD786E2B5_inline(G_B6_0, L_7, NULL);
			}

IL_002d_1:
			{
				// foreach (var action in actions)
				bool L_8;
				L_8 = Enumerator_MoveNext_m8908FDF150F1F4D1D4C14AB6EC4CE12C5896985C((&V_1), Enumerator_MoveNext_m8908FDF150F1F4D1D4C14AB6EC4CE12C5896985C_RuntimeMethod_var);
				if (L_8)
				{
					goto IL_001a_1;
				}
			}
			{
				goto IL_0046;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0046:
	{
		// }
		return;
	}
}
// System.Void EventSystem.Runtime.Core.Events.Dynamic.DynamicArgsEvent::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DynamicArgsEvent__ctor_m597816885570F9FE01A317296BA270B6E5FE8C5F (DynamicArgsEvent_t44D5B68696ABC8A0AB00CFF19C33A985C399A797* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2__ctor_m827C3E5AF2F5F19326C9AE3DCD2DB29622C15FD0_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_t36E2587B3FD6C44141C9F14D532FDFAAD4E3E963_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// private readonly Dictionary<string, List<Action<dynamic[]>>> _actions = new Dictionary<string, List<Action<dynamic[]>>>();
		Dictionary_2_t36E2587B3FD6C44141C9F14D532FDFAAD4E3E963* L_0 = (Dictionary_2_t36E2587B3FD6C44141C9F14D532FDFAAD4E3E963*)il2cpp_codegen_object_new(Dictionary_2_t36E2587B3FD6C44141C9F14D532FDFAAD4E3E963_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		Dictionary_2__ctor_m827C3E5AF2F5F19326C9AE3DCD2DB29622C15FD0(L_0, Dictionary_2__ctor_m827C3E5AF2F5F19326C9AE3DCD2DB29622C15FD0_RuntimeMethod_var);
		__this->____actions_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____actions_0), (void*)L_0);
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
// System.Boolean EventSystem.Runtime.Core.Events.Base.CancelableEventBase::get_Canceled()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool CancelableEventBase_get_Canceled_m16FB0BBF803C333AAC7C5F3A647EA67AFC0A51CF (CancelableEventBase_t3E558D21980C25374A6F9C35C7A43815110A935A* __this, const RuntimeMethod* method) 
{
	{
		// public bool Canceled { get; set; } = false;
		bool L_0 = __this->___U3CCanceledU3Ek__BackingField_0;
		return L_0;
	}
}
// System.Void EventSystem.Runtime.Core.Events.Base.CancelableEventBase::set_Canceled(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CancelableEventBase_set_Canceled_m2E87281F0CF6E101399B465ACB6EC770507C4CC9 (CancelableEventBase_t3E558D21980C25374A6F9C35C7A43815110A935A* __this, bool ___value0, const RuntimeMethod* method) 
{
	{
		// public bool Canceled { get; set; } = false;
		bool L_0 = ___value0;
		__this->___U3CCanceledU3Ek__BackingField_0 = L_0;
		return;
	}
}
// System.Void EventSystem.Runtime.Core.Events.Base.CancelableEventBase::Cancel()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CancelableEventBase_Cancel_m7389C13626653265EDC95D85BB07FDA6E2C8D475 (CancelableEventBase_t3E558D21980C25374A6F9C35C7A43815110A935A* __this, const RuntimeMethod* method) 
{
	{
		// public void Cancel() => Canceled = true;
		CancelableEventBase_set_Canceled_m2E87281F0CF6E101399B465ACB6EC770507C4CC9_inline(__this, (bool)1, NULL);
		return;
	}
}
// System.Void EventSystem.Runtime.Core.Events.Base.CancelableEventBase::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CancelableEventBase__ctor_m7C608F918BB3BEF239FC78FE5F1917C9772E4D2C (CancelableEventBase_t3E558D21980C25374A6F9C35C7A43815110A935A* __this, const RuntimeMethod* method) 
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
// System.Void EventSystem.Runtime.Core.Dispose.DisposeContainer::.ctor(System.Action)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DisposeContainer__ctor_m88024B7DDB5A0CAD0FE1AA8A0B87E1CB628555E2 (DisposeContainer_t1201D3858AAFCED17DD46A94CF7B1B4059A964F6* __this, Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ___disposeAction0, const RuntimeMethod* method) 
{
	{
		// public DisposeContainer(Action disposeAction)
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		// _disposeAction = disposeAction;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_0 = ___disposeAction0;
		__this->____disposeAction_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____disposeAction_0), (void*)L_0);
		// }
		return;
	}
}
// System.Void EventSystem.Runtime.Core.Dispose.DisposeContainer::Invoke()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DisposeContainer_Invoke_m75D0B9981A8454DE7F0CFC494D3CD3A5C93FAABA (DisposeContainer_t1201D3858AAFCED17DD46A94CF7B1B4059A964F6* __this, const RuntimeMethod* method) 
{
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* G_B2_0 = NULL;
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* G_B1_0 = NULL;
	{
		// _disposeAction?.Invoke();
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_0 = __this->____disposeAction_0;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_1 = L_0;
		G_B1_0 = L_1;
		if (L_1)
		{
			G_B2_0 = L_1;
			goto IL_000c;
		}
	}
	{
		goto IL_0011;
	}

IL_000c:
	{
		NullCheck(G_B2_0);
		Action_Invoke_m7126A54DACA72B845424072887B5F3A51FC3808E_inline(G_B2_0, NULL);
	}

IL_0011:
	{
		// _disposeAction = null;
		__this->____disposeAction_0 = (Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____disposeAction_0), (void*)(Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07*)NULL);
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
// System.Void EventSystem.Runtime.Core.Dispose.EventDisposal::Add(EventSystem.Runtime.Core.Dispose.DisposeContainer)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EventDisposal_Add_mA3DCB50140332D5887CDD12D4A9126F883F70141 (EventDisposal_tA44FC96FC224E6398FC2E7AB40B8A11D6E617A41* __this, DisposeContainer_t1201D3858AAFCED17DD46A94CF7B1B4059A964F6* ___container0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_m7C0B3C8A41DCC24FBC819063AC78366909036E8F_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// _disposeActions.Add(container);
		List_1_tC388E105FE5D097387E8CE94B853FBD4EB87B6E0* L_0 = __this->____disposeActions_0;
		DisposeContainer_t1201D3858AAFCED17DD46A94CF7B1B4059A964F6* L_1 = ___container0;
		NullCheck(L_0);
		List_1_Add_m7C0B3C8A41DCC24FBC819063AC78366909036E8F_inline(L_0, L_1, List_1_Add_m7C0B3C8A41DCC24FBC819063AC78366909036E8F_RuntimeMethod_var);
		// }
		return;
	}
}
// System.Void EventSystem.Runtime.Core.Dispose.EventDisposal::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EventDisposal_Dispose_m1B28939321CB694F96636705EEAA399114A2D5CF (EventDisposal_tA44FC96FC224E6398FC2E7AB40B8A11D6E617A41* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Remove_m738498D00E6764A0840AAD35CEFBF7942DE3ADD8_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_m4BA9AE4A25328A2A8056D7BBFA95C9060EB5A2AD_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_m2E3722FDF333A2F6E2E62AF5694332D459A891B9_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	DisposeContainer_t1201D3858AAFCED17DD46A94CF7B1B4059A964F6* V_0 = NULL;
	{
		goto IL_0022;
	}

IL_0002:
	{
		// var container = _disposeActions[0];
		List_1_tC388E105FE5D097387E8CE94B853FBD4EB87B6E0* L_0 = __this->____disposeActions_0;
		NullCheck(L_0);
		DisposeContainer_t1201D3858AAFCED17DD46A94CF7B1B4059A964F6* L_1;
		L_1 = List_1_get_Item_m2E3722FDF333A2F6E2E62AF5694332D459A891B9(L_0, 0, List_1_get_Item_m2E3722FDF333A2F6E2E62AF5694332D459A891B9_RuntimeMethod_var);
		V_0 = L_1;
		// _disposeActions.Remove(container);
		List_1_tC388E105FE5D097387E8CE94B853FBD4EB87B6E0* L_2 = __this->____disposeActions_0;
		DisposeContainer_t1201D3858AAFCED17DD46A94CF7B1B4059A964F6* L_3 = V_0;
		NullCheck(L_2);
		bool L_4;
		L_4 = List_1_Remove_m738498D00E6764A0840AAD35CEFBF7942DE3ADD8(L_2, L_3, List_1_Remove_m738498D00E6764A0840AAD35CEFBF7942DE3ADD8_RuntimeMethod_var);
		// container.Invoke();
		DisposeContainer_t1201D3858AAFCED17DD46A94CF7B1B4059A964F6* L_5 = V_0;
		NullCheck(L_5);
		DisposeContainer_Invoke_m75D0B9981A8454DE7F0CFC494D3CD3A5C93FAABA(L_5, NULL);
	}

IL_0022:
	{
		// while (_disposeActions.Count > 0)
		List_1_tC388E105FE5D097387E8CE94B853FBD4EB87B6E0* L_6 = __this->____disposeActions_0;
		NullCheck(L_6);
		int32_t L_7;
		L_7 = List_1_get_Count_m4BA9AE4A25328A2A8056D7BBFA95C9060EB5A2AD_inline(L_6, List_1_get_Count_m4BA9AE4A25328A2A8056D7BBFA95C9060EB5A2AD_RuntimeMethod_var);
		if ((((int32_t)L_7) > ((int32_t)0)))
		{
			goto IL_0002;
		}
	}
	{
		// }
		return;
	}
}
// System.Void EventSystem.Runtime.Core.Dispose.EventDisposal::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EventDisposal__ctor_m60D6AA97DF3C90EBC058A0A1031EEDECBEC228F6 (EventDisposal_tA44FC96FC224E6398FC2E7AB40B8A11D6E617A41* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_mB7DADBE282893C53D8CA68E1BCBD48787184E2AA_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_tC388E105FE5D097387E8CE94B853FBD4EB87B6E0_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// private readonly List<DisposeContainer> _disposeActions = new List<DisposeContainer>();
		List_1_tC388E105FE5D097387E8CE94B853FBD4EB87B6E0* L_0 = (List_1_tC388E105FE5D097387E8CE94B853FBD4EB87B6E0*)il2cpp_codegen_object_new(List_1_tC388E105FE5D097387E8CE94B853FBD4EB87B6E0_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		List_1__ctor_mB7DADBE282893C53D8CA68E1BCBD48787184E2AA(L_0, List_1__ctor_mB7DADBE282893C53D8CA68E1BCBD48787184E2AA_RuntimeMethod_var);
		__this->____disposeActions_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____disposeActions_0), (void*)L_0);
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
// EventSystem.Runtime.Core.Dispose.DisposeContainer EventSystem.Runtime.Core.Dispose.EventDisposalExtension::AddTo(EventSystem.Runtime.Core.Dispose.DisposeContainer,EventSystem.Runtime.Core.Dispose.EventDisposal)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR DisposeContainer_t1201D3858AAFCED17DD46A94CF7B1B4059A964F6* EventDisposalExtension_AddTo_mC4EEFD0310290FF28B001C12EFDE580E863EFF9F (DisposeContainer_t1201D3858AAFCED17DD46A94CF7B1B4059A964F6* ___container0, EventDisposal_tA44FC96FC224E6398FC2E7AB40B8A11D6E617A41* ___disposal1, const RuntimeMethod* method) 
{
	{
		// disposal.Add(container);
		EventDisposal_tA44FC96FC224E6398FC2E7AB40B8A11D6E617A41* L_0 = ___disposal1;
		DisposeContainer_t1201D3858AAFCED17DD46A94CF7B1B4059A964F6* L_1 = ___container0;
		NullCheck(L_0);
		EventDisposal_Add_mA3DCB50140332D5887CDD12D4A9126F883F70141(L_0, L_1, NULL);
		// return container;
		DisposeContainer_t1201D3858AAFCED17DD46A94CF7B1B4059A964F6* L_2 = ___container0;
		return L_2;
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
// System.Void EventSystem.Runtime.Bus.EventBus::.ctor(EventSystem.Runtime.Bus.Configuration.IEventBusConfiguration)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EventBus__ctor_mDC912761AD18CACE59DE24C175BEA593F1341740 (EventBus_t38EEAA31225B2E5DA42372B418AF82481D6929D3* __this, RuntimeObject* ___configuration0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2__ctor_mA2F1CEA75ACE9B1D80BA8AACC8D0CDADD0C42953_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_t63D9CDC65755610F2ECF2FF21363753AAD3C1BB7_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EventBusConfiguration_tF8A2907FC2B49AEF9A4B90732802DE0924AF223D_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* G_B2_0 = NULL;
	EventBus_t38EEAA31225B2E5DA42372B418AF82481D6929D3* G_B2_1 = NULL;
	RuntimeObject* G_B1_0 = NULL;
	EventBus_t38EEAA31225B2E5DA42372B418AF82481D6929D3* G_B1_1 = NULL;
	{
		// public EventBus(IEventBusConfiguration configuration = null)
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		// _eventBusConfiguration = configuration ?? EventBusConfiguration.Default;
		RuntimeObject* L_0 = ___configuration0;
		RuntimeObject* L_1 = L_0;
		G_B1_0 = L_1;
		G_B1_1 = __this;
		if (L_1)
		{
			G_B2_0 = L_1;
			G_B2_1 = __this;
			goto IL_0011;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(EventBusConfiguration_tF8A2907FC2B49AEF9A4B90732802DE0924AF223D_il2cpp_TypeInfo_var);
		EventBusConfiguration_tF8A2907FC2B49AEF9A4B90732802DE0924AF223D* L_2 = ((EventBusConfiguration_tF8A2907FC2B49AEF9A4B90732802DE0924AF223D_StaticFields*)il2cpp_codegen_static_fields_for(EventBusConfiguration_tF8A2907FC2B49AEF9A4B90732802DE0924AF223D_il2cpp_TypeInfo_var))->___Default_1;
		G_B2_0 = ((RuntimeObject*)(L_2));
		G_B2_1 = G_B1_1;
	}

IL_0011:
	{
		NullCheck(G_B2_1);
		G_B2_1->____eventBusConfiguration_0 = G_B2_0;
		Il2CppCodeGenWriteBarrier((void**)(&G_B2_1->____eventBusConfiguration_0), (void*)G_B2_0);
		// _subscriptions = new Dictionary<Type, List<ISubscription>>();
		Dictionary_2_t63D9CDC65755610F2ECF2FF21363753AAD3C1BB7* L_3 = (Dictionary_2_t63D9CDC65755610F2ECF2FF21363753AAD3C1BB7*)il2cpp_codegen_object_new(Dictionary_2_t63D9CDC65755610F2ECF2FF21363753AAD3C1BB7_il2cpp_TypeInfo_var);
		NullCheck(L_3);
		Dictionary_2__ctor_mA2F1CEA75ACE9B1D80BA8AACC8D0CDADD0C42953(L_3, Dictionary_2__ctor_mA2F1CEA75ACE9B1D80BA8AACC8D0CDADD0C42953_RuntimeMethod_var);
		__this->____subscriptions_1 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____subscriptions_1), (void*)L_3);
		// }
		return;
	}
}
// System.Void EventSystem.Runtime.Bus.EventBus::Unsubscribe(EventSystem.Runtime.Bus.SubscriptionToken)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EventBus_Unsubscribe_mA32040FCE03283568AAF9D24BF9DA116B24B6C94 (EventBus_t38EEAA31225B2E5DA42372B418AF82481D6929D3* __this, SubscriptionToken_tD978A093982292F2797A7B52299C4178FDD69760* ___token0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_ContainsKey_m69C0A3B198028058CAAEE9E38AA444246A61EB24_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_get_Item_mB4270CC4458D07C58A69BC63B8A471E347565A2E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerable_FirstOrDefault_TisISubscription_tB9F6107F91F37F9840190342A8860A8BB7BD9997_m3C84B2ED2DDAC39665DA1884B4048C2DE55FCEBA_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EventBus_t38EEAA31225B2E5DA42372B418AF82481D6929D3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Func_2_t74A96543A4E6C66ED10B61FFB551D80AA076E046_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Remove_m28CB4A6AD8E8981E1CCB90CDD68A78DFC526844C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass5_0_U3CUnsubscribeU3Eb__0_m6B8038AB04A64AE08E2C05E22EF7563C5A06FEF3_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass5_0_t6D3925E50D36CC480F0E06364C38D5A624A5F8B0_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	U3CU3Ec__DisplayClass5_0_t6D3925E50D36CC480F0E06364C38D5A624A5F8B0* V_0 = NULL;
	RuntimeObject* V_1 = NULL;
	bool V_2 = false;
	RuntimeObject* V_3 = NULL;
	{
		U3CU3Ec__DisplayClass5_0_t6D3925E50D36CC480F0E06364C38D5A624A5F8B0* L_0 = (U3CU3Ec__DisplayClass5_0_t6D3925E50D36CC480F0E06364C38D5A624A5F8B0*)il2cpp_codegen_object_new(U3CU3Ec__DisplayClass5_0_t6D3925E50D36CC480F0E06364C38D5A624A5F8B0_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		U3CU3Ec__DisplayClass5_0__ctor_m96B989506D76F097DCE4B42A35F7B93C09375E3F(L_0, NULL);
		V_0 = L_0;
		U3CU3Ec__DisplayClass5_0_t6D3925E50D36CC480F0E06364C38D5A624A5F8B0* L_1 = V_0;
		SubscriptionToken_tD978A093982292F2797A7B52299C4178FDD69760* L_2 = ___token0;
		NullCheck(L_1);
		L_1->___token_0 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&L_1->___token_0), (void*)L_2);
		// if (token == null)
		U3CU3Ec__DisplayClass5_0_t6D3925E50D36CC480F0E06364C38D5A624A5F8B0* L_3 = V_0;
		NullCheck(L_3);
		SubscriptionToken_tD978A093982292F2797A7B52299C4178FDD69760* L_4 = L_3->___token_0;
		if (L_4)
		{
			goto IL_0020;
		}
	}
	{
		// throw new ArgumentNullException(nameof(token));
		ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_5 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var)));
		NullCheck(L_5);
		ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B(L_5, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral3988471A2015D5CC894E22E1A900B66E97CD4306)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_5, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&EventBus_Unsubscribe_mA32040FCE03283568AAF9D24BF9DA116B24B6C94_RuntimeMethod_var)));
	}

IL_0020:
	{
		// lock (SubscriptionsLock)
		il2cpp_codegen_runtime_class_init_inline(EventBus_t38EEAA31225B2E5DA42372B418AF82481D6929D3_il2cpp_TypeInfo_var);
		RuntimeObject* L_6 = ((EventBus_t38EEAA31225B2E5DA42372B418AF82481D6929D3_StaticFields*)il2cpp_codegen_static_fields_for(EventBus_t38EEAA31225B2E5DA42372B418AF82481D6929D3_il2cpp_TypeInfo_var))->___SubscriptionsLock_2;
		V_1 = L_6;
		V_2 = (bool)0;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0094:
			{// begin finally (depth: 1)
				{
					bool L_7 = V_2;
					if (!L_7)
					{
						goto IL_009d;
					}
				}
				{
					RuntimeObject* L_8 = V_1;
					Monitor_Exit_m05B2CF037E2214B3208198C282490A2A475653FA(L_8, NULL);
				}

IL_009d:
				{
					return;
				}
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				RuntimeObject* L_9 = V_1;
				Monitor_Enter_m3CDB589DA1300B513D55FDCFB52B63E879794149(L_9, (&V_2), NULL);
				// if (_subscriptions.ContainsKey(token.EventItemType) == false)
				Dictionary_2_t63D9CDC65755610F2ECF2FF21363753AAD3C1BB7* L_10 = __this->____subscriptions_1;
				U3CU3Ec__DisplayClass5_0_t6D3925E50D36CC480F0E06364C38D5A624A5F8B0* L_11 = V_0;
				NullCheck(L_11);
				SubscriptionToken_tD978A093982292F2797A7B52299C4178FDD69760* L_12 = L_11->___token_0;
				NullCheck(L_12);
				Type_t* L_13;
				L_13 = SubscriptionToken_get_EventItemType_mE7AEBC74D88E9B5A8A157482FD96EE91263BDF84_inline(L_12, NULL);
				NullCheck(L_10);
				bool L_14;
				L_14 = Dictionary_2_ContainsKey_m69C0A3B198028058CAAEE9E38AA444246A61EB24(L_10, L_13, Dictionary_2_ContainsKey_m69C0A3B198028058CAAEE9E38AA444246A61EB24_RuntimeMethod_var);
				if (L_14)
				{
					goto IL_004a_1;
				}
			}
			{
				// return;
				goto IL_009e;
			}

IL_004a_1:
			{
				// var allSubscriptions = _subscriptions[token.EventItemType];
				Dictionary_2_t63D9CDC65755610F2ECF2FF21363753AAD3C1BB7* L_15 = __this->____subscriptions_1;
				U3CU3Ec__DisplayClass5_0_t6D3925E50D36CC480F0E06364C38D5A624A5F8B0* L_16 = V_0;
				NullCheck(L_16);
				SubscriptionToken_tD978A093982292F2797A7B52299C4178FDD69760* L_17 = L_16->___token_0;
				NullCheck(L_17);
				Type_t* L_18;
				L_18 = SubscriptionToken_get_EventItemType_mE7AEBC74D88E9B5A8A157482FD96EE91263BDF84_inline(L_17, NULL);
				NullCheck(L_15);
				List_1_tC2324A4441524F04698D5BC263697C1B8B51CDC4* L_19;
				L_19 = Dictionary_2_get_Item_mB4270CC4458D07C58A69BC63B8A471E347565A2E(L_15, L_18, Dictionary_2_get_Item_mB4270CC4458D07C58A69BC63B8A471E347565A2E_RuntimeMethod_var);
				// var subscriptionToRemove =
				//     allSubscriptions.FirstOrDefault(x => x.SubscriptionToken.Token == token.Token);
				U3CU3Ec__DisplayClass5_0_t6D3925E50D36CC480F0E06364C38D5A624A5F8B0* L_20 = V_0;
				Func_2_t74A96543A4E6C66ED10B61FFB551D80AA076E046* L_21 = (Func_2_t74A96543A4E6C66ED10B61FFB551D80AA076E046*)il2cpp_codegen_object_new(Func_2_t74A96543A4E6C66ED10B61FFB551D80AA076E046_il2cpp_TypeInfo_var);
				NullCheck(L_21);
				Func_2__ctor_m5999860582EACFE007E9C1A4A1877CB6A7732D00(L_21, L_20, (intptr_t)((void*)U3CU3Ec__DisplayClass5_0_U3CUnsubscribeU3Eb__0_m6B8038AB04A64AE08E2C05E22EF7563C5A06FEF3_RuntimeMethod_var), NULL);
				RuntimeObject* L_22;
				L_22 = Enumerable_FirstOrDefault_TisISubscription_tB9F6107F91F37F9840190342A8860A8BB7BD9997_m3C84B2ED2DDAC39665DA1884B4048C2DE55FCEBA(L_19, L_21, Enumerable_FirstOrDefault_TisISubscription_tB9F6107F91F37F9840190342A8860A8BB7BD9997_m3C84B2ED2DDAC39665DA1884B4048C2DE55FCEBA_RuntimeMethod_var);
				V_3 = L_22;
				// if (subscriptionToRemove != null)
				RuntimeObject* L_23 = V_3;
				if (!L_23)
				{
					goto IL_0092_1;
				}
			}
			{
				// _subscriptions[token.EventItemType].Remove(subscriptionToRemove);
				Dictionary_2_t63D9CDC65755610F2ECF2FF21363753AAD3C1BB7* L_24 = __this->____subscriptions_1;
				U3CU3Ec__DisplayClass5_0_t6D3925E50D36CC480F0E06364C38D5A624A5F8B0* L_25 = V_0;
				NullCheck(L_25);
				SubscriptionToken_tD978A093982292F2797A7B52299C4178FDD69760* L_26 = L_25->___token_0;
				NullCheck(L_26);
				Type_t* L_27;
				L_27 = SubscriptionToken_get_EventItemType_mE7AEBC74D88E9B5A8A157482FD96EE91263BDF84_inline(L_26, NULL);
				NullCheck(L_24);
				List_1_tC2324A4441524F04698D5BC263697C1B8B51CDC4* L_28;
				L_28 = Dictionary_2_get_Item_mB4270CC4458D07C58A69BC63B8A471E347565A2E(L_24, L_27, Dictionary_2_get_Item_mB4270CC4458D07C58A69BC63B8A471E347565A2E_RuntimeMethod_var);
				RuntimeObject* L_29 = V_3;
				NullCheck(L_28);
				bool L_30;
				L_30 = List_1_Remove_m28CB4A6AD8E8981E1CCB90CDD68A78DFC526844C(L_28, L_29, List_1_Remove_m28CB4A6AD8E8981E1CCB90CDD68A78DFC526844C_RuntimeMethod_var);
			}

IL_0092_1:
			{
				// }
				goto IL_009e;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_009e:
	{
		// }
		return;
	}
}
// System.Void EventSystem.Runtime.Bus.EventBus::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EventBus__cctor_mC6BFFF1D37DBCD04C9BEB807A8D9A6F1A41ED4D8 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EventBus_t38EEAA31225B2E5DA42372B418AF82481D6929D3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RuntimeObject_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// private static readonly object SubscriptionsLock = new object();
		RuntimeObject* L_0 = (RuntimeObject*)il2cpp_codegen_object_new(RuntimeObject_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(L_0, NULL);
		((EventBus_t38EEAA31225B2E5DA42372B418AF82481D6929D3_StaticFields*)il2cpp_codegen_static_fields_for(EventBus_t38EEAA31225B2E5DA42372B418AF82481D6929D3_il2cpp_TypeInfo_var))->___SubscriptionsLock_2 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&((EventBus_t38EEAA31225B2E5DA42372B418AF82481D6929D3_StaticFields*)il2cpp_codegen_static_fields_for(EventBus_t38EEAA31225B2E5DA42372B418AF82481D6929D3_il2cpp_TypeInfo_var))->___SubscriptionsLock_2), (void*)L_0);
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
// System.Void EventSystem.Runtime.Bus.EventBus/<>c__DisplayClass5_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass5_0__ctor_m96B989506D76F097DCE4B42A35F7B93C09375E3F (U3CU3Ec__DisplayClass5_0_t6D3925E50D36CC480F0E06364C38D5A624A5F8B0* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
// System.Boolean EventSystem.Runtime.Bus.EventBus/<>c__DisplayClass5_0::<Unsubscribe>b__0(EventSystem.Runtime.Bus.Interfaces.ISubscription)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CU3Ec__DisplayClass5_0_U3CUnsubscribeU3Eb__0_m6B8038AB04A64AE08E2C05E22EF7563C5A06FEF3 (U3CU3Ec__DisplayClass5_0_t6D3925E50D36CC480F0E06364C38D5A624A5F8B0* __this, RuntimeObject* ___x0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ISubscription_tB9F6107F91F37F9840190342A8860A8BB7BD9997_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// allSubscriptions.FirstOrDefault(x => x.SubscriptionToken.Token == token.Token);
		RuntimeObject* L_0 = ___x0;
		NullCheck(L_0);
		SubscriptionToken_tD978A093982292F2797A7B52299C4178FDD69760* L_1;
		L_1 = InterfaceFuncInvoker0< SubscriptionToken_tD978A093982292F2797A7B52299C4178FDD69760* >::Invoke(0 /* EventSystem.Runtime.Bus.SubscriptionToken EventSystem.Runtime.Bus.Interfaces.ISubscription::get_SubscriptionToken() */, ISubscription_tB9F6107F91F37F9840190342A8860A8BB7BD9997_il2cpp_TypeInfo_var, L_0);
		NullCheck(L_1);
		Guid_t L_2;
		L_2 = SubscriptionToken_get_Token_mB6D67FC5FF9E31F0E5BD1B51289729D8FBD790B7_inline(L_1, NULL);
		SubscriptionToken_tD978A093982292F2797A7B52299C4178FDD69760* L_3 = __this->___token_0;
		NullCheck(L_3);
		Guid_t L_4;
		L_4 = SubscriptionToken_get_Token_mB6D67FC5FF9E31F0E5BD1B51289729D8FBD790B7_inline(L_3, NULL);
		bool L_5;
		L_5 = Guid_op_Equality_mAD728A1A4FB970715E84B7D346E094FE5EF2A240(L_2, L_4, NULL);
		return L_5;
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
// System.String EventSystem.Runtime.Bus.CustomEvent::get_Key()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* CustomEvent_get_Key_m9747CEB0219AE2C8BF2F8F2863BB83B018CA0EE6 (CustomEvent_tBEDC67626FF1C53DC5C0C06B9F6A6BEC954EC7B5* __this, const RuntimeMethod* method) 
{
	{
		// public string Key { get; }
		String_t* L_0 = __this->___U3CKeyU3Ek__BackingField_0;
		return L_0;
	}
}
// System.Void EventSystem.Runtime.Bus.CustomEvent::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CustomEvent__ctor_m425521AD28384DC11147680E0D8B33AC0DF275C0 (CustomEvent_tBEDC67626FF1C53DC5C0C06B9F6A6BEC954EC7B5* __this, String_t* ___key0, const RuntimeMethod* method) 
{
	{
		// public CustomEvent(string key)
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		// Key = key;
		String_t* L_0 = ___key0;
		__this->___U3CKeyU3Ek__BackingField_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CKeyU3Ek__BackingField_0), (void*)L_0);
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
// EventSystem.Runtime.Bus.SubscriptionResult EventSystem.Runtime.Bus.EventBusExtensions::Subscribe(EventSystem.Runtime.Bus.EventBus,System.String,System.Action)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR SubscriptionResult_t6AF632194890A72CCD10EC3528AD6559D825B3A4* EventBusExtensions_Subscribe_mA36A46668B242AA0041A681FF3C8A931035A9684 (EventBus_t38EEAA31225B2E5DA42372B418AF82481D6929D3* ___bus0, String_t* ___key1, Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ___action2, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1_tF305089B51289C676688BE915607D76DCAD5528B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EventBus_Subscribe_TisCustomEvent_tBEDC67626FF1C53DC5C0C06B9F6A6BEC954EC7B5_m4A14BCD42BA8006D9438DB492961755E0ABFDF5B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass0_0_U3CSubscribeU3Eb__0_mCBD8552075D608AF3844BAA6121485E0C1E6B73C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass0_0_t6BB545FCC9F8924FD745AA27E5AD9702FBDFDAFD_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	U3CU3Ec__DisplayClass0_0_t6BB545FCC9F8924FD745AA27E5AD9702FBDFDAFD* V_0 = NULL;
	{
		U3CU3Ec__DisplayClass0_0_t6BB545FCC9F8924FD745AA27E5AD9702FBDFDAFD* L_0 = (U3CU3Ec__DisplayClass0_0_t6BB545FCC9F8924FD745AA27E5AD9702FBDFDAFD*)il2cpp_codegen_object_new(U3CU3Ec__DisplayClass0_0_t6BB545FCC9F8924FD745AA27E5AD9702FBDFDAFD_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		U3CU3Ec__DisplayClass0_0__ctor_mD1B7B80A7AB785172DCB56E343372288CA2181D1(L_0, NULL);
		V_0 = L_0;
		U3CU3Ec__DisplayClass0_0_t6BB545FCC9F8924FD745AA27E5AD9702FBDFDAFD* L_1 = V_0;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_2 = ___action2;
		NullCheck(L_1);
		L_1->___action_0 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&L_1->___action_0), (void*)L_2);
		// return bus.Subscribe<CustomEvent>(e => action?.Invoke());
		EventBus_t38EEAA31225B2E5DA42372B418AF82481D6929D3* L_3 = ___bus0;
		U3CU3Ec__DisplayClass0_0_t6BB545FCC9F8924FD745AA27E5AD9702FBDFDAFD* L_4 = V_0;
		Action_1_tF305089B51289C676688BE915607D76DCAD5528B* L_5 = (Action_1_tF305089B51289C676688BE915607D76DCAD5528B*)il2cpp_codegen_object_new(Action_1_tF305089B51289C676688BE915607D76DCAD5528B_il2cpp_TypeInfo_var);
		NullCheck(L_5);
		Action_1__ctor_mC83FD2F7902EE001C5690B66D24E3A7E884D3D6B(L_5, L_4, (intptr_t)((void*)U3CU3Ec__DisplayClass0_0_U3CSubscribeU3Eb__0_mCBD8552075D608AF3844BAA6121485E0C1E6B73C_RuntimeMethod_var), NULL);
		NullCheck(L_3);
		SubscriptionResult_t6AF632194890A72CCD10EC3528AD6559D825B3A4* L_6;
		L_6 = EventBus_Subscribe_TisCustomEvent_tBEDC67626FF1C53DC5C0C06B9F6A6BEC954EC7B5_m4A14BCD42BA8006D9438DB492961755E0ABFDF5B(L_3, L_5, EventBus_Subscribe_TisCustomEvent_tBEDC67626FF1C53DC5C0C06B9F6A6BEC954EC7B5_m4A14BCD42BA8006D9438DB492961755E0ABFDF5B_RuntimeMethod_var);
		return L_6;
	}
}
// EventSystem.Runtime.Bus.SubscriptionResult EventSystem.Runtime.Bus.EventBusExtensions::Subscribe(EventSystem.Runtime.Bus.EventBus,System.String,System.Action`1<EventSystem.Runtime.Core.Events.Static.ObjectEvent>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR SubscriptionResult_t6AF632194890A72CCD10EC3528AD6559D825B3A4* EventBusExtensions_Subscribe_m7AFDC14371B659C6808BF909DB02827BB1663223 (EventBus_t38EEAA31225B2E5DA42372B418AF82481D6929D3* ___bus0, String_t* ___key1, Action_1_t0BC6F6703C2891500454846778FB9FAF4895D38D* ___action2, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EventBus_Subscribe_TisObjectEvent_t0DC53C5597C4D5A069A4DC526396F5501BA22E9A_mB86CD9ACD395F2CBA268DBCDC9AA69D19A218180_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return bus.Subscribe(action);
		EventBus_t38EEAA31225B2E5DA42372B418AF82481D6929D3* L_0 = ___bus0;
		Action_1_t0BC6F6703C2891500454846778FB9FAF4895D38D* L_1 = ___action2;
		NullCheck(L_0);
		SubscriptionResult_t6AF632194890A72CCD10EC3528AD6559D825B3A4* L_2;
		L_2 = EventBus_Subscribe_TisObjectEvent_t0DC53C5597C4D5A069A4DC526396F5501BA22E9A_mB86CD9ACD395F2CBA268DBCDC9AA69D19A218180(L_0, L_1, EventBus_Subscribe_TisObjectEvent_t0DC53C5597C4D5A069A4DC526396F5501BA22E9A_mB86CD9ACD395F2CBA268DBCDC9AA69D19A218180_RuntimeMethod_var);
		return L_2;
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
// System.Void EventSystem.Runtime.Bus.EventBusExtensions/<>c__DisplayClass0_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass0_0__ctor_mD1B7B80A7AB785172DCB56E343372288CA2181D1 (U3CU3Ec__DisplayClass0_0_t6BB545FCC9F8924FD745AA27E5AD9702FBDFDAFD* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
// System.Void EventSystem.Runtime.Bus.EventBusExtensions/<>c__DisplayClass0_0::<Subscribe>b__0(EventSystem.Runtime.Bus.CustomEvent)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass0_0_U3CSubscribeU3Eb__0_mCBD8552075D608AF3844BAA6121485E0C1E6B73C (U3CU3Ec__DisplayClass0_0_t6BB545FCC9F8924FD745AA27E5AD9702FBDFDAFD* __this, CustomEvent_tBEDC67626FF1C53DC5C0C06B9F6A6BEC954EC7B5* ___e0, const RuntimeMethod* method) 
{
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* G_B2_0 = NULL;
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* G_B1_0 = NULL;
	{
		// return bus.Subscribe<CustomEvent>(e => action?.Invoke());
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_0 = __this->___action_0;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_1 = L_0;
		G_B1_0 = L_1;
		if (L_1)
		{
			G_B2_0 = L_1;
			goto IL_000b;
		}
	}
	{
		return;
	}

IL_000b:
	{
		NullCheck(G_B2_0);
		Action_Invoke_m7126A54DACA72B845424072887B5F3A51FC3808E_inline(G_B2_0, NULL);
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
// EventSystem.Runtime.Bus.SubscriptionToken EventSystem.Runtime.Bus.SubscriptionResult::get_Token()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR SubscriptionToken_tD978A093982292F2797A7B52299C4178FDD69760* SubscriptionResult_get_Token_mD26225C061A57C8990A0B320C81CB302C0D142C7 (SubscriptionResult_t6AF632194890A72CCD10EC3528AD6559D825B3A4* __this, const RuntimeMethod* method) 
{
	{
		// public SubscriptionToken Token { get; }
		SubscriptionToken_tD978A093982292F2797A7B52299C4178FDD69760* L_0 = __this->___U3CTokenU3Ek__BackingField_0;
		return L_0;
	}
}
// EventSystem.Runtime.Core.Dispose.DisposeContainer EventSystem.Runtime.Bus.SubscriptionResult::get_Container()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR DisposeContainer_t1201D3858AAFCED17DD46A94CF7B1B4059A964F6* SubscriptionResult_get_Container_m13115771E2ACB56C99016D1FC7403B3ECA23827D (SubscriptionResult_t6AF632194890A72CCD10EC3528AD6559D825B3A4* __this, const RuntimeMethod* method) 
{
	{
		// public DisposeContainer Container { get; }
		DisposeContainer_t1201D3858AAFCED17DD46A94CF7B1B4059A964F6* L_0 = __this->___U3CContainerU3Ek__BackingField_1;
		return L_0;
	}
}
// System.Void EventSystem.Runtime.Bus.SubscriptionResult::.ctor(EventSystem.Runtime.Bus.SubscriptionToken,EventSystem.Runtime.Core.Dispose.DisposeContainer)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SubscriptionResult__ctor_mA12D1B1ED4DD074C9AAF368FDF5B97EFA5C276B5 (SubscriptionResult_t6AF632194890A72CCD10EC3528AD6559D825B3A4* __this, SubscriptionToken_tD978A093982292F2797A7B52299C4178FDD69760* ___token0, DisposeContainer_t1201D3858AAFCED17DD46A94CF7B1B4059A964F6* ___container1, const RuntimeMethod* method) 
{
	{
		// public SubscriptionResult(SubscriptionToken token, DisposeContainer container)
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		// Token = token;
		SubscriptionToken_tD978A093982292F2797A7B52299C4178FDD69760* L_0 = ___token0;
		__this->___U3CTokenU3Ek__BackingField_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CTokenU3Ek__BackingField_0), (void*)L_0);
		// Container = container;
		DisposeContainer_t1201D3858AAFCED17DD46A94CF7B1B4059A964F6* L_1 = ___container1;
		__this->___U3CContainerU3Ek__BackingField_1 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CContainerU3Ek__BackingField_1), (void*)L_1);
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
// System.Void EventSystem.Runtime.Bus.SubscriptionToken::.ctor(System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SubscriptionToken__ctor_m87F88D9BBD20383A3D313EEE83E76D58C5EFC0B7 (SubscriptionToken_tD978A093982292F2797A7B52299C4178FDD69760* __this, Type_t* ___eventItemType0, const RuntimeMethod* method) 
{
	{
		// internal SubscriptionToken(Type eventItemType)
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		// Token = Guid.NewGuid();
		Guid_t L_0;
		L_0 = Guid_NewGuid_m1F4894E8DC089811D6252148AD5858E58D43A7BD(NULL);
		__this->___U3CTokenU3Ek__BackingField_0 = L_0;
		// EventItemType = eventItemType;
		Type_t* L_1 = ___eventItemType0;
		__this->___U3CEventItemTypeU3Ek__BackingField_1 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CEventItemTypeU3Ek__BackingField_1), (void*)L_1);
		// }
		return;
	}
}
// System.Guid EventSystem.Runtime.Bus.SubscriptionToken::get_Token()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Guid_t SubscriptionToken_get_Token_mB6D67FC5FF9E31F0E5BD1B51289729D8FBD790B7 (SubscriptionToken_tD978A093982292F2797A7B52299C4178FDD69760* __this, const RuntimeMethod* method) 
{
	{
		// public Guid Token { get; }
		Guid_t L_0 = __this->___U3CTokenU3Ek__BackingField_0;
		return L_0;
	}
}
// System.Type EventSystem.Runtime.Bus.SubscriptionToken::get_EventItemType()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t* SubscriptionToken_get_EventItemType_mE7AEBC74D88E9B5A8A157482FD96EE91263BDF84 (SubscriptionToken_tD978A093982292F2797A7B52299C4178FDD69760* __this, const RuntimeMethod* method) 
{
	{
		// public Type EventItemType { get; }
		Type_t* L_0 = __this->___U3CEventItemTypeU3Ek__BackingField_1;
		return L_0;
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
// System.Void EventSystem.Runtime.Bus.Extensions.EventBusExtensions::Publish(EventSystem.Runtime.Core.Events.Base.IEvent,EventSystem.Runtime.Bus.Interfaces.IEventBus)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EventBusExtensions_Publish_mF5E9B7E94477688FAFEED745CEDA7FC325E38DB5 (RuntimeObject* ___eventBase0, RuntimeObject* ___eventBus1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEventBus_Publish_TisIEvent_t1831D69A2AFE60EA1F46CE1909F26AAF21867C14_m492C61F415F6BB1F7B7CCD321945CDAE788A65BD_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// eventBus.Publish(eventBase);
		RuntimeObject* L_0 = ___eventBus1;
		RuntimeObject* L_1 = ___eventBase0;
		NullCheck(L_0);
		GenericInterfaceActionInvoker1< RuntimeObject* >::Invoke(IEventBus_Publish_TisIEvent_t1831D69A2AFE60EA1F46CE1909F26AAF21867C14_m492C61F415F6BB1F7B7CCD321945CDAE788A65BD_RuntimeMethod_var, L_0, L_1);
		// }
		return;
	}
}
// System.Void EventSystem.Runtime.Bus.Extensions.EventBusExtensions::PublishAsync(EventSystem.Runtime.Core.Events.Base.IEvent,EventSystem.Runtime.Bus.Interfaces.IEventBus)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EventBusExtensions_PublishAsync_mF427429E60467790CB1395FCD7CC412C11BF1DBF (RuntimeObject* ___eventBase0, RuntimeObject* ___eventBus1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEventBus_PublishAsync_TisIEvent_t1831D69A2AFE60EA1F46CE1909F26AAF21867C14_mB413F808435C36F11FE862DF98CB4E4ACB841E25_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// eventBus.PublishAsync(eventBase);
		RuntimeObject* L_0 = ___eventBus1;
		RuntimeObject* L_1 = ___eventBase0;
		NullCheck(L_0);
		GenericInterfaceActionInvoker1< RuntimeObject* >::Invoke(IEventBus_PublishAsync_TisIEvent_t1831D69A2AFE60EA1F46CE1909F26AAF21867C14_mB413F808435C36F11FE862DF98CB4E4ACB841E25_RuntimeMethod_var, L_0, L_1);
		// }
		return;
	}
}
// System.Void EventSystem.Runtime.Bus.Extensions.EventBusExtensions::PublishAsync(EventSystem.Runtime.Core.Events.Base.IEvent,EventSystem.Runtime.Bus.Interfaces.IEventBus,System.AsyncCallback)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EventBusExtensions_PublishAsync_m63646E8AB0D5595EC65DAE2F8426D46EC33DD4B3 (RuntimeObject* ___eventBase0, RuntimeObject* ___eventBus1, AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C* ___asyncCallback2, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEventBus_PublishAsync_TisIEvent_t1831D69A2AFE60EA1F46CE1909F26AAF21867C14_m23BC8003DBF732629BC04E8486E91E98D4F81E07_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// eventBus.PublishAsync(eventBase, asyncCallback);
		RuntimeObject* L_0 = ___eventBus1;
		RuntimeObject* L_1 = ___eventBase0;
		AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C* L_2 = ___asyncCallback2;
		NullCheck(L_0);
		GenericInterfaceActionInvoker2< RuntimeObject*, AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C* >::Invoke(IEventBus_PublishAsync_TisIEvent_t1831D69A2AFE60EA1F46CE1909F26AAF21867C14_m23BC8003DBF732629BC04E8486E91E98D4F81E07_RuntimeMethod_var, L_0, L_1, L_2);
		// }
		return;
	}
}
// System.Void EventSystem.Runtime.Bus.Extensions.EventBusExtensions::Unsubscribe(EventSystem.Runtime.Bus.SubscriptionToken,EventSystem.Runtime.Bus.Interfaces.IEventBus)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EventBusExtensions_Unsubscribe_m81ED8C282A976B5D5CBFB8C0FB4E650ED4AAD8B9 (SubscriptionToken_tD978A093982292F2797A7B52299C4178FDD69760* ___token0, RuntimeObject* ___eventBus1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEventBus_t738E39D3FAC5F14B8531D5948E49D7497968A1C8_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// eventBus.Unsubscribe(token);
		RuntimeObject* L_0 = ___eventBus1;
		SubscriptionToken_tD978A093982292F2797A7B52299C4178FDD69760* L_1 = ___token0;
		NullCheck(L_0);
		InterfaceActionInvoker1< SubscriptionToken_tD978A093982292F2797A7B52299C4178FDD69760* >::Invoke(1 /* System.Void EventSystem.Runtime.Bus.Interfaces.IEventBus::Unsubscribe(EventSystem.Runtime.Bus.SubscriptionToken) */, IEventBus_t738E39D3FAC5F14B8531D5948E49D7497968A1C8_il2cpp_TypeInfo_var, L_0, L_1);
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
// EventSystem.Runtime.Bus.Interfaces.IEventBus EventSystem.Runtime.Bus.Exceptions.AlreadyRegisteredException::get_EventBus()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* AlreadyRegisteredException_get_EventBus_m21EBEFB0A985DFD6BEBEB2442837A5CC64E62CE4 (AlreadyRegisteredException_tE953372A34938995FF32D1BA757FFBE930247947* __this, const RuntimeMethod* method) 
{
	{
		// public IEventBus EventBus { get; }
		RuntimeObject* L_0 = __this->___U3CEventBusU3Ek__BackingField_18;
		return L_0;
	}
}
// System.Object EventSystem.Runtime.Bus.Exceptions.AlreadyRegisteredException::get_EventProxy()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* AlreadyRegisteredException_get_EventProxy_mF5E6E0CD9849432DBE6D18CD9EB15B53C1941938 (AlreadyRegisteredException_tE953372A34938995FF32D1BA757FFBE930247947* __this, const RuntimeMethod* method) 
{
	{
		// public object EventProxy { get; }
		RuntimeObject* L_0 = __this->___U3CEventProxyU3Ek__BackingField_19;
		return L_0;
	}
}
// System.Void EventSystem.Runtime.Bus.Exceptions.AlreadyRegisteredException::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AlreadyRegisteredException__ctor_m78BC33FD7984B6A1BA3551CB17EFC93067AA0A1E (AlreadyRegisteredException_tE953372A34938995FF32D1BA757FFBE930247947* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public AlreadyRegisteredException()
		il2cpp_codegen_runtime_class_init_inline(Exception_t_il2cpp_TypeInfo_var);
		Exception__ctor_m203319D1EA1274689B380A947B4ADC8445662B8F(__this, NULL);
		// }
		return;
	}
}
// System.Void EventSystem.Runtime.Bus.Exceptions.AlreadyRegisteredException::.ctor(System.Object,EventSystem.Runtime.Bus.Interfaces.IEventBus)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AlreadyRegisteredException__ctor_m4E04677A322B5A26EA12909C8FD5582836251D64 (AlreadyRegisteredException_tE953372A34938995FF32D1BA757FFBE930247947* __this, RuntimeObject* ___eventProxy0, RuntimeObject* ___eventBus1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public AlreadyRegisteredException(object eventProxy, IEventBus eventBus) : base(
		//     GetDefaultMessage(eventProxy, eventBus))
		RuntimeObject* L_0 = ___eventProxy0;
		RuntimeObject* L_1 = ___eventBus1;
		String_t* L_2;
		L_2 = AlreadyRegisteredException_GetDefaultMessage_mCE2CD8969909A21867F36A9D44EDE1C0FAC8D595(L_0, L_1, NULL);
		il2cpp_codegen_runtime_class_init_inline(Exception_t_il2cpp_TypeInfo_var);
		Exception__ctor_m9B2BD92CD68916245A75109105D9071C9D430E7F(__this, L_2, NULL);
		// EventProxy = eventProxy;
		RuntimeObject* L_3 = ___eventProxy0;
		__this->___U3CEventProxyU3Ek__BackingField_19 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CEventProxyU3Ek__BackingField_19), (void*)L_3);
		// EventBus = eventBus;
		RuntimeObject* L_4 = ___eventBus1;
		__this->___U3CEventBusU3Ek__BackingField_18 = L_4;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CEventBusU3Ek__BackingField_18), (void*)L_4);
		// }
		return;
	}
}
// System.Void EventSystem.Runtime.Bus.Exceptions.AlreadyRegisteredException::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AlreadyRegisteredException__ctor_m198D281D9566F0820B19ADABFAEEBBE8FFE31228 (AlreadyRegisteredException_tE953372A34938995FF32D1BA757FFBE930247947* __this, String_t* ___message0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public AlreadyRegisteredException(string message) : base(message)
		String_t* L_0 = ___message0;
		il2cpp_codegen_runtime_class_init_inline(Exception_t_il2cpp_TypeInfo_var);
		Exception__ctor_m9B2BD92CD68916245A75109105D9071C9D430E7F(__this, L_0, NULL);
		// }
		return;
	}
}
// System.Void EventSystem.Runtime.Bus.Exceptions.AlreadyRegisteredException::.ctor(System.String,System.Exception)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AlreadyRegisteredException__ctor_mCB943C2363F7A7FC87905D6C57D7FCDB9640D65B (AlreadyRegisteredException_tE953372A34938995FF32D1BA757FFBE930247947* __this, String_t* ___message0, Exception_t* ___inner1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public AlreadyRegisteredException(string message, Exception inner) : base(message, inner)
		String_t* L_0 = ___message0;
		Exception_t* L_1 = ___inner1;
		il2cpp_codegen_runtime_class_init_inline(Exception_t_il2cpp_TypeInfo_var);
		Exception__ctor_m9BC141AAB08F47C34B7ED40C1A6C0C1ADDEC5CB3(__this, L_0, L_1, NULL);
		// }
		return;
	}
}
// System.String EventSystem.Runtime.Bus.Exceptions.AlreadyRegisteredException::GetDefaultMessage(System.Object,EventSystem.Runtime.Bus.Interfaces.IEventBus)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* AlreadyRegisteredException_GetDefaultMessage_mCE2CD8969909A21867F36A9D44EDE1C0FAC8D595 (RuntimeObject* ___eventProxy0, RuntimeObject* ___eventBus1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral855E742A508B4E551CF2C010724592FC556EBDDA);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return $"Event proxy: {eventProxy} was already registered on this event bus";
		RuntimeObject* L_0 = ___eventProxy0;
		String_t* L_1;
		L_1 = String_Format_mA8DBB4C2516B9723C5A41E6CB1E2FAF4BBE96DD8(_stringLiteral855E742A508B4E551CF2C010724592FC556EBDDA, L_0, NULL);
		return L_1;
	}
}
// System.Void EventSystem.Runtime.Bus.Exceptions.AlreadyRegisteredException::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AlreadyRegisteredException__ctor_m91AACD744EEEDC6B4109851C6D3D8AE1E3D8D3A2 (AlreadyRegisteredException_tE953372A34938995FF32D1BA757FFBE930247947* __this, SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* ___info0, StreamingContext_t56760522A751890146EE45F82F866B55B7E33677 ___context1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// protected AlreadyRegisteredException(SerializationInfo info, StreamingContext context) : base(info, context)
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_0 = ___info0;
		StreamingContext_t56760522A751890146EE45F82F866B55B7E33677 L_1 = ___context1;
		il2cpp_codegen_runtime_class_init_inline(Exception_t_il2cpp_TypeInfo_var);
		Exception__ctor_m412D5FC4D69035738F1DB88FD771ABD6B0E9E120(__this, L_0, L_1, NULL);
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
// System.Type EventSystem.Runtime.Bus.Exceptions.TypeNotRegisteredException::get_NonRegisteredType()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t* TypeNotRegisteredException_get_NonRegisteredType_m2CC7F905D1FBC5EF58DBB98E48421B3344A7E519 (TypeNotRegisteredException_t7DCA95FC37A8DE3F7525E29CBAE850342EEEE0A3* __this, const RuntimeMethod* method) 
{
	{
		// public Type NonRegisteredType { get; }
		Type_t* L_0 = __this->___U3CNonRegisteredTypeU3Ek__BackingField_18;
		return L_0;
	}
}
// System.Void EventSystem.Runtime.Bus.Exceptions.TypeNotRegisteredException::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TypeNotRegisteredException__ctor_mDDF69B4C176406D3781B78644486CD1254BFF502 (TypeNotRegisteredException_t7DCA95FC37A8DE3F7525E29CBAE850342EEEE0A3* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public TypeNotRegisteredException()
		il2cpp_codegen_runtime_class_init_inline(Exception_t_il2cpp_TypeInfo_var);
		Exception__ctor_m203319D1EA1274689B380A947B4ADC8445662B8F(__this, NULL);
		// }
		return;
	}
}
// System.Void EventSystem.Runtime.Bus.Exceptions.TypeNotRegisteredException::.ctor(System.Type,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TypeNotRegisteredException__ctor_mB19F660A3E484CA1677B9730978BD1F0583AB876 (TypeNotRegisteredException_t7DCA95FC37A8DE3F7525E29CBAE850342EEEE0A3* __this, Type_t* ___type0, String_t* ___message1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public TypeNotRegisteredException(Type type, string message) : base(message)
		String_t* L_0 = ___message1;
		il2cpp_codegen_runtime_class_init_inline(Exception_t_il2cpp_TypeInfo_var);
		Exception__ctor_m9B2BD92CD68916245A75109105D9071C9D430E7F(__this, L_0, NULL);
		// NonRegisteredType = type;
		Type_t* L_1 = ___type0;
		__this->___U3CNonRegisteredTypeU3Ek__BackingField_18 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CNonRegisteredTypeU3Ek__BackingField_18), (void*)L_1);
		// }
		return;
	}
}
// System.Void EventSystem.Runtime.Bus.Exceptions.TypeNotRegisteredException::.ctor(System.Type,System.String,System.Exception)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TypeNotRegisteredException__ctor_mAD09B9150A27A12D45D48EAA152E74364788ADC0 (TypeNotRegisteredException_t7DCA95FC37A8DE3F7525E29CBAE850342EEEE0A3* __this, Type_t* ___type0, String_t* ___message1, Exception_t* ___inner2, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public TypeNotRegisteredException(Type type, string message, Exception inner) : base(message, inner)
		String_t* L_0 = ___message1;
		Exception_t* L_1 = ___inner2;
		il2cpp_codegen_runtime_class_init_inline(Exception_t_il2cpp_TypeInfo_var);
		Exception__ctor_m9BC141AAB08F47C34B7ED40C1A6C0C1ADDEC5CB3(__this, L_0, L_1, NULL);
		// NonRegisteredType = type;
		Type_t* L_2 = ___type0;
		__this->___U3CNonRegisteredTypeU3Ek__BackingField_18 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CNonRegisteredTypeU3Ek__BackingField_18), (void*)L_2);
		// }
		return;
	}
}
// System.Void EventSystem.Runtime.Bus.Exceptions.TypeNotRegisteredException::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TypeNotRegisteredException__ctor_m6BF0BE3CF7A9C45F327618CE32F8C3938996A128 (TypeNotRegisteredException_t7DCA95FC37A8DE3F7525E29CBAE850342EEEE0A3* __this, String_t* ___message0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public TypeNotRegisteredException(string message) : base(message)
		String_t* L_0 = ___message0;
		il2cpp_codegen_runtime_class_init_inline(Exception_t_il2cpp_TypeInfo_var);
		Exception__ctor_m9B2BD92CD68916245A75109105D9071C9D430E7F(__this, L_0, NULL);
		// }
		return;
	}
}
// System.Void EventSystem.Runtime.Bus.Exceptions.TypeNotRegisteredException::.ctor(System.String,System.Exception)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TypeNotRegisteredException__ctor_m6D9AD056F319A4C8486756707D3B38BBF85CE3C3 (TypeNotRegisteredException_t7DCA95FC37A8DE3F7525E29CBAE850342EEEE0A3* __this, String_t* ___message0, Exception_t* ___inner1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public TypeNotRegisteredException(string message, Exception inner) : base(message, inner)
		String_t* L_0 = ___message0;
		Exception_t* L_1 = ___inner1;
		il2cpp_codegen_runtime_class_init_inline(Exception_t_il2cpp_TypeInfo_var);
		Exception__ctor_m9BC141AAB08F47C34B7ED40C1A6C0C1ADDEC5CB3(__this, L_0, L_1, NULL);
		// }
		return;
	}
}
// System.Void EventSystem.Runtime.Bus.Exceptions.TypeNotRegisteredException::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TypeNotRegisteredException__ctor_m693D6994B19053C294BE6042F6FA7D3A0C3645ED (TypeNotRegisteredException_t7DCA95FC37A8DE3F7525E29CBAE850342EEEE0A3* __this, SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* ___info0, StreamingContext_t56760522A751890146EE45F82F866B55B7E33677 ___context1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// protected TypeNotRegisteredException(SerializationInfo info, StreamingContext context) : base(info, context)
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_0 = ___info0;
		StreamingContext_t56760522A751890146EE45F82F866B55B7E33677 L_1 = ___context1;
		il2cpp_codegen_runtime_class_init_inline(Exception_t_il2cpp_TypeInfo_var);
		Exception__ctor_m412D5FC4D69035738F1DB88FD771ABD6B0E9E120(__this, L_0, L_1, NULL);
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
// System.Boolean EventSystem.Runtime.Bus.Configuration.EventBusConfiguration::get_ThrowSubscriberException()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool EventBusConfiguration_get_ThrowSubscriberException_m4F899C067CA4DFE97DAC3FEABBE262233377C3B5 (EventBusConfiguration_tF8A2907FC2B49AEF9A4B90732802DE0924AF223D* __this, const RuntimeMethod* method) 
{
	{
		// public bool ThrowSubscriberException { get; set; }
		bool L_0 = __this->___U3CThrowSubscriberExceptionU3Ek__BackingField_0;
		return L_0;
	}
}
// System.Void EventSystem.Runtime.Bus.Configuration.EventBusConfiguration::set_ThrowSubscriberException(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EventBusConfiguration_set_ThrowSubscriberException_m9E84A586EE9069DB07903B1385CD00134B66EC8A (EventBusConfiguration_tF8A2907FC2B49AEF9A4B90732802DE0924AF223D* __this, bool ___value0, const RuntimeMethod* method) 
{
	{
		// public bool ThrowSubscriberException { get; set; }
		bool L_0 = ___value0;
		__this->___U3CThrowSubscriberExceptionU3Ek__BackingField_0 = L_0;
		return;
	}
}
// System.Void EventSystem.Runtime.Bus.Configuration.EventBusConfiguration::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EventBusConfiguration__ctor_m6CF1EE7D05E68C66877CF5B7094715C1158396B7 (EventBusConfiguration_tF8A2907FC2B49AEF9A4B90732802DE0924AF223D* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
// System.Void EventSystem.Runtime.Bus.Configuration.EventBusConfiguration::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EventBusConfiguration__cctor_mDA66645A86713BB04A4364DB4EE7CF471733F837 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EventBusConfiguration_tF8A2907FC2B49AEF9A4B90732802DE0924AF223D_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// internal static readonly EventBusConfiguration Default = new EventBusConfiguration
		//     { ThrowSubscriberException = false };
		EventBusConfiguration_tF8A2907FC2B49AEF9A4B90732802DE0924AF223D* L_0 = (EventBusConfiguration_tF8A2907FC2B49AEF9A4B90732802DE0924AF223D*)il2cpp_codegen_object_new(EventBusConfiguration_tF8A2907FC2B49AEF9A4B90732802DE0924AF223D_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		EventBusConfiguration__ctor_m6CF1EE7D05E68C66877CF5B7094715C1158396B7(L_0, NULL);
		EventBusConfiguration_tF8A2907FC2B49AEF9A4B90732802DE0924AF223D* L_1 = L_0;
		NullCheck(L_1);
		EventBusConfiguration_set_ThrowSubscriberException_m9E84A586EE9069DB07903B1385CD00134B66EC8A_inline(L_1, (bool)0, NULL);
		((EventBusConfiguration_tF8A2907FC2B49AEF9A4B90732802DE0924AF223D_StaticFields*)il2cpp_codegen_static_fields_for(EventBusConfiguration_tF8A2907FC2B49AEF9A4B90732802DE0924AF223D_il2cpp_TypeInfo_var))->___Default_1 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&((EventBusConfiguration_tF8A2907FC2B49AEF9A4B90732802DE0924AF223D_StaticFields*)il2cpp_codegen_static_fields_for(EventBusConfiguration_tF8A2907FC2B49AEF9A4B90732802DE0924AF223D_il2cpp_TypeInfo_var))->___Default_1), (void*)L_1);
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
// EventSystem.Runtime.Bus.SubscriptionToken EventSystem.Runtime.Bus.Configuration.MonoBehaviourProxy::get_Subscription()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR SubscriptionToken_tD978A093982292F2797A7B52299C4178FDD69760* MonoBehaviourProxy_get_Subscription_mFE43FAC31FD52B141DCEFEBC41CDAD6080D9962F (MonoBehaviourProxy_t8EF8DC6E8A10422656F746DEA0375D14FE1DFE9D* __this, const RuntimeMethod* method) 
{
	{
		// public SubscriptionToken Subscription => throw new System.NotImplementedException();
		NotImplementedException_t6366FE4DCF15094C51F4833B91A2AE68D4DA90E8* L_0 = (NotImplementedException_t6366FE4DCF15094C51F4833B91A2AE68D4DA90E8*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotImplementedException_t6366FE4DCF15094C51F4833B91A2AE68D4DA90E8_il2cpp_TypeInfo_var)));
		NullCheck(L_0);
		NotImplementedException__ctor_mDAB47BC6BD0E342E8F2171E5CABE3E67EA049F1C(L_0, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&MonoBehaviourProxy_get_Subscription_mFE43FAC31FD52B141DCEFEBC41CDAD6080D9962F_RuntimeMethod_var)));
	}
}
// System.Void EventSystem.Runtime.Bus.Configuration.MonoBehaviourProxy::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MonoBehaviourProxy__ctor_m426D8C80733F1AA419DC3A77B1533E6F2D01884C (MonoBehaviourProxy_t8EF8DC6E8A10422656F746DEA0375D14FE1DFE9D* __this, const RuntimeMethod* method) 
{
	{
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
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
// EventSystem.Runtime.Bus.Unity.GlobalEventBus EventSystem.Runtime.Bus.Unity.GlobalEventBus::get_Instance()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GlobalEventBus_t1A9E0D0263A42224275D763EDF55D5C639E7B8D3* GlobalEventBus_get_Instance_mDB0C4F87F060E3556C835672F44DCA5BDB126AA8 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GlobalEventBus_t1A9E0D0263A42224275D763EDF55D5C639E7B8D3_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	GlobalEventBus_t1A9E0D0263A42224275D763EDF55D5C639E7B8D3* G_B2_0 = NULL;
	GlobalEventBus_t1A9E0D0263A42224275D763EDF55D5C639E7B8D3* G_B1_0 = NULL;
	{
		// public static GlobalEventBus Instance => _instance ??= new GlobalEventBus();
		GlobalEventBus_t1A9E0D0263A42224275D763EDF55D5C639E7B8D3* L_0 = ((GlobalEventBus_t1A9E0D0263A42224275D763EDF55D5C639E7B8D3_StaticFields*)il2cpp_codegen_static_fields_for(GlobalEventBus_t1A9E0D0263A42224275D763EDF55D5C639E7B8D3_il2cpp_TypeInfo_var))->____instance_3;
		GlobalEventBus_t1A9E0D0263A42224275D763EDF55D5C639E7B8D3* L_1 = L_0;
		G_B1_0 = L_1;
		if (L_1)
		{
			G_B2_0 = L_1;
			goto IL_0014;
		}
	}
	{
		GlobalEventBus_t1A9E0D0263A42224275D763EDF55D5C639E7B8D3* L_2 = (GlobalEventBus_t1A9E0D0263A42224275D763EDF55D5C639E7B8D3*)il2cpp_codegen_object_new(GlobalEventBus_t1A9E0D0263A42224275D763EDF55D5C639E7B8D3_il2cpp_TypeInfo_var);
		NullCheck(L_2);
		GlobalEventBus__ctor_mE7EA7196640D4EC8567EBF2DBF4E202AFAD01BEF(L_2, NULL);
		GlobalEventBus_t1A9E0D0263A42224275D763EDF55D5C639E7B8D3* L_3 = L_2;
		((GlobalEventBus_t1A9E0D0263A42224275D763EDF55D5C639E7B8D3_StaticFields*)il2cpp_codegen_static_fields_for(GlobalEventBus_t1A9E0D0263A42224275D763EDF55D5C639E7B8D3_il2cpp_TypeInfo_var))->____instance_3 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&((GlobalEventBus_t1A9E0D0263A42224275D763EDF55D5C639E7B8D3_StaticFields*)il2cpp_codegen_static_fields_for(GlobalEventBus_t1A9E0D0263A42224275D763EDF55D5C639E7B8D3_il2cpp_TypeInfo_var))->____instance_3), (void*)L_3);
		G_B2_0 = L_3;
	}

IL_0014:
	{
		return G_B2_0;
	}
}
// System.Void EventSystem.Runtime.Bus.Unity.GlobalEventBus::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GlobalEventBus__ctor_mE7EA7196640D4EC8567EBF2DBF4E202AFAD01BEF (GlobalEventBus_t1A9E0D0263A42224275D763EDF55D5C639E7B8D3* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EventBus_t38EEAA31225B2E5DA42372B418AF82481D6929D3_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_runtime_class_init_inline(EventBus_t38EEAA31225B2E5DA42372B418AF82481D6929D3_il2cpp_TypeInfo_var);
		EventBus__ctor_mDC912761AD18CACE59DE24C175BEA593F1341740(__this, (RuntimeObject*)NULL, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Action_Invoke_m7126A54DACA72B845424072887B5F3A51FC3808E_inline (Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* __this, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void CancelableEventBase_set_Canceled_m2E87281F0CF6E101399B465ACB6EC770507C4CC9_inline (CancelableEventBase_t3E558D21980C25374A6F9C35C7A43815110A935A* __this, bool ___value0, const RuntimeMethod* method) 
{
	{
		// public bool Canceled { get; set; } = false;
		bool L_0 = ___value0;
		__this->___U3CCanceledU3Ek__BackingField_0 = L_0;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Type_t* SubscriptionToken_get_EventItemType_mE7AEBC74D88E9B5A8A157482FD96EE91263BDF84_inline (SubscriptionToken_tD978A093982292F2797A7B52299C4178FDD69760* __this, const RuntimeMethod* method) 
{
	{
		// public Type EventItemType { get; }
		Type_t* L_0 = __this->___U3CEventItemTypeU3Ek__BackingField_1;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Guid_t SubscriptionToken_get_Token_mB6D67FC5FF9E31F0E5BD1B51289729D8FBD790B7_inline (SubscriptionToken_tD978A093982292F2797A7B52299C4178FDD69760* __this, const RuntimeMethod* method) 
{
	{
		// public Guid Token { get; }
		Guid_t L_0 = __this->___U3CTokenU3Ek__BackingField_0;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void EventBusConfiguration_set_ThrowSubscriberException_m9E84A586EE9069DB07903B1385CD00134B66EC8A_inline (EventBusConfiguration_tF8A2907FC2B49AEF9A4B90732802DE0924AF223D* __this, bool ___value0, const RuntimeMethod* method) 
{
	{
		// public bool ThrowSubscriberException { get; set; }
		bool L_0 = ___value0;
		__this->___U3CThrowSubscriberExceptionU3Ek__BackingField_0 = L_0;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Action_4_Invoke_mC8C8B8A8D0B62945087E4740BF7ED7D7E4F38A16_gshared_inline (Action_4_tAF05E98E3DA1B2D4E4629E152AB8AE2793BEE120* __this, RuntimeObject* ___arg10, RuntimeObject* ___arg21, RuntimeObject* ___arg32, RuntimeObject* ___arg43, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, RuntimeObject*, RuntimeObject*, RuntimeObject*, RuntimeObject*, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___arg10, ___arg21, ___arg32, ___arg43, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* Array_Empty_TisRuntimeObject_mFB8A63D602BB6974D31E20300D9EB89C6FE7C278_gshared_inline (const RuntimeMethod* method) 
{
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->rgctx_data, 0));
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_0 = ((EmptyArray_1_tDF0DD7256B115243AA6BD5558417387A734240EE_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(method->rgctx_data, 0)))->___Value_0;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Add_mEBCF994CC3814631017F46A387B1A192ED6C85C7_gshared_inline (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, RuntimeObject* ___item0, const RuntimeMethod* method) 
{
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* V_0 = NULL;
	int32_t V_1 = 0;
	{
		int32_t L_0 = (int32_t)__this->____version_3;
		__this->____version_3 = ((int32_t)il2cpp_codegen_add(L_0, 1));
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_1 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)__this->____items_1;
		V_0 = L_1;
		int32_t L_2 = (int32_t)__this->____size_2;
		V_1 = L_2;
		int32_t L_3 = V_1;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_4 = V_0;
		NullCheck(L_4);
		if ((!(((uint32_t)L_3) < ((uint32_t)((int32_t)(((RuntimeArray*)L_4)->max_length))))))
		{
			goto IL_0034;
		}
	}
	{
		int32_t L_5 = V_1;
		__this->____size_2 = ((int32_t)il2cpp_codegen_add(L_5, 1));
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_6 = V_0;
		int32_t L_7 = V_1;
		RuntimeObject* L_8 = ___item0;
		NullCheck(L_6);
		(L_6)->SetAt(static_cast<il2cpp_array_size_t>(L_7), (RuntimeObject*)L_8);
		return;
	}

IL_0034:
	{
		RuntimeObject* L_9 = ___item0;
		((  void (*) (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D*, RuntimeObject*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 11)))(__this, L_9, il2cpp_rgctx_method(method->klass->rgctx_data, 11));
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* Enumerator_get_Current_m6330F15D18EE4F547C05DF9BF83C5EB710376027_gshared_inline (Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = (RuntimeObject*)__this->____current_3;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Action_1_Invoke_mF2422B2DD29F74CE66F791C3F68E288EC7C3DB9E_gshared_inline (Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* __this, RuntimeObject* ___obj0, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, RuntimeObject*, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___obj0, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Action_3_Invoke_m399A0EB5E51EFD9B7D25DFE0EB7BF5EC0BE98346_gshared_inline (Action_3_tCDB60724FE7702C8848DCEE7A25283B015D0DA58* __this, RuntimeObject* ___arg10, RuntimeObject* ___arg21, RuntimeObject* ___arg32, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, RuntimeObject*, RuntimeObject*, RuntimeObject*, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___arg10, ___arg21, ___arg32, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t List_1_get_Count_m4407E4C389F22B8CEC282C15D56516658746C383_gshared_inline (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = (int32_t)__this->____size_2;
		return L_0;
	}
}
