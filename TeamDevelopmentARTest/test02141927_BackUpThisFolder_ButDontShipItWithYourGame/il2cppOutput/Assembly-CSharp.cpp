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
struct GenericVirtualActionInvoker1
{
	typedef void (*Action)(void*, T1, const RuntimeMethod*);

	static inline void Invoke (const RuntimeMethod* method, RuntimeObject* obj, T1 p1)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_virtual_invoke_data(method, obj, &invokeData);
		((Action)invokeData.methodPtr)(obj, p1, invokeData.method);
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
struct InvokerActionInvoker2;
template <typename T1, typename T2>
struct InvokerActionInvoker2<T1*, T2*>
{
	static inline void Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1* p1, T2* p2)
	{
		void* params[2] = { p1, p2 };
		method->invoker_method(methodPtr, method, obj, params, NULL);
	}
};
template <typename T1, typename T2, typename T3>
struct InvokerActionInvoker3;
template <typename T1, typename T2, typename T3>
struct InvokerActionInvoker3<T1*, T2*, T3*>
{
	static inline void Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1* p1, T2* p2, T3* p3)
	{
		void* params[3] = { p1, p2, p3 };
		method->invoker_method(methodPtr, method, obj, params, NULL);
	}
};

// DG.Tweening.Plugins.Core.ABSTweenPlugin`3<UnityEngine.Quaternion,UnityEngine.Vector3,DG.Tweening.Plugins.Options.QuaternionOptions>
struct ABSTweenPlugin_3_t3823C0F935A3168B9E48DC90ABD9A0CED3D7BB82;
// DG.Tweening.Plugins.Core.ABSTweenPlugin`3<UnityEngine.Vector3,DG.Tweening.Plugins.Core.PathCore.Path,DG.Tweening.Plugins.Options.PathOptions>
struct ABSTweenPlugin_3_t08B14BED068ACE348E543E45725D6C6BFFA60143;
// DG.Tweening.Plugins.Core.ABSTweenPlugin`3<UnityEngine.Vector3,UnityEngine.Vector3,DG.Tweening.Plugins.Options.VectorOptions>
struct ABSTweenPlugin_3_tE5A78BE46D046C07A6356B8AB596B2D00F9295E7;
// System.Action`1<UnityEngine.XR.ARFoundation.ARAnchorsChangedEventArgs>
struct Action_1_t11340E5174173030E076A75316E18A395082F8A5;
// System.Action`1<UnityEngine.XR.ARFoundation.ARPlaneBoundaryChangedEventArgs>
struct Action_1_t762BEDF03B3FAD9E52246AF6B4291030B8085074;
// System.Action`1<UnityEngine.XR.ARFoundation.ARPlanesChangedEventArgs>
struct Action_1_t009680BF19017ECA60753C7F605CBD85C56C6560;
// System.Action`1<UnityEngine.XR.ARFoundation.ARSessionStateChangedEventArgs>
struct Action_1_t325C602D999E964DB72210E493635E83F8D6CE68;
// System.Action`1<UnityEngine.XR.ARFoundation.ARTrackablesParentTransformChangedEventArgs>
struct Action_1_t2096FCE7327B89C5101BFB38155839F3166605FB;
// System.Action`1<System.Object>
struct Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87;
// System.Action`1<TMPro.TMP_TextInfo>
struct Action_1_tB93AB717F9D419A1BEC832FF76E74EAA32184CC1;
// System.Comparison`1<UnityEngine.XR.ARFoundation.ARRaycastHit>
struct Comparison_1_t0E0A9C99A8D29FBC5FA5ED9B9B2175A13C6578C0;
// System.Comparison`1<UnityEngine.EventSystems.RaycastResult>
struct Comparison_1_t9FCAC8C8CE160A96C5AAD2DE1D353DCE8A2FEEFC;
// DG.Tweening.Core.DOGetter`1<UnityEngine.Quaternion>
struct DOGetter_1_tB89DD12456B8E79576BB70E1CA6DF899686410D3;
// DG.Tweening.Core.DOGetter`1<UnityEngine.Vector3>
struct DOGetter_1_t709462C08281F3AA5DFEF36CAF91404B1004C338;
// DG.Tweening.Core.DOSetter`1<UnityEngine.Quaternion>
struct DOSetter_1_t9EFF8DD70A15F455A6FE698A22BD0FE9683AC28E;
// DG.Tweening.Core.DOSetter`1<UnityEngine.Vector3>
struct DOSetter_1_t02E8F9920F174322F1CF5AC8BCDEAABD14A03358;
// System.Collections.Generic.Dictionary`2<System.Int32,UnityEngine.GameObject>
struct Dictionary_2_t3ED995699F3E88D06E5DA7362BEB7584DBD61662;
// System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>
struct Dictionary_2_tABE19B9C5C52F1DE14F0D3287B2696E7D7419180;
// System.Collections.Generic.Dictionary`2<System.Int32,System.Object>
struct Dictionary_2_tA75D1125AC9BE8F005BA9B868B373398E643C907;
// System.Collections.Generic.Dictionary`2<UnityEngine.XR.ARSubsystems.TrackableId,UnityEngine.XR.ARFoundation.ARAnchor>
struct Dictionary_2_t525DE08A369658A5AE7D624D571ED15216817535;
// System.Collections.Generic.Dictionary`2<UnityEngine.XR.ARSubsystems.TrackableId,UnityEngine.XR.ARFoundation.ARPlane>
struct Dictionary_2_t26A4820BA6F451105138232941B7A9466E583A6C;
// System.Collections.Generic.Dictionary`2<UnityEngine.XR.ARSubsystems.TrackableId,UnityEngine.XR.ARFoundation.ARRaycast>
struct Dictionary_2_t4D1D3AB1188A73B9F0416424BA9B873577C418FD;
// System.Func`2<System.Collections.Generic.KeyValuePair`2<System.Int32,UnityEngine.GameObject>,System.Int32>
struct Func_2_t5EEB9DA1EC10E3B0AC9BE12D70E59948A16E8B3D;
// System.Func`2<System.Collections.Generic.KeyValuePair`2<System.Int32,System.Object>,System.Int32>
struct Func_2_tC7213AC5A1ABF30D1B1AF2CC2C9786B9C4C25B81;
// System.Func`2<UnityEngine.GameObject,UnityEngine.Vector3>
struct Func_2_tD73B7BD3399DAC2D727A9D19B39BF7DB6BB67C28;
// System.Func`2<System.Object,UnityEngine.Vector3>
struct Func_2_t1F9887E0A0ADE496D09CAA16DBA7B19D5579727E;
// System.Func`3<System.Int32,System.String,TMPro.TMP_FontAsset>
struct Func_3_tC721DF8CDD07ED66A4833A19A2ED2302608C906C;
// System.Func`3<System.Int32,System.String,TMPro.TMP_SpriteAsset>
struct Func_3_t6F6D9932638EA1A5A45303C6626C818C25D164E5;
// System.Func`4<UnityEngine.Ray,UnityEngine.XR.ARSubsystems.TrackableType,Unity.Collections.Allocator,Unity.Collections.NativeArray`1<UnityEngine.XR.ARSubsystems.XRRaycastHit>>
struct Func_4_t917A5E0B468B7C0436CA84D065BEB6FC43C9B906;
// System.Func`4<UnityEngine.Vector2,UnityEngine.XR.ARSubsystems.TrackableType,Unity.Collections.Allocator,Unity.Collections.NativeArray`1<UnityEngine.XR.ARSubsystems.XRRaycastHit>>
struct Func_4_t0755A61145E99905AC47DF85416091FB30758B8A;
// System.Collections.Generic.HashSet`1<System.String>
struct HashSet_1_tEFC6605F7DE53F71946C33FD371E53C3100F2178;
// System.Collections.Generic.IEnumerable`1<System.Collections.Generic.KeyValuePair`2<System.Int32,UnityEngine.GameObject>>
struct IEnumerable_1_tB781B4B22FE93681CD6E5DD8AD037830F8DD1D8B;
// System.Collections.Generic.IEnumerable`1<System.Collections.Generic.KeyValuePair`2<System.Int32,System.Object>>
struct IEnumerable_1_tF961F3E00EE8CF8A2420A47E491F0DC255B7F073;
// System.Collections.Generic.IEnumerable`1<UnityEngine.GameObject>
struct IEnumerable_1_t73E24A3585FE00B560A12D422A7066F996ACD0A0;
// System.Collections.Generic.IEnumerable`1<System.Object>
struct IEnumerable_1_tF95C9E01A913DD50575531C8305932628663D9E9;
// System.Collections.Generic.IEnumerable`1<UnityEngine.Renderer>
struct IEnumerable_1_t170888152DF4E9BBEB4E9C4079A32DD39DA2E812;
// System.Collections.Generic.IEnumerable`1<UnityEngine.Vector3>
struct IEnumerable_1_t5C1E5CDFEA99062D152E83B174072FEDB9763788;
// System.Collections.Generic.IEqualityComparer`1<System.Int32>
struct IEqualityComparer_1_tDBFC8496F14612776AF930DBF84AFE7D06D1F0E9;
// System.Linq.IOrderedEnumerable`1<System.Collections.Generic.KeyValuePair`2<System.Int32,UnityEngine.GameObject>>
struct IOrderedEnumerable_1_tA0440AADCC7DB510F4017307E7452977C41C8FE7;
// System.Linq.IOrderedEnumerable`1<System.Collections.Generic.KeyValuePair`2<System.Int32,System.Object>>
struct IOrderedEnumerable_1_t1FD676511DD7F5B806765CFF5CEE330097C58D4D;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.Int32,UnityEngine.GameObject>
struct KeyCollection_tC7244BD40ED4C8BF23C8756BFE90844B71753D66;
// System.Collections.Generic.List`1<Unity.Collections.NativeArray`1<UnityEngine.XR.ARSubsystems.XRRaycastHit>>
struct List_1_t554F70DABEBFEED67B5400AB73777A6D987F0D36;
// System.Collections.Generic.List`1<UnityEngine.XR.ARFoundation.ARAnchor>
struct List_1_t5C2EBF017989E44F3D1D11AF502E10F6F8D9AB53;
// System.Collections.Generic.List`1<UnityEngine.XR.ARFoundation.ARPlane>
struct List_1_t10BA05B555C92BD54800DFF82DCAAFC9DE44A077;
// System.Collections.Generic.List`1<UnityEngine.XR.ARFoundation.ARRaycast>
struct List_1_tE7BEADF38CADBCC46B040CF07A1B719A7F7E5123;
// System.Collections.Generic.List`1<UnityEngine.XR.ARFoundation.ARRaycastHit>
struct List_1_t0754071572EFE7A5C92A59495D2524FC935364E3;
// System.Collections.Generic.List`1<UnityEngine.EventSystems.BaseInputModule>
struct List_1_tA5BDE435C735A082941CD33D212F97F4AE9FA55F;
// System.Collections.Generic.List`1<UnityEngine.CanvasGroup>
struct List_1_t2CDCA768E7F493F5EDEBC75AEB200FD621354E35;
// System.Collections.Generic.List`1<UnityEngine.EventSystems.EventSystem>
struct List_1_tF2FE88545EFEC788CAAE6C74EC2F78E937FCCAC3;
// System.Collections.Generic.List`1<UnityEngine.GameObject>
struct List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B;
// System.Collections.Generic.List`1<Google.XR.ARCoreExtensions.Samples.Geospatial.GeospatialAnchorHistory>
struct List_1_t129F965E3A52C7ACA849FAEC97997D9357ED21A5;
// System.Collections.Generic.List`1<UnityEngine.XR.ARFoundation.IRaycaster>
struct List_1_t50405350B03FC84D28784364F500CB08B82435B5;
// System.Collections.Generic.List`1<System.Object>
struct List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D;
// System.Collections.Generic.List`1<UnityEngine.Renderer>
struct List_1_tD435DCC2A88E36DFC551EA5392CE0182F0C50E93;
// System.Collections.Generic.List`1<UnityEngine.Transform>
struct List_1_t991BBC5A1D51F59A450367DF944DAA207F22D06D;
// System.Collections.Generic.List`1<UnityEngine.Vector3>
struct List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B;
// System.Collections.Generic.List`1<UnityEngine.XR.ARSubsystems.XRAnchorSubsystem>
struct List_1_t9F2B0C5D9A34683317CA96A0A733BA6B33CC089A;
// System.Collections.Generic.List`1<UnityEngine.XR.ARSubsystems.XRAnchorSubsystemDescriptor>
struct List_1_t65387FE114D984E6DCFF71774BFC19CEB318A9BE;
// System.Collections.Generic.List`1<UnityEngine.XR.ARSubsystems.XRPlaneSubsystem>
struct List_1_t6630EC2D13FD2DC6D86447667371501266C9B3E8;
// System.Collections.Generic.List`1<UnityEngine.XR.ARSubsystems.XRPlaneSubsystemDescriptor>
struct List_1_tD705D57B270C006E488F9C9B55BA0768A11125D0;
// System.Collections.Generic.List`1<UnityEngine.XR.ARSubsystems.XRRaycastSubsystem>
struct List_1_tD793A24512B84D46F925E4CE4DBD30955A42C94C;
// System.Collections.Generic.List`1<UnityEngine.XR.ARSubsystems.XRRaycastSubsystemDescriptor>
struct List_1_t97C3D1A8E80E095D7CE223BC4D02400F78DA063F;
// System.Collections.Generic.List`1<UnityEngine.XR.ARSubsystems.XRSessionSubsystem>
struct List_1_t3903923EFB501C3A0672A0E60558673B85435D8E;
// System.Collections.Generic.List`1<UnityEngine.XR.ARSubsystems.XRSessionSubsystemDescriptor>
struct List_1_tC86363A0A1DF8199DB382C6CDB5A1254F8660A34;
// DG.Tweening.TweenCallback`1<System.Int32>
struct TweenCallback_1_tF0ADCA0C226C9C243ACB55E67D852E4BB53AEB67;
// UnityEngine.UI.CoroutineTween.TweenRunner`1<UnityEngine.UI.CoroutineTween.ColorTween>
struct TweenRunner_1_t5BB0582F926E75E2FE795492679A6CF55A4B4BC4;
// DG.Tweening.Core.TweenerCore`3<UnityEngine.Quaternion,UnityEngine.Vector3,DG.Tweening.Plugins.Options.QuaternionOptions>
struct TweenerCore_3_t392C54729BB024F5802F8E205C583653C4E886E3;
// DG.Tweening.Core.TweenerCore`3<UnityEngine.Vector3,DG.Tweening.Plugins.Core.PathCore.Path,DG.Tweening.Plugins.Options.PathOptions>
struct TweenerCore_3_t4911E6704673AA7505D10A9D0B0D989CEC689DCA;
// DG.Tweening.Core.TweenerCore`3<UnityEngine.Vector3,UnityEngine.Vector3,DG.Tweening.Plugins.Options.VectorOptions>
struct TweenerCore_3_tCD82DFC45FB71C681FA8659EA63A7D7D16BFFE77;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.Int32,UnityEngine.GameObject>
struct ValueCollection_t945C1D1410FDCBD1C84A82D14A578BD5FFBC38F9;
// System.Collections.Generic.Dictionary`2/Entry<System.Int32,UnityEngine.GameObject>[]
struct EntryU5BU5D_t50812F6AE576839B5F5182BB3CFA6BA7464E8110;
// TMPro.TMP_TextProcessingStack`1<System.Int32>[]
struct TMP_TextProcessingStack_1U5BU5D_t08293E0BB072311BB96170F351D1083BCA97B9B2;
// System.Int32[][]
struct Int32U5BU5DU5BU5D_t179D865D5B30EFCBC50F82C9774329C15943466E;
// UnityEngine.XR.ARFoundation.ARAnchor[]
struct ARAnchorU5BU5D_t589CB7678527B30DBFABED0E377BC500C9D3454A;
// UnityEngine.XR.ARFoundation.ARRaycastHit[]
struct ARRaycastHitU5BU5D_t34FE14E360F945895923A0FE69CC277E7D13027E;
// System.Char[]
struct CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB;
// UnityEngine.Color32[]
struct Color32U5BU5D_t38116C3E91765C4C5726CE12C77FAD7F9F737259;
// UnityEngine.ContactPoint[]
struct ContactPointU5BU5D_t3570603E8D0685B71B3D8BA07031674B00C5E411;
// System.Decimal[]
struct DecimalU5BU5D_t93BA0C88FA80728F73B792EE1A5199D0C060B615;
// System.Delegate[]
struct DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771;
// TMPro.FontWeight[]
struct FontWeightU5BU5D_t2A406B5BAB0DD0F06E7F1773DB062E4AF98067BA;
// UnityEngine.GameObject[]
struct GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF;
// Google.XR.ARCoreExtensions.Samples.Geospatial.GeospatialAnchorHistory[]
struct GeospatialAnchorHistoryU5BU5D_tA0C4C60A0BC9FD540F02A271D88E148E4FD6B244;
// TMPro.HighlightState[]
struct HighlightStateU5BU5D_tA878A0AF1F4F52882ACD29515AADC277EE135622;
// TMPro.HorizontalAlignmentOptions[]
struct HorizontalAlignmentOptionsU5BU5D_t4D185662282BFB910D8B9A8199E91578E9422658;
// System.Int32[]
struct Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C;
// System.IntPtr[]
struct IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832;
// UnityEngine.Material[]
struct MaterialU5BU5D_t2B1D11C42DB07A4400C0535F92DBB87A2E346D3D;
// TMPro.MaterialReference[]
struct MaterialReferenceU5BU5D_t7491D335AB3E3E13CE9C0F5E931F396F6A02E1F2;
// System.Object[]
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918;
// UnityEngine.Renderer[]
struct RendererU5BU5D_t32FDD782F67917B2291EA4FF242719877440A02A;
// RhythmObject[]
struct RhythmObjectU5BU5D_tB69B4B2405497D929A9E0301E27713F005F92774;
// TMPro.RichTextTagAttribute[]
struct RichTextTagAttributeU5BU5D_t5816316EFD8F59DBC30B9F88E15828C564E47B6D;
// UnityEngine.UI.Selectable[]
struct SelectableU5BU5D_t4160E135F02A40F75A63F787D36F31FEC6FE91A9;
// System.Single[]
struct SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C;
// System.Diagnostics.StackTrace[]
struct StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF;
// TMPro.TMP_CharacterInfo[]
struct TMP_CharacterInfoU5BU5D_t297D56FCF66DAA99D8FEA7C30F9F3926902C5B99;
// TMPro.TMP_ColorGradient[]
struct TMP_ColorGradientU5BU5D_t2F65E8C42F268DFF33BB1392D94BCF5B5087308A;
// TMPro.TMP_SubMeshUI[]
struct TMP_SubMeshUIU5BU5D_tC77B263183A59A75345C26152457207EAC3BBF29;
// UnityEngine.Transform[]
struct TransformU5BU5D_tBB9C5F5686CAE82E3D97D43DF0F3D68ABF75EC24;
// UnityEngine.UIVertex[]
struct UIVertexU5BU5D_tBC532486B45D071A520751A90E819C77BA4E3D2F;
// System.UInt32[]
struct UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA;
// UnityEngine.Vector2[]
struct Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA;
// UnityEngine.Vector3[]
struct Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C;
// TMPro.WordWrapState[]
struct WordWrapStateU5BU5D_t473D59C9DBCC949CE72EF1EB471CBA152A6CEAC9;
// TMPro.TMP_Text/UnicodeChar[]
struct UnicodeCharU5BU5D_t67F27D09F8EB28D2C42DFF16FE60054F157012F5;
// UnityEngine.XR.ARFoundation.ARAnchor
struct ARAnchor_t832D3D366D3F1D43F995A298974D4EDABACC0E06;
// UnityEngine.XR.ARFoundation.ARAnchorManager
struct ARAnchorManager_tF68C46300BD6F2E83E3360BF9297C3C50F5D6B3E;
// UnityEngine.XR.ARFoundation.ARCameraManager
struct ARCameraManager_t6E957EA922911B8447D086D9FB1F860EC967BD9F;
// UnityEngine.XR.ARCore.ARCoreCameraSubsystem
struct ARCoreCameraSubsystem_t037314216B2DA66DC532ABFB17CFD90B38830AD9;
// Google.XR.ARCoreExtensions.ARCoreExtensions
struct ARCoreExtensions_tD81ADD2A10A04FC507DB1A9D022C0778510C3B41;
// Google.XR.ARCoreExtensions.ARCoreExtensionsCameraConfigFilter
struct ARCoreExtensionsCameraConfigFilter_t7B45D467C1213E2DF2CA532D67388822ED2FF4C3;
// Google.XR.ARCoreExtensions.ARCoreExtensionsConfig
struct ARCoreExtensionsConfig_t241A8996B5A9CB82B5532C79DF31558CFFA531CD;
// UnityEngine.XR.ARCore.ARCoreSessionSubsystem
struct ARCoreSessionSubsystem_t7B755C740E5ADE41F6B32317BC5105B96B137349;
// Google.XR.ARCoreExtensions.AREarthManager
struct AREarthManager_tAC32FF06F084622687D9FB4837506A704301D0F0;
// ARFeatheredPlaneMeshVisualizer
struct ARFeatheredPlaneMeshVisualizer_t5B508CD2D37F908F4359D7DED031B3C357E34955;
// Google.XR.ARCoreExtensions.ARGeospatialAnchor
struct ARGeospatialAnchor_tD63E18E1D193A2B24B757D285F3CF67A8FC7F571;
// UnityEngine.XR.ARFoundation.ARPlane
struct ARPlane_tB2F02248AD4019D141553B25C1B9005913E98EF0;
// UnityEngine.XR.ARFoundation.ARPlaneManager
struct ARPlaneManager_t9DA6C512BDCFFBEE8B3DAA7170EB3BFFDE26A928;
// UnityEngine.XR.ARFoundation.ARPlaneMeshVisualizer
struct ARPlaneMeshVisualizer_t21838C8E2676AC524939E67CB965925E924E018F;
// UnityEngine.XR.ARFoundation.ARRaycastManager
struct ARRaycastManager_tD9459374F0F5BD9E2E4A8A1C665E7F33F9C2EE44;
// UnityEngine.XR.ARFoundation.ARSession
struct ARSession_t13374A44A01F2C6D90578F93E0F0DA2482BE3014;
// UnityEngine.XR.ARFoundation.ARSessionOrigin
struct ARSessionOrigin_tE7B28A1A19500BCC02711397A19E330425830BC3;
// UnityEngine.XR.ARFoundation.ARTrackable
struct ARTrackable_t1D98417758C08E98A333CDEC0C2C1688CE10B2E0;
// AnchorCreator
struct AnchorCreator_tBBEE94135B5183E0A8EE52FB00513F69C7C980ED;
// UnityEngine.AndroidJavaClass
struct AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03;
// UnityEngine.UI.AnimationTriggers
struct AnimationTriggers_tA0DC06F89C5280C6DD972F6F4C8A56D7F4F79074;
// AspectKeeper
struct AspectKeeper_tE04B4E487189116A41BDEE27EF419B57DED6331A;
// System.AsyncCallback
struct AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C;
// UnityEngine.AudioClip
struct AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20;
// UnityEngine.AudioSource
struct AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299;
// UnityEngine.EventSystems.BaseEventData
struct BaseEventData_tE03A848325C0AE8E76C6CA15FD86395EBF83364F;
// UnityEngine.EventSystems.BaseInputModule
struct BaseInputModule_tF3B7C22AF1419B2AC9ECE6589357DC1B88ED96B1;
// BuildingsGeospatialController
struct BuildingsGeospatialController_t3659F8BA9E2F49FF0B5D9F205AA900B84B98C410;
// UnityEngine.UI.Button
struct Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098;
// UnityEngine.Camera
struct Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184;
// UnityEngine.Canvas
struct Canvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26;
// UnityEngine.CanvasRenderer
struct CanvasRenderer_tAB9A55A976C4E3B2B37D0CE5616E5685A8B43860;
// System.Text.RegularExpressions.Capture
struct Capture_tE11B735186DAFEE5F7A3BF5A739E9CCCE99DC24A;
// System.Text.RegularExpressions.CaptureCollection
struct CaptureCollection_t38405272BD6A6DA77CD51487FD39624C6E95CC93;
// Changescene
struct Changescene_t316E8EA501CB3BB520C8CCF16BCCD75E98663EE9;
// UnityEngine.Collider
struct Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76;
// UnityEngine.Collision
struct Collision_tBCC6AEBD9A63E6DA2E50660DAC03CDCB1FF7A9B0;
// Collsionmusic
struct Collsionmusic_t4EA448F820927E8767BC935993C05693BEFEFC42;
// ComboSm
struct ComboSm_t204EFF4BA1F00967D138D95108874214D2766470;
// Combotext
struct Combotext_t66C71AF95DB28158B23E969B02D5102D37877FAA;
// UnityEngine.Component
struct Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3;
// UnityEngine.Coroutine
struct Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B;
// System.Delegate
struct Delegate_t;
// System.DelegateData
struct DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E;
// Destroy
struct Destroy_t4F2B6B7FD5AFA77880F1040DBFD52453E63F3EA3;
// DestroyNotes
struct DestroyNotes_tF76908B49C16499852501C1B66D481349586919D;
// System.ComponentModel.DisplayNameAttribute
struct DisplayNameAttribute_tECBA9AC4CCBE61186E2B3C397C93AAFA5A2631E8;
// DG.Tweening.EaseFunction
struct EaseFunction_t0F945D9D726B0915C5FBF30862E987EC3AC12A04;
// UnityEngine.EventSystems.EventSystem
struct EventSystem_t61C51380B105BE9D2C39C4F15B7E655659957707;
// FixPositionXZ
struct FixPositionXZ_tD037E24FD34AA9295C8D0161026E20227AC3F5C4;
// UnityEngine.UI.FontData
struct FontData_tB8E562846C6CB59C43260F69AE346B9BF3157224;
// UnityEngine.GameObject
struct GameObject_t76FEDD663AB33C991A9C9A23129337651094216F;
// Google.XR.ARCoreExtensions.Samples.Geospatial.GeospatialAnchorHistoryCollection
struct GeospatialAnchorHistoryCollection_tE5EDB6915BC64A3689D5063C0AE9BDCDBDEB2BBD;
// Google.XR.ARCoreExtensions.Samples.Geospatial.GeospatialController
struct GeospatialController_t69A2BBD44F5A190BB256B888033F5297AF0A0D2F;
// UnityEngine.UI.Graphic
struct Graphic_tCBFCA4585A19E2B75465AECFEAC43F4016BF7931;
// System.Text.RegularExpressions.Group
struct Group_t26371E9136D6F43782C487B63C67C5FC4F472881;
// System.Text.RegularExpressions.GroupCollection
struct GroupCollection_tFFA1789730DD9EA122FBE77DC03BFEDCC3F2945E;
// System.IAsyncResult
struct IAsyncResult_t7B9B5A0ECB35DCEC31B8A8122C37D687369253B5;
// System.Collections.IDictionary
struct IDictionary_t6D03155AF1FA9083817AA5B6AD7DEEACC26AB220;
// System.Collections.IEnumerator
struct IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA;
// TMPro.ITextPreprocessor
struct ITextPreprocessor_tDBB49C8B68D7B80E8D233B9D9666C43981EFAAB9;
// UnityEngine.UI.Image
struct Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E;
// SRDebugger.IncrementAttribute
struct IncrementAttribute_t4EEF3E3CB6B83DC54346F0AB93DEA5102A661150;
// SRDebugger.Internal.InternalOptionsRegistry
struct InternalOptionsRegistry_t37F5D710767EF2F74CF225D94C602B84151A8F96;
// UnityEngine.Events.InvokableCallList
struct InvokableCallList_t309E1C8C7CE885A0D2F98C84CEA77A8935688382;
// UnityEngine.UI.LayoutElement
struct LayoutElement_tB1F24CC11AF4AA87015C8D8EE06D22349C5BF40A;
// UnityEngine.LocationService
struct LocationService_tF2F2720FE2C07562EBFD128889F9A99F4B41B1B2;
// System.Text.RegularExpressions.Match
struct Match_tFBEBCF225BD8EA17BCE6CE3FE5C1BD8E3074105F;
// UnityEngine.Material
struct Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3;
// UnityEngine.Mesh
struct Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4;
// UnityEngine.MeshRenderer
struct MeshRenderer_t4B7747212F0B88244BB7790C61AE124BFC15BAAE;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// MinusComboSm
struct MinusComboSm_tBACF61FA69DCBD7AF0DAE8C3C51E4F8C373251FC;
// MinusScoreSm
struct MinusScoreSm_tF03B2CCED0184C9511627D15DDD6FE245A74697F;
// MinusScoregaugeManager
struct MinusScoregaugeManager_t37D8435407667DA4B9ED8D9159C26C3DAFA87F23;
// UnityEngine.MonoBehaviour
struct MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71;
// Musicboxslide
struct Musicboxslide_tDA5C02383D64724F2749EE93DAA37DAE695BE3CC;
// Next1
struct Next1_tD81A0881C186B247881F9513268E3AECF40E55AC;
// Next2
struct Next2_t3FB449AADB893114D532687345F9E322C724BC89;
// NonActive
struct NonActive_t505A58BEB3C116AA2CE20F1ED05EA9203D32F442;
// System.NotImplementedException
struct NotImplementedException_t6366FE4DCF15094C51F4833B91A2AE68D4DA90E8;
// System.NotSupportedException
struct NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A;
// NotesGenerator
struct NotesGenerator_tD968B1468A55A495385ACE41CDC9423D02852B91;
// NotesMoveController
struct NotesMoveController_t1D30EA0235FF4CA4D8EA3018A019E9C9FA4D4A1C;
// NotesSlide
struct NotesSlide_tE75BA028235714DAF6DB7179140D449035CC0D92;
// SRDebugger.NumberRangeAttribute
struct NumberRangeAttribute_t36C0A939C7C6DC0971357D6A5BC6B4D8FD570585;
// UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C;
// ObjectChangeScale
struct ObjectChangeScale_tE0D4E687DE8C3ACD6124D148C79A46F7885A712A;
// ObjectRotation
struct ObjectRotation_t197E99EE089921C164133658B691481669871B56;
// DG.Tweening.Plugins.Core.PathCore.Path
struct Path_t6EC35555EF601CAFED947AC467DEBA7C1496A0C3;
// UnityEngine.Events.PersistentCallGroup
struct PersistentCallGroup_tB826EDF15DC80F71BCBCD8E410FD959A04C33F25;
// System.ComponentModel.PropertyChangedEventArgs
struct PropertyChangedEventArgs_tFA01343D8F2BD799951B40A3EBF4A6B38EE63321;
// System.ComponentModel.PropertyChangedEventHandler
struct PropertyChangedEventHandler_tF1250C146BE6FB43477D29C5D18A10B6329419DA;
// UnityEngine.UI.RectMask2D
struct RectMask2D_tACF92BE999C791A665BD1ADEABF5BCEB82846670;
// UnityEngine.RectTransform
struct RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5;
// System.Text.RegularExpressions.Regex
struct Regex_tE773142C2BE45C5D362B0F815AFF831707A51772;
// UnityEngine.Renderer
struct Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF;
// RhythmObject
struct RhythmObject_t48B5812FD53B54DB2453283D026C825E88D880A3;
// SROptions
struct SROptions_t00DA5107C80F05EB2730577E1FCA535FAD5F4A6F;
// SROptionsPropertyChanged
struct SROptionsPropertyChanged_t53B79AE547753261AFBD1916519E6A1074669CA7;
// Google.XR.ARCoreExtensions.Samples.Geospatial.SafeAreaScaler
struct SafeAreaScaler_t7FFEE4D34FEA32394B9181D42E522BFFD1E4BCE8;
// System.Runtime.Serialization.SafeSerializationManager
struct SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6;
// ScoreSm
struct ScoreSm_t45451B5935E6AA974EDA63F7B1A2935A1473A1A0;
// ScoregaugeManager
struct ScoregaugeManager_tE5BD928071BF7C92F99515E16AEBF3027D886924;
// Scoretext
struct Scoretext_t81C3E9BC508DF6567C782ECEF50A8CA49CFBC53B;
// UnityEngine.UI.Selectable
struct Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712;
// DG.Tweening.Sequence
struct Sequence_tEADBE56D6ED2E9EE8FB2E5459C3E57131EC0545C;
// UnityEngine.UI.Slider
struct Slider_t87EA570E3D6556CABF57456C2F3873FFD86E652F;
// SRDebugger.SortAttribute
struct SortAttribute_t745731D856AA0915EBA410630E554D11F6CCADBA;
// SoundController
struct SoundController_tA53F7251931CF12B1E75D0DF2F56D42DBFC61071;
// UnityEngine.Sprite
struct Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99;
// System.String
struct String_t;
// SwitchMaterial
struct SwitchMaterial_tAF8EEBCBCB3B6D6D6BE203FB2B12E16187CDF999;
// TMPro.TMP_Character
struct TMP_Character_t7D37A55EF1A9FF6D0BFE6D50E86A00F80E7FAF35;
// TMPro.TMP_ColorGradient
struct TMP_ColorGradient_t17B51752B4E9499A1FF7D875DCEC1D15A0F4AEBB;
// TMPro.TMP_FontAsset
struct TMP_FontAsset_t923BF2F78D7C5AC36376E168A1193B7CB4855160;
// TMPro.TMP_SpriteAnimator
struct TMP_SpriteAnimator_t2E0F016A61CA343E3222FF51E7CF0E53F9F256E4;
// TMPro.TMP_SpriteAsset
struct TMP_SpriteAsset_t81F779E6F705CE190DC0D1F93A954CB8B1774B39;
// TMPro.TMP_Style
struct TMP_Style_tA9E5B1B35EBFE24EF980CEA03251B638282E120C;
// TMPro.TMP_StyleSheet
struct TMP_StyleSheet_t70C71699F5CB2D855C361DBB78A44C901236C859;
// TMPro.TMP_TextElement
struct TMP_TextElement_t262A55214F712D4274485ABE5676E5254B84D0A5;
// TMPro.TMP_TextInfo
struct TMP_TextInfo_t09A8E906329422C3F0C059876801DD695B8D524D;
// UnityEngine.UI.Text
struct Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62;
// UnityEngine.TextGenerator
struct TextGenerator_t85D00417640A53953556C01F9D4E7DDE1ABD8FEC;
// TMPro.TextMeshProUGUI
struct TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957;
// UnityEngine.Texture2D
struct Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4;
// Title
struct Title_tDC7DA3F4A783D017736F6DE0F1AB9E27437522AA;
// UnityEngine.Transform
struct Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1;
// Trigger
struct Trigger_t9FBC4B9D2172AC5785AC296E1CC2CCD678F61DD3;
// DG.Tweening.Tween
struct Tween_t8CB06EBC48A5B6F5065C490E4F4909C18CE7983C;
// DG.Tweening.TweenCallback
struct TweenCallback_t7C8B8A38E7B30905FF1B83C943256EF23617BB24;
// System.Type
struct Type_t;
// UnityEngine.Events.UnityAction
struct UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7;
// UnityEngine.Events.UnityEvent
struct UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977;
// UnityEngine.UI.VertexHelper
struct VertexHelper_tB905FCB02AE67CBEE5F265FE37A5938FC5D136FE;
// System.Void
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915;
// Google.XR.ARCoreExtensions.VpsAvailabilityPromise
struct VpsAvailabilityPromise_tD7DB90CD6085F0BF774A6E6D2B92DE41780A47C1;
// UnityEngine.WaitForSeconds
struct WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3;
// UnityEngine.XR.ARSubsystems.XRAnchorSubsystem
struct XRAnchorSubsystem_tB8B108EFBD93D4AFD53DCE7BD599009F79D214AF;
// UnityEngine.XR.ARSubsystems.XRPlaneSubsystem
struct XRPlaneSubsystem_t6FC18D5B1FF10EE9B4A751977B526F44A16EDB62;
// UnityEngine.XR.ARSubsystems.XRRaycastSubsystem
struct XRRaycastSubsystem_t48087E79DE9617C7E866875C8DDD3124C9E068B7;
// UnityEngine.XR.ARSubsystems.XRSessionSubsystem
struct XRSessionSubsystem_t1E6E6CD0C279BA8BC4E4ED94E539552036B9C399;
// Google.XR.ARCoreExtensions.ARCoreExtensions/OnChooseXRCameraConfigurationEvent
struct OnChooseXRCameraConfigurationEvent_t53F1C593A476BE5A1C3AC0C3AF1032C79ABEB080;
// UnityEngine.AudioClip/PCMReaderCallback
struct PCMReaderCallback_t3396D9613664F0AFF65FB91018FD0F901CC16F1E;
// UnityEngine.AudioClip/PCMSetPositionCallback
struct PCMSetPositionCallback_t8D7135A2FB40647CAEC93F5254AD59E18DEB6072;
// UnityEngine.UI.Button/ButtonClickedEvent
struct ButtonClickedEvent_t8EA72E90B3BD1392FB3B3EF167D5121C23569E4C;
// UnityEngine.Camera/CameraCallback
struct CameraCallback_t844E527BFE37BC0495E7F67993E43C07642DA9DD;
// Google.XR.ARCoreExtensions.Samples.Geospatial.GeospatialController/<AvailabilityCheck>d__31
struct U3CAvailabilityCheckU3Ed__31_t6354B82010109F309788B4A0FF01E47D13B06594;
// Google.XR.ARCoreExtensions.Samples.Geospatial.GeospatialController/<StartLocationService>d__32
struct U3CStartLocationServiceU3Ed__32_tD9DDF9E93BC369B8B82B00FE287C67EEC056246A;
// UnityEngine.UI.MaskableGraphic/CullStateChangedEvent
struct CullStateChangedEvent_t6073CD0D951EC1256BF74B8F9107D68FC89B99B8;
// NotesGenerator/<GetRondomNum>d__17
struct U3CGetRondomNumU3Ed__17_t9A4C5E43B0267F9539B52C841AEAB83479F33F5D;
// NotesMoveController/<>c
struct U3CU3Ec_t76E842CF01F5D7B362D9F99F71BE046DC734F0F4;
// ObjectRotation/<RotateObject>d__1
struct U3CRotateObjectU3Ed__1_tD8B0EC501AD49D7C2C49387386B19B92F4F10673;
// UnityEngine.RectTransform/ReapplyDrivenProperties
struct ReapplyDrivenProperties_t3482EA130A01FF7EE2EEFE37F66A5215D08CFE24;
// RhythmObject/<>c
struct U3CU3Ec_t548FF58F963A7E823CF0D96D17F3FCFD4EBF1A60;
// RhythmObject/<>c__DisplayClass9_0
struct U3CU3Ec__DisplayClass9_0_t30D08EC9E5627A79DF6BCDBEFCE7EF94B689FA89;
// RhythmObject/<>c__DisplayClass9_1
struct U3CU3Ec__DisplayClass9_1_t45FC89DF84F4F0F19E36C3456C131ACA83E6358E;
// RhythmObject/<Rhythm>d__7
struct U3CRhythmU3Ed__7_t17E6EC4C562042C7EA78801D0E1358C7B856DF53;
// SROptions/DisplayNameAttribute
struct DisplayNameAttribute_t36237DD738F919AF725D1A3160E859B8DB716264;
// SROptions/IncrementAttribute
struct IncrementAttribute_tA4CDFC00F53F82FE8F31085E97F79F4BA1B76DD1;
// SROptions/NumberRangeAttribute
struct NumberRangeAttribute_tF57CDD96B27582AF4FA0311F052A33A62467ABAD;
// SROptions/SortAttribute
struct SortAttribute_t3BCAFC7857086FCCD52C024CFC9F51F00155E6FB;
// UnityEngine.UI.Slider/SliderEvent
struct SliderEvent_t92A82EF6C62E15AF92B640FE2D960E877E8C6555;

IL2CPP_EXTERN_C RuntimeClass* ARAnchorManagerExtensions_t1FCBDAAD3ADF35808ECE7699833CD08AFBC05394_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ARFeatheredPlaneMeshVisualizer_t5B508CD2D37F908F4359D7DED031B3C357E34955_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ARSession_t13374A44A01F2C6D90578F93E0F0DA2482BE3014_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Action_1_t762BEDF03B3FAD9E52246AF6B4291030B8085074_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* AnchorCreator_tBBEE94135B5183E0A8EE52FB00513F69C7C980ED_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Dictionary_2_t3ED995699F3E88D06E5DA7362BEB7584DBD61662_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* DisplayNameAttribute_tECBA9AC4CCBE61186E2B3C397C93AAFA5A2631E8_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* EventSystem_t61C51380B105BE9D2C39C4F15B7E655659957707_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Func_2_t5EEB9DA1EC10E3B0AC9BE12D70E59948A16E8B3D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Func_2_tD73B7BD3399DAC2D727A9D19B39BF7DB6BB67C28_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_t0754071572EFE7A5C92A59495D2524FC935364E3_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_t129F965E3A52C7ACA849FAEC97997D9357ED21A5_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_t5C2EBF017989E44F3D1D11AF502E10F6F8D9AB53_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_t991BBC5A1D51F59A450367DF944DAA207F22D06D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_tD435DCC2A88E36DFC551EA5392CE0182F0C50E93_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* LocationServiceStatus_tF9F78681F963A53FD6CA4CDC2DDDBD7B4DF517F7_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* NotImplementedException_t6366FE4DCF15094C51F4833B91A2AE68D4DA90E8_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* PropertyChangedEventArgs_tFA01343D8F2BD799951B40A3EBF4A6B38EE63321_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* PropertyChangedEventHandler_tF1250C146BE6FB43477D29C5D18A10B6329419DA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Regex_tE773142C2BE45C5D362B0F815AFF831707A51772_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* RhythmObjectU5BU5D_tB69B4B2405497D929A9E0301E27713F005F92774_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SROptionsPropertyChanged_t53B79AE547753261AFBD1916519E6A1074669CA7_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SROptions_t00DA5107C80F05EB2730577E1FCA535FAD5F4A6F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SRServiceManager_t65EAD8CD1C096A4BCD42B5D36406A7954972394F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* String_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* TweenCallback_t7C8B8A38E7B30905FF1B83C943256EF23617BB24_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CAvailabilityCheckU3Ed__31_t6354B82010109F309788B4A0FF01E47D13B06594_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CGetRondomNumU3Ed__17_t9A4C5E43B0267F9539B52C841AEAB83479F33F5D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CRhythmU3Ed__7_t17E6EC4C562042C7EA78801D0E1358C7B856DF53_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CRotateObjectU3Ed__1_tD8B0EC501AD49D7C2C49387386B19B92F4F10673_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CStartLocationServiceU3Ed__32_tD9DDF9E93BC369B8B82B00FE287C67EEC056246A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec__DisplayClass9_0_t30D08EC9E5627A79DF6BCDBEFCE7EF94B689FA89_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec__DisplayClass9_1_t45FC89DF84F4F0F19E36C3456C131ACA83E6358E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec_t548FF58F963A7E823CF0D96D17F3FCFD4EBF1A60_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec_t76E842CF01F5D7B362D9F99F71BE046DC734F0F4_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* VpsAvailability_t45DB38FE9BF4135673CE5455506068164625A197_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral02E90F8C0D86AB378CD50D71762FFA8C873C709A;
IL2CPP_EXTERN_C String_t* _stringLiteral0304C2468FEB98972F5763D99C72997DEFFF8FF8;
IL2CPP_EXTERN_C String_t* _stringLiteral0474A5BF38319C39A3134C634655B6F727E91283;
IL2CPP_EXTERN_C String_t* _stringLiteral0C91CD8EE7C2E50167003549265794CFCDCBD47A;
IL2CPP_EXTERN_C String_t* _stringLiteral131018280018B48DB9FF86A96C7535E6FA339C24;
IL2CPP_EXTERN_C String_t* _stringLiteral198D3FB714208074696C1287B8F98445C09A9D0E;
IL2CPP_EXTERN_C String_t* _stringLiteral1A161FFFB1B272C7A4F44D9F53DFA75E8A5FCFA3;
IL2CPP_EXTERN_C String_t* _stringLiteral1ABCB9A2CA1FE87C833C0D42EF5790DE5D6D5D7A;
IL2CPP_EXTERN_C String_t* _stringLiteral1B34A45352A1F9AB3E6BCFB17173317AFF631C89;
IL2CPP_EXTERN_C String_t* _stringLiteral1CFB208F731355A92EB7DC4870AAEE0A4644DBEC;
IL2CPP_EXTERN_C String_t* _stringLiteral23114468D04FA2B7A2DA455B545DB914D0A3ED94;
IL2CPP_EXTERN_C String_t* _stringLiteral236D6F3A97CD6FDEEC5E6F6EAF121A6FF6088BA6;
IL2CPP_EXTERN_C String_t* _stringLiteral2409165FB90CD4A8B916FCA75790766B82C91748;
IL2CPP_EXTERN_C String_t* _stringLiteral281D2FCD2FD3E25172CF8BA5C7855BA2513BD8D9;
IL2CPP_EXTERN_C String_t* _stringLiteral2985C1ED86B8684A5DAA0349E4FE62C879E3B24D;
IL2CPP_EXTERN_C String_t* _stringLiteral2A4AF2371E5D32D286057BF0185547BF96F20333;
IL2CPP_EXTERN_C String_t* _stringLiteral33C3408429792F18A80C7AD5F332319D04EB6676;
IL2CPP_EXTERN_C String_t* _stringLiteral35228A78D78BD4F381E9B85F5B9D5B2950E49EAB;
IL2CPP_EXTERN_C String_t* _stringLiteral36960460C77F33A26C61DFC1635CE6F1FE6687B8;
IL2CPP_EXTERN_C String_t* _stringLiteral36D9F0AAA0D31A91724C1B5119E87EE5A886CBEC;
IL2CPP_EXTERN_C String_t* _stringLiteral397525FF189FF595FA01C37AC7AD879884534DCA;
IL2CPP_EXTERN_C String_t* _stringLiteral3B92371291067AD75040BF1D58F84102F417DF06;
IL2CPP_EXTERN_C String_t* _stringLiteral3E538D25AD88E153C305B95581F14918239F2431;
IL2CPP_EXTERN_C String_t* _stringLiteral3F561227197E6D33026D93CA3EB5B82D44E3DF3F;
IL2CPP_EXTERN_C String_t* _stringLiteral3FBB63CFAA7ABAA6A6729137CC09873389F54604;
IL2CPP_EXTERN_C String_t* _stringLiteral40E83ACCE0D042A519B971EC5FA530E519DEAD8E;
IL2CPP_EXTERN_C String_t* _stringLiteral413834F935BAA03648BADCDCA711EFD5D9BC8CCE;
IL2CPP_EXTERN_C String_t* _stringLiteral446EBFE0AF15621B72FD60AC796D8BDD96BA7175;
IL2CPP_EXTERN_C String_t* _stringLiteral48419E0AC7A3C471E758A3F53E24363D7898657B;
IL2CPP_EXTERN_C String_t* _stringLiteral496C35D9CB320A64C3EA3C04B184307C75231B59;
IL2CPP_EXTERN_C String_t* _stringLiteral4EC929BECF2ED51204D7DABA47615F80D85C5F62;
IL2CPP_EXTERN_C String_t* _stringLiteral4EF72BF92E3BED3B07B9CD3BE539FF166FBFC460;
IL2CPP_EXTERN_C String_t* _stringLiteral4FA739569214BAE2DAEDF14D329C6B8DCA6CBC11;
IL2CPP_EXTERN_C String_t* _stringLiteral5394AC7834212EAB0387622F17D130549EFAE8D7;
IL2CPP_EXTERN_C String_t* _stringLiteral54490EFACE87135FB0F006006EE52E2B2AB48860;
IL2CPP_EXTERN_C String_t* _stringLiteral55812AB581137C6243E3C6AD5001BFDAF15D2905;
IL2CPP_EXTERN_C String_t* _stringLiteral5E97CE89A06592489C4D7C944ABE1BB00134C951;
IL2CPP_EXTERN_C String_t* _stringLiteral62EC32DB0165ABAB454A1C8263AA078C3F4A968D;
IL2CPP_EXTERN_C String_t* _stringLiteral6723EB6602FE6F893E14A80270C65B9E51A270B8;
IL2CPP_EXTERN_C String_t* _stringLiteral67BB81633478E0EF510BF3FFDCF8DA2582FE6603;
IL2CPP_EXTERN_C String_t* _stringLiteral6853B00927EB8BAE6FD25AE411383457D8EC0D05;
IL2CPP_EXTERN_C String_t* _stringLiteral6D93F450F49054FA2C14FE9372242515581F2E99;
IL2CPP_EXTERN_C String_t* _stringLiteral77FA365523C8AD1C1BCB07FE41D0BA9D232632F4;
IL2CPP_EXTERN_C String_t* _stringLiteral83DDE7934EAE8CD16AB7A894865E42A838890063;
IL2CPP_EXTERN_C String_t* _stringLiteral849043193B4849A97BE2F08CFC3CAC883A0F096C;
IL2CPP_EXTERN_C String_t* _stringLiteral8BB11615583CE93378185D25063928D9588FA6AA;
IL2CPP_EXTERN_C String_t* _stringLiteral91483CC3E2DDED22CEABAF3EE1799436CE58D236;
IL2CPP_EXTERN_C String_t* _stringLiteral92F5C320416B7024B41980FB2DF567E10F455BCD;
IL2CPP_EXTERN_C String_t* _stringLiteral9CCDB026EE43F45346EE2F3B7E828B8DC0E8327D;
IL2CPP_EXTERN_C String_t* _stringLiteral9E9B870ED7C93ECEB162D61CDC01C865A5D9FF69;
IL2CPP_EXTERN_C String_t* _stringLiteral9ED10B22B141F22BF66FC7BE46A5127C72DF9F52;
IL2CPP_EXTERN_C String_t* _stringLiteralA628C3EA1A977D457A54A899CA2F513C35C50B9C;
IL2CPP_EXTERN_C String_t* _stringLiteralAAC7F2E26DFBB7E229C1E347B995E0CD8DFAE8E1;
IL2CPP_EXTERN_C String_t* _stringLiteralAAF764D0E49CF83587ED98F50A47A2B697560BC3;
IL2CPP_EXTERN_C String_t* _stringLiteralAE508547AA6A7CB0059B0EB451E20BE3252CAACA;
IL2CPP_EXTERN_C String_t* _stringLiteralB419CFD5B49CDCB4D22631C6EFC26C19DF54DC3C;
IL2CPP_EXTERN_C String_t* _stringLiteralBEE62EE1896B072E94C4F64BA456F5C8EB28A281;
IL2CPP_EXTERN_C String_t* _stringLiteralC176B4F6F2542477D019DEF12376DA784C53AAFA;
IL2CPP_EXTERN_C String_t* _stringLiteralC3DAD0127402D548D48FBAC7503BF9B6A239ECD5;
IL2CPP_EXTERN_C String_t* _stringLiteralC613D4D2FE3F5D74727D376F793286A2BCBB1391;
IL2CPP_EXTERN_C String_t* _stringLiteralC76CAB94027DABB6DEE8EF070CD522AD141579C8;
IL2CPP_EXTERN_C String_t* _stringLiteralCAF8804297181FF007CA835529DD4477CFD94A70;
IL2CPP_EXTERN_C String_t* _stringLiteralCBC7B2D809AA30E69986685B83F487032D9121D5;
IL2CPP_EXTERN_C String_t* _stringLiteralCC1ED1436C87CDBD321D66C84519BA833DF67915;
IL2CPP_EXTERN_C String_t* _stringLiteralD41D89DAD98E1F1783260FD0A5A774F557A05F0F;
IL2CPP_EXTERN_C String_t* _stringLiteralD4F10F0250BE015A970ECE39AF0E63147876656F;
IL2CPP_EXTERN_C String_t* _stringLiteralD56CFB1F5FA3C6B4DFB1376F05C30AB9C297A837;
IL2CPP_EXTERN_C String_t* _stringLiteralD657DE5D1A36FEE99E9A7DA0B50BB8B67C8E418A;
IL2CPP_EXTERN_C String_t* _stringLiteralD6DCC897C02A857315752249765CB47ADDF4E5C7;
IL2CPP_EXTERN_C String_t* _stringLiteralD86777475CF3ABA3D3C4885431342545757CC3E9;
IL2CPP_EXTERN_C String_t* _stringLiteralD86FFD4AE2DFBB672C26E2604E0A6C0C951ED085;
IL2CPP_EXTERN_C String_t* _stringLiteralD95D901311B29A4E295DB3A65D91D1272FE0BDF5;
IL2CPP_EXTERN_C String_t* _stringLiteralD9608B831590ABEDB57F358CBDE6D8DFFC1E5390;
IL2CPP_EXTERN_C String_t* _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709;
IL2CPP_EXTERN_C String_t* _stringLiteralDB3AF064A254C20AC699C2808DE33F07E9D62F76;
IL2CPP_EXTERN_C String_t* _stringLiteralE2B2F9260439AAD7EBA2A7CBDAD1C9849D3B6E85;
IL2CPP_EXTERN_C String_t* _stringLiteralE3C33F88508ABC8CF90E174E89955F22796605E4;
IL2CPP_EXTERN_C String_t* _stringLiteralE785E5E69DA66D28A0AAA9B80445845F056E2BAC;
IL2CPP_EXTERN_C String_t* _stringLiteralEBB1E8025FD30BB2C729117291A3430B097EEF52;
IL2CPP_EXTERN_C String_t* _stringLiteralECE4117399A9C27DA4899625DD503B7F2929546C;
IL2CPP_EXTERN_C String_t* _stringLiteralED02A56B6303134574A918EC74876688AED70ABA;
IL2CPP_EXTERN_C String_t* _stringLiteralED772B549705A1BF599485764F40D84130414B4B;
IL2CPP_EXTERN_C String_t* _stringLiteralEE2F1BFE1BE99B9017E10F89B16590A5D791925A;
IL2CPP_EXTERN_C String_t* _stringLiteralF3EF69386AE9E550B6452AFF1DC4D09789086488;
IL2CPP_EXTERN_C String_t* _stringLiteralF60B928C99C24D9E42E0AB9D92799F0489DBA343;
IL2CPP_EXTERN_C String_t* _stringLiteralFDCFF894F5BDB5F29AB81F8AC8FCF9BB7C1A9368;
IL2CPP_EXTERN_C String_t* _stringLiteralFDD014F91C66371E34E858118A2CA2D827E4F259;
IL2CPP_EXTERN_C String_t* _stringLiteralFF9C9FE0617816D5B9C97F5D999DD2F1D9AF6739;
IL2CPP_EXTERN_C const RuntimeMethod* ARFeatheredPlaneMeshVisualizer_ARPlane_boundaryUpdated_mB3D9BBD14EA1FE3ECDBACC2DB89C1B110B8B6B5F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Combotext_SetCombotext_m0F6918DB4C455AEB65212332928C0A6EFEA65CE5_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisARAnchorManager_tF68C46300BD6F2E83E3360BF9297C3C50F5D6B3E_mABCA912A8D3AFCEEA2F2FE0EF30C541DA7DD7907_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisARPlaneManager_t9DA6C512BDCFFBEE8B3DAA7170EB3BFFDE26A928_m668A6CC15F573ABC389E612A2423599B5ADDC2EF_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisARPlaneMeshVisualizer_t21838C8E2676AC524939E67CB965925E924E018F_m41229EDC62D1149A73F81E7B0BE27B4C1C293A01_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisARPlane_tB2F02248AD4019D141553B25C1B9005913E98EF0_m8005DAC7F65600404981B996A714B5C7D29A359F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisARRaycastManager_tD9459374F0F5BD9E2E4A8A1C665E7F33F9C2EE44_m255D1364D056A608CF5BB4AAB1BA1AD4CB78DE83_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisAudioSource_t871AC2272F896738252F04EE949AEF5B241D3299_m42DA4DEA19EB60D80CBED7413ADEB27FA033C77B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisMeshRenderer_t4B7747212F0B88244BB7790C61AE124BFC15BAAE_m0EDA0079FA3617687C4A28623B79A37D618D9CFB_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisRectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5_m0640480E7E38BB88B0D1F6AD59E697C8EE6AAFA4_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponentsInChildren_TisRenderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF_m35AC34F858BD2F34770712CD020AA0518D9409C7_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponentsInChildren_TisTransform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1_mD80D5A6BA73EE3066CFCE2345C3F4B9FC2E28837_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_Add_mA5013CBA44F1B1DC6398B4430E25EE98A9C11FDF_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_Clear_m92298CA3F2C40724B4D2D9E4D9C4122A70E0C686_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_GetEnumerator_m48AB1DC89BC633DFBA85999481CACE5CBDB6D4D7_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2__ctor_mEC9E9E9AF403DF7262870C6B7233848BE7458858_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerable_OrderBy_TisKeyValuePair_2_tE51B4AA1B587AD85A79363114EB7C474634D1AD8_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m5DD492A958292F9AF5E5C1261E91006CFAEA1ACB_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerable_Select_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_TisVector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_mEB1001BA7D7B791008645AC272676FD3357B6B69_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerable_ToArray_TisVector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_m86F205DD4D5F3E96A8588BC389B20C86541EA790_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerable_ToList_TisRenderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF_m629D4020B77CF03738959979523825DE9A307DC3_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_Dispose_m39794B37E9AE88ED22C03824DE8D637C0DADBAF0_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_Dispose_m8A7D84A46E830A9A7C690AFD40780E721E0212D3_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_Dispose_m9BF6C1C74CD711998DC8FAE5D6B8083586F5CFB5_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_Dispose_m9D681B3790175BA58928D0731C678FA8D3AC08E8_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_MoveNext_m12F712A18AFF893F08B98E7DEC338D929F2745D8_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_MoveNext_m36545FD9B7C5DA66EAD80FD8813D279003BA8749_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_MoveNext_mBAA697FE341E389C86536D9444A3E4AC02109E87_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_MoveNext_mE9F6469E9C52AF5A301EC8FEF983A3C5BFBF2C4F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_get_Current_m0217E3869711E12C240F3BE879F1699162514F50_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_get_Current_m765B5B047B9C59BB1A6DF6B8B884A1714DF83060_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_get_Current_mCBBD283BB42C56D73B7C4194020EC95292B36129_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_get_Current_mF219FEB0F2097ED593A4E6E2283167335AFBA4B6_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_AddComponent_TisAudioSource_t871AC2272F896738252F04EE949AEF5B241D3299_m0E8EFDB9B3D8DF1ADE10C56D3168A9C1BA19BF14_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponent_TisButton_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098_mB997CBF78A37938DC1624352E12D0205078CB290_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponent_TisCombotext_t66C71AF95DB28158B23E969B02D5102D37877FAA_m18D8550B9905B72C133367C1A69285FCB8286EBA_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponent_TisScoretext_t81C3E9BC508DF6567C782ECEF50A8CA49CFBC53B_mA9684CB865192F01841775287B493CA8E9487DC8_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponent_TisSlider_t87EA570E3D6556CABF57456C2F3873FFD86E652F_m3B73E32B09A6667056AC232DA5238351F51DB7EA_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* KeyValuePair_2_get_Key_m9C6DABAD84B892AB2F79F0AFB1497258CF3CC79A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* KeyValuePair_2_get_Value_mD4081DDFBF79080BB1E9CEDD9893305890320300_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Add_m36829EC89855C8C23CEDA8C5F5B12B76ADFE2248_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Add_m43FBF207375C6E06B8C45ECE614F9B8008FB686E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Add_m79E50C4F592B1703F4B76A8BE7B4855515460CA1_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Add_m9DD96A685E24BAB041179C80B0CF8875AE04426A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Clear_m455780C5A45049F9BDC25EAD3BA10A681D16385D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Clear_m5FC367B31C239426FA8CCE3EEB6D76AA2684BCAC_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_GetEnumerator_m01FCD3FC513065087F7E312BC9DE2D1C3FF655E5_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_GetEnumerator_mC86A1EF9E784B7E7B5C00025383C6381B831F88C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_GetEnumerator_mEE1B2EFD76218372C2F754E07BFDE6CA16244502_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_m447372C1EF7141193B93090A77395B786C72C7BC_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_m6B5722DD0A8C0D3D4A1656C5A5E8D0A784DC85B9_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_m803E10F7A50EB22BF82C0C1AB251D5407B4496DE_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_m97CA83C0EF5D88B61FDF3CE17A6A4A8677697DD4_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_mC54E2BCBE43279A96FC082F5CDE2D76388BD8F9C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_mDC3E95DC5C927A867B9B42EDE1945F909B894268_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_mED28D7886C86087D0894D3D73A471B948B145E83_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Capacity_m1810FC505867C713DCDDD7468F8BA2BF1DF0D3B6_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Count_m46EEFFA770BE665EA0CB3A5332E941DA4B3C1D37_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Item_m443F0D48247776D4257E06597AF794BCF6D8020F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Item_m8F2E15FC96DA75186C51228128A0660709E4E810_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_set_Capacity_mF3F5104AB534524CF6D04659241FBD48C9080FFE_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* NotesMoveController_U3CStartU3Eb__1_1_m51833016AC835782BBCB16147CEEB2D865838952_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Nullable_1__ctor_m75F3ABB694E26670F021136BD3B9E71A65948BC2_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m58C654F1134533E29502629CA67645682B404811_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m831D2F71DF2AA6C93AFDFEFA04CF2CFC5FBBCDB4_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* SRServiceManager_GetService_TisInternalOptionsRegistry_t37F5D710767EF2F74CF225D94C602B84151A8F96_m9C1B26F6376FD4144BC139300A02AC30A89EF6DC_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Scoretext_SetScoretext_m708AA50AD2C152685CDBE36688E4D83CFEF47B1E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Title_StartGame_m7A64F4362F6CA60569D6D4D4D2CC1907D29E50FC_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* TweenSettingsExtensions_OnComplete_TisTweenerCore_3_t4911E6704673AA7505D10A9D0B0D989CEC689DCA_mC4E9F7688EDBC9B7A04BB856F108CDDD0EB5767F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* TweenSettingsExtensions_SetLoops_TisTweenerCore_3_tCD82DFC45FB71C681FA8659EA63A7D7D16BFFE77_m8F1A8D75E681054AF18A9991A7FAF2903DFAA265_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CAvailabilityCheckU3Ed__31_System_Collections_IEnumerator_Reset_mCD98CB9C05484A1D424CF2894208E58CEAF1C592_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CGetRondomNumU3Ed__17_System_Collections_IEnumerator_Reset_m961CF543BB3370A2552A5936DD254269A8845C02_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CRhythmU3Ed__7_System_Collections_IEnumerator_Reset_m742F7ADEB3C19FE963102426D3AA87E8C2CB4A4C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CRotateObjectU3Ed__1_System_Collections_IEnumerator_Reset_m97F17200C022575DD7767952960B16E0E777C0BD_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CStartLocationServiceU3Ed__32_System_Collections_IEnumerator_Reset_m92BBF2228350B346751F5646C2CAE1EBE8A093DA_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec_U3CActiveBackGroundObjectU3Eb__8_0_m6A7B9DE3412A4CF7C377A25A041CD3FA98E2A06C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec_U3CStartU3Eb__1_0_mA9435F2A02492F8867EF098A60542F81F1E41B95_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec__DisplayClass9_1_U3CActiveOrInactiveObjectsU3Eb__0_mF4C86E6268093E19C3189A58F48428B4143299F8_RuntimeMethod_var;
struct ContactPoint_t241857959C0D517C21F541BB04B63FA6C1EAB3F9;
struct Delegate_t_marshaled_com;
struct Delegate_t_marshaled_pinvoke;
struct Exception_t_marshaled_com;
struct Exception_t_marshaled_pinvoke;

struct DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771;
struct GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF;
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918;
struct RendererU5BU5D_t32FDD782F67917B2291EA4FF242719877440A02A;
struct RhythmObjectU5BU5D_tB69B4B2405497D929A9E0301E27713F005F92774;
struct TransformU5BU5D_tBB9C5F5686CAE82E3D97D43DF0F3D68ABF75EC24;
struct Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <Module>
struct U3CModuleU3E_tBB65183F1134474D09FF49B95625D25472B9BA8B 
{
};

// System.Collections.Generic.Dictionary`2<System.Int32,UnityEngine.GameObject>
struct Dictionary_2_t3ED995699F3E88D06E5DA7362BEB7584DBD61662  : public RuntimeObject
{
	// System.Int32[] System.Collections.Generic.Dictionary`2::_buckets
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ____buckets_0;
	// System.Collections.Generic.Dictionary`2/Entry<TKey,TValue>[] System.Collections.Generic.Dictionary`2::_entries
	EntryU5BU5D_t50812F6AE576839B5F5182BB3CFA6BA7464E8110* ____entries_1;
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
	KeyCollection_tC7244BD40ED4C8BF23C8756BFE90844B71753D66* ____keys_7;
	// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::_values
	ValueCollection_t945C1D1410FDCBD1C84A82D14A578BD5FFBC38F9* ____values_8;
	// System.Object System.Collections.Generic.Dictionary`2::_syncRoot
	RuntimeObject* ____syncRoot_9;
};

// System.Collections.Generic.List`1<UnityEngine.XR.ARFoundation.ARAnchor>
struct List_1_t5C2EBF017989E44F3D1D11AF502E10F6F8D9AB53  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	ARAnchorU5BU5D_t589CB7678527B30DBFABED0E377BC500C9D3454A* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

struct List_1_t5C2EBF017989E44F3D1D11AF502E10F6F8D9AB53_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	ARAnchorU5BU5D_t589CB7678527B30DBFABED0E377BC500C9D3454A* ___s_emptyArray_5;
};

// System.Collections.Generic.List`1<UnityEngine.XR.ARFoundation.ARRaycastHit>
struct List_1_t0754071572EFE7A5C92A59495D2524FC935364E3  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	ARRaycastHitU5BU5D_t34FE14E360F945895923A0FE69CC277E7D13027E* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

struct List_1_t0754071572EFE7A5C92A59495D2524FC935364E3_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	ARRaycastHitU5BU5D_t34FE14E360F945895923A0FE69CC277E7D13027E* ___s_emptyArray_5;
};

// System.Collections.Generic.List`1<UnityEngine.GameObject>
struct List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

struct List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* ___s_emptyArray_5;
};

// System.Collections.Generic.List`1<Google.XR.ARCoreExtensions.Samples.Geospatial.GeospatialAnchorHistory>
struct List_1_t129F965E3A52C7ACA849FAEC97997D9357ED21A5  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	GeospatialAnchorHistoryU5BU5D_tA0C4C60A0BC9FD540F02A271D88E148E4FD6B244* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

struct List_1_t129F965E3A52C7ACA849FAEC97997D9357ED21A5_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	GeospatialAnchorHistoryU5BU5D_tA0C4C60A0BC9FD540F02A271D88E148E4FD6B244* ___s_emptyArray_5;
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

// System.Collections.Generic.List`1<UnityEngine.Renderer>
struct List_1_tD435DCC2A88E36DFC551EA5392CE0182F0C50E93  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	RendererU5BU5D_t32FDD782F67917B2291EA4FF242719877440A02A* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

struct List_1_tD435DCC2A88E36DFC551EA5392CE0182F0C50E93_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	RendererU5BU5D_t32FDD782F67917B2291EA4FF242719877440A02A* ___s_emptyArray_5;
};

// System.Collections.Generic.List`1<UnityEngine.Transform>
struct List_1_t991BBC5A1D51F59A450367DF944DAA207F22D06D  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	TransformU5BU5D_tBB9C5F5686CAE82E3D97D43DF0F3D68ABF75EC24* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

struct List_1_t991BBC5A1D51F59A450367DF944DAA207F22D06D_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	TransformU5BU5D_tBB9C5F5686CAE82E3D97D43DF0F3D68ABF75EC24* ___s_emptyArray_5;
};

// System.Collections.Generic.List`1<UnityEngine.Vector3>
struct List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

struct List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* ___s_emptyArray_5;
};

// DG.Tweening.Core.ABSSequentiable
struct ABSSequentiable_t05DF85FC63E3650D2D4CF6ABBA0F43263EB8CE89  : public RuntimeObject
{
	// DG.Tweening.TweenType DG.Tweening.Core.ABSSequentiable::tweenType
	int32_t ___tweenType_0;
	// System.Single DG.Tweening.Core.ABSSequentiable::sequencedPosition
	float ___sequencedPosition_1;
	// System.Single DG.Tweening.Core.ABSSequentiable::sequencedEndPosition
	float ___sequencedEndPosition_2;
	// DG.Tweening.TweenCallback DG.Tweening.Core.ABSSequentiable::onStart
	TweenCallback_t7C8B8A38E7B30905FF1B83C943256EF23617BB24* ___onStart_3;
};
struct Il2CppArrayBounds;

// System.Attribute
struct Attribute_tFDA8EFEFB0711976D22474794576DAF28F7440AA  : public RuntimeObject
{
};

// System.Text.RegularExpressions.Capture
struct Capture_tE11B735186DAFEE5F7A3BF5A739E9CCCE99DC24A  : public RuntimeObject
{
	// System.Int32 System.Text.RegularExpressions.Capture::<Index>k__BackingField
	int32_t ___U3CIndexU3Ek__BackingField_0;
	// System.Int32 System.Text.RegularExpressions.Capture::<Length>k__BackingField
	int32_t ___U3CLengthU3Ek__BackingField_1;
	// System.String System.Text.RegularExpressions.Capture::<Text>k__BackingField
	String_t* ___U3CTextU3Ek__BackingField_2;
};

// UnityEngine.CustomYieldInstruction
struct CustomYieldInstruction_t6B81A50D5D210C1ACAAE247FB53B65CDFFEB7617  : public RuntimeObject
{
};

// System.EventArgs
struct EventArgs_t37273F03EAC87217701DD431B190FBD84AD7C377  : public RuntimeObject
{
};

struct EventArgs_t37273F03EAC87217701DD431B190FBD84AD7C377_StaticFields
{
	// System.EventArgs System.EventArgs::Empty
	EventArgs_t37273F03EAC87217701DD431B190FBD84AD7C377* ___Empty_0;
};

// Google.XR.ARCoreExtensions.Samples.Geospatial.GeospatialAnchorHistoryCollection
struct GeospatialAnchorHistoryCollection_tE5EDB6915BC64A3689D5063C0AE9BDCDBDEB2BBD  : public RuntimeObject
{
	// System.Collections.Generic.List`1<Google.XR.ARCoreExtensions.Samples.Geospatial.GeospatialAnchorHistory> Google.XR.ARCoreExtensions.Samples.Geospatial.GeospatialAnchorHistoryCollection::Collection
	List_1_t129F965E3A52C7ACA849FAEC97997D9357ED21A5* ___Collection_0;
};

// SRDebugger.Internal.InternalOptionsRegistry
struct InternalOptionsRegistry_t37F5D710767EF2F74CF225D94C602B84151A8F96  : public RuntimeObject
{
	// System.Collections.Generic.List`1<System.Object> SRDebugger.Internal.InternalOptionsRegistry::_registeredContainers
	List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* ____registeredContainers_0;
	// System.Action`1<System.Object> SRDebugger.Internal.InternalOptionsRegistry::_handler
	Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* ____handler_1;
};

// UnityEngine.LocationService
struct LocationService_tF2F2720FE2C07562EBFD128889F9A99F4B41B1B2  : public RuntimeObject
{
};

// SROptions
struct SROptions_t00DA5107C80F05EB2730577E1FCA535FAD5F4A6F  : public RuntimeObject
{
	// SROptionsPropertyChanged SROptions::PropertyChanged
	SROptionsPropertyChanged_t53B79AE547753261AFBD1916519E6A1074669CA7* ___PropertyChanged_1;
	// System.ComponentModel.PropertyChangedEventHandler SROptions::InterfacePropertyChangedEventHandler
	PropertyChangedEventHandler_tF1250C146BE6FB43477D29C5D18A10B6329419DA* ___InterfacePropertyChangedEventHandler_2;
};

struct SROptions_t00DA5107C80F05EB2730577E1FCA535FAD5F4A6F_StaticFields
{
	// SROptions SROptions::_current
	SROptions_t00DA5107C80F05EB2730577E1FCA535FAD5F4A6F* ____current_0;
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

// UnityEngine.Events.UnityEventBase
struct UnityEventBase_t4968A4C72559F35C0923E4BD9C042C3A842E1DB8  : public RuntimeObject
{
	// UnityEngine.Events.InvokableCallList UnityEngine.Events.UnityEventBase::m_Calls
	InvokableCallList_t309E1C8C7CE885A0D2F98C84CEA77A8935688382* ___m_Calls_0;
	// UnityEngine.Events.PersistentCallGroup UnityEngine.Events.UnityEventBase::m_PersistentCalls
	PersistentCallGroup_tB826EDF15DC80F71BCBCD8E410FD959A04C33F25* ___m_PersistentCalls_1;
	// System.Boolean UnityEngine.Events.UnityEventBase::m_CallsDirty
	bool ___m_CallsDirty_2;
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

// UnityEngine.YieldInstruction
struct YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D  : public RuntimeObject
{
};
// Native definition for P/Invoke marshalling of UnityEngine.YieldInstruction
struct YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D_marshaled_pinvoke
{
};
// Native definition for COM marshalling of UnityEngine.YieldInstruction
struct YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D_marshaled_com
{
};

// Google.XR.ARCoreExtensions.Samples.Geospatial.GeospatialController/<StartLocationService>d__32
struct U3CStartLocationServiceU3Ed__32_tD9DDF9E93BC369B8B82B00FE287C67EEC056246A  : public RuntimeObject
{
	// System.Int32 Google.XR.ARCoreExtensions.Samples.Geospatial.GeospatialController/<StartLocationService>d__32::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object Google.XR.ARCoreExtensions.Samples.Geospatial.GeospatialController/<StartLocationService>d__32::<>2__current
	RuntimeObject* ___U3CU3E2__current_1;
	// Google.XR.ARCoreExtensions.Samples.Geospatial.GeospatialController Google.XR.ARCoreExtensions.Samples.Geospatial.GeospatialController/<StartLocationService>d__32::<>4__this
	GeospatialController_t69A2BBD44F5A190BB256B888033F5297AF0A0D2F* ___U3CU3E4__this_2;
};

// NotesGenerator/<GetRondomNum>d__17
struct U3CGetRondomNumU3Ed__17_t9A4C5E43B0267F9539B52C841AEAB83479F33F5D  : public RuntimeObject
{
	// System.Int32 NotesGenerator/<GetRondomNum>d__17::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object NotesGenerator/<GetRondomNum>d__17::<>2__current
	RuntimeObject* ___U3CU3E2__current_1;
	// NotesGenerator NotesGenerator/<GetRondomNum>d__17::<>4__this
	NotesGenerator_tD968B1468A55A495385ACE41CDC9423D02852B91* ___U3CU3E4__this_2;
};

// NotesMoveController/<>c
struct U3CU3Ec_t76E842CF01F5D7B362D9F99F71BE046DC734F0F4  : public RuntimeObject
{
};

struct U3CU3Ec_t76E842CF01F5D7B362D9F99F71BE046DC734F0F4_StaticFields
{
	// NotesMoveController/<>c NotesMoveController/<>c::<>9
	U3CU3Ec_t76E842CF01F5D7B362D9F99F71BE046DC734F0F4* ___U3CU3E9_0;
	// System.Func`2<UnityEngine.GameObject,UnityEngine.Vector3> NotesMoveController/<>c::<>9__1_0
	Func_2_tD73B7BD3399DAC2D727A9D19B39BF7DB6BB67C28* ___U3CU3E9__1_0_1;
};

// ObjectRotation/<RotateObject>d__1
struct U3CRotateObjectU3Ed__1_tD8B0EC501AD49D7C2C49387386B19B92F4F10673  : public RuntimeObject
{
	// System.Int32 ObjectRotation/<RotateObject>d__1::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object ObjectRotation/<RotateObject>d__1::<>2__current
	RuntimeObject* ___U3CU3E2__current_1;
	// ObjectRotation ObjectRotation/<RotateObject>d__1::<>4__this
	ObjectRotation_t197E99EE089921C164133658B691481669871B56* ___U3CU3E4__this_2;
};

// RhythmObject/<>c
struct U3CU3Ec_t548FF58F963A7E823CF0D96D17F3FCFD4EBF1A60  : public RuntimeObject
{
};

struct U3CU3Ec_t548FF58F963A7E823CF0D96D17F3FCFD4EBF1A60_StaticFields
{
	// RhythmObject/<>c RhythmObject/<>c::<>9
	U3CU3Ec_t548FF58F963A7E823CF0D96D17F3FCFD4EBF1A60* ___U3CU3E9_0;
	// System.Func`2<System.Collections.Generic.KeyValuePair`2<System.Int32,UnityEngine.GameObject>,System.Int32> RhythmObject/<>c::<>9__8_0
	Func_2_t5EEB9DA1EC10E3B0AC9BE12D70E59948A16E8B3D* ___U3CU3E9__8_0_1;
};

// RhythmObject/<>c__DisplayClass9_0
struct U3CU3Ec__DisplayClass9_0_t30D08EC9E5627A79DF6BCDBEFCE7EF94B689FA89  : public RuntimeObject
{
	// System.Boolean RhythmObject/<>c__DisplayClass9_0::enable
	bool ___enable_0;
};

// RhythmObject/<>c__DisplayClass9_1
struct U3CU3Ec__DisplayClass9_1_t45FC89DF84F4F0F19E36C3456C131ACA83E6358E  : public RuntimeObject
{
	// UnityEngine.GameObject RhythmObject/<>c__DisplayClass9_1::targetObj
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___targetObj_0;
	// RhythmObject/<>c__DisplayClass9_0 RhythmObject/<>c__DisplayClass9_1::CS$<>8__locals1
	U3CU3Ec__DisplayClass9_0_t30D08EC9E5627A79DF6BCDBEFCE7EF94B689FA89* ___CSU24U3CU3E8__locals1_1;
};

// RhythmObject/<Rhythm>d__7
struct U3CRhythmU3Ed__7_t17E6EC4C562042C7EA78801D0E1358C7B856DF53  : public RuntimeObject
{
	// System.Int32 RhythmObject/<Rhythm>d__7::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object RhythmObject/<Rhythm>d__7::<>2__current
	RuntimeObject* ___U3CU3E2__current_1;
	// RhythmObject RhythmObject/<Rhythm>d__7::<>4__this
	RhythmObject_t48B5812FD53B54DB2453283D026C825E88D880A3* ___U3CU3E4__this_2;
};

// System.Collections.Generic.List`1/Enumerator<UnityEngine.XR.ARFoundation.ARAnchor>
struct Enumerator_t931CB0AD3EC6D604C0583DE600B7B530E43D9054 
{
	// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1/Enumerator::_list
	List_1_t5C2EBF017989E44F3D1D11AF502E10F6F8D9AB53* ____list_0;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::_index
	int32_t ____index_1;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::_version
	int32_t ____version_2;
	// T System.Collections.Generic.List`1/Enumerator::_current
	ARAnchor_t832D3D366D3F1D43F995A298974D4EDABACC0E06* ____current_3;
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

// System.Collections.Generic.List`1/Enumerator<UnityEngine.Renderer>
struct Enumerator_t4B5D90D1324DE6E043169A1E8DCD75512559AFA7 
{
	// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1/Enumerator::_list
	List_1_tD435DCC2A88E36DFC551EA5392CE0182F0C50E93* ____list_0;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::_index
	int32_t ____index_1;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::_version
	int32_t ____version_2;
	// T System.Collections.Generic.List`1/Enumerator::_current
	Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF* ____current_3;
};

// System.Collections.Generic.List`1/Enumerator<UnityEngine.Transform>
struct Enumerator_t519AE1DAA64E517296768BEA2E732ED47F76A91D 
{
	// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1/Enumerator::_list
	List_1_t991BBC5A1D51F59A450367DF944DAA207F22D06D* ____list_0;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::_index
	int32_t ____index_1;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::_version
	int32_t ____version_2;
	// T System.Collections.Generic.List`1/Enumerator::_current
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ____current_3;
};

// System.Collections.Generic.KeyValuePair`2<System.Int32,UnityEngine.GameObject>
struct KeyValuePair_2_tE51B4AA1B587AD85A79363114EB7C474634D1AD8 
{
	// TKey System.Collections.Generic.KeyValuePair`2::key
	int32_t ___key_0;
	// TValue System.Collections.Generic.KeyValuePair`2::value
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___value_1;
};

// System.Collections.Generic.KeyValuePair`2<System.Int32,System.Object>
struct KeyValuePair_2_tDC26B09C26BA829DDE331BCB6AF7C508C763D7A3 
{
	// TKey System.Collections.Generic.KeyValuePair`2::key
	int32_t ___key_0;
	// TValue System.Collections.Generic.KeyValuePair`2::value
	RuntimeObject* ___value_1;
};

// Unity.Collections.NativeArray`1<UnityEngine.Vector2>
struct NativeArray_1_t0BB246A2F65C2C705F83BEBE1B62D9543C330B70 
{
	// System.Void* Unity.Collections.NativeArray`1::m_Buffer
	void* ___m_Buffer_0;
	// System.Int32 Unity.Collections.NativeArray`1::m_Length
	int32_t ___m_Length_1;
	// Unity.Collections.Allocator Unity.Collections.NativeArray`1::m_AllocatorLabel
	int32_t ___m_AllocatorLabel_2;
};

// System.Nullable`1<System.Single>
struct Nullable_1_t3D746CBB6123D4569FF4DEA60BC4240F32C6FE75 
{
	// System.Boolean System.Nullable`1::hasValue
	bool ___hasValue_0;
	// T System.Nullable`1::value
	float ___value_1;
};

// TMPro.TMP_TextProcessingStack`1<TMPro.FontWeight>
struct TMP_TextProcessingStack_1_tA5C8CED87DD9E73F6359E23B334FFB5B6F813FD4 
{
	// T[] TMPro.TMP_TextProcessingStack`1::itemStack
	FontWeightU5BU5D_t2A406B5BAB0DD0F06E7F1773DB062E4AF98067BA* ___itemStack_0;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::index
	int32_t ___index_1;
	// T TMPro.TMP_TextProcessingStack`1::m_DefaultItem
	int32_t ___m_DefaultItem_2;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Capacity
	int32_t ___m_Capacity_3;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_RolloverSize
	int32_t ___m_RolloverSize_4;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Count
	int32_t ___m_Count_5;
};

// TMPro.TMP_TextProcessingStack`1<TMPro.HorizontalAlignmentOptions>
struct TMP_TextProcessingStack_1_t243EA1B5D7FD2295D6533B953F0BBE8F52EFB8A0 
{
	// T[] TMPro.TMP_TextProcessingStack`1::itemStack
	HorizontalAlignmentOptionsU5BU5D_t4D185662282BFB910D8B9A8199E91578E9422658* ___itemStack_0;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::index
	int32_t ___index_1;
	// T TMPro.TMP_TextProcessingStack`1::m_DefaultItem
	int32_t ___m_DefaultItem_2;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Capacity
	int32_t ___m_Capacity_3;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_RolloverSize
	int32_t ___m_RolloverSize_4;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Count
	int32_t ___m_Count_5;
};

// TMPro.TMP_TextProcessingStack`1<System.Int32>
struct TMP_TextProcessingStack_1_tFBA719426D68CE1F2B5849D97AF5E5D65846290C 
{
	// T[] TMPro.TMP_TextProcessingStack`1::itemStack
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___itemStack_0;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::index
	int32_t ___index_1;
	// T TMPro.TMP_TextProcessingStack`1::m_DefaultItem
	int32_t ___m_DefaultItem_2;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Capacity
	int32_t ___m_Capacity_3;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_RolloverSize
	int32_t ___m_RolloverSize_4;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Count
	int32_t ___m_Count_5;
};

// TMPro.TMP_TextProcessingStack`1<System.Single>
struct TMP_TextProcessingStack_1_t138EC06BE7F101AA0A3C8D2DC951E55AACE085E9 
{
	// T[] TMPro.TMP_TextProcessingStack`1::itemStack
	SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* ___itemStack_0;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::index
	int32_t ___index_1;
	// T TMPro.TMP_TextProcessingStack`1::m_DefaultItem
	float ___m_DefaultItem_2;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Capacity
	int32_t ___m_Capacity_3;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_RolloverSize
	int32_t ___m_RolloverSize_4;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Count
	int32_t ___m_Count_5;
};

// TMPro.TMP_TextProcessingStack`1<TMPro.TMP_ColorGradient>
struct TMP_TextProcessingStack_1_tC8FAEB17246D3B171EFD11165A5761AE39B40D0C 
{
	// T[] TMPro.TMP_TextProcessingStack`1::itemStack
	TMP_ColorGradientU5BU5D_t2F65E8C42F268DFF33BB1392D94BCF5B5087308A* ___itemStack_0;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::index
	int32_t ___index_1;
	// T TMPro.TMP_TextProcessingStack`1::m_DefaultItem
	TMP_ColorGradient_t17B51752B4E9499A1FF7D875DCEC1D15A0F4AEBB* ___m_DefaultItem_2;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Capacity
	int32_t ___m_Capacity_3;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_RolloverSize
	int32_t ___m_RolloverSize_4;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Count
	int32_t ___m_Count_5;
};

// UnityEngine.XR.ARFoundation.ARPlaneBoundaryChangedEventArgs
struct ARPlaneBoundaryChangedEventArgs_tE59EDE94575C8947AD3F1F8DA1370D0A426A5FFC 
{
	// UnityEngine.XR.ARFoundation.ARPlane UnityEngine.XR.ARFoundation.ARPlaneBoundaryChangedEventArgs::<plane>k__BackingField
	ARPlane_tB2F02248AD4019D141553B25C1B9005913E98EF0* ___U3CplaneU3Ek__BackingField_0;
};
// Native definition for P/Invoke marshalling of UnityEngine.XR.ARFoundation.ARPlaneBoundaryChangedEventArgs
struct ARPlaneBoundaryChangedEventArgs_tE59EDE94575C8947AD3F1F8DA1370D0A426A5FFC_marshaled_pinvoke
{
	ARPlane_tB2F02248AD4019D141553B25C1B9005913E98EF0* ___U3CplaneU3Ek__BackingField_0;
};
// Native definition for COM marshalling of UnityEngine.XR.ARFoundation.ARPlaneBoundaryChangedEventArgs
struct ARPlaneBoundaryChangedEventArgs_tE59EDE94575C8947AD3F1F8DA1370D0A426A5FFC_marshaled_com
{
	ARPlane_tB2F02248AD4019D141553B25C1B9005913E98EF0* ___U3CplaneU3Ek__BackingField_0;
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

// UnityEngine.Color32
struct Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B 
{
	union
	{
		#pragma pack(push, tp, 1)
		struct
		{
			// System.Int32 UnityEngine.Color32::rgba
			int32_t ___rgba_0;
		};
		#pragma pack(pop, tp)
		struct
		{
			int32_t ___rgba_0_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			// System.Byte UnityEngine.Color32::r
			uint8_t ___r_1;
		};
		#pragma pack(pop, tp)
		struct
		{
			uint8_t ___r_1_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___g_2_OffsetPadding[1];
			// System.Byte UnityEngine.Color32::g
			uint8_t ___g_2;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___g_2_OffsetPadding_forAlignmentOnly[1];
			uint8_t ___g_2_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___b_3_OffsetPadding[2];
			// System.Byte UnityEngine.Color32::b
			uint8_t ___b_3;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___b_3_OffsetPadding_forAlignmentOnly[2];
			uint8_t ___b_3_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___a_4_OffsetPadding[3];
			// System.Byte UnityEngine.Color32::a
			uint8_t ___a_4;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___a_4_OffsetPadding_forAlignmentOnly[3];
			uint8_t ___a_4_forAlignmentOnly;
		};
	};
};

// System.ComponentModel.DisplayNameAttribute
struct DisplayNameAttribute_tECBA9AC4CCBE61186E2B3C397C93AAFA5A2631E8  : public Attribute_tFDA8EFEFB0711976D22474794576DAF28F7440AA
{
	// System.String System.ComponentModel.DisplayNameAttribute::<DisplayNameValue>k__BackingField
	String_t* ___U3CDisplayNameValueU3Ek__BackingField_1;
};

struct DisplayNameAttribute_tECBA9AC4CCBE61186E2B3C397C93AAFA5A2631E8_StaticFields
{
	// System.ComponentModel.DisplayNameAttribute System.ComponentModel.DisplayNameAttribute::Default
	DisplayNameAttribute_tECBA9AC4CCBE61186E2B3C397C93AAFA5A2631E8* ___Default_0;
};

// System.Double
struct Double_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F 
{
	// System.Double System.Double::m_value
	double ___m_value_0;
};

// UnityEngine.DrivenRectTransformTracker
struct DrivenRectTransformTracker_tFB0706C933E3C68E4F377C204FCEEF091F1EE0B1 
{
	union
	{
		struct
		{
		};
		uint8_t DrivenRectTransformTracker_tFB0706C933E3C68E4F377C204FCEEF091F1EE0B1__padding[1];
	};
};

// System.Text.RegularExpressions.Group
struct Group_t26371E9136D6F43782C487B63C67C5FC4F472881  : public Capture_tE11B735186DAFEE5F7A3BF5A739E9CCCE99DC24A
{
	// System.Int32[] System.Text.RegularExpressions.Group::_caps
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ____caps_4;
	// System.Int32 System.Text.RegularExpressions.Group::_capcount
	int32_t ____capcount_5;
	// System.Text.RegularExpressions.CaptureCollection System.Text.RegularExpressions.Group::_capcoll
	CaptureCollection_t38405272BD6A6DA77CD51487FD39624C6E95CC93* ____capcoll_6;
	// System.String System.Text.RegularExpressions.Group::<Name>k__BackingField
	String_t* ___U3CNameU3Ek__BackingField_7;
};

struct Group_t26371E9136D6F43782C487B63C67C5FC4F472881_StaticFields
{
	// System.Text.RegularExpressions.Group System.Text.RegularExpressions.Group::s_emptyGroup
	Group_t26371E9136D6F43782C487B63C67C5FC4F472881* ___s_emptyGroup_3;
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

// SRDebugger.IncrementAttribute
struct IncrementAttribute_t4EEF3E3CB6B83DC54346F0AB93DEA5102A661150  : public Attribute_tFDA8EFEFB0711976D22474794576DAF28F7440AA
{
	// System.Double SRDebugger.IncrementAttribute::Increment
	double ___Increment_0;
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

// UnityEngine.LocationInfo
struct LocationInfo_tBFD49220A54B71CDF564F61822F7B8D524465441 
{
	// System.Double UnityEngine.LocationInfo::m_Timestamp
	double ___m_Timestamp_0;
	// System.Single UnityEngine.LocationInfo::m_Latitude
	float ___m_Latitude_1;
	// System.Single UnityEngine.LocationInfo::m_Longitude
	float ___m_Longitude_2;
	// System.Single UnityEngine.LocationInfo::m_Altitude
	float ___m_Altitude_3;
	// System.Single UnityEngine.LocationInfo::m_HorizontalAccuracy
	float ___m_HorizontalAccuracy_4;
	// System.Single UnityEngine.LocationInfo::m_VerticalAccuracy
	float ___m_VerticalAccuracy_5;
};

// TMPro.MaterialReference
struct MaterialReference_tFD98FFFBBDF168028E637446C6676507186F4D0B 
{
	// System.Int32 TMPro.MaterialReference::index
	int32_t ___index_0;
	// TMPro.TMP_FontAsset TMPro.MaterialReference::fontAsset
	TMP_FontAsset_t923BF2F78D7C5AC36376E168A1193B7CB4855160* ___fontAsset_1;
	// TMPro.TMP_SpriteAsset TMPro.MaterialReference::spriteAsset
	TMP_SpriteAsset_t81F779E6F705CE190DC0D1F93A954CB8B1774B39* ___spriteAsset_2;
	// UnityEngine.Material TMPro.MaterialReference::material
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___material_3;
	// System.Boolean TMPro.MaterialReference::isDefaultMaterial
	bool ___isDefaultMaterial_4;
	// System.Boolean TMPro.MaterialReference::isFallbackMaterial
	bool ___isFallbackMaterial_5;
	// UnityEngine.Material TMPro.MaterialReference::fallbackMaterial
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___fallbackMaterial_6;
	// System.Single TMPro.MaterialReference::padding
	float ___padding_7;
	// System.Int32 TMPro.MaterialReference::referenceCount
	int32_t ___referenceCount_8;
};
// Native definition for P/Invoke marshalling of TMPro.MaterialReference
struct MaterialReference_tFD98FFFBBDF168028E637446C6676507186F4D0B_marshaled_pinvoke
{
	int32_t ___index_0;
	TMP_FontAsset_t923BF2F78D7C5AC36376E168A1193B7CB4855160* ___fontAsset_1;
	TMP_SpriteAsset_t81F779E6F705CE190DC0D1F93A954CB8B1774B39* ___spriteAsset_2;
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___material_3;
	int32_t ___isDefaultMaterial_4;
	int32_t ___isFallbackMaterial_5;
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___fallbackMaterial_6;
	float ___padding_7;
	int32_t ___referenceCount_8;
};
// Native definition for COM marshalling of TMPro.MaterialReference
struct MaterialReference_tFD98FFFBBDF168028E637446C6676507186F4D0B_marshaled_com
{
	int32_t ___index_0;
	TMP_FontAsset_t923BF2F78D7C5AC36376E168A1193B7CB4855160* ___fontAsset_1;
	TMP_SpriteAsset_t81F779E6F705CE190DC0D1F93A954CB8B1774B39* ___spriteAsset_2;
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___material_3;
	int32_t ___isDefaultMaterial_4;
	int32_t ___isFallbackMaterial_5;
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___fallbackMaterial_6;
	float ___padding_7;
	int32_t ___referenceCount_8;
};

// UnityEngine.Matrix4x4
struct Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 
{
	// System.Single UnityEngine.Matrix4x4::m00
	float ___m00_0;
	// System.Single UnityEngine.Matrix4x4::m10
	float ___m10_1;
	// System.Single UnityEngine.Matrix4x4::m20
	float ___m20_2;
	// System.Single UnityEngine.Matrix4x4::m30
	float ___m30_3;
	// System.Single UnityEngine.Matrix4x4::m01
	float ___m01_4;
	// System.Single UnityEngine.Matrix4x4::m11
	float ___m11_5;
	// System.Single UnityEngine.Matrix4x4::m21
	float ___m21_6;
	// System.Single UnityEngine.Matrix4x4::m31
	float ___m31_7;
	// System.Single UnityEngine.Matrix4x4::m02
	float ___m02_8;
	// System.Single UnityEngine.Matrix4x4::m12
	float ___m12_9;
	// System.Single UnityEngine.Matrix4x4::m22
	float ___m22_10;
	// System.Single UnityEngine.Matrix4x4::m32
	float ___m32_11;
	// System.Single UnityEngine.Matrix4x4::m03
	float ___m03_12;
	// System.Single UnityEngine.Matrix4x4::m13
	float ___m13_13;
	// System.Single UnityEngine.Matrix4x4::m23
	float ___m23_14;
	// System.Single UnityEngine.Matrix4x4::m33
	float ___m33_15;
};

struct Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6_StaticFields
{
	// UnityEngine.Matrix4x4 UnityEngine.Matrix4x4::zeroMatrix
	Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 ___zeroMatrix_16;
	// UnityEngine.Matrix4x4 UnityEngine.Matrix4x4::identityMatrix
	Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 ___identityMatrix_17;
};

// UnityEngine.UI.Navigation
struct Navigation_t4D2E201D65749CF4E104E8AC1232CF1D6F14795C 
{
	// UnityEngine.UI.Navigation/Mode UnityEngine.UI.Navigation::m_Mode
	int32_t ___m_Mode_0;
	// System.Boolean UnityEngine.UI.Navigation::m_WrapAround
	bool ___m_WrapAround_1;
	// UnityEngine.UI.Selectable UnityEngine.UI.Navigation::m_SelectOnUp
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnUp_2;
	// UnityEngine.UI.Selectable UnityEngine.UI.Navigation::m_SelectOnDown
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnDown_3;
	// UnityEngine.UI.Selectable UnityEngine.UI.Navigation::m_SelectOnLeft
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnLeft_4;
	// UnityEngine.UI.Selectable UnityEngine.UI.Navigation::m_SelectOnRight
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnRight_5;
};
// Native definition for P/Invoke marshalling of UnityEngine.UI.Navigation
struct Navigation_t4D2E201D65749CF4E104E8AC1232CF1D6F14795C_marshaled_pinvoke
{
	int32_t ___m_Mode_0;
	int32_t ___m_WrapAround_1;
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnUp_2;
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnDown_3;
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnLeft_4;
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnRight_5;
};
// Native definition for COM marshalling of UnityEngine.UI.Navigation
struct Navigation_t4D2E201D65749CF4E104E8AC1232CF1D6F14795C_marshaled_com
{
	int32_t ___m_Mode_0;
	int32_t ___m_WrapAround_1;
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnUp_2;
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnDown_3;
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnLeft_4;
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnRight_5;
};

// SRDebugger.NumberRangeAttribute
struct NumberRangeAttribute_t36C0A939C7C6DC0971357D6A5BC6B4D8FD570585  : public Attribute_tFDA8EFEFB0711976D22474794576DAF28F7440AA
{
	// System.Double SRDebugger.NumberRangeAttribute::Max
	double ___Max_0;
	// System.Double SRDebugger.NumberRangeAttribute::Min
	double ___Min_1;
};

// System.ComponentModel.PropertyChangedEventArgs
struct PropertyChangedEventArgs_tFA01343D8F2BD799951B40A3EBF4A6B38EE63321  : public EventArgs_t37273F03EAC87217701DD431B190FBD84AD7C377
{
	// System.String System.ComponentModel.PropertyChangedEventArgs::_propertyName
	String_t* ____propertyName_1;
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

// UnityEngine.Rect
struct Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D 
{
	// System.Single UnityEngine.Rect::m_XMin
	float ___m_XMin_0;
	// System.Single UnityEngine.Rect::m_YMin
	float ___m_YMin_1;
	// System.Single UnityEngine.Rect::m_Width
	float ___m_Width_2;
	// System.Single UnityEngine.Rect::m_Height
	float ___m_Height_3;
};

// System.Single
struct Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C 
{
	// System.Single System.Single::m_value
	float ___m_value_0;
};

// SRDebugger.SortAttribute
struct SortAttribute_t745731D856AA0915EBA410630E554D11F6CCADBA  : public Attribute_tFDA8EFEFB0711976D22474794576DAF28F7440AA
{
	// System.Int32 SRDebugger.SortAttribute::SortPriority
	int32_t ___SortPriority_0;
};

// UnityEngine.UI.SpriteState
struct SpriteState_tC8199570BE6337FB5C49347C97892B4222E5AACD 
{
	// UnityEngine.Sprite UnityEngine.UI.SpriteState::m_HighlightedSprite
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_HighlightedSprite_0;
	// UnityEngine.Sprite UnityEngine.UI.SpriteState::m_PressedSprite
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_PressedSprite_1;
	// UnityEngine.Sprite UnityEngine.UI.SpriteState::m_SelectedSprite
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_SelectedSprite_2;
	// UnityEngine.Sprite UnityEngine.UI.SpriteState::m_DisabledSprite
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_DisabledSprite_3;
};
// Native definition for P/Invoke marshalling of UnityEngine.UI.SpriteState
struct SpriteState_tC8199570BE6337FB5C49347C97892B4222E5AACD_marshaled_pinvoke
{
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_HighlightedSprite_0;
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_PressedSprite_1;
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_SelectedSprite_2;
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_DisabledSprite_3;
};
// Native definition for COM marshalling of UnityEngine.UI.SpriteState
struct SpriteState_tC8199570BE6337FB5C49347C97892B4222E5AACD_marshaled_com
{
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_HighlightedSprite_0;
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_PressedSprite_1;
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_SelectedSprite_2;
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_DisabledSprite_3;
};

// TMPro.TMP_FontStyleStack
struct TMP_FontStyleStack_t52885F172FADBC21346C835B5302167BDA8020DC 
{
	// System.Byte TMPro.TMP_FontStyleStack::bold
	uint8_t ___bold_0;
	// System.Byte TMPro.TMP_FontStyleStack::italic
	uint8_t ___italic_1;
	// System.Byte TMPro.TMP_FontStyleStack::underline
	uint8_t ___underline_2;
	// System.Byte TMPro.TMP_FontStyleStack::strikethrough
	uint8_t ___strikethrough_3;
	// System.Byte TMPro.TMP_FontStyleStack::highlight
	uint8_t ___highlight_4;
	// System.Byte TMPro.TMP_FontStyleStack::superscript
	uint8_t ___superscript_5;
	// System.Byte TMPro.TMP_FontStyleStack::subscript
	uint8_t ___subscript_6;
	// System.Byte TMPro.TMP_FontStyleStack::uppercase
	uint8_t ___uppercase_7;
	// System.Byte TMPro.TMP_FontStyleStack::lowercase
	uint8_t ___lowercase_8;
	// System.Byte TMPro.TMP_FontStyleStack::smallcaps
	uint8_t ___smallcaps_9;
};

// TMPro.TMP_Offset
struct TMP_Offset_t2262BE4E87D9662487777FF8FFE1B17B0E4438C6 
{
	// System.Single TMPro.TMP_Offset::m_Left
	float ___m_Left_0;
	// System.Single TMPro.TMP_Offset::m_Right
	float ___m_Right_1;
	// System.Single TMPro.TMP_Offset::m_Top
	float ___m_Top_2;
	// System.Single TMPro.TMP_Offset::m_Bottom
	float ___m_Bottom_3;
};

struct TMP_Offset_t2262BE4E87D9662487777FF8FFE1B17B0E4438C6_StaticFields
{
	// TMPro.TMP_Offset TMPro.TMP_Offset::k_ZeroOffset
	TMP_Offset_t2262BE4E87D9662487777FF8FFE1B17B0E4438C6 ___k_ZeroOffset_4;
};

// UnityEngine.XR.ARSubsystems.TrackableId
struct TrackableId_t49EAE8AA4B9584E314518723DC22B66496D47AD7 
{
	// System.UInt64 UnityEngine.XR.ARSubsystems.TrackableId::m_SubId1
	uint64_t ___m_SubId1_2;
	// System.UInt64 UnityEngine.XR.ARSubsystems.TrackableId::m_SubId2
	uint64_t ___m_SubId2_3;
};

struct TrackableId_t49EAE8AA4B9584E314518723DC22B66496D47AD7_StaticFields
{
	// System.Text.RegularExpressions.Regex UnityEngine.XR.ARSubsystems.TrackableId::s_TrackableIdRegex
	Regex_tE773142C2BE45C5D362B0F815AFF831707A51772* ___s_TrackableIdRegex_0;
	// UnityEngine.XR.ARSubsystems.TrackableId UnityEngine.XR.ARSubsystems.TrackableId::s_InvalidId
	TrackableId_t49EAE8AA4B9584E314518723DC22B66496D47AD7 ___s_InvalidId_1;
};

// DG.Tweening.Tween
struct Tween_t8CB06EBC48A5B6F5065C490E4F4909C18CE7983C  : public ABSSequentiable_t05DF85FC63E3650D2D4CF6ABBA0F43263EB8CE89
{
	// System.Single DG.Tweening.Tween::timeScale
	float ___timeScale_4;
	// System.Boolean DG.Tweening.Tween::isBackwards
	bool ___isBackwards_5;
	// System.Boolean DG.Tweening.Tween::isInverted
	bool ___isInverted_6;
	// System.Object DG.Tweening.Tween::id
	RuntimeObject* ___id_7;
	// System.String DG.Tweening.Tween::stringId
	String_t* ___stringId_8;
	// System.Int32 DG.Tweening.Tween::intId
	int32_t ___intId_9;
	// System.Object DG.Tweening.Tween::target
	RuntimeObject* ___target_10;
	// DG.Tweening.UpdateType DG.Tweening.Tween::updateType
	int32_t ___updateType_11;
	// System.Boolean DG.Tweening.Tween::isIndependentUpdate
	bool ___isIndependentUpdate_12;
	// DG.Tweening.TweenCallback DG.Tweening.Tween::onPlay
	TweenCallback_t7C8B8A38E7B30905FF1B83C943256EF23617BB24* ___onPlay_13;
	// DG.Tweening.TweenCallback DG.Tweening.Tween::onPause
	TweenCallback_t7C8B8A38E7B30905FF1B83C943256EF23617BB24* ___onPause_14;
	// DG.Tweening.TweenCallback DG.Tweening.Tween::onRewind
	TweenCallback_t7C8B8A38E7B30905FF1B83C943256EF23617BB24* ___onRewind_15;
	// DG.Tweening.TweenCallback DG.Tweening.Tween::onUpdate
	TweenCallback_t7C8B8A38E7B30905FF1B83C943256EF23617BB24* ___onUpdate_16;
	// DG.Tweening.TweenCallback DG.Tweening.Tween::onStepComplete
	TweenCallback_t7C8B8A38E7B30905FF1B83C943256EF23617BB24* ___onStepComplete_17;
	// DG.Tweening.TweenCallback DG.Tweening.Tween::onComplete
	TweenCallback_t7C8B8A38E7B30905FF1B83C943256EF23617BB24* ___onComplete_18;
	// DG.Tweening.TweenCallback DG.Tweening.Tween::onKill
	TweenCallback_t7C8B8A38E7B30905FF1B83C943256EF23617BB24* ___onKill_19;
	// DG.Tweening.TweenCallback`1<System.Int32> DG.Tweening.Tween::onWaypointChange
	TweenCallback_1_tF0ADCA0C226C9C243ACB55E67D852E4BB53AEB67* ___onWaypointChange_20;
	// System.Boolean DG.Tweening.Tween::isFrom
	bool ___isFrom_21;
	// System.Boolean DG.Tweening.Tween::isBlendable
	bool ___isBlendable_22;
	// System.Boolean DG.Tweening.Tween::isRecyclable
	bool ___isRecyclable_23;
	// System.Boolean DG.Tweening.Tween::isSpeedBased
	bool ___isSpeedBased_24;
	// System.Boolean DG.Tweening.Tween::autoKill
	bool ___autoKill_25;
	// System.Single DG.Tweening.Tween::duration
	float ___duration_26;
	// System.Int32 DG.Tweening.Tween::loops
	int32_t ___loops_27;
	// DG.Tweening.LoopType DG.Tweening.Tween::loopType
	int32_t ___loopType_28;
	// System.Single DG.Tweening.Tween::delay
	float ___delay_29;
	// System.Boolean DG.Tweening.Tween::<isRelative>k__BackingField
	bool ___U3CisRelativeU3Ek__BackingField_30;
	// DG.Tweening.Ease DG.Tweening.Tween::easeType
	int32_t ___easeType_31;
	// DG.Tweening.EaseFunction DG.Tweening.Tween::customEase
	EaseFunction_t0F945D9D726B0915C5FBF30862E987EC3AC12A04* ___customEase_32;
	// System.Single DG.Tweening.Tween::easeOvershootOrAmplitude
	float ___easeOvershootOrAmplitude_33;
	// System.Single DG.Tweening.Tween::easePeriod
	float ___easePeriod_34;
	// System.String DG.Tweening.Tween::debugTargetId
	String_t* ___debugTargetId_35;
	// System.Type DG.Tweening.Tween::typeofT1
	Type_t* ___typeofT1_36;
	// System.Type DG.Tweening.Tween::typeofT2
	Type_t* ___typeofT2_37;
	// System.Type DG.Tweening.Tween::typeofTPlugOptions
	Type_t* ___typeofTPlugOptions_38;
	// System.Boolean DG.Tweening.Tween::<active>k__BackingField
	bool ___U3CactiveU3Ek__BackingField_39;
	// System.Boolean DG.Tweening.Tween::isSequenced
	bool ___isSequenced_40;
	// DG.Tweening.Sequence DG.Tweening.Tween::sequenceParent
	Sequence_tEADBE56D6ED2E9EE8FB2E5459C3E57131EC0545C* ___sequenceParent_41;
	// System.Int32 DG.Tweening.Tween::activeId
	int32_t ___activeId_42;
	// DG.Tweening.Core.Enums.SpecialStartupMode DG.Tweening.Tween::specialStartupMode
	int32_t ___specialStartupMode_43;
	// System.Boolean DG.Tweening.Tween::creationLocked
	bool ___creationLocked_44;
	// System.Boolean DG.Tweening.Tween::startupDone
	bool ___startupDone_45;
	// System.Boolean DG.Tweening.Tween::<playedOnce>k__BackingField
	bool ___U3CplayedOnceU3Ek__BackingField_46;
	// System.Single DG.Tweening.Tween::<position>k__BackingField
	float ___U3CpositionU3Ek__BackingField_47;
	// System.Single DG.Tweening.Tween::fullDuration
	float ___fullDuration_48;
	// System.Int32 DG.Tweening.Tween::completedLoops
	int32_t ___completedLoops_49;
	// System.Boolean DG.Tweening.Tween::isPlaying
	bool ___isPlaying_50;
	// System.Boolean DG.Tweening.Tween::isComplete
	bool ___isComplete_51;
	// System.Single DG.Tweening.Tween::elapsedDelay
	float ___elapsedDelay_52;
	// System.Boolean DG.Tweening.Tween::delayComplete
	bool ___delayComplete_53;
	// System.Int32 DG.Tweening.Tween::miscInt
	int32_t ___miscInt_54;
};

// UnityEngine.Events.UnityEvent
struct UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977  : public UnityEventBase_t4968A4C72559F35C0923E4BD9C042C3A842E1DB8
{
	// System.Object[] UnityEngine.Events.UnityEvent::m_InvokeArray
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___m_InvokeArray_3;
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

// DG.Tweening.Plugins.Options.VectorOptions
struct VectorOptions_t2814CC842518C92C9DFC5DE6F7A73824758D3EF9 
{
	// DG.Tweening.AxisConstraint DG.Tweening.Plugins.Options.VectorOptions::axisConstraint
	int32_t ___axisConstraint_0;
	// System.Boolean DG.Tweening.Plugins.Options.VectorOptions::snapping
	bool ___snapping_1;
};
// Native definition for P/Invoke marshalling of DG.Tweening.Plugins.Options.VectorOptions
struct VectorOptions_t2814CC842518C92C9DFC5DE6F7A73824758D3EF9_marshaled_pinvoke
{
	int32_t ___axisConstraint_0;
	int32_t ___snapping_1;
};
// Native definition for COM marshalling of DG.Tweening.Plugins.Options.VectorOptions
struct VectorOptions_t2814CC842518C92C9DFC5DE6F7A73824758D3EF9_marshaled_com
{
	int32_t ___axisConstraint_0;
	int32_t ___snapping_1;
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

// UnityEngine.WaitForSeconds
struct WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3  : public YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D
{
	// System.Single UnityEngine.WaitForSeconds::m_Seconds
	float ___m_Seconds_0;
};
// Native definition for P/Invoke marshalling of UnityEngine.WaitForSeconds
struct WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3_marshaled_pinvoke : public YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D_marshaled_pinvoke
{
	float ___m_Seconds_0;
};
// Native definition for COM marshalling of UnityEngine.WaitForSeconds
struct WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3_marshaled_com : public YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D_marshaled_com
{
	float ___m_Seconds_0;
};

// UnityEngine.EventSystems.EventSystem/UIToolkitOverrideConfig
struct UIToolkitOverrideConfig_t4E6B4528E38BCA7DA72C45424634806200A50182 
{
	// UnityEngine.EventSystems.EventSystem UnityEngine.EventSystems.EventSystem/UIToolkitOverrideConfig::activeEventSystem
	EventSystem_t61C51380B105BE9D2C39C4F15B7E655659957707* ___activeEventSystem_0;
	// System.Boolean UnityEngine.EventSystems.EventSystem/UIToolkitOverrideConfig::sendEvents
	bool ___sendEvents_1;
	// System.Boolean UnityEngine.EventSystems.EventSystem/UIToolkitOverrideConfig::createPanelGameObjectsOnStart
	bool ___createPanelGameObjectsOnStart_2;
};
// Native definition for P/Invoke marshalling of UnityEngine.EventSystems.EventSystem/UIToolkitOverrideConfig
struct UIToolkitOverrideConfig_t4E6B4528E38BCA7DA72C45424634806200A50182_marshaled_pinvoke
{
	EventSystem_t61C51380B105BE9D2C39C4F15B7E655659957707* ___activeEventSystem_0;
	int32_t ___sendEvents_1;
	int32_t ___createPanelGameObjectsOnStart_2;
};
// Native definition for COM marshalling of UnityEngine.EventSystems.EventSystem/UIToolkitOverrideConfig
struct UIToolkitOverrideConfig_t4E6B4528E38BCA7DA72C45424634806200A50182_marshaled_com
{
	EventSystem_t61C51380B105BE9D2C39C4F15B7E655659957707* ___activeEventSystem_0;
	int32_t ___sendEvents_1;
	int32_t ___createPanelGameObjectsOnStart_2;
};

// TMPro.TMP_Text/SpecialCharacter
struct SpecialCharacter_t6C1DBE8C490706D1620899BAB7F0B8091AD26777 
{
	// TMPro.TMP_Character TMPro.TMP_Text/SpecialCharacter::character
	TMP_Character_t7D37A55EF1A9FF6D0BFE6D50E86A00F80E7FAF35* ___character_0;
	// TMPro.TMP_FontAsset TMPro.TMP_Text/SpecialCharacter::fontAsset
	TMP_FontAsset_t923BF2F78D7C5AC36376E168A1193B7CB4855160* ___fontAsset_1;
	// UnityEngine.Material TMPro.TMP_Text/SpecialCharacter::material
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___material_2;
	// System.Int32 TMPro.TMP_Text/SpecialCharacter::materialIndex
	int32_t ___materialIndex_3;
};
// Native definition for P/Invoke marshalling of TMPro.TMP_Text/SpecialCharacter
struct SpecialCharacter_t6C1DBE8C490706D1620899BAB7F0B8091AD26777_marshaled_pinvoke
{
	TMP_Character_t7D37A55EF1A9FF6D0BFE6D50E86A00F80E7FAF35* ___character_0;
	TMP_FontAsset_t923BF2F78D7C5AC36376E168A1193B7CB4855160* ___fontAsset_1;
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___material_2;
	int32_t ___materialIndex_3;
};
// Native definition for COM marshalling of TMPro.TMP_Text/SpecialCharacter
struct SpecialCharacter_t6C1DBE8C490706D1620899BAB7F0B8091AD26777_marshaled_com
{
	TMP_Character_t7D37A55EF1A9FF6D0BFE6D50E86A00F80E7FAF35* ___character_0;
	TMP_FontAsset_t923BF2F78D7C5AC36376E168A1193B7CB4855160* ___fontAsset_1;
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___material_2;
	int32_t ___materialIndex_3;
};

// TMPro.TMP_Text/TextBackingContainer
struct TextBackingContainer_t33D1CE628E7B26C45EDAC1D87BEF2DD22A5C6361 
{
	// System.UInt32[] TMPro.TMP_Text/TextBackingContainer::m_Array
	UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___m_Array_0;
	// System.Int32 TMPro.TMP_Text/TextBackingContainer::m_Count
	int32_t ___m_Count_1;
};
// Native definition for P/Invoke marshalling of TMPro.TMP_Text/TextBackingContainer
struct TextBackingContainer_t33D1CE628E7B26C45EDAC1D87BEF2DD22A5C6361_marshaled_pinvoke
{
	Il2CppSafeArray/*NONE*/* ___m_Array_0;
	int32_t ___m_Count_1;
};
// Native definition for COM marshalling of TMPro.TMP_Text/TextBackingContainer
struct TextBackingContainer_t33D1CE628E7B26C45EDAC1D87BEF2DD22A5C6361_marshaled_com
{
	Il2CppSafeArray/*NONE*/* ___m_Array_0;
	int32_t ___m_Count_1;
};

// System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,UnityEngine.GameObject>
struct Enumerator_tB528BCD318DDD3422B24D81EF0BF177F56B2E4FB 
{
	// System.Collections.Generic.Dictionary`2<TKey,TValue> System.Collections.Generic.Dictionary`2/Enumerator::_dictionary
	Dictionary_2_t3ED995699F3E88D06E5DA7362BEB7584DBD61662* ____dictionary_0;
	// System.Int32 System.Collections.Generic.Dictionary`2/Enumerator::_version
	int32_t ____version_1;
	// System.Int32 System.Collections.Generic.Dictionary`2/Enumerator::_index
	int32_t ____index_2;
	// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2/Enumerator::_current
	KeyValuePair_2_tE51B4AA1B587AD85A79363114EB7C474634D1AD8 ____current_3;
	// System.Int32 System.Collections.Generic.Dictionary`2/Enumerator::_getEnumeratorRetType
	int32_t ____getEnumeratorRetType_4;
};

// System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,System.Object>
struct Enumerator_tE92C1AC40A104A179B94F8A013728FD9314CFBD3 
{
	// System.Collections.Generic.Dictionary`2<TKey,TValue> System.Collections.Generic.Dictionary`2/Enumerator::_dictionary
	Dictionary_2_tA75D1125AC9BE8F005BA9B868B373398E643C907* ____dictionary_0;
	// System.Int32 System.Collections.Generic.Dictionary`2/Enumerator::_version
	int32_t ____version_1;
	// System.Int32 System.Collections.Generic.Dictionary`2/Enumerator::_index
	int32_t ____index_2;
	// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2/Enumerator::_current
	KeyValuePair_2_tDC26B09C26BA829DDE331BCB6AF7C508C763D7A3 ____current_3;
	// System.Int32 System.Collections.Generic.Dictionary`2/Enumerator::_getEnumeratorRetType
	int32_t ____getEnumeratorRetType_4;
};

// Google.XR.ARCoreExtensions.Internal.InterruptiblePromise`1<Google.XR.ARCoreExtensions.VpsAvailability>
struct InterruptiblePromise_1_tC38DF8D833B705AD59D8C58E4E6F6ECA030F9270  : public CustomYieldInstruction_t6B81A50D5D210C1ACAAE247FB53B65CDFFEB7617
{
	// Google.XR.ARCoreExtensions.PromiseState Google.XR.ARCoreExtensions.Internal.InterruptiblePromise`1::_state
	int32_t ____state_0;
	// T Google.XR.ARCoreExtensions.Internal.InterruptiblePromise`1::_result
	int32_t ____result_1;
	// System.IntPtr Google.XR.ARCoreExtensions.Internal.InterruptiblePromise`1::_future
	intptr_t ____future_2;
};

// System.Nullable`1<UnityEngine.Color>
struct Nullable_1_tEE83D90B507D40B6C58B5EEF5B9D44D377B44F11 
{
	// System.Boolean System.Nullable`1::hasValue
	bool ___hasValue_0;
	// T System.Nullable`1::value
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___value_1;
};

// System.Nullable`1<UnityEngine.Vector3>
struct Nullable_1_t9C51B084784B716FFF4ED4575C63CFD8A71A86FE 
{
	// System.Boolean System.Nullable`1::hasValue
	bool ___hasValue_0;
	// T System.Nullable`1::value
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___value_1;
};

// TMPro.TMP_TextProcessingStack`1<UnityEngine.Color32>
struct TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 
{
	// T[] TMPro.TMP_TextProcessingStack`1::itemStack
	Color32U5BU5D_t38116C3E91765C4C5726CE12C77FAD7F9F737259* ___itemStack_0;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::index
	int32_t ___index_1;
	// T TMPro.TMP_TextProcessingStack`1::m_DefaultItem
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___m_DefaultItem_2;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Capacity
	int32_t ___m_Capacity_3;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_RolloverSize
	int32_t ___m_RolloverSize_4;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Count
	int32_t ___m_Count_5;
};

// TMPro.TMP_TextProcessingStack`1<TMPro.MaterialReference>
struct TMP_TextProcessingStack_1_tB03E08F69415B281A5A81138F09E49EE58402DF9 
{
	// T[] TMPro.TMP_TextProcessingStack`1::itemStack
	MaterialReferenceU5BU5D_t7491D335AB3E3E13CE9C0F5E931F396F6A02E1F2* ___itemStack_0;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::index
	int32_t ___index_1;
	// T TMPro.TMP_TextProcessingStack`1::m_DefaultItem
	MaterialReference_tFD98FFFBBDF168028E637446C6676507186F4D0B ___m_DefaultItem_2;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Capacity
	int32_t ___m_Capacity_3;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_RolloverSize
	int32_t ___m_RolloverSize_4;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Count
	int32_t ___m_Count_5;
};

// UnityEngine.Collision
struct Collision_tBCC6AEBD9A63E6DA2E50660DAC03CDCB1FF7A9B0  : public RuntimeObject
{
	// UnityEngine.Vector3 UnityEngine.Collision::m_Impulse
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_Impulse_0;
	// UnityEngine.Vector3 UnityEngine.Collision::m_RelativeVelocity
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_RelativeVelocity_1;
	// UnityEngine.Component UnityEngine.Collision::m_Body
	Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* ___m_Body_2;
	// UnityEngine.Collider UnityEngine.Collision::m_Collider
	Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* ___m_Collider_3;
	// System.Int32 UnityEngine.Collision::m_ContactCount
	int32_t ___m_ContactCount_4;
	// UnityEngine.ContactPoint[] UnityEngine.Collision::m_ReusedContacts
	ContactPointU5BU5D_t3570603E8D0685B71B3D8BA07031674B00C5E411* ___m_ReusedContacts_5;
	// UnityEngine.ContactPoint[] UnityEngine.Collision::m_LegacyContacts
	ContactPointU5BU5D_t3570603E8D0685B71B3D8BA07031674B00C5E411* ___m_LegacyContacts_6;
};
// Native definition for P/Invoke marshalling of UnityEngine.Collision
struct Collision_tBCC6AEBD9A63E6DA2E50660DAC03CDCB1FF7A9B0_marshaled_pinvoke
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_Impulse_0;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_RelativeVelocity_1;
	Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* ___m_Body_2;
	Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* ___m_Collider_3;
	int32_t ___m_ContactCount_4;
	ContactPoint_t241857959C0D517C21F541BB04B63FA6C1EAB3F9* ___m_ReusedContacts_5;
	ContactPoint_t241857959C0D517C21F541BB04B63FA6C1EAB3F9* ___m_LegacyContacts_6;
};
// Native definition for COM marshalling of UnityEngine.Collision
struct Collision_tBCC6AEBD9A63E6DA2E50660DAC03CDCB1FF7A9B0_marshaled_com
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_Impulse_0;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_RelativeVelocity_1;
	Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* ___m_Body_2;
	Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* ___m_Collider_3;
	int32_t ___m_ContactCount_4;
	ContactPoint_t241857959C0D517C21F541BB04B63FA6C1EAB3F9* ___m_ReusedContacts_5;
	ContactPoint_t241857959C0D517C21F541BB04B63FA6C1EAB3F9* ___m_LegacyContacts_6;
};

// UnityEngine.UI.ColorBlock
struct ColorBlock_tDD7C62E7AFE442652FC98F8D058CE8AE6BFD7C11 
{
	// UnityEngine.Color UnityEngine.UI.ColorBlock::m_NormalColor
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___m_NormalColor_0;
	// UnityEngine.Color UnityEngine.UI.ColorBlock::m_HighlightedColor
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___m_HighlightedColor_1;
	// UnityEngine.Color UnityEngine.UI.ColorBlock::m_PressedColor
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___m_PressedColor_2;
	// UnityEngine.Color UnityEngine.UI.ColorBlock::m_SelectedColor
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___m_SelectedColor_3;
	// UnityEngine.Color UnityEngine.UI.ColorBlock::m_DisabledColor
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___m_DisabledColor_4;
	// System.Single UnityEngine.UI.ColorBlock::m_ColorMultiplier
	float ___m_ColorMultiplier_5;
	// System.Single UnityEngine.UI.ColorBlock::m_FadeDuration
	float ___m_FadeDuration_6;
};

struct ColorBlock_tDD7C62E7AFE442652FC98F8D058CE8AE6BFD7C11_StaticFields
{
	// UnityEngine.UI.ColorBlock UnityEngine.UI.ColorBlock::defaultColorBlock
	ColorBlock_tDD7C62E7AFE442652FC98F8D058CE8AE6BFD7C11 ___defaultColorBlock_7;
};

// UnityEngine.Coroutine
struct Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B  : public YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D
{
	// System.IntPtr UnityEngine.Coroutine::m_Ptr
	intptr_t ___m_Ptr_0;
};
// Native definition for P/Invoke marshalling of UnityEngine.Coroutine
struct Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B_marshaled_pinvoke : public YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D_marshaled_pinvoke
{
	intptr_t ___m_Ptr_0;
};
// Native definition for COM marshalling of UnityEngine.Coroutine
struct Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B_marshaled_com : public YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D_marshaled_com
{
	intptr_t ___m_Ptr_0;
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

// TMPro.Extents
struct Extents_tA2D2F95811D0A18CB7AC3570D2D8F8CD3AF4C4A8 
{
	// UnityEngine.Vector2 TMPro.Extents::min
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___min_2;
	// UnityEngine.Vector2 TMPro.Extents::max
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___max_3;
};

struct Extents_tA2D2F95811D0A18CB7AC3570D2D8F8CD3AF4C4A8_StaticFields
{
	// TMPro.Extents TMPro.Extents::zero
	Extents_tA2D2F95811D0A18CB7AC3570D2D8F8CD3AF4C4A8 ___zero_0;
	// TMPro.Extents TMPro.Extents::uninitialized
	Extents_tA2D2F95811D0A18CB7AC3570D2D8F8CD3AF4C4A8 ___uninitialized_1;
};

// Google.XR.ARCoreExtensions.Samples.Geospatial.GeospatialAnchorHistory
struct GeospatialAnchorHistory_t6908A396462F1450B5999D2948632194CD812A5C 
{
	// System.Double Google.XR.ARCoreExtensions.Samples.Geospatial.GeospatialAnchorHistory::Latitude
	double ___Latitude_0;
	// System.Double Google.XR.ARCoreExtensions.Samples.Geospatial.GeospatialAnchorHistory::Longitude
	double ___Longitude_1;
	// System.Double Google.XR.ARCoreExtensions.Samples.Geospatial.GeospatialAnchorHistory::Altitude
	double ___Altitude_2;
	// UnityEngine.Quaternion Google.XR.ARCoreExtensions.Samples.Geospatial.GeospatialAnchorHistory::Heading
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___Heading_3;
	// UnityEngine.Texture2D Google.XR.ARCoreExtensions.Samples.Geospatial.GeospatialAnchorHistory::Texture
	Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* ___Texture_4;
};
// Native definition for P/Invoke marshalling of Google.XR.ARCoreExtensions.Samples.Geospatial.GeospatialAnchorHistory
struct GeospatialAnchorHistory_t6908A396462F1450B5999D2948632194CD812A5C_marshaled_pinvoke
{
	double ___Latitude_0;
	double ___Longitude_1;
	double ___Altitude_2;
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___Heading_3;
	Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* ___Texture_4;
};
// Native definition for COM marshalling of Google.XR.ARCoreExtensions.Samples.Geospatial.GeospatialAnchorHistory
struct GeospatialAnchorHistory_t6908A396462F1450B5999D2948632194CD812A5C_marshaled_com
{
	double ___Latitude_0;
	double ___Longitude_1;
	double ___Altitude_2;
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___Heading_3;
	Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* ___Texture_4;
};

// Google.XR.ARCoreExtensions.GeospatialPose
struct GeospatialPose_tBF34434706FEEB7D1524DEE5FADDEE7E95452F2C 
{
	// System.Double Google.XR.ARCoreExtensions.GeospatialPose::Latitude
	double ___Latitude_0;
	// System.Double Google.XR.ARCoreExtensions.GeospatialPose::Longitude
	double ___Longitude_1;
	// System.Double Google.XR.ARCoreExtensions.GeospatialPose::Altitude
	double ___Altitude_2;
	// System.Double Google.XR.ARCoreExtensions.GeospatialPose::Heading
	double ___Heading_3;
	// System.Double Google.XR.ARCoreExtensions.GeospatialPose::HeadingAccuracy
	double ___HeadingAccuracy_4;
	// System.Double Google.XR.ARCoreExtensions.GeospatialPose::HorizontalAccuracy
	double ___HorizontalAccuracy_5;
	// System.Double Google.XR.ARCoreExtensions.GeospatialPose::VerticalAccuracy
	double ___VerticalAccuracy_6;
	// UnityEngine.Quaternion Google.XR.ARCoreExtensions.GeospatialPose::EunRotation
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___EunRotation_7;
};

// TMPro.HighlightState
struct HighlightState_tE4F50287E5E2E91D42AB77DEA281D88D3AD6A28B 
{
	// UnityEngine.Color32 TMPro.HighlightState::color
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___color_0;
	// TMPro.TMP_Offset TMPro.HighlightState::padding
	TMP_Offset_t2262BE4E87D9662487777FF8FFE1B17B0E4438C6 ___padding_1;
};

// System.Text.RegularExpressions.Match
struct Match_tFBEBCF225BD8EA17BCE6CE3FE5C1BD8E3074105F  : public Group_t26371E9136D6F43782C487B63C67C5FC4F472881
{
	// System.Text.RegularExpressions.GroupCollection System.Text.RegularExpressions.Match::_groupcoll
	GroupCollection_tFFA1789730DD9EA122FBE77DC03BFEDCC3F2945E* ____groupcoll_8;
	// System.Text.RegularExpressions.Regex System.Text.RegularExpressions.Match::_regex
	Regex_tE773142C2BE45C5D362B0F815AFF831707A51772* ____regex_9;
	// System.Int32 System.Text.RegularExpressions.Match::_textbeg
	int32_t ____textbeg_10;
	// System.Int32 System.Text.RegularExpressions.Match::_textpos
	int32_t ____textpos_11;
	// System.Int32 System.Text.RegularExpressions.Match::_textend
	int32_t ____textend_12;
	// System.Int32 System.Text.RegularExpressions.Match::_textstart
	int32_t ____textstart_13;
	// System.Int32[][] System.Text.RegularExpressions.Match::_matches
	Int32U5BU5DU5BU5D_t179D865D5B30EFCBC50F82C9774329C15943466E* ____matches_14;
	// System.Int32[] System.Text.RegularExpressions.Match::_matchcount
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ____matchcount_15;
	// System.Boolean System.Text.RegularExpressions.Match::_balancing
	bool ____balancing_16;
};

struct Match_tFBEBCF225BD8EA17BCE6CE3FE5C1BD8E3074105F_StaticFields
{
	// System.Text.RegularExpressions.Match System.Text.RegularExpressions.Match::<Empty>k__BackingField
	Match_tFBEBCF225BD8EA17BCE6CE3FE5C1BD8E3074105F* ___U3CEmptyU3Ek__BackingField_17;
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

// DG.Tweening.Plugins.Options.PathOptions
struct PathOptions_t76F1CBAC082454349D530B799121EB15BFA4CB3A 
{
	// DG.Tweening.PathMode DG.Tweening.Plugins.Options.PathOptions::mode
	int32_t ___mode_0;
	// DG.Tweening.Plugins.Options.OrientType DG.Tweening.Plugins.Options.PathOptions::orientType
	int32_t ___orientType_1;
	// DG.Tweening.AxisConstraint DG.Tweening.Plugins.Options.PathOptions::lockPositionAxis
	int32_t ___lockPositionAxis_2;
	// DG.Tweening.AxisConstraint DG.Tweening.Plugins.Options.PathOptions::lockRotationAxis
	int32_t ___lockRotationAxis_3;
	// System.Boolean DG.Tweening.Plugins.Options.PathOptions::isClosedPath
	bool ___isClosedPath_4;
	// UnityEngine.Vector3 DG.Tweening.Plugins.Options.PathOptions::lookAtPosition
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___lookAtPosition_5;
	// UnityEngine.Transform DG.Tweening.Plugins.Options.PathOptions::lookAtTransform
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___lookAtTransform_6;
	// System.Single DG.Tweening.Plugins.Options.PathOptions::lookAhead
	float ___lookAhead_7;
	// System.Boolean DG.Tweening.Plugins.Options.PathOptions::hasCustomForwardDirection
	bool ___hasCustomForwardDirection_8;
	// UnityEngine.Quaternion DG.Tweening.Plugins.Options.PathOptions::forward
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___forward_9;
	// System.Boolean DG.Tweening.Plugins.Options.PathOptions::useLocalPosition
	bool ___useLocalPosition_10;
	// UnityEngine.Transform DG.Tweening.Plugins.Options.PathOptions::parent
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___parent_11;
	// System.Boolean DG.Tweening.Plugins.Options.PathOptions::isRigidbody
	bool ___isRigidbody_12;
	// System.Boolean DG.Tweening.Plugins.Options.PathOptions::isRigidbody2D
	bool ___isRigidbody2D_13;
	// System.Boolean DG.Tweening.Plugins.Options.PathOptions::stableZRotation
	bool ___stableZRotation_14;
	// UnityEngine.Quaternion DG.Tweening.Plugins.Options.PathOptions::startupRot
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___startupRot_15;
	// System.Single DG.Tweening.Plugins.Options.PathOptions::startupZRot
	float ___startupZRot_16;
	// System.Boolean DG.Tweening.Plugins.Options.PathOptions::addedExtraStartWp
	bool ___addedExtraStartWp_17;
	// System.Boolean DG.Tweening.Plugins.Options.PathOptions::addedExtraEndWp
	bool ___addedExtraEndWp_18;
};
// Native definition for P/Invoke marshalling of DG.Tweening.Plugins.Options.PathOptions
struct PathOptions_t76F1CBAC082454349D530B799121EB15BFA4CB3A_marshaled_pinvoke
{
	int32_t ___mode_0;
	int32_t ___orientType_1;
	int32_t ___lockPositionAxis_2;
	int32_t ___lockRotationAxis_3;
	int32_t ___isClosedPath_4;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___lookAtPosition_5;
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___lookAtTransform_6;
	float ___lookAhead_7;
	int32_t ___hasCustomForwardDirection_8;
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___forward_9;
	int32_t ___useLocalPosition_10;
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___parent_11;
	int32_t ___isRigidbody_12;
	int32_t ___isRigidbody2D_13;
	int32_t ___stableZRotation_14;
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___startupRot_15;
	float ___startupZRot_16;
	int32_t ___addedExtraStartWp_17;
	int32_t ___addedExtraEndWp_18;
};
// Native definition for COM marshalling of DG.Tweening.Plugins.Options.PathOptions
struct PathOptions_t76F1CBAC082454349D530B799121EB15BFA4CB3A_marshaled_com
{
	int32_t ___mode_0;
	int32_t ___orientType_1;
	int32_t ___lockPositionAxis_2;
	int32_t ___lockRotationAxis_3;
	int32_t ___isClosedPath_4;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___lookAtPosition_5;
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___lookAtTransform_6;
	float ___lookAhead_7;
	int32_t ___hasCustomForwardDirection_8;
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___forward_9;
	int32_t ___useLocalPosition_10;
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___parent_11;
	int32_t ___isRigidbody_12;
	int32_t ___isRigidbody2D_13;
	int32_t ___stableZRotation_14;
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___startupRot_15;
	float ___startupZRot_16;
	int32_t ___addedExtraStartWp_17;
	int32_t ___addedExtraEndWp_18;
};

// UnityEngine.Pose
struct Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 
{
	// UnityEngine.Vector3 UnityEngine.Pose::position
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___position_0;
	// UnityEngine.Quaternion UnityEngine.Pose::rotation
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___rotation_1;
};

struct Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971_StaticFields
{
	// UnityEngine.Pose UnityEngine.Pose::k_Identity
	Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 ___k_Identity_2;
};

// Unity.Profiling.ProfilerMarker
struct ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD 
{
	// System.IntPtr Unity.Profiling.ProfilerMarker::m_Ptr
	intptr_t ___m_Ptr_0;
};

// DG.Tweening.Plugins.Options.QuaternionOptions
struct QuaternionOptions_t1B83700718F7417854E4B6FB0E1726E183F69718 
{
	// DG.Tweening.RotateMode DG.Tweening.Plugins.Options.QuaternionOptions::rotateMode
	int32_t ___rotateMode_0;
	// DG.Tweening.AxisConstraint DG.Tweening.Plugins.Options.QuaternionOptions::axisConstraint
	int32_t ___axisConstraint_1;
	// UnityEngine.Vector3 DG.Tweening.Plugins.Options.QuaternionOptions::up
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___up_2;
	// System.Boolean DG.Tweening.Plugins.Options.QuaternionOptions::dynamicLookAt
	bool ___dynamicLookAt_3;
	// UnityEngine.Vector3 DG.Tweening.Plugins.Options.QuaternionOptions::dynamicLookAtWorldPosition
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___dynamicLookAtWorldPosition_4;
};
// Native definition for P/Invoke marshalling of DG.Tweening.Plugins.Options.QuaternionOptions
struct QuaternionOptions_t1B83700718F7417854E4B6FB0E1726E183F69718_marshaled_pinvoke
{
	int32_t ___rotateMode_0;
	int32_t ___axisConstraint_1;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___up_2;
	int32_t ___dynamicLookAt_3;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___dynamicLookAtWorldPosition_4;
};
// Native definition for COM marshalling of DG.Tweening.Plugins.Options.QuaternionOptions
struct QuaternionOptions_t1B83700718F7417854E4B6FB0E1726E183F69718_marshaled_com
{
	int32_t ___rotateMode_0;
	int32_t ___axisConstraint_1;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___up_2;
	int32_t ___dynamicLookAt_3;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___dynamicLookAtWorldPosition_4;
};

// UnityEngine.Ray
struct Ray_t2B1742D7958DC05BDC3EFC7461D3593E1430DC00 
{
	// UnityEngine.Vector3 UnityEngine.Ray::m_Origin
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_Origin_0;
	// UnityEngine.Vector3 UnityEngine.Ray::m_Direction
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_Direction_1;
};

// UnityEngine.RaycastHit
struct RaycastHit_t6F30BD0B38B56401CA833A1B87BD74F2ACD2F2B5 
{
	// UnityEngine.Vector3 UnityEngine.RaycastHit::m_Point
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_Point_0;
	// UnityEngine.Vector3 UnityEngine.RaycastHit::m_Normal
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_Normal_1;
	// System.UInt32 UnityEngine.RaycastHit::m_FaceID
	uint32_t ___m_FaceID_2;
	// System.Single UnityEngine.RaycastHit::m_Distance
	float ___m_Distance_3;
	// UnityEngine.Vector2 UnityEngine.RaycastHit::m_UV
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___m_UV_4;
	// System.Int32 UnityEngine.RaycastHit::m_Collider
	int32_t ___m_Collider_5;
};

// UnityEngine.Touch
struct Touch_t03E51455ED508492B3F278903A0114FA0E87B417 
{
	// System.Int32 UnityEngine.Touch::m_FingerId
	int32_t ___m_FingerId_0;
	// UnityEngine.Vector2 UnityEngine.Touch::m_Position
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___m_Position_1;
	// UnityEngine.Vector2 UnityEngine.Touch::m_RawPosition
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___m_RawPosition_2;
	// UnityEngine.Vector2 UnityEngine.Touch::m_PositionDelta
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___m_PositionDelta_3;
	// System.Single UnityEngine.Touch::m_TimeDelta
	float ___m_TimeDelta_4;
	// System.Int32 UnityEngine.Touch::m_TapCount
	int32_t ___m_TapCount_5;
	// UnityEngine.TouchPhase UnityEngine.Touch::m_Phase
	int32_t ___m_Phase_6;
	// UnityEngine.TouchType UnityEngine.Touch::m_Type
	int32_t ___m_Type_7;
	// System.Single UnityEngine.Touch::m_Pressure
	float ___m_Pressure_8;
	// System.Single UnityEngine.Touch::m_maximumPossiblePressure
	float ___m_maximumPossiblePressure_9;
	// System.Single UnityEngine.Touch::m_Radius
	float ___m_Radius_10;
	// System.Single UnityEngine.Touch::m_RadiusVariance
	float ___m_RadiusVariance_11;
	// System.Single UnityEngine.Touch::m_AltitudeAngle
	float ___m_AltitudeAngle_12;
	// System.Single UnityEngine.Touch::m_AzimuthAngle
	float ___m_AzimuthAngle_13;
};

// DG.Tweening.Tweener
struct Tweener_tD38633F1A42EDF47A73CE3BF1894D946E830E140  : public Tween_t8CB06EBC48A5B6F5065C490E4F4909C18CE7983C
{
	// System.Boolean DG.Tweening.Tweener::hasManuallySetStartValue
	bool ___hasManuallySetStartValue_55;
	// System.Boolean DG.Tweening.Tweener::isFromAllowed
	bool ___isFromAllowed_56;
};

// TMPro.VertexGradient
struct VertexGradient_t2C057B53C0EA6E987C2B7BAB0305E686DA1C9A8F 
{
	// UnityEngine.Color TMPro.VertexGradient::topLeft
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___topLeft_0;
	// UnityEngine.Color TMPro.VertexGradient::topRight
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___topRight_1;
	// UnityEngine.Color TMPro.VertexGradient::bottomLeft
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___bottomLeft_2;
	// UnityEngine.Color TMPro.VertexGradient::bottomRight
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___bottomRight_3;
};

// UnityEngine.UI.Button/ButtonClickedEvent
struct ButtonClickedEvent_t8EA72E90B3BD1392FB3B3EF167D5121C23569E4C  : public UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977
{
};

// Google.XR.ARCoreExtensions.Samples.Geospatial.GeospatialController/<AvailabilityCheck>d__31
struct U3CAvailabilityCheckU3Ed__31_t6354B82010109F309788B4A0FF01E47D13B06594  : public RuntimeObject
{
	// System.Int32 Google.XR.ARCoreExtensions.Samples.Geospatial.GeospatialController/<AvailabilityCheck>d__31::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object Google.XR.ARCoreExtensions.Samples.Geospatial.GeospatialController/<AvailabilityCheck>d__31::<>2__current
	RuntimeObject* ___U3CU3E2__current_1;
	// Google.XR.ARCoreExtensions.Samples.Geospatial.GeospatialController Google.XR.ARCoreExtensions.Samples.Geospatial.GeospatialController/<AvailabilityCheck>d__31::<>4__this
	GeospatialController_t69A2BBD44F5A190BB256B888033F5297AF0A0D2F* ___U3CU3E4__this_2;
	// UnityEngine.LocationInfo Google.XR.ARCoreExtensions.Samples.Geospatial.GeospatialController/<AvailabilityCheck>d__31::<location>5__2
	LocationInfo_tBFD49220A54B71CDF564F61822F7B8D524465441 ___U3ClocationU3E5__2_3;
	// Google.XR.ARCoreExtensions.VpsAvailabilityPromise Google.XR.ARCoreExtensions.Samples.Geospatial.GeospatialController/<AvailabilityCheck>d__31::<vpsAvailabilityPromise>5__3
	VpsAvailabilityPromise_tD7DB90CD6085F0BF774A6E6D2B92DE41780A47C1* ___U3CvpsAvailabilityPromiseU3E5__3_4;
};

// SROptions/DisplayNameAttribute
struct DisplayNameAttribute_t36237DD738F919AF725D1A3160E859B8DB716264  : public DisplayNameAttribute_tECBA9AC4CCBE61186E2B3C397C93AAFA5A2631E8
{
};

// SROptions/IncrementAttribute
struct IncrementAttribute_tA4CDFC00F53F82FE8F31085E97F79F4BA1B76DD1  : public IncrementAttribute_t4EEF3E3CB6B83DC54346F0AB93DEA5102A661150
{
};

// SROptions/NumberRangeAttribute
struct NumberRangeAttribute_tF57CDD96B27582AF4FA0311F052A33A62467ABAD  : public NumberRangeAttribute_t36C0A939C7C6DC0971357D6A5BC6B4D8FD570585
{
};

// SROptions/SortAttribute
struct SortAttribute_t3BCAFC7857086FCCD52C024CFC9F51F00155E6FB  : public SortAttribute_t745731D856AA0915EBA410630E554D11F6CCADBA
{
};

// TMPro.TMP_TextProcessingStack`1<TMPro.HighlightState>
struct TMP_TextProcessingStack_1_t57AECDCC936A7FF1D6CF66CA11560B28A675648D 
{
	// T[] TMPro.TMP_TextProcessingStack`1::itemStack
	HighlightStateU5BU5D_tA878A0AF1F4F52882ACD29515AADC277EE135622* ___itemStack_0;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::index
	int32_t ___index_1;
	// T TMPro.TMP_TextProcessingStack`1::m_DefaultItem
	HighlightState_tE4F50287E5E2E91D42AB77DEA281D88D3AD6A28B ___m_DefaultItem_2;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Capacity
	int32_t ___m_Capacity_3;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_RolloverSize
	int32_t ___m_RolloverSize_4;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Count
	int32_t ___m_Count_5;
};

// DG.Tweening.Core.TweenerCore`3<UnityEngine.Quaternion,UnityEngine.Vector3,DG.Tweening.Plugins.Options.QuaternionOptions>
struct TweenerCore_3_t392C54729BB024F5802F8E205C583653C4E886E3  : public Tweener_tD38633F1A42EDF47A73CE3BF1894D946E830E140
{
	// T2 DG.Tweening.Core.TweenerCore`3::startValue
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___startValue_57;
	// T2 DG.Tweening.Core.TweenerCore`3::endValue
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___endValue_58;
	// T2 DG.Tweening.Core.TweenerCore`3::changeValue
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___changeValue_59;
	// TPlugOptions DG.Tweening.Core.TweenerCore`3::plugOptions
	QuaternionOptions_t1B83700718F7417854E4B6FB0E1726E183F69718 ___plugOptions_60;
	// DG.Tweening.Core.DOGetter`1<T1> DG.Tweening.Core.TweenerCore`3::getter
	DOGetter_1_tB89DD12456B8E79576BB70E1CA6DF899686410D3* ___getter_61;
	// DG.Tweening.Core.DOSetter`1<T1> DG.Tweening.Core.TweenerCore`3::setter
	DOSetter_1_t9EFF8DD70A15F455A6FE698A22BD0FE9683AC28E* ___setter_62;
	// DG.Tweening.Plugins.Core.ABSTweenPlugin`3<T1,T2,TPlugOptions> DG.Tweening.Core.TweenerCore`3::tweenPlugin
	ABSTweenPlugin_3_t3823C0F935A3168B9E48DC90ABD9A0CED3D7BB82* ___tweenPlugin_63;
	// System.Type DG.Tweening.Core.TweenerCore`3::_colorType
	Type_t* ____colorType_65;
	// System.Type DG.Tweening.Core.TweenerCore`3::_color32Type
	Type_t* ____color32Type_66;
};

// DG.Tweening.Core.TweenerCore`3<UnityEngine.Vector3,DG.Tweening.Plugins.Core.PathCore.Path,DG.Tweening.Plugins.Options.PathOptions>
struct TweenerCore_3_t4911E6704673AA7505D10A9D0B0D989CEC689DCA  : public Tweener_tD38633F1A42EDF47A73CE3BF1894D946E830E140
{
	// T2 DG.Tweening.Core.TweenerCore`3::startValue
	Path_t6EC35555EF601CAFED947AC467DEBA7C1496A0C3* ___startValue_57;
	// T2 DG.Tweening.Core.TweenerCore`3::endValue
	Path_t6EC35555EF601CAFED947AC467DEBA7C1496A0C3* ___endValue_58;
	// T2 DG.Tweening.Core.TweenerCore`3::changeValue
	Path_t6EC35555EF601CAFED947AC467DEBA7C1496A0C3* ___changeValue_59;
	// TPlugOptions DG.Tweening.Core.TweenerCore`3::plugOptions
	PathOptions_t76F1CBAC082454349D530B799121EB15BFA4CB3A ___plugOptions_60;
	// DG.Tweening.Core.DOGetter`1<T1> DG.Tweening.Core.TweenerCore`3::getter
	DOGetter_1_t709462C08281F3AA5DFEF36CAF91404B1004C338* ___getter_61;
	// DG.Tweening.Core.DOSetter`1<T1> DG.Tweening.Core.TweenerCore`3::setter
	DOSetter_1_t02E8F9920F174322F1CF5AC8BCDEAABD14A03358* ___setter_62;
	// DG.Tweening.Plugins.Core.ABSTweenPlugin`3<T1,T2,TPlugOptions> DG.Tweening.Core.TweenerCore`3::tweenPlugin
	ABSTweenPlugin_3_t08B14BED068ACE348E543E45725D6C6BFFA60143* ___tweenPlugin_63;
	// System.Type DG.Tweening.Core.TweenerCore`3::_colorType
	Type_t* ____colorType_65;
	// System.Type DG.Tweening.Core.TweenerCore`3::_color32Type
	Type_t* ____color32Type_66;
};

// DG.Tweening.Core.TweenerCore`3<UnityEngine.Vector3,UnityEngine.Vector3,DG.Tweening.Plugins.Options.VectorOptions>
struct TweenerCore_3_tCD82DFC45FB71C681FA8659EA63A7D7D16BFFE77  : public Tweener_tD38633F1A42EDF47A73CE3BF1894D946E830E140
{
	// T2 DG.Tweening.Core.TweenerCore`3::startValue
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___startValue_57;
	// T2 DG.Tweening.Core.TweenerCore`3::endValue
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___endValue_58;
	// T2 DG.Tweening.Core.TweenerCore`3::changeValue
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___changeValue_59;
	// TPlugOptions DG.Tweening.Core.TweenerCore`3::plugOptions
	VectorOptions_t2814CC842518C92C9DFC5DE6F7A73824758D3EF9 ___plugOptions_60;
	// DG.Tweening.Core.DOGetter`1<T1> DG.Tweening.Core.TweenerCore`3::getter
	DOGetter_1_t709462C08281F3AA5DFEF36CAF91404B1004C338* ___getter_61;
	// DG.Tweening.Core.DOSetter`1<T1> DG.Tweening.Core.TweenerCore`3::setter
	DOSetter_1_t02E8F9920F174322F1CF5AC8BCDEAABD14A03358* ___setter_62;
	// DG.Tweening.Plugins.Core.ABSTweenPlugin`3<T1,T2,TPlugOptions> DG.Tweening.Core.TweenerCore`3::tweenPlugin
	ABSTweenPlugin_3_tE5A78BE46D046C07A6356B8AB596B2D00F9295E7* ___tweenPlugin_63;
	// System.Type DG.Tweening.Core.TweenerCore`3::_colorType
	Type_t* ____colorType_65;
	// System.Type DG.Tweening.Core.TweenerCore`3::_color32Type
	Type_t* ____color32Type_66;
};

// UnityEngine.AudioClip
struct AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
	// UnityEngine.AudioClip/PCMReaderCallback UnityEngine.AudioClip::m_PCMReaderCallback
	PCMReaderCallback_t3396D9613664F0AFF65FB91018FD0F901CC16F1E* ___m_PCMReaderCallback_4;
	// UnityEngine.AudioClip/PCMSetPositionCallback UnityEngine.AudioClip::m_PCMSetPositionCallback
	PCMSetPositionCallback_t8D7135A2FB40647CAEC93F5254AD59E18DEB6072* ___m_PCMSetPositionCallback_5;
};

// UnityEngine.XR.ARSubsystems.BoundedPlane
struct BoundedPlane_tF51C315A8961EB42F0A1B60D47158646E5AF75CE 
{
	// UnityEngine.XR.ARSubsystems.TrackableId UnityEngine.XR.ARSubsystems.BoundedPlane::m_TrackableId
	TrackableId_t49EAE8AA4B9584E314518723DC22B66496D47AD7 ___m_TrackableId_1;
	// UnityEngine.XR.ARSubsystems.TrackableId UnityEngine.XR.ARSubsystems.BoundedPlane::m_SubsumedById
	TrackableId_t49EAE8AA4B9584E314518723DC22B66496D47AD7 ___m_SubsumedById_2;
	// UnityEngine.Vector2 UnityEngine.XR.ARSubsystems.BoundedPlane::m_Center
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___m_Center_3;
	// UnityEngine.Pose UnityEngine.XR.ARSubsystems.BoundedPlane::m_Pose
	Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 ___m_Pose_4;
	// UnityEngine.Vector2 UnityEngine.XR.ARSubsystems.BoundedPlane::m_Size
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___m_Size_5;
	// UnityEngine.XR.ARSubsystems.PlaneAlignment UnityEngine.XR.ARSubsystems.BoundedPlane::m_Alignment
	int32_t ___m_Alignment_6;
	// UnityEngine.XR.ARSubsystems.TrackingState UnityEngine.XR.ARSubsystems.BoundedPlane::m_TrackingState
	int32_t ___m_TrackingState_7;
	// System.IntPtr UnityEngine.XR.ARSubsystems.BoundedPlane::m_NativePtr
	intptr_t ___m_NativePtr_8;
	// UnityEngine.XR.ARSubsystems.PlaneClassification UnityEngine.XR.ARSubsystems.BoundedPlane::m_Classification
	int32_t ___m_Classification_9;
};

struct BoundedPlane_tF51C315A8961EB42F0A1B60D47158646E5AF75CE_StaticFields
{
	// UnityEngine.XR.ARSubsystems.BoundedPlane UnityEngine.XR.ARSubsystems.BoundedPlane::s_Default
	BoundedPlane_tF51C315A8961EB42F0A1B60D47158646E5AF75CE ___s_Default_0;
};

// UnityEngine.Component
struct Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
};

// UnityEngine.GameObject
struct GameObject_t76FEDD663AB33C991A9C9A23129337651094216F  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
};

// UnityEngine.Material
struct Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
};

// UnityEngine.Mesh
struct Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
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

// UnityEngine.ScriptableObject
struct ScriptableObject_tB3BFDB921A1B1795B38A5417D3B97A89A140436A  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
};
// Native definition for P/Invoke marshalling of UnityEngine.ScriptableObject
struct ScriptableObject_tB3BFDB921A1B1795B38A5417D3B97A89A140436A_marshaled_pinvoke : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_marshaled_pinvoke
{
};
// Native definition for COM marshalling of UnityEngine.ScriptableObject
struct ScriptableObject_tB3BFDB921A1B1795B38A5417D3B97A89A140436A_marshaled_com : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_marshaled_com
{
};

// System.SystemException
struct SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295  : public Exception_t
{
};

// TMPro.TMP_LineInfo
struct TMP_LineInfo_tB75C1965B58DB7B3A046C8CA55AD6AB92B6B17B3 
{
	// System.Int32 TMPro.TMP_LineInfo::controlCharacterCount
	int32_t ___controlCharacterCount_0;
	// System.Int32 TMPro.TMP_LineInfo::characterCount
	int32_t ___characterCount_1;
	// System.Int32 TMPro.TMP_LineInfo::visibleCharacterCount
	int32_t ___visibleCharacterCount_2;
	// System.Int32 TMPro.TMP_LineInfo::spaceCount
	int32_t ___spaceCount_3;
	// System.Int32 TMPro.TMP_LineInfo::wordCount
	int32_t ___wordCount_4;
	// System.Int32 TMPro.TMP_LineInfo::firstCharacterIndex
	int32_t ___firstCharacterIndex_5;
	// System.Int32 TMPro.TMP_LineInfo::firstVisibleCharacterIndex
	int32_t ___firstVisibleCharacterIndex_6;
	// System.Int32 TMPro.TMP_LineInfo::lastCharacterIndex
	int32_t ___lastCharacterIndex_7;
	// System.Int32 TMPro.TMP_LineInfo::lastVisibleCharacterIndex
	int32_t ___lastVisibleCharacterIndex_8;
	// System.Single TMPro.TMP_LineInfo::length
	float ___length_9;
	// System.Single TMPro.TMP_LineInfo::lineHeight
	float ___lineHeight_10;
	// System.Single TMPro.TMP_LineInfo::ascender
	float ___ascender_11;
	// System.Single TMPro.TMP_LineInfo::baseline
	float ___baseline_12;
	// System.Single TMPro.TMP_LineInfo::descender
	float ___descender_13;
	// System.Single TMPro.TMP_LineInfo::maxAdvance
	float ___maxAdvance_14;
	// System.Single TMPro.TMP_LineInfo::width
	float ___width_15;
	// System.Single TMPro.TMP_LineInfo::marginLeft
	float ___marginLeft_16;
	// System.Single TMPro.TMP_LineInfo::marginRight
	float ___marginRight_17;
	// TMPro.HorizontalAlignmentOptions TMPro.TMP_LineInfo::alignment
	int32_t ___alignment_18;
	// TMPro.Extents TMPro.TMP_LineInfo::lineExtents
	Extents_tA2D2F95811D0A18CB7AC3570D2D8F8CD3AF4C4A8 ___lineExtents_19;
};

// UnityEngine.Texture
struct Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
};

struct Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700_StaticFields
{
	// System.Int32 UnityEngine.Texture::GenerateAllMips
	int32_t ___GenerateAllMips_4;
};

// Google.XR.ARCoreExtensions.VpsAvailabilityPromise
struct VpsAvailabilityPromise_tD7DB90CD6085F0BF774A6E6D2B92DE41780A47C1  : public InterruptiblePromise_1_tC38DF8D833B705AD59D8C58E4E6F6ECA030F9270
{
};

// UnityEngine.XR.ARSubsystems.XRAnchor
struct XRAnchor_tDD427E66CAA09DE7B058EA76223EF7DC3880FE82 
{
	// UnityEngine.XR.ARSubsystems.TrackableId UnityEngine.XR.ARSubsystems.XRAnchor::m_Id
	TrackableId_t49EAE8AA4B9584E314518723DC22B66496D47AD7 ___m_Id_1;
	// UnityEngine.Pose UnityEngine.XR.ARSubsystems.XRAnchor::m_Pose
	Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 ___m_Pose_2;
	// UnityEngine.XR.ARSubsystems.TrackingState UnityEngine.XR.ARSubsystems.XRAnchor::m_TrackingState
	int32_t ___m_TrackingState_3;
	// System.IntPtr UnityEngine.XR.ARSubsystems.XRAnchor::m_NativePtr
	intptr_t ___m_NativePtr_4;
	// System.Guid UnityEngine.XR.ARSubsystems.XRAnchor::m_SessionId
	Guid_t ___m_SessionId_5;
};

struct XRAnchor_tDD427E66CAA09DE7B058EA76223EF7DC3880FE82_StaticFields
{
	// UnityEngine.XR.ARSubsystems.XRAnchor UnityEngine.XR.ARSubsystems.XRAnchor::s_Default
	XRAnchor_tDD427E66CAA09DE7B058EA76223EF7DC3880FE82 ___s_Default_0;
};

// UnityEngine.XR.ARSubsystems.XRRaycastHit
struct XRRaycastHit_t87A29A58C1D41AF1B3995B73777A7494B0695780 
{
	// UnityEngine.XR.ARSubsystems.TrackableId UnityEngine.XR.ARSubsystems.XRRaycastHit::m_TrackableId
	TrackableId_t49EAE8AA4B9584E314518723DC22B66496D47AD7 ___m_TrackableId_1;
	// UnityEngine.Pose UnityEngine.XR.ARSubsystems.XRRaycastHit::m_Pose
	Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 ___m_Pose_2;
	// System.Single UnityEngine.XR.ARSubsystems.XRRaycastHit::m_Distance
	float ___m_Distance_3;
	// UnityEngine.XR.ARSubsystems.TrackableType UnityEngine.XR.ARSubsystems.XRRaycastHit::m_HitType
	int32_t ___m_HitType_4;
};

struct XRRaycastHit_t87A29A58C1D41AF1B3995B73777A7494B0695780_StaticFields
{
	// UnityEngine.XR.ARSubsystems.XRRaycastHit UnityEngine.XR.ARSubsystems.XRRaycastHit::s_Default
	XRRaycastHit_t87A29A58C1D41AF1B3995B73777A7494B0695780 ___s_Default_0;
};

// System.Action`1<UnityEngine.XR.ARFoundation.ARPlaneBoundaryChangedEventArgs>
struct Action_1_t762BEDF03B3FAD9E52246AF6B4291030B8085074  : public MulticastDelegate_t
{
};

// System.Func`2<System.Collections.Generic.KeyValuePair`2<System.Int32,UnityEngine.GameObject>,System.Int32>
struct Func_2_t5EEB9DA1EC10E3B0AC9BE12D70E59948A16E8B3D  : public MulticastDelegate_t
{
};

// System.Func`2<UnityEngine.GameObject,UnityEngine.Vector3>
struct Func_2_tD73B7BD3399DAC2D727A9D19B39BF7DB6BB67C28  : public MulticastDelegate_t
{
};

// Google.XR.ARCoreExtensions.ARCoreExtensionsConfig
struct ARCoreExtensionsConfig_t241A8996B5A9CB82B5532C79DF31558CFFA531CD  : public ScriptableObject_tB3BFDB921A1B1795B38A5417D3B97A89A140436A
{
	// Google.XR.ARCoreExtensions.CloudAnchorMode Google.XR.ARCoreExtensions.ARCoreExtensionsConfig::CloudAnchorMode
	int32_t ___CloudAnchorMode_4;
	// Google.XR.ARCoreExtensions.GeospatialMode Google.XR.ARCoreExtensions.ARCoreExtensionsConfig::GeospatialMode
	int32_t ___GeospatialMode_5;
};

// UnityEngine.XR.ARFoundation.ARRaycastHit
struct ARRaycastHit_tB32B5606815B8A7DF479C00187A852F8D20E3B70 
{
	// System.Single UnityEngine.XR.ARFoundation.ARRaycastHit::<distance>k__BackingField
	float ___U3CdistanceU3Ek__BackingField_0;
	// UnityEngine.XR.ARFoundation.ARTrackable UnityEngine.XR.ARFoundation.ARRaycastHit::<trackable>k__BackingField
	ARTrackable_t1D98417758C08E98A333CDEC0C2C1688CE10B2E0* ___U3CtrackableU3Ek__BackingField_1;
	// UnityEngine.XR.ARSubsystems.XRRaycastHit UnityEngine.XR.ARFoundation.ARRaycastHit::m_Hit
	XRRaycastHit_t87A29A58C1D41AF1B3995B73777A7494B0695780 ___m_Hit_2;
	// UnityEngine.Transform UnityEngine.XR.ARFoundation.ARRaycastHit::m_Transform
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___m_Transform_3;
};
// Native definition for P/Invoke marshalling of UnityEngine.XR.ARFoundation.ARRaycastHit
struct ARRaycastHit_tB32B5606815B8A7DF479C00187A852F8D20E3B70_marshaled_pinvoke
{
	float ___U3CdistanceU3Ek__BackingField_0;
	ARTrackable_t1D98417758C08E98A333CDEC0C2C1688CE10B2E0* ___U3CtrackableU3Ek__BackingField_1;
	XRRaycastHit_t87A29A58C1D41AF1B3995B73777A7494B0695780 ___m_Hit_2;
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___m_Transform_3;
};
// Native definition for COM marshalling of UnityEngine.XR.ARFoundation.ARRaycastHit
struct ARRaycastHit_tB32B5606815B8A7DF479C00187A852F8D20E3B70_marshaled_com
{
	float ___U3CdistanceU3Ek__BackingField_0;
	ARTrackable_t1D98417758C08E98A333CDEC0C2C1688CE10B2E0* ___U3CtrackableU3Ek__BackingField_1;
	XRRaycastHit_t87A29A58C1D41AF1B3995B73777A7494B0695780 ___m_Hit_2;
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___m_Transform_3;
};

// System.AsyncCallback
struct AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C  : public MulticastDelegate_t
{
};

// UnityEngine.Behaviour
struct Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA  : public Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3
{
};

// UnityEngine.Collider
struct Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76  : public Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3
{
};

// System.NotImplementedException
struct NotImplementedException_t6366FE4DCF15094C51F4833B91A2AE68D4DA90E8  : public SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295
{
};

// System.NotSupportedException
struct NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A  : public SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295
{
};

// System.ComponentModel.PropertyChangedEventHandler
struct PropertyChangedEventHandler_tF1250C146BE6FB43477D29C5D18A10B6329419DA  : public MulticastDelegate_t
{
};

// UnityEngine.Renderer
struct Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF  : public Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3
{
};

// SROptionsPropertyChanged
struct SROptionsPropertyChanged_t53B79AE547753261AFBD1916519E6A1074669CA7  : public MulticastDelegate_t
{
};

// UnityEngine.Texture2D
struct Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4  : public Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700
{
};

// UnityEngine.Transform
struct Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1  : public Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3
{
};

// DG.Tweening.TweenCallback
struct TweenCallback_t7C8B8A38E7B30905FF1B83C943256EF23617BB24  : public MulticastDelegate_t
{
};

// UnityEngine.Events.UnityAction
struct UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7  : public MulticastDelegate_t
{
};

// TMPro.WordWrapState
struct WordWrapState_t80F67D8CAA9B1A0A3D5266521E23A9F3100EDD0A 
{
	// System.Int32 TMPro.WordWrapState::previous_WordBreak
	int32_t ___previous_WordBreak_0;
	// System.Int32 TMPro.WordWrapState::total_CharacterCount
	int32_t ___total_CharacterCount_1;
	// System.Int32 TMPro.WordWrapState::visible_CharacterCount
	int32_t ___visible_CharacterCount_2;
	// System.Int32 TMPro.WordWrapState::visible_SpriteCount
	int32_t ___visible_SpriteCount_3;
	// System.Int32 TMPro.WordWrapState::visible_LinkCount
	int32_t ___visible_LinkCount_4;
	// System.Int32 TMPro.WordWrapState::firstCharacterIndex
	int32_t ___firstCharacterIndex_5;
	// System.Int32 TMPro.WordWrapState::firstVisibleCharacterIndex
	int32_t ___firstVisibleCharacterIndex_6;
	// System.Int32 TMPro.WordWrapState::lastCharacterIndex
	int32_t ___lastCharacterIndex_7;
	// System.Int32 TMPro.WordWrapState::lastVisibleCharIndex
	int32_t ___lastVisibleCharIndex_8;
	// System.Int32 TMPro.WordWrapState::lineNumber
	int32_t ___lineNumber_9;
	// System.Single TMPro.WordWrapState::maxCapHeight
	float ___maxCapHeight_10;
	// System.Single TMPro.WordWrapState::maxAscender
	float ___maxAscender_11;
	// System.Single TMPro.WordWrapState::maxDescender
	float ___maxDescender_12;
	// System.Single TMPro.WordWrapState::startOfLineAscender
	float ___startOfLineAscender_13;
	// System.Single TMPro.WordWrapState::maxLineAscender
	float ___maxLineAscender_14;
	// System.Single TMPro.WordWrapState::maxLineDescender
	float ___maxLineDescender_15;
	// System.Single TMPro.WordWrapState::pageAscender
	float ___pageAscender_16;
	// TMPro.HorizontalAlignmentOptions TMPro.WordWrapState::horizontalAlignment
	int32_t ___horizontalAlignment_17;
	// System.Single TMPro.WordWrapState::marginLeft
	float ___marginLeft_18;
	// System.Single TMPro.WordWrapState::marginRight
	float ___marginRight_19;
	// System.Single TMPro.WordWrapState::xAdvance
	float ___xAdvance_20;
	// System.Single TMPro.WordWrapState::preferredWidth
	float ___preferredWidth_21;
	// System.Single TMPro.WordWrapState::preferredHeight
	float ___preferredHeight_22;
	// System.Single TMPro.WordWrapState::previousLineScale
	float ___previousLineScale_23;
	// System.Int32 TMPro.WordWrapState::wordCount
	int32_t ___wordCount_24;
	// TMPro.FontStyles TMPro.WordWrapState::fontStyle
	int32_t ___fontStyle_25;
	// System.Int32 TMPro.WordWrapState::italicAngle
	int32_t ___italicAngle_26;
	// System.Single TMPro.WordWrapState::fontScaleMultiplier
	float ___fontScaleMultiplier_27;
	// System.Single TMPro.WordWrapState::currentFontSize
	float ___currentFontSize_28;
	// System.Single TMPro.WordWrapState::baselineOffset
	float ___baselineOffset_29;
	// System.Single TMPro.WordWrapState::lineOffset
	float ___lineOffset_30;
	// System.Boolean TMPro.WordWrapState::isDrivenLineSpacing
	bool ___isDrivenLineSpacing_31;
	// System.Single TMPro.WordWrapState::glyphHorizontalAdvanceAdjustment
	float ___glyphHorizontalAdvanceAdjustment_32;
	// System.Single TMPro.WordWrapState::cSpace
	float ___cSpace_33;
	// System.Single TMPro.WordWrapState::mSpace
	float ___mSpace_34;
	// TMPro.TMP_TextInfo TMPro.WordWrapState::textInfo
	TMP_TextInfo_t09A8E906329422C3F0C059876801DD695B8D524D* ___textInfo_35;
	// TMPro.TMP_LineInfo TMPro.WordWrapState::lineInfo
	TMP_LineInfo_tB75C1965B58DB7B3A046C8CA55AD6AB92B6B17B3 ___lineInfo_36;
	// UnityEngine.Color32 TMPro.WordWrapState::vertexColor
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___vertexColor_37;
	// UnityEngine.Color32 TMPro.WordWrapState::underlineColor
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___underlineColor_38;
	// UnityEngine.Color32 TMPro.WordWrapState::strikethroughColor
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___strikethroughColor_39;
	// UnityEngine.Color32 TMPro.WordWrapState::highlightColor
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___highlightColor_40;
	// TMPro.TMP_FontStyleStack TMPro.WordWrapState::basicStyleStack
	TMP_FontStyleStack_t52885F172FADBC21346C835B5302167BDA8020DC ___basicStyleStack_41;
	// TMPro.TMP_TextProcessingStack`1<System.Int32> TMPro.WordWrapState::italicAngleStack
	TMP_TextProcessingStack_1_tFBA719426D68CE1F2B5849D97AF5E5D65846290C ___italicAngleStack_42;
	// TMPro.TMP_TextProcessingStack`1<UnityEngine.Color32> TMPro.WordWrapState::colorStack
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___colorStack_43;
	// TMPro.TMP_TextProcessingStack`1<UnityEngine.Color32> TMPro.WordWrapState::underlineColorStack
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___underlineColorStack_44;
	// TMPro.TMP_TextProcessingStack`1<UnityEngine.Color32> TMPro.WordWrapState::strikethroughColorStack
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___strikethroughColorStack_45;
	// TMPro.TMP_TextProcessingStack`1<UnityEngine.Color32> TMPro.WordWrapState::highlightColorStack
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___highlightColorStack_46;
	// TMPro.TMP_TextProcessingStack`1<TMPro.HighlightState> TMPro.WordWrapState::highlightStateStack
	TMP_TextProcessingStack_1_t57AECDCC936A7FF1D6CF66CA11560B28A675648D ___highlightStateStack_47;
	// TMPro.TMP_TextProcessingStack`1<TMPro.TMP_ColorGradient> TMPro.WordWrapState::colorGradientStack
	TMP_TextProcessingStack_1_tC8FAEB17246D3B171EFD11165A5761AE39B40D0C ___colorGradientStack_48;
	// TMPro.TMP_TextProcessingStack`1<System.Single> TMPro.WordWrapState::sizeStack
	TMP_TextProcessingStack_1_t138EC06BE7F101AA0A3C8D2DC951E55AACE085E9 ___sizeStack_49;
	// TMPro.TMP_TextProcessingStack`1<System.Single> TMPro.WordWrapState::indentStack
	TMP_TextProcessingStack_1_t138EC06BE7F101AA0A3C8D2DC951E55AACE085E9 ___indentStack_50;
	// TMPro.TMP_TextProcessingStack`1<TMPro.FontWeight> TMPro.WordWrapState::fontWeightStack
	TMP_TextProcessingStack_1_tA5C8CED87DD9E73F6359E23B334FFB5B6F813FD4 ___fontWeightStack_51;
	// TMPro.TMP_TextProcessingStack`1<System.Int32> TMPro.WordWrapState::styleStack
	TMP_TextProcessingStack_1_tFBA719426D68CE1F2B5849D97AF5E5D65846290C ___styleStack_52;
	// TMPro.TMP_TextProcessingStack`1<System.Single> TMPro.WordWrapState::baselineStack
	TMP_TextProcessingStack_1_t138EC06BE7F101AA0A3C8D2DC951E55AACE085E9 ___baselineStack_53;
	// TMPro.TMP_TextProcessingStack`1<System.Int32> TMPro.WordWrapState::actionStack
	TMP_TextProcessingStack_1_tFBA719426D68CE1F2B5849D97AF5E5D65846290C ___actionStack_54;
	// TMPro.TMP_TextProcessingStack`1<TMPro.MaterialReference> TMPro.WordWrapState::materialReferenceStack
	TMP_TextProcessingStack_1_tB03E08F69415B281A5A81138F09E49EE58402DF9 ___materialReferenceStack_55;
	// TMPro.TMP_TextProcessingStack`1<TMPro.HorizontalAlignmentOptions> TMPro.WordWrapState::lineJustificationStack
	TMP_TextProcessingStack_1_t243EA1B5D7FD2295D6533B953F0BBE8F52EFB8A0 ___lineJustificationStack_56;
	// System.Int32 TMPro.WordWrapState::spriteAnimationID
	int32_t ___spriteAnimationID_57;
	// TMPro.TMP_FontAsset TMPro.WordWrapState::currentFontAsset
	TMP_FontAsset_t923BF2F78D7C5AC36376E168A1193B7CB4855160* ___currentFontAsset_58;
	// TMPro.TMP_SpriteAsset TMPro.WordWrapState::currentSpriteAsset
	TMP_SpriteAsset_t81F779E6F705CE190DC0D1F93A954CB8B1774B39* ___currentSpriteAsset_59;
	// UnityEngine.Material TMPro.WordWrapState::currentMaterial
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___currentMaterial_60;
	// System.Int32 TMPro.WordWrapState::currentMaterialIndex
	int32_t ___currentMaterialIndex_61;
	// TMPro.Extents TMPro.WordWrapState::meshExtents
	Extents_tA2D2F95811D0A18CB7AC3570D2D8F8CD3AF4C4A8 ___meshExtents_62;
	// System.Boolean TMPro.WordWrapState::tagNoParsing
	bool ___tagNoParsing_63;
	// System.Boolean TMPro.WordWrapState::isNonBreakingSpace
	bool ___isNonBreakingSpace_64;
};
// Native definition for P/Invoke marshalling of TMPro.WordWrapState
struct WordWrapState_t80F67D8CAA9B1A0A3D5266521E23A9F3100EDD0A_marshaled_pinvoke
{
	int32_t ___previous_WordBreak_0;
	int32_t ___total_CharacterCount_1;
	int32_t ___visible_CharacterCount_2;
	int32_t ___visible_SpriteCount_3;
	int32_t ___visible_LinkCount_4;
	int32_t ___firstCharacterIndex_5;
	int32_t ___firstVisibleCharacterIndex_6;
	int32_t ___lastCharacterIndex_7;
	int32_t ___lastVisibleCharIndex_8;
	int32_t ___lineNumber_9;
	float ___maxCapHeight_10;
	float ___maxAscender_11;
	float ___maxDescender_12;
	float ___startOfLineAscender_13;
	float ___maxLineAscender_14;
	float ___maxLineDescender_15;
	float ___pageAscender_16;
	int32_t ___horizontalAlignment_17;
	float ___marginLeft_18;
	float ___marginRight_19;
	float ___xAdvance_20;
	float ___preferredWidth_21;
	float ___preferredHeight_22;
	float ___previousLineScale_23;
	int32_t ___wordCount_24;
	int32_t ___fontStyle_25;
	int32_t ___italicAngle_26;
	float ___fontScaleMultiplier_27;
	float ___currentFontSize_28;
	float ___baselineOffset_29;
	float ___lineOffset_30;
	int32_t ___isDrivenLineSpacing_31;
	float ___glyphHorizontalAdvanceAdjustment_32;
	float ___cSpace_33;
	float ___mSpace_34;
	TMP_TextInfo_t09A8E906329422C3F0C059876801DD695B8D524D* ___textInfo_35;
	TMP_LineInfo_tB75C1965B58DB7B3A046C8CA55AD6AB92B6B17B3 ___lineInfo_36;
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___vertexColor_37;
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___underlineColor_38;
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___strikethroughColor_39;
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___highlightColor_40;
	TMP_FontStyleStack_t52885F172FADBC21346C835B5302167BDA8020DC ___basicStyleStack_41;
	TMP_TextProcessingStack_1_tFBA719426D68CE1F2B5849D97AF5E5D65846290C ___italicAngleStack_42;
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___colorStack_43;
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___underlineColorStack_44;
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___strikethroughColorStack_45;
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___highlightColorStack_46;
	TMP_TextProcessingStack_1_t57AECDCC936A7FF1D6CF66CA11560B28A675648D ___highlightStateStack_47;
	TMP_TextProcessingStack_1_tC8FAEB17246D3B171EFD11165A5761AE39B40D0C ___colorGradientStack_48;
	TMP_TextProcessingStack_1_t138EC06BE7F101AA0A3C8D2DC951E55AACE085E9 ___sizeStack_49;
	TMP_TextProcessingStack_1_t138EC06BE7F101AA0A3C8D2DC951E55AACE085E9 ___indentStack_50;
	TMP_TextProcessingStack_1_tA5C8CED87DD9E73F6359E23B334FFB5B6F813FD4 ___fontWeightStack_51;
	TMP_TextProcessingStack_1_tFBA719426D68CE1F2B5849D97AF5E5D65846290C ___styleStack_52;
	TMP_TextProcessingStack_1_t138EC06BE7F101AA0A3C8D2DC951E55AACE085E9 ___baselineStack_53;
	TMP_TextProcessingStack_1_tFBA719426D68CE1F2B5849D97AF5E5D65846290C ___actionStack_54;
	TMP_TextProcessingStack_1_tB03E08F69415B281A5A81138F09E49EE58402DF9 ___materialReferenceStack_55;
	TMP_TextProcessingStack_1_t243EA1B5D7FD2295D6533B953F0BBE8F52EFB8A0 ___lineJustificationStack_56;
	int32_t ___spriteAnimationID_57;
	TMP_FontAsset_t923BF2F78D7C5AC36376E168A1193B7CB4855160* ___currentFontAsset_58;
	TMP_SpriteAsset_t81F779E6F705CE190DC0D1F93A954CB8B1774B39* ___currentSpriteAsset_59;
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___currentMaterial_60;
	int32_t ___currentMaterialIndex_61;
	Extents_tA2D2F95811D0A18CB7AC3570D2D8F8CD3AF4C4A8 ___meshExtents_62;
	int32_t ___tagNoParsing_63;
	int32_t ___isNonBreakingSpace_64;
};
// Native definition for COM marshalling of TMPro.WordWrapState
struct WordWrapState_t80F67D8CAA9B1A0A3D5266521E23A9F3100EDD0A_marshaled_com
{
	int32_t ___previous_WordBreak_0;
	int32_t ___total_CharacterCount_1;
	int32_t ___visible_CharacterCount_2;
	int32_t ___visible_SpriteCount_3;
	int32_t ___visible_LinkCount_4;
	int32_t ___firstCharacterIndex_5;
	int32_t ___firstVisibleCharacterIndex_6;
	int32_t ___lastCharacterIndex_7;
	int32_t ___lastVisibleCharIndex_8;
	int32_t ___lineNumber_9;
	float ___maxCapHeight_10;
	float ___maxAscender_11;
	float ___maxDescender_12;
	float ___startOfLineAscender_13;
	float ___maxLineAscender_14;
	float ___maxLineDescender_15;
	float ___pageAscender_16;
	int32_t ___horizontalAlignment_17;
	float ___marginLeft_18;
	float ___marginRight_19;
	float ___xAdvance_20;
	float ___preferredWidth_21;
	float ___preferredHeight_22;
	float ___previousLineScale_23;
	int32_t ___wordCount_24;
	int32_t ___fontStyle_25;
	int32_t ___italicAngle_26;
	float ___fontScaleMultiplier_27;
	float ___currentFontSize_28;
	float ___baselineOffset_29;
	float ___lineOffset_30;
	int32_t ___isDrivenLineSpacing_31;
	float ___glyphHorizontalAdvanceAdjustment_32;
	float ___cSpace_33;
	float ___mSpace_34;
	TMP_TextInfo_t09A8E906329422C3F0C059876801DD695B8D524D* ___textInfo_35;
	TMP_LineInfo_tB75C1965B58DB7B3A046C8CA55AD6AB92B6B17B3 ___lineInfo_36;
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___vertexColor_37;
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___underlineColor_38;
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___strikethroughColor_39;
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___highlightColor_40;
	TMP_FontStyleStack_t52885F172FADBC21346C835B5302167BDA8020DC ___basicStyleStack_41;
	TMP_TextProcessingStack_1_tFBA719426D68CE1F2B5849D97AF5E5D65846290C ___italicAngleStack_42;
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___colorStack_43;
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___underlineColorStack_44;
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___strikethroughColorStack_45;
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___highlightColorStack_46;
	TMP_TextProcessingStack_1_t57AECDCC936A7FF1D6CF66CA11560B28A675648D ___highlightStateStack_47;
	TMP_TextProcessingStack_1_tC8FAEB17246D3B171EFD11165A5761AE39B40D0C ___colorGradientStack_48;
	TMP_TextProcessingStack_1_t138EC06BE7F101AA0A3C8D2DC951E55AACE085E9 ___sizeStack_49;
	TMP_TextProcessingStack_1_t138EC06BE7F101AA0A3C8D2DC951E55AACE085E9 ___indentStack_50;
	TMP_TextProcessingStack_1_tA5C8CED87DD9E73F6359E23B334FFB5B6F813FD4 ___fontWeightStack_51;
	TMP_TextProcessingStack_1_tFBA719426D68CE1F2B5849D97AF5E5D65846290C ___styleStack_52;
	TMP_TextProcessingStack_1_t138EC06BE7F101AA0A3C8D2DC951E55AACE085E9 ___baselineStack_53;
	TMP_TextProcessingStack_1_tFBA719426D68CE1F2B5849D97AF5E5D65846290C ___actionStack_54;
	TMP_TextProcessingStack_1_tB03E08F69415B281A5A81138F09E49EE58402DF9 ___materialReferenceStack_55;
	TMP_TextProcessingStack_1_t243EA1B5D7FD2295D6533B953F0BBE8F52EFB8A0 ___lineJustificationStack_56;
	int32_t ___spriteAnimationID_57;
	TMP_FontAsset_t923BF2F78D7C5AC36376E168A1193B7CB4855160* ___currentFontAsset_58;
	TMP_SpriteAsset_t81F779E6F705CE190DC0D1F93A954CB8B1774B39* ___currentSpriteAsset_59;
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___currentMaterial_60;
	int32_t ___currentMaterialIndex_61;
	Extents_tA2D2F95811D0A18CB7AC3570D2D8F8CD3AF4C4A8 ___meshExtents_62;
	int32_t ___tagNoParsing_63;
	int32_t ___isNonBreakingSpace_64;
};

// TMPro.TMP_TextProcessingStack`1<TMPro.WordWrapState>
struct TMP_TextProcessingStack_1_t2DDA00FFC64AF6E3AFD475AB2086D16C34787E0F 
{
	// T[] TMPro.TMP_TextProcessingStack`1::itemStack
	WordWrapStateU5BU5D_t473D59C9DBCC949CE72EF1EB471CBA152A6CEAC9* ___itemStack_0;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::index
	int32_t ___index_1;
	// T TMPro.TMP_TextProcessingStack`1::m_DefaultItem
	WordWrapState_t80F67D8CAA9B1A0A3D5266521E23A9F3100EDD0A ___m_DefaultItem_2;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Capacity
	int32_t ___m_Capacity_3;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_RolloverSize
	int32_t ___m_RolloverSize_4;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Count
	int32_t ___m_Count_5;
};

// UnityEngine.AudioBehaviour
struct AudioBehaviour_t2DC0BEF7B020C952F3D2DA5AAAC88501C7EEB941  : public Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA
{
};

// UnityEngine.Camera
struct Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184  : public Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA
{
};

struct Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184_StaticFields
{
	// UnityEngine.Camera/CameraCallback UnityEngine.Camera::onPreCull
	CameraCallback_t844E527BFE37BC0495E7F67993E43C07642DA9DD* ___onPreCull_4;
	// UnityEngine.Camera/CameraCallback UnityEngine.Camera::onPreRender
	CameraCallback_t844E527BFE37BC0495E7F67993E43C07642DA9DD* ___onPreRender_5;
	// UnityEngine.Camera/CameraCallback UnityEngine.Camera::onPostRender
	CameraCallback_t844E527BFE37BC0495E7F67993E43C07642DA9DD* ___onPostRender_6;
};

// UnityEngine.MeshRenderer
struct MeshRenderer_t4B7747212F0B88244BB7790C61AE124BFC15BAAE  : public Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF
{
};

// UnityEngine.MonoBehaviour
struct MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71  : public Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA
{
};

// UnityEngine.RectTransform
struct RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5  : public Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1
{
};

struct RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5_StaticFields
{
	// UnityEngine.RectTransform/ReapplyDrivenProperties UnityEngine.RectTransform::reapplyDrivenProperties
	ReapplyDrivenProperties_t3482EA130A01FF7EE2EEFE37F66A5215D08CFE24* ___reapplyDrivenProperties_4;
};

// UnityEngine.XR.ARFoundation.SubsystemLifecycleManager`3<UnityEngine.XR.ARSubsystems.XRAnchorSubsystem,UnityEngine.XR.ARSubsystems.XRAnchorSubsystemDescriptor,UnityEngine.XR.ARSubsystems.XRAnchorSubsystem/Provider>
struct SubsystemLifecycleManager_3_tAE0BB0092EB47B81AA111C370381E3BA14C88DD3  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// TSubsystem UnityEngine.XR.ARFoundation.SubsystemLifecycleManager`3::<subsystem>k__BackingField
	XRAnchorSubsystem_tB8B108EFBD93D4AFD53DCE7BD599009F79D214AF* ___U3CsubsystemU3Ek__BackingField_4;
};

struct SubsystemLifecycleManager_3_tAE0BB0092EB47B81AA111C370381E3BA14C88DD3_StaticFields
{
	// System.Collections.Generic.List`1<TSubsystemDescriptor> UnityEngine.XR.ARFoundation.SubsystemLifecycleManager`3::s_SubsystemDescriptors
	List_1_t65387FE114D984E6DCFF71774BFC19CEB318A9BE* ___s_SubsystemDescriptors_5;
	// System.Collections.Generic.List`1<TSubsystem> UnityEngine.XR.ARFoundation.SubsystemLifecycleManager`3::s_SubsystemInstances
	List_1_t9F2B0C5D9A34683317CA96A0A733BA6B33CC089A* ___s_SubsystemInstances_6;
};

// UnityEngine.XR.ARFoundation.SubsystemLifecycleManager`3<UnityEngine.XR.ARSubsystems.XRPlaneSubsystem,UnityEngine.XR.ARSubsystems.XRPlaneSubsystemDescriptor,UnityEngine.XR.ARSubsystems.XRPlaneSubsystem/Provider>
struct SubsystemLifecycleManager_3_t7FE0F4D0E7C0B4044705703906B62335E93547A6  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// TSubsystem UnityEngine.XR.ARFoundation.SubsystemLifecycleManager`3::<subsystem>k__BackingField
	XRPlaneSubsystem_t6FC18D5B1FF10EE9B4A751977B526F44A16EDB62* ___U3CsubsystemU3Ek__BackingField_4;
};

struct SubsystemLifecycleManager_3_t7FE0F4D0E7C0B4044705703906B62335E93547A6_StaticFields
{
	// System.Collections.Generic.List`1<TSubsystemDescriptor> UnityEngine.XR.ARFoundation.SubsystemLifecycleManager`3::s_SubsystemDescriptors
	List_1_tD705D57B270C006E488F9C9B55BA0768A11125D0* ___s_SubsystemDescriptors_5;
	// System.Collections.Generic.List`1<TSubsystem> UnityEngine.XR.ARFoundation.SubsystemLifecycleManager`3::s_SubsystemInstances
	List_1_t6630EC2D13FD2DC6D86447667371501266C9B3E8* ___s_SubsystemInstances_6;
};

// UnityEngine.XR.ARFoundation.SubsystemLifecycleManager`3<UnityEngine.XR.ARSubsystems.XRRaycastSubsystem,UnityEngine.XR.ARSubsystems.XRRaycastSubsystemDescriptor,UnityEngine.XR.ARSubsystems.XRRaycastSubsystem/Provider>
struct SubsystemLifecycleManager_3_tF871EF43DE89B354DB5832CC545E7E0EEF19DC8C  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// TSubsystem UnityEngine.XR.ARFoundation.SubsystemLifecycleManager`3::<subsystem>k__BackingField
	XRRaycastSubsystem_t48087E79DE9617C7E866875C8DDD3124C9E068B7* ___U3CsubsystemU3Ek__BackingField_4;
};

struct SubsystemLifecycleManager_3_tF871EF43DE89B354DB5832CC545E7E0EEF19DC8C_StaticFields
{
	// System.Collections.Generic.List`1<TSubsystemDescriptor> UnityEngine.XR.ARFoundation.SubsystemLifecycleManager`3::s_SubsystemDescriptors
	List_1_t97C3D1A8E80E095D7CE223BC4D02400F78DA063F* ___s_SubsystemDescriptors_5;
	// System.Collections.Generic.List`1<TSubsystem> UnityEngine.XR.ARFoundation.SubsystemLifecycleManager`3::s_SubsystemInstances
	List_1_tD793A24512B84D46F925E4CE4DBD30955A42C94C* ___s_SubsystemInstances_6;
};

// UnityEngine.XR.ARFoundation.SubsystemLifecycleManager`3<UnityEngine.XR.ARSubsystems.XRSessionSubsystem,UnityEngine.XR.ARSubsystems.XRSessionSubsystemDescriptor,UnityEngine.XR.ARSubsystems.XRSessionSubsystem/Provider>
struct SubsystemLifecycleManager_3_t7AC7A0198786D712CE4FE49E3789EE14BCC2DFD5  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// TSubsystem UnityEngine.XR.ARFoundation.SubsystemLifecycleManager`3::<subsystem>k__BackingField
	XRSessionSubsystem_t1E6E6CD0C279BA8BC4E4ED94E539552036B9C399* ___U3CsubsystemU3Ek__BackingField_4;
};

struct SubsystemLifecycleManager_3_t7AC7A0198786D712CE4FE49E3789EE14BCC2DFD5_StaticFields
{
	// System.Collections.Generic.List`1<TSubsystemDescriptor> UnityEngine.XR.ARFoundation.SubsystemLifecycleManager`3::s_SubsystemDescriptors
	List_1_tC86363A0A1DF8199DB382C6CDB5A1254F8660A34* ___s_SubsystemDescriptors_5;
	// System.Collections.Generic.List`1<TSubsystem> UnityEngine.XR.ARFoundation.SubsystemLifecycleManager`3::s_SubsystemInstances
	List_1_t3903923EFB501C3A0672A0E60558673B85435D8E* ___s_SubsystemInstances_6;
};

// Google.XR.ARCoreExtensions.ARCoreExtensions
struct ARCoreExtensions_tD81ADD2A10A04FC507DB1A9D022C0778510C3B41  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.XR.ARFoundation.ARSession Google.XR.ARCoreExtensions.ARCoreExtensions::Session
	ARSession_t13374A44A01F2C6D90578F93E0F0DA2482BE3014* ___Session_4;
	// UnityEngine.XR.ARFoundation.ARSessionOrigin Google.XR.ARCoreExtensions.ARCoreExtensions::SessionOrigin
	ARSessionOrigin_tE7B28A1A19500BCC02711397A19E330425830BC3* ___SessionOrigin_5;
	// UnityEngine.XR.ARFoundation.ARCameraManager Google.XR.ARCoreExtensions.ARCoreExtensions::CameraManager
	ARCameraManager_t6E957EA922911B8447D086D9FB1F860EC967BD9F* ___CameraManager_6;
	// Google.XR.ARCoreExtensions.ARCoreExtensionsConfig Google.XR.ARCoreExtensions.ARCoreExtensions::ARCoreExtensionsConfig
	ARCoreExtensionsConfig_t241A8996B5A9CB82B5532C79DF31558CFFA531CD* ___ARCoreExtensionsConfig_7;
	// Google.XR.ARCoreExtensions.ARCoreExtensionsCameraConfigFilter Google.XR.ARCoreExtensions.ARCoreExtensions::CameraConfigFilter
	ARCoreExtensionsCameraConfigFilter_t7B45D467C1213E2DF2CA532D67388822ED2FF4C3* ___CameraConfigFilter_8;
	// Google.XR.ARCoreExtensions.ARCoreExtensions/OnChooseXRCameraConfigurationEvent Google.XR.ARCoreExtensions.ARCoreExtensions::OnChooseXRCameraConfiguration
	OnChooseXRCameraConfigurationEvent_t53F1C593A476BE5A1C3AC0C3AF1032C79ABEB080* ___OnChooseXRCameraConfiguration_9;
	// System.String Google.XR.ARCoreExtensions.ARCoreExtensions::_currentPermissionRequest
	String_t* ____currentPermissionRequest_12;
	// System.Collections.Generic.HashSet`1<System.String> Google.XR.ARCoreExtensions.ARCoreExtensions::_requiredPermissionNames
	HashSet_1_tEFC6605F7DE53F71946C33FD371E53C3100F2178* ____requiredPermissionNames_13;
	// UnityEngine.XR.ARCore.ARCoreSessionSubsystem Google.XR.ARCoreExtensions.ARCoreExtensions::_arCoreSubsystem
	ARCoreSessionSubsystem_t7B755C740E5ADE41F6B32317BC5105B96B137349* ____arCoreSubsystem_14;
	// Google.XR.ARCoreExtensions.ARCoreExtensionsConfig Google.XR.ARCoreExtensions.ARCoreExtensions::_cachedConfig
	ARCoreExtensionsConfig_t241A8996B5A9CB82B5532C79DF31558CFFA531CD* ____cachedConfig_15;
	// UnityEngine.XR.ARCore.ARCoreCameraSubsystem Google.XR.ARCoreExtensions.ARCoreExtensions::_arCoreCameraSubsystem
	ARCoreCameraSubsystem_t037314216B2DA66DC532ABFB17CFD90B38830AD9* ____arCoreCameraSubsystem_16;
	// Google.XR.ARCoreExtensions.ARCoreExtensionsCameraConfigFilter Google.XR.ARCoreExtensions.ARCoreExtensions::_cachedFilter
	ARCoreExtensionsCameraConfigFilter_t7B45D467C1213E2DF2CA532D67388822ED2FF4C3* ____cachedFilter_17;
};

struct ARCoreExtensions_tD81ADD2A10A04FC507DB1A9D022C0778510C3B41_StaticFields
{
	// UnityEngine.AndroidJavaClass Google.XR.ARCoreExtensions.ARCoreExtensions::_versionInfo
	AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03* ____versionInfo_11;
	// Google.XR.ARCoreExtensions.ARCoreExtensions Google.XR.ARCoreExtensions.ARCoreExtensions::<_instance>k__BackingField
	ARCoreExtensions_tD81ADD2A10A04FC507DB1A9D022C0778510C3B41* ___U3C_instanceU3Ek__BackingField_18;
};

// Google.XR.ARCoreExtensions.AREarthManager
struct AREarthManager_tAC32FF06F084622687D9FB4837506A704301D0F0  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
};

// ARFeatheredPlaneMeshVisualizer
struct ARFeatheredPlaneMeshVisualizer_t5B508CD2D37F908F4359D7DED031B3C357E34955  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// System.Single ARFeatheredPlaneMeshVisualizer::m_FeatheringWidth
	float ___m_FeatheringWidth_4;
	// UnityEngine.XR.ARFoundation.ARPlaneMeshVisualizer ARFeatheredPlaneMeshVisualizer::m_PlaneMeshVisualizer
	ARPlaneMeshVisualizer_t21838C8E2676AC524939E67CB965925E924E018F* ___m_PlaneMeshVisualizer_7;
	// UnityEngine.XR.ARFoundation.ARPlane ARFeatheredPlaneMeshVisualizer::m_Plane
	ARPlane_tB2F02248AD4019D141553B25C1B9005913E98EF0* ___m_Plane_8;
	// UnityEngine.Material ARFeatheredPlaneMeshVisualizer::m_FeatheredPlaneMaterial
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___m_FeatheredPlaneMaterial_9;
};

struct ARFeatheredPlaneMeshVisualizer_t5B508CD2D37F908F4359D7DED031B3C357E34955_StaticFields
{
	// System.Collections.Generic.List`1<UnityEngine.Vector3> ARFeatheredPlaneMeshVisualizer::s_FeatheringUVs
	List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B* ___s_FeatheringUVs_5;
	// System.Collections.Generic.List`1<UnityEngine.Vector3> ARFeatheredPlaneMeshVisualizer::s_Vertices
	List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B* ___s_Vertices_6;
};

// Google.XR.ARCoreExtensions.ARGeospatialAnchor
struct ARGeospatialAnchor_tD63E18E1D193A2B24B757D285F3CF67A8FC7F571  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// System.IntPtr Google.XR.ARCoreExtensions.ARGeospatialAnchor::_anchorHandle
	intptr_t ____anchorHandle_4;
	// UnityEngine.Pose Google.XR.ARCoreExtensions.ARGeospatialAnchor::_pose
	Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 ____pose_5;
};

// UnityEngine.XR.ARFoundation.ARPlaneMeshVisualizer
struct ARPlaneMeshVisualizer_t21838C8E2676AC524939E67CB965925E924E018F  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.Mesh UnityEngine.XR.ARFoundation.ARPlaneMeshVisualizer::<mesh>k__BackingField
	Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* ___U3CmeshU3Ek__BackingField_4;
	// UnityEngine.XR.ARSubsystems.TrackingState UnityEngine.XR.ARFoundation.ARPlaneMeshVisualizer::m_TrackingStateVisibilityThreshold
	int32_t ___m_TrackingStateVisibilityThreshold_5;
	// System.Boolean UnityEngine.XR.ARFoundation.ARPlaneMeshVisualizer::m_HideSubsumed
	bool ___m_HideSubsumed_6;
	// System.Nullable`1<System.Single> UnityEngine.XR.ARFoundation.ARPlaneMeshVisualizer::m_InitialLineWidthMultiplier
	Nullable_1_t3D746CBB6123D4569FF4DEA60BC4240F32C6FE75 ___m_InitialLineWidthMultiplier_7;
	// UnityEngine.XR.ARFoundation.ARPlane UnityEngine.XR.ARFoundation.ARPlaneMeshVisualizer::m_Plane
	ARPlane_tB2F02248AD4019D141553B25C1B9005913E98EF0* ___m_Plane_8;
};

// UnityEngine.XR.ARFoundation.ARSessionOrigin
struct ARSessionOrigin_tE7B28A1A19500BCC02711397A19E330425830BC3  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.Camera UnityEngine.XR.ARFoundation.ARSessionOrigin::m_Camera
	Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* ___m_Camera_4;
	// UnityEngine.Transform UnityEngine.XR.ARFoundation.ARSessionOrigin::<trackablesParent>k__BackingField
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___U3CtrackablesParentU3Ek__BackingField_5;
	// System.Action`1<UnityEngine.XR.ARFoundation.ARTrackablesParentTransformChangedEventArgs> UnityEngine.XR.ARFoundation.ARSessionOrigin::trackablesParentTransformChanged
	Action_1_t2096FCE7327B89C5101BFB38155839F3166605FB* ___trackablesParentTransformChanged_6;
	// UnityEngine.GameObject UnityEngine.XR.ARFoundation.ARSessionOrigin::m_ContentOffsetGameObject
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___m_ContentOffsetGameObject_7;
};

// UnityEngine.XR.ARFoundation.ARTrackable
struct ARTrackable_t1D98417758C08E98A333CDEC0C2C1688CE10B2E0  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
};

// AnchorCreator
struct AnchorCreator_tBBEE94135B5183E0A8EE52FB00513F69C7C980ED  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.GameObject AnchorCreator::m_AnchorPrefab
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___m_AnchorPrefab_4;
	// System.Collections.Generic.List`1<UnityEngine.XR.ARFoundation.ARAnchor> AnchorCreator::m_AnchorPoints
	List_1_t5C2EBF017989E44F3D1D11AF502E10F6F8D9AB53* ___m_AnchorPoints_6;
	// UnityEngine.XR.ARFoundation.ARRaycastManager AnchorCreator::m_RaycastManager
	ARRaycastManager_tD9459374F0F5BD9E2E4A8A1C665E7F33F9C2EE44* ___m_RaycastManager_7;
	// UnityEngine.XR.ARFoundation.ARAnchorManager AnchorCreator::m_AnchorManager
	ARAnchorManager_tF68C46300BD6F2E83E3360BF9297C3C50F5D6B3E* ___m_AnchorManager_8;
	// UnityEngine.XR.ARFoundation.ARPlaneManager AnchorCreator::m_PlaneManager
	ARPlaneManager_t9DA6C512BDCFFBEE8B3DAA7170EB3BFFDE26A928* ___m_PlaneManager_9;
};

struct AnchorCreator_tBBEE94135B5183E0A8EE52FB00513F69C7C980ED_StaticFields
{
	// System.Collections.Generic.List`1<UnityEngine.XR.ARFoundation.ARRaycastHit> AnchorCreator::s_Hits
	List_1_t0754071572EFE7A5C92A59495D2524FC935364E3* ___s_Hits_5;
};

// AspectKeeper
struct AspectKeeper_tE04B4E487189116A41BDEE27EF419B57DED6331A  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.Camera AspectKeeper::targetCamera
	Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* ___targetCamera_4;
	// UnityEngine.Vector2 AspectKeeper::aspectVec
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___aspectVec_5;
};

// UnityEngine.AudioSource
struct AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299  : public AudioBehaviour_t2DC0BEF7B020C952F3D2DA5AAAC88501C7EEB941
{
};

// BuildingsGeospatialController
struct BuildingsGeospatialController_t3659F8BA9E2F49FF0B5D9F205AA900B84B98C410  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.XR.ARFoundation.ARAnchorManager BuildingsGeospatialController::arAnchorManager
	ARAnchorManager_tF68C46300BD6F2E83E3360BF9297C3C50F5D6B3E* ___arAnchorManager_4;
	// Google.XR.ARCoreExtensions.AREarthManager BuildingsGeospatialController::arEarthManager
	AREarthManager_tAC32FF06F084622687D9FB4837506A704301D0F0* ___arEarthManager_5;
	// NotesGenerator BuildingsGeospatialController::notesGenerator
	NotesGenerator_tD968B1468A55A495385ACE41CDC9423D02852B91* ___notesGenerator_6;
	// UnityEngine.Transform BuildingsGeospatialController::arObject
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___arObject_7;
	// UnityEngine.Transform BuildingsGeospatialController::gameQuad
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___gameQuad_8;
	// System.Double BuildingsGeospatialController::latitude
	double ___latitude_9;
	// System.Double BuildingsGeospatialController::longitude
	double ___longitude_10;
	// System.Double BuildingsGeospatialController::altitude
	double ___altitude_11;
	// Google.XR.ARCoreExtensions.ARGeospatialAnchor BuildingsGeospatialController::anchor
	ARGeospatialAnchor_tD63E18E1D193A2B24B757D285F3CF67A8FC7F571* ___anchor_14;
	// Google.XR.ARCoreExtensions.ARGeospatialAnchor BuildingsGeospatialController::myAnchor
	ARGeospatialAnchor_tD63E18E1D193A2B24B757D285F3CF67A8FC7F571* ___myAnchor_15;
};

// Changescene
struct Changescene_t316E8EA501CB3BB520C8CCF16BCCD75E98663EE9  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
};

// Collsionmusic
struct Collsionmusic_t4EA448F820927E8767BC935993C05693BEFEFC42  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.AudioSource Collsionmusic::audio
	AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* ___audio_4;
	// UnityEngine.AudioClip Collsionmusic::sound
	AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* ___sound_5;
};

// ComboSm
struct ComboSm_t204EFF4BA1F00967D138D95108874214D2766470  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// Combotext ComboSm::Sm
	Combotext_t66C71AF95DB28158B23E969B02D5102D37877FAA* ___Sm_4;
};

// Combotext
struct Combotext_t66C71AF95DB28158B23E969B02D5102D37877FAA  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// System.Single Combotext::Combo
	float ___Combo_4;
	// TMPro.TextMeshProUGUI Combotext::combocounttext
	TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957* ___combocounttext_5;
};

// Destroy
struct Destroy_t4F2B6B7FD5AFA77880F1040DBFD52453E63F3EA3  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
};

// DestroyNotes
struct DestroyNotes_tF76908B49C16499852501C1B66D481349586919D  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
};

// FixPositionXZ
struct FixPositionXZ_tD037E24FD34AA9295C8D0161026E20227AC3F5C4  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.GameObject FixPositionXZ::roadOrange
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___roadOrange_4;
	// UnityEngine.GameObject FixPositionXZ::roadBlue
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___roadBlue_5;
	// UnityEngine.GameObject FixPositionXZ::roadGreen
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___roadGreen_6;
	// UnityEngine.GameObject FixPositionXZ::roadPink
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___roadPink_7;
};

// Google.XR.ARCoreExtensions.Samples.Geospatial.GeospatialController
struct GeospatialController_t69A2BBD44F5A190BB256B888033F5297AF0A0D2F  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.XR.ARFoundation.ARSessionOrigin Google.XR.ARCoreExtensions.Samples.Geospatial.GeospatialController::SessionOrigin
	ARSessionOrigin_tE7B28A1A19500BCC02711397A19E330425830BC3* ___SessionOrigin_4;
	// UnityEngine.XR.ARFoundation.ARSession Google.XR.ARCoreExtensions.Samples.Geospatial.GeospatialController::Session
	ARSession_t13374A44A01F2C6D90578F93E0F0DA2482BE3014* ___Session_5;
	// UnityEngine.XR.ARFoundation.ARAnchorManager Google.XR.ARCoreExtensions.Samples.Geospatial.GeospatialController::AnchorManager
	ARAnchorManager_tF68C46300BD6F2E83E3360BF9297C3C50F5D6B3E* ___AnchorManager_6;
	// UnityEngine.XR.ARFoundation.ARRaycastManager Google.XR.ARCoreExtensions.Samples.Geospatial.GeospatialController::RaycastManager
	ARRaycastManager_tD9459374F0F5BD9E2E4A8A1C665E7F33F9C2EE44* ___RaycastManager_7;
	// Google.XR.ARCoreExtensions.AREarthManager Google.XR.ARCoreExtensions.Samples.Geospatial.GeospatialController::EarthManager
	AREarthManager_tAC32FF06F084622687D9FB4837506A704301D0F0* ___EarthManager_8;
	// Google.XR.ARCoreExtensions.ARCoreExtensions Google.XR.ARCoreExtensions.Samples.Geospatial.GeospatialController::ARCoreExtensions
	ARCoreExtensions_tD81ADD2A10A04FC507DB1A9D022C0778510C3B41* ___ARCoreExtensions_9;
	// NotesGenerator Google.XR.ARCoreExtensions.Samples.Geospatial.GeospatialController::notesGenerator
	NotesGenerator_tD968B1468A55A495385ACE41CDC9423D02852B91* ___notesGenerator_10;
	// System.Boolean Google.XR.ARCoreExtensions.Samples.Geospatial.GeospatialController::waitingForLocationService
	bool ___waitingForLocationService_18;
	// System.Boolean Google.XR.ARCoreExtensions.Samples.Geospatial.GeospatialController::isInARView
	bool ___isInARView_19;
	// System.Boolean Google.XR.ARCoreExtensions.Samples.Geospatial.GeospatialController::isReturning
	bool ___isReturning_20;
	// System.Boolean Google.XR.ARCoreExtensions.Samples.Geospatial.GeospatialController::isLocalizing
	bool ___isLocalizing_21;
	// System.Boolean Google.XR.ARCoreExtensions.Samples.Geospatial.GeospatialController::enablingGeospatial
	bool ___enablingGeospatial_22;
	// System.Single Google.XR.ARCoreExtensions.Samples.Geospatial.GeospatialController::localizationPassedTime
	float ___localizationPassedTime_23;
	// System.Single Google.XR.ARCoreExtensions.Samples.Geospatial.GeospatialController::configurePrepareTime
	float ___configurePrepareTime_24;
	// System.Collections.Generic.List`1<UnityEngine.GameObject> Google.XR.ARCoreExtensions.Samples.Geospatial.GeospatialController::_anchorObjects
	List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* ____anchorObjects_25;
	// System.Collections.IEnumerator Google.XR.ARCoreExtensions.Samples.Geospatial.GeospatialController::startLocationService
	RuntimeObject* ___startLocationService_26;
	// System.Collections.IEnumerator Google.XR.ARCoreExtensions.Samples.Geospatial.GeospatialController::asyncCheck
	RuntimeObject* ___asyncCheck_27;
	// UnityEngine.UI.Text Google.XR.ARCoreExtensions.Samples.Geospatial.GeospatialController::debugText
	Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* ___debugText_28;
};

// MinusComboSm
struct MinusComboSm_tBACF61FA69DCBD7AF0DAE8C3C51E4F8C373251FC  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// Combotext MinusComboSm::Sm
	Combotext_t66C71AF95DB28158B23E969B02D5102D37877FAA* ___Sm_4;
};

// MinusScoreSm
struct MinusScoreSm_tF03B2CCED0184C9511627D15DDD6FE245A74697F  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// Scoretext MinusScoreSm::Sm
	Scoretext_t81C3E9BC508DF6567C782ECEF50A8CA49CFBC53B* ___Sm_4;
};

// MinusScoregaugeManager
struct MinusScoregaugeManager_t37D8435407667DA4B9ED8D9159C26C3DAFA87F23  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.UI.Slider MinusScoregaugeManager::scoregauge
	Slider_t87EA570E3D6556CABF57456C2F3873FFD86E652F* ___scoregauge_4;
};

// Musicboxslide
struct Musicboxslide_tDA5C02383D64724F2749EE93DAA37DAE695BE3CC  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
};

// Next1
struct Next1_tD81A0881C186B247881F9513268E3AECF40E55AC  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
};

// Next2
struct Next2_t3FB449AADB893114D532687345F9E322C724BC89  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
};

// NonActive
struct NonActive_t505A58BEB3C116AA2CE20F1ED05EA9203D32F442  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
};

// NotesGenerator
struct NotesGenerator_tD968B1468A55A495385ACE41CDC9423D02852B91  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// SoundController NotesGenerator::soundController
	SoundController_tA53F7251931CF12B1E75D0DF2F56D42DBFC61071* ___soundController_4;
	// RhythmObject[] NotesGenerator::rhythmObjects
	RhythmObjectU5BU5D_tB69B4B2405497D929A9E0301E27713F005F92774* ___rhythmObjects_5;
	// UnityEngine.GameObject NotesGenerator::originOrange
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___originOrange_6;
	// UnityEngine.GameObject NotesGenerator::originBlue
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___originBlue_7;
	// UnityEngine.GameObject NotesGenerator::originGreen
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___originGreen_8;
	// UnityEngine.GameObject NotesGenerator::originPink
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___originPink_9;
	// UnityEngine.GameObject NotesGenerator::frame
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___frame_10;
	// UnityEngine.GameObject NotesGenerator::notesPink
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___notesPink_11;
	// UnityEngine.GameObject NotesGenerator::notesGreen
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___notesGreen_12;
	// UnityEngine.GameObject NotesGenerator::notesBlue
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___notesBlue_13;
	// UnityEngine.GameObject NotesGenerator::notesOrange
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___notesOrange_14;
	// System.Boolean NotesGenerator::isActive
	bool ___isActive_15;
	// System.Single NotesGenerator::generateTime
	float ___generateTime_16;
};

// NotesMoveController
struct NotesMoveController_t1D30EA0235FF4CA4D8EA3018A019E9C9FA4D4A1C  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// System.Collections.Generic.List`1<UnityEngine.GameObject> NotesMoveController::pathPoints
	List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* ___pathPoints_4;
};

// NotesSlide
struct NotesSlide_tE75BA028235714DAF6DB7179140D449035CC0D92  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.GameObject[] NotesSlide::origins
	GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* ___origins_4;
	// UnityEngine.GameObject[] NotesSlide::destinations
	GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* ___destinations_5;
	// UnityEngine.Vector3[] NotesSlide::originAndDestination
	Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* ___originAndDestination_6;
};

// ObjectChangeScale
struct ObjectChangeScale_tE0D4E687DE8C3ACD6124D148C79A46F7885A712A  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// System.Single ObjectChangeScale::scaleValue
	float ___scaleValue_4;
};

// ObjectRotation
struct ObjectRotation_t197E99EE089921C164133658B691481669871B56  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
};

// RhythmObject
struct RhythmObject_t48B5812FD53B54DB2453283D026C825E88D880A3  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// System.Collections.Generic.List`1<UnityEngine.Transform> RhythmObject::grandchildrenObj
	List_1_t991BBC5A1D51F59A450367DF944DAA207F22D06D* ___grandchildrenObj_4;
	// System.Collections.Generic.Dictionary`2<System.Int32,UnityEngine.GameObject> RhythmObject::activeObjects
	Dictionary_2_t3ED995699F3E88D06E5DA7362BEB7584DBD61662* ___activeObjects_5;
	// System.Int32 RhythmObject::MinimumRangeValue
	int32_t ___MinimumRangeValue_6;
	// System.Int32 RhythmObject::MaximumRangeValue
	int32_t ___MaximumRangeValue_7;
	// System.Boolean RhythmObject::isEnable
	bool ___isEnable_8;
};

// Google.XR.ARCoreExtensions.Samples.Geospatial.SafeAreaScaler
struct SafeAreaScaler_t7FFEE4D34FEA32394B9181D42E522BFFD1E4BCE8  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.Rect Google.XR.ARCoreExtensions.Samples.Geospatial.SafeAreaScaler::_screenSafeArea
	Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D ____screenSafeArea_4;
};

// ScoreSm
struct ScoreSm_t45451B5935E6AA974EDA63F7B1A2935A1473A1A0  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// Scoretext ScoreSm::Sm
	Scoretext_t81C3E9BC508DF6567C782ECEF50A8CA49CFBC53B* ___Sm_4;
};

// ScoregaugeManager
struct ScoregaugeManager_tE5BD928071BF7C92F99515E16AEBF3027D886924  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.UI.Slider ScoregaugeManager::scoregauge
	Slider_t87EA570E3D6556CABF57456C2F3873FFD86E652F* ___scoregauge_4;
};

// Scoretext
struct Scoretext_t81C3E9BC508DF6567C782ECEF50A8CA49CFBC53B  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// System.Single Scoretext::Score
	float ___Score_4;
	// TMPro.TextMeshProUGUI Scoretext::scorecounttext
	TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957* ___scorecounttext_5;
};

// SoundController
struct SoundController_tA53F7251931CF12B1E75D0DF2F56D42DBFC61071  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.XR.ARFoundation.ARAnchorManager SoundController::arAnchorManager
	ARAnchorManager_tF68C46300BD6F2E83E3360BF9297C3C50F5D6B3E* ___arAnchorManager_4;
	// Google.XR.ARCoreExtensions.AREarthManager SoundController::arEarthManager
	AREarthManager_tAC32FF06F084622687D9FB4837506A704301D0F0* ___arEarthManager_5;
	// UnityEngine.AudioSource SoundController::audioSource
	AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* ___audioSource_6;
	// Google.XR.ARCoreExtensions.ARGeospatialAnchor SoundController::anchor
	ARGeospatialAnchor_tD63E18E1D193A2B24B757D285F3CF67A8FC7F571* ___anchor_7;
};

// SwitchMaterial
struct SwitchMaterial_tAF8EEBCBCB3B6D6D6BE203FB2B12E16187CDF999  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.Material SwitchMaterial::_replaceTarget
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ____replaceTarget_4;
	// System.Collections.Generic.List`1<UnityEngine.Renderer> SwitchMaterial::_renderers
	List_1_tD435DCC2A88E36DFC551EA5392CE0182F0C50E93* ____renderers_5;
};

// Title
struct Title_tDC7DA3F4A783D017736F6DE0F1AB9E27437522AA  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
};

// Trigger
struct Trigger_t9FBC4B9D2172AC5785AC296E1CC2CCD678F61DD3  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
};

// UnityEngine.EventSystems.UIBehaviour
struct UIBehaviour_tB9D4295827BD2EEDEF0749200C6CA7090C742A9D  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
};

// UnityEngine.XR.ARFoundation.ARTrackableManager`5<UnityEngine.XR.ARSubsystems.XRAnchorSubsystem,UnityEngine.XR.ARSubsystems.XRAnchorSubsystemDescriptor,UnityEngine.XR.ARSubsystems.XRAnchorSubsystem/Provider,UnityEngine.XR.ARSubsystems.XRAnchor,UnityEngine.XR.ARFoundation.ARAnchor>
struct ARTrackableManager_5_t58BCDA2A5956989C6A20CC1E41B0F6DBEED545B6  : public SubsystemLifecycleManager_3_tAE0BB0092EB47B81AA111C370381E3BA14C88DD3
{
	// UnityEngine.XR.ARFoundation.ARSessionOrigin UnityEngine.XR.ARFoundation.ARTrackableManager`5::<sessionOrigin>k__BackingField
	ARSessionOrigin_tE7B28A1A19500BCC02711397A19E330425830BC3* ___U3CsessionOriginU3Ek__BackingField_8;
	// System.Collections.Generic.Dictionary`2<UnityEngine.XR.ARSubsystems.TrackableId,TTrackable> UnityEngine.XR.ARFoundation.ARTrackableManager`5::m_Trackables
	Dictionary_2_t525DE08A369658A5AE7D624D571ED15216817535* ___m_Trackables_9;
	// System.Collections.Generic.Dictionary`2<UnityEngine.XR.ARSubsystems.TrackableId,TTrackable> UnityEngine.XR.ARFoundation.ARTrackableManager`5::m_PendingAdds
	Dictionary_2_t525DE08A369658A5AE7D624D571ED15216817535* ___m_PendingAdds_10;
};

struct ARTrackableManager_5_t58BCDA2A5956989C6A20CC1E41B0F6DBEED545B6_StaticFields
{
	// UnityEngine.XR.ARFoundation.ARTrackableManager`5<TSubsystem,TSubsystemDescriptor,TProvider,TSessionRelativeData,TTrackable> UnityEngine.XR.ARFoundation.ARTrackableManager`5::<instance>k__BackingField
	ARTrackableManager_5_t58BCDA2A5956989C6A20CC1E41B0F6DBEED545B6* ___U3CinstanceU3Ek__BackingField_7;
	// System.Collections.Generic.List`1<TTrackable> UnityEngine.XR.ARFoundation.ARTrackableManager`5::s_Added
	List_1_t5C2EBF017989E44F3D1D11AF502E10F6F8D9AB53* ___s_Added_11;
	// System.Collections.Generic.List`1<TTrackable> UnityEngine.XR.ARFoundation.ARTrackableManager`5::s_Updated
	List_1_t5C2EBF017989E44F3D1D11AF502E10F6F8D9AB53* ___s_Updated_12;
	// System.Collections.Generic.List`1<TTrackable> UnityEngine.XR.ARFoundation.ARTrackableManager`5::s_Removed
	List_1_t5C2EBF017989E44F3D1D11AF502E10F6F8D9AB53* ___s_Removed_13;
};

// UnityEngine.XR.ARFoundation.ARTrackableManager`5<UnityEngine.XR.ARSubsystems.XRPlaneSubsystem,UnityEngine.XR.ARSubsystems.XRPlaneSubsystemDescriptor,UnityEngine.XR.ARSubsystems.XRPlaneSubsystem/Provider,UnityEngine.XR.ARSubsystems.BoundedPlane,UnityEngine.XR.ARFoundation.ARPlane>
struct ARTrackableManager_5_t1F9F85442D84B92DE0BC4C518768C0154AB69103  : public SubsystemLifecycleManager_3_t7FE0F4D0E7C0B4044705703906B62335E93547A6
{
	// UnityEngine.XR.ARFoundation.ARSessionOrigin UnityEngine.XR.ARFoundation.ARTrackableManager`5::<sessionOrigin>k__BackingField
	ARSessionOrigin_tE7B28A1A19500BCC02711397A19E330425830BC3* ___U3CsessionOriginU3Ek__BackingField_8;
	// System.Collections.Generic.Dictionary`2<UnityEngine.XR.ARSubsystems.TrackableId,TTrackable> UnityEngine.XR.ARFoundation.ARTrackableManager`5::m_Trackables
	Dictionary_2_t26A4820BA6F451105138232941B7A9466E583A6C* ___m_Trackables_9;
	// System.Collections.Generic.Dictionary`2<UnityEngine.XR.ARSubsystems.TrackableId,TTrackable> UnityEngine.XR.ARFoundation.ARTrackableManager`5::m_PendingAdds
	Dictionary_2_t26A4820BA6F451105138232941B7A9466E583A6C* ___m_PendingAdds_10;
};

struct ARTrackableManager_5_t1F9F85442D84B92DE0BC4C518768C0154AB69103_StaticFields
{
	// UnityEngine.XR.ARFoundation.ARTrackableManager`5<TSubsystem,TSubsystemDescriptor,TProvider,TSessionRelativeData,TTrackable> UnityEngine.XR.ARFoundation.ARTrackableManager`5::<instance>k__BackingField
	ARTrackableManager_5_t1F9F85442D84B92DE0BC4C518768C0154AB69103* ___U3CinstanceU3Ek__BackingField_7;
	// System.Collections.Generic.List`1<TTrackable> UnityEngine.XR.ARFoundation.ARTrackableManager`5::s_Added
	List_1_t10BA05B555C92BD54800DFF82DCAAFC9DE44A077* ___s_Added_11;
	// System.Collections.Generic.List`1<TTrackable> UnityEngine.XR.ARFoundation.ARTrackableManager`5::s_Updated
	List_1_t10BA05B555C92BD54800DFF82DCAAFC9DE44A077* ___s_Updated_12;
	// System.Collections.Generic.List`1<TTrackable> UnityEngine.XR.ARFoundation.ARTrackableManager`5::s_Removed
	List_1_t10BA05B555C92BD54800DFF82DCAAFC9DE44A077* ___s_Removed_13;
};

// UnityEngine.XR.ARFoundation.ARTrackableManager`5<UnityEngine.XR.ARSubsystems.XRRaycastSubsystem,UnityEngine.XR.ARSubsystems.XRRaycastSubsystemDescriptor,UnityEngine.XR.ARSubsystems.XRRaycastSubsystem/Provider,UnityEngine.XR.ARSubsystems.XRRaycast,UnityEngine.XR.ARFoundation.ARRaycast>
struct ARTrackableManager_5_tB0551B87CFE2349D3C8AD77F1642F669F950A409  : public SubsystemLifecycleManager_3_tF871EF43DE89B354DB5832CC545E7E0EEF19DC8C
{
	// UnityEngine.XR.ARFoundation.ARSessionOrigin UnityEngine.XR.ARFoundation.ARTrackableManager`5::<sessionOrigin>k__BackingField
	ARSessionOrigin_tE7B28A1A19500BCC02711397A19E330425830BC3* ___U3CsessionOriginU3Ek__BackingField_8;
	// System.Collections.Generic.Dictionary`2<UnityEngine.XR.ARSubsystems.TrackableId,TTrackable> UnityEngine.XR.ARFoundation.ARTrackableManager`5::m_Trackables
	Dictionary_2_t4D1D3AB1188A73B9F0416424BA9B873577C418FD* ___m_Trackables_9;
	// System.Collections.Generic.Dictionary`2<UnityEngine.XR.ARSubsystems.TrackableId,TTrackable> UnityEngine.XR.ARFoundation.ARTrackableManager`5::m_PendingAdds
	Dictionary_2_t4D1D3AB1188A73B9F0416424BA9B873577C418FD* ___m_PendingAdds_10;
};

struct ARTrackableManager_5_tB0551B87CFE2349D3C8AD77F1642F669F950A409_StaticFields
{
	// UnityEngine.XR.ARFoundation.ARTrackableManager`5<TSubsystem,TSubsystemDescriptor,TProvider,TSessionRelativeData,TTrackable> UnityEngine.XR.ARFoundation.ARTrackableManager`5::<instance>k__BackingField
	ARTrackableManager_5_tB0551B87CFE2349D3C8AD77F1642F669F950A409* ___U3CinstanceU3Ek__BackingField_7;
	// System.Collections.Generic.List`1<TTrackable> UnityEngine.XR.ARFoundation.ARTrackableManager`5::s_Added
	List_1_tE7BEADF38CADBCC46B040CF07A1B719A7F7E5123* ___s_Added_11;
	// System.Collections.Generic.List`1<TTrackable> UnityEngine.XR.ARFoundation.ARTrackableManager`5::s_Updated
	List_1_tE7BEADF38CADBCC46B040CF07A1B719A7F7E5123* ___s_Updated_12;
	// System.Collections.Generic.List`1<TTrackable> UnityEngine.XR.ARFoundation.ARTrackableManager`5::s_Removed
	List_1_tE7BEADF38CADBCC46B040CF07A1B719A7F7E5123* ___s_Removed_13;
};

// UnityEngine.XR.ARFoundation.ARTrackable`2<UnityEngine.XR.ARSubsystems.BoundedPlane,UnityEngine.XR.ARFoundation.ARPlane>
struct ARTrackable_2_t758FABA4E5998A283C2E8C792EE90E0FC3482341  : public ARTrackable_t1D98417758C08E98A333CDEC0C2C1688CE10B2E0
{
	// System.Boolean UnityEngine.XR.ARFoundation.ARTrackable`2::m_DestroyOnRemoval
	bool ___m_DestroyOnRemoval_4;
	// System.Boolean UnityEngine.XR.ARFoundation.ARTrackable`2::<pending>k__BackingField
	bool ___U3CpendingU3Ek__BackingField_5;
	// TSessionRelativeData UnityEngine.XR.ARFoundation.ARTrackable`2::<sessionRelativeData>k__BackingField
	BoundedPlane_tF51C315A8961EB42F0A1B60D47158646E5AF75CE ___U3CsessionRelativeDataU3Ek__BackingField_6;
};

// UnityEngine.XR.ARFoundation.ARTrackable`2<UnityEngine.XR.ARSubsystems.XRAnchor,UnityEngine.XR.ARFoundation.ARAnchor>
struct ARTrackable_2_tE57413318307EA1D5A47931CA675B32B49A1D79B  : public ARTrackable_t1D98417758C08E98A333CDEC0C2C1688CE10B2E0
{
	// System.Boolean UnityEngine.XR.ARFoundation.ARTrackable`2::m_DestroyOnRemoval
	bool ___m_DestroyOnRemoval_4;
	// System.Boolean UnityEngine.XR.ARFoundation.ARTrackable`2::<pending>k__BackingField
	bool ___U3CpendingU3Ek__BackingField_5;
	// TSessionRelativeData UnityEngine.XR.ARFoundation.ARTrackable`2::<sessionRelativeData>k__BackingField
	XRAnchor_tDD427E66CAA09DE7B058EA76223EF7DC3880FE82 ___U3CsessionRelativeDataU3Ek__BackingField_6;
};

// UnityEngine.XR.ARFoundation.ARSession
struct ARSession_t13374A44A01F2C6D90578F93E0F0DA2482BE3014  : public SubsystemLifecycleManager_3_t7AC7A0198786D712CE4FE49E3789EE14BCC2DFD5
{
	// System.Boolean UnityEngine.XR.ARFoundation.ARSession::m_AttemptUpdate
	bool ___m_AttemptUpdate_7;
	// System.Boolean UnityEngine.XR.ARFoundation.ARSession::m_MatchFrameRate
	bool ___m_MatchFrameRate_8;
	// UnityEngine.XR.ARFoundation.TrackingMode UnityEngine.XR.ARFoundation.ARSession::m_TrackingMode
	int32_t ___m_TrackingMode_9;
	// System.Int32 UnityEngine.XR.ARFoundation.ARSession::m_VSyncCount
	int32_t ___m_VSyncCount_11;
	// System.Int32 UnityEngine.XR.ARFoundation.ARSession::m_TargetFrameRate
	int32_t ___m_TargetFrameRate_12;
	// System.Boolean UnityEngine.XR.ARFoundation.ARSession::m_WasFrameRateSet
	bool ___m_WasFrameRateSet_13;
};

struct ARSession_t13374A44A01F2C6D90578F93E0F0DA2482BE3014_StaticFields
{
	// System.Action`1<UnityEngine.XR.ARFoundation.ARSessionStateChangedEventArgs> UnityEngine.XR.ARFoundation.ARSession::stateChanged
	Action_1_t325C602D999E964DB72210E493635E83F8D6CE68* ___stateChanged_10;
	// UnityEngine.XR.ARFoundation.ARSessionState UnityEngine.XR.ARFoundation.ARSession::s_State
	int32_t ___s_State_14;
	// UnityEngine.XR.ARSubsystems.NotTrackingReason UnityEngine.XR.ARFoundation.ARSession::s_NotTrackingReason
	int32_t ___s_NotTrackingReason_15;
	// UnityEngine.XR.ARSubsystems.SessionAvailability UnityEngine.XR.ARFoundation.ARSession::s_Availability
	int32_t ___s_Availability_16;
};

// UnityEngine.EventSystems.EventSystem
struct EventSystem_t61C51380B105BE9D2C39C4F15B7E655659957707  : public UIBehaviour_tB9D4295827BD2EEDEF0749200C6CA7090C742A9D
{
	// System.Collections.Generic.List`1<UnityEngine.EventSystems.BaseInputModule> UnityEngine.EventSystems.EventSystem::m_SystemInputModules
	List_1_tA5BDE435C735A082941CD33D212F97F4AE9FA55F* ___m_SystemInputModules_4;
	// UnityEngine.EventSystems.BaseInputModule UnityEngine.EventSystems.EventSystem::m_CurrentInputModule
	BaseInputModule_tF3B7C22AF1419B2AC9ECE6589357DC1B88ED96B1* ___m_CurrentInputModule_5;
	// UnityEngine.GameObject UnityEngine.EventSystems.EventSystem::m_FirstSelected
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___m_FirstSelected_7;
	// System.Boolean UnityEngine.EventSystems.EventSystem::m_sendNavigationEvents
	bool ___m_sendNavigationEvents_8;
	// System.Int32 UnityEngine.EventSystems.EventSystem::m_DragThreshold
	int32_t ___m_DragThreshold_9;
	// UnityEngine.GameObject UnityEngine.EventSystems.EventSystem::m_CurrentSelected
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___m_CurrentSelected_10;
	// System.Boolean UnityEngine.EventSystems.EventSystem::m_HasFocus
	bool ___m_HasFocus_11;
	// System.Boolean UnityEngine.EventSystems.EventSystem::m_SelectionGuard
	bool ___m_SelectionGuard_12;
	// UnityEngine.EventSystems.BaseEventData UnityEngine.EventSystems.EventSystem::m_DummyData
	BaseEventData_tE03A848325C0AE8E76C6CA15FD86395EBF83364F* ___m_DummyData_13;
};

struct EventSystem_t61C51380B105BE9D2C39C4F15B7E655659957707_StaticFields
{
	// System.Collections.Generic.List`1<UnityEngine.EventSystems.EventSystem> UnityEngine.EventSystems.EventSystem::m_EventSystems
	List_1_tF2FE88545EFEC788CAAE6C74EC2F78E937FCCAC3* ___m_EventSystems_6;
	// System.Comparison`1<UnityEngine.EventSystems.RaycastResult> UnityEngine.EventSystems.EventSystem::s_RaycastComparer
	Comparison_1_t9FCAC8C8CE160A96C5AAD2DE1D353DCE8A2FEEFC* ___s_RaycastComparer_14;
	// UnityEngine.EventSystems.EventSystem/UIToolkitOverrideConfig UnityEngine.EventSystems.EventSystem::s_UIToolkitOverride
	UIToolkitOverrideConfig_t4E6B4528E38BCA7DA72C45424634806200A50182 ___s_UIToolkitOverride_15;
};

// UnityEngine.UI.Graphic
struct Graphic_tCBFCA4585A19E2B75465AECFEAC43F4016BF7931  : public UIBehaviour_tB9D4295827BD2EEDEF0749200C6CA7090C742A9D
{
	// UnityEngine.Material UnityEngine.UI.Graphic::m_Material
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___m_Material_6;
	// UnityEngine.Color UnityEngine.UI.Graphic::m_Color
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___m_Color_7;
	// System.Boolean UnityEngine.UI.Graphic::m_SkipLayoutUpdate
	bool ___m_SkipLayoutUpdate_8;
	// System.Boolean UnityEngine.UI.Graphic::m_SkipMaterialUpdate
	bool ___m_SkipMaterialUpdate_9;
	// System.Boolean UnityEngine.UI.Graphic::m_RaycastTarget
	bool ___m_RaycastTarget_10;
	// System.Boolean UnityEngine.UI.Graphic::m_RaycastTargetCache
	bool ___m_RaycastTargetCache_11;
	// UnityEngine.Vector4 UnityEngine.UI.Graphic::m_RaycastPadding
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___m_RaycastPadding_12;
	// UnityEngine.RectTransform UnityEngine.UI.Graphic::m_RectTransform
	RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* ___m_RectTransform_13;
	// UnityEngine.CanvasRenderer UnityEngine.UI.Graphic::m_CanvasRenderer
	CanvasRenderer_tAB9A55A976C4E3B2B37D0CE5616E5685A8B43860* ___m_CanvasRenderer_14;
	// UnityEngine.Canvas UnityEngine.UI.Graphic::m_Canvas
	Canvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26* ___m_Canvas_15;
	// System.Boolean UnityEngine.UI.Graphic::m_VertsDirty
	bool ___m_VertsDirty_16;
	// System.Boolean UnityEngine.UI.Graphic::m_MaterialDirty
	bool ___m_MaterialDirty_17;
	// UnityEngine.Events.UnityAction UnityEngine.UI.Graphic::m_OnDirtyLayoutCallback
	UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* ___m_OnDirtyLayoutCallback_18;
	// UnityEngine.Events.UnityAction UnityEngine.UI.Graphic::m_OnDirtyVertsCallback
	UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* ___m_OnDirtyVertsCallback_19;
	// UnityEngine.Events.UnityAction UnityEngine.UI.Graphic::m_OnDirtyMaterialCallback
	UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* ___m_OnDirtyMaterialCallback_20;
	// UnityEngine.Mesh UnityEngine.UI.Graphic::m_CachedMesh
	Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* ___m_CachedMesh_23;
	// UnityEngine.Vector2[] UnityEngine.UI.Graphic::m_CachedUvs
	Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* ___m_CachedUvs_24;
	// UnityEngine.UI.CoroutineTween.TweenRunner`1<UnityEngine.UI.CoroutineTween.ColorTween> UnityEngine.UI.Graphic::m_ColorTweenRunner
	TweenRunner_1_t5BB0582F926E75E2FE795492679A6CF55A4B4BC4* ___m_ColorTweenRunner_25;
	// System.Boolean UnityEngine.UI.Graphic::<useLegacyMeshGeneration>k__BackingField
	bool ___U3CuseLegacyMeshGenerationU3Ek__BackingField_26;
};

struct Graphic_tCBFCA4585A19E2B75465AECFEAC43F4016BF7931_StaticFields
{
	// UnityEngine.Material UnityEngine.UI.Graphic::s_DefaultUI
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___s_DefaultUI_4;
	// UnityEngine.Texture2D UnityEngine.UI.Graphic::s_WhiteTexture
	Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* ___s_WhiteTexture_5;
	// UnityEngine.Mesh UnityEngine.UI.Graphic::s_Mesh
	Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* ___s_Mesh_21;
	// UnityEngine.UI.VertexHelper UnityEngine.UI.Graphic::s_VertexHelper
	VertexHelper_tB905FCB02AE67CBEE5F265FE37A5938FC5D136FE* ___s_VertexHelper_22;
};

// UnityEngine.UI.Selectable
struct Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712  : public UIBehaviour_tB9D4295827BD2EEDEF0749200C6CA7090C742A9D
{
	// System.Boolean UnityEngine.UI.Selectable::m_EnableCalled
	bool ___m_EnableCalled_6;
	// UnityEngine.UI.Navigation UnityEngine.UI.Selectable::m_Navigation
	Navigation_t4D2E201D65749CF4E104E8AC1232CF1D6F14795C ___m_Navigation_7;
	// UnityEngine.UI.Selectable/Transition UnityEngine.UI.Selectable::m_Transition
	int32_t ___m_Transition_8;
	// UnityEngine.UI.ColorBlock UnityEngine.UI.Selectable::m_Colors
	ColorBlock_tDD7C62E7AFE442652FC98F8D058CE8AE6BFD7C11 ___m_Colors_9;
	// UnityEngine.UI.SpriteState UnityEngine.UI.Selectable::m_SpriteState
	SpriteState_tC8199570BE6337FB5C49347C97892B4222E5AACD ___m_SpriteState_10;
	// UnityEngine.UI.AnimationTriggers UnityEngine.UI.Selectable::m_AnimationTriggers
	AnimationTriggers_tA0DC06F89C5280C6DD972F6F4C8A56D7F4F79074* ___m_AnimationTriggers_11;
	// System.Boolean UnityEngine.UI.Selectable::m_Interactable
	bool ___m_Interactable_12;
	// UnityEngine.UI.Graphic UnityEngine.UI.Selectable::m_TargetGraphic
	Graphic_tCBFCA4585A19E2B75465AECFEAC43F4016BF7931* ___m_TargetGraphic_13;
	// System.Boolean UnityEngine.UI.Selectable::m_GroupsAllowInteraction
	bool ___m_GroupsAllowInteraction_14;
	// System.Int32 UnityEngine.UI.Selectable::m_CurrentIndex
	int32_t ___m_CurrentIndex_15;
	// System.Boolean UnityEngine.UI.Selectable::<isPointerInside>k__BackingField
	bool ___U3CisPointerInsideU3Ek__BackingField_16;
	// System.Boolean UnityEngine.UI.Selectable::<isPointerDown>k__BackingField
	bool ___U3CisPointerDownU3Ek__BackingField_17;
	// System.Boolean UnityEngine.UI.Selectable::<hasSelection>k__BackingField
	bool ___U3ChasSelectionU3Ek__BackingField_18;
	// System.Collections.Generic.List`1<UnityEngine.CanvasGroup> UnityEngine.UI.Selectable::m_CanvasGroupCache
	List_1_t2CDCA768E7F493F5EDEBC75AEB200FD621354E35* ___m_CanvasGroupCache_19;
};

struct Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712_StaticFields
{
	// UnityEngine.UI.Selectable[] UnityEngine.UI.Selectable::s_Selectables
	SelectableU5BU5D_t4160E135F02A40F75A63F787D36F31FEC6FE91A9* ___s_Selectables_4;
	// System.Int32 UnityEngine.UI.Selectable::s_SelectableCount
	int32_t ___s_SelectableCount_5;
};

// UnityEngine.XR.ARFoundation.ARAnchor
struct ARAnchor_t832D3D366D3F1D43F995A298974D4EDABACC0E06  : public ARTrackable_2_tE57413318307EA1D5A47931CA675B32B49A1D79B
{
};

// UnityEngine.XR.ARFoundation.ARAnchorManager
struct ARAnchorManager_tF68C46300BD6F2E83E3360BF9297C3C50F5D6B3E  : public ARTrackableManager_5_t58BCDA2A5956989C6A20CC1E41B0F6DBEED545B6
{
	// UnityEngine.GameObject UnityEngine.XR.ARFoundation.ARAnchorManager::m_AnchorPrefab
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___m_AnchorPrefab_14;
	// System.Action`1<UnityEngine.XR.ARFoundation.ARAnchorsChangedEventArgs> UnityEngine.XR.ARFoundation.ARAnchorManager::anchorsChanged
	Action_1_t11340E5174173030E076A75316E18A395082F8A5* ___anchorsChanged_15;
};

// UnityEngine.XR.ARFoundation.ARPlane
struct ARPlane_tB2F02248AD4019D141553B25C1B9005913E98EF0  : public ARTrackable_2_t758FABA4E5998A283C2E8C792EE90E0FC3482341
{
	// System.Single UnityEngine.XR.ARFoundation.ARPlane::m_VertexChangedThreshold
	float ___m_VertexChangedThreshold_7;
	// System.Action`1<UnityEngine.XR.ARFoundation.ARPlaneBoundaryChangedEventArgs> UnityEngine.XR.ARFoundation.ARPlane::boundaryChanged
	Action_1_t762BEDF03B3FAD9E52246AF6B4291030B8085074* ___boundaryChanged_8;
	// UnityEngine.XR.ARFoundation.ARPlane UnityEngine.XR.ARFoundation.ARPlane::<subsumedBy>k__BackingField
	ARPlane_tB2F02248AD4019D141553B25C1B9005913E98EF0* ___U3CsubsumedByU3Ek__BackingField_9;
	// Unity.Collections.NativeArray`1<UnityEngine.Vector2> UnityEngine.XR.ARFoundation.ARPlane::m_Boundary
	NativeArray_1_t0BB246A2F65C2C705F83BEBE1B62D9543C330B70 ___m_Boundary_10;
	// Unity.Collections.NativeArray`1<UnityEngine.Vector2> UnityEngine.XR.ARFoundation.ARPlane::m_OldBoundary
	NativeArray_1_t0BB246A2F65C2C705F83BEBE1B62D9543C330B70 ___m_OldBoundary_11;
	// System.Boolean UnityEngine.XR.ARFoundation.ARPlane::m_HasBoundaryChanged
	bool ___m_HasBoundaryChanged_12;
};

// UnityEngine.XR.ARFoundation.ARPlaneManager
struct ARPlaneManager_t9DA6C512BDCFFBEE8B3DAA7170EB3BFFDE26A928  : public ARTrackableManager_5_t1F9F85442D84B92DE0BC4C518768C0154AB69103
{
	// UnityEngine.GameObject UnityEngine.XR.ARFoundation.ARPlaneManager::m_PlanePrefab
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___m_PlanePrefab_14;
	// UnityEngine.XR.ARSubsystems.PlaneDetectionMode UnityEngine.XR.ARFoundation.ARPlaneManager::m_DetectionMode
	int32_t ___m_DetectionMode_15;
	// System.Action`1<UnityEngine.XR.ARFoundation.ARPlanesChangedEventArgs> UnityEngine.XR.ARFoundation.ARPlaneManager::planesChanged
	Action_1_t009680BF19017ECA60753C7F605CBD85C56C6560* ___planesChanged_16;
};

// UnityEngine.XR.ARFoundation.ARRaycastManager
struct ARRaycastManager_tD9459374F0F5BD9E2E4A8A1C665E7F33F9C2EE44  : public ARTrackableManager_5_tB0551B87CFE2349D3C8AD77F1642F669F950A409
{
	// UnityEngine.GameObject UnityEngine.XR.ARFoundation.ARRaycastManager::m_RaycastPrefab
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___m_RaycastPrefab_14;
	// System.Func`4<UnityEngine.Vector2,UnityEngine.XR.ARSubsystems.TrackableType,Unity.Collections.Allocator,Unity.Collections.NativeArray`1<UnityEngine.XR.ARSubsystems.XRRaycastHit>> UnityEngine.XR.ARFoundation.ARRaycastManager::m_RaycastViewportDelegate
	Func_4_t0755A61145E99905AC47DF85416091FB30758B8A* ___m_RaycastViewportDelegate_17;
	// System.Func`4<UnityEngine.Ray,UnityEngine.XR.ARSubsystems.TrackableType,Unity.Collections.Allocator,Unity.Collections.NativeArray`1<UnityEngine.XR.ARSubsystems.XRRaycastHit>> UnityEngine.XR.ARFoundation.ARRaycastManager::m_RaycastRayDelegate
	Func_4_t917A5E0B468B7C0436CA84D065BEB6FC43C9B906* ___m_RaycastRayDelegate_18;
	// System.Collections.Generic.List`1<UnityEngine.XR.ARFoundation.IRaycaster> UnityEngine.XR.ARFoundation.ARRaycastManager::m_Raycasters
	List_1_t50405350B03FC84D28784364F500CB08B82435B5* ___m_Raycasters_19;
};

struct ARRaycastManager_tD9459374F0F5BD9E2E4A8A1C665E7F33F9C2EE44_StaticFields
{
	// System.Comparison`1<UnityEngine.XR.ARFoundation.ARRaycastHit> UnityEngine.XR.ARFoundation.ARRaycastManager::s_RaycastHitComparer
	Comparison_1_t0E0A9C99A8D29FBC5FA5ED9B9B2175A13C6578C0* ___s_RaycastHitComparer_15;
	// System.Collections.Generic.List`1<Unity.Collections.NativeArray`1<UnityEngine.XR.ARSubsystems.XRRaycastHit>> UnityEngine.XR.ARFoundation.ARRaycastManager::s_NativeRaycastHits
	List_1_t554F70DABEBFEED67B5400AB73777A6D987F0D36* ___s_NativeRaycastHits_16;
};

// UnityEngine.UI.Button
struct Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098  : public Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712
{
	// UnityEngine.UI.Button/ButtonClickedEvent UnityEngine.UI.Button::m_OnClick
	ButtonClickedEvent_t8EA72E90B3BD1392FB3B3EF167D5121C23569E4C* ___m_OnClick_20;
};

// UnityEngine.UI.MaskableGraphic
struct MaskableGraphic_tFC5B6BE351C90DE53744DF2A70940242774B361E  : public Graphic_tCBFCA4585A19E2B75465AECFEAC43F4016BF7931
{
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_ShouldRecalculateStencil
	bool ___m_ShouldRecalculateStencil_27;
	// UnityEngine.Material UnityEngine.UI.MaskableGraphic::m_MaskMaterial
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___m_MaskMaterial_28;
	// UnityEngine.UI.RectMask2D UnityEngine.UI.MaskableGraphic::m_ParentMask
	RectMask2D_tACF92BE999C791A665BD1ADEABF5BCEB82846670* ___m_ParentMask_29;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_Maskable
	bool ___m_Maskable_30;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_IsMaskingGraphic
	bool ___m_IsMaskingGraphic_31;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_IncludeForMasking
	bool ___m_IncludeForMasking_32;
	// UnityEngine.UI.MaskableGraphic/CullStateChangedEvent UnityEngine.UI.MaskableGraphic::m_OnCullStateChanged
	CullStateChangedEvent_t6073CD0D951EC1256BF74B8F9107D68FC89B99B8* ___m_OnCullStateChanged_33;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_ShouldRecalculate
	bool ___m_ShouldRecalculate_34;
	// System.Int32 UnityEngine.UI.MaskableGraphic::m_StencilValue
	int32_t ___m_StencilValue_35;
	// UnityEngine.Vector3[] UnityEngine.UI.MaskableGraphic::m_Corners
	Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* ___m_Corners_36;
};

// UnityEngine.UI.Slider
struct Slider_t87EA570E3D6556CABF57456C2F3873FFD86E652F  : public Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712
{
	// UnityEngine.RectTransform UnityEngine.UI.Slider::m_FillRect
	RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* ___m_FillRect_20;
	// UnityEngine.RectTransform UnityEngine.UI.Slider::m_HandleRect
	RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* ___m_HandleRect_21;
	// UnityEngine.UI.Slider/Direction UnityEngine.UI.Slider::m_Direction
	int32_t ___m_Direction_22;
	// System.Single UnityEngine.UI.Slider::m_MinValue
	float ___m_MinValue_23;
	// System.Single UnityEngine.UI.Slider::m_MaxValue
	float ___m_MaxValue_24;
	// System.Boolean UnityEngine.UI.Slider::m_WholeNumbers
	bool ___m_WholeNumbers_25;
	// System.Single UnityEngine.UI.Slider::m_Value
	float ___m_Value_26;
	// UnityEngine.UI.Slider/SliderEvent UnityEngine.UI.Slider::m_OnValueChanged
	SliderEvent_t92A82EF6C62E15AF92B640FE2D960E877E8C6555* ___m_OnValueChanged_27;
	// UnityEngine.UI.Image UnityEngine.UI.Slider::m_FillImage
	Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* ___m_FillImage_28;
	// UnityEngine.Transform UnityEngine.UI.Slider::m_FillTransform
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___m_FillTransform_29;
	// UnityEngine.RectTransform UnityEngine.UI.Slider::m_FillContainerRect
	RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* ___m_FillContainerRect_30;
	// UnityEngine.Transform UnityEngine.UI.Slider::m_HandleTransform
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___m_HandleTransform_31;
	// UnityEngine.RectTransform UnityEngine.UI.Slider::m_HandleContainerRect
	RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* ___m_HandleContainerRect_32;
	// UnityEngine.Vector2 UnityEngine.UI.Slider::m_Offset
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___m_Offset_33;
	// UnityEngine.DrivenRectTransformTracker UnityEngine.UI.Slider::m_Tracker
	DrivenRectTransformTracker_tFB0706C933E3C68E4F377C204FCEEF091F1EE0B1 ___m_Tracker_34;
	// System.Boolean UnityEngine.UI.Slider::m_DelayedUpdateVisuals
	bool ___m_DelayedUpdateVisuals_35;
};

// TMPro.TMP_Text
struct TMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9  : public MaskableGraphic_tFC5B6BE351C90DE53744DF2A70940242774B361E
{
	// System.String TMPro.TMP_Text::m_text
	String_t* ___m_text_37;
	// System.Boolean TMPro.TMP_Text::m_IsTextBackingStringDirty
	bool ___m_IsTextBackingStringDirty_38;
	// TMPro.ITextPreprocessor TMPro.TMP_Text::m_TextPreprocessor
	RuntimeObject* ___m_TextPreprocessor_39;
	// System.Boolean TMPro.TMP_Text::m_isRightToLeft
	bool ___m_isRightToLeft_40;
	// TMPro.TMP_FontAsset TMPro.TMP_Text::m_fontAsset
	TMP_FontAsset_t923BF2F78D7C5AC36376E168A1193B7CB4855160* ___m_fontAsset_41;
	// TMPro.TMP_FontAsset TMPro.TMP_Text::m_currentFontAsset
	TMP_FontAsset_t923BF2F78D7C5AC36376E168A1193B7CB4855160* ___m_currentFontAsset_42;
	// System.Boolean TMPro.TMP_Text::m_isSDFShader
	bool ___m_isSDFShader_43;
	// UnityEngine.Material TMPro.TMP_Text::m_sharedMaterial
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___m_sharedMaterial_44;
	// UnityEngine.Material TMPro.TMP_Text::m_currentMaterial
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___m_currentMaterial_45;
	// System.Int32 TMPro.TMP_Text::m_currentMaterialIndex
	int32_t ___m_currentMaterialIndex_49;
	// UnityEngine.Material[] TMPro.TMP_Text::m_fontSharedMaterials
	MaterialU5BU5D_t2B1D11C42DB07A4400C0535F92DBB87A2E346D3D* ___m_fontSharedMaterials_50;
	// UnityEngine.Material TMPro.TMP_Text::m_fontMaterial
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___m_fontMaterial_51;
	// UnityEngine.Material[] TMPro.TMP_Text::m_fontMaterials
	MaterialU5BU5D_t2B1D11C42DB07A4400C0535F92DBB87A2E346D3D* ___m_fontMaterials_52;
	// System.Boolean TMPro.TMP_Text::m_isMaterialDirty
	bool ___m_isMaterialDirty_53;
	// UnityEngine.Color32 TMPro.TMP_Text::m_fontColor32
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___m_fontColor32_54;
	// UnityEngine.Color TMPro.TMP_Text::m_fontColor
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___m_fontColor_55;
	// UnityEngine.Color32 TMPro.TMP_Text::m_underlineColor
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___m_underlineColor_57;
	// UnityEngine.Color32 TMPro.TMP_Text::m_strikethroughColor
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___m_strikethroughColor_58;
	// System.Boolean TMPro.TMP_Text::m_enableVertexGradient
	bool ___m_enableVertexGradient_59;
	// TMPro.ColorMode TMPro.TMP_Text::m_colorMode
	int32_t ___m_colorMode_60;
	// TMPro.VertexGradient TMPro.TMP_Text::m_fontColorGradient
	VertexGradient_t2C057B53C0EA6E987C2B7BAB0305E686DA1C9A8F ___m_fontColorGradient_61;
	// TMPro.TMP_ColorGradient TMPro.TMP_Text::m_fontColorGradientPreset
	TMP_ColorGradient_t17B51752B4E9499A1FF7D875DCEC1D15A0F4AEBB* ___m_fontColorGradientPreset_62;
	// TMPro.TMP_SpriteAsset TMPro.TMP_Text::m_spriteAsset
	TMP_SpriteAsset_t81F779E6F705CE190DC0D1F93A954CB8B1774B39* ___m_spriteAsset_63;
	// System.Boolean TMPro.TMP_Text::m_tintAllSprites
	bool ___m_tintAllSprites_64;
	// System.Boolean TMPro.TMP_Text::m_tintSprite
	bool ___m_tintSprite_65;
	// UnityEngine.Color32 TMPro.TMP_Text::m_spriteColor
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___m_spriteColor_66;
	// TMPro.TMP_StyleSheet TMPro.TMP_Text::m_StyleSheet
	TMP_StyleSheet_t70C71699F5CB2D855C361DBB78A44C901236C859* ___m_StyleSheet_67;
	// TMPro.TMP_Style TMPro.TMP_Text::m_TextStyle
	TMP_Style_tA9E5B1B35EBFE24EF980CEA03251B638282E120C* ___m_TextStyle_68;
	// System.Int32 TMPro.TMP_Text::m_TextStyleHashCode
	int32_t ___m_TextStyleHashCode_69;
	// System.Boolean TMPro.TMP_Text::m_overrideHtmlColors
	bool ___m_overrideHtmlColors_70;
	// UnityEngine.Color32 TMPro.TMP_Text::m_faceColor
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___m_faceColor_71;
	// UnityEngine.Color32 TMPro.TMP_Text::m_outlineColor
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___m_outlineColor_72;
	// System.Single TMPro.TMP_Text::m_outlineWidth
	float ___m_outlineWidth_73;
	// System.Single TMPro.TMP_Text::m_fontSize
	float ___m_fontSize_74;
	// System.Single TMPro.TMP_Text::m_currentFontSize
	float ___m_currentFontSize_75;
	// System.Single TMPro.TMP_Text::m_fontSizeBase
	float ___m_fontSizeBase_76;
	// TMPro.TMP_TextProcessingStack`1<System.Single> TMPro.TMP_Text::m_sizeStack
	TMP_TextProcessingStack_1_t138EC06BE7F101AA0A3C8D2DC951E55AACE085E9 ___m_sizeStack_77;
	// TMPro.FontWeight TMPro.TMP_Text::m_fontWeight
	int32_t ___m_fontWeight_78;
	// TMPro.FontWeight TMPro.TMP_Text::m_FontWeightInternal
	int32_t ___m_FontWeightInternal_79;
	// TMPro.TMP_TextProcessingStack`1<TMPro.FontWeight> TMPro.TMP_Text::m_FontWeightStack
	TMP_TextProcessingStack_1_tA5C8CED87DD9E73F6359E23B334FFB5B6F813FD4 ___m_FontWeightStack_80;
	// System.Boolean TMPro.TMP_Text::m_enableAutoSizing
	bool ___m_enableAutoSizing_81;
	// System.Single TMPro.TMP_Text::m_maxFontSize
	float ___m_maxFontSize_82;
	// System.Single TMPro.TMP_Text::m_minFontSize
	float ___m_minFontSize_83;
	// System.Int32 TMPro.TMP_Text::m_AutoSizeIterationCount
	int32_t ___m_AutoSizeIterationCount_84;
	// System.Int32 TMPro.TMP_Text::m_AutoSizeMaxIterationCount
	int32_t ___m_AutoSizeMaxIterationCount_85;
	// System.Boolean TMPro.TMP_Text::m_IsAutoSizePointSizeSet
	bool ___m_IsAutoSizePointSizeSet_86;
	// System.Single TMPro.TMP_Text::m_fontSizeMin
	float ___m_fontSizeMin_87;
	// System.Single TMPro.TMP_Text::m_fontSizeMax
	float ___m_fontSizeMax_88;
	// TMPro.FontStyles TMPro.TMP_Text::m_fontStyle
	int32_t ___m_fontStyle_89;
	// TMPro.FontStyles TMPro.TMP_Text::m_FontStyleInternal
	int32_t ___m_FontStyleInternal_90;
	// TMPro.TMP_FontStyleStack TMPro.TMP_Text::m_fontStyleStack
	TMP_FontStyleStack_t52885F172FADBC21346C835B5302167BDA8020DC ___m_fontStyleStack_91;
	// System.Boolean TMPro.TMP_Text::m_isUsingBold
	bool ___m_isUsingBold_92;
	// TMPro.HorizontalAlignmentOptions TMPro.TMP_Text::m_HorizontalAlignment
	int32_t ___m_HorizontalAlignment_93;
	// TMPro.VerticalAlignmentOptions TMPro.TMP_Text::m_VerticalAlignment
	int32_t ___m_VerticalAlignment_94;
	// TMPro.TextAlignmentOptions TMPro.TMP_Text::m_textAlignment
	int32_t ___m_textAlignment_95;
	// TMPro.HorizontalAlignmentOptions TMPro.TMP_Text::m_lineJustification
	int32_t ___m_lineJustification_96;
	// TMPro.TMP_TextProcessingStack`1<TMPro.HorizontalAlignmentOptions> TMPro.TMP_Text::m_lineJustificationStack
	TMP_TextProcessingStack_1_t243EA1B5D7FD2295D6533B953F0BBE8F52EFB8A0 ___m_lineJustificationStack_97;
	// UnityEngine.Vector3[] TMPro.TMP_Text::m_textContainerLocalCorners
	Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* ___m_textContainerLocalCorners_98;
	// System.Single TMPro.TMP_Text::m_characterSpacing
	float ___m_characterSpacing_99;
	// System.Single TMPro.TMP_Text::m_cSpacing
	float ___m_cSpacing_100;
	// System.Single TMPro.TMP_Text::m_monoSpacing
	float ___m_monoSpacing_101;
	// System.Single TMPro.TMP_Text::m_wordSpacing
	float ___m_wordSpacing_102;
	// System.Single TMPro.TMP_Text::m_lineSpacing
	float ___m_lineSpacing_103;
	// System.Single TMPro.TMP_Text::m_lineSpacingDelta
	float ___m_lineSpacingDelta_104;
	// System.Single TMPro.TMP_Text::m_lineHeight
	float ___m_lineHeight_105;
	// System.Boolean TMPro.TMP_Text::m_IsDrivenLineSpacing
	bool ___m_IsDrivenLineSpacing_106;
	// System.Single TMPro.TMP_Text::m_lineSpacingMax
	float ___m_lineSpacingMax_107;
	// System.Single TMPro.TMP_Text::m_paragraphSpacing
	float ___m_paragraphSpacing_108;
	// System.Single TMPro.TMP_Text::m_charWidthMaxAdj
	float ___m_charWidthMaxAdj_109;
	// System.Single TMPro.TMP_Text::m_charWidthAdjDelta
	float ___m_charWidthAdjDelta_110;
	// System.Boolean TMPro.TMP_Text::m_enableWordWrapping
	bool ___m_enableWordWrapping_111;
	// System.Boolean TMPro.TMP_Text::m_isCharacterWrappingEnabled
	bool ___m_isCharacterWrappingEnabled_112;
	// System.Boolean TMPro.TMP_Text::m_isNonBreakingSpace
	bool ___m_isNonBreakingSpace_113;
	// System.Boolean TMPro.TMP_Text::m_isIgnoringAlignment
	bool ___m_isIgnoringAlignment_114;
	// System.Single TMPro.TMP_Text::m_wordWrappingRatios
	float ___m_wordWrappingRatios_115;
	// TMPro.TextOverflowModes TMPro.TMP_Text::m_overflowMode
	int32_t ___m_overflowMode_116;
	// System.Int32 TMPro.TMP_Text::m_firstOverflowCharacterIndex
	int32_t ___m_firstOverflowCharacterIndex_117;
	// TMPro.TMP_Text TMPro.TMP_Text::m_linkedTextComponent
	TMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9* ___m_linkedTextComponent_118;
	// TMPro.TMP_Text TMPro.TMP_Text::parentLinkedComponent
	TMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9* ___parentLinkedComponent_119;
	// System.Boolean TMPro.TMP_Text::m_isTextTruncated
	bool ___m_isTextTruncated_120;
	// System.Boolean TMPro.TMP_Text::m_enableKerning
	bool ___m_enableKerning_121;
	// System.Single TMPro.TMP_Text::m_GlyphHorizontalAdvanceAdjustment
	float ___m_GlyphHorizontalAdvanceAdjustment_122;
	// System.Boolean TMPro.TMP_Text::m_enableExtraPadding
	bool ___m_enableExtraPadding_123;
	// System.Boolean TMPro.TMP_Text::checkPaddingRequired
	bool ___checkPaddingRequired_124;
	// System.Boolean TMPro.TMP_Text::m_isRichText
	bool ___m_isRichText_125;
	// System.Boolean TMPro.TMP_Text::m_parseCtrlCharacters
	bool ___m_parseCtrlCharacters_126;
	// System.Boolean TMPro.TMP_Text::m_isOverlay
	bool ___m_isOverlay_127;
	// System.Boolean TMPro.TMP_Text::m_isOrthographic
	bool ___m_isOrthographic_128;
	// System.Boolean TMPro.TMP_Text::m_isCullingEnabled
	bool ___m_isCullingEnabled_129;
	// System.Boolean TMPro.TMP_Text::m_isMaskingEnabled
	bool ___m_isMaskingEnabled_130;
	// System.Boolean TMPro.TMP_Text::isMaskUpdateRequired
	bool ___isMaskUpdateRequired_131;
	// System.Boolean TMPro.TMP_Text::m_ignoreCulling
	bool ___m_ignoreCulling_132;
	// TMPro.TextureMappingOptions TMPro.TMP_Text::m_horizontalMapping
	int32_t ___m_horizontalMapping_133;
	// TMPro.TextureMappingOptions TMPro.TMP_Text::m_verticalMapping
	int32_t ___m_verticalMapping_134;
	// System.Single TMPro.TMP_Text::m_uvLineOffset
	float ___m_uvLineOffset_135;
	// TMPro.TextRenderFlags TMPro.TMP_Text::m_renderMode
	int32_t ___m_renderMode_136;
	// TMPro.VertexSortingOrder TMPro.TMP_Text::m_geometrySortingOrder
	int32_t ___m_geometrySortingOrder_137;
	// System.Boolean TMPro.TMP_Text::m_IsTextObjectScaleStatic
	bool ___m_IsTextObjectScaleStatic_138;
	// System.Boolean TMPro.TMP_Text::m_VertexBufferAutoSizeReduction
	bool ___m_VertexBufferAutoSizeReduction_139;
	// System.Int32 TMPro.TMP_Text::m_firstVisibleCharacter
	int32_t ___m_firstVisibleCharacter_140;
	// System.Int32 TMPro.TMP_Text::m_maxVisibleCharacters
	int32_t ___m_maxVisibleCharacters_141;
	// System.Int32 TMPro.TMP_Text::m_maxVisibleWords
	int32_t ___m_maxVisibleWords_142;
	// System.Int32 TMPro.TMP_Text::m_maxVisibleLines
	int32_t ___m_maxVisibleLines_143;
	// System.Boolean TMPro.TMP_Text::m_useMaxVisibleDescender
	bool ___m_useMaxVisibleDescender_144;
	// System.Int32 TMPro.TMP_Text::m_pageToDisplay
	int32_t ___m_pageToDisplay_145;
	// System.Boolean TMPro.TMP_Text::m_isNewPage
	bool ___m_isNewPage_146;
	// UnityEngine.Vector4 TMPro.TMP_Text::m_margin
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___m_margin_147;
	// System.Single TMPro.TMP_Text::m_marginLeft
	float ___m_marginLeft_148;
	// System.Single TMPro.TMP_Text::m_marginRight
	float ___m_marginRight_149;
	// System.Single TMPro.TMP_Text::m_marginWidth
	float ___m_marginWidth_150;
	// System.Single TMPro.TMP_Text::m_marginHeight
	float ___m_marginHeight_151;
	// System.Single TMPro.TMP_Text::m_width
	float ___m_width_152;
	// TMPro.TMP_TextInfo TMPro.TMP_Text::m_textInfo
	TMP_TextInfo_t09A8E906329422C3F0C059876801DD695B8D524D* ___m_textInfo_153;
	// System.Boolean TMPro.TMP_Text::m_havePropertiesChanged
	bool ___m_havePropertiesChanged_154;
	// System.Boolean TMPro.TMP_Text::m_isUsingLegacyAnimationComponent
	bool ___m_isUsingLegacyAnimationComponent_155;
	// UnityEngine.Transform TMPro.TMP_Text::m_transform
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___m_transform_156;
	// UnityEngine.RectTransform TMPro.TMP_Text::m_rectTransform
	RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* ___m_rectTransform_157;
	// UnityEngine.Vector2 TMPro.TMP_Text::m_PreviousRectTransformSize
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___m_PreviousRectTransformSize_158;
	// UnityEngine.Vector2 TMPro.TMP_Text::m_PreviousPivotPosition
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___m_PreviousPivotPosition_159;
	// System.Boolean TMPro.TMP_Text::<autoSizeTextContainer>k__BackingField
	bool ___U3CautoSizeTextContainerU3Ek__BackingField_160;
	// System.Boolean TMPro.TMP_Text::m_autoSizeTextContainer
	bool ___m_autoSizeTextContainer_161;
	// UnityEngine.Mesh TMPro.TMP_Text::m_mesh
	Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* ___m_mesh_162;
	// System.Boolean TMPro.TMP_Text::m_isVolumetricText
	bool ___m_isVolumetricText_163;
	// System.Action`1<TMPro.TMP_TextInfo> TMPro.TMP_Text::OnPreRenderText
	Action_1_tB93AB717F9D419A1BEC832FF76E74EAA32184CC1* ___OnPreRenderText_166;
	// TMPro.TMP_SpriteAnimator TMPro.TMP_Text::m_spriteAnimator
	TMP_SpriteAnimator_t2E0F016A61CA343E3222FF51E7CF0E53F9F256E4* ___m_spriteAnimator_167;
	// System.Single TMPro.TMP_Text::m_flexibleHeight
	float ___m_flexibleHeight_168;
	// System.Single TMPro.TMP_Text::m_flexibleWidth
	float ___m_flexibleWidth_169;
	// System.Single TMPro.TMP_Text::m_minWidth
	float ___m_minWidth_170;
	// System.Single TMPro.TMP_Text::m_minHeight
	float ___m_minHeight_171;
	// System.Single TMPro.TMP_Text::m_maxWidth
	float ___m_maxWidth_172;
	// System.Single TMPro.TMP_Text::m_maxHeight
	float ___m_maxHeight_173;
	// UnityEngine.UI.LayoutElement TMPro.TMP_Text::m_LayoutElement
	LayoutElement_tB1F24CC11AF4AA87015C8D8EE06D22349C5BF40A* ___m_LayoutElement_174;
	// System.Single TMPro.TMP_Text::m_preferredWidth
	float ___m_preferredWidth_175;
	// System.Single TMPro.TMP_Text::m_renderedWidth
	float ___m_renderedWidth_176;
	// System.Boolean TMPro.TMP_Text::m_isPreferredWidthDirty
	bool ___m_isPreferredWidthDirty_177;
	// System.Single TMPro.TMP_Text::m_preferredHeight
	float ___m_preferredHeight_178;
	// System.Single TMPro.TMP_Text::m_renderedHeight
	float ___m_renderedHeight_179;
	// System.Boolean TMPro.TMP_Text::m_isPreferredHeightDirty
	bool ___m_isPreferredHeightDirty_180;
	// System.Boolean TMPro.TMP_Text::m_isCalculatingPreferredValues
	bool ___m_isCalculatingPreferredValues_181;
	// System.Int32 TMPro.TMP_Text::m_layoutPriority
	int32_t ___m_layoutPriority_182;
	// System.Boolean TMPro.TMP_Text::m_isLayoutDirty
	bool ___m_isLayoutDirty_183;
	// System.Boolean TMPro.TMP_Text::m_isAwake
	bool ___m_isAwake_184;
	// System.Boolean TMPro.TMP_Text::m_isWaitingOnResourceLoad
	bool ___m_isWaitingOnResourceLoad_185;
	// TMPro.TMP_Text/TextInputSources TMPro.TMP_Text::m_inputSource
	int32_t ___m_inputSource_186;
	// System.Single TMPro.TMP_Text::m_fontScaleMultiplier
	float ___m_fontScaleMultiplier_187;
	// System.Single TMPro.TMP_Text::tag_LineIndent
	float ___tag_LineIndent_191;
	// System.Single TMPro.TMP_Text::tag_Indent
	float ___tag_Indent_192;
	// TMPro.TMP_TextProcessingStack`1<System.Single> TMPro.TMP_Text::m_indentStack
	TMP_TextProcessingStack_1_t138EC06BE7F101AA0A3C8D2DC951E55AACE085E9 ___m_indentStack_193;
	// System.Boolean TMPro.TMP_Text::tag_NoParsing
	bool ___tag_NoParsing_194;
	// System.Boolean TMPro.TMP_Text::m_isParsingText
	bool ___m_isParsingText_195;
	// UnityEngine.Matrix4x4 TMPro.TMP_Text::m_FXMatrix
	Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 ___m_FXMatrix_196;
	// System.Boolean TMPro.TMP_Text::m_isFXMatrixSet
	bool ___m_isFXMatrixSet_197;
	// TMPro.TMP_Text/UnicodeChar[] TMPro.TMP_Text::m_TextProcessingArray
	UnicodeCharU5BU5D_t67F27D09F8EB28D2C42DFF16FE60054F157012F5* ___m_TextProcessingArray_198;
	// System.Int32 TMPro.TMP_Text::m_InternalTextProcessingArraySize
	int32_t ___m_InternalTextProcessingArraySize_199;
	// TMPro.TMP_CharacterInfo[] TMPro.TMP_Text::m_internalCharacterInfo
	TMP_CharacterInfoU5BU5D_t297D56FCF66DAA99D8FEA7C30F9F3926902C5B99* ___m_internalCharacterInfo_200;
	// System.Int32 TMPro.TMP_Text::m_totalCharacterCount
	int32_t ___m_totalCharacterCount_201;
	// System.Int32 TMPro.TMP_Text::m_characterCount
	int32_t ___m_characterCount_208;
	// System.Int32 TMPro.TMP_Text::m_firstCharacterOfLine
	int32_t ___m_firstCharacterOfLine_209;
	// System.Int32 TMPro.TMP_Text::m_firstVisibleCharacterOfLine
	int32_t ___m_firstVisibleCharacterOfLine_210;
	// System.Int32 TMPro.TMP_Text::m_lastCharacterOfLine
	int32_t ___m_lastCharacterOfLine_211;
	// System.Int32 TMPro.TMP_Text::m_lastVisibleCharacterOfLine
	int32_t ___m_lastVisibleCharacterOfLine_212;
	// System.Int32 TMPro.TMP_Text::m_lineNumber
	int32_t ___m_lineNumber_213;
	// System.Int32 TMPro.TMP_Text::m_lineVisibleCharacterCount
	int32_t ___m_lineVisibleCharacterCount_214;
	// System.Int32 TMPro.TMP_Text::m_pageNumber
	int32_t ___m_pageNumber_215;
	// System.Single TMPro.TMP_Text::m_PageAscender
	float ___m_PageAscender_216;
	// System.Single TMPro.TMP_Text::m_maxTextAscender
	float ___m_maxTextAscender_217;
	// System.Single TMPro.TMP_Text::m_maxCapHeight
	float ___m_maxCapHeight_218;
	// System.Single TMPro.TMP_Text::m_ElementAscender
	float ___m_ElementAscender_219;
	// System.Single TMPro.TMP_Text::m_ElementDescender
	float ___m_ElementDescender_220;
	// System.Single TMPro.TMP_Text::m_maxLineAscender
	float ___m_maxLineAscender_221;
	// System.Single TMPro.TMP_Text::m_maxLineDescender
	float ___m_maxLineDescender_222;
	// System.Single TMPro.TMP_Text::m_startOfLineAscender
	float ___m_startOfLineAscender_223;
	// System.Single TMPro.TMP_Text::m_startOfLineDescender
	float ___m_startOfLineDescender_224;
	// System.Single TMPro.TMP_Text::m_lineOffset
	float ___m_lineOffset_225;
	// TMPro.Extents TMPro.TMP_Text::m_meshExtents
	Extents_tA2D2F95811D0A18CB7AC3570D2D8F8CD3AF4C4A8 ___m_meshExtents_226;
	// UnityEngine.Color32 TMPro.TMP_Text::m_htmlColor
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___m_htmlColor_227;
	// TMPro.TMP_TextProcessingStack`1<UnityEngine.Color32> TMPro.TMP_Text::m_colorStack
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___m_colorStack_228;
	// TMPro.TMP_TextProcessingStack`1<UnityEngine.Color32> TMPro.TMP_Text::m_underlineColorStack
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___m_underlineColorStack_229;
	// TMPro.TMP_TextProcessingStack`1<UnityEngine.Color32> TMPro.TMP_Text::m_strikethroughColorStack
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___m_strikethroughColorStack_230;
	// TMPro.TMP_TextProcessingStack`1<TMPro.HighlightState> TMPro.TMP_Text::m_HighlightStateStack
	TMP_TextProcessingStack_1_t57AECDCC936A7FF1D6CF66CA11560B28A675648D ___m_HighlightStateStack_231;
	// TMPro.TMP_ColorGradient TMPro.TMP_Text::m_colorGradientPreset
	TMP_ColorGradient_t17B51752B4E9499A1FF7D875DCEC1D15A0F4AEBB* ___m_colorGradientPreset_232;
	// TMPro.TMP_TextProcessingStack`1<TMPro.TMP_ColorGradient> TMPro.TMP_Text::m_colorGradientStack
	TMP_TextProcessingStack_1_tC8FAEB17246D3B171EFD11165A5761AE39B40D0C ___m_colorGradientStack_233;
	// System.Boolean TMPro.TMP_Text::m_colorGradientPresetIsTinted
	bool ___m_colorGradientPresetIsTinted_234;
	// System.Single TMPro.TMP_Text::m_tabSpacing
	float ___m_tabSpacing_235;
	// System.Single TMPro.TMP_Text::m_spacing
	float ___m_spacing_236;
	// TMPro.TMP_TextProcessingStack`1<System.Int32>[] TMPro.TMP_Text::m_TextStyleStacks
	TMP_TextProcessingStack_1U5BU5D_t08293E0BB072311BB96170F351D1083BCA97B9B2* ___m_TextStyleStacks_237;
	// System.Int32 TMPro.TMP_Text::m_TextStyleStackDepth
	int32_t ___m_TextStyleStackDepth_238;
	// TMPro.TMP_TextProcessingStack`1<System.Int32> TMPro.TMP_Text::m_ItalicAngleStack
	TMP_TextProcessingStack_1_tFBA719426D68CE1F2B5849D97AF5E5D65846290C ___m_ItalicAngleStack_239;
	// System.Int32 TMPro.TMP_Text::m_ItalicAngle
	int32_t ___m_ItalicAngle_240;
	// TMPro.TMP_TextProcessingStack`1<System.Int32> TMPro.TMP_Text::m_actionStack
	TMP_TextProcessingStack_1_tFBA719426D68CE1F2B5849D97AF5E5D65846290C ___m_actionStack_241;
	// System.Single TMPro.TMP_Text::m_padding
	float ___m_padding_242;
	// System.Single TMPro.TMP_Text::m_baselineOffset
	float ___m_baselineOffset_243;
	// TMPro.TMP_TextProcessingStack`1<System.Single> TMPro.TMP_Text::m_baselineOffsetStack
	TMP_TextProcessingStack_1_t138EC06BE7F101AA0A3C8D2DC951E55AACE085E9 ___m_baselineOffsetStack_244;
	// System.Single TMPro.TMP_Text::m_xAdvance
	float ___m_xAdvance_245;
	// TMPro.TMP_TextElementType TMPro.TMP_Text::m_textElementType
	int32_t ___m_textElementType_246;
	// TMPro.TMP_TextElement TMPro.TMP_Text::m_cached_TextElement
	TMP_TextElement_t262A55214F712D4274485ABE5676E5254B84D0A5* ___m_cached_TextElement_247;
	// TMPro.TMP_Text/SpecialCharacter TMPro.TMP_Text::m_Ellipsis
	SpecialCharacter_t6C1DBE8C490706D1620899BAB7F0B8091AD26777 ___m_Ellipsis_248;
	// TMPro.TMP_Text/SpecialCharacter TMPro.TMP_Text::m_Underline
	SpecialCharacter_t6C1DBE8C490706D1620899BAB7F0B8091AD26777 ___m_Underline_249;
	// TMPro.TMP_SpriteAsset TMPro.TMP_Text::m_defaultSpriteAsset
	TMP_SpriteAsset_t81F779E6F705CE190DC0D1F93A954CB8B1774B39* ___m_defaultSpriteAsset_250;
	// TMPro.TMP_SpriteAsset TMPro.TMP_Text::m_currentSpriteAsset
	TMP_SpriteAsset_t81F779E6F705CE190DC0D1F93A954CB8B1774B39* ___m_currentSpriteAsset_251;
	// System.Int32 TMPro.TMP_Text::m_spriteCount
	int32_t ___m_spriteCount_252;
	// System.Int32 TMPro.TMP_Text::m_spriteIndex
	int32_t ___m_spriteIndex_253;
	// System.Int32 TMPro.TMP_Text::m_spriteAnimationID
	int32_t ___m_spriteAnimationID_254;
	// System.Boolean TMPro.TMP_Text::m_ignoreActiveState
	bool ___m_ignoreActiveState_257;
	// TMPro.TMP_Text/TextBackingContainer TMPro.TMP_Text::m_TextBackingArray
	TextBackingContainer_t33D1CE628E7B26C45EDAC1D87BEF2DD22A5C6361 ___m_TextBackingArray_258;
	// System.Decimal[] TMPro.TMP_Text::k_Power
	DecimalU5BU5D_t93BA0C88FA80728F73B792EE1A5199D0C060B615* ___k_Power_259;
};

struct TMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9_StaticFields
{
	// TMPro.MaterialReference[] TMPro.TMP_Text::m_materialReferences
	MaterialReferenceU5BU5D_t7491D335AB3E3E13CE9C0F5E931F396F6A02E1F2* ___m_materialReferences_46;
	// System.Collections.Generic.Dictionary`2<System.Int32,System.Int32> TMPro.TMP_Text::m_materialReferenceIndexLookup
	Dictionary_2_tABE19B9C5C52F1DE14F0D3287B2696E7D7419180* ___m_materialReferenceIndexLookup_47;
	// TMPro.TMP_TextProcessingStack`1<TMPro.MaterialReference> TMPro.TMP_Text::m_materialReferenceStack
	TMP_TextProcessingStack_1_tB03E08F69415B281A5A81138F09E49EE58402DF9 ___m_materialReferenceStack_48;
	// UnityEngine.Color32 TMPro.TMP_Text::s_colorWhite
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___s_colorWhite_56;
	// System.Func`3<System.Int32,System.String,TMPro.TMP_FontAsset> TMPro.TMP_Text::OnFontAssetRequest
	Func_3_tC721DF8CDD07ED66A4833A19A2ED2302608C906C* ___OnFontAssetRequest_164;
	// System.Func`3<System.Int32,System.String,TMPro.TMP_SpriteAsset> TMPro.TMP_Text::OnSpriteAssetRequest
	Func_3_t6F6D9932638EA1A5A45303C6626C818C25D164E5* ___OnSpriteAssetRequest_165;
	// System.Char[] TMPro.TMP_Text::m_htmlTag
	CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* ___m_htmlTag_188;
	// TMPro.RichTextTagAttribute[] TMPro.TMP_Text::m_xmlAttribute
	RichTextTagAttributeU5BU5D_t5816316EFD8F59DBC30B9F88E15828C564E47B6D* ___m_xmlAttribute_189;
	// System.Single[] TMPro.TMP_Text::m_attributeParameterValues
	SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* ___m_attributeParameterValues_190;
	// TMPro.WordWrapState TMPro.TMP_Text::m_SavedWordWrapState
	WordWrapState_t80F67D8CAA9B1A0A3D5266521E23A9F3100EDD0A ___m_SavedWordWrapState_202;
	// TMPro.WordWrapState TMPro.TMP_Text::m_SavedLineState
	WordWrapState_t80F67D8CAA9B1A0A3D5266521E23A9F3100EDD0A ___m_SavedLineState_203;
	// TMPro.WordWrapState TMPro.TMP_Text::m_SavedEllipsisState
	WordWrapState_t80F67D8CAA9B1A0A3D5266521E23A9F3100EDD0A ___m_SavedEllipsisState_204;
	// TMPro.WordWrapState TMPro.TMP_Text::m_SavedLastValidState
	WordWrapState_t80F67D8CAA9B1A0A3D5266521E23A9F3100EDD0A ___m_SavedLastValidState_205;
	// TMPro.WordWrapState TMPro.TMP_Text::m_SavedSoftLineBreakState
	WordWrapState_t80F67D8CAA9B1A0A3D5266521E23A9F3100EDD0A ___m_SavedSoftLineBreakState_206;
	// TMPro.TMP_TextProcessingStack`1<TMPro.WordWrapState> TMPro.TMP_Text::m_EllipsisInsertionCandidateStack
	TMP_TextProcessingStack_1_t2DDA00FFC64AF6E3AFD475AB2086D16C34787E0F ___m_EllipsisInsertionCandidateStack_207;
	// Unity.Profiling.ProfilerMarker TMPro.TMP_Text::k_ParseTextMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_ParseTextMarker_255;
	// Unity.Profiling.ProfilerMarker TMPro.TMP_Text::k_InsertNewLineMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_InsertNewLineMarker_256;
	// UnityEngine.Vector2 TMPro.TMP_Text::k_LargePositiveVector2
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___k_LargePositiveVector2_260;
	// UnityEngine.Vector2 TMPro.TMP_Text::k_LargeNegativeVector2
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___k_LargeNegativeVector2_261;
	// System.Single TMPro.TMP_Text::k_LargePositiveFloat
	float ___k_LargePositiveFloat_262;
	// System.Single TMPro.TMP_Text::k_LargeNegativeFloat
	float ___k_LargeNegativeFloat_263;
	// System.Int32 TMPro.TMP_Text::k_LargePositiveInt
	int32_t ___k_LargePositiveInt_264;
	// System.Int32 TMPro.TMP_Text::k_LargeNegativeInt
	int32_t ___k_LargeNegativeInt_265;
};

// UnityEngine.UI.Text
struct Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62  : public MaskableGraphic_tFC5B6BE351C90DE53744DF2A70940242774B361E
{
	// UnityEngine.UI.FontData UnityEngine.UI.Text::m_FontData
	FontData_tB8E562846C6CB59C43260F69AE346B9BF3157224* ___m_FontData_37;
	// System.String UnityEngine.UI.Text::m_Text
	String_t* ___m_Text_38;
	// UnityEngine.TextGenerator UnityEngine.UI.Text::m_TextCache
	TextGenerator_t85D00417640A53953556C01F9D4E7DDE1ABD8FEC* ___m_TextCache_39;
	// UnityEngine.TextGenerator UnityEngine.UI.Text::m_TextCacheForLayout
	TextGenerator_t85D00417640A53953556C01F9D4E7DDE1ABD8FEC* ___m_TextCacheForLayout_40;
	// System.Boolean UnityEngine.UI.Text::m_DisableFontTextureRebuiltCallback
	bool ___m_DisableFontTextureRebuiltCallback_42;
	// UnityEngine.UIVertex[] UnityEngine.UI.Text::m_TempVerts
	UIVertexU5BU5D_tBC532486B45D071A520751A90E819C77BA4E3D2F* ___m_TempVerts_43;
};

struct Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62_StaticFields
{
	// UnityEngine.Material UnityEngine.UI.Text::s_DefaultText
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___s_DefaultText_41;
};

// TMPro.TextMeshProUGUI
struct TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957  : public TMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9
{
	// System.Boolean TMPro.TextMeshProUGUI::m_isRebuildingLayout
	bool ___m_isRebuildingLayout_266;
	// UnityEngine.Coroutine TMPro.TextMeshProUGUI::m_DelayedGraphicRebuild
	Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B* ___m_DelayedGraphicRebuild_267;
	// UnityEngine.Coroutine TMPro.TextMeshProUGUI::m_DelayedMaterialRebuild
	Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B* ___m_DelayedMaterialRebuild_268;
	// UnityEngine.Rect TMPro.TextMeshProUGUI::m_ClipRect
	Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D ___m_ClipRect_269;
	// System.Boolean TMPro.TextMeshProUGUI::m_ValidRect
	bool ___m_ValidRect_270;
	// System.Action`1<TMPro.TMP_TextInfo> TMPro.TextMeshProUGUI::OnPreRenderText
	Action_1_tB93AB717F9D419A1BEC832FF76E74EAA32184CC1* ___OnPreRenderText_271;
	// System.Boolean TMPro.TextMeshProUGUI::m_hasFontAssetChanged
	bool ___m_hasFontAssetChanged_272;
	// TMPro.TMP_SubMeshUI[] TMPro.TextMeshProUGUI::m_subTextObjects
	TMP_SubMeshUIU5BU5D_tC77B263183A59A75345C26152457207EAC3BBF29* ___m_subTextObjects_273;
	// System.Single TMPro.TextMeshProUGUI::m_previousLossyScaleY
	float ___m_previousLossyScaleY_274;
	// UnityEngine.Vector3[] TMPro.TextMeshProUGUI::m_RectTransformCorners
	Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* ___m_RectTransformCorners_275;
	// UnityEngine.CanvasRenderer TMPro.TextMeshProUGUI::m_canvasRenderer
	CanvasRenderer_tAB9A55A976C4E3B2B37D0CE5616E5685A8B43860* ___m_canvasRenderer_276;
	// UnityEngine.Canvas TMPro.TextMeshProUGUI::m_canvas
	Canvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26* ___m_canvas_277;
	// System.Single TMPro.TextMeshProUGUI::m_CanvasScaleFactor
	float ___m_CanvasScaleFactor_278;
	// System.Boolean TMPro.TextMeshProUGUI::m_isFirstAllocation
	bool ___m_isFirstAllocation_279;
	// System.Int32 TMPro.TextMeshProUGUI::m_max_characters
	int32_t ___m_max_characters_280;
	// UnityEngine.Material TMPro.TextMeshProUGUI::m_baseMaterial
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___m_baseMaterial_281;
	// System.Boolean TMPro.TextMeshProUGUI::m_isScrollRegionSet
	bool ___m_isScrollRegionSet_282;
	// UnityEngine.Vector4 TMPro.TextMeshProUGUI::m_maskOffset
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___m_maskOffset_283;
	// UnityEngine.Matrix4x4 TMPro.TextMeshProUGUI::m_EnvMapMatrix
	Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 ___m_EnvMapMatrix_284;
	// System.Boolean TMPro.TextMeshProUGUI::m_isRegisteredForEvents
	bool ___m_isRegisteredForEvents_285;
};

struct TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957_StaticFields
{
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshProUGUI::k_GenerateTextMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_GenerateTextMarker_286;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshProUGUI::k_SetArraySizesMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_SetArraySizesMarker_287;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshProUGUI::k_GenerateTextPhaseIMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_GenerateTextPhaseIMarker_288;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshProUGUI::k_ParseMarkupTextMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_ParseMarkupTextMarker_289;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshProUGUI::k_CharacterLookupMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_CharacterLookupMarker_290;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshProUGUI::k_HandleGPOSFeaturesMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_HandleGPOSFeaturesMarker_291;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshProUGUI::k_CalculateVerticesPositionMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_CalculateVerticesPositionMarker_292;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshProUGUI::k_ComputeTextMetricsMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_ComputeTextMetricsMarker_293;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshProUGUI::k_HandleVisibleCharacterMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_HandleVisibleCharacterMarker_294;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshProUGUI::k_HandleWhiteSpacesMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_HandleWhiteSpacesMarker_295;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshProUGUI::k_HandleHorizontalLineBreakingMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_HandleHorizontalLineBreakingMarker_296;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshProUGUI::k_HandleVerticalLineBreakingMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_HandleVerticalLineBreakingMarker_297;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshProUGUI::k_SaveGlyphVertexDataMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_SaveGlyphVertexDataMarker_298;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshProUGUI::k_ComputeCharacterAdvanceMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_ComputeCharacterAdvanceMarker_299;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshProUGUI::k_HandleCarriageReturnMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_HandleCarriageReturnMarker_300;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshProUGUI::k_HandleLineTerminationMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_HandleLineTerminationMarker_301;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshProUGUI::k_SavePageInfoMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_SavePageInfoMarker_302;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshProUGUI::k_SaveProcessingStatesMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_SaveProcessingStatesMarker_303;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshProUGUI::k_GenerateTextPhaseIIMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_GenerateTextPhaseIIMarker_304;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshProUGUI::k_GenerateTextPhaseIIIMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_GenerateTextPhaseIIIMarker_305;
};
#ifdef __clang__
#pragma clang diagnostic pop
#endif
// RhythmObject[]
struct RhythmObjectU5BU5D_tB69B4B2405497D929A9E0301E27713F005F92774  : public RuntimeArray
{
	ALIGN_FIELD (8) RhythmObject_t48B5812FD53B54DB2453283D026C825E88D880A3* m_Items[1];

	inline RhythmObject_t48B5812FD53B54DB2453283D026C825E88D880A3* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline RhythmObject_t48B5812FD53B54DB2453283D026C825E88D880A3** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, RhythmObject_t48B5812FD53B54DB2453283D026C825E88D880A3* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline RhythmObject_t48B5812FD53B54DB2453283D026C825E88D880A3* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline RhythmObject_t48B5812FD53B54DB2453283D026C825E88D880A3** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, RhythmObject_t48B5812FD53B54DB2453283D026C825E88D880A3* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// UnityEngine.Vector3[]
struct Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C  : public RuntimeArray
{
	ALIGN_FIELD (8) Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 m_Items[1];

	inline Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 value)
	{
		m_Items[index] = value;
	}
};
// UnityEngine.GameObject[]
struct GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF  : public RuntimeArray
{
	ALIGN_FIELD (8) GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* m_Items[1];

	inline GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline GameObject_t76FEDD663AB33C991A9C9A23129337651094216F** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline GameObject_t76FEDD663AB33C991A9C9A23129337651094216F** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// UnityEngine.Transform[]
struct TransformU5BU5D_tBB9C5F5686CAE82E3D97D43DF0F3D68ABF75EC24  : public RuntimeArray
{
	ALIGN_FIELD (8) Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* m_Items[1];

	inline Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// UnityEngine.Renderer[]
struct RendererU5BU5D_t32FDD782F67917B2291EA4FF242719877440A02A  : public RuntimeArray
{
	ALIGN_FIELD (8) Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF* m_Items[1];

	inline Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// System.Delegate[]
struct DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771  : public RuntimeArray
{
	ALIGN_FIELD (8) Delegate_t* m_Items[1];

	inline Delegate_t* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Delegate_t** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Delegate_t* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline Delegate_t* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Delegate_t** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Delegate_t* value)
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


// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<System.Object>::GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A List_1_GetEnumerator_mD8294A7FA2BEB1929487127D476F8EC1CDC23BFC_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1/Enumerator<System.Object>::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enumerator_Dispose_mD9DC3E3C3697830A4823047AB29A77DBBB5ED419_gshared (Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A* __this, const RuntimeMethod* method) ;
// T System.Collections.Generic.List`1/Enumerator<System.Object>::get_Current()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* Enumerator_get_Current_m6330F15D18EE4F547C05DF9BF83C5EB710376027_gshared_inline (Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A* __this, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.List`1/Enumerator<System.Object>::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Enumerator_MoveNext_mE921CC8F29FBBDE7CC3209A0ED0D921D58D00BCB_gshared (Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.Object>::Clear()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Clear_m16C1F2C61FED5955F10EB36BC1CB2DF34B128994_gshared_inline (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method) ;
// T UnityEngine.Component::GetComponent<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Component_GetComponent_TisRuntimeObject_m7181F81CAEC2CF53F5D2BC79B7425C16E1F80D33_gshared (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__ctor_m7F078BB342729BDF11327FD89D7872265328F690_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method) ;
// T System.Collections.Generic.List`1<UnityEngine.XR.ARFoundation.ARRaycastHit>::get_Item(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ARRaycastHit_tB32B5606815B8A7DF479C00187A852F8D20E3B70 List_1_get_Item_m443F0D48247776D4257E06597AF794BCF6D8020F_gshared (List_1_t0754071572EFE7A5C92A59495D2524FC935364E3* __this, int32_t ___index0, const RuntimeMethod* method) ;
// T UnityEngine.Object::Instantiate<System.Object>(T,UnityEngine.Transform)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Object_Instantiate_TisRuntimeObject_m75BF3B0A3747B60491845FA41612FE7F795F0A59_gshared (RuntimeObject* ___original0, Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___parent1, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.Object>::Add(T)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Add_mEBCF994CC3814631017F46A387B1A192ED6C85C7_gshared_inline (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, RuntimeObject* ___item0, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<UnityEngine.XR.ARFoundation.ARRaycastHit>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__ctor_m6B5722DD0A8C0D3D4A1656C5A5E8D0A784DC85B9_gshared (List_1_t0754071572EFE7A5C92A59495D2524FC935364E3* __this, const RuntimeMethod* method) ;
// System.Void System.Action`1<UnityEngine.XR.ARFoundation.ARPlaneBoundaryChangedEventArgs>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Action_1__ctor_m83B9B49A5CEF71BC8798C9C8B7989333626CF3E1_gshared (Action_1_t762BEDF03B3FAD9E52246AF6B4291030B8085074* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<UnityEngine.Vector3>::Clear()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Clear_m455780C5A45049F9BDC25EAD3BA10A681D16385D_gshared_inline (List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B* __this, const RuntimeMethod* method) ;
// System.Int32 System.Collections.Generic.List`1<UnityEngine.Vector3>::get_Capacity()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t List_1_get_Capacity_m1810FC505867C713DCDDD7468F8BA2BF1DF0D3B6_gshared (List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<UnityEngine.Vector3>::set_Capacity(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_set_Capacity_mF3F5104AB534524CF6D04659241FBD48C9080FFE_gshared (List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B* __this, int32_t ___value0, const RuntimeMethod* method) ;
// System.Int32 System.Collections.Generic.List`1<UnityEngine.Vector3>::get_Count()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t List_1_get_Count_m46EEFFA770BE665EA0CB3A5332E941DA4B3C1D37_gshared_inline (List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B* __this, const RuntimeMethod* method) ;
// T System.Collections.Generic.List`1<UnityEngine.Vector3>::get_Item(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 List_1_get_Item_m8F2E15FC96DA75186C51228128A0660709E4E810_gshared (List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B* __this, int32_t ___index0, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<UnityEngine.Vector3>::Add(T)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Add_m79E50C4F592B1703F4B76A8BE7B4855515460CA1_gshared_inline (List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___item0, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<UnityEngine.Vector3>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__ctor_mC54E2BCBE43279A96FC082F5CDE2D76388BD8F9C_gshared (List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B* __this, const RuntimeMethod* method) ;
// T UnityEngine.GameObject::AddComponent<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* GameObject_AddComponent_TisRuntimeObject_m69B93700FACCF372F5753371C6E8FB780800B824_gshared (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method) ;
// T UnityEngine.GameObject::GetComponent<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* GameObject_GetComponent_TisRuntimeObject_m6EAED4AA356F0F48288F67899E5958792395563B_gshared (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method) ;
// T UnityEngine.Object::Instantiate<System.Object>(T,UnityEngine.Vector3,UnityEngine.Quaternion)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Object_Instantiate_TisRuntimeObject_m249A6BA4F2F19C2D3CE217D4D31847DF0EF03EFE_gshared (RuntimeObject* ___original0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___position1, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___rotation2, const RuntimeMethod* method) ;
// System.Void System.Func`2<System.Object,UnityEngine.Vector3>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Func_2__ctor_m55582D0AF64DBB8F297B71E8B68F40E374CE1910_gshared (Func_2_t1F9887E0A0ADE496D09CAA16DBA7B19D5579727E* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) ;
// System.Collections.Generic.IEnumerable`1<TResult> System.Linq.Enumerable::Select<System.Object,UnityEngine.Vector3>(System.Collections.Generic.IEnumerable`1<TSource>,System.Func`2<TSource,TResult>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Enumerable_Select_TisRuntimeObject_TisVector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_mD5D789F2B8DB62FA788B521C23208C7E5B589ED4_gshared (RuntimeObject* ___source0, Func_2_t1F9887E0A0ADE496D09CAA16DBA7B19D5579727E* ___selector1, const RuntimeMethod* method) ;
// TSource[] System.Linq.Enumerable::ToArray<UnityEngine.Vector3>(System.Collections.Generic.IEnumerable`1<TSource>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* Enumerable_ToArray_TisVector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_m86F205DD4D5F3E96A8588BC389B20C86541EA790_gshared (RuntimeObject* ___source0, const RuntimeMethod* method) ;
// System.Void System.Nullable`1<UnityEngine.Vector3>::.ctor(T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Nullable_1__ctor_m75F3ABB694E26670F021136BD3B9E71A65948BC2_gshared (Nullable_1_t9C51B084784B716FFF4ED4575C63CFD8A71A86FE* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___value0, const RuntimeMethod* method) ;
// T DG.Tweening.TweenSettingsExtensions::OnComplete<System.Object>(T,DG.Tweening.TweenCallback)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* TweenSettingsExtensions_OnComplete_TisRuntimeObject_mC014D07E92193DA79B257C4508B6DF208FE502A6_gshared (RuntimeObject* ___t0, TweenCallback_t7C8B8A38E7B30905FF1B83C943256EF23617BB24* ___action1, const RuntimeMethod* method) ;
// T[] UnityEngine.Component::GetComponentsInChildren<System.Object>(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* Component_GetComponentsInChildren_TisRuntimeObject_m90734C3A39A158985239CB90DE2F0792F1D99926_gshared (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, bool ___includeInactive0, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::Add(TKey,TValue)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_Add_mAF1EF7DA16BD70E252EA5C4B0F74DE519A02CBCD_gshared (Dictionary_2_tA75D1125AC9BE8F005BA9B868B373398E643C907* __this, int32_t ___key0, RuntimeObject* ___value1, const RuntimeMethod* method) ;
// System.Void System.Func`2<System.Collections.Generic.KeyValuePair`2<System.Int32,System.Object>,System.Int32>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Func_2__ctor_m68C2D09F33D72721D0E791A39ABD6F27A06312AD_gshared (Func_2_tC7213AC5A1ABF30D1B1AF2CC2C9786B9C4C25B81* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) ;
// System.Linq.IOrderedEnumerable`1<TSource> System.Linq.Enumerable::OrderBy<System.Collections.Generic.KeyValuePair`2<System.Int32,System.Object>,System.Int32>(System.Collections.Generic.IEnumerable`1<TSource>,System.Func`2<TSource,TKey>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Enumerable_OrderBy_TisKeyValuePair_2_tDC26B09C26BA829DDE331BCB6AF7C508C763D7A3_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m17A794CDB646851A0E5654D12FF41400929421E3_gshared (RuntimeObject* ___source0, Func_2_tC7213AC5A1ABF30D1B1AF2CC2C9786B9C4C25B81* ___keySelector1, const RuntimeMethod* method) ;
// System.Collections.Generic.Dictionary`2/Enumerator<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Enumerator_tE92C1AC40A104A179B94F8A013728FD9314CFBD3 Dictionary_2_GetEnumerator_m3F1620145BA0815B7C7CD648EF054558AA26556A_gshared (Dictionary_2_tA75D1125AC9BE8F005BA9B868B373398E643C907* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,System.Object>::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enumerator_Dispose_mAECCBE12C0427D7ACF88F82FA266F1AE37402565_gshared (Enumerator_tE92C1AC40A104A179B94F8A013728FD9314CFBD3* __this, const RuntimeMethod* method) ;
// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,System.Object>::get_Current()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR KeyValuePair_2_tDC26B09C26BA829DDE331BCB6AF7C508C763D7A3 Enumerator_get_Current_m90160D324DA0D9F5624A345F47D8E226A118911A_gshared_inline (Enumerator_tE92C1AC40A104A179B94F8A013728FD9314CFBD3* __this, const RuntimeMethod* method) ;
// TValue System.Collections.Generic.KeyValuePair`2<System.Int32,System.Object>::get_Value()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* KeyValuePair_2_get_Value_m8508BCECB0654E2E93B1A141382E2688ADE7EE7C_gshared_inline (KeyValuePair_2_tDC26B09C26BA829DDE331BCB6AF7C508C763D7A3* __this, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,System.Object>::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Enumerator_MoveNext_m4DC143BC57F14EDD85AB13B6D6F3B5D0E319B30E_gshared (Enumerator_tE92C1AC40A104A179B94F8A013728FD9314CFBD3* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_m92E9AB321FBD7147CA109C822D99C8B0610C27B7_gshared (Dictionary_2_tA75D1125AC9BE8F005BA9B868B373398E643C907* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::Clear()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_Clear_mE1EFF7C68491EE07D21EE9924475A559BF0A4773_gshared (Dictionary_2_tA75D1125AC9BE8F005BA9B868B373398E643C907* __this, const RuntimeMethod* method) ;
// TKey System.Collections.Generic.KeyValuePair`2<System.Int32,System.Object>::get_Key()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t KeyValuePair_2_get_Key_mF0E6A8A455FA71BC8EA94E39C8848FB35A836841_gshared_inline (KeyValuePair_2_tDC26B09C26BA829DDE331BCB6AF7C508C763D7A3* __this, const RuntimeMethod* method) ;
// T DG.Tweening.TweenSettingsExtensions::SetLoops<System.Object>(T,System.Int32,DG.Tweening.LoopType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* TweenSettingsExtensions_SetLoops_TisRuntimeObject_m47D6D13211B8E98EC93621D5ACA6828C463AFBF9_gshared (RuntimeObject* ___t0, int32_t ___loops1, int32_t ___loopType2, const RuntimeMethod* method) ;
// T[] UnityEngine.Component::GetComponentsInChildren<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* Component_GetComponentsInChildren_TisRuntimeObject_m1F5B6FC0689B07D4FAAC0C605D9B2933A9B32543_gshared (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method) ;
// System.Collections.Generic.List`1<TSource> System.Linq.Enumerable::ToList<System.Object>(System.Collections.Generic.IEnumerable`1<TSource>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* Enumerable_ToList_TisRuntimeObject_m6456D63764F29E6B5B2422C3DE25113577CF51EE_gshared (RuntimeObject* ___source0, const RuntimeMethod* method) ;
// T SRF.Service.SRServiceManager::GetService<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* SRServiceManager_GetService_TisRuntimeObject_mCECA3E42BBB83185086FEC067BAE634309D9A6FD_gshared (const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<Google.XR.ARCoreExtensions.Samples.Geospatial.GeospatialAnchorHistory>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__ctor_mED28D7886C86087D0894D3D73A471B948B145E83_gshared (List_1_t129F965E3A52C7ACA849FAEC97997D9357ED21A5* __this, const RuntimeMethod* method) ;

// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<UnityEngine.XR.ARFoundation.ARAnchor>::GetEnumerator()
inline Enumerator_t931CB0AD3EC6D604C0583DE600B7B530E43D9054 List_1_GetEnumerator_mEE1B2EFD76218372C2F754E07BFDE6CA16244502 (List_1_t5C2EBF017989E44F3D1D11AF502E10F6F8D9AB53* __this, const RuntimeMethod* method)
{
	return ((  Enumerator_t931CB0AD3EC6D604C0583DE600B7B530E43D9054 (*) (List_1_t5C2EBF017989E44F3D1D11AF502E10F6F8D9AB53*, const RuntimeMethod*))List_1_GetEnumerator_mD8294A7FA2BEB1929487127D476F8EC1CDC23BFC_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1/Enumerator<UnityEngine.XR.ARFoundation.ARAnchor>::Dispose()
inline void Enumerator_Dispose_m8A7D84A46E830A9A7C690AFD40780E721E0212D3 (Enumerator_t931CB0AD3EC6D604C0583DE600B7B530E43D9054* __this, const RuntimeMethod* method)
{
	((  void (*) (Enumerator_t931CB0AD3EC6D604C0583DE600B7B530E43D9054*, const RuntimeMethod*))Enumerator_Dispose_mD9DC3E3C3697830A4823047AB29A77DBBB5ED419_gshared)(__this, method);
}
// T System.Collections.Generic.List`1/Enumerator<UnityEngine.XR.ARFoundation.ARAnchor>::get_Current()
inline ARAnchor_t832D3D366D3F1D43F995A298974D4EDABACC0E06* Enumerator_get_Current_m765B5B047B9C59BB1A6DF6B8B884A1714DF83060_inline (Enumerator_t931CB0AD3EC6D604C0583DE600B7B530E43D9054* __this, const RuntimeMethod* method)
{
	return ((  ARAnchor_t832D3D366D3F1D43F995A298974D4EDABACC0E06* (*) (Enumerator_t931CB0AD3EC6D604C0583DE600B7B530E43D9054*, const RuntimeMethod*))Enumerator_get_Current_m6330F15D18EE4F547C05DF9BF83C5EB710376027_gshared_inline)(__this, method);
}
// System.Void UnityEngine.Object::Destroy(UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object_Destroy_mE97D0A766419A81296E8D4E5C23D01D3FE91ACBB (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___obj0, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.List`1/Enumerator<UnityEngine.XR.ARFoundation.ARAnchor>::MoveNext()
inline bool Enumerator_MoveNext_mE9F6469E9C52AF5A301EC8FEF983A3C5BFBF2C4F (Enumerator_t931CB0AD3EC6D604C0583DE600B7B530E43D9054* __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Enumerator_t931CB0AD3EC6D604C0583DE600B7B530E43D9054*, const RuntimeMethod*))Enumerator_MoveNext_mE921CC8F29FBBDE7CC3209A0ED0D921D58D00BCB_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1<UnityEngine.XR.ARFoundation.ARAnchor>::Clear()
inline void List_1_Clear_m5FC367B31C239426FA8CCE3EEB6D76AA2684BCAC_inline (List_1_t5C2EBF017989E44F3D1D11AF502E10F6F8D9AB53* __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_t5C2EBF017989E44F3D1D11AF502E10F6F8D9AB53*, const RuntimeMethod*))List_1_Clear_m16C1F2C61FED5955F10EB36BC1CB2DF34B128994_gshared_inline)(__this, method);
}
// T UnityEngine.Component::GetComponent<UnityEngine.XR.ARFoundation.ARRaycastManager>()
inline ARRaycastManager_tD9459374F0F5BD9E2E4A8A1C665E7F33F9C2EE44* Component_GetComponent_TisARRaycastManager_tD9459374F0F5BD9E2E4A8A1C665E7F33F9C2EE44_m255D1364D056A608CF5BB4AAB1BA1AD4CB78DE83 (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method)
{
	return ((  ARRaycastManager_tD9459374F0F5BD9E2E4A8A1C665E7F33F9C2EE44* (*) (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m7181F81CAEC2CF53F5D2BC79B7425C16E1F80D33_gshared)(__this, method);
}
// T UnityEngine.Component::GetComponent<UnityEngine.XR.ARFoundation.ARAnchorManager>()
inline ARAnchorManager_tF68C46300BD6F2E83E3360BF9297C3C50F5D6B3E* Component_GetComponent_TisARAnchorManager_tF68C46300BD6F2E83E3360BF9297C3C50F5D6B3E_mABCA912A8D3AFCEEA2F2FE0EF30C541DA7DD7907 (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method)
{
	return ((  ARAnchorManager_tF68C46300BD6F2E83E3360BF9297C3C50F5D6B3E* (*) (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m7181F81CAEC2CF53F5D2BC79B7425C16E1F80D33_gshared)(__this, method);
}
// T UnityEngine.Component::GetComponent<UnityEngine.XR.ARFoundation.ARPlaneManager>()
inline ARPlaneManager_t9DA6C512BDCFFBEE8B3DAA7170EB3BFFDE26A928* Component_GetComponent_TisARPlaneManager_t9DA6C512BDCFFBEE8B3DAA7170EB3BFFDE26A928_m668A6CC15F573ABC389E612A2423599B5ADDC2EF (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method)
{
	return ((  ARPlaneManager_t9DA6C512BDCFFBEE8B3DAA7170EB3BFFDE26A928* (*) (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m7181F81CAEC2CF53F5D2BC79B7425C16E1F80D33_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1<UnityEngine.XR.ARFoundation.ARAnchor>::.ctor()
inline void List_1__ctor_m97CA83C0EF5D88B61FDF3CE17A6A4A8677697DD4 (List_1_t5C2EBF017989E44F3D1D11AF502E10F6F8D9AB53* __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_t5C2EBF017989E44F3D1D11AF502E10F6F8D9AB53*, const RuntimeMethod*))List_1__ctor_m7F078BB342729BDF11327FD89D7872265328F690_gshared)(__this, method);
}
// System.Int32 UnityEngine.Input::get_touchCount()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Input_get_touchCount_m057388BFC67A0F4CA53764B1022867ED81D01E39 (const RuntimeMethod* method) ;
// UnityEngine.Touch UnityEngine.Input::GetTouch(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Touch_t03E51455ED508492B3F278903A0114FA0E87B417 Input_GetTouch_m75D99FE801A94279874FA8DC6B6ADAD35F5123B1 (int32_t ___index0, const RuntimeMethod* method) ;
// UnityEngine.TouchPhase UnityEngine.Touch::get_phase()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Touch_get_phase_mB82409FB2BE1C32ABDBA6A72E52A099D28AB70B0 (Touch_t03E51455ED508492B3F278903A0114FA0E87B417* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector2 UnityEngine.Touch::get_position()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 Touch_get_position_m41B9EB0F3F3E1BE98CEB388253A9E31979CB964A (Touch_t03E51455ED508492B3F278903A0114FA0E87B417* __this, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.XR.ARFoundation.ARRaycastManager::Raycast(UnityEngine.Vector2,System.Collections.Generic.List`1<UnityEngine.XR.ARFoundation.ARRaycastHit>,UnityEngine.XR.ARSubsystems.TrackableType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ARRaycastManager_Raycast_mF56A1E2D7CBB61131E4D844ADA9D0CC1F6B53EAC (ARRaycastManager_tD9459374F0F5BD9E2E4A8A1C665E7F33F9C2EE44* __this, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___screenPoint0, List_1_t0754071572EFE7A5C92A59495D2524FC935364E3* ___hitResults1, int32_t ___trackableTypes2, const RuntimeMethod* method) ;
// T System.Collections.Generic.List`1<UnityEngine.XR.ARFoundation.ARRaycastHit>::get_Item(System.Int32)
inline ARRaycastHit_tB32B5606815B8A7DF479C00187A852F8D20E3B70 List_1_get_Item_m443F0D48247776D4257E06597AF794BCF6D8020F (List_1_t0754071572EFE7A5C92A59495D2524FC935364E3* __this, int32_t ___index0, const RuntimeMethod* method)
{
	return ((  ARRaycastHit_tB32B5606815B8A7DF479C00187A852F8D20E3B70 (*) (List_1_t0754071572EFE7A5C92A59495D2524FC935364E3*, int32_t, const RuntimeMethod*))List_1_get_Item_m443F0D48247776D4257E06597AF794BCF6D8020F_gshared)(__this, ___index0, method);
}
// UnityEngine.Pose UnityEngine.XR.ARFoundation.ARRaycastHit::get_pose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 ARRaycastHit_get_pose_m84C13E71E21FE12CBA9AAD98DC28B1E414C9EFFD (ARRaycastHit_tB32B5606815B8A7DF479C00187A852F8D20E3B70* __this, const RuntimeMethod* method) ;
// UnityEngine.XR.ARSubsystems.TrackableId UnityEngine.XR.ARFoundation.ARRaycastHit::get_trackableId()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TrackableId_t49EAE8AA4B9584E314518723DC22B66496D47AD7 ARRaycastHit_get_trackableId_m4E510F2C326AFF23086203E4241C8F9B293616C3 (ARRaycastHit_tB32B5606815B8A7DF479C00187A852F8D20E3B70* __this, const RuntimeMethod* method) ;
// UnityEngine.XR.ARFoundation.ARPlane UnityEngine.XR.ARFoundation.ARPlaneManager::GetPlane(UnityEngine.XR.ARSubsystems.TrackableId)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ARPlane_tB2F02248AD4019D141553B25C1B9005913E98EF0* ARPlaneManager_GetPlane_m49FC33F6BC0DCFE67C4FC5F5CEE99CC8A7036FAE (ARPlaneManager_t9DA6C512BDCFFBEE8B3DAA7170EB3BFFDE26A928* __this, TrackableId_t49EAE8AA4B9584E314518723DC22B66496D47AD7 ___trackableId0, const RuntimeMethod* method) ;
// UnityEngine.XR.ARFoundation.ARAnchor UnityEngine.XR.ARFoundation.ARAnchorManager::AttachAnchor(UnityEngine.XR.ARFoundation.ARPlane,UnityEngine.Pose)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ARAnchor_t832D3D366D3F1D43F995A298974D4EDABACC0E06* ARAnchorManager_AttachAnchor_m8FA6B772401F90B38A06F43B8EA1B02EA82FFA75 (ARAnchorManager_tF68C46300BD6F2E83E3360BF9297C3C50F5D6B3E* __this, ARPlane_tB2F02248AD4019D141553B25C1B9005913E98EF0* ___plane0, Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 ___pose1, const RuntimeMethod* method) ;
// UnityEngine.Transform UnityEngine.Component::get_transform()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371 (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method) ;
// T UnityEngine.Object::Instantiate<UnityEngine.GameObject>(T,UnityEngine.Transform)
inline GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m58C654F1134533E29502629CA67645682B404811 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___original0, Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___parent1, const RuntimeMethod* method)
{
	return ((  GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1*, const RuntimeMethod*))Object_Instantiate_TisRuntimeObject_m75BF3B0A3747B60491845FA41612FE7F795F0A59_gshared)(___original0, ___parent1, method);
}
// System.Boolean UnityEngine.Object::op_Equality(UnityEngine.Object,UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605 (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___x0, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___y1, const RuntimeMethod* method) ;
// System.Void UnityEngine.Debug::Log(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB (RuntimeObject* ___message0, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<UnityEngine.XR.ARFoundation.ARAnchor>::Add(T)
inline void List_1_Add_m9DD96A685E24BAB041179C80B0CF8875AE04426A_inline (List_1_t5C2EBF017989E44F3D1D11AF502E10F6F8D9AB53* __this, ARAnchor_t832D3D366D3F1D43F995A298974D4EDABACC0E06* ___item0, const RuntimeMethod* method)
{
	((  void (*) (List_1_t5C2EBF017989E44F3D1D11AF502E10F6F8D9AB53*, ARAnchor_t832D3D366D3F1D43F995A298974D4EDABACC0E06*, const RuntimeMethod*))List_1_Add_mEBCF994CC3814631017F46A387B1A192ED6C85C7_gshared_inline)(__this, ___item0, method);
}
// System.Void UnityEngine.MonoBehaviour::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E (MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<UnityEngine.XR.ARFoundation.ARRaycastHit>::.ctor()
inline void List_1__ctor_m6B5722DD0A8C0D3D4A1656C5A5E8D0A784DC85B9 (List_1_t0754071572EFE7A5C92A59495D2524FC935364E3* __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_t0754071572EFE7A5C92A59495D2524FC935364E3*, const RuntimeMethod*))List_1__ctor_m6B5722DD0A8C0D3D4A1656C5A5E8D0A784DC85B9_gshared)(__this, method);
}
// T UnityEngine.Component::GetComponent<UnityEngine.XR.ARFoundation.ARPlaneMeshVisualizer>()
inline ARPlaneMeshVisualizer_t21838C8E2676AC524939E67CB965925E924E018F* Component_GetComponent_TisARPlaneMeshVisualizer_t21838C8E2676AC524939E67CB965925E924E018F_m41229EDC62D1149A73F81E7B0BE27B4C1C293A01 (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method)
{
	return ((  ARPlaneMeshVisualizer_t21838C8E2676AC524939E67CB965925E924E018F* (*) (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m7181F81CAEC2CF53F5D2BC79B7425C16E1F80D33_gshared)(__this, method);
}
// T UnityEngine.Component::GetComponent<UnityEngine.MeshRenderer>()
inline MeshRenderer_t4B7747212F0B88244BB7790C61AE124BFC15BAAE* Component_GetComponent_TisMeshRenderer_t4B7747212F0B88244BB7790C61AE124BFC15BAAE_m0EDA0079FA3617687C4A28623B79A37D618D9CFB (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method)
{
	return ((  MeshRenderer_t4B7747212F0B88244BB7790C61AE124BFC15BAAE* (*) (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m7181F81CAEC2CF53F5D2BC79B7425C16E1F80D33_gshared)(__this, method);
}
// UnityEngine.Material UnityEngine.Renderer::get_material()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* Renderer_get_material_m5BA2A00816C4CC66580D4B2E409CF10718C15656 (Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF* __this, const RuntimeMethod* method) ;
// T UnityEngine.Component::GetComponent<UnityEngine.XR.ARFoundation.ARPlane>()
inline ARPlane_tB2F02248AD4019D141553B25C1B9005913E98EF0* Component_GetComponent_TisARPlane_tB2F02248AD4019D141553B25C1B9005913E98EF0_m8005DAC7F65600404981B996A714B5C7D29A359F (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method)
{
	return ((  ARPlane_tB2F02248AD4019D141553B25C1B9005913E98EF0* (*) (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m7181F81CAEC2CF53F5D2BC79B7425C16E1F80D33_gshared)(__this, method);
}
// System.Void System.Action`1<UnityEngine.XR.ARFoundation.ARPlaneBoundaryChangedEventArgs>::.ctor(System.Object,System.IntPtr)
inline void Action_1__ctor_m83B9B49A5CEF71BC8798C9C8B7989333626CF3E1 (Action_1_t762BEDF03B3FAD9E52246AF6B4291030B8085074* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (Action_1_t762BEDF03B3FAD9E52246AF6B4291030B8085074*, RuntimeObject*, intptr_t, const RuntimeMethod*))Action_1__ctor_m83B9B49A5CEF71BC8798C9C8B7989333626CF3E1_gshared)(__this, ___object0, ___method1, method);
}
// System.Void UnityEngine.XR.ARFoundation.ARPlane::add_boundaryChanged(System.Action`1<UnityEngine.XR.ARFoundation.ARPlaneBoundaryChangedEventArgs>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ARPlane_add_boundaryChanged_m6A9CA2ADF4742C004EF7BCFD48A7C820320616AA (ARPlane_tB2F02248AD4019D141553B25C1B9005913E98EF0* __this, Action_1_t762BEDF03B3FAD9E52246AF6B4291030B8085074* ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.XR.ARFoundation.ARPlane::remove_boundaryChanged(System.Action`1<UnityEngine.XR.ARFoundation.ARPlaneBoundaryChangedEventArgs>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ARPlane_remove_boundaryChanged_m6F71EEF2CD3C71AF069C5FE6CD993906BD8A9A10 (ARPlane_tB2F02248AD4019D141553B25C1B9005913E98EF0* __this, Action_1_t762BEDF03B3FAD9E52246AF6B4291030B8085074* ___value0, const RuntimeMethod* method) ;
// UnityEngine.Mesh UnityEngine.XR.ARFoundation.ARPlaneMeshVisualizer::get_mesh()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* ARPlaneMeshVisualizer_get_mesh_m6C1A730CECE8AE0A0549ED615AB3B3D66E4A0FD8_inline (ARPlaneMeshVisualizer_t21838C8E2676AC524939E67CB965925E924E018F* __this, const RuntimeMethod* method) ;
// System.Void ARFeatheredPlaneMeshVisualizer::GenerateBoundaryUVs(UnityEngine.Mesh)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ARFeatheredPlaneMeshVisualizer_GenerateBoundaryUVs_mF756D3C1F7925A69CD8C7C8CCE56209AB321FEF5 (ARFeatheredPlaneMeshVisualizer_t5B508CD2D37F908F4359D7DED031B3C357E34955* __this, Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* ___mesh0, const RuntimeMethod* method) ;
// System.Int32 UnityEngine.Mesh::get_vertexCount()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Mesh_get_vertexCount_mB7BE0340AAF272933068D830C8E711FC8978E12C (Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<UnityEngine.Vector3>::Clear()
inline void List_1_Clear_m455780C5A45049F9BDC25EAD3BA10A681D16385D_inline (List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B* __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B*, const RuntimeMethod*))List_1_Clear_m455780C5A45049F9BDC25EAD3BA10A681D16385D_gshared_inline)(__this, method);
}
// System.Int32 System.Collections.Generic.List`1<UnityEngine.Vector3>::get_Capacity()
inline int32_t List_1_get_Capacity_m1810FC505867C713DCDDD7468F8BA2BF1DF0D3B6 (List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B*, const RuntimeMethod*))List_1_get_Capacity_m1810FC505867C713DCDDD7468F8BA2BF1DF0D3B6_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1<UnityEngine.Vector3>::set_Capacity(System.Int32)
inline void List_1_set_Capacity_mF3F5104AB534524CF6D04659241FBD48C9080FFE (List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B* __this, int32_t ___value0, const RuntimeMethod* method)
{
	((  void (*) (List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B*, int32_t, const RuntimeMethod*))List_1_set_Capacity_mF3F5104AB534524CF6D04659241FBD48C9080FFE_gshared)(__this, ___value0, method);
}
// System.Void UnityEngine.Mesh::GetVertices(System.Collections.Generic.List`1<UnityEngine.Vector3>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Mesh_GetVertices_m5BF8777074E383AD8C4B9974D27E4AB52963D92E (Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* __this, List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B* ___vertices0, const RuntimeMethod* method) ;
// System.Int32 System.Collections.Generic.List`1<UnityEngine.Vector3>::get_Count()
inline int32_t List_1_get_Count_m46EEFFA770BE665EA0CB3A5332E941DA4B3C1D37_inline (List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B*, const RuntimeMethod*))List_1_get_Count_m46EEFFA770BE665EA0CB3A5332E941DA4B3C1D37_gshared_inline)(__this, method);
}
// T System.Collections.Generic.List`1<UnityEngine.Vector3>::get_Item(System.Int32)
inline Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 List_1_get_Item_m8F2E15FC96DA75186C51228128A0660709E4E810 (List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B* __this, int32_t ___index0, const RuntimeMethod* method)
{
	return ((  Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 (*) (List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B*, int32_t, const RuntimeMethod*))List_1_get_Item_m8F2E15FC96DA75186C51228128A0660709E4E810_gshared)(__this, ___index0, method);
}
// System.Void UnityEngine.Vector3::.ctor(System.Single,System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* __this, float ___x0, float ___y1, float ___z2, const RuntimeMethod* method) ;
// System.Single UnityEngine.Vector3::Distance(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Vector3_Distance_m2314DB9B8BD01157E013DF87BEA557375C7F9FF9_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___a0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___b1, const RuntimeMethod* method) ;
// System.Single ARFeatheredPlaneMeshVisualizer::get_featheringWidth()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float ARFeatheredPlaneMeshVisualizer_get_featheringWidth_m14D3A8BE3E9A745E6FD525B19ADDC892B8399B4D_inline (ARFeatheredPlaneMeshVisualizer_t5B508CD2D37F908F4359D7DED031B3C357E34955* __this, const RuntimeMethod* method) ;
// System.Single UnityEngine.Mathf::Max(System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Mathf_Max_mF5379E63D2BBAC76D090748695D833934F8AD051_inline (float ___a0, float ___b1, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<UnityEngine.Vector3>::Add(T)
inline void List_1_Add_m79E50C4F592B1703F4B76A8BE7B4855515460CA1_inline (List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___item0, const RuntimeMethod* method)
{
	((  void (*) (List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B*, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2, const RuntimeMethod*))List_1_Add_m79E50C4F592B1703F4B76A8BE7B4855515460CA1_gshared_inline)(__this, ___item0, method);
}
// System.Void UnityEngine.Material::SetFloat(System.String,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Material_SetFloat_m879CF81D740BAE6F23C9822400679F4D16365836 (Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* __this, String_t* ___name0, float ___value1, const RuntimeMethod* method) ;
// System.Void UnityEngine.Vector3::Set(System.Single,System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector3_Set_m1C7E543216734FB513F9CEBA44C50E6FC2AFD49D_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* __this, float ___newX0, float ___newY1, float ___newZ2, const RuntimeMethod* method) ;
// System.Void UnityEngine.Mesh::SetUVs(System.Int32,System.Collections.Generic.List`1<UnityEngine.Vector3>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Mesh_SetUVs_mFEE20B5977AA358DAFA31CF621BBC4B0247789B2 (Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* __this, int32_t ___channel0, List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B* ___uvs1, const RuntimeMethod* method) ;
// System.Void UnityEngine.Mesh::UploadMeshData(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Mesh_UploadMeshData_mE4C94F263DAA8CAC1641FE137E1CE7D3F09396EB (Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* __this, bool ___markNoLongerReadable0, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<UnityEngine.Vector3>::.ctor()
inline void List_1__ctor_mC54E2BCBE43279A96FC082F5CDE2D76388BD8F9C (List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B* __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B*, const RuntimeMethod*))List_1__ctor_mC54E2BCBE43279A96FC082F5CDE2D76388BD8F9C_gshared)(__this, method);
}
// System.Boolean UnityEngine.Application::get_isEditor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Application_get_isEditor_mEAC51E3ACE6DCE438087FB14BD75A3C219D354D0 (const RuntimeMethod* method) ;
// UnityEngine.XR.ARFoundation.ARSessionState UnityEngine.XR.ARFoundation.ARSession::get_state()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t ARSession_get_state_m6A22EE6441E58AC66E1FE9A7359D06C90C1A2842_inline (const RuntimeMethod* method) ;
// System.Boolean BuildingsGeospatialController::IsSupportedDevice()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool BuildingsGeospatialController_IsSupportedDevice_m21B4545536607F712EEBDD126972239C7555B827 (BuildingsGeospatialController_t3659F8BA9E2F49FF0B5D9F205AA900B84B98C410* __this, const RuntimeMethod* method) ;
// System.Boolean BuildingsGeospatialController::IsHighAccuracyDeviceEarthPosition()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool BuildingsGeospatialController_IsHighAccuracyDeviceEarthPosition_mF55C3573154AAF6A8176353E98B4F6BC10BF73BD (BuildingsGeospatialController_t3659F8BA9E2F49FF0B5D9F205AA900B84B98C410* __this, const RuntimeMethod* method) ;
// System.Boolean BuildingsGeospatialController::IsExistGeoSpatialAnchor(System.Double,System.Double,System.Double)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool BuildingsGeospatialController_IsExistGeoSpatialAnchor_m41C399AB2F96B29D2C3EF88BF4C2B34093CF1DCA (BuildingsGeospatialController_t3659F8BA9E2F49FF0B5D9F205AA900B84B98C410* __this, double ___lat0, double ___lng1, double ___alt2, const RuntimeMethod* method) ;
// System.Void BuildingsGeospatialController::Adjust()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BuildingsGeospatialController_Adjust_mD9F930EE3EE7E386F25F89DA4616491C13D82623 (BuildingsGeospatialController_t3659F8BA9E2F49FF0B5D9F205AA900B84B98C410* __this, const RuntimeMethod* method) ;
// Google.XR.ARCoreExtensions.FeatureSupported Google.XR.ARCoreExtensions.AREarthManager::IsGeospatialModeSupported(Google.XR.ARCoreExtensions.GeospatialMode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t AREarthManager_IsGeospatialModeSupported_m95784655267321A2E74719CB725D58F368AA278F (AREarthManager_tAC32FF06F084622687D9FB4837506A704301D0F0* __this, int32_t ___mode0, const RuntimeMethod* method) ;
// UnityEngine.XR.ARSubsystems.TrackingState Google.XR.ARCoreExtensions.AREarthManager::get_EarthTrackingState()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t AREarthManager_get_EarthTrackingState_m07DA12743E09AC92C21F6868B51D3211023B299A (AREarthManager_tAC32FF06F084622687D9FB4837506A704301D0F0* __this, const RuntimeMethod* method) ;
// Google.XR.ARCoreExtensions.GeospatialPose Google.XR.ARCoreExtensions.AREarthManager::get_CameraGeospatialPose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GeospatialPose_tBF34434706FEEB7D1524DEE5FADDEE7E95452F2C AREarthManager_get_CameraGeospatialPose_mE81C71F8E4CD0B6FD4116D0B3E5B97F00DDE9C1A (AREarthManager_tAC32FF06F084622687D9FB4837506A704301D0F0* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::get_up()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_get_up_m128AF3FDC820BF59D5DE86D973E7DE3F20C3AEBA_inline (const RuntimeMethod* method) ;
// UnityEngine.Quaternion UnityEngine.Quaternion::AngleAxis(System.Single,UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 Quaternion_AngleAxis_mF37022977B297E63AA70D69EA1C4C922FF22CC80 (float ___angle0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___axis1, const RuntimeMethod* method) ;
// Google.XR.ARCoreExtensions.ARGeospatialAnchor Google.XR.ARCoreExtensions.ARAnchorManagerExtensions::AddAnchor(UnityEngine.XR.ARFoundation.ARAnchorManager,System.Double,System.Double,System.Double,UnityEngine.Quaternion)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ARGeospatialAnchor_tD63E18E1D193A2B24B757D285F3CF67A8FC7F571* ARAnchorManagerExtensions_AddAnchor_m40F02EA59D932D82EEF0C6FDD19B9006BAA1FE78 (ARAnchorManager_tF68C46300BD6F2E83E3360BF9297C3C50F5D6B3E* ___anchorManager0, double ___latitude1, double ___longitude2, double ___altitude3, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___eunRotation4, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Object::op_Inequality(UnityEngine.Object,UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602 (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___x0, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___y1, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Transform::get_position()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, const RuntimeMethod* method) ;
// UnityEngine.Quaternion UnityEngine.Transform::get_rotation()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 Transform_get_rotation_m32AF40CA0D50C797DA639A696F8EAEC7524C179C (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Transform::SetPositionAndRotation(UnityEngine.Vector3,UnityEngine.Quaternion)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_SetPositionAndRotation_m418859BF59086EEAA084FFD6F258A43FAB408F5A (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___position0, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___rotation1, const RuntimeMethod* method) ;
// System.Int32 UnityEngine.Screen::get_width()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Screen_get_width_mF608FF3252213E7EFA1F0D2F744C28110E9E5AC9 (const RuntimeMethod* method) ;
// System.Int32 UnityEngine.Screen::get_height()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Screen_get_height_m01A3102DE71EE1FBEA51D09D6B0261CF864FE8F9 (const RuntimeMethod* method) ;
// System.Void UnityEngine.Rect::.ctor(System.Single,System.Single,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Rect__ctor_m18C3033D135097BEE424AAA68D91C706D2647F23 (Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D* __this, float ___x0, float ___y1, float ___width2, float ___height3, const RuntimeMethod* method) ;
// System.Void UnityEngine.Rect::set_width(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Rect_set_width_m93B6217CF3EFF89F9B0C81F34D7345DE90B93E5A (Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D* __this, float ___value0, const RuntimeMethod* method) ;
// System.Single UnityEngine.Rect::get_width()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Rect_get_width_m620D67551372073C9C32C4C4624C2A5713F7F9A9 (Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Rect::set_x(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Rect_set_x_mAB91AB71898A20762BC66FD0723C4C739C4C3406 (Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D* __this, float ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Rect::set_height(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Rect_set_height_mD00038E6E06637137A5626CA8CD421924005BF03 (Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D* __this, float ___value0, const RuntimeMethod* method) ;
// System.Single UnityEngine.Rect::get_height()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Rect_get_height_mE1AA6C6C725CCD2D317BD2157396D3CF7D47C9D8 (Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Rect::set_y(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Rect_set_y_mDE91F4B98A6E8623EFB1250FF6526D5DB5855629 (Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D* __this, float ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Camera::set_rect(UnityEngine.Rect)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Camera_set_rect_mA81158BC169AF8674DE240AE9460FC5A0EADBB19 (Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* __this, Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.MonoBehaviour::Invoke(System.String,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MonoBehaviour_Invoke_mF724350C59362B0F1BFE26383209A274A29A63FB (MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71* __this, String_t* ___methodName0, float ___time1, const RuntimeMethod* method) ;
// System.Void UnityEngine.SceneManagement.SceneManager::LoadScene(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SceneManager_LoadScene_mBB3DBC1601A21F8F4E8A5D68FED30EA9412F218E (String_t* ___sceneName0, const RuntimeMethod* method) ;
// UnityEngine.GameObject UnityEngine.Component::get_gameObject()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method) ;
// T UnityEngine.GameObject::AddComponent<UnityEngine.AudioSource>()
inline AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* GameObject_AddComponent_TisAudioSource_t871AC2272F896738252F04EE949AEF5B241D3299_m0E8EFDB9B3D8DF1ADE10C56D3168A9C1BA19BF14 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method)
{
	return ((  AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, const RuntimeMethod*))GameObject_AddComponent_TisRuntimeObject_m69B93700FACCF372F5753371C6E8FB780800B824_gshared)(__this, method);
}
// System.String UnityEngine.GameObject::get_tag()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* GameObject_get_tag_mEDD27BF795072834D656B286CBE51B2C99747805 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method) ;
// System.Boolean System.String::op_Equality(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1 (String_t* ___a0, String_t* ___b1, const RuntimeMethod* method) ;
// System.Void UnityEngine.AudioSource::PlayOneShot(UnityEngine.AudioClip)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioSource_PlayOneShot_m098BCAE084AABB128BB19ED805D2D985E7B75112 (AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* __this, AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* ___clip0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Object::Destroy(UnityEngine.Object,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object_Destroy_m064F2A066491D2DC4FFCFBDBE5FCFFB807A04436 (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___obj0, float ___t1, const RuntimeMethod* method) ;
// UnityEngine.GameObject UnityEngine.GameObject::Find(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* GameObject_Find_m7A669B4EEC2617AB82F6E3FF007CDCD9F21DB300 (String_t* ___name0, const RuntimeMethod* method) ;
// T UnityEngine.GameObject::GetComponent<Combotext>()
inline Combotext_t66C71AF95DB28158B23E969B02D5102D37877FAA* GameObject_GetComponent_TisCombotext_t66C71AF95DB28158B23E969B02D5102D37877FAA_m18D8550B9905B72C133367C1A69285FCB8286EBA (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method)
{
	return ((  Combotext_t66C71AF95DB28158B23E969B02D5102D37877FAA* (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_m6EAED4AA356F0F48288F67899E5958792395563B_gshared)(__this, method);
}
// UnityEngine.GameObject UnityEngine.Collision::get_gameObject()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* Collision_get_gameObject_m846FADBCA43E1849D3FE4D5EA44C02D055A70B3E (Collision_tBCC6AEBD9A63E6DA2E50660DAC03CDCB1FF7A9B0* __this, const RuntimeMethod* method) ;
// System.Void System.NotImplementedException::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NotImplementedException__ctor_mDAB47BC6BD0E342E8F2171E5CABE3E67EA049F1C (NotImplementedException_t6366FE4DCF15094C51F4833B91A2AE68D4DA90E8* __this, const RuntimeMethod* method) ;
// System.String System.String::Format(System.String,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Format_mA8DBB4C2516B9723C5A41E6CB1E2FAF4BBE96DD8 (String_t* ___format0, RuntimeObject* ___arg01, const RuntimeMethod* method) ;
// T UnityEngine.GameObject::GetComponent<UnityEngine.UI.Slider>()
inline Slider_t87EA570E3D6556CABF57456C2F3873FFD86E652F* GameObject_GetComponent_TisSlider_t87EA570E3D6556CABF57456C2F3873FFD86E652F_m3B73E32B09A6667056AC232DA5238351F51DB7EA (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method)
{
	return ((  Slider_t87EA570E3D6556CABF57456C2F3873FFD86E652F* (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_m6EAED4AA356F0F48288F67899E5958792395563B_gshared)(__this, method);
}
// T UnityEngine.GameObject::GetComponent<Scoretext>()
inline Scoretext_t81C3E9BC508DF6567C782ECEF50A8CA49CFBC53B* GameObject_GetComponent_TisScoretext_t81C3E9BC508DF6567C782ECEF50A8CA49CFBC53B_mA9684CB865192F01841775287B493CA8E9487DC8 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method)
{
	return ((  Scoretext_t81C3E9BC508DF6567C782ECEF50A8CA49CFBC53B* (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_m6EAED4AA356F0F48288F67899E5958792395563B_gshared)(__this, method);
}
// System.Void UnityEngine.Transform::set_position(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_set_position_mA1A817124BB41B685043DED2A9BA48CDF37C4156 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.GameObject::SetActive(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, bool ___value0, const RuntimeMethod* method) ;
// T UnityEngine.GameObject::GetComponent<UnityEngine.UI.Button>()
inline Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* GameObject_GetComponent_TisButton_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098_mB997CBF78A37938DC1624352E12D0205078CB290 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method)
{
	return ((  Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_m6EAED4AA356F0F48288F67899E5958792395563B_gshared)(__this, method);
}
// UnityEngine.UI.Button/ButtonClickedEvent UnityEngine.UI.Button::get_onClick()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ButtonClickedEvent_t8EA72E90B3BD1392FB3B3EF167D5121C23569E4C* Button_get_onClick_m701712A7F7F000CC80D517C4510697E15722C35C_inline (Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Events.UnityAction::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityAction__ctor_mC53E20D6B66E0D5688CD81B88DBB34F5A58B7131 (UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) ;
// System.Void UnityEngine.Events.UnityEvent::AddListener(UnityEngine.Events.UnityAction)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityEvent_AddListener_m8AA4287C16628486B41DA41CA5E7A856A706D302 (UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977* __this, UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* ___call0, const RuntimeMethod* method) ;
// System.String UnityEngine.Object::get_name()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Object_get_name_mAC2F6B897CF1303BA4249B4CB55271AFACBB6392 (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* __this, const RuntimeMethod* method) ;
// UnityEngine.Transform UnityEngine.GameObject::get_transform()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method) ;
// System.Collections.IEnumerator NotesGenerator::GetRondomNum()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* NotesGenerator_GetRondomNum_m9CB4431F3B45E9D8F7F1828605AC6C3B3CB2192E (NotesGenerator_tD968B1468A55A495385ACE41CDC9423D02852B91* __this, const RuntimeMethod* method) ;
// UnityEngine.Coroutine UnityEngine.MonoBehaviour::StartCoroutine(System.Collections.IEnumerator)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B* MonoBehaviour_StartCoroutine_m4CAFF732AA28CD3BDC5363B44A863575530EC812 (MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71* __this, RuntimeObject* ___routine0, const RuntimeMethod* method) ;
// System.Void SoundController::MusicPlay()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SoundController_MusicPlay_mB20DA66ED50438A38FEF9D89928F08756E7F883A (SoundController_tA53F7251931CF12B1E75D0DF2F56D42DBFC61071* __this, const RuntimeMethod* method) ;
// System.Void RhythmObject::IsActive(System.Boolean)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void RhythmObject_IsActive_m0C72212BC60BE50237C7264C1AC84F169FFEF2E3_inline (RhythmObject_t48B5812FD53B54DB2453283D026C825E88D880A3* __this, bool ___enable0, const RuntimeMethod* method) ;
// System.Void SoundController::MusicStop()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SoundController_MusicStop_m30C04C66EDA324E2E13BEE55D21B3BC3E4762444 (SoundController_tA53F7251931CF12B1E75D0DF2F56D42DBFC61071* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Debug::LogError(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_LogError_mB00B2B4468EF3CAF041B038D840820FB84C924B2 (RuntimeObject* ___message0, const RuntimeMethod* method) ;
// UnityEngine.Quaternion UnityEngine.Quaternion::get_identity()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 Quaternion_get_identity_m7E701AE095ED10FD5EA0B50ABCFDE2EEFF2173A5_inline (const RuntimeMethod* method) ;
// T UnityEngine.Object::Instantiate<UnityEngine.GameObject>(T,UnityEngine.Vector3,UnityEngine.Quaternion)
inline GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m831D2F71DF2AA6C93AFDFEFA04CF2CFC5FBBCDB4 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___original0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___position1, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___rotation2, const RuntimeMethod* method)
{
	return ((  GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974, const RuntimeMethod*))Object_Instantiate_TisRuntimeObject_m249A6BA4F2F19C2D3CE217D4D31847DF0EF03EFE_gshared)(___original0, ___position1, ___rotation2, method);
}
// System.Void NotesGenerator/<GetRondomNum>d__17::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CGetRondomNumU3Ed__17__ctor_m29316C9E6E5A3FD7EC93E5E3CE065AC7DD7DF999 (U3CGetRondomNumU3Ed__17_t9A4C5E43B0267F9539B52C841AEAB83479F33F5D* __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method) ;
// System.Void System.Object::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2 (RuntimeObject* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.WaitForSeconds::.ctor(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WaitForSeconds__ctor_m579F95BADEDBAB4B3A7E302C6EE3995926EF2EFC (WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3* __this, float ___seconds0, const RuntimeMethod* method) ;
// System.Int32 UnityEngine.Random::Range(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Random_Range_m6763D9767F033357F88B6637F048F4ACA4123B68 (int32_t ___minInclusive0, int32_t ___maxExclusive1, const RuntimeMethod* method) ;
// System.Void NotesGenerator::GenerateNotes(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NotesGenerator_GenerateNotes_mC712C912FD2ABB3478BF9D887E4B6B4691E4E34E (NotesGenerator_tD968B1468A55A495385ACE41CDC9423D02852B91* __this, int32_t ___num0, const RuntimeMethod* method) ;
// System.Void System.NotSupportedException::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NotSupportedException__ctor_m1398D0CDE19B36AA3DE9392879738C1EA2439CDF (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<UnityEngine.GameObject>::Add(T)
inline void List_1_Add_m43FBF207375C6E06B8C45ECE614F9B8008FB686E_inline (List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* __this, GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___item0, const RuntimeMethod* method)
{
	((  void (*) (List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B*, GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, const RuntimeMethod*))List_1_Add_mEBCF994CC3814631017F46A387B1A192ED6C85C7_gshared_inline)(__this, ___item0, method);
}
// System.Void System.Func`2<UnityEngine.GameObject,UnityEngine.Vector3>::.ctor(System.Object,System.IntPtr)
inline void Func_2__ctor_mF940206FD9515CEC86729E6C58B7F206E1B17DC2 (Func_2_tD73B7BD3399DAC2D727A9D19B39BF7DB6BB67C28* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (Func_2_tD73B7BD3399DAC2D727A9D19B39BF7DB6BB67C28*, RuntimeObject*, intptr_t, const RuntimeMethod*))Func_2__ctor_m55582D0AF64DBB8F297B71E8B68F40E374CE1910_gshared)(__this, ___object0, ___method1, method);
}
// System.Collections.Generic.IEnumerable`1<TResult> System.Linq.Enumerable::Select<UnityEngine.GameObject,UnityEngine.Vector3>(System.Collections.Generic.IEnumerable`1<TSource>,System.Func`2<TSource,TResult>)
inline RuntimeObject* Enumerable_Select_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_TisVector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_mEB1001BA7D7B791008645AC272676FD3357B6B69 (RuntimeObject* ___source0, Func_2_tD73B7BD3399DAC2D727A9D19B39BF7DB6BB67C28* ___selector1, const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (RuntimeObject*, Func_2_tD73B7BD3399DAC2D727A9D19B39BF7DB6BB67C28*, const RuntimeMethod*))Enumerable_Select_TisRuntimeObject_TisVector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_mD5D789F2B8DB62FA788B521C23208C7E5B589ED4_gshared)(___source0, ___selector1, method);
}
// TSource[] System.Linq.Enumerable::ToArray<UnityEngine.Vector3>(System.Collections.Generic.IEnumerable`1<TSource>)
inline Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* Enumerable_ToArray_TisVector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_m86F205DD4D5F3E96A8588BC389B20C86541EA790 (RuntimeObject* ___source0, const RuntimeMethod* method)
{
	return ((  Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* (*) (RuntimeObject*, const RuntimeMethod*))Enumerable_ToArray_TisVector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_m86F205DD4D5F3E96A8588BC389B20C86541EA790_gshared)(___source0, method);
}
// DG.Tweening.Core.TweenerCore`3<UnityEngine.Vector3,DG.Tweening.Plugins.Core.PathCore.Path,DG.Tweening.Plugins.Options.PathOptions> DG.Tweening.ShortcutExtensions::DOPath(UnityEngine.Transform,UnityEngine.Vector3[],System.Single,DG.Tweening.PathType,DG.Tweening.PathMode,System.Int32,System.Nullable`1<UnityEngine.Color>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TweenerCore_3_t4911E6704673AA7505D10A9D0B0D989CEC689DCA* ShortcutExtensions_DOPath_mB31C78FE35F62166F934D044D3B0B4BAC6304D4B (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___target0, Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* ___path1, float ___duration2, int32_t ___pathType3, int32_t ___pathMode4, int32_t ___resolution5, Nullable_1_tEE83D90B507D40B6C58B5EEF5B9D44D377B44F11 ___gizmoColor6, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::get_forward()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_get_forward_mAA55A7034304DF8B2152EAD49AE779FC4CA2EB4A_inline (const RuntimeMethod* method) ;
// System.Void System.Nullable`1<UnityEngine.Vector3>::.ctor(T)
inline void Nullable_1__ctor_m75F3ABB694E26670F021136BD3B9E71A65948BC2 (Nullable_1_t9C51B084784B716FFF4ED4575C63CFD8A71A86FE* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___value0, const RuntimeMethod* method)
{
	((  void (*) (Nullable_1_t9C51B084784B716FFF4ED4575C63CFD8A71A86FE*, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2, const RuntimeMethod*))Nullable_1__ctor_m75F3ABB694E26670F021136BD3B9E71A65948BC2_gshared)(__this, ___value0, method);
}
// DG.Tweening.Core.TweenerCore`3<UnityEngine.Vector3,DG.Tweening.Plugins.Core.PathCore.Path,DG.Tweening.Plugins.Options.PathOptions> DG.Tweening.TweenSettingsExtensions::SetLookAt(DG.Tweening.Core.TweenerCore`3<UnityEngine.Vector3,DG.Tweening.Plugins.Core.PathCore.Path,DG.Tweening.Plugins.Options.PathOptions>,System.Single,System.Nullable`1<UnityEngine.Vector3>,System.Nullable`1<UnityEngine.Vector3>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TweenerCore_3_t4911E6704673AA7505D10A9D0B0D989CEC689DCA* TweenSettingsExtensions_SetLookAt_mECF406EE42F980E66C745916D2BBDF63F7E4C0D6 (TweenerCore_3_t4911E6704673AA7505D10A9D0B0D989CEC689DCA* ___t0, float ___lookAhead1, Nullable_1_t9C51B084784B716FFF4ED4575C63CFD8A71A86FE ___forwardDirection2, Nullable_1_t9C51B084784B716FFF4ED4575C63CFD8A71A86FE ___up3, const RuntimeMethod* method) ;
// System.Void DG.Tweening.TweenCallback::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TweenCallback__ctor_m68CC9304423CBDE43001F9B1413B5DAAF70DB621 (TweenCallback_t7C8B8A38E7B30905FF1B83C943256EF23617BB24* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) ;
// T DG.Tweening.TweenSettingsExtensions::OnComplete<DG.Tweening.Core.TweenerCore`3<UnityEngine.Vector3,DG.Tweening.Plugins.Core.PathCore.Path,DG.Tweening.Plugins.Options.PathOptions>>(T,DG.Tweening.TweenCallback)
inline TweenerCore_3_t4911E6704673AA7505D10A9D0B0D989CEC689DCA* TweenSettingsExtensions_OnComplete_TisTweenerCore_3_t4911E6704673AA7505D10A9D0B0D989CEC689DCA_mC4E9F7688EDBC9B7A04BB856F108CDDD0EB5767F (TweenerCore_3_t4911E6704673AA7505D10A9D0B0D989CEC689DCA* ___t0, TweenCallback_t7C8B8A38E7B30905FF1B83C943256EF23617BB24* ___action1, const RuntimeMethod* method)
{
	return ((  TweenerCore_3_t4911E6704673AA7505D10A9D0B0D989CEC689DCA* (*) (TweenerCore_3_t4911E6704673AA7505D10A9D0B0D989CEC689DCA*, TweenCallback_t7C8B8A38E7B30905FF1B83C943256EF23617BB24*, const RuntimeMethod*))TweenSettingsExtensions_OnComplete_TisRuntimeObject_mC014D07E92193DA79B257C4508B6DF208FE502A6_gshared)(___t0, ___action1, method);
}
// System.Void NotesMoveController/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_m6EB703BA8786F3144FF75455E8269F80F53B81C5 (U3CU3Ec_t76E842CF01F5D7B362D9F99F71BE046DC734F0F4* __this, const RuntimeMethod* method) ;
// UnityEngine.GameObject[] UnityEngine.GameObject::FindGameObjectsWithTag(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* GameObject_FindGameObjectsWithTag_mB8AA805DA664EF0221BB338446014F662771B4E3 (String_t* ___tag0, const RuntimeMethod* method) ;
// System.String System.String::Replace(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Replace_mABDB7003A1D0AEDCAE9FF85E3DFFFBA752D2A166 (String_t* __this, String_t* ___oldValue0, String_t* ___newValue1, const RuntimeMethod* method) ;
// T[] UnityEngine.Component::GetComponentsInChildren<UnityEngine.Transform>(System.Boolean)
inline TransformU5BU5D_tBB9C5F5686CAE82E3D97D43DF0F3D68ABF75EC24* Component_GetComponentsInChildren_TisTransform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1_mD80D5A6BA73EE3066CFCE2345C3F4B9FC2E28837 (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, bool ___includeInactive0, const RuntimeMethod* method)
{
	return ((  TransformU5BU5D_tBB9C5F5686CAE82E3D97D43DF0F3D68ABF75EC24* (*) (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*, bool, const RuntimeMethod*))Component_GetComponentsInChildren_TisRuntimeObject_m90734C3A39A158985239CB90DE2F0792F1D99926_gshared)(__this, ___includeInactive0, method);
}
// System.Void System.Collections.Generic.List`1<UnityEngine.Transform>::Add(T)
inline void List_1_Add_m36829EC89855C8C23CEDA8C5F5B12B76ADFE2248_inline (List_1_t991BBC5A1D51F59A450367DF944DAA207F22D06D* __this, Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___item0, const RuntimeMethod* method)
{
	((  void (*) (List_1_t991BBC5A1D51F59A450367DF944DAA207F22D06D*, Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1*, const RuntimeMethod*))List_1_Add_mEBCF994CC3814631017F46A387B1A192ED6C85C7_gshared_inline)(__this, ___item0, method);
}
// System.Collections.IEnumerator RhythmObject::Rhythm()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* RhythmObject_Rhythm_mED49C88695508955A6497455ABC94528B7C56EDC (RhythmObject_t48B5812FD53B54DB2453283D026C825E88D880A3* __this, const RuntimeMethod* method) ;
// System.Void RhythmObject/<Rhythm>d__7::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CRhythmU3Ed__7__ctor_mBD0D8CD8F10BCEEB37E214C24A0444BB6C27CBAD (U3CRhythmU3Ed__7_t17E6EC4C562042C7EA78801D0E1358C7B856DF53* __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method) ;
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<UnityEngine.Transform>::GetEnumerator()
inline Enumerator_t519AE1DAA64E517296768BEA2E732ED47F76A91D List_1_GetEnumerator_m01FCD3FC513065087F7E312BC9DE2D1C3FF655E5 (List_1_t991BBC5A1D51F59A450367DF944DAA207F22D06D* __this, const RuntimeMethod* method)
{
	return ((  Enumerator_t519AE1DAA64E517296768BEA2E732ED47F76A91D (*) (List_1_t991BBC5A1D51F59A450367DF944DAA207F22D06D*, const RuntimeMethod*))List_1_GetEnumerator_mD8294A7FA2BEB1929487127D476F8EC1CDC23BFC_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1/Enumerator<UnityEngine.Transform>::Dispose()
inline void Enumerator_Dispose_m9BF6C1C74CD711998DC8FAE5D6B8083586F5CFB5 (Enumerator_t519AE1DAA64E517296768BEA2E732ED47F76A91D* __this, const RuntimeMethod* method)
{
	((  void (*) (Enumerator_t519AE1DAA64E517296768BEA2E732ED47F76A91D*, const RuntimeMethod*))Enumerator_Dispose_mD9DC3E3C3697830A4823047AB29A77DBBB5ED419_gshared)(__this, method);
}
// T System.Collections.Generic.List`1/Enumerator<UnityEngine.Transform>::get_Current()
inline Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* Enumerator_get_Current_mCBBD283BB42C56D73B7C4194020EC95292B36129_inline (Enumerator_t519AE1DAA64E517296768BEA2E732ED47F76A91D* __this, const RuntimeMethod* method)
{
	return ((  Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* (*) (Enumerator_t519AE1DAA64E517296768BEA2E732ED47F76A91D*, const RuntimeMethod*))Enumerator_get_Current_m6330F15D18EE4F547C05DF9BF83C5EB710376027_gshared_inline)(__this, method);
}
// System.Text.RegularExpressions.Match System.Text.RegularExpressions.Regex::Match(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Match_tFBEBCF225BD8EA17BCE6CE3FE5C1BD8E3074105F* Regex_Match_mE3EC82B72BF82AA4B8749251C12C383047531972 (String_t* ___input0, String_t* ___pattern1, const RuntimeMethod* method) ;
// System.Boolean System.Text.RegularExpressions.Group::get_Success()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Group_get_Success_m4E0238EE4B1E7F927E2AF13E2E5901BCA92BE62F (Group_t26371E9136D6F43782C487B63C67C5FC4F472881* __this, const RuntimeMethod* method) ;
// System.String System.Text.RegularExpressions.Capture::get_Value()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Capture_get_Value_m1AB4193C2FC4B0D08AA34FECF10D03876D848BDC (Capture_tE11B735186DAFEE5F7A3BF5A739E9CCCE99DC24A* __this, const RuntimeMethod* method) ;
// System.Int32 System.Int32::Parse(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Int32_Parse_m273CA1A9C7717C99641291A95C543711C0202AF0 (String_t* ___s0, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,UnityEngine.GameObject>::Add(TKey,TValue)
inline void Dictionary_2_Add_mA5013CBA44F1B1DC6398B4430E25EE98A9C11FDF (Dictionary_2_t3ED995699F3E88D06E5DA7362BEB7584DBD61662* __this, int32_t ___key0, GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___value1, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t3ED995699F3E88D06E5DA7362BEB7584DBD61662*, int32_t, GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, const RuntimeMethod*))Dictionary_2_Add_mAF1EF7DA16BD70E252EA5C4B0F74DE519A02CBCD_gshared)(__this, ___key0, ___value1, method);
}
// System.Boolean System.Collections.Generic.List`1/Enumerator<UnityEngine.Transform>::MoveNext()
inline bool Enumerator_MoveNext_mBAA697FE341E389C86536D9444A3E4AC02109E87 (Enumerator_t519AE1DAA64E517296768BEA2E732ED47F76A91D* __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Enumerator_t519AE1DAA64E517296768BEA2E732ED47F76A91D*, const RuntimeMethod*))Enumerator_MoveNext_mE921CC8F29FBBDE7CC3209A0ED0D921D58D00BCB_gshared)(__this, method);
}
// System.Void System.Func`2<System.Collections.Generic.KeyValuePair`2<System.Int32,UnityEngine.GameObject>,System.Int32>::.ctor(System.Object,System.IntPtr)
inline void Func_2__ctor_mA491A7F78C17149807E1DEB0FA05A4C27E69DE14 (Func_2_t5EEB9DA1EC10E3B0AC9BE12D70E59948A16E8B3D* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (Func_2_t5EEB9DA1EC10E3B0AC9BE12D70E59948A16E8B3D*, RuntimeObject*, intptr_t, const RuntimeMethod*))Func_2__ctor_m68C2D09F33D72721D0E791A39ABD6F27A06312AD_gshared)(__this, ___object0, ___method1, method);
}
// System.Linq.IOrderedEnumerable`1<TSource> System.Linq.Enumerable::OrderBy<System.Collections.Generic.KeyValuePair`2<System.Int32,UnityEngine.GameObject>,System.Int32>(System.Collections.Generic.IEnumerable`1<TSource>,System.Func`2<TSource,TKey>)
inline RuntimeObject* Enumerable_OrderBy_TisKeyValuePair_2_tE51B4AA1B587AD85A79363114EB7C474634D1AD8_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m5DD492A958292F9AF5E5C1261E91006CFAEA1ACB (RuntimeObject* ___source0, Func_2_t5EEB9DA1EC10E3B0AC9BE12D70E59948A16E8B3D* ___keySelector1, const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (RuntimeObject*, Func_2_t5EEB9DA1EC10E3B0AC9BE12D70E59948A16E8B3D*, const RuntimeMethod*))Enumerable_OrderBy_TisKeyValuePair_2_tDC26B09C26BA829DDE331BCB6AF7C508C763D7A3_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m17A794CDB646851A0E5654D12FF41400929421E3_gshared)(___source0, ___keySelector1, method);
}
// System.Void RhythmObject::ActiveOrInactiveObjects(System.Collections.Generic.Dictionary`2<System.Int32,UnityEngine.GameObject>,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RhythmObject_ActiveOrInactiveObjects_m553C6F08242EE82359DF54DAF191A6B7FD63C4D2 (RhythmObject_t48B5812FD53B54DB2453283D026C825E88D880A3* __this, Dictionary_2_t3ED995699F3E88D06E5DA7362BEB7584DBD61662* ___objects0, bool ___enable1, const RuntimeMethod* method) ;
// System.Void RhythmObject/<>c__DisplayClass9_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass9_0__ctor_mA8FED2E97AB54B56ADCABFADA94A9D4AEC2F6F35 (U3CU3Ec__DisplayClass9_0_t30D08EC9E5627A79DF6BCDBEFCE7EF94B689FA89* __this, const RuntimeMethod* method) ;
// System.Collections.Generic.Dictionary`2/Enumerator<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Int32,UnityEngine.GameObject>::GetEnumerator()
inline Enumerator_tB528BCD318DDD3422B24D81EF0BF177F56B2E4FB Dictionary_2_GetEnumerator_m48AB1DC89BC633DFBA85999481CACE5CBDB6D4D7 (Dictionary_2_t3ED995699F3E88D06E5DA7362BEB7584DBD61662* __this, const RuntimeMethod* method)
{
	return ((  Enumerator_tB528BCD318DDD3422B24D81EF0BF177F56B2E4FB (*) (Dictionary_2_t3ED995699F3E88D06E5DA7362BEB7584DBD61662*, const RuntimeMethod*))Dictionary_2_GetEnumerator_m3F1620145BA0815B7C7CD648EF054558AA26556A_gshared)(__this, method);
}
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,UnityEngine.GameObject>::Dispose()
inline void Enumerator_Dispose_m9D681B3790175BA58928D0731C678FA8D3AC08E8 (Enumerator_tB528BCD318DDD3422B24D81EF0BF177F56B2E4FB* __this, const RuntimeMethod* method)
{
	((  void (*) (Enumerator_tB528BCD318DDD3422B24D81EF0BF177F56B2E4FB*, const RuntimeMethod*))Enumerator_Dispose_mAECCBE12C0427D7ACF88F82FA266F1AE37402565_gshared)(__this, method);
}
// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,UnityEngine.GameObject>::get_Current()
inline KeyValuePair_2_tE51B4AA1B587AD85A79363114EB7C474634D1AD8 Enumerator_get_Current_m0217E3869711E12C240F3BE879F1699162514F50_inline (Enumerator_tB528BCD318DDD3422B24D81EF0BF177F56B2E4FB* __this, const RuntimeMethod* method)
{
	return ((  KeyValuePair_2_tE51B4AA1B587AD85A79363114EB7C474634D1AD8 (*) (Enumerator_tB528BCD318DDD3422B24D81EF0BF177F56B2E4FB*, const RuntimeMethod*))Enumerator_get_Current_m90160D324DA0D9F5624A345F47D8E226A118911A_gshared_inline)(__this, method);
}
// System.Void RhythmObject/<>c__DisplayClass9_1::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass9_1__ctor_m7878B3D1FEDF7B79F6410B3D56ACDBA50F68ABA7 (U3CU3Ec__DisplayClass9_1_t45FC89DF84F4F0F19E36C3456C131ACA83E6358E* __this, const RuntimeMethod* method) ;
// TValue System.Collections.Generic.KeyValuePair`2<System.Int32,UnityEngine.GameObject>::get_Value()
inline GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* KeyValuePair_2_get_Value_mD4081DDFBF79080BB1E9CEDD9893305890320300_inline (KeyValuePair_2_tE51B4AA1B587AD85A79363114EB7C474634D1AD8* __this, const RuntimeMethod* method)
{
	return ((  GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* (*) (KeyValuePair_2_tE51B4AA1B587AD85A79363114EB7C474634D1AD8*, const RuntimeMethod*))KeyValuePair_2_get_Value_m8508BCECB0654E2E93B1A141382E2688ADE7EE7C_gshared_inline)(__this, method);
}
// DG.Tweening.Tween DG.Tweening.DOVirtual::DelayedCall(System.Single,DG.Tweening.TweenCallback,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Tween_t8CB06EBC48A5B6F5065C490E4F4909C18CE7983C* DOVirtual_DelayedCall_m14018BD265A6BB37019E19FB5076D693C1B60112 (float ___delay0, TweenCallback_t7C8B8A38E7B30905FF1B83C943256EF23617BB24* ___callback1, bool ___ignoreTimeScale2, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,UnityEngine.GameObject>::MoveNext()
inline bool Enumerator_MoveNext_m12F712A18AFF893F08B98E7DEC338D929F2745D8 (Enumerator_tB528BCD318DDD3422B24D81EF0BF177F56B2E4FB* __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Enumerator_tB528BCD318DDD3422B24D81EF0BF177F56B2E4FB*, const RuntimeMethod*))Enumerator_MoveNext_m4DC143BC57F14EDD85AB13B6D6F3B5D0E319B30E_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1<UnityEngine.Transform>::.ctor()
inline void List_1__ctor_mDC3E95DC5C927A867B9B42EDE1945F909B894268 (List_1_t991BBC5A1D51F59A450367DF944DAA207F22D06D* __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_t991BBC5A1D51F59A450367DF944DAA207F22D06D*, const RuntimeMethod*))List_1__ctor_m7F078BB342729BDF11327FD89D7872265328F690_gshared)(__this, method);
}
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,UnityEngine.GameObject>::.ctor()
inline void Dictionary_2__ctor_mEC9E9E9AF403DF7262870C6B7233848BE7458858 (Dictionary_2_t3ED995699F3E88D06E5DA7362BEB7584DBD61662* __this, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t3ED995699F3E88D06E5DA7362BEB7584DBD61662*, const RuntimeMethod*))Dictionary_2__ctor_m92E9AB321FBD7147CA109C822D99C8B0610C27B7_gshared)(__this, method);
}
// System.Boolean RhythmObject::ActiveBackGroundObject(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool RhythmObject_ActiveBackGroundObject_m14E7CAC6025E747200C89F65AFB36FE852587D25 (RhythmObject_t48B5812FD53B54DB2453283D026C825E88D880A3* __this, int32_t ___index0, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,UnityEngine.GameObject>::Clear()
inline void Dictionary_2_Clear_m92298CA3F2C40724B4D2D9E4D9C4122A70E0C686 (Dictionary_2_t3ED995699F3E88D06E5DA7362BEB7584DBD61662* __this, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t3ED995699F3E88D06E5DA7362BEB7584DBD61662*, const RuntimeMethod*))Dictionary_2_Clear_mE1EFF7C68491EE07D21EE9924475A559BF0A4773_gshared)(__this, method);
}
// System.Void RhythmObject/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_mB1613CC92DABEB4DDE071B721E5A53F9D1F4ACCF (U3CU3Ec_t548FF58F963A7E823CF0D96D17F3FCFD4EBF1A60* __this, const RuntimeMethod* method) ;
// TKey System.Collections.Generic.KeyValuePair`2<System.Int32,UnityEngine.GameObject>::get_Key()
inline int32_t KeyValuePair_2_get_Key_m9C6DABAD84B892AB2F79F0AFB1497258CF3CC79A_inline (KeyValuePair_2_tE51B4AA1B587AD85A79363114EB7C474634D1AD8* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (KeyValuePair_2_tE51B4AA1B587AD85A79363114EB7C474634D1AD8*, const RuntimeMethod*))KeyValuePair_2_get_Key_mF0E6A8A455FA71BC8EA94E39C8848FB35A836841_gshared_inline)(__this, method);
}
// T UnityEngine.Component::GetComponent<UnityEngine.AudioSource>()
inline AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* Component_GetComponent_TisAudioSource_t871AC2272F896738252F04EE949AEF5B241D3299_m42DA4DEA19EB60D80CBED7413ADEB27FA033C77B (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method)
{
	return ((  AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* (*) (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m7181F81CAEC2CF53F5D2BC79B7425C16E1F80D33_gshared)(__this, method);
}
// System.Boolean SoundController::IsSupportedDevice()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool SoundController_IsSupportedDevice_mC5BCA9F628E9E1B7FAA607A7757E6522817D4694 (SoundController_tA53F7251931CF12B1E75D0DF2F56D42DBFC61071* __this, const RuntimeMethod* method) ;
// System.Boolean SoundController::IsHighAccuracyDeviceEarthPosition()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool SoundController_IsHighAccuracyDeviceEarthPosition_mD81411922CB1CF9314A1821145CDB9F10ED7B041 (SoundController_tA53F7251931CF12B1E75D0DF2F56D42DBFC61071* __this, const RuntimeMethod* method) ;
// System.Boolean SoundController::IsExistGeoSpatialAnchor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool SoundController_IsExistGeoSpatialAnchor_m320F50A3BE3A48104C91FC3B650356F9651157D0 (SoundController_tA53F7251931CF12B1E75D0DF2F56D42DBFC61071* __this, const RuntimeMethod* method) ;
// System.Void SoundController::Adjust()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SoundController_Adjust_m98A8BBC166CA658F98615C7D8E53DC614CAD3097 (SoundController_tA53F7251931CF12B1E75D0DF2F56D42DBFC61071* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.AudioSource::Play()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioSource_Play_m95DF07111C61D0E0F00257A00384D31531D590C3 (AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.AudioSource::Stop()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioSource_Stop_m318F17F17A147C77FF6E0A5A7A6BE057DB90F537 (AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Transform::get_localScale()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Transform_get_localScale_m804A002A53A645CDFCD15BB0F37209162720363F (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, const RuntimeMethod* method) ;
// DG.Tweening.Core.TweenerCore`3<UnityEngine.Vector3,UnityEngine.Vector3,DG.Tweening.Plugins.Options.VectorOptions> DG.Tweening.ShortcutExtensions::DOScale(UnityEngine.Transform,UnityEngine.Vector3,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TweenerCore_3_tCD82DFC45FB71C681FA8659EA63A7D7D16BFFE77* ShortcutExtensions_DOScale_mF7AC6EA0FD71B399776D758AD57B94F18A47F580 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___target0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___endValue1, float ___duration2, const RuntimeMethod* method) ;
// T DG.Tweening.TweenSettingsExtensions::SetLoops<DG.Tweening.Core.TweenerCore`3<UnityEngine.Vector3,UnityEngine.Vector3,DG.Tweening.Plugins.Options.VectorOptions>>(T,System.Int32,DG.Tweening.LoopType)
inline TweenerCore_3_tCD82DFC45FB71C681FA8659EA63A7D7D16BFFE77* TweenSettingsExtensions_SetLoops_TisTweenerCore_3_tCD82DFC45FB71C681FA8659EA63A7D7D16BFFE77_m8F1A8D75E681054AF18A9991A7FAF2903DFAA265 (TweenerCore_3_tCD82DFC45FB71C681FA8659EA63A7D7D16BFFE77* ___t0, int32_t ___loops1, int32_t ___loopType2, const RuntimeMethod* method)
{
	return ((  TweenerCore_3_tCD82DFC45FB71C681FA8659EA63A7D7D16BFFE77* (*) (TweenerCore_3_tCD82DFC45FB71C681FA8659EA63A7D7D16BFFE77*, int32_t, int32_t, const RuntimeMethod*))TweenSettingsExtensions_SetLoops_TisRuntimeObject_m47D6D13211B8E98EC93621D5ACA6828C463AFBF9_gshared)(___t0, ___loops1, ___loopType2, method);
}
// System.Collections.IEnumerator ObjectRotation::RotateObject()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ObjectRotation_RotateObject_m516940D265A7CADE543477F770BFA9CA7741A554 (ObjectRotation_t197E99EE089921C164133658B691481669871B56* __this, const RuntimeMethod* method) ;
// System.Void ObjectRotation/<RotateObject>d__1::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CRotateObjectU3Ed__1__ctor_m8977842D9F34B0D2D5139C409FC9EC37484EF7DB (U3CRotateObjectU3Ed__1_tD8B0EC501AD49D7C2C49387386B19B92F4F10673* __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method) ;
// DG.Tweening.Core.TweenerCore`3<UnityEngine.Quaternion,UnityEngine.Vector3,DG.Tweening.Plugins.Options.QuaternionOptions> DG.Tweening.ShortcutExtensions::DORotate(UnityEngine.Transform,UnityEngine.Vector3,System.Single,DG.Tweening.RotateMode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TweenerCore_3_t392C54729BB024F5802F8E205C583653C4E886E3* ShortcutExtensions_DORotate_mA2804C1A3E4780383111262752CC7056BBC7D470 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___target0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___endValue1, float ___duration2, int32_t ___mode3, const RuntimeMethod* method) ;
// T[] UnityEngine.Component::GetComponentsInChildren<UnityEngine.Renderer>()
inline RendererU5BU5D_t32FDD782F67917B2291EA4FF242719877440A02A* Component_GetComponentsInChildren_TisRenderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF_m35AC34F858BD2F34770712CD020AA0518D9409C7 (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method)
{
	return ((  RendererU5BU5D_t32FDD782F67917B2291EA4FF242719877440A02A* (*) (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*, const RuntimeMethod*))Component_GetComponentsInChildren_TisRuntimeObject_m1F5B6FC0689B07D4FAAC0C605D9B2933A9B32543_gshared)(__this, method);
}
// System.Collections.Generic.List`1<TSource> System.Linq.Enumerable::ToList<UnityEngine.Renderer>(System.Collections.Generic.IEnumerable`1<TSource>)
inline List_1_tD435DCC2A88E36DFC551EA5392CE0182F0C50E93* Enumerable_ToList_TisRenderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF_m629D4020B77CF03738959979523825DE9A307DC3 (RuntimeObject* ___source0, const RuntimeMethod* method)
{
	return ((  List_1_tD435DCC2A88E36DFC551EA5392CE0182F0C50E93* (*) (RuntimeObject*, const RuntimeMethod*))Enumerable_ToList_TisRuntimeObject_m6456D63764F29E6B5B2422C3DE25113577CF51EE_gshared)(___source0, method);
}
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<UnityEngine.Renderer>::GetEnumerator()
inline Enumerator_t4B5D90D1324DE6E043169A1E8DCD75512559AFA7 List_1_GetEnumerator_mC86A1EF9E784B7E7B5C00025383C6381B831F88C (List_1_tD435DCC2A88E36DFC551EA5392CE0182F0C50E93* __this, const RuntimeMethod* method)
{
	return ((  Enumerator_t4B5D90D1324DE6E043169A1E8DCD75512559AFA7 (*) (List_1_tD435DCC2A88E36DFC551EA5392CE0182F0C50E93*, const RuntimeMethod*))List_1_GetEnumerator_mD8294A7FA2BEB1929487127D476F8EC1CDC23BFC_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1/Enumerator<UnityEngine.Renderer>::Dispose()
inline void Enumerator_Dispose_m39794B37E9AE88ED22C03824DE8D637C0DADBAF0 (Enumerator_t4B5D90D1324DE6E043169A1E8DCD75512559AFA7* __this, const RuntimeMethod* method)
{
	((  void (*) (Enumerator_t4B5D90D1324DE6E043169A1E8DCD75512559AFA7*, const RuntimeMethod*))Enumerator_Dispose_mD9DC3E3C3697830A4823047AB29A77DBBB5ED419_gshared)(__this, method);
}
// T System.Collections.Generic.List`1/Enumerator<UnityEngine.Renderer>::get_Current()
inline Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF* Enumerator_get_Current_mF219FEB0F2097ED593A4E6E2283167335AFBA4B6_inline (Enumerator_t4B5D90D1324DE6E043169A1E8DCD75512559AFA7* __this, const RuntimeMethod* method)
{
	return ((  Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF* (*) (Enumerator_t4B5D90D1324DE6E043169A1E8DCD75512559AFA7*, const RuntimeMethod*))Enumerator_get_Current_m6330F15D18EE4F547C05DF9BF83C5EB710376027_gshared_inline)(__this, method);
}
// UnityEngine.Transform UnityEngine.Transform::get_parent()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* Transform_get_parent_m65354E28A4C94EC00EBCF03532F7B0718380791E (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Renderer::set_material(UnityEngine.Material)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Renderer_set_material_m21E88977071E0A914D62F3D9CFF0193B3117C45A (Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF* __this, Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___value0, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.List`1/Enumerator<UnityEngine.Renderer>::MoveNext()
inline bool Enumerator_MoveNext_m36545FD9B7C5DA66EAD80FD8813D279003BA8749 (Enumerator_t4B5D90D1324DE6E043169A1E8DCD75512559AFA7* __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Enumerator_t4B5D90D1324DE6E043169A1E8DCD75512559AFA7*, const RuntimeMethod*))Enumerator_MoveNext_mE921CC8F29FBBDE7CC3209A0ED0D921D58D00BCB_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1<UnityEngine.Renderer>::.ctor()
inline void List_1__ctor_m803E10F7A50EB22BF82C0C1AB251D5407B4496DE (List_1_tD435DCC2A88E36DFC551EA5392CE0182F0C50E93* __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_tD435DCC2A88E36DFC551EA5392CE0182F0C50E93*, const RuntimeMethod*))List_1__ctor_m7F078BB342729BDF11327FD89D7872265328F690_gshared)(__this, method);
}
// System.Void SROptions::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SROptions__ctor_m2658C7CC2E53229F15959A748C31F5B638661753 (SROptions_t00DA5107C80F05EB2730577E1FCA535FAD5F4A6F* __this, const RuntimeMethod* method) ;
// T SRF.Service.SRServiceManager::GetService<SRDebugger.Internal.InternalOptionsRegistry>()
inline InternalOptionsRegistry_t37F5D710767EF2F74CF225D94C602B84151A8F96* SRServiceManager_GetService_TisInternalOptionsRegistry_t37F5D710767EF2F74CF225D94C602B84151A8F96_m9C1B26F6376FD4144BC139300A02AC30A89EF6DC (const RuntimeMethod* method)
{
	return ((  InternalOptionsRegistry_t37F5D710767EF2F74CF225D94C602B84151A8F96* (*) (const RuntimeMethod*))SRServiceManager_GetService_TisRuntimeObject_mCECA3E42BBB83185086FEC067BAE634309D9A6FD_gshared)(method);
}
// SROptions SROptions::get_Current()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR SROptions_t00DA5107C80F05EB2730577E1FCA535FAD5F4A6F* SROptions_get_Current_m297117B6D80C587A2A12BC79EFD5ADE46D591C4B_inline (const RuntimeMethod* method) ;
// System.Void SRDebugger.Internal.InternalOptionsRegistry::AddOptionContainer(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InternalOptionsRegistry_AddOptionContainer_mF55C2902BBBFE5D741EBB38A3074BF47175FAC2D (InternalOptionsRegistry_t37F5D710767EF2F74CF225D94C602B84151A8F96* __this, RuntimeObject* ___obj0, const RuntimeMethod* method) ;
// System.Delegate System.Delegate::Combine(System.Delegate,System.Delegate)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Delegate_t* Delegate_Combine_m1F725AEF318BE6F0426863490691A6F4606E7D00 (Delegate_t* ___a0, Delegate_t* ___b1, const RuntimeMethod* method) ;
// System.Delegate System.Delegate::Remove(System.Delegate,System.Delegate)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Delegate_t* Delegate_Remove_m8B7DD5661308FA972E23CA1CC3FC9CEB355504E3 (Delegate_t* ___source0, Delegate_t* ___value1, const RuntimeMethod* method) ;
// System.Void SROptionsPropertyChanged::Invoke(System.Object,System.String)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void SROptionsPropertyChanged_Invoke_mBED662C3470F04FCEA839FE5D39A86BF62C22CFF_inline (SROptionsPropertyChanged_t53B79AE547753261AFBD1916519E6A1074669CA7* __this, RuntimeObject* ___sender0, String_t* ___propertyName1, const RuntimeMethod* method) ;
// System.Void System.ComponentModel.PropertyChangedEventArgs::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PropertyChangedEventArgs__ctor_mE3C901440BE057E5F17062BA316019C0B53A39B5 (PropertyChangedEventArgs_tFA01343D8F2BD799951B40A3EBF4A6B38EE63321* __this, String_t* ___propertyName0, const RuntimeMethod* method) ;
// System.Void System.ComponentModel.PropertyChangedEventHandler::Invoke(System.Object,System.ComponentModel.PropertyChangedEventArgs)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void PropertyChangedEventHandler_Invoke_m040B3056C279FDDC4EC678519D5D415771905298_inline (PropertyChangedEventHandler_tF1250C146BE6FB43477D29C5D18A10B6329419DA* __this, RuntimeObject* ___sender0, PropertyChangedEventArgs_tFA01343D8F2BD799951B40A3EBF4A6B38EE63321* ___e1, const RuntimeMethod* method) ;
// System.Void SROptions::add_InterfacePropertyChangedEventHandler(System.ComponentModel.PropertyChangedEventHandler)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SROptions_add_InterfacePropertyChangedEventHandler_m21A6CBB25DFAD5BE13C1FBD23CDCEBC42AED9486 (SROptions_t00DA5107C80F05EB2730577E1FCA535FAD5F4A6F* __this, PropertyChangedEventHandler_tF1250C146BE6FB43477D29C5D18A10B6329419DA* ___value0, const RuntimeMethod* method) ;
// System.Void SROptions::remove_InterfacePropertyChangedEventHandler(System.ComponentModel.PropertyChangedEventHandler)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SROptions_remove_InterfacePropertyChangedEventHandler_m57D2972F000CDECCB3EAC82AD237736BD311D7A6 (SROptions_t00DA5107C80F05EB2730577E1FCA535FAD5F4A6F* __this, PropertyChangedEventHandler_tF1250C146BE6FB43477D29C5D18A10B6329419DA* ___value0, const RuntimeMethod* method) ;
// System.Void System.ComponentModel.DisplayNameAttribute::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DisplayNameAttribute__ctor_m396F07353E80428B4AEB85DC66F5B9380A077AE3 (DisplayNameAttribute_tECBA9AC4CCBE61186E2B3C397C93AAFA5A2631E8* __this, String_t* ___displayName0, const RuntimeMethod* method) ;
// System.Void SRDebugger.IncrementAttribute::.ctor(System.Double)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IncrementAttribute__ctor_m086EE0EF33A7B9EBFD4C2157747DCC418CF62020 (IncrementAttribute_t4EEF3E3CB6B83DC54346F0AB93DEA5102A661150* __this, double ___increment0, const RuntimeMethod* method) ;
// System.Void SRDebugger.NumberRangeAttribute::.ctor(System.Double,System.Double)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NumberRangeAttribute__ctor_m573A8F52873A30F329617752AE167CC4775E267F (NumberRangeAttribute_t36C0A939C7C6DC0971357D6A5BC6B4D8FD570585* __this, double ___min0, double ___max1, const RuntimeMethod* method) ;
// System.Void SRDebugger.SortAttribute::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SortAttribute__ctor_m8C2E87A699EBF6FFE066341167159DF0F614AD0F (SortAttribute_t745731D856AA0915EBA410630E554D11F6CCADBA* __this, int32_t ___priority0, const RuntimeMethod* method) ;
// UnityEngine.Rect UnityEngine.Screen::get_safeArea()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D Screen_get_safeArea_m2ADAD6C36CC5DB40CC2DAD300DD1DF7CA4DF2525 (const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Rect::op_Inequality(UnityEngine.Rect,UnityEngine.Rect)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Rect_op_Inequality_mB5D7316EB50B1DDA9324F4BE6741DFF6A673137D (Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D ___lhs0, Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D ___rhs1, const RuntimeMethod* method) ;
// System.Void Google.XR.ARCoreExtensions.Samples.Geospatial.SafeAreaScaler::MatchRectTransformToSafeArea()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SafeAreaScaler_MatchRectTransformToSafeArea_m04E6A9A1444C10EDDC3392285A1C5BE523BE8F64 (SafeAreaScaler_t7FFEE4D34FEA32394B9181D42E522BFFD1E4BCE8* __this, const RuntimeMethod* method) ;
// T UnityEngine.Component::GetComponent<UnityEngine.RectTransform>()
inline RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* Component_GetComponent_TisRectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5_m0640480E7E38BB88B0D1F6AD59E697C8EE6AAFA4 (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method)
{
	return ((  RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* (*) (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m7181F81CAEC2CF53F5D2BC79B7425C16E1F80D33_gshared)(__this, method);
}
// System.Single UnityEngine.Rect::get_xMin()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Rect_get_xMin_mE89C40702926D016A633399E20DB9501E251630D (Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D* __this, const RuntimeMethod* method) ;
// System.Single UnityEngine.Rect::get_yMax()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Rect_get_yMax_mBC37BEE1CD632AADD8B9EAF9FE3BA143F79CAF8E (Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Vector2::.ctor(System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* __this, float ___x0, float ___y1, const RuntimeMethod* method) ;
// System.Single UnityEngine.Rect::get_xMax()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Rect_get_xMax_m2339C7D2FCDA98A9B007F815F6E2059BA6BE425F (Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D* __this, const RuntimeMethod* method) ;
// System.Single UnityEngine.Rect::get_yMin()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Rect_get_yMin_mB19848FB25DE61EDF958F7A22CFDD86DE103062F (Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.RectTransform::set_offsetMin(UnityEngine.Vector2)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RectTransform_set_offsetMin_m07F38B4105C7CA9CC9FBDC9ED0DB008602880AB9 (RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* __this, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.RectTransform::set_offsetMax(UnityEngine.Vector2)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RectTransform_set_offsetMax_m5514D09D86516F2C0E25FA6D11A3A4274D3D002D (RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* __this, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___value0, const RuntimeMethod* method) ;
// System.Void Google.XR.ARCoreExtensions.Samples.Geospatial.GeospatialAnchorHistory::.ctor(System.Double,System.Double,System.Double,UnityEngine.Quaternion,UnityEngine.Texture2D)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GeospatialAnchorHistory__ctor_m81E444540B48488C9F15D534E327744B291DFD50 (GeospatialAnchorHistory_t6908A396462F1450B5999D2948632194CD812A5C* __this, double ___latitude0, double ___longitude1, double ___altitude2, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___heading3, Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* ___texture4, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<Google.XR.ARCoreExtensions.Samples.Geospatial.GeospatialAnchorHistory>::.ctor()
inline void List_1__ctor_mED28D7886C86087D0894D3D73A471B948B145E83 (List_1_t129F965E3A52C7ACA849FAEC97997D9357ED21A5* __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_t129F965E3A52C7ACA849FAEC97997D9357ED21A5*, const RuntimeMethod*))List_1__ctor_mED28D7886C86087D0894D3D73A471B948B145E83_gshared)(__this, method);
}
// System.Void UnityEngine.Screen::set_autorotateToLandscapeLeft(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Screen_set_autorotateToLandscapeLeft_mEBF1EEDF3BCD85A85FEF5B59ECEE40D6A73983D0 (bool ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Screen::set_autorotateToLandscapeRight(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Screen_set_autorotateToLandscapeRight_m259F67F2F38E5E28A7A5ABBEA5CFE9650DD7B184 (bool ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Screen::set_autorotateToPortraitUpsideDown(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Screen_set_autorotateToPortraitUpsideDown_m322363C3E0347AF6C62240BD814C8719CF54AF12 (bool ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Screen::set_orientation(UnityEngine.ScreenOrientation)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Screen_set_orientation_mFCC880DDE7D3916DD8DA84E546F4743EEE773C4D (int32_t ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Application::set_targetFrameRate(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Application_set_targetFrameRate_mB90EEA60DAE55CD71C38D4B7DFDBE2B34EA6B46F (int32_t ___value0, const RuntimeMethod* method) ;
// System.Collections.IEnumerator Google.XR.ARCoreExtensions.Samples.Geospatial.GeospatialController::StartLocationService()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* GeospatialController_StartLocationService_m72676812B8A1C07C07EAB8574995C827CF57DBB8 (GeospatialController_t69A2BBD44F5A190BB256B888033F5297AF0A0D2F* __this, const RuntimeMethod* method) ;
// System.Void Google.XR.ARCoreExtensions.Samples.Geospatial.GeospatialController::SwitchToARView(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GeospatialController_SwitchToARView_mFB94E97C62D009E13324C261E04900D34D47410E (GeospatialController_t69A2BBD44F5A190BB256B888033F5297AF0A0D2F* __this, bool ___enable0, const RuntimeMethod* method) ;
// System.Void UnityEngine.MonoBehaviour::StopCoroutine(System.Collections.IEnumerator)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MonoBehaviour_StopCoroutine_mF9E93B82091E804595BE13AA29F9AB7517F7E04A (MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71* __this, RuntimeObject* ___routine0, const RuntimeMethod* method) ;
// UnityEngine.LocationService UnityEngine.Input::get_location()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR LocationService_tF2F2720FE2C07562EBFD128889F9A99F4B41B1B2* Input_get_location_m1D1FA0938E5B83C46A666CE78D95A58B39164DB5 (const RuntimeMethod* method) ;
// System.Void UnityEngine.LocationService::Stop()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LocationService_Stop_mB9332CB653E7A7CE6AE07240EA6C0B6C9AEC0D96 (LocationService_tF2F2720FE2C07562EBFD128889F9A99F4B41B1B2* __this, const RuntimeMethod* method) ;
// System.Void Google.XR.ARCoreExtensions.Samples.Geospatial.GeospatialController::LifecycleUpdate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GeospatialController_LifecycleUpdate_m9DF865831BF6070D17D792ABD8948E03B692AC9C (GeospatialController_t69A2BBD44F5A190BB256B888033F5297AF0A0D2F* __this, const RuntimeMethod* method) ;
// System.Single UnityEngine.Time::get_deltaTime()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Time_get_deltaTime_mC3195000401F0FD167DD2F948FD2BC58330D0865 (const RuntimeMethod* method) ;
// Google.XR.ARCoreExtensions.EarthState Google.XR.ARCoreExtensions.AREarthManager::get_EarthState()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t AREarthManager_get_EarthState_m00405B03AE94D0CFB2E90596C028A35250517D38 (AREarthManager_tAC32FF06F084622687D9FB4837506A704301D0F0* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Debug::LogWarning(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_LogWarning_m33EF1B897E0C7C6FF538989610BFAFFEF4628CA9 (RuntimeObject* ___message0, const RuntimeMethod* method) ;
// UnityEngine.LocationServiceStatus UnityEngine.LocationService::get_status()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t LocationService_get_status_m25B7C4012B9529265D9746BB73ED689737E9C9CD (LocationService_tF2F2720FE2C07562EBFD128889F9A99F4B41B1B2* __this, const RuntimeMethod* method) ;
// UnityEngine.EventSystems.EventSystem UnityEngine.EventSystems.EventSystem::get_current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR EventSystem_t61C51380B105BE9D2C39C4F15B7E655659957707* EventSystem_get_current_mC87C69FB418563DC2A571A10E2F9DB59A6785016 (const RuntimeMethod* method) ;
// System.Int32 UnityEngine.Touch::get_fingerId()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Touch_get_fingerId_mC1DCE93BFA0574960A3AE5329AE6C5F7E06962BD (Touch_t03E51455ED508492B3F278903A0114FA0E87B417* __this, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.EventSystems.EventSystem::IsPointerOverGameObject(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool EventSystem_IsPointerOverGameObject_m238732B4FDEA343976D798FF04DB34C3221243C2 (EventSystem_t61C51380B105BE9D2C39C4F15B7E655659957707* __this, int32_t ___pointerId0, const RuntimeMethod* method) ;
// System.Void Google.XR.ARCoreExtensions.Samples.Geospatial.GeospatialController::HandleScreenTap(UnityEngine.Vector2)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GeospatialController_HandleScreenTap_mCA8A8A66E4DCC3981E2FB44F75ACEEFA66FF606D (GeospatialController_t69A2BBD44F5A190BB256B888033F5297AF0A0D2F* __this, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___position0, const RuntimeMethod* method) ;
// System.String System.Environment::get_NewLine()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Environment_get_NewLine_m8BF68A4EFDAFFB66500984CE779629811BA98FFF (const RuntimeMethod* method) ;
// System.String System.Double::ToString(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Double_ToString_m70EC76E1DAD7E8B5B47AF9292189BF3711B24B75 (double* __this, String_t* ___format0, const RuntimeMethod* method) ;
// System.String System.String::Format(System.String,System.Object[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Format_m918500C1EFB475181349A79989BB79BB36102894 (String_t* ___format0, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___args1, const RuntimeMethod* method) ;
// UnityEngine.Camera UnityEngine.Camera::get_main()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* Camera_get_main_m52C992F18E05355ABB9EEB64A4BF2215E12762DF (const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector2::op_Implicit(UnityEngine.Vector2)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector2_op_Implicit_m6D9CABB2C791A192867D7A4559D132BE86DD3EB7_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___v0, const RuntimeMethod* method) ;
// UnityEngine.Ray UnityEngine.Camera::ScreenPointToRay(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Ray_t2B1742D7958DC05BDC3EFC7461D3593E1430DC00 Camera_ScreenPointToRay_m2887B9A49880B7AB670C57D66B67D6A6689FE315 (Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___pos0, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Physics::Raycast(UnityEngine.Ray,UnityEngine.RaycastHit&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Physics_Raycast_mCAC9F02A1AAB49E16B384EBC8318E2DF30F4B0E5 (Ray_t2B1742D7958DC05BDC3EFC7461D3593E1430DC00 ___ray0, RaycastHit_t6F30BD0B38B56401CA833A1B87BD74F2ACD2F2B5* ___hitInfo1, const RuntimeMethod* method) ;
// UnityEngine.Collider UnityEngine.RaycastHit::get_collider()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* RaycastHit_get_collider_m84B160439BBEAB6D9E94B799F720E25C9E2D444D (RaycastHit_t6F30BD0B38B56401CA833A1B87BD74F2ACD2F2B5* __this, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Component::CompareTag(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Component_CompareTag_mE6F8897E84F12DF12D302FFC4D58204D51096FC5 (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, String_t* ___tag0, const RuntimeMethod* method) ;
// System.Void NotesGenerator::OnStartButton()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NotesGenerator_OnStartButton_m3C7B8F1D85B536F8F59F95E6BA0D01BBC5E1C5E4 (NotesGenerator_tD968B1468A55A495385ACE41CDC9423D02852B91* __this, const RuntimeMethod* method) ;
// System.Collections.IEnumerator Google.XR.ARCoreExtensions.Samples.Geospatial.GeospatialController::AvailabilityCheck()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* GeospatialController_AvailabilityCheck_mBD33DAAFFBDF7259087853B4298004DAD5D86519 (GeospatialController_t69A2BBD44F5A190BB256B888033F5297AF0A0D2F* __this, const RuntimeMethod* method) ;
// System.Void Google.XR.ARCoreExtensions.Samples.Geospatial.GeospatialController/<AvailabilityCheck>d__31::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CAvailabilityCheckU3Ed__31__ctor_mD183DE5D80C639AB22A718B0337C330F2D92EE02 (U3CAvailabilityCheckU3Ed__31_t6354B82010109F309788B4A0FF01E47D13B06594* __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method) ;
// System.Void Google.XR.ARCoreExtensions.Samples.Geospatial.GeospatialController/<StartLocationService>d__32::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CStartLocationServiceU3Ed__32__ctor_mEFB95F2ED6B200E13A61D078F995D4BF3AF4CF01 (U3CStartLocationServiceU3Ed__32_tD9DDF9E93BC369B8B82B00FE287C67EEC056246A* __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Input::GetKeyUp(UnityEngine.KeyCode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Input_GetKeyUp_m9A962E395811A9901E7E05F267E198A533DBEF2F (int32_t ___key0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Application::Quit()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Application_Quit_mE304382DB9A6455C2A474C8F364C7387F37E9281 (const RuntimeMethod* method) ;
// System.Void UnityEngine.Screen::set_sleepTimeout(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Screen_set_sleepTimeout_mB375970159A73BB484A2B5E62A943330B83ABF9A (int32_t ___value0, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<UnityEngine.GameObject>::.ctor()
inline void List_1__ctor_m447372C1EF7141193B93090A77395B786C72C7BC (List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B*, const RuntimeMethod*))List_1__ctor_m7F078BB342729BDF11327FD89D7872265328F690_gshared)(__this, method);
}
// System.Collections.IEnumerator UnityEngine.XR.ARFoundation.ARSession::CheckAvailability()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ARSession_CheckAvailability_m7090FD96E8580EB3E6CAB97B8344BF845B254D0A (const RuntimeMethod* method) ;
// System.Collections.IEnumerator UnityEngine.XR.ARFoundation.ARSession::Install()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ARSession_Install_m9C4DCECEA000E16F4992376B7E40DA0C95B58166 (const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Android.Permission::HasUserAuthorizedPermission(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Permission_HasUserAuthorizedPermission_mF4C90E13124E28F6F672200E489CC25A9B645B8B (String_t* ___permission0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Android.Permission::RequestUserPermission(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Permission_RequestUserPermission_mF9CF3A21AAF34B311137C4D00B3AD6A6C2694242 (String_t* ___permission0, const RuntimeMethod* method) ;
// UnityEngine.LocationInfo UnityEngine.LocationService::get_lastData()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR LocationInfo_tBFD49220A54B71CDF564F61822F7B8D524465441 LocationService_get_lastData_m50C68F3DFB23894CF519F00BBA9D72146EE9345F (LocationService_tF2F2720FE2C07562EBFD128889F9A99F4B41B1B2* __this, const RuntimeMethod* method) ;
// System.Single UnityEngine.LocationInfo::get_latitude()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float LocationInfo_get_latitude_mAF0A46443555AF18EA3C516292CB92B1669CA863 (LocationInfo_tBFD49220A54B71CDF564F61822F7B8D524465441* __this, const RuntimeMethod* method) ;
// System.Single UnityEngine.LocationInfo::get_longitude()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float LocationInfo_get_longitude_mCB720DD0E139B7C614F78D40595E1BBF1F5433A2 (LocationInfo_tBFD49220A54B71CDF564F61822F7B8D524465441* __this, const RuntimeMethod* method) ;
// Google.XR.ARCoreExtensions.VpsAvailabilityPromise Google.XR.ARCoreExtensions.AREarthManager::CheckVpsAvailability(System.Double,System.Double)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR VpsAvailabilityPromise_tD7DB90CD6085F0BF774A6E6D2B92DE41780A47C1* AREarthManager_CheckVpsAvailability_m05CD87D382FD14B2014B2A87FC0687B765EBC543 (double ___latitude0, double ___longitude1, const RuntimeMethod* method) ;
// System.Void UnityEngine.Debug::LogFormat(System.String,System.Object[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_LogFormat_mD555556327B42AA3482D077EFAEB16B0AFDF72C7 (String_t* ___format0, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___args1, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.LocationService::get_isEnabledByUser()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool LocationService_get_isEnabledByUser_m78FE3A38B1101BAF658E259C1A6B4CD9A008DCAE (LocationService_tF2F2720FE2C07562EBFD128889F9A99F4B41B1B2* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.LocationService::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LocationService_Start_mC2A90619923D4BEB5F9B5CCD95F317B98D67AF3A (LocationService_tF2F2720FE2C07562EBFD128889F9A99F4B41B1B2* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Debug::LogWarningFormat(System.String,System.Object[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_LogWarningFormat_mD8224DEBCB6050F4E2BF55151F0C6A29B87DEFBC (String_t* ___format0, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___args1, const RuntimeMethod* method) ;
// System.Void System.Array::Clear(System.Array,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Array_Clear_m50BAA3751899858B097D3FF2ED31F284703FE5CB (RuntimeArray* ___array0, int32_t ___index1, int32_t ___length2, const RuntimeMethod* method) ;
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
// UnityEngine.GameObject AnchorCreator::get_AnchorPrefab()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* AnchorCreator_get_AnchorPrefab_mBBAF7805E9D9F8D79408EE642D153BC76306B25A (AnchorCreator_tBBEE94135B5183E0A8EE52FB00513F69C7C980ED* __this, const RuntimeMethod* method) 
{
	{
		// get => m_AnchorPrefab;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0 = __this->___m_AnchorPrefab_4;
		return L_0;
	}
}
// System.Void AnchorCreator::set_AnchorPrefab(UnityEngine.GameObject)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AnchorCreator_set_AnchorPrefab_m53CC9CC3022C713826B44536B48B462C8A1FACFF (AnchorCreator_tBBEE94135B5183E0A8EE52FB00513F69C7C980ED* __this, GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___value0, const RuntimeMethod* method) 
{
	{
		// set => m_AnchorPrefab = value;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0 = ___value0;
		__this->___m_AnchorPrefab_4 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_AnchorPrefab_4), (void*)L_0);
		return;
	}
}
// System.Void AnchorCreator::RemoveAllAnchors()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AnchorCreator_RemoveAllAnchors_m6BA302DD9EECA47969FD3F6E5397441DCB09ED21 (AnchorCreator_tBBEE94135B5183E0A8EE52FB00513F69C7C980ED* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_Dispose_m8A7D84A46E830A9A7C690AFD40780E721E0212D3_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_MoveNext_mE9F6469E9C52AF5A301EC8FEF983A3C5BFBF2C4F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_get_Current_m765B5B047B9C59BB1A6DF6B8B884A1714DF83060_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Clear_m5FC367B31C239426FA8CCE3EEB6D76AA2684BCAC_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_GetEnumerator_mEE1B2EFD76218372C2F754E07BFDE6CA16244502_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Enumerator_t931CB0AD3EC6D604C0583DE600B7B530E43D9054 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// foreach (var anchor in m_AnchorPoints)
		List_1_t5C2EBF017989E44F3D1D11AF502E10F6F8D9AB53* L_0 = __this->___m_AnchorPoints_6;
		NullCheck(L_0);
		Enumerator_t931CB0AD3EC6D604C0583DE600B7B530E43D9054 L_1;
		L_1 = List_1_GetEnumerator_mEE1B2EFD76218372C2F754E07BFDE6CA16244502(L_0, List_1_GetEnumerator_mEE1B2EFD76218372C2F754E07BFDE6CA16244502_RuntimeMethod_var);
		V_0 = L_1;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0025:
			{// begin finally (depth: 1)
				Enumerator_Dispose_m8A7D84A46E830A9A7C690AFD40780E721E0212D3((&V_0), Enumerator_Dispose_m8A7D84A46E830A9A7C690AFD40780E721E0212D3_RuntimeMethod_var);
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				goto IL_001a_1;
			}

IL_000e_1:
			{
				// foreach (var anchor in m_AnchorPoints)
				ARAnchor_t832D3D366D3F1D43F995A298974D4EDABACC0E06* L_2;
				L_2 = Enumerator_get_Current_m765B5B047B9C59BB1A6DF6B8B884A1714DF83060_inline((&V_0), Enumerator_get_Current_m765B5B047B9C59BB1A6DF6B8B884A1714DF83060_RuntimeMethod_var);
				// Destroy(anchor);
				il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
				Object_Destroy_mE97D0A766419A81296E8D4E5C23D01D3FE91ACBB(L_2, NULL);
			}

IL_001a_1:
			{
				// foreach (var anchor in m_AnchorPoints)
				bool L_3;
				L_3 = Enumerator_MoveNext_mE9F6469E9C52AF5A301EC8FEF983A3C5BFBF2C4F((&V_0), Enumerator_MoveNext_mE9F6469E9C52AF5A301EC8FEF983A3C5BFBF2C4F_RuntimeMethod_var);
				if (L_3)
				{
					goto IL_000e_1;
				}
			}
			{
				goto IL_0033;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0033:
	{
		// m_AnchorPoints.Clear();
		List_1_t5C2EBF017989E44F3D1D11AF502E10F6F8D9AB53* L_4 = __this->___m_AnchorPoints_6;
		NullCheck(L_4);
		List_1_Clear_m5FC367B31C239426FA8CCE3EEB6D76AA2684BCAC_inline(L_4, List_1_Clear_m5FC367B31C239426FA8CCE3EEB6D76AA2684BCAC_RuntimeMethod_var);
		// }
		return;
	}
}
// System.Void AnchorCreator::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AnchorCreator_Awake_m8820A3F157354D7EDED7B2D7CE2BFA42844F1F8E (AnchorCreator_tBBEE94135B5183E0A8EE52FB00513F69C7C980ED* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisARAnchorManager_tF68C46300BD6F2E83E3360BF9297C3C50F5D6B3E_mABCA912A8D3AFCEEA2F2FE0EF30C541DA7DD7907_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisARPlaneManager_t9DA6C512BDCFFBEE8B3DAA7170EB3BFFDE26A928_m668A6CC15F573ABC389E612A2423599B5ADDC2EF_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisARRaycastManager_tD9459374F0F5BD9E2E4A8A1C665E7F33F9C2EE44_m255D1364D056A608CF5BB4AAB1BA1AD4CB78DE83_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_m97CA83C0EF5D88B61FDF3CE17A6A4A8677697DD4_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_t5C2EBF017989E44F3D1D11AF502E10F6F8D9AB53_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// m_RaycastManager = GetComponent<ARRaycastManager>();
		ARRaycastManager_tD9459374F0F5BD9E2E4A8A1C665E7F33F9C2EE44* L_0;
		L_0 = Component_GetComponent_TisARRaycastManager_tD9459374F0F5BD9E2E4A8A1C665E7F33F9C2EE44_m255D1364D056A608CF5BB4AAB1BA1AD4CB78DE83(__this, Component_GetComponent_TisARRaycastManager_tD9459374F0F5BD9E2E4A8A1C665E7F33F9C2EE44_m255D1364D056A608CF5BB4AAB1BA1AD4CB78DE83_RuntimeMethod_var);
		__this->___m_RaycastManager_7 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_RaycastManager_7), (void*)L_0);
		// m_AnchorManager = GetComponent<ARAnchorManager>();
		ARAnchorManager_tF68C46300BD6F2E83E3360BF9297C3C50F5D6B3E* L_1;
		L_1 = Component_GetComponent_TisARAnchorManager_tF68C46300BD6F2E83E3360BF9297C3C50F5D6B3E_mABCA912A8D3AFCEEA2F2FE0EF30C541DA7DD7907(__this, Component_GetComponent_TisARAnchorManager_tF68C46300BD6F2E83E3360BF9297C3C50F5D6B3E_mABCA912A8D3AFCEEA2F2FE0EF30C541DA7DD7907_RuntimeMethod_var);
		__this->___m_AnchorManager_8 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_AnchorManager_8), (void*)L_1);
		// m_PlaneManager = GetComponent<ARPlaneManager>();
		ARPlaneManager_t9DA6C512BDCFFBEE8B3DAA7170EB3BFFDE26A928* L_2;
		L_2 = Component_GetComponent_TisARPlaneManager_t9DA6C512BDCFFBEE8B3DAA7170EB3BFFDE26A928_m668A6CC15F573ABC389E612A2423599B5ADDC2EF(__this, Component_GetComponent_TisARPlaneManager_t9DA6C512BDCFFBEE8B3DAA7170EB3BFFDE26A928_m668A6CC15F573ABC389E612A2423599B5ADDC2EF_RuntimeMethod_var);
		__this->___m_PlaneManager_9 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_PlaneManager_9), (void*)L_2);
		// m_AnchorPoints = new List<ARAnchor>();
		List_1_t5C2EBF017989E44F3D1D11AF502E10F6F8D9AB53* L_3 = (List_1_t5C2EBF017989E44F3D1D11AF502E10F6F8D9AB53*)il2cpp_codegen_object_new(List_1_t5C2EBF017989E44F3D1D11AF502E10F6F8D9AB53_il2cpp_TypeInfo_var);
		NullCheck(L_3);
		List_1__ctor_m97CA83C0EF5D88B61FDF3CE17A6A4A8677697DD4(L_3, List_1__ctor_m97CA83C0EF5D88B61FDF3CE17A6A4A8677697DD4_RuntimeMethod_var);
		__this->___m_AnchorPoints_6 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_AnchorPoints_6), (void*)L_3);
		// }
		return;
	}
}
// System.Void AnchorCreator::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AnchorCreator_Update_mA0A8BCCBAB0AE50DB087524E6273D11F1D6456D0 (AnchorCreator_tBBEE94135B5183E0A8EE52FB00513F69C7C980ED* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AnchorCreator_tBBEE94135B5183E0A8EE52FB00513F69C7C980ED_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_m9DD96A685E24BAB041179C80B0CF8875AE04426A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_m443F0D48247776D4257E06597AF794BCF6D8020F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m58C654F1134533E29502629CA67645682B404811_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral849043193B4849A97BE2F08CFC3CAC883A0F096C);
		s_Il2CppMethodInitialized = true;
	}
	Touch_t03E51455ED508492B3F278903A0114FA0E87B417 V_0;
	memset((&V_0), 0, sizeof(V_0));
	Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 V_1;
	memset((&V_1), 0, sizeof(V_1));
	TrackableId_t49EAE8AA4B9584E314518723DC22B66496D47AD7 V_2;
	memset((&V_2), 0, sizeof(V_2));
	ARPlane_tB2F02248AD4019D141553B25C1B9005913E98EF0* V_3 = NULL;
	ARAnchor_t832D3D366D3F1D43F995A298974D4EDABACC0E06* V_4 = NULL;
	ARRaycastHit_tB32B5606815B8A7DF479C00187A852F8D20E3B70 V_5;
	memset((&V_5), 0, sizeof(V_5));
	{
		// if (Input.touchCount == 0)
		int32_t L_0;
		L_0 = Input_get_touchCount_m057388BFC67A0F4CA53764B1022867ED81D01E39(NULL);
		if (L_0)
		{
			goto IL_0008;
		}
	}
	{
		// return;
		return;
	}

IL_0008:
	{
		// var touch = Input.GetTouch(0);
		Touch_t03E51455ED508492B3F278903A0114FA0E87B417 L_1;
		L_1 = Input_GetTouch_m75D99FE801A94279874FA8DC6B6ADAD35F5123B1(0, NULL);
		V_0 = L_1;
		// if (touch.phase != TouchPhase.Began)
		int32_t L_2;
		L_2 = Touch_get_phase_mB82409FB2BE1C32ABDBA6A72E52A099D28AB70B0((&V_0), NULL);
		if (!L_2)
		{
			goto IL_0019;
		}
	}
	{
		// return;
		return;
	}

IL_0019:
	{
		// if (m_RaycastManager.Raycast(touch.position, s_Hits, TrackableType.PlaneWithinPolygon))
		ARRaycastManager_tD9459374F0F5BD9E2E4A8A1C665E7F33F9C2EE44* L_3 = __this->___m_RaycastManager_7;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_4;
		L_4 = Touch_get_position_m41B9EB0F3F3E1BE98CEB388253A9E31979CB964A((&V_0), NULL);
		il2cpp_codegen_runtime_class_init_inline(AnchorCreator_tBBEE94135B5183E0A8EE52FB00513F69C7C980ED_il2cpp_TypeInfo_var);
		List_1_t0754071572EFE7A5C92A59495D2524FC935364E3* L_5 = ((AnchorCreator_tBBEE94135B5183E0A8EE52FB00513F69C7C980ED_StaticFields*)il2cpp_codegen_static_fields_for(AnchorCreator_tBBEE94135B5183E0A8EE52FB00513F69C7C980ED_il2cpp_TypeInfo_var))->___s_Hits_5;
		NullCheck(L_3);
		bool L_6;
		L_6 = ARRaycastManager_Raycast_mF56A1E2D7CBB61131E4D844ADA9D0CC1F6B53EAC(L_3, L_4, L_5, 1, NULL);
		if (!L_6)
		{
			goto IL_00ae;
		}
	}
	{
		// var hitPose = s_Hits[0].pose;
		il2cpp_codegen_runtime_class_init_inline(AnchorCreator_tBBEE94135B5183E0A8EE52FB00513F69C7C980ED_il2cpp_TypeInfo_var);
		List_1_t0754071572EFE7A5C92A59495D2524FC935364E3* L_7 = ((AnchorCreator_tBBEE94135B5183E0A8EE52FB00513F69C7C980ED_StaticFields*)il2cpp_codegen_static_fields_for(AnchorCreator_tBBEE94135B5183E0A8EE52FB00513F69C7C980ED_il2cpp_TypeInfo_var))->___s_Hits_5;
		NullCheck(L_7);
		ARRaycastHit_tB32B5606815B8A7DF479C00187A852F8D20E3B70 L_8;
		L_8 = List_1_get_Item_m443F0D48247776D4257E06597AF794BCF6D8020F(L_7, 0, List_1_get_Item_m443F0D48247776D4257E06597AF794BCF6D8020F_RuntimeMethod_var);
		V_5 = L_8;
		Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 L_9;
		L_9 = ARRaycastHit_get_pose_m84C13E71E21FE12CBA9AAD98DC28B1E414C9EFFD((&V_5), NULL);
		V_1 = L_9;
		// var hitTrackableId = s_Hits[0].trackableId;
		List_1_t0754071572EFE7A5C92A59495D2524FC935364E3* L_10 = ((AnchorCreator_tBBEE94135B5183E0A8EE52FB00513F69C7C980ED_StaticFields*)il2cpp_codegen_static_fields_for(AnchorCreator_tBBEE94135B5183E0A8EE52FB00513F69C7C980ED_il2cpp_TypeInfo_var))->___s_Hits_5;
		NullCheck(L_10);
		ARRaycastHit_tB32B5606815B8A7DF479C00187A852F8D20E3B70 L_11;
		L_11 = List_1_get_Item_m443F0D48247776D4257E06597AF794BCF6D8020F(L_10, 0, List_1_get_Item_m443F0D48247776D4257E06597AF794BCF6D8020F_RuntimeMethod_var);
		V_5 = L_11;
		TrackableId_t49EAE8AA4B9584E314518723DC22B66496D47AD7 L_12;
		L_12 = ARRaycastHit_get_trackableId_m4E510F2C326AFF23086203E4241C8F9B293616C3((&V_5), NULL);
		V_2 = L_12;
		// var hitPlane = m_PlaneManager.GetPlane(hitTrackableId);
		ARPlaneManager_t9DA6C512BDCFFBEE8B3DAA7170EB3BFFDE26A928* L_13 = __this->___m_PlaneManager_9;
		TrackableId_t49EAE8AA4B9584E314518723DC22B66496D47AD7 L_14 = V_2;
		NullCheck(L_13);
		ARPlane_tB2F02248AD4019D141553B25C1B9005913E98EF0* L_15;
		L_15 = ARPlaneManager_GetPlane_m49FC33F6BC0DCFE67C4FC5F5CEE99CC8A7036FAE(L_13, L_14, NULL);
		V_3 = L_15;
		// var anchor = m_AnchorManager.AttachAnchor(hitPlane, hitPose);
		ARAnchorManager_tF68C46300BD6F2E83E3360BF9297C3C50F5D6B3E* L_16 = __this->___m_AnchorManager_8;
		ARPlane_tB2F02248AD4019D141553B25C1B9005913E98EF0* L_17 = V_3;
		Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 L_18 = V_1;
		NullCheck(L_16);
		ARAnchor_t832D3D366D3F1D43F995A298974D4EDABACC0E06* L_19;
		L_19 = ARAnchorManager_AttachAnchor_m8FA6B772401F90B38A06F43B8EA1B02EA82FFA75(L_16, L_17, L_18, NULL);
		V_4 = L_19;
		// Instantiate(m_AnchorPrefab, anchor.transform);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_20 = __this->___m_AnchorPrefab_4;
		ARAnchor_t832D3D366D3F1D43F995A298974D4EDABACC0E06* L_21 = V_4;
		NullCheck(L_21);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_22;
		L_22 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_21, NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_23;
		L_23 = Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m58C654F1134533E29502629CA67645682B404811(L_20, L_22, Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m58C654F1134533E29502629CA67645682B404811_RuntimeMethod_var);
		// if (anchor == null)
		ARAnchor_t832D3D366D3F1D43F995A298974D4EDABACC0E06* L_24 = V_4;
		bool L_25;
		L_25 = Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605(L_24, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_25)
		{
			goto IL_00a1;
		}
	}
	{
		// Debug.Log("Error creating anchor.");
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB(_stringLiteral849043193B4849A97BE2F08CFC3CAC883A0F096C, NULL);
		return;
	}

IL_00a1:
	{
		// m_AnchorPoints.Add(anchor);
		List_1_t5C2EBF017989E44F3D1D11AF502E10F6F8D9AB53* L_26 = __this->___m_AnchorPoints_6;
		ARAnchor_t832D3D366D3F1D43F995A298974D4EDABACC0E06* L_27 = V_4;
		NullCheck(L_26);
		List_1_Add_m9DD96A685E24BAB041179C80B0CF8875AE04426A_inline(L_26, L_27, List_1_Add_m9DD96A685E24BAB041179C80B0CF8875AE04426A_RuntimeMethod_var);
	}

IL_00ae:
	{
		// }
		return;
	}
}
// System.Void AnchorCreator::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AnchorCreator__ctor_m702B01425680D7FD1C9272A423AAF8A913E5476E (AnchorCreator_tBBEE94135B5183E0A8EE52FB00513F69C7C980ED* __this, const RuntimeMethod* method) 
{
	{
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
		return;
	}
}
// System.Void AnchorCreator::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AnchorCreator__cctor_mDE519BED5D639DA8CD4FA7E389C3D97DF4BA54C4 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AnchorCreator_tBBEE94135B5183E0A8EE52FB00513F69C7C980ED_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_m6B5722DD0A8C0D3D4A1656C5A5E8D0A784DC85B9_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_t0754071572EFE7A5C92A59495D2524FC935364E3_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// static List<ARRaycastHit> s_Hits = new List<ARRaycastHit>();
		List_1_t0754071572EFE7A5C92A59495D2524FC935364E3* L_0 = (List_1_t0754071572EFE7A5C92A59495D2524FC935364E3*)il2cpp_codegen_object_new(List_1_t0754071572EFE7A5C92A59495D2524FC935364E3_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		List_1__ctor_m6B5722DD0A8C0D3D4A1656C5A5E8D0A784DC85B9(L_0, List_1__ctor_m6B5722DD0A8C0D3D4A1656C5A5E8D0A784DC85B9_RuntimeMethod_var);
		((AnchorCreator_tBBEE94135B5183E0A8EE52FB00513F69C7C980ED_StaticFields*)il2cpp_codegen_static_fields_for(AnchorCreator_tBBEE94135B5183E0A8EE52FB00513F69C7C980ED_il2cpp_TypeInfo_var))->___s_Hits_5 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&((AnchorCreator_tBBEE94135B5183E0A8EE52FB00513F69C7C980ED_StaticFields*)il2cpp_codegen_static_fields_for(AnchorCreator_tBBEE94135B5183E0A8EE52FB00513F69C7C980ED_il2cpp_TypeInfo_var))->___s_Hits_5), (void*)L_0);
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
// System.Single ARFeatheredPlaneMeshVisualizer::get_featheringWidth()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float ARFeatheredPlaneMeshVisualizer_get_featheringWidth_m14D3A8BE3E9A745E6FD525B19ADDC892B8399B4D (ARFeatheredPlaneMeshVisualizer_t5B508CD2D37F908F4359D7DED031B3C357E34955* __this, const RuntimeMethod* method) 
{
	{
		// get { return m_FeatheringWidth; }
		float L_0 = __this->___m_FeatheringWidth_4;
		return L_0;
	}
}
// System.Void ARFeatheredPlaneMeshVisualizer::set_featheringWidth(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ARFeatheredPlaneMeshVisualizer_set_featheringWidth_mD616A09A3B426EA5DE1FA37334DD194E43EEC110 (ARFeatheredPlaneMeshVisualizer_t5B508CD2D37F908F4359D7DED031B3C357E34955* __this, float ___value0, const RuntimeMethod* method) 
{
	{
		// set { m_FeatheringWidth = value; }
		float L_0 = ___value0;
		__this->___m_FeatheringWidth_4 = L_0;
		// set { m_FeatheringWidth = value; }
		return;
	}
}
// System.Void ARFeatheredPlaneMeshVisualizer::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ARFeatheredPlaneMeshVisualizer_Awake_mC5DB0414A2514BF4851266C25141C903F0AC57BA (ARFeatheredPlaneMeshVisualizer_t5B508CD2D37F908F4359D7DED031B3C357E34955* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisARPlaneMeshVisualizer_t21838C8E2676AC524939E67CB965925E924E018F_m41229EDC62D1149A73F81E7B0BE27B4C1C293A01_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisARPlane_tB2F02248AD4019D141553B25C1B9005913E98EF0_m8005DAC7F65600404981B996A714B5C7D29A359F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisMeshRenderer_t4B7747212F0B88244BB7790C61AE124BFC15BAAE_m0EDA0079FA3617687C4A28623B79A37D618D9CFB_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// m_PlaneMeshVisualizer = GetComponent<ARPlaneMeshVisualizer>();
		ARPlaneMeshVisualizer_t21838C8E2676AC524939E67CB965925E924E018F* L_0;
		L_0 = Component_GetComponent_TisARPlaneMeshVisualizer_t21838C8E2676AC524939E67CB965925E924E018F_m41229EDC62D1149A73F81E7B0BE27B4C1C293A01(__this, Component_GetComponent_TisARPlaneMeshVisualizer_t21838C8E2676AC524939E67CB965925E924E018F_m41229EDC62D1149A73F81E7B0BE27B4C1C293A01_RuntimeMethod_var);
		__this->___m_PlaneMeshVisualizer_7 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_PlaneMeshVisualizer_7), (void*)L_0);
		// m_FeatheredPlaneMaterial = GetComponent<MeshRenderer>().material;
		MeshRenderer_t4B7747212F0B88244BB7790C61AE124BFC15BAAE* L_1;
		L_1 = Component_GetComponent_TisMeshRenderer_t4B7747212F0B88244BB7790C61AE124BFC15BAAE_m0EDA0079FA3617687C4A28623B79A37D618D9CFB(__this, Component_GetComponent_TisMeshRenderer_t4B7747212F0B88244BB7790C61AE124BFC15BAAE_m0EDA0079FA3617687C4A28623B79A37D618D9CFB_RuntimeMethod_var);
		NullCheck(L_1);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_2;
		L_2 = Renderer_get_material_m5BA2A00816C4CC66580D4B2E409CF10718C15656(L_1, NULL);
		__this->___m_FeatheredPlaneMaterial_9 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_FeatheredPlaneMaterial_9), (void*)L_2);
		// m_Plane = GetComponent<ARPlane>();
		ARPlane_tB2F02248AD4019D141553B25C1B9005913E98EF0* L_3;
		L_3 = Component_GetComponent_TisARPlane_tB2F02248AD4019D141553B25C1B9005913E98EF0_m8005DAC7F65600404981B996A714B5C7D29A359F(__this, Component_GetComponent_TisARPlane_tB2F02248AD4019D141553B25C1B9005913E98EF0_m8005DAC7F65600404981B996A714B5C7D29A359F_RuntimeMethod_var);
		__this->___m_Plane_8 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_Plane_8), (void*)L_3);
		// }
		return;
	}
}
// System.Void ARFeatheredPlaneMeshVisualizer::OnEnable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ARFeatheredPlaneMeshVisualizer_OnEnable_m8781C85CFED871C8A81A5B88DB1031856E0FC9F0 (ARFeatheredPlaneMeshVisualizer_t5B508CD2D37F908F4359D7DED031B3C357E34955* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ARFeatheredPlaneMeshVisualizer_ARPlane_boundaryUpdated_mB3D9BBD14EA1FE3ECDBACC2DB89C1B110B8B6B5F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1_t762BEDF03B3FAD9E52246AF6B4291030B8085074_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// m_Plane.boundaryChanged += ARPlane_boundaryUpdated;
		ARPlane_tB2F02248AD4019D141553B25C1B9005913E98EF0* L_0 = __this->___m_Plane_8;
		Action_1_t762BEDF03B3FAD9E52246AF6B4291030B8085074* L_1 = (Action_1_t762BEDF03B3FAD9E52246AF6B4291030B8085074*)il2cpp_codegen_object_new(Action_1_t762BEDF03B3FAD9E52246AF6B4291030B8085074_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		Action_1__ctor_m83B9B49A5CEF71BC8798C9C8B7989333626CF3E1(L_1, __this, (intptr_t)((void*)ARFeatheredPlaneMeshVisualizer_ARPlane_boundaryUpdated_mB3D9BBD14EA1FE3ECDBACC2DB89C1B110B8B6B5F_RuntimeMethod_var), NULL);
		NullCheck(L_0);
		ARPlane_add_boundaryChanged_m6A9CA2ADF4742C004EF7BCFD48A7C820320616AA(L_0, L_1, NULL);
		// }
		return;
	}
}
// System.Void ARFeatheredPlaneMeshVisualizer::OnDisable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ARFeatheredPlaneMeshVisualizer_OnDisable_m2343B05B1A8F14BAD4DD516C584281B66FE6A4E8 (ARFeatheredPlaneMeshVisualizer_t5B508CD2D37F908F4359D7DED031B3C357E34955* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ARFeatheredPlaneMeshVisualizer_ARPlane_boundaryUpdated_mB3D9BBD14EA1FE3ECDBACC2DB89C1B110B8B6B5F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1_t762BEDF03B3FAD9E52246AF6B4291030B8085074_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// m_Plane.boundaryChanged -= ARPlane_boundaryUpdated;
		ARPlane_tB2F02248AD4019D141553B25C1B9005913E98EF0* L_0 = __this->___m_Plane_8;
		Action_1_t762BEDF03B3FAD9E52246AF6B4291030B8085074* L_1 = (Action_1_t762BEDF03B3FAD9E52246AF6B4291030B8085074*)il2cpp_codegen_object_new(Action_1_t762BEDF03B3FAD9E52246AF6B4291030B8085074_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		Action_1__ctor_m83B9B49A5CEF71BC8798C9C8B7989333626CF3E1(L_1, __this, (intptr_t)((void*)ARFeatheredPlaneMeshVisualizer_ARPlane_boundaryUpdated_mB3D9BBD14EA1FE3ECDBACC2DB89C1B110B8B6B5F_RuntimeMethod_var), NULL);
		NullCheck(L_0);
		ARPlane_remove_boundaryChanged_m6F71EEF2CD3C71AF069C5FE6CD993906BD8A9A10(L_0, L_1, NULL);
		// }
		return;
	}
}
// System.Void ARFeatheredPlaneMeshVisualizer::ARPlane_boundaryUpdated(UnityEngine.XR.ARFoundation.ARPlaneBoundaryChangedEventArgs)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ARFeatheredPlaneMeshVisualizer_ARPlane_boundaryUpdated_mB3D9BBD14EA1FE3ECDBACC2DB89C1B110B8B6B5F (ARFeatheredPlaneMeshVisualizer_t5B508CD2D37F908F4359D7DED031B3C357E34955* __this, ARPlaneBoundaryChangedEventArgs_tE59EDE94575C8947AD3F1F8DA1370D0A426A5FFC ___eventArgs0, const RuntimeMethod* method) 
{
	{
		// GenerateBoundaryUVs(m_PlaneMeshVisualizer.mesh);
		ARPlaneMeshVisualizer_t21838C8E2676AC524939E67CB965925E924E018F* L_0 = __this->___m_PlaneMeshVisualizer_7;
		NullCheck(L_0);
		Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* L_1;
		L_1 = ARPlaneMeshVisualizer_get_mesh_m6C1A730CECE8AE0A0549ED615AB3B3D66E4A0FD8_inline(L_0, NULL);
		ARFeatheredPlaneMeshVisualizer_GenerateBoundaryUVs_mF756D3C1F7925A69CD8C7C8CCE56209AB321FEF5(__this, L_1, NULL);
		// }
		return;
	}
}
// System.Void ARFeatheredPlaneMeshVisualizer::GenerateBoundaryUVs(UnityEngine.Mesh)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ARFeatheredPlaneMeshVisualizer_GenerateBoundaryUVs_mF756D3C1F7925A69CD8C7C8CCE56209AB321FEF5 (ARFeatheredPlaneMeshVisualizer_t5B508CD2D37F908F4359D7DED031B3C357E34955* __this, Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* ___mesh0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ARFeatheredPlaneMeshVisualizer_t5B508CD2D37F908F4359D7DED031B3C357E34955_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_m79E50C4F592B1703F4B76A8BE7B4855515460CA1_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Clear_m455780C5A45049F9BDC25EAD3BA10A681D16385D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Capacity_m1810FC505867C713DCDDD7468F8BA2BF1DF0D3B6_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_m46EEFFA770BE665EA0CB3A5332E941DA4B3C1D37_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_m8F2E15FC96DA75186C51228128A0660709E4E810_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_set_Capacity_mF3F5104AB534524CF6D04659241FBD48C9080FFE_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral131018280018B48DB9FF86A96C7535E6FA339C24);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_1;
	memset((&V_1), 0, sizeof(V_1));
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_2;
	memset((&V_2), 0, sizeof(V_2));
	float V_3 = 0.0f;
	int32_t V_4 = 0;
	float V_5 = 0.0f;
	{
		// int vertexCount = mesh.vertexCount;
		Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* L_0 = ___mesh0;
		NullCheck(L_0);
		int32_t L_1;
		L_1 = Mesh_get_vertexCount_mB7BE0340AAF272933068D830C8E711FC8978E12C(L_0, NULL);
		V_0 = L_1;
		// s_FeatheringUVs.Clear();
		il2cpp_codegen_runtime_class_init_inline(ARFeatheredPlaneMeshVisualizer_t5B508CD2D37F908F4359D7DED031B3C357E34955_il2cpp_TypeInfo_var);
		List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B* L_2 = ((ARFeatheredPlaneMeshVisualizer_t5B508CD2D37F908F4359D7DED031B3C357E34955_StaticFields*)il2cpp_codegen_static_fields_for(ARFeatheredPlaneMeshVisualizer_t5B508CD2D37F908F4359D7DED031B3C357E34955_il2cpp_TypeInfo_var))->___s_FeatheringUVs_5;
		NullCheck(L_2);
		List_1_Clear_m455780C5A45049F9BDC25EAD3BA10A681D16385D_inline(L_2, List_1_Clear_m455780C5A45049F9BDC25EAD3BA10A681D16385D_RuntimeMethod_var);
		// if (s_FeatheringUVs.Capacity < vertexCount) { s_FeatheringUVs.Capacity = vertexCount; }
		List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B* L_3 = ((ARFeatheredPlaneMeshVisualizer_t5B508CD2D37F908F4359D7DED031B3C357E34955_StaticFields*)il2cpp_codegen_static_fields_for(ARFeatheredPlaneMeshVisualizer_t5B508CD2D37F908F4359D7DED031B3C357E34955_il2cpp_TypeInfo_var))->___s_FeatheringUVs_5;
		NullCheck(L_3);
		int32_t L_4;
		L_4 = List_1_get_Capacity_m1810FC505867C713DCDDD7468F8BA2BF1DF0D3B6(L_3, List_1_get_Capacity_m1810FC505867C713DCDDD7468F8BA2BF1DF0D3B6_RuntimeMethod_var);
		int32_t L_5 = V_0;
		if ((((int32_t)L_4) >= ((int32_t)L_5)))
		{
			goto IL_0029;
		}
	}
	{
		// if (s_FeatheringUVs.Capacity < vertexCount) { s_FeatheringUVs.Capacity = vertexCount; }
		il2cpp_codegen_runtime_class_init_inline(ARFeatheredPlaneMeshVisualizer_t5B508CD2D37F908F4359D7DED031B3C357E34955_il2cpp_TypeInfo_var);
		List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B* L_6 = ((ARFeatheredPlaneMeshVisualizer_t5B508CD2D37F908F4359D7DED031B3C357E34955_StaticFields*)il2cpp_codegen_static_fields_for(ARFeatheredPlaneMeshVisualizer_t5B508CD2D37F908F4359D7DED031B3C357E34955_il2cpp_TypeInfo_var))->___s_FeatheringUVs_5;
		int32_t L_7 = V_0;
		NullCheck(L_6);
		List_1_set_Capacity_mF3F5104AB534524CF6D04659241FBD48C9080FFE(L_6, L_7, List_1_set_Capacity_mF3F5104AB534524CF6D04659241FBD48C9080FFE_RuntimeMethod_var);
	}

IL_0029:
	{
		// mesh.GetVertices(s_Vertices);
		Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* L_8 = ___mesh0;
		il2cpp_codegen_runtime_class_init_inline(ARFeatheredPlaneMeshVisualizer_t5B508CD2D37F908F4359D7DED031B3C357E34955_il2cpp_TypeInfo_var);
		List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B* L_9 = ((ARFeatheredPlaneMeshVisualizer_t5B508CD2D37F908F4359D7DED031B3C357E34955_StaticFields*)il2cpp_codegen_static_fields_for(ARFeatheredPlaneMeshVisualizer_t5B508CD2D37F908F4359D7DED031B3C357E34955_il2cpp_TypeInfo_var))->___s_Vertices_6;
		NullCheck(L_8);
		Mesh_GetVertices_m5BF8777074E383AD8C4B9974D27E4AB52963D92E(L_8, L_9, NULL);
		// Vector3 centerInPlaneSpace = s_Vertices[s_Vertices.Count - 1];
		List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B* L_10 = ((ARFeatheredPlaneMeshVisualizer_t5B508CD2D37F908F4359D7DED031B3C357E34955_StaticFields*)il2cpp_codegen_static_fields_for(ARFeatheredPlaneMeshVisualizer_t5B508CD2D37F908F4359D7DED031B3C357E34955_il2cpp_TypeInfo_var))->___s_Vertices_6;
		List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B* L_11 = ((ARFeatheredPlaneMeshVisualizer_t5B508CD2D37F908F4359D7DED031B3C357E34955_StaticFields*)il2cpp_codegen_static_fields_for(ARFeatheredPlaneMeshVisualizer_t5B508CD2D37F908F4359D7DED031B3C357E34955_il2cpp_TypeInfo_var))->___s_Vertices_6;
		NullCheck(L_11);
		int32_t L_12;
		L_12 = List_1_get_Count_m46EEFFA770BE665EA0CB3A5332E941DA4B3C1D37_inline(L_11, List_1_get_Count_m46EEFFA770BE665EA0CB3A5332E941DA4B3C1D37_RuntimeMethod_var);
		NullCheck(L_10);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_13;
		L_13 = List_1_get_Item_m8F2E15FC96DA75186C51228128A0660709E4E810(L_10, ((int32_t)il2cpp_codegen_subtract(L_12, 1)), List_1_get_Item_m8F2E15FC96DA75186C51228128A0660709E4E810_RuntimeMethod_var);
		V_1 = L_13;
		// Vector3 uv = new Vector3(0, 0, 0);
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&V_2), (0.0f), (0.0f), (0.0f), NULL);
		// float shortestUVMapping = float.MaxValue;
		V_3 = ((std::numeric_limits<float>::max)());
		// for (int i = 0; i < vertexCount - 1; i++)
		V_4 = 0;
		goto IL_00b5;
	}

IL_006c:
	{
		// float vertexDist = Vector3.Distance(s_Vertices[i], centerInPlaneSpace);
		il2cpp_codegen_runtime_class_init_inline(ARFeatheredPlaneMeshVisualizer_t5B508CD2D37F908F4359D7DED031B3C357E34955_il2cpp_TypeInfo_var);
		List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B* L_14 = ((ARFeatheredPlaneMeshVisualizer_t5B508CD2D37F908F4359D7DED031B3C357E34955_StaticFields*)il2cpp_codegen_static_fields_for(ARFeatheredPlaneMeshVisualizer_t5B508CD2D37F908F4359D7DED031B3C357E34955_il2cpp_TypeInfo_var))->___s_Vertices_6;
		int32_t L_15 = V_4;
		NullCheck(L_14);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_16;
		L_16 = List_1_get_Item_m8F2E15FC96DA75186C51228128A0660709E4E810(L_14, L_15, List_1_get_Item_m8F2E15FC96DA75186C51228128A0660709E4E810_RuntimeMethod_var);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_17 = V_1;
		float L_18;
		L_18 = Vector3_Distance_m2314DB9B8BD01157E013DF87BEA557375C7F9FF9_inline(L_16, L_17, NULL);
		// float uvMapping = vertexDist / Mathf.Max(vertexDist - featheringWidth, 0.001f);
		float L_19 = L_18;
		float L_20;
		L_20 = ARFeatheredPlaneMeshVisualizer_get_featheringWidth_m14D3A8BE3E9A745E6FD525B19ADDC892B8399B4D_inline(__this, NULL);
		float L_21;
		L_21 = Mathf_Max_mF5379E63D2BBAC76D090748695D833934F8AD051_inline(((float)il2cpp_codegen_subtract(L_19, L_20)), (0.00100000005f), NULL);
		V_5 = ((float)(L_19/L_21));
		// uv.x = uvMapping;
		float L_22 = V_5;
		(&V_2)->___x_2 = L_22;
		// if (shortestUVMapping > uvMapping) { shortestUVMapping = uvMapping; }
		float L_23 = V_3;
		float L_24 = V_5;
		if ((!(((float)L_23) > ((float)L_24))))
		{
			goto IL_00a4;
		}
	}
	{
		// if (shortestUVMapping > uvMapping) { shortestUVMapping = uvMapping; }
		float L_25 = V_5;
		V_3 = L_25;
	}

IL_00a4:
	{
		// s_FeatheringUVs.Add(uv);
		il2cpp_codegen_runtime_class_init_inline(ARFeatheredPlaneMeshVisualizer_t5B508CD2D37F908F4359D7DED031B3C357E34955_il2cpp_TypeInfo_var);
		List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B* L_26 = ((ARFeatheredPlaneMeshVisualizer_t5B508CD2D37F908F4359D7DED031B3C357E34955_StaticFields*)il2cpp_codegen_static_fields_for(ARFeatheredPlaneMeshVisualizer_t5B508CD2D37F908F4359D7DED031B3C357E34955_il2cpp_TypeInfo_var))->___s_FeatheringUVs_5;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_27 = V_2;
		NullCheck(L_26);
		List_1_Add_m79E50C4F592B1703F4B76A8BE7B4855515460CA1_inline(L_26, L_27, List_1_Add_m79E50C4F592B1703F4B76A8BE7B4855515460CA1_RuntimeMethod_var);
		// for (int i = 0; i < vertexCount - 1; i++)
		int32_t L_28 = V_4;
		V_4 = ((int32_t)il2cpp_codegen_add(L_28, 1));
	}

IL_00b5:
	{
		// for (int i = 0; i < vertexCount - 1; i++)
		int32_t L_29 = V_4;
		int32_t L_30 = V_0;
		if ((((int32_t)L_29) < ((int32_t)((int32_t)il2cpp_codegen_subtract(L_30, 1)))))
		{
			goto IL_006c;
		}
	}
	{
		// m_FeatheredPlaneMaterial.SetFloat("_ShortestUVMapping", shortestUVMapping);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_31 = __this->___m_FeatheredPlaneMaterial_9;
		float L_32 = V_3;
		NullCheck(L_31);
		Material_SetFloat_m879CF81D740BAE6F23C9822400679F4D16365836(L_31, _stringLiteral131018280018B48DB9FF86A96C7535E6FA339C24, L_32, NULL);
		// uv.Set(0, 0, 0);
		Vector3_Set_m1C7E543216734FB513F9CEBA44C50E6FC2AFD49D_inline((&V_2), (0.0f), (0.0f), (0.0f), NULL);
		// s_FeatheringUVs.Add(uv);
		il2cpp_codegen_runtime_class_init_inline(ARFeatheredPlaneMeshVisualizer_t5B508CD2D37F908F4359D7DED031B3C357E34955_il2cpp_TypeInfo_var);
		List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B* L_33 = ((ARFeatheredPlaneMeshVisualizer_t5B508CD2D37F908F4359D7DED031B3C357E34955_StaticFields*)il2cpp_codegen_static_fields_for(ARFeatheredPlaneMeshVisualizer_t5B508CD2D37F908F4359D7DED031B3C357E34955_il2cpp_TypeInfo_var))->___s_FeatheringUVs_5;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_34 = V_2;
		NullCheck(L_33);
		List_1_Add_m79E50C4F592B1703F4B76A8BE7B4855515460CA1_inline(L_33, L_34, List_1_Add_m79E50C4F592B1703F4B76A8BE7B4855515460CA1_RuntimeMethod_var);
		// mesh.SetUVs(1, s_FeatheringUVs);
		Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* L_35 = ___mesh0;
		List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B* L_36 = ((ARFeatheredPlaneMeshVisualizer_t5B508CD2D37F908F4359D7DED031B3C357E34955_StaticFields*)il2cpp_codegen_static_fields_for(ARFeatheredPlaneMeshVisualizer_t5B508CD2D37F908F4359D7DED031B3C357E34955_il2cpp_TypeInfo_var))->___s_FeatheringUVs_5;
		NullCheck(L_35);
		Mesh_SetUVs_mFEE20B5977AA358DAFA31CF621BBC4B0247789B2(L_35, 1, L_36, NULL);
		// mesh.UploadMeshData(false);
		Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* L_37 = ___mesh0;
		NullCheck(L_37);
		Mesh_UploadMeshData_mE4C94F263DAA8CAC1641FE137E1CE7D3F09396EB(L_37, (bool)0, NULL);
		// }
		return;
	}
}
// System.Void ARFeatheredPlaneMeshVisualizer::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ARFeatheredPlaneMeshVisualizer__ctor_m9A77651BCAE58AA0B994FFF6C6B63B1CFF2729F6 (ARFeatheredPlaneMeshVisualizer_t5B508CD2D37F908F4359D7DED031B3C357E34955* __this, const RuntimeMethod* method) 
{
	{
		// float m_FeatheringWidth = 0.2f;
		__this->___m_FeatheringWidth_4 = (0.200000003f);
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
		return;
	}
}
// System.Void ARFeatheredPlaneMeshVisualizer::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ARFeatheredPlaneMeshVisualizer__cctor_m56285A000EE27A1631BE9C5BCDA5C376E5D133C3 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ARFeatheredPlaneMeshVisualizer_t5B508CD2D37F908F4359D7DED031B3C357E34955_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_mC54E2BCBE43279A96FC082F5CDE2D76388BD8F9C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// static List<Vector3> s_FeatheringUVs = new List<Vector3>();
		List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B* L_0 = (List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B*)il2cpp_codegen_object_new(List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		List_1__ctor_mC54E2BCBE43279A96FC082F5CDE2D76388BD8F9C(L_0, List_1__ctor_mC54E2BCBE43279A96FC082F5CDE2D76388BD8F9C_RuntimeMethod_var);
		((ARFeatheredPlaneMeshVisualizer_t5B508CD2D37F908F4359D7DED031B3C357E34955_StaticFields*)il2cpp_codegen_static_fields_for(ARFeatheredPlaneMeshVisualizer_t5B508CD2D37F908F4359D7DED031B3C357E34955_il2cpp_TypeInfo_var))->___s_FeatheringUVs_5 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&((ARFeatheredPlaneMeshVisualizer_t5B508CD2D37F908F4359D7DED031B3C357E34955_StaticFields*)il2cpp_codegen_static_fields_for(ARFeatheredPlaneMeshVisualizer_t5B508CD2D37F908F4359D7DED031B3C357E34955_il2cpp_TypeInfo_var))->___s_FeatheringUVs_5), (void*)L_0);
		// static List<Vector3> s_Vertices = new List<Vector3>();
		List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B* L_1 = (List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B*)il2cpp_codegen_object_new(List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		List_1__ctor_mC54E2BCBE43279A96FC082F5CDE2D76388BD8F9C(L_1, List_1__ctor_mC54E2BCBE43279A96FC082F5CDE2D76388BD8F9C_RuntimeMethod_var);
		((ARFeatheredPlaneMeshVisualizer_t5B508CD2D37F908F4359D7DED031B3C357E34955_StaticFields*)il2cpp_codegen_static_fields_for(ARFeatheredPlaneMeshVisualizer_t5B508CD2D37F908F4359D7DED031B3C357E34955_il2cpp_TypeInfo_var))->___s_Vertices_6 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&((ARFeatheredPlaneMeshVisualizer_t5B508CD2D37F908F4359D7DED031B3C357E34955_StaticFields*)il2cpp_codegen_static_fields_for(ARFeatheredPlaneMeshVisualizer_t5B508CD2D37F908F4359D7DED031B3C357E34955_il2cpp_TypeInfo_var))->___s_Vertices_6), (void*)L_1);
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
// System.Void BuildingsGeospatialController::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BuildingsGeospatialController_Update_mEDE6EE8DD89CA6CDA04F8E5ABF9918E2D80D7D4F (BuildingsGeospatialController_t3659F8BA9E2F49FF0B5D9F205AA900B84B98C410* __this, const RuntimeMethod* method) 
{
	{
		// if (Application.isEditor)
		bool L_0;
		L_0 = Application_get_isEditor_mEAC51E3ACE6DCE438087FB14BD75A3C219D354D0(NULL);
		if (!L_0)
		{
			goto IL_0008;
		}
	}
	{
		// return;
		return;
	}

IL_0008:
	{
		// if (ARSession.state != ARSessionState.SessionTracking)
		int32_t L_1;
		L_1 = ARSession_get_state_m6A22EE6441E58AC66E1FE9A7359D06C90C1A2842_inline(NULL);
		if ((((int32_t)L_1) == ((int32_t)7)))
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
		// if (!IsSupportedDevice())
		bool L_2;
		L_2 = BuildingsGeospatialController_IsSupportedDevice_m21B4545536607F712EEBDD126972239C7555B827(__this, NULL);
		if (L_2)
		{
			goto IL_001a;
		}
	}
	{
		// return;
		return;
	}

IL_001a:
	{
		// if (!IsHighAccuracyDeviceEarthPosition())
		bool L_3;
		L_3 = BuildingsGeospatialController_IsHighAccuracyDeviceEarthPosition_mF55C3573154AAF6A8176353E98B4F6BC10BF73BD(__this, NULL);
		if (L_3)
		{
			goto IL_0023;
		}
	}
	{
		// return;
		return;
	}

IL_0023:
	{
		// if (IsExistGeoSpatialAnchor(latitude, longitude, altitude))
		double L_4 = __this->___latitude_9;
		double L_5 = __this->___longitude_10;
		double L_6 = __this->___altitude_11;
		bool L_7;
		L_7 = BuildingsGeospatialController_IsExistGeoSpatialAnchor_m41C399AB2F96B29D2C3EF88BF4C2B34093CF1DCA(__this, L_4, L_5, L_6, NULL);
		if (!L_7)
		{
			goto IL_0043;
		}
	}
	{
		// Adjust();
		BuildingsGeospatialController_Adjust_mD9F930EE3EE7E386F25F89DA4616491C13D82623(__this, NULL);
	}

IL_0043:
	{
		// }
		return;
	}
}
// System.Boolean BuildingsGeospatialController::IsSupportedDevice()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool BuildingsGeospatialController_IsSupportedDevice_m21B4545536607F712EEBDD126972239C7555B827 (BuildingsGeospatialController_t3659F8BA9E2F49FF0B5D9F205AA900B84B98C410* __this, const RuntimeMethod* method) 
{
	{
		// return arEarthManager.IsGeospatialModeSupported(GeospatialMode.Enabled) != FeatureSupported.Unsupported;
		AREarthManager_tAC32FF06F084622687D9FB4837506A704301D0F0* L_0 = __this->___arEarthManager_5;
		NullCheck(L_0);
		int32_t L_1;
		L_1 = AREarthManager_IsGeospatialModeSupported_m95784655267321A2E74719CB725D58F368AA278F(L_0, 2, NULL);
		return (bool)((((int32_t)((((int32_t)L_1) == ((int32_t)2))? 1 : 0)) == ((int32_t)0))? 1 : 0);
	}
}
// System.Boolean BuildingsGeospatialController::IsHighAccuracyDeviceEarthPosition()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool BuildingsGeospatialController_IsHighAccuracyDeviceEarthPosition_mF55C3573154AAF6A8176353E98B4F6BC10BF73BD (BuildingsGeospatialController_t3659F8BA9E2F49FF0B5D9F205AA900B84B98C410* __this, const RuntimeMethod* method) 
{
	double V_0 = 0.0;
	double V_1 = 0.0;
	{
		// if (arEarthManager.EarthTrackingState != TrackingState.Tracking) return false;
		AREarthManager_tAC32FF06F084622687D9FB4837506A704301D0F0* L_0 = __this->___arEarthManager_5;
		NullCheck(L_0);
		int32_t L_1;
		L_1 = AREarthManager_get_EarthTrackingState_m07DA12743E09AC92C21F6868B51D3211023B299A(L_0, NULL);
		if ((((int32_t)L_1) == ((int32_t)2)))
		{
			goto IL_0010;
		}
	}
	{
		// if (arEarthManager.EarthTrackingState != TrackingState.Tracking) return false;
		return (bool)0;
	}

IL_0010:
	{
		// var pose = arEarthManager.CameraGeospatialPose;
		AREarthManager_tAC32FF06F084622687D9FB4837506A704301D0F0* L_2 = __this->___arEarthManager_5;
		NullCheck(L_2);
		GeospatialPose_tBF34434706FEEB7D1524DEE5FADDEE7E95452F2C L_3;
		L_3 = AREarthManager_get_CameraGeospatialPose_mE81C71F8E4CD0B6FD4116D0B3E5B97F00DDE9C1A(L_2, NULL);
		// var verticalAccuracy = pose.VerticalAccuracy;
		GeospatialPose_tBF34434706FEEB7D1524DEE5FADDEE7E95452F2C L_4 = L_3;
		double L_5 = L_4.___VerticalAccuracy_6;
		V_0 = L_5;
		// var horizontalAccuracy = pose.HorizontalAccuracy;
		double L_6 = L_4.___HorizontalAccuracy_5;
		V_1 = L_6;
		// if (verticalAccuracy > VERTICAL_THRESHOLD && horizontalAccuracy > HOLIZONTAL_THRESHOLD) return false;
		double L_7 = V_0;
		if ((!(((double)L_7) > ((double)(10.0)))))
		{
			goto IL_0042;
		}
	}
	{
		double L_8 = V_1;
		if ((!(((double)L_8) > ((double)(10.0)))))
		{
			goto IL_0042;
		}
	}
	{
		// if (verticalAccuracy > VERTICAL_THRESHOLD && horizontalAccuracy > HOLIZONTAL_THRESHOLD) return false;
		return (bool)0;
	}

IL_0042:
	{
		// return true;
		return (bool)1;
	}
}
// System.Boolean BuildingsGeospatialController::IsExistGeoSpatialAnchor(System.Double,System.Double,System.Double)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool BuildingsGeospatialController_IsExistGeoSpatialAnchor_m41C399AB2F96B29D2C3EF88BF4C2B34093CF1DCA (BuildingsGeospatialController_t3659F8BA9E2F49FF0B5D9F205AA900B84B98C410* __this, double ___lat0, double ___lng1, double ___alt2, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ARAnchorManagerExtensions_t1FCBDAAD3ADF35808ECE7699833CD08AFBC05394_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// if (arEarthManager.EarthTrackingState != TrackingState.Tracking)
		AREarthManager_tAC32FF06F084622687D9FB4837506A704301D0F0* L_0 = __this->___arEarthManager_5;
		NullCheck(L_0);
		int32_t L_1;
		L_1 = AREarthManager_get_EarthTrackingState_m07DA12743E09AC92C21F6868B51D3211023B299A(L_0, NULL);
		if ((((int32_t)L_1) == ((int32_t)2)))
		{
			goto IL_0010;
		}
	}
	{
		// return false;
		return (bool)0;
	}

IL_0010:
	{
		// if (anchor == null)
		ARGeospatialAnchor_tD63E18E1D193A2B24B757D285F3CF67A8FC7F571* L_2 = __this->___anchor_14;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_3;
		L_3 = Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605(L_2, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_3)
		{
			goto IL_0043;
		}
	}
	{
		// var offsetRotation = Quaternion.AngleAxis(180f, Vector3.up);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4;
		L_4 = Vector3_get_up_m128AF3FDC820BF59D5DE86D973E7DE3F20C3AEBA_inline(NULL);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_5;
		L_5 = Quaternion_AngleAxis_mF37022977B297E63AA70D69EA1C4C922FF22CC80((180.0f), L_4, NULL);
		V_0 = L_5;
		// anchor = arAnchorManager.AddAnchor(lat, lng, alt, offsetRotation);
		ARAnchorManager_tF68C46300BD6F2E83E3360BF9297C3C50F5D6B3E* L_6 = __this->___arAnchorManager_4;
		double L_7 = ___lat0;
		double L_8 = ___lng1;
		double L_9 = ___alt2;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_10 = V_0;
		il2cpp_codegen_runtime_class_init_inline(ARAnchorManagerExtensions_t1FCBDAAD3ADF35808ECE7699833CD08AFBC05394_il2cpp_TypeInfo_var);
		ARGeospatialAnchor_tD63E18E1D193A2B24B757D285F3CF67A8FC7F571* L_11;
		L_11 = ARAnchorManagerExtensions_AddAnchor_m40F02EA59D932D82EEF0C6FDD19B9006BAA1FE78(L_6, L_7, L_8, L_9, L_10, NULL);
		__this->___anchor_14 = L_11;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___anchor_14), (void*)L_11);
	}

IL_0043:
	{
		// return anchor != null;
		ARGeospatialAnchor_tD63E18E1D193A2B24B757D285F3CF67A8FC7F571* L_12 = __this->___anchor_14;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_13;
		L_13 = Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602(L_12, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		return L_13;
	}
}
// System.Void BuildingsGeospatialController::Adjust()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BuildingsGeospatialController_Adjust_mD9F930EE3EE7E386F25F89DA4616491C13D82623 (BuildingsGeospatialController_t3659F8BA9E2F49FF0B5D9F205AA900B84B98C410* __this, const RuntimeMethod* method) 
{
	{
		// arObject.SetPositionAndRotation(anchor.transform.position,anchor.transform.rotation);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_0 = __this->___arObject_7;
		ARGeospatialAnchor_tD63E18E1D193A2B24B757D285F3CF67A8FC7F571* L_1 = __this->___anchor_14;
		NullCheck(L_1);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_2;
		L_2 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_1, NULL);
		NullCheck(L_2);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3;
		L_3 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_2, NULL);
		ARGeospatialAnchor_tD63E18E1D193A2B24B757D285F3CF67A8FC7F571* L_4 = __this->___anchor_14;
		NullCheck(L_4);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_5;
		L_5 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_4, NULL);
		NullCheck(L_5);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_6;
		L_6 = Transform_get_rotation_m32AF40CA0D50C797DA639A696F8EAEC7524C179C(L_5, NULL);
		NullCheck(L_0);
		Transform_SetPositionAndRotation_m418859BF59086EEAA084FFD6F258A43FAB408F5A(L_0, L_3, L_6, NULL);
		// }
		return;
	}
}
// System.Void BuildingsGeospatialController::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BuildingsGeospatialController__ctor_m4EB21DF6EA9FCDE65E2F5268EC6AE8777DD7E6A6 (BuildingsGeospatialController_t3659F8BA9E2F49FF0B5D9F205AA900B84B98C410* __this, const RuntimeMethod* method) 
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
// System.Void AspectKeeper::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AspectKeeper_Start_m4C834763FF53D4F77283A0CE61A2A0A4C847AA4D (AspectKeeper_tE04B4E487189116A41BDEE27EF419B57DED6331A* __this, const RuntimeMethod* method) 
{
	{
		// }
		return;
	}
}
// System.Void AspectKeeper::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AspectKeeper_Update_mD550F5E79AA45A9F14F135ED6FF1FF3DA4D4ABEF (AspectKeeper_tE04B4E487189116A41BDEE27EF419B57DED6331A* __this, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	float V_1 = 0.0f;
	Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		// var screenAspect = Screen.width / (float)Screen.height; //?????????
		int32_t L_0;
		L_0 = Screen_get_width_mF608FF3252213E7EFA1F0D2F744C28110E9E5AC9(NULL);
		int32_t L_1;
		L_1 = Screen_get_height_m01A3102DE71EE1FBEA51D09D6B0261CF864FE8F9(NULL);
		V_0 = ((float)(((float)L_0)/((float)L_1)));
		// var targetAspect = aspectVec.x / aspectVec.y; //?????????
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* L_2 = (&__this->___aspectVec_5);
		float L_3 = L_2->___x_0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* L_4 = (&__this->___aspectVec_5);
		float L_5 = L_4->___y_1;
		// var magRate = targetAspect / screenAspect; //????????????????
		float L_6 = V_0;
		V_1 = ((float)(((float)(L_3/L_5))/L_6));
		// var viewportRect = new Rect(0, 0, 1, 1); //Viewport????Rect???
		Rect__ctor_m18C3033D135097BEE424AAA68D91C706D2647F23((&V_2), (0.0f), (0.0f), (1.0f), (1.0f), NULL);
		// if (magRate < 1)
		float L_7 = V_1;
		if ((!(((float)L_7) < ((float)(1.0f)))))
		{
			goto IL_006f;
		}
	}
	{
		// viewportRect.width = magRate; //?????????
		float L_8 = V_1;
		Rect_set_width_m93B6217CF3EFF89F9B0C81F34D7345DE90B93E5A((&V_2), L_8, NULL);
		// viewportRect.x = 0.5f - viewportRect.width * 0.5f;//????
		float L_9;
		L_9 = Rect_get_width_m620D67551372073C9C32C4C4624C2A5713F7F9A9((&V_2), NULL);
		Rect_set_x_mAB91AB71898A20762BC66FD0723C4C739C4C3406((&V_2), ((float)il2cpp_codegen_subtract((0.5f), ((float)il2cpp_codegen_multiply(L_9, (0.5f))))), NULL);
		goto IL_0097;
	}

IL_006f:
	{
		// viewportRect.height = 1 / magRate; //?????????
		float L_10 = V_1;
		Rect_set_height_mD00038E6E06637137A5626CA8CD421924005BF03((&V_2), ((float)((1.0f)/L_10)), NULL);
		// viewportRect.y = 0.5f - viewportRect.height * 0.5f;//????
		float L_11;
		L_11 = Rect_get_height_mE1AA6C6C725CCD2D317BD2157396D3CF7D47C9D8((&V_2), NULL);
		Rect_set_y_mDE91F4B98A6E8623EFB1250FF6526D5DB5855629((&V_2), ((float)il2cpp_codegen_subtract((0.5f), ((float)il2cpp_codegen_multiply(L_11, (0.5f))))), NULL);
	}

IL_0097:
	{
		// targetCamera.rect = viewportRect; //????Viewport???
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_12 = __this->___targetCamera_4;
		Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D L_13 = V_2;
		NullCheck(L_12);
		Camera_set_rect_mA81158BC169AF8674DE240AE9460FC5A0EADBB19(L_12, L_13, NULL);
		// }
		return;
	}
}
// System.Void AspectKeeper::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AspectKeeper__ctor_m0D8EE00986B14A9392C6004ACA7631B55DF76836 (AspectKeeper_tE04B4E487189116A41BDEE27EF419B57DED6331A* __this, const RuntimeMethod* method) 
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
// System.Void Changescene::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Changescene_Start_mD70DD87E87E2BA370E0D3FE8AC348435D5EDD09A (Changescene_t316E8EA501CB3BB520C8CCF16BCCD75E98663EE9* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0304C2468FEB98972F5763D99C72997DEFFF8FF8);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Invoke("ChangeScene", 98);
		MonoBehaviour_Invoke_mF724350C59362B0F1BFE26383209A274A29A63FB(__this, _stringLiteral0304C2468FEB98972F5763D99C72997DEFFF8FF8, (98.0f), NULL);
		// }
		return;
	}
}
// System.Void Changescene::ChangeScene()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Changescene_ChangeScene_mAF368881F5D063FF503403786013517963BB6A04 (Changescene_t316E8EA501CB3BB520C8CCF16BCCD75E98663EE9* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral40E83ACCE0D042A519B971EC5FA530E519DEAD8E);
		s_Il2CppMethodInitialized = true;
	}
	{
		// SceneManager.LoadScene("Title");
		il2cpp_codegen_runtime_class_init_inline(SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var);
		SceneManager_LoadScene_mBB3DBC1601A21F8F4E8A5D68FED30EA9412F218E(_stringLiteral40E83ACCE0D042A519B971EC5FA530E519DEAD8E, NULL);
		// }
		return;
	}
}
// System.Void Changescene::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Changescene__ctor_mF5DBF7AE720A9F99BCB20FD1605896AD9A99A59C (Changescene_t316E8EA501CB3BB520C8CCF16BCCD75E98663EE9* __this, const RuntimeMethod* method) 
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
// System.Void Collsionmusic::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Collsionmusic_Start_mC739F163E59F0BDB4C956EC08A10895C096D867E (Collsionmusic_t4EA448F820927E8767BC935993C05693BEFEFC42* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_AddComponent_TisAudioSource_t871AC2272F896738252F04EE949AEF5B241D3299_m0E8EFDB9B3D8DF1ADE10C56D3168A9C1BA19BF14_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// audio = gameObject.AddComponent<AudioSource>();
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0;
		L_0 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(__this, NULL);
		NullCheck(L_0);
		AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* L_1;
		L_1 = GameObject_AddComponent_TisAudioSource_t871AC2272F896738252F04EE949AEF5B241D3299_m0E8EFDB9B3D8DF1ADE10C56D3168A9C1BA19BF14(L_0, GameObject_AddComponent_TisAudioSource_t871AC2272F896738252F04EE949AEF5B241D3299_m0E8EFDB9B3D8DF1ADE10C56D3168A9C1BA19BF14_RuntimeMethod_var);
		__this->___audio_4 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___audio_4), (void*)L_1);
		// }
		return;
	}
}
// System.Void Collsionmusic::OnTriggerEnter(UnityEngine.Collider)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Collsionmusic_OnTriggerEnter_mB2C37910A60451AC1EEE9FCCD029936D0E3A11CC (Collsionmusic_t4EA448F820927E8767BC935993C05693BEFEFC42* __this, Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* ___col0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralCAF8804297181FF007CA835529DD4477CFD94A70);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (col.gameObject.tag == "Player")
		Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* L_0 = ___col0;
		NullCheck(L_0);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_1;
		L_1 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_0, NULL);
		NullCheck(L_1);
		String_t* L_2;
		L_2 = GameObject_get_tag_mEDD27BF795072834D656B286CBE51B2C99747805(L_1, NULL);
		bool L_3;
		L_3 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_2, _stringLiteralCAF8804297181FF007CA835529DD4477CFD94A70, NULL);
		if (!L_3)
		{
			goto IL_0038;
		}
	}
	{
		// audio.PlayOneShot(sound);
		AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* L_4 = __this->___audio_4;
		AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* L_5 = __this->___sound_5;
		NullCheck(L_4);
		AudioSource_PlayOneShot_m098BCAE084AABB128BB19ED805D2D985E7B75112(L_4, L_5, NULL);
		// Destroy(gameObject, 0.2f);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_6;
		L_6 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(__this, NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		Object_Destroy_m064F2A066491D2DC4FFCFBDBE5FCFFB807A04436(L_6, (0.200000003f), NULL);
	}

IL_0038:
	{
		// }
		return;
	}
}
// System.Void Collsionmusic::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Collsionmusic__ctor_m24D567290EA04D246DD58525701F9C89475D37CA (Collsionmusic_t4EA448F820927E8767BC935993C05693BEFEFC42* __this, const RuntimeMethod* method) 
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
// System.Void ComboSm::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ComboSm_Start_m98718464BAF9C11477E0EDE1033FAAED980816E7 (ComboSm_t204EFF4BA1F00967D138D95108874214D2766470* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisCombotext_t66C71AF95DB28158B23E969B02D5102D37877FAA_m18D8550B9905B72C133367C1A69285FCB8286EBA_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF60B928C99C24D9E42E0AB9D92799F0489DBA343);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Sm = GameObject.Find("combocounttext").GetComponent<Combotext>();
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0;
		L_0 = GameObject_Find_m7A669B4EEC2617AB82F6E3FF007CDCD9F21DB300(_stringLiteralF60B928C99C24D9E42E0AB9D92799F0489DBA343, NULL);
		NullCheck(L_0);
		Combotext_t66C71AF95DB28158B23E969B02D5102D37877FAA* L_1;
		L_1 = GameObject_GetComponent_TisCombotext_t66C71AF95DB28158B23E969B02D5102D37877FAA_m18D8550B9905B72C133367C1A69285FCB8286EBA(L_0, GameObject_GetComponent_TisCombotext_t66C71AF95DB28158B23E969B02D5102D37877FAA_m18D8550B9905B72C133367C1A69285FCB8286EBA_RuntimeMethod_var);
		__this->___Sm_4 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___Sm_4), (void*)L_1);
		// }
		return;
	}
}
// System.Void ComboSm::OnCollisionEnter(UnityEngine.Collision)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ComboSm_OnCollisionEnter_m7BE03F828010DBF6E04C5B2A69689E8B56B5519C (ComboSm_t204EFF4BA1F00967D138D95108874214D2766470* __this, Collision_tBCC6AEBD9A63E6DA2E50660DAC03CDCB1FF7A9B0* ___collision0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralCAF8804297181FF007CA835529DD4477CFD94A70);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (collision.gameObject.tag == "Player")
		Collision_tBCC6AEBD9A63E6DA2E50660DAC03CDCB1FF7A9B0* L_0 = ___collision0;
		NullCheck(L_0);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_1;
		L_1 = Collision_get_gameObject_m846FADBCA43E1849D3FE4D5EA44C02D055A70B3E(L_0, NULL);
		NullCheck(L_1);
		String_t* L_2;
		L_2 = GameObject_get_tag_mEDD27BF795072834D656B286CBE51B2C99747805(L_1, NULL);
		bool L_3;
		L_3 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_2, _stringLiteralCAF8804297181FF007CA835529DD4477CFD94A70, NULL);
		if (!L_3)
		{
			goto IL_002e;
		}
	}
	{
		// Sm.Combo += 1;
		Combotext_t66C71AF95DB28158B23E969B02D5102D37877FAA* L_4 = __this->___Sm_4;
		Combotext_t66C71AF95DB28158B23E969B02D5102D37877FAA* L_5 = L_4;
		NullCheck(L_5);
		float L_6 = L_5->___Combo_4;
		NullCheck(L_5);
		L_5->___Combo_4 = ((float)il2cpp_codegen_add(L_6, (1.0f)));
	}

IL_002e:
	{
		// }
		return;
	}
}
// System.Void ComboSm::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ComboSm__ctor_m73D64498E5A10D923000BBD08954697D8D913CFD (ComboSm_t204EFF4BA1F00967D138D95108874214D2766470* __this, const RuntimeMethod* method) 
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
// System.Void Combotext::SetCombotext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Combotext_SetCombotext_m0F6918DB4C455AEB65212332928C0A6EFEA65CE5 (const RuntimeMethod* method) 
{
	{
		// throw new NotImplementedException();
		NotImplementedException_t6366FE4DCF15094C51F4833B91A2AE68D4DA90E8* L_0 = (NotImplementedException_t6366FE4DCF15094C51F4833B91A2AE68D4DA90E8*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotImplementedException_t6366FE4DCF15094C51F4833B91A2AE68D4DA90E8_il2cpp_TypeInfo_var)));
		NullCheck(L_0);
		NotImplementedException__ctor_mDAB47BC6BD0E342E8F2171E5CABE3E67EA049F1C(L_0, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Combotext_SetCombotext_m0F6918DB4C455AEB65212332928C0A6EFEA65CE5_RuntimeMethod_var)));
	}
}
// System.Void Combotext::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Combotext_Start_m1EB18D8EBB110BDBB3C4B96526EE2BEC014385CC (Combotext_t66C71AF95DB28158B23E969B02D5102D37877FAA* __this, const RuntimeMethod* method) 
{
	{
		// Combo = 0;
		__this->___Combo_4 = (0.0f);
		// }
		return;
	}
}
// System.Void Combotext::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Combotext_Update_m3B39903D4004A01D25233D6D674C8FCDD7219447 (Combotext_t66C71AF95DB28158B23E969B02D5102D37877FAA* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral23114468D04FA2B7A2DA455B545DB914D0A3ED94);
		s_Il2CppMethodInitialized = true;
	}
	{
		// combocounttext.text = string.Format("{0}", Combo);
		TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957* L_0 = __this->___combocounttext_5;
		float L_1 = __this->___Combo_4;
		float L_2 = L_1;
		RuntimeObject* L_3 = Box(Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_il2cpp_TypeInfo_var, &L_2);
		String_t* L_4;
		L_4 = String_Format_mA8DBB4C2516B9723C5A41E6CB1E2FAF4BBE96DD8(_stringLiteral23114468D04FA2B7A2DA455B545DB914D0A3ED94, L_3, NULL);
		NullCheck(L_0);
		VirtualActionInvoker1< String_t* >::Invoke(66 /* System.Void TMPro.TMP_Text::set_text(System.String) */, L_0, L_4);
		// }
		return;
	}
}
// System.Void Combotext::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Combotext__ctor_mAFA7E750FC6C2A99168E6D58AC37A129FA5C4630 (Combotext_t66C71AF95DB28158B23E969B02D5102D37877FAA* __this, const RuntimeMethod* method) 
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
// System.Void Destroy::OnCollisionEnter(UnityEngine.Collision)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Destroy_OnCollisionEnter_mC76B6BFCD5BC88F5968ED7816B9132AF532ACB10 (Destroy_t4F2B6B7FD5AFA77880F1040DBFD52453E63F3EA3* __this, Collision_tBCC6AEBD9A63E6DA2E50660DAC03CDCB1FF7A9B0* ___collision0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralBEE62EE1896B072E94C4F64BA456F5C8EB28A281);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if(collision.gameObject.tag == "resetbox")
		Collision_tBCC6AEBD9A63E6DA2E50660DAC03CDCB1FF7A9B0* L_0 = ___collision0;
		NullCheck(L_0);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_1;
		L_1 = Collision_get_gameObject_m846FADBCA43E1849D3FE4D5EA44C02D055A70B3E(L_0, NULL);
		NullCheck(L_1);
		String_t* L_2;
		L_2 = GameObject_get_tag_mEDD27BF795072834D656B286CBE51B2C99747805(L_1, NULL);
		bool L_3;
		L_3 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_2, _stringLiteralBEE62EE1896B072E94C4F64BA456F5C8EB28A281, NULL);
		if (!L_3)
		{
			goto IL_0022;
		}
	}
	{
		// Destroy(this.gameObject);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_4;
		L_4 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(__this, NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		Object_Destroy_mE97D0A766419A81296E8D4E5C23D01D3FE91ACBB(L_4, NULL);
	}

IL_0022:
	{
		// }
		return;
	}
}
// System.Void Destroy::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Destroy__ctor_m413F23B3BA1D73EE1AAEB419EAC5307616BE5C39 (Destroy_t4F2B6B7FD5AFA77880F1040DBFD52453E63F3EA3* __this, const RuntimeMethod* method) 
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
// System.Void MinusComboSm::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MinusComboSm_Start_m9FA6D6996231C29713EADA9EEB43A4D7328003CF (MinusComboSm_tBACF61FA69DCBD7AF0DAE8C3C51E4F8C373251FC* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisCombotext_t66C71AF95DB28158B23E969B02D5102D37877FAA_m18D8550B9905B72C133367C1A69285FCB8286EBA_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF60B928C99C24D9E42E0AB9D92799F0489DBA343);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Sm = GameObject.Find("combocounttext").GetComponent<Combotext>();
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0;
		L_0 = GameObject_Find_m7A669B4EEC2617AB82F6E3FF007CDCD9F21DB300(_stringLiteralF60B928C99C24D9E42E0AB9D92799F0489DBA343, NULL);
		NullCheck(L_0);
		Combotext_t66C71AF95DB28158B23E969B02D5102D37877FAA* L_1;
		L_1 = GameObject_GetComponent_TisCombotext_t66C71AF95DB28158B23E969B02D5102D37877FAA_m18D8550B9905B72C133367C1A69285FCB8286EBA(L_0, GameObject_GetComponent_TisCombotext_t66C71AF95DB28158B23E969B02D5102D37877FAA_m18D8550B9905B72C133367C1A69285FCB8286EBA_RuntimeMethod_var);
		__this->___Sm_4 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___Sm_4), (void*)L_1);
		// }
		return;
	}
}
// System.Void MinusComboSm::OnCollisionEnter(UnityEngine.Collision)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MinusComboSm_OnCollisionEnter_mA23C9D75E1B6445ED91DAC766093C506ACD9BEE3 (MinusComboSm_tBACF61FA69DCBD7AF0DAE8C3C51E4F8C373251FC* __this, Collision_tBCC6AEBD9A63E6DA2E50660DAC03CDCB1FF7A9B0* ___collision0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralBEE62EE1896B072E94C4F64BA456F5C8EB28A281);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (collision.gameObject.tag == "resetbox")
		Collision_tBCC6AEBD9A63E6DA2E50660DAC03CDCB1FF7A9B0* L_0 = ___collision0;
		NullCheck(L_0);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_1;
		L_1 = Collision_get_gameObject_m846FADBCA43E1849D3FE4D5EA44C02D055A70B3E(L_0, NULL);
		NullCheck(L_1);
		String_t* L_2;
		L_2 = GameObject_get_tag_mEDD27BF795072834D656B286CBE51B2C99747805(L_1, NULL);
		bool L_3;
		L_3 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_2, _stringLiteralBEE62EE1896B072E94C4F64BA456F5C8EB28A281, NULL);
		if (!L_3)
		{
			goto IL_0032;
		}
	}
	{
		// Sm.Combo = 0;
		Combotext_t66C71AF95DB28158B23E969B02D5102D37877FAA* L_4 = __this->___Sm_4;
		NullCheck(L_4);
		L_4->___Combo_4 = (0.0f);
		// Destroy(this.gameObject);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_5;
		L_5 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(__this, NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		Object_Destroy_mE97D0A766419A81296E8D4E5C23D01D3FE91ACBB(L_5, NULL);
	}

IL_0032:
	{
		// }
		return;
	}
}
// System.Void MinusComboSm::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MinusComboSm__ctor_m4B3F3F29F1BFA2E3CA7443D52524BE452C526DCC (MinusComboSm_tBACF61FA69DCBD7AF0DAE8C3C51E4F8C373251FC* __this, const RuntimeMethod* method) 
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
// System.Void MinusScoregaugeManager::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MinusScoregaugeManager_Start_mC1282039006E14A56D7E85D5292ED3BB24EE41FD (MinusScoregaugeManager_t37D8435407667DA4B9ED8D9159C26C3DAFA87F23* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisSlider_t87EA570E3D6556CABF57456C2F3873FFD86E652F_m3B73E32B09A6667056AC232DA5238351F51DB7EA_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral4FA739569214BAE2DAEDF14D329C6B8DCA6CBC11);
		s_Il2CppMethodInitialized = true;
	}
	{
		// scoregauge = GameObject.Find("scoregauge").GetComponent<Slider>();
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0;
		L_0 = GameObject_Find_m7A669B4EEC2617AB82F6E3FF007CDCD9F21DB300(_stringLiteral4FA739569214BAE2DAEDF14D329C6B8DCA6CBC11, NULL);
		NullCheck(L_0);
		Slider_t87EA570E3D6556CABF57456C2F3873FFD86E652F* L_1;
		L_1 = GameObject_GetComponent_TisSlider_t87EA570E3D6556CABF57456C2F3873FFD86E652F_m3B73E32B09A6667056AC232DA5238351F51DB7EA(L_0, GameObject_GetComponent_TisSlider_t87EA570E3D6556CABF57456C2F3873FFD86E652F_m3B73E32B09A6667056AC232DA5238351F51DB7EA_RuntimeMethod_var);
		__this->___scoregauge_4 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___scoregauge_4), (void*)L_1);
		// scoregauge.value = 0;
		Slider_t87EA570E3D6556CABF57456C2F3873FFD86E652F* L_2 = __this->___scoregauge_4;
		NullCheck(L_2);
		VirtualActionInvoker1< float >::Invoke(47 /* System.Void UnityEngine.UI.Slider::set_value(System.Single) */, L_2, (0.0f));
		// }
		return;
	}
}
// System.Void MinusScoregaugeManager::OnCollisionEnter(UnityEngine.Collision)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MinusScoregaugeManager_OnCollisionEnter_m4E3FD69481F4BE136F481C37D8FB68D595DFD3BA (MinusScoregaugeManager_t37D8435407667DA4B9ED8D9159C26C3DAFA87F23* __this, Collision_tBCC6AEBD9A63E6DA2E50660DAC03CDCB1FF7A9B0* ___collision0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralCAF8804297181FF007CA835529DD4477CFD94A70);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (collision.gameObject.tag == "Player")
		Collision_tBCC6AEBD9A63E6DA2E50660DAC03CDCB1FF7A9B0* L_0 = ___collision0;
		NullCheck(L_0);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_1;
		L_1 = Collision_get_gameObject_m846FADBCA43E1849D3FE4D5EA44C02D055A70B3E(L_0, NULL);
		NullCheck(L_1);
		String_t* L_2;
		L_2 = GameObject_get_tag_mEDD27BF795072834D656B286CBE51B2C99747805(L_1, NULL);
		bool L_3;
		L_3 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_2, _stringLiteralCAF8804297181FF007CA835529DD4477CFD94A70, NULL);
		if (!L_3)
		{
			goto IL_002e;
		}
	}
	{
		// scoregauge.value -= 0.002f;
		Slider_t87EA570E3D6556CABF57456C2F3873FFD86E652F* L_4 = __this->___scoregauge_4;
		Slider_t87EA570E3D6556CABF57456C2F3873FFD86E652F* L_5 = L_4;
		NullCheck(L_5);
		float L_6;
		L_6 = VirtualFuncInvoker0< float >::Invoke(46 /* System.Single UnityEngine.UI.Slider::get_value() */, L_5);
		NullCheck(L_5);
		VirtualActionInvoker1< float >::Invoke(47 /* System.Void UnityEngine.UI.Slider::set_value(System.Single) */, L_5, ((float)il2cpp_codegen_subtract(L_6, (0.00200000009f))));
	}

IL_002e:
	{
		// }
		return;
	}
}
// System.Void MinusScoregaugeManager::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MinusScoregaugeManager__ctor_mA701ED1F788FCB1484BB1EB2BAA708E2CC1792C7 (MinusScoregaugeManager_t37D8435407667DA4B9ED8D9159C26C3DAFA87F23* __this, const RuntimeMethod* method) 
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
// System.Void MinusScoreSm::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MinusScoreSm_Start_mE4D9FF65DBB3512689025A0771981FC0F289ABF0 (MinusScoreSm_tF03B2CCED0184C9511627D15DDD6FE245A74697F* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisScoretext_t81C3E9BC508DF6567C782ECEF50A8CA49CFBC53B_mA9684CB865192F01841775287B493CA8E9487DC8_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral91483CC3E2DDED22CEABAF3EE1799436CE58D236);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Sm = GameObject.Find("scorecounttext").GetComponent<Scoretext>();
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0;
		L_0 = GameObject_Find_m7A669B4EEC2617AB82F6E3FF007CDCD9F21DB300(_stringLiteral91483CC3E2DDED22CEABAF3EE1799436CE58D236, NULL);
		NullCheck(L_0);
		Scoretext_t81C3E9BC508DF6567C782ECEF50A8CA49CFBC53B* L_1;
		L_1 = GameObject_GetComponent_TisScoretext_t81C3E9BC508DF6567C782ECEF50A8CA49CFBC53B_mA9684CB865192F01841775287B493CA8E9487DC8(L_0, GameObject_GetComponent_TisScoretext_t81C3E9BC508DF6567C782ECEF50A8CA49CFBC53B_mA9684CB865192F01841775287B493CA8E9487DC8_RuntimeMethod_var);
		__this->___Sm_4 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___Sm_4), (void*)L_1);
		// }
		return;
	}
}
// System.Void MinusScoreSm::OnCollisionEnter(UnityEngine.Collision)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MinusScoreSm_OnCollisionEnter_m8E679150B3EBA6585F10C942C9C9E8C27056A915 (MinusScoreSm_tF03B2CCED0184C9511627D15DDD6FE245A74697F* __this, Collision_tBCC6AEBD9A63E6DA2E50660DAC03CDCB1FF7A9B0* ___collision0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralCAF8804297181FF007CA835529DD4477CFD94A70);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (collision.gameObject.tag == "Player")
		Collision_tBCC6AEBD9A63E6DA2E50660DAC03CDCB1FF7A9B0* L_0 = ___collision0;
		NullCheck(L_0);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_1;
		L_1 = Collision_get_gameObject_m846FADBCA43E1849D3FE4D5EA44C02D055A70B3E(L_0, NULL);
		NullCheck(L_1);
		String_t* L_2;
		L_2 = GameObject_get_tag_mEDD27BF795072834D656B286CBE51B2C99747805(L_1, NULL);
		bool L_3;
		L_3 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_2, _stringLiteralCAF8804297181FF007CA835529DD4477CFD94A70, NULL);
		if (!L_3)
		{
			goto IL_002e;
		}
	}
	{
		// Sm.Score -= 5;
		Scoretext_t81C3E9BC508DF6567C782ECEF50A8CA49CFBC53B* L_4 = __this->___Sm_4;
		Scoretext_t81C3E9BC508DF6567C782ECEF50A8CA49CFBC53B* L_5 = L_4;
		NullCheck(L_5);
		float L_6 = L_5->___Score_4;
		NullCheck(L_5);
		L_5->___Score_4 = ((float)il2cpp_codegen_subtract(L_6, (5.0f)));
	}

IL_002e:
	{
		// }
		return;
	}
}
// System.Void MinusScoreSm::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MinusScoreSm__ctor_mA976DE949127BD58F55316F479A2854CE768AF5B (MinusScoreSm_tF03B2CCED0184C9511627D15DDD6FE245A74697F* __this, const RuntimeMethod* method) 
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
// System.Void Musicboxslide::FixedUpdate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Musicboxslide_FixedUpdate_m0BA8F1BEC53F9DE28E6EDB8ED8D94E79EABAF204 (Musicboxslide_tDA5C02383D64724F2749EE93DAA37DAE695BE3CC* __this, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// Transform myTransform = this.transform;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_0;
		L_0 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		// Vector3 pos = myTransform.position;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_1 = L_0;
		NullCheck(L_1);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2;
		L_2 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_1, NULL);
		V_0 = L_2;
		// pos.z -= 0.08f;
		float* L_3 = (&(&V_0)->___z_4);
		float* L_4 = L_3;
		float L_5 = *((float*)L_4);
		*((float*)L_4) = (float)((float)il2cpp_codegen_subtract(L_5, (0.0799999982f)));
		// myTransform.position = pos;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6 = V_0;
		NullCheck(L_1);
		Transform_set_position_mA1A817124BB41B685043DED2A9BA48CDF37C4156(L_1, L_6, NULL);
		// }
		return;
	}
}
// System.Void Musicboxslide::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Musicboxslide__ctor_m1D913CCE01132F601D1B59FD2891A4EEF3F1262B (Musicboxslide_tDA5C02383D64724F2749EE93DAA37DAE695BE3CC* __this, const RuntimeMethod* method) 
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
// System.Void Next1::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Next1_Start_mD22214C0168CEDFD1F08B020BDA7F397409E355D (Next1_tD81A0881C186B247881F9513268E3AECF40E55AC* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral48419E0AC7A3C471E758A3F53E24363D7898657B);
		s_Il2CppMethodInitialized = true;
	}
	{
		// this.gameObject.SetActive(false);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0;
		L_0 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(__this, NULL);
		NullCheck(L_0);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_0, (bool)0, NULL);
		// Invoke("Open", 95);
		MonoBehaviour_Invoke_mF724350C59362B0F1BFE26383209A274A29A63FB(__this, _stringLiteral48419E0AC7A3C471E758A3F53E24363D7898657B, (95.0f), NULL);
		// }
		return;
	}
}
// System.Void Next1::Open()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Next1_Open_mB21C2A699E6C8D0378CB9D4B9522B88C90F34FD4 (Next1_tD81A0881C186B247881F9513268E3AECF40E55AC* __this, const RuntimeMethod* method) 
{
	{
		// this.gameObject.SetActive(true);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0;
		L_0 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(__this, NULL);
		NullCheck(L_0);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_0, (bool)1, NULL);
		// }
		return;
	}
}
// System.Void Next1::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Next1__ctor_m54DE6C6F8BE0EF4D8A315A7E7561F2530E95A39A (Next1_tD81A0881C186B247881F9513268E3AECF40E55AC* __this, const RuntimeMethod* method) 
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
// System.Void Next2::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Next2_Start_m2FF60DBB07D2B1870C3F31BF030A41CC1DDBF967 (Next2_t3FB449AADB893114D532687345F9E322C724BC89* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral48419E0AC7A3C471E758A3F53E24363D7898657B);
		s_Il2CppMethodInitialized = true;
	}
	{
		// this.gameObject.SetActive(false);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0;
		L_0 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(__this, NULL);
		NullCheck(L_0);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_0, (bool)0, NULL);
		// Invoke("Open", 96);
		MonoBehaviour_Invoke_mF724350C59362B0F1BFE26383209A274A29A63FB(__this, _stringLiteral48419E0AC7A3C471E758A3F53E24363D7898657B, (96.0f), NULL);
		// }
		return;
	}
}
// System.Void Next2::Open()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Next2_Open_mFEBC98809412D843CB08FBA8DE4E01AE7ACE221A (Next2_t3FB449AADB893114D532687345F9E322C724BC89* __this, const RuntimeMethod* method) 
{
	{
		// this.gameObject.SetActive(true);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0;
		L_0 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(__this, NULL);
		NullCheck(L_0);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_0, (bool)1, NULL);
		// }
		return;
	}
}
// System.Void Next2::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Next2__ctor_m3B6EA4F2D902486D1EA74533084EEC246462CA01 (Next2_t3FB449AADB893114D532687345F9E322C724BC89* __this, const RuntimeMethod* method) 
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
// System.Void NonActive::OnTriggerEnter(UnityEngine.Collider)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NonActive_OnTriggerEnter_mDCA08D46FD62164205D9F9C27B1174C9A7F194ED (NonActive_t505A58BEB3C116AA2CE20F1ED05EA9203D32F442* __this, Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* ___col0, const RuntimeMethod* method) 
{
	{
		// this.gameObject.SetActive(false);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0;
		L_0 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(__this, NULL);
		NullCheck(L_0);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_0, (bool)0, NULL);
		// }
		return;
	}
}
// System.Void NonActive::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NonActive__ctor_mF157059A2FD7AEF07B18A509CDF8028048B17971 (NonActive_t505A58BEB3C116AA2CE20F1ED05EA9203D32F442* __this, const RuntimeMethod* method) 
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
// System.Void ScoregaugeManager::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ScoregaugeManager_Start_m78C409E3A469D7C735199B98D2173435A922FF6F (ScoregaugeManager_tE5BD928071BF7C92F99515E16AEBF3027D886924* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisSlider_t87EA570E3D6556CABF57456C2F3873FFD86E652F_m3B73E32B09A6667056AC232DA5238351F51DB7EA_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral4FA739569214BAE2DAEDF14D329C6B8DCA6CBC11);
		s_Il2CppMethodInitialized = true;
	}
	{
		// scoregauge = GameObject.Find("scoregauge").GetComponent<Slider>();
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0;
		L_0 = GameObject_Find_m7A669B4EEC2617AB82F6E3FF007CDCD9F21DB300(_stringLiteral4FA739569214BAE2DAEDF14D329C6B8DCA6CBC11, NULL);
		NullCheck(L_0);
		Slider_t87EA570E3D6556CABF57456C2F3873FFD86E652F* L_1;
		L_1 = GameObject_GetComponent_TisSlider_t87EA570E3D6556CABF57456C2F3873FFD86E652F_m3B73E32B09A6667056AC232DA5238351F51DB7EA(L_0, GameObject_GetComponent_TisSlider_t87EA570E3D6556CABF57456C2F3873FFD86E652F_m3B73E32B09A6667056AC232DA5238351F51DB7EA_RuntimeMethod_var);
		__this->___scoregauge_4 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___scoregauge_4), (void*)L_1);
		// scoregauge.value = 0;
		Slider_t87EA570E3D6556CABF57456C2F3873FFD86E652F* L_2 = __this->___scoregauge_4;
		NullCheck(L_2);
		VirtualActionInvoker1< float >::Invoke(47 /* System.Void UnityEngine.UI.Slider::set_value(System.Single) */, L_2, (0.0f));
		// }
		return;
	}
}
// System.Void ScoregaugeManager::OnCollisionEnter(UnityEngine.Collision)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ScoregaugeManager_OnCollisionEnter_m7EE942E2D6C1BC4113668D3B090A495C8C26DD8A (ScoregaugeManager_tE5BD928071BF7C92F99515E16AEBF3027D886924* __this, Collision_tBCC6AEBD9A63E6DA2E50660DAC03CDCB1FF7A9B0* ___collision0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralCAF8804297181FF007CA835529DD4477CFD94A70);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (collision.gameObject.tag == "Player")
		Collision_tBCC6AEBD9A63E6DA2E50660DAC03CDCB1FF7A9B0* L_0 = ___collision0;
		NullCheck(L_0);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_1;
		L_1 = Collision_get_gameObject_m846FADBCA43E1849D3FE4D5EA44C02D055A70B3E(L_0, NULL);
		NullCheck(L_1);
		String_t* L_2;
		L_2 = GameObject_get_tag_mEDD27BF795072834D656B286CBE51B2C99747805(L_1, NULL);
		bool L_3;
		L_3 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_2, _stringLiteralCAF8804297181FF007CA835529DD4477CFD94A70, NULL);
		if (!L_3)
		{
			goto IL_002e;
		}
	}
	{
		// scoregauge.value += 0.008f;
		Slider_t87EA570E3D6556CABF57456C2F3873FFD86E652F* L_4 = __this->___scoregauge_4;
		Slider_t87EA570E3D6556CABF57456C2F3873FFD86E652F* L_5 = L_4;
		NullCheck(L_5);
		float L_6;
		L_6 = VirtualFuncInvoker0< float >::Invoke(46 /* System.Single UnityEngine.UI.Slider::get_value() */, L_5);
		NullCheck(L_5);
		VirtualActionInvoker1< float >::Invoke(47 /* System.Void UnityEngine.UI.Slider::set_value(System.Single) */, L_5, ((float)il2cpp_codegen_add(L_6, (0.00800000038f))));
	}

IL_002e:
	{
		// }
		return;
	}
}
// System.Void ScoregaugeManager::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ScoregaugeManager__ctor_m09CC269CE006516B4D6B7CCCBEEE75995F1D3BF1 (ScoregaugeManager_tE5BD928071BF7C92F99515E16AEBF3027D886924* __this, const RuntimeMethod* method) 
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
// System.Void ScoreSm::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ScoreSm_Start_mC486374F303F72FD773B592C7518FB190D908A86 (ScoreSm_t45451B5935E6AA974EDA63F7B1A2935A1473A1A0* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisScoretext_t81C3E9BC508DF6567C782ECEF50A8CA49CFBC53B_mA9684CB865192F01841775287B493CA8E9487DC8_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral91483CC3E2DDED22CEABAF3EE1799436CE58D236);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Sm = GameObject.Find("scorecounttext").GetComponent<Scoretext>();
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0;
		L_0 = GameObject_Find_m7A669B4EEC2617AB82F6E3FF007CDCD9F21DB300(_stringLiteral91483CC3E2DDED22CEABAF3EE1799436CE58D236, NULL);
		NullCheck(L_0);
		Scoretext_t81C3E9BC508DF6567C782ECEF50A8CA49CFBC53B* L_1;
		L_1 = GameObject_GetComponent_TisScoretext_t81C3E9BC508DF6567C782ECEF50A8CA49CFBC53B_mA9684CB865192F01841775287B493CA8E9487DC8(L_0, GameObject_GetComponent_TisScoretext_t81C3E9BC508DF6567C782ECEF50A8CA49CFBC53B_mA9684CB865192F01841775287B493CA8E9487DC8_RuntimeMethod_var);
		__this->___Sm_4 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___Sm_4), (void*)L_1);
		// }
		return;
	}
}
// System.Void ScoreSm::OnCollisionEnter(UnityEngine.Collision)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ScoreSm_OnCollisionEnter_mFB1ABF9F3796424DAECC30A0792A4E5BFB53564D (ScoreSm_t45451B5935E6AA974EDA63F7B1A2935A1473A1A0* __this, Collision_tBCC6AEBD9A63E6DA2E50660DAC03CDCB1FF7A9B0* ___collision0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralCAF8804297181FF007CA835529DD4477CFD94A70);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (collision.gameObject.tag == "Player")
		Collision_tBCC6AEBD9A63E6DA2E50660DAC03CDCB1FF7A9B0* L_0 = ___collision0;
		NullCheck(L_0);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_1;
		L_1 = Collision_get_gameObject_m846FADBCA43E1849D3FE4D5EA44C02D055A70B3E(L_0, NULL);
		NullCheck(L_1);
		String_t* L_2;
		L_2 = GameObject_get_tag_mEDD27BF795072834D656B286CBE51B2C99747805(L_1, NULL);
		bool L_3;
		L_3 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_2, _stringLiteralCAF8804297181FF007CA835529DD4477CFD94A70, NULL);
		if (!L_3)
		{
			goto IL_002e;
		}
	}
	{
		// Sm.Score += 20;
		Scoretext_t81C3E9BC508DF6567C782ECEF50A8CA49CFBC53B* L_4 = __this->___Sm_4;
		Scoretext_t81C3E9BC508DF6567C782ECEF50A8CA49CFBC53B* L_5 = L_4;
		NullCheck(L_5);
		float L_6 = L_5->___Score_4;
		NullCheck(L_5);
		L_5->___Score_4 = ((float)il2cpp_codegen_add(L_6, (20.0f)));
	}

IL_002e:
	{
		// }
		return;
	}
}
// System.Void ScoreSm::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ScoreSm__ctor_m6DD8490D38BB7F389637024083569274BDC35311 (ScoreSm_t45451B5935E6AA974EDA63F7B1A2935A1473A1A0* __this, const RuntimeMethod* method) 
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
// System.Void Scoretext::SetScoretext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Scoretext_SetScoretext_m708AA50AD2C152685CDBE36688E4D83CFEF47B1E (const RuntimeMethod* method) 
{
	{
		// throw new NotImplementedException();
		NotImplementedException_t6366FE4DCF15094C51F4833B91A2AE68D4DA90E8* L_0 = (NotImplementedException_t6366FE4DCF15094C51F4833B91A2AE68D4DA90E8*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotImplementedException_t6366FE4DCF15094C51F4833B91A2AE68D4DA90E8_il2cpp_TypeInfo_var)));
		NullCheck(L_0);
		NotImplementedException__ctor_mDAB47BC6BD0E342E8F2171E5CABE3E67EA049F1C(L_0, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Scoretext_SetScoretext_m708AA50AD2C152685CDBE36688E4D83CFEF47B1E_RuntimeMethod_var)));
	}
}
// System.Void Scoretext::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Scoretext_Start_m06483FFAA4DABFF74C5B2F476955FE57B6AED6DB (Scoretext_t81C3E9BC508DF6567C782ECEF50A8CA49CFBC53B* __this, const RuntimeMethod* method) 
{
	{
		// Score = 0;
		__this->___Score_4 = (0.0f);
		// }
		return;
	}
}
// System.Void Scoretext::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Scoretext_Update_mBEDE1E0F08C9EFCDE54DA042732370176185C5AF (Scoretext_t81C3E9BC508DF6567C782ECEF50A8CA49CFBC53B* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral23114468D04FA2B7A2DA455B545DB914D0A3ED94);
		s_Il2CppMethodInitialized = true;
	}
	{
		// scorecounttext.text = string.Format("{0}", Score);
		TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957* L_0 = __this->___scorecounttext_5;
		float L_1 = __this->___Score_4;
		float L_2 = L_1;
		RuntimeObject* L_3 = Box(Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_il2cpp_TypeInfo_var, &L_2);
		String_t* L_4;
		L_4 = String_Format_mA8DBB4C2516B9723C5A41E6CB1E2FAF4BBE96DD8(_stringLiteral23114468D04FA2B7A2DA455B545DB914D0A3ED94, L_3, NULL);
		NullCheck(L_0);
		VirtualActionInvoker1< String_t* >::Invoke(66 /* System.Void TMPro.TMP_Text::set_text(System.String) */, L_0, L_4);
		// }
		return;
	}
}
// System.Void Scoretext::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Scoretext__ctor_m1B181933D96FF1EDC9EA48D98DEE381346F5D53D (Scoretext_t81C3E9BC508DF6567C782ECEF50A8CA49CFBC53B* __this, const RuntimeMethod* method) 
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
// System.Void Title::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Title_Start_m7C4287FBCE727AF724A391DCD73B245F4F83F842 (Title_tDC7DA3F4A783D017736F6DE0F1AB9E27437522AA* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisButton_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098_mB997CBF78A37938DC1624352E12D0205078CB290_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Title_StartGame_m7A64F4362F6CA60569D6D4D4D2CC1907D29E50FC_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// gameObject.GetComponent<Button>().onClick.AddListener(StartGame);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0;
		L_0 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(__this, NULL);
		NullCheck(L_0);
		Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* L_1;
		L_1 = GameObject_GetComponent_TisButton_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098_mB997CBF78A37938DC1624352E12D0205078CB290(L_0, GameObject_GetComponent_TisButton_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098_mB997CBF78A37938DC1624352E12D0205078CB290_RuntimeMethod_var);
		NullCheck(L_1);
		ButtonClickedEvent_t8EA72E90B3BD1392FB3B3EF167D5121C23569E4C* L_2;
		L_2 = Button_get_onClick_m701712A7F7F000CC80D517C4510697E15722C35C_inline(L_1, NULL);
		UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* L_3 = (UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7*)il2cpp_codegen_object_new(UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7_il2cpp_TypeInfo_var);
		NullCheck(L_3);
		UnityAction__ctor_mC53E20D6B66E0D5688CD81B88DBB34F5A58B7131(L_3, __this, (intptr_t)((void*)Title_StartGame_m7A64F4362F6CA60569D6D4D4D2CC1907D29E50FC_RuntimeMethod_var), NULL);
		NullCheck(L_2);
		UnityEvent_AddListener_m8AA4287C16628486B41DA41CA5E7A856A706D302(L_2, L_3, NULL);
		// }
		return;
	}
}
// System.Void Title::StartGame()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Title_StartGame_m7A64F4362F6CA60569D6D4D4D2CC1907D29E50FC (Title_tDC7DA3F4A783D017736F6DE0F1AB9E27437522AA* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3E538D25AD88E153C305B95581F14918239F2431);
		s_Il2CppMethodInitialized = true;
	}
	{
		// SceneManager.LoadScene("GameScene");
		il2cpp_codegen_runtime_class_init_inline(SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var);
		SceneManager_LoadScene_mBB3DBC1601A21F8F4E8A5D68FED30EA9412F218E(_stringLiteral3E538D25AD88E153C305B95581F14918239F2431, NULL);
		// }
		return;
	}
}
// System.Void Title::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Title__ctor_mD048B1928FB56935584ECB8B23993B2F8ED77772 (Title_tDC7DA3F4A783D017736F6DE0F1AB9E27437522AA* __this, const RuntimeMethod* method) 
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
// System.Void Trigger::PointerDown()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Trigger_PointerDown_m5888C9697E0C965C3C4BDECDAF5A3A77DF273D8A (Trigger_t9FBC4B9D2172AC5785AC296E1CC2CCD678F61DD3* __this, const RuntimeMethod* method) 
{
	{
		// this.gameObject.SetActive(true);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0;
		L_0 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(__this, NULL);
		NullCheck(L_0);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_0, (bool)1, NULL);
		// }
		return;
	}
}
// System.Void Trigger::PointerUp()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Trigger_PointerUp_m234EE2D79B8906FEF696BF1044FADF42E8794BA7 (Trigger_t9FBC4B9D2172AC5785AC296E1CC2CCD678F61DD3* __this, const RuntimeMethod* method) 
{
	{
		// this.gameObject.SetActive(false);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0;
		L_0 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(__this, NULL);
		NullCheck(L_0);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_0, (bool)0, NULL);
		// }
		return;
	}
}
// System.Void Trigger::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Trigger__ctor_mB2B5CCC97EBE7BF658CA4ABA1BB9A02C964044F4 (Trigger_t9FBC4B9D2172AC5785AC296E1CC2CCD678F61DD3* __this, const RuntimeMethod* method) 
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
// System.Void DestroyNotes::OnCollisionEnter(UnityEngine.Collision)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DestroyNotes_OnCollisionEnter_mD39B0930B15593C8EE833C69FCA437279E397968 (DestroyNotes_tF76908B49C16499852501C1B66D481349586919D* __this, Collision_tBCC6AEBD9A63E6DA2E50660DAC03CDCB1FF7A9B0* ___collision0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralBEE62EE1896B072E94C4F64BA456F5C8EB28A281);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if(collision.gameObject.tag == "resetbox")
		Collision_tBCC6AEBD9A63E6DA2E50660DAC03CDCB1FF7A9B0* L_0 = ___collision0;
		NullCheck(L_0);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_1;
		L_1 = Collision_get_gameObject_m846FADBCA43E1849D3FE4D5EA44C02D055A70B3E(L_0, NULL);
		NullCheck(L_1);
		String_t* L_2;
		L_2 = GameObject_get_tag_mEDD27BF795072834D656B286CBE51B2C99747805(L_1, NULL);
		bool L_3;
		L_3 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_2, _stringLiteralBEE62EE1896B072E94C4F64BA456F5C8EB28A281, NULL);
		if (!L_3)
		{
			goto IL_0022;
		}
	}
	{
		// Destroy(this.gameObject);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_4;
		L_4 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(__this, NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		Object_Destroy_mE97D0A766419A81296E8D4E5C23D01D3FE91ACBB(L_4, NULL);
	}

IL_0022:
	{
		// }
		return;
	}
}
// System.Void DestroyNotes::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DestroyNotes__ctor_m6EF0D707685A169CF6B5277F1A48C994376A85ED (DestroyNotes_tF76908B49C16499852501C1B66D481349586919D* __this, const RuntimeMethod* method) 
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
// System.Void FixPositionXZ::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FixPositionXZ_Start_m3BBD9C4EC6AE29EB275F6C3298205E8E6C044A21 (FixPositionXZ_tD037E24FD34AA9295C8D0161026E20227AC3F5C4* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral35228A78D78BD4F381E9B85F5B9D5B2950E49EAB);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD56CFB1F5FA3C6B4DFB1376F05C30AB9C297A837);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD86FFD4AE2DFBB672C26E2604E0A6C0C951ED085);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralECE4117399A9C27DA4899625DD503B7F2929546C);
		s_Il2CppMethodInitialized = true;
	}
	{
		// roadOrange = GameObject.Find("road.orange");
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0;
		L_0 = GameObject_Find_m7A669B4EEC2617AB82F6E3FF007CDCD9F21DB300(_stringLiteralD56CFB1F5FA3C6B4DFB1376F05C30AB9C297A837, NULL);
		__this->___roadOrange_4 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___roadOrange_4), (void*)L_0);
		// roadBlue = GameObject.Find("road.blue");
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_1;
		L_1 = GameObject_Find_m7A669B4EEC2617AB82F6E3FF007CDCD9F21DB300(_stringLiteral35228A78D78BD4F381E9B85F5B9D5B2950E49EAB, NULL);
		__this->___roadBlue_5 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___roadBlue_5), (void*)L_1);
		// roadGreen = GameObject.Find("road.green");
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_2;
		L_2 = GameObject_Find_m7A669B4EEC2617AB82F6E3FF007CDCD9F21DB300(_stringLiteralECE4117399A9C27DA4899625DD503B7F2929546C, NULL);
		__this->___roadGreen_6 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___roadGreen_6), (void*)L_2);
		// roadPink = GameObject.Find("road.pink");
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_3;
		L_3 = GameObject_Find_m7A669B4EEC2617AB82F6E3FF007CDCD9F21DB300(_stringLiteralD86FFD4AE2DFBB672C26E2604E0A6C0C951ED085, NULL);
		__this->___roadPink_7 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___roadPink_7), (void*)L_3);
		// }
		return;
	}
}
// System.Void FixPositionXZ::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FixPositionXZ_Update_m7695871DE31C8C98C7A7CFCB49741BDCF95CB536 (FixPositionXZ_tD037E24FD34AA9295C8D0161026E20227AC3F5C4* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3FBB63CFAA7ABAA6A6729137CC09873389F54604);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral4EC929BECF2ED51204D7DABA47615F80D85C5F62);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral6D93F450F49054FA2C14FE9372242515581F2E99);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralCC1ED1436C87CDBD321D66C84519BA833DF67915);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	{
		// switch(this.gameObject.name)
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0;
		L_0 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(__this, NULL);
		NullCheck(L_0);
		String_t* L_1;
		L_1 = Object_get_name_mAC2F6B897CF1303BA4249B4CB55271AFACBB6392(L_0, NULL);
		V_0 = L_1;
		String_t* L_2 = V_0;
		bool L_3;
		L_3 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_2, _stringLiteralCC1ED1436C87CDBD321D66C84519BA833DF67915, NULL);
		if (L_3)
		{
			goto IL_0047;
		}
	}
	{
		String_t* L_4 = V_0;
		bool L_5;
		L_5 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_4, _stringLiteral4EC929BECF2ED51204D7DABA47615F80D85C5F62, NULL);
		if (L_5)
		{
			goto IL_0092;
		}
	}
	{
		String_t* L_6 = V_0;
		bool L_7;
		L_7 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_6, _stringLiteral3FBB63CFAA7ABAA6A6729137CC09873389F54604, NULL);
		if (L_7)
		{
			goto IL_00dd;
		}
	}
	{
		String_t* L_8 = V_0;
		bool L_9;
		L_9 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_8, _stringLiteral6D93F450F49054FA2C14FE9372242515581F2E99, NULL);
		if (L_9)
		{
			goto IL_0128;
		}
	}
	{
		return;
	}

IL_0047:
	{
		// this.transform.position=  new Vector3(roadOrange.transform.position.x, this.transform.position.y, roadOrange.transform.position.z);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_10;
		L_10 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_11 = __this->___roadOrange_4;
		NullCheck(L_11);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_12;
		L_12 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_11, NULL);
		NullCheck(L_12);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_13;
		L_13 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_12, NULL);
		float L_14 = L_13.___x_2;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_15;
		L_15 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_15);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_16;
		L_16 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_15, NULL);
		float L_17 = L_16.___y_3;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_18 = __this->___roadOrange_4;
		NullCheck(L_18);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_19;
		L_19 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_18, NULL);
		NullCheck(L_19);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_20;
		L_20 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_19, NULL);
		float L_21 = L_20.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_22;
		memset((&L_22), 0, sizeof(L_22));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_22), L_14, L_17, L_21, /*hidden argument*/NULL);
		NullCheck(L_10);
		Transform_set_position_mA1A817124BB41B685043DED2A9BA48CDF37C4156(L_10, L_22, NULL);
		// break;
		return;
	}

IL_0092:
	{
		// this.transform.position =  new Vector3(roadBlue.transform.position.x, this.transform.position.y, roadBlue.transform.position.z);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_23;
		L_23 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_24 = __this->___roadBlue_5;
		NullCheck(L_24);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_25;
		L_25 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_24, NULL);
		NullCheck(L_25);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_26;
		L_26 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_25, NULL);
		float L_27 = L_26.___x_2;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_28;
		L_28 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_28);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_29;
		L_29 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_28, NULL);
		float L_30 = L_29.___y_3;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_31 = __this->___roadBlue_5;
		NullCheck(L_31);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_32;
		L_32 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_31, NULL);
		NullCheck(L_32);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_33;
		L_33 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_32, NULL);
		float L_34 = L_33.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_35;
		memset((&L_35), 0, sizeof(L_35));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_35), L_27, L_30, L_34, /*hidden argument*/NULL);
		NullCheck(L_23);
		Transform_set_position_mA1A817124BB41B685043DED2A9BA48CDF37C4156(L_23, L_35, NULL);
		// break;
		return;
	}

IL_00dd:
	{
		// this.transform.position = new Vector3(roadGreen.transform.position.x, this.transform.position.y, roadGreen.transform.position.z);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_36;
		L_36 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_37 = __this->___roadGreen_6;
		NullCheck(L_37);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_38;
		L_38 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_37, NULL);
		NullCheck(L_38);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_39;
		L_39 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_38, NULL);
		float L_40 = L_39.___x_2;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_41;
		L_41 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_41);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_42;
		L_42 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_41, NULL);
		float L_43 = L_42.___y_3;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_44 = __this->___roadGreen_6;
		NullCheck(L_44);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_45;
		L_45 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_44, NULL);
		NullCheck(L_45);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_46;
		L_46 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_45, NULL);
		float L_47 = L_46.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_48;
		memset((&L_48), 0, sizeof(L_48));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_48), L_40, L_43, L_47, /*hidden argument*/NULL);
		NullCheck(L_36);
		Transform_set_position_mA1A817124BB41B685043DED2A9BA48CDF37C4156(L_36, L_48, NULL);
		// break;
		return;
	}

IL_0128:
	{
		// this.transform.position =  new Vector3(roadPink.transform.position.x, this.transform.position.y, roadPink.transform.position.z);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_49;
		L_49 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_50 = __this->___roadPink_7;
		NullCheck(L_50);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_51;
		L_51 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_50, NULL);
		NullCheck(L_51);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_52;
		L_52 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_51, NULL);
		float L_53 = L_52.___x_2;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_54;
		L_54 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_54);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_55;
		L_55 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_54, NULL);
		float L_56 = L_55.___y_3;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_57 = __this->___roadPink_7;
		NullCheck(L_57);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_58;
		L_58 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_57, NULL);
		NullCheck(L_58);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_59;
		L_59 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_58, NULL);
		float L_60 = L_59.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_61;
		memset((&L_61), 0, sizeof(L_61));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_61), L_53, L_56, L_60, /*hidden argument*/NULL);
		NullCheck(L_49);
		Transform_set_position_mA1A817124BB41B685043DED2A9BA48CDF37C4156(L_49, L_61, NULL);
		// }
		return;
	}
}
// System.Void FixPositionXZ::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FixPositionXZ__ctor_m6A4F10DB883BE41AE908B19ED4A92154C452CE4F (FixPositionXZ_tD037E24FD34AA9295C8D0161026E20227AC3F5C4* __this, const RuntimeMethod* method) 
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
// System.Void NotesGenerator::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NotesGenerator_Start_mF1A225DD2E9B99D533456D3F25C12365D9295B77 (NotesGenerator_tD968B1468A55A495385ACE41CDC9423D02852B91* __this, const RuntimeMethod* method) 
{
	{
		// StartCoroutine(GetRondomNum());
		RuntimeObject* L_0;
		L_0 = NotesGenerator_GetRondomNum_m9CB4431F3B45E9D8F7F1828605AC6C3B3CB2192E(__this, NULL);
		Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B* L_1;
		L_1 = MonoBehaviour_StartCoroutine_m4CAFF732AA28CD3BDC5363B44A863575530EC812(__this, L_0, NULL);
		// }
		return;
	}
}
// System.Void NotesGenerator::OnStartButton()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NotesGenerator_OnStartButton_m3C7B8F1D85B536F8F59F95E6BA0D01BBC5E1C5E4 (NotesGenerator_tD968B1468A55A495385ACE41CDC9423D02852B91* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		// isActive = true;
		__this->___isActive_15 = (bool)1;
		// soundController.MusicPlay();
		SoundController_tA53F7251931CF12B1E75D0DF2F56D42DBFC61071* L_0 = __this->___soundController_4;
		NullCheck(L_0);
		SoundController_MusicPlay_mB20DA66ED50438A38FEF9D89928F08756E7F883A(L_0, NULL);
		// for(int i = 0; i < rhythmObjects.Length; i++)
		V_0 = 0;
		goto IL_0028;
	}

IL_0016:
	{
		// rhythmObjects[i].IsActive(true);
		RhythmObjectU5BU5D_tB69B4B2405497D929A9E0301E27713F005F92774* L_1 = __this->___rhythmObjects_5;
		int32_t L_2 = V_0;
		NullCheck(L_1);
		int32_t L_3 = L_2;
		RhythmObject_t48B5812FD53B54DB2453283D026C825E88D880A3* L_4 = (L_1)->GetAt(static_cast<il2cpp_array_size_t>(L_3));
		NullCheck(L_4);
		RhythmObject_IsActive_m0C72212BC60BE50237C7264C1AC84F169FFEF2E3_inline(L_4, (bool)1, NULL);
		// for(int i = 0; i < rhythmObjects.Length; i++)
		int32_t L_5 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_5, 1));
	}

IL_0028:
	{
		// for(int i = 0; i < rhythmObjects.Length; i++)
		int32_t L_6 = V_0;
		RhythmObjectU5BU5D_tB69B4B2405497D929A9E0301E27713F005F92774* L_7 = __this->___rhythmObjects_5;
		NullCheck(L_7);
		if ((((int32_t)L_6) < ((int32_t)((int32_t)(((RuntimeArray*)L_7)->max_length)))))
		{
			goto IL_0016;
		}
	}
	{
		// }
		return;
	}
}
// System.Void NotesGenerator::OnEndButton()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NotesGenerator_OnEndButton_mAADA1995052526AB56005A653E975FFF7EA802F3 (NotesGenerator_tD968B1468A55A495385ACE41CDC9423D02852B91* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		// isActive = false;
		__this->___isActive_15 = (bool)0;
		// soundController.MusicStop();
		SoundController_tA53F7251931CF12B1E75D0DF2F56D42DBFC61071* L_0 = __this->___soundController_4;
		NullCheck(L_0);
		SoundController_MusicStop_m30C04C66EDA324E2E13BEE55D21B3BC3E4762444(L_0, NULL);
		// for(int i = 0; i < rhythmObjects.Length; i++)
		V_0 = 0;
		goto IL_0028;
	}

IL_0016:
	{
		// rhythmObjects[i].IsActive(false);
		RhythmObjectU5BU5D_tB69B4B2405497D929A9E0301E27713F005F92774* L_1 = __this->___rhythmObjects_5;
		int32_t L_2 = V_0;
		NullCheck(L_1);
		int32_t L_3 = L_2;
		RhythmObject_t48B5812FD53B54DB2453283D026C825E88D880A3* L_4 = (L_1)->GetAt(static_cast<il2cpp_array_size_t>(L_3));
		NullCheck(L_4);
		RhythmObject_IsActive_m0C72212BC60BE50237C7264C1AC84F169FFEF2E3_inline(L_4, (bool)0, NULL);
		// for(int i = 0; i < rhythmObjects.Length; i++)
		int32_t L_5 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_5, 1));
	}

IL_0028:
	{
		// for(int i = 0; i < rhythmObjects.Length; i++)
		int32_t L_6 = V_0;
		RhythmObjectU5BU5D_tB69B4B2405497D929A9E0301E27713F005F92774* L_7 = __this->___rhythmObjects_5;
		NullCheck(L_7);
		if ((((int32_t)L_6) < ((int32_t)((int32_t)(((RuntimeArray*)L_7)->max_length)))))
		{
			goto IL_0016;
		}
	}
	{
		// }
		return;
	}
}
// System.Void NotesGenerator::GenerateNotes(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NotesGenerator_GenerateNotes_mC712C912FD2ABB3478BF9D887E4B6B4691E4E34E (NotesGenerator_tD968B1468A55A495385ACE41CDC9423D02852B91* __this, int32_t ___num0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m831D2F71DF2AA6C93AFDFEFA04CF2CFC5FBBCDB4_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral496C35D9CB320A64C3EA3C04B184307C75231B59);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if(!(0 <= num && num <= 4))
		int32_t L_0 = ___num0;
		if ((((int32_t)0) > ((int32_t)L_0)))
		{
			goto IL_0008;
		}
	}
	{
		int32_t L_1 = ___num0;
		if ((((int32_t)L_1) <= ((int32_t)4)))
		{
			goto IL_0013;
		}
	}

IL_0008:
	{
		// Debug.LogError("0~4???????????");
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_LogError_mB00B2B4468EF3CAF041B038D840820FB84C924B2(_stringLiteral496C35D9CB320A64C3EA3C04B184307C75231B59, NULL);
		// return;
		return;
	}

IL_0013:
	{
		int32_t L_2 = ___num0;
		switch (L_2)
		{
			case 0:
			{
				goto IL_002e;
			}
			case 1:
			{
				goto IL_0050;
			}
			case 2:
			{
				goto IL_0072;
			}
			case 3:
			{
				goto IL_0094;
			}
			case 4:
			{
				goto IL_00b5;
			}
		}
	}
	{
		return;
	}

IL_002e:
	{
		// Instantiate(notesOrange, originOrange.transform.position, Quaternion.identity);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_3 = __this->___notesOrange_14;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_4 = __this->___originOrange_6;
		NullCheck(L_4);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_5;
		L_5 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_4, NULL);
		NullCheck(L_5);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6;
		L_6 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_5, NULL);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_7;
		L_7 = Quaternion_get_identity_m7E701AE095ED10FD5EA0B50ABCFDE2EEFF2173A5_inline(NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_8;
		L_8 = Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m831D2F71DF2AA6C93AFDFEFA04CF2CFC5FBBCDB4(L_3, L_6, L_7, Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m831D2F71DF2AA6C93AFDFEFA04CF2CFC5FBBCDB4_RuntimeMethod_var);
		// break;
		return;
	}

IL_0050:
	{
		// Instantiate(notesBlue, originBlue.transform.position, Quaternion.identity);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_9 = __this->___notesBlue_13;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_10 = __this->___originBlue_7;
		NullCheck(L_10);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_11;
		L_11 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_10, NULL);
		NullCheck(L_11);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_12;
		L_12 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_11, NULL);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_13;
		L_13 = Quaternion_get_identity_m7E701AE095ED10FD5EA0B50ABCFDE2EEFF2173A5_inline(NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_14;
		L_14 = Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m831D2F71DF2AA6C93AFDFEFA04CF2CFC5FBBCDB4(L_9, L_12, L_13, Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m831D2F71DF2AA6C93AFDFEFA04CF2CFC5FBBCDB4_RuntimeMethod_var);
		// break;
		return;
	}

IL_0072:
	{
		// Instantiate(notesGreen, originGreen.transform.position, Quaternion.identity);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_15 = __this->___notesGreen_12;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_16 = __this->___originGreen_8;
		NullCheck(L_16);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_17;
		L_17 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_16, NULL);
		NullCheck(L_17);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_18;
		L_18 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_17, NULL);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_19;
		L_19 = Quaternion_get_identity_m7E701AE095ED10FD5EA0B50ABCFDE2EEFF2173A5_inline(NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_20;
		L_20 = Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m831D2F71DF2AA6C93AFDFEFA04CF2CFC5FBBCDB4(L_15, L_18, L_19, Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m831D2F71DF2AA6C93AFDFEFA04CF2CFC5FBBCDB4_RuntimeMethod_var);
		// break;
		return;
	}

IL_0094:
	{
		// Instantiate(notesPink, originPink.transform.position, Quaternion.identity);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_21 = __this->___notesPink_11;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_22 = __this->___originPink_9;
		NullCheck(L_22);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_23;
		L_23 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_22, NULL);
		NullCheck(L_23);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_24;
		L_24 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_23, NULL);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_25;
		L_25 = Quaternion_get_identity_m7E701AE095ED10FD5EA0B50ABCFDE2EEFF2173A5_inline(NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_26;
		L_26 = Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m831D2F71DF2AA6C93AFDFEFA04CF2CFC5FBBCDB4(L_21, L_24, L_25, Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m831D2F71DF2AA6C93AFDFEFA04CF2CFC5FBBCDB4_RuntimeMethod_var);
	}

IL_00b5:
	{
		// return;
		return;
	}
}
// System.Collections.IEnumerator NotesGenerator::GetRondomNum()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* NotesGenerator_GetRondomNum_m9CB4431F3B45E9D8F7F1828605AC6C3B3CB2192E (NotesGenerator_tD968B1468A55A495385ACE41CDC9423D02852B91* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CGetRondomNumU3Ed__17_t9A4C5E43B0267F9539B52C841AEAB83479F33F5D_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CGetRondomNumU3Ed__17_t9A4C5E43B0267F9539B52C841AEAB83479F33F5D* L_0 = (U3CGetRondomNumU3Ed__17_t9A4C5E43B0267F9539B52C841AEAB83479F33F5D*)il2cpp_codegen_object_new(U3CGetRondomNumU3Ed__17_t9A4C5E43B0267F9539B52C841AEAB83479F33F5D_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		U3CGetRondomNumU3Ed__17__ctor_m29316C9E6E5A3FD7EC93E5E3CE065AC7DD7DF999(L_0, 0, NULL);
		U3CGetRondomNumU3Ed__17_t9A4C5E43B0267F9539B52C841AEAB83479F33F5D* L_1 = L_0;
		NullCheck(L_1);
		L_1->___U3CU3E4__this_2 = __this;
		Il2CppCodeGenWriteBarrier((void**)(&L_1->___U3CU3E4__this_2), (void*)__this);
		return L_1;
	}
}
// System.Void NotesGenerator::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NotesGenerator__ctor_mBC3AE490D6573E0B9ECAA83B188316052DB0B47F (NotesGenerator_tD968B1468A55A495385ACE41CDC9423D02852B91* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RhythmObjectU5BU5D_tB69B4B2405497D929A9E0301E27713F005F92774_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// [SerializeField] private RhythmObject[] rhythmObjects = new RhythmObject[6];
		RhythmObjectU5BU5D_tB69B4B2405497D929A9E0301E27713F005F92774* L_0 = (RhythmObjectU5BU5D_tB69B4B2405497D929A9E0301E27713F005F92774*)(RhythmObjectU5BU5D_tB69B4B2405497D929A9E0301E27713F005F92774*)SZArrayNew(RhythmObjectU5BU5D_tB69B4B2405497D929A9E0301E27713F005F92774_il2cpp_TypeInfo_var, (uint32_t)6);
		__this->___rhythmObjects_5 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___rhythmObjects_5), (void*)L_0);
		// private float generateTime = 2.0f;
		__this->___generateTime_16 = (2.0f);
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
// System.Void NotesGenerator/<GetRondomNum>d__17::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CGetRondomNumU3Ed__17__ctor_m29316C9E6E5A3FD7EC93E5E3CE065AC7DD7DF999 (U3CGetRondomNumU3Ed__17_t9A4C5E43B0267F9539B52C841AEAB83479F33F5D* __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		int32_t L_0 = ___U3CU3E1__state0;
		__this->___U3CU3E1__state_0 = L_0;
		return;
	}
}
// System.Void NotesGenerator/<GetRondomNum>d__17::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CGetRondomNumU3Ed__17_System_IDisposable_Dispose_m57D904156116737B9FC6FCF3B3FB1549A309CDA3 (U3CGetRondomNumU3Ed__17_t9A4C5E43B0267F9539B52C841AEAB83479F33F5D* __this, const RuntimeMethod* method) 
{
	{
		return;
	}
}
// System.Boolean NotesGenerator/<GetRondomNum>d__17::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CGetRondomNumU3Ed__17_MoveNext_mD9AF2BBB3778A840400563F43B8CE99689BD6A0E (U3CGetRondomNumU3Ed__17_t9A4C5E43B0267F9539B52C841AEAB83479F33F5D* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralFF9C9FE0617816D5B9C97F5D999DD2F1D9AF6739);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	NotesGenerator_tD968B1468A55A495385ACE41CDC9423D02852B91* V_1 = NULL;
	int32_t V_2 = 0;
	{
		int32_t L_0 = __this->___U3CU3E1__state_0;
		V_0 = L_0;
		NotesGenerator_tD968B1468A55A495385ACE41CDC9423D02852B91* L_1 = __this->___U3CU3E4__this_2;
		V_1 = L_1;
		int32_t L_2 = V_0;
		if (!L_2)
		{
			goto IL_0017;
		}
	}
	{
		int32_t L_3 = V_0;
		if ((((int32_t)L_3) == ((int32_t)1)))
		{
			goto IL_0051;
		}
	}
	{
		return (bool)0;
	}

IL_0017:
	{
		__this->___U3CU3E1__state_0 = (-1);
		// if(generateTime <= 0)
		NotesGenerator_tD968B1468A55A495385ACE41CDC9423D02852B91* L_4 = V_1;
		NullCheck(L_4);
		float L_5 = L_4->___generateTime_16;
		if ((!(((float)L_5) <= ((float)(0.0f)))))
		{
			goto IL_0037;
		}
	}
	{
		// Debug.LogError("?????????0???????????????????");
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_LogError_mB00B2B4468EF3CAF041B038D840820FB84C924B2(_stringLiteralFF9C9FE0617816D5B9C97F5D999DD2F1D9AF6739, NULL);
		// yield break;
		return (bool)0;
	}

IL_0037:
	{
		// yield return new WaitForSeconds(generateTime);
		NotesGenerator_tD968B1468A55A495385ACE41CDC9423D02852B91* L_6 = V_1;
		NullCheck(L_6);
		float L_7 = L_6->___generateTime_16;
		WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3* L_8 = (WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3*)il2cpp_codegen_object_new(WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3_il2cpp_TypeInfo_var);
		NullCheck(L_8);
		WaitForSeconds__ctor_m579F95BADEDBAB4B3A7E302C6EE3995926EF2EFC(L_8, L_7, NULL);
		__this->___U3CU3E2__current_1 = L_8;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3E2__current_1), (void*)L_8);
		__this->___U3CU3E1__state_0 = 1;
		return (bool)1;
	}

IL_0051:
	{
		__this->___U3CU3E1__state_0 = (-1);
		// if(isActive)
		NotesGenerator_tD968B1468A55A495385ACE41CDC9423D02852B91* L_9 = V_1;
		NullCheck(L_9);
		bool L_10 = L_9->___isActive_15;
		if (!L_10)
		{
			goto IL_006a;
		}
	}
	{
		// num = Random.Range(0, 4);
		int32_t L_11;
		L_11 = Random_Range_m6763D9767F033357F88B6637F048F4ACA4123B68(0, 4, NULL);
		V_2 = L_11;
		goto IL_006c;
	}

IL_006a:
	{
		// num = 4;
		V_2 = 4;
	}

IL_006c:
	{
		// GenerateNotes(num); //???????????
		NotesGenerator_tD968B1468A55A495385ACE41CDC9423D02852B91* L_12 = V_1;
		int32_t L_13 = V_2;
		NullCheck(L_12);
		NotesGenerator_GenerateNotes_mC712C912FD2ABB3478BF9D887E4B6B4691E4E34E(L_12, L_13, NULL);
		// while(true)
		goto IL_0037;
	}
}
// System.Object NotesGenerator/<GetRondomNum>d__17::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CGetRondomNumU3Ed__17_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_m24F9F3389BB50F23751D6DFCA13A18BDA67CE1E6 (U3CGetRondomNumU3Ed__17_t9A4C5E43B0267F9539B52C841AEAB83479F33F5D* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CU3E2__current_1;
		return L_0;
	}
}
// System.Void NotesGenerator/<GetRondomNum>d__17::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CGetRondomNumU3Ed__17_System_Collections_IEnumerator_Reset_m961CF543BB3370A2552A5936DD254269A8845C02 (U3CGetRondomNumU3Ed__17_t9A4C5E43B0267F9539B52C841AEAB83479F33F5D* __this, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NullCheck(L_0);
		NotSupportedException__ctor_m1398D0CDE19B36AA3DE9392879738C1EA2439CDF(L_0, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CGetRondomNumU3Ed__17_System_Collections_IEnumerator_Reset_m961CF543BB3370A2552A5936DD254269A8845C02_RuntimeMethod_var)));
	}
}
// System.Object NotesGenerator/<GetRondomNum>d__17::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CGetRondomNumU3Ed__17_System_Collections_IEnumerator_get_Current_mCCF9FE4F245C8856D7F242BDFC6FFEFF92E6E8A6 (U3CGetRondomNumU3Ed__17_t9A4C5E43B0267F9539B52C841AEAB83479F33F5D* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CU3E2__current_1;
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
// System.Void NotesMoveController::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NotesMoveController_Start_m60CAAAE0D835767E097EA5E2EFA596581FA66292 (NotesMoveController_t1D30EA0235FF4CA4D8EA3018A019E9C9FA4D4A1C* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerable_Select_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_TisVector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_mEB1001BA7D7B791008645AC272676FD3357B6B69_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerable_ToArray_TisVector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_m86F205DD4D5F3E96A8588BC389B20C86541EA790_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Func_2_tD73B7BD3399DAC2D727A9D19B39BF7DB6BB67C28_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_m43FBF207375C6E06B8C45ECE614F9B8008FB686E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NotesMoveController_U3CStartU3Eb__1_1_m51833016AC835782BBCB16147CEEB2D865838952_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Nullable_1__ctor_m75F3ABB694E26670F021136BD3B9E71A65948BC2_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TweenCallback_t7C8B8A38E7B30905FF1B83C943256EF23617BB24_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TweenSettingsExtensions_OnComplete_TisTweenerCore_3_t4911E6704673AA7505D10A9D0B0D989CEC689DCA_mC4E9F7688EDBC9B7A04BB856F108CDDD0EB5767F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_U3CStartU3Eb__1_0_mA9435F2A02492F8867EF098A60542F81F1E41B95_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_t76E842CF01F5D7B362D9F99F71BE046DC734F0F4_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral281D2FCD2FD3E25172CF8BA5C7855BA2513BD8D9);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral33C3408429792F18A80C7AD5F332319D04EB6676);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral36960460C77F33A26C61DFC1635CE6F1FE6687B8);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9ED10B22B141F22BF66FC7BE46A5127C72DF9F52);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralAAC7F2E26DFBB7E229C1E347B995E0CD8DFAE8E1);
		s_Il2CppMethodInitialized = true;
	}
	Nullable_1_tEE83D90B507D40B6C58B5EEF5B9D44D377B44F11 V_0;
	memset((&V_0), 0, sizeof(V_0));
	Nullable_1_t9C51B084784B716FFF4ED4575C63CFD8A71A86FE V_1;
	memset((&V_1), 0, sizeof(V_1));
	Func_2_tD73B7BD3399DAC2D727A9D19B39BF7DB6BB67C28* G_B2_0 = NULL;
	List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* G_B2_1 = NULL;
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* G_B2_2 = NULL;
	Func_2_tD73B7BD3399DAC2D727A9D19B39BF7DB6BB67C28* G_B1_0 = NULL;
	List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* G_B1_1 = NULL;
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* G_B1_2 = NULL;
	{
		// pathPoints.Add(GameObject.Find("Point1"));
		List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* L_0 = __this->___pathPoints_4;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_1;
		L_1 = GameObject_Find_m7A669B4EEC2617AB82F6E3FF007CDCD9F21DB300(_stringLiteral9ED10B22B141F22BF66FC7BE46A5127C72DF9F52, NULL);
		NullCheck(L_0);
		List_1_Add_m43FBF207375C6E06B8C45ECE614F9B8008FB686E_inline(L_0, L_1, List_1_Add_m43FBF207375C6E06B8C45ECE614F9B8008FB686E_RuntimeMethod_var);
		// pathPoints.Add(GameObject.Find("Point2"));
		List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* L_2 = __this->___pathPoints_4;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_3;
		L_3 = GameObject_Find_m7A669B4EEC2617AB82F6E3FF007CDCD9F21DB300(_stringLiteralAAC7F2E26DFBB7E229C1E347B995E0CD8DFAE8E1, NULL);
		NullCheck(L_2);
		List_1_Add_m43FBF207375C6E06B8C45ECE614F9B8008FB686E_inline(L_2, L_3, List_1_Add_m43FBF207375C6E06B8C45ECE614F9B8008FB686E_RuntimeMethod_var);
		// pathPoints.Add(GameObject.Find("Point3"));
		List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* L_4 = __this->___pathPoints_4;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_5;
		L_5 = GameObject_Find_m7A669B4EEC2617AB82F6E3FF007CDCD9F21DB300(_stringLiteral33C3408429792F18A80C7AD5F332319D04EB6676, NULL);
		NullCheck(L_4);
		List_1_Add_m43FBF207375C6E06B8C45ECE614F9B8008FB686E_inline(L_4, L_5, List_1_Add_m43FBF207375C6E06B8C45ECE614F9B8008FB686E_RuntimeMethod_var);
		// pathPoints.Add(GameObject.Find("Point4"));
		List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* L_6 = __this->___pathPoints_4;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_7;
		L_7 = GameObject_Find_m7A669B4EEC2617AB82F6E3FF007CDCD9F21DB300(_stringLiteral281D2FCD2FD3E25172CF8BA5C7855BA2513BD8D9, NULL);
		NullCheck(L_6);
		List_1_Add_m43FBF207375C6E06B8C45ECE614F9B8008FB686E_inline(L_6, L_7, List_1_Add_m43FBF207375C6E06B8C45ECE614F9B8008FB686E_RuntimeMethod_var);
		// pathPoints.Add(GameObject.Find("Point5"));
		List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* L_8 = __this->___pathPoints_4;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_9;
		L_9 = GameObject_Find_m7A669B4EEC2617AB82F6E3FF007CDCD9F21DB300(_stringLiteral36960460C77F33A26C61DFC1635CE6F1FE6687B8, NULL);
		NullCheck(L_8);
		List_1_Add_m43FBF207375C6E06B8C45ECE614F9B8008FB686E_inline(L_8, L_9, List_1_Add_m43FBF207375C6E06B8C45ECE614F9B8008FB686E_RuntimeMethod_var);
		// transform.DOPath(
		//     pathPoints.Select(target => target.transform.position).ToArray(),
		//     10.0f,
		//     PathType.CatmullRom
		// )
		// .SetLookAt(0.05f, Vector3.forward)
		// .OnComplete(() => Destroy(this.gameObject));
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_10;
		L_10 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* L_11 = __this->___pathPoints_4;
		il2cpp_codegen_runtime_class_init_inline(U3CU3Ec_t76E842CF01F5D7B362D9F99F71BE046DC734F0F4_il2cpp_TypeInfo_var);
		Func_2_tD73B7BD3399DAC2D727A9D19B39BF7DB6BB67C28* L_12 = ((U3CU3Ec_t76E842CF01F5D7B362D9F99F71BE046DC734F0F4_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t76E842CF01F5D7B362D9F99F71BE046DC734F0F4_il2cpp_TypeInfo_var))->___U3CU3E9__1_0_1;
		Func_2_tD73B7BD3399DAC2D727A9D19B39BF7DB6BB67C28* L_13 = L_12;
		G_B1_0 = L_13;
		G_B1_1 = L_11;
		G_B1_2 = L_10;
		if (L_13)
		{
			G_B2_0 = L_13;
			G_B2_1 = L_11;
			G_B2_2 = L_10;
			goto IL_0094;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(U3CU3Ec_t76E842CF01F5D7B362D9F99F71BE046DC734F0F4_il2cpp_TypeInfo_var);
		U3CU3Ec_t76E842CF01F5D7B362D9F99F71BE046DC734F0F4* L_14 = ((U3CU3Ec_t76E842CF01F5D7B362D9F99F71BE046DC734F0F4_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t76E842CF01F5D7B362D9F99F71BE046DC734F0F4_il2cpp_TypeInfo_var))->___U3CU3E9_0;
		Func_2_tD73B7BD3399DAC2D727A9D19B39BF7DB6BB67C28* L_15 = (Func_2_tD73B7BD3399DAC2D727A9D19B39BF7DB6BB67C28*)il2cpp_codegen_object_new(Func_2_tD73B7BD3399DAC2D727A9D19B39BF7DB6BB67C28_il2cpp_TypeInfo_var);
		NullCheck(L_15);
		Func_2__ctor_mF940206FD9515CEC86729E6C58B7F206E1B17DC2(L_15, L_14, (intptr_t)((void*)U3CU3Ec_U3CStartU3Eb__1_0_mA9435F2A02492F8867EF098A60542F81F1E41B95_RuntimeMethod_var), NULL);
		Func_2_tD73B7BD3399DAC2D727A9D19B39BF7DB6BB67C28* L_16 = L_15;
		((U3CU3Ec_t76E842CF01F5D7B362D9F99F71BE046DC734F0F4_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t76E842CF01F5D7B362D9F99F71BE046DC734F0F4_il2cpp_TypeInfo_var))->___U3CU3E9__1_0_1 = L_16;
		Il2CppCodeGenWriteBarrier((void**)(&((U3CU3Ec_t76E842CF01F5D7B362D9F99F71BE046DC734F0F4_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t76E842CF01F5D7B362D9F99F71BE046DC734F0F4_il2cpp_TypeInfo_var))->___U3CU3E9__1_0_1), (void*)L_16);
		G_B2_0 = L_16;
		G_B2_1 = G_B1_1;
		G_B2_2 = G_B1_2;
	}

IL_0094:
	{
		RuntimeObject* L_17;
		L_17 = Enumerable_Select_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_TisVector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_mEB1001BA7D7B791008645AC272676FD3357B6B69(G_B2_1, G_B2_0, Enumerable_Select_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_TisVector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_mEB1001BA7D7B791008645AC272676FD3357B6B69_RuntimeMethod_var);
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_18;
		L_18 = Enumerable_ToArray_TisVector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_m86F205DD4D5F3E96A8588BC389B20C86541EA790(L_17, Enumerable_ToArray_TisVector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_m86F205DD4D5F3E96A8588BC389B20C86541EA790_RuntimeMethod_var);
		il2cpp_codegen_initobj((&V_0), sizeof(Nullable_1_tEE83D90B507D40B6C58B5EEF5B9D44D377B44F11));
		Nullable_1_tEE83D90B507D40B6C58B5EEF5B9D44D377B44F11 L_19 = V_0;
		TweenerCore_3_t4911E6704673AA7505D10A9D0B0D989CEC689DCA* L_20;
		L_20 = ShortcutExtensions_DOPath_mB31C78FE35F62166F934D044D3B0B4BAC6304D4B(G_B2_2, L_18, (10.0f), 1, 1, ((int32_t)10), L_19, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_21;
		L_21 = Vector3_get_forward_mAA55A7034304DF8B2152EAD49AE779FC4CA2EB4A_inline(NULL);
		Nullable_1_t9C51B084784B716FFF4ED4575C63CFD8A71A86FE L_22;
		memset((&L_22), 0, sizeof(L_22));
		Nullable_1__ctor_m75F3ABB694E26670F021136BD3B9E71A65948BC2((&L_22), L_21, /*hidden argument*/Nullable_1__ctor_m75F3ABB694E26670F021136BD3B9E71A65948BC2_RuntimeMethod_var);
		il2cpp_codegen_initobj((&V_1), sizeof(Nullable_1_t9C51B084784B716FFF4ED4575C63CFD8A71A86FE));
		Nullable_1_t9C51B084784B716FFF4ED4575C63CFD8A71A86FE L_23 = V_1;
		TweenerCore_3_t4911E6704673AA7505D10A9D0B0D989CEC689DCA* L_24;
		L_24 = TweenSettingsExtensions_SetLookAt_mECF406EE42F980E66C745916D2BBDF63F7E4C0D6(L_20, (0.0500000007f), L_22, L_23, NULL);
		TweenCallback_t7C8B8A38E7B30905FF1B83C943256EF23617BB24* L_25 = (TweenCallback_t7C8B8A38E7B30905FF1B83C943256EF23617BB24*)il2cpp_codegen_object_new(TweenCallback_t7C8B8A38E7B30905FF1B83C943256EF23617BB24_il2cpp_TypeInfo_var);
		NullCheck(L_25);
		TweenCallback__ctor_m68CC9304423CBDE43001F9B1413B5DAAF70DB621(L_25, __this, (intptr_t)((void*)NotesMoveController_U3CStartU3Eb__1_1_m51833016AC835782BBCB16147CEEB2D865838952_RuntimeMethod_var), NULL);
		TweenerCore_3_t4911E6704673AA7505D10A9D0B0D989CEC689DCA* L_26;
		L_26 = TweenSettingsExtensions_OnComplete_TisTweenerCore_3_t4911E6704673AA7505D10A9D0B0D989CEC689DCA_mC4E9F7688EDBC9B7A04BB856F108CDDD0EB5767F(L_24, L_25, TweenSettingsExtensions_OnComplete_TisTweenerCore_3_t4911E6704673AA7505D10A9D0B0D989CEC689DCA_mC4E9F7688EDBC9B7A04BB856F108CDDD0EB5767F_RuntimeMethod_var);
		// }
		return;
	}
}
// System.Void NotesMoveController::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NotesMoveController__ctor_m8259A5106F28A14A0649DFFCCB54FF1A8E148387 (NotesMoveController_t1D30EA0235FF4CA4D8EA3018A019E9C9FA4D4A1C* __this, const RuntimeMethod* method) 
{
	{
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
		return;
	}
}
// System.Void NotesMoveController::<Start>b__1_1()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NotesMoveController_U3CStartU3Eb__1_1_m51833016AC835782BBCB16147CEEB2D865838952 (NotesMoveController_t1D30EA0235FF4CA4D8EA3018A019E9C9FA4D4A1C* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// .OnComplete(() => Destroy(this.gameObject));
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0;
		L_0 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(__this, NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		Object_Destroy_mE97D0A766419A81296E8D4E5C23D01D3FE91ACBB(L_0, NULL);
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
// System.Void NotesMoveController/<>c::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__cctor_m172CD0BDE41B4EFBE5760606CEB360BFD2B28F2F (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_t76E842CF01F5D7B362D9F99F71BE046DC734F0F4_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CU3Ec_t76E842CF01F5D7B362D9F99F71BE046DC734F0F4* L_0 = (U3CU3Ec_t76E842CF01F5D7B362D9F99F71BE046DC734F0F4*)il2cpp_codegen_object_new(U3CU3Ec_t76E842CF01F5D7B362D9F99F71BE046DC734F0F4_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		U3CU3Ec__ctor_m6EB703BA8786F3144FF75455E8269F80F53B81C5(L_0, NULL);
		((U3CU3Ec_t76E842CF01F5D7B362D9F99F71BE046DC734F0F4_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t76E842CF01F5D7B362D9F99F71BE046DC734F0F4_il2cpp_TypeInfo_var))->___U3CU3E9_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&((U3CU3Ec_t76E842CF01F5D7B362D9F99F71BE046DC734F0F4_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t76E842CF01F5D7B362D9F99F71BE046DC734F0F4_il2cpp_TypeInfo_var))->___U3CU3E9_0), (void*)L_0);
		return;
	}
}
// System.Void NotesMoveController/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_m6EB703BA8786F3144FF75455E8269F80F53B81C5 (U3CU3Ec_t76E842CF01F5D7B362D9F99F71BE046DC734F0F4* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
// UnityEngine.Vector3 NotesMoveController/<>c::<Start>b__1_0(UnityEngine.GameObject)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 U3CU3Ec_U3CStartU3Eb__1_0_mA9435F2A02492F8867EF098A60542F81F1E41B95 (U3CU3Ec_t76E842CF01F5D7B362D9F99F71BE046DC734F0F4* __this, GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___target0, const RuntimeMethod* method) 
{
	{
		// pathPoints.Select(target => target.transform.position).ToArray(),
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0 = ___target0;
		NullCheck(L_0);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_1;
		L_1 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_0, NULL);
		NullCheck(L_1);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2;
		L_2 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_1, NULL);
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
// System.Void NotesSlide::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NotesSlide_Start_m9588F95ABCEE10B9906932AE4A196B685080384F (NotesSlide_tE75BA028235714DAF6DB7179140D449035CC0D92* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral02E90F8C0D86AB378CD50D71762FFA8C873C709A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0C91CD8EE7C2E50167003549265794CFCDCBD47A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral198D3FB714208074696C1287B8F98445C09A9D0E);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1CFB208F731355A92EB7DC4870AAEE0A4644DBEC);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2985C1ED86B8684A5DAA0349E4FE62C879E3B24D);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral397525FF189FF595FA01C37AC7AD879884534DCA);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3B92371291067AD75040BF1D58F84102F417DF06);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral413834F935BAA03648BADCDCA711EFD5D9BC8CCE);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral446EBFE0AF15621B72FD60AC796D8BDD96BA7175);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral55812AB581137C6243E3C6AD5001BFDAF15D2905);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral5E97CE89A06592489C4D7C944ABE1BB00134C951);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral92F5C320416B7024B41980FB2DF567E10F455BCD);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9CCDB026EE43F45346EE2F3B7E828B8DC0E8327D);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB419CFD5B49CDCB4D22631C6EFC26C19DF54DC3C);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC176B4F6F2542477D019DEF12376DA784C53AAFA);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC3DAD0127402D548D48FBAC7503BF9B6A239ECD5);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC76CAB94027DABB6DEE8EF070CD522AD141579C8);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD41D89DAD98E1F1783260FD0A5A774F557A05F0F);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD6DCC897C02A857315752249765CB47ADDF4E5C7);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD9608B831590ABEDB57F358CBDE6D8DFFC1E5390);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDB3AF064A254C20AC699C2808DE33F07E9D62F76);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralEBB1E8025FD30BB2C729117291A3430B097EEF52);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralFDCFF894F5BDB5F29AB81F8AC8FCF9BB7C1A9368);
		s_Il2CppMethodInitialized = true;
	}
	GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* V_0 = NULL;
	String_t* V_1 = NULL;
	String_t* V_2 = NULL;
	String_t* V_3 = NULL;
	GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* V_4 = NULL;
	int32_t V_5 = 0;
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* V_6 = NULL;
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* V_7 = NULL;
	Nullable_1_tEE83D90B507D40B6C58B5EEF5B9D44D377B44F11 V_8;
	memset((&V_8), 0, sizeof(V_8));
	String_t* G_B14_0 = NULL;
	String_t* G_B18_0 = NULL;
	String_t* G_B22_0 = NULL;
	String_t* G_B26_0 = NULL;
	{
		// GameObject[] temp = GameObject.FindGameObjectsWithTag("Origin");
		GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* L_0;
		L_0 = GameObject_FindGameObjectsWithTag_mB8AA805DA664EF0221BB338446014F662771B4E3(_stringLiteral446EBFE0AF15621B72FD60AC796D8BDD96BA7175, NULL);
		V_0 = L_0;
		// if(temp.Length > 4)
		GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* L_1 = V_0;
		NullCheck(L_1);
		if ((((int32_t)((int32_t)(((RuntimeArray*)L_1)->max_length))) <= ((int32_t)4)))
		{
			goto IL_0028;
		}
	}
	{
		// Debug.LogError("Origin?????????????5????????4???????????");
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_LogError_mB00B2B4468EF3CAF041B038D840820FB84C924B2(_stringLiteralFDCFF894F5BDB5F29AB81F8AC8FCF9BB7C1A9368, NULL);
		// Destroy(this.gameObject);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_2;
		L_2 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(__this, NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		Object_Destroy_mE97D0A766419A81296E8D4E5C23D01D3FE91ACBB(L_2, NULL);
		goto IL_002f;
	}

IL_0028:
	{
		// origins = temp;
		GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* L_3 = V_0;
		__this->___origins_4 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___origins_4), (void*)L_3);
	}

IL_002f:
	{
		// temp = GameObject.FindGameObjectsWithTag("Destination");
		GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* L_4;
		L_4 = GameObject_FindGameObjectsWithTag_mB8AA805DA664EF0221BB338446014F662771B4E3(_stringLiteral397525FF189FF595FA01C37AC7AD879884534DCA, NULL);
		V_0 = L_4;
		// if(temp.Length > 8)
		GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* L_5 = V_0;
		NullCheck(L_5);
		if ((((int32_t)((int32_t)(((RuntimeArray*)L_5)->max_length))) <= ((int32_t)8)))
		{
			goto IL_0057;
		}
	}
	{
		// Debug.LogError("Destination?????????????9????????8???????????");
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_LogError_mB00B2B4468EF3CAF041B038D840820FB84C924B2(_stringLiteralC76CAB94027DABB6DEE8EF070CD522AD141579C8, NULL);
		// Destroy(this.gameObject);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_6;
		L_6 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(__this, NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		Object_Destroy_mE97D0A766419A81296E8D4E5C23D01D3FE91ACBB(L_6, NULL);
		goto IL_005e;
	}

IL_0057:
	{
		// destinations = temp;
		GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* L_7 = V_0;
		__this->___destinations_5 = L_7;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___destinations_5), (void*)L_7);
	}

IL_005e:
	{
		// Debug.Log(this.gameObject.name);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_8;
		L_8 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(__this, NULL);
		NullCheck(L_8);
		String_t* L_9;
		L_9 = Object_get_name_mAC2F6B897CF1303BA4249B4CB55271AFACBB6392(L_8, NULL);
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB(L_9, NULL);
		// string thisGameObjectName = this.gameObject.name;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_10;
		L_10 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(__this, NULL);
		NullCheck(L_10);
		String_t* L_11;
		L_11 = Object_get_name_mAC2F6B897CF1303BA4249B4CB55271AFACBB6392(L_10, NULL);
		// string fixedName = thisGameObjectName.Replace("(Clone)", "");
		NullCheck(L_11);
		String_t* L_12;
		L_12 = String_Replace_mABDB7003A1D0AEDCAE9FF85E3DFFFBA752D2A166(L_11, _stringLiteralD41D89DAD98E1F1783260FD0A5A774F557A05F0F, _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709, NULL);
		V_3 = L_12;
		// Debug.Log(fixedName);
		String_t* L_13 = V_3;
		Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB(L_13, NULL);
		String_t* L_14 = V_3;
		bool L_15;
		L_15 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_14, _stringLiteral413834F935BAA03648BADCDCA711EFD5D9BC8CCE, NULL);
		if (L_15)
		{
			goto IL_00c5;
		}
	}
	{
		String_t* L_16 = V_3;
		bool L_17;
		L_17 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_16, _stringLiteral92F5C320416B7024B41980FB2DF567E10F455BCD, NULL);
		if (L_17)
		{
			goto IL_00e3;
		}
	}
	{
		String_t* L_18 = V_3;
		bool L_19;
		L_19 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_18, _stringLiteralD9608B831590ABEDB57F358CBDE6D8DFFC1E5390, NULL);
		if (L_19)
		{
			goto IL_0101;
		}
	}
	{
		String_t* L_20 = V_3;
		bool L_21;
		L_21 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_20, _stringLiteralEBB1E8025FD30BB2C729117291A3430B097EEF52, NULL);
		if (L_21)
		{
			goto IL_011f;
		}
	}
	{
		goto IL_013d;
	}

IL_00c5:
	{
		// targetOriginName = "Orange";
		V_1 = _stringLiteralB419CFD5B49CDCB4D22631C6EFC26C19DF54DC3C;
		// targetDestinationName = (Random.Range(0, 2) == 0) ? "LeftOrange" : "RightOrange";
		int32_t L_22;
		L_22 = Random_Range_m6763D9767F033357F88B6637F048F4ACA4123B68(0, 2, NULL);
		if (!L_22)
		{
			goto IL_00db;
		}
	}
	{
		G_B14_0 = _stringLiteral198D3FB714208074696C1287B8F98445C09A9D0E;
		goto IL_00e0;
	}

IL_00db:
	{
		G_B14_0 = _stringLiteral3B92371291067AD75040BF1D58F84102F417DF06;
	}

IL_00e0:
	{
		V_2 = G_B14_0;
		// break;
		goto IL_0149;
	}

IL_00e3:
	{
		// targetOriginName = "Blue";
		V_1 = _stringLiteralC176B4F6F2542477D019DEF12376DA784C53AAFA;
		// targetDestinationName = (Random.Range(0, 2) == 0) ? "LeftBlue" : "RightBlue";
		int32_t L_23;
		L_23 = Random_Range_m6763D9767F033357F88B6637F048F4ACA4123B68(0, 2, NULL);
		if (!L_23)
		{
			goto IL_00f9;
		}
	}
	{
		G_B18_0 = _stringLiteral9CCDB026EE43F45346EE2F3B7E828B8DC0E8327D;
		goto IL_00fe;
	}

IL_00f9:
	{
		G_B18_0 = _stringLiteral02E90F8C0D86AB378CD50D71762FFA8C873C709A;
	}

IL_00fe:
	{
		V_2 = G_B18_0;
		// break;
		goto IL_0149;
	}

IL_0101:
	{
		// targetOriginName = "Green";
		V_1 = _stringLiteralC3DAD0127402D548D48FBAC7503BF9B6A239ECD5;
		// targetDestinationName = (Random.Range(0, 2) == 0) ? "LeftGreen" : "RightGreen";
		int32_t L_24;
		L_24 = Random_Range_m6763D9767F033357F88B6637F048F4ACA4123B68(0, 2, NULL);
		if (!L_24)
		{
			goto IL_0117;
		}
	}
	{
		G_B22_0 = _stringLiteral0C91CD8EE7C2E50167003549265794CFCDCBD47A;
		goto IL_011c;
	}

IL_0117:
	{
		G_B22_0 = _stringLiteral5E97CE89A06592489C4D7C944ABE1BB00134C951;
	}

IL_011c:
	{
		V_2 = G_B22_0;
		// break;
		goto IL_0149;
	}

IL_011f:
	{
		// targetOriginName = "Pink";
		V_1 = _stringLiteralDB3AF064A254C20AC699C2808DE33F07E9D62F76;
		// targetDestinationName = (Random.Range(0, 2) == 0) ? "LeftPink" : "RightPink";
		int32_t L_25;
		L_25 = Random_Range_m6763D9767F033357F88B6637F048F4ACA4123B68(0, 2, NULL);
		if (!L_25)
		{
			goto IL_0135;
		}
	}
	{
		G_B26_0 = _stringLiteral55812AB581137C6243E3C6AD5001BFDAF15D2905;
		goto IL_013a;
	}

IL_0135:
	{
		G_B26_0 = _stringLiteral2985C1ED86B8684A5DAA0349E4FE62C879E3B24D;
	}

IL_013a:
	{
		V_2 = G_B26_0;
		// break;
		goto IL_0149;
	}

IL_013d:
	{
		// targetOriginName = "Error";
		V_1 = _stringLiteralD6DCC897C02A857315752249765CB47ADDF4E5C7;
		// targetDestinationName = "Error";
		V_2 = _stringLiteralD6DCC897C02A857315752249765CB47ADDF4E5C7;
	}

IL_0149:
	{
		// if(targetOriginName == "Error" || targetDestinationName == "Error")
		String_t* L_26 = V_1;
		bool L_27;
		L_27 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_26, _stringLiteralD6DCC897C02A857315752249765CB47ADDF4E5C7, NULL);
		if (L_27)
		{
			goto IL_0163;
		}
	}
	{
		String_t* L_28 = V_2;
		bool L_29;
		L_29 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_28, _stringLiteralD6DCC897C02A857315752249765CB47ADDF4E5C7, NULL);
		if (!L_29)
		{
			goto IL_0178;
		}
	}

IL_0163:
	{
		// Debug.LogError("???????????Origin,Destinaion???????????????");
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_LogError_mB00B2B4468EF3CAF041B038D840820FB84C924B2(_stringLiteral1CFB208F731355A92EB7DC4870AAEE0A4644DBEC, NULL);
		// Destroy(this.gameObject);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_30;
		L_30 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(__this, NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		Object_Destroy_mE97D0A766419A81296E8D4E5C23D01D3FE91ACBB(L_30, NULL);
	}

IL_0178:
	{
		// foreach(GameObject origin in origins)
		GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* L_31 = __this->___origins_4;
		V_4 = L_31;
		V_5 = 0;
		goto IL_01b9;
	}

IL_0185:
	{
		// foreach(GameObject origin in origins)
		GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* L_32 = V_4;
		int32_t L_33 = V_5;
		NullCheck(L_32);
		int32_t L_34 = L_33;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_35 = (L_32)->GetAt(static_cast<il2cpp_array_size_t>(L_34));
		V_6 = L_35;
		// if(origin.name == targetOriginName) originAndDestination[0] = origin.transform.position;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_36 = V_6;
		NullCheck(L_36);
		String_t* L_37;
		L_37 = Object_get_name_mAC2F6B897CF1303BA4249B4CB55271AFACBB6392(L_36, NULL);
		String_t* L_38 = V_1;
		bool L_39;
		L_39 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_37, L_38, NULL);
		if (!L_39)
		{
			goto IL_01b3;
		}
	}
	{
		// if(origin.name == targetOriginName) originAndDestination[0] = origin.transform.position;
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_40 = __this->___originAndDestination_6;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_41 = V_6;
		NullCheck(L_41);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_42;
		L_42 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_41, NULL);
		NullCheck(L_42);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_43;
		L_43 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_42, NULL);
		NullCheck(L_40);
		(L_40)->SetAt(static_cast<il2cpp_array_size_t>(0), (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2)L_43);
	}

IL_01b3:
	{
		int32_t L_44 = V_5;
		V_5 = ((int32_t)il2cpp_codegen_add(L_44, 1));
	}

IL_01b9:
	{
		// foreach(GameObject origin in origins)
		int32_t L_45 = V_5;
		GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* L_46 = V_4;
		NullCheck(L_46);
		if ((((int32_t)L_45) < ((int32_t)((int32_t)(((RuntimeArray*)L_46)->max_length)))))
		{
			goto IL_0185;
		}
	}
	{
		// foreach(GameObject destination in destinations)
		GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* L_47 = __this->___destinations_5;
		V_4 = L_47;
		V_5 = 0;
		goto IL_0202;
	}

IL_01ce:
	{
		// foreach(GameObject destination in destinations)
		GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* L_48 = V_4;
		int32_t L_49 = V_5;
		NullCheck(L_48);
		int32_t L_50 = L_49;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_51 = (L_48)->GetAt(static_cast<il2cpp_array_size_t>(L_50));
		V_7 = L_51;
		// if(destination.name == targetDestinationName) originAndDestination[1] = destination.transform.position;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_52 = V_7;
		NullCheck(L_52);
		String_t* L_53;
		L_53 = Object_get_name_mAC2F6B897CF1303BA4249B4CB55271AFACBB6392(L_52, NULL);
		String_t* L_54 = V_2;
		bool L_55;
		L_55 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_53, L_54, NULL);
		if (!L_55)
		{
			goto IL_01fc;
		}
	}
	{
		// if(destination.name == targetDestinationName) originAndDestination[1] = destination.transform.position;
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_56 = __this->___originAndDestination_6;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_57 = V_7;
		NullCheck(L_57);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_58;
		L_58 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_57, NULL);
		NullCheck(L_58);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_59;
		L_59 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_58, NULL);
		NullCheck(L_56);
		(L_56)->SetAt(static_cast<il2cpp_array_size_t>(1), (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2)L_59);
	}

IL_01fc:
	{
		int32_t L_60 = V_5;
		V_5 = ((int32_t)il2cpp_codegen_add(L_60, 1));
	}

IL_0202:
	{
		// foreach(GameObject destination in destinations)
		int32_t L_61 = V_5;
		GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* L_62 = V_4;
		NullCheck(L_62);
		if ((((int32_t)L_61) < ((int32_t)((int32_t)(((RuntimeArray*)L_62)->max_length)))))
		{
			goto IL_01ce;
		}
	}
	{
		// transform.DOPath(
		//     originAndDestination,
		//     5.0f
		// );
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_63;
		L_63 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_64 = __this->___originAndDestination_6;
		il2cpp_codegen_initobj((&V_8), sizeof(Nullable_1_tEE83D90B507D40B6C58B5EEF5B9D44D377B44F11));
		Nullable_1_tEE83D90B507D40B6C58B5EEF5B9D44D377B44F11 L_65 = V_8;
		TweenerCore_3_t4911E6704673AA7505D10A9D0B0D989CEC689DCA* L_66;
		L_66 = ShortcutExtensions_DOPath_mB31C78FE35F62166F934D044D3B0B4BAC6304D4B(L_63, L_64, (5.0f), 0, 1, ((int32_t)10), L_65, NULL);
		// }
		return;
	}
}
// System.Void NotesSlide::OnTriggerEnter(UnityEngine.Collider)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NotesSlide_OnTriggerEnter_m6FC6292725DCEF7D8BCAD1E476D3DCFB5C8E2E31 (NotesSlide_tE75BA028235714DAF6DB7179140D449035CC0D92* __this, Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* ___col0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralBEE62EE1896B072E94C4F64BA456F5C8EB28A281);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if(col.gameObject.tag == "resetbox")
		Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* L_0 = ___col0;
		NullCheck(L_0);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_1;
		L_1 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_0, NULL);
		NullCheck(L_1);
		String_t* L_2;
		L_2 = GameObject_get_tag_mEDD27BF795072834D656B286CBE51B2C99747805(L_1, NULL);
		bool L_3;
		L_3 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_2, _stringLiteralBEE62EE1896B072E94C4F64BA456F5C8EB28A281, NULL);
		if (!L_3)
		{
			goto IL_0022;
		}
	}
	{
		// Destroy(this.gameObject);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_4;
		L_4 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(__this, NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		Object_Destroy_mE97D0A766419A81296E8D4E5C23D01D3FE91ACBB(L_4, NULL);
	}

IL_0022:
	{
		// }
		return;
	}
}
// System.Void NotesSlide::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NotesSlide__ctor_mD7E17EAEC28727CC1A23578AB6D5B482DD60A27E (NotesSlide_tE75BA028235714DAF6DB7179140D449035CC0D92* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public GameObject[] origins = new GameObject[4];
		GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* L_0 = (GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF*)(GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF*)SZArrayNew(GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF_il2cpp_TypeInfo_var, (uint32_t)4);
		__this->___origins_4 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___origins_4), (void*)L_0);
		// public GameObject[] destinations = new GameObject[8];
		GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* L_1 = (GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF*)(GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF*)SZArrayNew(GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF_il2cpp_TypeInfo_var, (uint32_t)8);
		__this->___destinations_5 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___destinations_5), (void*)L_1);
		// private Vector3[] originAndDestination = new Vector3[2];
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_2 = (Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C*)(Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C*)SZArrayNew(Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C_il2cpp_TypeInfo_var, (uint32_t)2);
		__this->___originAndDestination_6 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___originAndDestination_6), (void*)L_2);
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
// System.Void RhythmObject::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RhythmObject_Start_mC30ABC9BE6EF982C82785508F8333526A7D6F995 (RhythmObject_t48B5812FD53B54DB2453283D026C825E88D880A3* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponentsInChildren_TisTransform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1_mD80D5A6BA73EE3066CFCE2345C3F4B9FC2E28837_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_m36829EC89855C8C23CEDA8C5F5B12B76ADFE2248_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1A161FFFB1B272C7A4F44D9F53DFA75E8A5FCFA3);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral6853B00927EB8BAE6FD25AE411383457D8EC0D05);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral77FA365523C8AD1C1BCB07FE41D0BA9D232632F4);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC176B4F6F2542477D019DEF12376DA784C53AAFA);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD86777475CF3ABA3D3C4885431342545757CC3E9);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE3C33F88508ABC8CF90E174E89955F22796605E4);
		s_Il2CppMethodInitialized = true;
	}
	TransformU5BU5D_tBB9C5F5686CAE82E3D97D43DF0F3D68ABF75EC24* V_0 = NULL;
	int32_t V_1 = 0;
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* V_2 = NULL;
	String_t* V_3 = NULL;
	{
		// foreach(Transform child in GetComponentsInChildren<Transform>(true))
		TransformU5BU5D_tBB9C5F5686CAE82E3D97D43DF0F3D68ABF75EC24* L_0;
		L_0 = Component_GetComponentsInChildren_TisTransform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1_mD80D5A6BA73EE3066CFCE2345C3F4B9FC2E28837(__this, (bool)1, Component_GetComponentsInChildren_TisTransform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1_mD80D5A6BA73EE3066CFCE2345C3F4B9FC2E28837_RuntimeMethod_var);
		V_0 = L_0;
		V_1 = 0;
		goto IL_0033;
	}

IL_000c:
	{
		// foreach(Transform child in GetComponentsInChildren<Transform>(true))
		TransformU5BU5D_tBB9C5F5686CAE82E3D97D43DF0F3D68ABF75EC24* L_1 = V_0;
		int32_t L_2 = V_1;
		NullCheck(L_1);
		int32_t L_3 = L_2;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_4 = (L_1)->GetAt(static_cast<il2cpp_array_size_t>(L_3));
		V_2 = L_4;
		// if(child.gameObject == this.gameObject) continue;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_5 = V_2;
		NullCheck(L_5);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_6;
		L_6 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_5, NULL);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_7;
		L_7 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(__this, NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_8;
		L_8 = Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605(L_6, L_7, NULL);
		if (L_8)
		{
			goto IL_002f;
		}
	}
	{
		// grandchildrenObj.Add(child);
		List_1_t991BBC5A1D51F59A450367DF944DAA207F22D06D* L_9 = __this->___grandchildrenObj_4;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_10 = V_2;
		NullCheck(L_9);
		List_1_Add_m36829EC89855C8C23CEDA8C5F5B12B76ADFE2248_inline(L_9, L_10, List_1_Add_m36829EC89855C8C23CEDA8C5F5B12B76ADFE2248_RuntimeMethod_var);
	}

IL_002f:
	{
		int32_t L_11 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_11, 1));
	}

IL_0033:
	{
		// foreach(Transform child in GetComponentsInChildren<Transform>(true))
		int32_t L_12 = V_1;
		TransformU5BU5D_tBB9C5F5686CAE82E3D97D43DF0F3D68ABF75EC24* L_13 = V_0;
		NullCheck(L_13);
		if ((((int32_t)L_12) < ((int32_t)((int32_t)(((RuntimeArray*)L_13)->max_length)))))
		{
			goto IL_000c;
		}
	}
	{
		// switch(this.gameObject.name)
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_14;
		L_14 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(__this, NULL);
		NullCheck(L_14);
		String_t* L_15;
		L_15 = Object_get_name_mAC2F6B897CF1303BA4249B4CB55271AFACBB6392(L_14, NULL);
		V_3 = L_15;
		String_t* L_16 = V_3;
		bool L_17;
		L_17 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_16, _stringLiteral6853B00927EB8BAE6FD25AE411383457D8EC0D05, NULL);
		if (L_17)
		{
			goto IL_0095;
		}
	}
	{
		String_t* L_18 = V_3;
		bool L_19;
		L_19 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_18, _stringLiteral77FA365523C8AD1C1BCB07FE41D0BA9D232632F4, NULL);
		if (L_19)
		{
			goto IL_00a6;
		}
	}
	{
		String_t* L_20 = V_3;
		bool L_21;
		L_21 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_20, _stringLiteralC176B4F6F2542477D019DEF12376DA784C53AAFA, NULL);
		if (L_21)
		{
			goto IL_00b6;
		}
	}
	{
		String_t* L_22 = V_3;
		bool L_23;
		L_23 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_22, _stringLiteral1A161FFFB1B272C7A4F44D9F53DFA75E8A5FCFA3, NULL);
		if (L_23)
		{
			goto IL_00c6;
		}
	}
	{
		String_t* L_24 = V_3;
		bool L_25;
		L_25 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_24, _stringLiteralD86777475CF3ABA3D3C4885431342545757CC3E9, NULL);
		if (L_25)
		{
			goto IL_00d7;
		}
	}
	{
		String_t* L_26 = V_3;
		bool L_27;
		L_27 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_26, _stringLiteralE3C33F88508ABC8CF90E174E89955F22796605E4, NULL);
		if (L_27)
		{
			goto IL_00e7;
		}
	}
	{
		goto IL_00f5;
	}

IL_0095:
	{
		// MinimumRangeValue = 4;
		__this->___MinimumRangeValue_6 = 4;
		// MaximumRangeValue = 9;
		__this->___MaximumRangeValue_7 = ((int32_t)9);
		// break;
		goto IL_00f5;
	}

IL_00a6:
	{
		// MinimumRangeValue = 2;
		__this->___MinimumRangeValue_6 = 2;
		// MaximumRangeValue = 6;
		__this->___MaximumRangeValue_7 = 6;
		// break;
		goto IL_00f5;
	}

IL_00b6:
	{
		// MinimumRangeValue = 3;
		__this->___MinimumRangeValue_6 = 3;
		// MaximumRangeValue = 7;
		__this->___MaximumRangeValue_7 = 7;
		// break;
		goto IL_00f5;
	}

IL_00c6:
	{
		// MinimumRangeValue = 5;
		__this->___MinimumRangeValue_6 = 5;
		// MaximumRangeValue = 9;
		__this->___MaximumRangeValue_7 = ((int32_t)9);
		// break;
		goto IL_00f5;
	}

IL_00d7:
	{
		// MinimumRangeValue = 1;
		__this->___MinimumRangeValue_6 = 1;
		// MaximumRangeValue = 5;
		__this->___MaximumRangeValue_7 = 5;
		// break;
		goto IL_00f5;
	}

IL_00e7:
	{
		// MinimumRangeValue = 3;
		__this->___MinimumRangeValue_6 = 3;
		// MaximumRangeValue = 6;
		__this->___MaximumRangeValue_7 = 6;
	}

IL_00f5:
	{
		// StartCoroutine(Rhythm());
		RuntimeObject* L_28;
		L_28 = RhythmObject_Rhythm_mED49C88695508955A6497455ABC94528B7C56EDC(__this, NULL);
		Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B* L_29;
		L_29 = MonoBehaviour_StartCoroutine_m4CAFF732AA28CD3BDC5363B44A863575530EC812(__this, L_28, NULL);
		// }
		return;
	}
}
// System.Void RhythmObject::IsActive(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RhythmObject_IsActive_m0C72212BC60BE50237C7264C1AC84F169FFEF2E3 (RhythmObject_t48B5812FD53B54DB2453283D026C825E88D880A3* __this, bool ___enable0, const RuntimeMethod* method) 
{
	{
		// isEnable = enable;
		bool L_0 = ___enable0;
		__this->___isEnable_8 = L_0;
		// }
		return;
	}
}
// System.Collections.IEnumerator RhythmObject::Rhythm()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* RhythmObject_Rhythm_mED49C88695508955A6497455ABC94528B7C56EDC (RhythmObject_t48B5812FD53B54DB2453283D026C825E88D880A3* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CRhythmU3Ed__7_t17E6EC4C562042C7EA78801D0E1358C7B856DF53_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CRhythmU3Ed__7_t17E6EC4C562042C7EA78801D0E1358C7B856DF53* L_0 = (U3CRhythmU3Ed__7_t17E6EC4C562042C7EA78801D0E1358C7B856DF53*)il2cpp_codegen_object_new(U3CRhythmU3Ed__7_t17E6EC4C562042C7EA78801D0E1358C7B856DF53_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		U3CRhythmU3Ed__7__ctor_mBD0D8CD8F10BCEEB37E214C24A0444BB6C27CBAD(L_0, 0, NULL);
		U3CRhythmU3Ed__7_t17E6EC4C562042C7EA78801D0E1358C7B856DF53* L_1 = L_0;
		NullCheck(L_1);
		L_1->___U3CU3E4__this_2 = __this;
		Il2CppCodeGenWriteBarrier((void**)(&L_1->___U3CU3E4__this_2), (void*)__this);
		return L_1;
	}
}
// System.Boolean RhythmObject::ActiveBackGroundObject(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool RhythmObject_ActiveBackGroundObject_m14E7CAC6025E747200C89F65AFB36FE852587D25 (RhythmObject_t48B5812FD53B54DB2453283D026C825E88D880A3* __this, int32_t ___index0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_Add_mA5013CBA44F1B1DC6398B4430E25EE98A9C11FDF_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerable_OrderBy_TisKeyValuePair_2_tE51B4AA1B587AD85A79363114EB7C474634D1AD8_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m5DD492A958292F9AF5E5C1261E91006CFAEA1ACB_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_Dispose_m9BF6C1C74CD711998DC8FAE5D6B8083586F5CFB5_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_MoveNext_mBAA697FE341E389C86536D9444A3E4AC02109E87_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_get_Current_mCBBD283BB42C56D73B7C4194020EC95292B36129_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Func_2_t5EEB9DA1EC10E3B0AC9BE12D70E59948A16E8B3D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_GetEnumerator_m01FCD3FC513065087F7E312BC9DE2D1C3FF655E5_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Regex_tE773142C2BE45C5D362B0F815AFF831707A51772_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_U3CActiveBackGroundObjectU3Eb__8_0_m6A7B9DE3412A4CF7C377A25A041CD3FA98E2A06C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_t548FF58F963A7E823CF0D96D17F3FCFD4EBF1A60_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral36D9F0AAA0D31A91724C1B5119E87EE5A886CBEC);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3F561227197E6D33026D93CA3EB5B82D44E3DF3F);
		s_Il2CppMethodInitialized = true;
	}
	Enumerator_t519AE1DAA64E517296768BEA2E732ED47F76A91D V_0;
	memset((&V_0), 0, sizeof(V_0));
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* V_1 = NULL;
	Match_tFBEBCF225BD8EA17BCE6CE3FE5C1BD8E3074105F* V_2 = NULL;
	int32_t V_3 = 0;
	bool V_4 = false;
	Func_2_t5EEB9DA1EC10E3B0AC9BE12D70E59948A16E8B3D* G_B13_0 = NULL;
	Dictionary_2_t3ED995699F3E88D06E5DA7362BEB7584DBD61662* G_B13_1 = NULL;
	Func_2_t5EEB9DA1EC10E3B0AC9BE12D70E59948A16E8B3D* G_B12_0 = NULL;
	Dictionary_2_t3ED995699F3E88D06E5DA7362BEB7584DBD61662* G_B12_1 = NULL;
	{
		// if(!isEnable) return false;
		bool L_0 = __this->___isEnable_8;
		if (L_0)
		{
			goto IL_000a;
		}
	}
	{
		// if(!isEnable) return false;
		return (bool)0;
	}

IL_000a:
	{
		// foreach(Transform child in grandchildrenObj)
		List_1_t991BBC5A1D51F59A450367DF944DAA207F22D06D* L_1 = __this->___grandchildrenObj_4;
		NullCheck(L_1);
		Enumerator_t519AE1DAA64E517296768BEA2E732ED47F76A91D L_2;
		L_2 = List_1_GetEnumerator_m01FCD3FC513065087F7E312BC9DE2D1C3FF655E5(L_1, List_1_GetEnumerator_m01FCD3FC513065087F7E312BC9DE2D1C3FF655E5_RuntimeMethod_var);
		V_0 = L_2;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0077:
			{// begin finally (depth: 1)
				Enumerator_Dispose_m9BF6C1C74CD711998DC8FAE5D6B8083586F5CFB5((&V_0), Enumerator_Dispose_m9BF6C1C74CD711998DC8FAE5D6B8083586F5CFB5_RuntimeMethod_var);
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				goto IL_006c_1;
			}

IL_0018_1:
			{
				// foreach(Transform child in grandchildrenObj)
				Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_3;
				L_3 = Enumerator_get_Current_mCBBD283BB42C56D73B7C4194020EC95292B36129_inline((&V_0), Enumerator_get_Current_mCBBD283BB42C56D73B7C4194020EC95292B36129_RuntimeMethod_var);
				V_1 = L_3;
				// Match match = Regex.Match(child.name, "[0-9]+");
				Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_4 = V_1;
				NullCheck(L_4);
				String_t* L_5;
				L_5 = Object_get_name_mAC2F6B897CF1303BA4249B4CB55271AFACBB6392(L_4, NULL);
				il2cpp_codegen_runtime_class_init_inline(Regex_tE773142C2BE45C5D362B0F815AFF831707A51772_il2cpp_TypeInfo_var);
				Match_tFBEBCF225BD8EA17BCE6CE3FE5C1BD8E3074105F* L_6;
				L_6 = Regex_Match_mE3EC82B72BF82AA4B8749251C12C383047531972(L_5, _stringLiteral36D9F0AAA0D31A91724C1B5119E87EE5A886CBEC, NULL);
				V_2 = L_6;
				// if(match.Success)
				Match_tFBEBCF225BD8EA17BCE6CE3FE5C1BD8E3074105F* L_7 = V_2;
				NullCheck(L_7);
				bool L_8;
				L_8 = Group_get_Success_m4E0238EE4B1E7F927E2AF13E2E5901BCA92BE62F(L_7, NULL);
				if (!L_8)
				{
					goto IL_005d_1;
				}
			}
			{
				// int objectIndex = int.Parse(match.Value);
				Match_tFBEBCF225BD8EA17BCE6CE3FE5C1BD8E3074105F* L_9 = V_2;
				NullCheck(L_9);
				String_t* L_10;
				L_10 = Capture_get_Value_m1AB4193C2FC4B0D08AA34FECF10D03876D848BDC(L_9, NULL);
				int32_t L_11;
				L_11 = Int32_Parse_m273CA1A9C7717C99641291A95C543711C0202AF0(L_10, NULL);
				V_3 = L_11;
				// if(objectIndex <= index)
				int32_t L_12 = V_3;
				int32_t L_13 = ___index0;
				if ((((int32_t)L_12) > ((int32_t)L_13)))
				{
					goto IL_006c_1;
				}
			}
			{
				// activeObjects.Add(objectIndex, child.gameObject);
				Dictionary_2_t3ED995699F3E88D06E5DA7362BEB7584DBD61662* L_14 = __this->___activeObjects_5;
				int32_t L_15 = V_3;
				Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_16 = V_1;
				NullCheck(L_16);
				GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_17;
				L_17 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_16, NULL);
				NullCheck(L_14);
				Dictionary_2_Add_mA5013CBA44F1B1DC6398B4430E25EE98A9C11FDF(L_14, L_15, L_17, Dictionary_2_Add_mA5013CBA44F1B1DC6398B4430E25EE98A9C11FDF_RuntimeMethod_var);
				goto IL_006c_1;
			}

IL_005d_1:
			{
				// Debug.LogError("???????????????????????");
				il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
				Debug_LogError_mB00B2B4468EF3CAF041B038D840820FB84C924B2(_stringLiteral3F561227197E6D33026D93CA3EB5B82D44E3DF3F, NULL);
				// return false;
				V_4 = (bool)0;
				goto IL_00bf;
			}

IL_006c_1:
			{
				// foreach(Transform child in grandchildrenObj)
				bool L_18;
				L_18 = Enumerator_MoveNext_mBAA697FE341E389C86536D9444A3E4AC02109E87((&V_0), Enumerator_MoveNext_mBAA697FE341E389C86536D9444A3E4AC02109E87_RuntimeMethod_var);
				if (L_18)
				{
					goto IL_0018_1;
				}
			}
			{
				goto IL_0085;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0085:
	{
		// var sortedDictionary = activeObjects.OrderBy(x => x.Key);
		Dictionary_2_t3ED995699F3E88D06E5DA7362BEB7584DBD61662* L_19 = __this->___activeObjects_5;
		il2cpp_codegen_runtime_class_init_inline(U3CU3Ec_t548FF58F963A7E823CF0D96D17F3FCFD4EBF1A60_il2cpp_TypeInfo_var);
		Func_2_t5EEB9DA1EC10E3B0AC9BE12D70E59948A16E8B3D* L_20 = ((U3CU3Ec_t548FF58F963A7E823CF0D96D17F3FCFD4EBF1A60_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t548FF58F963A7E823CF0D96D17F3FCFD4EBF1A60_il2cpp_TypeInfo_var))->___U3CU3E9__8_0_1;
		Func_2_t5EEB9DA1EC10E3B0AC9BE12D70E59948A16E8B3D* L_21 = L_20;
		G_B12_0 = L_21;
		G_B12_1 = L_19;
		if (L_21)
		{
			G_B13_0 = L_21;
			G_B13_1 = L_19;
			goto IL_00aa;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(U3CU3Ec_t548FF58F963A7E823CF0D96D17F3FCFD4EBF1A60_il2cpp_TypeInfo_var);
		U3CU3Ec_t548FF58F963A7E823CF0D96D17F3FCFD4EBF1A60* L_22 = ((U3CU3Ec_t548FF58F963A7E823CF0D96D17F3FCFD4EBF1A60_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t548FF58F963A7E823CF0D96D17F3FCFD4EBF1A60_il2cpp_TypeInfo_var))->___U3CU3E9_0;
		Func_2_t5EEB9DA1EC10E3B0AC9BE12D70E59948A16E8B3D* L_23 = (Func_2_t5EEB9DA1EC10E3B0AC9BE12D70E59948A16E8B3D*)il2cpp_codegen_object_new(Func_2_t5EEB9DA1EC10E3B0AC9BE12D70E59948A16E8B3D_il2cpp_TypeInfo_var);
		NullCheck(L_23);
		Func_2__ctor_mA491A7F78C17149807E1DEB0FA05A4C27E69DE14(L_23, L_22, (intptr_t)((void*)U3CU3Ec_U3CActiveBackGroundObjectU3Eb__8_0_m6A7B9DE3412A4CF7C377A25A041CD3FA98E2A06C_RuntimeMethod_var), NULL);
		Func_2_t5EEB9DA1EC10E3B0AC9BE12D70E59948A16E8B3D* L_24 = L_23;
		((U3CU3Ec_t548FF58F963A7E823CF0D96D17F3FCFD4EBF1A60_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t548FF58F963A7E823CF0D96D17F3FCFD4EBF1A60_il2cpp_TypeInfo_var))->___U3CU3E9__8_0_1 = L_24;
		Il2CppCodeGenWriteBarrier((void**)(&((U3CU3Ec_t548FF58F963A7E823CF0D96D17F3FCFD4EBF1A60_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t548FF58F963A7E823CF0D96D17F3FCFD4EBF1A60_il2cpp_TypeInfo_var))->___U3CU3E9__8_0_1), (void*)L_24);
		G_B13_0 = L_24;
		G_B13_1 = G_B12_1;
	}

IL_00aa:
	{
		RuntimeObject* L_25;
		L_25 = Enumerable_OrderBy_TisKeyValuePair_2_tE51B4AA1B587AD85A79363114EB7C474634D1AD8_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m5DD492A958292F9AF5E5C1261E91006CFAEA1ACB(G_B13_1, G_B13_0, Enumerable_OrderBy_TisKeyValuePair_2_tE51B4AA1B587AD85A79363114EB7C474634D1AD8_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m5DD492A958292F9AF5E5C1261E91006CFAEA1ACB_RuntimeMethod_var);
		// ActiveOrInactiveObjects(activeObjects, true);
		Dictionary_2_t3ED995699F3E88D06E5DA7362BEB7584DBD61662* L_26 = __this->___activeObjects_5;
		RhythmObject_ActiveOrInactiveObjects_m553C6F08242EE82359DF54DAF191A6B7FD63C4D2(__this, L_26, (bool)1, NULL);
		// return true;
		return (bool)1;
	}

IL_00bf:
	{
		// }
		bool L_27 = V_4;
		return L_27;
	}
}
// System.Void RhythmObject::ActiveOrInactiveObjects(System.Collections.Generic.Dictionary`2<System.Int32,UnityEngine.GameObject>,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RhythmObject_ActiveOrInactiveObjects_m553C6F08242EE82359DF54DAF191A6B7FD63C4D2 (RhythmObject_t48B5812FD53B54DB2453283D026C825E88D880A3* __this, Dictionary_2_t3ED995699F3E88D06E5DA7362BEB7584DBD61662* ___objects0, bool ___enable1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_GetEnumerator_m48AB1DC89BC633DFBA85999481CACE5CBDB6D4D7_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_Dispose_m9D681B3790175BA58928D0731C678FA8D3AC08E8_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_MoveNext_m12F712A18AFF893F08B98E7DEC338D929F2745D8_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_get_Current_m0217E3869711E12C240F3BE879F1699162514F50_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&KeyValuePair_2_get_Value_mD4081DDFBF79080BB1E9CEDD9893305890320300_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TweenCallback_t7C8B8A38E7B30905FF1B83C943256EF23617BB24_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass9_0_t30D08EC9E5627A79DF6BCDBEFCE7EF94B689FA89_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass9_1_U3CActiveOrInactiveObjectsU3Eb__0_mF4C86E6268093E19C3189A58F48428B4143299F8_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass9_1_t45FC89DF84F4F0F19E36C3456C131ACA83E6358E_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	U3CU3Ec__DisplayClass9_0_t30D08EC9E5627A79DF6BCDBEFCE7EF94B689FA89* V_0 = NULL;
	Enumerator_tB528BCD318DDD3422B24D81EF0BF177F56B2E4FB V_1;
	memset((&V_1), 0, sizeof(V_1));
	KeyValuePair_2_tE51B4AA1B587AD85A79363114EB7C474634D1AD8 V_2;
	memset((&V_2), 0, sizeof(V_2));
	U3CU3Ec__DisplayClass9_1_t45FC89DF84F4F0F19E36C3456C131ACA83E6358E* V_3 = NULL;
	{
		U3CU3Ec__DisplayClass9_0_t30D08EC9E5627A79DF6BCDBEFCE7EF94B689FA89* L_0 = (U3CU3Ec__DisplayClass9_0_t30D08EC9E5627A79DF6BCDBEFCE7EF94B689FA89*)il2cpp_codegen_object_new(U3CU3Ec__DisplayClass9_0_t30D08EC9E5627A79DF6BCDBEFCE7EF94B689FA89_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		U3CU3Ec__DisplayClass9_0__ctor_mA8FED2E97AB54B56ADCABFADA94A9D4AEC2F6F35(L_0, NULL);
		V_0 = L_0;
		U3CU3Ec__DisplayClass9_0_t30D08EC9E5627A79DF6BCDBEFCE7EF94B689FA89* L_1 = V_0;
		bool L_2 = ___enable1;
		NullCheck(L_1);
		L_1->___enable_0 = L_2;
		// foreach(var obj in objects)
		Dictionary_2_t3ED995699F3E88D06E5DA7362BEB7584DBD61662* L_3 = ___objects0;
		NullCheck(L_3);
		Enumerator_tB528BCD318DDD3422B24D81EF0BF177F56B2E4FB L_4;
		L_4 = Dictionary_2_GetEnumerator_m48AB1DC89BC633DFBA85999481CACE5CBDB6D4D7(L_3, Dictionary_2_GetEnumerator_m48AB1DC89BC633DFBA85999481CACE5CBDB6D4D7_RuntimeMethod_var);
		V_1 = L_4;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_005b:
			{// begin finally (depth: 1)
				Enumerator_Dispose_m9D681B3790175BA58928D0731C678FA8D3AC08E8((&V_1), Enumerator_Dispose_m9D681B3790175BA58928D0731C678FA8D3AC08E8_RuntimeMethod_var);
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				goto IL_0050_1;
			}

IL_0016_1:
			{
				// foreach(var obj in objects)
				KeyValuePair_2_tE51B4AA1B587AD85A79363114EB7C474634D1AD8 L_5;
				L_5 = Enumerator_get_Current_m0217E3869711E12C240F3BE879F1699162514F50_inline((&V_1), Enumerator_get_Current_m0217E3869711E12C240F3BE879F1699162514F50_RuntimeMethod_var);
				V_2 = L_5;
				U3CU3Ec__DisplayClass9_1_t45FC89DF84F4F0F19E36C3456C131ACA83E6358E* L_6 = (U3CU3Ec__DisplayClass9_1_t45FC89DF84F4F0F19E36C3456C131ACA83E6358E*)il2cpp_codegen_object_new(U3CU3Ec__DisplayClass9_1_t45FC89DF84F4F0F19E36C3456C131ACA83E6358E_il2cpp_TypeInfo_var);
				NullCheck(L_6);
				U3CU3Ec__DisplayClass9_1__ctor_m7878B3D1FEDF7B79F6410B3D56ACDBA50F68ABA7(L_6, NULL);
				V_3 = L_6;
				U3CU3Ec__DisplayClass9_1_t45FC89DF84F4F0F19E36C3456C131ACA83E6358E* L_7 = V_3;
				U3CU3Ec__DisplayClass9_0_t30D08EC9E5627A79DF6BCDBEFCE7EF94B689FA89* L_8 = V_0;
				NullCheck(L_7);
				L_7->___CSU24U3CU3E8__locals1_1 = L_8;
				Il2CppCodeGenWriteBarrier((void**)(&L_7->___CSU24U3CU3E8__locals1_1), (void*)L_8);
				// GameObject targetObj = obj.Value;
				U3CU3Ec__DisplayClass9_1_t45FC89DF84F4F0F19E36C3456C131ACA83E6358E* L_9 = V_3;
				GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_10;
				L_10 = KeyValuePair_2_get_Value_mD4081DDFBF79080BB1E9CEDD9893305890320300_inline((&V_2), KeyValuePair_2_get_Value_mD4081DDFBF79080BB1E9CEDD9893305890320300_RuntimeMethod_var);
				NullCheck(L_9);
				L_9->___targetObj_0 = L_10;
				Il2CppCodeGenWriteBarrier((void**)(&L_9->___targetObj_0), (void*)L_10);
				// DOVirtual.DelayedCall (0.1f, ()=> targetObj.SetActive(enable), false);
				U3CU3Ec__DisplayClass9_1_t45FC89DF84F4F0F19E36C3456C131ACA83E6358E* L_11 = V_3;
				TweenCallback_t7C8B8A38E7B30905FF1B83C943256EF23617BB24* L_12 = (TweenCallback_t7C8B8A38E7B30905FF1B83C943256EF23617BB24*)il2cpp_codegen_object_new(TweenCallback_t7C8B8A38E7B30905FF1B83C943256EF23617BB24_il2cpp_TypeInfo_var);
				NullCheck(L_12);
				TweenCallback__ctor_m68CC9304423CBDE43001F9B1413B5DAAF70DB621(L_12, L_11, (intptr_t)((void*)U3CU3Ec__DisplayClass9_1_U3CActiveOrInactiveObjectsU3Eb__0_mF4C86E6268093E19C3189A58F48428B4143299F8_RuntimeMethod_var), NULL);
				Tween_t8CB06EBC48A5B6F5065C490E4F4909C18CE7983C* L_13;
				L_13 = DOVirtual_DelayedCall_m14018BD265A6BB37019E19FB5076D693C1B60112((0.100000001f), L_12, (bool)0, NULL);
			}

IL_0050_1:
			{
				// foreach(var obj in objects)
				bool L_14;
				L_14 = Enumerator_MoveNext_m12F712A18AFF893F08B98E7DEC338D929F2745D8((&V_1), Enumerator_MoveNext_m12F712A18AFF893F08B98E7DEC338D929F2745D8_RuntimeMethod_var);
				if (L_14)
				{
					goto IL_0016_1;
				}
			}
			{
				goto IL_0069;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0069:
	{
		// }
		return;
	}
}
// System.Void RhythmObject::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RhythmObject__ctor_mAEA32C4DCE044785D9DEF5E6BB0040EC88725E30 (RhythmObject_t48B5812FD53B54DB2453283D026C825E88D880A3* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2__ctor_mEC9E9E9AF403DF7262870C6B7233848BE7458858_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_t3ED995699F3E88D06E5DA7362BEB7584DBD61662_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_mDC3E95DC5C927A867B9B42EDE1945F909B894268_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_t991BBC5A1D51F59A450367DF944DAA207F22D06D_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// private List<Transform> grandchildrenObj = new List<Transform>();
		List_1_t991BBC5A1D51F59A450367DF944DAA207F22D06D* L_0 = (List_1_t991BBC5A1D51F59A450367DF944DAA207F22D06D*)il2cpp_codegen_object_new(List_1_t991BBC5A1D51F59A450367DF944DAA207F22D06D_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		List_1__ctor_mDC3E95DC5C927A867B9B42EDE1945F909B894268(L_0, List_1__ctor_mDC3E95DC5C927A867B9B42EDE1945F909B894268_RuntimeMethod_var);
		__this->___grandchildrenObj_4 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___grandchildrenObj_4), (void*)L_0);
		// private Dictionary<int, GameObject> activeObjects = new Dictionary<int, GameObject>();
		Dictionary_2_t3ED995699F3E88D06E5DA7362BEB7584DBD61662* L_1 = (Dictionary_2_t3ED995699F3E88D06E5DA7362BEB7584DBD61662*)il2cpp_codegen_object_new(Dictionary_2_t3ED995699F3E88D06E5DA7362BEB7584DBD61662_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		Dictionary_2__ctor_mEC9E9E9AF403DF7262870C6B7233848BE7458858(L_1, Dictionary_2__ctor_mEC9E9E9AF403DF7262870C6B7233848BE7458858_RuntimeMethod_var);
		__this->___activeObjects_5 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___activeObjects_5), (void*)L_1);
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
// System.Void RhythmObject/<Rhythm>d__7::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CRhythmU3Ed__7__ctor_mBD0D8CD8F10BCEEB37E214C24A0444BB6C27CBAD (U3CRhythmU3Ed__7_t17E6EC4C562042C7EA78801D0E1358C7B856DF53* __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		int32_t L_0 = ___U3CU3E1__state0;
		__this->___U3CU3E1__state_0 = L_0;
		return;
	}
}
// System.Void RhythmObject/<Rhythm>d__7::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CRhythmU3Ed__7_System_IDisposable_Dispose_m86391380C84AB713A3C6E620C792C09D82D2E7AD (U3CRhythmU3Ed__7_t17E6EC4C562042C7EA78801D0E1358C7B856DF53* __this, const RuntimeMethod* method) 
{
	{
		return;
	}
}
// System.Boolean RhythmObject/<Rhythm>d__7::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CRhythmU3Ed__7_MoveNext_m05A9854482707AB46A2E1A105973781189ABA2C0 (U3CRhythmU3Ed__7_t17E6EC4C562042C7EA78801D0E1358C7B856DF53* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_Clear_m92298CA3F2C40724B4D2D9E4D9C4122A70E0C686_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	RhythmObject_t48B5812FD53B54DB2453283D026C825E88D880A3* V_1 = NULL;
	int32_t V_2 = 0;
	{
		int32_t L_0 = __this->___U3CU3E1__state_0;
		V_0 = L_0;
		RhythmObject_t48B5812FD53B54DB2453283D026C825E88D880A3* L_1 = __this->___U3CU3E4__this_2;
		V_1 = L_1;
		int32_t L_2 = V_0;
		switch (L_2)
		{
			case 0:
			{
				goto IL_0022;
			}
			case 1:
			{
				goto IL_005d;
			}
			case 2:
			{
				goto IL_0097;
			}
		}
	}
	{
		return (bool)0;
	}

IL_0022:
	{
		__this->___U3CU3E1__state_0 = (-1);
	}

IL_0029:
	{
		// activeNum = UnityEngine.Random.Range(MinimumRangeValue, MaximumRangeValue);
		RhythmObject_t48B5812FD53B54DB2453283D026C825E88D880A3* L_3 = V_1;
		NullCheck(L_3);
		int32_t L_4 = L_3->___MinimumRangeValue_6;
		RhythmObject_t48B5812FD53B54DB2453283D026C825E88D880A3* L_5 = V_1;
		NullCheck(L_5);
		int32_t L_6 = L_5->___MaximumRangeValue_7;
		int32_t L_7;
		L_7 = Random_Range_m6763D9767F033357F88B6637F048F4ACA4123B68(L_4, L_6, NULL);
		V_2 = L_7;
		// if(ActiveBackGroundObject(activeNum))
		RhythmObject_t48B5812FD53B54DB2453283D026C825E88D880A3* L_8 = V_1;
		int32_t L_9 = V_2;
		NullCheck(L_8);
		bool L_10;
		L_10 = RhythmObject_ActiveBackGroundObject_m14E7CAC6025E747200C89F65AFB36FE852587D25(L_8, L_9, NULL);
		if (!L_10)
		{
			goto IL_007e;
		}
	}
	{
		// yield return new WaitForSeconds(0.1f);
		WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3* L_11 = (WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3*)il2cpp_codegen_object_new(WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3_il2cpp_TypeInfo_var);
		NullCheck(L_11);
		WaitForSeconds__ctor_m579F95BADEDBAB4B3A7E302C6EE3995926EF2EFC(L_11, (0.100000001f), NULL);
		__this->___U3CU3E2__current_1 = L_11;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3E2__current_1), (void*)L_11);
		__this->___U3CU3E1__state_0 = 1;
		return (bool)1;
	}

IL_005d:
	{
		__this->___U3CU3E1__state_0 = (-1);
		// ActiveOrInactiveObjects(activeObjects, false);
		RhythmObject_t48B5812FD53B54DB2453283D026C825E88D880A3* L_12 = V_1;
		RhythmObject_t48B5812FD53B54DB2453283D026C825E88D880A3* L_13 = V_1;
		NullCheck(L_13);
		Dictionary_2_t3ED995699F3E88D06E5DA7362BEB7584DBD61662* L_14 = L_13->___activeObjects_5;
		NullCheck(L_12);
		RhythmObject_ActiveOrInactiveObjects_m553C6F08242EE82359DF54DAF191A6B7FD63C4D2(L_12, L_14, (bool)0, NULL);
		// activeObjects.Clear();
		RhythmObject_t48B5812FD53B54DB2453283D026C825E88D880A3* L_15 = V_1;
		NullCheck(L_15);
		Dictionary_2_t3ED995699F3E88D06E5DA7362BEB7584DBD61662* L_16 = L_15->___activeObjects_5;
		NullCheck(L_16);
		Dictionary_2_Clear_m92298CA3F2C40724B4D2D9E4D9C4122A70E0C686(L_16, Dictionary_2_Clear_m92298CA3F2C40724B4D2D9E4D9C4122A70E0C686_RuntimeMethod_var);
		goto IL_0029;
	}

IL_007e:
	{
		// yield return new WaitForSeconds(0.1f);
		WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3* L_17 = (WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3*)il2cpp_codegen_object_new(WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3_il2cpp_TypeInfo_var);
		NullCheck(L_17);
		WaitForSeconds__ctor_m579F95BADEDBAB4B3A7E302C6EE3995926EF2EFC(L_17, (0.100000001f), NULL);
		__this->___U3CU3E2__current_1 = L_17;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3E2__current_1), (void*)L_17);
		__this->___U3CU3E1__state_0 = 2;
		return (bool)1;
	}

IL_0097:
	{
		__this->___U3CU3E1__state_0 = (-1);
		// while(true)
		goto IL_0029;
	}
}
// System.Object RhythmObject/<Rhythm>d__7::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CRhythmU3Ed__7_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_m60AEA1EBD1F80AC425CEF0FD129458C5C1048B24 (U3CRhythmU3Ed__7_t17E6EC4C562042C7EA78801D0E1358C7B856DF53* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CU3E2__current_1;
		return L_0;
	}
}
// System.Void RhythmObject/<Rhythm>d__7::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CRhythmU3Ed__7_System_Collections_IEnumerator_Reset_m742F7ADEB3C19FE963102426D3AA87E8C2CB4A4C (U3CRhythmU3Ed__7_t17E6EC4C562042C7EA78801D0E1358C7B856DF53* __this, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NullCheck(L_0);
		NotSupportedException__ctor_m1398D0CDE19B36AA3DE9392879738C1EA2439CDF(L_0, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CRhythmU3Ed__7_System_Collections_IEnumerator_Reset_m742F7ADEB3C19FE963102426D3AA87E8C2CB4A4C_RuntimeMethod_var)));
	}
}
// System.Object RhythmObject/<Rhythm>d__7::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CRhythmU3Ed__7_System_Collections_IEnumerator_get_Current_mD797C6B349C0DCB6F60A650DBC6BBD528532DC3B (U3CRhythmU3Ed__7_t17E6EC4C562042C7EA78801D0E1358C7B856DF53* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CU3E2__current_1;
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
// System.Void RhythmObject/<>c::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__cctor_m580E987AC1E8CA0D9FD10C66DCB9468689028A77 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_t548FF58F963A7E823CF0D96D17F3FCFD4EBF1A60_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CU3Ec_t548FF58F963A7E823CF0D96D17F3FCFD4EBF1A60* L_0 = (U3CU3Ec_t548FF58F963A7E823CF0D96D17F3FCFD4EBF1A60*)il2cpp_codegen_object_new(U3CU3Ec_t548FF58F963A7E823CF0D96D17F3FCFD4EBF1A60_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		U3CU3Ec__ctor_mB1613CC92DABEB4DDE071B721E5A53F9D1F4ACCF(L_0, NULL);
		((U3CU3Ec_t548FF58F963A7E823CF0D96D17F3FCFD4EBF1A60_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t548FF58F963A7E823CF0D96D17F3FCFD4EBF1A60_il2cpp_TypeInfo_var))->___U3CU3E9_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&((U3CU3Ec_t548FF58F963A7E823CF0D96D17F3FCFD4EBF1A60_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t548FF58F963A7E823CF0D96D17F3FCFD4EBF1A60_il2cpp_TypeInfo_var))->___U3CU3E9_0), (void*)L_0);
		return;
	}
}
// System.Void RhythmObject/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_mB1613CC92DABEB4DDE071B721E5A53F9D1F4ACCF (U3CU3Ec_t548FF58F963A7E823CF0D96D17F3FCFD4EBF1A60* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
// System.Int32 RhythmObject/<>c::<ActiveBackGroundObject>b__8_0(System.Collections.Generic.KeyValuePair`2<System.Int32,UnityEngine.GameObject>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t U3CU3Ec_U3CActiveBackGroundObjectU3Eb__8_0_m6A7B9DE3412A4CF7C377A25A041CD3FA98E2A06C (U3CU3Ec_t548FF58F963A7E823CF0D96D17F3FCFD4EBF1A60* __this, KeyValuePair_2_tE51B4AA1B587AD85A79363114EB7C474634D1AD8 ___x0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&KeyValuePair_2_get_Key_m9C6DABAD84B892AB2F79F0AFB1497258CF3CC79A_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// var sortedDictionary = activeObjects.OrderBy(x => x.Key);
		int32_t L_0;
		L_0 = KeyValuePair_2_get_Key_m9C6DABAD84B892AB2F79F0AFB1497258CF3CC79A_inline((&___x0), KeyValuePair_2_get_Key_m9C6DABAD84B892AB2F79F0AFB1497258CF3CC79A_RuntimeMethod_var);
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
// System.Void RhythmObject/<>c__DisplayClass9_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass9_0__ctor_mA8FED2E97AB54B56ADCABFADA94A9D4AEC2F6F35 (U3CU3Ec__DisplayClass9_0_t30D08EC9E5627A79DF6BCDBEFCE7EF94B689FA89* __this, const RuntimeMethod* method) 
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
// System.Void RhythmObject/<>c__DisplayClass9_1::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass9_1__ctor_m7878B3D1FEDF7B79F6410B3D56ACDBA50F68ABA7 (U3CU3Ec__DisplayClass9_1_t45FC89DF84F4F0F19E36C3456C131ACA83E6358E* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
// System.Void RhythmObject/<>c__DisplayClass9_1::<ActiveOrInactiveObjects>b__0()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass9_1_U3CActiveOrInactiveObjectsU3Eb__0_mF4C86E6268093E19C3189A58F48428B4143299F8 (U3CU3Ec__DisplayClass9_1_t45FC89DF84F4F0F19E36C3456C131ACA83E6358E* __this, const RuntimeMethod* method) 
{
	{
		// DOVirtual.DelayedCall (0.1f, ()=> targetObj.SetActive(enable), false);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0 = __this->___targetObj_0;
		U3CU3Ec__DisplayClass9_0_t30D08EC9E5627A79DF6BCDBEFCE7EF94B689FA89* L_1 = __this->___CSU24U3CU3E8__locals1_1;
		NullCheck(L_1);
		bool L_2 = L_1->___enable_0;
		NullCheck(L_0);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_0, L_2, NULL);
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
// System.Void SoundController::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SoundController_Start_mBA4C6FF0D121F3625B0AA199C8DFBDA4E583BBD7 (SoundController_tA53F7251931CF12B1E75D0DF2F56D42DBFC61071* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisAudioSource_t871AC2272F896738252F04EE949AEF5B241D3299_m42DA4DEA19EB60D80CBED7413ADEB27FA033C77B_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// audioSource = GetComponent<AudioSource>();
		AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* L_0;
		L_0 = Component_GetComponent_TisAudioSource_t871AC2272F896738252F04EE949AEF5B241D3299_m42DA4DEA19EB60D80CBED7413ADEB27FA033C77B(__this, Component_GetComponent_TisAudioSource_t871AC2272F896738252F04EE949AEF5B241D3299_m42DA4DEA19EB60D80CBED7413ADEB27FA033C77B_RuntimeMethod_var);
		__this->___audioSource_6 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___audioSource_6), (void*)L_0);
		// }
		return;
	}
}
// System.Void SoundController::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SoundController_Update_mC395C5B781CC9EEBE5879A1664341515825F6611 (SoundController_tA53F7251931CF12B1E75D0DF2F56D42DBFC61071* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralED02A56B6303134574A918EC74876688AED70ABA);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (Application.isEditor)
		bool L_0;
		L_0 = Application_get_isEditor_mEAC51E3ACE6DCE438087FB14BD75A3C219D354D0(NULL);
		if (!L_0)
		{
			goto IL_0008;
		}
	}
	{
		// return;
		return;
	}

IL_0008:
	{
		// if (ARSession.state != ARSessionState.SessionTracking)
		int32_t L_1;
		L_1 = ARSession_get_state_m6A22EE6441E58AC66E1FE9A7359D06C90C1A2842_inline(NULL);
		if ((((int32_t)L_1) == ((int32_t)7)))
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
		// if (!IsSupportedDevice())
		bool L_2;
		L_2 = SoundController_IsSupportedDevice_mC5BCA9F628E9E1B7FAA607A7757E6522817D4694(__this, NULL);
		if (L_2)
		{
			goto IL_001a;
		}
	}
	{
		// return;
		return;
	}

IL_001a:
	{
		// if (!IsHighAccuracyDeviceEarthPosition())
		bool L_3;
		L_3 = SoundController_IsHighAccuracyDeviceEarthPosition_mD81411922CB1CF9314A1821145CDB9F10ED7B041(__this, NULL);
		if (L_3)
		{
			goto IL_0023;
		}
	}
	{
		// return;
		return;
	}

IL_0023:
	{
		// if (IsExistGeoSpatialAnchor())
		bool L_4;
		L_4 = SoundController_IsExistGeoSpatialAnchor_m320F50A3BE3A48104C91FC3B650356F9651157D0(__this, NULL);
		if (!L_4)
		{
			goto IL_003b;
		}
	}
	{
		// Debug.Log("Adjust position and rotation.");
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB(_stringLiteralED02A56B6303134574A918EC74876688AED70ABA, NULL);
		// Adjust();
		SoundController_Adjust_m98A8BBC166CA658F98615C7D8E53DC614CAD3097(__this, NULL);
	}

IL_003b:
	{
		// }
		return;
	}
}
// System.Boolean SoundController::IsSupportedDevice()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool SoundController_IsSupportedDevice_mC5BCA9F628E9E1B7FAA607A7757E6522817D4694 (SoundController_tA53F7251931CF12B1E75D0DF2F56D42DBFC61071* __this, const RuntimeMethod* method) 
{
	{
		// return arEarthManager.IsGeospatialModeSupported(GeospatialMode.Enabled) != FeatureSupported.Unsupported;
		AREarthManager_tAC32FF06F084622687D9FB4837506A704301D0F0* L_0 = __this->___arEarthManager_5;
		NullCheck(L_0);
		int32_t L_1;
		L_1 = AREarthManager_IsGeospatialModeSupported_m95784655267321A2E74719CB725D58F368AA278F(L_0, 2, NULL);
		return (bool)((((int32_t)((((int32_t)L_1) == ((int32_t)2))? 1 : 0)) == ((int32_t)0))? 1 : 0);
	}
}
// System.Boolean SoundController::IsHighAccuracyDeviceEarthPosition()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool SoundController_IsHighAccuracyDeviceEarthPosition_mD81411922CB1CF9314A1821145CDB9F10ED7B041 (SoundController_tA53F7251931CF12B1E75D0DF2F56D42DBFC61071* __this, const RuntimeMethod* method) 
{
	double V_0 = 0.0;
	double V_1 = 0.0;
	{
		// if (arEarthManager.EarthTrackingState != TrackingState.Tracking) return false;
		AREarthManager_tAC32FF06F084622687D9FB4837506A704301D0F0* L_0 = __this->___arEarthManager_5;
		NullCheck(L_0);
		int32_t L_1;
		L_1 = AREarthManager_get_EarthTrackingState_m07DA12743E09AC92C21F6868B51D3211023B299A(L_0, NULL);
		if ((((int32_t)L_1) == ((int32_t)2)))
		{
			goto IL_0010;
		}
	}
	{
		// if (arEarthManager.EarthTrackingState != TrackingState.Tracking) return false;
		return (bool)0;
	}

IL_0010:
	{
		// var pose = arEarthManager.CameraGeospatialPose;
		AREarthManager_tAC32FF06F084622687D9FB4837506A704301D0F0* L_2 = __this->___arEarthManager_5;
		NullCheck(L_2);
		GeospatialPose_tBF34434706FEEB7D1524DEE5FADDEE7E95452F2C L_3;
		L_3 = AREarthManager_get_CameraGeospatialPose_mE81C71F8E4CD0B6FD4116D0B3E5B97F00DDE9C1A(L_2, NULL);
		// var verticalAccuracy = pose.VerticalAccuracy;
		GeospatialPose_tBF34434706FEEB7D1524DEE5FADDEE7E95452F2C L_4 = L_3;
		double L_5 = L_4.___VerticalAccuracy_6;
		V_0 = L_5;
		// var horizontalAccuracy = pose.HorizontalAccuracy;
		double L_6 = L_4.___HorizontalAccuracy_5;
		V_1 = L_6;
		// if (verticalAccuracy > VERTICAL_THRESHOLD && horizontalAccuracy > HOLIZONTAL_THRESHOLD) return false;
		double L_7 = V_0;
		if ((!(((double)L_7) > ((double)(10.0)))))
		{
			goto IL_0042;
		}
	}
	{
		double L_8 = V_1;
		if ((!(((double)L_8) > ((double)(10.0)))))
		{
			goto IL_0042;
		}
	}
	{
		// if (verticalAccuracy > VERTICAL_THRESHOLD && horizontalAccuracy > HOLIZONTAL_THRESHOLD) return false;
		return (bool)0;
	}

IL_0042:
	{
		// return true;
		return (bool)1;
	}
}
// System.Boolean SoundController::IsExistGeoSpatialAnchor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool SoundController_IsExistGeoSpatialAnchor_m320F50A3BE3A48104C91FC3B650356F9651157D0 (SoundController_tA53F7251931CF12B1E75D0DF2F56D42DBFC61071* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ARAnchorManagerExtensions_t1FCBDAAD3ADF35808ECE7699833CD08AFBC05394_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	GeospatialPose_tBF34434706FEEB7D1524DEE5FADDEE7E95452F2C V_0;
	memset((&V_0), 0, sizeof(V_0));
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		// if (arEarthManager.EarthTrackingState != TrackingState.Tracking)
		AREarthManager_tAC32FF06F084622687D9FB4837506A704301D0F0* L_0 = __this->___arEarthManager_5;
		NullCheck(L_0);
		int32_t L_1;
		L_1 = AREarthManager_get_EarthTrackingState_m07DA12743E09AC92C21F6868B51D3211023B299A(L_0, NULL);
		if ((((int32_t)L_1) == ((int32_t)2)))
		{
			goto IL_0010;
		}
	}
	{
		// return false;
		return (bool)0;
	}

IL_0010:
	{
		// if (anchor == null)
		ARGeospatialAnchor_tD63E18E1D193A2B24B757D285F3CF67A8FC7F571* L_2 = __this->___anchor_7;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_3;
		L_3 = Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605(L_2, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_3)
		{
			goto IL_0066;
		}
	}
	{
		// var myPose = arEarthManager.CameraGeospatialPose;
		AREarthManager_tAC32FF06F084622687D9FB4837506A704301D0F0* L_4 = __this->___arEarthManager_5;
		NullCheck(L_4);
		GeospatialPose_tBF34434706FEEB7D1524DEE5FADDEE7E95452F2C L_5;
		L_5 = AREarthManager_get_CameraGeospatialPose_mE81C71F8E4CD0B6FD4116D0B3E5B97F00DDE9C1A(L_4, NULL);
		V_0 = L_5;
		// var offsetRotation = Quaternion.AngleAxis(180f - (float)myPose.Heading, Vector3.up);
		GeospatialPose_tBF34434706FEEB7D1524DEE5FADDEE7E95452F2C L_6 = V_0;
		double L_7 = L_6.___Heading_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8;
		L_8 = Vector3_get_up_m128AF3FDC820BF59D5DE86D973E7DE3F20C3AEBA_inline(NULL);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_9;
		L_9 = Quaternion_AngleAxis_mF37022977B297E63AA70D69EA1C4C922FF22CC80(((float)il2cpp_codegen_subtract((180.0f), ((float)L_7))), L_8, NULL);
		V_1 = L_9;
		// anchor = arAnchorManager.AddAnchor(myPose.Latitude, myPose.Longitude, myPose.Altitude, offsetRotation);
		ARAnchorManager_tF68C46300BD6F2E83E3360BF9297C3C50F5D6B3E* L_10 = __this->___arAnchorManager_4;
		GeospatialPose_tBF34434706FEEB7D1524DEE5FADDEE7E95452F2C L_11 = V_0;
		double L_12 = L_11.___Latitude_0;
		GeospatialPose_tBF34434706FEEB7D1524DEE5FADDEE7E95452F2C L_13 = V_0;
		double L_14 = L_13.___Longitude_1;
		GeospatialPose_tBF34434706FEEB7D1524DEE5FADDEE7E95452F2C L_15 = V_0;
		double L_16 = L_15.___Altitude_2;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_17 = V_1;
		il2cpp_codegen_runtime_class_init_inline(ARAnchorManagerExtensions_t1FCBDAAD3ADF35808ECE7699833CD08AFBC05394_il2cpp_TypeInfo_var);
		ARGeospatialAnchor_tD63E18E1D193A2B24B757D285F3CF67A8FC7F571* L_18;
		L_18 = ARAnchorManagerExtensions_AddAnchor_m40F02EA59D932D82EEF0C6FDD19B9006BAA1FE78(L_10, L_12, L_14, L_16, L_17, NULL);
		__this->___anchor_7 = L_18;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___anchor_7), (void*)L_18);
	}

IL_0066:
	{
		// return anchor != null;
		ARGeospatialAnchor_tD63E18E1D193A2B24B757D285F3CF67A8FC7F571* L_19 = __this->___anchor_7;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_20;
		L_20 = Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602(L_19, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		return L_20;
	}
}
// System.Void SoundController::Adjust()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SoundController_Adjust_m98A8BBC166CA658F98615C7D8E53DC614CAD3097 (SoundController_tA53F7251931CF12B1E75D0DF2F56D42DBFC61071* __this, const RuntimeMethod* method) 
{
	{
		// this.transform.SetPositionAndRotation(anchor.transform.position,anchor.transform.rotation);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_0;
		L_0 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		ARGeospatialAnchor_tD63E18E1D193A2B24B757D285F3CF67A8FC7F571* L_1 = __this->___anchor_7;
		NullCheck(L_1);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_2;
		L_2 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_1, NULL);
		NullCheck(L_2);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3;
		L_3 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_2, NULL);
		ARGeospatialAnchor_tD63E18E1D193A2B24B757D285F3CF67A8FC7F571* L_4 = __this->___anchor_7;
		NullCheck(L_4);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_5;
		L_5 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_4, NULL);
		NullCheck(L_5);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_6;
		L_6 = Transform_get_rotation_m32AF40CA0D50C797DA639A696F8EAEC7524C179C(L_5, NULL);
		NullCheck(L_0);
		Transform_SetPositionAndRotation_m418859BF59086EEAA084FFD6F258A43FAB408F5A(L_0, L_3, L_6, NULL);
		// }
		return;
	}
}
// System.Void SoundController::MusicPlay()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SoundController_MusicPlay_mB20DA66ED50438A38FEF9D89928F08756E7F883A (SoundController_tA53F7251931CF12B1E75D0DF2F56D42DBFC61071* __this, const RuntimeMethod* method) 
{
	{
		// audioSource.Play();
		AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* L_0 = __this->___audioSource_6;
		NullCheck(L_0);
		AudioSource_Play_m95DF07111C61D0E0F00257A00384D31531D590C3(L_0, NULL);
		// }
		return;
	}
}
// System.Void SoundController::MusicStop()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SoundController_MusicStop_m30C04C66EDA324E2E13BEE55D21B3BC3E4762444 (SoundController_tA53F7251931CF12B1E75D0DF2F56D42DBFC61071* __this, const RuntimeMethod* method) 
{
	{
		// audioSource.Stop();
		AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* L_0 = __this->___audioSource_6;
		NullCheck(L_0);
		AudioSource_Stop_m318F17F17A147C77FF6E0A5A7A6BE057DB90F537(L_0, NULL);
		// }
		return;
	}
}
// System.Void SoundController::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SoundController__ctor_mC458393260F108EF7CD72146FBC7623A50767BC1 (SoundController_tA53F7251931CF12B1E75D0DF2F56D42DBFC61071* __this, const RuntimeMethod* method) 
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
// System.Void ObjectChangeScale::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ObjectChangeScale_Start_m499940859ACF5EC14A72AC8245CC0C73C32D41B2 (ObjectChangeScale_tE0D4E687DE8C3ACD6124D148C79A46F7885A712A* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TweenSettingsExtensions_SetLoops_TisTweenerCore_3_tCD82DFC45FB71C681FA8659EA63A7D7D16BFFE77_m8F1A8D75E681054AF18A9991A7FAF2903DFAA265_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral4EF72BF92E3BED3B07B9CD3BE539FF166FBFC460);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE2B2F9260439AAD7EBA2A7CBDAD1C9849D3B6E85);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE785E5E69DA66D28A0AAA9B80445845F056E2BAC);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	{
		// string objName = this.gameObject.name;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0;
		L_0 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(__this, NULL);
		NullCheck(L_0);
		String_t* L_1;
		L_1 = Object_get_name_mAC2F6B897CF1303BA4249B4CB55271AFACBB6392(L_0, NULL);
		V_0 = L_1;
		String_t* L_2 = V_0;
		bool L_3;
		L_3 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_2, _stringLiteralE785E5E69DA66D28A0AAA9B80445845F056E2BAC, NULL);
		if (L_3)
		{
			goto IL_0028;
		}
	}
	{
		String_t* L_4 = V_0;
		bool L_5;
		L_5 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_4, _stringLiteralE2B2F9260439AAD7EBA2A7CBDAD1C9849D3B6E85, NULL);
		if (L_5)
		{
			goto IL_0035;
		}
	}
	{
		goto IL_0042;
	}

IL_0028:
	{
		// scaleValue = 1.5f;
		__this->___scaleValue_4 = (1.5f);
		// break;
		goto IL_004c;
	}

IL_0035:
	{
		// scaleValue = 0.5f;
		__this->___scaleValue_4 = (0.5f);
		// break;
		goto IL_004c;
	}

IL_0042:
	{
		// Debug.LogError("???????????????????????");
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_LogError_mB00B2B4468EF3CAF041B038D840820FB84C924B2(_stringLiteral4EF72BF92E3BED3B07B9CD3BE539FF166FBFC460, NULL);
	}

IL_004c:
	{
		// transform.DOScale(new Vector3(this.transform.localScale.x * scaleValue,
		//                               this.transform.localScale.y * scaleValue,
		//                               this.transform.localScale.z * scaleValue), 2.0f)
		//                               .SetLoops(-1, LoopType.Yoyo);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_6;
		L_6 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_7;
		L_7 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_7);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8;
		L_8 = Transform_get_localScale_m804A002A53A645CDFCD15BB0F37209162720363F(L_7, NULL);
		float L_9 = L_8.___x_2;
		float L_10 = __this->___scaleValue_4;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_11;
		L_11 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_11);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_12;
		L_12 = Transform_get_localScale_m804A002A53A645CDFCD15BB0F37209162720363F(L_11, NULL);
		float L_13 = L_12.___y_3;
		float L_14 = __this->___scaleValue_4;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_15;
		L_15 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_15);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_16;
		L_16 = Transform_get_localScale_m804A002A53A645CDFCD15BB0F37209162720363F(L_15, NULL);
		float L_17 = L_16.___z_4;
		float L_18 = __this->___scaleValue_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_19;
		memset((&L_19), 0, sizeof(L_19));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_19), ((float)il2cpp_codegen_multiply(L_9, L_10)), ((float)il2cpp_codegen_multiply(L_13, L_14)), ((float)il2cpp_codegen_multiply(L_17, L_18)), /*hidden argument*/NULL);
		TweenerCore_3_tCD82DFC45FB71C681FA8659EA63A7D7D16BFFE77* L_20;
		L_20 = ShortcutExtensions_DOScale_mF7AC6EA0FD71B399776D758AD57B94F18A47F580(L_6, L_19, (2.0f), NULL);
		TweenerCore_3_tCD82DFC45FB71C681FA8659EA63A7D7D16BFFE77* L_21;
		L_21 = TweenSettingsExtensions_SetLoops_TisTweenerCore_3_tCD82DFC45FB71C681FA8659EA63A7D7D16BFFE77_m8F1A8D75E681054AF18A9991A7FAF2903DFAA265(L_20, (-1), 1, TweenSettingsExtensions_SetLoops_TisTweenerCore_3_tCD82DFC45FB71C681FA8659EA63A7D7D16BFFE77_m8F1A8D75E681054AF18A9991A7FAF2903DFAA265_RuntimeMethod_var);
		// }
		return;
	}
}
// System.Void ObjectChangeScale::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ObjectChangeScale__ctor_m55BBA08FECC5F158833357C88D29D5247AA0351A (ObjectChangeScale_tE0D4E687DE8C3ACD6124D148C79A46F7885A712A* __this, const RuntimeMethod* method) 
{
	{
		// private float scaleValue = 1.0f;
		__this->___scaleValue_4 = (1.0f);
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
// System.Void ObjectRotation::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ObjectRotation_Start_m607C579BA16DB790F7C513E234895AAEAF1A096C (ObjectRotation_t197E99EE089921C164133658B691481669871B56* __this, const RuntimeMethod* method) 
{
	{
		// StartCoroutine(RotateObject());
		RuntimeObject* L_0;
		L_0 = ObjectRotation_RotateObject_m516940D265A7CADE543477F770BFA9CA7741A554(__this, NULL);
		Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B* L_1;
		L_1 = MonoBehaviour_StartCoroutine_m4CAFF732AA28CD3BDC5363B44A863575530EC812(__this, L_0, NULL);
		// }
		return;
	}
}
// System.Collections.IEnumerator ObjectRotation::RotateObject()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ObjectRotation_RotateObject_m516940D265A7CADE543477F770BFA9CA7741A554 (ObjectRotation_t197E99EE089921C164133658B691481669871B56* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CRotateObjectU3Ed__1_tD8B0EC501AD49D7C2C49387386B19B92F4F10673_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CRotateObjectU3Ed__1_tD8B0EC501AD49D7C2C49387386B19B92F4F10673* L_0 = (U3CRotateObjectU3Ed__1_tD8B0EC501AD49D7C2C49387386B19B92F4F10673*)il2cpp_codegen_object_new(U3CRotateObjectU3Ed__1_tD8B0EC501AD49D7C2C49387386B19B92F4F10673_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		U3CRotateObjectU3Ed__1__ctor_m8977842D9F34B0D2D5139C409FC9EC37484EF7DB(L_0, 0, NULL);
		U3CRotateObjectU3Ed__1_tD8B0EC501AD49D7C2C49387386B19B92F4F10673* L_1 = L_0;
		NullCheck(L_1);
		L_1->___U3CU3E4__this_2 = __this;
		Il2CppCodeGenWriteBarrier((void**)(&L_1->___U3CU3E4__this_2), (void*)__this);
		return L_1;
	}
}
// System.Void ObjectRotation::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ObjectRotation__ctor_m4593044FAC322BF2399AE5858F2990A1DB43B474 (ObjectRotation_t197E99EE089921C164133658B691481669871B56* __this, const RuntimeMethod* method) 
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
// System.Void ObjectRotation/<RotateObject>d__1::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CRotateObjectU3Ed__1__ctor_m8977842D9F34B0D2D5139C409FC9EC37484EF7DB (U3CRotateObjectU3Ed__1_tD8B0EC501AD49D7C2C49387386B19B92F4F10673* __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		int32_t L_0 = ___U3CU3E1__state0;
		__this->___U3CU3E1__state_0 = L_0;
		return;
	}
}
// System.Void ObjectRotation/<RotateObject>d__1::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CRotateObjectU3Ed__1_System_IDisposable_Dispose_m420E6CF1CA6A09B1929801C787D65B73B047D41C (U3CRotateObjectU3Ed__1_tD8B0EC501AD49D7C2C49387386B19B92F4F10673* __this, const RuntimeMethod* method) 
{
	{
		return;
	}
}
// System.Boolean ObjectRotation/<RotateObject>d__1::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CRotateObjectU3Ed__1_MoveNext_m9E08A47812ABCB25B35542383523D97CF94EDEC9 (U3CRotateObjectU3Ed__1_tD8B0EC501AD49D7C2C49387386B19B92F4F10673* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	ObjectRotation_t197E99EE089921C164133658B691481669871B56* V_1 = NULL;
	{
		int32_t L_0 = __this->___U3CU3E1__state_0;
		V_0 = L_0;
		ObjectRotation_t197E99EE089921C164133658B691481669871B56* L_1 = __this->___U3CU3E4__this_2;
		V_1 = L_1;
		int32_t L_2 = V_0;
		if (!L_2)
		{
			goto IL_0017;
		}
	}
	{
		int32_t L_3 = V_0;
		if ((((int32_t)L_3) == ((int32_t)1)))
		{
			goto IL_0037;
		}
	}
	{
		return (bool)0;
	}

IL_0017:
	{
		__this->___U3CU3E1__state_0 = (-1);
	}

IL_001e:
	{
		// yield return new WaitForSeconds(5.0f);
		WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3* L_4 = (WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3*)il2cpp_codegen_object_new(WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3_il2cpp_TypeInfo_var);
		NullCheck(L_4);
		WaitForSeconds__ctor_m579F95BADEDBAB4B3A7E302C6EE3995926EF2EFC(L_4, (5.0f), NULL);
		__this->___U3CU3E2__current_1 = L_4;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3E2__current_1), (void*)L_4);
		__this->___U3CU3E1__state_0 = 1;
		return (bool)1;
	}

IL_0037:
	{
		__this->___U3CU3E1__state_0 = (-1);
		// this.transform.DORotate(new Vector3(0, 360, 0), 3.0f, RotateMode.WorldAxisAdd);
		ObjectRotation_t197E99EE089921C164133658B691481669871B56* L_5 = V_1;
		NullCheck(L_5);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_6;
		L_6 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_5, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_7;
		memset((&L_7), 0, sizeof(L_7));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_7), (0.0f), (360.0f), (0.0f), /*hidden argument*/NULL);
		TweenerCore_3_t392C54729BB024F5802F8E205C583653C4E886E3* L_8;
		L_8 = ShortcutExtensions_DORotate_mA2804C1A3E4780383111262752CC7056BBC7D470(L_6, L_7, (3.0f), 2, NULL);
		// while(true)
		goto IL_001e;
	}
}
// System.Object ObjectRotation/<RotateObject>d__1::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CRotateObjectU3Ed__1_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_mEEFBE800EAAF1ABA3C9856FD396EBDB71CAED6D8 (U3CRotateObjectU3Ed__1_tD8B0EC501AD49D7C2C49387386B19B92F4F10673* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CU3E2__current_1;
		return L_0;
	}
}
// System.Void ObjectRotation/<RotateObject>d__1::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CRotateObjectU3Ed__1_System_Collections_IEnumerator_Reset_m97F17200C022575DD7767952960B16E0E777C0BD (U3CRotateObjectU3Ed__1_tD8B0EC501AD49D7C2C49387386B19B92F4F10673* __this, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NullCheck(L_0);
		NotSupportedException__ctor_m1398D0CDE19B36AA3DE9392879738C1EA2439CDF(L_0, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CRotateObjectU3Ed__1_System_Collections_IEnumerator_Reset_m97F17200C022575DD7767952960B16E0E777C0BD_RuntimeMethod_var)));
	}
}
// System.Object ObjectRotation/<RotateObject>d__1::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CRotateObjectU3Ed__1_System_Collections_IEnumerator_get_Current_m73AC3259ED6F6EABFCD2459B2A233D09830787DF (U3CRotateObjectU3Ed__1_tD8B0EC501AD49D7C2C49387386B19B92F4F10673* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CU3E2__current_1;
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
// System.Void SwitchMaterial::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SwitchMaterial_Start_m2AA5875F1B05AA4693C66EFE405A84AE14502FCF (SwitchMaterial_tAF8EEBCBCB3B6D6D6BE203FB2B12E16187CDF999* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponentsInChildren_TisRenderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF_m35AC34F858BD2F34770712CD020AA0518D9409C7_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerable_ToList_TisRenderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF_m629D4020B77CF03738959979523825DE9A307DC3_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_Dispose_m39794B37E9AE88ED22C03824DE8D637C0DADBAF0_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_MoveNext_m36545FD9B7C5DA66EAD80FD8813D279003BA8749_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_get_Current_mF219FEB0F2097ED593A4E6E2283167335AFBA4B6_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_GetEnumerator_mC86A1EF9E784B7E7B5C00025383C6381B831F88C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Enumerator_t4B5D90D1324DE6E043169A1E8DCD75512559AFA7 V_0;
	memset((&V_0), 0, sizeof(V_0));
	Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF* V_1 = NULL;
	{
		// _renderers = GetComponentsInChildren<Renderer>().ToList();
		RendererU5BU5D_t32FDD782F67917B2291EA4FF242719877440A02A* L_0;
		L_0 = Component_GetComponentsInChildren_TisRenderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF_m35AC34F858BD2F34770712CD020AA0518D9409C7(__this, Component_GetComponentsInChildren_TisRenderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF_m35AC34F858BD2F34770712CD020AA0518D9409C7_RuntimeMethod_var);
		List_1_tD435DCC2A88E36DFC551EA5392CE0182F0C50E93* L_1;
		L_1 = Enumerable_ToList_TisRenderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF_m629D4020B77CF03738959979523825DE9A307DC3((RuntimeObject*)L_0, Enumerable_ToList_TisRenderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF_m629D4020B77CF03738959979523825DE9A307DC3_RuntimeMethod_var);
		__this->____renderers_5 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____renderers_5), (void*)L_1);
		// foreach (var renderer in _renderers)
		List_1_tD435DCC2A88E36DFC551EA5392CE0182F0C50E93* L_2 = __this->____renderers_5;
		NullCheck(L_2);
		Enumerator_t4B5D90D1324DE6E043169A1E8DCD75512559AFA7 L_3;
		L_3 = List_1_GetEnumerator_mC86A1EF9E784B7E7B5C00025383C6381B831F88C(L_2, List_1_GetEnumerator_mC86A1EF9E784B7E7B5C00025383C6381B831F88C_RuntimeMethod_var);
		V_0 = L_3;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0056:
			{// begin finally (depth: 1)
				Enumerator_Dispose_m39794B37E9AE88ED22C03824DE8D637C0DADBAF0((&V_0), Enumerator_Dispose_m39794B37E9AE88ED22C03824DE8D637C0DADBAF0_RuntimeMethod_var);
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				goto IL_004b_1;
			}

IL_001f_1:
			{
				// foreach (var renderer in _renderers)
				Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF* L_4;
				L_4 = Enumerator_get_Current_mF219FEB0F2097ED593A4E6E2283167335AFBA4B6_inline((&V_0), Enumerator_get_Current_mF219FEB0F2097ED593A4E6E2283167335AFBA4B6_RuntimeMethod_var);
				V_1 = L_4;
				// if(renderer.transform.parent == transform) renderer.material = _replaceTarget;
				Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF* L_5 = V_1;
				NullCheck(L_5);
				Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_6;
				L_6 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_5, NULL);
				NullCheck(L_6);
				Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_7;
				L_7 = Transform_get_parent_m65354E28A4C94EC00EBCF03532F7B0718380791E(L_6, NULL);
				Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_8;
				L_8 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
				il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
				bool L_9;
				L_9 = Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605(L_7, L_8, NULL);
				if (!L_9)
				{
					goto IL_004b_1;
				}
			}
			{
				// if(renderer.transform.parent == transform) renderer.material = _replaceTarget;
				Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF* L_10 = V_1;
				Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_11 = __this->____replaceTarget_4;
				NullCheck(L_10);
				Renderer_set_material_m21E88977071E0A914D62F3D9CFF0193B3117C45A(L_10, L_11, NULL);
			}

IL_004b_1:
			{
				// foreach (var renderer in _renderers)
				bool L_12;
				L_12 = Enumerator_MoveNext_m36545FD9B7C5DA66EAD80FD8813D279003BA8749((&V_0), Enumerator_MoveNext_m36545FD9B7C5DA66EAD80FD8813D279003BA8749_RuntimeMethod_var);
				if (L_12)
				{
					goto IL_001f_1;
				}
			}
			{
				goto IL_0064;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0064:
	{
		// }
		return;
	}
}
// System.Void SwitchMaterial::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SwitchMaterial__ctor_m20E0623A18DDFDCDF2BCA35F9334699E774C7B6A (SwitchMaterial_tAF8EEBCBCB3B6D6D6BE203FB2B12E16187CDF999* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_m803E10F7A50EB22BF82C0C1AB251D5407B4496DE_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_tD435DCC2A88E36DFC551EA5392CE0182F0C50E93_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// private List<Renderer> _renderers = new List<Renderer>();
		List_1_tD435DCC2A88E36DFC551EA5392CE0182F0C50E93* L_0 = (List_1_tD435DCC2A88E36DFC551EA5392CE0182F0C50E93*)il2cpp_codegen_object_new(List_1_tD435DCC2A88E36DFC551EA5392CE0182F0C50E93_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		List_1__ctor_m803E10F7A50EB22BF82C0C1AB251D5407B4496DE(L_0, List_1__ctor_m803E10F7A50EB22BF82C0C1AB251D5407B4496DE_RuntimeMethod_var);
		__this->____renderers_5 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____renderers_5), (void*)L_0);
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
// SROptions SROptions::get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR SROptions_t00DA5107C80F05EB2730577E1FCA535FAD5F4A6F* SROptions_get_Current_m297117B6D80C587A2A12BC79EFD5ADE46D591C4B (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SROptions_t00DA5107C80F05EB2730577E1FCA535FAD5F4A6F_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// get { return _current; }
		SROptions_t00DA5107C80F05EB2730577E1FCA535FAD5F4A6F* L_0 = ((SROptions_t00DA5107C80F05EB2730577E1FCA535FAD5F4A6F_StaticFields*)il2cpp_codegen_static_fields_for(SROptions_t00DA5107C80F05EB2730577E1FCA535FAD5F4A6F_il2cpp_TypeInfo_var))->____current_0;
		return L_0;
	}
}
// System.Void SROptions::OnStartup()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SROptions_OnStartup_mED657444AD235B7BEB1764E5D0EB4C1794ED2281 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SROptions_t00DA5107C80F05EB2730577E1FCA535FAD5F4A6F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SRServiceManager_GetService_TisInternalOptionsRegistry_t37F5D710767EF2F74CF225D94C602B84151A8F96_m9C1B26F6376FD4144BC139300A02AC30A89EF6DC_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SRServiceManager_t65EAD8CD1C096A4BCD42B5D36406A7954972394F_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// _current = new SROptions(); // Need to reset options here so if we enter play-mode without a domain reload there will be the default set of options.
		SROptions_t00DA5107C80F05EB2730577E1FCA535FAD5F4A6F* L_0 = (SROptions_t00DA5107C80F05EB2730577E1FCA535FAD5F4A6F*)il2cpp_codegen_object_new(SROptions_t00DA5107C80F05EB2730577E1FCA535FAD5F4A6F_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		SROptions__ctor_m2658C7CC2E53229F15959A748C31F5B638661753(L_0, NULL);
		((SROptions_t00DA5107C80F05EB2730577E1FCA535FAD5F4A6F_StaticFields*)il2cpp_codegen_static_fields_for(SROptions_t00DA5107C80F05EB2730577E1FCA535FAD5F4A6F_il2cpp_TypeInfo_var))->____current_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&((SROptions_t00DA5107C80F05EB2730577E1FCA535FAD5F4A6F_StaticFields*)il2cpp_codegen_static_fields_for(SROptions_t00DA5107C80F05EB2730577E1FCA535FAD5F4A6F_il2cpp_TypeInfo_var))->____current_0), (void*)L_0);
		// SRServiceManager.GetService<SRDebugger.Internal.InternalOptionsRegistry>().AddOptionContainer(Current);
		il2cpp_codegen_runtime_class_init_inline(SRServiceManager_t65EAD8CD1C096A4BCD42B5D36406A7954972394F_il2cpp_TypeInfo_var);
		InternalOptionsRegistry_t37F5D710767EF2F74CF225D94C602B84151A8F96* L_1;
		L_1 = SRServiceManager_GetService_TisInternalOptionsRegistry_t37F5D710767EF2F74CF225D94C602B84151A8F96_m9C1B26F6376FD4144BC139300A02AC30A89EF6DC(SRServiceManager_GetService_TisInternalOptionsRegistry_t37F5D710767EF2F74CF225D94C602B84151A8F96_m9C1B26F6376FD4144BC139300A02AC30A89EF6DC_RuntimeMethod_var);
		SROptions_t00DA5107C80F05EB2730577E1FCA535FAD5F4A6F* L_2;
		L_2 = SROptions_get_Current_m297117B6D80C587A2A12BC79EFD5ADE46D591C4B_inline(NULL);
		NullCheck(L_1);
		InternalOptionsRegistry_AddOptionContainer_mF55C2902BBBFE5D741EBB38A3074BF47175FAC2D(L_1, L_2, NULL);
		// }
		return;
	}
}
// System.Void SROptions::add_PropertyChanged(SROptionsPropertyChanged)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SROptions_add_PropertyChanged_mD313CF8175CDEE6C8F50DE5E3DA93CAF1739BBE6 (SROptions_t00DA5107C80F05EB2730577E1FCA535FAD5F4A6F* __this, SROptionsPropertyChanged_t53B79AE547753261AFBD1916519E6A1074669CA7* ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SROptionsPropertyChanged_t53B79AE547753261AFBD1916519E6A1074669CA7_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	SROptionsPropertyChanged_t53B79AE547753261AFBD1916519E6A1074669CA7* V_0 = NULL;
	SROptionsPropertyChanged_t53B79AE547753261AFBD1916519E6A1074669CA7* V_1 = NULL;
	SROptionsPropertyChanged_t53B79AE547753261AFBD1916519E6A1074669CA7* V_2 = NULL;
	{
		SROptionsPropertyChanged_t53B79AE547753261AFBD1916519E6A1074669CA7* L_0 = __this->___PropertyChanged_1;
		V_0 = L_0;
	}

IL_0007:
	{
		SROptionsPropertyChanged_t53B79AE547753261AFBD1916519E6A1074669CA7* L_1 = V_0;
		V_1 = L_1;
		SROptionsPropertyChanged_t53B79AE547753261AFBD1916519E6A1074669CA7* L_2 = V_1;
		SROptionsPropertyChanged_t53B79AE547753261AFBD1916519E6A1074669CA7* L_3 = ___value0;
		Delegate_t* L_4;
		L_4 = Delegate_Combine_m1F725AEF318BE6F0426863490691A6F4606E7D00(L_2, L_3, NULL);
		V_2 = ((SROptionsPropertyChanged_t53B79AE547753261AFBD1916519E6A1074669CA7*)CastclassSealed((RuntimeObject*)L_4, SROptionsPropertyChanged_t53B79AE547753261AFBD1916519E6A1074669CA7_il2cpp_TypeInfo_var));
		SROptionsPropertyChanged_t53B79AE547753261AFBD1916519E6A1074669CA7** L_5 = (&__this->___PropertyChanged_1);
		SROptionsPropertyChanged_t53B79AE547753261AFBD1916519E6A1074669CA7* L_6 = V_2;
		SROptionsPropertyChanged_t53B79AE547753261AFBD1916519E6A1074669CA7* L_7 = V_1;
		SROptionsPropertyChanged_t53B79AE547753261AFBD1916519E6A1074669CA7* L_8;
		L_8 = InterlockedCompareExchangeImpl<SROptionsPropertyChanged_t53B79AE547753261AFBD1916519E6A1074669CA7*>(L_5, L_6, L_7);
		V_0 = L_8;
		SROptionsPropertyChanged_t53B79AE547753261AFBD1916519E6A1074669CA7* L_9 = V_0;
		SROptionsPropertyChanged_t53B79AE547753261AFBD1916519E6A1074669CA7* L_10 = V_1;
		if ((!(((RuntimeObject*)(SROptionsPropertyChanged_t53B79AE547753261AFBD1916519E6A1074669CA7*)L_9) == ((RuntimeObject*)(SROptionsPropertyChanged_t53B79AE547753261AFBD1916519E6A1074669CA7*)L_10))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void SROptions::remove_PropertyChanged(SROptionsPropertyChanged)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SROptions_remove_PropertyChanged_m4C5C660100CDDEE462A1AEC5666351735CD0110D (SROptions_t00DA5107C80F05EB2730577E1FCA535FAD5F4A6F* __this, SROptionsPropertyChanged_t53B79AE547753261AFBD1916519E6A1074669CA7* ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SROptionsPropertyChanged_t53B79AE547753261AFBD1916519E6A1074669CA7_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	SROptionsPropertyChanged_t53B79AE547753261AFBD1916519E6A1074669CA7* V_0 = NULL;
	SROptionsPropertyChanged_t53B79AE547753261AFBD1916519E6A1074669CA7* V_1 = NULL;
	SROptionsPropertyChanged_t53B79AE547753261AFBD1916519E6A1074669CA7* V_2 = NULL;
	{
		SROptionsPropertyChanged_t53B79AE547753261AFBD1916519E6A1074669CA7* L_0 = __this->___PropertyChanged_1;
		V_0 = L_0;
	}

IL_0007:
	{
		SROptionsPropertyChanged_t53B79AE547753261AFBD1916519E6A1074669CA7* L_1 = V_0;
		V_1 = L_1;
		SROptionsPropertyChanged_t53B79AE547753261AFBD1916519E6A1074669CA7* L_2 = V_1;
		SROptionsPropertyChanged_t53B79AE547753261AFBD1916519E6A1074669CA7* L_3 = ___value0;
		Delegate_t* L_4;
		L_4 = Delegate_Remove_m8B7DD5661308FA972E23CA1CC3FC9CEB355504E3(L_2, L_3, NULL);
		V_2 = ((SROptionsPropertyChanged_t53B79AE547753261AFBD1916519E6A1074669CA7*)CastclassSealed((RuntimeObject*)L_4, SROptionsPropertyChanged_t53B79AE547753261AFBD1916519E6A1074669CA7_il2cpp_TypeInfo_var));
		SROptionsPropertyChanged_t53B79AE547753261AFBD1916519E6A1074669CA7** L_5 = (&__this->___PropertyChanged_1);
		SROptionsPropertyChanged_t53B79AE547753261AFBD1916519E6A1074669CA7* L_6 = V_2;
		SROptionsPropertyChanged_t53B79AE547753261AFBD1916519E6A1074669CA7* L_7 = V_1;
		SROptionsPropertyChanged_t53B79AE547753261AFBD1916519E6A1074669CA7* L_8;
		L_8 = InterlockedCompareExchangeImpl<SROptionsPropertyChanged_t53B79AE547753261AFBD1916519E6A1074669CA7*>(L_5, L_6, L_7);
		V_0 = L_8;
		SROptionsPropertyChanged_t53B79AE547753261AFBD1916519E6A1074669CA7* L_9 = V_0;
		SROptionsPropertyChanged_t53B79AE547753261AFBD1916519E6A1074669CA7* L_10 = V_1;
		if ((!(((RuntimeObject*)(SROptionsPropertyChanged_t53B79AE547753261AFBD1916519E6A1074669CA7*)L_9) == ((RuntimeObject*)(SROptionsPropertyChanged_t53B79AE547753261AFBD1916519E6A1074669CA7*)L_10))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void SROptions::OnPropertyChanged(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SROptions_OnPropertyChanged_m06D97D7FDCBA5FA530183C0286626FC0AF5DC154 (SROptions_t00DA5107C80F05EB2730577E1FCA535FAD5F4A6F* __this, String_t* ___propertyName0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PropertyChangedEventArgs_tFA01343D8F2BD799951B40A3EBF4A6B38EE63321_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (PropertyChanged != null)
		SROptionsPropertyChanged_t53B79AE547753261AFBD1916519E6A1074669CA7* L_0 = __this->___PropertyChanged_1;
		if (!L_0)
		{
			goto IL_0015;
		}
	}
	{
		// PropertyChanged(this, propertyName);
		SROptionsPropertyChanged_t53B79AE547753261AFBD1916519E6A1074669CA7* L_1 = __this->___PropertyChanged_1;
		String_t* L_2 = ___propertyName0;
		NullCheck(L_1);
		SROptionsPropertyChanged_Invoke_mBED662C3470F04FCEA839FE5D39A86BF62C22CFF_inline(L_1, __this, L_2, NULL);
	}

IL_0015:
	{
		// if (InterfacePropertyChangedEventHandler != null)
		PropertyChangedEventHandler_tF1250C146BE6FB43477D29C5D18A10B6329419DA* L_3 = __this->___InterfacePropertyChangedEventHandler_2;
		if (!L_3)
		{
			goto IL_002f;
		}
	}
	{
		// InterfacePropertyChangedEventHandler(this, new PropertyChangedEventArgs(propertyName));
		PropertyChangedEventHandler_tF1250C146BE6FB43477D29C5D18A10B6329419DA* L_4 = __this->___InterfacePropertyChangedEventHandler_2;
		String_t* L_5 = ___propertyName0;
		PropertyChangedEventArgs_tFA01343D8F2BD799951B40A3EBF4A6B38EE63321* L_6 = (PropertyChangedEventArgs_tFA01343D8F2BD799951B40A3EBF4A6B38EE63321*)il2cpp_codegen_object_new(PropertyChangedEventArgs_tFA01343D8F2BD799951B40A3EBF4A6B38EE63321_il2cpp_TypeInfo_var);
		NullCheck(L_6);
		PropertyChangedEventArgs__ctor_mE3C901440BE057E5F17062BA316019C0B53A39B5(L_6, L_5, NULL);
		NullCheck(L_4);
		PropertyChangedEventHandler_Invoke_m040B3056C279FDDC4EC678519D5D415771905298_inline(L_4, __this, L_6, NULL);
	}

IL_002f:
	{
		// }
		return;
	}
}
// System.Void SROptions::add_InterfacePropertyChangedEventHandler(System.ComponentModel.PropertyChangedEventHandler)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SROptions_add_InterfacePropertyChangedEventHandler_m21A6CBB25DFAD5BE13C1FBD23CDCEBC42AED9486 (SROptions_t00DA5107C80F05EB2730577E1FCA535FAD5F4A6F* __this, PropertyChangedEventHandler_tF1250C146BE6FB43477D29C5D18A10B6329419DA* ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PropertyChangedEventHandler_tF1250C146BE6FB43477D29C5D18A10B6329419DA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	PropertyChangedEventHandler_tF1250C146BE6FB43477D29C5D18A10B6329419DA* V_0 = NULL;
	PropertyChangedEventHandler_tF1250C146BE6FB43477D29C5D18A10B6329419DA* V_1 = NULL;
	PropertyChangedEventHandler_tF1250C146BE6FB43477D29C5D18A10B6329419DA* V_2 = NULL;
	{
		PropertyChangedEventHandler_tF1250C146BE6FB43477D29C5D18A10B6329419DA* L_0 = __this->___InterfacePropertyChangedEventHandler_2;
		V_0 = L_0;
	}

IL_0007:
	{
		PropertyChangedEventHandler_tF1250C146BE6FB43477D29C5D18A10B6329419DA* L_1 = V_0;
		V_1 = L_1;
		PropertyChangedEventHandler_tF1250C146BE6FB43477D29C5D18A10B6329419DA* L_2 = V_1;
		PropertyChangedEventHandler_tF1250C146BE6FB43477D29C5D18A10B6329419DA* L_3 = ___value0;
		Delegate_t* L_4;
		L_4 = Delegate_Combine_m1F725AEF318BE6F0426863490691A6F4606E7D00(L_2, L_3, NULL);
		V_2 = ((PropertyChangedEventHandler_tF1250C146BE6FB43477D29C5D18A10B6329419DA*)CastclassSealed((RuntimeObject*)L_4, PropertyChangedEventHandler_tF1250C146BE6FB43477D29C5D18A10B6329419DA_il2cpp_TypeInfo_var));
		PropertyChangedEventHandler_tF1250C146BE6FB43477D29C5D18A10B6329419DA** L_5 = (&__this->___InterfacePropertyChangedEventHandler_2);
		PropertyChangedEventHandler_tF1250C146BE6FB43477D29C5D18A10B6329419DA* L_6 = V_2;
		PropertyChangedEventHandler_tF1250C146BE6FB43477D29C5D18A10B6329419DA* L_7 = V_1;
		PropertyChangedEventHandler_tF1250C146BE6FB43477D29C5D18A10B6329419DA* L_8;
		L_8 = InterlockedCompareExchangeImpl<PropertyChangedEventHandler_tF1250C146BE6FB43477D29C5D18A10B6329419DA*>(L_5, L_6, L_7);
		V_0 = L_8;
		PropertyChangedEventHandler_tF1250C146BE6FB43477D29C5D18A10B6329419DA* L_9 = V_0;
		PropertyChangedEventHandler_tF1250C146BE6FB43477D29C5D18A10B6329419DA* L_10 = V_1;
		if ((!(((RuntimeObject*)(PropertyChangedEventHandler_tF1250C146BE6FB43477D29C5D18A10B6329419DA*)L_9) == ((RuntimeObject*)(PropertyChangedEventHandler_tF1250C146BE6FB43477D29C5D18A10B6329419DA*)L_10))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void SROptions::remove_InterfacePropertyChangedEventHandler(System.ComponentModel.PropertyChangedEventHandler)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SROptions_remove_InterfacePropertyChangedEventHandler_m57D2972F000CDECCB3EAC82AD237736BD311D7A6 (SROptions_t00DA5107C80F05EB2730577E1FCA535FAD5F4A6F* __this, PropertyChangedEventHandler_tF1250C146BE6FB43477D29C5D18A10B6329419DA* ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PropertyChangedEventHandler_tF1250C146BE6FB43477D29C5D18A10B6329419DA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	PropertyChangedEventHandler_tF1250C146BE6FB43477D29C5D18A10B6329419DA* V_0 = NULL;
	PropertyChangedEventHandler_tF1250C146BE6FB43477D29C5D18A10B6329419DA* V_1 = NULL;
	PropertyChangedEventHandler_tF1250C146BE6FB43477D29C5D18A10B6329419DA* V_2 = NULL;
	{
		PropertyChangedEventHandler_tF1250C146BE6FB43477D29C5D18A10B6329419DA* L_0 = __this->___InterfacePropertyChangedEventHandler_2;
		V_0 = L_0;
	}

IL_0007:
	{
		PropertyChangedEventHandler_tF1250C146BE6FB43477D29C5D18A10B6329419DA* L_1 = V_0;
		V_1 = L_1;
		PropertyChangedEventHandler_tF1250C146BE6FB43477D29C5D18A10B6329419DA* L_2 = V_1;
		PropertyChangedEventHandler_tF1250C146BE6FB43477D29C5D18A10B6329419DA* L_3 = ___value0;
		Delegate_t* L_4;
		L_4 = Delegate_Remove_m8B7DD5661308FA972E23CA1CC3FC9CEB355504E3(L_2, L_3, NULL);
		V_2 = ((PropertyChangedEventHandler_tF1250C146BE6FB43477D29C5D18A10B6329419DA*)CastclassSealed((RuntimeObject*)L_4, PropertyChangedEventHandler_tF1250C146BE6FB43477D29C5D18A10B6329419DA_il2cpp_TypeInfo_var));
		PropertyChangedEventHandler_tF1250C146BE6FB43477D29C5D18A10B6329419DA** L_5 = (&__this->___InterfacePropertyChangedEventHandler_2);
		PropertyChangedEventHandler_tF1250C146BE6FB43477D29C5D18A10B6329419DA* L_6 = V_2;
		PropertyChangedEventHandler_tF1250C146BE6FB43477D29C5D18A10B6329419DA* L_7 = V_1;
		PropertyChangedEventHandler_tF1250C146BE6FB43477D29C5D18A10B6329419DA* L_8;
		L_8 = InterlockedCompareExchangeImpl<PropertyChangedEventHandler_tF1250C146BE6FB43477D29C5D18A10B6329419DA*>(L_5, L_6, L_7);
		V_0 = L_8;
		PropertyChangedEventHandler_tF1250C146BE6FB43477D29C5D18A10B6329419DA* L_9 = V_0;
		PropertyChangedEventHandler_tF1250C146BE6FB43477D29C5D18A10B6329419DA* L_10 = V_1;
		if ((!(((RuntimeObject*)(PropertyChangedEventHandler_tF1250C146BE6FB43477D29C5D18A10B6329419DA*)L_9) == ((RuntimeObject*)(PropertyChangedEventHandler_tF1250C146BE6FB43477D29C5D18A10B6329419DA*)L_10))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void SROptions::System.ComponentModel.INotifyPropertyChanged.add_PropertyChanged(System.ComponentModel.PropertyChangedEventHandler)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SROptions_System_ComponentModel_INotifyPropertyChanged_add_PropertyChanged_m5B81598734579EEEF9AEDE807E67E5C9F424192E (SROptions_t00DA5107C80F05EB2730577E1FCA535FAD5F4A6F* __this, PropertyChangedEventHandler_tF1250C146BE6FB43477D29C5D18A10B6329419DA* ___value0, const RuntimeMethod* method) 
{
	{
		// add { InterfacePropertyChangedEventHandler += value; }
		PropertyChangedEventHandler_tF1250C146BE6FB43477D29C5D18A10B6329419DA* L_0 = ___value0;
		SROptions_add_InterfacePropertyChangedEventHandler_m21A6CBB25DFAD5BE13C1FBD23CDCEBC42AED9486(__this, L_0, NULL);
		// add { InterfacePropertyChangedEventHandler += value; }
		return;
	}
}
// System.Void SROptions::System.ComponentModel.INotifyPropertyChanged.remove_PropertyChanged(System.ComponentModel.PropertyChangedEventHandler)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SROptions_System_ComponentModel_INotifyPropertyChanged_remove_PropertyChanged_m67FA67A06599300AD83B0F88A7023233482772A9 (SROptions_t00DA5107C80F05EB2730577E1FCA535FAD5F4A6F* __this, PropertyChangedEventHandler_tF1250C146BE6FB43477D29C5D18A10B6329419DA* ___value0, const RuntimeMethod* method) 
{
	{
		// remove { InterfacePropertyChangedEventHandler -= value; }
		PropertyChangedEventHandler_tF1250C146BE6FB43477D29C5D18A10B6329419DA* L_0 = ___value0;
		SROptions_remove_InterfacePropertyChangedEventHandler_m57D2972F000CDECCB3EAC82AD237736BD311D7A6(__this, L_0, NULL);
		// remove { InterfacePropertyChangedEventHandler -= value; }
		return;
	}
}
// System.Void SROptions::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SROptions__ctor_m2658C7CC2E53229F15959A748C31F5B638661753 (SROptions_t00DA5107C80F05EB2730577E1FCA535FAD5F4A6F* __this, const RuntimeMethod* method) 
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
// System.Void SROptions/DisplayNameAttribute::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DisplayNameAttribute__ctor_m3AABB3EF231DE5C4596FBAC13A84359188956678 (DisplayNameAttribute_t36237DD738F919AF725D1A3160E859B8DB716264* __this, String_t* ___displayName0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DisplayNameAttribute_tECBA9AC4CCBE61186E2B3C397C93AAFA5A2631E8_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public DisplayNameAttribute(string displayName) : base(displayName)
		String_t* L_0 = ___displayName0;
		il2cpp_codegen_runtime_class_init_inline(DisplayNameAttribute_tECBA9AC4CCBE61186E2B3C397C93AAFA5A2631E8_il2cpp_TypeInfo_var);
		DisplayNameAttribute__ctor_m396F07353E80428B4AEB85DC66F5B9380A077AE3(__this, L_0, NULL);
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
// System.Void SROptions/IncrementAttribute::.ctor(System.Double)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IncrementAttribute__ctor_m148ECDE23494DD90AAD74FC1517886B9EFBB0E33 (IncrementAttribute_tA4CDFC00F53F82FE8F31085E97F79F4BA1B76DD1* __this, double ___increment0, const RuntimeMethod* method) 
{
	{
		// : base(increment)
		double L_0 = ___increment0;
		IncrementAttribute__ctor_m086EE0EF33A7B9EBFD4C2157747DCC418CF62020(__this, L_0, NULL);
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
// System.Void SROptions/NumberRangeAttribute::.ctor(System.Double,System.Double)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NumberRangeAttribute__ctor_mBC5F2BAC3D7020AF5E604C896FF65C2CC68E8969 (NumberRangeAttribute_tF57CDD96B27582AF4FA0311F052A33A62467ABAD* __this, double ___min0, double ___max1, const RuntimeMethod* method) 
{
	{
		// : base(min, max)
		double L_0 = ___min0;
		double L_1 = ___max1;
		NumberRangeAttribute__ctor_m573A8F52873A30F329617752AE167CC4775E267F(__this, L_0, L_1, NULL);
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
// System.Void SROptions/SortAttribute::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SortAttribute__ctor_m485398CBC990FD50C8BFE28A3794048630C0A49A (SortAttribute_t3BCAFC7857086FCCD52C024CFC9F51F00155E6FB* __this, int32_t ___priority0, const RuntimeMethod* method) 
{
	{
		// : base(priority)
		int32_t L_0 = ___priority0;
		SortAttribute__ctor_m8C2E87A699EBF6FFE066341167159DF0F614AD0F(__this, L_0, NULL);
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
void SROptionsPropertyChanged_Invoke_mBED662C3470F04FCEA839FE5D39A86BF62C22CFF_Multicast(SROptionsPropertyChanged_t53B79AE547753261AFBD1916519E6A1074669CA7* __this, RuntimeObject* ___sender0, String_t* ___propertyName1, const RuntimeMethod* method)
{
	il2cpp_array_size_t length = __this->___delegates_13->max_length;
	Delegate_t** delegatesToInvoke = reinterpret_cast<Delegate_t**>(__this->___delegates_13->GetAddressAtUnchecked(0));
	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		SROptionsPropertyChanged_t53B79AE547753261AFBD1916519E6A1074669CA7* currentDelegate = reinterpret_cast<SROptionsPropertyChanged_t53B79AE547753261AFBD1916519E6A1074669CA7*>(delegatesToInvoke[i]);
		typedef void (*FunctionPointerType) (RuntimeObject*, RuntimeObject*, String_t*, const RuntimeMethod*);
		((FunctionPointerType)currentDelegate->___invoke_impl_1)((Il2CppObject*)currentDelegate->___method_code_6, ___sender0, ___propertyName1, reinterpret_cast<RuntimeMethod*>(currentDelegate->___method_3));
	}
}
void SROptionsPropertyChanged_Invoke_mBED662C3470F04FCEA839FE5D39A86BF62C22CFF_OpenInst(SROptionsPropertyChanged_t53B79AE547753261AFBD1916519E6A1074669CA7* __this, RuntimeObject* ___sender0, String_t* ___propertyName1, const RuntimeMethod* method)
{
	NullCheck(___sender0);
	typedef void (*FunctionPointerType) (RuntimeObject*, String_t*, const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr_0)(___sender0, ___propertyName1, method);
}
void SROptionsPropertyChanged_Invoke_mBED662C3470F04FCEA839FE5D39A86BF62C22CFF_OpenStatic(SROptionsPropertyChanged_t53B79AE547753261AFBD1916519E6A1074669CA7* __this, RuntimeObject* ___sender0, String_t* ___propertyName1, const RuntimeMethod* method)
{
	typedef void (*FunctionPointerType) (RuntimeObject*, String_t*, const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr_0)(___sender0, ___propertyName1, method);
}
void SROptionsPropertyChanged_Invoke_mBED662C3470F04FCEA839FE5D39A86BF62C22CFF_OpenStaticInvoker(SROptionsPropertyChanged_t53B79AE547753261AFBD1916519E6A1074669CA7* __this, RuntimeObject* ___sender0, String_t* ___propertyName1, const RuntimeMethod* method)
{
	InvokerActionInvoker2< RuntimeObject*, String_t* >::Invoke(__this->___method_ptr_0, method, NULL, ___sender0, ___propertyName1);
}
void SROptionsPropertyChanged_Invoke_mBED662C3470F04FCEA839FE5D39A86BF62C22CFF_ClosedStaticInvoker(SROptionsPropertyChanged_t53B79AE547753261AFBD1916519E6A1074669CA7* __this, RuntimeObject* ___sender0, String_t* ___propertyName1, const RuntimeMethod* method)
{
	InvokerActionInvoker3< RuntimeObject*, RuntimeObject*, String_t* >::Invoke(__this->___method_ptr_0, method, NULL, __this->___m_target_2, ___sender0, ___propertyName1);
}
void SROptionsPropertyChanged_Invoke_mBED662C3470F04FCEA839FE5D39A86BF62C22CFF_OpenVirtual(SROptionsPropertyChanged_t53B79AE547753261AFBD1916519E6A1074669CA7* __this, RuntimeObject* ___sender0, String_t* ___propertyName1, const RuntimeMethod* method)
{
	NullCheck(___sender0);
	VirtualActionInvoker1< String_t* >::Invoke(il2cpp_codegen_method_get_slot(method), ___sender0, ___propertyName1);
}
void SROptionsPropertyChanged_Invoke_mBED662C3470F04FCEA839FE5D39A86BF62C22CFF_OpenInterface(SROptionsPropertyChanged_t53B79AE547753261AFBD1916519E6A1074669CA7* __this, RuntimeObject* ___sender0, String_t* ___propertyName1, const RuntimeMethod* method)
{
	NullCheck(___sender0);
	InterfaceActionInvoker1< String_t* >::Invoke(il2cpp_codegen_method_get_slot(method), il2cpp_codegen_method_get_declaring_type(method), ___sender0, ___propertyName1);
}
void SROptionsPropertyChanged_Invoke_mBED662C3470F04FCEA839FE5D39A86BF62C22CFF_OpenGenericVirtual(SROptionsPropertyChanged_t53B79AE547753261AFBD1916519E6A1074669CA7* __this, RuntimeObject* ___sender0, String_t* ___propertyName1, const RuntimeMethod* method)
{
	NullCheck(___sender0);
	GenericVirtualActionInvoker1< String_t* >::Invoke(method, ___sender0, ___propertyName1);
}
void SROptionsPropertyChanged_Invoke_mBED662C3470F04FCEA839FE5D39A86BF62C22CFF_OpenGenericInterface(SROptionsPropertyChanged_t53B79AE547753261AFBD1916519E6A1074669CA7* __this, RuntimeObject* ___sender0, String_t* ___propertyName1, const RuntimeMethod* method)
{
	NullCheck(___sender0);
	GenericInterfaceActionInvoker1< String_t* >::Invoke(method, ___sender0, ___propertyName1);
}
// System.Void SROptionsPropertyChanged::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SROptionsPropertyChanged__ctor_m01880AAF1B112E453572A03A7781D1C7DFCB49EF (SROptionsPropertyChanged_t53B79AE547753261AFBD1916519E6A1074669CA7* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) 
{
	__this->___method_ptr_0 = il2cpp_codegen_get_virtual_call_method_pointer((RuntimeMethod*)___method1);
	__this->___method_3 = ___method1;
	__this->___m_target_2 = ___object0;
	Il2CppCodeGenWriteBarrier((void**)(&__this->___m_target_2), (void*)___object0);
	int parameterCount = il2cpp_codegen_method_parameter_count((RuntimeMethod*)___method1);
	__this->___method_code_6 = (intptr_t)__this;
	if (MethodIsStatic((RuntimeMethod*)___method1))
	{
		bool isOpen = parameterCount == 2;
		if (il2cpp_codegen_call_method_via_invoker((RuntimeMethod*)___method1))
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&SROptionsPropertyChanged_Invoke_mBED662C3470F04FCEA839FE5D39A86BF62C22CFF_OpenStaticInvoker;
			else
				__this->___invoke_impl_1 = (intptr_t)&SROptionsPropertyChanged_Invoke_mBED662C3470F04FCEA839FE5D39A86BF62C22CFF_ClosedStaticInvoker;
		else
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&SROptionsPropertyChanged_Invoke_mBED662C3470F04FCEA839FE5D39A86BF62C22CFF_OpenStatic;
			else
				{
					__this->___invoke_impl_1 = (intptr_t)__this->___method_ptr_0;
					__this->___method_code_6 = (intptr_t)__this->___m_target_2;
				}
	}
	else
	{
		bool isOpen = parameterCount == 1;
		if (isOpen)
		{
			if (__this->___method_is_virtual_12)
			{
				if (il2cpp_codegen_method_is_generic_instance_method((RuntimeMethod*)___method1))
					if (il2cpp_codegen_method_is_interface_method((RuntimeMethod*)___method1))
						__this->___invoke_impl_1 = (intptr_t)&SROptionsPropertyChanged_Invoke_mBED662C3470F04FCEA839FE5D39A86BF62C22CFF_OpenGenericInterface;
					else
						__this->___invoke_impl_1 = (intptr_t)&SROptionsPropertyChanged_Invoke_mBED662C3470F04FCEA839FE5D39A86BF62C22CFF_OpenGenericVirtual;
				else
					if (il2cpp_codegen_method_is_interface_method((RuntimeMethod*)___method1))
						__this->___invoke_impl_1 = (intptr_t)&SROptionsPropertyChanged_Invoke_mBED662C3470F04FCEA839FE5D39A86BF62C22CFF_OpenInterface;
					else
						__this->___invoke_impl_1 = (intptr_t)&SROptionsPropertyChanged_Invoke_mBED662C3470F04FCEA839FE5D39A86BF62C22CFF_OpenVirtual;
			}
			else
			{
				__this->___invoke_impl_1 = (intptr_t)&SROptionsPropertyChanged_Invoke_mBED662C3470F04FCEA839FE5D39A86BF62C22CFF_OpenInst;
			}
		}
		else
		{
			if (___object0 == NULL)
				il2cpp_codegen_raise_exception(il2cpp_codegen_get_argument_exception(NULL, "Delegate to an instance method cannot have null 'this'."), NULL);
			__this->___invoke_impl_1 = (intptr_t)__this->___method_ptr_0;
			__this->___method_code_6 = (intptr_t)__this->___m_target_2;
		}
	}
	__this->___extra_arg_5 = (intptr_t)&SROptionsPropertyChanged_Invoke_mBED662C3470F04FCEA839FE5D39A86BF62C22CFF_Multicast;
}
// System.Void SROptionsPropertyChanged::Invoke(System.Object,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SROptionsPropertyChanged_Invoke_mBED662C3470F04FCEA839FE5D39A86BF62C22CFF (SROptionsPropertyChanged_t53B79AE547753261AFBD1916519E6A1074669CA7* __this, RuntimeObject* ___sender0, String_t* ___propertyName1, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, RuntimeObject*, String_t*, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___sender0, ___propertyName1, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
// System.IAsyncResult SROptionsPropertyChanged::BeginInvoke(System.Object,System.String,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* SROptionsPropertyChanged_BeginInvoke_m8A103EB4F6093C48C1B1529A2248B630A22FC93D (SROptionsPropertyChanged_t53B79AE547753261AFBD1916519E6A1074669CA7* __this, RuntimeObject* ___sender0, String_t* ___propertyName1, AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C* ___callback2, RuntimeObject* ___object3, const RuntimeMethod* method) 
{
	void *__d_args[3] = {0};
	__d_args[0] = ___sender0;
	__d_args[1] = ___propertyName1;
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback2, (RuntimeObject*)___object3);
}
// System.Void SROptionsPropertyChanged::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SROptionsPropertyChanged_EndInvoke_mD7173E1847CB61E5A7A394DBC9C2B76E0AB9D66C (SROptionsPropertyChanged_t53B79AE547753261AFBD1916519E6A1074669CA7* __this, RuntimeObject* ___result0, const RuntimeMethod* method) 
{
	il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result0, 0);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Google.XR.ARCoreExtensions.Samples.Geospatial.SafeAreaScaler::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SafeAreaScaler_Update_m4C02B57A221CB119573B865749FAEFB0E75F569A (SafeAreaScaler_t7FFEE4D34FEA32394B9181D42E522BFFD1E4BCE8* __this, const RuntimeMethod* method) 
{
	Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// safeArea = Screen.safeArea;
		Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D L_0;
		L_0 = Screen_get_safeArea_m2ADAD6C36CC5DB40CC2DAD300DD1DF7CA4DF2525(NULL);
		V_0 = L_0;
		// if (_screenSafeArea != safeArea)
		Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D L_1 = __this->____screenSafeArea_4;
		Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D L_2 = V_0;
		bool L_3;
		L_3 = Rect_op_Inequality_mB5D7316EB50B1DDA9324F4BE6741DFF6A673137D(L_1, L_2, NULL);
		if (!L_3)
		{
			goto IL_0021;
		}
	}
	{
		// _screenSafeArea = safeArea;
		Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D L_4 = V_0;
		__this->____screenSafeArea_4 = L_4;
		// MatchRectTransformToSafeArea();
		SafeAreaScaler_MatchRectTransformToSafeArea_m04E6A9A1444C10EDDC3392285A1C5BE523BE8F64(__this, NULL);
	}

IL_0021:
	{
		// }
		return;
	}
}
// System.Void Google.XR.ARCoreExtensions.Samples.Geospatial.SafeAreaScaler::MatchRectTransformToSafeArea()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SafeAreaScaler_MatchRectTransformToSafeArea_m04E6A9A1444C10EDDC3392285A1C5BE523BE8F64 (SafeAreaScaler_t7FFEE4D34FEA32394B9181D42E522BFFD1E4BCE8* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisRectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5_m0640480E7E38BB88B0D1F6AD59E697C8EE6AAFA4_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 V_0;
	memset((&V_0), 0, sizeof(V_0));
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		// RectTransform rectTransform = GetComponent<RectTransform>();
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_0;
		L_0 = Component_GetComponent_TisRectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5_m0640480E7E38BB88B0D1F6AD59E697C8EE6AAFA4(__this, Component_GetComponent_TisRectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5_m0640480E7E38BB88B0D1F6AD59E697C8EE6AAFA4_RuntimeMethod_var);
		// Vector2 offsetMin = new Vector2(_screenSafeArea.xMin,
		//     Screen.height - _screenSafeArea.yMax);
		Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D* L_1 = (&__this->____screenSafeArea_4);
		float L_2;
		L_2 = Rect_get_xMin_mE89C40702926D016A633399E20DB9501E251630D(L_1, NULL);
		int32_t L_3;
		L_3 = Screen_get_height_m01A3102DE71EE1FBEA51D09D6B0261CF864FE8F9(NULL);
		Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D* L_4 = (&__this->____screenSafeArea_4);
		float L_5;
		L_5 = Rect_get_yMax_mBC37BEE1CD632AADD8B9EAF9FE3BA143F79CAF8E(L_4, NULL);
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&V_0), L_2, ((float)il2cpp_codegen_subtract(((float)L_3), L_5)), NULL);
		// Vector2 offsetMax = new Vector2(
		//     _screenSafeArea.xMax - Screen.width,
		//     -_screenSafeArea.yMin);
		Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D* L_6 = (&__this->____screenSafeArea_4);
		float L_7;
		L_7 = Rect_get_xMax_m2339C7D2FCDA98A9B007F815F6E2059BA6BE425F(L_6, NULL);
		int32_t L_8;
		L_8 = Screen_get_width_mF608FF3252213E7EFA1F0D2F744C28110E9E5AC9(NULL);
		Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D* L_9 = (&__this->____screenSafeArea_4);
		float L_10;
		L_10 = Rect_get_yMin_mB19848FB25DE61EDF958F7A22CFDD86DE103062F(L_9, NULL);
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&V_1), ((float)il2cpp_codegen_subtract(L_7, ((float)L_8))), ((-L_10)), NULL);
		// rectTransform.offsetMin = offsetMin;
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_11 = L_0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_12 = V_0;
		NullCheck(L_11);
		RectTransform_set_offsetMin_m07F38B4105C7CA9CC9FBDC9ED0DB008602880AB9(L_11, L_12, NULL);
		// rectTransform.offsetMax = offsetMax;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_13 = V_1;
		NullCheck(L_11);
		RectTransform_set_offsetMax_m5514D09D86516F2C0E25FA6D11A3A4274D3D002D(L_11, L_13, NULL);
		// }
		return;
	}
}
// System.Void Google.XR.ARCoreExtensions.Samples.Geospatial.SafeAreaScaler::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SafeAreaScaler__ctor_m61ED2F6F927714C4ED11AA2AEE2A0B9EA79B484B (SafeAreaScaler_t7FFEE4D34FEA32394B9181D42E522BFFD1E4BCE8* __this, const RuntimeMethod* method) 
{
	{
		// private Rect _screenSafeArea = new Rect(0, 0, 0, 0);
		Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D L_0;
		memset((&L_0), 0, sizeof(L_0));
		Rect__ctor_m18C3033D135097BEE424AAA68D91C706D2647F23((&L_0), (0.0f), (0.0f), (0.0f), (0.0f), /*hidden argument*/NULL);
		__this->____screenSafeArea_4 = L_0;
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
// Conversion methods for marshalling of: Google.XR.ARCoreExtensions.Samples.Geospatial.GeospatialAnchorHistory
IL2CPP_EXTERN_C void GeospatialAnchorHistory_t6908A396462F1450B5999D2948632194CD812A5C_marshal_pinvoke(const GeospatialAnchorHistory_t6908A396462F1450B5999D2948632194CD812A5C& unmarshaled, GeospatialAnchorHistory_t6908A396462F1450B5999D2948632194CD812A5C_marshaled_pinvoke& marshaled)
{
	Exception_t* ___Texture_4Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'Texture' of type 'GeospatialAnchorHistory': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___Texture_4Exception, NULL);
}
IL2CPP_EXTERN_C void GeospatialAnchorHistory_t6908A396462F1450B5999D2948632194CD812A5C_marshal_pinvoke_back(const GeospatialAnchorHistory_t6908A396462F1450B5999D2948632194CD812A5C_marshaled_pinvoke& marshaled, GeospatialAnchorHistory_t6908A396462F1450B5999D2948632194CD812A5C& unmarshaled)
{
	Exception_t* ___Texture_4Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'Texture' of type 'GeospatialAnchorHistory': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___Texture_4Exception, NULL);
}
// Conversion method for clean up from marshalling of: Google.XR.ARCoreExtensions.Samples.Geospatial.GeospatialAnchorHistory
IL2CPP_EXTERN_C void GeospatialAnchorHistory_t6908A396462F1450B5999D2948632194CD812A5C_marshal_pinvoke_cleanup(GeospatialAnchorHistory_t6908A396462F1450B5999D2948632194CD812A5C_marshaled_pinvoke& marshaled)
{
}
// Conversion methods for marshalling of: Google.XR.ARCoreExtensions.Samples.Geospatial.GeospatialAnchorHistory
IL2CPP_EXTERN_C void GeospatialAnchorHistory_t6908A396462F1450B5999D2948632194CD812A5C_marshal_com(const GeospatialAnchorHistory_t6908A396462F1450B5999D2948632194CD812A5C& unmarshaled, GeospatialAnchorHistory_t6908A396462F1450B5999D2948632194CD812A5C_marshaled_com& marshaled)
{
	Exception_t* ___Texture_4Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'Texture' of type 'GeospatialAnchorHistory': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___Texture_4Exception, NULL);
}
IL2CPP_EXTERN_C void GeospatialAnchorHistory_t6908A396462F1450B5999D2948632194CD812A5C_marshal_com_back(const GeospatialAnchorHistory_t6908A396462F1450B5999D2948632194CD812A5C_marshaled_com& marshaled, GeospatialAnchorHistory_t6908A396462F1450B5999D2948632194CD812A5C& unmarshaled)
{
	Exception_t* ___Texture_4Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'Texture' of type 'GeospatialAnchorHistory': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___Texture_4Exception, NULL);
}
// Conversion method for clean up from marshalling of: Google.XR.ARCoreExtensions.Samples.Geospatial.GeospatialAnchorHistory
IL2CPP_EXTERN_C void GeospatialAnchorHistory_t6908A396462F1450B5999D2948632194CD812A5C_marshal_com_cleanup(GeospatialAnchorHistory_t6908A396462F1450B5999D2948632194CD812A5C_marshaled_com& marshaled)
{
}
// System.Void Google.XR.ARCoreExtensions.Samples.Geospatial.GeospatialAnchorHistory::.ctor(System.Double,System.Double,System.Double,UnityEngine.Quaternion,UnityEngine.Texture2D)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GeospatialAnchorHistory__ctor_m81E444540B48488C9F15D534E327744B291DFD50 (GeospatialAnchorHistory_t6908A396462F1450B5999D2948632194CD812A5C* __this, double ___latitude0, double ___longitude1, double ___altitude2, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___heading3, Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* ___texture4, const RuntimeMethod* method) 
{
	{
		// Latitude = latitude;
		double L_0 = ___latitude0;
		__this->___Latitude_0 = L_0;
		// Longitude = longitude;
		double L_1 = ___longitude1;
		__this->___Longitude_1 = L_1;
		// Altitude = altitude;
		double L_2 = ___altitude2;
		__this->___Altitude_2 = L_2;
		// Heading = heading;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_3 = ___heading3;
		__this->___Heading_3 = L_3;
		// Texture = texture;
		Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* L_4 = ___texture4;
		__this->___Texture_4 = L_4;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___Texture_4), (void*)L_4);
		// }
		return;
	}
}
IL2CPP_EXTERN_C  void GeospatialAnchorHistory__ctor_m81E444540B48488C9F15D534E327744B291DFD50_AdjustorThunk (RuntimeObject* __this, double ___latitude0, double ___longitude1, double ___altitude2, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___heading3, Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* ___texture4, const RuntimeMethod* method)
{
	GeospatialAnchorHistory_t6908A396462F1450B5999D2948632194CD812A5C* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<GeospatialAnchorHistory_t6908A396462F1450B5999D2948632194CD812A5C*>(__this + _offset);
	GeospatialAnchorHistory__ctor_m81E444540B48488C9F15D534E327744B291DFD50(_thisAdjusted, ___latitude0, ___longitude1, ___altitude2, ___heading3, ___texture4, method);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Google.XR.ARCoreExtensions.Samples.Geospatial.GeospatialAnchorHistoryCollection::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GeospatialAnchorHistoryCollection__ctor_mF8B2CC65BEF02F8F5AD9A6745E9DA6B05D7D06FA (GeospatialAnchorHistoryCollection_tE5EDB6915BC64A3689D5063C0AE9BDCDBDEB2BBD* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_mED28D7886C86087D0894D3D73A471B948B145E83_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_t129F965E3A52C7ACA849FAEC97997D9357ED21A5_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public List<GeospatialAnchorHistory> Collection = new List<GeospatialAnchorHistory>();
		List_1_t129F965E3A52C7ACA849FAEC97997D9357ED21A5* L_0 = (List_1_t129F965E3A52C7ACA849FAEC97997D9357ED21A5*)il2cpp_codegen_object_new(List_1_t129F965E3A52C7ACA849FAEC97997D9357ED21A5_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		List_1__ctor_mED28D7886C86087D0894D3D73A471B948B145E83(L_0, List_1__ctor_mED28D7886C86087D0894D3D73A471B948B145E83_RuntimeMethod_var);
		__this->___Collection_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___Collection_0), (void*)L_0);
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
// System.Void Google.XR.ARCoreExtensions.Samples.Geospatial.GeospatialController::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GeospatialController_Awake_mCA86E4AF23D51CFD648FE92B0A03D51B9BA0DC62 (GeospatialController_t69A2BBD44F5A190BB256B888033F5297AF0A0D2F* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral54490EFACE87135FB0F006006EE52E2B2AB48860);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral6723EB6602FE6F893E14A80270C65B9E51A270B8);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralFDD014F91C66371E34E858118A2CA2D827E4F259);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Screen.autorotateToLandscapeLeft = false;
		Screen_set_autorotateToLandscapeLeft_mEBF1EEDF3BCD85A85FEF5B59ECEE40D6A73983D0((bool)0, NULL);
		// Screen.autorotateToLandscapeRight = false;
		Screen_set_autorotateToLandscapeRight_m259F67F2F38E5E28A7A5ABBEA5CFE9650DD7B184((bool)0, NULL);
		// Screen.autorotateToPortraitUpsideDown = false;
		Screen_set_autorotateToPortraitUpsideDown_m322363C3E0347AF6C62240BD814C8719CF54AF12((bool)0, NULL);
		// Screen.orientation = ScreenOrientation.Portrait;
		Screen_set_orientation_mFCC880DDE7D3916DD8DA84E546F4743EEE773C4D(1, NULL);
		// Application.targetFrameRate = 60;
		Application_set_targetFrameRate_mB90EEA60DAE55CD71C38D4B7DFDBE2B34EA6B46F(((int32_t)60), NULL);
		// if (SessionOrigin == null)
		ARSessionOrigin_tE7B28A1A19500BCC02711397A19E330425830BC3* L_0 = __this->___SessionOrigin_4;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605(L_0, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_1)
		{
			goto IL_0037;
		}
	}
	{
		// Debug.LogError("ARSessionOrigin?null??.");
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_LogError_mB00B2B4468EF3CAF041B038D840820FB84C924B2(_stringLiteral54490EFACE87135FB0F006006EE52E2B2AB48860, NULL);
	}

IL_0037:
	{
		// if (Session == null)
		ARSession_t13374A44A01F2C6D90578F93E0F0DA2482BE3014* L_2 = __this->___Session_5;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_3;
		L_3 = Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605(L_2, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_3)
		{
			goto IL_004f;
		}
	}
	{
		// Debug.LogError("ARSession?null??.");
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_LogError_mB00B2B4468EF3CAF041B038D840820FB84C924B2(_stringLiteralFDD014F91C66371E34E858118A2CA2D827E4F259, NULL);
	}

IL_004f:
	{
		// if (ARCoreExtensions == null)
		ARCoreExtensions_tD81ADD2A10A04FC507DB1A9D022C0778510C3B41* L_4 = __this->___ARCoreExtensions_9;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_5;
		L_5 = Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605(L_4, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_5)
		{
			goto IL_0067;
		}
	}
	{
		// Debug.LogError("ARCoreExtensions?null??.");
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_LogError_mB00B2B4468EF3CAF041B038D840820FB84C924B2(_stringLiteral6723EB6602FE6F893E14A80270C65B9E51A270B8, NULL);
	}

IL_0067:
	{
		// }
		return;
	}
}
// System.Void Google.XR.ARCoreExtensions.Samples.Geospatial.GeospatialController::OnEnable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GeospatialController_OnEnable_mEB3602FCCA7C89B722AFD4159D144A8DEEA618B9 (GeospatialController_t69A2BBD44F5A190BB256B888033F5297AF0A0D2F* __this, const RuntimeMethod* method) 
{
	{
		// startLocationService = StartLocationService();
		RuntimeObject* L_0;
		L_0 = GeospatialController_StartLocationService_m72676812B8A1C07C07EAB8574995C827CF57DBB8(__this, NULL);
		__this->___startLocationService_26 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___startLocationService_26), (void*)L_0);
		// StartCoroutine(startLocationService);
		RuntimeObject* L_1 = __this->___startLocationService_26;
		Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B* L_2;
		L_2 = MonoBehaviour_StartCoroutine_m4CAFF732AA28CD3BDC5363B44A863575530EC812(__this, L_1, NULL);
		// isReturning = false;
		__this->___isReturning_20 = (bool)0;
		// enablingGeospatial = false;
		__this->___enablingGeospatial_22 = (bool)0;
		// localizationPassedTime = 0f;
		__this->___localizationPassedTime_23 = (0.0f);
		// isLocalizing = true;
		__this->___isLocalizing_21 = (bool)1;
		// SwitchToARView(true);
		GeospatialController_SwitchToARView_mFB94E97C62D009E13324C261E04900D34D47410E(__this, (bool)1, NULL);
		// }
		return;
	}
}
// System.Void Google.XR.ARCoreExtensions.Samples.Geospatial.GeospatialController::OnDisable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GeospatialController_OnDisable_m4494298A36B1BF602BC9839471386CC264FE50D1 (GeospatialController_t69A2BBD44F5A190BB256B888033F5297AF0A0D2F* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD657DE5D1A36FEE99E9A7DA0B50BB8B67C8E418A);
		s_Il2CppMethodInitialized = true;
	}
	{
		// StopCoroutine(asyncCheck);
		RuntimeObject* L_0 = __this->___asyncCheck_27;
		MonoBehaviour_StopCoroutine_mF9E93B82091E804595BE13AA29F9AB7517F7E04A(__this, L_0, NULL);
		// asyncCheck = null;
		__this->___asyncCheck_27 = (RuntimeObject*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___asyncCheck_27), (void*)(RuntimeObject*)NULL);
		// StopCoroutine(startLocationService);
		RuntimeObject* L_1 = __this->___startLocationService_26;
		MonoBehaviour_StopCoroutine_mF9E93B82091E804595BE13AA29F9AB7517F7E04A(__this, L_1, NULL);
		// startLocationService = null;
		__this->___startLocationService_26 = (RuntimeObject*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___startLocationService_26), (void*)(RuntimeObject*)NULL);
		// Debug.Log("??????????????????");
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB(_stringLiteralD657DE5D1A36FEE99E9A7DA0B50BB8B67C8E418A, NULL);
		// Input.location.Stop();
		LocationService_tF2F2720FE2C07562EBFD128889F9A99F4B41B1B2* L_2;
		L_2 = Input_get_location_m1D1FA0938E5B83C46A666CE78D95A58B39164DB5(NULL);
		NullCheck(L_2);
		LocationService_Stop_mB9332CB653E7A7CE6AE07240EA6C0B6C9AEC0D96(L_2, NULL);
		// }
		return;
	}
}
// System.Void Google.XR.ARCoreExtensions.Samples.Geospatial.GeospatialController::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GeospatialController_Update_m12FBC3C41C8B9B1060B6C586F36B51FA8315191E (GeospatialController_t69A2BBD44F5A190BB256B888033F5297AF0A0D2F* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EventSystem_t61C51380B105BE9D2C39C4F15B7E655659957707_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral236D6F3A97CD6FDEEC5E6F6EAF121A6FF6088BA6);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2409165FB90CD4A8B916FCA75790766B82C91748);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral83DDE7934EAE8CD16AB7A894865E42A838890063);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9E9B870ED7C93ECEB162D61CDC01C865A5D9FF69);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA628C3EA1A977D457A54A899CA2F513C35C50B9C);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralAAF764D0E49CF83587ED98F50A47A2B697560BC3);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC613D4D2FE3F5D74727D376F793286A2BCBB1391);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralCBC7B2D809AA30E69986685B83F487032D9121D5);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	GeospatialPose_tBF34434706FEEB7D1524DEE5FADDEE7E95452F2C V_3;
	memset((&V_3), 0, sizeof(V_3));
	GeospatialPose_tBF34434706FEEB7D1524DEE5FADDEE7E95452F2C V_4;
	memset((&V_4), 0, sizeof(V_4));
	Touch_t03E51455ED508492B3F278903A0114FA0E87B417 V_5;
	memset((&V_5), 0, sizeof(V_5));
	int32_t G_B24_0 = 0;
	int32_t G_B26_0 = 0;
	int32_t G_B25_0 = 0;
	GeospatialPose_tBF34434706FEEB7D1524DEE5FADDEE7E95452F2C G_B27_0;
	memset((&G_B27_0), 0, sizeof(G_B27_0));
	int32_t G_B27_1 = 0;
	{
		// if (!isInARView)
		bool L_0 = __this->___isInARView_19;
		if (L_0)
		{
			goto IL_0009;
		}
	}
	{
		// return;
		return;
	}

IL_0009:
	{
		// LifecycleUpdate();
		GeospatialController_LifecycleUpdate_m9DF865831BF6070D17D792ABD8948E03B692AC9C(__this, NULL);
		// if (isReturning)
		bool L_1 = __this->___isReturning_20;
		if (!L_1)
		{
			goto IL_0018;
		}
	}
	{
		// return;
		return;
	}

IL_0018:
	{
		// if (ARSession.state != ARSessionState.SessionInitializing &&
		//     ARSession.state != ARSessionState.SessionTracking)
		int32_t L_2;
		L_2 = ARSession_get_state_m6A22EE6441E58AC66E1FE9A7359D06C90C1A2842_inline(NULL);
		if ((((int32_t)L_2) == ((int32_t)6)))
		{
			goto IL_0029;
		}
	}
	{
		int32_t L_3;
		L_3 = ARSession_get_state_m6A22EE6441E58AC66E1FE9A7359D06C90C1A2842_inline(NULL);
		if ((((int32_t)L_3) == ((int32_t)7)))
		{
			goto IL_0029;
		}
	}
	{
		// return;
		return;
	}

IL_0029:
	{
		// var featureSupport = EarthManager.IsGeospatialModeSupported(GeospatialMode.Enabled);
		AREarthManager_tAC32FF06F084622687D9FB4837506A704301D0F0* L_4 = __this->___EarthManager_8;
		NullCheck(L_4);
		int32_t L_5;
		L_5 = AREarthManager_IsGeospatialModeSupported_m95784655267321A2E74719CB725D58F368AA278F(L_4, 2, NULL);
		V_0 = L_5;
		int32_t L_6 = V_0;
		switch (L_6)
		{
			case 0:
			{
				goto IL_004c;
			}
			case 1:
			{
				goto IL_004a;
			}
			case 2:
			{
				goto IL_004b;
			}
		}
	}
	{
		goto IL_008c;
	}

IL_004a:
	{
		// return;
		return;
	}

IL_004b:
	{
		// return;
		return;
	}

IL_004c:
	{
		// if (ARCoreExtensions.ARCoreExtensionsConfig.GeospatialMode == GeospatialMode.Disabled)
		ARCoreExtensions_tD81ADD2A10A04FC507DB1A9D022C0778510C3B41* L_7 = __this->___ARCoreExtensions_9;
		NullCheck(L_7);
		ARCoreExtensionsConfig_t241A8996B5A9CB82B5532C79DF31558CFFA531CD* L_8 = L_7->___ARCoreExtensionsConfig_7;
		NullCheck(L_8);
		int32_t L_9 = L_8->___GeospatialMode_5;
		if (L_9)
		{
			goto IL_008c;
		}
	}
	{
		// Debug.Log("GeospatialMode.Enabled ?????????");
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB(_stringLiteralCBC7B2D809AA30E69986685B83F487032D9121D5, NULL);
		// ARCoreExtensions.ARCoreExtensionsConfig.GeospatialMode = GeospatialMode.Enabled;
		ARCoreExtensions_tD81ADD2A10A04FC507DB1A9D022C0778510C3B41* L_10 = __this->___ARCoreExtensions_9;
		NullCheck(L_10);
		ARCoreExtensionsConfig_t241A8996B5A9CB82B5532C79DF31558CFFA531CD* L_11 = L_10->___ARCoreExtensionsConfig_7;
		NullCheck(L_11);
		L_11->___GeospatialMode_5 = 2;
		// configurePrepareTime = 3.0f;
		__this->___configurePrepareTime_24 = (3.0f);
		// enablingGeospatial = true;
		__this->___enablingGeospatial_22 = (bool)1;
		// return;
		return;
	}

IL_008c:
	{
		// if (enablingGeospatial)
		bool L_12 = __this->___enablingGeospatial_22;
		if (!L_12)
		{
			goto IL_00bd;
		}
	}
	{
		// configurePrepareTime -= Time.deltaTime;
		float L_13 = __this->___configurePrepareTime_24;
		float L_14;
		L_14 = Time_get_deltaTime_mC3195000401F0FD167DD2F948FD2BC58330D0865(NULL);
		__this->___configurePrepareTime_24 = ((float)il2cpp_codegen_subtract(L_13, L_14));
		// if (configurePrepareTime < 0)
		float L_15 = __this->___configurePrepareTime_24;
		if ((!(((float)L_15) < ((float)(0.0f)))))
		{
			goto IL_00bc;
		}
	}
	{
		// enablingGeospatial = false;
		__this->___enablingGeospatial_22 = (bool)0;
		goto IL_00bd;
	}

IL_00bc:
	{
		// return;
		return;
	}

IL_00bd:
	{
		// var earthState = EarthManager.EarthState;
		AREarthManager_tAC32FF06F084622687D9FB4837506A704301D0F0* L_16 = __this->___EarthManager_8;
		NullCheck(L_16);
		int32_t L_17;
		L_17 = AREarthManager_get_EarthState_m00405B03AE94D0CFB2E90596C028A35250517D38(L_16, NULL);
		V_1 = L_17;
		// if (earthState == EarthState.ErrorEarthNotReady)
		int32_t L_18 = V_1;
		if ((!(((uint32_t)L_18) == ((uint32_t)((int32_t)-100)))))
		{
			goto IL_00d9;
		}
	}
	{
		// Debug.Log("Geospatial ????????");
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB(_stringLiteral9E9B870ED7C93ECEB162D61CDC01C865A5D9FF69, NULL);
		// return;
		return;
	}

IL_00d9:
	{
		// else if (earthState != EarthState.Enabled)
		int32_t L_19 = V_1;
		if (!L_19)
		{
			goto IL_00e7;
		}
	}
	{
		// Debug.LogWarning("EarthState ??????????");
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_LogWarning_m33EF1B897E0C7C6FF538989610BFAFFEF4628CA9(_stringLiteral236D6F3A97CD6FDEEC5E6F6EAF121A6FF6088BA6, NULL);
		// return;
		return;
	}

IL_00e7:
	{
		// bool isSessionReady = (ARSession.state == ARSessionState.SessionTracking) && (Input.location.status == LocationServiceStatus.Running);
		int32_t L_20;
		L_20 = ARSession_get_state_m6A22EE6441E58AC66E1FE9A7359D06C90C1A2842_inline(NULL);
		if ((!(((uint32_t)L_20) == ((uint32_t)7))))
		{
			goto IL_00fe;
		}
	}
	{
		LocationService_tF2F2720FE2C07562EBFD128889F9A99F4B41B1B2* L_21;
		L_21 = Input_get_location_m1D1FA0938E5B83C46A666CE78D95A58B39164DB5(NULL);
		NullCheck(L_21);
		int32_t L_22;
		L_22 = LocationService_get_status_m25B7C4012B9529265D9746BB73ED689737E9C9CD(L_21, NULL);
		G_B24_0 = ((((int32_t)L_22) == ((int32_t)2))? 1 : 0);
		goto IL_00ff;
	}

IL_00fe:
	{
		G_B24_0 = 0;
	}

IL_00ff:
	{
		// var earthTrackingState = EarthManager.EarthTrackingState;
		AREarthManager_tAC32FF06F084622687D9FB4837506A704301D0F0* L_23 = __this->___EarthManager_8;
		NullCheck(L_23);
		int32_t L_24;
		L_24 = AREarthManager_get_EarthTrackingState_m07DA12743E09AC92C21F6868B51D3211023B299A(L_23, NULL);
		V_2 = L_24;
		// var pose = earthTrackingState == TrackingState.Tracking ? EarthManager.CameraGeospatialPose : new GeospatialPose();
		int32_t L_25 = V_2;
		G_B25_0 = G_B24_0;
		if ((((int32_t)L_25) == ((int32_t)2)))
		{
			G_B26_0 = G_B24_0;
			goto IL_011b;
		}
	}
	{
		il2cpp_codegen_initobj((&V_4), sizeof(GeospatialPose_tBF34434706FEEB7D1524DEE5FADDEE7E95452F2C));
		GeospatialPose_tBF34434706FEEB7D1524DEE5FADDEE7E95452F2C L_26 = V_4;
		G_B27_0 = L_26;
		G_B27_1 = G_B25_0;
		goto IL_0126;
	}

IL_011b:
	{
		AREarthManager_tAC32FF06F084622687D9FB4837506A704301D0F0* L_27 = __this->___EarthManager_8;
		NullCheck(L_27);
		GeospatialPose_tBF34434706FEEB7D1524DEE5FADDEE7E95452F2C L_28;
		L_28 = AREarthManager_get_CameraGeospatialPose_mE81C71F8E4CD0B6FD4116D0B3E5B97F00DDE9C1A(L_27, NULL);
		G_B27_0 = L_28;
		G_B27_1 = G_B26_0;
	}

IL_0126:
	{
		V_3 = G_B27_0;
		// if (!isSessionReady || earthTrackingState != TrackingState.Tracking ||
		//     pose.HeadingAccuracy > headingAccuracyThreshold ||
		//     pose.HorizontalAccuracy > horizontalAccuracyThreshold)
		if (!G_B27_1)
		{
			goto IL_014f;
		}
	}
	{
		int32_t L_29 = V_2;
		if ((!(((uint32_t)L_29) == ((uint32_t)2))))
		{
			goto IL_014f;
		}
	}
	{
		GeospatialPose_tBF34434706FEEB7D1524DEE5FADDEE7E95452F2C L_30 = V_3;
		double L_31 = L_30.___HeadingAccuracy_4;
		if ((((double)L_31) > ((double)(25.0))))
		{
			goto IL_014f;
		}
	}
	{
		GeospatialPose_tBF34434706FEEB7D1524DEE5FADDEE7E95452F2C L_32 = V_3;
		double L_33 = L_32.___HorizontalAccuracy_5;
		if ((!(((double)L_33) > ((double)(20.0)))))
		{
			goto IL_0196;
		}
	}

IL_014f:
	{
		// if (!isLocalizing)
		bool L_34 = __this->___isLocalizing_21;
		if (L_34)
		{
			goto IL_0169;
		}
	}
	{
		// isLocalizing = true;
		__this->___isLocalizing_21 = (bool)1;
		// localizationPassedTime = 0f;
		__this->___localizationPassedTime_23 = (0.0f);
	}

IL_0169:
	{
		// if (localizationPassedTime > _timeoutSeconds)
		float L_35 = __this->___localizationPassedTime_23;
		if ((!(((float)L_35) > ((float)(180.0f)))))
		{
			goto IL_0182;
		}
	}
	{
		// Debug.LogError("?????????????????????");
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_LogError_mB00B2B4468EF3CAF041B038D840820FB84C924B2(_stringLiteral83DDE7934EAE8CD16AB7A894865E42A838890063, NULL);
		goto IL_01fb;
	}

IL_0182:
	{
		// localizationPassedTime += Time.deltaTime;
		float L_36 = __this->___localizationPassedTime_23;
		float L_37;
		L_37 = Time_get_deltaTime_mC3195000401F0FD167DD2F948FD2BC58330D0865(NULL);
		__this->___localizationPassedTime_23 = ((float)il2cpp_codegen_add(L_36, L_37));
		goto IL_01fb;
	}

IL_0196:
	{
		// else if (isLocalizing)
		bool L_38 = __this->___isLocalizing_21;
		if (!L_38)
		{
			goto IL_01b2;
		}
	}
	{
		// isLocalizing = false;
		__this->___isLocalizing_21 = (bool)0;
		// localizationPassedTime = 0f;
		__this->___localizationPassedTime_23 = (0.0f);
		goto IL_01fb;
	}

IL_01b2:
	{
		// else if ((Input.touchCount > 0 && Input.GetTouch(0).phase == TouchPhase.Began) && (!EventSystem.current.IsPointerOverGameObject(Input.GetTouch(0).fingerId)))
		int32_t L_39;
		L_39 = Input_get_touchCount_m057388BFC67A0F4CA53764B1022867ED81D01E39(NULL);
		if ((((int32_t)L_39) <= ((int32_t)0)))
		{
			goto IL_01fb;
		}
	}
	{
		Touch_t03E51455ED508492B3F278903A0114FA0E87B417 L_40;
		L_40 = Input_GetTouch_m75D99FE801A94279874FA8DC6B6ADAD35F5123B1(0, NULL);
		V_5 = L_40;
		int32_t L_41;
		L_41 = Touch_get_phase_mB82409FB2BE1C32ABDBA6A72E52A099D28AB70B0((&V_5), NULL);
		if (L_41)
		{
			goto IL_01fb;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(EventSystem_t61C51380B105BE9D2C39C4F15B7E655659957707_il2cpp_TypeInfo_var);
		EventSystem_t61C51380B105BE9D2C39C4F15B7E655659957707* L_42;
		L_42 = EventSystem_get_current_mC87C69FB418563DC2A571A10E2F9DB59A6785016(NULL);
		Touch_t03E51455ED508492B3F278903A0114FA0E87B417 L_43;
		L_43 = Input_GetTouch_m75D99FE801A94279874FA8DC6B6ADAD35F5123B1(0, NULL);
		V_5 = L_43;
		int32_t L_44;
		L_44 = Touch_get_fingerId_mC1DCE93BFA0574960A3AE5329AE6C5F7E06962BD((&V_5), NULL);
		NullCheck(L_42);
		bool L_45;
		L_45 = EventSystem_IsPointerOverGameObject_m238732B4FDEA343976D798FF04DB34C3221243C2(L_42, L_44, NULL);
		if (L_45)
		{
			goto IL_01fb;
		}
	}
	{
		// HandleScreenTap(Input.GetTouch(0).position);
		Touch_t03E51455ED508492B3F278903A0114FA0E87B417 L_46;
		L_46 = Input_GetTouch_m75D99FE801A94279874FA8DC6B6ADAD35F5123B1(0, NULL);
		V_5 = L_46;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_47;
		L_47 = Touch_get_position_m41B9EB0F3F3E1BE98CEB388253A9E31979CB964A((&V_5), NULL);
		GeospatialController_HandleScreenTap_mCA8A8A66E4DCC3981E2FB44F75ACEEFA66FF606D(__this, L_47, NULL);
	}

IL_01fb:
	{
		// debugText.text = string.Format(
		//     "Latitude/Longitude: {1}?, {2}?{0}" +
		//     "Horizontal Accuracy: {3}m{0}" +
		//     "Altitude: {4}m{0}" +
		//     "Vertical Accuracy: {5}m{0}" +
		//     "Heading: {6}?{0}" +
		//     "Heading Accuracy: {7}?",
		//     Environment.NewLine,
		//     pose.Latitude.ToString("F6"),
		//     pose.Longitude.ToString("F6"),
		//     pose.HorizontalAccuracy.ToString("F6"),
		//     pose.Altitude.ToString("F2"),
		//     pose.VerticalAccuracy.ToString("F2"),
		//     pose.Heading.ToString("F1"),
		//     pose.HeadingAccuracy.ToString("F1")
		// );
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_48 = __this->___debugText_28;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_49 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var, (uint32_t)8);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_50 = L_49;
		String_t* L_51;
		L_51 = Environment_get_NewLine_m8BF68A4EFDAFFB66500984CE779629811BA98FFF(NULL);
		NullCheck(L_50);
		ArrayElementTypeCheck (L_50, L_51);
		(L_50)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject*)L_51);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_52 = L_50;
		double* L_53 = (&(&V_3)->___Latitude_0);
		String_t* L_54;
		L_54 = Double_ToString_m70EC76E1DAD7E8B5B47AF9292189BF3711B24B75(L_53, _stringLiteralAAF764D0E49CF83587ED98F50A47A2B697560BC3, NULL);
		NullCheck(L_52);
		ArrayElementTypeCheck (L_52, L_54);
		(L_52)->SetAt(static_cast<il2cpp_array_size_t>(1), (RuntimeObject*)L_54);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_55 = L_52;
		double* L_56 = (&(&V_3)->___Longitude_1);
		String_t* L_57;
		L_57 = Double_ToString_m70EC76E1DAD7E8B5B47AF9292189BF3711B24B75(L_56, _stringLiteralAAF764D0E49CF83587ED98F50A47A2B697560BC3, NULL);
		NullCheck(L_55);
		ArrayElementTypeCheck (L_55, L_57);
		(L_55)->SetAt(static_cast<il2cpp_array_size_t>(2), (RuntimeObject*)L_57);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_58 = L_55;
		double* L_59 = (&(&V_3)->___HorizontalAccuracy_5);
		String_t* L_60;
		L_60 = Double_ToString_m70EC76E1DAD7E8B5B47AF9292189BF3711B24B75(L_59, _stringLiteralAAF764D0E49CF83587ED98F50A47A2B697560BC3, NULL);
		NullCheck(L_58);
		ArrayElementTypeCheck (L_58, L_60);
		(L_58)->SetAt(static_cast<il2cpp_array_size_t>(3), (RuntimeObject*)L_60);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_61 = L_58;
		double* L_62 = (&(&V_3)->___Altitude_2);
		String_t* L_63;
		L_63 = Double_ToString_m70EC76E1DAD7E8B5B47AF9292189BF3711B24B75(L_62, _stringLiteral2409165FB90CD4A8B916FCA75790766B82C91748, NULL);
		NullCheck(L_61);
		ArrayElementTypeCheck (L_61, L_63);
		(L_61)->SetAt(static_cast<il2cpp_array_size_t>(4), (RuntimeObject*)L_63);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_64 = L_61;
		double* L_65 = (&(&V_3)->___VerticalAccuracy_6);
		String_t* L_66;
		L_66 = Double_ToString_m70EC76E1DAD7E8B5B47AF9292189BF3711B24B75(L_65, _stringLiteral2409165FB90CD4A8B916FCA75790766B82C91748, NULL);
		NullCheck(L_64);
		ArrayElementTypeCheck (L_64, L_66);
		(L_64)->SetAt(static_cast<il2cpp_array_size_t>(5), (RuntimeObject*)L_66);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_67 = L_64;
		double* L_68 = (&(&V_3)->___Heading_3);
		String_t* L_69;
		L_69 = Double_ToString_m70EC76E1DAD7E8B5B47AF9292189BF3711B24B75(L_68, _stringLiteralC613D4D2FE3F5D74727D376F793286A2BCBB1391, NULL);
		NullCheck(L_67);
		ArrayElementTypeCheck (L_67, L_69);
		(L_67)->SetAt(static_cast<il2cpp_array_size_t>(6), (RuntimeObject*)L_69);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_70 = L_67;
		double* L_71 = (&(&V_3)->___HeadingAccuracy_4);
		String_t* L_72;
		L_72 = Double_ToString_m70EC76E1DAD7E8B5B47AF9292189BF3711B24B75(L_71, _stringLiteralC613D4D2FE3F5D74727D376F793286A2BCBB1391, NULL);
		NullCheck(L_70);
		ArrayElementTypeCheck (L_70, L_72);
		(L_70)->SetAt(static_cast<il2cpp_array_size_t>(7), (RuntimeObject*)L_72);
		String_t* L_73;
		L_73 = String_Format_m918500C1EFB475181349A79989BB79BB36102894(_stringLiteralA628C3EA1A977D457A54A899CA2F513C35C50B9C, L_70, NULL);
		NullCheck(L_48);
		VirtualActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_48, L_73);
		// }
		return;
	}
}
// System.Void Google.XR.ARCoreExtensions.Samples.Geospatial.GeospatialController::HandleScreenTap(UnityEngine.Vector2)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GeospatialController_HandleScreenTap_mCA8A8A66E4DCC3981E2FB44F75ACEEFA66FF606D (GeospatialController_t69A2BBD44F5A190BB256B888033F5297AF0A0D2F* __this, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___position0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral62EC32DB0165ABAB454A1C8263AA078C3F4A968D);
		s_Il2CppMethodInitialized = true;
	}
	RaycastHit_t6F30BD0B38B56401CA833A1B87BD74F2ACD2F2B5 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// Ray ray = Camera.main.ScreenPointToRay(position);
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_0;
		L_0 = Camera_get_main_m52C992F18E05355ABB9EEB64A4BF2215E12762DF(NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_1 = ___position0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2;
		L_2 = Vector2_op_Implicit_m6D9CABB2C791A192867D7A4559D132BE86DD3EB7_inline(L_1, NULL);
		NullCheck(L_0);
		Ray_t2B1742D7958DC05BDC3EFC7461D3593E1430DC00 L_3;
		L_3 = Camera_ScreenPointToRay_m2887B9A49880B7AB670C57D66B67D6A6689FE315(L_0, L_2, NULL);
		// if(Physics.Raycast(ray, out hit))
		bool L_4;
		L_4 = Physics_Raycast_mCAC9F02A1AAB49E16B384EBC8318E2DF30F4B0E5(L_3, (&V_0), NULL);
		if (!L_4)
		{
			goto IL_0059;
		}
	}
	{
		// if(hit.collider == null) return;
		Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* L_5;
		L_5 = RaycastHit_get_collider_m84B160439BBEAB6D9E94B799F720E25C9E2D444D((&V_0), NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_6;
		L_6 = Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605(L_5, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_6)
		{
			goto IL_0029;
		}
	}
	{
		// if(hit.collider == null) return;
		return;
	}

IL_0029:
	{
		// if(hit.collider.CompareTag("StartButton"))
		Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* L_7;
		L_7 = RaycastHit_get_collider_m84B160439BBEAB6D9E94B799F720E25C9E2D444D((&V_0), NULL);
		NullCheck(L_7);
		bool L_8;
		L_8 = Component_CompareTag_mE6F8897E84F12DF12D302FFC4D58204D51096FC5(L_7, _stringLiteral62EC32DB0165ABAB454A1C8263AA078C3F4A968D, NULL);
		if (!L_8)
		{
			goto IL_0059;
		}
	}
	{
		// notesGenerator.OnStartButton();
		NotesGenerator_tD968B1468A55A495385ACE41CDC9423D02852B91* L_9 = __this->___notesGenerator_10;
		NullCheck(L_9);
		NotesGenerator_OnStartButton_m3C7B8F1D85B536F8F59F95E6BA0D01BBC5E1C5E4(L_9, NULL);
		// hit.collider.gameObject.SetActive(false);
		Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* L_10;
		L_10 = RaycastHit_get_collider_m84B160439BBEAB6D9E94B799F720E25C9E2D444D((&V_0), NULL);
		NullCheck(L_10);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_11;
		L_11 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_10, NULL);
		NullCheck(L_11);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_11, (bool)0, NULL);
	}

IL_0059:
	{
		// }
		return;
	}
}
// System.Void Google.XR.ARCoreExtensions.Samples.Geospatial.GeospatialController::SwitchToARView(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GeospatialController_SwitchToARView_mFB94E97C62D009E13324C261E04900D34D47410E (GeospatialController_t69A2BBD44F5A190BB256B888033F5297AF0A0D2F* __this, bool ___enable0, const RuntimeMethod* method) 
{
	{
		// isInARView = enable;
		bool L_0 = ___enable0;
		__this->___isInARView_19 = L_0;
		// SessionOrigin.gameObject.SetActive(enable);
		ARSessionOrigin_tE7B28A1A19500BCC02711397A19E330425830BC3* L_1 = __this->___SessionOrigin_4;
		NullCheck(L_1);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_2;
		L_2 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_1, NULL);
		bool L_3 = ___enable0;
		NullCheck(L_2);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_2, L_3, NULL);
		// Session.gameObject.SetActive(enable);
		ARSession_t13374A44A01F2C6D90578F93E0F0DA2482BE3014* L_4 = __this->___Session_5;
		NullCheck(L_4);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_5;
		L_5 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_4, NULL);
		bool L_6 = ___enable0;
		NullCheck(L_5);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_5, L_6, NULL);
		// ARCoreExtensions.gameObject.SetActive(enable);
		ARCoreExtensions_tD81ADD2A10A04FC507DB1A9D022C0778510C3B41* L_7 = __this->___ARCoreExtensions_9;
		NullCheck(L_7);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_8;
		L_8 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_7, NULL);
		bool L_9 = ___enable0;
		NullCheck(L_8);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_8, L_9, NULL);
		// if (enable && asyncCheck == null)
		bool L_10 = ___enable0;
		if (!L_10)
		{
			goto IL_005e;
		}
	}
	{
		RuntimeObject* L_11 = __this->___asyncCheck_27;
		if (L_11)
		{
			goto IL_005e;
		}
	}
	{
		// asyncCheck = AvailabilityCheck();
		RuntimeObject* L_12;
		L_12 = GeospatialController_AvailabilityCheck_mBD33DAAFFBDF7259087853B4298004DAD5D86519(__this, NULL);
		__this->___asyncCheck_27 = L_12;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___asyncCheck_27), (void*)L_12);
		// StartCoroutine(asyncCheck);
		RuntimeObject* L_13 = __this->___asyncCheck_27;
		Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B* L_14;
		L_14 = MonoBehaviour_StartCoroutine_m4CAFF732AA28CD3BDC5363B44A863575530EC812(__this, L_13, NULL);
	}

IL_005e:
	{
		// }
		return;
	}
}
// System.Collections.IEnumerator Google.XR.ARCoreExtensions.Samples.Geospatial.GeospatialController::AvailabilityCheck()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* GeospatialController_AvailabilityCheck_mBD33DAAFFBDF7259087853B4298004DAD5D86519 (GeospatialController_t69A2BBD44F5A190BB256B888033F5297AF0A0D2F* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CAvailabilityCheckU3Ed__31_t6354B82010109F309788B4A0FF01E47D13B06594_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CAvailabilityCheckU3Ed__31_t6354B82010109F309788B4A0FF01E47D13B06594* L_0 = (U3CAvailabilityCheckU3Ed__31_t6354B82010109F309788B4A0FF01E47D13B06594*)il2cpp_codegen_object_new(U3CAvailabilityCheckU3Ed__31_t6354B82010109F309788B4A0FF01E47D13B06594_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		U3CAvailabilityCheckU3Ed__31__ctor_mD183DE5D80C639AB22A718B0337C330F2D92EE02(L_0, 0, NULL);
		U3CAvailabilityCheckU3Ed__31_t6354B82010109F309788B4A0FF01E47D13B06594* L_1 = L_0;
		NullCheck(L_1);
		L_1->___U3CU3E4__this_2 = __this;
		Il2CppCodeGenWriteBarrier((void**)(&L_1->___U3CU3E4__this_2), (void*)__this);
		return L_1;
	}
}
// System.Collections.IEnumerator Google.XR.ARCoreExtensions.Samples.Geospatial.GeospatialController::StartLocationService()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* GeospatialController_StartLocationService_m72676812B8A1C07C07EAB8574995C827CF57DBB8 (GeospatialController_t69A2BBD44F5A190BB256B888033F5297AF0A0D2F* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CStartLocationServiceU3Ed__32_tD9DDF9E93BC369B8B82B00FE287C67EEC056246A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CStartLocationServiceU3Ed__32_tD9DDF9E93BC369B8B82B00FE287C67EEC056246A* L_0 = (U3CStartLocationServiceU3Ed__32_tD9DDF9E93BC369B8B82B00FE287C67EEC056246A*)il2cpp_codegen_object_new(U3CStartLocationServiceU3Ed__32_tD9DDF9E93BC369B8B82B00FE287C67EEC056246A_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		U3CStartLocationServiceU3Ed__32__ctor_mEFB95F2ED6B200E13A61D078F995D4BF3AF4CF01(L_0, 0, NULL);
		U3CStartLocationServiceU3Ed__32_tD9DDF9E93BC369B8B82B00FE287C67EEC056246A* L_1 = L_0;
		NullCheck(L_1);
		L_1->___U3CU3E4__this_2 = __this;
		Il2CppCodeGenWriteBarrier((void**)(&L_1->___U3CU3E4__this_2), (void*)__this);
		return L_1;
	}
}
// System.Void Google.XR.ARCoreExtensions.Samples.Geospatial.GeospatialController::LifecycleUpdate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GeospatialController_LifecycleUpdate_m9DF865831BF6070D17D792ABD8948E03B692AC9C (GeospatialController_t69A2BBD44F5A190BB256B888033F5297AF0A0D2F* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral67BB81633478E0EF510BF3FFDCF8DA2582FE6603);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD95D901311B29A4E295DB3A65D91D1272FE0BDF5);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF3EF69386AE9E550B6452AFF1DC4D09789086488);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		// if (Input.GetKeyUp(KeyCode.Escape))
		bool L_0;
		L_0 = Input_GetKeyUp_m9A962E395811A9901E7E05F267E198A533DBEF2F(((int32_t)27), NULL);
		if (!L_0)
		{
			goto IL_000e;
		}
	}
	{
		// Application.Quit();
		Application_Quit_mE304382DB9A6455C2A474C8F364C7387F37E9281(NULL);
	}

IL_000e:
	{
		// if (isReturning)
		bool L_1 = __this->___isReturning_20;
		if (!L_1)
		{
			goto IL_0017;
		}
	}
	{
		// return;
		return;
	}

IL_0017:
	{
		// var sleepTimeout = SleepTimeout.NeverSleep;
		V_0 = (-1);
		// if (ARSession.state != ARSessionState.SessionTracking)
		int32_t L_2;
		L_2 = ARSession_get_state_m6A22EE6441E58AC66E1FE9A7359D06C90C1A2842_inline(NULL);
		if ((((int32_t)L_2) == ((int32_t)7)))
		{
			goto IL_0024;
		}
	}
	{
		// sleepTimeout = SleepTimeout.SystemSetting;
		V_0 = ((int32_t)-2);
	}

IL_0024:
	{
		// Screen.sleepTimeout = sleepTimeout;
		int32_t L_3 = V_0;
		Screen_set_sleepTimeout_mB375970159A73BB484A2B5E62A943330B83ABF9A(L_3, NULL);
		// string returningReason = string.Empty;
		String_t* L_4 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->___Empty_6;
		// if (ARSession.state != ARSessionState.CheckingAvailability &&
		//     ARSession.state != ARSessionState.Ready &&
		//     ARSession.state != ARSessionState.SessionInitializing &&
		//     ARSession.state != ARSessionState.SessionTracking)
		int32_t L_5;
		L_5 = ARSession_get_state_m6A22EE6441E58AC66E1FE9A7359D06C90C1A2842_inline(NULL);
		if ((((int32_t)L_5) == ((int32_t)2)))
		{
			goto IL_005b;
		}
	}
	{
		int32_t L_6;
		L_6 = ARSession_get_state_m6A22EE6441E58AC66E1FE9A7359D06C90C1A2842_inline(NULL);
		if ((((int32_t)L_6) == ((int32_t)5)))
		{
			goto IL_005b;
		}
	}
	{
		int32_t L_7;
		L_7 = ARSession_get_state_m6A22EE6441E58AC66E1FE9A7359D06C90C1A2842_inline(NULL);
		if ((((int32_t)L_7) == ((int32_t)6)))
		{
			goto IL_005b;
		}
	}
	{
		int32_t L_8;
		L_8 = ARSession_get_state_m6A22EE6441E58AC66E1FE9A7359D06C90C1A2842_inline(NULL);
		if ((((int32_t)L_8) == ((int32_t)7)))
		{
			goto IL_005b;
		}
	}
	{
		// Debug.LogError("ARSession ????????????????????????????");
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_LogError_mB00B2B4468EF3CAF041B038D840820FB84C924B2(_stringLiteralF3EF69386AE9E550B6452AFF1DC4D09789086488, NULL);
		return;
	}

IL_005b:
	{
		// else if (Input.location.status == LocationServiceStatus.Failed)
		LocationService_tF2F2720FE2C07562EBFD128889F9A99F4B41B1B2* L_9;
		L_9 = Input_get_location_m1D1FA0938E5B83C46A666CE78D95A58B39164DB5(NULL);
		NullCheck(L_9);
		int32_t L_10;
		L_10 = LocationService_get_status_m25B7C4012B9529265D9746BB73ED689737E9C9CD(L_9, NULL);
		if ((!(((uint32_t)L_10) == ((uint32_t)3))))
		{
			goto IL_0073;
		}
	}
	{
		// Debug.LogError("???????????????????????????????????????????????");
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_LogError_mB00B2B4468EF3CAF041B038D840820FB84C924B2(_stringLiteral67BB81633478E0EF510BF3FFDCF8DA2582FE6603, NULL);
		return;
	}

IL_0073:
	{
		// else if (SessionOrigin == null || Session == null || ARCoreExtensions == null)
		ARSessionOrigin_tE7B28A1A19500BCC02711397A19E330425830BC3* L_11 = __this->___SessionOrigin_4;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_12;
		L_12 = Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605(L_11, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (L_12)
		{
			goto IL_009d;
		}
	}
	{
		ARSession_t13374A44A01F2C6D90578F93E0F0DA2482BE3014* L_13 = __this->___Session_5;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_14;
		L_14 = Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605(L_13, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (L_14)
		{
			goto IL_009d;
		}
	}
	{
		ARCoreExtensions_tD81ADD2A10A04FC507DB1A9D022C0778510C3B41* L_15 = __this->___ARCoreExtensions_9;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_16;
		L_16 = Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605(L_15, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_16)
		{
			goto IL_00a7;
		}
	}

IL_009d:
	{
		// Debug.LogError("AR????????????????");
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_LogError_mB00B2B4468EF3CAF041B038D840820FB84C924B2(_stringLiteralD95D901311B29A4E295DB3A65D91D1272FE0BDF5, NULL);
	}

IL_00a7:
	{
		// }
		return;
	}
}
// System.Void Google.XR.ARCoreExtensions.Samples.Geospatial.GeospatialController::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GeospatialController__ctor_m94BF4BBFAAEC1C97890C4E06BF04404FBE6D8FEC (GeospatialController_t69A2BBD44F5A190BB256B888033F5297AF0A0D2F* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_m447372C1EF7141193B93090A77395B786C72C7BC_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// private float configurePrepareTime = 3f;
		__this->___configurePrepareTime_24 = (3.0f);
		// private List<GameObject> _anchorObjects = new List<GameObject>();
		List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* L_0 = (List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B*)il2cpp_codegen_object_new(List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		List_1__ctor_m447372C1EF7141193B93090A77395B786C72C7BC(L_0, List_1__ctor_m447372C1EF7141193B93090A77395B786C72C7BC_RuntimeMethod_var);
		__this->____anchorObjects_25 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____anchorObjects_25), (void*)L_0);
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
// System.Void Google.XR.ARCoreExtensions.Samples.Geospatial.GeospatialController/<AvailabilityCheck>d__31::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CAvailabilityCheckU3Ed__31__ctor_mD183DE5D80C639AB22A718B0337C330F2D92EE02 (U3CAvailabilityCheckU3Ed__31_t6354B82010109F309788B4A0FF01E47D13B06594* __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		int32_t L_0 = ___U3CU3E1__state0;
		__this->___U3CU3E1__state_0 = L_0;
		return;
	}
}
// System.Void Google.XR.ARCoreExtensions.Samples.Geospatial.GeospatialController/<AvailabilityCheck>d__31::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CAvailabilityCheckU3Ed__31_System_IDisposable_Dispose_m5383E2559E6C0000E62C6A53EE1A0BA130836FD9 (U3CAvailabilityCheckU3Ed__31_t6354B82010109F309788B4A0FF01E47D13B06594* __this, const RuntimeMethod* method) 
{
	{
		return;
	}
}
// System.Boolean Google.XR.ARCoreExtensions.Samples.Geospatial.GeospatialController/<AvailabilityCheck>d__31::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CAvailabilityCheckU3Ed__31_MoveNext_mCEC290CC2B7BE40253A16F667B17A13AF82230D8 (U3CAvailabilityCheckU3Ed__31_t6354B82010109F309788B4A0FF01E47D13B06594* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&VpsAvailability_t45DB38FE9BF4135673CE5455506068164625A197_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1ABCB9A2CA1FE87C833C0D42EF5790DE5D6D5D7A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1B34A45352A1F9AB3E6BCFB17173317AFF631C89);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralAE508547AA6A7CB0059B0EB451E20BE3252CAACA);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD4F10F0250BE015A970ECE39AF0E63147876656F);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralED772B549705A1BF599485764F40D84130414B4B);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	GeospatialController_t69A2BBD44F5A190BB256B888033F5297AF0A0D2F* V_1 = NULL;
	{
		int32_t L_0 = __this->___U3CU3E1__state_0;
		V_0 = L_0;
		GeospatialController_t69A2BBD44F5A190BB256B888033F5297AF0A0D2F* L_1 = __this->___U3CU3E4__this_2;
		V_1 = L_1;
		int32_t L_2 = V_0;
		switch (L_2)
		{
			case 0:
			{
				goto IL_0036;
			}
			case 1:
			{
				goto IL_0058;
			}
			case 2:
			{
				goto IL_006f;
			}
			case 3:
			{
				goto IL_0092;
			}
			case 4:
			{
				goto IL_00a9;
			}
			case 5:
			{
				goto IL_00e9;
			}
			case 6:
			{
				goto IL_0118;
			}
			case 7:
			{
				goto IL_0192;
			}
		}
	}
	{
		return (bool)0;
	}

IL_0036:
	{
		__this->___U3CU3E1__state_0 = (-1);
		// if (ARSession.state == ARSessionState.None)
		int32_t L_3;
		L_3 = ARSession_get_state_m6A22EE6441E58AC66E1FE9A7359D06C90C1A2842_inline(NULL);
		if (L_3)
		{
			goto IL_005f;
		}
	}
	{
		// yield return ARSession.CheckAvailability();
		RuntimeObject* L_4;
		L_4 = ARSession_CheckAvailability_m7090FD96E8580EB3E6CAB97B8344BF845B254D0A(NULL);
		__this->___U3CU3E2__current_1 = L_4;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3E2__current_1), (void*)L_4);
		__this->___U3CU3E1__state_0 = 1;
		return (bool)1;
	}

IL_0058:
	{
		__this->___U3CU3E1__state_0 = (-1);
	}

IL_005f:
	{
		// yield return null;
		__this->___U3CU3E2__current_1 = NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3E2__current_1), (void*)NULL);
		__this->___U3CU3E1__state_0 = 2;
		return (bool)1;
	}

IL_006f:
	{
		__this->___U3CU3E1__state_0 = (-1);
		// if (ARSession.state == ARSessionState.NeedsInstall)
		int32_t L_5;
		L_5 = ARSession_get_state_m6A22EE6441E58AC66E1FE9A7359D06C90C1A2842_inline(NULL);
		if ((!(((uint32_t)L_5) == ((uint32_t)3))))
		{
			goto IL_0099;
		}
	}
	{
		// yield return ARSession.Install();
		RuntimeObject* L_6;
		L_6 = ARSession_Install_m9C4DCECEA000E16F4992376B7E40DA0C95B58166(NULL);
		__this->___U3CU3E2__current_1 = L_6;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3E2__current_1), (void*)L_6);
		__this->___U3CU3E1__state_0 = 3;
		return (bool)1;
	}

IL_0092:
	{
		__this->___U3CU3E1__state_0 = (-1);
	}

IL_0099:
	{
		// yield return null;
		__this->___U3CU3E2__current_1 = NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3E2__current_1), (void*)NULL);
		__this->___U3CU3E1__state_0 = 4;
		return (bool)1;
	}

IL_00a9:
	{
		__this->___U3CU3E1__state_0 = (-1);
		// if (!Permission.HasUserAuthorizedPermission(Permission.Camera))
		bool L_7;
		L_7 = Permission_HasUserAuthorizedPermission_mF4C90E13124E28F6F672200E489CC25A9B645B8B(_stringLiteralD4F10F0250BE015A970ECE39AF0E63147876656F, NULL);
		if (L_7)
		{
			goto IL_00f0;
		}
	}
	{
		// Debug.Log("??????????????");
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB(_stringLiteralAE508547AA6A7CB0059B0EB451E20BE3252CAACA, NULL);
		// Permission.RequestUserPermission(Permission.Camera);
		Permission_RequestUserPermission_mF9CF3A21AAF34B311137C4D00B3AD6A6C2694242(_stringLiteralD4F10F0250BE015A970ECE39AF0E63147876656F, NULL);
		// yield return new WaitForSeconds(3.0f);
		WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3* L_8 = (WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3*)il2cpp_codegen_object_new(WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3_il2cpp_TypeInfo_var);
		NullCheck(L_8);
		WaitForSeconds__ctor_m579F95BADEDBAB4B3A7E302C6EE3995926EF2EFC(L_8, (3.0f), NULL);
		__this->___U3CU3E2__current_1 = L_8;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3E2__current_1), (void*)L_8);
		__this->___U3CU3E1__state_0 = 5;
		return (bool)1;
	}

IL_00e9:
	{
		__this->___U3CU3E1__state_0 = (-1);
	}

IL_00f0:
	{
		// if (!Permission.HasUserAuthorizedPermission(Permission.Camera))
		bool L_9;
		L_9 = Permission_HasUserAuthorizedPermission_mF4C90E13124E28F6F672200E489CC25A9B645B8B(_stringLiteralD4F10F0250BE015A970ECE39AF0E63147876656F, NULL);
		if (L_9)
		{
			goto IL_011f;
		}
	}
	{
		// Debug.LogWarning(
		//     "Failed to get camera permission. VPS availability check is not available.");
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_LogWarning_m33EF1B897E0C7C6FF538989610BFAFFEF4628CA9(_stringLiteral1ABCB9A2CA1FE87C833C0D42EF5790DE5D6D5D7A, NULL);
		// yield break;
		return (bool)0;
	}

IL_0108:
	{
		// yield return null;
		__this->___U3CU3E2__current_1 = NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3E2__current_1), (void*)NULL);
		__this->___U3CU3E1__state_0 = 6;
		return (bool)1;
	}

IL_0118:
	{
		__this->___U3CU3E1__state_0 = (-1);
	}

IL_011f:
	{
		// while (waitingForLocationService)
		GeospatialController_t69A2BBD44F5A190BB256B888033F5297AF0A0D2F* L_10 = V_1;
		NullCheck(L_10);
		bool L_11 = L_10->___waitingForLocationService_18;
		if (L_11)
		{
			goto IL_0108;
		}
	}
	{
		// if (Input.location.status != LocationServiceStatus.Running)
		LocationService_tF2F2720FE2C07562EBFD128889F9A99F4B41B1B2* L_12;
		L_12 = Input_get_location_m1D1FA0938E5B83C46A666CE78D95A58B39164DB5(NULL);
		NullCheck(L_12);
		int32_t L_13;
		L_13 = LocationService_get_status_m25B7C4012B9529265D9746BB73ED689737E9C9CD(L_12, NULL);
		if ((((int32_t)L_13) == ((int32_t)2)))
		{
			goto IL_0140;
		}
	}
	{
		// Debug.LogWarning(
		//     "Location service is not running. VPS availability check is not available.");
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_LogWarning_m33EF1B897E0C7C6FF538989610BFAFFEF4628CA9(_stringLiteral1B34A45352A1F9AB3E6BCFB17173317AFF631C89, NULL);
		// yield break;
		return (bool)0;
	}

IL_0140:
	{
		// if (isReturning)
		GeospatialController_t69A2BBD44F5A190BB256B888033F5297AF0A0D2F* L_14 = V_1;
		NullCheck(L_14);
		bool L_15 = L_14->___isReturning_20;
		if (!L_15)
		{
			goto IL_014a;
		}
	}
	{
		// yield break;
		return (bool)0;
	}

IL_014a:
	{
		// var location = Input.location.lastData;
		LocationService_tF2F2720FE2C07562EBFD128889F9A99F4B41B1B2* L_16;
		L_16 = Input_get_location_m1D1FA0938E5B83C46A666CE78D95A58B39164DB5(NULL);
		NullCheck(L_16);
		LocationInfo_tBFD49220A54B71CDF564F61822F7B8D524465441 L_17;
		L_17 = LocationService_get_lastData_m50C68F3DFB23894CF519F00BBA9D72146EE9345F(L_16, NULL);
		__this->___U3ClocationU3E5__2_3 = L_17;
		// var vpsAvailabilityPromise =
		//     AREarthManager.CheckVpsAvailability(location.latitude, location.longitude);
		LocationInfo_tBFD49220A54B71CDF564F61822F7B8D524465441* L_18 = (&__this->___U3ClocationU3E5__2_3);
		float L_19;
		L_19 = LocationInfo_get_latitude_mAF0A46443555AF18EA3C516292CB92B1669CA863(L_18, NULL);
		LocationInfo_tBFD49220A54B71CDF564F61822F7B8D524465441* L_20 = (&__this->___U3ClocationU3E5__2_3);
		float L_21;
		L_21 = LocationInfo_get_longitude_mCB720DD0E139B7C614F78D40595E1BBF1F5433A2(L_20, NULL);
		VpsAvailabilityPromise_tD7DB90CD6085F0BF774A6E6D2B92DE41780A47C1* L_22;
		L_22 = AREarthManager_CheckVpsAvailability_m05CD87D382FD14B2014B2A87FC0687B765EBC543(((double)L_19), ((double)L_21), NULL);
		__this->___U3CvpsAvailabilityPromiseU3E5__3_4 = L_22;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CvpsAvailabilityPromiseU3E5__3_4), (void*)L_22);
		// yield return vpsAvailabilityPromise;
		VpsAvailabilityPromise_tD7DB90CD6085F0BF774A6E6D2B92DE41780A47C1* L_23 = __this->___U3CvpsAvailabilityPromiseU3E5__3_4;
		__this->___U3CU3E2__current_1 = L_23;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3E2__current_1), (void*)L_23);
		__this->___U3CU3E1__state_0 = 7;
		return (bool)1;
	}

IL_0192:
	{
		__this->___U3CU3E1__state_0 = (-1);
		// Debug.LogFormat("VPS Availability at ({0}, {1}): {2}", location.latitude, location.longitude, vpsAvailabilityPromise.Result);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_24 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var, (uint32_t)3);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_25 = L_24;
		LocationInfo_tBFD49220A54B71CDF564F61822F7B8D524465441* L_26 = (&__this->___U3ClocationU3E5__2_3);
		float L_27;
		L_27 = LocationInfo_get_latitude_mAF0A46443555AF18EA3C516292CB92B1669CA863(L_26, NULL);
		float L_28 = L_27;
		RuntimeObject* L_29 = Box(Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_il2cpp_TypeInfo_var, &L_28);
		NullCheck(L_25);
		ArrayElementTypeCheck (L_25, L_29);
		(L_25)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject*)L_29);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_30 = L_25;
		LocationInfo_tBFD49220A54B71CDF564F61822F7B8D524465441* L_31 = (&__this->___U3ClocationU3E5__2_3);
		float L_32;
		L_32 = LocationInfo_get_longitude_mCB720DD0E139B7C614F78D40595E1BBF1F5433A2(L_31, NULL);
		float L_33 = L_32;
		RuntimeObject* L_34 = Box(Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_il2cpp_TypeInfo_var, &L_33);
		NullCheck(L_30);
		ArrayElementTypeCheck (L_30, L_34);
		(L_30)->SetAt(static_cast<il2cpp_array_size_t>(1), (RuntimeObject*)L_34);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_35 = L_30;
		VpsAvailabilityPromise_tD7DB90CD6085F0BF774A6E6D2B92DE41780A47C1* L_36 = __this->___U3CvpsAvailabilityPromiseU3E5__3_4;
		NullCheck(L_36);
		int32_t L_37;
		L_37 = VirtualFuncInvoker0< int32_t >::Invoke(10 /* T Google.XR.ARCoreExtensions.Internal.InterruptiblePromise`1<Google.XR.ARCoreExtensions.VpsAvailability>::get_Result() */, L_36);
		int32_t L_38 = L_37;
		RuntimeObject* L_39 = Box(VpsAvailability_t45DB38FE9BF4135673CE5455506068164625A197_il2cpp_TypeInfo_var, &L_38);
		NullCheck(L_35);
		ArrayElementTypeCheck (L_35, L_39);
		(L_35)->SetAt(static_cast<il2cpp_array_size_t>(2), (RuntimeObject*)L_39);
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_LogFormat_mD555556327B42AA3482D077EFAEB16B0AFDF72C7(_stringLiteralED772B549705A1BF599485764F40D84130414B4B, L_35, NULL);
		// }
		return (bool)0;
	}
}
// System.Object Google.XR.ARCoreExtensions.Samples.Geospatial.GeospatialController/<AvailabilityCheck>d__31::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CAvailabilityCheckU3Ed__31_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_mC74FC8BD2327161B53EC073CAEBE81227CEBDEC0 (U3CAvailabilityCheckU3Ed__31_t6354B82010109F309788B4A0FF01E47D13B06594* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CU3E2__current_1;
		return L_0;
	}
}
// System.Void Google.XR.ARCoreExtensions.Samples.Geospatial.GeospatialController/<AvailabilityCheck>d__31::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CAvailabilityCheckU3Ed__31_System_Collections_IEnumerator_Reset_mCD98CB9C05484A1D424CF2894208E58CEAF1C592 (U3CAvailabilityCheckU3Ed__31_t6354B82010109F309788B4A0FF01E47D13B06594* __this, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NullCheck(L_0);
		NotSupportedException__ctor_m1398D0CDE19B36AA3DE9392879738C1EA2439CDF(L_0, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CAvailabilityCheckU3Ed__31_System_Collections_IEnumerator_Reset_mCD98CB9C05484A1D424CF2894208E58CEAF1C592_RuntimeMethod_var)));
	}
}
// System.Object Google.XR.ARCoreExtensions.Samples.Geospatial.GeospatialController/<AvailabilityCheck>d__31::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CAvailabilityCheckU3Ed__31_System_Collections_IEnumerator_get_Current_m1592A87DF5161E579867087C8D08703BE4D2B3A1 (U3CAvailabilityCheckU3Ed__31_t6354B82010109F309788B4A0FF01E47D13B06594* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CU3E2__current_1;
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
// System.Void Google.XR.ARCoreExtensions.Samples.Geospatial.GeospatialController/<StartLocationService>d__32::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CStartLocationServiceU3Ed__32__ctor_mEFB95F2ED6B200E13A61D078F995D4BF3AF4CF01 (U3CStartLocationServiceU3Ed__32_tD9DDF9E93BC369B8B82B00FE287C67EEC056246A* __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		int32_t L_0 = ___U3CU3E1__state0;
		__this->___U3CU3E1__state_0 = L_0;
		return;
	}
}
// System.Void Google.XR.ARCoreExtensions.Samples.Geospatial.GeospatialController/<StartLocationService>d__32::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CStartLocationServiceU3Ed__32_System_IDisposable_Dispose_m512ADEE37C3997BC5A29A0BA98C9B03CF6F7F213 (U3CStartLocationServiceU3Ed__32_tD9DDF9E93BC369B8B82B00FE287C67EEC056246A* __this, const RuntimeMethod* method) 
{
	{
		return;
	}
}
// System.Boolean Google.XR.ARCoreExtensions.Samples.Geospatial.GeospatialController/<StartLocationService>d__32::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CStartLocationServiceU3Ed__32_MoveNext_mEFB2B60FC88CC21B1034B637FBB08EF71D1B4B34 (U3CStartLocationServiceU3Ed__32_tD9DDF9E93BC369B8B82B00FE287C67EEC056246A* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&LocationServiceStatus_tF9F78681F963A53FD6CA4CDC2DDDBD7B4DF517F7_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0474A5BF38319C39A3134C634655B6F727E91283);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2A4AF2371E5D32D286057BF0185547BF96F20333);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral5394AC7834212EAB0387622F17D130549EFAE8D7);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral8BB11615583CE93378185D25063928D9588FA6AA);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralEE2F1BFE1BE99B9017E10F89B16590A5D791925A);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	GeospatialController_t69A2BBD44F5A190BB256B888033F5297AF0A0D2F* V_1 = NULL;
	{
		int32_t L_0 = __this->___U3CU3E1__state_0;
		V_0 = L_0;
		GeospatialController_t69A2BBD44F5A190BB256B888033F5297AF0A0D2F* L_1 = __this->___U3CU3E4__this_2;
		V_1 = L_1;
		int32_t L_2 = V_0;
		switch (L_2)
		{
			case 0:
			{
				goto IL_0022;
			}
			case 1:
			{
				goto IL_0069;
			}
			case 2:
			{
				goto IL_00b5;
			}
		}
	}
	{
		return (bool)0;
	}

IL_0022:
	{
		__this->___U3CU3E1__state_0 = (-1);
		// waitingForLocationService = true;
		GeospatialController_t69A2BBD44F5A190BB256B888033F5297AF0A0D2F* L_3 = V_1;
		NullCheck(L_3);
		L_3->___waitingForLocationService_18 = (bool)1;
		// if (!Permission.HasUserAuthorizedPermission(Permission.FineLocation))
		bool L_4;
		L_4 = Permission_HasUserAuthorizedPermission_mF4C90E13124E28F6F672200E489CC25A9B645B8B(_stringLiteral2A4AF2371E5D32D286057BF0185547BF96F20333, NULL);
		if (L_4)
		{
			goto IL_0070;
		}
	}
	{
		// Debug.Log("?????????????");
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB(_stringLiteral5394AC7834212EAB0387622F17D130549EFAE8D7, NULL);
		// Permission.RequestUserPermission(Permission.FineLocation);
		Permission_RequestUserPermission_mF9CF3A21AAF34B311137C4D00B3AD6A6C2694242(_stringLiteral2A4AF2371E5D32D286057BF0185547BF96F20333, NULL);
		// yield return new WaitForSeconds(3.0f);
		WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3* L_5 = (WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3*)il2cpp_codegen_object_new(WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3_il2cpp_TypeInfo_var);
		NullCheck(L_5);
		WaitForSeconds__ctor_m579F95BADEDBAB4B3A7E302C6EE3995926EF2EFC(L_5, (3.0f), NULL);
		__this->___U3CU3E2__current_1 = L_5;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3E2__current_1), (void*)L_5);
		__this->___U3CU3E1__state_0 = 1;
		return (bool)1;
	}

IL_0069:
	{
		__this->___U3CU3E1__state_0 = (-1);
	}

IL_0070:
	{
		// if (!Input.location.isEnabledByUser)
		LocationService_tF2F2720FE2C07562EBFD128889F9A99F4B41B1B2* L_6;
		L_6 = Input_get_location_m1D1FA0938E5B83C46A666CE78D95A58B39164DB5(NULL);
		NullCheck(L_6);
		bool L_7;
		L_7 = LocationService_get_isEnabledByUser_m78FE3A38B1101BAF658E259C1A6B4CD9A008DCAE(L_6, NULL);
		if (L_7)
		{
			goto IL_008f;
		}
	}
	{
		// Debug.Log("??????????????????????????");
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB(_stringLiteral8BB11615583CE93378185D25063928D9588FA6AA, NULL);
		// waitingForLocationService = false;
		GeospatialController_t69A2BBD44F5A190BB256B888033F5297AF0A0D2F* L_8 = V_1;
		NullCheck(L_8);
		L_8->___waitingForLocationService_18 = (bool)0;
		// yield break;
		return (bool)0;
	}

IL_008f:
	{
		// Debug.Log("??????????????????");
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB(_stringLiteral0474A5BF38319C39A3134C634655B6F727E91283, NULL);
		// Input.location.Start();
		LocationService_tF2F2720FE2C07562EBFD128889F9A99F4B41B1B2* L_9;
		L_9 = Input_get_location_m1D1FA0938E5B83C46A666CE78D95A58B39164DB5(NULL);
		NullCheck(L_9);
		LocationService_Start_mC2A90619923D4BEB5F9B5CCD95F317B98D67AF3A(L_9, NULL);
		goto IL_00bc;
	}

IL_00a5:
	{
		// yield return null;
		__this->___U3CU3E2__current_1 = NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3E2__current_1), (void*)NULL);
		__this->___U3CU3E1__state_0 = 2;
		return (bool)1;
	}

IL_00b5:
	{
		__this->___U3CU3E1__state_0 = (-1);
	}

IL_00bc:
	{
		// while (Input.location.status == LocationServiceStatus.Initializing)
		LocationService_tF2F2720FE2C07562EBFD128889F9A99F4B41B1B2* L_10;
		L_10 = Input_get_location_m1D1FA0938E5B83C46A666CE78D95A58B39164DB5(NULL);
		NullCheck(L_10);
		int32_t L_11;
		L_11 = LocationService_get_status_m25B7C4012B9529265D9746BB73ED689737E9C9CD(L_10, NULL);
		if ((((int32_t)L_11) == ((int32_t)1)))
		{
			goto IL_00a5;
		}
	}
	{
		// waitingForLocationService = false; //?????????????????false?
		GeospatialController_t69A2BBD44F5A190BB256B888033F5297AF0A0D2F* L_12 = V_1;
		NullCheck(L_12);
		L_12->___waitingForLocationService_18 = (bool)0;
		// if (Input.location.status != LocationServiceStatus.Running)
		LocationService_tF2F2720FE2C07562EBFD128889F9A99F4B41B1B2* L_13;
		L_13 = Input_get_location_m1D1FA0938E5B83C46A666CE78D95A58B39164DB5(NULL);
		NullCheck(L_13);
		int32_t L_14;
		L_14 = LocationService_get_status_m25B7C4012B9529265D9746BB73ED689737E9C9CD(L_13, NULL);
		if ((((int32_t)L_14) == ((int32_t)2)))
		{
			goto IL_0109;
		}
	}
	{
		// Debug.LogWarningFormat(
		//     "Location service ends with {0} status.", Input.location.status);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_15 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var, (uint32_t)1);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_16 = L_15;
		LocationService_tF2F2720FE2C07562EBFD128889F9A99F4B41B1B2* L_17;
		L_17 = Input_get_location_m1D1FA0938E5B83C46A666CE78D95A58B39164DB5(NULL);
		NullCheck(L_17);
		int32_t L_18;
		L_18 = LocationService_get_status_m25B7C4012B9529265D9746BB73ED689737E9C9CD(L_17, NULL);
		int32_t L_19 = L_18;
		RuntimeObject* L_20 = Box(LocationServiceStatus_tF9F78681F963A53FD6CA4CDC2DDDBD7B4DF517F7_il2cpp_TypeInfo_var, &L_19);
		NullCheck(L_16);
		ArrayElementTypeCheck (L_16, L_20);
		(L_16)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject*)L_20);
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_LogWarningFormat_mD8224DEBCB6050F4E2BF55151F0C6A29B87DEFBC(_stringLiteralEE2F1BFE1BE99B9017E10F89B16590A5D791925A, L_16, NULL);
		// Input.location.Stop();
		LocationService_tF2F2720FE2C07562EBFD128889F9A99F4B41B1B2* L_21;
		L_21 = Input_get_location_m1D1FA0938E5B83C46A666CE78D95A58B39164DB5(NULL);
		NullCheck(L_21);
		LocationService_Stop_mB9332CB653E7A7CE6AE07240EA6C0B6C9AEC0D96(L_21, NULL);
	}

IL_0109:
	{
		// }
		return (bool)0;
	}
}
// System.Object Google.XR.ARCoreExtensions.Samples.Geospatial.GeospatialController/<StartLocationService>d__32::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CStartLocationServiceU3Ed__32_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_mEADB1C17264CA36156372C451F9268E35286C1A4 (U3CStartLocationServiceU3Ed__32_tD9DDF9E93BC369B8B82B00FE287C67EEC056246A* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CU3E2__current_1;
		return L_0;
	}
}
// System.Void Google.XR.ARCoreExtensions.Samples.Geospatial.GeospatialController/<StartLocationService>d__32::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CStartLocationServiceU3Ed__32_System_Collections_IEnumerator_Reset_m92BBF2228350B346751F5646C2CAE1EBE8A093DA (U3CStartLocationServiceU3Ed__32_tD9DDF9E93BC369B8B82B00FE287C67EEC056246A* __this, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NullCheck(L_0);
		NotSupportedException__ctor_m1398D0CDE19B36AA3DE9392879738C1EA2439CDF(L_0, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CStartLocationServiceU3Ed__32_System_Collections_IEnumerator_Reset_m92BBF2228350B346751F5646C2CAE1EBE8A093DA_RuntimeMethod_var)));
	}
}
// System.Object Google.XR.ARCoreExtensions.Samples.Geospatial.GeospatialController/<StartLocationService>d__32::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CStartLocationServiceU3Ed__32_System_Collections_IEnumerator_get_Current_mCC05B9340B6C99C0E5390A541CB55BF42A32D6CC (U3CStartLocationServiceU3Ed__32_tD9DDF9E93BC369B8B82B00FE287C67EEC056246A* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CU3E2__current_1;
		return L_0;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* ARPlaneMeshVisualizer_get_mesh_m6C1A730CECE8AE0A0549ED615AB3B3D66E4A0FD8_inline (ARPlaneMeshVisualizer_t21838C8E2676AC524939E67CB965925E924E018F* __this, const RuntimeMethod* method) 
{
	{
		// public Mesh mesh { get; private set; }
		Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* L_0 = __this->___U3CmeshU3Ek__BackingField_4;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* __this, float ___x0, float ___y1, float ___z2, const RuntimeMethod* method) 
{
	{
		float L_0 = ___x0;
		__this->___x_2 = L_0;
		float L_1 = ___y1;
		__this->___y_3 = L_1;
		float L_2 = ___z2;
		__this->___z_4 = L_2;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Vector3_Distance_m2314DB9B8BD01157E013DF87BEA557375C7F9FF9_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___a0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___b1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	float V_1 = 0.0f;
	float V_2 = 0.0f;
	float V_3 = 0.0f;
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___a0;
		float L_1 = L_0.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2 = ___b1;
		float L_3 = L_2.___x_2;
		V_0 = ((float)il2cpp_codegen_subtract(L_1, L_3));
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4 = ___a0;
		float L_5 = L_4.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6 = ___b1;
		float L_7 = L_6.___y_3;
		V_1 = ((float)il2cpp_codegen_subtract(L_5, L_7));
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8 = ___a0;
		float L_9 = L_8.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10 = ___b1;
		float L_11 = L_10.___z_4;
		V_2 = ((float)il2cpp_codegen_subtract(L_9, L_11));
		float L_12 = V_0;
		float L_13 = V_0;
		float L_14 = V_1;
		float L_15 = V_1;
		float L_16 = V_2;
		float L_17 = V_2;
		il2cpp_codegen_runtime_class_init_inline(Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		double L_18;
		L_18 = sqrt(((double)((float)il2cpp_codegen_add(((float)il2cpp_codegen_add(((float)il2cpp_codegen_multiply(L_12, L_13)), ((float)il2cpp_codegen_multiply(L_14, L_15)))), ((float)il2cpp_codegen_multiply(L_16, L_17))))));
		V_3 = ((float)L_18);
		goto IL_0040;
	}

IL_0040:
	{
		float L_19 = V_3;
		return L_19;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float ARFeatheredPlaneMeshVisualizer_get_featheringWidth_m14D3A8BE3E9A745E6FD525B19ADDC892B8399B4D_inline (ARFeatheredPlaneMeshVisualizer_t5B508CD2D37F908F4359D7DED031B3C357E34955* __this, const RuntimeMethod* method) 
{
	{
		// get { return m_FeatheringWidth; }
		float L_0 = __this->___m_FeatheringWidth_4;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Mathf_Max_mF5379E63D2BBAC76D090748695D833934F8AD051_inline (float ___a0, float ___b1, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	float G_B3_0 = 0.0f;
	{
		float L_0 = ___a0;
		float L_1 = ___b1;
		if ((((float)L_0) > ((float)L_1)))
		{
			goto IL_0008;
		}
	}
	{
		float L_2 = ___b1;
		G_B3_0 = L_2;
		goto IL_0009;
	}

IL_0008:
	{
		float L_3 = ___a0;
		G_B3_0 = L_3;
	}

IL_0009:
	{
		V_0 = G_B3_0;
		goto IL_000c;
	}

IL_000c:
	{
		float L_4 = V_0;
		return L_4;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector3_Set_m1C7E543216734FB513F9CEBA44C50E6FC2AFD49D_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* __this, float ___newX0, float ___newY1, float ___newZ2, const RuntimeMethod* method) 
{
	{
		float L_0 = ___newX0;
		__this->___x_2 = L_0;
		float L_1 = ___newY1;
		__this->___y_3 = L_1;
		float L_2 = ___newZ2;
		__this->___z_4 = L_2;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t ARSession_get_state_m6A22EE6441E58AC66E1FE9A7359D06C90C1A2842_inline (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ARSession_t13374A44A01F2C6D90578F93E0F0DA2482BE3014_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// get => s_State;
		int32_t L_0 = ((ARSession_t13374A44A01F2C6D90578F93E0F0DA2482BE3014_StaticFields*)il2cpp_codegen_static_fields_for(ARSession_t13374A44A01F2C6D90578F93E0F0DA2482BE3014_il2cpp_TypeInfo_var))->___s_State_14;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_get_up_m128AF3FDC820BF59D5DE86D973E7DE3F20C3AEBA_inline (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ((Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_StaticFields*)il2cpp_codegen_static_fields_for(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var))->___upVector_7;
		V_0 = L_0;
		goto IL_0009;
	}

IL_0009:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1 = V_0;
		return L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ButtonClickedEvent_t8EA72E90B3BD1392FB3B3EF167D5121C23569E4C* Button_get_onClick_m701712A7F7F000CC80D517C4510697E15722C35C_inline (Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* __this, const RuntimeMethod* method) 
{
	{
		// get { return m_OnClick; }
		ButtonClickedEvent_t8EA72E90B3BD1392FB3B3EF167D5121C23569E4C* L_0 = __this->___m_OnClick_20;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void RhythmObject_IsActive_m0C72212BC60BE50237C7264C1AC84F169FFEF2E3_inline (RhythmObject_t48B5812FD53B54DB2453283D026C825E88D880A3* __this, bool ___enable0, const RuntimeMethod* method) 
{
	{
		// isEnable = enable;
		bool L_0 = ___enable0;
		__this->___isEnable_8 = L_0;
		// }
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 Quaternion_get_identity_m7E701AE095ED10FD5EA0B50ABCFDE2EEFF2173A5_inline (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_0 = ((Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974_StaticFields*)il2cpp_codegen_static_fields_for(Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974_il2cpp_TypeInfo_var))->___identityQuaternion_4;
		V_0 = L_0;
		goto IL_0009;
	}

IL_0009:
	{
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_1 = V_0;
		return L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_get_forward_mAA55A7034304DF8B2152EAD49AE779FC4CA2EB4A_inline (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ((Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_StaticFields*)il2cpp_codegen_static_fields_for(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var))->___forwardVector_11;
		V_0 = L_0;
		goto IL_0009;
	}

IL_0009:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1 = V_0;
		return L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR SROptions_t00DA5107C80F05EB2730577E1FCA535FAD5F4A6F* SROptions_get_Current_m297117B6D80C587A2A12BC79EFD5ADE46D591C4B_inline (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SROptions_t00DA5107C80F05EB2730577E1FCA535FAD5F4A6F_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// get { return _current; }
		SROptions_t00DA5107C80F05EB2730577E1FCA535FAD5F4A6F* L_0 = ((SROptions_t00DA5107C80F05EB2730577E1FCA535FAD5F4A6F_StaticFields*)il2cpp_codegen_static_fields_for(SROptions_t00DA5107C80F05EB2730577E1FCA535FAD5F4A6F_il2cpp_TypeInfo_var))->____current_0;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void SROptionsPropertyChanged_Invoke_mBED662C3470F04FCEA839FE5D39A86BF62C22CFF_inline (SROptionsPropertyChanged_t53B79AE547753261AFBD1916519E6A1074669CA7* __this, RuntimeObject* ___sender0, String_t* ___propertyName1, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, RuntimeObject*, String_t*, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___sender0, ___propertyName1, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void PropertyChangedEventHandler_Invoke_m040B3056C279FDDC4EC678519D5D415771905298_inline (PropertyChangedEventHandler_tF1250C146BE6FB43477D29C5D18A10B6329419DA* __this, RuntimeObject* ___sender0, PropertyChangedEventArgs_tFA01343D8F2BD799951B40A3EBF4A6B38EE63321* ___e1, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, RuntimeObject*, PropertyChangedEventArgs_tFA01343D8F2BD799951B40A3EBF4A6B38EE63321*, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___sender0, ___e1, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* __this, float ___x0, float ___y1, const RuntimeMethod* method) 
{
	{
		float L_0 = ___x0;
		__this->___x_0 = L_0;
		float L_1 = ___y1;
		__this->___y_1 = L_1;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector2_op_Implicit_m6D9CABB2C791A192867D7A4559D132BE86DD3EB7_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___v0, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_0 = ___v0;
		float L_1 = L_0.___x_0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_2 = ___v0;
		float L_3 = L_2.___y_1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4;
		memset((&L_4), 0, sizeof(L_4));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_4), L_1, L_3, (0.0f), /*hidden argument*/NULL);
		V_0 = L_4;
		goto IL_001a;
	}

IL_001a:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_5 = V_0;
		return L_5;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* Enumerator_get_Current_m6330F15D18EE4F547C05DF9BF83C5EB710376027_gshared_inline (Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = (RuntimeObject*)__this->____current_3;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Clear_m16C1F2C61FED5955F10EB36BC1CB2DF34B128994_gshared_inline (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = (int32_t)__this->____version_3;
		__this->____version_3 = ((int32_t)il2cpp_codegen_add(L_0, 1));
		if (!true)
		{
			goto IL_0035;
		}
	}
	{
		int32_t L_1 = (int32_t)__this->____size_2;
		V_0 = L_1;
		__this->____size_2 = 0;
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) <= ((int32_t)0)))
		{
			goto IL_003c;
		}
	}
	{
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_3 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)__this->____items_1;
		int32_t L_4 = V_0;
		Array_Clear_m50BAA3751899858B097D3FF2ED31F284703FE5CB((RuntimeArray*)L_3, 0, L_4, NULL);
		return;
	}

IL_0035:
	{
		__this->____size_2 = 0;
	}

IL_003c:
	{
		return;
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
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Clear_m455780C5A45049F9BDC25EAD3BA10A681D16385D_gshared_inline (List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = (int32_t)__this->____version_3;
		__this->____version_3 = ((int32_t)il2cpp_codegen_add(L_0, 1));
		if (!false)
		{
			goto IL_0035;
		}
	}
	{
		int32_t L_1 = (int32_t)__this->____size_2;
		V_0 = L_1;
		__this->____size_2 = 0;
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) <= ((int32_t)0)))
		{
			goto IL_003c;
		}
	}
	{
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_3 = (Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C*)__this->____items_1;
		int32_t L_4 = V_0;
		Array_Clear_m50BAA3751899858B097D3FF2ED31F284703FE5CB((RuntimeArray*)L_3, 0, L_4, NULL);
		return;
	}

IL_0035:
	{
		__this->____size_2 = 0;
	}

IL_003c:
	{
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t List_1_get_Count_m46EEFFA770BE665EA0CB3A5332E941DA4B3C1D37_gshared_inline (List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = (int32_t)__this->____size_2;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Add_m79E50C4F592B1703F4B76A8BE7B4855515460CA1_gshared_inline (List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___item0, const RuntimeMethod* method) 
{
	Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* V_0 = NULL;
	int32_t V_1 = 0;
	{
		int32_t L_0 = (int32_t)__this->____version_3;
		__this->____version_3 = ((int32_t)il2cpp_codegen_add(L_0, 1));
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_1 = (Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C*)__this->____items_1;
		V_0 = L_1;
		int32_t L_2 = (int32_t)__this->____size_2;
		V_1 = L_2;
		int32_t L_3 = V_1;
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_4 = V_0;
		NullCheck(L_4);
		if ((!(((uint32_t)L_3) < ((uint32_t)((int32_t)(((RuntimeArray*)L_4)->max_length))))))
		{
			goto IL_0034;
		}
	}
	{
		int32_t L_5 = V_1;
		__this->____size_2 = ((int32_t)il2cpp_codegen_add(L_5, 1));
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_6 = V_0;
		int32_t L_7 = V_1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8 = ___item0;
		NullCheck(L_6);
		(L_6)->SetAt(static_cast<il2cpp_array_size_t>(L_7), (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2)L_8);
		return;
	}

IL_0034:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_9 = ___item0;
		((  void (*) (List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B*, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 11)))(__this, L_9, il2cpp_rgctx_method(method->klass->rgctx_data, 11));
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR KeyValuePair_2_tDC26B09C26BA829DDE331BCB6AF7C508C763D7A3 Enumerator_get_Current_m90160D324DA0D9F5624A345F47D8E226A118911A_gshared_inline (Enumerator_tE92C1AC40A104A179B94F8A013728FD9314CFBD3* __this, const RuntimeMethod* method) 
{
	{
		KeyValuePair_2_tDC26B09C26BA829DDE331BCB6AF7C508C763D7A3 L_0 = (KeyValuePair_2_tDC26B09C26BA829DDE331BCB6AF7C508C763D7A3)__this->____current_3;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* KeyValuePair_2_get_Value_m8508BCECB0654E2E93B1A141382E2688ADE7EE7C_gshared_inline (KeyValuePair_2_tDC26B09C26BA829DDE331BCB6AF7C508C763D7A3* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = (RuntimeObject*)__this->___value_1;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t KeyValuePair_2_get_Key_mF0E6A8A455FA71BC8EA94E39C8848FB35A836841_gshared_inline (KeyValuePair_2_tDC26B09C26BA829DDE331BCB6AF7C508C763D7A3* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = (int32_t)__this->___key_0;
		return L_0;
	}
}
