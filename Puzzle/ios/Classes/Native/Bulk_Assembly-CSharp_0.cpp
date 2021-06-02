#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <cstring>
#include <string.h>
#include <stdio.h>
#include <cmath>
#include <limits>
#include <assert.h>
#include <stdint.h>

#include "il2cpp-class-internals.h"
#include "codegen/il2cpp-codegen.h"
#include "il2cpp-object-internals.h"

template <typename R>
struct VirtFuncInvoker0
{
	typedef R (*Func)(void*, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, invokeData.method);
	}
};
template <typename T1>
struct VirtActionInvoker1
{
	typedef void (*Action)(void*, T1, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
struct VirtActionInvoker0
{
	typedef void (*Action)(void*, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, invokeData.method);
	}
};
template <typename T1, typename T2, typename T3, typename T4, typename T5>
struct VirtActionInvoker5
{
	typedef void (*Action)(void*, T1, T2, T3, T4, T5, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1, T2 p2, T3 p3, T4 p4, T5 p5)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, p1, p2, p3, p4, p5, invokeData.method);
	}
};
template <typename T1, typename T2, typename T3, typename T4>
struct VirtActionInvoker4
{
	typedef void (*Action)(void*, T1, T2, T3, T4, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1, T2 p2, T3 p3, T4 p4)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, p1, p2, p3, p4, invokeData.method);
	}
};
template <typename T1, typename T2, typename T3, typename T4, typename T5>
struct GenericVirtActionInvoker5
{
	typedef void (*Action)(void*, T1, T2, T3, T4, T5, const RuntimeMethod*);

	static inline void Invoke (const RuntimeMethod* method, RuntimeObject* obj, T1 p1, T2 p2, T3 p3, T4 p4, T5 p5)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_virtual_invoke_data(method, obj, &invokeData);
		((Action)invokeData.methodPtr)(obj, p1, p2, p3, p4, p5, invokeData.method);
	}
};
template <typename T1, typename T2, typename T3, typename T4>
struct GenericVirtActionInvoker4
{
	typedef void (*Action)(void*, T1, T2, T3, T4, const RuntimeMethod*);

	static inline void Invoke (const RuntimeMethod* method, RuntimeObject* obj, T1 p1, T2 p2, T3 p3, T4 p4)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_virtual_invoke_data(method, obj, &invokeData);
		((Action)invokeData.methodPtr)(obj, p1, p2, p3, p4, invokeData.method);
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
struct InterfaceActionInvoker0
{
	typedef void (*Action)(void*, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		((Action)invokeData.methodPtr)(obj, invokeData.method);
	}
};
template <typename T1, typename T2, typename T3, typename T4, typename T5>
struct InterfaceActionInvoker5
{
	typedef void (*Action)(void*, T1, T2, T3, T4, T5, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1, T2 p2, T3 p3, T4 p4, T5 p5)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		((Action)invokeData.methodPtr)(obj, p1, p2, p3, p4, p5, invokeData.method);
	}
};
template <typename T1, typename T2, typename T3, typename T4>
struct InterfaceActionInvoker4
{
	typedef void (*Action)(void*, T1, T2, T3, T4, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1, T2 p2, T3 p3, T4 p4)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		((Action)invokeData.methodPtr)(obj, p1, p2, p3, p4, invokeData.method);
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
template <typename T1, typename T2, typename T3, typename T4, typename T5>
struct GenericInterfaceActionInvoker5
{
	typedef void (*Action)(void*, T1, T2, T3, T4, T5, const RuntimeMethod*);

	static inline void Invoke (const RuntimeMethod* method, RuntimeObject* obj, T1 p1, T2 p2, T3 p3, T4 p4, T5 p5)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_interface_invoke_data(method, obj, &invokeData);
		((Action)invokeData.methodPtr)(obj, p1, p2, p3, p4, p5, invokeData.method);
	}
};
template <typename T1, typename T2, typename T3, typename T4>
struct GenericInterfaceActionInvoker4
{
	typedef void (*Action)(void*, T1, T2, T3, T4, const RuntimeMethod*);

	static inline void Invoke (const RuntimeMethod* method, RuntimeObject* obj, T1 p1, T2 p2, T3 p3, T4 p4)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_interface_invoke_data(method, obj, &invokeData);
		((Action)invokeData.methodPtr)(obj, p1, p2, p3, p4, invokeData.method);
	}
};

// BlockGameScript
struct BlockGameScript_t725110519;
// UnityEngine.MonoBehaviour
struct MonoBehaviour_t3962482529;
// UnityEngine.GameObject
struct GameObject_t1113636619;
// System.String
struct String_t;
// PlayBoardGameSceneManager
struct PlayBoardGameSceneManager_t1063580347;
// GameManager
struct GameManager_t1536523654;
// System.Object[]
struct ObjectU5BU5D_t2843939325;
// UnityEngine.Component
struct Component_t1923634451;
// UnityEngine.Transform
struct Transform_t3600365921;
// System.Collections.IEnumerator
struct IEnumerator_t1853284238;
// UnityEngine.Sprite[]
struct SpriteU5BU5D_t2581906349;
// UnityEngine.Sprite
struct Sprite_t280657092;
// UnityEngine.UI.Image
struct Image_t2670269651;
// System.String[]
struct StringU5BU5D_t1281789340;
// System.Char[]
struct CharU5BU5D_t3528271667;
// System.Converter`2<System.String,System.Int32>
struct Converter_2_t751170091;
// System.Converter`2<System.Object,System.Int32>
struct Converter_2_t2313320076;
// System.Int32[]
struct Int32U5BU5D_t385246372;
// UnityEngine.Object
struct Object_t631007953;
// BlurManager
struct BlurManager_t3192295244;
// UnityEngine.Material
struct Material_t340375123;
// UnityEngine.UI.Text
struct Text_t1901882714;
// UnityEngine.UI.Button
struct Button_t4055032469;
// UnityEngine.Coroutine
struct Coroutine_t3829159415;
// BlurManager/<setBlur>c__Iterator0
struct U3CsetBlurU3Ec__Iterator0_t81185826;
// UnityEngine.Events.UnityAction
struct UnityAction_t3245792599;
// UnityEngine.UI.Button/ButtonClickedEvent
struct ButtonClickedEvent_t48803504;
// UnityEngine.Events.UnityEvent
struct UnityEvent_t2581268647;
// System.NotSupportedException
struct NotSupportedException_t1314879016;
// DontDestroyManager
struct DontDestroyManager_t1329034447;
// System.Type
struct Type_t;
// SocialTool
struct SocialTool_t1909827527;
// DragGalleryContentScript
struct DragGalleryContentScript_t2491726244;
// MainSceneManager
struct MainSceneManager_t2603182452;
// UnityEngine.UI.ScrollRect
struct ScrollRect_t4137855814;
// System.Collections.Generic.List`1<UnityEngine.Transform>
struct List_1_t777473367;
// System.Collections.Generic.List`1<System.Object>
struct List_1_t257213610;
// FixedScreen
struct FixedScreen_t1471317904;
// GooglePlayGames.BasicApi.CommonTypesUtil
struct CommonTypesUtil_t3521372089;
// GooglePlayGames.BasicApi.Nearby.EndpointDetails
struct EndpointDetails_t3891698496;
// System.Byte[]
struct ByteU5BU5D_t4116647657;
// System.Action`1<GooglePlayGames.BasicApi.Nearby.InitializationStatus>
struct Action_1_t2609895709;
// GooglePlayGames.BasicApi.SavedGame.ConflictCallback
struct ConflictCallback_t4045994657;
// GooglePlayGames.BasicApi.SavedGame.IConflictResolver
struct IConflictResolver_t3064354032;
// GooglePlayGames.BasicApi.SavedGame.ISavedGameMetadata
struct ISavedGameMetadata_t1932989778;
// System.IAsyncResult
struct IAsyncResult_t767004451;
// System.AsyncCallback
struct AsyncCallback_t3962456242;
// System.InvalidOperationException
struct InvalidOperationException_t56020091;
// GooglePlayGames.BasicApi.Video.VideoCapabilities
struct VideoCapabilities_t1298735124;
// System.Boolean[]
struct BooleanU5BU5D_t2897418192;
// System.Func`2<System.Boolean,System.String>
struct Func_2_t1267953766;
// System.Func`2<System.Boolean,System.Object>
struct Func_2_t2500609241;
// System.Collections.Generic.IEnumerable`1<System.String>
struct IEnumerable_1_t827303578;
// System.Collections.Generic.IEnumerable`1<System.Boolean>
struct IEnumerable_1_t3372108150;
// System.Collections.Generic.IEnumerable`1<System.Object>
struct IEnumerable_1_t2059959053;
// GooglePlayGames.BasicApi.Video.VideoCaptureState
struct VideoCaptureState_t2350658599;
// GooglePlayGames.OurUtils.Logger
struct Logger_t3934082555;
// GooglePlayGames.OurUtils.Logger/<d>c__AnonStorey0
struct U3CdU3Ec__AnonStorey0_t2350509859;
// System.Action
struct Action_t1264377477;
// GooglePlayGames.OurUtils.Logger/<w>c__AnonStorey1
struct U3CwU3Ec__AnonStorey1_t2080961746;
// GooglePlayGames.OurUtils.Logger/<e>c__AnonStorey2
struct U3CeU3Ec__AnonStorey2_t2346119983;
// System.ArgumentNullException
struct ArgumentNullException_t1615371798;
// System.ArgumentOutOfRangeException
struct ArgumentOutOfRangeException_t777629997;
// GooglePlayGames.OurUtils.PlayGamesHelperObject
struct PlayGamesHelperObject_t4023745847;
// System.Collections.Generic.List`1<System.Action>
struct List_1_t2736452219;
// GooglePlayGames.OurUtils.PlayGamesHelperObject/<RunCoroutine>c__AnonStorey0
struct U3CRunCoroutineU3Ec__AnonStorey0_t3592917427;
// System.Collections.Generic.IEnumerable`1<System.Action>
struct IEnumerable_1_t244230366;
// System.Collections.Generic.List`1<System.Action`1<System.Boolean>>
struct List_1_t1741830302;
// System.Action`1<System.Boolean>
struct Action_1_t269755560;
// GooglePlayGames.PluginVersion
struct PluginVersion_t2872281160;
// Localize
struct Localize_t2088442295;
// LocalizeString[]
struct LocalizeStringU5BU5D_t1200507501;
// LocalizeString
struct LocalizeString_t491646212;
// System.Collections.Generic.List`1<LocalizeString>
struct List_1_t1963720954;
// System.Collections.Generic.IEnumerable`1<LocalizeString>
struct IEnumerable_1_t3766466397;
// LocalizeTool
struct LocalizeTool_t315363650;
// System.Xml.Serialization.XmlSerializer
struct XmlSerializer_t1117804635;
// UnityEngine.TextAsset
struct TextAsset_t3022178571;
// System.IO.StringReader
struct StringReader_t3465604688;
// System.IO.TextReader
struct TextReader_t283511965;
// System.Collections.Generic.List`1<UnityEngine.GameObject>
struct List_1_t2585711361;
// UnityEngine.EventSystems.EventSystem
struct EventSystem_t1003666588;
// UnityEngine.SocialPlatforms.ILocalUser
struct ILocalUser_t2242999785;
// SoulPopUpManager
struct SoulPopUpManager_t3321416543;
// UnityEngine.RectTransform
struct RectTransform_t3704657025;
// ToastActive
struct ToastActive_t2371010005;
// System.Xml.Serialization.XmlMapping
struct XmlMapping_t1653394;
// System.Xml.Serialization.XmlSerializer/SerializerData
struct SerializerData_t3337767682;
// System.Collections.Hashtable
struct Hashtable_t1853889766;
// System.Xml.Serialization.XmlAttributeEventHandler
struct XmlAttributeEventHandler_t3451815990;
// System.Xml.Serialization.XmlElementEventHandler
struct XmlElementEventHandler_t1089210577;
// System.Xml.Serialization.XmlNodeEventHandler
struct XmlNodeEventHandler_t508855017;
// System.Xml.Serialization.UnreferencedObjectEventHandler
struct UnreferencedObjectEventHandler_t1397626473;
// UnityEngine.Transform[]
struct TransformU5BU5D_t807237628;
// System.Action`1<System.Boolean>[]
struct Action_1U5BU5D_t2893917113;
// System.IntPtr[]
struct IntPtrU5BU5D_t4013366056;
// System.Collections.IDictionary
struct IDictionary_t1363984059;
// System.Action[]
struct ActionU5BU5D_t388269512;
// UnityEngine.Events.InvokableCallList
struct InvokableCallList_t2498835369;
// UnityEngine.Events.PersistentCallGroup
struct PersistentCallGroup_t3050769227;
// UnityEngine.GameObject[]
struct GameObjectU5BU5D_t3328599146;
// System.Void
struct Void_t1185182177;
// System.Byte
struct Byte_t1134296376;
// System.Double
struct Double_t594665363;
// System.UInt16
struct UInt16_t2177724958;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// System.DelegateData
struct DelegateData_t1677132599;
// UnityEngine.UI.Selectable
struct Selectable_t3250028441;
// System.Type[]
struct TypeU5BU5D_t3940880105;
// System.Reflection.MemberFilter
struct MemberFilter_t426314064;
// UnityEngine.RectTransform/ReapplyDrivenProperties
struct ReapplyDrivenProperties_t1258266594;
// UnityEngine.Vector3[]
struct Vector3U5BU5D_t1718750761;
// UnityEngine.Texture2D
struct Texture2D_t3840446185;
// UnityEngine.CanvasRenderer
struct CanvasRenderer_t2598313366;
// UnityEngine.Canvas
struct Canvas_t3310196443;
// UnityEngine.Mesh
struct Mesh_t3648964284;
// UnityEngine.UI.VertexHelper
struct VertexHelper_t2453304189;
// UnityEngine.UI.CoroutineTween.TweenRunner`1<UnityEngine.UI.CoroutineTween.ColorTween>
struct TweenRunner_1_t3055525458;
// UnityEngine.UI.Scrollbar
struct Scrollbar_t1494447233;
// UnityEngine.UI.ScrollRect/ScrollRectEvent
struct ScrollRectEvent_t343079324;
// System.Collections.Generic.List`1<UnityEngine.EventSystems.BaseInputModule>
struct List_1_t3491343620;
// UnityEngine.EventSystems.BaseInputModule
struct BaseInputModule_t2019268878;
// System.Collections.Generic.List`1<UnityEngine.EventSystems.EventSystem>
struct List_1_t2475741330;
// UnityEngine.EventSystems.BaseEventData
struct BaseEventData_t3903027533;
// System.Comparison`1<UnityEngine.EventSystems.RaycastResult>
struct Comparison_1_t3135238028;
// System.Collections.Generic.List`1<UnityEngine.UI.Selectable>
struct List_1_t427135887;
// UnityEngine.UI.AnimationTriggers
struct AnimationTriggers_t2532145056;
// UnityEngine.UI.Graphic
struct Graphic_t1660335611;
// System.Collections.Generic.List`1<UnityEngine.CanvasGroup>
struct List_1_t1260619206;
// UnityEngine.UI.RectMask2D
struct RectMask2D_t3474889437;
// UnityEngine.UI.MaskableGraphic/CullStateChangedEvent
struct CullStateChangedEvent_t3661388177;
// UnityEngine.Vector2[]
struct Vector2U5BU5D_t1457185986;
// UnityEngine.UI.FontData
struct FontData_t746620069;
// UnityEngine.TextGenerator
struct TextGenerator_t3211863866;
// UnityEngine.UIVertex[]
struct UIVertexU5BU5D_t1981460040;

extern RuntimeClass* GameManager_t1536523654_il2cpp_TypeInfo_var;
extern RuntimeClass* ObjectU5BU5D_t2843939325_il2cpp_TypeInfo_var;
extern RuntimeClass* Int32_t2950945753_il2cpp_TypeInfo_var;
extern RuntimeClass* String_t_il2cpp_TypeInfo_var;
extern const RuntimeMethod* GameObject_GetComponent_TisPlayBoardGameSceneManager_t1063580347_m386673798_RuntimeMethod_var;
extern String_t* _stringLiteral3675739884;
extern String_t* _stringLiteral395946798;
extern String_t* _stringLiteral3452614616;
extern const uint32_t BlockGameScript_Awake_m4038678848_MetadataUsageId;
extern RuntimeClass* TransformU5BU5D_t807237628_il2cpp_TypeInfo_var;
extern RuntimeClass* IEnumerator_t1853284238_il2cpp_TypeInfo_var;
extern RuntimeClass* Transform_t3600365921_il2cpp_TypeInfo_var;
extern RuntimeClass* IDisposable_t3640265483_il2cpp_TypeInfo_var;
extern RuntimeClass* CharU5BU5D_t3528271667_il2cpp_TypeInfo_var;
extern RuntimeClass* BlockGameScript_t725110519_il2cpp_TypeInfo_var;
extern RuntimeClass* Converter_2_t751170091_il2cpp_TypeInfo_var;
extern RuntimeClass* Debug_t3317548046_il2cpp_TypeInfo_var;
extern const RuntimeMethod* Resources_Load_TisSprite_t280657092_m4144667290_RuntimeMethod_var;
extern const RuntimeMethod* Component_GetComponent_TisImage_t2670269651_m980647750_RuntimeMethod_var;
extern const RuntimeMethod* Int32_Parse_m1033611559_RuntimeMethod_var;
extern const RuntimeMethod* Converter_2__ctor_m3483849192_RuntimeMethod_var;
extern const RuntimeMethod* Array_ConvertAll_TisString_t_TisInt32_t2950945753_m3377912609_RuntimeMethod_var;
extern String_t* _stringLiteral336974340;
extern const uint32_t BlockGameScript_Start_m863883510_MetadataUsageId;
extern String_t* _stringLiteral3452614532;
extern const uint32_t BlockGameScript_OnDestroy_m2061132844_MetadataUsageId;
extern RuntimeClass* Input_t1431474628_il2cpp_TypeInfo_var;
extern RuntimeClass* Object_t631007953_il2cpp_TypeInfo_var;
extern RuntimeClass* Vector3_t3722313464_il2cpp_TypeInfo_var;
extern const uint32_t BlockGameScript_CheckClickingBoard_m3461456120_MetadataUsageId;
extern String_t* _stringLiteral1910992376;
extern String_t* _stringLiteral3584322610;
extern const uint32_t BlockGameScript_SettingRoutineAfterChangeObject_m701267219_MetadataUsageId;
extern const uint32_t BlockGameScript_DraggingBoardObj_m905776931_MetadataUsageId;
extern RuntimeClass* Mathf_t3464937446_il2cpp_TypeInfo_var;
extern const uint32_t BlockGameScript_GetBlocksOnlyInCross_m666557681_MetadataUsageId;
extern const RuntimeMethod* GameObject_GetComponent_TisImage_t2670269651_m2486712510_RuntimeMethod_var;
extern const uint32_t BlockGameScript_SetObjectColor_m3840603770_MetadataUsageId;
extern RuntimeClass* Char_t3634460470_il2cpp_TypeInfo_var;
extern const uint32_t BlockGameScript_GetObjectNumByGameObject_m2056703641_MetadataUsageId;
extern String_t* _stringLiteral1434839863;
extern const uint32_t BlurManager_Awake_m2390025541_MetadataUsageId;
extern const RuntimeMethod* Component_GetComponent_TisText_t1901882714_m4196288697_RuntimeMethod_var;
extern const RuntimeMethod* Component_GetComponent_TisButton_t4055032469_m1381873113_RuntimeMethod_var;
extern const uint32_t BlurManager_init_m578986440_MetadataUsageId;
extern RuntimeClass* U3CsetBlurU3Ec__Iterator0_t81185826_il2cpp_TypeInfo_var;
extern const uint32_t BlurManager_setBlur_m4215537649_MetadataUsageId;
extern const uint32_t BlurManager_popup_m1373291001_MetadataUsageId;
extern const uint32_t BlurManager_popup_m1972495530_MetadataUsageId;
extern const uint32_t U3CsetBlurU3Ec__Iterator0_MoveNext_m1723014083_MetadataUsageId;
extern RuntimeClass* NotSupportedException_t1314879016_il2cpp_TypeInfo_var;
extern const RuntimeMethod* U3CsetBlurU3Ec__Iterator0_Reset_m3336450304_RuntimeMethod_var;
extern const uint32_t U3CsetBlurU3Ec__Iterator0_Reset_m3336450304_MetadataUsageId;
extern const RuntimeType* BoardPrefabName_t3868180495_0_0_0_var;
extern RuntimeClass* DontDestroyManager_t1329034447_il2cpp_TypeInfo_var;
extern RuntimeClass* Type_t_il2cpp_TypeInfo_var;
extern RuntimeClass* Enum_t4135868527_il2cpp_TypeInfo_var;
extern RuntimeClass* StringU5BU5D_t1281789340_il2cpp_TypeInfo_var;
extern RuntimeClass* BoardPrefabName_t3868180495_il2cpp_TypeInfo_var;
extern RuntimeClass* SocialTool_t1909827527_il2cpp_TypeInfo_var;
extern String_t* _stringLiteral2732960973;
extern String_t* _stringLiteral2394213907;
extern const uint32_t DontDestroyManager_Awake_m3573776678_MetadataUsageId;
extern String_t* _stringLiteral948284475;
extern const uint32_t DontDestroyManager_OnDestroy_m2029575117_MetadataUsageId;
extern const uint32_t DontDestroyManager_GetSoulNum_m1644499173_MetadataUsageId;
extern const uint32_t DontDestroyManager_SetSoulNum_m3127869396_MetadataUsageId;
extern String_t* _stringLiteral3057220066;
extern const uint32_t DontDestroyManager_SetCompletePicture_m895209823_MetadataUsageId;
extern const RuntimeMethod* GameObject_GetComponent_TisMainSceneManager_t2603182452_m1706813279_RuntimeMethod_var;
extern const RuntimeMethod* GameObject_GetComponent_TisScrollRect_t4137855814_m3217020803_RuntimeMethod_var;
extern const uint32_t DragGalleryContentScript_init_m1389459019_MetadataUsageId;
extern const uint32_t DragGalleryContentScript_Update_m1351736445_MetadataUsageId;
extern RuntimeClass* GameObject_t1113636619_il2cpp_TypeInfo_var;
extern RuntimeClass* List_1_t777473367_il2cpp_TypeInfo_var;
extern RuntimeClass* UnityAction_t3245792599_il2cpp_TypeInfo_var;
extern const RuntimeMethod* Resources_LoadAll_TisSprite_t280657092_m1417587347_RuntimeMethod_var;
extern const RuntimeMethod* List_1__ctor_m2885667311_RuntimeMethod_var;
extern const RuntimeMethod* Object_Instantiate_TisGameObject_t1113636619_m4070250708_RuntimeMethod_var;
extern const RuntimeMethod* List_1_Add_m4073477735_RuntimeMethod_var;
extern const RuntimeMethod* List_1_get_Item_m3022113929_RuntimeMethod_var;
extern const RuntimeMethod* GameObject_GetComponent_TisButton_t4055032469_m1515138076_RuntimeMethod_var;
extern const RuntimeMethod* MainSceneManager_PlayBoard_m2008684372_RuntimeMethod_var;
extern const RuntimeMethod* List_1_get_Count_m3787308655_RuntimeMethod_var;
extern String_t* _stringLiteral10465875;
extern String_t* _stringLiteral3016710712;
extern String_t* _stringLiteral1581755063;
extern String_t* _stringLiteral1004216408;
extern String_t* _stringLiteral199407509;
extern const uint32_t DragGalleryContentScript_loadGallery_m634214822_MetadataUsageId;
extern const uint32_t DragGalleryContentScript_SetMouseClickInfo_m593303541_MetadataUsageId;
extern const uint32_t FixedScreen_Awake_m2880025646_MetadataUsageId;
extern RuntimeClass* Int32U5BU5D_t385246372_il2cpp_TypeInfo_var;
extern RuntimeField* U3CPrivateImplementationDetailsU3E_t3057255367____U24fieldU2D231C96DC27FE3072E9C6324B0CD546829BDF4785_0_FieldInfo_var;
extern const uint32_t GameManager__ctor_m180891015_MetadataUsageId;
extern const uint32_t GameManager_GetInstance_m367300771_MetadataUsageId;
extern RuntimeClass* SceneName_t250522944_il2cpp_TypeInfo_var;
extern const uint32_t GameManager_ChangeScene_m1824834679_MetadataUsageId;
extern const uint32_t GameManager_ChangeScene_m3732671280_MetadataUsageId;
extern const uint32_t GameManager_ResetBlockState_m2725504852_MetadataUsageId;
extern String_t* _stringLiteral870437589;
extern const uint32_t GameManager_SetBlockState_m3286834702_MetadataUsageId;
extern const RuntimeMethod* GameObject_GetComponent_TisDontDestroyManager_t1329034447_m281312435_RuntimeMethod_var;
extern String_t* _stringLiteral441913799;
extern String_t* _stringLiteral3472418399;
extern const uint32_t GameManager_getDontDestroyManager_m2156172674_MetadataUsageId;
extern const uint32_t GameManager__cctor_m4243923930_MetadataUsageId;
extern const RuntimeMethod* Misc_CheckNotNull_TisString_t_m2144140679_RuntimeMethod_var;
extern const uint32_t AdvertisingResult__ctor_m3283909746_MetadataUsageId;
struct EndpointDetails_t3891698496_marshaled_pinvoke;
struct EndpointDetails_t3891698496;;
struct EndpointDetails_t3891698496_marshaled_pinvoke;;
extern RuntimeClass* ByteU5BU5D_t4116647657_il2cpp_TypeInfo_var;
extern const uint32_t ConnectionRequest_t684574500_pinvoke_FromNativeMethodDefinition_MetadataUsageId;
struct EndpointDetails_t3891698496_marshaled_com;
struct EndpointDetails_t3891698496_marshaled_com;;
extern const uint32_t ConnectionRequest_t684574500_com_FromNativeMethodDefinition_MetadataUsageId;
extern RuntimeClass* Logger_t3934082555_il2cpp_TypeInfo_var;
extern const RuntimeMethod* Misc_CheckNotNull_TisByteU5BU5D_t4116647657_m2778390417_RuntimeMethod_var;
extern String_t* _stringLiteral2946598263;
extern const uint32_t ConnectionRequest__ctor_m1771453037_MetadataUsageId;
extern const uint32_t ConnectionResponse_t735328601_pinvoke_FromNativeMethodDefinition_MetadataUsageId;
extern const uint32_t ConnectionResponse_t735328601_com_FromNativeMethodDefinition_MetadataUsageId;
extern const uint32_t ConnectionResponse__ctor_m1692756272_MetadataUsageId;
extern RuntimeClass* ConnectionResponse_t735328601_il2cpp_TypeInfo_var;
extern const uint32_t ConnectionResponse_Rejected_m3185555180_MetadataUsageId;
extern const uint32_t ConnectionResponse_NetworkNotConnected_m1024688545_MetadataUsageId;
extern const uint32_t ConnectionResponse_InternalError_m432312254_MetadataUsageId;
extern const uint32_t ConnectionResponse_EndpointNotConnected_m4227972055_MetadataUsageId;
extern const uint32_t ConnectionResponse_AlreadyConnected_m4294086108_MetadataUsageId;
extern const uint32_t ConnectionResponse__cctor_m1493140984_MetadataUsageId;
extern const uint32_t EndpointDetails__ctor_m21302606_MetadataUsageId;
extern RuntimeClass* Action_1_t2609895709_il2cpp_TypeInfo_var;
extern const uint32_t NearbyConnectionConfiguration_t2019425596_pinvoke_FromNativeMethodDefinition_MetadataUsageId;
extern const uint32_t NearbyConnectionConfiguration_t2019425596_com_FromNativeMethodDefinition_MetadataUsageId;
extern const RuntimeMethod* Misc_CheckNotNull_TisAction_1_t2609895709_m4157397171_RuntimeMethod_var;
extern const uint32_t NearbyConnectionConfiguration__ctor_m3413108655_MetadataUsageId;
extern const RuntimeMethod* Nullable_1_get_HasValue_m1210311128_RuntimeMethod_var;
extern const uint32_t SavedGameMetadataUpdate_get_IsPlayedTimeUpdated_m2037804757_MetadataUsageId;
extern const uint32_t Builder_WithUpdatedDescription_m2481299006_MetadataUsageId;
extern RuntimeClass* InvalidOperationException_t56020091_il2cpp_TypeInfo_var;
extern const RuntimeMethod* Builder_WithUpdatedPlayedTime_m96114013_RuntimeMethod_var;
extern const RuntimeMethod* Nullable_1__ctor_m3314784284_RuntimeMethod_var;
extern String_t* _stringLiteral2702124447;
extern const uint32_t Builder_WithUpdatedPlayedTime_m96114013_MetadataUsageId;
extern String_t* _stringLiteral2232457108;
extern const uint32_t VideoCapabilities_SupportsCaptureMode_m1565474687_MetadataUsageId;
extern String_t* _stringLiteral2003653526;
extern const uint32_t VideoCapabilities_SupportsQualityLevel_m2728670355_MetadataUsageId;
extern RuntimeClass* Boolean_t97287965_il2cpp_TypeInfo_var;
extern RuntimeClass* VideoCapabilities_t1298735124_il2cpp_TypeInfo_var;
extern RuntimeClass* Func_2_t1267953766_il2cpp_TypeInfo_var;
extern const RuntimeMethod* VideoCapabilities_U3CToStringU3Em__0_m727207793_RuntimeMethod_var;
extern const RuntimeMethod* Func_2__ctor_m483955973_RuntimeMethod_var;
extern const RuntimeMethod* Enumerable_Select_TisBoolean_t97287965_TisString_t_m1157660285_RuntimeMethod_var;
extern const RuntimeMethod* Enumerable_ToArray_TisString_t_m4208096419_RuntimeMethod_var;
extern const RuntimeMethod* VideoCapabilities_U3CToStringU3Em__1_m3708112702_RuntimeMethod_var;
extern String_t* _stringLiteral1193653825;
extern const uint32_t VideoCapabilities_ToString_m3384539885_MetadataUsageId;
extern RuntimeClass* VideoCaptureMode_t1984088482_il2cpp_TypeInfo_var;
extern RuntimeClass* VideoQualityLevel_t4283418091_il2cpp_TypeInfo_var;
extern String_t* _stringLiteral797399103;
extern const uint32_t VideoCaptureState_ToString_m1063396444_MetadataUsageId;
extern const uint32_t Logger_get_DebugLogEnabled_m2774793554_MetadataUsageId;
extern const uint32_t Logger_set_DebugLogEnabled_m497549498_MetadataUsageId;
extern const uint32_t Logger_get_WarningLogEnabled_m1046024761_MetadataUsageId;
extern const uint32_t Logger_set_WarningLogEnabled_m2597660112_MetadataUsageId;
extern RuntimeClass* U3CdU3Ec__AnonStorey0_t2350509859_il2cpp_TypeInfo_var;
extern RuntimeClass* Action_t1264377477_il2cpp_TypeInfo_var;
extern RuntimeClass* PlayGamesHelperObject_t4023745847_il2cpp_TypeInfo_var;
extern const RuntimeMethod* U3CdU3Ec__AnonStorey0_U3CU3Em__0_m1228335655_RuntimeMethod_var;
extern const uint32_t Logger_d_m922460805_MetadataUsageId;
extern RuntimeClass* U3CwU3Ec__AnonStorey1_t2080961746_il2cpp_TypeInfo_var;
extern const RuntimeMethod* U3CwU3Ec__AnonStorey1_U3CU3Em__0_m2699359925_RuntimeMethod_var;
extern const uint32_t Logger_w_m2887164710_MetadataUsageId;
extern RuntimeClass* U3CeU3Ec__AnonStorey2_t2346119983_il2cpp_TypeInfo_var;
extern const RuntimeMethod* U3CeU3Ec__AnonStorey2_U3CU3Em__0_m1436950235_RuntimeMethod_var;
extern const uint32_t Logger_e_m377266835_MetadataUsageId;
extern String_t* _stringLiteral2389780707;
extern String_t* _stringLiteral130595647;
extern String_t* _stringLiteral3452614643;
extern const uint32_t Logger_describe_m3385582320_MetadataUsageId;
extern RuntimeClass* DateTime_t3738529785_il2cpp_TypeInfo_var;
extern String_t* _stringLiteral2783215974;
extern String_t* _stringLiteral972720932;
extern const uint32_t Logger_ToLogMessage_m1026262968_MetadataUsageId;
extern const uint32_t Logger__cctor_m1133542101_MetadataUsageId;
extern String_t* _stringLiteral3145108695;
extern const uint32_t U3CdU3Ec__AnonStorey0_U3CU3Em__0_m1228335655_MetadataUsageId;
extern String_t* _stringLiteral298050862;
extern String_t* _stringLiteral562053875;
extern const uint32_t U3CeU3Ec__AnonStorey2_U3CU3Em__0_m1436950235_MetadataUsageId;
extern String_t* _stringLiteral2219906404;
extern String_t* _stringLiteral3226225707;
extern const uint32_t U3CwU3Ec__AnonStorey1_U3CU3Em__0_m2699359925_MetadataUsageId;
extern RuntimeClass* ArgumentNullException_t1615371798_il2cpp_TypeInfo_var;
extern RuntimeClass* ArgumentOutOfRangeException_t777629997_il2cpp_TypeInfo_var;
extern const RuntimeMethod* Misc_GetSubsetBytes_m4142756084_RuntimeMethod_var;
extern String_t* _stringLiteral4007973390;
extern String_t* _stringLiteral1082126080;
extern String_t* _stringLiteral1212500642;
extern const uint32_t Misc_GetSubsetBytes_m4142756084_MetadataUsageId;
extern RuntimeClass* List_1_t2736452219_il2cpp_TypeInfo_var;
extern const RuntimeMethod* List_1__ctor_m3850019872_RuntimeMethod_var;
extern const uint32_t PlayGamesHelperObject__ctor_m842076472_MetadataUsageId;
extern const RuntimeMethod* GameObject_AddComponent_TisPlayGamesHelperObject_t4023745847_m1649163222_RuntimeMethod_var;
extern String_t* _stringLiteral1456124929;
extern const uint32_t PlayGamesHelperObject_CreateObject_m2548285831_MetadataUsageId;
extern const uint32_t PlayGamesHelperObject_Awake_m2472884359_MetadataUsageId;
extern const uint32_t PlayGamesHelperObject_OnDisable_m2619165721_MetadataUsageId;
extern RuntimeClass* U3CRunCoroutineU3Ec__AnonStorey0_t3592917427_il2cpp_TypeInfo_var;
extern const RuntimeMethod* U3CRunCoroutineU3Ec__AnonStorey0_U3CU3Em__0_m735634040_RuntimeMethod_var;
extern const uint32_t PlayGamesHelperObject_RunCoroutine_m2582369998_MetadataUsageId;
extern const RuntimeMethod* PlayGamesHelperObject_RunOnGameThread_m3356747975_RuntimeMethod_var;
extern const RuntimeMethod* List_1_Add_m263651446_RuntimeMethod_var;
extern String_t* _stringLiteral2365897554;
extern const uint32_t PlayGamesHelperObject_RunOnGameThread_m3356747975_MetadataUsageId;
extern const RuntimeMethod* List_1_Clear_m3969294004_RuntimeMethod_var;
extern const RuntimeMethod* List_1_AddRange_m3508878779_RuntimeMethod_var;
extern const RuntimeMethod* List_1_get_Item_m1396344728_RuntimeMethod_var;
extern const RuntimeMethod* List_1_get_Count_m2893360516_RuntimeMethod_var;
extern const uint32_t PlayGamesHelperObject_Update_m1666979070_MetadataUsageId;
extern RuntimeClass* Exception_t_il2cpp_TypeInfo_var;
extern const RuntimeMethod* List_1_GetEnumerator_m1802404592_RuntimeMethod_var;
extern const RuntimeMethod* Enumerator_get_Current_m3156154971_RuntimeMethod_var;
extern const RuntimeMethod* Action_1_Invoke_m1933767679_RuntimeMethod_var;
extern const RuntimeMethod* Enumerator_MoveNext_m3351297324_RuntimeMethod_var;
extern const RuntimeMethod* Enumerator_Dispose_m3070555129_RuntimeMethod_var;
extern String_t* _stringLiteral2504426073;
extern String_t* _stringLiteral3452614566;
extern const uint32_t PlayGamesHelperObject_OnApplicationFocus_m746245203_MetadataUsageId;
extern String_t* _stringLiteral3116899887;
extern const uint32_t PlayGamesHelperObject_OnApplicationPause_m670092642_MetadataUsageId;
extern const RuntimeMethod* List_1_Contains_m2016498970_RuntimeMethod_var;
extern const RuntimeMethod* List_1_Add_m2257682863_RuntimeMethod_var;
extern const uint32_t PlayGamesHelperObject_AddFocusCallback_m2762991539_MetadataUsageId;
extern const RuntimeMethod* List_1_Remove_m2142717768_RuntimeMethod_var;
extern const uint32_t PlayGamesHelperObject_RemoveFocusCallback_m1727832764_MetadataUsageId;
extern const uint32_t PlayGamesHelperObject_AddPauseCallback_m3737367853_MetadataUsageId;
extern const uint32_t PlayGamesHelperObject_RemovePauseCallback_m4074309365_MetadataUsageId;
extern RuntimeClass* List_1_t1741830302_il2cpp_TypeInfo_var;
extern const RuntimeMethod* List_1__ctor_m70055677_RuntimeMethod_var;
extern const uint32_t PlayGamesHelperObject__cctor_m3952985837_MetadataUsageId;
extern const uint32_t U3CRunCoroutineU3Ec__AnonStorey0_U3CU3Em__0_m735634040_MetadataUsageId;
extern const RuntimeMethod* List_1_ToArray_m1385224522_RuntimeMethod_var;
extern const uint32_t Localize_get_localizeStringList_m719393806_MetadataUsageId;
extern RuntimeClass* List_1_t1963720954_il2cpp_TypeInfo_var;
extern const RuntimeMethod* List_1__ctor_m2158357409_RuntimeMethod_var;
extern const uint32_t Localize_set_localizeStringList_m1125332071_MetadataUsageId;
extern const RuntimeType* Localize_t2088442295_0_0_0_var;
extern RuntimeClass* TextAsset_t3022178571_il2cpp_TypeInfo_var;
extern RuntimeClass* XmlSerializer_t1117804635_il2cpp_TypeInfo_var;
extern RuntimeClass* StringReader_t3465604688_il2cpp_TypeInfo_var;
extern RuntimeClass* Localize_t2088442295_il2cpp_TypeInfo_var;
extern RuntimeClass* LocalizeTool_t315363650_il2cpp_TypeInfo_var;
extern String_t* _stringLiteral3768124858;
extern String_t* _stringLiteral3454842811;
extern String_t* _stringLiteral3454777285;
extern const uint32_t LocalizeTool_loadLocalizeString_m3512941887_MetadataUsageId;
extern RuntimeClass* List_1_t2585711361_il2cpp_TypeInfo_var;
extern const RuntimeMethod* List_1__ctor_m1424466557_RuntimeMethod_var;
extern String_t* _stringLiteral1406827017;
extern String_t* _stringLiteral2633343367;
extern const uint32_t MainSceneManager_Awake_m2893882138_MetadataUsageId;
extern const uint32_t MainSceneManager_Start_m3526906689_MetadataUsageId;
extern RuntimeClass* EventSystem_t1003666588_il2cpp_TypeInfo_var;
extern String_t* _stringLiteral3452614641;
extern String_t* _stringLiteral794013045;
extern const uint32_t MainSceneManager_PlayBoard_m2008684372_MetadataUsageId;
extern const RuntimeMethod* Component_GetComponent_TisDragGalleryContentScript_t2491726244_m3299036926_RuntimeMethod_var;
extern const RuntimeMethod* List_1_Clear_m2500309205_RuntimeMethod_var;
extern const RuntimeMethod* List_1_Add_m2765963565_RuntimeMethod_var;
extern String_t* _stringLiteral2553611042;
extern const uint32_t MainSceneManager_ActiveGallery_m2541763430_MetadataUsageId;
extern String_t* _stringLiteral2354090585;
extern String_t* _stringLiteral4041729975;
extern const uint32_t MainSceneManager_startClick_m4287834383_MetadataUsageId;
extern const uint32_t MainSceneManager_SetGalleryPage_m824382587_MetadataUsageId;
extern const RuntimeMethod* List_1_get_Item_m3743125852_RuntimeMethod_var;
extern const uint32_t MainSceneManager_SetDotImage_m1812060552_MetadataUsageId;
extern const RuntimeMethod* Object_Instantiate_TisGameObject_t1113636619_m3215236302_RuntimeMethod_var;
extern String_t* _stringLiteral2527638099;
extern String_t* _stringLiteral2654357047;
extern String_t* _stringLiteral697976375;
extern String_t* _stringLiteral22615885;
extern String_t* _stringLiteral1024073229;
extern const uint32_t PlayBoardGameSceneManager_Awake_m3847176733_MetadataUsageId;
extern const uint32_t PlayBoardGameSceneManager_SetSoulNumText_m3655537806_MetadataUsageId;
extern const uint32_t PlayBoardGameSceneManager_GetBlockState_m3359666033_MetadataUsageId;
extern const uint32_t PlayBoardGameSceneManager_SaveBlockState_m3559858343_MetadataUsageId;
extern String_t* _stringLiteral3451369402;
extern String_t* _stringLiteral3451500483;
extern String_t* _stringLiteral3451369411;
extern String_t* _stringLiteral1511312422;
extern const uint32_t PlayBoardGameSceneManager_CompleteBoard_m3268643837_MetadataUsageId;
extern const RuntimeMethod* PlayBoardGameSceneManager_U3CresetClickU3Em__0_m3185857501_RuntimeMethod_var;
extern const uint32_t PlayBoardGameSceneManager_resetClick_m3296291786_MetadataUsageId;
extern const RuntimeMethod* Component_GetComponent_TisBlockGameScript_t725110519_m560207762_RuntimeMethod_var;
extern const uint32_t PlayBoardGameSceneManager_U3CresetClickU3Em__0_m3185857501_MetadataUsageId;
extern RuntimeClass* GameCenterPlatform_t2679391364_il2cpp_TypeInfo_var;
extern const uint32_t SocialTool__ctor_m3886541085_MetadataUsageId;
extern RuntimeClass* Action_1_t269755560_il2cpp_TypeInfo_var;
extern RuntimeClass* ILocalUser_t2242999785_il2cpp_TypeInfo_var;
extern const RuntimeMethod* SocialTool_U3CsocialLoginU3Em__0_m3261903763_RuntimeMethod_var;
extern const RuntimeMethod* Action_1__ctor_m1363151734_RuntimeMethod_var;
extern const uint32_t SocialTool_socialLogin_m1551231671_MetadataUsageId;
extern RuntimeClass* IUserProfile_t360500636_il2cpp_TypeInfo_var;
extern String_t* _stringLiteral3463449499;
extern const uint32_t SocialTool_U3CsocialLoginU3Em__0_m3261903763_MetadataUsageId;
extern String_t* _stringLiteral4213792534;
extern String_t* _stringLiteral1458568745;
extern String_t* _stringLiteral1764733236;
extern const uint32_t SoulPopUpManager_Awake_m1107351948_MetadataUsageId;
extern const uint32_t SoulPopUpManager_Update_m2350063369_MetadataUsageId;
extern const uint32_t SoulPopUpManager_OnDestroy_m2403062827_MetadataUsageId;
extern RuntimeClass* Convert_t2465617642_il2cpp_TypeInfo_var;
extern const uint32_t SoulPopUpManager_CheckSecondDifference_m4265491882_MetadataUsageId;
extern const RuntimeMethod* GameObject_GetComponent_TisTransform_t3600365921_m3348034436_RuntimeMethod_var;
extern const RuntimeMethod* GameObject_GetComponent_TisRectTransform_t3704657025_m2005094398_RuntimeMethod_var;
extern String_t* _stringLiteral310922397;
extern const uint32_t SoulPopUpManager_CreateSoul_m3655787173_MetadataUsageId;
extern const RuntimeMethod* List_1_get_Count_m2812834599_RuntimeMethod_var;
extern const uint32_t SoulPopUpManager_CheckTouchInputs_m3936880048_MetadataUsageId;
extern const RuntimeMethod* List_1_RemoveAt_m3509344782_RuntimeMethod_var;
extern String_t* _stringLiteral3193826057;
extern const uint32_t SoulPopUpManager_GetSoul_m552337302_MetadataUsageId;
extern const uint32_t SoulPopUpManager_GoBack_m2253770426_MetadataUsageId;

struct ObjectU5BU5D_t2843939325;
struct Int32U5BU5D_t385246372;
struct TransformU5BU5D_t807237628;
struct SpriteU5BU5D_t2581906349;
struct CharU5BU5D_t3528271667;
struct StringU5BU5D_t1281789340;
struct ByteU5BU5D_t4116647657;
struct BooleanU5BU5D_t2897418192;
struct LocalizeStringU5BU5D_t1200507501;


#ifndef RUNTIMEOBJECT_H
#define RUNTIMEOBJECT_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Object

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RUNTIMEOBJECT_H
#ifndef U3CMODULEU3E_T692745544_H
#define U3CMODULEU3E_T692745544_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <Module>
struct  U3CModuleU3E_t692745544 
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // U3CMODULEU3E_T692745544_H
#ifndef U3CSETBLURU3EC__ITERATOR0_T81185826_H
#define U3CSETBLURU3EC__ITERATOR0_T81185826_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// BlurManager/<setBlur>c__Iterator0
struct  U3CsetBlurU3Ec__Iterator0_t81185826  : public RuntimeObject
{
public:
	// System.Boolean BlurManager/<setBlur>c__Iterator0::active
	bool ___active_0;
	// BlurManager BlurManager/<setBlur>c__Iterator0::$this
	BlurManager_t3192295244 * ___U24this_1;
	// System.Object BlurManager/<setBlur>c__Iterator0::$current
	RuntimeObject * ___U24current_2;
	// System.Boolean BlurManager/<setBlur>c__Iterator0::$disposing
	bool ___U24disposing_3;
	// System.Int32 BlurManager/<setBlur>c__Iterator0::$PC
	int32_t ___U24PC_4;

public:
	inline static int32_t get_offset_of_active_0() { return static_cast<int32_t>(offsetof(U3CsetBlurU3Ec__Iterator0_t81185826, ___active_0)); }
	inline bool get_active_0() const { return ___active_0; }
	inline bool* get_address_of_active_0() { return &___active_0; }
	inline void set_active_0(bool value)
	{
		___active_0 = value;
	}

	inline static int32_t get_offset_of_U24this_1() { return static_cast<int32_t>(offsetof(U3CsetBlurU3Ec__Iterator0_t81185826, ___U24this_1)); }
	inline BlurManager_t3192295244 * get_U24this_1() const { return ___U24this_1; }
	inline BlurManager_t3192295244 ** get_address_of_U24this_1() { return &___U24this_1; }
	inline void set_U24this_1(BlurManager_t3192295244 * value)
	{
		___U24this_1 = value;
		Il2CppCodeGenWriteBarrier((&___U24this_1), value);
	}

	inline static int32_t get_offset_of_U24current_2() { return static_cast<int32_t>(offsetof(U3CsetBlurU3Ec__Iterator0_t81185826, ___U24current_2)); }
	inline RuntimeObject * get_U24current_2() const { return ___U24current_2; }
	inline RuntimeObject ** get_address_of_U24current_2() { return &___U24current_2; }
	inline void set_U24current_2(RuntimeObject * value)
	{
		___U24current_2 = value;
		Il2CppCodeGenWriteBarrier((&___U24current_2), value);
	}

	inline static int32_t get_offset_of_U24disposing_3() { return static_cast<int32_t>(offsetof(U3CsetBlurU3Ec__Iterator0_t81185826, ___U24disposing_3)); }
	inline bool get_U24disposing_3() const { return ___U24disposing_3; }
	inline bool* get_address_of_U24disposing_3() { return &___U24disposing_3; }
	inline void set_U24disposing_3(bool value)
	{
		___U24disposing_3 = value;
	}

	inline static int32_t get_offset_of_U24PC_4() { return static_cast<int32_t>(offsetof(U3CsetBlurU3Ec__Iterator0_t81185826, ___U24PC_4)); }
	inline int32_t get_U24PC_4() const { return ___U24PC_4; }
	inline int32_t* get_address_of_U24PC_4() { return &___U24PC_4; }
	inline void set_U24PC_4(int32_t value)
	{
		___U24PC_4 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // U3CSETBLURU3EC__ITERATOR0_T81185826_H
#ifndef VALUETYPE_T3640485471_H
#define VALUETYPE_T3640485471_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ValueType
struct  ValueType_t3640485471  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of System.ValueType
struct ValueType_t3640485471_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.ValueType
struct ValueType_t3640485471_marshaled_com
{
};
#endif // VALUETYPE_T3640485471_H
#ifndef XMLSERIALIZER_T1117804635_H
#define XMLSERIALIZER_T1117804635_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Xml.Serialization.XmlSerializer
struct  XmlSerializer_t1117804635  : public RuntimeObject
{
public:
	// System.Boolean System.Xml.Serialization.XmlSerializer::customSerializer
	bool ___customSerializer_4;
	// System.Xml.Serialization.XmlMapping System.Xml.Serialization.XmlSerializer::typeMapping
	XmlMapping_t1653394 * ___typeMapping_5;
	// System.Xml.Serialization.XmlSerializer/SerializerData System.Xml.Serialization.XmlSerializer::serializerData
	SerializerData_t3337767682 * ___serializerData_6;
	// System.Xml.Serialization.XmlAttributeEventHandler System.Xml.Serialization.XmlSerializer::onUnknownAttribute
	XmlAttributeEventHandler_t3451815990 * ___onUnknownAttribute_8;
	// System.Xml.Serialization.XmlElementEventHandler System.Xml.Serialization.XmlSerializer::onUnknownElement
	XmlElementEventHandler_t1089210577 * ___onUnknownElement_9;
	// System.Xml.Serialization.XmlNodeEventHandler System.Xml.Serialization.XmlSerializer::onUnknownNode
	XmlNodeEventHandler_t508855017 * ___onUnknownNode_10;
	// System.Xml.Serialization.UnreferencedObjectEventHandler System.Xml.Serialization.XmlSerializer::onUnreferencedObject
	UnreferencedObjectEventHandler_t1397626473 * ___onUnreferencedObject_11;

public:
	inline static int32_t get_offset_of_customSerializer_4() { return static_cast<int32_t>(offsetof(XmlSerializer_t1117804635, ___customSerializer_4)); }
	inline bool get_customSerializer_4() const { return ___customSerializer_4; }
	inline bool* get_address_of_customSerializer_4() { return &___customSerializer_4; }
	inline void set_customSerializer_4(bool value)
	{
		___customSerializer_4 = value;
	}

	inline static int32_t get_offset_of_typeMapping_5() { return static_cast<int32_t>(offsetof(XmlSerializer_t1117804635, ___typeMapping_5)); }
	inline XmlMapping_t1653394 * get_typeMapping_5() const { return ___typeMapping_5; }
	inline XmlMapping_t1653394 ** get_address_of_typeMapping_5() { return &___typeMapping_5; }
	inline void set_typeMapping_5(XmlMapping_t1653394 * value)
	{
		___typeMapping_5 = value;
		Il2CppCodeGenWriteBarrier((&___typeMapping_5), value);
	}

	inline static int32_t get_offset_of_serializerData_6() { return static_cast<int32_t>(offsetof(XmlSerializer_t1117804635, ___serializerData_6)); }
	inline SerializerData_t3337767682 * get_serializerData_6() const { return ___serializerData_6; }
	inline SerializerData_t3337767682 ** get_address_of_serializerData_6() { return &___serializerData_6; }
	inline void set_serializerData_6(SerializerData_t3337767682 * value)
	{
		___serializerData_6 = value;
		Il2CppCodeGenWriteBarrier((&___serializerData_6), value);
	}

	inline static int32_t get_offset_of_onUnknownAttribute_8() { return static_cast<int32_t>(offsetof(XmlSerializer_t1117804635, ___onUnknownAttribute_8)); }
	inline XmlAttributeEventHandler_t3451815990 * get_onUnknownAttribute_8() const { return ___onUnknownAttribute_8; }
	inline XmlAttributeEventHandler_t3451815990 ** get_address_of_onUnknownAttribute_8() { return &___onUnknownAttribute_8; }
	inline void set_onUnknownAttribute_8(XmlAttributeEventHandler_t3451815990 * value)
	{
		___onUnknownAttribute_8 = value;
		Il2CppCodeGenWriteBarrier((&___onUnknownAttribute_8), value);
	}

	inline static int32_t get_offset_of_onUnknownElement_9() { return static_cast<int32_t>(offsetof(XmlSerializer_t1117804635, ___onUnknownElement_9)); }
	inline XmlElementEventHandler_t1089210577 * get_onUnknownElement_9() const { return ___onUnknownElement_9; }
	inline XmlElementEventHandler_t1089210577 ** get_address_of_onUnknownElement_9() { return &___onUnknownElement_9; }
	inline void set_onUnknownElement_9(XmlElementEventHandler_t1089210577 * value)
	{
		___onUnknownElement_9 = value;
		Il2CppCodeGenWriteBarrier((&___onUnknownElement_9), value);
	}

	inline static int32_t get_offset_of_onUnknownNode_10() { return static_cast<int32_t>(offsetof(XmlSerializer_t1117804635, ___onUnknownNode_10)); }
	inline XmlNodeEventHandler_t508855017 * get_onUnknownNode_10() const { return ___onUnknownNode_10; }
	inline XmlNodeEventHandler_t508855017 ** get_address_of_onUnknownNode_10() { return &___onUnknownNode_10; }
	inline void set_onUnknownNode_10(XmlNodeEventHandler_t508855017 * value)
	{
		___onUnknownNode_10 = value;
		Il2CppCodeGenWriteBarrier((&___onUnknownNode_10), value);
	}

	inline static int32_t get_offset_of_onUnreferencedObject_11() { return static_cast<int32_t>(offsetof(XmlSerializer_t1117804635, ___onUnreferencedObject_11)); }
	inline UnreferencedObjectEventHandler_t1397626473 * get_onUnreferencedObject_11() const { return ___onUnreferencedObject_11; }
	inline UnreferencedObjectEventHandler_t1397626473 ** get_address_of_onUnreferencedObject_11() { return &___onUnreferencedObject_11; }
	inline void set_onUnreferencedObject_11(UnreferencedObjectEventHandler_t1397626473 * value)
	{
		___onUnreferencedObject_11 = value;
		Il2CppCodeGenWriteBarrier((&___onUnreferencedObject_11), value);
	}
};

struct XmlSerializer_t1117804635_StaticFields
{
public:
	// System.Int32 System.Xml.Serialization.XmlSerializer::generationThreshold
	int32_t ___generationThreshold_0;
	// System.Boolean System.Xml.Serialization.XmlSerializer::backgroundGeneration
	bool ___backgroundGeneration_1;
	// System.Boolean System.Xml.Serialization.XmlSerializer::deleteTempFiles
	bool ___deleteTempFiles_2;
	// System.Boolean System.Xml.Serialization.XmlSerializer::generatorFallback
	bool ___generatorFallback_3;
	// System.Collections.Hashtable System.Xml.Serialization.XmlSerializer::serializerTypes
	Hashtable_t1853889766 * ___serializerTypes_7;

public:
	inline static int32_t get_offset_of_generationThreshold_0() { return static_cast<int32_t>(offsetof(XmlSerializer_t1117804635_StaticFields, ___generationThreshold_0)); }
	inline int32_t get_generationThreshold_0() const { return ___generationThreshold_0; }
	inline int32_t* get_address_of_generationThreshold_0() { return &___generationThreshold_0; }
	inline void set_generationThreshold_0(int32_t value)
	{
		___generationThreshold_0 = value;
	}

	inline static int32_t get_offset_of_backgroundGeneration_1() { return static_cast<int32_t>(offsetof(XmlSerializer_t1117804635_StaticFields, ___backgroundGeneration_1)); }
	inline bool get_backgroundGeneration_1() const { return ___backgroundGeneration_1; }
	inline bool* get_address_of_backgroundGeneration_1() { return &___backgroundGeneration_1; }
	inline void set_backgroundGeneration_1(bool value)
	{
		___backgroundGeneration_1 = value;
	}

	inline static int32_t get_offset_of_deleteTempFiles_2() { return static_cast<int32_t>(offsetof(XmlSerializer_t1117804635_StaticFields, ___deleteTempFiles_2)); }
	inline bool get_deleteTempFiles_2() const { return ___deleteTempFiles_2; }
	inline bool* get_address_of_deleteTempFiles_2() { return &___deleteTempFiles_2; }
	inline void set_deleteTempFiles_2(bool value)
	{
		___deleteTempFiles_2 = value;
	}

	inline static int32_t get_offset_of_generatorFallback_3() { return static_cast<int32_t>(offsetof(XmlSerializer_t1117804635_StaticFields, ___generatorFallback_3)); }
	inline bool get_generatorFallback_3() const { return ___generatorFallback_3; }
	inline bool* get_address_of_generatorFallback_3() { return &___generatorFallback_3; }
	inline void set_generatorFallback_3(bool value)
	{
		___generatorFallback_3 = value;
	}

	inline static int32_t get_offset_of_serializerTypes_7() { return static_cast<int32_t>(offsetof(XmlSerializer_t1117804635_StaticFields, ___serializerTypes_7)); }
	inline Hashtable_t1853889766 * get_serializerTypes_7() const { return ___serializerTypes_7; }
	inline Hashtable_t1853889766 ** get_address_of_serializerTypes_7() { return &___serializerTypes_7; }
	inline void set_serializerTypes_7(Hashtable_t1853889766 * value)
	{
		___serializerTypes_7 = value;
		Il2CppCodeGenWriteBarrier((&___serializerTypes_7), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // XMLSERIALIZER_T1117804635_H
#ifndef SOCIALTOOL_T1909827527_H
#define SOCIALTOOL_T1909827527_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// SocialTool
struct  SocialTool_t1909827527  : public RuntimeObject
{
public:
	// System.String SocialTool::cloudData
	String_t* ___cloudData_0;
	// System.String SocialTool::toSaveData
	String_t* ___toSaveData_1;

public:
	inline static int32_t get_offset_of_cloudData_0() { return static_cast<int32_t>(offsetof(SocialTool_t1909827527, ___cloudData_0)); }
	inline String_t* get_cloudData_0() const { return ___cloudData_0; }
	inline String_t** get_address_of_cloudData_0() { return &___cloudData_0; }
	inline void set_cloudData_0(String_t* value)
	{
		___cloudData_0 = value;
		Il2CppCodeGenWriteBarrier((&___cloudData_0), value);
	}

	inline static int32_t get_offset_of_toSaveData_1() { return static_cast<int32_t>(offsetof(SocialTool_t1909827527, ___toSaveData_1)); }
	inline String_t* get_toSaveData_1() const { return ___toSaveData_1; }
	inline String_t** get_address_of_toSaveData_1() { return &___toSaveData_1; }
	inline void set_toSaveData_1(String_t* value)
	{
		___toSaveData_1 = value;
		Il2CppCodeGenWriteBarrier((&___toSaveData_1), value);
	}
};

struct SocialTool_t1909827527_StaticFields
{
public:
	// System.Action`1<System.Boolean> SocialTool::<>f__am$cache0
	Action_1_t269755560 * ___U3CU3Ef__amU24cache0_2;

public:
	inline static int32_t get_offset_of_U3CU3Ef__amU24cache0_2() { return static_cast<int32_t>(offsetof(SocialTool_t1909827527_StaticFields, ___U3CU3Ef__amU24cache0_2)); }
	inline Action_1_t269755560 * get_U3CU3Ef__amU24cache0_2() const { return ___U3CU3Ef__amU24cache0_2; }
	inline Action_1_t269755560 ** get_address_of_U3CU3Ef__amU24cache0_2() { return &___U3CU3Ef__amU24cache0_2; }
	inline void set_U3CU3Ef__amU24cache0_2(Action_1_t269755560 * value)
	{
		___U3CU3Ef__amU24cache0_2 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3Ef__amU24cache0_2), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SOCIALTOOL_T1909827527_H
#ifndef TEXTREADER_T283511965_H
#define TEXTREADER_T283511965_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.IO.TextReader
struct  TextReader_t283511965  : public RuntimeObject
{
public:

public:
};

struct TextReader_t283511965_StaticFields
{
public:
	// System.IO.TextReader System.IO.TextReader::Null
	TextReader_t283511965 * ___Null_0;

public:
	inline static int32_t get_offset_of_Null_0() { return static_cast<int32_t>(offsetof(TextReader_t283511965_StaticFields, ___Null_0)); }
	inline TextReader_t283511965 * get_Null_0() const { return ___Null_0; }
	inline TextReader_t283511965 ** get_address_of_Null_0() { return &___Null_0; }
	inline void set_Null_0(TextReader_t283511965 * value)
	{
		___Null_0 = value;
		Il2CppCodeGenWriteBarrier((&___Null_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TEXTREADER_T283511965_H
#ifndef LOCALIZETOOL_T315363650_H
#define LOCALIZETOOL_T315363650_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// LocalizeTool
struct  LocalizeTool_t315363650  : public RuntimeObject
{
public:

public:
};

struct LocalizeTool_t315363650_StaticFields
{
public:
	// LocalizeString LocalizeTool::localizeString
	LocalizeString_t491646212 * ___localizeString_0;

public:
	inline static int32_t get_offset_of_localizeString_0() { return static_cast<int32_t>(offsetof(LocalizeTool_t315363650_StaticFields, ___localizeString_0)); }
	inline LocalizeString_t491646212 * get_localizeString_0() const { return ___localizeString_0; }
	inline LocalizeString_t491646212 ** get_address_of_localizeString_0() { return &___localizeString_0; }
	inline void set_localizeString_0(LocalizeString_t491646212 * value)
	{
		___localizeString_0 = value;
		Il2CppCodeGenWriteBarrier((&___localizeString_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // LOCALIZETOOL_T315363650_H
#ifndef LIST_1_T1963720954_H
#define LIST_1_T1963720954_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.List`1<LocalizeString>
struct  List_1_t1963720954  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	LocalizeStringU5BU5D_t1200507501* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_t1963720954, ____items_1)); }
	inline LocalizeStringU5BU5D_t1200507501* get__items_1() const { return ____items_1; }
	inline LocalizeStringU5BU5D_t1200507501** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(LocalizeStringU5BU5D_t1200507501* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((&____items_1), value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_t1963720954, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_t1963720954, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}
};

struct List_1_t1963720954_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::EmptyArray
	LocalizeStringU5BU5D_t1200507501* ___EmptyArray_4;

public:
	inline static int32_t get_offset_of_EmptyArray_4() { return static_cast<int32_t>(offsetof(List_1_t1963720954_StaticFields, ___EmptyArray_4)); }
	inline LocalizeStringU5BU5D_t1200507501* get_EmptyArray_4() const { return ___EmptyArray_4; }
	inline LocalizeStringU5BU5D_t1200507501** get_address_of_EmptyArray_4() { return &___EmptyArray_4; }
	inline void set_EmptyArray_4(LocalizeStringU5BU5D_t1200507501* value)
	{
		___EmptyArray_4 = value;
		Il2CppCodeGenWriteBarrier((&___EmptyArray_4), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // LIST_1_T1963720954_H
#ifndef LIST_1_T777473367_H
#define LIST_1_T777473367_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.List`1<UnityEngine.Transform>
struct  List_1_t777473367  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	TransformU5BU5D_t807237628* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_t777473367, ____items_1)); }
	inline TransformU5BU5D_t807237628* get__items_1() const { return ____items_1; }
	inline TransformU5BU5D_t807237628** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(TransformU5BU5D_t807237628* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((&____items_1), value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_t777473367, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_t777473367, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}
};

struct List_1_t777473367_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::EmptyArray
	TransformU5BU5D_t807237628* ___EmptyArray_4;

public:
	inline static int32_t get_offset_of_EmptyArray_4() { return static_cast<int32_t>(offsetof(List_1_t777473367_StaticFields, ___EmptyArray_4)); }
	inline TransformU5BU5D_t807237628* get_EmptyArray_4() const { return ___EmptyArray_4; }
	inline TransformU5BU5D_t807237628** get_address_of_EmptyArray_4() { return &___EmptyArray_4; }
	inline void set_EmptyArray_4(TransformU5BU5D_t807237628* value)
	{
		___EmptyArray_4 = value;
		Il2CppCodeGenWriteBarrier((&___EmptyArray_4), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // LIST_1_T777473367_H
#ifndef LOCALIZESTRING_T491646212_H
#define LOCALIZESTRING_T491646212_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// LocalizeString
struct  LocalizeString_t491646212  : public RuntimeObject
{
public:
	// System.String LocalizeString::language
	String_t* ___language_0;
	// System.String LocalizeString::didnt_complete
	String_t* ___didnt_complete_1;
	// System.String LocalizeString::complete_board
	String_t* ___complete_board_2;
	// System.String LocalizeString::msg_reset
	String_t* ___msg_reset_3;

public:
	inline static int32_t get_offset_of_language_0() { return static_cast<int32_t>(offsetof(LocalizeString_t491646212, ___language_0)); }
	inline String_t* get_language_0() const { return ___language_0; }
	inline String_t** get_address_of_language_0() { return &___language_0; }
	inline void set_language_0(String_t* value)
	{
		___language_0 = value;
		Il2CppCodeGenWriteBarrier((&___language_0), value);
	}

	inline static int32_t get_offset_of_didnt_complete_1() { return static_cast<int32_t>(offsetof(LocalizeString_t491646212, ___didnt_complete_1)); }
	inline String_t* get_didnt_complete_1() const { return ___didnt_complete_1; }
	inline String_t** get_address_of_didnt_complete_1() { return &___didnt_complete_1; }
	inline void set_didnt_complete_1(String_t* value)
	{
		___didnt_complete_1 = value;
		Il2CppCodeGenWriteBarrier((&___didnt_complete_1), value);
	}

	inline static int32_t get_offset_of_complete_board_2() { return static_cast<int32_t>(offsetof(LocalizeString_t491646212, ___complete_board_2)); }
	inline String_t* get_complete_board_2() const { return ___complete_board_2; }
	inline String_t** get_address_of_complete_board_2() { return &___complete_board_2; }
	inline void set_complete_board_2(String_t* value)
	{
		___complete_board_2 = value;
		Il2CppCodeGenWriteBarrier((&___complete_board_2), value);
	}

	inline static int32_t get_offset_of_msg_reset_3() { return static_cast<int32_t>(offsetof(LocalizeString_t491646212, ___msg_reset_3)); }
	inline String_t* get_msg_reset_3() const { return ___msg_reset_3; }
	inline String_t** get_address_of_msg_reset_3() { return &___msg_reset_3; }
	inline void set_msg_reset_3(String_t* value)
	{
		___msg_reset_3 = value;
		Il2CppCodeGenWriteBarrier((&___msg_reset_3), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // LOCALIZESTRING_T491646212_H
#ifndef LOCALIZE_T2088442295_H
#define LOCALIZE_T2088442295_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Localize
struct  Localize_t2088442295  : public RuntimeObject
{
public:
	// System.Collections.Generic.List`1<LocalizeString> Localize::list
	List_1_t1963720954 * ___list_0;

public:
	inline static int32_t get_offset_of_list_0() { return static_cast<int32_t>(offsetof(Localize_t2088442295, ___list_0)); }
	inline List_1_t1963720954 * get_list_0() const { return ___list_0; }
	inline List_1_t1963720954 ** get_address_of_list_0() { return &___list_0; }
	inline void set_list_0(List_1_t1963720954 * value)
	{
		___list_0 = value;
		Il2CppCodeGenWriteBarrier((&___list_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // LOCALIZE_T2088442295_H
#ifndef PLUGINVERSION_T2872281160_H
#define PLUGINVERSION_T2872281160_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// GooglePlayGames.PluginVersion
struct  PluginVersion_t2872281160  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // PLUGINVERSION_T2872281160_H
struct Il2CppArrayBounds;
#ifndef RUNTIMEARRAY_H
#define RUNTIMEARRAY_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Array

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RUNTIMEARRAY_H
#ifndef COMMONTYPESUTIL_T3521372089_H
#define COMMONTYPESUTIL_T3521372089_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// GooglePlayGames.BasicApi.CommonTypesUtil
struct  CommonTypesUtil_t3521372089  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // COMMONTYPESUTIL_T3521372089_H
#ifndef LIST_1_T1741830302_H
#define LIST_1_T1741830302_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.List`1<System.Action`1<System.Boolean>>
struct  List_1_t1741830302  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	Action_1U5BU5D_t2893917113* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_t1741830302, ____items_1)); }
	inline Action_1U5BU5D_t2893917113* get__items_1() const { return ____items_1; }
	inline Action_1U5BU5D_t2893917113** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(Action_1U5BU5D_t2893917113* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((&____items_1), value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_t1741830302, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_t1741830302, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}
};

struct List_1_t1741830302_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::EmptyArray
	Action_1U5BU5D_t2893917113* ___EmptyArray_4;

public:
	inline static int32_t get_offset_of_EmptyArray_4() { return static_cast<int32_t>(offsetof(List_1_t1741830302_StaticFields, ___EmptyArray_4)); }
	inline Action_1U5BU5D_t2893917113* get_EmptyArray_4() const { return ___EmptyArray_4; }
	inline Action_1U5BU5D_t2893917113** get_address_of_EmptyArray_4() { return &___EmptyArray_4; }
	inline void set_EmptyArray_4(Action_1U5BU5D_t2893917113* value)
	{
		___EmptyArray_4 = value;
		Il2CppCodeGenWriteBarrier((&___EmptyArray_4), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // LIST_1_T1741830302_H
#ifndef EXCEPTION_T_H
#define EXCEPTION_T_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Exception
struct  Exception_t  : public RuntimeObject
{
public:
	// System.IntPtr[] System.Exception::trace_ips
	IntPtrU5BU5D_t4013366056* ___trace_ips_0;
	// System.Exception System.Exception::inner_exception
	Exception_t * ___inner_exception_1;
	// System.String System.Exception::message
	String_t* ___message_2;
	// System.String System.Exception::help_link
	String_t* ___help_link_3;
	// System.String System.Exception::class_name
	String_t* ___class_name_4;
	// System.String System.Exception::stack_trace
	String_t* ___stack_trace_5;
	// System.String System.Exception::_remoteStackTraceString
	String_t* ____remoteStackTraceString_6;
	// System.Int32 System.Exception::remote_stack_index
	int32_t ___remote_stack_index_7;
	// System.Int32 System.Exception::hresult
	int32_t ___hresult_8;
	// System.String System.Exception::source
	String_t* ___source_9;
	// System.Collections.IDictionary System.Exception::_data
	RuntimeObject* ____data_10;

public:
	inline static int32_t get_offset_of_trace_ips_0() { return static_cast<int32_t>(offsetof(Exception_t, ___trace_ips_0)); }
	inline IntPtrU5BU5D_t4013366056* get_trace_ips_0() const { return ___trace_ips_0; }
	inline IntPtrU5BU5D_t4013366056** get_address_of_trace_ips_0() { return &___trace_ips_0; }
	inline void set_trace_ips_0(IntPtrU5BU5D_t4013366056* value)
	{
		___trace_ips_0 = value;
		Il2CppCodeGenWriteBarrier((&___trace_ips_0), value);
	}

	inline static int32_t get_offset_of_inner_exception_1() { return static_cast<int32_t>(offsetof(Exception_t, ___inner_exception_1)); }
	inline Exception_t * get_inner_exception_1() const { return ___inner_exception_1; }
	inline Exception_t ** get_address_of_inner_exception_1() { return &___inner_exception_1; }
	inline void set_inner_exception_1(Exception_t * value)
	{
		___inner_exception_1 = value;
		Il2CppCodeGenWriteBarrier((&___inner_exception_1), value);
	}

	inline static int32_t get_offset_of_message_2() { return static_cast<int32_t>(offsetof(Exception_t, ___message_2)); }
	inline String_t* get_message_2() const { return ___message_2; }
	inline String_t** get_address_of_message_2() { return &___message_2; }
	inline void set_message_2(String_t* value)
	{
		___message_2 = value;
		Il2CppCodeGenWriteBarrier((&___message_2), value);
	}

	inline static int32_t get_offset_of_help_link_3() { return static_cast<int32_t>(offsetof(Exception_t, ___help_link_3)); }
	inline String_t* get_help_link_3() const { return ___help_link_3; }
	inline String_t** get_address_of_help_link_3() { return &___help_link_3; }
	inline void set_help_link_3(String_t* value)
	{
		___help_link_3 = value;
		Il2CppCodeGenWriteBarrier((&___help_link_3), value);
	}

	inline static int32_t get_offset_of_class_name_4() { return static_cast<int32_t>(offsetof(Exception_t, ___class_name_4)); }
	inline String_t* get_class_name_4() const { return ___class_name_4; }
	inline String_t** get_address_of_class_name_4() { return &___class_name_4; }
	inline void set_class_name_4(String_t* value)
	{
		___class_name_4 = value;
		Il2CppCodeGenWriteBarrier((&___class_name_4), value);
	}

	inline static int32_t get_offset_of_stack_trace_5() { return static_cast<int32_t>(offsetof(Exception_t, ___stack_trace_5)); }
	inline String_t* get_stack_trace_5() const { return ___stack_trace_5; }
	inline String_t** get_address_of_stack_trace_5() { return &___stack_trace_5; }
	inline void set_stack_trace_5(String_t* value)
	{
		___stack_trace_5 = value;
		Il2CppCodeGenWriteBarrier((&___stack_trace_5), value);
	}

	inline static int32_t get_offset_of__remoteStackTraceString_6() { return static_cast<int32_t>(offsetof(Exception_t, ____remoteStackTraceString_6)); }
	inline String_t* get__remoteStackTraceString_6() const { return ____remoteStackTraceString_6; }
	inline String_t** get_address_of__remoteStackTraceString_6() { return &____remoteStackTraceString_6; }
	inline void set__remoteStackTraceString_6(String_t* value)
	{
		____remoteStackTraceString_6 = value;
		Il2CppCodeGenWriteBarrier((&____remoteStackTraceString_6), value);
	}

	inline static int32_t get_offset_of_remote_stack_index_7() { return static_cast<int32_t>(offsetof(Exception_t, ___remote_stack_index_7)); }
	inline int32_t get_remote_stack_index_7() const { return ___remote_stack_index_7; }
	inline int32_t* get_address_of_remote_stack_index_7() { return &___remote_stack_index_7; }
	inline void set_remote_stack_index_7(int32_t value)
	{
		___remote_stack_index_7 = value;
	}

	inline static int32_t get_offset_of_hresult_8() { return static_cast<int32_t>(offsetof(Exception_t, ___hresult_8)); }
	inline int32_t get_hresult_8() const { return ___hresult_8; }
	inline int32_t* get_address_of_hresult_8() { return &___hresult_8; }
	inline void set_hresult_8(int32_t value)
	{
		___hresult_8 = value;
	}

	inline static int32_t get_offset_of_source_9() { return static_cast<int32_t>(offsetof(Exception_t, ___source_9)); }
	inline String_t* get_source_9() const { return ___source_9; }
	inline String_t** get_address_of_source_9() { return &___source_9; }
	inline void set_source_9(String_t* value)
	{
		___source_9 = value;
		Il2CppCodeGenWriteBarrier((&___source_9), value);
	}

	inline static int32_t get_offset_of__data_10() { return static_cast<int32_t>(offsetof(Exception_t, ____data_10)); }
	inline RuntimeObject* get__data_10() const { return ____data_10; }
	inline RuntimeObject** get_address_of__data_10() { return &____data_10; }
	inline void set__data_10(RuntimeObject* value)
	{
		____data_10 = value;
		Il2CppCodeGenWriteBarrier((&____data_10), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // EXCEPTION_T_H
#ifndef U3CRUNCOROUTINEU3EC__ANONSTOREY0_T3592917427_H
#define U3CRUNCOROUTINEU3EC__ANONSTOREY0_T3592917427_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// GooglePlayGames.OurUtils.PlayGamesHelperObject/<RunCoroutine>c__AnonStorey0
struct  U3CRunCoroutineU3Ec__AnonStorey0_t3592917427  : public RuntimeObject
{
public:
	// System.Collections.IEnumerator GooglePlayGames.OurUtils.PlayGamesHelperObject/<RunCoroutine>c__AnonStorey0::action
	RuntimeObject* ___action_0;

public:
	inline static int32_t get_offset_of_action_0() { return static_cast<int32_t>(offsetof(U3CRunCoroutineU3Ec__AnonStorey0_t3592917427, ___action_0)); }
	inline RuntimeObject* get_action_0() const { return ___action_0; }
	inline RuntimeObject** get_address_of_action_0() { return &___action_0; }
	inline void set_action_0(RuntimeObject* value)
	{
		___action_0 = value;
		Il2CppCodeGenWriteBarrier((&___action_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // U3CRUNCOROUTINEU3EC__ANONSTOREY0_T3592917427_H
#ifndef LIST_1_T2736452219_H
#define LIST_1_T2736452219_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.List`1<System.Action>
struct  List_1_t2736452219  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	ActionU5BU5D_t388269512* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_t2736452219, ____items_1)); }
	inline ActionU5BU5D_t388269512* get__items_1() const { return ____items_1; }
	inline ActionU5BU5D_t388269512** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(ActionU5BU5D_t388269512* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((&____items_1), value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_t2736452219, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_t2736452219, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}
};

struct List_1_t2736452219_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::EmptyArray
	ActionU5BU5D_t388269512* ___EmptyArray_4;

public:
	inline static int32_t get_offset_of_EmptyArray_4() { return static_cast<int32_t>(offsetof(List_1_t2736452219_StaticFields, ___EmptyArray_4)); }
	inline ActionU5BU5D_t388269512* get_EmptyArray_4() const { return ___EmptyArray_4; }
	inline ActionU5BU5D_t388269512** get_address_of_EmptyArray_4() { return &___EmptyArray_4; }
	inline void set_EmptyArray_4(ActionU5BU5D_t388269512* value)
	{
		___EmptyArray_4 = value;
		Il2CppCodeGenWriteBarrier((&___EmptyArray_4), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // LIST_1_T2736452219_H
#ifndef MISC_T4208016214_H
#define MISC_T4208016214_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// GooglePlayGames.OurUtils.Misc
struct  Misc_t4208016214  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MISC_T4208016214_H
#ifndef U3CEU3EC__ANONSTOREY2_T2346119983_H
#define U3CEU3EC__ANONSTOREY2_T2346119983_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// GooglePlayGames.OurUtils.Logger/<e>c__AnonStorey2
struct  U3CeU3Ec__AnonStorey2_t2346119983  : public RuntimeObject
{
public:
	// System.String GooglePlayGames.OurUtils.Logger/<e>c__AnonStorey2::msg
	String_t* ___msg_0;

public:
	inline static int32_t get_offset_of_msg_0() { return static_cast<int32_t>(offsetof(U3CeU3Ec__AnonStorey2_t2346119983, ___msg_0)); }
	inline String_t* get_msg_0() const { return ___msg_0; }
	inline String_t** get_address_of_msg_0() { return &___msg_0; }
	inline void set_msg_0(String_t* value)
	{
		___msg_0 = value;
		Il2CppCodeGenWriteBarrier((&___msg_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // U3CEU3EC__ANONSTOREY2_T2346119983_H
#ifndef U3CWU3EC__ANONSTOREY1_T2080961746_H
#define U3CWU3EC__ANONSTOREY1_T2080961746_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// GooglePlayGames.OurUtils.Logger/<w>c__AnonStorey1
struct  U3CwU3Ec__AnonStorey1_t2080961746  : public RuntimeObject
{
public:
	// System.String GooglePlayGames.OurUtils.Logger/<w>c__AnonStorey1::msg
	String_t* ___msg_0;

public:
	inline static int32_t get_offset_of_msg_0() { return static_cast<int32_t>(offsetof(U3CwU3Ec__AnonStorey1_t2080961746, ___msg_0)); }
	inline String_t* get_msg_0() const { return ___msg_0; }
	inline String_t** get_address_of_msg_0() { return &___msg_0; }
	inline void set_msg_0(String_t* value)
	{
		___msg_0 = value;
		Il2CppCodeGenWriteBarrier((&___msg_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // U3CWU3EC__ANONSTOREY1_T2080961746_H
#ifndef U3CDU3EC__ANONSTOREY0_T2350509859_H
#define U3CDU3EC__ANONSTOREY0_T2350509859_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// GooglePlayGames.OurUtils.Logger/<d>c__AnonStorey0
struct  U3CdU3Ec__AnonStorey0_t2350509859  : public RuntimeObject
{
public:
	// System.String GooglePlayGames.OurUtils.Logger/<d>c__AnonStorey0::msg
	String_t* ___msg_0;

public:
	inline static int32_t get_offset_of_msg_0() { return static_cast<int32_t>(offsetof(U3CdU3Ec__AnonStorey0_t2350509859, ___msg_0)); }
	inline String_t* get_msg_0() const { return ___msg_0; }
	inline String_t** get_address_of_msg_0() { return &___msg_0; }
	inline void set_msg_0(String_t* value)
	{
		___msg_0 = value;
		Il2CppCodeGenWriteBarrier((&___msg_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // U3CDU3EC__ANONSTOREY0_T2350509859_H
#ifndef LOGGER_T3934082555_H
#define LOGGER_T3934082555_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// GooglePlayGames.OurUtils.Logger
struct  Logger_t3934082555  : public RuntimeObject
{
public:

public:
};

struct Logger_t3934082555_StaticFields
{
public:
	// System.Boolean GooglePlayGames.OurUtils.Logger::debugLogEnabled
	bool ___debugLogEnabled_0;
	// System.Boolean GooglePlayGames.OurUtils.Logger::warningLogEnabled
	bool ___warningLogEnabled_1;

public:
	inline static int32_t get_offset_of_debugLogEnabled_0() { return static_cast<int32_t>(offsetof(Logger_t3934082555_StaticFields, ___debugLogEnabled_0)); }
	inline bool get_debugLogEnabled_0() const { return ___debugLogEnabled_0; }
	inline bool* get_address_of_debugLogEnabled_0() { return &___debugLogEnabled_0; }
	inline void set_debugLogEnabled_0(bool value)
	{
		___debugLogEnabled_0 = value;
	}

	inline static int32_t get_offset_of_warningLogEnabled_1() { return static_cast<int32_t>(offsetof(Logger_t3934082555_StaticFields, ___warningLogEnabled_1)); }
	inline bool get_warningLogEnabled_1() const { return ___warningLogEnabled_1; }
	inline bool* get_address_of_warningLogEnabled_1() { return &___warningLogEnabled_1; }
	inline void set_warningLogEnabled_1(bool value)
	{
		___warningLogEnabled_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // LOGGER_T3934082555_H
#ifndef VIDEOCAPABILITIES_T1298735124_H
#define VIDEOCAPABILITIES_T1298735124_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// GooglePlayGames.BasicApi.Video.VideoCapabilities
struct  VideoCapabilities_t1298735124  : public RuntimeObject
{
public:
	// System.Boolean GooglePlayGames.BasicApi.Video.VideoCapabilities::mIsCameraSupported
	bool ___mIsCameraSupported_0;
	// System.Boolean GooglePlayGames.BasicApi.Video.VideoCapabilities::mIsMicSupported
	bool ___mIsMicSupported_1;
	// System.Boolean GooglePlayGames.BasicApi.Video.VideoCapabilities::mIsWriteStorageSupported
	bool ___mIsWriteStorageSupported_2;
	// System.Boolean[] GooglePlayGames.BasicApi.Video.VideoCapabilities::mCaptureModesSupported
	BooleanU5BU5D_t2897418192* ___mCaptureModesSupported_3;
	// System.Boolean[] GooglePlayGames.BasicApi.Video.VideoCapabilities::mQualityLevelsSupported
	BooleanU5BU5D_t2897418192* ___mQualityLevelsSupported_4;

public:
	inline static int32_t get_offset_of_mIsCameraSupported_0() { return static_cast<int32_t>(offsetof(VideoCapabilities_t1298735124, ___mIsCameraSupported_0)); }
	inline bool get_mIsCameraSupported_0() const { return ___mIsCameraSupported_0; }
	inline bool* get_address_of_mIsCameraSupported_0() { return &___mIsCameraSupported_0; }
	inline void set_mIsCameraSupported_0(bool value)
	{
		___mIsCameraSupported_0 = value;
	}

	inline static int32_t get_offset_of_mIsMicSupported_1() { return static_cast<int32_t>(offsetof(VideoCapabilities_t1298735124, ___mIsMicSupported_1)); }
	inline bool get_mIsMicSupported_1() const { return ___mIsMicSupported_1; }
	inline bool* get_address_of_mIsMicSupported_1() { return &___mIsMicSupported_1; }
	inline void set_mIsMicSupported_1(bool value)
	{
		___mIsMicSupported_1 = value;
	}

	inline static int32_t get_offset_of_mIsWriteStorageSupported_2() { return static_cast<int32_t>(offsetof(VideoCapabilities_t1298735124, ___mIsWriteStorageSupported_2)); }
	inline bool get_mIsWriteStorageSupported_2() const { return ___mIsWriteStorageSupported_2; }
	inline bool* get_address_of_mIsWriteStorageSupported_2() { return &___mIsWriteStorageSupported_2; }
	inline void set_mIsWriteStorageSupported_2(bool value)
	{
		___mIsWriteStorageSupported_2 = value;
	}

	inline static int32_t get_offset_of_mCaptureModesSupported_3() { return static_cast<int32_t>(offsetof(VideoCapabilities_t1298735124, ___mCaptureModesSupported_3)); }
	inline BooleanU5BU5D_t2897418192* get_mCaptureModesSupported_3() const { return ___mCaptureModesSupported_3; }
	inline BooleanU5BU5D_t2897418192** get_address_of_mCaptureModesSupported_3() { return &___mCaptureModesSupported_3; }
	inline void set_mCaptureModesSupported_3(BooleanU5BU5D_t2897418192* value)
	{
		___mCaptureModesSupported_3 = value;
		Il2CppCodeGenWriteBarrier((&___mCaptureModesSupported_3), value);
	}

	inline static int32_t get_offset_of_mQualityLevelsSupported_4() { return static_cast<int32_t>(offsetof(VideoCapabilities_t1298735124, ___mQualityLevelsSupported_4)); }
	inline BooleanU5BU5D_t2897418192* get_mQualityLevelsSupported_4() const { return ___mQualityLevelsSupported_4; }
	inline BooleanU5BU5D_t2897418192** get_address_of_mQualityLevelsSupported_4() { return &___mQualityLevelsSupported_4; }
	inline void set_mQualityLevelsSupported_4(BooleanU5BU5D_t2897418192* value)
	{
		___mQualityLevelsSupported_4 = value;
		Il2CppCodeGenWriteBarrier((&___mQualityLevelsSupported_4), value);
	}
};

struct VideoCapabilities_t1298735124_StaticFields
{
public:
	// System.Func`2<System.Boolean,System.String> GooglePlayGames.BasicApi.Video.VideoCapabilities::<>f__am$cache0
	Func_2_t1267953766 * ___U3CU3Ef__amU24cache0_5;
	// System.Func`2<System.Boolean,System.String> GooglePlayGames.BasicApi.Video.VideoCapabilities::<>f__am$cache1
	Func_2_t1267953766 * ___U3CU3Ef__amU24cache1_6;

public:
	inline static int32_t get_offset_of_U3CU3Ef__amU24cache0_5() { return static_cast<int32_t>(offsetof(VideoCapabilities_t1298735124_StaticFields, ___U3CU3Ef__amU24cache0_5)); }
	inline Func_2_t1267953766 * get_U3CU3Ef__amU24cache0_5() const { return ___U3CU3Ef__amU24cache0_5; }
	inline Func_2_t1267953766 ** get_address_of_U3CU3Ef__amU24cache0_5() { return &___U3CU3Ef__amU24cache0_5; }
	inline void set_U3CU3Ef__amU24cache0_5(Func_2_t1267953766 * value)
	{
		___U3CU3Ef__amU24cache0_5 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3Ef__amU24cache0_5), value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__amU24cache1_6() { return static_cast<int32_t>(offsetof(VideoCapabilities_t1298735124_StaticFields, ___U3CU3Ef__amU24cache1_6)); }
	inline Func_2_t1267953766 * get_U3CU3Ef__amU24cache1_6() const { return ___U3CU3Ef__amU24cache1_6; }
	inline Func_2_t1267953766 ** get_address_of_U3CU3Ef__amU24cache1_6() { return &___U3CU3Ef__amU24cache1_6; }
	inline void set_U3CU3Ef__amU24cache1_6(Func_2_t1267953766 * value)
	{
		___U3CU3Ef__amU24cache1_6 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3Ef__amU24cache1_6), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // VIDEOCAPABILITIES_T1298735124_H
#ifndef YIELDINSTRUCTION_T403091072_H
#define YIELDINSTRUCTION_T403091072_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.YieldInstruction
struct  YieldInstruction_t403091072  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of UnityEngine.YieldInstruction
struct YieldInstruction_t403091072_marshaled_pinvoke
{
};
// Native definition for COM marshalling of UnityEngine.YieldInstruction
struct YieldInstruction_t403091072_marshaled_com
{
};
#endif // YIELDINSTRUCTION_T403091072_H
#ifndef UNITYEVENTBASE_T3960448221_H
#define UNITYEVENTBASE_T3960448221_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Events.UnityEventBase
struct  UnityEventBase_t3960448221  : public RuntimeObject
{
public:
	// UnityEngine.Events.InvokableCallList UnityEngine.Events.UnityEventBase::m_Calls
	InvokableCallList_t2498835369 * ___m_Calls_0;
	// UnityEngine.Events.PersistentCallGroup UnityEngine.Events.UnityEventBase::m_PersistentCalls
	PersistentCallGroup_t3050769227 * ___m_PersistentCalls_1;
	// System.String UnityEngine.Events.UnityEventBase::m_TypeName
	String_t* ___m_TypeName_2;
	// System.Boolean UnityEngine.Events.UnityEventBase::m_CallsDirty
	bool ___m_CallsDirty_3;

public:
	inline static int32_t get_offset_of_m_Calls_0() { return static_cast<int32_t>(offsetof(UnityEventBase_t3960448221, ___m_Calls_0)); }
	inline InvokableCallList_t2498835369 * get_m_Calls_0() const { return ___m_Calls_0; }
	inline InvokableCallList_t2498835369 ** get_address_of_m_Calls_0() { return &___m_Calls_0; }
	inline void set_m_Calls_0(InvokableCallList_t2498835369 * value)
	{
		___m_Calls_0 = value;
		Il2CppCodeGenWriteBarrier((&___m_Calls_0), value);
	}

	inline static int32_t get_offset_of_m_PersistentCalls_1() { return static_cast<int32_t>(offsetof(UnityEventBase_t3960448221, ___m_PersistentCalls_1)); }
	inline PersistentCallGroup_t3050769227 * get_m_PersistentCalls_1() const { return ___m_PersistentCalls_1; }
	inline PersistentCallGroup_t3050769227 ** get_address_of_m_PersistentCalls_1() { return &___m_PersistentCalls_1; }
	inline void set_m_PersistentCalls_1(PersistentCallGroup_t3050769227 * value)
	{
		___m_PersistentCalls_1 = value;
		Il2CppCodeGenWriteBarrier((&___m_PersistentCalls_1), value);
	}

	inline static int32_t get_offset_of_m_TypeName_2() { return static_cast<int32_t>(offsetof(UnityEventBase_t3960448221, ___m_TypeName_2)); }
	inline String_t* get_m_TypeName_2() const { return ___m_TypeName_2; }
	inline String_t** get_address_of_m_TypeName_2() { return &___m_TypeName_2; }
	inline void set_m_TypeName_2(String_t* value)
	{
		___m_TypeName_2 = value;
		Il2CppCodeGenWriteBarrier((&___m_TypeName_2), value);
	}

	inline static int32_t get_offset_of_m_CallsDirty_3() { return static_cast<int32_t>(offsetof(UnityEventBase_t3960448221, ___m_CallsDirty_3)); }
	inline bool get_m_CallsDirty_3() const { return ___m_CallsDirty_3; }
	inline bool* get_address_of_m_CallsDirty_3() { return &___m_CallsDirty_3; }
	inline void set_m_CallsDirty_3(bool value)
	{
		___m_CallsDirty_3 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // UNITYEVENTBASE_T3960448221_H
#ifndef LIST_1_T2585711361_H
#define LIST_1_T2585711361_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.List`1<UnityEngine.GameObject>
struct  List_1_t2585711361  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	GameObjectU5BU5D_t3328599146* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_t2585711361, ____items_1)); }
	inline GameObjectU5BU5D_t3328599146* get__items_1() const { return ____items_1; }
	inline GameObjectU5BU5D_t3328599146** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(GameObjectU5BU5D_t3328599146* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((&____items_1), value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_t2585711361, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_t2585711361, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}
};

struct List_1_t2585711361_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::EmptyArray
	GameObjectU5BU5D_t3328599146* ___EmptyArray_4;

public:
	inline static int32_t get_offset_of_EmptyArray_4() { return static_cast<int32_t>(offsetof(List_1_t2585711361_StaticFields, ___EmptyArray_4)); }
	inline GameObjectU5BU5D_t3328599146* get_EmptyArray_4() const { return ___EmptyArray_4; }
	inline GameObjectU5BU5D_t3328599146** get_address_of_EmptyArray_4() { return &___EmptyArray_4; }
	inline void set_EmptyArray_4(GameObjectU5BU5D_t3328599146* value)
	{
		___EmptyArray_4 = value;
		Il2CppCodeGenWriteBarrier((&___EmptyArray_4), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // LIST_1_T2585711361_H
#ifndef MEMBERINFO_T_H
#define MEMBERINFO_T_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Reflection.MemberInfo
struct  MemberInfo_t  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MEMBERINFO_T_H
#ifndef STRING_T_H
#define STRING_T_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.String
struct  String_t  : public RuntimeObject
{
public:
	// System.Int32 System.String::length
	int32_t ___length_0;
	// System.Char System.String::start_char
	Il2CppChar ___start_char_1;

public:
	inline static int32_t get_offset_of_length_0() { return static_cast<int32_t>(offsetof(String_t, ___length_0)); }
	inline int32_t get_length_0() const { return ___length_0; }
	inline int32_t* get_address_of_length_0() { return &___length_0; }
	inline void set_length_0(int32_t value)
	{
		___length_0 = value;
	}

	inline static int32_t get_offset_of_start_char_1() { return static_cast<int32_t>(offsetof(String_t, ___start_char_1)); }
	inline Il2CppChar get_start_char_1() const { return ___start_char_1; }
	inline Il2CppChar* get_address_of_start_char_1() { return &___start_char_1; }
	inline void set_start_char_1(Il2CppChar value)
	{
		___start_char_1 = value;
	}
};

struct String_t_StaticFields
{
public:
	// System.String System.String::Empty
	String_t* ___Empty_2;
	// System.Char[] System.String::WhiteChars
	CharU5BU5D_t3528271667* ___WhiteChars_3;

public:
	inline static int32_t get_offset_of_Empty_2() { return static_cast<int32_t>(offsetof(String_t_StaticFields, ___Empty_2)); }
	inline String_t* get_Empty_2() const { return ___Empty_2; }
	inline String_t** get_address_of_Empty_2() { return &___Empty_2; }
	inline void set_Empty_2(String_t* value)
	{
		___Empty_2 = value;
		Il2CppCodeGenWriteBarrier((&___Empty_2), value);
	}

	inline static int32_t get_offset_of_WhiteChars_3() { return static_cast<int32_t>(offsetof(String_t_StaticFields, ___WhiteChars_3)); }
	inline CharU5BU5D_t3528271667* get_WhiteChars_3() const { return ___WhiteChars_3; }
	inline CharU5BU5D_t3528271667** get_address_of_WhiteChars_3() { return &___WhiteChars_3; }
	inline void set_WhiteChars_3(CharU5BU5D_t3528271667* value)
	{
		___WhiteChars_3 = value;
		Il2CppCodeGenWriteBarrier((&___WhiteChars_3), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // STRING_T_H
#ifndef ENUM_T4135868527_H
#define ENUM_T4135868527_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Enum
struct  Enum_t4135868527  : public ValueType_t3640485471
{
public:

public:
};

struct Enum_t4135868527_StaticFields
{
public:
	// System.Char[] System.Enum::split_char
	CharU5BU5D_t3528271667* ___split_char_0;

public:
	inline static int32_t get_offset_of_split_char_0() { return static_cast<int32_t>(offsetof(Enum_t4135868527_StaticFields, ___split_char_0)); }
	inline CharU5BU5D_t3528271667* get_split_char_0() const { return ___split_char_0; }
	inline CharU5BU5D_t3528271667** get_address_of_split_char_0() { return &___split_char_0; }
	inline void set_split_char_0(CharU5BU5D_t3528271667* value)
	{
		___split_char_0 = value;
		Il2CppCodeGenWriteBarrier((&___split_char_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of System.Enum
struct Enum_t4135868527_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.Enum
struct Enum_t4135868527_marshaled_com
{
};
#endif // ENUM_T4135868527_H
#ifndef INT32_T2950945753_H
#define INT32_T2950945753_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Int32
struct  Int32_t2950945753 
{
public:
	// System.Int32 System.Int32::m_value
	int32_t ___m_value_2;

public:
	inline static int32_t get_offset_of_m_value_2() { return static_cast<int32_t>(offsetof(Int32_t2950945753, ___m_value_2)); }
	inline int32_t get_m_value_2() const { return ___m_value_2; }
	inline int32_t* get_address_of_m_value_2() { return &___m_value_2; }
	inline void set_m_value_2(int32_t value)
	{
		___m_value_2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // INT32_T2950945753_H
#ifndef SYSTEMEXCEPTION_T176217640_H
#define SYSTEMEXCEPTION_T176217640_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.SystemException
struct  SystemException_t176217640  : public Exception_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SYSTEMEXCEPTION_T176217640_H
#ifndef ENUMERATOR_T2146457487_H
#define ENUMERATOR_T2146457487_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.List`1/Enumerator<System.Object>
struct  Enumerator_t2146457487 
{
public:
	// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1/Enumerator::l
	List_1_t257213610 * ___l_0;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::next
	int32_t ___next_1;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::ver
	int32_t ___ver_2;
	// T System.Collections.Generic.List`1/Enumerator::current
	RuntimeObject * ___current_3;

public:
	inline static int32_t get_offset_of_l_0() { return static_cast<int32_t>(offsetof(Enumerator_t2146457487, ___l_0)); }
	inline List_1_t257213610 * get_l_0() const { return ___l_0; }
	inline List_1_t257213610 ** get_address_of_l_0() { return &___l_0; }
	inline void set_l_0(List_1_t257213610 * value)
	{
		___l_0 = value;
		Il2CppCodeGenWriteBarrier((&___l_0), value);
	}

	inline static int32_t get_offset_of_next_1() { return static_cast<int32_t>(offsetof(Enumerator_t2146457487, ___next_1)); }
	inline int32_t get_next_1() const { return ___next_1; }
	inline int32_t* get_address_of_next_1() { return &___next_1; }
	inline void set_next_1(int32_t value)
	{
		___next_1 = value;
	}

	inline static int32_t get_offset_of_ver_2() { return static_cast<int32_t>(offsetof(Enumerator_t2146457487, ___ver_2)); }
	inline int32_t get_ver_2() const { return ___ver_2; }
	inline int32_t* get_address_of_ver_2() { return &___ver_2; }
	inline void set_ver_2(int32_t value)
	{
		___ver_2 = value;
	}

	inline static int32_t get_offset_of_current_3() { return static_cast<int32_t>(offsetof(Enumerator_t2146457487, ___current_3)); }
	inline RuntimeObject * get_current_3() const { return ___current_3; }
	inline RuntimeObject ** get_address_of_current_3() { return &___current_3; }
	inline void set_current_3(RuntimeObject * value)
	{
		___current_3 = value;
		Il2CppCodeGenWriteBarrier((&___current_3), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ENUMERATOR_T2146457487_H
#ifndef ENUMERATOR_T3631074179_H
#define ENUMERATOR_T3631074179_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.List`1/Enumerator<System.Action`1<System.Boolean>>
struct  Enumerator_t3631074179 
{
public:
	// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1/Enumerator::l
	List_1_t1741830302 * ___l_0;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::next
	int32_t ___next_1;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::ver
	int32_t ___ver_2;
	// T System.Collections.Generic.List`1/Enumerator::current
	Action_1_t269755560 * ___current_3;

public:
	inline static int32_t get_offset_of_l_0() { return static_cast<int32_t>(offsetof(Enumerator_t3631074179, ___l_0)); }
	inline List_1_t1741830302 * get_l_0() const { return ___l_0; }
	inline List_1_t1741830302 ** get_address_of_l_0() { return &___l_0; }
	inline void set_l_0(List_1_t1741830302 * value)
	{
		___l_0 = value;
		Il2CppCodeGenWriteBarrier((&___l_0), value);
	}

	inline static int32_t get_offset_of_next_1() { return static_cast<int32_t>(offsetof(Enumerator_t3631074179, ___next_1)); }
	inline int32_t get_next_1() const { return ___next_1; }
	inline int32_t* get_address_of_next_1() { return &___next_1; }
	inline void set_next_1(int32_t value)
	{
		___next_1 = value;
	}

	inline static int32_t get_offset_of_ver_2() { return static_cast<int32_t>(offsetof(Enumerator_t3631074179, ___ver_2)); }
	inline int32_t get_ver_2() const { return ___ver_2; }
	inline int32_t* get_address_of_ver_2() { return &___ver_2; }
	inline void set_ver_2(int32_t value)
	{
		___ver_2 = value;
	}

	inline static int32_t get_offset_of_current_3() { return static_cast<int32_t>(offsetof(Enumerator_t3631074179, ___current_3)); }
	inline Action_1_t269755560 * get_current_3() const { return ___current_3; }
	inline Action_1_t269755560 ** get_address_of_current_3() { return &___current_3; }
	inline void set_current_3(Action_1_t269755560 * value)
	{
		___current_3 = value;
		Il2CppCodeGenWriteBarrier((&___current_3), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ENUMERATOR_T3631074179_H
#ifndef SINGLE_T1397266774_H
#define SINGLE_T1397266774_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Single
struct  Single_t1397266774 
{
public:
	// System.Single System.Single::m_value
	float ___m_value_7;

public:
	inline static int32_t get_offset_of_m_value_7() { return static_cast<int32_t>(offsetof(Single_t1397266774, ___m_value_7)); }
	inline float get_m_value_7() const { return ___m_value_7; }
	inline float* get_address_of_m_value_7() { return &___m_value_7; }
	inline void set_m_value_7(float value)
	{
		___m_value_7 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SINGLE_T1397266774_H
#ifndef VOID_T1185182177_H
#define VOID_T1185182177_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Void
struct  Void_t1185182177 
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // VOID_T1185182177_H
#ifndef ENDPOINTDETAILS_T3891698496_H
#define ENDPOINTDETAILS_T3891698496_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// GooglePlayGames.BasicApi.Nearby.EndpointDetails
struct  EndpointDetails_t3891698496 
{
public:
	// System.String GooglePlayGames.BasicApi.Nearby.EndpointDetails::mEndpointId
	String_t* ___mEndpointId_0;
	// System.String GooglePlayGames.BasicApi.Nearby.EndpointDetails::mName
	String_t* ___mName_1;
	// System.String GooglePlayGames.BasicApi.Nearby.EndpointDetails::mServiceId
	String_t* ___mServiceId_2;

public:
	inline static int32_t get_offset_of_mEndpointId_0() { return static_cast<int32_t>(offsetof(EndpointDetails_t3891698496, ___mEndpointId_0)); }
	inline String_t* get_mEndpointId_0() const { return ___mEndpointId_0; }
	inline String_t** get_address_of_mEndpointId_0() { return &___mEndpointId_0; }
	inline void set_mEndpointId_0(String_t* value)
	{
		___mEndpointId_0 = value;
		Il2CppCodeGenWriteBarrier((&___mEndpointId_0), value);
	}

	inline static int32_t get_offset_of_mName_1() { return static_cast<int32_t>(offsetof(EndpointDetails_t3891698496, ___mName_1)); }
	inline String_t* get_mName_1() const { return ___mName_1; }
	inline String_t** get_address_of_mName_1() { return &___mName_1; }
	inline void set_mName_1(String_t* value)
	{
		___mName_1 = value;
		Il2CppCodeGenWriteBarrier((&___mName_1), value);
	}

	inline static int32_t get_offset_of_mServiceId_2() { return static_cast<int32_t>(offsetof(EndpointDetails_t3891698496, ___mServiceId_2)); }
	inline String_t* get_mServiceId_2() const { return ___mServiceId_2; }
	inline String_t** get_address_of_mServiceId_2() { return &___mServiceId_2; }
	inline void set_mServiceId_2(String_t* value)
	{
		___mServiceId_2 = value;
		Il2CppCodeGenWriteBarrier((&___mServiceId_2), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of GooglePlayGames.BasicApi.Nearby.EndpointDetails
struct EndpointDetails_t3891698496_marshaled_pinvoke
{
	char* ___mEndpointId_0;
	char* ___mName_1;
	char* ___mServiceId_2;
};
// Native definition for COM marshalling of GooglePlayGames.BasicApi.Nearby.EndpointDetails
struct EndpointDetails_t3891698496_marshaled_com
{
	Il2CppChar* ___mEndpointId_0;
	Il2CppChar* ___mName_1;
	Il2CppChar* ___mServiceId_2;
};
#endif // ENDPOINTDETAILS_T3891698496_H
#ifndef BYTE_T1134296376_H
#define BYTE_T1134296376_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Byte
struct  Byte_t1134296376 
{
public:
	// System.Byte System.Byte::m_value
	uint8_t ___m_value_2;

public:
	inline static int32_t get_offset_of_m_value_2() { return static_cast<int32_t>(offsetof(Byte_t1134296376, ___m_value_2)); }
	inline uint8_t get_m_value_2() const { return ___m_value_2; }
	inline uint8_t* get_address_of_m_value_2() { return &___m_value_2; }
	inline void set_m_value_2(uint8_t value)
	{
		___m_value_2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // BYTE_T1134296376_H
#ifndef U24ARRAYTYPEU3D48_T1336283963_H
#define U24ARRAYTYPEU3D48_T1336283963_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <PrivateImplementationDetails>/$ArrayType=48
#pragma pack(push, tp, 1)
struct  U24ArrayTypeU3D48_t1336283963 
{
public:
	union
	{
		struct
		{
		};
		uint8_t U24ArrayTypeU3D48_t1336283963__padding[48];
	};

public:
};
#pragma pack(pop, tp)

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // U24ARRAYTYPEU3D48_T1336283963_H
#ifndef INT64_T3736567304_H
#define INT64_T3736567304_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Int64
struct  Int64_t3736567304 
{
public:
	// System.Int64 System.Int64::m_value
	int64_t ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Int64_t3736567304, ___m_value_0)); }
	inline int64_t get_m_value_0() const { return ___m_value_0; }
	inline int64_t* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(int64_t value)
	{
		___m_value_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // INT64_T3736567304_H
#ifndef NEARBYCONNECTIONCONFIGURATION_T2019425596_H
#define NEARBYCONNECTIONCONFIGURATION_T2019425596_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// GooglePlayGames.BasicApi.Nearby.NearbyConnectionConfiguration
struct  NearbyConnectionConfiguration_t2019425596 
{
public:
	// System.Action`1<GooglePlayGames.BasicApi.Nearby.InitializationStatus> GooglePlayGames.BasicApi.Nearby.NearbyConnectionConfiguration::mInitializationCallback
	Action_1_t2609895709 * ___mInitializationCallback_2;
	// System.Int64 GooglePlayGames.BasicApi.Nearby.NearbyConnectionConfiguration::mLocalClientId
	int64_t ___mLocalClientId_3;

public:
	inline static int32_t get_offset_of_mInitializationCallback_2() { return static_cast<int32_t>(offsetof(NearbyConnectionConfiguration_t2019425596, ___mInitializationCallback_2)); }
	inline Action_1_t2609895709 * get_mInitializationCallback_2() const { return ___mInitializationCallback_2; }
	inline Action_1_t2609895709 ** get_address_of_mInitializationCallback_2() { return &___mInitializationCallback_2; }
	inline void set_mInitializationCallback_2(Action_1_t2609895709 * value)
	{
		___mInitializationCallback_2 = value;
		Il2CppCodeGenWriteBarrier((&___mInitializationCallback_2), value);
	}

	inline static int32_t get_offset_of_mLocalClientId_3() { return static_cast<int32_t>(offsetof(NearbyConnectionConfiguration_t2019425596, ___mLocalClientId_3)); }
	inline int64_t get_mLocalClientId_3() const { return ___mLocalClientId_3; }
	inline int64_t* get_address_of_mLocalClientId_3() { return &___mLocalClientId_3; }
	inline void set_mLocalClientId_3(int64_t value)
	{
		___mLocalClientId_3 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of GooglePlayGames.BasicApi.Nearby.NearbyConnectionConfiguration
struct NearbyConnectionConfiguration_t2019425596_marshaled_pinvoke
{
	Il2CppMethodPointer ___mInitializationCallback_2;
	int64_t ___mLocalClientId_3;
};
// Native definition for COM marshalling of GooglePlayGames.BasicApi.Nearby.NearbyConnectionConfiguration
struct NearbyConnectionConfiguration_t2019425596_marshaled_com
{
	Il2CppMethodPointer ___mInitializationCallback_2;
	int64_t ___mLocalClientId_3;
};
#endif // NEARBYCONNECTIONCONFIGURATION_T2019425596_H
#ifndef SPRITESTATE_T1362986479_H
#define SPRITESTATE_T1362986479_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.UI.SpriteState
struct  SpriteState_t1362986479 
{
public:
	// UnityEngine.Sprite UnityEngine.UI.SpriteState::m_HighlightedSprite
	Sprite_t280657092 * ___m_HighlightedSprite_0;
	// UnityEngine.Sprite UnityEngine.UI.SpriteState::m_PressedSprite
	Sprite_t280657092 * ___m_PressedSprite_1;
	// UnityEngine.Sprite UnityEngine.UI.SpriteState::m_DisabledSprite
	Sprite_t280657092 * ___m_DisabledSprite_2;

public:
	inline static int32_t get_offset_of_m_HighlightedSprite_0() { return static_cast<int32_t>(offsetof(SpriteState_t1362986479, ___m_HighlightedSprite_0)); }
	inline Sprite_t280657092 * get_m_HighlightedSprite_0() const { return ___m_HighlightedSprite_0; }
	inline Sprite_t280657092 ** get_address_of_m_HighlightedSprite_0() { return &___m_HighlightedSprite_0; }
	inline void set_m_HighlightedSprite_0(Sprite_t280657092 * value)
	{
		___m_HighlightedSprite_0 = value;
		Il2CppCodeGenWriteBarrier((&___m_HighlightedSprite_0), value);
	}

	inline static int32_t get_offset_of_m_PressedSprite_1() { return static_cast<int32_t>(offsetof(SpriteState_t1362986479, ___m_PressedSprite_1)); }
	inline Sprite_t280657092 * get_m_PressedSprite_1() const { return ___m_PressedSprite_1; }
	inline Sprite_t280657092 ** get_address_of_m_PressedSprite_1() { return &___m_PressedSprite_1; }
	inline void set_m_PressedSprite_1(Sprite_t280657092 * value)
	{
		___m_PressedSprite_1 = value;
		Il2CppCodeGenWriteBarrier((&___m_PressedSprite_1), value);
	}

	inline static int32_t get_offset_of_m_DisabledSprite_2() { return static_cast<int32_t>(offsetof(SpriteState_t1362986479, ___m_DisabledSprite_2)); }
	inline Sprite_t280657092 * get_m_DisabledSprite_2() const { return ___m_DisabledSprite_2; }
	inline Sprite_t280657092 ** get_address_of_m_DisabledSprite_2() { return &___m_DisabledSprite_2; }
	inline void set_m_DisabledSprite_2(Sprite_t280657092 * value)
	{
		___m_DisabledSprite_2 = value;
		Il2CppCodeGenWriteBarrier((&___m_DisabledSprite_2), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of UnityEngine.UI.SpriteState
struct SpriteState_t1362986479_marshaled_pinvoke
{
	Sprite_t280657092 * ___m_HighlightedSprite_0;
	Sprite_t280657092 * ___m_PressedSprite_1;
	Sprite_t280657092 * ___m_DisabledSprite_2;
};
// Native definition for COM marshalling of UnityEngine.UI.SpriteState
struct SpriteState_t1362986479_marshaled_com
{
	Sprite_t280657092 * ___m_HighlightedSprite_0;
	Sprite_t280657092 * ___m_PressedSprite_1;
	Sprite_t280657092 * ___m_DisabledSprite_2;
};
#endif // SPRITESTATE_T1362986479_H
#ifndef DRIVENRECTTRANSFORMTRACKER_T2562230146_H
#define DRIVENRECTTRANSFORMTRACKER_T2562230146_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.DrivenRectTransformTracker
struct  DrivenRectTransformTracker_t2562230146 
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DRIVENRECTTRANSFORMTRACKER_T2562230146_H
#ifndef INTPTR_T_H
#define INTPTR_T_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.IntPtr
struct  IntPtr_t 
{
public:
	// System.Void* System.IntPtr::m_value
	void* ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(IntPtr_t, ___m_value_0)); }
	inline void* get_m_value_0() const { return ___m_value_0; }
	inline void** get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(void* value)
	{
		___m_value_0 = value;
	}
};

struct IntPtr_t_StaticFields
{
public:
	// System.IntPtr System.IntPtr::Zero
	intptr_t ___Zero_1;

public:
	inline static int32_t get_offset_of_Zero_1() { return static_cast<int32_t>(offsetof(IntPtr_t_StaticFields, ___Zero_1)); }
	inline intptr_t get_Zero_1() const { return ___Zero_1; }
	inline intptr_t* get_address_of_Zero_1() { return &___Zero_1; }
	inline void set_Zero_1(intptr_t value)
	{
		___Zero_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // INTPTR_T_H
#ifndef DOUBLE_T594665363_H
#define DOUBLE_T594665363_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Double
struct  Double_t594665363 
{
public:
	// System.Double System.Double::m_value
	double ___m_value_13;

public:
	inline static int32_t get_offset_of_m_value_13() { return static_cast<int32_t>(offsetof(Double_t594665363, ___m_value_13)); }
	inline double get_m_value_13() const { return ___m_value_13; }
	inline double* get_address_of_m_value_13() { return &___m_value_13; }
	inline void set_m_value_13(double value)
	{
		___m_value_13 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DOUBLE_T594665363_H
#ifndef VECTOR2_T2156229523_H
#define VECTOR2_T2156229523_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Vector2
struct  Vector2_t2156229523 
{
public:
	// System.Single UnityEngine.Vector2::x
	float ___x_0;
	// System.Single UnityEngine.Vector2::y
	float ___y_1;

public:
	inline static int32_t get_offset_of_x_0() { return static_cast<int32_t>(offsetof(Vector2_t2156229523, ___x_0)); }
	inline float get_x_0() const { return ___x_0; }
	inline float* get_address_of_x_0() { return &___x_0; }
	inline void set_x_0(float value)
	{
		___x_0 = value;
	}

	inline static int32_t get_offset_of_y_1() { return static_cast<int32_t>(offsetof(Vector2_t2156229523, ___y_1)); }
	inline float get_y_1() const { return ___y_1; }
	inline float* get_address_of_y_1() { return &___y_1; }
	inline void set_y_1(float value)
	{
		___y_1 = value;
	}
};

struct Vector2_t2156229523_StaticFields
{
public:
	// UnityEngine.Vector2 UnityEngine.Vector2::zeroVector
	Vector2_t2156229523  ___zeroVector_2;
	// UnityEngine.Vector2 UnityEngine.Vector2::oneVector
	Vector2_t2156229523  ___oneVector_3;
	// UnityEngine.Vector2 UnityEngine.Vector2::upVector
	Vector2_t2156229523  ___upVector_4;
	// UnityEngine.Vector2 UnityEngine.Vector2::downVector
	Vector2_t2156229523  ___downVector_5;
	// UnityEngine.Vector2 UnityEngine.Vector2::leftVector
	Vector2_t2156229523  ___leftVector_6;
	// UnityEngine.Vector2 UnityEngine.Vector2::rightVector
	Vector2_t2156229523  ___rightVector_7;
	// UnityEngine.Vector2 UnityEngine.Vector2::positiveInfinityVector
	Vector2_t2156229523  ___positiveInfinityVector_8;
	// UnityEngine.Vector2 UnityEngine.Vector2::negativeInfinityVector
	Vector2_t2156229523  ___negativeInfinityVector_9;

public:
	inline static int32_t get_offset_of_zeroVector_2() { return static_cast<int32_t>(offsetof(Vector2_t2156229523_StaticFields, ___zeroVector_2)); }
	inline Vector2_t2156229523  get_zeroVector_2() const { return ___zeroVector_2; }
	inline Vector2_t2156229523 * get_address_of_zeroVector_2() { return &___zeroVector_2; }
	inline void set_zeroVector_2(Vector2_t2156229523  value)
	{
		___zeroVector_2 = value;
	}

	inline static int32_t get_offset_of_oneVector_3() { return static_cast<int32_t>(offsetof(Vector2_t2156229523_StaticFields, ___oneVector_3)); }
	inline Vector2_t2156229523  get_oneVector_3() const { return ___oneVector_3; }
	inline Vector2_t2156229523 * get_address_of_oneVector_3() { return &___oneVector_3; }
	inline void set_oneVector_3(Vector2_t2156229523  value)
	{
		___oneVector_3 = value;
	}

	inline static int32_t get_offset_of_upVector_4() { return static_cast<int32_t>(offsetof(Vector2_t2156229523_StaticFields, ___upVector_4)); }
	inline Vector2_t2156229523  get_upVector_4() const { return ___upVector_4; }
	inline Vector2_t2156229523 * get_address_of_upVector_4() { return &___upVector_4; }
	inline void set_upVector_4(Vector2_t2156229523  value)
	{
		___upVector_4 = value;
	}

	inline static int32_t get_offset_of_downVector_5() { return static_cast<int32_t>(offsetof(Vector2_t2156229523_StaticFields, ___downVector_5)); }
	inline Vector2_t2156229523  get_downVector_5() const { return ___downVector_5; }
	inline Vector2_t2156229523 * get_address_of_downVector_5() { return &___downVector_5; }
	inline void set_downVector_5(Vector2_t2156229523  value)
	{
		___downVector_5 = value;
	}

	inline static int32_t get_offset_of_leftVector_6() { return static_cast<int32_t>(offsetof(Vector2_t2156229523_StaticFields, ___leftVector_6)); }
	inline Vector2_t2156229523  get_leftVector_6() const { return ___leftVector_6; }
	inline Vector2_t2156229523 * get_address_of_leftVector_6() { return &___leftVector_6; }
	inline void set_leftVector_6(Vector2_t2156229523  value)
	{
		___leftVector_6 = value;
	}

	inline static int32_t get_offset_of_rightVector_7() { return static_cast<int32_t>(offsetof(Vector2_t2156229523_StaticFields, ___rightVector_7)); }
	inline Vector2_t2156229523  get_rightVector_7() const { return ___rightVector_7; }
	inline Vector2_t2156229523 * get_address_of_rightVector_7() { return &___rightVector_7; }
	inline void set_rightVector_7(Vector2_t2156229523  value)
	{
		___rightVector_7 = value;
	}

	inline static int32_t get_offset_of_positiveInfinityVector_8() { return static_cast<int32_t>(offsetof(Vector2_t2156229523_StaticFields, ___positiveInfinityVector_8)); }
	inline Vector2_t2156229523  get_positiveInfinityVector_8() const { return ___positiveInfinityVector_8; }
	inline Vector2_t2156229523 * get_address_of_positiveInfinityVector_8() { return &___positiveInfinityVector_8; }
	inline void set_positiveInfinityVector_8(Vector2_t2156229523  value)
	{
		___positiveInfinityVector_8 = value;
	}

	inline static int32_t get_offset_of_negativeInfinityVector_9() { return static_cast<int32_t>(offsetof(Vector2_t2156229523_StaticFields, ___negativeInfinityVector_9)); }
	inline Vector2_t2156229523  get_negativeInfinityVector_9() const { return ___negativeInfinityVector_9; }
	inline Vector2_t2156229523 * get_address_of_negativeInfinityVector_9() { return &___negativeInfinityVector_9; }
	inline void set_negativeInfinityVector_9(Vector2_t2156229523  value)
	{
		___negativeInfinityVector_9 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // VECTOR2_T2156229523_H
#ifndef COLOR_T2555686324_H
#define COLOR_T2555686324_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Color
struct  Color_t2555686324 
{
public:
	// System.Single UnityEngine.Color::r
	float ___r_0;
	// System.Single UnityEngine.Color::g
	float ___g_1;
	// System.Single UnityEngine.Color::b
	float ___b_2;
	// System.Single UnityEngine.Color::a
	float ___a_3;

public:
	inline static int32_t get_offset_of_r_0() { return static_cast<int32_t>(offsetof(Color_t2555686324, ___r_0)); }
	inline float get_r_0() const { return ___r_0; }
	inline float* get_address_of_r_0() { return &___r_0; }
	inline void set_r_0(float value)
	{
		___r_0 = value;
	}

	inline static int32_t get_offset_of_g_1() { return static_cast<int32_t>(offsetof(Color_t2555686324, ___g_1)); }
	inline float get_g_1() const { return ___g_1; }
	inline float* get_address_of_g_1() { return &___g_1; }
	inline void set_g_1(float value)
	{
		___g_1 = value;
	}

	inline static int32_t get_offset_of_b_2() { return static_cast<int32_t>(offsetof(Color_t2555686324, ___b_2)); }
	inline float get_b_2() const { return ___b_2; }
	inline float* get_address_of_b_2() { return &___b_2; }
	inline void set_b_2(float value)
	{
		___b_2 = value;
	}

	inline static int32_t get_offset_of_a_3() { return static_cast<int32_t>(offsetof(Color_t2555686324, ___a_3)); }
	inline float get_a_3() const { return ___a_3; }
	inline float* get_address_of_a_3() { return &___a_3; }
	inline void set_a_3(float value)
	{
		___a_3 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // COLOR_T2555686324_H
#ifndef VECTOR3_T3722313464_H
#define VECTOR3_T3722313464_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Vector3
struct  Vector3_t3722313464 
{
public:
	// System.Single UnityEngine.Vector3::x
	float ___x_1;
	// System.Single UnityEngine.Vector3::y
	float ___y_2;
	// System.Single UnityEngine.Vector3::z
	float ___z_3;

public:
	inline static int32_t get_offset_of_x_1() { return static_cast<int32_t>(offsetof(Vector3_t3722313464, ___x_1)); }
	inline float get_x_1() const { return ___x_1; }
	inline float* get_address_of_x_1() { return &___x_1; }
	inline void set_x_1(float value)
	{
		___x_1 = value;
	}

	inline static int32_t get_offset_of_y_2() { return static_cast<int32_t>(offsetof(Vector3_t3722313464, ___y_2)); }
	inline float get_y_2() const { return ___y_2; }
	inline float* get_address_of_y_2() { return &___y_2; }
	inline void set_y_2(float value)
	{
		___y_2 = value;
	}

	inline static int32_t get_offset_of_z_3() { return static_cast<int32_t>(offsetof(Vector3_t3722313464, ___z_3)); }
	inline float get_z_3() const { return ___z_3; }
	inline float* get_address_of_z_3() { return &___z_3; }
	inline void set_z_3(float value)
	{
		___z_3 = value;
	}
};

struct Vector3_t3722313464_StaticFields
{
public:
	// UnityEngine.Vector3 UnityEngine.Vector3::zeroVector
	Vector3_t3722313464  ___zeroVector_4;
	// UnityEngine.Vector3 UnityEngine.Vector3::oneVector
	Vector3_t3722313464  ___oneVector_5;
	// UnityEngine.Vector3 UnityEngine.Vector3::upVector
	Vector3_t3722313464  ___upVector_6;
	// UnityEngine.Vector3 UnityEngine.Vector3::downVector
	Vector3_t3722313464  ___downVector_7;
	// UnityEngine.Vector3 UnityEngine.Vector3::leftVector
	Vector3_t3722313464  ___leftVector_8;
	// UnityEngine.Vector3 UnityEngine.Vector3::rightVector
	Vector3_t3722313464  ___rightVector_9;
	// UnityEngine.Vector3 UnityEngine.Vector3::forwardVector
	Vector3_t3722313464  ___forwardVector_10;
	// UnityEngine.Vector3 UnityEngine.Vector3::backVector
	Vector3_t3722313464  ___backVector_11;
	// UnityEngine.Vector3 UnityEngine.Vector3::positiveInfinityVector
	Vector3_t3722313464  ___positiveInfinityVector_12;
	// UnityEngine.Vector3 UnityEngine.Vector3::negativeInfinityVector
	Vector3_t3722313464  ___negativeInfinityVector_13;

public:
	inline static int32_t get_offset_of_zeroVector_4() { return static_cast<int32_t>(offsetof(Vector3_t3722313464_StaticFields, ___zeroVector_4)); }
	inline Vector3_t3722313464  get_zeroVector_4() const { return ___zeroVector_4; }
	inline Vector3_t3722313464 * get_address_of_zeroVector_4() { return &___zeroVector_4; }
	inline void set_zeroVector_4(Vector3_t3722313464  value)
	{
		___zeroVector_4 = value;
	}

	inline static int32_t get_offset_of_oneVector_5() { return static_cast<int32_t>(offsetof(Vector3_t3722313464_StaticFields, ___oneVector_5)); }
	inline Vector3_t3722313464  get_oneVector_5() const { return ___oneVector_5; }
	inline Vector3_t3722313464 * get_address_of_oneVector_5() { return &___oneVector_5; }
	inline void set_oneVector_5(Vector3_t3722313464  value)
	{
		___oneVector_5 = value;
	}

	inline static int32_t get_offset_of_upVector_6() { return static_cast<int32_t>(offsetof(Vector3_t3722313464_StaticFields, ___upVector_6)); }
	inline Vector3_t3722313464  get_upVector_6() const { return ___upVector_6; }
	inline Vector3_t3722313464 * get_address_of_upVector_6() { return &___upVector_6; }
	inline void set_upVector_6(Vector3_t3722313464  value)
	{
		___upVector_6 = value;
	}

	inline static int32_t get_offset_of_downVector_7() { return static_cast<int32_t>(offsetof(Vector3_t3722313464_StaticFields, ___downVector_7)); }
	inline Vector3_t3722313464  get_downVector_7() const { return ___downVector_7; }
	inline Vector3_t3722313464 * get_address_of_downVector_7() { return &___downVector_7; }
	inline void set_downVector_7(Vector3_t3722313464  value)
	{
		___downVector_7 = value;
	}

	inline static int32_t get_offset_of_leftVector_8() { return static_cast<int32_t>(offsetof(Vector3_t3722313464_StaticFields, ___leftVector_8)); }
	inline Vector3_t3722313464  get_leftVector_8() const { return ___leftVector_8; }
	inline Vector3_t3722313464 * get_address_of_leftVector_8() { return &___leftVector_8; }
	inline void set_leftVector_8(Vector3_t3722313464  value)
	{
		___leftVector_8 = value;
	}

	inline static int32_t get_offset_of_rightVector_9() { return static_cast<int32_t>(offsetof(Vector3_t3722313464_StaticFields, ___rightVector_9)); }
	inline Vector3_t3722313464  get_rightVector_9() const { return ___rightVector_9; }
	inline Vector3_t3722313464 * get_address_of_rightVector_9() { return &___rightVector_9; }
	inline void set_rightVector_9(Vector3_t3722313464  value)
	{
		___rightVector_9 = value;
	}

	inline static int32_t get_offset_of_forwardVector_10() { return static_cast<int32_t>(offsetof(Vector3_t3722313464_StaticFields, ___forwardVector_10)); }
	inline Vector3_t3722313464  get_forwardVector_10() const { return ___forwardVector_10; }
	inline Vector3_t3722313464 * get_address_of_forwardVector_10() { return &___forwardVector_10; }
	inline void set_forwardVector_10(Vector3_t3722313464  value)
	{
		___forwardVector_10 = value;
	}

	inline static int32_t get_offset_of_backVector_11() { return static_cast<int32_t>(offsetof(Vector3_t3722313464_StaticFields, ___backVector_11)); }
	inline Vector3_t3722313464  get_backVector_11() const { return ___backVector_11; }
	inline Vector3_t3722313464 * get_address_of_backVector_11() { return &___backVector_11; }
	inline void set_backVector_11(Vector3_t3722313464  value)
	{
		___backVector_11 = value;
	}

	inline static int32_t get_offset_of_positiveInfinityVector_12() { return static_cast<int32_t>(offsetof(Vector3_t3722313464_StaticFields, ___positiveInfinityVector_12)); }
	inline Vector3_t3722313464  get_positiveInfinityVector_12() const { return ___positiveInfinityVector_12; }
	inline Vector3_t3722313464 * get_address_of_positiveInfinityVector_12() { return &___positiveInfinityVector_12; }
	inline void set_positiveInfinityVector_12(Vector3_t3722313464  value)
	{
		___positiveInfinityVector_12 = value;
	}

	inline static int32_t get_offset_of_negativeInfinityVector_13() { return static_cast<int32_t>(offsetof(Vector3_t3722313464_StaticFields, ___negativeInfinityVector_13)); }
	inline Vector3_t3722313464  get_negativeInfinityVector_13() const { return ___negativeInfinityVector_13; }
	inline Vector3_t3722313464 * get_address_of_negativeInfinityVector_13() { return &___negativeInfinityVector_13; }
	inline void set_negativeInfinityVector_13(Vector3_t3722313464  value)
	{
		___negativeInfinityVector_13 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // VECTOR3_T3722313464_H
#ifndef UINT32_T2560061978_H
#define UINT32_T2560061978_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.UInt32
struct  UInt32_t2560061978 
{
public:
	// System.UInt32 System.UInt32::m_value
	uint32_t ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(UInt32_t2560061978, ___m_value_0)); }
	inline uint32_t get_m_value_0() const { return ___m_value_0; }
	inline uint32_t* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(uint32_t value)
	{
		___m_value_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // UINT32_T2560061978_H
#ifndef RECT_T2360479859_H
#define RECT_T2360479859_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Rect
struct  Rect_t2360479859 
{
public:
	// System.Single UnityEngine.Rect::m_XMin
	float ___m_XMin_0;
	// System.Single UnityEngine.Rect::m_YMin
	float ___m_YMin_1;
	// System.Single UnityEngine.Rect::m_Width
	float ___m_Width_2;
	// System.Single UnityEngine.Rect::m_Height
	float ___m_Height_3;

public:
	inline static int32_t get_offset_of_m_XMin_0() { return static_cast<int32_t>(offsetof(Rect_t2360479859, ___m_XMin_0)); }
	inline float get_m_XMin_0() const { return ___m_XMin_0; }
	inline float* get_address_of_m_XMin_0() { return &___m_XMin_0; }
	inline void set_m_XMin_0(float value)
	{
		___m_XMin_0 = value;
	}

	inline static int32_t get_offset_of_m_YMin_1() { return static_cast<int32_t>(offsetof(Rect_t2360479859, ___m_YMin_1)); }
	inline float get_m_YMin_1() const { return ___m_YMin_1; }
	inline float* get_address_of_m_YMin_1() { return &___m_YMin_1; }
	inline void set_m_YMin_1(float value)
	{
		___m_YMin_1 = value;
	}

	inline static int32_t get_offset_of_m_Width_2() { return static_cast<int32_t>(offsetof(Rect_t2360479859, ___m_Width_2)); }
	inline float get_m_Width_2() const { return ___m_Width_2; }
	inline float* get_address_of_m_Width_2() { return &___m_Width_2; }
	inline void set_m_Width_2(float value)
	{
		___m_Width_2 = value;
	}

	inline static int32_t get_offset_of_m_Height_3() { return static_cast<int32_t>(offsetof(Rect_t2360479859, ___m_Height_3)); }
	inline float get_m_Height_3() const { return ___m_Height_3; }
	inline float* get_address_of_m_Height_3() { return &___m_Height_3; }
	inline void set_m_Height_3(float value)
	{
		___m_Height_3 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RECT_T2360479859_H
#ifndef TIMESPAN_T881159249_H
#define TIMESPAN_T881159249_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.TimeSpan
struct  TimeSpan_t881159249 
{
public:
	// System.Int64 System.TimeSpan::_ticks
	int64_t ____ticks_3;

public:
	inline static int32_t get_offset_of__ticks_3() { return static_cast<int32_t>(offsetof(TimeSpan_t881159249, ____ticks_3)); }
	inline int64_t get__ticks_3() const { return ____ticks_3; }
	inline int64_t* get_address_of__ticks_3() { return &____ticks_3; }
	inline void set__ticks_3(int64_t value)
	{
		____ticks_3 = value;
	}
};

struct TimeSpan_t881159249_StaticFields
{
public:
	// System.TimeSpan System.TimeSpan::MaxValue
	TimeSpan_t881159249  ___MaxValue_0;
	// System.TimeSpan System.TimeSpan::MinValue
	TimeSpan_t881159249  ___MinValue_1;
	// System.TimeSpan System.TimeSpan::Zero
	TimeSpan_t881159249  ___Zero_2;

public:
	inline static int32_t get_offset_of_MaxValue_0() { return static_cast<int32_t>(offsetof(TimeSpan_t881159249_StaticFields, ___MaxValue_0)); }
	inline TimeSpan_t881159249  get_MaxValue_0() const { return ___MaxValue_0; }
	inline TimeSpan_t881159249 * get_address_of_MaxValue_0() { return &___MaxValue_0; }
	inline void set_MaxValue_0(TimeSpan_t881159249  value)
	{
		___MaxValue_0 = value;
	}

	inline static int32_t get_offset_of_MinValue_1() { return static_cast<int32_t>(offsetof(TimeSpan_t881159249_StaticFields, ___MinValue_1)); }
	inline TimeSpan_t881159249  get_MinValue_1() const { return ___MinValue_1; }
	inline TimeSpan_t881159249 * get_address_of_MinValue_1() { return &___MinValue_1; }
	inline void set_MinValue_1(TimeSpan_t881159249  value)
	{
		___MinValue_1 = value;
	}

	inline static int32_t get_offset_of_Zero_2() { return static_cast<int32_t>(offsetof(TimeSpan_t881159249_StaticFields, ___Zero_2)); }
	inline TimeSpan_t881159249  get_Zero_2() const { return ___Zero_2; }
	inline TimeSpan_t881159249 * get_address_of_Zero_2() { return &___Zero_2; }
	inline void set_Zero_2(TimeSpan_t881159249  value)
	{
		___Zero_2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TIMESPAN_T881159249_H
#ifndef STRINGREADER_T3465604688_H
#define STRINGREADER_T3465604688_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.IO.StringReader
struct  StringReader_t3465604688  : public TextReader_t283511965
{
public:
	// System.String System.IO.StringReader::source
	String_t* ___source_1;
	// System.Int32 System.IO.StringReader::nextChar
	int32_t ___nextChar_2;
	// System.Int32 System.IO.StringReader::sourceLength
	int32_t ___sourceLength_3;

public:
	inline static int32_t get_offset_of_source_1() { return static_cast<int32_t>(offsetof(StringReader_t3465604688, ___source_1)); }
	inline String_t* get_source_1() const { return ___source_1; }
	inline String_t** get_address_of_source_1() { return &___source_1; }
	inline void set_source_1(String_t* value)
	{
		___source_1 = value;
		Il2CppCodeGenWriteBarrier((&___source_1), value);
	}

	inline static int32_t get_offset_of_nextChar_2() { return static_cast<int32_t>(offsetof(StringReader_t3465604688, ___nextChar_2)); }
	inline int32_t get_nextChar_2() const { return ___nextChar_2; }
	inline int32_t* get_address_of_nextChar_2() { return &___nextChar_2; }
	inline void set_nextChar_2(int32_t value)
	{
		___nextChar_2 = value;
	}

	inline static int32_t get_offset_of_sourceLength_3() { return static_cast<int32_t>(offsetof(StringReader_t3465604688, ___sourceLength_3)); }
	inline int32_t get_sourceLength_3() const { return ___sourceLength_3; }
	inline int32_t* get_address_of_sourceLength_3() { return &___sourceLength_3; }
	inline void set_sourceLength_3(int32_t value)
	{
		___sourceLength_3 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // STRINGREADER_T3465604688_H
#ifndef UNITYEVENT_T2581268647_H
#define UNITYEVENT_T2581268647_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Events.UnityEvent
struct  UnityEvent_t2581268647  : public UnityEventBase_t3960448221
{
public:
	// System.Object[] UnityEngine.Events.UnityEvent::m_InvokeArray
	ObjectU5BU5D_t2843939325* ___m_InvokeArray_4;

public:
	inline static int32_t get_offset_of_m_InvokeArray_4() { return static_cast<int32_t>(offsetof(UnityEvent_t2581268647, ___m_InvokeArray_4)); }
	inline ObjectU5BU5D_t2843939325* get_m_InvokeArray_4() const { return ___m_InvokeArray_4; }
	inline ObjectU5BU5D_t2843939325** get_address_of_m_InvokeArray_4() { return &___m_InvokeArray_4; }
	inline void set_m_InvokeArray_4(ObjectU5BU5D_t2843939325* value)
	{
		___m_InvokeArray_4 = value;
		Il2CppCodeGenWriteBarrier((&___m_InvokeArray_4), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // UNITYEVENT_T2581268647_H
#ifndef CHAR_T3634460470_H
#define CHAR_T3634460470_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Char
struct  Char_t3634460470 
{
public:
	// System.Char System.Char::m_value
	Il2CppChar ___m_value_2;

public:
	inline static int32_t get_offset_of_m_value_2() { return static_cast<int32_t>(offsetof(Char_t3634460470, ___m_value_2)); }
	inline Il2CppChar get_m_value_2() const { return ___m_value_2; }
	inline Il2CppChar* get_address_of_m_value_2() { return &___m_value_2; }
	inline void set_m_value_2(Il2CppChar value)
	{
		___m_value_2 = value;
	}
};

struct Char_t3634460470_StaticFields
{
public:
	// System.Byte* System.Char::category_data
	uint8_t* ___category_data_3;
	// System.Byte* System.Char::numeric_data
	uint8_t* ___numeric_data_4;
	// System.Double* System.Char::numeric_data_values
	double* ___numeric_data_values_5;
	// System.UInt16* System.Char::to_lower_data_low
	uint16_t* ___to_lower_data_low_6;
	// System.UInt16* System.Char::to_lower_data_high
	uint16_t* ___to_lower_data_high_7;
	// System.UInt16* System.Char::to_upper_data_low
	uint16_t* ___to_upper_data_low_8;
	// System.UInt16* System.Char::to_upper_data_high
	uint16_t* ___to_upper_data_high_9;

public:
	inline static int32_t get_offset_of_category_data_3() { return static_cast<int32_t>(offsetof(Char_t3634460470_StaticFields, ___category_data_3)); }
	inline uint8_t* get_category_data_3() const { return ___category_data_3; }
	inline uint8_t** get_address_of_category_data_3() { return &___category_data_3; }
	inline void set_category_data_3(uint8_t* value)
	{
		___category_data_3 = value;
	}

	inline static int32_t get_offset_of_numeric_data_4() { return static_cast<int32_t>(offsetof(Char_t3634460470_StaticFields, ___numeric_data_4)); }
	inline uint8_t* get_numeric_data_4() const { return ___numeric_data_4; }
	inline uint8_t** get_address_of_numeric_data_4() { return &___numeric_data_4; }
	inline void set_numeric_data_4(uint8_t* value)
	{
		___numeric_data_4 = value;
	}

	inline static int32_t get_offset_of_numeric_data_values_5() { return static_cast<int32_t>(offsetof(Char_t3634460470_StaticFields, ___numeric_data_values_5)); }
	inline double* get_numeric_data_values_5() const { return ___numeric_data_values_5; }
	inline double** get_address_of_numeric_data_values_5() { return &___numeric_data_values_5; }
	inline void set_numeric_data_values_5(double* value)
	{
		___numeric_data_values_5 = value;
	}

	inline static int32_t get_offset_of_to_lower_data_low_6() { return static_cast<int32_t>(offsetof(Char_t3634460470_StaticFields, ___to_lower_data_low_6)); }
	inline uint16_t* get_to_lower_data_low_6() const { return ___to_lower_data_low_6; }
	inline uint16_t** get_address_of_to_lower_data_low_6() { return &___to_lower_data_low_6; }
	inline void set_to_lower_data_low_6(uint16_t* value)
	{
		___to_lower_data_low_6 = value;
	}

	inline static int32_t get_offset_of_to_lower_data_high_7() { return static_cast<int32_t>(offsetof(Char_t3634460470_StaticFields, ___to_lower_data_high_7)); }
	inline uint16_t* get_to_lower_data_high_7() const { return ___to_lower_data_high_7; }
	inline uint16_t** get_address_of_to_lower_data_high_7() { return &___to_lower_data_high_7; }
	inline void set_to_lower_data_high_7(uint16_t* value)
	{
		___to_lower_data_high_7 = value;
	}

	inline static int32_t get_offset_of_to_upper_data_low_8() { return static_cast<int32_t>(offsetof(Char_t3634460470_StaticFields, ___to_upper_data_low_8)); }
	inline uint16_t* get_to_upper_data_low_8() const { return ___to_upper_data_low_8; }
	inline uint16_t** get_address_of_to_upper_data_low_8() { return &___to_upper_data_low_8; }
	inline void set_to_upper_data_low_8(uint16_t* value)
	{
		___to_upper_data_low_8 = value;
	}

	inline static int32_t get_offset_of_to_upper_data_high_9() { return static_cast<int32_t>(offsetof(Char_t3634460470_StaticFields, ___to_upper_data_high_9)); }
	inline uint16_t* get_to_upper_data_high_9() const { return ___to_upper_data_high_9; }
	inline uint16_t** get_address_of_to_upper_data_high_9() { return &___to_upper_data_high_9; }
	inline void set_to_upper_data_high_9(uint16_t* value)
	{
		___to_upper_data_high_9 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CHAR_T3634460470_H
#ifndef BOOLEAN_T97287965_H
#define BOOLEAN_T97287965_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Boolean
struct  Boolean_t97287965 
{
public:
	// System.Boolean System.Boolean::m_value
	bool ___m_value_2;

public:
	inline static int32_t get_offset_of_m_value_2() { return static_cast<int32_t>(offsetof(Boolean_t97287965, ___m_value_2)); }
	inline bool get_m_value_2() const { return ___m_value_2; }
	inline bool* get_address_of_m_value_2() { return &___m_value_2; }
	inline void set_m_value_2(bool value)
	{
		___m_value_2 = value;
	}
};

struct Boolean_t97287965_StaticFields
{
public:
	// System.String System.Boolean::FalseString
	String_t* ___FalseString_0;
	// System.String System.Boolean::TrueString
	String_t* ___TrueString_1;

public:
	inline static int32_t get_offset_of_FalseString_0() { return static_cast<int32_t>(offsetof(Boolean_t97287965_StaticFields, ___FalseString_0)); }
	inline String_t* get_FalseString_0() const { return ___FalseString_0; }
	inline String_t** get_address_of_FalseString_0() { return &___FalseString_0; }
	inline void set_FalseString_0(String_t* value)
	{
		___FalseString_0 = value;
		Il2CppCodeGenWriteBarrier((&___FalseString_0), value);
	}

	inline static int32_t get_offset_of_TrueString_1() { return static_cast<int32_t>(offsetof(Boolean_t97287965_StaticFields, ___TrueString_1)); }
	inline String_t* get_TrueString_1() const { return ___TrueString_1; }
	inline String_t** get_address_of_TrueString_1() { return &___TrueString_1; }
	inline void set_TrueString_1(String_t* value)
	{
		___TrueString_1 = value;
		Il2CppCodeGenWriteBarrier((&___TrueString_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // BOOLEAN_T97287965_H
#ifndef DELEGATE_T1188392813_H
#define DELEGATE_T1188392813_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Delegate
struct  Delegate_t1188392813  : public RuntimeObject
{
public:
	// System.IntPtr System.Delegate::method_ptr
	Il2CppMethodPointer ___method_ptr_0;
	// System.IntPtr System.Delegate::invoke_impl
	intptr_t ___invoke_impl_1;
	// System.Object System.Delegate::m_target
	RuntimeObject * ___m_target_2;
	// System.IntPtr System.Delegate::method
	intptr_t ___method_3;
	// System.IntPtr System.Delegate::delegate_trampoline
	intptr_t ___delegate_trampoline_4;
	// System.IntPtr System.Delegate::method_code
	intptr_t ___method_code_5;
	// System.Reflection.MethodInfo System.Delegate::method_info
	MethodInfo_t * ___method_info_6;
	// System.Reflection.MethodInfo System.Delegate::original_method_info
	MethodInfo_t * ___original_method_info_7;
	// System.DelegateData System.Delegate::data
	DelegateData_t1677132599 * ___data_8;

public:
	inline static int32_t get_offset_of_method_ptr_0() { return static_cast<int32_t>(offsetof(Delegate_t1188392813, ___method_ptr_0)); }
	inline Il2CppMethodPointer get_method_ptr_0() const { return ___method_ptr_0; }
	inline Il2CppMethodPointer* get_address_of_method_ptr_0() { return &___method_ptr_0; }
	inline void set_method_ptr_0(Il2CppMethodPointer value)
	{
		___method_ptr_0 = value;
	}

	inline static int32_t get_offset_of_invoke_impl_1() { return static_cast<int32_t>(offsetof(Delegate_t1188392813, ___invoke_impl_1)); }
	inline intptr_t get_invoke_impl_1() const { return ___invoke_impl_1; }
	inline intptr_t* get_address_of_invoke_impl_1() { return &___invoke_impl_1; }
	inline void set_invoke_impl_1(intptr_t value)
	{
		___invoke_impl_1 = value;
	}

	inline static int32_t get_offset_of_m_target_2() { return static_cast<int32_t>(offsetof(Delegate_t1188392813, ___m_target_2)); }
	inline RuntimeObject * get_m_target_2() const { return ___m_target_2; }
	inline RuntimeObject ** get_address_of_m_target_2() { return &___m_target_2; }
	inline void set_m_target_2(RuntimeObject * value)
	{
		___m_target_2 = value;
		Il2CppCodeGenWriteBarrier((&___m_target_2), value);
	}

	inline static int32_t get_offset_of_method_3() { return static_cast<int32_t>(offsetof(Delegate_t1188392813, ___method_3)); }
	inline intptr_t get_method_3() const { return ___method_3; }
	inline intptr_t* get_address_of_method_3() { return &___method_3; }
	inline void set_method_3(intptr_t value)
	{
		___method_3 = value;
	}

	inline static int32_t get_offset_of_delegate_trampoline_4() { return static_cast<int32_t>(offsetof(Delegate_t1188392813, ___delegate_trampoline_4)); }
	inline intptr_t get_delegate_trampoline_4() const { return ___delegate_trampoline_4; }
	inline intptr_t* get_address_of_delegate_trampoline_4() { return &___delegate_trampoline_4; }
	inline void set_delegate_trampoline_4(intptr_t value)
	{
		___delegate_trampoline_4 = value;
	}

	inline static int32_t get_offset_of_method_code_5() { return static_cast<int32_t>(offsetof(Delegate_t1188392813, ___method_code_5)); }
	inline intptr_t get_method_code_5() const { return ___method_code_5; }
	inline intptr_t* get_address_of_method_code_5() { return &___method_code_5; }
	inline void set_method_code_5(intptr_t value)
	{
		___method_code_5 = value;
	}

	inline static int32_t get_offset_of_method_info_6() { return static_cast<int32_t>(offsetof(Delegate_t1188392813, ___method_info_6)); }
	inline MethodInfo_t * get_method_info_6() const { return ___method_info_6; }
	inline MethodInfo_t ** get_address_of_method_info_6() { return &___method_info_6; }
	inline void set_method_info_6(MethodInfo_t * value)
	{
		___method_info_6 = value;
		Il2CppCodeGenWriteBarrier((&___method_info_6), value);
	}

	inline static int32_t get_offset_of_original_method_info_7() { return static_cast<int32_t>(offsetof(Delegate_t1188392813, ___original_method_info_7)); }
	inline MethodInfo_t * get_original_method_info_7() const { return ___original_method_info_7; }
	inline MethodInfo_t ** get_address_of_original_method_info_7() { return &___original_method_info_7; }
	inline void set_original_method_info_7(MethodInfo_t * value)
	{
		___original_method_info_7 = value;
		Il2CppCodeGenWriteBarrier((&___original_method_info_7), value);
	}

	inline static int32_t get_offset_of_data_8() { return static_cast<int32_t>(offsetof(Delegate_t1188392813, ___data_8)); }
	inline DelegateData_t1677132599 * get_data_8() const { return ___data_8; }
	inline DelegateData_t1677132599 ** get_address_of_data_8() { return &___data_8; }
	inline void set_data_8(DelegateData_t1677132599 * value)
	{
		___data_8 = value;
		Il2CppCodeGenWriteBarrier((&___data_8), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DELEGATE_T1188392813_H
#ifndef INVALIDOPERATIONEXCEPTION_T56020091_H
#define INVALIDOPERATIONEXCEPTION_T56020091_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.InvalidOperationException
struct  InvalidOperationException_t56020091  : public SystemException_t176217640
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // INVALIDOPERATIONEXCEPTION_T56020091_H
#ifndef SAVEDGAMEREQUESTSTATUS_T3745141777_H
#define SAVEDGAMEREQUESTSTATUS_T3745141777_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// GooglePlayGames.BasicApi.SavedGame.SavedGameRequestStatus
struct  SavedGameRequestStatus_t3745141777 
{
public:
	// System.Int32 GooglePlayGames.BasicApi.SavedGame.SavedGameRequestStatus::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(SavedGameRequestStatus_t3745141777, ___value___1)); }
	inline int32_t get_value___1() const { return ___value___1; }
	inline int32_t* get_address_of_value___1() { return &___value___1; }
	inline void set_value___1(int32_t value)
	{
		___value___1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SAVEDGAMEREQUESTSTATUS_T3745141777_H
#ifndef SELECTUISTATUS_T1293076877_H
#define SELECTUISTATUS_T1293076877_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// GooglePlayGames.BasicApi.SavedGame.SelectUIStatus
struct  SelectUIStatus_t1293076877 
{
public:
	// System.Int32 GooglePlayGames.BasicApi.SavedGame.SelectUIStatus::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(SelectUIStatus_t1293076877, ___value___1)); }
	inline int32_t get_value___1() const { return ___value___1; }
	inline int32_t* get_address_of_value___1() { return &___value___1; }
	inline void set_value___1(int32_t value)
	{
		___value___1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SELECTUISTATUS_T1293076877_H
#ifndef UISTATUS_T582920877_H
#define UISTATUS_T582920877_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// GooglePlayGames.BasicApi.UIStatus
struct  UIStatus_t582920877 
{
public:
	// System.Int32 GooglePlayGames.BasicApi.UIStatus::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(UIStatus_t582920877, ___value___1)); }
	inline int32_t get_value___1() const { return ___value___1; }
	inline int32_t* get_address_of_value___1() { return &___value___1; }
	inline void set_value___1(int32_t value)
	{
		___value___1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // UISTATUS_T582920877_H
#ifndef FILLMETHOD_T1167457570_H
#define FILLMETHOD_T1167457570_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.UI.Image/FillMethod
struct  FillMethod_t1167457570 
{
public:
	// System.Int32 UnityEngine.UI.Image/FillMethod::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(FillMethod_t1167457570, ___value___1)); }
	inline int32_t get_value___1() const { return ___value___1; }
	inline int32_t* get_address_of_value___1() { return &___value___1; }
	inline void set_value___1(int32_t value)
	{
		___value___1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // FILLMETHOD_T1167457570_H
#ifndef VIDEOCAPTUREMODE_T1984088482_H
#define VIDEOCAPTUREMODE_T1984088482_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// GooglePlayGames.BasicApi.VideoCaptureMode
struct  VideoCaptureMode_t1984088482 
{
public:
	// System.Int32 GooglePlayGames.BasicApi.VideoCaptureMode::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(VideoCaptureMode_t1984088482, ___value___1)); }
	inline int32_t get_value___1() const { return ___value___1; }
	inline int32_t* get_address_of_value___1() { return &___value___1; }
	inline void set_value___1(int32_t value)
	{
		___value___1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // VIDEOCAPTUREMODE_T1984088482_H
#ifndef VIDEOQUALITYLEVEL_T4283418091_H
#define VIDEOQUALITYLEVEL_T4283418091_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// GooglePlayGames.BasicApi.VideoQualityLevel
struct  VideoQualityLevel_t4283418091 
{
public:
	// System.Int32 GooglePlayGames.BasicApi.VideoQualityLevel::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(VideoQualityLevel_t4283418091, ___value___1)); }
	inline int32_t get_value___1() const { return ___value___1; }
	inline int32_t* get_address_of_value___1() { return &___value___1; }
	inline void set_value___1(int32_t value)
	{
		___value___1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // VIDEOQUALITYLEVEL_T4283418091_H
#ifndef BOUNDS_T2266837910_H
#define BOUNDS_T2266837910_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Bounds
struct  Bounds_t2266837910 
{
public:
	// UnityEngine.Vector3 UnityEngine.Bounds::m_Center
	Vector3_t3722313464  ___m_Center_0;
	// UnityEngine.Vector3 UnityEngine.Bounds::m_Extents
	Vector3_t3722313464  ___m_Extents_1;

public:
	inline static int32_t get_offset_of_m_Center_0() { return static_cast<int32_t>(offsetof(Bounds_t2266837910, ___m_Center_0)); }
	inline Vector3_t3722313464  get_m_Center_0() const { return ___m_Center_0; }
	inline Vector3_t3722313464 * get_address_of_m_Center_0() { return &___m_Center_0; }
	inline void set_m_Center_0(Vector3_t3722313464  value)
	{
		___m_Center_0 = value;
	}

	inline static int32_t get_offset_of_m_Extents_1() { return static_cast<int32_t>(offsetof(Bounds_t2266837910, ___m_Extents_1)); }
	inline Vector3_t3722313464  get_m_Extents_1() const { return ___m_Extents_1; }
	inline Vector3_t3722313464 * get_address_of_m_Extents_1() { return &___m_Extents_1; }
	inline void set_m_Extents_1(Vector3_t3722313464  value)
	{
		___m_Extents_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // BOUNDS_T2266837910_H
#ifndef VIDEOCAPTUREOVERLAYSTATE_T4111180056_H
#define VIDEOCAPTUREOVERLAYSTATE_T4111180056_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// GooglePlayGames.BasicApi.VideoCaptureOverlayState
struct  VideoCaptureOverlayState_t4111180056 
{
public:
	// System.Int32 GooglePlayGames.BasicApi.VideoCaptureOverlayState::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(VideoCaptureOverlayState_t4111180056, ___value___1)); }
	inline int32_t get_value___1() const { return ___value___1; }
	inline int32_t* get_address_of_value___1() { return &___value___1; }
	inline void set_value___1(int32_t value)
	{
		___value___1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // VIDEOCAPTUREOVERLAYSTATE_T4111180056_H
#ifndef TYPE_T1152881528_H
#define TYPE_T1152881528_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.UI.Image/Type
struct  Type_t1152881528 
{
public:
	// System.Int32 UnityEngine.UI.Image/Type::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(Type_t1152881528, ___value___1)); }
	inline int32_t get_value___1() const { return ___value___1; }
	inline int32_t* get_address_of_value___1() { return &___value___1; }
	inline void set_value___1(int32_t value)
	{
		___value___1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TYPE_T1152881528_H
#ifndef BINDINGFLAGS_T2721792723_H
#define BINDINGFLAGS_T2721792723_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Reflection.BindingFlags
struct  BindingFlags_t2721792723 
{
public:
	// System.Int32 System.Reflection.BindingFlags::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(BindingFlags_t2721792723, ___value___1)); }
	inline int32_t get_value___1() const { return ___value___1; }
	inline int32_t* get_address_of_value___1() { return &___value___1; }
	inline void set_value___1(int32_t value)
	{
		___value___1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // BINDINGFLAGS_T2721792723_H
#ifndef COLORBLOCK_T2139031574_H
#define COLORBLOCK_T2139031574_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.UI.ColorBlock
struct  ColorBlock_t2139031574 
{
public:
	// UnityEngine.Color UnityEngine.UI.ColorBlock::m_NormalColor
	Color_t2555686324  ___m_NormalColor_0;
	// UnityEngine.Color UnityEngine.UI.ColorBlock::m_HighlightedColor
	Color_t2555686324  ___m_HighlightedColor_1;
	// UnityEngine.Color UnityEngine.UI.ColorBlock::m_PressedColor
	Color_t2555686324  ___m_PressedColor_2;
	// UnityEngine.Color UnityEngine.UI.ColorBlock::m_DisabledColor
	Color_t2555686324  ___m_DisabledColor_3;
	// System.Single UnityEngine.UI.ColorBlock::m_ColorMultiplier
	float ___m_ColorMultiplier_4;
	// System.Single UnityEngine.UI.ColorBlock::m_FadeDuration
	float ___m_FadeDuration_5;

public:
	inline static int32_t get_offset_of_m_NormalColor_0() { return static_cast<int32_t>(offsetof(ColorBlock_t2139031574, ___m_NormalColor_0)); }
	inline Color_t2555686324  get_m_NormalColor_0() const { return ___m_NormalColor_0; }
	inline Color_t2555686324 * get_address_of_m_NormalColor_0() { return &___m_NormalColor_0; }
	inline void set_m_NormalColor_0(Color_t2555686324  value)
	{
		___m_NormalColor_0 = value;
	}

	inline static int32_t get_offset_of_m_HighlightedColor_1() { return static_cast<int32_t>(offsetof(ColorBlock_t2139031574, ___m_HighlightedColor_1)); }
	inline Color_t2555686324  get_m_HighlightedColor_1() const { return ___m_HighlightedColor_1; }
	inline Color_t2555686324 * get_address_of_m_HighlightedColor_1() { return &___m_HighlightedColor_1; }
	inline void set_m_HighlightedColor_1(Color_t2555686324  value)
	{
		___m_HighlightedColor_1 = value;
	}

	inline static int32_t get_offset_of_m_PressedColor_2() { return static_cast<int32_t>(offsetof(ColorBlock_t2139031574, ___m_PressedColor_2)); }
	inline Color_t2555686324  get_m_PressedColor_2() const { return ___m_PressedColor_2; }
	inline Color_t2555686324 * get_address_of_m_PressedColor_2() { return &___m_PressedColor_2; }
	inline void set_m_PressedColor_2(Color_t2555686324  value)
	{
		___m_PressedColor_2 = value;
	}

	inline static int32_t get_offset_of_m_DisabledColor_3() { return static_cast<int32_t>(offsetof(ColorBlock_t2139031574, ___m_DisabledColor_3)); }
	inline Color_t2555686324  get_m_DisabledColor_3() const { return ___m_DisabledColor_3; }
	inline Color_t2555686324 * get_address_of_m_DisabledColor_3() { return &___m_DisabledColor_3; }
	inline void set_m_DisabledColor_3(Color_t2555686324  value)
	{
		___m_DisabledColor_3 = value;
	}

	inline static int32_t get_offset_of_m_ColorMultiplier_4() { return static_cast<int32_t>(offsetof(ColorBlock_t2139031574, ___m_ColorMultiplier_4)); }
	inline float get_m_ColorMultiplier_4() const { return ___m_ColorMultiplier_4; }
	inline float* get_address_of_m_ColorMultiplier_4() { return &___m_ColorMultiplier_4; }
	inline void set_m_ColorMultiplier_4(float value)
	{
		___m_ColorMultiplier_4 = value;
	}

	inline static int32_t get_offset_of_m_FadeDuration_5() { return static_cast<int32_t>(offsetof(ColorBlock_t2139031574, ___m_FadeDuration_5)); }
	inline float get_m_FadeDuration_5() const { return ___m_FadeDuration_5; }
	inline float* get_address_of_m_FadeDuration_5() { return &___m_FadeDuration_5; }
	inline void set_m_FadeDuration_5(float value)
	{
		___m_FadeDuration_5 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // COLORBLOCK_T2139031574_H
#ifndef SCROLLBARVISIBILITY_T705693775_H
#define SCROLLBARVISIBILITY_T705693775_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.UI.ScrollRect/ScrollbarVisibility
struct  ScrollbarVisibility_t705693775 
{
public:
	// System.Int32 UnityEngine.UI.ScrollRect/ScrollbarVisibility::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(ScrollbarVisibility_t705693775, ___value___1)); }
	inline int32_t get_value___1() const { return ___value___1; }
	inline int32_t* get_address_of_value___1() { return &___value___1; }
	inline void set_value___1(int32_t value)
	{
		___value___1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SCROLLBARVISIBILITY_T705693775_H
#ifndef DATETIMEKIND_T3468814247_H
#define DATETIMEKIND_T3468814247_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.DateTimeKind
struct  DateTimeKind_t3468814247 
{
public:
	// System.Int32 System.DateTimeKind::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(DateTimeKind_t3468814247, ___value___1)); }
	inline int32_t get_value___1() const { return ___value___1; }
	inline int32_t* get_address_of_value___1() { return &___value___1; }
	inline void set_value___1(int32_t value)
	{
		___value___1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DATETIMEKIND_T3468814247_H
#ifndef TRANSITION_T1769908631_H
#define TRANSITION_T1769908631_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.UI.Selectable/Transition
struct  Transition_t1769908631 
{
public:
	// System.Int32 UnityEngine.UI.Selectable/Transition::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(Transition_t1769908631, ___value___1)); }
	inline int32_t get_value___1() const { return ___value___1; }
	inline int32_t* get_address_of_value___1() { return &___value___1; }
	inline void set_value___1(int32_t value)
	{
		___value___1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TRANSITION_T1769908631_H
#ifndef SYSTEMLANGUAGE_T949212163_H
#define SYSTEMLANGUAGE_T949212163_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.SystemLanguage
struct  SystemLanguage_t949212163 
{
public:
	// System.Int32 UnityEngine.SystemLanguage::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(SystemLanguage_t949212163, ___value___1)); }
	inline int32_t get_value___1() const { return ___value___1; }
	inline int32_t* get_address_of_value___1() { return &___value___1; }
	inline void set_value___1(int32_t value)
	{
		___value___1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SYSTEMLANGUAGE_T949212163_H
#ifndef MOVEMENTTYPE_T4072922106_H
#define MOVEMENTTYPE_T4072922106_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.UI.ScrollRect/MovementType
struct  MovementType_t4072922106 
{
public:
	// System.Int32 UnityEngine.UI.ScrollRect/MovementType::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(MovementType_t4072922106, ___value___1)); }
	inline int32_t get_value___1() const { return ___value___1; }
	inline int32_t* get_address_of_value___1() { return &___value___1; }
	inline void set_value___1(int32_t value)
	{
		___value___1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MOVEMENTTYPE_T4072922106_H
#ifndef ARGUMENTEXCEPTION_T132251570_H
#define ARGUMENTEXCEPTION_T132251570_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ArgumentException
struct  ArgumentException_t132251570  : public SystemException_t176217640
{
public:
	// System.String System.ArgumentException::param_name
	String_t* ___param_name_12;

public:
	inline static int32_t get_offset_of_param_name_12() { return static_cast<int32_t>(offsetof(ArgumentException_t132251570, ___param_name_12)); }
	inline String_t* get_param_name_12() const { return ___param_name_12; }
	inline String_t** get_address_of_param_name_12() { return &___param_name_12; }
	inline void set_param_name_12(String_t* value)
	{
		___param_name_12 = value;
		Il2CppCodeGenWriteBarrier((&___param_name_12), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ARGUMENTEXCEPTION_T132251570_H
#ifndef MODE_T1066900953_H
#define MODE_T1066900953_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.UI.Navigation/Mode
struct  Mode_t1066900953 
{
public:
	// System.Int32 UnityEngine.UI.Navigation/Mode::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(Mode_t1066900953, ___value___1)); }
	inline int32_t get_value___1() const { return ___value___1; }
	inline int32_t* get_address_of_value___1() { return &___value___1; }
	inline void set_value___1(int32_t value)
	{
		___value___1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MODE_T1066900953_H
#ifndef NULLABLE_1_T2603721331_H
#define NULLABLE_1_T2603721331_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Nullable`1<System.TimeSpan>
struct  Nullable_1_t2603721331 
{
public:
	// T System.Nullable`1::value
	TimeSpan_t881159249  ___value_0;
	// System.Boolean System.Nullable`1::has_value
	bool ___has_value_1;

public:
	inline static int32_t get_offset_of_value_0() { return static_cast<int32_t>(offsetof(Nullable_1_t2603721331, ___value_0)); }
	inline TimeSpan_t881159249  get_value_0() const { return ___value_0; }
	inline TimeSpan_t881159249 * get_address_of_value_0() { return &___value_0; }
	inline void set_value_0(TimeSpan_t881159249  value)
	{
		___value_0 = value;
	}

	inline static int32_t get_offset_of_has_value_1() { return static_cast<int32_t>(offsetof(Nullable_1_t2603721331, ___has_value_1)); }
	inline bool get_has_value_1() const { return ___has_value_1; }
	inline bool* get_address_of_has_value_1() { return &___has_value_1; }
	inline void set_has_value_1(bool value)
	{
		___has_value_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // NULLABLE_1_T2603721331_H
#ifndef U3CPRIVATEIMPLEMENTATIONDETAILSU3E_T3057255367_H
#define U3CPRIVATEIMPLEMENTATIONDETAILSU3E_T3057255367_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <PrivateImplementationDetails>
struct  U3CPrivateImplementationDetailsU3E_t3057255367  : public RuntimeObject
{
public:

public:
};

struct U3CPrivateImplementationDetailsU3E_t3057255367_StaticFields
{
public:
	// <PrivateImplementationDetails>/$ArrayType=48 <PrivateImplementationDetails>::$field-231C96DC27FE3072E9C6324B0CD546829BDF4785
	U24ArrayTypeU3D48_t1336283963  ___U24fieldU2D231C96DC27FE3072E9C6324B0CD546829BDF4785_0;

public:
	inline static int32_t get_offset_of_U24fieldU2D231C96DC27FE3072E9C6324B0CD546829BDF4785_0() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t3057255367_StaticFields, ___U24fieldU2D231C96DC27FE3072E9C6324B0CD546829BDF4785_0)); }
	inline U24ArrayTypeU3D48_t1336283963  get_U24fieldU2D231C96DC27FE3072E9C6324B0CD546829BDF4785_0() const { return ___U24fieldU2D231C96DC27FE3072E9C6324B0CD546829BDF4785_0; }
	inline U24ArrayTypeU3D48_t1336283963 * get_address_of_U24fieldU2D231C96DC27FE3072E9C6324B0CD546829BDF4785_0() { return &___U24fieldU2D231C96DC27FE3072E9C6324B0CD546829BDF4785_0; }
	inline void set_U24fieldU2D231C96DC27FE3072E9C6324B0CD546829BDF4785_0(U24ArrayTypeU3D48_t1336283963  value)
	{
		___U24fieldU2D231C96DC27FE3072E9C6324B0CD546829BDF4785_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // U3CPRIVATEIMPLEMENTATIONDETAILSU3E_T3057255367_H
#ifndef OBJECT_T631007953_H
#define OBJECT_T631007953_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Object
struct  Object_t631007953  : public RuntimeObject
{
public:
	// System.IntPtr UnityEngine.Object::m_CachedPtr
	intptr_t ___m_CachedPtr_0;

public:
	inline static int32_t get_offset_of_m_CachedPtr_0() { return static_cast<int32_t>(offsetof(Object_t631007953, ___m_CachedPtr_0)); }
	inline intptr_t get_m_CachedPtr_0() const { return ___m_CachedPtr_0; }
	inline intptr_t* get_address_of_m_CachedPtr_0() { return &___m_CachedPtr_0; }
	inline void set_m_CachedPtr_0(intptr_t value)
	{
		___m_CachedPtr_0 = value;
	}
};

struct Object_t631007953_StaticFields
{
public:
	// System.Int32 UnityEngine.Object::OffsetOfInstanceIDInCPlusPlusObject
	int32_t ___OffsetOfInstanceIDInCPlusPlusObject_1;

public:
	inline static int32_t get_offset_of_OffsetOfInstanceIDInCPlusPlusObject_1() { return static_cast<int32_t>(offsetof(Object_t631007953_StaticFields, ___OffsetOfInstanceIDInCPlusPlusObject_1)); }
	inline int32_t get_OffsetOfInstanceIDInCPlusPlusObject_1() const { return ___OffsetOfInstanceIDInCPlusPlusObject_1; }
	inline int32_t* get_address_of_OffsetOfInstanceIDInCPlusPlusObject_1() { return &___OffsetOfInstanceIDInCPlusPlusObject_1; }
	inline void set_OffsetOfInstanceIDInCPlusPlusObject_1(int32_t value)
	{
		___OffsetOfInstanceIDInCPlusPlusObject_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of UnityEngine.Object
struct Object_t631007953_marshaled_pinvoke
{
	intptr_t ___m_CachedPtr_0;
};
// Native definition for COM marshalling of UnityEngine.Object
struct Object_t631007953_marshaled_com
{
	intptr_t ___m_CachedPtr_0;
};
#endif // OBJECT_T631007953_H
#ifndef COROUTINE_T3829159415_H
#define COROUTINE_T3829159415_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Coroutine
struct  Coroutine_t3829159415  : public YieldInstruction_t403091072
{
public:
	// System.IntPtr UnityEngine.Coroutine::m_Ptr
	intptr_t ___m_Ptr_0;

public:
	inline static int32_t get_offset_of_m_Ptr_0() { return static_cast<int32_t>(offsetof(Coroutine_t3829159415, ___m_Ptr_0)); }
	inline intptr_t get_m_Ptr_0() const { return ___m_Ptr_0; }
	inline intptr_t* get_address_of_m_Ptr_0() { return &___m_Ptr_0; }
	inline void set_m_Ptr_0(intptr_t value)
	{
		___m_Ptr_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of UnityEngine.Coroutine
struct Coroutine_t3829159415_marshaled_pinvoke : public YieldInstruction_t403091072_marshaled_pinvoke
{
	intptr_t ___m_Ptr_0;
};
// Native definition for COM marshalling of UnityEngine.Coroutine
struct Coroutine_t3829159415_marshaled_com : public YieldInstruction_t403091072_marshaled_com
{
	intptr_t ___m_Ptr_0;
};
#endif // COROUTINE_T3829159415_H
#ifndef BUTTONCLICKEDEVENT_T48803504_H
#define BUTTONCLICKEDEVENT_T48803504_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.UI.Button/ButtonClickedEvent
struct  ButtonClickedEvent_t48803504  : public UnityEvent_t2581268647
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // BUTTONCLICKEDEVENT_T48803504_H
#ifndef NOTSUPPORTEDEXCEPTION_T1314879016_H
#define NOTSUPPORTEDEXCEPTION_T1314879016_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.NotSupportedException
struct  NotSupportedException_t1314879016  : public SystemException_t176217640
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // NOTSUPPORTEDEXCEPTION_T1314879016_H
#ifndef BOARDPREFABNAME_T3868180495_H
#define BOARDPREFABNAME_T3868180495_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// BoardPrefabName
struct  BoardPrefabName_t3868180495 
{
public:
	// System.Int32 BoardPrefabName::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(BoardPrefabName_t3868180495, ___value___1)); }
	inline int32_t get_value___1() const { return ___value___1; }
	inline int32_t* get_address_of_value___1() { return &___value___1; }
	inline void set_value___1(int32_t value)
	{
		___value___1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // BOARDPREFABNAME_T3868180495_H
#ifndef SELECTIONSTATE_T2656606514_H
#define SELECTIONSTATE_T2656606514_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.UI.Selectable/SelectionState
struct  SelectionState_t2656606514 
{
public:
	// System.Int32 UnityEngine.UI.Selectable/SelectionState::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(SelectionState_t2656606514, ___value___1)); }
	inline int32_t get_value___1() const { return ___value___1; }
	inline int32_t* get_address_of_value___1() { return &___value___1; }
	inline void set_value___1(int32_t value)
	{
		___value___1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SELECTIONSTATE_T2656606514_H
#ifndef RUNTIMEFIELDHANDLE_T1871169219_H
#define RUNTIMEFIELDHANDLE_T1871169219_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.RuntimeFieldHandle
struct  RuntimeFieldHandle_t1871169219 
{
public:
	// System.IntPtr System.RuntimeFieldHandle::value
	intptr_t ___value_0;

public:
	inline static int32_t get_offset_of_value_0() { return static_cast<int32_t>(offsetof(RuntimeFieldHandle_t1871169219, ___value_0)); }
	inline intptr_t get_value_0() const { return ___value_0; }
	inline intptr_t* get_address_of_value_0() { return &___value_0; }
	inline void set_value_0(intptr_t value)
	{
		___value_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RUNTIMEFIELDHANDLE_T1871169219_H
#ifndef SCENENAME_T250522944_H
#define SCENENAME_T250522944_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// SceneName
struct  SceneName_t250522944 
{
public:
	// System.Int32 SceneName::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(SceneName_t250522944, ___value___1)); }
	inline int32_t get_value___1() const { return ___value___1; }
	inline int32_t* get_address_of_value___1() { return &___value___1; }
	inline void set_value___1(int32_t value)
	{
		___value___1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SCENENAME_T250522944_H
#ifndef RESPONSESTATUS_T4073530167_H
#define RESPONSESTATUS_T4073530167_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// GooglePlayGames.BasicApi.ResponseStatus
struct  ResponseStatus_t4073530167 
{
public:
	// System.Int32 GooglePlayGames.BasicApi.ResponseStatus::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(ResponseStatus_t4073530167, ___value___1)); }
	inline int32_t get_value___1() const { return ___value___1; }
	inline int32_t* get_address_of_value___1() { return &___value___1; }
	inline void set_value___1(int32_t value)
	{
		___value___1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RESPONSESTATUS_T4073530167_H
#ifndef DATASOURCE_T833220627_H
#define DATASOURCE_T833220627_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// GooglePlayGames.BasicApi.DataSource
struct  DataSource_t833220627 
{
public:
	// System.Int32 GooglePlayGames.BasicApi.DataSource::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(DataSource_t833220627, ___value___1)); }
	inline int32_t get_value___1() const { return ___value___1; }
	inline int32_t* get_address_of_value___1() { return &___value___1; }
	inline void set_value___1(int32_t value)
	{
		___value___1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DATASOURCE_T833220627_H
#ifndef EVENTVISIBILITY_T3702936362_H
#define EVENTVISIBILITY_T3702936362_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// GooglePlayGames.BasicApi.Events.EventVisibility
struct  EventVisibility_t3702936362 
{
public:
	// System.Int32 GooglePlayGames.BasicApi.Events.EventVisibility::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(EventVisibility_t3702936362, ___value___1)); }
	inline int32_t get_value___1() const { return ___value___1; }
	inline int32_t* get_address_of_value___1() { return &___value___1; }
	inline void set_value___1(int32_t value)
	{
		___value___1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // EVENTVISIBILITY_T3702936362_H
#ifndef GRAVITY_T1500868723_H
#define GRAVITY_T1500868723_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// GooglePlayGames.BasicApi.Gravity
struct  Gravity_t1500868723 
{
public:
	// System.Int32 GooglePlayGames.BasicApi.Gravity::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(Gravity_t1500868723, ___value___1)); }
	inline int32_t get_value___1() const { return ___value___1; }
	inline int32_t* get_address_of_value___1() { return &___value___1; }
	inline void set_value___1(int32_t value)
	{
		___value___1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // GRAVITY_T1500868723_H
#ifndef LEADERBOARDCOLLECTION_T3003544407_H
#define LEADERBOARDCOLLECTION_T3003544407_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// GooglePlayGames.BasicApi.LeaderboardCollection
struct  LeaderboardCollection_t3003544407 
{
public:
	// System.Int32 GooglePlayGames.BasicApi.LeaderboardCollection::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(LeaderboardCollection_t3003544407, ___value___1)); }
	inline int32_t get_value___1() const { return ___value___1; }
	inline int32_t* get_address_of_value___1() { return &___value___1; }
	inline void set_value___1(int32_t value)
	{
		___value___1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // LEADERBOARDCOLLECTION_T3003544407_H
#ifndef LEADERBOARDSTART_T3259090716_H
#define LEADERBOARDSTART_T3259090716_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// GooglePlayGames.BasicApi.LeaderboardStart
struct  LeaderboardStart_t3259090716 
{
public:
	// System.Int32 GooglePlayGames.BasicApi.LeaderboardStart::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(LeaderboardStart_t3259090716, ___value___1)); }
	inline int32_t get_value___1() const { return ___value___1; }
	inline int32_t* get_address_of_value___1() { return &___value___1; }
	inline void set_value___1(int32_t value)
	{
		___value___1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // LEADERBOARDSTART_T3259090716_H
#ifndef RUNTIMETYPEHANDLE_T3027515415_H
#define RUNTIMETYPEHANDLE_T3027515415_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.RuntimeTypeHandle
struct  RuntimeTypeHandle_t3027515415 
{
public:
	// System.IntPtr System.RuntimeTypeHandle::value
	intptr_t ___value_0;

public:
	inline static int32_t get_offset_of_value_0() { return static_cast<int32_t>(offsetof(RuntimeTypeHandle_t3027515415, ___value_0)); }
	inline intptr_t get_value_0() const { return ___value_0; }
	inline intptr_t* get_address_of_value_0() { return &___value_0; }
	inline void set_value_0(intptr_t value)
	{
		___value_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RUNTIMETYPEHANDLE_T3027515415_H
#ifndef LEADERBOARDTIMESPAN_T1503936786_H
#define LEADERBOARDTIMESPAN_T1503936786_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// GooglePlayGames.BasicApi.LeaderboardTimeSpan
struct  LeaderboardTimeSpan_t1503936786 
{
public:
	// System.Int32 GooglePlayGames.BasicApi.LeaderboardTimeSpan::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(LeaderboardTimeSpan_t1503936786, ___value___1)); }
	inline int32_t get_value___1() const { return ___value___1; }
	inline int32_t* get_address_of_value___1() { return &___value___1; }
	inline void set_value___1(int32_t value)
	{
		___value___1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // LEADERBOARDTIMESPAN_T1503936786_H
#ifndef CONNECTIONREQUEST_T684574500_H
#define CONNECTIONREQUEST_T684574500_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// GooglePlayGames.BasicApi.Nearby.ConnectionRequest
struct  ConnectionRequest_t684574500 
{
public:
	// GooglePlayGames.BasicApi.Nearby.EndpointDetails GooglePlayGames.BasicApi.Nearby.ConnectionRequest::mRemoteEndpoint
	EndpointDetails_t3891698496  ___mRemoteEndpoint_0;
	// System.Byte[] GooglePlayGames.BasicApi.Nearby.ConnectionRequest::mPayload
	ByteU5BU5D_t4116647657* ___mPayload_1;

public:
	inline static int32_t get_offset_of_mRemoteEndpoint_0() { return static_cast<int32_t>(offsetof(ConnectionRequest_t684574500, ___mRemoteEndpoint_0)); }
	inline EndpointDetails_t3891698496  get_mRemoteEndpoint_0() const { return ___mRemoteEndpoint_0; }
	inline EndpointDetails_t3891698496 * get_address_of_mRemoteEndpoint_0() { return &___mRemoteEndpoint_0; }
	inline void set_mRemoteEndpoint_0(EndpointDetails_t3891698496  value)
	{
		___mRemoteEndpoint_0 = value;
	}

	inline static int32_t get_offset_of_mPayload_1() { return static_cast<int32_t>(offsetof(ConnectionRequest_t684574500, ___mPayload_1)); }
	inline ByteU5BU5D_t4116647657* get_mPayload_1() const { return ___mPayload_1; }
	inline ByteU5BU5D_t4116647657** get_address_of_mPayload_1() { return &___mPayload_1; }
	inline void set_mPayload_1(ByteU5BU5D_t4116647657* value)
	{
		___mPayload_1 = value;
		Il2CppCodeGenWriteBarrier((&___mPayload_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of GooglePlayGames.BasicApi.Nearby.ConnectionRequest
struct ConnectionRequest_t684574500_marshaled_pinvoke
{
	EndpointDetails_t3891698496_marshaled_pinvoke ___mRemoteEndpoint_0;
	uint8_t* ___mPayload_1;
};
// Native definition for COM marshalling of GooglePlayGames.BasicApi.Nearby.ConnectionRequest
struct ConnectionRequest_t684574500_marshaled_com
{
	EndpointDetails_t3891698496_marshaled_com ___mRemoteEndpoint_0;
	uint8_t* ___mPayload_1;
};
#endif // CONNECTIONREQUEST_T684574500_H
#ifndef STATUS_T465938950_H
#define STATUS_T465938950_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// GooglePlayGames.BasicApi.Nearby.ConnectionResponse/Status
struct  Status_t465938950 
{
public:
	// System.Int32 GooglePlayGames.BasicApi.Nearby.ConnectionResponse/Status::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(Status_t465938950, ___value___1)); }
	inline int32_t get_value___1() const { return ___value___1; }
	inline int32_t* get_address_of_value___1() { return &___value___1; }
	inline void set_value___1(int32_t value)
	{
		___value___1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // STATUS_T465938950_H
#ifndef INITIALIZATIONSTATUS_T2437428114_H
#define INITIALIZATIONSTATUS_T2437428114_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// GooglePlayGames.BasicApi.Nearby.InitializationStatus
struct  InitializationStatus_t2437428114 
{
public:
	// System.Int32 GooglePlayGames.BasicApi.Nearby.InitializationStatus::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(InitializationStatus_t2437428114, ___value___1)); }
	inline int32_t get_value___1() const { return ___value___1; }
	inline int32_t* get_address_of_value___1() { return &___value___1; }
	inline void set_value___1(int32_t value)
	{
		___value___1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // INITIALIZATIONSTATUS_T2437428114_H
#ifndef CONFLICTRESOLUTIONSTRATEGY_T4255039905_H
#define CONFLICTRESOLUTIONSTRATEGY_T4255039905_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// GooglePlayGames.BasicApi.SavedGame.ConflictResolutionStrategy
struct  ConflictResolutionStrategy_t4255039905 
{
public:
	// System.Int32 GooglePlayGames.BasicApi.SavedGame.ConflictResolutionStrategy::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(ConflictResolutionStrategy_t4255039905, ___value___1)); }
	inline int32_t get_value___1() const { return ___value___1; }
	inline int32_t* get_address_of_value___1() { return &___value___1; }
	inline void set_value___1(int32_t value)
	{
		___value___1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CONFLICTRESOLUTIONSTRATEGY_T4255039905_H
#ifndef ARGUMENTOUTOFRANGEEXCEPTION_T777629997_H
#define ARGUMENTOUTOFRANGEEXCEPTION_T777629997_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ArgumentOutOfRangeException
struct  ArgumentOutOfRangeException_t777629997  : public ArgumentException_t132251570
{
public:
	// System.Object System.ArgumentOutOfRangeException::actual_value
	RuntimeObject * ___actual_value_13;

public:
	inline static int32_t get_offset_of_actual_value_13() { return static_cast<int32_t>(offsetof(ArgumentOutOfRangeException_t777629997, ___actual_value_13)); }
	inline RuntimeObject * get_actual_value_13() const { return ___actual_value_13; }
	inline RuntimeObject ** get_address_of_actual_value_13() { return &___actual_value_13; }
	inline void set_actual_value_13(RuntimeObject * value)
	{
		___actual_value_13 = value;
		Il2CppCodeGenWriteBarrier((&___actual_value_13), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ARGUMENTOUTOFRANGEEXCEPTION_T777629997_H
#ifndef SAVEDGAMEMETADATAUPDATE_T1775293339_H
#define SAVEDGAMEMETADATAUPDATE_T1775293339_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// GooglePlayGames.BasicApi.SavedGame.SavedGameMetadataUpdate
struct  SavedGameMetadataUpdate_t1775293339 
{
public:
	// System.Boolean GooglePlayGames.BasicApi.SavedGame.SavedGameMetadataUpdate::mDescriptionUpdated
	bool ___mDescriptionUpdated_0;
	// System.String GooglePlayGames.BasicApi.SavedGame.SavedGameMetadataUpdate::mNewDescription
	String_t* ___mNewDescription_1;
	// System.Boolean GooglePlayGames.BasicApi.SavedGame.SavedGameMetadataUpdate::mCoverImageUpdated
	bool ___mCoverImageUpdated_2;
	// System.Byte[] GooglePlayGames.BasicApi.SavedGame.SavedGameMetadataUpdate::mNewPngCoverImage
	ByteU5BU5D_t4116647657* ___mNewPngCoverImage_3;
	// System.Nullable`1<System.TimeSpan> GooglePlayGames.BasicApi.SavedGame.SavedGameMetadataUpdate::mNewPlayedTime
	Nullable_1_t2603721331  ___mNewPlayedTime_4;

public:
	inline static int32_t get_offset_of_mDescriptionUpdated_0() { return static_cast<int32_t>(offsetof(SavedGameMetadataUpdate_t1775293339, ___mDescriptionUpdated_0)); }
	inline bool get_mDescriptionUpdated_0() const { return ___mDescriptionUpdated_0; }
	inline bool* get_address_of_mDescriptionUpdated_0() { return &___mDescriptionUpdated_0; }
	inline void set_mDescriptionUpdated_0(bool value)
	{
		___mDescriptionUpdated_0 = value;
	}

	inline static int32_t get_offset_of_mNewDescription_1() { return static_cast<int32_t>(offsetof(SavedGameMetadataUpdate_t1775293339, ___mNewDescription_1)); }
	inline String_t* get_mNewDescription_1() const { return ___mNewDescription_1; }
	inline String_t** get_address_of_mNewDescription_1() { return &___mNewDescription_1; }
	inline void set_mNewDescription_1(String_t* value)
	{
		___mNewDescription_1 = value;
		Il2CppCodeGenWriteBarrier((&___mNewDescription_1), value);
	}

	inline static int32_t get_offset_of_mCoverImageUpdated_2() { return static_cast<int32_t>(offsetof(SavedGameMetadataUpdate_t1775293339, ___mCoverImageUpdated_2)); }
	inline bool get_mCoverImageUpdated_2() const { return ___mCoverImageUpdated_2; }
	inline bool* get_address_of_mCoverImageUpdated_2() { return &___mCoverImageUpdated_2; }
	inline void set_mCoverImageUpdated_2(bool value)
	{
		___mCoverImageUpdated_2 = value;
	}

	inline static int32_t get_offset_of_mNewPngCoverImage_3() { return static_cast<int32_t>(offsetof(SavedGameMetadataUpdate_t1775293339, ___mNewPngCoverImage_3)); }
	inline ByteU5BU5D_t4116647657* get_mNewPngCoverImage_3() const { return ___mNewPngCoverImage_3; }
	inline ByteU5BU5D_t4116647657** get_address_of_mNewPngCoverImage_3() { return &___mNewPngCoverImage_3; }
	inline void set_mNewPngCoverImage_3(ByteU5BU5D_t4116647657* value)
	{
		___mNewPngCoverImage_3 = value;
		Il2CppCodeGenWriteBarrier((&___mNewPngCoverImage_3), value);
	}

	inline static int32_t get_offset_of_mNewPlayedTime_4() { return static_cast<int32_t>(offsetof(SavedGameMetadataUpdate_t1775293339, ___mNewPlayedTime_4)); }
	inline Nullable_1_t2603721331  get_mNewPlayedTime_4() const { return ___mNewPlayedTime_4; }
	inline Nullable_1_t2603721331 * get_address_of_mNewPlayedTime_4() { return &___mNewPlayedTime_4; }
	inline void set_mNewPlayedTime_4(Nullable_1_t2603721331  value)
	{
		___mNewPlayedTime_4 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of GooglePlayGames.BasicApi.SavedGame.SavedGameMetadataUpdate
struct SavedGameMetadataUpdate_t1775293339_marshaled_pinvoke
{
	int32_t ___mDescriptionUpdated_0;
	char* ___mNewDescription_1;
	int32_t ___mCoverImageUpdated_2;
	uint8_t* ___mNewPngCoverImage_3;
	Nullable_1_t2603721331  ___mNewPlayedTime_4;
};
// Native definition for COM marshalling of GooglePlayGames.BasicApi.SavedGame.SavedGameMetadataUpdate
struct SavedGameMetadataUpdate_t1775293339_marshaled_com
{
	int32_t ___mDescriptionUpdated_0;
	Il2CppChar* ___mNewDescription_1;
	int32_t ___mCoverImageUpdated_2;
	uint8_t* ___mNewPngCoverImage_3;
	Nullable_1_t2603721331  ___mNewPlayedTime_4;
};
#endif // SAVEDGAMEMETADATAUPDATE_T1775293339_H
#ifndef NAVIGATION_T3049316579_H
#define NAVIGATION_T3049316579_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.UI.Navigation
struct  Navigation_t3049316579 
{
public:
	// UnityEngine.UI.Navigation/Mode UnityEngine.UI.Navigation::m_Mode
	int32_t ___m_Mode_0;
	// UnityEngine.UI.Selectable UnityEngine.UI.Navigation::m_SelectOnUp
	Selectable_t3250028441 * ___m_SelectOnUp_1;
	// UnityEngine.UI.Selectable UnityEngine.UI.Navigation::m_SelectOnDown
	Selectable_t3250028441 * ___m_SelectOnDown_2;
	// UnityEngine.UI.Selectable UnityEngine.UI.Navigation::m_SelectOnLeft
	Selectable_t3250028441 * ___m_SelectOnLeft_3;
	// UnityEngine.UI.Selectable UnityEngine.UI.Navigation::m_SelectOnRight
	Selectable_t3250028441 * ___m_SelectOnRight_4;

public:
	inline static int32_t get_offset_of_m_Mode_0() { return static_cast<int32_t>(offsetof(Navigation_t3049316579, ___m_Mode_0)); }
	inline int32_t get_m_Mode_0() const { return ___m_Mode_0; }
	inline int32_t* get_address_of_m_Mode_0() { return &___m_Mode_0; }
	inline void set_m_Mode_0(int32_t value)
	{
		___m_Mode_0 = value;
	}

	inline static int32_t get_offset_of_m_SelectOnUp_1() { return static_cast<int32_t>(offsetof(Navigation_t3049316579, ___m_SelectOnUp_1)); }
	inline Selectable_t3250028441 * get_m_SelectOnUp_1() const { return ___m_SelectOnUp_1; }
	inline Selectable_t3250028441 ** get_address_of_m_SelectOnUp_1() { return &___m_SelectOnUp_1; }
	inline void set_m_SelectOnUp_1(Selectable_t3250028441 * value)
	{
		___m_SelectOnUp_1 = value;
		Il2CppCodeGenWriteBarrier((&___m_SelectOnUp_1), value);
	}

	inline static int32_t get_offset_of_m_SelectOnDown_2() { return static_cast<int32_t>(offsetof(Navigation_t3049316579, ___m_SelectOnDown_2)); }
	inline Selectable_t3250028441 * get_m_SelectOnDown_2() const { return ___m_SelectOnDown_2; }
	inline Selectable_t3250028441 ** get_address_of_m_SelectOnDown_2() { return &___m_SelectOnDown_2; }
	inline void set_m_SelectOnDown_2(Selectable_t3250028441 * value)
	{
		___m_SelectOnDown_2 = value;
		Il2CppCodeGenWriteBarrier((&___m_SelectOnDown_2), value);
	}

	inline static int32_t get_offset_of_m_SelectOnLeft_3() { return static_cast<int32_t>(offsetof(Navigation_t3049316579, ___m_SelectOnLeft_3)); }
	inline Selectable_t3250028441 * get_m_SelectOnLeft_3() const { return ___m_SelectOnLeft_3; }
	inline Selectable_t3250028441 ** get_address_of_m_SelectOnLeft_3() { return &___m_SelectOnLeft_3; }
	inline void set_m_SelectOnLeft_3(Selectable_t3250028441 * value)
	{
		___m_SelectOnLeft_3 = value;
		Il2CppCodeGenWriteBarrier((&___m_SelectOnLeft_3), value);
	}

	inline static int32_t get_offset_of_m_SelectOnRight_4() { return static_cast<int32_t>(offsetof(Navigation_t3049316579, ___m_SelectOnRight_4)); }
	inline Selectable_t3250028441 * get_m_SelectOnRight_4() const { return ___m_SelectOnRight_4; }
	inline Selectable_t3250028441 ** get_address_of_m_SelectOnRight_4() { return &___m_SelectOnRight_4; }
	inline void set_m_SelectOnRight_4(Selectable_t3250028441 * value)
	{
		___m_SelectOnRight_4 = value;
		Il2CppCodeGenWriteBarrier((&___m_SelectOnRight_4), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of UnityEngine.UI.Navigation
struct Navigation_t3049316579_marshaled_pinvoke
{
	int32_t ___m_Mode_0;
	Selectable_t3250028441 * ___m_SelectOnUp_1;
	Selectable_t3250028441 * ___m_SelectOnDown_2;
	Selectable_t3250028441 * ___m_SelectOnLeft_3;
	Selectable_t3250028441 * ___m_SelectOnRight_4;
};
// Native definition for COM marshalling of UnityEngine.UI.Navigation
struct Navigation_t3049316579_marshaled_com
{
	int32_t ___m_Mode_0;
	Selectable_t3250028441 * ___m_SelectOnUp_1;
	Selectable_t3250028441 * ___m_SelectOnDown_2;
	Selectable_t3250028441 * ___m_SelectOnLeft_3;
	Selectable_t3250028441 * ___m_SelectOnRight_4;
};
#endif // NAVIGATION_T3049316579_H
#ifndef GAMEOBJECT_T1113636619_H
#define GAMEOBJECT_T1113636619_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.GameObject
struct  GameObject_t1113636619  : public Object_t631007953
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // GAMEOBJECT_T1113636619_H
#ifndef GAMEMANAGER_T1536523654_H
#define GAMEMANAGER_T1536523654_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// GameManager
struct  GameManager_t1536523654  : public RuntimeObject
{
public:
	// System.Int32[] GameManager::BoardPrefabSize
	Int32U5BU5D_t385246372* ___BoardPrefabSize_1;
	// System.String[] GameManager::BoardPrefabState
	StringU5BU5D_t1281789340* ___BoardPrefabState_2;
	// BoardPrefabName GameManager::_board_image_name
	int32_t ____board_image_name_4;
	// DontDestroyManager GameManager::dontDestroyManager
	DontDestroyManager_t1329034447 * ___dontDestroyManager_5;

public:
	inline static int32_t get_offset_of_BoardPrefabSize_1() { return static_cast<int32_t>(offsetof(GameManager_t1536523654, ___BoardPrefabSize_1)); }
	inline Int32U5BU5D_t385246372* get_BoardPrefabSize_1() const { return ___BoardPrefabSize_1; }
	inline Int32U5BU5D_t385246372** get_address_of_BoardPrefabSize_1() { return &___BoardPrefabSize_1; }
	inline void set_BoardPrefabSize_1(Int32U5BU5D_t385246372* value)
	{
		___BoardPrefabSize_1 = value;
		Il2CppCodeGenWriteBarrier((&___BoardPrefabSize_1), value);
	}

	inline static int32_t get_offset_of_BoardPrefabState_2() { return static_cast<int32_t>(offsetof(GameManager_t1536523654, ___BoardPrefabState_2)); }
	inline StringU5BU5D_t1281789340* get_BoardPrefabState_2() const { return ___BoardPrefabState_2; }
	inline StringU5BU5D_t1281789340** get_address_of_BoardPrefabState_2() { return &___BoardPrefabState_2; }
	inline void set_BoardPrefabState_2(StringU5BU5D_t1281789340* value)
	{
		___BoardPrefabState_2 = value;
		Il2CppCodeGenWriteBarrier((&___BoardPrefabState_2), value);
	}

	inline static int32_t get_offset_of__board_image_name_4() { return static_cast<int32_t>(offsetof(GameManager_t1536523654, ____board_image_name_4)); }
	inline int32_t get__board_image_name_4() const { return ____board_image_name_4; }
	inline int32_t* get_address_of__board_image_name_4() { return &____board_image_name_4; }
	inline void set__board_image_name_4(int32_t value)
	{
		____board_image_name_4 = value;
	}

	inline static int32_t get_offset_of_dontDestroyManager_5() { return static_cast<int32_t>(offsetof(GameManager_t1536523654, ___dontDestroyManager_5)); }
	inline DontDestroyManager_t1329034447 * get_dontDestroyManager_5() const { return ___dontDestroyManager_5; }
	inline DontDestroyManager_t1329034447 ** get_address_of_dontDestroyManager_5() { return &___dontDestroyManager_5; }
	inline void set_dontDestroyManager_5(DontDestroyManager_t1329034447 * value)
	{
		___dontDestroyManager_5 = value;
		Il2CppCodeGenWriteBarrier((&___dontDestroyManager_5), value);
	}
};

struct GameManager_t1536523654_StaticFields
{
public:
	// System.Int32 GameManager::MAX_GET_SOUL_NUM_IN_A_DAY
	int32_t ___MAX_GET_SOUL_NUM_IN_A_DAY_0;
	// GameManager GameManager::_instance
	GameManager_t1536523654 * ____instance_3;

public:
	inline static int32_t get_offset_of_MAX_GET_SOUL_NUM_IN_A_DAY_0() { return static_cast<int32_t>(offsetof(GameManager_t1536523654_StaticFields, ___MAX_GET_SOUL_NUM_IN_A_DAY_0)); }
	inline int32_t get_MAX_GET_SOUL_NUM_IN_A_DAY_0() const { return ___MAX_GET_SOUL_NUM_IN_A_DAY_0; }
	inline int32_t* get_address_of_MAX_GET_SOUL_NUM_IN_A_DAY_0() { return &___MAX_GET_SOUL_NUM_IN_A_DAY_0; }
	inline void set_MAX_GET_SOUL_NUM_IN_A_DAY_0(int32_t value)
	{
		___MAX_GET_SOUL_NUM_IN_A_DAY_0 = value;
	}

	inline static int32_t get_offset_of__instance_3() { return static_cast<int32_t>(offsetof(GameManager_t1536523654_StaticFields, ____instance_3)); }
	inline GameManager_t1536523654 * get__instance_3() const { return ____instance_3; }
	inline GameManager_t1536523654 ** get_address_of__instance_3() { return &____instance_3; }
	inline void set__instance_3(GameManager_t1536523654 * value)
	{
		____instance_3 = value;
		Il2CppCodeGenWriteBarrier((&____instance_3), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // GAMEMANAGER_T1536523654_H
#ifndef SPRITE_T280657092_H
#define SPRITE_T280657092_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Sprite
struct  Sprite_t280657092  : public Object_t631007953
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SPRITE_T280657092_H
#ifndef COMPONENT_T1923634451_H
#define COMPONENT_T1923634451_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Component
struct  Component_t1923634451  : public Object_t631007953
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // COMPONENT_T1923634451_H
#ifndef MATERIAL_T340375123_H
#define MATERIAL_T340375123_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Material
struct  Material_t340375123  : public Object_t631007953
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MATERIAL_T340375123_H
#ifndef MULTICASTDELEGATE_T_H
#define MULTICASTDELEGATE_T_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.MulticastDelegate
struct  MulticastDelegate_t  : public Delegate_t1188392813
{
public:
	// System.MulticastDelegate System.MulticastDelegate::prev
	MulticastDelegate_t * ___prev_9;
	// System.MulticastDelegate System.MulticastDelegate::kpm_next
	MulticastDelegate_t * ___kpm_next_10;

public:
	inline static int32_t get_offset_of_prev_9() { return static_cast<int32_t>(offsetof(MulticastDelegate_t, ___prev_9)); }
	inline MulticastDelegate_t * get_prev_9() const { return ___prev_9; }
	inline MulticastDelegate_t ** get_address_of_prev_9() { return &___prev_9; }
	inline void set_prev_9(MulticastDelegate_t * value)
	{
		___prev_9 = value;
		Il2CppCodeGenWriteBarrier((&___prev_9), value);
	}

	inline static int32_t get_offset_of_kpm_next_10() { return static_cast<int32_t>(offsetof(MulticastDelegate_t, ___kpm_next_10)); }
	inline MulticastDelegate_t * get_kpm_next_10() const { return ___kpm_next_10; }
	inline MulticastDelegate_t ** get_address_of_kpm_next_10() { return &___kpm_next_10; }
	inline void set_kpm_next_10(MulticastDelegate_t * value)
	{
		___kpm_next_10 = value;
		Il2CppCodeGenWriteBarrier((&___kpm_next_10), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MULTICASTDELEGATE_T_H
#ifndef ARGUMENTNULLEXCEPTION_T1615371798_H
#define ARGUMENTNULLEXCEPTION_T1615371798_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ArgumentNullException
struct  ArgumentNullException_t1615371798  : public ArgumentException_t132251570
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ARGUMENTNULLEXCEPTION_T1615371798_H
#ifndef VIDEOCAPTURESTATE_T2350658599_H
#define VIDEOCAPTURESTATE_T2350658599_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// GooglePlayGames.BasicApi.Video.VideoCaptureState
struct  VideoCaptureState_t2350658599  : public RuntimeObject
{
public:
	// System.Boolean GooglePlayGames.BasicApi.Video.VideoCaptureState::mIsCapturing
	bool ___mIsCapturing_0;
	// GooglePlayGames.BasicApi.VideoCaptureMode GooglePlayGames.BasicApi.Video.VideoCaptureState::mCaptureMode
	int32_t ___mCaptureMode_1;
	// GooglePlayGames.BasicApi.VideoQualityLevel GooglePlayGames.BasicApi.Video.VideoCaptureState::mQualityLevel
	int32_t ___mQualityLevel_2;
	// System.Boolean GooglePlayGames.BasicApi.Video.VideoCaptureState::mIsOverlayVisible
	bool ___mIsOverlayVisible_3;
	// System.Boolean GooglePlayGames.BasicApi.Video.VideoCaptureState::mIsPaused
	bool ___mIsPaused_4;

public:
	inline static int32_t get_offset_of_mIsCapturing_0() { return static_cast<int32_t>(offsetof(VideoCaptureState_t2350658599, ___mIsCapturing_0)); }
	inline bool get_mIsCapturing_0() const { return ___mIsCapturing_0; }
	inline bool* get_address_of_mIsCapturing_0() { return &___mIsCapturing_0; }
	inline void set_mIsCapturing_0(bool value)
	{
		___mIsCapturing_0 = value;
	}

	inline static int32_t get_offset_of_mCaptureMode_1() { return static_cast<int32_t>(offsetof(VideoCaptureState_t2350658599, ___mCaptureMode_1)); }
	inline int32_t get_mCaptureMode_1() const { return ___mCaptureMode_1; }
	inline int32_t* get_address_of_mCaptureMode_1() { return &___mCaptureMode_1; }
	inline void set_mCaptureMode_1(int32_t value)
	{
		___mCaptureMode_1 = value;
	}

	inline static int32_t get_offset_of_mQualityLevel_2() { return static_cast<int32_t>(offsetof(VideoCaptureState_t2350658599, ___mQualityLevel_2)); }
	inline int32_t get_mQualityLevel_2() const { return ___mQualityLevel_2; }
	inline int32_t* get_address_of_mQualityLevel_2() { return &___mQualityLevel_2; }
	inline void set_mQualityLevel_2(int32_t value)
	{
		___mQualityLevel_2 = value;
	}

	inline static int32_t get_offset_of_mIsOverlayVisible_3() { return static_cast<int32_t>(offsetof(VideoCaptureState_t2350658599, ___mIsOverlayVisible_3)); }
	inline bool get_mIsOverlayVisible_3() const { return ___mIsOverlayVisible_3; }
	inline bool* get_address_of_mIsOverlayVisible_3() { return &___mIsOverlayVisible_3; }
	inline void set_mIsOverlayVisible_3(bool value)
	{
		___mIsOverlayVisible_3 = value;
	}

	inline static int32_t get_offset_of_mIsPaused_4() { return static_cast<int32_t>(offsetof(VideoCaptureState_t2350658599, ___mIsPaused_4)); }
	inline bool get_mIsPaused_4() const { return ___mIsPaused_4; }
	inline bool* get_address_of_mIsPaused_4() { return &___mIsPaused_4; }
	inline void set_mIsPaused_4(bool value)
	{
		___mIsPaused_4 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // VIDEOCAPTURESTATE_T2350658599_H
#ifndef BUILDER_T140438593_H
#define BUILDER_T140438593_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// GooglePlayGames.BasicApi.SavedGame.SavedGameMetadataUpdate/Builder
struct  Builder_t140438593 
{
public:
	// System.Boolean GooglePlayGames.BasicApi.SavedGame.SavedGameMetadataUpdate/Builder::mDescriptionUpdated
	bool ___mDescriptionUpdated_0;
	// System.String GooglePlayGames.BasicApi.SavedGame.SavedGameMetadataUpdate/Builder::mNewDescription
	String_t* ___mNewDescription_1;
	// System.Boolean GooglePlayGames.BasicApi.SavedGame.SavedGameMetadataUpdate/Builder::mCoverImageUpdated
	bool ___mCoverImageUpdated_2;
	// System.Byte[] GooglePlayGames.BasicApi.SavedGame.SavedGameMetadataUpdate/Builder::mNewPngCoverImage
	ByteU5BU5D_t4116647657* ___mNewPngCoverImage_3;
	// System.Nullable`1<System.TimeSpan> GooglePlayGames.BasicApi.SavedGame.SavedGameMetadataUpdate/Builder::mNewPlayedTime
	Nullable_1_t2603721331  ___mNewPlayedTime_4;

public:
	inline static int32_t get_offset_of_mDescriptionUpdated_0() { return static_cast<int32_t>(offsetof(Builder_t140438593, ___mDescriptionUpdated_0)); }
	inline bool get_mDescriptionUpdated_0() const { return ___mDescriptionUpdated_0; }
	inline bool* get_address_of_mDescriptionUpdated_0() { return &___mDescriptionUpdated_0; }
	inline void set_mDescriptionUpdated_0(bool value)
	{
		___mDescriptionUpdated_0 = value;
	}

	inline static int32_t get_offset_of_mNewDescription_1() { return static_cast<int32_t>(offsetof(Builder_t140438593, ___mNewDescription_1)); }
	inline String_t* get_mNewDescription_1() const { return ___mNewDescription_1; }
	inline String_t** get_address_of_mNewDescription_1() { return &___mNewDescription_1; }
	inline void set_mNewDescription_1(String_t* value)
	{
		___mNewDescription_1 = value;
		Il2CppCodeGenWriteBarrier((&___mNewDescription_1), value);
	}

	inline static int32_t get_offset_of_mCoverImageUpdated_2() { return static_cast<int32_t>(offsetof(Builder_t140438593, ___mCoverImageUpdated_2)); }
	inline bool get_mCoverImageUpdated_2() const { return ___mCoverImageUpdated_2; }
	inline bool* get_address_of_mCoverImageUpdated_2() { return &___mCoverImageUpdated_2; }
	inline void set_mCoverImageUpdated_2(bool value)
	{
		___mCoverImageUpdated_2 = value;
	}

	inline static int32_t get_offset_of_mNewPngCoverImage_3() { return static_cast<int32_t>(offsetof(Builder_t140438593, ___mNewPngCoverImage_3)); }
	inline ByteU5BU5D_t4116647657* get_mNewPngCoverImage_3() const { return ___mNewPngCoverImage_3; }
	inline ByteU5BU5D_t4116647657** get_address_of_mNewPngCoverImage_3() { return &___mNewPngCoverImage_3; }
	inline void set_mNewPngCoverImage_3(ByteU5BU5D_t4116647657* value)
	{
		___mNewPngCoverImage_3 = value;
		Il2CppCodeGenWriteBarrier((&___mNewPngCoverImage_3), value);
	}

	inline static int32_t get_offset_of_mNewPlayedTime_4() { return static_cast<int32_t>(offsetof(Builder_t140438593, ___mNewPlayedTime_4)); }
	inline Nullable_1_t2603721331  get_mNewPlayedTime_4() const { return ___mNewPlayedTime_4; }
	inline Nullable_1_t2603721331 * get_address_of_mNewPlayedTime_4() { return &___mNewPlayedTime_4; }
	inline void set_mNewPlayedTime_4(Nullable_1_t2603721331  value)
	{
		___mNewPlayedTime_4 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of GooglePlayGames.BasicApi.SavedGame.SavedGameMetadataUpdate/Builder
struct Builder_t140438593_marshaled_pinvoke
{
	int32_t ___mDescriptionUpdated_0;
	char* ___mNewDescription_1;
	int32_t ___mCoverImageUpdated_2;
	uint8_t* ___mNewPngCoverImage_3;
	Nullable_1_t2603721331  ___mNewPlayedTime_4;
};
// Native definition for COM marshalling of GooglePlayGames.BasicApi.SavedGame.SavedGameMetadataUpdate/Builder
struct Builder_t140438593_marshaled_com
{
	int32_t ___mDescriptionUpdated_0;
	Il2CppChar* ___mNewDescription_1;
	int32_t ___mCoverImageUpdated_2;
	uint8_t* ___mNewPngCoverImage_3;
	Nullable_1_t2603721331  ___mNewPlayedTime_4;
};
#endif // BUILDER_T140438593_H
#ifndef TYPE_T_H
#define TYPE_T_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Type
struct  Type_t  : public MemberInfo_t
{
public:
	// System.RuntimeTypeHandle System.Type::_impl
	RuntimeTypeHandle_t3027515415  ____impl_1;

public:
	inline static int32_t get_offset_of__impl_1() { return static_cast<int32_t>(offsetof(Type_t, ____impl_1)); }
	inline RuntimeTypeHandle_t3027515415  get__impl_1() const { return ____impl_1; }
	inline RuntimeTypeHandle_t3027515415 * get_address_of__impl_1() { return &____impl_1; }
	inline void set__impl_1(RuntimeTypeHandle_t3027515415  value)
	{
		____impl_1 = value;
	}
};

struct Type_t_StaticFields
{
public:
	// System.Char System.Type::Delimiter
	Il2CppChar ___Delimiter_2;
	// System.Type[] System.Type::EmptyTypes
	TypeU5BU5D_t3940880105* ___EmptyTypes_3;
	// System.Reflection.MemberFilter System.Type::FilterAttribute
	MemberFilter_t426314064 * ___FilterAttribute_4;
	// System.Reflection.MemberFilter System.Type::FilterName
	MemberFilter_t426314064 * ___FilterName_5;
	// System.Reflection.MemberFilter System.Type::FilterNameIgnoreCase
	MemberFilter_t426314064 * ___FilterNameIgnoreCase_6;
	// System.Object System.Type::Missing
	RuntimeObject * ___Missing_7;

public:
	inline static int32_t get_offset_of_Delimiter_2() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___Delimiter_2)); }
	inline Il2CppChar get_Delimiter_2() const { return ___Delimiter_2; }
	inline Il2CppChar* get_address_of_Delimiter_2() { return &___Delimiter_2; }
	inline void set_Delimiter_2(Il2CppChar value)
	{
		___Delimiter_2 = value;
	}

	inline static int32_t get_offset_of_EmptyTypes_3() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___EmptyTypes_3)); }
	inline TypeU5BU5D_t3940880105* get_EmptyTypes_3() const { return ___EmptyTypes_3; }
	inline TypeU5BU5D_t3940880105** get_address_of_EmptyTypes_3() { return &___EmptyTypes_3; }
	inline void set_EmptyTypes_3(TypeU5BU5D_t3940880105* value)
	{
		___EmptyTypes_3 = value;
		Il2CppCodeGenWriteBarrier((&___EmptyTypes_3), value);
	}

	inline static int32_t get_offset_of_FilterAttribute_4() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___FilterAttribute_4)); }
	inline MemberFilter_t426314064 * get_FilterAttribute_4() const { return ___FilterAttribute_4; }
	inline MemberFilter_t426314064 ** get_address_of_FilterAttribute_4() { return &___FilterAttribute_4; }
	inline void set_FilterAttribute_4(MemberFilter_t426314064 * value)
	{
		___FilterAttribute_4 = value;
		Il2CppCodeGenWriteBarrier((&___FilterAttribute_4), value);
	}

	inline static int32_t get_offset_of_FilterName_5() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___FilterName_5)); }
	inline MemberFilter_t426314064 * get_FilterName_5() const { return ___FilterName_5; }
	inline MemberFilter_t426314064 ** get_address_of_FilterName_5() { return &___FilterName_5; }
	inline void set_FilterName_5(MemberFilter_t426314064 * value)
	{
		___FilterName_5 = value;
		Il2CppCodeGenWriteBarrier((&___FilterName_5), value);
	}

	inline static int32_t get_offset_of_FilterNameIgnoreCase_6() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___FilterNameIgnoreCase_6)); }
	inline MemberFilter_t426314064 * get_FilterNameIgnoreCase_6() const { return ___FilterNameIgnoreCase_6; }
	inline MemberFilter_t426314064 ** get_address_of_FilterNameIgnoreCase_6() { return &___FilterNameIgnoreCase_6; }
	inline void set_FilterNameIgnoreCase_6(MemberFilter_t426314064 * value)
	{
		___FilterNameIgnoreCase_6 = value;
		Il2CppCodeGenWriteBarrier((&___FilterNameIgnoreCase_6), value);
	}

	inline static int32_t get_offset_of_Missing_7() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___Missing_7)); }
	inline RuntimeObject * get_Missing_7() const { return ___Missing_7; }
	inline RuntimeObject ** get_address_of_Missing_7() { return &___Missing_7; }
	inline void set_Missing_7(RuntimeObject * value)
	{
		___Missing_7 = value;
		Il2CppCodeGenWriteBarrier((&___Missing_7), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TYPE_T_H
#ifndef DATETIME_T3738529785_H
#define DATETIME_T3738529785_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.DateTime
struct  DateTime_t3738529785 
{
public:
	// System.TimeSpan System.DateTime::ticks
	TimeSpan_t881159249  ___ticks_0;
	// System.DateTimeKind System.DateTime::kind
	int32_t ___kind_1;

public:
	inline static int32_t get_offset_of_ticks_0() { return static_cast<int32_t>(offsetof(DateTime_t3738529785, ___ticks_0)); }
	inline TimeSpan_t881159249  get_ticks_0() const { return ___ticks_0; }
	inline TimeSpan_t881159249 * get_address_of_ticks_0() { return &___ticks_0; }
	inline void set_ticks_0(TimeSpan_t881159249  value)
	{
		___ticks_0 = value;
	}

	inline static int32_t get_offset_of_kind_1() { return static_cast<int32_t>(offsetof(DateTime_t3738529785, ___kind_1)); }
	inline int32_t get_kind_1() const { return ___kind_1; }
	inline int32_t* get_address_of_kind_1() { return &___kind_1; }
	inline void set_kind_1(int32_t value)
	{
		___kind_1 = value;
	}
};

struct DateTime_t3738529785_StaticFields
{
public:
	// System.DateTime System.DateTime::MaxValue
	DateTime_t3738529785  ___MaxValue_2;
	// System.DateTime System.DateTime::MinValue
	DateTime_t3738529785  ___MinValue_3;
	// System.String[] System.DateTime::ParseTimeFormats
	StringU5BU5D_t1281789340* ___ParseTimeFormats_4;
	// System.String[] System.DateTime::ParseYearDayMonthFormats
	StringU5BU5D_t1281789340* ___ParseYearDayMonthFormats_5;
	// System.String[] System.DateTime::ParseYearMonthDayFormats
	StringU5BU5D_t1281789340* ___ParseYearMonthDayFormats_6;
	// System.String[] System.DateTime::ParseDayMonthYearFormats
	StringU5BU5D_t1281789340* ___ParseDayMonthYearFormats_7;
	// System.String[] System.DateTime::ParseMonthDayYearFormats
	StringU5BU5D_t1281789340* ___ParseMonthDayYearFormats_8;
	// System.String[] System.DateTime::MonthDayShortFormats
	StringU5BU5D_t1281789340* ___MonthDayShortFormats_9;
	// System.String[] System.DateTime::DayMonthShortFormats
	StringU5BU5D_t1281789340* ___DayMonthShortFormats_10;
	// System.Int32[] System.DateTime::daysmonth
	Int32U5BU5D_t385246372* ___daysmonth_11;
	// System.Int32[] System.DateTime::daysmonthleap
	Int32U5BU5D_t385246372* ___daysmonthleap_12;
	// System.Object System.DateTime::to_local_time_span_object
	RuntimeObject * ___to_local_time_span_object_13;
	// System.Int64 System.DateTime::last_now
	int64_t ___last_now_14;

public:
	inline static int32_t get_offset_of_MaxValue_2() { return static_cast<int32_t>(offsetof(DateTime_t3738529785_StaticFields, ___MaxValue_2)); }
	inline DateTime_t3738529785  get_MaxValue_2() const { return ___MaxValue_2; }
	inline DateTime_t3738529785 * get_address_of_MaxValue_2() { return &___MaxValue_2; }
	inline void set_MaxValue_2(DateTime_t3738529785  value)
	{
		___MaxValue_2 = value;
	}

	inline static int32_t get_offset_of_MinValue_3() { return static_cast<int32_t>(offsetof(DateTime_t3738529785_StaticFields, ___MinValue_3)); }
	inline DateTime_t3738529785  get_MinValue_3() const { return ___MinValue_3; }
	inline DateTime_t3738529785 * get_address_of_MinValue_3() { return &___MinValue_3; }
	inline void set_MinValue_3(DateTime_t3738529785  value)
	{
		___MinValue_3 = value;
	}

	inline static int32_t get_offset_of_ParseTimeFormats_4() { return static_cast<int32_t>(offsetof(DateTime_t3738529785_StaticFields, ___ParseTimeFormats_4)); }
	inline StringU5BU5D_t1281789340* get_ParseTimeFormats_4() const { return ___ParseTimeFormats_4; }
	inline StringU5BU5D_t1281789340** get_address_of_ParseTimeFormats_4() { return &___ParseTimeFormats_4; }
	inline void set_ParseTimeFormats_4(StringU5BU5D_t1281789340* value)
	{
		___ParseTimeFormats_4 = value;
		Il2CppCodeGenWriteBarrier((&___ParseTimeFormats_4), value);
	}

	inline static int32_t get_offset_of_ParseYearDayMonthFormats_5() { return static_cast<int32_t>(offsetof(DateTime_t3738529785_StaticFields, ___ParseYearDayMonthFormats_5)); }
	inline StringU5BU5D_t1281789340* get_ParseYearDayMonthFormats_5() const { return ___ParseYearDayMonthFormats_5; }
	inline StringU5BU5D_t1281789340** get_address_of_ParseYearDayMonthFormats_5() { return &___ParseYearDayMonthFormats_5; }
	inline void set_ParseYearDayMonthFormats_5(StringU5BU5D_t1281789340* value)
	{
		___ParseYearDayMonthFormats_5 = value;
		Il2CppCodeGenWriteBarrier((&___ParseYearDayMonthFormats_5), value);
	}

	inline static int32_t get_offset_of_ParseYearMonthDayFormats_6() { return static_cast<int32_t>(offsetof(DateTime_t3738529785_StaticFields, ___ParseYearMonthDayFormats_6)); }
	inline StringU5BU5D_t1281789340* get_ParseYearMonthDayFormats_6() const { return ___ParseYearMonthDayFormats_6; }
	inline StringU5BU5D_t1281789340** get_address_of_ParseYearMonthDayFormats_6() { return &___ParseYearMonthDayFormats_6; }
	inline void set_ParseYearMonthDayFormats_6(StringU5BU5D_t1281789340* value)
	{
		___ParseYearMonthDayFormats_6 = value;
		Il2CppCodeGenWriteBarrier((&___ParseYearMonthDayFormats_6), value);
	}

	inline static int32_t get_offset_of_ParseDayMonthYearFormats_7() { return static_cast<int32_t>(offsetof(DateTime_t3738529785_StaticFields, ___ParseDayMonthYearFormats_7)); }
	inline StringU5BU5D_t1281789340* get_ParseDayMonthYearFormats_7() const { return ___ParseDayMonthYearFormats_7; }
	inline StringU5BU5D_t1281789340** get_address_of_ParseDayMonthYearFormats_7() { return &___ParseDayMonthYearFormats_7; }
	inline void set_ParseDayMonthYearFormats_7(StringU5BU5D_t1281789340* value)
	{
		___ParseDayMonthYearFormats_7 = value;
		Il2CppCodeGenWriteBarrier((&___ParseDayMonthYearFormats_7), value);
	}

	inline static int32_t get_offset_of_ParseMonthDayYearFormats_8() { return static_cast<int32_t>(offsetof(DateTime_t3738529785_StaticFields, ___ParseMonthDayYearFormats_8)); }
	inline StringU5BU5D_t1281789340* get_ParseMonthDayYearFormats_8() const { return ___ParseMonthDayYearFormats_8; }
	inline StringU5BU5D_t1281789340** get_address_of_ParseMonthDayYearFormats_8() { return &___ParseMonthDayYearFormats_8; }
	inline void set_ParseMonthDayYearFormats_8(StringU5BU5D_t1281789340* value)
	{
		___ParseMonthDayYearFormats_8 = value;
		Il2CppCodeGenWriteBarrier((&___ParseMonthDayYearFormats_8), value);
	}

	inline static int32_t get_offset_of_MonthDayShortFormats_9() { return static_cast<int32_t>(offsetof(DateTime_t3738529785_StaticFields, ___MonthDayShortFormats_9)); }
	inline StringU5BU5D_t1281789340* get_MonthDayShortFormats_9() const { return ___MonthDayShortFormats_9; }
	inline StringU5BU5D_t1281789340** get_address_of_MonthDayShortFormats_9() { return &___MonthDayShortFormats_9; }
	inline void set_MonthDayShortFormats_9(StringU5BU5D_t1281789340* value)
	{
		___MonthDayShortFormats_9 = value;
		Il2CppCodeGenWriteBarrier((&___MonthDayShortFormats_9), value);
	}

	inline static int32_t get_offset_of_DayMonthShortFormats_10() { return static_cast<int32_t>(offsetof(DateTime_t3738529785_StaticFields, ___DayMonthShortFormats_10)); }
	inline StringU5BU5D_t1281789340* get_DayMonthShortFormats_10() const { return ___DayMonthShortFormats_10; }
	inline StringU5BU5D_t1281789340** get_address_of_DayMonthShortFormats_10() { return &___DayMonthShortFormats_10; }
	inline void set_DayMonthShortFormats_10(StringU5BU5D_t1281789340* value)
	{
		___DayMonthShortFormats_10 = value;
		Il2CppCodeGenWriteBarrier((&___DayMonthShortFormats_10), value);
	}

	inline static int32_t get_offset_of_daysmonth_11() { return static_cast<int32_t>(offsetof(DateTime_t3738529785_StaticFields, ___daysmonth_11)); }
	inline Int32U5BU5D_t385246372* get_daysmonth_11() const { return ___daysmonth_11; }
	inline Int32U5BU5D_t385246372** get_address_of_daysmonth_11() { return &___daysmonth_11; }
	inline void set_daysmonth_11(Int32U5BU5D_t385246372* value)
	{
		___daysmonth_11 = value;
		Il2CppCodeGenWriteBarrier((&___daysmonth_11), value);
	}

	inline static int32_t get_offset_of_daysmonthleap_12() { return static_cast<int32_t>(offsetof(DateTime_t3738529785_StaticFields, ___daysmonthleap_12)); }
	inline Int32U5BU5D_t385246372* get_daysmonthleap_12() const { return ___daysmonthleap_12; }
	inline Int32U5BU5D_t385246372** get_address_of_daysmonthleap_12() { return &___daysmonthleap_12; }
	inline void set_daysmonthleap_12(Int32U5BU5D_t385246372* value)
	{
		___daysmonthleap_12 = value;
		Il2CppCodeGenWriteBarrier((&___daysmonthleap_12), value);
	}

	inline static int32_t get_offset_of_to_local_time_span_object_13() { return static_cast<int32_t>(offsetof(DateTime_t3738529785_StaticFields, ___to_local_time_span_object_13)); }
	inline RuntimeObject * get_to_local_time_span_object_13() const { return ___to_local_time_span_object_13; }
	inline RuntimeObject ** get_address_of_to_local_time_span_object_13() { return &___to_local_time_span_object_13; }
	inline void set_to_local_time_span_object_13(RuntimeObject * value)
	{
		___to_local_time_span_object_13 = value;
		Il2CppCodeGenWriteBarrier((&___to_local_time_span_object_13), value);
	}

	inline static int32_t get_offset_of_last_now_14() { return static_cast<int32_t>(offsetof(DateTime_t3738529785_StaticFields, ___last_now_14)); }
	inline int64_t get_last_now_14() const { return ___last_now_14; }
	inline int64_t* get_address_of_last_now_14() { return &___last_now_14; }
	inline void set_last_now_14(int64_t value)
	{
		___last_now_14 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DATETIME_T3738529785_H
#ifndef ADVERTISINGRESULT_T1229207569_H
#define ADVERTISINGRESULT_T1229207569_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// GooglePlayGames.BasicApi.Nearby.AdvertisingResult
struct  AdvertisingResult_t1229207569 
{
public:
	// GooglePlayGames.BasicApi.ResponseStatus GooglePlayGames.BasicApi.Nearby.AdvertisingResult::mStatus
	int32_t ___mStatus_0;
	// System.String GooglePlayGames.BasicApi.Nearby.AdvertisingResult::mLocalEndpointName
	String_t* ___mLocalEndpointName_1;

public:
	inline static int32_t get_offset_of_mStatus_0() { return static_cast<int32_t>(offsetof(AdvertisingResult_t1229207569, ___mStatus_0)); }
	inline int32_t get_mStatus_0() const { return ___mStatus_0; }
	inline int32_t* get_address_of_mStatus_0() { return &___mStatus_0; }
	inline void set_mStatus_0(int32_t value)
	{
		___mStatus_0 = value;
	}

	inline static int32_t get_offset_of_mLocalEndpointName_1() { return static_cast<int32_t>(offsetof(AdvertisingResult_t1229207569, ___mLocalEndpointName_1)); }
	inline String_t* get_mLocalEndpointName_1() const { return ___mLocalEndpointName_1; }
	inline String_t** get_address_of_mLocalEndpointName_1() { return &___mLocalEndpointName_1; }
	inline void set_mLocalEndpointName_1(String_t* value)
	{
		___mLocalEndpointName_1 = value;
		Il2CppCodeGenWriteBarrier((&___mLocalEndpointName_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of GooglePlayGames.BasicApi.Nearby.AdvertisingResult
struct AdvertisingResult_t1229207569_marshaled_pinvoke
{
	int32_t ___mStatus_0;
	char* ___mLocalEndpointName_1;
};
// Native definition for COM marshalling of GooglePlayGames.BasicApi.Nearby.AdvertisingResult
struct AdvertisingResult_t1229207569_marshaled_com
{
	int32_t ___mStatus_0;
	Il2CppChar* ___mLocalEndpointName_1;
};
#endif // ADVERTISINGRESULT_T1229207569_H
#ifndef CONNECTIONRESPONSE_T735328601_H
#define CONNECTIONRESPONSE_T735328601_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// GooglePlayGames.BasicApi.Nearby.ConnectionResponse
struct  ConnectionResponse_t735328601 
{
public:
	// System.Int64 GooglePlayGames.BasicApi.Nearby.ConnectionResponse::mLocalClientId
	int64_t ___mLocalClientId_1;
	// System.String GooglePlayGames.BasicApi.Nearby.ConnectionResponse::mRemoteEndpointId
	String_t* ___mRemoteEndpointId_2;
	// GooglePlayGames.BasicApi.Nearby.ConnectionResponse/Status GooglePlayGames.BasicApi.Nearby.ConnectionResponse::mResponseStatus
	int32_t ___mResponseStatus_3;
	// System.Byte[] GooglePlayGames.BasicApi.Nearby.ConnectionResponse::mPayload
	ByteU5BU5D_t4116647657* ___mPayload_4;

public:
	inline static int32_t get_offset_of_mLocalClientId_1() { return static_cast<int32_t>(offsetof(ConnectionResponse_t735328601, ___mLocalClientId_1)); }
	inline int64_t get_mLocalClientId_1() const { return ___mLocalClientId_1; }
	inline int64_t* get_address_of_mLocalClientId_1() { return &___mLocalClientId_1; }
	inline void set_mLocalClientId_1(int64_t value)
	{
		___mLocalClientId_1 = value;
	}

	inline static int32_t get_offset_of_mRemoteEndpointId_2() { return static_cast<int32_t>(offsetof(ConnectionResponse_t735328601, ___mRemoteEndpointId_2)); }
	inline String_t* get_mRemoteEndpointId_2() const { return ___mRemoteEndpointId_2; }
	inline String_t** get_address_of_mRemoteEndpointId_2() { return &___mRemoteEndpointId_2; }
	inline void set_mRemoteEndpointId_2(String_t* value)
	{
		___mRemoteEndpointId_2 = value;
		Il2CppCodeGenWriteBarrier((&___mRemoteEndpointId_2), value);
	}

	inline static int32_t get_offset_of_mResponseStatus_3() { return static_cast<int32_t>(offsetof(ConnectionResponse_t735328601, ___mResponseStatus_3)); }
	inline int32_t get_mResponseStatus_3() const { return ___mResponseStatus_3; }
	inline int32_t* get_address_of_mResponseStatus_3() { return &___mResponseStatus_3; }
	inline void set_mResponseStatus_3(int32_t value)
	{
		___mResponseStatus_3 = value;
	}

	inline static int32_t get_offset_of_mPayload_4() { return static_cast<int32_t>(offsetof(ConnectionResponse_t735328601, ___mPayload_4)); }
	inline ByteU5BU5D_t4116647657* get_mPayload_4() const { return ___mPayload_4; }
	inline ByteU5BU5D_t4116647657** get_address_of_mPayload_4() { return &___mPayload_4; }
	inline void set_mPayload_4(ByteU5BU5D_t4116647657* value)
	{
		___mPayload_4 = value;
		Il2CppCodeGenWriteBarrier((&___mPayload_4), value);
	}
};

struct ConnectionResponse_t735328601_StaticFields
{
public:
	// System.Byte[] GooglePlayGames.BasicApi.Nearby.ConnectionResponse::EmptyPayload
	ByteU5BU5D_t4116647657* ___EmptyPayload_0;

public:
	inline static int32_t get_offset_of_EmptyPayload_0() { return static_cast<int32_t>(offsetof(ConnectionResponse_t735328601_StaticFields, ___EmptyPayload_0)); }
	inline ByteU5BU5D_t4116647657* get_EmptyPayload_0() const { return ___EmptyPayload_0; }
	inline ByteU5BU5D_t4116647657** get_address_of_EmptyPayload_0() { return &___EmptyPayload_0; }
	inline void set_EmptyPayload_0(ByteU5BU5D_t4116647657* value)
	{
		___EmptyPayload_0 = value;
		Il2CppCodeGenWriteBarrier((&___EmptyPayload_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of GooglePlayGames.BasicApi.Nearby.ConnectionResponse
struct ConnectionResponse_t735328601_marshaled_pinvoke
{
	int64_t ___mLocalClientId_1;
	char* ___mRemoteEndpointId_2;
	int32_t ___mResponseStatus_3;
	uint8_t* ___mPayload_4;
};
// Native definition for COM marshalling of GooglePlayGames.BasicApi.Nearby.ConnectionResponse
struct ConnectionResponse_t735328601_marshaled_com
{
	int64_t ___mLocalClientId_1;
	Il2CppChar* ___mRemoteEndpointId_2;
	int32_t ___mResponseStatus_3;
	uint8_t* ___mPayload_4;
};
#endif // CONNECTIONRESPONSE_T735328601_H
#ifndef TEXTASSET_T3022178571_H
#define TEXTASSET_T3022178571_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.TextAsset
struct  TextAsset_t3022178571  : public Object_t631007953
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TEXTASSET_T3022178571_H
#ifndef ACTION_1_T269755560_H
#define ACTION_1_T269755560_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Action`1<System.Boolean>
struct  Action_1_t269755560  : public MulticastDelegate_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ACTION_1_T269755560_H
#ifndef TRANSFORM_T3600365921_H
#define TRANSFORM_T3600365921_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Transform
struct  Transform_t3600365921  : public Component_t1923634451
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TRANSFORM_T3600365921_H
#ifndef ACTION_T1264377477_H
#define ACTION_T1264377477_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Action
struct  Action_t1264377477  : public MulticastDelegate_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ACTION_T1264377477_H
#ifndef CONVERTER_2_T751170091_H
#define CONVERTER_2_T751170091_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Converter`2<System.String,System.Int32>
struct  Converter_2_t751170091  : public MulticastDelegate_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CONVERTER_2_T751170091_H
#ifndef ASYNCCALLBACK_T3962456242_H
#define ASYNCCALLBACK_T3962456242_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.AsyncCallback
struct  AsyncCallback_t3962456242  : public MulticastDelegate_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ASYNCCALLBACK_T3962456242_H
#ifndef UNITYACTION_T3245792599_H
#define UNITYACTION_T3245792599_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Events.UnityAction
struct  UnityAction_t3245792599  : public MulticastDelegate_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // UNITYACTION_T3245792599_H
#ifndef BEHAVIOUR_T1437897464_H
#define BEHAVIOUR_T1437897464_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Behaviour
struct  Behaviour_t1437897464  : public Component_t1923634451
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // BEHAVIOUR_T1437897464_H
#ifndef FUNC_2_T1267953766_H
#define FUNC_2_T1267953766_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Func`2<System.Boolean,System.String>
struct  Func_2_t1267953766  : public MulticastDelegate_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // FUNC_2_T1267953766_H
#ifndef CONFLICTCALLBACK_T4045994657_H
#define CONFLICTCALLBACK_T4045994657_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// GooglePlayGames.BasicApi.SavedGame.ConflictCallback
struct  ConflictCallback_t4045994657  : public MulticastDelegate_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CONFLICTCALLBACK_T4045994657_H
#ifndef ACTION_1_T2609895709_H
#define ACTION_1_T2609895709_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Action`1<GooglePlayGames.BasicApi.Nearby.InitializationStatus>
struct  Action_1_t2609895709  : public MulticastDelegate_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ACTION_1_T2609895709_H
#ifndef MONOBEHAVIOUR_T3962482529_H
#define MONOBEHAVIOUR_T3962482529_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.MonoBehaviour
struct  MonoBehaviour_t3962482529  : public Behaviour_t1437897464
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MONOBEHAVIOUR_T3962482529_H
#ifndef RECTTRANSFORM_T3704657025_H
#define RECTTRANSFORM_T3704657025_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.RectTransform
struct  RectTransform_t3704657025  : public Transform_t3600365921
{
public:

public:
};

struct RectTransform_t3704657025_StaticFields
{
public:
	// UnityEngine.RectTransform/ReapplyDrivenProperties UnityEngine.RectTransform::reapplyDrivenProperties
	ReapplyDrivenProperties_t1258266594 * ___reapplyDrivenProperties_2;

public:
	inline static int32_t get_offset_of_reapplyDrivenProperties_2() { return static_cast<int32_t>(offsetof(RectTransform_t3704657025_StaticFields, ___reapplyDrivenProperties_2)); }
	inline ReapplyDrivenProperties_t1258266594 * get_reapplyDrivenProperties_2() const { return ___reapplyDrivenProperties_2; }
	inline ReapplyDrivenProperties_t1258266594 ** get_address_of_reapplyDrivenProperties_2() { return &___reapplyDrivenProperties_2; }
	inline void set_reapplyDrivenProperties_2(ReapplyDrivenProperties_t1258266594 * value)
	{
		___reapplyDrivenProperties_2 = value;
		Il2CppCodeGenWriteBarrier((&___reapplyDrivenProperties_2), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RECTTRANSFORM_T3704657025_H
#ifndef DRAGGALLERYCONTENTSCRIPT_T2491726244_H
#define DRAGGALLERYCONTENTSCRIPT_T2491726244_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// DragGalleryContentScript
struct  DragGalleryContentScript_t2491726244  : public MonoBehaviour_t3962482529
{
public:
	// MainSceneManager DragGalleryContentScript::main_scene_manager
	MainSceneManager_t2603182452 * ___main_scene_manager_2;
	// System.Single DragGalleryContentScript::DRAG_DISTANCE
	float ___DRAG_DISTANCE_3;
	// System.Single DragGalleryContentScript::MOVE_SPEED
	float ___MOVE_SPEED_4;
	// System.Int32 DragGalleryContentScript::HORIZONTAL_NUM
	int32_t ___HORIZONTAL_NUM_5;
	// System.Int32 DragGalleryContentScript::VERTICAL_NUM
	int32_t ___VERTICAL_NUM_6;
	// UnityEngine.Sprite[] DragGalleryContentScript::stars
	SpriteU5BU5D_t2581906349* ___stars_7;
	// UnityEngine.UI.ScrollRect DragGalleryContentScript::scrollRect
	ScrollRect_t4137855814 * ___scrollRect_8;
	// System.Int32 DragGalleryContentScript::_now_page_num
	int32_t ____now_page_num_9;
	// System.Int32 DragGalleryContentScript::_total_page_num
	int32_t ____total_page_num_10;
	// UnityEngine.Vector3 DragGalleryContentScript::_mouse_down_pos
	Vector3_t3722313464  ____mouse_down_pos_11;
	// UnityEngine.Vector3 DragGalleryContentScript::_mouse_up_pos
	Vector3_t3722313464  ____mouse_up_pos_12;
	// System.Single DragGalleryContentScript::_dest_pos
	float ____dest_pos_13;
	// System.Boolean DragGalleryContentScript::_moving
	bool ____moving_14;
	// System.Boolean DragGalleryContentScript::isInit
	bool ___isInit_15;

public:
	inline static int32_t get_offset_of_main_scene_manager_2() { return static_cast<int32_t>(offsetof(DragGalleryContentScript_t2491726244, ___main_scene_manager_2)); }
	inline MainSceneManager_t2603182452 * get_main_scene_manager_2() const { return ___main_scene_manager_2; }
	inline MainSceneManager_t2603182452 ** get_address_of_main_scene_manager_2() { return &___main_scene_manager_2; }
	inline void set_main_scene_manager_2(MainSceneManager_t2603182452 * value)
	{
		___main_scene_manager_2 = value;
		Il2CppCodeGenWriteBarrier((&___main_scene_manager_2), value);
	}

	inline static int32_t get_offset_of_DRAG_DISTANCE_3() { return static_cast<int32_t>(offsetof(DragGalleryContentScript_t2491726244, ___DRAG_DISTANCE_3)); }
	inline float get_DRAG_DISTANCE_3() const { return ___DRAG_DISTANCE_3; }
	inline float* get_address_of_DRAG_DISTANCE_3() { return &___DRAG_DISTANCE_3; }
	inline void set_DRAG_DISTANCE_3(float value)
	{
		___DRAG_DISTANCE_3 = value;
	}

	inline static int32_t get_offset_of_MOVE_SPEED_4() { return static_cast<int32_t>(offsetof(DragGalleryContentScript_t2491726244, ___MOVE_SPEED_4)); }
	inline float get_MOVE_SPEED_4() const { return ___MOVE_SPEED_4; }
	inline float* get_address_of_MOVE_SPEED_4() { return &___MOVE_SPEED_4; }
	inline void set_MOVE_SPEED_4(float value)
	{
		___MOVE_SPEED_4 = value;
	}

	inline static int32_t get_offset_of_HORIZONTAL_NUM_5() { return static_cast<int32_t>(offsetof(DragGalleryContentScript_t2491726244, ___HORIZONTAL_NUM_5)); }
	inline int32_t get_HORIZONTAL_NUM_5() const { return ___HORIZONTAL_NUM_5; }
	inline int32_t* get_address_of_HORIZONTAL_NUM_5() { return &___HORIZONTAL_NUM_5; }
	inline void set_HORIZONTAL_NUM_5(int32_t value)
	{
		___HORIZONTAL_NUM_5 = value;
	}

	inline static int32_t get_offset_of_VERTICAL_NUM_6() { return static_cast<int32_t>(offsetof(DragGalleryContentScript_t2491726244, ___VERTICAL_NUM_6)); }
	inline int32_t get_VERTICAL_NUM_6() const { return ___VERTICAL_NUM_6; }
	inline int32_t* get_address_of_VERTICAL_NUM_6() { return &___VERTICAL_NUM_6; }
	inline void set_VERTICAL_NUM_6(int32_t value)
	{
		___VERTICAL_NUM_6 = value;
	}

	inline static int32_t get_offset_of_stars_7() { return static_cast<int32_t>(offsetof(DragGalleryContentScript_t2491726244, ___stars_7)); }
	inline SpriteU5BU5D_t2581906349* get_stars_7() const { return ___stars_7; }
	inline SpriteU5BU5D_t2581906349** get_address_of_stars_7() { return &___stars_7; }
	inline void set_stars_7(SpriteU5BU5D_t2581906349* value)
	{
		___stars_7 = value;
		Il2CppCodeGenWriteBarrier((&___stars_7), value);
	}

	inline static int32_t get_offset_of_scrollRect_8() { return static_cast<int32_t>(offsetof(DragGalleryContentScript_t2491726244, ___scrollRect_8)); }
	inline ScrollRect_t4137855814 * get_scrollRect_8() const { return ___scrollRect_8; }
	inline ScrollRect_t4137855814 ** get_address_of_scrollRect_8() { return &___scrollRect_8; }
	inline void set_scrollRect_8(ScrollRect_t4137855814 * value)
	{
		___scrollRect_8 = value;
		Il2CppCodeGenWriteBarrier((&___scrollRect_8), value);
	}

	inline static int32_t get_offset_of__now_page_num_9() { return static_cast<int32_t>(offsetof(DragGalleryContentScript_t2491726244, ____now_page_num_9)); }
	inline int32_t get__now_page_num_9() const { return ____now_page_num_9; }
	inline int32_t* get_address_of__now_page_num_9() { return &____now_page_num_9; }
	inline void set__now_page_num_9(int32_t value)
	{
		____now_page_num_9 = value;
	}

	inline static int32_t get_offset_of__total_page_num_10() { return static_cast<int32_t>(offsetof(DragGalleryContentScript_t2491726244, ____total_page_num_10)); }
	inline int32_t get__total_page_num_10() const { return ____total_page_num_10; }
	inline int32_t* get_address_of__total_page_num_10() { return &____total_page_num_10; }
	inline void set__total_page_num_10(int32_t value)
	{
		____total_page_num_10 = value;
	}

	inline static int32_t get_offset_of__mouse_down_pos_11() { return static_cast<int32_t>(offsetof(DragGalleryContentScript_t2491726244, ____mouse_down_pos_11)); }
	inline Vector3_t3722313464  get__mouse_down_pos_11() const { return ____mouse_down_pos_11; }
	inline Vector3_t3722313464 * get_address_of__mouse_down_pos_11() { return &____mouse_down_pos_11; }
	inline void set__mouse_down_pos_11(Vector3_t3722313464  value)
	{
		____mouse_down_pos_11 = value;
	}

	inline static int32_t get_offset_of__mouse_up_pos_12() { return static_cast<int32_t>(offsetof(DragGalleryContentScript_t2491726244, ____mouse_up_pos_12)); }
	inline Vector3_t3722313464  get__mouse_up_pos_12() const { return ____mouse_up_pos_12; }
	inline Vector3_t3722313464 * get_address_of__mouse_up_pos_12() { return &____mouse_up_pos_12; }
	inline void set__mouse_up_pos_12(Vector3_t3722313464  value)
	{
		____mouse_up_pos_12 = value;
	}

	inline static int32_t get_offset_of__dest_pos_13() { return static_cast<int32_t>(offsetof(DragGalleryContentScript_t2491726244, ____dest_pos_13)); }
	inline float get__dest_pos_13() const { return ____dest_pos_13; }
	inline float* get_address_of__dest_pos_13() { return &____dest_pos_13; }
	inline void set__dest_pos_13(float value)
	{
		____dest_pos_13 = value;
	}

	inline static int32_t get_offset_of__moving_14() { return static_cast<int32_t>(offsetof(DragGalleryContentScript_t2491726244, ____moving_14)); }
	inline bool get__moving_14() const { return ____moving_14; }
	inline bool* get_address_of__moving_14() { return &____moving_14; }
	inline void set__moving_14(bool value)
	{
		____moving_14 = value;
	}

	inline static int32_t get_offset_of_isInit_15() { return static_cast<int32_t>(offsetof(DragGalleryContentScript_t2491726244, ___isInit_15)); }
	inline bool get_isInit_15() const { return ___isInit_15; }
	inline bool* get_address_of_isInit_15() { return &___isInit_15; }
	inline void set_isInit_15(bool value)
	{
		___isInit_15 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DRAGGALLERYCONTENTSCRIPT_T2491726244_H
#ifndef DONTDESTROYMANAGER_T1329034447_H
#define DONTDESTROYMANAGER_T1329034447_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// DontDestroyManager
struct  DontDestroyManager_t1329034447  : public MonoBehaviour_t3962482529
{
public:
	// GameManager DontDestroyManager::_game_manager
	GameManager_t1536523654 * ____game_manager_2;
	// System.String DontDestroyManager::_last_played_date
	String_t* ____last_played_date_5;
	// SocialTool DontDestroyManager::socialTool
	SocialTool_t1909827527 * ___socialTool_6;
	// BlurManager DontDestroyManager::blurManager
	BlurManager_t3192295244 * ___blurManager_7;

public:
	inline static int32_t get_offset_of__game_manager_2() { return static_cast<int32_t>(offsetof(DontDestroyManager_t1329034447, ____game_manager_2)); }
	inline GameManager_t1536523654 * get__game_manager_2() const { return ____game_manager_2; }
	inline GameManager_t1536523654 ** get_address_of__game_manager_2() { return &____game_manager_2; }
	inline void set__game_manager_2(GameManager_t1536523654 * value)
	{
		____game_manager_2 = value;
		Il2CppCodeGenWriteBarrier((&____game_manager_2), value);
	}

	inline static int32_t get_offset_of__last_played_date_5() { return static_cast<int32_t>(offsetof(DontDestroyManager_t1329034447, ____last_played_date_5)); }
	inline String_t* get__last_played_date_5() const { return ____last_played_date_5; }
	inline String_t** get_address_of__last_played_date_5() { return &____last_played_date_5; }
	inline void set__last_played_date_5(String_t* value)
	{
		____last_played_date_5 = value;
		Il2CppCodeGenWriteBarrier((&____last_played_date_5), value);
	}

	inline static int32_t get_offset_of_socialTool_6() { return static_cast<int32_t>(offsetof(DontDestroyManager_t1329034447, ___socialTool_6)); }
	inline SocialTool_t1909827527 * get_socialTool_6() const { return ___socialTool_6; }
	inline SocialTool_t1909827527 ** get_address_of_socialTool_6() { return &___socialTool_6; }
	inline void set_socialTool_6(SocialTool_t1909827527 * value)
	{
		___socialTool_6 = value;
		Il2CppCodeGenWriteBarrier((&___socialTool_6), value);
	}

	inline static int32_t get_offset_of_blurManager_7() { return static_cast<int32_t>(offsetof(DontDestroyManager_t1329034447, ___blurManager_7)); }
	inline BlurManager_t3192295244 * get_blurManager_7() const { return ___blurManager_7; }
	inline BlurManager_t3192295244 ** get_address_of_blurManager_7() { return &___blurManager_7; }
	inline void set_blurManager_7(BlurManager_t3192295244 * value)
	{
		___blurManager_7 = value;
		Il2CppCodeGenWriteBarrier((&___blurManager_7), value);
	}
};

struct DontDestroyManager_t1329034447_StaticFields
{
public:
	// System.Int32 DontDestroyManager::_soul_num
	int32_t ____soul_num_3;
	// System.String[] DontDestroyManager::pictures
	StringU5BU5D_t1281789340* ___pictures_4;

public:
	inline static int32_t get_offset_of__soul_num_3() { return static_cast<int32_t>(offsetof(DontDestroyManager_t1329034447_StaticFields, ____soul_num_3)); }
	inline int32_t get__soul_num_3() const { return ____soul_num_3; }
	inline int32_t* get_address_of__soul_num_3() { return &____soul_num_3; }
	inline void set__soul_num_3(int32_t value)
	{
		____soul_num_3 = value;
	}

	inline static int32_t get_offset_of_pictures_4() { return static_cast<int32_t>(offsetof(DontDestroyManager_t1329034447_StaticFields, ___pictures_4)); }
	inline StringU5BU5D_t1281789340* get_pictures_4() const { return ___pictures_4; }
	inline StringU5BU5D_t1281789340** get_address_of_pictures_4() { return &___pictures_4; }
	inline void set_pictures_4(StringU5BU5D_t1281789340* value)
	{
		___pictures_4 = value;
		Il2CppCodeGenWriteBarrier((&___pictures_4), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DONTDESTROYMANAGER_T1329034447_H
#ifndef PLAYBOARDGAMESCENEMANAGER_T1063580347_H
#define PLAYBOARDGAMESCENEMANAGER_T1063580347_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// PlayBoardGameSceneManager
struct  PlayBoardGameSceneManager_t1063580347  : public MonoBehaviour_t3962482529
{
public:
	// UnityEngine.GameObject PlayBoardGameSceneManager::_board_parent_obj
	GameObject_t1113636619 * ____board_parent_obj_2;
	// UnityEngine.GameObject PlayBoardGameSceneManager::_complete_image_obj
	GameObject_t1113636619 * ____complete_image_obj_3;
	// UnityEngine.GameObject PlayBoardGameSceneManager::resetButton
	GameObject_t1113636619 * ___resetButton_4;
	// UnityEngine.UI.Text PlayBoardGameSceneManager::_soul_num_txt
	Text_t1901882714 * ____soul_num_txt_5;
	// UnityEngine.Transform PlayBoardGameSceneManager::titleImage
	Transform_t3600365921 * ___titleImage_6;
	// GameManager PlayBoardGameSceneManager::game_manager
	GameManager_t1536523654 * ___game_manager_7;
	// UnityEngine.Sprite[] PlayBoardGameSceneManager::_sprites
	SpriteU5BU5D_t2581906349* ____sprites_8;
	// System.String PlayBoardGameSceneManager::_complete_image_name
	String_t* ____complete_image_name_9;

public:
	inline static int32_t get_offset_of__board_parent_obj_2() { return static_cast<int32_t>(offsetof(PlayBoardGameSceneManager_t1063580347, ____board_parent_obj_2)); }
	inline GameObject_t1113636619 * get__board_parent_obj_2() const { return ____board_parent_obj_2; }
	inline GameObject_t1113636619 ** get_address_of__board_parent_obj_2() { return &____board_parent_obj_2; }
	inline void set__board_parent_obj_2(GameObject_t1113636619 * value)
	{
		____board_parent_obj_2 = value;
		Il2CppCodeGenWriteBarrier((&____board_parent_obj_2), value);
	}

	inline static int32_t get_offset_of__complete_image_obj_3() { return static_cast<int32_t>(offsetof(PlayBoardGameSceneManager_t1063580347, ____complete_image_obj_3)); }
	inline GameObject_t1113636619 * get__complete_image_obj_3() const { return ____complete_image_obj_3; }
	inline GameObject_t1113636619 ** get_address_of__complete_image_obj_3() { return &____complete_image_obj_3; }
	inline void set__complete_image_obj_3(GameObject_t1113636619 * value)
	{
		____complete_image_obj_3 = value;
		Il2CppCodeGenWriteBarrier((&____complete_image_obj_3), value);
	}

	inline static int32_t get_offset_of_resetButton_4() { return static_cast<int32_t>(offsetof(PlayBoardGameSceneManager_t1063580347, ___resetButton_4)); }
	inline GameObject_t1113636619 * get_resetButton_4() const { return ___resetButton_4; }
	inline GameObject_t1113636619 ** get_address_of_resetButton_4() { return &___resetButton_4; }
	inline void set_resetButton_4(GameObject_t1113636619 * value)
	{
		___resetButton_4 = value;
		Il2CppCodeGenWriteBarrier((&___resetButton_4), value);
	}

	inline static int32_t get_offset_of__soul_num_txt_5() { return static_cast<int32_t>(offsetof(PlayBoardGameSceneManager_t1063580347, ____soul_num_txt_5)); }
	inline Text_t1901882714 * get__soul_num_txt_5() const { return ____soul_num_txt_5; }
	inline Text_t1901882714 ** get_address_of__soul_num_txt_5() { return &____soul_num_txt_5; }
	inline void set__soul_num_txt_5(Text_t1901882714 * value)
	{
		____soul_num_txt_5 = value;
		Il2CppCodeGenWriteBarrier((&____soul_num_txt_5), value);
	}

	inline static int32_t get_offset_of_titleImage_6() { return static_cast<int32_t>(offsetof(PlayBoardGameSceneManager_t1063580347, ___titleImage_6)); }
	inline Transform_t3600365921 * get_titleImage_6() const { return ___titleImage_6; }
	inline Transform_t3600365921 ** get_address_of_titleImage_6() { return &___titleImage_6; }
	inline void set_titleImage_6(Transform_t3600365921 * value)
	{
		___titleImage_6 = value;
		Il2CppCodeGenWriteBarrier((&___titleImage_6), value);
	}

	inline static int32_t get_offset_of_game_manager_7() { return static_cast<int32_t>(offsetof(PlayBoardGameSceneManager_t1063580347, ___game_manager_7)); }
	inline GameManager_t1536523654 * get_game_manager_7() const { return ___game_manager_7; }
	inline GameManager_t1536523654 ** get_address_of_game_manager_7() { return &___game_manager_7; }
	inline void set_game_manager_7(GameManager_t1536523654 * value)
	{
		___game_manager_7 = value;
		Il2CppCodeGenWriteBarrier((&___game_manager_7), value);
	}

	inline static int32_t get_offset_of__sprites_8() { return static_cast<int32_t>(offsetof(PlayBoardGameSceneManager_t1063580347, ____sprites_8)); }
	inline SpriteU5BU5D_t2581906349* get__sprites_8() const { return ____sprites_8; }
	inline SpriteU5BU5D_t2581906349** get_address_of__sprites_8() { return &____sprites_8; }
	inline void set__sprites_8(SpriteU5BU5D_t2581906349* value)
	{
		____sprites_8 = value;
		Il2CppCodeGenWriteBarrier((&____sprites_8), value);
	}

	inline static int32_t get_offset_of__complete_image_name_9() { return static_cast<int32_t>(offsetof(PlayBoardGameSceneManager_t1063580347, ____complete_image_name_9)); }
	inline String_t* get__complete_image_name_9() const { return ____complete_image_name_9; }
	inline String_t** get_address_of__complete_image_name_9() { return &____complete_image_name_9; }
	inline void set__complete_image_name_9(String_t* value)
	{
		____complete_image_name_9 = value;
		Il2CppCodeGenWriteBarrier((&____complete_image_name_9), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // PLAYBOARDGAMESCENEMANAGER_T1063580347_H
#ifndef SOULPOPUPMANAGER_T3321416543_H
#define SOULPOPUPMANAGER_T3321416543_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// SoulPopUpManager
struct  SoulPopUpManager_t3321416543  : public MonoBehaviour_t3962482529
{
public:
	// System.Single SoulPopUpManager::PADDING
	float ___PADDING_2;
	// System.Single SoulPopUpManager::SOUL_DISTANCE
	float ___SOUL_DISTANCE_3;
	// UnityEngine.UI.Text SoulPopUpManager::_remain_time_txt
	Text_t1901882714 * ____remain_time_txt_6;
	// UnityEngine.GameObject SoulPopUpManager::_soul_area
	GameObject_t1113636619 * ____soul_area_7;
	// System.Int32 SoulPopUpManager::_collectable_soul_num
	int32_t ____collectable_soul_num_8;
	// System.String SoulPopUpManager::_last_opened_time
	String_t* ____last_opened_time_9;
	// System.Single SoulPopUpManager::_last_time_to_create_new_soul
	float ____last_time_to_create_new_soul_10;
	// GameManager SoulPopUpManager::game_manager
	GameManager_t1536523654 * ___game_manager_11;
	// System.Collections.Generic.List`1<UnityEngine.GameObject> SoulPopUpManager::_list_souls
	List_1_t2585711361 * ____list_souls_12;

public:
	inline static int32_t get_offset_of_PADDING_2() { return static_cast<int32_t>(offsetof(SoulPopUpManager_t3321416543, ___PADDING_2)); }
	inline float get_PADDING_2() const { return ___PADDING_2; }
	inline float* get_address_of_PADDING_2() { return &___PADDING_2; }
	inline void set_PADDING_2(float value)
	{
		___PADDING_2 = value;
	}

	inline static int32_t get_offset_of_SOUL_DISTANCE_3() { return static_cast<int32_t>(offsetof(SoulPopUpManager_t3321416543, ___SOUL_DISTANCE_3)); }
	inline float get_SOUL_DISTANCE_3() const { return ___SOUL_DISTANCE_3; }
	inline float* get_address_of_SOUL_DISTANCE_3() { return &___SOUL_DISTANCE_3; }
	inline void set_SOUL_DISTANCE_3(float value)
	{
		___SOUL_DISTANCE_3 = value;
	}

	inline static int32_t get_offset_of__remain_time_txt_6() { return static_cast<int32_t>(offsetof(SoulPopUpManager_t3321416543, ____remain_time_txt_6)); }
	inline Text_t1901882714 * get__remain_time_txt_6() const { return ____remain_time_txt_6; }
	inline Text_t1901882714 ** get_address_of__remain_time_txt_6() { return &____remain_time_txt_6; }
	inline void set__remain_time_txt_6(Text_t1901882714 * value)
	{
		____remain_time_txt_6 = value;
		Il2CppCodeGenWriteBarrier((&____remain_time_txt_6), value);
	}

	inline static int32_t get_offset_of__soul_area_7() { return static_cast<int32_t>(offsetof(SoulPopUpManager_t3321416543, ____soul_area_7)); }
	inline GameObject_t1113636619 * get__soul_area_7() const { return ____soul_area_7; }
	inline GameObject_t1113636619 ** get_address_of__soul_area_7() { return &____soul_area_7; }
	inline void set__soul_area_7(GameObject_t1113636619 * value)
	{
		____soul_area_7 = value;
		Il2CppCodeGenWriteBarrier((&____soul_area_7), value);
	}

	inline static int32_t get_offset_of__collectable_soul_num_8() { return static_cast<int32_t>(offsetof(SoulPopUpManager_t3321416543, ____collectable_soul_num_8)); }
	inline int32_t get__collectable_soul_num_8() const { return ____collectable_soul_num_8; }
	inline int32_t* get_address_of__collectable_soul_num_8() { return &____collectable_soul_num_8; }
	inline void set__collectable_soul_num_8(int32_t value)
	{
		____collectable_soul_num_8 = value;
	}

	inline static int32_t get_offset_of__last_opened_time_9() { return static_cast<int32_t>(offsetof(SoulPopUpManager_t3321416543, ____last_opened_time_9)); }
	inline String_t* get__last_opened_time_9() const { return ____last_opened_time_9; }
	inline String_t** get_address_of__last_opened_time_9() { return &____last_opened_time_9; }
	inline void set__last_opened_time_9(String_t* value)
	{
		____last_opened_time_9 = value;
		Il2CppCodeGenWriteBarrier((&____last_opened_time_9), value);
	}

	inline static int32_t get_offset_of__last_time_to_create_new_soul_10() { return static_cast<int32_t>(offsetof(SoulPopUpManager_t3321416543, ____last_time_to_create_new_soul_10)); }
	inline float get__last_time_to_create_new_soul_10() const { return ____last_time_to_create_new_soul_10; }
	inline float* get_address_of__last_time_to_create_new_soul_10() { return &____last_time_to_create_new_soul_10; }
	inline void set__last_time_to_create_new_soul_10(float value)
	{
		____last_time_to_create_new_soul_10 = value;
	}

	inline static int32_t get_offset_of_game_manager_11() { return static_cast<int32_t>(offsetof(SoulPopUpManager_t3321416543, ___game_manager_11)); }
	inline GameManager_t1536523654 * get_game_manager_11() const { return ___game_manager_11; }
	inline GameManager_t1536523654 ** get_address_of_game_manager_11() { return &___game_manager_11; }
	inline void set_game_manager_11(GameManager_t1536523654 * value)
	{
		___game_manager_11 = value;
		Il2CppCodeGenWriteBarrier((&___game_manager_11), value);
	}

	inline static int32_t get_offset_of__list_souls_12() { return static_cast<int32_t>(offsetof(SoulPopUpManager_t3321416543, ____list_souls_12)); }
	inline List_1_t2585711361 * get__list_souls_12() const { return ____list_souls_12; }
	inline List_1_t2585711361 ** get_address_of__list_souls_12() { return &____list_souls_12; }
	inline void set__list_souls_12(List_1_t2585711361 * value)
	{
		____list_souls_12 = value;
		Il2CppCodeGenWriteBarrier((&____list_souls_12), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SOULPOPUPMANAGER_T3321416543_H
#ifndef BLOCKGAMESCRIPT_T725110519_H
#define BLOCKGAMESCRIPT_T725110519_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// BlockGameScript
struct  BlockGameScript_t725110519  : public MonoBehaviour_t3962482529
{
public:
	// PlayBoardGameSceneManager BlockGameScript::playBoardGameSceneManager
	PlayBoardGameSceneManager_t1063580347 * ___playBoardGameSceneManager_2;
	// System.Single BlockGameScript::_tmp_color_right
	float ____tmp_color_right_3;
	// System.Single BlockGameScript::_tmp_color_wrong
	float ____tmp_color_wrong_4;
	// System.Single BlockGameScript::IMAGE_SIZE
	float ___IMAGE_SIZE_5;
	// System.Int32 BlockGameScript::BLOCK_NUM
	int32_t ___BLOCK_NUM_6;
	// System.Single BlockGameScript::BLOCK_SIZE
	float ___BLOCK_SIZE_7;
	// System.String BlockGameScript::BLANK_IMAGE_NAME
	String_t* ___BLANK_IMAGE_NAME_8;
	// System.Int32 BlockGameScript::BLANK_INDEX
	int32_t ___BLANK_INDEX_9;
	// UnityEngine.Transform[] BlockGameScript::_blocks
	TransformU5BU5D_t807237628* ____blocks_10;
	// UnityEngine.Sprite[] BlockGameScript::_sprites
	SpriteU5BU5D_t2581906349* ____sprites_11;
	// UnityEngine.Vector3[] BlockGameScript::_complete_location
	Vector3U5BU5D_t1718750761* ____complete_location_12;
	// System.Int32 BlockGameScript::_right_loc_num
	int32_t ____right_loc_num_13;
	// System.Boolean BlockGameScript::_mouse_down_on_board
	bool ____mouse_down_on_board_14;
	// UnityEngine.Transform BlockGameScript::_start_drag_obj
	Transform_t3600365921 * ____start_drag_obj_15;
	// UnityEngine.Vector3 BlockGameScript::_start_drag_obj_pos
	Vector3_t3722313464  ____start_drag_obj_pos_16;
	// UnityEngine.Transform BlockGameScript::_mouse_dragging_obj
	Transform_t3600365921 * ____mouse_dragging_obj_17;
	// System.Boolean BlockGameScript::_mouse_moved
	bool ____mouse_moved_18;
	// System.Boolean BlockGameScript::isCompleted
	bool ___isCompleted_19;

public:
	inline static int32_t get_offset_of_playBoardGameSceneManager_2() { return static_cast<int32_t>(offsetof(BlockGameScript_t725110519, ___playBoardGameSceneManager_2)); }
	inline PlayBoardGameSceneManager_t1063580347 * get_playBoardGameSceneManager_2() const { return ___playBoardGameSceneManager_2; }
	inline PlayBoardGameSceneManager_t1063580347 ** get_address_of_playBoardGameSceneManager_2() { return &___playBoardGameSceneManager_2; }
	inline void set_playBoardGameSceneManager_2(PlayBoardGameSceneManager_t1063580347 * value)
	{
		___playBoardGameSceneManager_2 = value;
		Il2CppCodeGenWriteBarrier((&___playBoardGameSceneManager_2), value);
	}

	inline static int32_t get_offset_of__tmp_color_right_3() { return static_cast<int32_t>(offsetof(BlockGameScript_t725110519, ____tmp_color_right_3)); }
	inline float get__tmp_color_right_3() const { return ____tmp_color_right_3; }
	inline float* get_address_of__tmp_color_right_3() { return &____tmp_color_right_3; }
	inline void set__tmp_color_right_3(float value)
	{
		____tmp_color_right_3 = value;
	}

	inline static int32_t get_offset_of__tmp_color_wrong_4() { return static_cast<int32_t>(offsetof(BlockGameScript_t725110519, ____tmp_color_wrong_4)); }
	inline float get__tmp_color_wrong_4() const { return ____tmp_color_wrong_4; }
	inline float* get_address_of__tmp_color_wrong_4() { return &____tmp_color_wrong_4; }
	inline void set__tmp_color_wrong_4(float value)
	{
		____tmp_color_wrong_4 = value;
	}

	inline static int32_t get_offset_of_IMAGE_SIZE_5() { return static_cast<int32_t>(offsetof(BlockGameScript_t725110519, ___IMAGE_SIZE_5)); }
	inline float get_IMAGE_SIZE_5() const { return ___IMAGE_SIZE_5; }
	inline float* get_address_of_IMAGE_SIZE_5() { return &___IMAGE_SIZE_5; }
	inline void set_IMAGE_SIZE_5(float value)
	{
		___IMAGE_SIZE_5 = value;
	}

	inline static int32_t get_offset_of_BLOCK_NUM_6() { return static_cast<int32_t>(offsetof(BlockGameScript_t725110519, ___BLOCK_NUM_6)); }
	inline int32_t get_BLOCK_NUM_6() const { return ___BLOCK_NUM_6; }
	inline int32_t* get_address_of_BLOCK_NUM_6() { return &___BLOCK_NUM_6; }
	inline void set_BLOCK_NUM_6(int32_t value)
	{
		___BLOCK_NUM_6 = value;
	}

	inline static int32_t get_offset_of_BLOCK_SIZE_7() { return static_cast<int32_t>(offsetof(BlockGameScript_t725110519, ___BLOCK_SIZE_7)); }
	inline float get_BLOCK_SIZE_7() const { return ___BLOCK_SIZE_7; }
	inline float* get_address_of_BLOCK_SIZE_7() { return &___BLOCK_SIZE_7; }
	inline void set_BLOCK_SIZE_7(float value)
	{
		___BLOCK_SIZE_7 = value;
	}

	inline static int32_t get_offset_of_BLANK_IMAGE_NAME_8() { return static_cast<int32_t>(offsetof(BlockGameScript_t725110519, ___BLANK_IMAGE_NAME_8)); }
	inline String_t* get_BLANK_IMAGE_NAME_8() const { return ___BLANK_IMAGE_NAME_8; }
	inline String_t** get_address_of_BLANK_IMAGE_NAME_8() { return &___BLANK_IMAGE_NAME_8; }
	inline void set_BLANK_IMAGE_NAME_8(String_t* value)
	{
		___BLANK_IMAGE_NAME_8 = value;
		Il2CppCodeGenWriteBarrier((&___BLANK_IMAGE_NAME_8), value);
	}

	inline static int32_t get_offset_of_BLANK_INDEX_9() { return static_cast<int32_t>(offsetof(BlockGameScript_t725110519, ___BLANK_INDEX_9)); }
	inline int32_t get_BLANK_INDEX_9() const { return ___BLANK_INDEX_9; }
	inline int32_t* get_address_of_BLANK_INDEX_9() { return &___BLANK_INDEX_9; }
	inline void set_BLANK_INDEX_9(int32_t value)
	{
		___BLANK_INDEX_9 = value;
	}

	inline static int32_t get_offset_of__blocks_10() { return static_cast<int32_t>(offsetof(BlockGameScript_t725110519, ____blocks_10)); }
	inline TransformU5BU5D_t807237628* get__blocks_10() const { return ____blocks_10; }
	inline TransformU5BU5D_t807237628** get_address_of__blocks_10() { return &____blocks_10; }
	inline void set__blocks_10(TransformU5BU5D_t807237628* value)
	{
		____blocks_10 = value;
		Il2CppCodeGenWriteBarrier((&____blocks_10), value);
	}

	inline static int32_t get_offset_of__sprites_11() { return static_cast<int32_t>(offsetof(BlockGameScript_t725110519, ____sprites_11)); }
	inline SpriteU5BU5D_t2581906349* get__sprites_11() const { return ____sprites_11; }
	inline SpriteU5BU5D_t2581906349** get_address_of__sprites_11() { return &____sprites_11; }
	inline void set__sprites_11(SpriteU5BU5D_t2581906349* value)
	{
		____sprites_11 = value;
		Il2CppCodeGenWriteBarrier((&____sprites_11), value);
	}

	inline static int32_t get_offset_of__complete_location_12() { return static_cast<int32_t>(offsetof(BlockGameScript_t725110519, ____complete_location_12)); }
	inline Vector3U5BU5D_t1718750761* get__complete_location_12() const { return ____complete_location_12; }
	inline Vector3U5BU5D_t1718750761** get_address_of__complete_location_12() { return &____complete_location_12; }
	inline void set__complete_location_12(Vector3U5BU5D_t1718750761* value)
	{
		____complete_location_12 = value;
		Il2CppCodeGenWriteBarrier((&____complete_location_12), value);
	}

	inline static int32_t get_offset_of__right_loc_num_13() { return static_cast<int32_t>(offsetof(BlockGameScript_t725110519, ____right_loc_num_13)); }
	inline int32_t get__right_loc_num_13() const { return ____right_loc_num_13; }
	inline int32_t* get_address_of__right_loc_num_13() { return &____right_loc_num_13; }
	inline void set__right_loc_num_13(int32_t value)
	{
		____right_loc_num_13 = value;
	}

	inline static int32_t get_offset_of__mouse_down_on_board_14() { return static_cast<int32_t>(offsetof(BlockGameScript_t725110519, ____mouse_down_on_board_14)); }
	inline bool get__mouse_down_on_board_14() const { return ____mouse_down_on_board_14; }
	inline bool* get_address_of__mouse_down_on_board_14() { return &____mouse_down_on_board_14; }
	inline void set__mouse_down_on_board_14(bool value)
	{
		____mouse_down_on_board_14 = value;
	}

	inline static int32_t get_offset_of__start_drag_obj_15() { return static_cast<int32_t>(offsetof(BlockGameScript_t725110519, ____start_drag_obj_15)); }
	inline Transform_t3600365921 * get__start_drag_obj_15() const { return ____start_drag_obj_15; }
	inline Transform_t3600365921 ** get_address_of__start_drag_obj_15() { return &____start_drag_obj_15; }
	inline void set__start_drag_obj_15(Transform_t3600365921 * value)
	{
		____start_drag_obj_15 = value;
		Il2CppCodeGenWriteBarrier((&____start_drag_obj_15), value);
	}

	inline static int32_t get_offset_of__start_drag_obj_pos_16() { return static_cast<int32_t>(offsetof(BlockGameScript_t725110519, ____start_drag_obj_pos_16)); }
	inline Vector3_t3722313464  get__start_drag_obj_pos_16() const { return ____start_drag_obj_pos_16; }
	inline Vector3_t3722313464 * get_address_of__start_drag_obj_pos_16() { return &____start_drag_obj_pos_16; }
	inline void set__start_drag_obj_pos_16(Vector3_t3722313464  value)
	{
		____start_drag_obj_pos_16 = value;
	}

	inline static int32_t get_offset_of__mouse_dragging_obj_17() { return static_cast<int32_t>(offsetof(BlockGameScript_t725110519, ____mouse_dragging_obj_17)); }
	inline Transform_t3600365921 * get__mouse_dragging_obj_17() const { return ____mouse_dragging_obj_17; }
	inline Transform_t3600365921 ** get_address_of__mouse_dragging_obj_17() { return &____mouse_dragging_obj_17; }
	inline void set__mouse_dragging_obj_17(Transform_t3600365921 * value)
	{
		____mouse_dragging_obj_17 = value;
		Il2CppCodeGenWriteBarrier((&____mouse_dragging_obj_17), value);
	}

	inline static int32_t get_offset_of__mouse_moved_18() { return static_cast<int32_t>(offsetof(BlockGameScript_t725110519, ____mouse_moved_18)); }
	inline bool get__mouse_moved_18() const { return ____mouse_moved_18; }
	inline bool* get_address_of__mouse_moved_18() { return &____mouse_moved_18; }
	inline void set__mouse_moved_18(bool value)
	{
		____mouse_moved_18 = value;
	}

	inline static int32_t get_offset_of_isCompleted_19() { return static_cast<int32_t>(offsetof(BlockGameScript_t725110519, ___isCompleted_19)); }
	inline bool get_isCompleted_19() const { return ___isCompleted_19; }
	inline bool* get_address_of_isCompleted_19() { return &___isCompleted_19; }
	inline void set_isCompleted_19(bool value)
	{
		___isCompleted_19 = value;
	}
};

struct BlockGameScript_t725110519_StaticFields
{
public:
	// System.Converter`2<System.String,System.Int32> BlockGameScript::<>f__mg$cache0
	Converter_2_t751170091 * ___U3CU3Ef__mgU24cache0_20;

public:
	inline static int32_t get_offset_of_U3CU3Ef__mgU24cache0_20() { return static_cast<int32_t>(offsetof(BlockGameScript_t725110519_StaticFields, ___U3CU3Ef__mgU24cache0_20)); }
	inline Converter_2_t751170091 * get_U3CU3Ef__mgU24cache0_20() const { return ___U3CU3Ef__mgU24cache0_20; }
	inline Converter_2_t751170091 ** get_address_of_U3CU3Ef__mgU24cache0_20() { return &___U3CU3Ef__mgU24cache0_20; }
	inline void set_U3CU3Ef__mgU24cache0_20(Converter_2_t751170091 * value)
	{
		___U3CU3Ef__mgU24cache0_20 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3Ef__mgU24cache0_20), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // BLOCKGAMESCRIPT_T725110519_H
#ifndef TOASTACTIVE_T2371010005_H
#define TOASTACTIVE_T2371010005_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// ToastActive
struct  ToastActive_t2371010005  : public MonoBehaviour_t3962482529
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TOASTACTIVE_T2371010005_H
#ifndef BLURMANAGER_T3192295244_H
#define BLURMANAGER_T3192295244_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// BlurManager
struct  BlurManager_t3192295244  : public MonoBehaviour_t3962482529
{
public:
	// UnityEngine.GameObject BlurManager::mainBack
	GameObject_t1113636619 * ___mainBack_2;
	// UnityEngine.UI.Text BlurManager::message
	Text_t1901882714 * ___message_3;
	// UnityEngine.UI.Button BlurManager::confirmButton
	Button_t4055032469 * ___confirmButton_4;
	// UnityEngine.Coroutine BlurManager::currentCoroutine
	Coroutine_t3829159415 * ___currentCoroutine_5;
	// UnityEngine.Material BlurManager::MaterialBlurUI
	Material_t340375123 * ___MaterialBlurUI_6;
	// System.Boolean BlurManager::isBlur
	bool ___isBlur_7;
	// System.Single BlurManager::blurSize
	float ___blurSize_8;
	// UnityEngine.Events.UnityAction BlurManager::confirmAction
	UnityAction_t3245792599 * ___confirmAction_9;

public:
	inline static int32_t get_offset_of_mainBack_2() { return static_cast<int32_t>(offsetof(BlurManager_t3192295244, ___mainBack_2)); }
	inline GameObject_t1113636619 * get_mainBack_2() const { return ___mainBack_2; }
	inline GameObject_t1113636619 ** get_address_of_mainBack_2() { return &___mainBack_2; }
	inline void set_mainBack_2(GameObject_t1113636619 * value)
	{
		___mainBack_2 = value;
		Il2CppCodeGenWriteBarrier((&___mainBack_2), value);
	}

	inline static int32_t get_offset_of_message_3() { return static_cast<int32_t>(offsetof(BlurManager_t3192295244, ___message_3)); }
	inline Text_t1901882714 * get_message_3() const { return ___message_3; }
	inline Text_t1901882714 ** get_address_of_message_3() { return &___message_3; }
	inline void set_message_3(Text_t1901882714 * value)
	{
		___message_3 = value;
		Il2CppCodeGenWriteBarrier((&___message_3), value);
	}

	inline static int32_t get_offset_of_confirmButton_4() { return static_cast<int32_t>(offsetof(BlurManager_t3192295244, ___confirmButton_4)); }
	inline Button_t4055032469 * get_confirmButton_4() const { return ___confirmButton_4; }
	inline Button_t4055032469 ** get_address_of_confirmButton_4() { return &___confirmButton_4; }
	inline void set_confirmButton_4(Button_t4055032469 * value)
	{
		___confirmButton_4 = value;
		Il2CppCodeGenWriteBarrier((&___confirmButton_4), value);
	}

	inline static int32_t get_offset_of_currentCoroutine_5() { return static_cast<int32_t>(offsetof(BlurManager_t3192295244, ___currentCoroutine_5)); }
	inline Coroutine_t3829159415 * get_currentCoroutine_5() const { return ___currentCoroutine_5; }
	inline Coroutine_t3829159415 ** get_address_of_currentCoroutine_5() { return &___currentCoroutine_5; }
	inline void set_currentCoroutine_5(Coroutine_t3829159415 * value)
	{
		___currentCoroutine_5 = value;
		Il2CppCodeGenWriteBarrier((&___currentCoroutine_5), value);
	}

	inline static int32_t get_offset_of_MaterialBlurUI_6() { return static_cast<int32_t>(offsetof(BlurManager_t3192295244, ___MaterialBlurUI_6)); }
	inline Material_t340375123 * get_MaterialBlurUI_6() const { return ___MaterialBlurUI_6; }
	inline Material_t340375123 ** get_address_of_MaterialBlurUI_6() { return &___MaterialBlurUI_6; }
	inline void set_MaterialBlurUI_6(Material_t340375123 * value)
	{
		___MaterialBlurUI_6 = value;
		Il2CppCodeGenWriteBarrier((&___MaterialBlurUI_6), value);
	}

	inline static int32_t get_offset_of_isBlur_7() { return static_cast<int32_t>(offsetof(BlurManager_t3192295244, ___isBlur_7)); }
	inline bool get_isBlur_7() const { return ___isBlur_7; }
	inline bool* get_address_of_isBlur_7() { return &___isBlur_7; }
	inline void set_isBlur_7(bool value)
	{
		___isBlur_7 = value;
	}

	inline static int32_t get_offset_of_blurSize_8() { return static_cast<int32_t>(offsetof(BlurManager_t3192295244, ___blurSize_8)); }
	inline float get_blurSize_8() const { return ___blurSize_8; }
	inline float* get_address_of_blurSize_8() { return &___blurSize_8; }
	inline void set_blurSize_8(float value)
	{
		___blurSize_8 = value;
	}

	inline static int32_t get_offset_of_confirmAction_9() { return static_cast<int32_t>(offsetof(BlurManager_t3192295244, ___confirmAction_9)); }
	inline UnityAction_t3245792599 * get_confirmAction_9() const { return ___confirmAction_9; }
	inline UnityAction_t3245792599 ** get_address_of_confirmAction_9() { return &___confirmAction_9; }
	inline void set_confirmAction_9(UnityAction_t3245792599 * value)
	{
		___confirmAction_9 = value;
		Il2CppCodeGenWriteBarrier((&___confirmAction_9), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // BLURMANAGER_T3192295244_H
#ifndef UIBEHAVIOUR_T3495933518_H
#define UIBEHAVIOUR_T3495933518_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.EventSystems.UIBehaviour
struct  UIBehaviour_t3495933518  : public MonoBehaviour_t3962482529
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // UIBEHAVIOUR_T3495933518_H
#ifndef MAINSCENEMANAGER_T2603182452_H
#define MAINSCENEMANAGER_T2603182452_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// MainSceneManager
struct  MainSceneManager_t2603182452  : public MonoBehaviour_t3962482529
{
public:
	// System.Single MainSceneManager::DOT_INTERVAL_SIZE
	float ___DOT_INTERVAL_SIZE_2;
	// UnityEngine.GameObject MainSceneManager::soul_popup
	GameObject_t1113636619 * ___soul_popup_3;
	// UnityEngine.GameObject MainSceneManager::quitToast
	GameObject_t1113636619 * ___quitToast_4;
	// UnityEngine.GameObject MainSceneManager::mainIluust
	GameObject_t1113636619 * ___mainIluust_5;
	// UnityEngine.GameObject MainSceneManager::gallery
	GameObject_t1113636619 * ___gallery_6;
	// UnityEngine.GameObject MainSceneManager::dots
	GameObject_t1113636619 * ___dots_7;
	// UnityEngine.UI.Text MainSceneManager::soulText
	Text_t1901882714 * ___soulText_8;
	// GameManager MainSceneManager::game_manager
	GameManager_t1536523654 * ___game_manager_9;
	// UnityEngine.GameObject MainSceneManager::dot_active
	GameObject_t1113636619 * ___dot_active_10;
	// UnityEngine.GameObject MainSceneManager::dot_non_active
	GameObject_t1113636619 * ___dot_non_active_11;
	// UnityEngine.Sprite MainSceneManager::img_active
	Sprite_t280657092 * ___img_active_12;
	// UnityEngine.Sprite MainSceneManager::img_non_active
	Sprite_t280657092 * ___img_non_active_13;
	// System.Collections.Generic.List`1<UnityEngine.GameObject> MainSceneManager::dot_objs
	List_1_t2585711361 * ___dot_objs_14;

public:
	inline static int32_t get_offset_of_DOT_INTERVAL_SIZE_2() { return static_cast<int32_t>(offsetof(MainSceneManager_t2603182452, ___DOT_INTERVAL_SIZE_2)); }
	inline float get_DOT_INTERVAL_SIZE_2() const { return ___DOT_INTERVAL_SIZE_2; }
	inline float* get_address_of_DOT_INTERVAL_SIZE_2() { return &___DOT_INTERVAL_SIZE_2; }
	inline void set_DOT_INTERVAL_SIZE_2(float value)
	{
		___DOT_INTERVAL_SIZE_2 = value;
	}

	inline static int32_t get_offset_of_soul_popup_3() { return static_cast<int32_t>(offsetof(MainSceneManager_t2603182452, ___soul_popup_3)); }
	inline GameObject_t1113636619 * get_soul_popup_3() const { return ___soul_popup_3; }
	inline GameObject_t1113636619 ** get_address_of_soul_popup_3() { return &___soul_popup_3; }
	inline void set_soul_popup_3(GameObject_t1113636619 * value)
	{
		___soul_popup_3 = value;
		Il2CppCodeGenWriteBarrier((&___soul_popup_3), value);
	}

	inline static int32_t get_offset_of_quitToast_4() { return static_cast<int32_t>(offsetof(MainSceneManager_t2603182452, ___quitToast_4)); }
	inline GameObject_t1113636619 * get_quitToast_4() const { return ___quitToast_4; }
	inline GameObject_t1113636619 ** get_address_of_quitToast_4() { return &___quitToast_4; }
	inline void set_quitToast_4(GameObject_t1113636619 * value)
	{
		___quitToast_4 = value;
		Il2CppCodeGenWriteBarrier((&___quitToast_4), value);
	}

	inline static int32_t get_offset_of_mainIluust_5() { return static_cast<int32_t>(offsetof(MainSceneManager_t2603182452, ___mainIluust_5)); }
	inline GameObject_t1113636619 * get_mainIluust_5() const { return ___mainIluust_5; }
	inline GameObject_t1113636619 ** get_address_of_mainIluust_5() { return &___mainIluust_5; }
	inline void set_mainIluust_5(GameObject_t1113636619 * value)
	{
		___mainIluust_5 = value;
		Il2CppCodeGenWriteBarrier((&___mainIluust_5), value);
	}

	inline static int32_t get_offset_of_gallery_6() { return static_cast<int32_t>(offsetof(MainSceneManager_t2603182452, ___gallery_6)); }
	inline GameObject_t1113636619 * get_gallery_6() const { return ___gallery_6; }
	inline GameObject_t1113636619 ** get_address_of_gallery_6() { return &___gallery_6; }
	inline void set_gallery_6(GameObject_t1113636619 * value)
	{
		___gallery_6 = value;
		Il2CppCodeGenWriteBarrier((&___gallery_6), value);
	}

	inline static int32_t get_offset_of_dots_7() { return static_cast<int32_t>(offsetof(MainSceneManager_t2603182452, ___dots_7)); }
	inline GameObject_t1113636619 * get_dots_7() const { return ___dots_7; }
	inline GameObject_t1113636619 ** get_address_of_dots_7() { return &___dots_7; }
	inline void set_dots_7(GameObject_t1113636619 * value)
	{
		___dots_7 = value;
		Il2CppCodeGenWriteBarrier((&___dots_7), value);
	}

	inline static int32_t get_offset_of_soulText_8() { return static_cast<int32_t>(offsetof(MainSceneManager_t2603182452, ___soulText_8)); }
	inline Text_t1901882714 * get_soulText_8() const { return ___soulText_8; }
	inline Text_t1901882714 ** get_address_of_soulText_8() { return &___soulText_8; }
	inline void set_soulText_8(Text_t1901882714 * value)
	{
		___soulText_8 = value;
		Il2CppCodeGenWriteBarrier((&___soulText_8), value);
	}

	inline static int32_t get_offset_of_game_manager_9() { return static_cast<int32_t>(offsetof(MainSceneManager_t2603182452, ___game_manager_9)); }
	inline GameManager_t1536523654 * get_game_manager_9() const { return ___game_manager_9; }
	inline GameManager_t1536523654 ** get_address_of_game_manager_9() { return &___game_manager_9; }
	inline void set_game_manager_9(GameManager_t1536523654 * value)
	{
		___game_manager_9 = value;
		Il2CppCodeGenWriteBarrier((&___game_manager_9), value);
	}

	inline static int32_t get_offset_of_dot_active_10() { return static_cast<int32_t>(offsetof(MainSceneManager_t2603182452, ___dot_active_10)); }
	inline GameObject_t1113636619 * get_dot_active_10() const { return ___dot_active_10; }
	inline GameObject_t1113636619 ** get_address_of_dot_active_10() { return &___dot_active_10; }
	inline void set_dot_active_10(GameObject_t1113636619 * value)
	{
		___dot_active_10 = value;
		Il2CppCodeGenWriteBarrier((&___dot_active_10), value);
	}

	inline static int32_t get_offset_of_dot_non_active_11() { return static_cast<int32_t>(offsetof(MainSceneManager_t2603182452, ___dot_non_active_11)); }
	inline GameObject_t1113636619 * get_dot_non_active_11() const { return ___dot_non_active_11; }
	inline GameObject_t1113636619 ** get_address_of_dot_non_active_11() { return &___dot_non_active_11; }
	inline void set_dot_non_active_11(GameObject_t1113636619 * value)
	{
		___dot_non_active_11 = value;
		Il2CppCodeGenWriteBarrier((&___dot_non_active_11), value);
	}

	inline static int32_t get_offset_of_img_active_12() { return static_cast<int32_t>(offsetof(MainSceneManager_t2603182452, ___img_active_12)); }
	inline Sprite_t280657092 * get_img_active_12() const { return ___img_active_12; }
	inline Sprite_t280657092 ** get_address_of_img_active_12() { return &___img_active_12; }
	inline void set_img_active_12(Sprite_t280657092 * value)
	{
		___img_active_12 = value;
		Il2CppCodeGenWriteBarrier((&___img_active_12), value);
	}

	inline static int32_t get_offset_of_img_non_active_13() { return static_cast<int32_t>(offsetof(MainSceneManager_t2603182452, ___img_non_active_13)); }
	inline Sprite_t280657092 * get_img_non_active_13() const { return ___img_non_active_13; }
	inline Sprite_t280657092 ** get_address_of_img_non_active_13() { return &___img_non_active_13; }
	inline void set_img_non_active_13(Sprite_t280657092 * value)
	{
		___img_non_active_13 = value;
		Il2CppCodeGenWriteBarrier((&___img_non_active_13), value);
	}

	inline static int32_t get_offset_of_dot_objs_14() { return static_cast<int32_t>(offsetof(MainSceneManager_t2603182452, ___dot_objs_14)); }
	inline List_1_t2585711361 * get_dot_objs_14() const { return ___dot_objs_14; }
	inline List_1_t2585711361 ** get_address_of_dot_objs_14() { return &___dot_objs_14; }
	inline void set_dot_objs_14(List_1_t2585711361 * value)
	{
		___dot_objs_14 = value;
		Il2CppCodeGenWriteBarrier((&___dot_objs_14), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MAINSCENEMANAGER_T2603182452_H
#ifndef FIXEDSCREEN_T1471317904_H
#define FIXEDSCREEN_T1471317904_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// FixedScreen
struct  FixedScreen_t1471317904  : public MonoBehaviour_t3962482529
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // FIXEDSCREEN_T1471317904_H
#ifndef PLAYGAMESHELPEROBJECT_T4023745847_H
#define PLAYGAMESHELPEROBJECT_T4023745847_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// GooglePlayGames.OurUtils.PlayGamesHelperObject
struct  PlayGamesHelperObject_t4023745847  : public MonoBehaviour_t3962482529
{
public:
	// System.Collections.Generic.List`1<System.Action> GooglePlayGames.OurUtils.PlayGamesHelperObject::localQueue
	List_1_t2736452219 * ___localQueue_5;

public:
	inline static int32_t get_offset_of_localQueue_5() { return static_cast<int32_t>(offsetof(PlayGamesHelperObject_t4023745847, ___localQueue_5)); }
	inline List_1_t2736452219 * get_localQueue_5() const { return ___localQueue_5; }
	inline List_1_t2736452219 ** get_address_of_localQueue_5() { return &___localQueue_5; }
	inline void set_localQueue_5(List_1_t2736452219 * value)
	{
		___localQueue_5 = value;
		Il2CppCodeGenWriteBarrier((&___localQueue_5), value);
	}
};

struct PlayGamesHelperObject_t4023745847_StaticFields
{
public:
	// GooglePlayGames.OurUtils.PlayGamesHelperObject GooglePlayGames.OurUtils.PlayGamesHelperObject::instance
	PlayGamesHelperObject_t4023745847 * ___instance_2;
	// System.Boolean GooglePlayGames.OurUtils.PlayGamesHelperObject::sIsDummy
	bool ___sIsDummy_3;
	// System.Collections.Generic.List`1<System.Action> GooglePlayGames.OurUtils.PlayGamesHelperObject::sQueue
	List_1_t2736452219 * ___sQueue_4;
	// System.Boolean modreq(System.Runtime.CompilerServices.IsVolatile) GooglePlayGames.OurUtils.PlayGamesHelperObject::sQueueEmpty
	bool ___sQueueEmpty_6;
	// System.Collections.Generic.List`1<System.Action`1<System.Boolean>> GooglePlayGames.OurUtils.PlayGamesHelperObject::sPauseCallbackList
	List_1_t1741830302 * ___sPauseCallbackList_7;
	// System.Collections.Generic.List`1<System.Action`1<System.Boolean>> GooglePlayGames.OurUtils.PlayGamesHelperObject::sFocusCallbackList
	List_1_t1741830302 * ___sFocusCallbackList_8;

public:
	inline static int32_t get_offset_of_instance_2() { return static_cast<int32_t>(offsetof(PlayGamesHelperObject_t4023745847_StaticFields, ___instance_2)); }
	inline PlayGamesHelperObject_t4023745847 * get_instance_2() const { return ___instance_2; }
	inline PlayGamesHelperObject_t4023745847 ** get_address_of_instance_2() { return &___instance_2; }
	inline void set_instance_2(PlayGamesHelperObject_t4023745847 * value)
	{
		___instance_2 = value;
		Il2CppCodeGenWriteBarrier((&___instance_2), value);
	}

	inline static int32_t get_offset_of_sIsDummy_3() { return static_cast<int32_t>(offsetof(PlayGamesHelperObject_t4023745847_StaticFields, ___sIsDummy_3)); }
	inline bool get_sIsDummy_3() const { return ___sIsDummy_3; }
	inline bool* get_address_of_sIsDummy_3() { return &___sIsDummy_3; }
	inline void set_sIsDummy_3(bool value)
	{
		___sIsDummy_3 = value;
	}

	inline static int32_t get_offset_of_sQueue_4() { return static_cast<int32_t>(offsetof(PlayGamesHelperObject_t4023745847_StaticFields, ___sQueue_4)); }
	inline List_1_t2736452219 * get_sQueue_4() const { return ___sQueue_4; }
	inline List_1_t2736452219 ** get_address_of_sQueue_4() { return &___sQueue_4; }
	inline void set_sQueue_4(List_1_t2736452219 * value)
	{
		___sQueue_4 = value;
		Il2CppCodeGenWriteBarrier((&___sQueue_4), value);
	}

	inline static int32_t get_offset_of_sQueueEmpty_6() { return static_cast<int32_t>(offsetof(PlayGamesHelperObject_t4023745847_StaticFields, ___sQueueEmpty_6)); }
	inline bool get_sQueueEmpty_6() const { return ___sQueueEmpty_6; }
	inline bool* get_address_of_sQueueEmpty_6() { return &___sQueueEmpty_6; }
	inline void set_sQueueEmpty_6(bool value)
	{
		___sQueueEmpty_6 = value;
	}

	inline static int32_t get_offset_of_sPauseCallbackList_7() { return static_cast<int32_t>(offsetof(PlayGamesHelperObject_t4023745847_StaticFields, ___sPauseCallbackList_7)); }
	inline List_1_t1741830302 * get_sPauseCallbackList_7() const { return ___sPauseCallbackList_7; }
	inline List_1_t1741830302 ** get_address_of_sPauseCallbackList_7() { return &___sPauseCallbackList_7; }
	inline void set_sPauseCallbackList_7(List_1_t1741830302 * value)
	{
		___sPauseCallbackList_7 = value;
		Il2CppCodeGenWriteBarrier((&___sPauseCallbackList_7), value);
	}

	inline static int32_t get_offset_of_sFocusCallbackList_8() { return static_cast<int32_t>(offsetof(PlayGamesHelperObject_t4023745847_StaticFields, ___sFocusCallbackList_8)); }
	inline List_1_t1741830302 * get_sFocusCallbackList_8() const { return ___sFocusCallbackList_8; }
	inline List_1_t1741830302 ** get_address_of_sFocusCallbackList_8() { return &___sFocusCallbackList_8; }
	inline void set_sFocusCallbackList_8(List_1_t1741830302 * value)
	{
		___sFocusCallbackList_8 = value;
		Il2CppCodeGenWriteBarrier((&___sFocusCallbackList_8), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // PLAYGAMESHELPEROBJECT_T4023745847_H
#ifndef GRAPHIC_T1660335611_H
#define GRAPHIC_T1660335611_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.UI.Graphic
struct  Graphic_t1660335611  : public UIBehaviour_t3495933518
{
public:
	// UnityEngine.Material UnityEngine.UI.Graphic::m_Material
	Material_t340375123 * ___m_Material_4;
	// UnityEngine.Color UnityEngine.UI.Graphic::m_Color
	Color_t2555686324  ___m_Color_5;
	// System.Boolean UnityEngine.UI.Graphic::m_RaycastTarget
	bool ___m_RaycastTarget_6;
	// UnityEngine.RectTransform UnityEngine.UI.Graphic::m_RectTransform
	RectTransform_t3704657025 * ___m_RectTransform_7;
	// UnityEngine.CanvasRenderer UnityEngine.UI.Graphic::m_CanvasRender
	CanvasRenderer_t2598313366 * ___m_CanvasRender_8;
	// UnityEngine.Canvas UnityEngine.UI.Graphic::m_Canvas
	Canvas_t3310196443 * ___m_Canvas_9;
	// System.Boolean UnityEngine.UI.Graphic::m_VertsDirty
	bool ___m_VertsDirty_10;
	// System.Boolean UnityEngine.UI.Graphic::m_MaterialDirty
	bool ___m_MaterialDirty_11;
	// UnityEngine.Events.UnityAction UnityEngine.UI.Graphic::m_OnDirtyLayoutCallback
	UnityAction_t3245792599 * ___m_OnDirtyLayoutCallback_12;
	// UnityEngine.Events.UnityAction UnityEngine.UI.Graphic::m_OnDirtyVertsCallback
	UnityAction_t3245792599 * ___m_OnDirtyVertsCallback_13;
	// UnityEngine.Events.UnityAction UnityEngine.UI.Graphic::m_OnDirtyMaterialCallback
	UnityAction_t3245792599 * ___m_OnDirtyMaterialCallback_14;
	// UnityEngine.UI.CoroutineTween.TweenRunner`1<UnityEngine.UI.CoroutineTween.ColorTween> UnityEngine.UI.Graphic::m_ColorTweenRunner
	TweenRunner_1_t3055525458 * ___m_ColorTweenRunner_17;
	// System.Boolean UnityEngine.UI.Graphic::<useLegacyMeshGeneration>k__BackingField
	bool ___U3CuseLegacyMeshGenerationU3Ek__BackingField_18;

public:
	inline static int32_t get_offset_of_m_Material_4() { return static_cast<int32_t>(offsetof(Graphic_t1660335611, ___m_Material_4)); }
	inline Material_t340375123 * get_m_Material_4() const { return ___m_Material_4; }
	inline Material_t340375123 ** get_address_of_m_Material_4() { return &___m_Material_4; }
	inline void set_m_Material_4(Material_t340375123 * value)
	{
		___m_Material_4 = value;
		Il2CppCodeGenWriteBarrier((&___m_Material_4), value);
	}

	inline static int32_t get_offset_of_m_Color_5() { return static_cast<int32_t>(offsetof(Graphic_t1660335611, ___m_Color_5)); }
	inline Color_t2555686324  get_m_Color_5() const { return ___m_Color_5; }
	inline Color_t2555686324 * get_address_of_m_Color_5() { return &___m_Color_5; }
	inline void set_m_Color_5(Color_t2555686324  value)
	{
		___m_Color_5 = value;
	}

	inline static int32_t get_offset_of_m_RaycastTarget_6() { return static_cast<int32_t>(offsetof(Graphic_t1660335611, ___m_RaycastTarget_6)); }
	inline bool get_m_RaycastTarget_6() const { return ___m_RaycastTarget_6; }
	inline bool* get_address_of_m_RaycastTarget_6() { return &___m_RaycastTarget_6; }
	inline void set_m_RaycastTarget_6(bool value)
	{
		___m_RaycastTarget_6 = value;
	}

	inline static int32_t get_offset_of_m_RectTransform_7() { return static_cast<int32_t>(offsetof(Graphic_t1660335611, ___m_RectTransform_7)); }
	inline RectTransform_t3704657025 * get_m_RectTransform_7() const { return ___m_RectTransform_7; }
	inline RectTransform_t3704657025 ** get_address_of_m_RectTransform_7() { return &___m_RectTransform_7; }
	inline void set_m_RectTransform_7(RectTransform_t3704657025 * value)
	{
		___m_RectTransform_7 = value;
		Il2CppCodeGenWriteBarrier((&___m_RectTransform_7), value);
	}

	inline static int32_t get_offset_of_m_CanvasRender_8() { return static_cast<int32_t>(offsetof(Graphic_t1660335611, ___m_CanvasRender_8)); }
	inline CanvasRenderer_t2598313366 * get_m_CanvasRender_8() const { return ___m_CanvasRender_8; }
	inline CanvasRenderer_t2598313366 ** get_address_of_m_CanvasRender_8() { return &___m_CanvasRender_8; }
	inline void set_m_CanvasRender_8(CanvasRenderer_t2598313366 * value)
	{
		___m_CanvasRender_8 = value;
		Il2CppCodeGenWriteBarrier((&___m_CanvasRender_8), value);
	}

	inline static int32_t get_offset_of_m_Canvas_9() { return static_cast<int32_t>(offsetof(Graphic_t1660335611, ___m_Canvas_9)); }
	inline Canvas_t3310196443 * get_m_Canvas_9() const { return ___m_Canvas_9; }
	inline Canvas_t3310196443 ** get_address_of_m_Canvas_9() { return &___m_Canvas_9; }
	inline void set_m_Canvas_9(Canvas_t3310196443 * value)
	{
		___m_Canvas_9 = value;
		Il2CppCodeGenWriteBarrier((&___m_Canvas_9), value);
	}

	inline static int32_t get_offset_of_m_VertsDirty_10() { return static_cast<int32_t>(offsetof(Graphic_t1660335611, ___m_VertsDirty_10)); }
	inline bool get_m_VertsDirty_10() const { return ___m_VertsDirty_10; }
	inline bool* get_address_of_m_VertsDirty_10() { return &___m_VertsDirty_10; }
	inline void set_m_VertsDirty_10(bool value)
	{
		___m_VertsDirty_10 = value;
	}

	inline static int32_t get_offset_of_m_MaterialDirty_11() { return static_cast<int32_t>(offsetof(Graphic_t1660335611, ___m_MaterialDirty_11)); }
	inline bool get_m_MaterialDirty_11() const { return ___m_MaterialDirty_11; }
	inline bool* get_address_of_m_MaterialDirty_11() { return &___m_MaterialDirty_11; }
	inline void set_m_MaterialDirty_11(bool value)
	{
		___m_MaterialDirty_11 = value;
	}

	inline static int32_t get_offset_of_m_OnDirtyLayoutCallback_12() { return static_cast<int32_t>(offsetof(Graphic_t1660335611, ___m_OnDirtyLayoutCallback_12)); }
	inline UnityAction_t3245792599 * get_m_OnDirtyLayoutCallback_12() const { return ___m_OnDirtyLayoutCallback_12; }
	inline UnityAction_t3245792599 ** get_address_of_m_OnDirtyLayoutCallback_12() { return &___m_OnDirtyLayoutCallback_12; }
	inline void set_m_OnDirtyLayoutCallback_12(UnityAction_t3245792599 * value)
	{
		___m_OnDirtyLayoutCallback_12 = value;
		Il2CppCodeGenWriteBarrier((&___m_OnDirtyLayoutCallback_12), value);
	}

	inline static int32_t get_offset_of_m_OnDirtyVertsCallback_13() { return static_cast<int32_t>(offsetof(Graphic_t1660335611, ___m_OnDirtyVertsCallback_13)); }
	inline UnityAction_t3245792599 * get_m_OnDirtyVertsCallback_13() const { return ___m_OnDirtyVertsCallback_13; }
	inline UnityAction_t3245792599 ** get_address_of_m_OnDirtyVertsCallback_13() { return &___m_OnDirtyVertsCallback_13; }
	inline void set_m_OnDirtyVertsCallback_13(UnityAction_t3245792599 * value)
	{
		___m_OnDirtyVertsCallback_13 = value;
		Il2CppCodeGenWriteBarrier((&___m_OnDirtyVertsCallback_13), value);
	}

	inline static int32_t get_offset_of_m_OnDirtyMaterialCallback_14() { return static_cast<int32_t>(offsetof(Graphic_t1660335611, ___m_OnDirtyMaterialCallback_14)); }
	inline UnityAction_t3245792599 * get_m_OnDirtyMaterialCallback_14() const { return ___m_OnDirtyMaterialCallback_14; }
	inline UnityAction_t3245792599 ** get_address_of_m_OnDirtyMaterialCallback_14() { return &___m_OnDirtyMaterialCallback_14; }
	inline void set_m_OnDirtyMaterialCallback_14(UnityAction_t3245792599 * value)
	{
		___m_OnDirtyMaterialCallback_14 = value;
		Il2CppCodeGenWriteBarrier((&___m_OnDirtyMaterialCallback_14), value);
	}

	inline static int32_t get_offset_of_m_ColorTweenRunner_17() { return static_cast<int32_t>(offsetof(Graphic_t1660335611, ___m_ColorTweenRunner_17)); }
	inline TweenRunner_1_t3055525458 * get_m_ColorTweenRunner_17() const { return ___m_ColorTweenRunner_17; }
	inline TweenRunner_1_t3055525458 ** get_address_of_m_ColorTweenRunner_17() { return &___m_ColorTweenRunner_17; }
	inline void set_m_ColorTweenRunner_17(TweenRunner_1_t3055525458 * value)
	{
		___m_ColorTweenRunner_17 = value;
		Il2CppCodeGenWriteBarrier((&___m_ColorTweenRunner_17), value);
	}

	inline static int32_t get_offset_of_U3CuseLegacyMeshGenerationU3Ek__BackingField_18() { return static_cast<int32_t>(offsetof(Graphic_t1660335611, ___U3CuseLegacyMeshGenerationU3Ek__BackingField_18)); }
	inline bool get_U3CuseLegacyMeshGenerationU3Ek__BackingField_18() const { return ___U3CuseLegacyMeshGenerationU3Ek__BackingField_18; }
	inline bool* get_address_of_U3CuseLegacyMeshGenerationU3Ek__BackingField_18() { return &___U3CuseLegacyMeshGenerationU3Ek__BackingField_18; }
	inline void set_U3CuseLegacyMeshGenerationU3Ek__BackingField_18(bool value)
	{
		___U3CuseLegacyMeshGenerationU3Ek__BackingField_18 = value;
	}
};

struct Graphic_t1660335611_StaticFields
{
public:
	// UnityEngine.Material UnityEngine.UI.Graphic::s_DefaultUI
	Material_t340375123 * ___s_DefaultUI_2;
	// UnityEngine.Texture2D UnityEngine.UI.Graphic::s_WhiteTexture
	Texture2D_t3840446185 * ___s_WhiteTexture_3;
	// UnityEngine.Mesh UnityEngine.UI.Graphic::s_Mesh
	Mesh_t3648964284 * ___s_Mesh_15;
	// UnityEngine.UI.VertexHelper UnityEngine.UI.Graphic::s_VertexHelper
	VertexHelper_t2453304189 * ___s_VertexHelper_16;

public:
	inline static int32_t get_offset_of_s_DefaultUI_2() { return static_cast<int32_t>(offsetof(Graphic_t1660335611_StaticFields, ___s_DefaultUI_2)); }
	inline Material_t340375123 * get_s_DefaultUI_2() const { return ___s_DefaultUI_2; }
	inline Material_t340375123 ** get_address_of_s_DefaultUI_2() { return &___s_DefaultUI_2; }
	inline void set_s_DefaultUI_2(Material_t340375123 * value)
	{
		___s_DefaultUI_2 = value;
		Il2CppCodeGenWriteBarrier((&___s_DefaultUI_2), value);
	}

	inline static int32_t get_offset_of_s_WhiteTexture_3() { return static_cast<int32_t>(offsetof(Graphic_t1660335611_StaticFields, ___s_WhiteTexture_3)); }
	inline Texture2D_t3840446185 * get_s_WhiteTexture_3() const { return ___s_WhiteTexture_3; }
	inline Texture2D_t3840446185 ** get_address_of_s_WhiteTexture_3() { return &___s_WhiteTexture_3; }
	inline void set_s_WhiteTexture_3(Texture2D_t3840446185 * value)
	{
		___s_WhiteTexture_3 = value;
		Il2CppCodeGenWriteBarrier((&___s_WhiteTexture_3), value);
	}

	inline static int32_t get_offset_of_s_Mesh_15() { return static_cast<int32_t>(offsetof(Graphic_t1660335611_StaticFields, ___s_Mesh_15)); }
	inline Mesh_t3648964284 * get_s_Mesh_15() const { return ___s_Mesh_15; }
	inline Mesh_t3648964284 ** get_address_of_s_Mesh_15() { return &___s_Mesh_15; }
	inline void set_s_Mesh_15(Mesh_t3648964284 * value)
	{
		___s_Mesh_15 = value;
		Il2CppCodeGenWriteBarrier((&___s_Mesh_15), value);
	}

	inline static int32_t get_offset_of_s_VertexHelper_16() { return static_cast<int32_t>(offsetof(Graphic_t1660335611_StaticFields, ___s_VertexHelper_16)); }
	inline VertexHelper_t2453304189 * get_s_VertexHelper_16() const { return ___s_VertexHelper_16; }
	inline VertexHelper_t2453304189 ** get_address_of_s_VertexHelper_16() { return &___s_VertexHelper_16; }
	inline void set_s_VertexHelper_16(VertexHelper_t2453304189 * value)
	{
		___s_VertexHelper_16 = value;
		Il2CppCodeGenWriteBarrier((&___s_VertexHelper_16), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // GRAPHIC_T1660335611_H
#ifndef SCROLLRECT_T4137855814_H
#define SCROLLRECT_T4137855814_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.UI.ScrollRect
struct  ScrollRect_t4137855814  : public UIBehaviour_t3495933518
{
public:
	// UnityEngine.RectTransform UnityEngine.UI.ScrollRect::m_Content
	RectTransform_t3704657025 * ___m_Content_2;
	// System.Boolean UnityEngine.UI.ScrollRect::m_Horizontal
	bool ___m_Horizontal_3;
	// System.Boolean UnityEngine.UI.ScrollRect::m_Vertical
	bool ___m_Vertical_4;
	// UnityEngine.UI.ScrollRect/MovementType UnityEngine.UI.ScrollRect::m_MovementType
	int32_t ___m_MovementType_5;
	// System.Single UnityEngine.UI.ScrollRect::m_Elasticity
	float ___m_Elasticity_6;
	// System.Boolean UnityEngine.UI.ScrollRect::m_Inertia
	bool ___m_Inertia_7;
	// System.Single UnityEngine.UI.ScrollRect::m_DecelerationRate
	float ___m_DecelerationRate_8;
	// System.Single UnityEngine.UI.ScrollRect::m_ScrollSensitivity
	float ___m_ScrollSensitivity_9;
	// UnityEngine.RectTransform UnityEngine.UI.ScrollRect::m_Viewport
	RectTransform_t3704657025 * ___m_Viewport_10;
	// UnityEngine.UI.Scrollbar UnityEngine.UI.ScrollRect::m_HorizontalScrollbar
	Scrollbar_t1494447233 * ___m_HorizontalScrollbar_11;
	// UnityEngine.UI.Scrollbar UnityEngine.UI.ScrollRect::m_VerticalScrollbar
	Scrollbar_t1494447233 * ___m_VerticalScrollbar_12;
	// UnityEngine.UI.ScrollRect/ScrollbarVisibility UnityEngine.UI.ScrollRect::m_HorizontalScrollbarVisibility
	int32_t ___m_HorizontalScrollbarVisibility_13;
	// UnityEngine.UI.ScrollRect/ScrollbarVisibility UnityEngine.UI.ScrollRect::m_VerticalScrollbarVisibility
	int32_t ___m_VerticalScrollbarVisibility_14;
	// System.Single UnityEngine.UI.ScrollRect::m_HorizontalScrollbarSpacing
	float ___m_HorizontalScrollbarSpacing_15;
	// System.Single UnityEngine.UI.ScrollRect::m_VerticalScrollbarSpacing
	float ___m_VerticalScrollbarSpacing_16;
	// UnityEngine.UI.ScrollRect/ScrollRectEvent UnityEngine.UI.ScrollRect::m_OnValueChanged
	ScrollRectEvent_t343079324 * ___m_OnValueChanged_17;
	// UnityEngine.Vector2 UnityEngine.UI.ScrollRect::m_PointerStartLocalCursor
	Vector2_t2156229523  ___m_PointerStartLocalCursor_18;
	// UnityEngine.Vector2 UnityEngine.UI.ScrollRect::m_ContentStartPosition
	Vector2_t2156229523  ___m_ContentStartPosition_19;
	// UnityEngine.RectTransform UnityEngine.UI.ScrollRect::m_ViewRect
	RectTransform_t3704657025 * ___m_ViewRect_20;
	// UnityEngine.Bounds UnityEngine.UI.ScrollRect::m_ContentBounds
	Bounds_t2266837910  ___m_ContentBounds_21;
	// UnityEngine.Bounds UnityEngine.UI.ScrollRect::m_ViewBounds
	Bounds_t2266837910  ___m_ViewBounds_22;
	// UnityEngine.Vector2 UnityEngine.UI.ScrollRect::m_Velocity
	Vector2_t2156229523  ___m_Velocity_23;
	// System.Boolean UnityEngine.UI.ScrollRect::m_Dragging
	bool ___m_Dragging_24;
	// UnityEngine.Vector2 UnityEngine.UI.ScrollRect::m_PrevPosition
	Vector2_t2156229523  ___m_PrevPosition_25;
	// UnityEngine.Bounds UnityEngine.UI.ScrollRect::m_PrevContentBounds
	Bounds_t2266837910  ___m_PrevContentBounds_26;
	// UnityEngine.Bounds UnityEngine.UI.ScrollRect::m_PrevViewBounds
	Bounds_t2266837910  ___m_PrevViewBounds_27;
	// System.Boolean UnityEngine.UI.ScrollRect::m_HasRebuiltLayout
	bool ___m_HasRebuiltLayout_28;
	// System.Boolean UnityEngine.UI.ScrollRect::m_HSliderExpand
	bool ___m_HSliderExpand_29;
	// System.Boolean UnityEngine.UI.ScrollRect::m_VSliderExpand
	bool ___m_VSliderExpand_30;
	// System.Single UnityEngine.UI.ScrollRect::m_HSliderHeight
	float ___m_HSliderHeight_31;
	// System.Single UnityEngine.UI.ScrollRect::m_VSliderWidth
	float ___m_VSliderWidth_32;
	// UnityEngine.RectTransform UnityEngine.UI.ScrollRect::m_Rect
	RectTransform_t3704657025 * ___m_Rect_33;
	// UnityEngine.RectTransform UnityEngine.UI.ScrollRect::m_HorizontalScrollbarRect
	RectTransform_t3704657025 * ___m_HorizontalScrollbarRect_34;
	// UnityEngine.RectTransform UnityEngine.UI.ScrollRect::m_VerticalScrollbarRect
	RectTransform_t3704657025 * ___m_VerticalScrollbarRect_35;
	// UnityEngine.DrivenRectTransformTracker UnityEngine.UI.ScrollRect::m_Tracker
	DrivenRectTransformTracker_t2562230146  ___m_Tracker_36;
	// UnityEngine.Vector3[] UnityEngine.UI.ScrollRect::m_Corners
	Vector3U5BU5D_t1718750761* ___m_Corners_37;

public:
	inline static int32_t get_offset_of_m_Content_2() { return static_cast<int32_t>(offsetof(ScrollRect_t4137855814, ___m_Content_2)); }
	inline RectTransform_t3704657025 * get_m_Content_2() const { return ___m_Content_2; }
	inline RectTransform_t3704657025 ** get_address_of_m_Content_2() { return &___m_Content_2; }
	inline void set_m_Content_2(RectTransform_t3704657025 * value)
	{
		___m_Content_2 = value;
		Il2CppCodeGenWriteBarrier((&___m_Content_2), value);
	}

	inline static int32_t get_offset_of_m_Horizontal_3() { return static_cast<int32_t>(offsetof(ScrollRect_t4137855814, ___m_Horizontal_3)); }
	inline bool get_m_Horizontal_3() const { return ___m_Horizontal_3; }
	inline bool* get_address_of_m_Horizontal_3() { return &___m_Horizontal_3; }
	inline void set_m_Horizontal_3(bool value)
	{
		___m_Horizontal_3 = value;
	}

	inline static int32_t get_offset_of_m_Vertical_4() { return static_cast<int32_t>(offsetof(ScrollRect_t4137855814, ___m_Vertical_4)); }
	inline bool get_m_Vertical_4() const { return ___m_Vertical_4; }
	inline bool* get_address_of_m_Vertical_4() { return &___m_Vertical_4; }
	inline void set_m_Vertical_4(bool value)
	{
		___m_Vertical_4 = value;
	}

	inline static int32_t get_offset_of_m_MovementType_5() { return static_cast<int32_t>(offsetof(ScrollRect_t4137855814, ___m_MovementType_5)); }
	inline int32_t get_m_MovementType_5() const { return ___m_MovementType_5; }
	inline int32_t* get_address_of_m_MovementType_5() { return &___m_MovementType_5; }
	inline void set_m_MovementType_5(int32_t value)
	{
		___m_MovementType_5 = value;
	}

	inline static int32_t get_offset_of_m_Elasticity_6() { return static_cast<int32_t>(offsetof(ScrollRect_t4137855814, ___m_Elasticity_6)); }
	inline float get_m_Elasticity_6() const { return ___m_Elasticity_6; }
	inline float* get_address_of_m_Elasticity_6() { return &___m_Elasticity_6; }
	inline void set_m_Elasticity_6(float value)
	{
		___m_Elasticity_6 = value;
	}

	inline static int32_t get_offset_of_m_Inertia_7() { return static_cast<int32_t>(offsetof(ScrollRect_t4137855814, ___m_Inertia_7)); }
	inline bool get_m_Inertia_7() const { return ___m_Inertia_7; }
	inline bool* get_address_of_m_Inertia_7() { return &___m_Inertia_7; }
	inline void set_m_Inertia_7(bool value)
	{
		___m_Inertia_7 = value;
	}

	inline static int32_t get_offset_of_m_DecelerationRate_8() { return static_cast<int32_t>(offsetof(ScrollRect_t4137855814, ___m_DecelerationRate_8)); }
	inline float get_m_DecelerationRate_8() const { return ___m_DecelerationRate_8; }
	inline float* get_address_of_m_DecelerationRate_8() { return &___m_DecelerationRate_8; }
	inline void set_m_DecelerationRate_8(float value)
	{
		___m_DecelerationRate_8 = value;
	}

	inline static int32_t get_offset_of_m_ScrollSensitivity_9() { return static_cast<int32_t>(offsetof(ScrollRect_t4137855814, ___m_ScrollSensitivity_9)); }
	inline float get_m_ScrollSensitivity_9() const { return ___m_ScrollSensitivity_9; }
	inline float* get_address_of_m_ScrollSensitivity_9() { return &___m_ScrollSensitivity_9; }
	inline void set_m_ScrollSensitivity_9(float value)
	{
		___m_ScrollSensitivity_9 = value;
	}

	inline static int32_t get_offset_of_m_Viewport_10() { return static_cast<int32_t>(offsetof(ScrollRect_t4137855814, ___m_Viewport_10)); }
	inline RectTransform_t3704657025 * get_m_Viewport_10() const { return ___m_Viewport_10; }
	inline RectTransform_t3704657025 ** get_address_of_m_Viewport_10() { return &___m_Viewport_10; }
	inline void set_m_Viewport_10(RectTransform_t3704657025 * value)
	{
		___m_Viewport_10 = value;
		Il2CppCodeGenWriteBarrier((&___m_Viewport_10), value);
	}

	inline static int32_t get_offset_of_m_HorizontalScrollbar_11() { return static_cast<int32_t>(offsetof(ScrollRect_t4137855814, ___m_HorizontalScrollbar_11)); }
	inline Scrollbar_t1494447233 * get_m_HorizontalScrollbar_11() const { return ___m_HorizontalScrollbar_11; }
	inline Scrollbar_t1494447233 ** get_address_of_m_HorizontalScrollbar_11() { return &___m_HorizontalScrollbar_11; }
	inline void set_m_HorizontalScrollbar_11(Scrollbar_t1494447233 * value)
	{
		___m_HorizontalScrollbar_11 = value;
		Il2CppCodeGenWriteBarrier((&___m_HorizontalScrollbar_11), value);
	}

	inline static int32_t get_offset_of_m_VerticalScrollbar_12() { return static_cast<int32_t>(offsetof(ScrollRect_t4137855814, ___m_VerticalScrollbar_12)); }
	inline Scrollbar_t1494447233 * get_m_VerticalScrollbar_12() const { return ___m_VerticalScrollbar_12; }
	inline Scrollbar_t1494447233 ** get_address_of_m_VerticalScrollbar_12() { return &___m_VerticalScrollbar_12; }
	inline void set_m_VerticalScrollbar_12(Scrollbar_t1494447233 * value)
	{
		___m_VerticalScrollbar_12 = value;
		Il2CppCodeGenWriteBarrier((&___m_VerticalScrollbar_12), value);
	}

	inline static int32_t get_offset_of_m_HorizontalScrollbarVisibility_13() { return static_cast<int32_t>(offsetof(ScrollRect_t4137855814, ___m_HorizontalScrollbarVisibility_13)); }
	inline int32_t get_m_HorizontalScrollbarVisibility_13() const { return ___m_HorizontalScrollbarVisibility_13; }
	inline int32_t* get_address_of_m_HorizontalScrollbarVisibility_13() { return &___m_HorizontalScrollbarVisibility_13; }
	inline void set_m_HorizontalScrollbarVisibility_13(int32_t value)
	{
		___m_HorizontalScrollbarVisibility_13 = value;
	}

	inline static int32_t get_offset_of_m_VerticalScrollbarVisibility_14() { return static_cast<int32_t>(offsetof(ScrollRect_t4137855814, ___m_VerticalScrollbarVisibility_14)); }
	inline int32_t get_m_VerticalScrollbarVisibility_14() const { return ___m_VerticalScrollbarVisibility_14; }
	inline int32_t* get_address_of_m_VerticalScrollbarVisibility_14() { return &___m_VerticalScrollbarVisibility_14; }
	inline void set_m_VerticalScrollbarVisibility_14(int32_t value)
	{
		___m_VerticalScrollbarVisibility_14 = value;
	}

	inline static int32_t get_offset_of_m_HorizontalScrollbarSpacing_15() { return static_cast<int32_t>(offsetof(ScrollRect_t4137855814, ___m_HorizontalScrollbarSpacing_15)); }
	inline float get_m_HorizontalScrollbarSpacing_15() const { return ___m_HorizontalScrollbarSpacing_15; }
	inline float* get_address_of_m_HorizontalScrollbarSpacing_15() { return &___m_HorizontalScrollbarSpacing_15; }
	inline void set_m_HorizontalScrollbarSpacing_15(float value)
	{
		___m_HorizontalScrollbarSpacing_15 = value;
	}

	inline static int32_t get_offset_of_m_VerticalScrollbarSpacing_16() { return static_cast<int32_t>(offsetof(ScrollRect_t4137855814, ___m_VerticalScrollbarSpacing_16)); }
	inline float get_m_VerticalScrollbarSpacing_16() const { return ___m_VerticalScrollbarSpacing_16; }
	inline float* get_address_of_m_VerticalScrollbarSpacing_16() { return &___m_VerticalScrollbarSpacing_16; }
	inline void set_m_VerticalScrollbarSpacing_16(float value)
	{
		___m_VerticalScrollbarSpacing_16 = value;
	}

	inline static int32_t get_offset_of_m_OnValueChanged_17() { return static_cast<int32_t>(offsetof(ScrollRect_t4137855814, ___m_OnValueChanged_17)); }
	inline ScrollRectEvent_t343079324 * get_m_OnValueChanged_17() const { return ___m_OnValueChanged_17; }
	inline ScrollRectEvent_t343079324 ** get_address_of_m_OnValueChanged_17() { return &___m_OnValueChanged_17; }
	inline void set_m_OnValueChanged_17(ScrollRectEvent_t343079324 * value)
	{
		___m_OnValueChanged_17 = value;
		Il2CppCodeGenWriteBarrier((&___m_OnValueChanged_17), value);
	}

	inline static int32_t get_offset_of_m_PointerStartLocalCursor_18() { return static_cast<int32_t>(offsetof(ScrollRect_t4137855814, ___m_PointerStartLocalCursor_18)); }
	inline Vector2_t2156229523  get_m_PointerStartLocalCursor_18() const { return ___m_PointerStartLocalCursor_18; }
	inline Vector2_t2156229523 * get_address_of_m_PointerStartLocalCursor_18() { return &___m_PointerStartLocalCursor_18; }
	inline void set_m_PointerStartLocalCursor_18(Vector2_t2156229523  value)
	{
		___m_PointerStartLocalCursor_18 = value;
	}

	inline static int32_t get_offset_of_m_ContentStartPosition_19() { return static_cast<int32_t>(offsetof(ScrollRect_t4137855814, ___m_ContentStartPosition_19)); }
	inline Vector2_t2156229523  get_m_ContentStartPosition_19() const { return ___m_ContentStartPosition_19; }
	inline Vector2_t2156229523 * get_address_of_m_ContentStartPosition_19() { return &___m_ContentStartPosition_19; }
	inline void set_m_ContentStartPosition_19(Vector2_t2156229523  value)
	{
		___m_ContentStartPosition_19 = value;
	}

	inline static int32_t get_offset_of_m_ViewRect_20() { return static_cast<int32_t>(offsetof(ScrollRect_t4137855814, ___m_ViewRect_20)); }
	inline RectTransform_t3704657025 * get_m_ViewRect_20() const { return ___m_ViewRect_20; }
	inline RectTransform_t3704657025 ** get_address_of_m_ViewRect_20() { return &___m_ViewRect_20; }
	inline void set_m_ViewRect_20(RectTransform_t3704657025 * value)
	{
		___m_ViewRect_20 = value;
		Il2CppCodeGenWriteBarrier((&___m_ViewRect_20), value);
	}

	inline static int32_t get_offset_of_m_ContentBounds_21() { return static_cast<int32_t>(offsetof(ScrollRect_t4137855814, ___m_ContentBounds_21)); }
	inline Bounds_t2266837910  get_m_ContentBounds_21() const { return ___m_ContentBounds_21; }
	inline Bounds_t2266837910 * get_address_of_m_ContentBounds_21() { return &___m_ContentBounds_21; }
	inline void set_m_ContentBounds_21(Bounds_t2266837910  value)
	{
		___m_ContentBounds_21 = value;
	}

	inline static int32_t get_offset_of_m_ViewBounds_22() { return static_cast<int32_t>(offsetof(ScrollRect_t4137855814, ___m_ViewBounds_22)); }
	inline Bounds_t2266837910  get_m_ViewBounds_22() const { return ___m_ViewBounds_22; }
	inline Bounds_t2266837910 * get_address_of_m_ViewBounds_22() { return &___m_ViewBounds_22; }
	inline void set_m_ViewBounds_22(Bounds_t2266837910  value)
	{
		___m_ViewBounds_22 = value;
	}

	inline static int32_t get_offset_of_m_Velocity_23() { return static_cast<int32_t>(offsetof(ScrollRect_t4137855814, ___m_Velocity_23)); }
	inline Vector2_t2156229523  get_m_Velocity_23() const { return ___m_Velocity_23; }
	inline Vector2_t2156229523 * get_address_of_m_Velocity_23() { return &___m_Velocity_23; }
	inline void set_m_Velocity_23(Vector2_t2156229523  value)
	{
		___m_Velocity_23 = value;
	}

	inline static int32_t get_offset_of_m_Dragging_24() { return static_cast<int32_t>(offsetof(ScrollRect_t4137855814, ___m_Dragging_24)); }
	inline bool get_m_Dragging_24() const { return ___m_Dragging_24; }
	inline bool* get_address_of_m_Dragging_24() { return &___m_Dragging_24; }
	inline void set_m_Dragging_24(bool value)
	{
		___m_Dragging_24 = value;
	}

	inline static int32_t get_offset_of_m_PrevPosition_25() { return static_cast<int32_t>(offsetof(ScrollRect_t4137855814, ___m_PrevPosition_25)); }
	inline Vector2_t2156229523  get_m_PrevPosition_25() const { return ___m_PrevPosition_25; }
	inline Vector2_t2156229523 * get_address_of_m_PrevPosition_25() { return &___m_PrevPosition_25; }
	inline void set_m_PrevPosition_25(Vector2_t2156229523  value)
	{
		___m_PrevPosition_25 = value;
	}

	inline static int32_t get_offset_of_m_PrevContentBounds_26() { return static_cast<int32_t>(offsetof(ScrollRect_t4137855814, ___m_PrevContentBounds_26)); }
	inline Bounds_t2266837910  get_m_PrevContentBounds_26() const { return ___m_PrevContentBounds_26; }
	inline Bounds_t2266837910 * get_address_of_m_PrevContentBounds_26() { return &___m_PrevContentBounds_26; }
	inline void set_m_PrevContentBounds_26(Bounds_t2266837910  value)
	{
		___m_PrevContentBounds_26 = value;
	}

	inline static int32_t get_offset_of_m_PrevViewBounds_27() { return static_cast<int32_t>(offsetof(ScrollRect_t4137855814, ___m_PrevViewBounds_27)); }
	inline Bounds_t2266837910  get_m_PrevViewBounds_27() const { return ___m_PrevViewBounds_27; }
	inline Bounds_t2266837910 * get_address_of_m_PrevViewBounds_27() { return &___m_PrevViewBounds_27; }
	inline void set_m_PrevViewBounds_27(Bounds_t2266837910  value)
	{
		___m_PrevViewBounds_27 = value;
	}

	inline static int32_t get_offset_of_m_HasRebuiltLayout_28() { return static_cast<int32_t>(offsetof(ScrollRect_t4137855814, ___m_HasRebuiltLayout_28)); }
	inline bool get_m_HasRebuiltLayout_28() const { return ___m_HasRebuiltLayout_28; }
	inline bool* get_address_of_m_HasRebuiltLayout_28() { return &___m_HasRebuiltLayout_28; }
	inline void set_m_HasRebuiltLayout_28(bool value)
	{
		___m_HasRebuiltLayout_28 = value;
	}

	inline static int32_t get_offset_of_m_HSliderExpand_29() { return static_cast<int32_t>(offsetof(ScrollRect_t4137855814, ___m_HSliderExpand_29)); }
	inline bool get_m_HSliderExpand_29() const { return ___m_HSliderExpand_29; }
	inline bool* get_address_of_m_HSliderExpand_29() { return &___m_HSliderExpand_29; }
	inline void set_m_HSliderExpand_29(bool value)
	{
		___m_HSliderExpand_29 = value;
	}

	inline static int32_t get_offset_of_m_VSliderExpand_30() { return static_cast<int32_t>(offsetof(ScrollRect_t4137855814, ___m_VSliderExpand_30)); }
	inline bool get_m_VSliderExpand_30() const { return ___m_VSliderExpand_30; }
	inline bool* get_address_of_m_VSliderExpand_30() { return &___m_VSliderExpand_30; }
	inline void set_m_VSliderExpand_30(bool value)
	{
		___m_VSliderExpand_30 = value;
	}

	inline static int32_t get_offset_of_m_HSliderHeight_31() { return static_cast<int32_t>(offsetof(ScrollRect_t4137855814, ___m_HSliderHeight_31)); }
	inline float get_m_HSliderHeight_31() const { return ___m_HSliderHeight_31; }
	inline float* get_address_of_m_HSliderHeight_31() { return &___m_HSliderHeight_31; }
	inline void set_m_HSliderHeight_31(float value)
	{
		___m_HSliderHeight_31 = value;
	}

	inline static int32_t get_offset_of_m_VSliderWidth_32() { return static_cast<int32_t>(offsetof(ScrollRect_t4137855814, ___m_VSliderWidth_32)); }
	inline float get_m_VSliderWidth_32() const { return ___m_VSliderWidth_32; }
	inline float* get_address_of_m_VSliderWidth_32() { return &___m_VSliderWidth_32; }
	inline void set_m_VSliderWidth_32(float value)
	{
		___m_VSliderWidth_32 = value;
	}

	inline static int32_t get_offset_of_m_Rect_33() { return static_cast<int32_t>(offsetof(ScrollRect_t4137855814, ___m_Rect_33)); }
	inline RectTransform_t3704657025 * get_m_Rect_33() const { return ___m_Rect_33; }
	inline RectTransform_t3704657025 ** get_address_of_m_Rect_33() { return &___m_Rect_33; }
	inline void set_m_Rect_33(RectTransform_t3704657025 * value)
	{
		___m_Rect_33 = value;
		Il2CppCodeGenWriteBarrier((&___m_Rect_33), value);
	}

	inline static int32_t get_offset_of_m_HorizontalScrollbarRect_34() { return static_cast<int32_t>(offsetof(ScrollRect_t4137855814, ___m_HorizontalScrollbarRect_34)); }
	inline RectTransform_t3704657025 * get_m_HorizontalScrollbarRect_34() const { return ___m_HorizontalScrollbarRect_34; }
	inline RectTransform_t3704657025 ** get_address_of_m_HorizontalScrollbarRect_34() { return &___m_HorizontalScrollbarRect_34; }
	inline void set_m_HorizontalScrollbarRect_34(RectTransform_t3704657025 * value)
	{
		___m_HorizontalScrollbarRect_34 = value;
		Il2CppCodeGenWriteBarrier((&___m_HorizontalScrollbarRect_34), value);
	}

	inline static int32_t get_offset_of_m_VerticalScrollbarRect_35() { return static_cast<int32_t>(offsetof(ScrollRect_t4137855814, ___m_VerticalScrollbarRect_35)); }
	inline RectTransform_t3704657025 * get_m_VerticalScrollbarRect_35() const { return ___m_VerticalScrollbarRect_35; }
	inline RectTransform_t3704657025 ** get_address_of_m_VerticalScrollbarRect_35() { return &___m_VerticalScrollbarRect_35; }
	inline void set_m_VerticalScrollbarRect_35(RectTransform_t3704657025 * value)
	{
		___m_VerticalScrollbarRect_35 = value;
		Il2CppCodeGenWriteBarrier((&___m_VerticalScrollbarRect_35), value);
	}

	inline static int32_t get_offset_of_m_Tracker_36() { return static_cast<int32_t>(offsetof(ScrollRect_t4137855814, ___m_Tracker_36)); }
	inline DrivenRectTransformTracker_t2562230146  get_m_Tracker_36() const { return ___m_Tracker_36; }
	inline DrivenRectTransformTracker_t2562230146 * get_address_of_m_Tracker_36() { return &___m_Tracker_36; }
	inline void set_m_Tracker_36(DrivenRectTransformTracker_t2562230146  value)
	{
		___m_Tracker_36 = value;
	}

	inline static int32_t get_offset_of_m_Corners_37() { return static_cast<int32_t>(offsetof(ScrollRect_t4137855814, ___m_Corners_37)); }
	inline Vector3U5BU5D_t1718750761* get_m_Corners_37() const { return ___m_Corners_37; }
	inline Vector3U5BU5D_t1718750761** get_address_of_m_Corners_37() { return &___m_Corners_37; }
	inline void set_m_Corners_37(Vector3U5BU5D_t1718750761* value)
	{
		___m_Corners_37 = value;
		Il2CppCodeGenWriteBarrier((&___m_Corners_37), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SCROLLRECT_T4137855814_H
#ifndef EVENTSYSTEM_T1003666588_H
#define EVENTSYSTEM_T1003666588_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.EventSystems.EventSystem
struct  EventSystem_t1003666588  : public UIBehaviour_t3495933518
{
public:
	// System.Collections.Generic.List`1<UnityEngine.EventSystems.BaseInputModule> UnityEngine.EventSystems.EventSystem::m_SystemInputModules
	List_1_t3491343620 * ___m_SystemInputModules_2;
	// UnityEngine.EventSystems.BaseInputModule UnityEngine.EventSystems.EventSystem::m_CurrentInputModule
	BaseInputModule_t2019268878 * ___m_CurrentInputModule_3;
	// UnityEngine.GameObject UnityEngine.EventSystems.EventSystem::m_FirstSelected
	GameObject_t1113636619 * ___m_FirstSelected_5;
	// System.Boolean UnityEngine.EventSystems.EventSystem::m_sendNavigationEvents
	bool ___m_sendNavigationEvents_6;
	// System.Int32 UnityEngine.EventSystems.EventSystem::m_DragThreshold
	int32_t ___m_DragThreshold_7;
	// UnityEngine.GameObject UnityEngine.EventSystems.EventSystem::m_CurrentSelected
	GameObject_t1113636619 * ___m_CurrentSelected_8;
	// System.Boolean UnityEngine.EventSystems.EventSystem::m_HasFocus
	bool ___m_HasFocus_9;
	// System.Boolean UnityEngine.EventSystems.EventSystem::m_SelectionGuard
	bool ___m_SelectionGuard_10;
	// UnityEngine.EventSystems.BaseEventData UnityEngine.EventSystems.EventSystem::m_DummyData
	BaseEventData_t3903027533 * ___m_DummyData_11;

public:
	inline static int32_t get_offset_of_m_SystemInputModules_2() { return static_cast<int32_t>(offsetof(EventSystem_t1003666588, ___m_SystemInputModules_2)); }
	inline List_1_t3491343620 * get_m_SystemInputModules_2() const { return ___m_SystemInputModules_2; }
	inline List_1_t3491343620 ** get_address_of_m_SystemInputModules_2() { return &___m_SystemInputModules_2; }
	inline void set_m_SystemInputModules_2(List_1_t3491343620 * value)
	{
		___m_SystemInputModules_2 = value;
		Il2CppCodeGenWriteBarrier((&___m_SystemInputModules_2), value);
	}

	inline static int32_t get_offset_of_m_CurrentInputModule_3() { return static_cast<int32_t>(offsetof(EventSystem_t1003666588, ___m_CurrentInputModule_3)); }
	inline BaseInputModule_t2019268878 * get_m_CurrentInputModule_3() const { return ___m_CurrentInputModule_3; }
	inline BaseInputModule_t2019268878 ** get_address_of_m_CurrentInputModule_3() { return &___m_CurrentInputModule_3; }
	inline void set_m_CurrentInputModule_3(BaseInputModule_t2019268878 * value)
	{
		___m_CurrentInputModule_3 = value;
		Il2CppCodeGenWriteBarrier((&___m_CurrentInputModule_3), value);
	}

	inline static int32_t get_offset_of_m_FirstSelected_5() { return static_cast<int32_t>(offsetof(EventSystem_t1003666588, ___m_FirstSelected_5)); }
	inline GameObject_t1113636619 * get_m_FirstSelected_5() const { return ___m_FirstSelected_5; }
	inline GameObject_t1113636619 ** get_address_of_m_FirstSelected_5() { return &___m_FirstSelected_5; }
	inline void set_m_FirstSelected_5(GameObject_t1113636619 * value)
	{
		___m_FirstSelected_5 = value;
		Il2CppCodeGenWriteBarrier((&___m_FirstSelected_5), value);
	}

	inline static int32_t get_offset_of_m_sendNavigationEvents_6() { return static_cast<int32_t>(offsetof(EventSystem_t1003666588, ___m_sendNavigationEvents_6)); }
	inline bool get_m_sendNavigationEvents_6() const { return ___m_sendNavigationEvents_6; }
	inline bool* get_address_of_m_sendNavigationEvents_6() { return &___m_sendNavigationEvents_6; }
	inline void set_m_sendNavigationEvents_6(bool value)
	{
		___m_sendNavigationEvents_6 = value;
	}

	inline static int32_t get_offset_of_m_DragThreshold_7() { return static_cast<int32_t>(offsetof(EventSystem_t1003666588, ___m_DragThreshold_7)); }
	inline int32_t get_m_DragThreshold_7() const { return ___m_DragThreshold_7; }
	inline int32_t* get_address_of_m_DragThreshold_7() { return &___m_DragThreshold_7; }
	inline void set_m_DragThreshold_7(int32_t value)
	{
		___m_DragThreshold_7 = value;
	}

	inline static int32_t get_offset_of_m_CurrentSelected_8() { return static_cast<int32_t>(offsetof(EventSystem_t1003666588, ___m_CurrentSelected_8)); }
	inline GameObject_t1113636619 * get_m_CurrentSelected_8() const { return ___m_CurrentSelected_8; }
	inline GameObject_t1113636619 ** get_address_of_m_CurrentSelected_8() { return &___m_CurrentSelected_8; }
	inline void set_m_CurrentSelected_8(GameObject_t1113636619 * value)
	{
		___m_CurrentSelected_8 = value;
		Il2CppCodeGenWriteBarrier((&___m_CurrentSelected_8), value);
	}

	inline static int32_t get_offset_of_m_HasFocus_9() { return static_cast<int32_t>(offsetof(EventSystem_t1003666588, ___m_HasFocus_9)); }
	inline bool get_m_HasFocus_9() const { return ___m_HasFocus_9; }
	inline bool* get_address_of_m_HasFocus_9() { return &___m_HasFocus_9; }
	inline void set_m_HasFocus_9(bool value)
	{
		___m_HasFocus_9 = value;
	}

	inline static int32_t get_offset_of_m_SelectionGuard_10() { return static_cast<int32_t>(offsetof(EventSystem_t1003666588, ___m_SelectionGuard_10)); }
	inline bool get_m_SelectionGuard_10() const { return ___m_SelectionGuard_10; }
	inline bool* get_address_of_m_SelectionGuard_10() { return &___m_SelectionGuard_10; }
	inline void set_m_SelectionGuard_10(bool value)
	{
		___m_SelectionGuard_10 = value;
	}

	inline static int32_t get_offset_of_m_DummyData_11() { return static_cast<int32_t>(offsetof(EventSystem_t1003666588, ___m_DummyData_11)); }
	inline BaseEventData_t3903027533 * get_m_DummyData_11() const { return ___m_DummyData_11; }
	inline BaseEventData_t3903027533 ** get_address_of_m_DummyData_11() { return &___m_DummyData_11; }
	inline void set_m_DummyData_11(BaseEventData_t3903027533 * value)
	{
		___m_DummyData_11 = value;
		Il2CppCodeGenWriteBarrier((&___m_DummyData_11), value);
	}
};

struct EventSystem_t1003666588_StaticFields
{
public:
	// System.Collections.Generic.List`1<UnityEngine.EventSystems.EventSystem> UnityEngine.EventSystems.EventSystem::m_EventSystems
	List_1_t2475741330 * ___m_EventSystems_4;
	// System.Comparison`1<UnityEngine.EventSystems.RaycastResult> UnityEngine.EventSystems.EventSystem::s_RaycastComparer
	Comparison_1_t3135238028 * ___s_RaycastComparer_12;
	// System.Comparison`1<UnityEngine.EventSystems.RaycastResult> UnityEngine.EventSystems.EventSystem::<>f__mg$cache0
	Comparison_1_t3135238028 * ___U3CU3Ef__mgU24cache0_13;

public:
	inline static int32_t get_offset_of_m_EventSystems_4() { return static_cast<int32_t>(offsetof(EventSystem_t1003666588_StaticFields, ___m_EventSystems_4)); }
	inline List_1_t2475741330 * get_m_EventSystems_4() const { return ___m_EventSystems_4; }
	inline List_1_t2475741330 ** get_address_of_m_EventSystems_4() { return &___m_EventSystems_4; }
	inline void set_m_EventSystems_4(List_1_t2475741330 * value)
	{
		___m_EventSystems_4 = value;
		Il2CppCodeGenWriteBarrier((&___m_EventSystems_4), value);
	}

	inline static int32_t get_offset_of_s_RaycastComparer_12() { return static_cast<int32_t>(offsetof(EventSystem_t1003666588_StaticFields, ___s_RaycastComparer_12)); }
	inline Comparison_1_t3135238028 * get_s_RaycastComparer_12() const { return ___s_RaycastComparer_12; }
	inline Comparison_1_t3135238028 ** get_address_of_s_RaycastComparer_12() { return &___s_RaycastComparer_12; }
	inline void set_s_RaycastComparer_12(Comparison_1_t3135238028 * value)
	{
		___s_RaycastComparer_12 = value;
		Il2CppCodeGenWriteBarrier((&___s_RaycastComparer_12), value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__mgU24cache0_13() { return static_cast<int32_t>(offsetof(EventSystem_t1003666588_StaticFields, ___U3CU3Ef__mgU24cache0_13)); }
	inline Comparison_1_t3135238028 * get_U3CU3Ef__mgU24cache0_13() const { return ___U3CU3Ef__mgU24cache0_13; }
	inline Comparison_1_t3135238028 ** get_address_of_U3CU3Ef__mgU24cache0_13() { return &___U3CU3Ef__mgU24cache0_13; }
	inline void set_U3CU3Ef__mgU24cache0_13(Comparison_1_t3135238028 * value)
	{
		___U3CU3Ef__mgU24cache0_13 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3Ef__mgU24cache0_13), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // EVENTSYSTEM_T1003666588_H
#ifndef SELECTABLE_T3250028441_H
#define SELECTABLE_T3250028441_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.UI.Selectable
struct  Selectable_t3250028441  : public UIBehaviour_t3495933518
{
public:
	// UnityEngine.UI.Navigation UnityEngine.UI.Selectable::m_Navigation
	Navigation_t3049316579  ___m_Navigation_3;
	// UnityEngine.UI.Selectable/Transition UnityEngine.UI.Selectable::m_Transition
	int32_t ___m_Transition_4;
	// UnityEngine.UI.ColorBlock UnityEngine.UI.Selectable::m_Colors
	ColorBlock_t2139031574  ___m_Colors_5;
	// UnityEngine.UI.SpriteState UnityEngine.UI.Selectable::m_SpriteState
	SpriteState_t1362986479  ___m_SpriteState_6;
	// UnityEngine.UI.AnimationTriggers UnityEngine.UI.Selectable::m_AnimationTriggers
	AnimationTriggers_t2532145056 * ___m_AnimationTriggers_7;
	// System.Boolean UnityEngine.UI.Selectable::m_Interactable
	bool ___m_Interactable_8;
	// UnityEngine.UI.Graphic UnityEngine.UI.Selectable::m_TargetGraphic
	Graphic_t1660335611 * ___m_TargetGraphic_9;
	// System.Boolean UnityEngine.UI.Selectable::m_GroupsAllowInteraction
	bool ___m_GroupsAllowInteraction_10;
	// UnityEngine.UI.Selectable/SelectionState UnityEngine.UI.Selectable::m_CurrentSelectionState
	int32_t ___m_CurrentSelectionState_11;
	// System.Boolean UnityEngine.UI.Selectable::<isPointerInside>k__BackingField
	bool ___U3CisPointerInsideU3Ek__BackingField_12;
	// System.Boolean UnityEngine.UI.Selectable::<isPointerDown>k__BackingField
	bool ___U3CisPointerDownU3Ek__BackingField_13;
	// System.Boolean UnityEngine.UI.Selectable::<hasSelection>k__BackingField
	bool ___U3ChasSelectionU3Ek__BackingField_14;
	// System.Collections.Generic.List`1<UnityEngine.CanvasGroup> UnityEngine.UI.Selectable::m_CanvasGroupCache
	List_1_t1260619206 * ___m_CanvasGroupCache_15;

public:
	inline static int32_t get_offset_of_m_Navigation_3() { return static_cast<int32_t>(offsetof(Selectable_t3250028441, ___m_Navigation_3)); }
	inline Navigation_t3049316579  get_m_Navigation_3() const { return ___m_Navigation_3; }
	inline Navigation_t3049316579 * get_address_of_m_Navigation_3() { return &___m_Navigation_3; }
	inline void set_m_Navigation_3(Navigation_t3049316579  value)
	{
		___m_Navigation_3 = value;
	}

	inline static int32_t get_offset_of_m_Transition_4() { return static_cast<int32_t>(offsetof(Selectable_t3250028441, ___m_Transition_4)); }
	inline int32_t get_m_Transition_4() const { return ___m_Transition_4; }
	inline int32_t* get_address_of_m_Transition_4() { return &___m_Transition_4; }
	inline void set_m_Transition_4(int32_t value)
	{
		___m_Transition_4 = value;
	}

	inline static int32_t get_offset_of_m_Colors_5() { return static_cast<int32_t>(offsetof(Selectable_t3250028441, ___m_Colors_5)); }
	inline ColorBlock_t2139031574  get_m_Colors_5() const { return ___m_Colors_5; }
	inline ColorBlock_t2139031574 * get_address_of_m_Colors_5() { return &___m_Colors_5; }
	inline void set_m_Colors_5(ColorBlock_t2139031574  value)
	{
		___m_Colors_5 = value;
	}

	inline static int32_t get_offset_of_m_SpriteState_6() { return static_cast<int32_t>(offsetof(Selectable_t3250028441, ___m_SpriteState_6)); }
	inline SpriteState_t1362986479  get_m_SpriteState_6() const { return ___m_SpriteState_6; }
	inline SpriteState_t1362986479 * get_address_of_m_SpriteState_6() { return &___m_SpriteState_6; }
	inline void set_m_SpriteState_6(SpriteState_t1362986479  value)
	{
		___m_SpriteState_6 = value;
	}

	inline static int32_t get_offset_of_m_AnimationTriggers_7() { return static_cast<int32_t>(offsetof(Selectable_t3250028441, ___m_AnimationTriggers_7)); }
	inline AnimationTriggers_t2532145056 * get_m_AnimationTriggers_7() const { return ___m_AnimationTriggers_7; }
	inline AnimationTriggers_t2532145056 ** get_address_of_m_AnimationTriggers_7() { return &___m_AnimationTriggers_7; }
	inline void set_m_AnimationTriggers_7(AnimationTriggers_t2532145056 * value)
	{
		___m_AnimationTriggers_7 = value;
		Il2CppCodeGenWriteBarrier((&___m_AnimationTriggers_7), value);
	}

	inline static int32_t get_offset_of_m_Interactable_8() { return static_cast<int32_t>(offsetof(Selectable_t3250028441, ___m_Interactable_8)); }
	inline bool get_m_Interactable_8() const { return ___m_Interactable_8; }
	inline bool* get_address_of_m_Interactable_8() { return &___m_Interactable_8; }
	inline void set_m_Interactable_8(bool value)
	{
		___m_Interactable_8 = value;
	}

	inline static int32_t get_offset_of_m_TargetGraphic_9() { return static_cast<int32_t>(offsetof(Selectable_t3250028441, ___m_TargetGraphic_9)); }
	inline Graphic_t1660335611 * get_m_TargetGraphic_9() const { return ___m_TargetGraphic_9; }
	inline Graphic_t1660335611 ** get_address_of_m_TargetGraphic_9() { return &___m_TargetGraphic_9; }
	inline void set_m_TargetGraphic_9(Graphic_t1660335611 * value)
	{
		___m_TargetGraphic_9 = value;
		Il2CppCodeGenWriteBarrier((&___m_TargetGraphic_9), value);
	}

	inline static int32_t get_offset_of_m_GroupsAllowInteraction_10() { return static_cast<int32_t>(offsetof(Selectable_t3250028441, ___m_GroupsAllowInteraction_10)); }
	inline bool get_m_GroupsAllowInteraction_10() const { return ___m_GroupsAllowInteraction_10; }
	inline bool* get_address_of_m_GroupsAllowInteraction_10() { return &___m_GroupsAllowInteraction_10; }
	inline void set_m_GroupsAllowInteraction_10(bool value)
	{
		___m_GroupsAllowInteraction_10 = value;
	}

	inline static int32_t get_offset_of_m_CurrentSelectionState_11() { return static_cast<int32_t>(offsetof(Selectable_t3250028441, ___m_CurrentSelectionState_11)); }
	inline int32_t get_m_CurrentSelectionState_11() const { return ___m_CurrentSelectionState_11; }
	inline int32_t* get_address_of_m_CurrentSelectionState_11() { return &___m_CurrentSelectionState_11; }
	inline void set_m_CurrentSelectionState_11(int32_t value)
	{
		___m_CurrentSelectionState_11 = value;
	}

	inline static int32_t get_offset_of_U3CisPointerInsideU3Ek__BackingField_12() { return static_cast<int32_t>(offsetof(Selectable_t3250028441, ___U3CisPointerInsideU3Ek__BackingField_12)); }
	inline bool get_U3CisPointerInsideU3Ek__BackingField_12() const { return ___U3CisPointerInsideU3Ek__BackingField_12; }
	inline bool* get_address_of_U3CisPointerInsideU3Ek__BackingField_12() { return &___U3CisPointerInsideU3Ek__BackingField_12; }
	inline void set_U3CisPointerInsideU3Ek__BackingField_12(bool value)
	{
		___U3CisPointerInsideU3Ek__BackingField_12 = value;
	}

	inline static int32_t get_offset_of_U3CisPointerDownU3Ek__BackingField_13() { return static_cast<int32_t>(offsetof(Selectable_t3250028441, ___U3CisPointerDownU3Ek__BackingField_13)); }
	inline bool get_U3CisPointerDownU3Ek__BackingField_13() const { return ___U3CisPointerDownU3Ek__BackingField_13; }
	inline bool* get_address_of_U3CisPointerDownU3Ek__BackingField_13() { return &___U3CisPointerDownU3Ek__BackingField_13; }
	inline void set_U3CisPointerDownU3Ek__BackingField_13(bool value)
	{
		___U3CisPointerDownU3Ek__BackingField_13 = value;
	}

	inline static int32_t get_offset_of_U3ChasSelectionU3Ek__BackingField_14() { return static_cast<int32_t>(offsetof(Selectable_t3250028441, ___U3ChasSelectionU3Ek__BackingField_14)); }
	inline bool get_U3ChasSelectionU3Ek__BackingField_14() const { return ___U3ChasSelectionU3Ek__BackingField_14; }
	inline bool* get_address_of_U3ChasSelectionU3Ek__BackingField_14() { return &___U3ChasSelectionU3Ek__BackingField_14; }
	inline void set_U3ChasSelectionU3Ek__BackingField_14(bool value)
	{
		___U3ChasSelectionU3Ek__BackingField_14 = value;
	}

	inline static int32_t get_offset_of_m_CanvasGroupCache_15() { return static_cast<int32_t>(offsetof(Selectable_t3250028441, ___m_CanvasGroupCache_15)); }
	inline List_1_t1260619206 * get_m_CanvasGroupCache_15() const { return ___m_CanvasGroupCache_15; }
	inline List_1_t1260619206 ** get_address_of_m_CanvasGroupCache_15() { return &___m_CanvasGroupCache_15; }
	inline void set_m_CanvasGroupCache_15(List_1_t1260619206 * value)
	{
		___m_CanvasGroupCache_15 = value;
		Il2CppCodeGenWriteBarrier((&___m_CanvasGroupCache_15), value);
	}
};

struct Selectable_t3250028441_StaticFields
{
public:
	// System.Collections.Generic.List`1<UnityEngine.UI.Selectable> UnityEngine.UI.Selectable::s_List
	List_1_t427135887 * ___s_List_2;

public:
	inline static int32_t get_offset_of_s_List_2() { return static_cast<int32_t>(offsetof(Selectable_t3250028441_StaticFields, ___s_List_2)); }
	inline List_1_t427135887 * get_s_List_2() const { return ___s_List_2; }
	inline List_1_t427135887 ** get_address_of_s_List_2() { return &___s_List_2; }
	inline void set_s_List_2(List_1_t427135887 * value)
	{
		___s_List_2 = value;
		Il2CppCodeGenWriteBarrier((&___s_List_2), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SELECTABLE_T3250028441_H
#ifndef MASKABLEGRAPHIC_T3839221559_H
#define MASKABLEGRAPHIC_T3839221559_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.UI.MaskableGraphic
struct  MaskableGraphic_t3839221559  : public Graphic_t1660335611
{
public:
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_ShouldRecalculateStencil
	bool ___m_ShouldRecalculateStencil_19;
	// UnityEngine.Material UnityEngine.UI.MaskableGraphic::m_MaskMaterial
	Material_t340375123 * ___m_MaskMaterial_20;
	// UnityEngine.UI.RectMask2D UnityEngine.UI.MaskableGraphic::m_ParentMask
	RectMask2D_t3474889437 * ___m_ParentMask_21;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_Maskable
	bool ___m_Maskable_22;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_IncludeForMasking
	bool ___m_IncludeForMasking_23;
	// UnityEngine.UI.MaskableGraphic/CullStateChangedEvent UnityEngine.UI.MaskableGraphic::m_OnCullStateChanged
	CullStateChangedEvent_t3661388177 * ___m_OnCullStateChanged_24;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_ShouldRecalculate
	bool ___m_ShouldRecalculate_25;
	// System.Int32 UnityEngine.UI.MaskableGraphic::m_StencilValue
	int32_t ___m_StencilValue_26;
	// UnityEngine.Vector3[] UnityEngine.UI.MaskableGraphic::m_Corners
	Vector3U5BU5D_t1718750761* ___m_Corners_27;

public:
	inline static int32_t get_offset_of_m_ShouldRecalculateStencil_19() { return static_cast<int32_t>(offsetof(MaskableGraphic_t3839221559, ___m_ShouldRecalculateStencil_19)); }
	inline bool get_m_ShouldRecalculateStencil_19() const { return ___m_ShouldRecalculateStencil_19; }
	inline bool* get_address_of_m_ShouldRecalculateStencil_19() { return &___m_ShouldRecalculateStencil_19; }
	inline void set_m_ShouldRecalculateStencil_19(bool value)
	{
		___m_ShouldRecalculateStencil_19 = value;
	}

	inline static int32_t get_offset_of_m_MaskMaterial_20() { return static_cast<int32_t>(offsetof(MaskableGraphic_t3839221559, ___m_MaskMaterial_20)); }
	inline Material_t340375123 * get_m_MaskMaterial_20() const { return ___m_MaskMaterial_20; }
	inline Material_t340375123 ** get_address_of_m_MaskMaterial_20() { return &___m_MaskMaterial_20; }
	inline void set_m_MaskMaterial_20(Material_t340375123 * value)
	{
		___m_MaskMaterial_20 = value;
		Il2CppCodeGenWriteBarrier((&___m_MaskMaterial_20), value);
	}

	inline static int32_t get_offset_of_m_ParentMask_21() { return static_cast<int32_t>(offsetof(MaskableGraphic_t3839221559, ___m_ParentMask_21)); }
	inline RectMask2D_t3474889437 * get_m_ParentMask_21() const { return ___m_ParentMask_21; }
	inline RectMask2D_t3474889437 ** get_address_of_m_ParentMask_21() { return &___m_ParentMask_21; }
	inline void set_m_ParentMask_21(RectMask2D_t3474889437 * value)
	{
		___m_ParentMask_21 = value;
		Il2CppCodeGenWriteBarrier((&___m_ParentMask_21), value);
	}

	inline static int32_t get_offset_of_m_Maskable_22() { return static_cast<int32_t>(offsetof(MaskableGraphic_t3839221559, ___m_Maskable_22)); }
	inline bool get_m_Maskable_22() const { return ___m_Maskable_22; }
	inline bool* get_address_of_m_Maskable_22() { return &___m_Maskable_22; }
	inline void set_m_Maskable_22(bool value)
	{
		___m_Maskable_22 = value;
	}

	inline static int32_t get_offset_of_m_IncludeForMasking_23() { return static_cast<int32_t>(offsetof(MaskableGraphic_t3839221559, ___m_IncludeForMasking_23)); }
	inline bool get_m_IncludeForMasking_23() const { return ___m_IncludeForMasking_23; }
	inline bool* get_address_of_m_IncludeForMasking_23() { return &___m_IncludeForMasking_23; }
	inline void set_m_IncludeForMasking_23(bool value)
	{
		___m_IncludeForMasking_23 = value;
	}

	inline static int32_t get_offset_of_m_OnCullStateChanged_24() { return static_cast<int32_t>(offsetof(MaskableGraphic_t3839221559, ___m_OnCullStateChanged_24)); }
	inline CullStateChangedEvent_t3661388177 * get_m_OnCullStateChanged_24() const { return ___m_OnCullStateChanged_24; }
	inline CullStateChangedEvent_t3661388177 ** get_address_of_m_OnCullStateChanged_24() { return &___m_OnCullStateChanged_24; }
	inline void set_m_OnCullStateChanged_24(CullStateChangedEvent_t3661388177 * value)
	{
		___m_OnCullStateChanged_24 = value;
		Il2CppCodeGenWriteBarrier((&___m_OnCullStateChanged_24), value);
	}

	inline static int32_t get_offset_of_m_ShouldRecalculate_25() { return static_cast<int32_t>(offsetof(MaskableGraphic_t3839221559, ___m_ShouldRecalculate_25)); }
	inline bool get_m_ShouldRecalculate_25() const { return ___m_ShouldRecalculate_25; }
	inline bool* get_address_of_m_ShouldRecalculate_25() { return &___m_ShouldRecalculate_25; }
	inline void set_m_ShouldRecalculate_25(bool value)
	{
		___m_ShouldRecalculate_25 = value;
	}

	inline static int32_t get_offset_of_m_StencilValue_26() { return static_cast<int32_t>(offsetof(MaskableGraphic_t3839221559, ___m_StencilValue_26)); }
	inline int32_t get_m_StencilValue_26() const { return ___m_StencilValue_26; }
	inline int32_t* get_address_of_m_StencilValue_26() { return &___m_StencilValue_26; }
	inline void set_m_StencilValue_26(int32_t value)
	{
		___m_StencilValue_26 = value;
	}

	inline static int32_t get_offset_of_m_Corners_27() { return static_cast<int32_t>(offsetof(MaskableGraphic_t3839221559, ___m_Corners_27)); }
	inline Vector3U5BU5D_t1718750761* get_m_Corners_27() const { return ___m_Corners_27; }
	inline Vector3U5BU5D_t1718750761** get_address_of_m_Corners_27() { return &___m_Corners_27; }
	inline void set_m_Corners_27(Vector3U5BU5D_t1718750761* value)
	{
		___m_Corners_27 = value;
		Il2CppCodeGenWriteBarrier((&___m_Corners_27), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MASKABLEGRAPHIC_T3839221559_H
#ifndef BUTTON_T4055032469_H
#define BUTTON_T4055032469_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.UI.Button
struct  Button_t4055032469  : public Selectable_t3250028441
{
public:
	// UnityEngine.UI.Button/ButtonClickedEvent UnityEngine.UI.Button::m_OnClick
	ButtonClickedEvent_t48803504 * ___m_OnClick_16;

public:
	inline static int32_t get_offset_of_m_OnClick_16() { return static_cast<int32_t>(offsetof(Button_t4055032469, ___m_OnClick_16)); }
	inline ButtonClickedEvent_t48803504 * get_m_OnClick_16() const { return ___m_OnClick_16; }
	inline ButtonClickedEvent_t48803504 ** get_address_of_m_OnClick_16() { return &___m_OnClick_16; }
	inline void set_m_OnClick_16(ButtonClickedEvent_t48803504 * value)
	{
		___m_OnClick_16 = value;
		Il2CppCodeGenWriteBarrier((&___m_OnClick_16), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // BUTTON_T4055032469_H
#ifndef IMAGE_T2670269651_H
#define IMAGE_T2670269651_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.UI.Image
struct  Image_t2670269651  : public MaskableGraphic_t3839221559
{
public:
	// UnityEngine.Sprite UnityEngine.UI.Image::m_Sprite
	Sprite_t280657092 * ___m_Sprite_29;
	// UnityEngine.Sprite UnityEngine.UI.Image::m_OverrideSprite
	Sprite_t280657092 * ___m_OverrideSprite_30;
	// UnityEngine.UI.Image/Type UnityEngine.UI.Image::m_Type
	int32_t ___m_Type_31;
	// System.Boolean UnityEngine.UI.Image::m_PreserveAspect
	bool ___m_PreserveAspect_32;
	// System.Boolean UnityEngine.UI.Image::m_FillCenter
	bool ___m_FillCenter_33;
	// UnityEngine.UI.Image/FillMethod UnityEngine.UI.Image::m_FillMethod
	int32_t ___m_FillMethod_34;
	// System.Single UnityEngine.UI.Image::m_FillAmount
	float ___m_FillAmount_35;
	// System.Boolean UnityEngine.UI.Image::m_FillClockwise
	bool ___m_FillClockwise_36;
	// System.Int32 UnityEngine.UI.Image::m_FillOrigin
	int32_t ___m_FillOrigin_37;
	// System.Single UnityEngine.UI.Image::m_AlphaHitTestMinimumThreshold
	float ___m_AlphaHitTestMinimumThreshold_38;

public:
	inline static int32_t get_offset_of_m_Sprite_29() { return static_cast<int32_t>(offsetof(Image_t2670269651, ___m_Sprite_29)); }
	inline Sprite_t280657092 * get_m_Sprite_29() const { return ___m_Sprite_29; }
	inline Sprite_t280657092 ** get_address_of_m_Sprite_29() { return &___m_Sprite_29; }
	inline void set_m_Sprite_29(Sprite_t280657092 * value)
	{
		___m_Sprite_29 = value;
		Il2CppCodeGenWriteBarrier((&___m_Sprite_29), value);
	}

	inline static int32_t get_offset_of_m_OverrideSprite_30() { return static_cast<int32_t>(offsetof(Image_t2670269651, ___m_OverrideSprite_30)); }
	inline Sprite_t280657092 * get_m_OverrideSprite_30() const { return ___m_OverrideSprite_30; }
	inline Sprite_t280657092 ** get_address_of_m_OverrideSprite_30() { return &___m_OverrideSprite_30; }
	inline void set_m_OverrideSprite_30(Sprite_t280657092 * value)
	{
		___m_OverrideSprite_30 = value;
		Il2CppCodeGenWriteBarrier((&___m_OverrideSprite_30), value);
	}

	inline static int32_t get_offset_of_m_Type_31() { return static_cast<int32_t>(offsetof(Image_t2670269651, ___m_Type_31)); }
	inline int32_t get_m_Type_31() const { return ___m_Type_31; }
	inline int32_t* get_address_of_m_Type_31() { return &___m_Type_31; }
	inline void set_m_Type_31(int32_t value)
	{
		___m_Type_31 = value;
	}

	inline static int32_t get_offset_of_m_PreserveAspect_32() { return static_cast<int32_t>(offsetof(Image_t2670269651, ___m_PreserveAspect_32)); }
	inline bool get_m_PreserveAspect_32() const { return ___m_PreserveAspect_32; }
	inline bool* get_address_of_m_PreserveAspect_32() { return &___m_PreserveAspect_32; }
	inline void set_m_PreserveAspect_32(bool value)
	{
		___m_PreserveAspect_32 = value;
	}

	inline static int32_t get_offset_of_m_FillCenter_33() { return static_cast<int32_t>(offsetof(Image_t2670269651, ___m_FillCenter_33)); }
	inline bool get_m_FillCenter_33() const { return ___m_FillCenter_33; }
	inline bool* get_address_of_m_FillCenter_33() { return &___m_FillCenter_33; }
	inline void set_m_FillCenter_33(bool value)
	{
		___m_FillCenter_33 = value;
	}

	inline static int32_t get_offset_of_m_FillMethod_34() { return static_cast<int32_t>(offsetof(Image_t2670269651, ___m_FillMethod_34)); }
	inline int32_t get_m_FillMethod_34() const { return ___m_FillMethod_34; }
	inline int32_t* get_address_of_m_FillMethod_34() { return &___m_FillMethod_34; }
	inline void set_m_FillMethod_34(int32_t value)
	{
		___m_FillMethod_34 = value;
	}

	inline static int32_t get_offset_of_m_FillAmount_35() { return static_cast<int32_t>(offsetof(Image_t2670269651, ___m_FillAmount_35)); }
	inline float get_m_FillAmount_35() const { return ___m_FillAmount_35; }
	inline float* get_address_of_m_FillAmount_35() { return &___m_FillAmount_35; }
	inline void set_m_FillAmount_35(float value)
	{
		___m_FillAmount_35 = value;
	}

	inline static int32_t get_offset_of_m_FillClockwise_36() { return static_cast<int32_t>(offsetof(Image_t2670269651, ___m_FillClockwise_36)); }
	inline bool get_m_FillClockwise_36() const { return ___m_FillClockwise_36; }
	inline bool* get_address_of_m_FillClockwise_36() { return &___m_FillClockwise_36; }
	inline void set_m_FillClockwise_36(bool value)
	{
		___m_FillClockwise_36 = value;
	}

	inline static int32_t get_offset_of_m_FillOrigin_37() { return static_cast<int32_t>(offsetof(Image_t2670269651, ___m_FillOrigin_37)); }
	inline int32_t get_m_FillOrigin_37() const { return ___m_FillOrigin_37; }
	inline int32_t* get_address_of_m_FillOrigin_37() { return &___m_FillOrigin_37; }
	inline void set_m_FillOrigin_37(int32_t value)
	{
		___m_FillOrigin_37 = value;
	}

	inline static int32_t get_offset_of_m_AlphaHitTestMinimumThreshold_38() { return static_cast<int32_t>(offsetof(Image_t2670269651, ___m_AlphaHitTestMinimumThreshold_38)); }
	inline float get_m_AlphaHitTestMinimumThreshold_38() const { return ___m_AlphaHitTestMinimumThreshold_38; }
	inline float* get_address_of_m_AlphaHitTestMinimumThreshold_38() { return &___m_AlphaHitTestMinimumThreshold_38; }
	inline void set_m_AlphaHitTestMinimumThreshold_38(float value)
	{
		___m_AlphaHitTestMinimumThreshold_38 = value;
	}
};

struct Image_t2670269651_StaticFields
{
public:
	// UnityEngine.Material UnityEngine.UI.Image::s_ETC1DefaultUI
	Material_t340375123 * ___s_ETC1DefaultUI_28;
	// UnityEngine.Vector2[] UnityEngine.UI.Image::s_VertScratch
	Vector2U5BU5D_t1457185986* ___s_VertScratch_39;
	// UnityEngine.Vector2[] UnityEngine.UI.Image::s_UVScratch
	Vector2U5BU5D_t1457185986* ___s_UVScratch_40;
	// UnityEngine.Vector3[] UnityEngine.UI.Image::s_Xy
	Vector3U5BU5D_t1718750761* ___s_Xy_41;
	// UnityEngine.Vector3[] UnityEngine.UI.Image::s_Uv
	Vector3U5BU5D_t1718750761* ___s_Uv_42;

public:
	inline static int32_t get_offset_of_s_ETC1DefaultUI_28() { return static_cast<int32_t>(offsetof(Image_t2670269651_StaticFields, ___s_ETC1DefaultUI_28)); }
	inline Material_t340375123 * get_s_ETC1DefaultUI_28() const { return ___s_ETC1DefaultUI_28; }
	inline Material_t340375123 ** get_address_of_s_ETC1DefaultUI_28() { return &___s_ETC1DefaultUI_28; }
	inline void set_s_ETC1DefaultUI_28(Material_t340375123 * value)
	{
		___s_ETC1DefaultUI_28 = value;
		Il2CppCodeGenWriteBarrier((&___s_ETC1DefaultUI_28), value);
	}

	inline static int32_t get_offset_of_s_VertScratch_39() { return static_cast<int32_t>(offsetof(Image_t2670269651_StaticFields, ___s_VertScratch_39)); }
	inline Vector2U5BU5D_t1457185986* get_s_VertScratch_39() const { return ___s_VertScratch_39; }
	inline Vector2U5BU5D_t1457185986** get_address_of_s_VertScratch_39() { return &___s_VertScratch_39; }
	inline void set_s_VertScratch_39(Vector2U5BU5D_t1457185986* value)
	{
		___s_VertScratch_39 = value;
		Il2CppCodeGenWriteBarrier((&___s_VertScratch_39), value);
	}

	inline static int32_t get_offset_of_s_UVScratch_40() { return static_cast<int32_t>(offsetof(Image_t2670269651_StaticFields, ___s_UVScratch_40)); }
	inline Vector2U5BU5D_t1457185986* get_s_UVScratch_40() const { return ___s_UVScratch_40; }
	inline Vector2U5BU5D_t1457185986** get_address_of_s_UVScratch_40() { return &___s_UVScratch_40; }
	inline void set_s_UVScratch_40(Vector2U5BU5D_t1457185986* value)
	{
		___s_UVScratch_40 = value;
		Il2CppCodeGenWriteBarrier((&___s_UVScratch_40), value);
	}

	inline static int32_t get_offset_of_s_Xy_41() { return static_cast<int32_t>(offsetof(Image_t2670269651_StaticFields, ___s_Xy_41)); }
	inline Vector3U5BU5D_t1718750761* get_s_Xy_41() const { return ___s_Xy_41; }
	inline Vector3U5BU5D_t1718750761** get_address_of_s_Xy_41() { return &___s_Xy_41; }
	inline void set_s_Xy_41(Vector3U5BU5D_t1718750761* value)
	{
		___s_Xy_41 = value;
		Il2CppCodeGenWriteBarrier((&___s_Xy_41), value);
	}

	inline static int32_t get_offset_of_s_Uv_42() { return static_cast<int32_t>(offsetof(Image_t2670269651_StaticFields, ___s_Uv_42)); }
	inline Vector3U5BU5D_t1718750761* get_s_Uv_42() const { return ___s_Uv_42; }
	inline Vector3U5BU5D_t1718750761** get_address_of_s_Uv_42() { return &___s_Uv_42; }
	inline void set_s_Uv_42(Vector3U5BU5D_t1718750761* value)
	{
		___s_Uv_42 = value;
		Il2CppCodeGenWriteBarrier((&___s_Uv_42), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // IMAGE_T2670269651_H
#ifndef TEXT_T1901882714_H
#define TEXT_T1901882714_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.UI.Text
struct  Text_t1901882714  : public MaskableGraphic_t3839221559
{
public:
	// UnityEngine.UI.FontData UnityEngine.UI.Text::m_FontData
	FontData_t746620069 * ___m_FontData_28;
	// System.String UnityEngine.UI.Text::m_Text
	String_t* ___m_Text_29;
	// UnityEngine.TextGenerator UnityEngine.UI.Text::m_TextCache
	TextGenerator_t3211863866 * ___m_TextCache_30;
	// UnityEngine.TextGenerator UnityEngine.UI.Text::m_TextCacheForLayout
	TextGenerator_t3211863866 * ___m_TextCacheForLayout_31;
	// System.Boolean UnityEngine.UI.Text::m_DisableFontTextureRebuiltCallback
	bool ___m_DisableFontTextureRebuiltCallback_33;
	// UnityEngine.UIVertex[] UnityEngine.UI.Text::m_TempVerts
	UIVertexU5BU5D_t1981460040* ___m_TempVerts_34;

public:
	inline static int32_t get_offset_of_m_FontData_28() { return static_cast<int32_t>(offsetof(Text_t1901882714, ___m_FontData_28)); }
	inline FontData_t746620069 * get_m_FontData_28() const { return ___m_FontData_28; }
	inline FontData_t746620069 ** get_address_of_m_FontData_28() { return &___m_FontData_28; }
	inline void set_m_FontData_28(FontData_t746620069 * value)
	{
		___m_FontData_28 = value;
		Il2CppCodeGenWriteBarrier((&___m_FontData_28), value);
	}

	inline static int32_t get_offset_of_m_Text_29() { return static_cast<int32_t>(offsetof(Text_t1901882714, ___m_Text_29)); }
	inline String_t* get_m_Text_29() const { return ___m_Text_29; }
	inline String_t** get_address_of_m_Text_29() { return &___m_Text_29; }
	inline void set_m_Text_29(String_t* value)
	{
		___m_Text_29 = value;
		Il2CppCodeGenWriteBarrier((&___m_Text_29), value);
	}

	inline static int32_t get_offset_of_m_TextCache_30() { return static_cast<int32_t>(offsetof(Text_t1901882714, ___m_TextCache_30)); }
	inline TextGenerator_t3211863866 * get_m_TextCache_30() const { return ___m_TextCache_30; }
	inline TextGenerator_t3211863866 ** get_address_of_m_TextCache_30() { return &___m_TextCache_30; }
	inline void set_m_TextCache_30(TextGenerator_t3211863866 * value)
	{
		___m_TextCache_30 = value;
		Il2CppCodeGenWriteBarrier((&___m_TextCache_30), value);
	}

	inline static int32_t get_offset_of_m_TextCacheForLayout_31() { return static_cast<int32_t>(offsetof(Text_t1901882714, ___m_TextCacheForLayout_31)); }
	inline TextGenerator_t3211863866 * get_m_TextCacheForLayout_31() const { return ___m_TextCacheForLayout_31; }
	inline TextGenerator_t3211863866 ** get_address_of_m_TextCacheForLayout_31() { return &___m_TextCacheForLayout_31; }
	inline void set_m_TextCacheForLayout_31(TextGenerator_t3211863866 * value)
	{
		___m_TextCacheForLayout_31 = value;
		Il2CppCodeGenWriteBarrier((&___m_TextCacheForLayout_31), value);
	}

	inline static int32_t get_offset_of_m_DisableFontTextureRebuiltCallback_33() { return static_cast<int32_t>(offsetof(Text_t1901882714, ___m_DisableFontTextureRebuiltCallback_33)); }
	inline bool get_m_DisableFontTextureRebuiltCallback_33() const { return ___m_DisableFontTextureRebuiltCallback_33; }
	inline bool* get_address_of_m_DisableFontTextureRebuiltCallback_33() { return &___m_DisableFontTextureRebuiltCallback_33; }
	inline void set_m_DisableFontTextureRebuiltCallback_33(bool value)
	{
		___m_DisableFontTextureRebuiltCallback_33 = value;
	}

	inline static int32_t get_offset_of_m_TempVerts_34() { return static_cast<int32_t>(offsetof(Text_t1901882714, ___m_TempVerts_34)); }
	inline UIVertexU5BU5D_t1981460040* get_m_TempVerts_34() const { return ___m_TempVerts_34; }
	inline UIVertexU5BU5D_t1981460040** get_address_of_m_TempVerts_34() { return &___m_TempVerts_34; }
	inline void set_m_TempVerts_34(UIVertexU5BU5D_t1981460040* value)
	{
		___m_TempVerts_34 = value;
		Il2CppCodeGenWriteBarrier((&___m_TempVerts_34), value);
	}
};

struct Text_t1901882714_StaticFields
{
public:
	// UnityEngine.Material UnityEngine.UI.Text::s_DefaultText
	Material_t340375123 * ___s_DefaultText_32;

public:
	inline static int32_t get_offset_of_s_DefaultText_32() { return static_cast<int32_t>(offsetof(Text_t1901882714_StaticFields, ___s_DefaultText_32)); }
	inline Material_t340375123 * get_s_DefaultText_32() const { return ___s_DefaultText_32; }
	inline Material_t340375123 ** get_address_of_s_DefaultText_32() { return &___s_DefaultText_32; }
	inline void set_s_DefaultText_32(Material_t340375123 * value)
	{
		___s_DefaultText_32 = value;
		Il2CppCodeGenWriteBarrier((&___s_DefaultText_32), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TEXT_T1901882714_H
// System.Object[]
struct ObjectU5BU5D_t2843939325  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) RuntimeObject * m_Items[1];

public:
	inline RuntimeObject * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline RuntimeObject ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, RuntimeObject * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
	}
	inline RuntimeObject * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline RuntimeObject ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, RuntimeObject * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
	}
};
// System.Int32[]
struct Int32U5BU5D_t385246372  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) int32_t m_Items[1];

public:
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
// UnityEngine.Transform[]
struct TransformU5BU5D_t807237628  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) Transform_t3600365921 * m_Items[1];

public:
	inline Transform_t3600365921 * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Transform_t3600365921 ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Transform_t3600365921 * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
	}
	inline Transform_t3600365921 * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Transform_t3600365921 ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Transform_t3600365921 * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
	}
};
// UnityEngine.Sprite[]
struct SpriteU5BU5D_t2581906349  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) Sprite_t280657092 * m_Items[1];

public:
	inline Sprite_t280657092 * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Sprite_t280657092 ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Sprite_t280657092 * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
	}
	inline Sprite_t280657092 * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Sprite_t280657092 ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Sprite_t280657092 * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
	}
};
// System.Char[]
struct CharU5BU5D_t3528271667  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) Il2CppChar m_Items[1];

public:
	inline Il2CppChar GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Il2CppChar* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Il2CppChar value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline Il2CppChar GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Il2CppChar* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Il2CppChar value)
	{
		m_Items[index] = value;
	}
};
// System.String[]
struct StringU5BU5D_t1281789340  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) String_t* m_Items[1];

public:
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
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
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
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
	}
};
// System.Byte[]
struct ByteU5BU5D_t4116647657  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) uint8_t m_Items[1];

public:
	inline uint8_t GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline uint8_t* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, uint8_t value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline uint8_t GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline uint8_t* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, uint8_t value)
	{
		m_Items[index] = value;
	}
};
// System.Boolean[]
struct BooleanU5BU5D_t2897418192  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) bool m_Items[1];

public:
	inline bool GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline bool* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, bool value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline bool GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline bool* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, bool value)
	{
		m_Items[index] = value;
	}
};
// LocalizeString[]
struct LocalizeStringU5BU5D_t1200507501  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) LocalizeString_t491646212 * m_Items[1];

public:
	inline LocalizeString_t491646212 * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline LocalizeString_t491646212 ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, LocalizeString_t491646212 * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
	}
	inline LocalizeString_t491646212 * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline LocalizeString_t491646212 ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, LocalizeString_t491646212 * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
	}
};

extern "C" void EndpointDetails_t3891698496_marshal_pinvoke(const EndpointDetails_t3891698496& unmarshaled, EndpointDetails_t3891698496_marshaled_pinvoke& marshaled);
extern "C" void EndpointDetails_t3891698496_marshal_pinvoke_back(const EndpointDetails_t3891698496_marshaled_pinvoke& marshaled, EndpointDetails_t3891698496& unmarshaled);
extern "C" void EndpointDetails_t3891698496_marshal_pinvoke_cleanup(EndpointDetails_t3891698496_marshaled_pinvoke& marshaled);
extern "C" void EndpointDetails_t3891698496_marshal_com(const EndpointDetails_t3891698496& unmarshaled, EndpointDetails_t3891698496_marshaled_com& marshaled);
extern "C" void EndpointDetails_t3891698496_marshal_com_back(const EndpointDetails_t3891698496_marshaled_com& marshaled, EndpointDetails_t3891698496& unmarshaled);
extern "C" void EndpointDetails_t3891698496_marshal_com_cleanup(EndpointDetails_t3891698496_marshaled_com& marshaled);

// !!0 UnityEngine.GameObject::GetComponent<System.Object>()
extern "C"  RuntimeObject * GameObject_GetComponent_TisRuntimeObject_m2049753423_gshared (GameObject_t1113636619 * __this, const RuntimeMethod* method);
// !!0 UnityEngine.Resources::Load<System.Object>(System.String)
extern "C"  RuntimeObject * Resources_Load_TisRuntimeObject_m597869152_gshared (RuntimeObject * __this /* static, unused */, String_t* p0, const RuntimeMethod* method);
// !!0 UnityEngine.Component::GetComponent<System.Object>()
extern "C"  RuntimeObject * Component_GetComponent_TisRuntimeObject_m2906321015_gshared (Component_t1923634451 * __this, const RuntimeMethod* method);
// System.Void System.Converter`2<System.Object,System.Int32>::.ctor(System.Object,System.IntPtr)
extern "C"  void Converter_2__ctor_m3621821356_gshared (Converter_2_t2313320076 * __this, RuntimeObject * p0, intptr_t p1, const RuntimeMethod* method);
// !!1[] System.Array::ConvertAll<System.Object,System.Int32>(!!0[],System.Converter`2<!!0,!!1>)
extern "C"  Int32U5BU5D_t385246372* Array_ConvertAll_TisRuntimeObject_TisInt32_t2950945753_m3874557490_gshared (RuntimeObject * __this /* static, unused */, ObjectU5BU5D_t2843939325* p0, Converter_2_t2313320076 * p1, const RuntimeMethod* method);
// !!0[] UnityEngine.Resources::LoadAll<System.Object>(System.String)
extern "C"  ObjectU5BU5D_t2843939325* Resources_LoadAll_TisRuntimeObject_m3261828702_gshared (RuntimeObject * __this /* static, unused */, String_t* p0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.Object>::.ctor()
extern "C"  void List_1__ctor_m2321703786_gshared (List_1_t257213610 * __this, const RuntimeMethod* method);
// !!0 UnityEngine.Object::Instantiate<System.Object>(!!0)
extern "C"  RuntimeObject * Object_Instantiate_TisRuntimeObject_m2446893047_gshared (RuntimeObject * __this /* static, unused */, RuntimeObject * p0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.Object>::Add(!0)
extern "C"  void List_1_Add_m3338814081_gshared (List_1_t257213610 * __this, RuntimeObject * p0, const RuntimeMethod* method);
// !0 System.Collections.Generic.List`1<System.Object>::get_Item(System.Int32)
extern "C"  RuntimeObject * List_1_get_Item_m2287542950_gshared (List_1_t257213610 * __this, int32_t p0, const RuntimeMethod* method);
// System.Int32 System.Collections.Generic.List`1<System.Object>::get_Count()
extern "C"  int32_t List_1_get_Count_m2934127733_gshared (List_1_t257213610 * __this, const RuntimeMethod* method);
// T GooglePlayGames.OurUtils.Misc::CheckNotNull<System.Object>(T)
extern "C"  RuntimeObject * Misc_CheckNotNull_TisRuntimeObject_m2160063955_gshared (RuntimeObject * __this /* static, unused */, RuntimeObject * ___value0, const RuntimeMethod* method);
// System.Boolean System.Nullable`1<System.TimeSpan>::get_HasValue()
extern "C"  bool Nullable_1_get_HasValue_m1210311128_gshared (Nullable_1_t2603721331 * __this, const RuntimeMethod* method);
// System.Void System.Nullable`1<System.TimeSpan>::.ctor(!0)
extern "C"  void Nullable_1__ctor_m3314784284_gshared (Nullable_1_t2603721331 * __this, TimeSpan_t881159249  p0, const RuntimeMethod* method);
// System.Void System.Func`2<System.Boolean,System.Object>::.ctor(System.Object,System.IntPtr)
extern "C"  void Func_2__ctor_m3111496539_gshared (Func_2_t2500609241 * __this, RuntimeObject * p0, intptr_t p1, const RuntimeMethod* method);
// System.Collections.Generic.IEnumerable`1<!!1> System.Linq.Enumerable::Select<System.Boolean,System.Object>(System.Collections.Generic.IEnumerable`1<!!0>,System.Func`2<!!0,!!1>)
extern "C"  RuntimeObject* Enumerable_Select_TisBoolean_t97287965_TisRuntimeObject_m141412371_gshared (RuntimeObject * __this /* static, unused */, RuntimeObject* p0, Func_2_t2500609241 * p1, const RuntimeMethod* method);
// !!0[] System.Linq.Enumerable::ToArray<System.Object>(System.Collections.Generic.IEnumerable`1<!!0>)
extern "C"  ObjectU5BU5D_t2843939325* Enumerable_ToArray_TisRuntimeObject_m698722831_gshared (RuntimeObject * __this /* static, unused */, RuntimeObject* p0, const RuntimeMethod* method);
// !!0 UnityEngine.GameObject::AddComponent<System.Object>()
extern "C"  RuntimeObject * GameObject_AddComponent_TisRuntimeObject_m3469369570_gshared (GameObject_t1113636619 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.Object>::Clear()
extern "C"  void List_1_Clear_m3697625829_gshared (List_1_t257213610 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.Object>::AddRange(System.Collections.Generic.IEnumerable`1<!0>)
extern "C"  void List_1_AddRange_m3709462088_gshared (List_1_t257213610 * __this, RuntimeObject* p0, const RuntimeMethod* method);
// System.Collections.Generic.List`1/Enumerator<!0> System.Collections.Generic.List`1<System.Object>::GetEnumerator()
extern "C"  Enumerator_t2146457487  List_1_GetEnumerator_m2930774921_gshared (List_1_t257213610 * __this, const RuntimeMethod* method);
// !0 System.Collections.Generic.List`1/Enumerator<System.Object>::get_Current()
extern "C"  RuntimeObject * Enumerator_get_Current_m470245444_gshared (Enumerator_t2146457487 * __this, const RuntimeMethod* method);
// System.Void System.Action`1<System.Boolean>::Invoke(!0)
extern "C"  void Action_1_Invoke_m1933767679_gshared (Action_1_t269755560 * __this, bool p0, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.List`1/Enumerator<System.Object>::MoveNext()
extern "C"  bool Enumerator_MoveNext_m2142368520_gshared (Enumerator_t2146457487 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1/Enumerator<System.Object>::Dispose()
extern "C"  void Enumerator_Dispose_m3007748546_gshared (Enumerator_t2146457487 * __this, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.List`1<System.Object>::Contains(!0)
extern "C"  bool List_1_Contains_m2654125393_gshared (List_1_t257213610 * __this, RuntimeObject * p0, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.List`1<System.Object>::Remove(!0)
extern "C"  bool List_1_Remove_m1416767016_gshared (List_1_t257213610 * __this, RuntimeObject * p0, const RuntimeMethod* method);
// !0[] System.Collections.Generic.List`1<System.Object>::ToArray()
extern "C"  ObjectU5BU5D_t2843939325* List_1_ToArray_m4168020446_gshared (List_1_t257213610 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.Object>::.ctor(System.Collections.Generic.IEnumerable`1<!0>)
extern "C"  void List_1__ctor_m1328752868_gshared (List_1_t257213610 * __this, RuntimeObject* p0, const RuntimeMethod* method);
// !!0 UnityEngine.Object::Instantiate<System.Object>(!!0,UnityEngine.Transform)
extern "C"  RuntimeObject * Object_Instantiate_TisRuntimeObject_m1061214600_gshared (RuntimeObject * __this /* static, unused */, RuntimeObject * p0, Transform_t3600365921 * p1, const RuntimeMethod* method);
// System.Void System.Action`1<System.Boolean>::.ctor(System.Object,System.IntPtr)
extern "C"  void Action_1__ctor_m1363151734_gshared (Action_1_t269755560 * __this, RuntimeObject * p0, intptr_t p1, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.Object>::RemoveAt(System.Int32)
extern "C"  void List_1_RemoveAt_m2730968292_gshared (List_1_t257213610 * __this, int32_t p0, const RuntimeMethod* method);

// System.Void UnityEngine.MonoBehaviour::.ctor()
extern "C"  void MonoBehaviour__ctor_m1579109191 (MonoBehaviour_t3962482529 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// UnityEngine.GameObject UnityEngine.GameObject::Find(System.String)
extern "C"  GameObject_t1113636619 * GameObject_Find_m2032535176 (RuntimeObject * __this /* static, unused */, String_t* p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// !!0 UnityEngine.GameObject::GetComponent<PlayBoardGameSceneManager>()
#define GameObject_GetComponent_TisPlayBoardGameSceneManager_t1063580347_m386673798(__this, method) ((  PlayBoardGameSceneManager_t1063580347 * (*) (GameObject_t1113636619 *, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_m2049753423_gshared)(__this, method)
// GameManager GameManager::GetInstance()
extern "C"  GameManager_t1536523654 * GameManager_GetInstance_m367300771 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Int32 GameManager::GetBlockSize()
extern "C"  int32_t GameManager_GetBlockSize_m4175583345 (GameManager_t1536523654 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.String System.String::Concat(System.Object[])
extern "C"  String_t* String_Concat_m2971454694 (RuntimeObject * __this /* static, unused */, ObjectU5BU5D_t2843939325* p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Transform UnityEngine.Component::get_transform()
extern "C"  Transform_t3600365921 * Component_get_transform_m3162698980 (Component_t1923634451 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.Transform::get_childCount()
extern "C"  int32_t Transform_get_childCount_m3145433196 (Transform_t3600365921 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerator UnityEngine.Transform::GetEnumerator()
extern "C"  RuntimeObject* Transform_GetEnumerator_m2717073726 (Transform_t3600365921 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Sprite[] PlayBoardGameSceneManager::GetSprites()
extern "C"  SpriteU5BU5D_t2581906349* PlayBoardGameSceneManager_GetSprites_m1024580081 (PlayBoardGameSceneManager_t1063580347 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// !!0 UnityEngine.Resources::Load<UnityEngine.Sprite>(System.String)
#define Resources_Load_TisSprite_t280657092_m4144667290(__this /* static, unused */, p0, method) ((  Sprite_t280657092 * (*) (RuntimeObject * /* static, unused */, String_t*, const RuntimeMethod*))Resources_Load_TisRuntimeObject_m597869152_gshared)(__this /* static, unused */, p0, method)
// !!0 UnityEngine.Component::GetComponent<UnityEngine.UI.Image>()
#define Component_GetComponent_TisImage_t2670269651_m980647750(__this, method) ((  Image_t2670269651 * (*) (Component_t1923634451 *, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m2906321015_gshared)(__this, method)
// System.Void UnityEngine.UI.Image::set_sprite(UnityEngine.Sprite)
extern "C"  void Image_set_sprite_m2369174689 (Image_t2670269651 * __this, Sprite_t280657092 * p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.String PlayBoardGameSceneManager::GetBlockState()
extern "C"  String_t* PlayBoardGameSceneManager_GetBlockState_m3359666033 (PlayBoardGameSceneManager_t1063580347 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.String::get_Length()
extern "C"  int32_t String_get_Length_m3847582255 (String_t* __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.Random::Range(System.Int32,System.Int32)
extern "C"  int32_t Random_Range_m4054026115 (RuntimeObject * __this /* static, unused */, int32_t p0, int32_t p1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void BlockGameScript::ChangeObjectLocation(UnityEngine.Transform,UnityEngine.Transform)
extern "C"  void BlockGameScript_ChangeObjectLocation_m4122851448 (BlockGameScript_t725110519 * __this, Transform_t3600365921 * ___a0, Transform_t3600365921 * ___b1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.String[] System.String::Split(System.Char[])
extern "C"  StringU5BU5D_t1281789340* String_Split_m3646115398 (String_t* __this, CharU5BU5D_t3528271667* p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void System.Converter`2<System.String,System.Int32>::.ctor(System.Object,System.IntPtr)
#define Converter_2__ctor_m3483849192(__this, p0, p1, method) ((  void (*) (Converter_2_t751170091 *, RuntimeObject *, intptr_t, const RuntimeMethod*))Converter_2__ctor_m3621821356_gshared)(__this, p0, p1, method)
// !!1[] System.Array::ConvertAll<System.String,System.Int32>(!!0[],System.Converter`2<!!0,!!1>)
#define Array_ConvertAll_TisString_t_TisInt32_t2950945753_m3377912609(__this /* static, unused */, p0, p1, method) ((  Int32U5BU5D_t385246372* (*) (RuntimeObject * /* static, unused */, StringU5BU5D_t1281789340*, Converter_2_t751170091 *, const RuntimeMethod*))Array_ConvertAll_TisRuntimeObject_TisInt32_t2950945753_m3874557490_gshared)(__this /* static, unused */, p0, p1, method)
// System.Void UnityEngine.Vector3::.ctor(System.Single,System.Single,System.Single)
extern "C"  void Vector3__ctor_m3353183577 (Vector3_t3722313464 * __this, float p0, float p1, float p2, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Transform::set_localPosition(UnityEngine.Vector3)
extern "C"  void Transform_set_localPosition_m4128471975 (Transform_t3600365921 * __this, Vector3_t3722313464  p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Boolean BlockGameScript::CheckRightLoc(System.Int32)
extern "C"  bool BlockGameScript_CheckRightLoc_m1780145655 (BlockGameScript_t725110519 * __this, int32_t ___num0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void BlockGameScript::SetObjectColor(UnityEngine.Transform,System.Boolean)
extern "C"  void BlockGameScript_SetObjectColor_m3840603770 (BlockGameScript_t725110519 * __this, Transform_t3600365921 * ___t0, bool ___right_pos1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.String System.String::Concat(System.Object,System.Object)
extern "C"  String_t* String_Concat_m904156431 (RuntimeObject * __this /* static, unused */, RuntimeObject * p0, RuntimeObject * p1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Debug::Log(System.Object)
extern "C"  void Debug_Log_m4051431634 (RuntimeObject * __this /* static, unused */, RuntimeObject * p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GameObject::SetActive(System.Boolean)
extern "C"  void GameObject_SetActive_m796801857 (GameObject_t1113636619 * __this, bool p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Int32 DontDestroyManager::GetSoulNum()
extern "C"  int32_t DontDestroyManager_GetSoulNum_m1644499173 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void BlockGameScript::CheckClickingBoard()
extern "C"  void BlockGameScript_CheckClickingBoard_m3461456120 (BlockGameScript_t725110519 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void BlockGameScript::DraggingBoardObj()
extern "C"  void BlockGameScript_DraggingBoardObj_m905776931 (BlockGameScript_t725110519 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.String System.String::Concat(System.String,System.String)
extern "C"  String_t* String_Concat_m3937257545 (RuntimeObject * __this /* static, unused */, String_t* p0, String_t* p1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 UnityEngine.Transform::get_localPosition()
extern "C"  Vector3_t3722313464  Transform_get_localPosition_m4234289348 (Transform_t3600365921 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.String System.String::Concat(System.Object,System.Object,System.Object)
extern "C"  String_t* String_Concat_m1715369213 (RuntimeObject * __this /* static, unused */, RuntimeObject * p0, RuntimeObject * p1, RuntimeObject * p2, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void PlayBoardGameSceneManager::SaveBlockState(System.String)
extern "C"  void PlayBoardGameSceneManager_SaveBlockState_m3559858343 (PlayBoardGameSceneManager_t1063580347 * __this, String_t* ___s0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Input::GetMouseButtonDown(System.Int32)
extern "C"  bool Input_GetMouseButtonDown_m2081676745 (RuntimeObject * __this /* static, unused */, int32_t p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 UnityEngine.Input::get_mousePosition()
extern "C"  Vector3_t3722313464  Input_get_mousePosition_m1616496925 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Transform BlockGameScript::GetObjectByTouchPosition(UnityEngine.Vector3)
extern "C"  Transform_t3600365921 * BlockGameScript_GetObjectByTouchPosition_m4146186647 (BlockGameScript_t725110519 * __this, Vector3_t3722313464  ___v0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Object::op_Inequality(UnityEngine.Object,UnityEngine.Object)
extern "C"  bool Object_op_Inequality_m4071470834 (RuntimeObject * __this /* static, unused */, Object_t631007953 * p0, Object_t631007953 * p1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.String UnityEngine.Object::get_name()
extern "C"  String_t* Object_get_name_m4211327027 (Object_t631007953 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.String::Equals(System.String)
extern "C"  bool String_Equals_m2270643605 (String_t* __this, String_t* p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 UnityEngine.Transform::get_position()
extern "C"  Vector3_t3722313464  Transform_get_position_m36019626 (Transform_t3600365921 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Input::GetMouseButtonUp(System.Int32)
extern "C"  bool Input_GetMouseButtonUp_m2924350851 (RuntimeObject * __this /* static, unused */, int32_t p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Vector3::Equals(System.Object)
extern "C"  bool Vector3_Equals_m1753054704 (Vector3_t3722313464 * __this, RuntimeObject * ___other0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Boolean BlockGameScript::GetBlocksOnlyInCross(UnityEngine.Vector3,UnityEngine.Vector3)
extern "C"  bool BlockGameScript_GetBlocksOnlyInCross_m666557681 (BlockGameScript_t725110519 * __this, Vector3_t3722313464  ___v10, Vector3_t3722313464  ___v21, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void BlockGameScript::SettingRoutineAfterChangeObject(UnityEngine.Transform,UnityEngine.Transform)
extern "C"  void BlockGameScript_SettingRoutineAfterChangeObject_m701267219 (BlockGameScript_t725110519 * __this, Transform_t3600365921 * ___t10, Transform_t3600365921 * ___t21, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// UnityEngine.GameObject UnityEngine.Component::get_gameObject()
extern "C"  GameObject_t1113636619 * Component_get_gameObject_m442555142 (Component_t1923634451 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.String System.String::Concat(System.String,System.String,System.String)
extern "C"  String_t* String_Concat_m3755062657 (RuntimeObject * __this /* static, unused */, String_t* p0, String_t* p1, String_t* p2, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void DontDestroyManager::SetSoulNum(System.Int32)
extern "C"  void DontDestroyManager_SetSoulNum_m3127869396 (RuntimeObject * __this /* static, unused */, int32_t ___i0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void PlayBoardGameSceneManager::SetSoulNumText()
extern "C"  void PlayBoardGameSceneManager_SetSoulNumText_m3655537806 (PlayBoardGameSceneManager_t1063580347 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Boolean BlockGameScript::CheckRightLoc(UnityEngine.Transform)
extern "C"  bool BlockGameScript_CheckRightLoc_m3598286481 (BlockGameScript_t725110519 * __this, Transform_t3600365921 * ___t0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 BlockGameScript::GetRightLoc(UnityEngine.Transform)
extern "C"  Vector3_t3722313464  BlockGameScript_GetRightLoc_m2151465700 (BlockGameScript_t725110519 * __this, Transform_t3600365921 * ___t0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void PlayBoardGameSceneManager::CompleteBoard()
extern "C"  void PlayBoardGameSceneManager_CompleteBoard_m3268643837 (PlayBoardGameSceneManager_t1063580347 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Int32 BlockGameScript::GetObjectNumByGameObject(UnityEngine.Transform)
extern "C"  int32_t BlockGameScript_GetObjectNumByGameObject_m2056703641 (BlockGameScript_t725110519 * __this, Transform_t3600365921 * ___go0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// !!0 UnityEngine.GameObject::GetComponent<UnityEngine.UI.Image>()
#define GameObject_GetComponent_TisImage_t2670269651_m2486712510(__this, method) ((  Image_t2670269651 * (*) (GameObject_t1113636619 *, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_m2049753423_gshared)(__this, method)
// System.Char System.String::get_Chars(System.Int32)
extern "C"  Il2CppChar String_get_Chars_m2986988803 (String_t* __this, int32_t p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Char::IsDigit(System.Char)
extern "C"  bool Char_IsDigit_m3646673943 (RuntimeObject * __this /* static, unused */, Il2CppChar p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Int32::Parse(System.String)
extern "C"  int32_t Int32_Parse_m1033611559 (RuntimeObject * __this /* static, unused */, String_t* p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Material::SetFloat(System.String,System.Single)
extern "C"  void Material_SetFloat_m3226510453 (Material_t340375123 * __this, String_t* p0, float p1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void BlurManager::init()
extern "C"  void BlurManager_init_m578986440 (BlurManager_t3192295244 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Transform UnityEngine.Transform::GetChild(System.Int32)
extern "C"  Transform_t3600365921 * Transform_GetChild_m1092972975 (Transform_t3600365921 * __this, int32_t p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// !!0 UnityEngine.Component::GetComponent<UnityEngine.UI.Text>()
#define Component_GetComponent_TisText_t1901882714_m4196288697(__this, method) ((  Text_t1901882714 * (*) (Component_t1923634451 *, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m2906321015_gshared)(__this, method)
// !!0 UnityEngine.Component::GetComponent<UnityEngine.UI.Button>()
#define Component_GetComponent_TisButton_t4055032469_m1381873113(__this, method) ((  Button_t4055032469 * (*) (Component_t1923634451 *, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m2906321015_gshared)(__this, method)
// System.Collections.IEnumerator BlurManager::setBlur(System.Boolean)
extern "C"  RuntimeObject* BlurManager_setBlur_m4215537649 (BlurManager_t3192295244 * __this, bool ___active0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Coroutine UnityEngine.MonoBehaviour::StartCoroutine(System.Collections.IEnumerator)
extern "C"  Coroutine_t3829159415 * MonoBehaviour_StartCoroutine_m3411253000 (MonoBehaviour_t3962482529 * __this, RuntimeObject* p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void BlurManager/<setBlur>c__Iterator0::.ctor()
extern "C"  void U3CsetBlurU3Ec__Iterator0__ctor_m2354691788 (U3CsetBlurU3Ec__Iterator0_t81185826 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Object::op_Equality(UnityEngine.Object,UnityEngine.Object)
extern "C"  bool Object_op_Equality_m1810815630 (RuntimeObject * __this /* static, unused */, Object_t631007953 * p0, Object_t631007953 * p1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void BlurManager::setActive(System.Boolean)
extern "C"  void BlurManager_setActive_m2316418442 (BlurManager_t3192295244 * __this, bool ___active0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// UnityEngine.UI.Button/ButtonClickedEvent UnityEngine.UI.Button::get_onClick()
extern "C"  ButtonClickedEvent_t48803504 * Button_get_onClick_m2332132945 (Button_t4055032469 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Events.UnityEvent::RemoveListener(UnityEngine.Events.UnityAction)
extern "C"  void UnityEvent_RemoveListener_m2514219280 (UnityEvent_t2581268647 * __this, UnityAction_t3245792599 * p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Events.UnityEvent::AddListener(UnityEngine.Events.UnityAction)
extern "C"  void UnityEvent_AddListener_m2276267359 (UnityEvent_t2581268647 * __this, UnityAction_t3245792599 * p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void System.Object::.ctor()
extern "C"  void Object__ctor_m297566312 (RuntimeObject * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.Time::get_deltaTime()
extern "C"  float Time_get_deltaTime_m372706562 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Transform UnityEngine.GameObject::get_transform()
extern "C"  Transform_t3600365921 * GameObject_get_transform_m1369836730 (GameObject_t1113636619 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Transform::Rotate(System.Single,System.Single,System.Single)
extern "C"  void Transform_Rotate_m3172098886 (Transform_t3600365921 * __this, float p0, float p1, float p2, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Canvas::ForceUpdateCanvases()
extern "C"  void Canvas_ForceUpdateCanvases_m3151644478 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void System.NotSupportedException::.ctor()
extern "C"  void NotSupportedException__ctor_m2730133172 (NotSupportedException_t1314879016 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Object::DontDestroyOnLoad(UnityEngine.Object)
extern "C"  void Object_DontDestroyOnLoad_m166252750 (RuntimeObject * __this /* static, unused */, Object_t631007953 * p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.PlayerPrefs::GetInt(System.String,System.Int32)
extern "C"  int32_t PlayerPrefs_GetInt_m1299643124 (RuntimeObject * __this /* static, unused */, String_t* p0, int32_t p1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Type System.Type::GetTypeFromHandle(System.RuntimeTypeHandle)
extern "C"  Type_t * Type_GetTypeFromHandle_m1620074514 (RuntimeObject * __this /* static, unused */, RuntimeTypeHandle_t3027515415  p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.String[] System.Enum::GetNames(System.Type)
extern "C"  StringU5BU5D_t1281789340* Enum_GetNames_m2200571060 (RuntimeObject * __this /* static, unused */, Type_t * p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.PlayerPrefs::HasKey(System.String)
extern "C"  bool PlayerPrefs_HasKey_m2794939670 (RuntimeObject * __this /* static, unused */, String_t* p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.String UnityEngine.PlayerPrefs::GetString(System.String)
extern "C"  String_t* PlayerPrefs_GetString_m389913383 (RuntimeObject * __this /* static, unused */, String_t* p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Array System.Enum::GetValues(System.Type)
extern "C"  RuntimeArray * Enum_GetValues_m4192343468 (RuntimeObject * __this /* static, unused */, Type_t * p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerator System.Array::GetEnumerator()
extern "C"  RuntimeObject* Array_GetEnumerator_m4277730612 (RuntimeArray * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void LocalizeTool::loadLocalizeString()
extern "C"  void LocalizeTool_loadLocalizeString_m3512941887 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void SocialTool::.ctor()
extern "C"  void SocialTool__ctor_m3886541085 (SocialTool_t1909827527 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.PlayerPrefs::SetInt(System.String,System.Int32)
extern "C"  void PlayerPrefs_SetInt_m2842000469 (RuntimeObject * __this /* static, unused */, String_t* p0, int32_t p1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void DragGalleryContentScript::init()
extern "C"  void DragGalleryContentScript_init_m1389459019 (DragGalleryContentScript_t2491726244 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// !!0 UnityEngine.GameObject::GetComponent<MainSceneManager>()
#define GameObject_GetComponent_TisMainSceneManager_t2603182452_m1706813279(__this, method) ((  MainSceneManager_t2603182452 * (*) (GameObject_t1113636619 *, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_m2049753423_gshared)(__this, method)
// UnityEngine.Transform UnityEngine.Transform::get_parent()
extern "C"  Transform_t3600365921 * Transform_get_parent_m835071599 (Transform_t3600365921 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// !!0 UnityEngine.GameObject::GetComponent<UnityEngine.UI.ScrollRect>()
#define GameObject_GetComponent_TisScrollRect_t4137855814_m3217020803(__this, method) ((  ScrollRect_t4137855814 * (*) (GameObject_t1113636619 *, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_m2049753423_gshared)(__this, method)
// System.Boolean MainSceneManager::GetPopUpActive()
extern "C"  bool MainSceneManager_GetPopUpActive_m433334491 (MainSceneManager_t2603182452 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void DragGalleryContentScript::SetMouseClickInfo()
extern "C"  void DragGalleryContentScript_SetMouseClickInfo_m593303541 (DragGalleryContentScript_t2491726244 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.UI.ScrollRect::get_horizontalNormalizedPosition()
extern "C"  float ScrollRect_get_horizontalNormalizedPosition_m2904015963 (ScrollRect_t4137855814 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.ScrollRect::set_horizontalNormalizedPosition(System.Single)
extern "C"  void ScrollRect_set_horizontalNormalizedPosition_m1066708424 (ScrollRect_t4137855814 * __this, float p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// !!0[] UnityEngine.Resources::LoadAll<UnityEngine.Sprite>(System.String)
#define Resources_LoadAll_TisSprite_t280657092_m1417587347(__this /* static, unused */, p0, method) ((  SpriteU5BU5D_t2581906349* (*) (RuntimeObject * /* static, unused */, String_t*, const RuntimeMethod*))Resources_LoadAll_TisRuntimeObject_m3261828702_gshared)(__this /* static, unused */, p0, method)
// UnityEngine.Object UnityEngine.Resources::Load(System.String)
extern "C"  Object_t631007953 * Resources_Load_m3880010804 (RuntimeObject * __this /* static, unused */, String_t* p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Generic.List`1<UnityEngine.Transform>::.ctor()
#define List_1__ctor_m2885667311(__this, method) ((  void (*) (List_1_t777473367 *, const RuntimeMethod*))List_1__ctor_m2321703786_gshared)(__this, method)
// !!0 UnityEngine.Object::Instantiate<UnityEngine.GameObject>(!!0)
#define Object_Instantiate_TisGameObject_t1113636619_m4070250708(__this /* static, unused */, p0, method) ((  GameObject_t1113636619 * (*) (RuntimeObject * /* static, unused */, GameObject_t1113636619 *, const RuntimeMethod*))Object_Instantiate_TisRuntimeObject_m2446893047_gshared)(__this /* static, unused */, p0, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Transform>::Add(!0)
#define List_1_Add_m4073477735(__this, p0, method) ((  void (*) (List_1_t777473367 *, Transform_t3600365921 *, const RuntimeMethod*))List_1_Add_m3338814081_gshared)(__this, p0, method)
// System.Void UnityEngine.Transform::SetParent(UnityEngine.Transform)
extern "C"  void Transform_SetParent_m381167889 (Transform_t3600365921 * __this, Transform_t3600365921 * p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Object::set_name(System.String)
extern "C"  void Object_set_name_m291480324 (Object_t631007953 * __this, String_t* p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// !0 System.Collections.Generic.List`1<UnityEngine.Transform>::get_Item(System.Int32)
#define List_1_get_Item_m3022113929(__this, p0, method) ((  Transform_t3600365921 * (*) (List_1_t777473367 *, int32_t, const RuntimeMethod*))List_1_get_Item_m2287542950_gshared)(__this, p0, method)
// !!0 UnityEngine.GameObject::GetComponent<UnityEngine.UI.Button>()
#define GameObject_GetComponent_TisButton_t4055032469_m1515138076(__this, method) ((  Button_t4055032469 * (*) (GameObject_t1113636619 *, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_m2049753423_gshared)(__this, method)
// System.Void UnityEngine.Events.UnityAction::.ctor(System.Object,System.IntPtr)
extern "C"  void UnityAction__ctor_m772160306 (UnityAction_t3245792599 * __this, RuntimeObject * p0, intptr_t p1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Collections.Generic.List`1<UnityEngine.Transform>::get_Count()
#define List_1_get_Count_m3787308655(__this, method) ((  int32_t (*) (List_1_t777473367 *, const RuntimeMethod*))List_1_get_Count_m2934127733_gshared)(__this, method)
// System.Void MainSceneManager::SetDotImage(System.Int32,System.Boolean)
extern "C"  void MainSceneManager_SetDotImage_m1812060552 (MainSceneManager_t2603182452 * __this, int32_t ___current_page_num0, bool ___t_go_left_f_go_right1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void DragGalleryContentScript::SetMovePosition()
extern "C"  void DragGalleryContentScript_SetMovePosition_m2351775031 (DragGalleryContentScript_t2491726244 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Screen::SetResolution(System.Int32,System.Int32,System.Boolean)
extern "C"  void Screen_SetResolution_m875896249 (RuntimeObject * __this /* static, unused */, int32_t p0, int32_t p1, bool p2, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Application::set_targetFrameRate(System.Int32)
extern "C"  void Application_set_targetFrameRate_m3682352535 (RuntimeObject * __this /* static, unused */, int32_t p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Input::set_multiTouchEnabled(System.Boolean)
extern "C"  void Input_set_multiTouchEnabled_m990237339 (RuntimeObject * __this /* static, unused */, bool p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.CompilerServices.RuntimeHelpers::InitializeArray(System.Array,System.RuntimeFieldHandle)
extern "C"  void RuntimeHelpers_InitializeArray_m3117905507 (RuntimeObject * __this /* static, unused */, RuntimeArray * p0, RuntimeFieldHandle_t1871169219  p1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void GameManager::.ctor()
extern "C"  void GameManager__ctor_m180891015 (GameManager_t1536523654 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.SceneManagement.SceneManager::LoadScene(System.String)
extern "C"  void SceneManager_LoadScene_m1758133949 (RuntimeObject * __this /* static, unused */, String_t* p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Object UnityEngine.Object::Instantiate(UnityEngine.Object)
extern "C"  Object_t631007953 * Object_Instantiate_m3403600534 (RuntimeObject * __this /* static, unused */, Object_t631007953 * p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// !!0 UnityEngine.GameObject::GetComponent<DontDestroyManager>()
#define GameObject_GetComponent_TisDontDestroyManager_t1329034447_m281312435(__this, method) ((  DontDestroyManager_t1329034447 * (*) (GameObject_t1113636619 *, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_m2049753423_gshared)(__this, method)
// T GooglePlayGames.OurUtils.Misc::CheckNotNull<System.String>(T)
#define Misc_CheckNotNull_TisString_t_m2144140679(__this /* static, unused */, ___value0, method) ((  String_t* (*) (RuntimeObject * /* static, unused */, String_t*, const RuntimeMethod*))Misc_CheckNotNull_TisRuntimeObject_m2160063955_gshared)(__this /* static, unused */, ___value0, method)
// System.Void GooglePlayGames.BasicApi.Nearby.AdvertisingResult::.ctor(GooglePlayGames.BasicApi.ResponseStatus,System.String)
extern "C"  void AdvertisingResult__ctor_m3283909746 (AdvertisingResult_t1229207569 * __this, int32_t ___status0, String_t* ___localEndpointName1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Boolean GooglePlayGames.BasicApi.Nearby.AdvertisingResult::get_Succeeded()
extern "C"  bool AdvertisingResult_get_Succeeded_m333368401 (AdvertisingResult_t1229207569 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// GooglePlayGames.BasicApi.ResponseStatus GooglePlayGames.BasicApi.Nearby.AdvertisingResult::get_Status()
extern "C"  int32_t AdvertisingResult_get_Status_m328185564 (AdvertisingResult_t1229207569 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.String GooglePlayGames.BasicApi.Nearby.AdvertisingResult::get_LocalEndpointName()
extern "C"  String_t* AdvertisingResult_get_LocalEndpointName_m2205181796 (AdvertisingResult_t1229207569 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void GooglePlayGames.OurUtils.Logger::d(System.String)
extern "C"  void Logger_d_m922460805 (RuntimeObject * __this /* static, unused */, String_t* ___msg0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void GooglePlayGames.BasicApi.Nearby.EndpointDetails::.ctor(System.String,System.String,System.String)
extern "C"  void EndpointDetails__ctor_m21302606 (EndpointDetails_t3891698496 * __this, String_t* ___endpointId0, String_t* ___name1, String_t* ___serviceId2, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// T GooglePlayGames.OurUtils.Misc::CheckNotNull<System.Byte[]>(T)
#define Misc_CheckNotNull_TisByteU5BU5D_t4116647657_m2778390417(__this /* static, unused */, ___value0, method) ((  ByteU5BU5D_t4116647657* (*) (RuntimeObject * /* static, unused */, ByteU5BU5D_t4116647657*, const RuntimeMethod*))Misc_CheckNotNull_TisRuntimeObject_m2160063955_gshared)(__this /* static, unused */, ___value0, method)
// System.Void GooglePlayGames.BasicApi.Nearby.ConnectionRequest::.ctor(System.String,System.String,System.String,System.Byte[])
extern "C"  void ConnectionRequest__ctor_m1771453037 (ConnectionRequest_t684574500 * __this, String_t* ___remoteEndpointId0, String_t* ___remoteEndpointName1, String_t* ___serviceId2, ByteU5BU5D_t4116647657* ___payload3, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// GooglePlayGames.BasicApi.Nearby.EndpointDetails GooglePlayGames.BasicApi.Nearby.ConnectionRequest::get_RemoteEndpoint()
extern "C"  EndpointDetails_t3891698496  ConnectionRequest_get_RemoteEndpoint_m4110791838 (ConnectionRequest_t684574500 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Byte[] GooglePlayGames.BasicApi.Nearby.ConnectionRequest::get_Payload()
extern "C"  ByteU5BU5D_t4116647657* ConnectionRequest_get_Payload_m1929276274 (ConnectionRequest_t684574500 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void GooglePlayGames.BasicApi.Nearby.ConnectionResponse::.ctor(System.Int64,System.String,GooglePlayGames.BasicApi.Nearby.ConnectionResponse/Status,System.Byte[])
extern "C"  void ConnectionResponse__ctor_m1692756272 (ConnectionResponse_t735328601 * __this, int64_t ___localClientId0, String_t* ___remoteEndpointId1, int32_t ___code2, ByteU5BU5D_t4116647657* ___payload3, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Int64 GooglePlayGames.BasicApi.Nearby.ConnectionResponse::get_LocalClientId()
extern "C"  int64_t ConnectionResponse_get_LocalClientId_m4049806276 (ConnectionResponse_t735328601 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.String GooglePlayGames.BasicApi.Nearby.ConnectionResponse::get_RemoteEndpointId()
extern "C"  String_t* ConnectionResponse_get_RemoteEndpointId_m2224172160 (ConnectionResponse_t735328601 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// GooglePlayGames.BasicApi.Nearby.ConnectionResponse/Status GooglePlayGames.BasicApi.Nearby.ConnectionResponse::get_ResponseStatus()
extern "C"  int32_t ConnectionResponse_get_ResponseStatus_m1444621596 (ConnectionResponse_t735328601 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Byte[] GooglePlayGames.BasicApi.Nearby.ConnectionResponse::get_Payload()
extern "C"  ByteU5BU5D_t4116647657* ConnectionResponse_get_Payload_m4179017167 (ConnectionResponse_t735328601 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.String GooglePlayGames.BasicApi.Nearby.EndpointDetails::get_EndpointId()
extern "C"  String_t* EndpointDetails_get_EndpointId_m884044036 (EndpointDetails_t3891698496 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.String GooglePlayGames.BasicApi.Nearby.EndpointDetails::get_Name()
extern "C"  String_t* EndpointDetails_get_Name_m3888561498 (EndpointDetails_t3891698496 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.String GooglePlayGames.BasicApi.Nearby.EndpointDetails::get_ServiceId()
extern "C"  String_t* EndpointDetails_get_ServiceId_m1851016629 (EndpointDetails_t3891698496 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// T GooglePlayGames.OurUtils.Misc::CheckNotNull<System.Action`1<GooglePlayGames.BasicApi.Nearby.InitializationStatus>>(T)
#define Misc_CheckNotNull_TisAction_1_t2609895709_m4157397171(__this /* static, unused */, ___value0, method) ((  Action_1_t2609895709 * (*) (RuntimeObject * /* static, unused */, Action_1_t2609895709 *, const RuntimeMethod*))Misc_CheckNotNull_TisRuntimeObject_m2160063955_gshared)(__this /* static, unused */, ___value0, method)
// System.Void GooglePlayGames.BasicApi.Nearby.NearbyConnectionConfiguration::.ctor(System.Action`1<GooglePlayGames.BasicApi.Nearby.InitializationStatus>,System.Int64)
extern "C"  void NearbyConnectionConfiguration__ctor_m3413108655 (NearbyConnectionConfiguration_t2019425596 * __this, Action_1_t2609895709 * ___callback0, int64_t ___localClientId1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Int64 GooglePlayGames.BasicApi.Nearby.NearbyConnectionConfiguration::get_LocalClientId()
extern "C"  int64_t NearbyConnectionConfiguration_get_LocalClientId_m514333893 (NearbyConnectionConfiguration_t2019425596 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Action`1<GooglePlayGames.BasicApi.Nearby.InitializationStatus> GooglePlayGames.BasicApi.Nearby.NearbyConnectionConfiguration::get_InitializationCallback()
extern "C"  Action_1_t2609895709 * NearbyConnectionConfiguration_get_InitializationCallback_m2901044093 (NearbyConnectionConfiguration_t2019425596 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void GooglePlayGames.BasicApi.SavedGame.ConflictCallback::Invoke(GooglePlayGames.BasicApi.SavedGame.IConflictResolver,GooglePlayGames.BasicApi.SavedGame.ISavedGameMetadata,System.Byte[],GooglePlayGames.BasicApi.SavedGame.ISavedGameMetadata,System.Byte[])
extern "C"  void ConflictCallback_Invoke_m2182035770 (ConflictCallback_t4045994657 * __this, RuntimeObject* ___resolver0, RuntimeObject* ___original1, ByteU5BU5D_t4116647657* ___originalData2, RuntimeObject* ___unmerged3, ByteU5BU5D_t4116647657* ___unmergedData4, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void GooglePlayGames.BasicApi.SavedGame.SavedGameMetadataUpdate::.ctor(GooglePlayGames.BasicApi.SavedGame.SavedGameMetadataUpdate/Builder)
extern "C"  void SavedGameMetadataUpdate__ctor_m3198095627 (SavedGameMetadataUpdate_t1775293339 * __this, Builder_t140438593  ___builder0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Boolean GooglePlayGames.BasicApi.SavedGame.SavedGameMetadataUpdate::get_IsDescriptionUpdated()
extern "C"  bool SavedGameMetadataUpdate_get_IsDescriptionUpdated_m2472364427 (SavedGameMetadataUpdate_t1775293339 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.String GooglePlayGames.BasicApi.SavedGame.SavedGameMetadataUpdate::get_UpdatedDescription()
extern "C"  String_t* SavedGameMetadataUpdate_get_UpdatedDescription_m4234892677 (SavedGameMetadataUpdate_t1775293339 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Boolean GooglePlayGames.BasicApi.SavedGame.SavedGameMetadataUpdate::get_IsCoverImageUpdated()
extern "C"  bool SavedGameMetadataUpdate_get_IsCoverImageUpdated_m2287708232 (SavedGameMetadataUpdate_t1775293339 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Byte[] GooglePlayGames.BasicApi.SavedGame.SavedGameMetadataUpdate::get_UpdatedPngCoverImage()
extern "C"  ByteU5BU5D_t4116647657* SavedGameMetadataUpdate_get_UpdatedPngCoverImage_m4180780714 (SavedGameMetadataUpdate_t1775293339 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Nullable`1<System.TimeSpan>::get_HasValue()
#define Nullable_1_get_HasValue_m1210311128(__this, method) ((  bool (*) (Nullable_1_t2603721331 *, const RuntimeMethod*))Nullable_1_get_HasValue_m1210311128_gshared)(__this, method)
// System.Boolean GooglePlayGames.BasicApi.SavedGame.SavedGameMetadataUpdate::get_IsPlayedTimeUpdated()
extern "C"  bool SavedGameMetadataUpdate_get_IsPlayedTimeUpdated_m2037804757 (SavedGameMetadataUpdate_t1775293339 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Nullable`1<System.TimeSpan> GooglePlayGames.BasicApi.SavedGame.SavedGameMetadataUpdate::get_UpdatedPlayedTime()
extern "C"  Nullable_1_t2603721331  SavedGameMetadataUpdate_get_UpdatedPlayedTime_m710812417 (SavedGameMetadataUpdate_t1775293339 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// GooglePlayGames.BasicApi.SavedGame.SavedGameMetadataUpdate/Builder GooglePlayGames.BasicApi.SavedGame.SavedGameMetadataUpdate/Builder::WithUpdatedDescription(System.String)
extern "C"  Builder_t140438593  Builder_WithUpdatedDescription_m2481299006 (Builder_t140438593 * __this, String_t* ___description0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// GooglePlayGames.BasicApi.SavedGame.SavedGameMetadataUpdate/Builder GooglePlayGames.BasicApi.SavedGame.SavedGameMetadataUpdate/Builder::WithUpdatedPngCoverImage(System.Byte[])
extern "C"  Builder_t140438593  Builder_WithUpdatedPngCoverImage_m4039231983 (Builder_t140438593 * __this, ByteU5BU5D_t4116647657* ___newPngCoverImage0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Double System.TimeSpan::get_TotalMilliseconds()
extern "C"  double TimeSpan_get_TotalMilliseconds_m2429771311 (TimeSpan_t881159249 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void System.InvalidOperationException::.ctor(System.String)
extern "C"  void InvalidOperationException__ctor_m237278729 (InvalidOperationException_t56020091 * __this, String_t* p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void System.Nullable`1<System.TimeSpan>::.ctor(!0)
#define Nullable_1__ctor_m3314784284(__this, p0, method) ((  void (*) (Nullable_1_t2603721331 *, TimeSpan_t881159249 , const RuntimeMethod*))Nullable_1__ctor_m3314784284_gshared)(__this, p0, method)
// GooglePlayGames.BasicApi.SavedGame.SavedGameMetadataUpdate/Builder GooglePlayGames.BasicApi.SavedGame.SavedGameMetadataUpdate/Builder::WithUpdatedPlayedTime(System.TimeSpan)
extern "C"  Builder_t140438593  Builder_WithUpdatedPlayedTime_m96114013 (Builder_t140438593 * __this, TimeSpan_t881159249  ___newPlayedTime0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// GooglePlayGames.BasicApi.SavedGame.SavedGameMetadataUpdate GooglePlayGames.BasicApi.SavedGame.SavedGameMetadataUpdate/Builder::Build()
extern "C"  SavedGameMetadataUpdate_t1775293339  Builder_Build_m2845116586 (Builder_t140438593 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void GooglePlayGames.OurUtils.Logger::w(System.String)
extern "C"  void Logger_w_m2887164710 (RuntimeObject * __this /* static, unused */, String_t* ___msg0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void System.Func`2<System.Boolean,System.String>::.ctor(System.Object,System.IntPtr)
#define Func_2__ctor_m483955973(__this, p0, p1, method) ((  void (*) (Func_2_t1267953766 *, RuntimeObject *, intptr_t, const RuntimeMethod*))Func_2__ctor_m3111496539_gshared)(__this, p0, p1, method)
// System.Collections.Generic.IEnumerable`1<!!1> System.Linq.Enumerable::Select<System.Boolean,System.String>(System.Collections.Generic.IEnumerable`1<!!0>,System.Func`2<!!0,!!1>)
#define Enumerable_Select_TisBoolean_t97287965_TisString_t_m1157660285(__this /* static, unused */, p0, p1, method) ((  RuntimeObject* (*) (RuntimeObject * /* static, unused */, RuntimeObject*, Func_2_t1267953766 *, const RuntimeMethod*))Enumerable_Select_TisBoolean_t97287965_TisRuntimeObject_m141412371_gshared)(__this /* static, unused */, p0, p1, method)
// !!0[] System.Linq.Enumerable::ToArray<System.String>(System.Collections.Generic.IEnumerable`1<!!0>)
#define Enumerable_ToArray_TisString_t_m4208096419(__this /* static, unused */, p0, method) ((  StringU5BU5D_t1281789340* (*) (RuntimeObject * /* static, unused */, RuntimeObject*, const RuntimeMethod*))Enumerable_ToArray_TisRuntimeObject_m698722831_gshared)(__this /* static, unused */, p0, method)
// System.String System.String::Join(System.String,System.String[])
extern "C"  String_t* String_Join_m2050845953 (RuntimeObject * __this /* static, unused */, String_t* p0, StringU5BU5D_t1281789340* p1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.String System.String::Format(System.String,System.Object[])
extern "C"  String_t* String_Format_m630303134 (RuntimeObject * __this /* static, unused */, String_t* p0, ObjectU5BU5D_t2843939325* p1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.String System.Boolean::ToString()
extern "C"  String_t* Boolean_ToString_m2664721875 (bool* __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void GooglePlayGames.OurUtils.Logger/<d>c__AnonStorey0::.ctor()
extern "C"  void U3CdU3Ec__AnonStorey0__ctor_m2573530652 (U3CdU3Ec__AnonStorey0_t2350509859 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void System.Action::.ctor(System.Object,System.IntPtr)
extern "C"  void Action__ctor_m2994342681 (Action_t1264377477 * __this, RuntimeObject * p0, intptr_t p1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void GooglePlayGames.OurUtils.PlayGamesHelperObject::RunOnGameThread(System.Action)
extern "C"  void PlayGamesHelperObject_RunOnGameThread_m3356747975 (RuntimeObject * __this /* static, unused */, Action_t1264377477 * ___action0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void GooglePlayGames.OurUtils.Logger/<w>c__AnonStorey1::.ctor()
extern "C"  void U3CwU3Ec__AnonStorey1__ctor_m3964734600 (U3CwU3Ec__AnonStorey1_t2080961746 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void GooglePlayGames.OurUtils.Logger/<e>c__AnonStorey2::.ctor()
extern "C"  void U3CeU3Ec__AnonStorey2__ctor_m2768254390 (U3CeU3Ec__AnonStorey2_t2346119983 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.DateTime System.DateTime::get_Now()
extern "C"  DateTime_t3738529785  DateTime_get_Now_m1277138875 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.String System.DateTime::ToString(System.String)
extern "C"  String_t* DateTime_ToString_m3718521780 (DateTime_t3738529785 * __this, String_t* p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.String GooglePlayGames.OurUtils.Logger::ToLogMessage(System.String,System.String,System.String)
extern "C"  String_t* Logger_ToLogMessage_m1026262968 (RuntimeObject * __this /* static, unused */, String_t* ___prefix0, String_t* ___logType1, String_t* ___msg2, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Debug::LogWarning(System.Object)
extern "C"  void Debug_LogWarning_m3752629331 (RuntimeObject * __this /* static, unused */, RuntimeObject * p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void System.ArgumentNullException::.ctor(System.String)
extern "C"  void ArgumentNullException__ctor_m1170824041 (ArgumentNullException_t1615371798 * __this, String_t* p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void System.ArgumentOutOfRangeException::.ctor(System.String)
extern "C"  void ArgumentOutOfRangeException__ctor_m3628145864 (ArgumentOutOfRangeException_t777629997 * __this, String_t* p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void System.Array::Copy(System.Array,System.Int32,System.Array,System.Int32,System.Int32)
extern "C"  void Array_Copy_m344457298 (RuntimeObject * __this /* static, unused */, RuntimeArray * p0, int32_t p1, RuntimeArray * p2, int32_t p3, int32_t p4, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Generic.List`1<System.Action>::.ctor()
#define List_1__ctor_m3850019872(__this, method) ((  void (*) (List_1_t2736452219 *, const RuntimeMethod*))List_1__ctor_m2321703786_gshared)(__this, method)
// System.Boolean UnityEngine.Application::get_isPlaying()
extern "C"  bool Application_get_isPlaying_m100394690 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GameObject::.ctor(System.String)
extern "C"  void GameObject__ctor_m2093116449 (GameObject_t1113636619 * __this, String_t* p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// !!0 UnityEngine.GameObject::AddComponent<GooglePlayGames.OurUtils.PlayGamesHelperObject>()
#define GameObject_AddComponent_TisPlayGamesHelperObject_t4023745847_m1649163222(__this, method) ((  PlayGamesHelperObject_t4023745847 * (*) (GameObject_t1113636619 *, const RuntimeMethod*))GameObject_AddComponent_TisRuntimeObject_m3469369570_gshared)(__this, method)
// System.Void GooglePlayGames.OurUtils.PlayGamesHelperObject::.ctor()
extern "C"  void PlayGamesHelperObject__ctor_m842076472 (PlayGamesHelperObject_t4023745847 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void GooglePlayGames.OurUtils.PlayGamesHelperObject/<RunCoroutine>c__AnonStorey0::.ctor()
extern "C"  void U3CRunCoroutineU3Ec__AnonStorey0__ctor_m292185709 (U3CRunCoroutineU3Ec__AnonStorey0_t3592917427 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void System.Threading.Monitor::Enter(System.Object)
extern "C"  void Monitor_Enter_m2249409497 (RuntimeObject * __this /* static, unused */, RuntimeObject * p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Generic.List`1<System.Action>::Add(!0)
#define List_1_Add_m263651446(__this, p0, method) ((  void (*) (List_1_t2736452219 *, Action_t1264377477 *, const RuntimeMethod*))List_1_Add_m3338814081_gshared)(__this, p0, method)
// System.Void System.Threading.Monitor::Exit(System.Object)
extern "C"  void Monitor_Exit_m3585316909 (RuntimeObject * __this /* static, unused */, RuntimeObject * p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Generic.List`1<System.Action>::Clear()
#define List_1_Clear_m3969294004(__this, method) ((  void (*) (List_1_t2736452219 *, const RuntimeMethod*))List_1_Clear_m3697625829_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Action>::AddRange(System.Collections.Generic.IEnumerable`1<!0>)
#define List_1_AddRange_m3508878779(__this, p0, method) ((  void (*) (List_1_t2736452219 *, RuntimeObject*, const RuntimeMethod*))List_1_AddRange_m3709462088_gshared)(__this, p0, method)
// !0 System.Collections.Generic.List`1<System.Action>::get_Item(System.Int32)
#define List_1_get_Item_m1396344728(__this, p0, method) ((  Action_t1264377477 * (*) (List_1_t2736452219 *, int32_t, const RuntimeMethod*))List_1_get_Item_m2287542950_gshared)(__this, p0, method)
// System.Void System.Action::Invoke()
extern "C"  void Action_Invoke_m937035532 (Action_t1264377477 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Collections.Generic.List`1<System.Action>::get_Count()
#define List_1_get_Count_m2893360516(__this, method) ((  int32_t (*) (List_1_t2736452219 *, const RuntimeMethod*))List_1_get_Count_m2934127733_gshared)(__this, method)
// System.Collections.Generic.List`1/Enumerator<!0> System.Collections.Generic.List`1<System.Action`1<System.Boolean>>::GetEnumerator()
#define List_1_GetEnumerator_m1802404592(__this, method) ((  Enumerator_t3631074179  (*) (List_1_t1741830302 *, const RuntimeMethod*))List_1_GetEnumerator_m2930774921_gshared)(__this, method)
// !0 System.Collections.Generic.List`1/Enumerator<System.Action`1<System.Boolean>>::get_Current()
#define Enumerator_get_Current_m3156154971(__this, method) ((  Action_1_t269755560 * (*) (Enumerator_t3631074179 *, const RuntimeMethod*))Enumerator_get_Current_m470245444_gshared)(__this, method)
// System.Void System.Action`1<System.Boolean>::Invoke(!0)
#define Action_1_Invoke_m1933767679(__this, p0, method) ((  void (*) (Action_1_t269755560 *, bool, const RuntimeMethod*))Action_1_Invoke_m1933767679_gshared)(__this, p0, method)
// System.String System.String::Concat(System.String,System.String,System.String,System.String)
extern "C"  String_t* String_Concat_m2163913788 (RuntimeObject * __this /* static, unused */, String_t* p0, String_t* p1, String_t* p2, String_t* p3, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Debug::LogError(System.Object)
extern "C"  void Debug_LogError_m2850623458 (RuntimeObject * __this /* static, unused */, RuntimeObject * p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Collections.Generic.List`1/Enumerator<System.Action`1<System.Boolean>>::MoveNext()
#define Enumerator_MoveNext_m3351297324(__this, method) ((  bool (*) (Enumerator_t3631074179 *, const RuntimeMethod*))Enumerator_MoveNext_m2142368520_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1/Enumerator<System.Action`1<System.Boolean>>::Dispose()
#define Enumerator_Dispose_m3070555129(__this, method) ((  void (*) (Enumerator_t3631074179 *, const RuntimeMethod*))Enumerator_Dispose_m3007748546_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.Action`1<System.Boolean>>::Contains(!0)
#define List_1_Contains_m2016498970(__this, p0, method) ((  bool (*) (List_1_t1741830302 *, Action_1_t269755560 *, const RuntimeMethod*))List_1_Contains_m2654125393_gshared)(__this, p0, method)
// System.Void System.Collections.Generic.List`1<System.Action`1<System.Boolean>>::Add(!0)
#define List_1_Add_m2257682863(__this, p0, method) ((  void (*) (List_1_t1741830302 *, Action_1_t269755560 *, const RuntimeMethod*))List_1_Add_m3338814081_gshared)(__this, p0, method)
// System.Boolean System.Collections.Generic.List`1<System.Action`1<System.Boolean>>::Remove(!0)
#define List_1_Remove_m2142717768(__this, p0, method) ((  bool (*) (List_1_t1741830302 *, Action_1_t269755560 *, const RuntimeMethod*))List_1_Remove_m1416767016_gshared)(__this, p0, method)
// System.Void System.Collections.Generic.List`1<System.Action`1<System.Boolean>>::.ctor()
#define List_1__ctor_m70055677(__this, method) ((  void (*) (List_1_t1741830302 *, const RuntimeMethod*))List_1__ctor_m2321703786_gshared)(__this, method)
// !0[] System.Collections.Generic.List`1<LocalizeString>::ToArray()
#define List_1_ToArray_m1385224522(__this, method) ((  LocalizeStringU5BU5D_t1200507501* (*) (List_1_t1963720954 *, const RuntimeMethod*))List_1_ToArray_m4168020446_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<LocalizeString>::.ctor(System.Collections.Generic.IEnumerable`1<!0>)
#define List_1__ctor_m2158357409(__this, p0, method) ((  void (*) (List_1_t1963720954 *, RuntimeObject*, const RuntimeMethod*))List_1__ctor_m1328752868_gshared)(__this, p0, method)
// System.Void System.Xml.Serialization.XmlSerializer::.ctor(System.Type)
extern "C"  void XmlSerializer__ctor_m1036498336 (XmlSerializer_t1117804635 * __this, Type_t * p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.String UnityEngine.TextAsset::get_text()
extern "C"  String_t* TextAsset_get_text_m2027878391 (TextAsset_t3022178571 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.StringReader::.ctor(System.String)
extern "C"  void StringReader__ctor_m126993932 (StringReader_t3465604688 * __this, String_t* p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Object System.Xml.Serialization.XmlSerializer::Deserialize(System.IO.TextReader)
extern "C"  RuntimeObject * XmlSerializer_Deserialize_m1833578159 (XmlSerializer_t1117804635 * __this, TextReader_t283511965 * p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// UnityEngine.SystemLanguage UnityEngine.Application::get_systemLanguage()
extern "C"  int32_t Application_get_systemLanguage_m3110370732 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// LocalizeString[] Localize::get_localizeStringList()
extern "C"  LocalizeStringU5BU5D_t1200507501* Localize_get_localizeStringList_m719393806 (Localize_t2088442295 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.String::op_Equality(System.String,System.String)
extern "C"  bool String_op_Equality_m920492651 (RuntimeObject * __this /* static, unused */, String_t* p0, String_t* p1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Sprite UnityEngine.UI.Image::get_sprite()
extern "C"  Sprite_t280657092 * Image_get_sprite_m1811690853 (Image_t2670269651 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Generic.List`1<UnityEngine.GameObject>::.ctor()
#define List_1__ctor_m1424466557(__this, method) ((  void (*) (List_1_t2585711361 *, const RuntimeMethod*))List_1__ctor_m2321703786_gshared)(__this, method)
// System.Void MainSceneManager::ActiveGallery()
extern "C"  void MainSceneManager_ActiveGallery_m2541763430 (MainSceneManager_t2603182452 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// UnityEngine.EventSystems.EventSystem UnityEngine.EventSystems.EventSystem::get_current()
extern "C"  EventSystem_t1003666588 * EventSystem_get_current_m1416377559 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// UnityEngine.GameObject UnityEngine.EventSystems.EventSystem::get_currentSelectedGameObject()
extern "C"  GameObject_t1113636619 * EventSystem_get_currentSelectedGameObject_m2939274948 (EventSystem_t1003666588 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.GameObject::get_activeSelf()
extern "C"  bool GameObject_get_activeSelf_m1767405923 (GameObject_t1113636619 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// DontDestroyManager GameManager::getDontDestroyManager()
extern "C"  DontDestroyManager_t1329034447 * GameManager_getDontDestroyManager_m2156172674 (GameManager_t1536523654 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void BlurManager::popup(System.String)
extern "C"  void BlurManager_popup_m1373291001 (BlurManager_t3192295244 * __this, String_t* ___msg0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.String System.String::Substring(System.Int32,System.Int32)
extern "C"  String_t* String_Substring_m1610150815 (String_t* __this, int32_t p0, int32_t p1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Object System.Enum::Parse(System.Type,System.String)
extern "C"  RuntimeObject * Enum_Parse_m1871331077 (RuntimeObject * __this /* static, unused */, Type_t * p0, String_t* p1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void GameManager::ChangeScene(SceneName,BoardPrefabName)
extern "C"  void GameManager_ChangeScene_m3732671280 (GameManager_t1536523654 * __this, int32_t ___sn0, int32_t ___bpn1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// !!0 UnityEngine.Component::GetComponent<DragGalleryContentScript>()
#define Component_GetComponent_TisDragGalleryContentScript_t2491726244_m3299036926(__this, method) ((  DragGalleryContentScript_t2491726244 * (*) (Component_t1923634451 *, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m2906321015_gshared)(__this, method)
// System.Void UnityEngine.Object::Destroy(UnityEngine.Object)
extern "C"  void Object_Destroy_m565254235 (RuntimeObject * __this /* static, unused */, Object_t631007953 * p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void DragGalleryContentScript::loadGallery()
extern "C"  void DragGalleryContentScript_loadGallery_m634214822 (DragGalleryContentScript_t2491726244 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Generic.List`1<UnityEngine.GameObject>::Clear()
#define List_1_Clear_m2500309205(__this, method) ((  void (*) (List_1_t2585711361 *, const RuntimeMethod*))List_1_Clear_m3697625829_gshared)(__this, method)
// System.Int32 DragGalleryContentScript::GetTotalPageNum()
extern "C"  int32_t DragGalleryContentScript_GetTotalPageNum_m3965472721 (DragGalleryContentScript_t2491726244 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Generic.List`1<UnityEngine.GameObject>::Add(!0)
#define List_1_Add_m2765963565(__this, p0, method) ((  void (*) (List_1_t2585711361 *, GameObject_t1113636619 *, const RuntimeMethod*))List_1_Add_m3338814081_gshared)(__this, p0, method)
// System.String UnityEngine.PlayerPrefs::GetString(System.String,System.String)
extern "C"  String_t* PlayerPrefs_GetString_m614532710 (RuntimeObject * __this /* static, unused */, String_t* p0, String_t* p1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void DragGalleryContentScript::SetDirectPage()
extern "C"  void DragGalleryContentScript_SetDirectPage_m1764594248 (DragGalleryContentScript_t2491726244 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// !0 System.Collections.Generic.List`1<UnityEngine.GameObject>::get_Item(System.Int32)
#define List_1_get_Item_m3743125852(__this, p0, method) ((  GameObject_t1113636619 * (*) (List_1_t2585711361 *, int32_t, const RuntimeMethod*))List_1_get_Item_m2287542950_gshared)(__this, p0, method)
// System.Void SocialTool::socialLogin()
extern "C"  void SocialTool_socialLogin_m1551231671 (SocialTool_t1909827527 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// BoardPrefabName GameManager::GetBoardImageName()
extern "C"  int32_t GameManager_GetBoardImageName_m2118616804 (GameManager_t1536523654 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Int32 PlayBoardGameSceneManager::GetBlockNum()
extern "C"  int32_t PlayBoardGameSceneManager_GetBlockNum_m2562770194 (PlayBoardGameSceneManager_t1063580347 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// !!0 UnityEngine.Object::Instantiate<UnityEngine.GameObject>(!!0,UnityEngine.Transform)
#define Object_Instantiate_TisGameObject_t1113636619_m3215236302(__this /* static, unused */, p0, p1, method) ((  GameObject_t1113636619 * (*) (RuntimeObject * /* static, unused */, GameObject_t1113636619 *, Transform_t3600365921 *, const RuntimeMethod*))Object_Instantiate_TisRuntimeObject_m1061214600_gshared)(__this /* static, unused */, p0, p1, method)
// UnityEngine.Vector3 UnityEngine.Vector3::get_zero()
extern "C"  Vector3_t3722313464  Vector3_get_zero_m1409827619 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void GameManager::ChangeScene(SceneName)
extern "C"  void GameManager_ChangeScene_m1824834679 (GameManager_t1536523654 * __this, int32_t ___sn0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void GameManager::SetBlockState(System.String)
extern "C"  void GameManager_SetBlockState_m3286834702 (GameManager_t1536523654 * __this, String_t* ___s0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.PlayerPrefs::SetString(System.String,System.String)
extern "C"  void PlayerPrefs_SetString_m2101271233 (RuntimeObject * __this /* static, unused */, String_t* p0, String_t* p1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Enum::IsDefined(System.Type,System.Object)
extern "C"  bool Enum_IsDefined_m1442314461 (RuntimeObject * __this /* static, unused */, Type_t * p0, RuntimeObject * p1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.String System.String::Substring(System.Int32)
extern "C"  String_t* String_Substring_m2848979100 (String_t* __this, int32_t p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void BlurManager::popup(System.String,UnityEngine.Events.UnityAction)
extern "C"  void BlurManager_popup_m1972495530 (BlurManager_t3192295244 * __this, String_t* ___msg0, UnityAction_t3245792599 * ___action1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Transform UnityEngine.Transform::Find(System.String)
extern "C"  Transform_t3600365921 * Transform_Find_m1729760951 (Transform_t3600365921 * __this, String_t* p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// !!0 UnityEngine.Component::GetComponent<BlockGameScript>()
#define Component_GetComponent_TisBlockGameScript_t725110519_m560207762(__this, method) ((  BlockGameScript_t725110519 * (*) (Component_t1923634451 *, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m2906321015_gshared)(__this, method)
// System.Void BlockGameScript::Reset()
extern "C"  void BlockGameScript_Reset_m398893628 (BlockGameScript_t725110519 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.SocialPlatforms.GameCenter.GameCenterPlatform::ShowDefaultAchievementCompletionBanner(System.Boolean)
extern "C"  void GameCenterPlatform_ShowDefaultAchievementCompletionBanner_m2497844455 (RuntimeObject * __this /* static, unused */, bool p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// UnityEngine.SocialPlatforms.ILocalUser UnityEngine.Social::get_localUser()
extern "C"  RuntimeObject* Social_get_localUser_m4215544813 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void System.Action`1<System.Boolean>::.ctor(System.Object,System.IntPtr)
#define Action_1__ctor_m1363151734(__this, p0, p1, method) ((  void (*) (Action_1_t269755560 *, RuntimeObject *, intptr_t, const RuntimeMethod*))Action_1__ctor_m1363151734_gshared)(__this, p0, p1, method)
// System.String System.DateTime::ToString()
extern "C"  String_t* DateTime_ToString_m884486936 (DateTime_t3738529785 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.PlayerPrefs::GetFloat(System.String,System.Single)
extern "C"  float PlayerPrefs_GetFloat_m3293813615 (RuntimeObject * __this /* static, unused */, String_t* p0, float p1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Int64 SoulPopUpManager::CheckSecondDifference(System.String)
extern "C"  int64_t SoulPopUpManager_CheckSecondDifference_m4265491882 (SoulPopUpManager_t3321416543 * __this, String_t* ___old0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void SoulPopUpManager::PlaceSoulsRandomly(System.Int32)
extern "C"  void SoulPopUpManager_PlaceSoulsRandomly_m1447194973 (SoulPopUpManager_t3321416543 * __this, int32_t ____soul_num0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void SoulPopUpManager::CheckTouchInputs()
extern "C"  void SoulPopUpManager_CheckTouchInputs_m3936880048 (SoulPopUpManager_t3321416543 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void SoulPopUpManager::CreateSoul()
extern "C"  void SoulPopUpManager_CreateSoul_m3655787173 (SoulPopUpManager_t3321416543 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.PlayerPrefs::SetFloat(System.String,System.Single)
extern "C"  void PlayerPrefs_SetFloat_m3161432420 (RuntimeObject * __this /* static, unused */, String_t* p0, float p1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.DateTime System.Convert::ToDateTime(System.String)
extern "C"  DateTime_t3738529785  Convert_ToDateTime_m199555027 (RuntimeObject * __this /* static, unused */, String_t* p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.TimeSpan System.DateTime::Subtract(System.DateTime)
extern "C"  TimeSpan_t881159249  DateTime_Subtract_m77007479 (DateTime_t3738529785 * __this, DateTime_t3738529785  p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Double System.TimeSpan::get_TotalSeconds()
extern "C"  double TimeSpan_get_TotalSeconds_m4083325051 (TimeSpan_t881159249 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// !!0 UnityEngine.GameObject::GetComponent<UnityEngine.Transform>()
#define GameObject_GetComponent_TisTransform_t3600365921_m3348034436(__this, method) ((  Transform_t3600365921 * (*) (GameObject_t1113636619 *, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_m2049753423_gshared)(__this, method)
// !!0 UnityEngine.GameObject::GetComponent<UnityEngine.RectTransform>()
#define GameObject_GetComponent_TisRectTransform_t3704657025_m2005094398(__this, method) ((  RectTransform_t3704657025 * (*) (GameObject_t1113636619 *, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_m2049753423_gshared)(__this, method)
// UnityEngine.Rect UnityEngine.RectTransform::get_rect()
extern "C"  Rect_t2360479859  RectTransform_get_rect_m574169965 (RectTransform_t3704657025 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.Rect::get_width()
extern "C"  float Rect_get_width_m3421484486 (Rect_t2360479859 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.Rect::get_height()
extern "C"  float Rect_get_height_m1358425599 (Rect_t2360479859 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.Random::Range(System.Single,System.Single)
extern "C"  float Random_Range_m2202990745 (RuntimeObject * __this /* static, unused */, float p0, float p1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Input::GetMouseButton(System.Int32)
extern "C"  bool Input_GetMouseButton_m513753021 (RuntimeObject * __this /* static, unused */, int32_t p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.Vector3::Distance(UnityEngine.Vector3,UnityEngine.Vector3)
extern "C"  float Vector3_Distance_m886789632 (RuntimeObject * __this /* static, unused */, Vector3_t3722313464  p0, Vector3_t3722313464  p1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void SoulPopUpManager::GetSoul(System.Int32)
extern "C"  void SoulPopUpManager_GetSoul_m552337302 (SoulPopUpManager_t3321416543 * __this, int32_t ___i0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Collections.Generic.List`1<UnityEngine.GameObject>::get_Count()
#define List_1_get_Count_m2812834599(__this, method) ((  int32_t (*) (List_1_t2585711361 *, const RuntimeMethod*))List_1_get_Count_m2934127733_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.GameObject>::RemoveAt(System.Int32)
#define List_1_RemoveAt_m3509344782(__this, p0, method) ((  void (*) (List_1_t2585711361 *, int32_t, const RuntimeMethod*))List_1_RemoveAt_m2730968292_gshared)(__this, p0, method)
// System.Void MainSceneManager::SetGalleryPage()
extern "C"  void MainSceneManager_SetGalleryPage_m824382587 (MainSceneManager_t2603182452 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
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
// System.Void BlockGameScript::.ctor()
extern "C"  void BlockGameScript__ctor_m2749460304 (BlockGameScript_t725110519 * __this, const RuntimeMethod* method)
{
	{
		__this->set__tmp_color_right_3((1.0f));
		__this->set__tmp_color_wrong_4((0.5f));
		__this->set_IMAGE_SIZE_5((700.0f));
		MonoBehaviour__ctor_m1579109191(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void BlockGameScript::Awake()
extern "C"  void BlockGameScript_Awake_m4038678848 (BlockGameScript_t725110519 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (BlockGameScript_Awake_m4038678848_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		GameObject_t1113636619 * L_0 = GameObject_Find_m2032535176(NULL /*static, unused*/, _stringLiteral3675739884, /*hidden argument*/NULL);
		NullCheck(L_0);
		PlayBoardGameSceneManager_t1063580347 * L_1 = GameObject_GetComponent_TisPlayBoardGameSceneManager_t1063580347_m386673798(L_0, /*hidden argument*/GameObject_GetComponent_TisPlayBoardGameSceneManager_t1063580347_m386673798_RuntimeMethod_var);
		__this->set_playBoardGameSceneManager_2(L_1);
		IL2CPP_RUNTIME_CLASS_INIT(GameManager_t1536523654_il2cpp_TypeInfo_var);
		GameManager_t1536523654 * L_2 = GameManager_GetInstance_m367300771(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_2);
		int32_t L_3 = GameManager_GetBlockSize_m4175583345(L_2, /*hidden argument*/NULL);
		__this->set_BLOCK_NUM_6(L_3);
		ObjectU5BU5D_t2843939325* L_4 = ((ObjectU5BU5D_t2843939325*)SZArrayNew(ObjectU5BU5D_t2843939325_il2cpp_TypeInfo_var, (uint32_t)4));
		NullCheck(L_4);
		ArrayElementTypeCheck (L_4, _stringLiteral395946798);
		(L_4)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject *)_stringLiteral395946798);
		ObjectU5BU5D_t2843939325* L_5 = L_4;
		int32_t L_6 = __this->get_BLOCK_NUM_6();
		int32_t L_7 = L_6;
		RuntimeObject * L_8 = Box(Int32_t2950945753_il2cpp_TypeInfo_var, &L_7);
		NullCheck(L_5);
		ArrayElementTypeCheck (L_5, L_8);
		(L_5)->SetAt(static_cast<il2cpp_array_size_t>(1), (RuntimeObject *)L_8);
		ObjectU5BU5D_t2843939325* L_9 = L_5;
		NullCheck(L_9);
		ArrayElementTypeCheck (L_9, _stringLiteral3452614616);
		(L_9)->SetAt(static_cast<il2cpp_array_size_t>(2), (RuntimeObject *)_stringLiteral3452614616);
		ObjectU5BU5D_t2843939325* L_10 = L_9;
		int32_t L_11 = __this->get_BLOCK_NUM_6();
		int32_t L_12 = L_11;
		RuntimeObject * L_13 = Box(Int32_t2950945753_il2cpp_TypeInfo_var, &L_12);
		NullCheck(L_10);
		ArrayElementTypeCheck (L_10, L_13);
		(L_10)->SetAt(static_cast<il2cpp_array_size_t>(3), (RuntimeObject *)L_13);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_14 = String_Concat_m2971454694(NULL /*static, unused*/, L_10, /*hidden argument*/NULL);
		__this->set_BLANK_IMAGE_NAME_8(L_14);
		float L_15 = __this->get_IMAGE_SIZE_5();
		int32_t L_16 = __this->get_BLOCK_NUM_6();
		__this->set_BLOCK_SIZE_7(((float)((float)L_15/(float)(((float)((float)L_16))))));
		int32_t L_17 = __this->get_BLOCK_NUM_6();
		int32_t L_18 = __this->get_BLOCK_NUM_6();
		__this->set_BLANK_INDEX_9(((int32_t)il2cpp_codegen_subtract((int32_t)((int32_t)il2cpp_codegen_multiply((int32_t)L_17, (int32_t)L_18)), (int32_t)1)));
		__this->set__right_loc_num_13(0);
		return;
	}
}
// System.Void BlockGameScript::Start()
extern "C"  void BlockGameScript_Start_m863883510 (BlockGameScript_t725110519 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (BlockGameScript_Start_m863883510_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	Transform_t3600365921 * V_1 = NULL;
	RuntimeObject* V_2 = NULL;
	RuntimeObject* V_3 = NULL;
	int32_t V_4 = 0;
	String_t* V_5 = NULL;
	int32_t V_6 = 0;
	int32_t V_7 = 0;
	Int32U5BU5D_t385246372* V_8 = NULL;
	int32_t V_9 = 0;
	int32_t V_10 = 0;
	int32_t V_11 = 0;
	int32_t V_12 = 0;
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	StringU5BU5D_t1281789340* G_B18_0 = NULL;
	StringU5BU5D_t1281789340* G_B17_0 = NULL;
	{
		Transform_t3600365921 * L_0 = Component_get_transform_m3162698980(__this, /*hidden argument*/NULL);
		NullCheck(L_0);
		int32_t L_1 = Transform_get_childCount_m3145433196(L_0, /*hidden argument*/NULL);
		__this->set__blocks_10(((TransformU5BU5D_t807237628*)SZArrayNew(TransformU5BU5D_t807237628_il2cpp_TypeInfo_var, (uint32_t)L_1)));
		V_0 = 0;
		Transform_t3600365921 * L_2 = Component_get_transform_m3162698980(__this, /*hidden argument*/NULL);
		NullCheck(L_2);
		RuntimeObject* L_3 = Transform_GetEnumerator_m2717073726(L_2, /*hidden argument*/NULL);
		V_2 = L_3;
	}

IL_0024:
	try
	{ // begin try (depth: 1)
		{
			goto IL_0042;
		}

IL_0029:
		{
			RuntimeObject* L_4 = V_2;
			NullCheck(L_4);
			RuntimeObject * L_5 = InterfaceFuncInvoker0< RuntimeObject * >::Invoke(0 /* System.Object System.Collections.IEnumerator::get_Current() */, IEnumerator_t1853284238_il2cpp_TypeInfo_var, L_4);
			V_1 = ((Transform_t3600365921 *)CastclassClass((RuntimeObject*)L_5, Transform_t3600365921_il2cpp_TypeInfo_var));
			TransformU5BU5D_t807237628* L_6 = __this->get__blocks_10();
			int32_t L_7 = V_0;
			int32_t L_8 = L_7;
			V_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_8, (int32_t)1));
			Transform_t3600365921 * L_9 = V_1;
			NullCheck(L_6);
			ArrayElementTypeCheck (L_6, L_9);
			(L_6)->SetAt(static_cast<il2cpp_array_size_t>(L_8), (Transform_t3600365921 *)L_9);
		}

IL_0042:
		{
			RuntimeObject* L_10 = V_2;
			NullCheck(L_10);
			bool L_11 = InterfaceFuncInvoker0< bool >::Invoke(1 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t1853284238_il2cpp_TypeInfo_var, L_10);
			if (L_11)
			{
				goto IL_0029;
			}
		}

IL_004d:
		{
			IL2CPP_LEAVE(0x66, FINALLY_0052);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_0052;
	}

FINALLY_0052:
	{ // begin finally (depth: 1)
		{
			RuntimeObject* L_12 = V_2;
			RuntimeObject* L_13 = ((RuntimeObject*)IsInst((RuntimeObject*)L_12, IDisposable_t3640265483_il2cpp_TypeInfo_var));
			V_3 = L_13;
			if (!L_13)
			{
				goto IL_0065;
			}
		}

IL_005f:
		{
			RuntimeObject* L_14 = V_3;
			NullCheck(L_14);
			InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t3640265483_il2cpp_TypeInfo_var, L_14);
		}

IL_0065:
		{
			IL2CPP_END_FINALLY(82)
		}
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(82)
	{
		IL2CPP_JUMP_TBL(0x66, IL_0066)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
	}

IL_0066:
	{
		PlayBoardGameSceneManager_t1063580347 * L_15 = __this->get_playBoardGameSceneManager_2();
		NullCheck(L_15);
		SpriteU5BU5D_t2581906349* L_16 = PlayBoardGameSceneManager_GetSprites_m1024580081(L_15, /*hidden argument*/NULL);
		__this->set__sprites_11(L_16);
		SpriteU5BU5D_t2581906349* L_17 = __this->get__sprites_11();
		SpriteU5BU5D_t2581906349* L_18 = __this->get__sprites_11();
		NullCheck(L_18);
		String_t* L_19 = __this->get_BLANK_IMAGE_NAME_8();
		Sprite_t280657092 * L_20 = Resources_Load_TisSprite_t280657092_m4144667290(NULL /*static, unused*/, L_19, /*hidden argument*/Resources_Load_TisSprite_t280657092_m4144667290_RuntimeMethod_var);
		NullCheck(L_17);
		ArrayElementTypeCheck (L_17, L_20);
		(L_17)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_subtract((int32_t)(((int32_t)((int32_t)(((RuntimeArray *)L_18)->max_length)))), (int32_t)1))), (Sprite_t280657092 *)L_20);
		V_4 = 0;
		goto IL_00bd;
	}

IL_009b:
	{
		TransformU5BU5D_t807237628* L_21 = __this->get__blocks_10();
		int32_t L_22 = V_4;
		NullCheck(L_21);
		int32_t L_23 = L_22;
		Transform_t3600365921 * L_24 = (L_21)->GetAt(static_cast<il2cpp_array_size_t>(L_23));
		NullCheck(L_24);
		Image_t2670269651 * L_25 = Component_GetComponent_TisImage_t2670269651_m980647750(L_24, /*hidden argument*/Component_GetComponent_TisImage_t2670269651_m980647750_RuntimeMethod_var);
		SpriteU5BU5D_t2581906349* L_26 = __this->get__sprites_11();
		int32_t L_27 = V_4;
		NullCheck(L_26);
		int32_t L_28 = L_27;
		Sprite_t280657092 * L_29 = (L_26)->GetAt(static_cast<il2cpp_array_size_t>(L_28));
		NullCheck(L_25);
		Image_set_sprite_m2369174689(L_25, L_29, /*hidden argument*/NULL);
		int32_t L_30 = V_4;
		V_4 = ((int32_t)il2cpp_codegen_add((int32_t)L_30, (int32_t)1));
	}

IL_00bd:
	{
		int32_t L_31 = V_4;
		TransformU5BU5D_t807237628* L_32 = __this->get__blocks_10();
		NullCheck(L_32);
		if ((((int32_t)L_31) < ((int32_t)(((int32_t)((int32_t)(((RuntimeArray *)L_32)->max_length)))))))
		{
			goto IL_009b;
		}
	}
	{
		PlayBoardGameSceneManager_t1063580347 * L_33 = __this->get_playBoardGameSceneManager_2();
		NullCheck(L_33);
		String_t* L_34 = PlayBoardGameSceneManager_GetBlockState_m3359666033(L_33, /*hidden argument*/NULL);
		V_5 = L_34;
		String_t* L_35 = V_5;
		NullCheck(L_35);
		int32_t L_36 = String_get_Length_m3847582255(L_35, /*hidden argument*/NULL);
		if (L_36)
		{
			goto IL_0134;
		}
	}
	{
		V_6 = 0;
		goto IL_011e;
	}

IL_00ed:
	{
		int32_t L_37 = V_6;
		TransformU5BU5D_t807237628* L_38 = __this->get__blocks_10();
		NullCheck(L_38);
		int32_t L_39 = Random_Range_m4054026115(NULL /*static, unused*/, L_37, ((int32_t)il2cpp_codegen_subtract((int32_t)(((int32_t)((int32_t)(((RuntimeArray *)L_38)->max_length)))), (int32_t)1)), /*hidden argument*/NULL);
		V_7 = L_39;
		TransformU5BU5D_t807237628* L_40 = __this->get__blocks_10();
		int32_t L_41 = V_6;
		NullCheck(L_40);
		int32_t L_42 = L_41;
		Transform_t3600365921 * L_43 = (L_40)->GetAt(static_cast<il2cpp_array_size_t>(L_42));
		TransformU5BU5D_t807237628* L_44 = __this->get__blocks_10();
		int32_t L_45 = V_7;
		NullCheck(L_44);
		int32_t L_46 = L_45;
		Transform_t3600365921 * L_47 = (L_44)->GetAt(static_cast<il2cpp_array_size_t>(L_46));
		BlockGameScript_ChangeObjectLocation_m4122851448(__this, L_43, L_47, /*hidden argument*/NULL);
		int32_t L_48 = V_6;
		V_6 = ((int32_t)il2cpp_codegen_add((int32_t)L_48, (int32_t)1));
	}

IL_011e:
	{
		int32_t L_49 = V_6;
		TransformU5BU5D_t807237628* L_50 = __this->get__blocks_10();
		NullCheck(L_50);
		if ((((int32_t)L_49) < ((int32_t)((int32_t)il2cpp_codegen_subtract((int32_t)(((int32_t)((int32_t)(((RuntimeArray *)L_50)->max_length)))), (int32_t)1)))))
		{
			goto IL_00ed;
		}
	}
	{
		goto IL_01eb;
	}

IL_0134:
	{
		String_t* L_51 = V_5;
		CharU5BU5D_t3528271667* L_52 = ((CharU5BU5D_t3528271667*)SZArrayNew(CharU5BU5D_t3528271667_il2cpp_TypeInfo_var, (uint32_t)1));
		NullCheck(L_52);
		(L_52)->SetAt(static_cast<il2cpp_array_size_t>(0), (Il2CppChar)((int32_t)44));
		NullCheck(L_51);
		StringU5BU5D_t1281789340* L_53 = String_Split_m3646115398(L_51, L_52, /*hidden argument*/NULL);
		Converter_2_t751170091 * L_54 = ((BlockGameScript_t725110519_StaticFields*)il2cpp_codegen_static_fields_for(BlockGameScript_t725110519_il2cpp_TypeInfo_var))->get_U3CU3Ef__mgU24cache0_20();
		G_B17_0 = L_53;
		if (L_54)
		{
			G_B18_0 = L_53;
			goto IL_015e;
		}
	}
	{
		intptr_t L_55 = (intptr_t)Int32_Parse_m1033611559_RuntimeMethod_var;
		Converter_2_t751170091 * L_56 = (Converter_2_t751170091 *)il2cpp_codegen_object_new(Converter_2_t751170091_il2cpp_TypeInfo_var);
		Converter_2__ctor_m3483849192(L_56, NULL, L_55, /*hidden argument*/Converter_2__ctor_m3483849192_RuntimeMethod_var);
		((BlockGameScript_t725110519_StaticFields*)il2cpp_codegen_static_fields_for(BlockGameScript_t725110519_il2cpp_TypeInfo_var))->set_U3CU3Ef__mgU24cache0_20(L_56);
		G_B18_0 = G_B17_0;
	}

IL_015e:
	{
		Converter_2_t751170091 * L_57 = ((BlockGameScript_t725110519_StaticFields*)il2cpp_codegen_static_fields_for(BlockGameScript_t725110519_il2cpp_TypeInfo_var))->get_U3CU3Ef__mgU24cache0_20();
		Int32U5BU5D_t385246372* L_58 = Array_ConvertAll_TisString_t_TisInt32_t2950945753_m3377912609(NULL /*static, unused*/, G_B18_0, L_57, /*hidden argument*/Array_ConvertAll_TisString_t_TisInt32_t2950945753_m3377912609_RuntimeMethod_var);
		V_8 = L_58;
		V_9 = 0;
		goto IL_01e0;
	}

IL_0172:
	{
		Int32U5BU5D_t385246372* L_59 = V_8;
		int32_t L_60 = V_9;
		NullCheck(L_59);
		int32_t L_61 = L_60;
		int32_t L_62 = (L_59)->GetAt(static_cast<il2cpp_array_size_t>(L_61));
		int32_t L_63 = __this->get_BLOCK_NUM_6();
		V_10 = ((int32_t)((int32_t)L_62/(int32_t)L_63));
		Int32U5BU5D_t385246372* L_64 = V_8;
		int32_t L_65 = V_9;
		NullCheck(L_64);
		int32_t L_66 = L_65;
		int32_t L_67 = (L_64)->GetAt(static_cast<il2cpp_array_size_t>(L_66));
		int32_t L_68 = V_10;
		int32_t L_69 = __this->get_BLOCK_NUM_6();
		V_11 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_67, (int32_t)((int32_t)il2cpp_codegen_multiply((int32_t)L_68, (int32_t)L_69))));
		TransformU5BU5D_t807237628* L_70 = __this->get__blocks_10();
		int32_t L_71 = V_9;
		NullCheck(L_70);
		int32_t L_72 = L_71;
		Transform_t3600365921 * L_73 = (L_70)->GetAt(static_cast<il2cpp_array_size_t>(L_72));
		float L_74 = __this->get_IMAGE_SIZE_5();
		float L_75 = __this->get_BLOCK_SIZE_7();
		int32_t L_76 = V_11;
		float L_77 = __this->get_IMAGE_SIZE_5();
		float L_78 = __this->get_BLOCK_SIZE_7();
		int32_t L_79 = V_10;
		Vector3_t3722313464  L_80;
		memset(&L_80, 0, sizeof(L_80));
		Vector3__ctor_m3353183577((&L_80), ((float)il2cpp_codegen_add((float)((float)((float)((-L_74))/(float)(2.0f))), (float)((float)il2cpp_codegen_multiply((float)L_75, (float)(((float)((float)L_76))))))), ((float)il2cpp_codegen_subtract((float)((float)((float)L_77/(float)(2.0f))), (float)((float)il2cpp_codegen_multiply((float)L_78, (float)(((float)((float)((int32_t)il2cpp_codegen_add((int32_t)L_79, (int32_t)1))))))))), (0.0f), /*hidden argument*/NULL);
		NullCheck(L_73);
		Transform_set_localPosition_m4128471975(L_73, L_80, /*hidden argument*/NULL);
		int32_t L_81 = V_9;
		V_9 = ((int32_t)il2cpp_codegen_add((int32_t)L_81, (int32_t)1));
	}

IL_01e0:
	{
		int32_t L_82 = V_9;
		Int32U5BU5D_t385246372* L_83 = V_8;
		NullCheck(L_83);
		if ((((int32_t)L_82) < ((int32_t)(((int32_t)((int32_t)(((RuntimeArray *)L_83)->max_length)))))))
		{
			goto IL_0172;
		}
	}

IL_01eb:
	{
		V_12 = 0;
		goto IL_0239;
	}

IL_01f3:
	{
		int32_t L_84 = V_12;
		bool L_85 = BlockGameScript_CheckRightLoc_m1780145655(__this, L_84, /*hidden argument*/NULL);
		if (!L_85)
		{
			goto IL_0223;
		}
	}
	{
		TransformU5BU5D_t807237628* L_86 = __this->get__blocks_10();
		int32_t L_87 = V_12;
		NullCheck(L_86);
		int32_t L_88 = L_87;
		Transform_t3600365921 * L_89 = (L_86)->GetAt(static_cast<il2cpp_array_size_t>(L_88));
		BlockGameScript_SetObjectColor_m3840603770(__this, L_89, (bool)1, /*hidden argument*/NULL);
		int32_t L_90 = __this->get__right_loc_num_13();
		__this->set__right_loc_num_13(((int32_t)il2cpp_codegen_add((int32_t)L_90, (int32_t)1)));
		goto IL_0233;
	}

IL_0223:
	{
		TransformU5BU5D_t807237628* L_91 = __this->get__blocks_10();
		int32_t L_92 = V_12;
		NullCheck(L_91);
		int32_t L_93 = L_92;
		Transform_t3600365921 * L_94 = (L_91)->GetAt(static_cast<il2cpp_array_size_t>(L_93));
		BlockGameScript_SetObjectColor_m3840603770(__this, L_94, (bool)0, /*hidden argument*/NULL);
	}

IL_0233:
	{
		int32_t L_95 = V_12;
		V_12 = ((int32_t)il2cpp_codegen_add((int32_t)L_95, (int32_t)1));
	}

IL_0239:
	{
		int32_t L_96 = V_12;
		TransformU5BU5D_t807237628* L_97 = __this->get__blocks_10();
		NullCheck(L_97);
		if ((((int32_t)L_96) < ((int32_t)(((int32_t)((int32_t)(((RuntimeArray *)L_97)->max_length)))))))
		{
			goto IL_01f3;
		}
	}
	{
		int32_t L_98 = __this->get__right_loc_num_13();
		int32_t L_99 = L_98;
		RuntimeObject * L_100 = Box(Int32_t2950945753_il2cpp_TypeInfo_var, &L_99);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_101 = String_Concat_m904156431(NULL /*static, unused*/, _stringLiteral336974340, L_100, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Debug_t3317548046_il2cpp_TypeInfo_var);
		Debug_Log_m4051431634(NULL /*static, unused*/, L_101, /*hidden argument*/NULL);
		int32_t L_102 = __this->get__right_loc_num_13();
		int32_t L_103 = __this->get_BLOCK_NUM_6();
		int32_t L_104 = __this->get_BLOCK_NUM_6();
		__this->set_isCompleted_19((bool)((((int32_t)L_102) == ((int32_t)((int32_t)il2cpp_codegen_multiply((int32_t)L_103, (int32_t)L_104))))? 1 : 0));
		bool L_105 = __this->get_isCompleted_19();
		if (!L_105)
		{
			goto IL_02aa;
		}
	}
	{
		PlayBoardGameSceneManager_t1063580347 * L_106 = __this->get_playBoardGameSceneManager_2();
		NullCheck(L_106);
		GameObject_t1113636619 * L_107 = L_106->get__complete_image_obj_3();
		NullCheck(L_107);
		GameObject_SetActive_m796801857(L_107, (bool)0, /*hidden argument*/NULL);
		PlayBoardGameSceneManager_t1063580347 * L_108 = __this->get_playBoardGameSceneManager_2();
		NullCheck(L_108);
		GameObject_t1113636619 * L_109 = L_108->get_resetButton_4();
		NullCheck(L_109);
		GameObject_SetActive_m796801857(L_109, (bool)1, /*hidden argument*/NULL);
	}

IL_02aa:
	{
		return;
	}
}
// System.Void BlockGameScript::Update()
extern "C"  void BlockGameScript_Update_m3769661023 (BlockGameScript_t725110519 * __this, const RuntimeMethod* method)
{
	{
		bool L_0 = __this->get_isCompleted_19();
		if (L_0)
		{
			goto IL_0022;
		}
	}
	{
		int32_t L_1 = DontDestroyManager_GetSoulNum_m1644499173(NULL /*static, unused*/, /*hidden argument*/NULL);
		if ((((int32_t)L_1) <= ((int32_t)0)))
		{
			goto IL_0022;
		}
	}
	{
		BlockGameScript_CheckClickingBoard_m3461456120(__this, /*hidden argument*/NULL);
		BlockGameScript_DraggingBoardObj_m905776931(__this, /*hidden argument*/NULL);
	}

IL_0022:
	{
		return;
	}
}
// System.Void BlockGameScript::OnDestroy()
extern "C"  void BlockGameScript_OnDestroy_m2061132844 (BlockGameScript_t725110519 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (BlockGameScript_OnDestroy_m2061132844_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	int32_t V_1 = 0;
	Vector3_t3722313464  V_2;
	memset(&V_2, 0, sizeof(V_2));
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	{
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_0 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_2();
		V_0 = L_0;
		V_1 = 0;
		goto IL_009a;
	}

IL_000d:
	{
		int32_t L_1 = V_1;
		if (!L_1)
		{
			goto IL_001f;
		}
	}
	{
		String_t* L_2 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_3 = String_Concat_m3937257545(NULL /*static, unused*/, L_2, _stringLiteral3452614532, /*hidden argument*/NULL);
		V_0 = L_3;
	}

IL_001f:
	{
		TransformU5BU5D_t807237628* L_4 = __this->get__blocks_10();
		int32_t L_5 = V_1;
		NullCheck(L_4);
		int32_t L_6 = L_5;
		Transform_t3600365921 * L_7 = (L_4)->GetAt(static_cast<il2cpp_array_size_t>(L_6));
		NullCheck(L_7);
		Vector3_t3722313464  L_8 = Transform_get_localPosition_m4234289348(L_7, /*hidden argument*/NULL);
		V_2 = L_8;
		float L_9 = (&V_2)->get_x_1();
		float L_10 = __this->get_IMAGE_SIZE_5();
		int32_t L_11 = __this->get_BLOCK_NUM_6();
		float L_12 = __this->get_IMAGE_SIZE_5();
		V_3 = ((int32_t)((int32_t)((int32_t)il2cpp_codegen_multiply((int32_t)(((int32_t)((int32_t)((float)il2cpp_codegen_add((float)L_9, (float)((float)((float)L_10/(float)(2.0f)))))))), (int32_t)L_11))/(int32_t)(((int32_t)((int32_t)L_12)))));
		float L_13 = __this->get_IMAGE_SIZE_5();
		float L_14 = (&V_2)->get_y_2();
		int32_t L_15 = __this->get_BLOCK_NUM_6();
		float L_16 = __this->get_IMAGE_SIZE_5();
		V_4 = ((int32_t)il2cpp_codegen_subtract((int32_t)((int32_t)((int32_t)((int32_t)il2cpp_codegen_multiply((int32_t)(((int32_t)((int32_t)((float)il2cpp_codegen_subtract((float)((float)((float)L_13/(float)(2.0f))), (float)L_14))))), (int32_t)L_15))/(int32_t)(((int32_t)((int32_t)L_16))))), (int32_t)1));
		String_t* L_17 = V_0;
		int32_t L_18 = V_4;
		int32_t L_19 = __this->get_BLOCK_NUM_6();
		int32_t L_20 = V_3;
		int32_t L_21 = ((int32_t)il2cpp_codegen_add((int32_t)((int32_t)il2cpp_codegen_multiply((int32_t)L_18, (int32_t)L_19)), (int32_t)L_20));
		RuntimeObject * L_22 = Box(Int32_t2950945753_il2cpp_TypeInfo_var, &L_21);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_23 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_2();
		String_t* L_24 = String_Concat_m1715369213(NULL /*static, unused*/, L_17, L_22, L_23, /*hidden argument*/NULL);
		V_0 = L_24;
		int32_t L_25 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_25, (int32_t)1));
	}

IL_009a:
	{
		int32_t L_26 = V_1;
		int32_t L_27 = __this->get_BLANK_INDEX_9();
		if ((((int32_t)L_26) <= ((int32_t)L_27)))
		{
			goto IL_000d;
		}
	}
	{
		PlayBoardGameSceneManager_t1063580347 * L_28 = __this->get_playBoardGameSceneManager_2();
		String_t* L_29 = V_0;
		NullCheck(L_28);
		PlayBoardGameSceneManager_SaveBlockState_m3559858343(L_28, L_29, /*hidden argument*/NULL);
		return;
	}
}
// System.Void BlockGameScript::CheckClickingBoard()
extern "C"  void BlockGameScript_CheckClickingBoard_m3461456120 (BlockGameScript_t725110519 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (BlockGameScript_CheckClickingBoard_m3461456120_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Transform_t3600365921 * V_0 = NULL;
	Vector3_t3722313464  V_1;
	memset(&V_1, 0, sizeof(V_1));
	bool V_2 = false;
	Vector3_t3722313464  V_3;
	memset(&V_3, 0, sizeof(V_3));
	Transform_t3600365921 * V_4 = NULL;
	Vector3_t3722313464  V_5;
	memset(&V_5, 0, sizeof(V_5));
	int32_t G_B12_0 = 0;
	{
		IL2CPP_RUNTIME_CLASS_INIT(Input_t1431474628_il2cpp_TypeInfo_var);
		bool L_0 = Input_GetMouseButtonDown_m2081676745(NULL /*static, unused*/, 0, /*hidden argument*/NULL);
		if (!L_0)
		{
			goto IL_0078;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Input_t1431474628_il2cpp_TypeInfo_var);
		Vector3_t3722313464  L_1 = Input_get_mousePosition_m1616496925(NULL /*static, unused*/, /*hidden argument*/NULL);
		Transform_t3600365921 * L_2 = BlockGameScript_GetObjectByTouchPosition_m4146186647(__this, L_1, /*hidden argument*/NULL);
		__this->set__start_drag_obj_15(L_2);
		Transform_t3600365921 * L_3 = __this->get__start_drag_obj_15();
		IL2CPP_RUNTIME_CLASS_INIT(Object_t631007953_il2cpp_TypeInfo_var);
		bool L_4 = Object_op_Inequality_m4071470834(NULL /*static, unused*/, L_3, (Object_t631007953 *)NULL, /*hidden argument*/NULL);
		if (!L_4)
		{
			goto IL_0073;
		}
	}
	{
		Transform_t3600365921 * L_5 = __this->get__start_drag_obj_15();
		NullCheck(L_5);
		String_t* L_6 = Object_get_name_m4211327027(L_5, /*hidden argument*/NULL);
		TransformU5BU5D_t807237628* L_7 = __this->get__blocks_10();
		int32_t L_8 = __this->get_BLANK_INDEX_9();
		NullCheck(L_7);
		int32_t L_9 = L_8;
		Transform_t3600365921 * L_10 = (L_7)->GetAt(static_cast<il2cpp_array_size_t>(L_9));
		NullCheck(L_10);
		String_t* L_11 = Object_get_name_m4211327027(L_10, /*hidden argument*/NULL);
		NullCheck(L_6);
		bool L_12 = String_Equals_m2270643605(L_6, L_11, /*hidden argument*/NULL);
		if (L_12)
		{
			goto IL_0073;
		}
	}
	{
		Transform_t3600365921 * L_13 = __this->get__start_drag_obj_15();
		NullCheck(L_13);
		Vector3_t3722313464  L_14 = Transform_get_position_m36019626(L_13, /*hidden argument*/NULL);
		__this->set__start_drag_obj_pos_16(L_14);
		__this->set__mouse_down_on_board_14((bool)1);
		__this->set__mouse_moved_18((bool)0);
	}

IL_0073:
	{
		goto IL_01e7;
	}

IL_0078:
	{
		IL2CPP_RUNTIME_CLASS_INIT(Input_t1431474628_il2cpp_TypeInfo_var);
		bool L_15 = Input_GetMouseButtonUp_m2924350851(NULL /*static, unused*/, 0, /*hidden argument*/NULL);
		if (!L_15)
		{
			goto IL_01e7;
		}
	}
	{
		bool L_16 = __this->get__mouse_down_on_board_14();
		if (!L_16)
		{
			goto IL_01e0;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Input_t1431474628_il2cpp_TypeInfo_var);
		Vector3_t3722313464  L_17 = Input_get_mousePosition_m1616496925(NULL /*static, unused*/, /*hidden argument*/NULL);
		Transform_t3600365921 * L_18 = BlockGameScript_GetObjectByTouchPosition_m4146186647(__this, L_17, /*hidden argument*/NULL);
		V_0 = L_18;
		Transform_t3600365921 * L_19 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(Object_t631007953_il2cpp_TypeInfo_var);
		bool L_20 = Object_op_Inequality_m4071470834(NULL /*static, unused*/, L_19, (Object_t631007953 *)NULL, /*hidden argument*/NULL);
		if (!L_20)
		{
			goto IL_0194;
		}
	}
	{
		Transform_t3600365921 * L_21 = V_0;
		NullCheck(L_21);
		Vector3_t3722313464  L_22 = Transform_get_position_m36019626(L_21, /*hidden argument*/NULL);
		V_1 = L_22;
		Vector3_t3722313464  L_23 = __this->get__start_drag_obj_pos_16();
		Vector3_t3722313464  L_24 = L_23;
		RuntimeObject * L_25 = Box(Vector3_t3722313464_il2cpp_TypeInfo_var, &L_24);
		bool L_26 = Vector3_Equals_m1753054704((Vector3_t3722313464 *)(&V_1), L_25, /*hidden argument*/NULL);
		if (L_26)
		{
			goto IL_0136;
		}
	}
	{
		Transform_t3600365921 * L_27 = V_0;
		NullCheck(L_27);
		Vector3_t3722313464  L_28 = Transform_get_position_m36019626(L_27, /*hidden argument*/NULL);
		Vector3_t3722313464  L_29 = __this->get__start_drag_obj_pos_16();
		bool L_30 = BlockGameScript_GetBlocksOnlyInCross_m666557681(__this, L_28, L_29, /*hidden argument*/NULL);
		if (!L_30)
		{
			goto IL_00e7;
		}
	}
	{
		G_B12_0 = 1;
		goto IL_00e8;
	}

IL_00e7:
	{
		G_B12_0 = 0;
	}

IL_00e8:
	{
		V_2 = (bool)G_B12_0;
		bool L_31 = V_2;
		if (!L_31)
		{
			goto IL_0131;
		}
	}
	{
		Transform_t3600365921 * L_32 = __this->get__start_drag_obj_15();
		NullCheck(L_32);
		Vector3_t3722313464  L_33 = Transform_get_position_m36019626(L_32, /*hidden argument*/NULL);
		V_3 = L_33;
		Vector3_t3722313464  L_34 = __this->get__start_drag_obj_pos_16();
		Vector3_t3722313464  L_35 = L_34;
		RuntimeObject * L_36 = Box(Vector3_t3722313464_il2cpp_TypeInfo_var, &L_35);
		bool L_37 = Vector3_Equals_m1753054704((Vector3_t3722313464 *)(&V_3), L_36, /*hidden argument*/NULL);
		if (L_37)
		{
			goto IL_0131;
		}
	}
	{
		Transform_t3600365921 * L_38 = __this->get__start_drag_obj_15();
		TransformU5BU5D_t807237628* L_39 = __this->get__blocks_10();
		int32_t L_40 = __this->get_BLANK_INDEX_9();
		NullCheck(L_39);
		int32_t L_41 = L_40;
		Transform_t3600365921 * L_42 = (L_39)->GetAt(static_cast<il2cpp_array_size_t>(L_41));
		BlockGameScript_SettingRoutineAfterChangeObject_m701267219(__this, L_38, L_42, /*hidden argument*/NULL);
	}

IL_0131:
	{
		goto IL_018f;
	}

IL_0136:
	{
		bool L_43 = __this->get__mouse_moved_18();
		if (L_43)
		{
			goto IL_018f;
		}
	}
	{
		TransformU5BU5D_t807237628* L_44 = __this->get__blocks_10();
		int32_t L_45 = __this->get_BLANK_INDEX_9();
		NullCheck(L_44);
		int32_t L_46 = L_45;
		Transform_t3600365921 * L_47 = (L_44)->GetAt(static_cast<il2cpp_array_size_t>(L_46));
		V_4 = L_47;
		Vector3_t3722313464  L_48 = __this->get__start_drag_obj_pos_16();
		Transform_t3600365921 * L_49 = V_4;
		NullCheck(L_49);
		Vector3_t3722313464  L_50 = Transform_get_position_m36019626(L_49, /*hidden argument*/NULL);
		bool L_51 = BlockGameScript_GetBlocksOnlyInCross_m666557681(__this, L_48, L_50, /*hidden argument*/NULL);
		if (!L_51)
		{
			goto IL_018f;
		}
	}
	{
		Transform_t3600365921 * L_52 = __this->get__start_drag_obj_15();
		Transform_t3600365921 * L_53 = V_4;
		BlockGameScript_ChangeObjectLocation_m4122851448(__this, L_52, L_53, /*hidden argument*/NULL);
		Transform_t3600365921 * L_54 = __this->get__start_drag_obj_15();
		TransformU5BU5D_t807237628* L_55 = __this->get__blocks_10();
		int32_t L_56 = __this->get_BLANK_INDEX_9();
		NullCheck(L_55);
		int32_t L_57 = L_56;
		Transform_t3600365921 * L_58 = (L_55)->GetAt(static_cast<il2cpp_array_size_t>(L_57));
		BlockGameScript_SettingRoutineAfterChangeObject_m701267219(__this, L_54, L_58, /*hidden argument*/NULL);
	}

IL_018f:
	{
		goto IL_01e0;
	}

IL_0194:
	{
		Transform_t3600365921 * L_59 = __this->get__start_drag_obj_15();
		NullCheck(L_59);
		Vector3_t3722313464  L_60 = Transform_get_position_m36019626(L_59, /*hidden argument*/NULL);
		V_5 = L_60;
		Vector3_t3722313464  L_61 = __this->get__start_drag_obj_pos_16();
		Vector3_t3722313464  L_62 = L_61;
		RuntimeObject * L_63 = Box(Vector3_t3722313464_il2cpp_TypeInfo_var, &L_62);
		bool L_64 = Vector3_Equals_m1753054704((Vector3_t3722313464 *)(&V_5), L_63, /*hidden argument*/NULL);
		if (L_64)
		{
			goto IL_01e0;
		}
	}
	{
		Transform_t3600365921 * L_65 = __this->get__start_drag_obj_15();
		TransformU5BU5D_t807237628* L_66 = __this->get__blocks_10();
		int32_t L_67 = __this->get_BLOCK_NUM_6();
		int32_t L_68 = __this->get_BLOCK_NUM_6();
		NullCheck(L_66);
		int32_t L_69 = ((int32_t)il2cpp_codegen_subtract((int32_t)((int32_t)il2cpp_codegen_multiply((int32_t)L_67, (int32_t)L_68)), (int32_t)1));
		Transform_t3600365921 * L_70 = (L_66)->GetAt(static_cast<il2cpp_array_size_t>(L_69));
		BlockGameScript_ChangeObjectLocation_m4122851448(__this, L_65, L_70, /*hidden argument*/NULL);
	}

IL_01e0:
	{
		__this->set__mouse_down_on_board_14((bool)0);
	}

IL_01e7:
	{
		return;
	}
}
// System.Void BlockGameScript::SettingRoutineAfterChangeObject(UnityEngine.Transform,UnityEngine.Transform)
extern "C"  void BlockGameScript_SettingRoutineAfterChangeObject_m701267219 (BlockGameScript_t725110519 * __this, Transform_t3600365921 * ___t10, Transform_t3600365921 * ___t21, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (BlockGameScript_SettingRoutineAfterChangeObject_m701267219_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	bool V_1 = false;
	bool V_2 = false;
	Vector3_t3722313464  V_3;
	memset(&V_3, 0, sizeof(V_3));
	bool V_4 = false;
	Vector3_t3722313464  V_5;
	memset(&V_5, 0, sizeof(V_5));
	int32_t G_B3_0 = 0;
	int32_t G_B6_0 = 0;
	{
		Transform_t3600365921 * L_0 = ___t10;
		NullCheck(L_0);
		GameObject_t1113636619 * L_1 = Component_get_gameObject_m442555142(L_0, /*hidden argument*/NULL);
		NullCheck(L_1);
		String_t* L_2 = Object_get_name_m4211327027(L_1, /*hidden argument*/NULL);
		Transform_t3600365921 * L_3 = ___t21;
		NullCheck(L_3);
		GameObject_t1113636619 * L_4 = Component_get_gameObject_m442555142(L_3, /*hidden argument*/NULL);
		NullCheck(L_4);
		String_t* L_5 = Object_get_name_m4211327027(L_4, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_6 = String_Concat_m3755062657(NULL /*static, unused*/, L_2, _stringLiteral1910992376, L_5, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Debug_t3317548046_il2cpp_TypeInfo_var);
		Debug_Log_m4051431634(NULL /*static, unused*/, L_6, /*hidden argument*/NULL);
		int32_t L_7 = DontDestroyManager_GetSoulNum_m1644499173(NULL /*static, unused*/, /*hidden argument*/NULL);
		DontDestroyManager_SetSoulNum_m3127869396(NULL /*static, unused*/, ((int32_t)il2cpp_codegen_subtract((int32_t)L_7, (int32_t)1)), /*hidden argument*/NULL);
		PlayBoardGameSceneManager_t1063580347 * L_8 = __this->get_playBoardGameSceneManager_2();
		NullCheck(L_8);
		PlayBoardGameSceneManager_SetSoulNumText_m3655537806(L_8, /*hidden argument*/NULL);
		Transform_t3600365921 * L_9 = ___t10;
		bool L_10 = BlockGameScript_CheckRightLoc_m3598286481(__this, L_9, /*hidden argument*/NULL);
		V_0 = L_10;
		Transform_t3600365921 * L_11 = ___t21;
		bool L_12 = BlockGameScript_CheckRightLoc_m3598286481(__this, L_11, /*hidden argument*/NULL);
		V_1 = L_12;
		Transform_t3600365921 * L_13 = ___t10;
		bool L_14 = V_0;
		BlockGameScript_SetObjectColor_m3840603770(__this, L_13, L_14, /*hidden argument*/NULL);
		Transform_t3600365921 * L_15 = ___t21;
		bool L_16 = V_1;
		BlockGameScript_SetObjectColor_m3840603770(__this, L_15, L_16, /*hidden argument*/NULL);
		Transform_t3600365921 * L_17 = ___t10;
		Vector3_t3722313464  L_18 = BlockGameScript_GetRightLoc_m2151465700(__this, L_17, /*hidden argument*/NULL);
		V_3 = L_18;
		Transform_t3600365921 * L_19 = ___t21;
		NullCheck(L_19);
		Vector3_t3722313464  L_20 = Transform_get_localPosition_m4234289348(L_19, /*hidden argument*/NULL);
		Vector3_t3722313464  L_21 = L_20;
		RuntimeObject * L_22 = Box(Vector3_t3722313464_il2cpp_TypeInfo_var, &L_21);
		bool L_23 = Vector3_Equals_m1753054704((Vector3_t3722313464 *)(&V_3), L_22, /*hidden argument*/NULL);
		if (!L_23)
		{
			goto IL_0087;
		}
	}
	{
		G_B3_0 = 1;
		goto IL_0088;
	}

IL_0087:
	{
		G_B3_0 = 0;
	}

IL_0088:
	{
		V_2 = (bool)G_B3_0;
		Transform_t3600365921 * L_24 = ___t21;
		Vector3_t3722313464  L_25 = BlockGameScript_GetRightLoc_m2151465700(__this, L_24, /*hidden argument*/NULL);
		V_5 = L_25;
		Transform_t3600365921 * L_26 = ___t10;
		NullCheck(L_26);
		Vector3_t3722313464  L_27 = Transform_get_localPosition_m4234289348(L_26, /*hidden argument*/NULL);
		Vector3_t3722313464  L_28 = L_27;
		RuntimeObject * L_29 = Box(Vector3_t3722313464_il2cpp_TypeInfo_var, &L_28);
		bool L_30 = Vector3_Equals_m1753054704((Vector3_t3722313464 *)(&V_5), L_29, /*hidden argument*/NULL);
		if (!L_30)
		{
			goto IL_00b5;
		}
	}
	{
		G_B6_0 = 1;
		goto IL_00b6;
	}

IL_00b5:
	{
		G_B6_0 = 0;
	}

IL_00b6:
	{
		V_4 = (bool)G_B6_0;
		bool L_31 = V_2;
		bool L_32 = V_0;
		if ((((int32_t)L_31) == ((int32_t)L_32)))
		{
			goto IL_00e6;
		}
	}
	{
		bool L_33 = V_2;
		if (!L_33)
		{
			goto IL_00d8;
		}
	}
	{
		int32_t L_34 = __this->get__right_loc_num_13();
		__this->set__right_loc_num_13(((int32_t)il2cpp_codegen_subtract((int32_t)L_34, (int32_t)1)));
		goto IL_00e6;
	}

IL_00d8:
	{
		int32_t L_35 = __this->get__right_loc_num_13();
		__this->set__right_loc_num_13(((int32_t)il2cpp_codegen_add((int32_t)L_35, (int32_t)1)));
	}

IL_00e6:
	{
		bool L_36 = V_4;
		bool L_37 = V_1;
		if ((((int32_t)L_36) == ((int32_t)L_37)))
		{
			goto IL_0116;
		}
	}
	{
		bool L_38 = V_4;
		if (!L_38)
		{
			goto IL_0108;
		}
	}
	{
		int32_t L_39 = __this->get__right_loc_num_13();
		__this->set__right_loc_num_13(((int32_t)il2cpp_codegen_subtract((int32_t)L_39, (int32_t)1)));
		goto IL_0116;
	}

IL_0108:
	{
		int32_t L_40 = __this->get__right_loc_num_13();
		__this->set__right_loc_num_13(((int32_t)il2cpp_codegen_add((int32_t)L_40, (int32_t)1)));
	}

IL_0116:
	{
		int32_t L_41 = __this->get__right_loc_num_13();
		int32_t L_42 = L_41;
		RuntimeObject * L_43 = Box(Int32_t2950945753_il2cpp_TypeInfo_var, &L_42);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_44 = String_Concat_m904156431(NULL /*static, unused*/, _stringLiteral3584322610, L_43, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Debug_t3317548046_il2cpp_TypeInfo_var);
		Debug_Log_m4051431634(NULL /*static, unused*/, L_44, /*hidden argument*/NULL);
		int32_t L_45 = __this->get__right_loc_num_13();
		int32_t L_46 = __this->get_BLOCK_NUM_6();
		int32_t L_47 = __this->get_BLOCK_NUM_6();
		if ((!(((uint32_t)L_45) == ((uint32_t)((int32_t)il2cpp_codegen_multiply((int32_t)L_46, (int32_t)L_47))))))
		{
			goto IL_015a;
		}
	}
	{
		PlayBoardGameSceneManager_t1063580347 * L_48 = __this->get_playBoardGameSceneManager_2();
		NullCheck(L_48);
		PlayBoardGameSceneManager_CompleteBoard_m3268643837(L_48, /*hidden argument*/NULL);
		__this->set_isCompleted_19((bool)1);
	}

IL_015a:
	{
		return;
	}
}
// System.Void BlockGameScript::Reset()
extern "C"  void BlockGameScript_Reset_m398893628 (BlockGameScript_t725110519 * __this, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	{
		V_0 = 0;
		goto IL_0032;
	}

IL_0007:
	{
		int32_t L_0 = V_0;
		TransformU5BU5D_t807237628* L_1 = __this->get__blocks_10();
		NullCheck(L_1);
		int32_t L_2 = Random_Range_m4054026115(NULL /*static, unused*/, L_0, ((int32_t)il2cpp_codegen_subtract((int32_t)(((int32_t)((int32_t)(((RuntimeArray *)L_1)->max_length)))), (int32_t)1)), /*hidden argument*/NULL);
		V_1 = L_2;
		TransformU5BU5D_t807237628* L_3 = __this->get__blocks_10();
		int32_t L_4 = V_0;
		NullCheck(L_3);
		int32_t L_5 = L_4;
		Transform_t3600365921 * L_6 = (L_3)->GetAt(static_cast<il2cpp_array_size_t>(L_5));
		TransformU5BU5D_t807237628* L_7 = __this->get__blocks_10();
		int32_t L_8 = V_1;
		NullCheck(L_7);
		int32_t L_9 = L_8;
		Transform_t3600365921 * L_10 = (L_7)->GetAt(static_cast<il2cpp_array_size_t>(L_9));
		BlockGameScript_ChangeObjectLocation_m4122851448(__this, L_6, L_10, /*hidden argument*/NULL);
		int32_t L_11 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_11, (int32_t)1));
	}

IL_0032:
	{
		int32_t L_12 = V_0;
		TransformU5BU5D_t807237628* L_13 = __this->get__blocks_10();
		NullCheck(L_13);
		if ((((int32_t)L_12) < ((int32_t)((int32_t)il2cpp_codegen_subtract((int32_t)(((int32_t)((int32_t)(((RuntimeArray *)L_13)->max_length)))), (int32_t)1)))))
		{
			goto IL_0007;
		}
	}
	{
		__this->set__right_loc_num_13(0);
		V_2 = 0;
		goto IL_0091;
	}

IL_0050:
	{
		int32_t L_14 = V_2;
		bool L_15 = BlockGameScript_CheckRightLoc_m1780145655(__this, L_14, /*hidden argument*/NULL);
		if (!L_15)
		{
			goto IL_007e;
		}
	}
	{
		TransformU5BU5D_t807237628* L_16 = __this->get__blocks_10();
		int32_t L_17 = V_2;
		NullCheck(L_16);
		int32_t L_18 = L_17;
		Transform_t3600365921 * L_19 = (L_16)->GetAt(static_cast<il2cpp_array_size_t>(L_18));
		BlockGameScript_SetObjectColor_m3840603770(__this, L_19, (bool)1, /*hidden argument*/NULL);
		int32_t L_20 = __this->get__right_loc_num_13();
		__this->set__right_loc_num_13(((int32_t)il2cpp_codegen_add((int32_t)L_20, (int32_t)1)));
		goto IL_008d;
	}

IL_007e:
	{
		TransformU5BU5D_t807237628* L_21 = __this->get__blocks_10();
		int32_t L_22 = V_2;
		NullCheck(L_21);
		int32_t L_23 = L_22;
		Transform_t3600365921 * L_24 = (L_21)->GetAt(static_cast<il2cpp_array_size_t>(L_23));
		BlockGameScript_SetObjectColor_m3840603770(__this, L_24, (bool)0, /*hidden argument*/NULL);
	}

IL_008d:
	{
		int32_t L_25 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add((int32_t)L_25, (int32_t)1));
	}

IL_0091:
	{
		int32_t L_26 = V_2;
		TransformU5BU5D_t807237628* L_27 = __this->get__blocks_10();
		NullCheck(L_27);
		if ((((int32_t)L_26) < ((int32_t)(((int32_t)((int32_t)(((RuntimeArray *)L_27)->max_length)))))))
		{
			goto IL_0050;
		}
	}
	{
		__this->set_isCompleted_19((bool)0);
		return;
	}
}
// System.Void BlockGameScript::DraggingBoardObj()
extern "C"  void BlockGameScript_DraggingBoardObj_m905776931 (BlockGameScript_t725110519 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (BlockGameScript_DraggingBoardObj_m905776931_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Vector3_t3722313464  V_0;
	memset(&V_0, 0, sizeof(V_0));
	bool V_1 = false;
	Vector3_t3722313464  V_2;
	memset(&V_2, 0, sizeof(V_2));
	bool V_3 = false;
	bool V_4 = false;
	Vector3_t3722313464  V_5;
	memset(&V_5, 0, sizeof(V_5));
	Vector3_t3722313464  V_6;
	memset(&V_6, 0, sizeof(V_6));
	int32_t G_B8_0 = 0;
	int32_t G_B11_0 = 0;
	int32_t G_B14_0 = 0;
	{
		bool L_0 = __this->get__mouse_down_on_board_14();
		if (!L_0)
		{
			goto IL_0179;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Input_t1431474628_il2cpp_TypeInfo_var);
		Vector3_t3722313464  L_1 = Input_get_mousePosition_m1616496925(NULL /*static, unused*/, /*hidden argument*/NULL);
		Transform_t3600365921 * L_2 = BlockGameScript_GetObjectByTouchPosition_m4146186647(__this, L_1, /*hidden argument*/NULL);
		__this->set__mouse_dragging_obj_17(L_2);
		Transform_t3600365921 * L_3 = __this->get__mouse_dragging_obj_17();
		IL2CPP_RUNTIME_CLASS_INIT(Object_t631007953_il2cpp_TypeInfo_var);
		bool L_4 = Object_op_Inequality_m4071470834(NULL /*static, unused*/, L_3, (Object_t631007953 *)NULL, /*hidden argument*/NULL);
		if (!L_4)
		{
			goto IL_0172;
		}
	}
	{
		Vector3_t3722313464 * L_5 = __this->get_address_of__start_drag_obj_pos_16();
		Transform_t3600365921 * L_6 = __this->get__mouse_dragging_obj_17();
		NullCheck(L_6);
		Vector3_t3722313464  L_7 = Transform_get_position_m36019626(L_6, /*hidden argument*/NULL);
		Vector3_t3722313464  L_8 = L_7;
		RuntimeObject * L_9 = Box(Vector3_t3722313464_il2cpp_TypeInfo_var, &L_8);
		bool L_10 = Vector3_Equals_m1753054704((Vector3_t3722313464 *)L_5, L_9, /*hidden argument*/NULL);
		if (L_10)
		{
			goto IL_005a;
		}
	}
	{
		__this->set__mouse_moved_18((bool)1);
	}

IL_005a:
	{
		Transform_t3600365921 * L_11 = __this->get__mouse_dragging_obj_17();
		NullCheck(L_11);
		Vector3_t3722313464  L_12 = Transform_get_position_m36019626(L_11, /*hidden argument*/NULL);
		V_0 = L_12;
		Vector3_t3722313464  L_13 = __this->get__start_drag_obj_pos_16();
		Vector3_t3722313464  L_14 = L_13;
		RuntimeObject * L_15 = Box(Vector3_t3722313464_il2cpp_TypeInfo_var, &L_14);
		bool L_16 = Vector3_Equals_m1753054704((Vector3_t3722313464 *)(&V_0), L_15, /*hidden argument*/NULL);
		if (L_16)
		{
			goto IL_0131;
		}
	}
	{
		Transform_t3600365921 * L_17 = __this->get__mouse_dragging_obj_17();
		int32_t L_18 = BlockGameScript_GetObjectNumByGameObject_m2056703641(__this, L_17, /*hidden argument*/NULL);
		int32_t L_19 = __this->get_BLANK_INDEX_9();
		if ((!(((uint32_t)L_18) == ((uint32_t)L_19))))
		{
			goto IL_00a0;
		}
	}
	{
		G_B8_0 = 1;
		goto IL_00a1;
	}

IL_00a0:
	{
		G_B8_0 = 0;
	}

IL_00a1:
	{
		V_1 = (bool)G_B8_0;
		TransformU5BU5D_t807237628* L_20 = __this->get__blocks_10();
		int32_t L_21 = __this->get_BLANK_INDEX_9();
		NullCheck(L_20);
		int32_t L_22 = L_21;
		Transform_t3600365921 * L_23 = (L_20)->GetAt(static_cast<il2cpp_array_size_t>(L_22));
		NullCheck(L_23);
		Transform_t3600365921 * L_24 = Component_get_transform_m3162698980(L_23, /*hidden argument*/NULL);
		NullCheck(L_24);
		Vector3_t3722313464  L_25 = Transform_get_position_m36019626(L_24, /*hidden argument*/NULL);
		V_2 = L_25;
		Vector3_t3722313464  L_26 = V_2;
		Vector3_t3722313464  L_27 = __this->get__start_drag_obj_pos_16();
		bool L_28 = BlockGameScript_GetBlocksOnlyInCross_m666557681(__this, L_26, L_27, /*hidden argument*/NULL);
		if (!L_28)
		{
			goto IL_00d2;
		}
	}
	{
		G_B11_0 = 1;
		goto IL_00d3;
	}

IL_00d2:
	{
		G_B11_0 = 0;
	}

IL_00d3:
	{
		V_3 = (bool)G_B11_0;
		Transform_t3600365921 * L_29 = __this->get__start_drag_obj_15();
		NullCheck(L_29);
		Vector3_t3722313464  L_30 = Transform_get_position_m36019626(L_29, /*hidden argument*/NULL);
		V_5 = L_30;
		Vector3_t3722313464  L_31 = __this->get__start_drag_obj_pos_16();
		Vector3_t3722313464  L_32 = L_31;
		RuntimeObject * L_33 = Box(Vector3_t3722313464_il2cpp_TypeInfo_var, &L_32);
		bool L_34 = Vector3_Equals_m1753054704((Vector3_t3722313464 *)(&V_5), L_33, /*hidden argument*/NULL);
		if (!L_34)
		{
			goto IL_0104;
		}
	}
	{
		G_B14_0 = 1;
		goto IL_0105;
	}

IL_0104:
	{
		G_B14_0 = 0;
	}

IL_0105:
	{
		V_4 = (bool)G_B14_0;
		bool L_35 = V_1;
		if (!L_35)
		{
			goto IL_012c;
		}
	}
	{
		bool L_36 = V_3;
		if (!L_36)
		{
			goto IL_012c;
		}
	}
	{
		bool L_37 = V_4;
		if (!L_37)
		{
			goto IL_012c;
		}
	}
	{
		Transform_t3600365921 * L_38 = __this->get__start_drag_obj_15();
		Transform_t3600365921 * L_39 = __this->get__mouse_dragging_obj_17();
		BlockGameScript_ChangeObjectLocation_m4122851448(__this, L_38, L_39, /*hidden argument*/NULL);
	}

IL_012c:
	{
		goto IL_016d;
	}

IL_0131:
	{
		Transform_t3600365921 * L_40 = __this->get__start_drag_obj_15();
		NullCheck(L_40);
		Vector3_t3722313464  L_41 = Transform_get_position_m36019626(L_40, /*hidden argument*/NULL);
		V_6 = L_41;
		Vector3_t3722313464  L_42 = __this->get__start_drag_obj_pos_16();
		Vector3_t3722313464  L_43 = L_42;
		RuntimeObject * L_44 = Box(Vector3_t3722313464_il2cpp_TypeInfo_var, &L_43);
		bool L_45 = Vector3_Equals_m1753054704((Vector3_t3722313464 *)(&V_6), L_44, /*hidden argument*/NULL);
		if (L_45)
		{
			goto IL_016d;
		}
	}
	{
		Transform_t3600365921 * L_46 = __this->get__start_drag_obj_15();
		Transform_t3600365921 * L_47 = __this->get__mouse_dragging_obj_17();
		BlockGameScript_ChangeObjectLocation_m4122851448(__this, L_46, L_47, /*hidden argument*/NULL);
	}

IL_016d:
	{
		goto IL_0179;
	}

IL_0172:
	{
		__this->set__mouse_moved_18((bool)1);
	}

IL_0179:
	{
		return;
	}
}
// System.Boolean BlockGameScript::GetBlocksOnlyInCross(UnityEngine.Vector3,UnityEngine.Vector3)
extern "C"  bool BlockGameScript_GetBlocksOnlyInCross_m666557681 (BlockGameScript_t725110519 * __this, Vector3_t3722313464  ___v10, Vector3_t3722313464  ___v21, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (BlockGameScript_GetBlocksOnlyInCross_m666557681_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	bool V_1 = false;
	bool V_2 = false;
	int32_t G_B3_0 = 0;
	int32_t G_B6_0 = 0;
	{
		Vector3_t3722313464  L_0 = ___v21;
		Vector3_t3722313464  L_1 = L_0;
		RuntimeObject * L_2 = Box(Vector3_t3722313464_il2cpp_TypeInfo_var, &L_1);
		bool L_3 = Vector3_Equals_m1753054704((Vector3_t3722313464 *)(&___v10), L_2, /*hidden argument*/NULL);
		V_0 = L_3;
		float L_4 = (&___v10)->get_x_1();
		float L_5 = (&___v21)->get_x_1();
		IL2CPP_RUNTIME_CLASS_INIT(Mathf_t3464937446_il2cpp_TypeInfo_var);
		float L_6 = fabsf(((float)il2cpp_codegen_subtract((float)L_4, (float)L_5)));
		float L_7 = __this->get_BLOCK_SIZE_7();
		if ((!(((float)L_6) <= ((float)L_7))))
		{
			goto IL_0054;
		}
	}
	{
		float L_8 = (&___v10)->get_y_2();
		float L_9 = (&___v21)->get_y_2();
		IL2CPP_RUNTIME_CLASS_INIT(Mathf_t3464937446_il2cpp_TypeInfo_var);
		float L_10 = fabsf(((float)il2cpp_codegen_subtract((float)L_8, (float)L_9)));
		float L_11 = __this->get_BLOCK_SIZE_7();
		G_B3_0 = ((((int32_t)((!(((float)L_10) <= ((float)L_11)))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		goto IL_0055;
	}

IL_0054:
	{
		G_B3_0 = 0;
	}

IL_0055:
	{
		V_1 = (bool)G_B3_0;
		float L_12 = (&___v10)->get_x_1();
		float L_13 = (&___v21)->get_x_1();
		IL2CPP_RUNTIME_CLASS_INIT(Mathf_t3464937446_il2cpp_TypeInfo_var);
		float L_14 = fabsf(((float)il2cpp_codegen_subtract((float)L_12, (float)L_13)));
		float L_15 = __this->get_BLOCK_SIZE_7();
		if ((!(((float)L_14) == ((float)L_15))))
		{
			goto IL_0093;
		}
	}
	{
		float L_16 = (&___v10)->get_y_2();
		float L_17 = (&___v21)->get_y_2();
		IL2CPP_RUNTIME_CLASS_INIT(Mathf_t3464937446_il2cpp_TypeInfo_var);
		float L_18 = fabsf(((float)il2cpp_codegen_subtract((float)L_16, (float)L_17)));
		float L_19 = __this->get_BLOCK_SIZE_7();
		G_B6_0 = ((((float)L_18) == ((float)L_19))? 1 : 0);
		goto IL_0094;
	}

IL_0093:
	{
		G_B6_0 = 0;
	}

IL_0094:
	{
		V_2 = (bool)G_B6_0;
		bool L_20 = V_0;
		if (L_20)
		{
			goto IL_00a9;
		}
	}
	{
		bool L_21 = V_1;
		if (!L_21)
		{
			goto IL_00a9;
		}
	}
	{
		bool L_22 = V_2;
		if (L_22)
		{
			goto IL_00a9;
		}
	}
	{
		return (bool)1;
	}

IL_00a9:
	{
		return (bool)0;
	}
}
// System.Void BlockGameScript::SetObjectColor(UnityEngine.Transform,System.Boolean)
extern "C"  void BlockGameScript_SetObjectColor_m3840603770 (BlockGameScript_t725110519 * __this, Transform_t3600365921 * ___t0, bool ___right_pos1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (BlockGameScript_SetObjectColor_m3840603770_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Color_t2555686324  V_0;
	memset(&V_0, 0, sizeof(V_0));
	{
		Transform_t3600365921 * L_0 = ___t0;
		NullCheck(L_0);
		GameObject_t1113636619 * L_1 = Component_get_gameObject_m442555142(L_0, /*hidden argument*/NULL);
		NullCheck(L_1);
		Image_t2670269651 * L_2 = GameObject_GetComponent_TisImage_t2670269651_m2486712510(L_1, /*hidden argument*/GameObject_GetComponent_TisImage_t2670269651_m2486712510_RuntimeMethod_var);
		NullCheck(L_2);
		Color_t2555686324  L_3 = VirtFuncInvoker0< Color_t2555686324  >::Invoke(22 /* UnityEngine.Color UnityEngine.UI.Graphic::get_color() */, L_2);
		V_0 = L_3;
		bool L_4 = ___right_pos1;
		if (!L_4)
		{
			goto IL_0029;
		}
	}
	{
		float L_5 = __this->get__tmp_color_right_3();
		(&V_0)->set_a_3(L_5);
		goto IL_0036;
	}

IL_0029:
	{
		float L_6 = __this->get__tmp_color_wrong_4();
		(&V_0)->set_a_3(L_6);
	}

IL_0036:
	{
		Transform_t3600365921 * L_7 = ___t0;
		NullCheck(L_7);
		GameObject_t1113636619 * L_8 = Component_get_gameObject_m442555142(L_7, /*hidden argument*/NULL);
		NullCheck(L_8);
		Image_t2670269651 * L_9 = GameObject_GetComponent_TisImage_t2670269651_m2486712510(L_8, /*hidden argument*/GameObject_GetComponent_TisImage_t2670269651_m2486712510_RuntimeMethod_var);
		Color_t2555686324  L_10 = V_0;
		NullCheck(L_9);
		VirtActionInvoker1< Color_t2555686324  >::Invoke(23 /* System.Void UnityEngine.UI.Graphic::set_color(UnityEngine.Color) */, L_9, L_10);
		return;
	}
}
// UnityEngine.Transform BlockGameScript::GetObjectByTouchPosition(UnityEngine.Vector3)
extern "C"  Transform_t3600365921 * BlockGameScript_GetObjectByTouchPosition_m4146186647 (BlockGameScript_t725110519 * __this, Vector3_t3722313464  ___v0, const RuntimeMethod* method)
{
	Vector3_t3722313464  V_0;
	memset(&V_0, 0, sizeof(V_0));
	Transform_t3600365921 * V_1 = NULL;
	TransformU5BU5D_t807237628* V_2 = NULL;
	int32_t V_3 = 0;
	{
		TransformU5BU5D_t807237628* L_0 = __this->get__blocks_10();
		V_2 = L_0;
		V_3 = 0;
		goto IL_0079;
	}

IL_000e:
	{
		TransformU5BU5D_t807237628* L_1 = V_2;
		int32_t L_2 = V_3;
		NullCheck(L_1);
		int32_t L_3 = L_2;
		Transform_t3600365921 * L_4 = (L_1)->GetAt(static_cast<il2cpp_array_size_t>(L_3));
		V_1 = L_4;
		Transform_t3600365921 * L_5 = V_1;
		NullCheck(L_5);
		Vector3_t3722313464  L_6 = Transform_get_position_m36019626(L_5, /*hidden argument*/NULL);
		V_0 = L_6;
		float L_7 = (&___v0)->get_x_1();
		float L_8 = (&V_0)->get_x_1();
		if ((!(((float)L_7) >= ((float)L_8))))
		{
			goto IL_0075;
		}
	}
	{
		float L_9 = (&___v0)->get_x_1();
		float L_10 = (&V_0)->get_x_1();
		float L_11 = __this->get_BLOCK_SIZE_7();
		if ((!(((float)L_9) <= ((float)((float)il2cpp_codegen_add((float)L_10, (float)L_11))))))
		{
			goto IL_0075;
		}
	}
	{
		float L_12 = (&___v0)->get_y_2();
		float L_13 = (&V_0)->get_y_2();
		if ((!(((float)L_12) >= ((float)L_13))))
		{
			goto IL_0075;
		}
	}
	{
		float L_14 = (&___v0)->get_y_2();
		float L_15 = (&V_0)->get_y_2();
		float L_16 = __this->get_BLOCK_SIZE_7();
		if ((!(((float)L_14) <= ((float)((float)il2cpp_codegen_add((float)L_15, (float)L_16))))))
		{
			goto IL_0075;
		}
	}
	{
		Transform_t3600365921 * L_17 = V_1;
		return L_17;
	}

IL_0075:
	{
		int32_t L_18 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add((int32_t)L_18, (int32_t)1));
	}

IL_0079:
	{
		int32_t L_19 = V_3;
		TransformU5BU5D_t807237628* L_20 = V_2;
		NullCheck(L_20);
		if ((((int32_t)L_19) < ((int32_t)(((int32_t)((int32_t)(((RuntimeArray *)L_20)->max_length)))))))
		{
			goto IL_000e;
		}
	}
	{
		return (Transform_t3600365921 *)NULL;
	}
}
// System.Void BlockGameScript::ChangeObjectLocation(UnityEngine.Transform,UnityEngine.Transform)
extern "C"  void BlockGameScript_ChangeObjectLocation_m4122851448 (BlockGameScript_t725110519 * __this, Transform_t3600365921 * ___a0, Transform_t3600365921 * ___b1, const RuntimeMethod* method)
{
	Vector3_t3722313464  V_0;
	memset(&V_0, 0, sizeof(V_0));
	{
		Transform_t3600365921 * L_0 = ___a0;
		NullCheck(L_0);
		Vector3_t3722313464  L_1 = Transform_get_localPosition_m4234289348(L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		Transform_t3600365921 * L_2 = ___a0;
		Transform_t3600365921 * L_3 = ___b1;
		NullCheck(L_3);
		Vector3_t3722313464  L_4 = Transform_get_localPosition_m4234289348(L_3, /*hidden argument*/NULL);
		NullCheck(L_2);
		Transform_set_localPosition_m4128471975(L_2, L_4, /*hidden argument*/NULL);
		Transform_t3600365921 * L_5 = ___b1;
		Vector3_t3722313464  L_6 = V_0;
		NullCheck(L_5);
		Transform_set_localPosition_m4128471975(L_5, L_6, /*hidden argument*/NULL);
		return;
	}
}
// System.Int32 BlockGameScript::GetObjectNumByGameObject(UnityEngine.Transform)
extern "C"  int32_t BlockGameScript_GetObjectNumByGameObject_m2056703641 (BlockGameScript_t725110519 * __this, Transform_t3600365921 * ___go0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (BlockGameScript_GetObjectNumByGameObject_m2056703641_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	String_t* V_1 = NULL;
	int32_t V_2 = 0;
	{
		Transform_t3600365921 * L_0 = ___go0;
		NullCheck(L_0);
		String_t* L_1 = Object_get_name_m4211327027(L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_2 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_2();
		V_1 = L_2;
		V_2 = 0;
		goto IL_003c;
	}

IL_0014:
	{
		String_t* L_3 = V_0;
		int32_t L_4 = V_2;
		NullCheck(L_3);
		Il2CppChar L_5 = String_get_Chars_m2986988803(L_3, L_4, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Char_t3634460470_il2cpp_TypeInfo_var);
		bool L_6 = Char_IsDigit_m3646673943(NULL /*static, unused*/, L_5, /*hidden argument*/NULL);
		if (!L_6)
		{
			goto IL_0038;
		}
	}
	{
		String_t* L_7 = V_1;
		String_t* L_8 = V_0;
		int32_t L_9 = V_2;
		NullCheck(L_8);
		Il2CppChar L_10 = String_get_Chars_m2986988803(L_8, L_9, /*hidden argument*/NULL);
		Il2CppChar L_11 = L_10;
		RuntimeObject * L_12 = Box(Char_t3634460470_il2cpp_TypeInfo_var, &L_11);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_13 = String_Concat_m904156431(NULL /*static, unused*/, L_7, L_12, /*hidden argument*/NULL);
		V_1 = L_13;
	}

IL_0038:
	{
		int32_t L_14 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add((int32_t)L_14, (int32_t)1));
	}

IL_003c:
	{
		int32_t L_15 = V_2;
		String_t* L_16 = V_0;
		NullCheck(L_16);
		int32_t L_17 = String_get_Length_m3847582255(L_16, /*hidden argument*/NULL);
		if ((((int32_t)L_15) < ((int32_t)L_17)))
		{
			goto IL_0014;
		}
	}
	{
		String_t* L_18 = V_1;
		NullCheck(L_18);
		int32_t L_19 = String_get_Length_m3847582255(L_18, /*hidden argument*/NULL);
		if ((((int32_t)L_19) <= ((int32_t)0)))
		{
			goto IL_005b;
		}
	}
	{
		String_t* L_20 = V_1;
		int32_t L_21 = Int32_Parse_m1033611559(NULL /*static, unused*/, L_20, /*hidden argument*/NULL);
		return L_21;
	}

IL_005b:
	{
		return (-1);
	}
}
// System.Boolean BlockGameScript::CheckRightLoc(System.Int32)
extern "C"  bool BlockGameScript_CheckRightLoc_m1780145655 (BlockGameScript_t725110519 * __this, int32_t ___num0, const RuntimeMethod* method)
{
	Vector3_t3722313464  V_0;
	memset(&V_0, 0, sizeof(V_0));
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	{
		TransformU5BU5D_t807237628* L_0 = __this->get__blocks_10();
		int32_t L_1 = ___num0;
		NullCheck(L_0);
		int32_t L_2 = L_1;
		Transform_t3600365921 * L_3 = (L_0)->GetAt(static_cast<il2cpp_array_size_t>(L_2));
		NullCheck(L_3);
		Vector3_t3722313464  L_4 = Transform_get_localPosition_m4234289348(L_3, /*hidden argument*/NULL);
		V_0 = L_4;
		float L_5 = __this->get_IMAGE_SIZE_5();
		float L_6 = __this->get_BLOCK_SIZE_7();
		int32_t L_7 = ___num0;
		int32_t L_8 = __this->get_BLOCK_NUM_6();
		V_1 = ((int32_t)il2cpp_codegen_add((int32_t)((int32_t)((int32_t)((int32_t)il2cpp_codegen_multiply((int32_t)(-1), (int32_t)(((int32_t)((int32_t)L_5)))))/(int32_t)2)), (int32_t)((int32_t)il2cpp_codegen_multiply((int32_t)(((int32_t)((int32_t)L_6))), (int32_t)((int32_t)((int32_t)L_7%(int32_t)L_8))))));
		float L_9 = __this->get_IMAGE_SIZE_5();
		float L_10 = __this->get_BLOCK_SIZE_7();
		int32_t L_11 = ___num0;
		int32_t L_12 = __this->get_BLOCK_NUM_6();
		V_2 = ((int32_t)il2cpp_codegen_subtract((int32_t)((int32_t)((int32_t)(((int32_t)((int32_t)L_9)))/(int32_t)2)), (int32_t)((int32_t)il2cpp_codegen_multiply((int32_t)(((int32_t)((int32_t)L_10))), (int32_t)((int32_t)il2cpp_codegen_add((int32_t)((int32_t)((int32_t)L_11/(int32_t)L_12)), (int32_t)1))))));
		float L_13 = (&V_0)->get_x_1();
		int32_t L_14 = V_1;
		if ((!(((float)L_13) == ((float)(((float)((float)L_14)))))))
		{
			goto IL_0066;
		}
	}
	{
		float L_15 = (&V_0)->get_y_2();
		int32_t L_16 = V_2;
		if ((!(((float)L_15) == ((float)(((float)((float)L_16)))))))
		{
			goto IL_0066;
		}
	}
	{
		return (bool)1;
	}

IL_0066:
	{
		return (bool)0;
	}
}
// System.Boolean BlockGameScript::CheckRightLoc(UnityEngine.Transform)
extern "C"  bool BlockGameScript_CheckRightLoc_m3598286481 (BlockGameScript_t725110519 * __this, Transform_t3600365921 * ___t0, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	Vector3_t3722313464  V_1;
	memset(&V_1, 0, sizeof(V_1));
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	{
		Transform_t3600365921 * L_0 = ___t0;
		int32_t L_1 = BlockGameScript_GetObjectNumByGameObject_m2056703641(__this, L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		Transform_t3600365921 * L_2 = ___t0;
		NullCheck(L_2);
		Vector3_t3722313464  L_3 = Transform_get_localPosition_m4234289348(L_2, /*hidden argument*/NULL);
		V_1 = L_3;
		float L_4 = __this->get_IMAGE_SIZE_5();
		float L_5 = __this->get_BLOCK_SIZE_7();
		int32_t L_6 = V_0;
		int32_t L_7 = __this->get_BLOCK_NUM_6();
		V_2 = ((int32_t)il2cpp_codegen_add((int32_t)((int32_t)((int32_t)((int32_t)il2cpp_codegen_multiply((int32_t)(-1), (int32_t)(((int32_t)((int32_t)L_4)))))/(int32_t)2)), (int32_t)((int32_t)il2cpp_codegen_multiply((int32_t)(((int32_t)((int32_t)L_5))), (int32_t)((int32_t)((int32_t)L_6%(int32_t)L_7))))));
		float L_8 = __this->get_IMAGE_SIZE_5();
		float L_9 = __this->get_BLOCK_SIZE_7();
		int32_t L_10 = V_0;
		int32_t L_11 = __this->get_BLOCK_NUM_6();
		V_3 = ((int32_t)il2cpp_codegen_subtract((int32_t)((int32_t)((int32_t)(((int32_t)((int32_t)L_8)))/(int32_t)2)), (int32_t)((int32_t)il2cpp_codegen_multiply((int32_t)(((int32_t)((int32_t)L_9))), (int32_t)((int32_t)il2cpp_codegen_add((int32_t)((int32_t)((int32_t)L_10/(int32_t)L_11)), (int32_t)1))))));
		float L_12 = (&V_1)->get_x_1();
		int32_t L_13 = V_2;
		if ((!(((float)L_12) == ((float)(((float)((float)L_13)))))))
		{
			goto IL_0067;
		}
	}
	{
		float L_14 = (&V_1)->get_y_2();
		int32_t L_15 = V_3;
		if ((!(((float)L_14) == ((float)(((float)((float)L_15)))))))
		{
			goto IL_0067;
		}
	}
	{
		return (bool)1;
	}

IL_0067:
	{
		return (bool)0;
	}
}
// UnityEngine.Vector3 BlockGameScript::GetRightLoc(UnityEngine.Transform)
extern "C"  Vector3_t3722313464  BlockGameScript_GetRightLoc_m2151465700 (BlockGameScript_t725110519 * __this, Transform_t3600365921 * ___t0, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	{
		Transform_t3600365921 * L_0 = ___t0;
		int32_t L_1 = BlockGameScript_GetObjectNumByGameObject_m2056703641(__this, L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		float L_2 = __this->get_IMAGE_SIZE_5();
		float L_3 = __this->get_BLOCK_SIZE_7();
		int32_t L_4 = V_0;
		int32_t L_5 = __this->get_BLOCK_NUM_6();
		V_1 = ((int32_t)il2cpp_codegen_add((int32_t)((int32_t)((int32_t)((int32_t)il2cpp_codegen_multiply((int32_t)(-1), (int32_t)(((int32_t)((int32_t)L_2)))))/(int32_t)2)), (int32_t)((int32_t)il2cpp_codegen_multiply((int32_t)(((int32_t)((int32_t)L_3))), (int32_t)((int32_t)((int32_t)L_4%(int32_t)L_5))))));
		float L_6 = __this->get_IMAGE_SIZE_5();
		float L_7 = __this->get_BLOCK_SIZE_7();
		int32_t L_8 = V_0;
		int32_t L_9 = __this->get_BLOCK_NUM_6();
		V_2 = ((int32_t)il2cpp_codegen_subtract((int32_t)((int32_t)((int32_t)(((int32_t)((int32_t)L_6)))/(int32_t)2)), (int32_t)((int32_t)il2cpp_codegen_multiply((int32_t)(((int32_t)((int32_t)L_7))), (int32_t)((int32_t)il2cpp_codegen_add((int32_t)((int32_t)((int32_t)L_8/(int32_t)L_9)), (int32_t)1))))));
		int32_t L_10 = V_1;
		int32_t L_11 = V_2;
		Vector3_t3722313464  L_12;
		memset(&L_12, 0, sizeof(L_12));
		Vector3__ctor_m3353183577((&L_12), (((float)((float)L_10))), (((float)((float)L_11))), (0.0f), /*hidden argument*/NULL);
		return L_12;
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
// System.Void BlurManager::.ctor()
extern "C"  void BlurManager__ctor_m83848133 (BlurManager_t3192295244 * __this, const RuntimeMethod* method)
{
	{
		MonoBehaviour__ctor_m1579109191(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void BlurManager::Awake()
extern "C"  void BlurManager_Awake_m2390025541 (BlurManager_t3192295244 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (BlurManager_Awake_m2390025541_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		Image_t2670269651 * L_0 = Component_GetComponent_TisImage_t2670269651_m980647750(__this, /*hidden argument*/Component_GetComponent_TisImage_t2670269651_m980647750_RuntimeMethod_var);
		NullCheck(L_0);
		Material_t340375123 * L_1 = VirtFuncInvoker0< Material_t340375123 * >::Invoke(32 /* UnityEngine.Material UnityEngine.UI.Graphic::get_material() */, L_0);
		__this->set_MaterialBlurUI_6(L_1);
		Material_t340375123 * L_2 = __this->get_MaterialBlurUI_6();
		NullCheck(L_2);
		Material_SetFloat_m3226510453(L_2, _stringLiteral1434839863, (0.0f), /*hidden argument*/NULL);
		BlurManager_init_m578986440(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void BlurManager::init()
extern "C"  void BlurManager_init_m578986440 (BlurManager_t3192295244 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (BlurManager_init_m578986440_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		Transform_t3600365921 * L_0 = Component_get_transform_m3162698980(__this, /*hidden argument*/NULL);
		NullCheck(L_0);
		Transform_t3600365921 * L_1 = Transform_GetChild_m1092972975(L_0, 0, /*hidden argument*/NULL);
		NullCheck(L_1);
		Transform_t3600365921 * L_2 = Transform_GetChild_m1092972975(L_1, 0, /*hidden argument*/NULL);
		NullCheck(L_2);
		Text_t1901882714 * L_3 = Component_GetComponent_TisText_t1901882714_m4196288697(L_2, /*hidden argument*/Component_GetComponent_TisText_t1901882714_m4196288697_RuntimeMethod_var);
		__this->set_message_3(L_3);
		Transform_t3600365921 * L_4 = Component_get_transform_m3162698980(__this, /*hidden argument*/NULL);
		NullCheck(L_4);
		Transform_t3600365921 * L_5 = Transform_GetChild_m1092972975(L_4, 0, /*hidden argument*/NULL);
		NullCheck(L_5);
		Transform_t3600365921 * L_6 = Transform_GetChild_m1092972975(L_5, 1, /*hidden argument*/NULL);
		NullCheck(L_6);
		Button_t4055032469 * L_7 = Component_GetComponent_TisButton_t4055032469_m1381873113(L_6, /*hidden argument*/Component_GetComponent_TisButton_t4055032469_m1381873113_RuntimeMethod_var);
		__this->set_confirmButton_4(L_7);
		return;
	}
}
// System.Void BlurManager::setActive(System.Boolean)
extern "C"  void BlurManager_setActive_m2316418442 (BlurManager_t3192295244 * __this, bool ___active0, const RuntimeMethod* method)
{
	{
		Coroutine_t3829159415 * L_0 = __this->get_currentCoroutine_5();
		if (L_0)
		{
			goto IL_0030;
		}
	}
	{
		bool L_1 = ___active0;
		if (!L_1)
		{
			goto IL_001d;
		}
	}
	{
		GameObject_t1113636619 * L_2 = Component_get_gameObject_m442555142(__this, /*hidden argument*/NULL);
		NullCheck(L_2);
		GameObject_SetActive_m796801857(L_2, (bool)1, /*hidden argument*/NULL);
	}

IL_001d:
	{
		bool L_3 = ___active0;
		RuntimeObject* L_4 = BlurManager_setBlur_m4215537649(__this, L_3, /*hidden argument*/NULL);
		Coroutine_t3829159415 * L_5 = MonoBehaviour_StartCoroutine_m3411253000(__this, L_4, /*hidden argument*/NULL);
		__this->set_currentCoroutine_5(L_5);
	}

IL_0030:
	{
		return;
	}
}
// System.Collections.IEnumerator BlurManager::setBlur(System.Boolean)
extern "C"  RuntimeObject* BlurManager_setBlur_m4215537649 (BlurManager_t3192295244 * __this, bool ___active0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (BlurManager_setBlur_m4215537649_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	U3CsetBlurU3Ec__Iterator0_t81185826 * V_0 = NULL;
	{
		U3CsetBlurU3Ec__Iterator0_t81185826 * L_0 = (U3CsetBlurU3Ec__Iterator0_t81185826 *)il2cpp_codegen_object_new(U3CsetBlurU3Ec__Iterator0_t81185826_il2cpp_TypeInfo_var);
		U3CsetBlurU3Ec__Iterator0__ctor_m2354691788(L_0, /*hidden argument*/NULL);
		V_0 = L_0;
		U3CsetBlurU3Ec__Iterator0_t81185826 * L_1 = V_0;
		bool L_2 = ___active0;
		NullCheck(L_1);
		L_1->set_active_0(L_2);
		U3CsetBlurU3Ec__Iterator0_t81185826 * L_3 = V_0;
		NullCheck(L_3);
		L_3->set_U24this_1(__this);
		U3CsetBlurU3Ec__Iterator0_t81185826 * L_4 = V_0;
		return L_4;
	}
}
// System.Void BlurManager::popup(System.String)
extern "C"  void BlurManager_popup_m1373291001 (BlurManager_t3192295244 * __this, String_t* ___msg0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (BlurManager_popup_m1373291001_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		Text_t1901882714 * L_0 = __this->get_message_3();
		IL2CPP_RUNTIME_CLASS_INIT(Object_t631007953_il2cpp_TypeInfo_var);
		bool L_1 = Object_op_Equality_m1810815630(NULL /*static, unused*/, L_0, (Object_t631007953 *)NULL, /*hidden argument*/NULL);
		if (L_1)
		{
			goto IL_0022;
		}
	}
	{
		Button_t4055032469 * L_2 = __this->get_confirmButton_4();
		IL2CPP_RUNTIME_CLASS_INIT(Object_t631007953_il2cpp_TypeInfo_var);
		bool L_3 = Object_op_Equality_m1810815630(NULL /*static, unused*/, L_2, (Object_t631007953 *)NULL, /*hidden argument*/NULL);
		if (!L_3)
		{
			goto IL_0028;
		}
	}

IL_0022:
	{
		BlurManager_init_m578986440(__this, /*hidden argument*/NULL);
	}

IL_0028:
	{
		Text_t1901882714 * L_4 = __this->get_message_3();
		String_t* L_5 = ___msg0;
		NullCheck(L_4);
		VirtActionInvoker1< String_t* >::Invoke(72 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_4, L_5);
		BlurManager_setActive_m2316418442(__this, (bool)1, /*hidden argument*/NULL);
		return;
	}
}
// System.Void BlurManager::popup(System.String,UnityEngine.Events.UnityAction)
extern "C"  void BlurManager_popup_m1972495530 (BlurManager_t3192295244 * __this, String_t* ___msg0, UnityAction_t3245792599 * ___action1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (BlurManager_popup_m1972495530_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		Text_t1901882714 * L_0 = __this->get_message_3();
		IL2CPP_RUNTIME_CLASS_INIT(Object_t631007953_il2cpp_TypeInfo_var);
		bool L_1 = Object_op_Equality_m1810815630(NULL /*static, unused*/, L_0, (Object_t631007953 *)NULL, /*hidden argument*/NULL);
		if (L_1)
		{
			goto IL_0022;
		}
	}
	{
		Button_t4055032469 * L_2 = __this->get_confirmButton_4();
		IL2CPP_RUNTIME_CLASS_INIT(Object_t631007953_il2cpp_TypeInfo_var);
		bool L_3 = Object_op_Equality_m1810815630(NULL /*static, unused*/, L_2, (Object_t631007953 *)NULL, /*hidden argument*/NULL);
		if (!L_3)
		{
			goto IL_0028;
		}
	}

IL_0022:
	{
		BlurManager_init_m578986440(__this, /*hidden argument*/NULL);
	}

IL_0028:
	{
		UnityAction_t3245792599 * L_4 = __this->get_confirmAction_9();
		if (!L_4)
		{
			goto IL_0049;
		}
	}
	{
		Button_t4055032469 * L_5 = __this->get_confirmButton_4();
		NullCheck(L_5);
		ButtonClickedEvent_t48803504 * L_6 = Button_get_onClick_m2332132945(L_5, /*hidden argument*/NULL);
		UnityAction_t3245792599 * L_7 = __this->get_confirmAction_9();
		NullCheck(L_6);
		UnityEvent_RemoveListener_m2514219280(L_6, L_7, /*hidden argument*/NULL);
	}

IL_0049:
	{
		Button_t4055032469 * L_8 = __this->get_confirmButton_4();
		NullCheck(L_8);
		ButtonClickedEvent_t48803504 * L_9 = Button_get_onClick_m2332132945(L_8, /*hidden argument*/NULL);
		UnityAction_t3245792599 * L_10 = ___action1;
		NullCheck(L_9);
		UnityEvent_AddListener_m2276267359(L_9, L_10, /*hidden argument*/NULL);
		UnityAction_t3245792599 * L_11 = ___action1;
		__this->set_confirmAction_9(L_11);
		Text_t1901882714 * L_12 = __this->get_message_3();
		String_t* L_13 = ___msg0;
		NullCheck(L_12);
		VirtActionInvoker1< String_t* >::Invoke(72 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_12, L_13);
		BlurManager_setActive_m2316418442(__this, (bool)1, /*hidden argument*/NULL);
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
// System.Void BlurManager/<setBlur>c__Iterator0::.ctor()
extern "C"  void U3CsetBlurU3Ec__Iterator0__ctor_m2354691788 (U3CsetBlurU3Ec__Iterator0_t81185826 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m297566312(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Boolean BlurManager/<setBlur>c__Iterator0::MoveNext()
extern "C"  bool U3CsetBlurU3Ec__Iterator0_MoveNext_m1723014083 (U3CsetBlurU3Ec__Iterator0_t81185826 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (U3CsetBlurU3Ec__Iterator0_MoveNext_m1723014083_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	uint32_t V_0 = 0;
	{
		int32_t L_0 = __this->get_U24PC_4();
		V_0 = L_0;
		__this->set_U24PC_4((-1));
		uint32_t L_1 = V_0;
		switch (L_1)
		{
			case 0:
			{
				goto IL_0025;
			}
			case 1:
			{
				goto IL_00b2;
			}
			case 2:
			{
				goto IL_0177;
			}
		}
	}
	{
		goto IL_01b5;
	}

IL_0025:
	{
		bool L_2 = __this->get_active_0();
		if (!L_2)
		{
			goto IL_00cc;
		}
	}
	{
		goto IL_00b2;
	}

IL_0035:
	{
		BlurManager_t3192295244 * L_3 = __this->get_U24this_1();
		BlurManager_t3192295244 * L_4 = L_3;
		NullCheck(L_4);
		float L_5 = L_4->get_blurSize_8();
		float L_6 = Time_get_deltaTime_m372706562(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_4);
		L_4->set_blurSize_8(((float)il2cpp_codegen_add((float)L_5, (float)((float)il2cpp_codegen_multiply((float)L_6, (float)(50.0f))))));
		BlurManager_t3192295244 * L_7 = __this->get_U24this_1();
		NullCheck(L_7);
		float L_8 = L_7->get_blurSize_8();
		if ((!(((float)L_8) > ((float)(10.0f)))))
		{
			goto IL_0077;
		}
	}
	{
		BlurManager_t3192295244 * L_9 = __this->get_U24this_1();
		NullCheck(L_9);
		L_9->set_blurSize_8((10.0f));
	}

IL_0077:
	{
		BlurManager_t3192295244 * L_10 = __this->get_U24this_1();
		NullCheck(L_10);
		Material_t340375123 * L_11 = L_10->get_MaterialBlurUI_6();
		BlurManager_t3192295244 * L_12 = __this->get_U24this_1();
		NullCheck(L_12);
		float L_13 = L_12->get_blurSize_8();
		NullCheck(L_11);
		Material_SetFloat_m3226510453(L_11, _stringLiteral1434839863, L_13, /*hidden argument*/NULL);
		__this->set_U24current_2(NULL);
		bool L_14 = __this->get_U24disposing_3();
		if (L_14)
		{
			goto IL_00ad;
		}
	}
	{
		__this->set_U24PC_4(1);
	}

IL_00ad:
	{
		goto IL_01b7;
	}

IL_00b2:
	{
		BlurManager_t3192295244 * L_15 = __this->get_U24this_1();
		NullCheck(L_15);
		float L_16 = L_15->get_blurSize_8();
		if ((((float)L_16) < ((float)(10.0f))))
		{
			goto IL_0035;
		}
	}
	{
		goto IL_018c;
	}

IL_00cc:
	{
		goto IL_0177;
	}

IL_00d1:
	{
		BlurManager_t3192295244 * L_17 = __this->get_U24this_1();
		BlurManager_t3192295244 * L_18 = L_17;
		NullCheck(L_18);
		float L_19 = L_18->get_blurSize_8();
		float L_20 = Time_get_deltaTime_m372706562(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_18);
		L_18->set_blurSize_8(((float)il2cpp_codegen_subtract((float)L_19, (float)((float)il2cpp_codegen_multiply((float)L_20, (float)(50.0f))))));
		BlurManager_t3192295244 * L_21 = __this->get_U24this_1();
		NullCheck(L_21);
		float L_22 = L_21->get_blurSize_8();
		if ((!(((float)L_22) <= ((float)(0.0f)))))
		{
			goto IL_013c;
		}
	}
	{
		BlurManager_t3192295244 * L_23 = __this->get_U24this_1();
		NullCheck(L_23);
		L_23->set_blurSize_8((0.0f));
		BlurManager_t3192295244 * L_24 = __this->get_U24this_1();
		NullCheck(L_24);
		GameObject_t1113636619 * L_25 = L_24->get_mainBack_2();
		NullCheck(L_25);
		Transform_t3600365921 * L_26 = GameObject_get_transform_m1369836730(L_25, /*hidden argument*/NULL);
		NullCheck(L_26);
		Transform_Rotate_m3172098886(L_26, (180.0f), (0.0f), (0.0f), /*hidden argument*/NULL);
		Canvas_ForceUpdateCanvases_m3151644478(NULL /*static, unused*/, /*hidden argument*/NULL);
	}

IL_013c:
	{
		BlurManager_t3192295244 * L_27 = __this->get_U24this_1();
		NullCheck(L_27);
		Material_t340375123 * L_28 = L_27->get_MaterialBlurUI_6();
		BlurManager_t3192295244 * L_29 = __this->get_U24this_1();
		NullCheck(L_29);
		float L_30 = L_29->get_blurSize_8();
		NullCheck(L_28);
		Material_SetFloat_m3226510453(L_28, _stringLiteral1434839863, L_30, /*hidden argument*/NULL);
		__this->set_U24current_2(NULL);
		bool L_31 = __this->get_U24disposing_3();
		if (L_31)
		{
			goto IL_0172;
		}
	}
	{
		__this->set_U24PC_4(2);
	}

IL_0172:
	{
		goto IL_01b7;
	}

IL_0177:
	{
		BlurManager_t3192295244 * L_32 = __this->get_U24this_1();
		NullCheck(L_32);
		float L_33 = L_32->get_blurSize_8();
		if ((((float)L_33) > ((float)(0.0f))))
		{
			goto IL_00d1;
		}
	}

IL_018c:
	{
		BlurManager_t3192295244 * L_34 = __this->get_U24this_1();
		NullCheck(L_34);
		L_34->set_currentCoroutine_5((Coroutine_t3829159415 *)NULL);
		BlurManager_t3192295244 * L_35 = __this->get_U24this_1();
		NullCheck(L_35);
		GameObject_t1113636619 * L_36 = Component_get_gameObject_m442555142(L_35, /*hidden argument*/NULL);
		bool L_37 = __this->get_active_0();
		NullCheck(L_36);
		GameObject_SetActive_m796801857(L_36, L_37, /*hidden argument*/NULL);
		__this->set_U24PC_4((-1));
	}

IL_01b5:
	{
		return (bool)0;
	}

IL_01b7:
	{
		return (bool)1;
	}
}
// System.Object BlurManager/<setBlur>c__Iterator0::System.Collections.Generic.IEnumerator<object>.get_Current()
extern "C"  RuntimeObject * U3CsetBlurU3Ec__Iterator0_System_Collections_Generic_IEnumeratorU3CobjectU3E_get_Current_m3937194320 (U3CsetBlurU3Ec__Iterator0_t81185826 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U24current_2();
		return L_0;
	}
}
// System.Object BlurManager/<setBlur>c__Iterator0::System.Collections.IEnumerator.get_Current()
extern "C"  RuntimeObject * U3CsetBlurU3Ec__Iterator0_System_Collections_IEnumerator_get_Current_m1966292592 (U3CsetBlurU3Ec__Iterator0_t81185826 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U24current_2();
		return L_0;
	}
}
// System.Void BlurManager/<setBlur>c__Iterator0::Dispose()
extern "C"  void U3CsetBlurU3Ec__Iterator0_Dispose_m1217033233 (U3CsetBlurU3Ec__Iterator0_t81185826 * __this, const RuntimeMethod* method)
{
	{
		__this->set_U24disposing_3((bool)1);
		__this->set_U24PC_4((-1));
		return;
	}
}
// System.Void BlurManager/<setBlur>c__Iterator0::Reset()
extern "C"  void U3CsetBlurU3Ec__Iterator0_Reset_m3336450304 (U3CsetBlurU3Ec__Iterator0_t81185826 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (U3CsetBlurU3Ec__Iterator0_Reset_m3336450304_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		NotSupportedException_t1314879016 * L_0 = (NotSupportedException_t1314879016 *)il2cpp_codegen_object_new(NotSupportedException_t1314879016_il2cpp_TypeInfo_var);
		NotSupportedException__ctor_m2730133172(L_0, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, NULL, U3CsetBlurU3Ec__Iterator0_Reset_m3336450304_RuntimeMethod_var);
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
// System.Void DontDestroyManager::.ctor()
extern "C"  void DontDestroyManager__ctor_m2105571167 (DontDestroyManager_t1329034447 * __this, const RuntimeMethod* method)
{
	{
		MonoBehaviour__ctor_m1579109191(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void DontDestroyManager::Awake()
extern "C"  void DontDestroyManager_Awake_m3573776678 (DontDestroyManager_t1329034447 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (DontDestroyManager_Awake_m3573776678_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	StringU5BU5D_t1281789340* V_0 = NULL;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	RuntimeObject* V_3 = NULL;
	RuntimeObject* V_4 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		GameObject_t1113636619 * L_0 = Component_get_gameObject_m442555142(__this, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_t631007953_il2cpp_TypeInfo_var);
		Object_DontDestroyOnLoad_m166252750(NULL /*static, unused*/, L_0, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(GameManager_t1536523654_il2cpp_TypeInfo_var);
		GameManager_t1536523654 * L_1 = GameManager_GetInstance_m367300771(NULL /*static, unused*/, /*hidden argument*/NULL);
		__this->set__game_manager_2(L_1);
		int32_t L_2 = PlayerPrefs_GetInt_m1299643124(NULL /*static, unused*/, _stringLiteral2732960973, 0, /*hidden argument*/NULL);
		((DontDestroyManager_t1329034447_StaticFields*)il2cpp_codegen_static_fields_for(DontDestroyManager_t1329034447_il2cpp_TypeInfo_var))->set__soul_num_3(L_2);
		int32_t L_3 = ((DontDestroyManager_t1329034447_StaticFields*)il2cpp_codegen_static_fields_for(DontDestroyManager_t1329034447_il2cpp_TypeInfo_var))->get__soul_num_3();
		int32_t L_4 = L_3;
		RuntimeObject * L_5 = Box(Int32_t2950945753_il2cpp_TypeInfo_var, &L_4);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_6 = String_Concat_m904156431(NULL /*static, unused*/, _stringLiteral2394213907, L_5, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Debug_t3317548046_il2cpp_TypeInfo_var);
		Debug_Log_m4051431634(NULL /*static, unused*/, L_6, /*hidden argument*/NULL);
		RuntimeTypeHandle_t3027515415  L_7 = { reinterpret_cast<intptr_t> (BoardPrefabName_t3868180495_0_0_0_var) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_8 = Type_GetTypeFromHandle_m1620074514(NULL /*static, unused*/, L_7, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Enum_t4135868527_il2cpp_TypeInfo_var);
		StringU5BU5D_t1281789340* L_9 = Enum_GetNames_m2200571060(NULL /*static, unused*/, L_8, /*hidden argument*/NULL);
		V_0 = L_9;
		StringU5BU5D_t1281789340* L_10 = V_0;
		NullCheck(L_10);
		((DontDestroyManager_t1329034447_StaticFields*)il2cpp_codegen_static_fields_for(DontDestroyManager_t1329034447_il2cpp_TypeInfo_var))->set_pictures_4(((StringU5BU5D_t1281789340*)SZArrayNew(StringU5BU5D_t1281789340_il2cpp_TypeInfo_var, (uint32_t)(((int32_t)((int32_t)(((RuntimeArray *)L_10)->max_length)))))));
		V_1 = 0;
		goto IL_0083;
	}

IL_0063:
	{
		StringU5BU5D_t1281789340* L_11 = V_0;
		int32_t L_12 = V_1;
		NullCheck(L_11);
		int32_t L_13 = L_12;
		String_t* L_14 = (L_11)->GetAt(static_cast<il2cpp_array_size_t>(L_13));
		bool L_15 = PlayerPrefs_HasKey_m2794939670(NULL /*static, unused*/, L_14, /*hidden argument*/NULL);
		if (!L_15)
		{
			goto IL_007f;
		}
	}
	{
		StringU5BU5D_t1281789340* L_16 = ((DontDestroyManager_t1329034447_StaticFields*)il2cpp_codegen_static_fields_for(DontDestroyManager_t1329034447_il2cpp_TypeInfo_var))->get_pictures_4();
		int32_t L_17 = V_1;
		StringU5BU5D_t1281789340* L_18 = V_0;
		int32_t L_19 = V_1;
		NullCheck(L_18);
		int32_t L_20 = L_19;
		String_t* L_21 = (L_18)->GetAt(static_cast<il2cpp_array_size_t>(L_20));
		String_t* L_22 = PlayerPrefs_GetString_m389913383(NULL /*static, unused*/, L_21, /*hidden argument*/NULL);
		NullCheck(L_16);
		ArrayElementTypeCheck (L_16, L_22);
		(L_16)->SetAt(static_cast<il2cpp_array_size_t>(L_17), (String_t*)L_22);
	}

IL_007f:
	{
		int32_t L_23 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_23, (int32_t)1));
	}

IL_0083:
	{
		int32_t L_24 = V_1;
		StringU5BU5D_t1281789340* L_25 = V_0;
		NullCheck(L_25);
		if ((((int32_t)L_24) < ((int32_t)(((int32_t)((int32_t)(((RuntimeArray *)L_25)->max_length)))))))
		{
			goto IL_0063;
		}
	}
	{
		RuntimeTypeHandle_t3027515415  L_26 = { reinterpret_cast<intptr_t> (BoardPrefabName_t3868180495_0_0_0_var) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_27 = Type_GetTypeFromHandle_m1620074514(NULL /*static, unused*/, L_26, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Enum_t4135868527_il2cpp_TypeInfo_var);
		RuntimeArray * L_28 = Enum_GetValues_m4192343468(NULL /*static, unused*/, L_27, /*hidden argument*/NULL);
		NullCheck(L_28);
		RuntimeObject* L_29 = Array_GetEnumerator_m4277730612(L_28, /*hidden argument*/NULL);
		V_3 = L_29;
	}

IL_00a1:
	try
	{ // begin try (depth: 1)
		{
			goto IL_00c5;
		}

IL_00a6:
		{
			RuntimeObject* L_30 = V_3;
			NullCheck(L_30);
			RuntimeObject * L_31 = InterfaceFuncInvoker0< RuntimeObject * >::Invoke(0 /* System.Object System.Collections.IEnumerator::get_Current() */, IEnumerator_t1853284238_il2cpp_TypeInfo_var, L_30);
			V_2 = ((*(int32_t*)((int32_t*)UnBox(L_31, BoardPrefabName_t3868180495_il2cpp_TypeInfo_var))));
			RuntimeObject * L_32 = Box(BoardPrefabName_t3868180495_il2cpp_TypeInfo_var, (&V_2));
			NullCheck(L_32);
			String_t* L_33 = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_32);
			V_2 = *(int32_t*)UnBox(L_32);
			PlayerPrefs_GetString_m389913383(NULL /*static, unused*/, L_33, /*hidden argument*/NULL);
		}

IL_00c5:
		{
			RuntimeObject* L_34 = V_3;
			NullCheck(L_34);
			bool L_35 = InterfaceFuncInvoker0< bool >::Invoke(1 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t1853284238_il2cpp_TypeInfo_var, L_34);
			if (L_35)
			{
				goto IL_00a6;
			}
		}

IL_00d0:
		{
			IL2CPP_LEAVE(0xEB, FINALLY_00d5);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_00d5;
	}

FINALLY_00d5:
	{ // begin finally (depth: 1)
		{
			RuntimeObject* L_36 = V_3;
			RuntimeObject* L_37 = ((RuntimeObject*)IsInst((RuntimeObject*)L_36, IDisposable_t3640265483_il2cpp_TypeInfo_var));
			V_4 = L_37;
			if (!L_37)
			{
				goto IL_00ea;
			}
		}

IL_00e3:
		{
			RuntimeObject* L_38 = V_4;
			NullCheck(L_38);
			InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t3640265483_il2cpp_TypeInfo_var, L_38);
		}

IL_00ea:
		{
			IL2CPP_END_FINALLY(213)
		}
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(213)
	{
		IL2CPP_JUMP_TBL(0xEB, IL_00eb)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
	}

IL_00eb:
	{
		LocalizeTool_loadLocalizeString_m3512941887(NULL /*static, unused*/, /*hidden argument*/NULL);
		SocialTool_t1909827527 * L_39 = (SocialTool_t1909827527 *)il2cpp_codegen_object_new(SocialTool_t1909827527_il2cpp_TypeInfo_var);
		SocialTool__ctor_m3886541085(L_39, /*hidden argument*/NULL);
		__this->set_socialTool_6(L_39);
		return;
	}
}
// System.Void DontDestroyManager::Start()
extern "C"  void DontDestroyManager_Start_m2646180839 (DontDestroyManager_t1329034447 * __this, const RuntimeMethod* method)
{
	{
		return;
	}
}
// System.Void DontDestroyManager::Update()
extern "C"  void DontDestroyManager_Update_m3591274637 (DontDestroyManager_t1329034447 * __this, const RuntimeMethod* method)
{
	{
		return;
	}
}
// System.Void DontDestroyManager::OnDestroy()
extern "C"  void DontDestroyManager_OnDestroy_m2029575117 (DontDestroyManager_t1329034447 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (DontDestroyManager_OnDestroy_m2029575117_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		int32_t L_0 = ((DontDestroyManager_t1329034447_StaticFields*)il2cpp_codegen_static_fields_for(DontDestroyManager_t1329034447_il2cpp_TypeInfo_var))->get__soul_num_3();
		PlayerPrefs_SetInt_m2842000469(NULL /*static, unused*/, _stringLiteral2732960973, L_0, /*hidden argument*/NULL);
		int32_t L_1 = ((DontDestroyManager_t1329034447_StaticFields*)il2cpp_codegen_static_fields_for(DontDestroyManager_t1329034447_il2cpp_TypeInfo_var))->get__soul_num_3();
		int32_t L_2 = L_1;
		RuntimeObject * L_3 = Box(Int32_t2950945753_il2cpp_TypeInfo_var, &L_2);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_4 = String_Concat_m904156431(NULL /*static, unused*/, _stringLiteral948284475, L_3, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Debug_t3317548046_il2cpp_TypeInfo_var);
		Debug_Log_m4051431634(NULL /*static, unused*/, L_4, /*hidden argument*/NULL);
		return;
	}
}
// System.Int32 DontDestroyManager::GetSoulNum()
extern "C"  int32_t DontDestroyManager_GetSoulNum_m1644499173 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (DontDestroyManager_GetSoulNum_m1644499173_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		int32_t L_0 = ((DontDestroyManager_t1329034447_StaticFields*)il2cpp_codegen_static_fields_for(DontDestroyManager_t1329034447_il2cpp_TypeInfo_var))->get__soul_num_3();
		return L_0;
	}
}
// System.Void DontDestroyManager::SetSoulNum(System.Int32)
extern "C"  void DontDestroyManager_SetSoulNum_m3127869396 (RuntimeObject * __this /* static, unused */, int32_t ___i0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (DontDestroyManager_SetSoulNum_m3127869396_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		int32_t L_0 = ___i0;
		((DontDestroyManager_t1329034447_StaticFields*)il2cpp_codegen_static_fields_for(DontDestroyManager_t1329034447_il2cpp_TypeInfo_var))->set__soul_num_3(L_0);
		return;
	}
}
// System.Void DontDestroyManager::SetCompletePicture(BoardPrefabName)
extern "C"  void DontDestroyManager_SetCompletePicture_m895209823 (RuntimeObject * __this /* static, unused */, int32_t ___board0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (DontDestroyManager_SetCompletePicture_m895209823_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	{
		RuntimeObject * L_0 = Box(BoardPrefabName_t3868180495_il2cpp_TypeInfo_var, (&___board0));
		NullCheck(L_0);
		String_t* L_1 = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_0);
		___board0 = *(int32_t*)UnBox(L_0);
		V_0 = L_1;
		RuntimeObject * L_2 = Box(BoardPrefabName_t3868180495_il2cpp_TypeInfo_var, (&___board0));
		NullCheck(L_2);
		String_t* L_3 = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_2);
		___board0 = *(int32_t*)UnBox(L_2);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_4 = String_Concat_m3937257545(NULL /*static, unused*/, _stringLiteral3057220066, L_3, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Debug_t3317548046_il2cpp_TypeInfo_var);
		Debug_Log_m4051431634(NULL /*static, unused*/, L_4, /*hidden argument*/NULL);
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
// System.Void DragGalleryContentScript::.ctor()
extern "C"  void DragGalleryContentScript__ctor_m1517201559 (DragGalleryContentScript_t2491726244 * __this, const RuntimeMethod* method)
{
	{
		__this->set_DRAG_DISTANCE_3((175.0f));
		__this->set_MOVE_SPEED_4((0.135f));
		__this->set_HORIZONTAL_NUM_5(2);
		__this->set_VERTICAL_NUM_6(3);
		MonoBehaviour__ctor_m1579109191(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void DragGalleryContentScript::Awake()
extern "C"  void DragGalleryContentScript_Awake_m2828673924 (DragGalleryContentScript_t2491726244 * __this, const RuntimeMethod* method)
{
	{
		bool L_0 = __this->get_isInit_15();
		if (L_0)
		{
			goto IL_0011;
		}
	}
	{
		DragGalleryContentScript_init_m1389459019(__this, /*hidden argument*/NULL);
	}

IL_0011:
	{
		return;
	}
}
// System.Void DragGalleryContentScript::init()
extern "C"  void DragGalleryContentScript_init_m1389459019 (DragGalleryContentScript_t2491726244 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (DragGalleryContentScript_init_m1389459019_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		GameObject_t1113636619 * L_0 = GameObject_Find_m2032535176(NULL /*static, unused*/, _stringLiteral3675739884, /*hidden argument*/NULL);
		NullCheck(L_0);
		MainSceneManager_t2603182452 * L_1 = GameObject_GetComponent_TisMainSceneManager_t2603182452_m1706813279(L_0, /*hidden argument*/GameObject_GetComponent_TisMainSceneManager_t2603182452_m1706813279_RuntimeMethod_var);
		__this->set_main_scene_manager_2(L_1);
		Transform_t3600365921 * L_2 = Component_get_transform_m3162698980(__this, /*hidden argument*/NULL);
		NullCheck(L_2);
		Transform_t3600365921 * L_3 = Transform_get_parent_m835071599(L_2, /*hidden argument*/NULL);
		NullCheck(L_3);
		GameObject_t1113636619 * L_4 = Component_get_gameObject_m442555142(L_3, /*hidden argument*/NULL);
		NullCheck(L_4);
		ScrollRect_t4137855814 * L_5 = GameObject_GetComponent_TisScrollRect_t4137855814_m3217020803(L_4, /*hidden argument*/GameObject_GetComponent_TisScrollRect_t4137855814_m3217020803_RuntimeMethod_var);
		__this->set_scrollRect_8(L_5);
		__this->set_isInit_15((bool)1);
		return;
	}
}
// System.Void DragGalleryContentScript::Update()
extern "C"  void DragGalleryContentScript_Update_m1351736445 (DragGalleryContentScript_t2491726244 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (DragGalleryContentScript_Update_m1351736445_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		MainSceneManager_t2603182452 * L_0 = __this->get_main_scene_manager_2();
		NullCheck(L_0);
		bool L_1 = MainSceneManager_GetPopUpActive_m433334491(L_0, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_0011;
		}
	}
	{
		return;
	}

IL_0011:
	{
		DragGalleryContentScript_SetMouseClickInfo_m593303541(__this, /*hidden argument*/NULL);
		bool L_2 = __this->get__moving_14();
		if (!L_2)
		{
			goto IL_008b;
		}
	}
	{
		ScrollRect_t4137855814 * L_3 = __this->get_scrollRect_8();
		NullCheck(L_3);
		float L_4 = ScrollRect_get_horizontalNormalizedPosition_m2904015963(L_3, /*hidden argument*/NULL);
		float L_5 = __this->get__dest_pos_13();
		IL2CPP_RUNTIME_CLASS_INIT(Mathf_t3464937446_il2cpp_TypeInfo_var);
		float L_6 = fabsf(((float)il2cpp_codegen_subtract((float)L_4, (float)L_5)));
		if ((!(((float)L_6) < ((float)(0.001f)))))
		{
			goto IL_0060;
		}
	}
	{
		ScrollRect_t4137855814 * L_7 = __this->get_scrollRect_8();
		float L_8 = __this->get__dest_pos_13();
		NullCheck(L_7);
		ScrollRect_set_horizontalNormalizedPosition_m1066708424(L_7, L_8, /*hidden argument*/NULL);
		__this->set__moving_14((bool)0);
		goto IL_008b;
	}

IL_0060:
	{
		ScrollRect_t4137855814 * L_9 = __this->get_scrollRect_8();
		ScrollRect_t4137855814 * L_10 = L_9;
		NullCheck(L_10);
		float L_11 = ScrollRect_get_horizontalNormalizedPosition_m2904015963(L_10, /*hidden argument*/NULL);
		float L_12 = __this->get__dest_pos_13();
		ScrollRect_t4137855814 * L_13 = __this->get_scrollRect_8();
		NullCheck(L_13);
		float L_14 = ScrollRect_get_horizontalNormalizedPosition_m2904015963(L_13, /*hidden argument*/NULL);
		float L_15 = __this->get_MOVE_SPEED_4();
		NullCheck(L_10);
		ScrollRect_set_horizontalNormalizedPosition_m1066708424(L_10, ((float)il2cpp_codegen_add((float)L_11, (float)((float)il2cpp_codegen_multiply((float)((float)il2cpp_codegen_subtract((float)L_12, (float)L_14)), (float)L_15)))), /*hidden argument*/NULL);
	}

IL_008b:
	{
		return;
	}
}
// System.Void DragGalleryContentScript::loadGallery()
extern "C"  void DragGalleryContentScript_loadGallery_m634214822 (DragGalleryContentScript_t2491726244 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (DragGalleryContentScript_loadGallery_m634214822_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	SpriteU5BU5D_t2581906349* V_0 = NULL;
	GameObject_t1113636619 * V_1 = NULL;
	List_1_t777473367 * V_2 = NULL;
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	GameObject_t1113636619 * V_5 = NULL;
	StringU5BU5D_t1281789340* V_6 = NULL;
	GameObject_t1113636619 * V_7 = NULL;
	int32_t V_8 = 0;
	Transform_t3600365921 * V_9 = NULL;
	GameObject_t1113636619 * V_10 = NULL;
	int32_t V_11 = 0;
	Image_t2670269651 * V_12 = NULL;
	int32_t G_B4_0 = 0;
	int32_t G_B3_0 = 0;
	int32_t G_B5_0 = 0;
	int32_t G_B5_1 = 0;
	{
		bool L_0 = __this->get_isInit_15();
		if (L_0)
		{
			goto IL_0011;
		}
	}
	{
		DragGalleryContentScript_init_m1389459019(__this, /*hidden argument*/NULL);
	}

IL_0011:
	{
		SpriteU5BU5D_t2581906349* L_1 = Resources_LoadAll_TisSprite_t280657092_m1417587347(NULL /*static, unused*/, _stringLiteral10465875, /*hidden argument*/Resources_LoadAll_TisSprite_t280657092_m1417587347_RuntimeMethod_var);
		V_0 = L_1;
		Object_t631007953 * L_2 = Resources_Load_m3880010804(NULL /*static, unused*/, _stringLiteral3016710712, /*hidden argument*/NULL);
		V_1 = ((GameObject_t1113636619 *)IsInstSealed((RuntimeObject*)L_2, GameObject_t1113636619_il2cpp_TypeInfo_var));
		List_1_t777473367 * L_3 = (List_1_t777473367 *)il2cpp_codegen_object_new(List_1_t777473367_il2cpp_TypeInfo_var);
		List_1__ctor_m2885667311(L_3, /*hidden argument*/List_1__ctor_m2885667311_RuntimeMethod_var);
		V_2 = L_3;
		SpriteU5BU5D_t2581906349* L_4 = V_0;
		NullCheck(L_4);
		int32_t L_5 = __this->get_HORIZONTAL_NUM_5();
		int32_t L_6 = __this->get_VERTICAL_NUM_6();
		SpriteU5BU5D_t2581906349* L_7 = V_0;
		NullCheck(L_7);
		int32_t L_8 = __this->get_HORIZONTAL_NUM_5();
		int32_t L_9 = __this->get_VERTICAL_NUM_6();
		G_B3_0 = ((int32_t)((int32_t)(((int32_t)((int32_t)(((RuntimeArray *)L_4)->max_length))))/(int32_t)((int32_t)il2cpp_codegen_multiply((int32_t)L_5, (int32_t)L_6))));
		if ((((int32_t)((int32_t)((int32_t)(((int32_t)((int32_t)(((RuntimeArray *)L_7)->max_length))))%(int32_t)((int32_t)il2cpp_codegen_multiply((int32_t)L_8, (int32_t)L_9))))) <= ((int32_t)0)))
		{
			G_B4_0 = ((int32_t)((int32_t)(((int32_t)((int32_t)(((RuntimeArray *)L_4)->max_length))))/(int32_t)((int32_t)il2cpp_codegen_multiply((int32_t)L_5, (int32_t)L_6))));
			goto IL_0060;
		}
	}
	{
		G_B5_0 = 1;
		G_B5_1 = G_B3_0;
		goto IL_0061;
	}

IL_0060:
	{
		G_B5_0 = 0;
		G_B5_1 = G_B4_0;
	}

IL_0061:
	{
		V_3 = ((int32_t)il2cpp_codegen_add((int32_t)G_B5_1, (int32_t)G_B5_0));
		V_4 = 0;
		goto IL_00b0;
	}

IL_006b:
	{
		GameObject_t1113636619 * L_10 = V_1;
		IL2CPP_RUNTIME_CLASS_INIT(Object_t631007953_il2cpp_TypeInfo_var);
		GameObject_t1113636619 * L_11 = Object_Instantiate_TisGameObject_t1113636619_m4070250708(NULL /*static, unused*/, L_10, /*hidden argument*/Object_Instantiate_TisGameObject_t1113636619_m4070250708_RuntimeMethod_var);
		V_5 = L_11;
		List_1_t777473367 * L_12 = V_2;
		GameObject_t1113636619 * L_13 = V_5;
		NullCheck(L_13);
		Transform_t3600365921 * L_14 = GameObject_get_transform_m1369836730(L_13, /*hidden argument*/NULL);
		NullCheck(L_12);
		List_1_Add_m4073477735(L_12, L_14, /*hidden argument*/List_1_Add_m4073477735_RuntimeMethod_var);
		GameObject_t1113636619 * L_15 = V_5;
		NullCheck(L_15);
		Transform_t3600365921 * L_16 = GameObject_get_transform_m1369836730(L_15, /*hidden argument*/NULL);
		Transform_t3600365921 * L_17 = Component_get_transform_m3162698980(__this, /*hidden argument*/NULL);
		NullCheck(L_16);
		Transform_SetParent_m381167889(L_16, L_17, /*hidden argument*/NULL);
		GameObject_t1113636619 * L_18 = V_5;
		int32_t L_19 = V_4;
		int32_t L_20 = L_19;
		RuntimeObject * L_21 = Box(Int32_t2950945753_il2cpp_TypeInfo_var, &L_20);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_22 = String_Concat_m904156431(NULL /*static, unused*/, _stringLiteral1581755063, L_21, /*hidden argument*/NULL);
		NullCheck(L_18);
		Object_set_name_m291480324(L_18, L_22, /*hidden argument*/NULL);
		int32_t L_23 = V_4;
		V_4 = ((int32_t)il2cpp_codegen_add((int32_t)L_23, (int32_t)1));
	}

IL_00b0:
	{
		int32_t L_24 = V_4;
		int32_t L_25 = V_3;
		if ((((int32_t)L_24) < ((int32_t)L_25)))
		{
			goto IL_006b;
		}
	}
	{
		Object_t631007953 * L_26 = Resources_Load_m3880010804(NULL /*static, unused*/, _stringLiteral1004216408, /*hidden argument*/NULL);
		V_7 = ((GameObject_t1113636619 *)IsInstSealed((RuntimeObject*)L_26, GameObject_t1113636619_il2cpp_TypeInfo_var));
		V_8 = 0;
		goto IL_01a3;
	}

IL_00d1:
	{
		SpriteU5BU5D_t2581906349* L_27 = V_0;
		int32_t L_28 = V_8;
		NullCheck(L_27);
		int32_t L_29 = L_28;
		Sprite_t280657092 * L_30 = (L_27)->GetAt(static_cast<il2cpp_array_size_t>(L_29));
		NullCheck(L_30);
		String_t* L_31 = Object_get_name_m4211327027(L_30, /*hidden argument*/NULL);
		CharU5BU5D_t3528271667* L_32 = ((CharU5BU5D_t3528271667*)SZArrayNew(CharU5BU5D_t3528271667_il2cpp_TypeInfo_var, (uint32_t)1));
		NullCheck(L_32);
		(L_32)->SetAt(static_cast<il2cpp_array_size_t>(0), (Il2CppChar)((int32_t)95));
		NullCheck(L_31);
		StringU5BU5D_t1281789340* L_33 = String_Split_m3646115398(L_31, L_32, /*hidden argument*/NULL);
		V_6 = L_33;
		List_1_t777473367 * L_34 = V_2;
		int32_t L_35 = V_8;
		int32_t L_36 = __this->get_HORIZONTAL_NUM_5();
		int32_t L_37 = __this->get_VERTICAL_NUM_6();
		NullCheck(L_34);
		Transform_t3600365921 * L_38 = List_1_get_Item_m3022113929(L_34, ((int32_t)((int32_t)L_35/(int32_t)((int32_t)il2cpp_codegen_multiply((int32_t)L_36, (int32_t)L_37)))), /*hidden argument*/List_1_get_Item_m3022113929_RuntimeMethod_var);
		V_9 = L_38;
		GameObject_t1113636619 * L_39 = V_7;
		IL2CPP_RUNTIME_CLASS_INIT(Object_t631007953_il2cpp_TypeInfo_var);
		GameObject_t1113636619 * L_40 = Object_Instantiate_TisGameObject_t1113636619_m4070250708(NULL /*static, unused*/, L_39, /*hidden argument*/Object_Instantiate_TisGameObject_t1113636619_m4070250708_RuntimeMethod_var);
		V_10 = L_40;
		GameObject_t1113636619 * L_41 = V_10;
		NullCheck(L_41);
		Image_t2670269651 * L_42 = GameObject_GetComponent_TisImage_t2670269651_m2486712510(L_41, /*hidden argument*/GameObject_GetComponent_TisImage_t2670269651_m2486712510_RuntimeMethod_var);
		SpriteU5BU5D_t2581906349* L_43 = V_0;
		int32_t L_44 = V_8;
		NullCheck(L_43);
		int32_t L_45 = L_44;
		Sprite_t280657092 * L_46 = (L_43)->GetAt(static_cast<il2cpp_array_size_t>(L_45));
		NullCheck(L_42);
		Image_set_sprite_m2369174689(L_42, L_46, /*hidden argument*/NULL);
		StringU5BU5D_t1281789340* L_47 = V_6;
		NullCheck(L_47);
		int32_t L_48 = 1;
		String_t* L_49 = (L_47)->GetAt(static_cast<il2cpp_array_size_t>(L_48));
		int32_t L_50 = Int32_Parse_m1033611559(NULL /*static, unused*/, L_49, /*hidden argument*/NULL);
		V_11 = L_50;
		GameObject_t1113636619 * L_51 = V_10;
		NullCheck(L_51);
		Transform_t3600365921 * L_52 = GameObject_get_transform_m1369836730(L_51, /*hidden argument*/NULL);
		NullCheck(L_52);
		Transform_t3600365921 * L_53 = Transform_GetChild_m1092972975(L_52, 0, /*hidden argument*/NULL);
		NullCheck(L_53);
		Image_t2670269651 * L_54 = Component_GetComponent_TisImage_t2670269651_m980647750(L_53, /*hidden argument*/Component_GetComponent_TisImage_t2670269651_m980647750_RuntimeMethod_var);
		V_12 = L_54;
		Image_t2670269651 * L_55 = V_12;
		SpriteU5BU5D_t2581906349* L_56 = __this->get_stars_7();
		int32_t L_57 = V_11;
		NullCheck(L_56);
		int32_t L_58 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_57, (int32_t)1));
		Sprite_t280657092 * L_59 = (L_56)->GetAt(static_cast<il2cpp_array_size_t>(L_58));
		NullCheck(L_55);
		Image_set_sprite_m2369174689(L_55, L_59, /*hidden argument*/NULL);
		Image_t2670269651 * L_60 = V_12;
		NullCheck(L_60);
		VirtActionInvoker0::Invoke(44 /* System.Void UnityEngine.UI.Graphic::SetNativeSize() */, L_60);
		GameObject_t1113636619 * L_61 = V_10;
		NullCheck(L_61);
		Transform_t3600365921 * L_62 = GameObject_get_transform_m1369836730(L_61, /*hidden argument*/NULL);
		Transform_t3600365921 * L_63 = V_9;
		NullCheck(L_62);
		Transform_SetParent_m381167889(L_62, L_63, /*hidden argument*/NULL);
		GameObject_t1113636619 * L_64 = V_10;
		NullCheck(L_64);
		Button_t4055032469 * L_65 = GameObject_GetComponent_TisButton_t4055032469_m1515138076(L_64, /*hidden argument*/GameObject_GetComponent_TisButton_t4055032469_m1515138076_RuntimeMethod_var);
		NullCheck(L_65);
		ButtonClickedEvent_t48803504 * L_66 = Button_get_onClick_m2332132945(L_65, /*hidden argument*/NULL);
		MainSceneManager_t2603182452 * L_67 = __this->get_main_scene_manager_2();
		intptr_t L_68 = (intptr_t)MainSceneManager_PlayBoard_m2008684372_RuntimeMethod_var;
		UnityAction_t3245792599 * L_69 = (UnityAction_t3245792599 *)il2cpp_codegen_object_new(UnityAction_t3245792599_il2cpp_TypeInfo_var);
		UnityAction__ctor_m772160306(L_69, L_67, L_68, /*hidden argument*/NULL);
		NullCheck(L_66);
		UnityEvent_AddListener_m2276267359(L_66, L_69, /*hidden argument*/NULL);
		GameObject_t1113636619 * L_70 = V_10;
		int32_t L_71 = V_8;
		int32_t L_72 = L_71;
		RuntimeObject * L_73 = Box(Int32_t2950945753_il2cpp_TypeInfo_var, &L_72);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_74 = String_Concat_m904156431(NULL /*static, unused*/, _stringLiteral199407509, L_73, /*hidden argument*/NULL);
		NullCheck(L_70);
		Object_set_name_m291480324(L_70, L_74, /*hidden argument*/NULL);
		int32_t L_75 = V_8;
		V_8 = ((int32_t)il2cpp_codegen_add((int32_t)L_75, (int32_t)1));
	}

IL_01a3:
	{
		int32_t L_76 = V_8;
		SpriteU5BU5D_t2581906349* L_77 = V_0;
		NullCheck(L_77);
		if ((((int32_t)L_76) < ((int32_t)(((int32_t)((int32_t)(((RuntimeArray *)L_77)->max_length)))))))
		{
			goto IL_00d1;
		}
	}
	{
		List_1_t777473367 * L_78 = V_2;
		NullCheck(L_78);
		int32_t L_79 = List_1_get_Count_m3787308655(L_78, /*hidden argument*/List_1_get_Count_m3787308655_RuntimeMethod_var);
		__this->set__total_page_num_10(L_79);
		__this->set__now_page_num_9(1);
		ScrollRect_t4137855814 * L_80 = __this->get_scrollRect_8();
		NullCheck(L_80);
		ScrollRect_set_horizontalNormalizedPosition_m1066708424(L_80, (0.0f), /*hidden argument*/NULL);
		return;
	}
}
// System.Void DragGalleryContentScript::SetMouseClickInfo()
extern "C"  void DragGalleryContentScript_SetMouseClickInfo_m593303541 (DragGalleryContentScript_t2491726244 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (DragGalleryContentScript_SetMouseClickInfo_m593303541_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Input_t1431474628_il2cpp_TypeInfo_var);
		bool L_0 = Input_GetMouseButtonDown_m2081676745(NULL /*static, unused*/, 0, /*hidden argument*/NULL);
		if (!L_0)
		{
			goto IL_0022;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Input_t1431474628_il2cpp_TypeInfo_var);
		Vector3_t3722313464  L_1 = Input_get_mousePosition_m1616496925(NULL /*static, unused*/, /*hidden argument*/NULL);
		__this->set__mouse_down_pos_11(L_1);
		__this->set__moving_14((bool)0);
		goto IL_00e4;
	}

IL_0022:
	{
		IL2CPP_RUNTIME_CLASS_INIT(Input_t1431474628_il2cpp_TypeInfo_var);
		bool L_2 = Input_GetMouseButtonUp_m2924350851(NULL /*static, unused*/, 0, /*hidden argument*/NULL);
		if (!L_2)
		{
			goto IL_00e4;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Input_t1431474628_il2cpp_TypeInfo_var);
		Vector3_t3722313464  L_3 = Input_get_mousePosition_m1616496925(NULL /*static, unused*/, /*hidden argument*/NULL);
		__this->set__mouse_up_pos_12(L_3);
		Vector3_t3722313464 * L_4 = __this->get_address_of__mouse_down_pos_11();
		float L_5 = L_4->get_x_1();
		Vector3_t3722313464 * L_6 = __this->get_address_of__mouse_up_pos_12();
		float L_7 = L_6->get_x_1();
		IL2CPP_RUNTIME_CLASS_INIT(Mathf_t3464937446_il2cpp_TypeInfo_var);
		float L_8 = fabsf(((float)il2cpp_codegen_subtract((float)L_5, (float)L_7)));
		float L_9 = __this->get_DRAG_DISTANCE_3();
		if ((!(((float)L_8) >= ((float)L_9))))
		{
			goto IL_00de;
		}
	}
	{
		Vector3_t3722313464 * L_10 = __this->get_address_of__mouse_down_pos_11();
		float L_11 = L_10->get_x_1();
		Vector3_t3722313464 * L_12 = __this->get_address_of__mouse_up_pos_12();
		float L_13 = L_12->get_x_1();
		if ((!(((float)L_11) < ((float)L_13))))
		{
			goto IL_00ac;
		}
	}
	{
		int32_t L_14 = __this->get__now_page_num_9();
		if ((((int32_t)L_14) > ((int32_t)1)))
		{
			goto IL_0087;
		}
	}
	{
		return;
	}

IL_0087:
	{
		int32_t L_15 = __this->get__now_page_num_9();
		__this->set__now_page_num_9(((int32_t)il2cpp_codegen_subtract((int32_t)L_15, (int32_t)1)));
		MainSceneManager_t2603182452 * L_16 = __this->get_main_scene_manager_2();
		int32_t L_17 = __this->get__now_page_num_9();
		NullCheck(L_16);
		MainSceneManager_SetDotImage_m1812060552(L_16, L_17, (bool)1, /*hidden argument*/NULL);
		goto IL_00de;
	}

IL_00ac:
	{
		int32_t L_18 = __this->get__now_page_num_9();
		int32_t L_19 = __this->get__total_page_num_10();
		if ((((int32_t)L_18) < ((int32_t)L_19)))
		{
			goto IL_00be;
		}
	}
	{
		return;
	}

IL_00be:
	{
		int32_t L_20 = __this->get__now_page_num_9();
		__this->set__now_page_num_9(((int32_t)il2cpp_codegen_add((int32_t)L_20, (int32_t)1)));
		MainSceneManager_t2603182452 * L_21 = __this->get_main_scene_manager_2();
		int32_t L_22 = __this->get__now_page_num_9();
		NullCheck(L_21);
		MainSceneManager_SetDotImage_m1812060552(L_21, L_22, (bool)0, /*hidden argument*/NULL);
	}

IL_00de:
	{
		DragGalleryContentScript_SetMovePosition_m2351775031(__this, /*hidden argument*/NULL);
	}

IL_00e4:
	{
		return;
	}
}
// System.Void DragGalleryContentScript::SetMovePosition()
extern "C"  void DragGalleryContentScript_SetMovePosition_m2351775031 (DragGalleryContentScript_t2491726244 * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = __this->get__total_page_num_10();
		int32_t L_1 = __this->get__now_page_num_9();
		__this->set__dest_pos_13(((float)il2cpp_codegen_multiply((float)((float)((float)(1.0f)/(float)(((float)((float)((int32_t)il2cpp_codegen_subtract((int32_t)L_0, (int32_t)1))))))), (float)(((float)((float)((int32_t)il2cpp_codegen_subtract((int32_t)L_1, (int32_t)1))))))));
		__this->set__moving_14((bool)1);
		return;
	}
}
// System.Void DragGalleryContentScript::SetDirectPage()
extern "C"  void DragGalleryContentScript_SetDirectPage_m1764594248 (DragGalleryContentScript_t2491726244 * __this, const RuntimeMethod* method)
{
	{
		ScrollRect_t4137855814 * L_0 = __this->get_scrollRect_8();
		int32_t L_1 = __this->get__total_page_num_10();
		int32_t L_2 = __this->get__now_page_num_9();
		NullCheck(L_0);
		ScrollRect_set_horizontalNormalizedPosition_m1066708424(L_0, (((float)((float)((int32_t)il2cpp_codegen_multiply((int32_t)((int32_t)((int32_t)1/(int32_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_1, (int32_t)1)))), (int32_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_2, (int32_t)1))))))), /*hidden argument*/NULL);
		return;
	}
}
// System.Int32 DragGalleryContentScript::GetTotalPageNum()
extern "C"  int32_t DragGalleryContentScript_GetTotalPageNum_m3965472721 (DragGalleryContentScript_t2491726244 * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = __this->get__total_page_num_10();
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
// System.Void FixedScreen::.ctor()
extern "C"  void FixedScreen__ctor_m3520842310 (FixedScreen_t1471317904 * __this, const RuntimeMethod* method)
{
	{
		MonoBehaviour__ctor_m1579109191(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void FixedScreen::Awake()
extern "C"  void FixedScreen_Awake_m2880025646 (FixedScreen_t1471317904 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (FixedScreen_Awake_m2880025646_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		Screen_SetResolution_m875896249(NULL /*static, unused*/, ((int32_t)700), ((int32_t)1200), (bool)1, /*hidden argument*/NULL);
		Application_set_targetFrameRate_m3682352535(NULL /*static, unused*/, ((int32_t)60), /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Input_t1431474628_il2cpp_TypeInfo_var);
		Input_set_multiTouchEnabled_m990237339(NULL /*static, unused*/, (bool)0, /*hidden argument*/NULL);
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
// System.Void GameManager::.ctor()
extern "C"  void GameManager__ctor_m180891015 (GameManager_t1536523654 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (GameManager__ctor_m180891015_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		Int32U5BU5D_t385246372* L_0 = ((Int32U5BU5D_t385246372*)SZArrayNew(Int32U5BU5D_t385246372_il2cpp_TypeInfo_var, (uint32_t)((int32_t)12)));
		RuntimeFieldHandle_t1871169219  L_1 = { reinterpret_cast<intptr_t> (U3CPrivateImplementationDetailsU3E_t3057255367____U24fieldU2D231C96DC27FE3072E9C6324B0CD546829BDF4785_0_FieldInfo_var) };
		RuntimeHelpers_InitializeArray_m3117905507(NULL /*static, unused*/, (RuntimeArray *)(RuntimeArray *)L_0, L_1, /*hidden argument*/NULL);
		__this->set_BoardPrefabSize_1(L_0);
		__this->set_BoardPrefabState_2(((StringU5BU5D_t1281789340*)SZArrayNew(StringU5BU5D_t1281789340_il2cpp_TypeInfo_var, (uint32_t)((int32_t)24))));
		Object__ctor_m297566312(__this, /*hidden argument*/NULL);
		return;
	}
}
// GameManager GameManager::GetInstance()
extern "C"  GameManager_t1536523654 * GameManager_GetInstance_m367300771 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (GameManager_GetInstance_m367300771_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(GameManager_t1536523654_il2cpp_TypeInfo_var);
		GameManager_t1536523654 * L_0 = ((GameManager_t1536523654_StaticFields*)il2cpp_codegen_static_fields_for(GameManager_t1536523654_il2cpp_TypeInfo_var))->get__instance_3();
		if (L_0)
		{
			goto IL_0014;
		}
	}
	{
		GameManager_t1536523654 * L_1 = (GameManager_t1536523654 *)il2cpp_codegen_object_new(GameManager_t1536523654_il2cpp_TypeInfo_var);
		GameManager__ctor_m180891015(L_1, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(GameManager_t1536523654_il2cpp_TypeInfo_var);
		((GameManager_t1536523654_StaticFields*)il2cpp_codegen_static_fields_for(GameManager_t1536523654_il2cpp_TypeInfo_var))->set__instance_3(L_1);
	}

IL_0014:
	{
		IL2CPP_RUNTIME_CLASS_INIT(GameManager_t1536523654_il2cpp_TypeInfo_var);
		GameManager_t1536523654 * L_2 = ((GameManager_t1536523654_StaticFields*)il2cpp_codegen_static_fields_for(GameManager_t1536523654_il2cpp_TypeInfo_var))->get__instance_3();
		return L_2;
	}
}
// System.Void GameManager::ChangeScene(SceneName)
extern "C"  void GameManager_ChangeScene_m1824834679 (GameManager_t1536523654 * __this, int32_t ___sn0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (GameManager_ChangeScene_m1824834679_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject * L_0 = Box(SceneName_t250522944_il2cpp_TypeInfo_var, (&___sn0));
		NullCheck(L_0);
		String_t* L_1 = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_0);
		___sn0 = *(int32_t*)UnBox(L_0);
		SceneManager_LoadScene_m1758133949(NULL /*static, unused*/, L_1, /*hidden argument*/NULL);
		return;
	}
}
// System.Void GameManager::ChangeScene(SceneName,BoardPrefabName)
extern "C"  void GameManager_ChangeScene_m3732671280 (GameManager_t1536523654 * __this, int32_t ___sn0, int32_t ___bpn1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (GameManager_ChangeScene_m3732671280_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		int32_t L_0 = ___bpn1;
		__this->set__board_image_name_4(L_0);
		RuntimeObject * L_1 = Box(SceneName_t250522944_il2cpp_TypeInfo_var, (&___sn0));
		NullCheck(L_1);
		String_t* L_2 = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_1);
		___sn0 = *(int32_t*)UnBox(L_1);
		SceneManager_LoadScene_m1758133949(NULL /*static, unused*/, L_2, /*hidden argument*/NULL);
		return;
	}
}
// BoardPrefabName GameManager::GetBoardImageName()
extern "C"  int32_t GameManager_GetBoardImageName_m2118616804 (GameManager_t1536523654 * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = __this->get__board_image_name_4();
		return L_0;
	}
}
// System.Int32 GameManager::GetBlockSize()
extern "C"  int32_t GameManager_GetBlockSize_m4175583345 (GameManager_t1536523654 * __this, const RuntimeMethod* method)
{
	{
		Int32U5BU5D_t385246372* L_0 = __this->get_BoardPrefabSize_1();
		int32_t L_1 = __this->get__board_image_name_4();
		NullCheck(L_0);
		int32_t L_2 = L_1;
		int32_t L_3 = (L_0)->GetAt(static_cast<il2cpp_array_size_t>(L_2));
		return L_3;
	}
}
// System.String GameManager::GetBlockState()
extern "C"  String_t* GameManager_GetBlockState_m3640005567 (GameManager_t1536523654 * __this, const RuntimeMethod* method)
{
	{
		StringU5BU5D_t1281789340* L_0 = __this->get_BoardPrefabState_2();
		int32_t L_1 = __this->get__board_image_name_4();
		NullCheck(L_0);
		int32_t L_2 = L_1;
		String_t* L_3 = (L_0)->GetAt(static_cast<il2cpp_array_size_t>(L_2));
		return L_3;
	}
}
// System.String GameManager::GetBlockState(BoardPrefabName)
extern "C"  String_t* GameManager_GetBlockState_m2502448839 (GameManager_t1536523654 * __this, int32_t ___bpn0, const RuntimeMethod* method)
{
	{
		StringU5BU5D_t1281789340* L_0 = __this->get_BoardPrefabState_2();
		int32_t L_1 = ___bpn0;
		NullCheck(L_0);
		int32_t L_2 = L_1;
		String_t* L_3 = (L_0)->GetAt(static_cast<il2cpp_array_size_t>(L_2));
		return L_3;
	}
}
// System.Void GameManager::ResetBlockState()
extern "C"  void GameManager_ResetBlockState_m2725504852 (GameManager_t1536523654 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (GameManager_ResetBlockState_m2725504852_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		StringU5BU5D_t1281789340* L_0 = __this->get_BoardPrefabState_2();
		int32_t L_1 = __this->get__board_image_name_4();
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_2 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_2();
		NullCheck(L_0);
		ArrayElementTypeCheck (L_0, L_2);
		(L_0)->SetAt(static_cast<il2cpp_array_size_t>(L_1), (String_t*)L_2);
		return;
	}
}
// System.Void GameManager::SetBlockState(System.String)
extern "C"  void GameManager_SetBlockState_m3286834702 (GameManager_t1536523654 * __this, String_t* ___s0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (GameManager_SetBlockState_m3286834702_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		String_t* L_0 = ___s0;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_1 = String_Concat_m3937257545(NULL /*static, unused*/, _stringLiteral870437589, L_0, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Debug_t3317548046_il2cpp_TypeInfo_var);
		Debug_Log_m4051431634(NULL /*static, unused*/, L_1, /*hidden argument*/NULL);
		StringU5BU5D_t1281789340* L_2 = __this->get_BoardPrefabState_2();
		int32_t L_3 = __this->get__board_image_name_4();
		String_t* L_4 = ___s0;
		NullCheck(L_2);
		ArrayElementTypeCheck (L_2, L_4);
		(L_2)->SetAt(static_cast<il2cpp_array_size_t>(L_3), (String_t*)L_4);
		return;
	}
}
// System.Void GameManager::SetBlockState(BoardPrefabName,System.String)
extern "C"  void GameManager_SetBlockState_m88023477 (GameManager_t1536523654 * __this, int32_t ___bpn0, String_t* ___s1, const RuntimeMethod* method)
{
	{
		StringU5BU5D_t1281789340* L_0 = __this->get_BoardPrefabState_2();
		int32_t L_1 = ___bpn0;
		String_t* L_2 = ___s1;
		NullCheck(L_0);
		ArrayElementTypeCheck (L_0, L_2);
		(L_0)->SetAt(static_cast<il2cpp_array_size_t>(L_1), (String_t*)L_2);
		return;
	}
}
// DontDestroyManager GameManager::getDontDestroyManager()
extern "C"  DontDestroyManager_t1329034447 * GameManager_getDontDestroyManager_m2156172674 (GameManager_t1536523654 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (GameManager_getDontDestroyManager_m2156172674_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	GameObject_t1113636619 * V_0 = NULL;
	{
		DontDestroyManager_t1329034447 * L_0 = __this->get_dontDestroyManager_5();
		IL2CPP_RUNTIME_CLASS_INIT(Object_t631007953_il2cpp_TypeInfo_var);
		bool L_1 = Object_op_Equality_m1810815630(NULL /*static, unused*/, L_0, (Object_t631007953 *)NULL, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_0054;
		}
	}
	{
		GameObject_t1113636619 * L_2 = GameObject_Find_m2032535176(NULL /*static, unused*/, _stringLiteral441913799, /*hidden argument*/NULL);
		V_0 = L_2;
		GameObject_t1113636619 * L_3 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(Object_t631007953_il2cpp_TypeInfo_var);
		bool L_4 = Object_op_Equality_m1810815630(NULL /*static, unused*/, L_3, (Object_t631007953 *)NULL, /*hidden argument*/NULL);
		if (!L_4)
		{
			goto IL_0048;
		}
	}
	{
		Object_t631007953 * L_5 = Resources_Load_m3880010804(NULL /*static, unused*/, _stringLiteral3472418399, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_t631007953_il2cpp_TypeInfo_var);
		Object_t631007953 * L_6 = Object_Instantiate_m3403600534(NULL /*static, unused*/, L_5, /*hidden argument*/NULL);
		V_0 = ((GameObject_t1113636619 *)IsInstSealed((RuntimeObject*)L_6, GameObject_t1113636619_il2cpp_TypeInfo_var));
		GameObject_t1113636619 * L_7 = V_0;
		NullCheck(L_7);
		Object_set_name_m291480324(L_7, _stringLiteral441913799, /*hidden argument*/NULL);
	}

IL_0048:
	{
		GameObject_t1113636619 * L_8 = V_0;
		NullCheck(L_8);
		DontDestroyManager_t1329034447 * L_9 = GameObject_GetComponent_TisDontDestroyManager_t1329034447_m281312435(L_8, /*hidden argument*/GameObject_GetComponent_TisDontDestroyManager_t1329034447_m281312435_RuntimeMethod_var);
		__this->set_dontDestroyManager_5(L_9);
	}

IL_0054:
	{
		DontDestroyManager_t1329034447 * L_10 = __this->get_dontDestroyManager_5();
		return L_10;
	}
}
// System.Void GameManager::.cctor()
extern "C"  void GameManager__cctor_m4243923930 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (GameManager__cctor_m4243923930_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		((GameManager_t1536523654_StaticFields*)il2cpp_codegen_static_fields_for(GameManager_t1536523654_il2cpp_TypeInfo_var))->set_MAX_GET_SOUL_NUM_IN_A_DAY_0(((int32_t)1000));
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
// System.Void GooglePlayGames.BasicApi.CommonTypesUtil::.ctor()
extern "C"  void CommonTypesUtil__ctor_m3800974193 (CommonTypesUtil_t3521372089 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m297566312(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Boolean GooglePlayGames.BasicApi.CommonTypesUtil::StatusIsSuccess(GooglePlayGames.BasicApi.ResponseStatus)
extern "C"  bool CommonTypesUtil_StatusIsSuccess_m682244533 (RuntimeObject * __this /* static, unused */, int32_t ___status0, const RuntimeMethod* method)
{
	{
		int32_t L_0 = ___status0;
		return (bool)((((int32_t)L_0) > ((int32_t)0))? 1 : 0);
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
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Conversion methods for marshalling of: GooglePlayGames.BasicApi.Nearby.AdvertisingResult
extern "C" void AdvertisingResult_t1229207569_marshal_pinvoke(const AdvertisingResult_t1229207569& unmarshaled, AdvertisingResult_t1229207569_marshaled_pinvoke& marshaled)
{
	marshaled.___mStatus_0 = unmarshaled.get_mStatus_0();
	marshaled.___mLocalEndpointName_1 = il2cpp_codegen_marshal_string(unmarshaled.get_mLocalEndpointName_1());
}
extern "C" void AdvertisingResult_t1229207569_marshal_pinvoke_back(const AdvertisingResult_t1229207569_marshaled_pinvoke& marshaled, AdvertisingResult_t1229207569& unmarshaled)
{
	int32_t unmarshaled_mStatus_temp_0 = 0;
	unmarshaled_mStatus_temp_0 = marshaled.___mStatus_0;
	unmarshaled.set_mStatus_0(unmarshaled_mStatus_temp_0);
	unmarshaled.set_mLocalEndpointName_1(il2cpp_codegen_marshal_string_result(marshaled.___mLocalEndpointName_1));
}
// Conversion method for clean up from marshalling of: GooglePlayGames.BasicApi.Nearby.AdvertisingResult
extern "C" void AdvertisingResult_t1229207569_marshal_pinvoke_cleanup(AdvertisingResult_t1229207569_marshaled_pinvoke& marshaled)
{
	il2cpp_codegen_marshal_free(marshaled.___mLocalEndpointName_1);
	marshaled.___mLocalEndpointName_1 = NULL;
}
// Conversion methods for marshalling of: GooglePlayGames.BasicApi.Nearby.AdvertisingResult
extern "C" void AdvertisingResult_t1229207569_marshal_com(const AdvertisingResult_t1229207569& unmarshaled, AdvertisingResult_t1229207569_marshaled_com& marshaled)
{
	marshaled.___mStatus_0 = unmarshaled.get_mStatus_0();
	marshaled.___mLocalEndpointName_1 = il2cpp_codegen_marshal_bstring(unmarshaled.get_mLocalEndpointName_1());
}
extern "C" void AdvertisingResult_t1229207569_marshal_com_back(const AdvertisingResult_t1229207569_marshaled_com& marshaled, AdvertisingResult_t1229207569& unmarshaled)
{
	int32_t unmarshaled_mStatus_temp_0 = 0;
	unmarshaled_mStatus_temp_0 = marshaled.___mStatus_0;
	unmarshaled.set_mStatus_0(unmarshaled_mStatus_temp_0);
	unmarshaled.set_mLocalEndpointName_1(il2cpp_codegen_marshal_bstring_result(marshaled.___mLocalEndpointName_1));
}
// Conversion method for clean up from marshalling of: GooglePlayGames.BasicApi.Nearby.AdvertisingResult
extern "C" void AdvertisingResult_t1229207569_marshal_com_cleanup(AdvertisingResult_t1229207569_marshaled_com& marshaled)
{
	il2cpp_codegen_marshal_free_bstring(marshaled.___mLocalEndpointName_1);
	marshaled.___mLocalEndpointName_1 = NULL;
}
// System.Void GooglePlayGames.BasicApi.Nearby.AdvertisingResult::.ctor(GooglePlayGames.BasicApi.ResponseStatus,System.String)
extern "C"  void AdvertisingResult__ctor_m3283909746 (AdvertisingResult_t1229207569 * __this, int32_t ___status0, String_t* ___localEndpointName1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (AdvertisingResult__ctor_m3283909746_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		int32_t L_0 = ___status0;
		__this->set_mStatus_0(L_0);
		String_t* L_1 = ___localEndpointName1;
		String_t* L_2 = Misc_CheckNotNull_TisString_t_m2144140679(NULL /*static, unused*/, L_1, /*hidden argument*/Misc_CheckNotNull_TisString_t_m2144140679_RuntimeMethod_var);
		__this->set_mLocalEndpointName_1(L_2);
		return;
	}
}
extern "C"  void AdvertisingResult__ctor_m3283909746_AdjustorThunk (RuntimeObject * __this, int32_t ___status0, String_t* ___localEndpointName1, const RuntimeMethod* method)
{
	AdvertisingResult_t1229207569 * _thisAdjusted = reinterpret_cast<AdvertisingResult_t1229207569 *>(__this + 1);
	AdvertisingResult__ctor_m3283909746(_thisAdjusted, ___status0, ___localEndpointName1, method);
}
// System.Boolean GooglePlayGames.BasicApi.Nearby.AdvertisingResult::get_Succeeded()
extern "C"  bool AdvertisingResult_get_Succeeded_m333368401 (AdvertisingResult_t1229207569 * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = __this->get_mStatus_0();
		return (bool)((((int32_t)L_0) == ((int32_t)1))? 1 : 0);
	}
}
extern "C"  bool AdvertisingResult_get_Succeeded_m333368401_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	AdvertisingResult_t1229207569 * _thisAdjusted = reinterpret_cast<AdvertisingResult_t1229207569 *>(__this + 1);
	return AdvertisingResult_get_Succeeded_m333368401(_thisAdjusted, method);
}
// GooglePlayGames.BasicApi.ResponseStatus GooglePlayGames.BasicApi.Nearby.AdvertisingResult::get_Status()
extern "C"  int32_t AdvertisingResult_get_Status_m328185564 (AdvertisingResult_t1229207569 * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = __this->get_mStatus_0();
		return L_0;
	}
}
extern "C"  int32_t AdvertisingResult_get_Status_m328185564_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	AdvertisingResult_t1229207569 * _thisAdjusted = reinterpret_cast<AdvertisingResult_t1229207569 *>(__this + 1);
	return AdvertisingResult_get_Status_m328185564(_thisAdjusted, method);
}
// System.String GooglePlayGames.BasicApi.Nearby.AdvertisingResult::get_LocalEndpointName()
extern "C"  String_t* AdvertisingResult_get_LocalEndpointName_m2205181796 (AdvertisingResult_t1229207569 * __this, const RuntimeMethod* method)
{
	{
		String_t* L_0 = __this->get_mLocalEndpointName_1();
		return L_0;
	}
}
extern "C"  String_t* AdvertisingResult_get_LocalEndpointName_m2205181796_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	AdvertisingResult_t1229207569 * _thisAdjusted = reinterpret_cast<AdvertisingResult_t1229207569 *>(__this + 1);
	return AdvertisingResult_get_LocalEndpointName_m2205181796(_thisAdjusted, method);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif


// Conversion methods for marshalling of: GooglePlayGames.BasicApi.Nearby.ConnectionRequest
extern "C" void ConnectionRequest_t684574500_marshal_pinvoke(const ConnectionRequest_t684574500& unmarshaled, ConnectionRequest_t684574500_marshaled_pinvoke& marshaled)
{
	EndpointDetails_t3891698496_marshal_pinvoke(unmarshaled.get_mRemoteEndpoint_0(), marshaled.___mRemoteEndpoint_0);
	if (unmarshaled.get_mPayload_1() != NULL)
	{
		il2cpp_array_size_t _unmarshaled_mPayload_Length = (unmarshaled.get_mPayload_1())->max_length;
		marshaled.___mPayload_1 = il2cpp_codegen_marshal_allocate_array<uint8_t>(_unmarshaled_mPayload_Length);
		for (int32_t i = 0; i < ARRAY_LENGTH_AS_INT32(_unmarshaled_mPayload_Length); i++)
		{
			(marshaled.___mPayload_1)[i] = (unmarshaled.get_mPayload_1())->GetAtUnchecked(static_cast<il2cpp_array_size_t>(i));
		}
	}
	else
	{
		marshaled.___mPayload_1 = NULL;
	}
}
extern "C" void ConnectionRequest_t684574500_marshal_pinvoke_back(const ConnectionRequest_t684574500_marshaled_pinvoke& marshaled, ConnectionRequest_t684574500& unmarshaled)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ConnectionRequest_t684574500_pinvoke_FromNativeMethodDefinition_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	EndpointDetails_t3891698496  unmarshaled_mRemoteEndpoint_temp_0;
	memset(&unmarshaled_mRemoteEndpoint_temp_0, 0, sizeof(unmarshaled_mRemoteEndpoint_temp_0));
	EndpointDetails_t3891698496_marshal_pinvoke_back(marshaled.___mRemoteEndpoint_0, unmarshaled_mRemoteEndpoint_temp_0);
	unmarshaled.set_mRemoteEndpoint_0(unmarshaled_mRemoteEndpoint_temp_0);
	if (marshaled.___mPayload_1 != NULL)
	{
		if (unmarshaled.get_mPayload_1() == NULL)
		{
			unmarshaled.set_mPayload_1(reinterpret_cast<ByteU5BU5D_t4116647657*>(SZArrayNew(ByteU5BU5D_t4116647657_il2cpp_TypeInfo_var, 1)));
		}
		il2cpp_array_size_t _arrayLength = (unmarshaled.get_mPayload_1())->max_length;
		for (int32_t i = 0; i < ARRAY_LENGTH_AS_INT32(_arrayLength); i++)
		{
			(unmarshaled.get_mPayload_1())->SetAtUnchecked(static_cast<il2cpp_array_size_t>(i), (marshaled.___mPayload_1)[i]);
		}
	}
}
// Conversion method for clean up from marshalling of: GooglePlayGames.BasicApi.Nearby.ConnectionRequest
extern "C" void ConnectionRequest_t684574500_marshal_pinvoke_cleanup(ConnectionRequest_t684574500_marshaled_pinvoke& marshaled)
{
	EndpointDetails_t3891698496_marshal_pinvoke_cleanup(marshaled.___mRemoteEndpoint_0);
	if (marshaled.___mPayload_1 != NULL)
	{
		il2cpp_codegen_marshal_free(marshaled.___mPayload_1);
		marshaled.___mPayload_1 = NULL;
	}
}


// Conversion methods for marshalling of: GooglePlayGames.BasicApi.Nearby.ConnectionRequest
extern "C" void ConnectionRequest_t684574500_marshal_com(const ConnectionRequest_t684574500& unmarshaled, ConnectionRequest_t684574500_marshaled_com& marshaled)
{
	EndpointDetails_t3891698496_marshal_com(unmarshaled.get_mRemoteEndpoint_0(), marshaled.___mRemoteEndpoint_0);
	if (unmarshaled.get_mPayload_1() != NULL)
	{
		il2cpp_array_size_t _unmarshaled_mPayload_Length = (unmarshaled.get_mPayload_1())->max_length;
		marshaled.___mPayload_1 = il2cpp_codegen_marshal_allocate_array<uint8_t>(_unmarshaled_mPayload_Length);
		for (int32_t i = 0; i < ARRAY_LENGTH_AS_INT32(_unmarshaled_mPayload_Length); i++)
		{
			(marshaled.___mPayload_1)[i] = (unmarshaled.get_mPayload_1())->GetAtUnchecked(static_cast<il2cpp_array_size_t>(i));
		}
	}
	else
	{
		marshaled.___mPayload_1 = NULL;
	}
}
extern "C" void ConnectionRequest_t684574500_marshal_com_back(const ConnectionRequest_t684574500_marshaled_com& marshaled, ConnectionRequest_t684574500& unmarshaled)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ConnectionRequest_t684574500_com_FromNativeMethodDefinition_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	EndpointDetails_t3891698496  unmarshaled_mRemoteEndpoint_temp_0;
	memset(&unmarshaled_mRemoteEndpoint_temp_0, 0, sizeof(unmarshaled_mRemoteEndpoint_temp_0));
	EndpointDetails_t3891698496_marshal_com_back(marshaled.___mRemoteEndpoint_0, unmarshaled_mRemoteEndpoint_temp_0);
	unmarshaled.set_mRemoteEndpoint_0(unmarshaled_mRemoteEndpoint_temp_0);
	if (marshaled.___mPayload_1 != NULL)
	{
		if (unmarshaled.get_mPayload_1() == NULL)
		{
			unmarshaled.set_mPayload_1(reinterpret_cast<ByteU5BU5D_t4116647657*>(SZArrayNew(ByteU5BU5D_t4116647657_il2cpp_TypeInfo_var, 1)));
		}
		il2cpp_array_size_t _arrayLength = (unmarshaled.get_mPayload_1())->max_length;
		for (int32_t i = 0; i < ARRAY_LENGTH_AS_INT32(_arrayLength); i++)
		{
			(unmarshaled.get_mPayload_1())->SetAtUnchecked(static_cast<il2cpp_array_size_t>(i), (marshaled.___mPayload_1)[i]);
		}
	}
}
// Conversion method for clean up from marshalling of: GooglePlayGames.BasicApi.Nearby.ConnectionRequest
extern "C" void ConnectionRequest_t684574500_marshal_com_cleanup(ConnectionRequest_t684574500_marshaled_com& marshaled)
{
	EndpointDetails_t3891698496_marshal_com_cleanup(marshaled.___mRemoteEndpoint_0);
	if (marshaled.___mPayload_1 != NULL)
	{
		il2cpp_codegen_marshal_free(marshaled.___mPayload_1);
		marshaled.___mPayload_1 = NULL;
	}
}
// System.Void GooglePlayGames.BasicApi.Nearby.ConnectionRequest::.ctor(System.String,System.String,System.String,System.Byte[])
extern "C"  void ConnectionRequest__ctor_m1771453037 (ConnectionRequest_t684574500 * __this, String_t* ___remoteEndpointId0, String_t* ___remoteEndpointName1, String_t* ___serviceId2, ByteU5BU5D_t4116647657* ___payload3, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ConnectionRequest__ctor_m1771453037_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Logger_t3934082555_il2cpp_TypeInfo_var);
		Logger_d_m922460805(NULL /*static, unused*/, _stringLiteral2946598263, /*hidden argument*/NULL);
		String_t* L_0 = ___remoteEndpointId0;
		String_t* L_1 = ___remoteEndpointName1;
		String_t* L_2 = ___serviceId2;
		EndpointDetails_t3891698496  L_3;
		memset(&L_3, 0, sizeof(L_3));
		EndpointDetails__ctor_m21302606((&L_3), L_0, L_1, L_2, /*hidden argument*/NULL);
		__this->set_mRemoteEndpoint_0(L_3);
		ByteU5BU5D_t4116647657* L_4 = ___payload3;
		ByteU5BU5D_t4116647657* L_5 = Misc_CheckNotNull_TisByteU5BU5D_t4116647657_m2778390417(NULL /*static, unused*/, L_4, /*hidden argument*/Misc_CheckNotNull_TisByteU5BU5D_t4116647657_m2778390417_RuntimeMethod_var);
		__this->set_mPayload_1(L_5);
		return;
	}
}
extern "C"  void ConnectionRequest__ctor_m1771453037_AdjustorThunk (RuntimeObject * __this, String_t* ___remoteEndpointId0, String_t* ___remoteEndpointName1, String_t* ___serviceId2, ByteU5BU5D_t4116647657* ___payload3, const RuntimeMethod* method)
{
	ConnectionRequest_t684574500 * _thisAdjusted = reinterpret_cast<ConnectionRequest_t684574500 *>(__this + 1);
	ConnectionRequest__ctor_m1771453037(_thisAdjusted, ___remoteEndpointId0, ___remoteEndpointName1, ___serviceId2, ___payload3, method);
}
// GooglePlayGames.BasicApi.Nearby.EndpointDetails GooglePlayGames.BasicApi.Nearby.ConnectionRequest::get_RemoteEndpoint()
extern "C"  EndpointDetails_t3891698496  ConnectionRequest_get_RemoteEndpoint_m4110791838 (ConnectionRequest_t684574500 * __this, const RuntimeMethod* method)
{
	{
		EndpointDetails_t3891698496  L_0 = __this->get_mRemoteEndpoint_0();
		return L_0;
	}
}
extern "C"  EndpointDetails_t3891698496  ConnectionRequest_get_RemoteEndpoint_m4110791838_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	ConnectionRequest_t684574500 * _thisAdjusted = reinterpret_cast<ConnectionRequest_t684574500 *>(__this + 1);
	return ConnectionRequest_get_RemoteEndpoint_m4110791838(_thisAdjusted, method);
}
// System.Byte[] GooglePlayGames.BasicApi.Nearby.ConnectionRequest::get_Payload()
extern "C"  ByteU5BU5D_t4116647657* ConnectionRequest_get_Payload_m1929276274 (ConnectionRequest_t684574500 * __this, const RuntimeMethod* method)
{
	{
		ByteU5BU5D_t4116647657* L_0 = __this->get_mPayload_1();
		return L_0;
	}
}
extern "C"  ByteU5BU5D_t4116647657* ConnectionRequest_get_Payload_m1929276274_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	ConnectionRequest_t684574500 * _thisAdjusted = reinterpret_cast<ConnectionRequest_t684574500 *>(__this + 1);
	return ConnectionRequest_get_Payload_m1929276274(_thisAdjusted, method);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Conversion methods for marshalling of: GooglePlayGames.BasicApi.Nearby.ConnectionResponse
extern "C" void ConnectionResponse_t735328601_marshal_pinvoke(const ConnectionResponse_t735328601& unmarshaled, ConnectionResponse_t735328601_marshaled_pinvoke& marshaled)
{
	marshaled.___mLocalClientId_1 = unmarshaled.get_mLocalClientId_1();
	marshaled.___mRemoteEndpointId_2 = il2cpp_codegen_marshal_string(unmarshaled.get_mRemoteEndpointId_2());
	marshaled.___mResponseStatus_3 = unmarshaled.get_mResponseStatus_3();
	if (unmarshaled.get_mPayload_4() != NULL)
	{
		il2cpp_array_size_t _unmarshaled_mPayload_Length = (unmarshaled.get_mPayload_4())->max_length;
		marshaled.___mPayload_4 = il2cpp_codegen_marshal_allocate_array<uint8_t>(_unmarshaled_mPayload_Length);
		for (int32_t i = 0; i < ARRAY_LENGTH_AS_INT32(_unmarshaled_mPayload_Length); i++)
		{
			(marshaled.___mPayload_4)[i] = (unmarshaled.get_mPayload_4())->GetAtUnchecked(static_cast<il2cpp_array_size_t>(i));
		}
	}
	else
	{
		marshaled.___mPayload_4 = NULL;
	}
}
extern "C" void ConnectionResponse_t735328601_marshal_pinvoke_back(const ConnectionResponse_t735328601_marshaled_pinvoke& marshaled, ConnectionResponse_t735328601& unmarshaled)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ConnectionResponse_t735328601_pinvoke_FromNativeMethodDefinition_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int64_t unmarshaled_mLocalClientId_temp_0 = 0;
	unmarshaled_mLocalClientId_temp_0 = marshaled.___mLocalClientId_1;
	unmarshaled.set_mLocalClientId_1(unmarshaled_mLocalClientId_temp_0);
	unmarshaled.set_mRemoteEndpointId_2(il2cpp_codegen_marshal_string_result(marshaled.___mRemoteEndpointId_2));
	int32_t unmarshaled_mResponseStatus_temp_2 = 0;
	unmarshaled_mResponseStatus_temp_2 = marshaled.___mResponseStatus_3;
	unmarshaled.set_mResponseStatus_3(unmarshaled_mResponseStatus_temp_2);
	if (marshaled.___mPayload_4 != NULL)
	{
		if (unmarshaled.get_mPayload_4() == NULL)
		{
			unmarshaled.set_mPayload_4(reinterpret_cast<ByteU5BU5D_t4116647657*>(SZArrayNew(ByteU5BU5D_t4116647657_il2cpp_TypeInfo_var, 1)));
		}
		il2cpp_array_size_t _arrayLength = (unmarshaled.get_mPayload_4())->max_length;
		for (int32_t i = 0; i < ARRAY_LENGTH_AS_INT32(_arrayLength); i++)
		{
			(unmarshaled.get_mPayload_4())->SetAtUnchecked(static_cast<il2cpp_array_size_t>(i), (marshaled.___mPayload_4)[i]);
		}
	}
}
// Conversion method for clean up from marshalling of: GooglePlayGames.BasicApi.Nearby.ConnectionResponse
extern "C" void ConnectionResponse_t735328601_marshal_pinvoke_cleanup(ConnectionResponse_t735328601_marshaled_pinvoke& marshaled)
{
	il2cpp_codegen_marshal_free(marshaled.___mRemoteEndpointId_2);
	marshaled.___mRemoteEndpointId_2 = NULL;
	if (marshaled.___mPayload_4 != NULL)
	{
		il2cpp_codegen_marshal_free(marshaled.___mPayload_4);
		marshaled.___mPayload_4 = NULL;
	}
}
// Conversion methods for marshalling of: GooglePlayGames.BasicApi.Nearby.ConnectionResponse
extern "C" void ConnectionResponse_t735328601_marshal_com(const ConnectionResponse_t735328601& unmarshaled, ConnectionResponse_t735328601_marshaled_com& marshaled)
{
	marshaled.___mLocalClientId_1 = unmarshaled.get_mLocalClientId_1();
	marshaled.___mRemoteEndpointId_2 = il2cpp_codegen_marshal_bstring(unmarshaled.get_mRemoteEndpointId_2());
	marshaled.___mResponseStatus_3 = unmarshaled.get_mResponseStatus_3();
	if (unmarshaled.get_mPayload_4() != NULL)
	{
		il2cpp_array_size_t _unmarshaled_mPayload_Length = (unmarshaled.get_mPayload_4())->max_length;
		marshaled.___mPayload_4 = il2cpp_codegen_marshal_allocate_array<uint8_t>(_unmarshaled_mPayload_Length);
		for (int32_t i = 0; i < ARRAY_LENGTH_AS_INT32(_unmarshaled_mPayload_Length); i++)
		{
			(marshaled.___mPayload_4)[i] = (unmarshaled.get_mPayload_4())->GetAtUnchecked(static_cast<il2cpp_array_size_t>(i));
		}
	}
	else
	{
		marshaled.___mPayload_4 = NULL;
	}
}
extern "C" void ConnectionResponse_t735328601_marshal_com_back(const ConnectionResponse_t735328601_marshaled_com& marshaled, ConnectionResponse_t735328601& unmarshaled)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ConnectionResponse_t735328601_com_FromNativeMethodDefinition_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int64_t unmarshaled_mLocalClientId_temp_0 = 0;
	unmarshaled_mLocalClientId_temp_0 = marshaled.___mLocalClientId_1;
	unmarshaled.set_mLocalClientId_1(unmarshaled_mLocalClientId_temp_0);
	unmarshaled.set_mRemoteEndpointId_2(il2cpp_codegen_marshal_bstring_result(marshaled.___mRemoteEndpointId_2));
	int32_t unmarshaled_mResponseStatus_temp_2 = 0;
	unmarshaled_mResponseStatus_temp_2 = marshaled.___mResponseStatus_3;
	unmarshaled.set_mResponseStatus_3(unmarshaled_mResponseStatus_temp_2);
	if (marshaled.___mPayload_4 != NULL)
	{
		if (unmarshaled.get_mPayload_4() == NULL)
		{
			unmarshaled.set_mPayload_4(reinterpret_cast<ByteU5BU5D_t4116647657*>(SZArrayNew(ByteU5BU5D_t4116647657_il2cpp_TypeInfo_var, 1)));
		}
		il2cpp_array_size_t _arrayLength = (unmarshaled.get_mPayload_4())->max_length;
		for (int32_t i = 0; i < ARRAY_LENGTH_AS_INT32(_arrayLength); i++)
		{
			(unmarshaled.get_mPayload_4())->SetAtUnchecked(static_cast<il2cpp_array_size_t>(i), (marshaled.___mPayload_4)[i]);
		}
	}
}
// Conversion method for clean up from marshalling of: GooglePlayGames.BasicApi.Nearby.ConnectionResponse
extern "C" void ConnectionResponse_t735328601_marshal_com_cleanup(ConnectionResponse_t735328601_marshaled_com& marshaled)
{
	il2cpp_codegen_marshal_free_bstring(marshaled.___mRemoteEndpointId_2);
	marshaled.___mRemoteEndpointId_2 = NULL;
	if (marshaled.___mPayload_4 != NULL)
	{
		il2cpp_codegen_marshal_free(marshaled.___mPayload_4);
		marshaled.___mPayload_4 = NULL;
	}
}
// System.Void GooglePlayGames.BasicApi.Nearby.ConnectionResponse::.ctor(System.Int64,System.String,GooglePlayGames.BasicApi.Nearby.ConnectionResponse/Status,System.Byte[])
extern "C"  void ConnectionResponse__ctor_m1692756272 (ConnectionResponse_t735328601 * __this, int64_t ___localClientId0, String_t* ___remoteEndpointId1, int32_t ___code2, ByteU5BU5D_t4116647657* ___payload3, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ConnectionResponse__ctor_m1692756272_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		int64_t L_0 = ___localClientId0;
		__this->set_mLocalClientId_1(L_0);
		String_t* L_1 = ___remoteEndpointId1;
		String_t* L_2 = Misc_CheckNotNull_TisString_t_m2144140679(NULL /*static, unused*/, L_1, /*hidden argument*/Misc_CheckNotNull_TisString_t_m2144140679_RuntimeMethod_var);
		__this->set_mRemoteEndpointId_2(L_2);
		int32_t L_3 = ___code2;
		__this->set_mResponseStatus_3(L_3);
		ByteU5BU5D_t4116647657* L_4 = ___payload3;
		ByteU5BU5D_t4116647657* L_5 = Misc_CheckNotNull_TisByteU5BU5D_t4116647657_m2778390417(NULL /*static, unused*/, L_4, /*hidden argument*/Misc_CheckNotNull_TisByteU5BU5D_t4116647657_m2778390417_RuntimeMethod_var);
		__this->set_mPayload_4(L_5);
		return;
	}
}
extern "C"  void ConnectionResponse__ctor_m1692756272_AdjustorThunk (RuntimeObject * __this, int64_t ___localClientId0, String_t* ___remoteEndpointId1, int32_t ___code2, ByteU5BU5D_t4116647657* ___payload3, const RuntimeMethod* method)
{
	ConnectionResponse_t735328601 * _thisAdjusted = reinterpret_cast<ConnectionResponse_t735328601 *>(__this + 1);
	ConnectionResponse__ctor_m1692756272(_thisAdjusted, ___localClientId0, ___remoteEndpointId1, ___code2, ___payload3, method);
}
// System.Int64 GooglePlayGames.BasicApi.Nearby.ConnectionResponse::get_LocalClientId()
extern "C"  int64_t ConnectionResponse_get_LocalClientId_m4049806276 (ConnectionResponse_t735328601 * __this, const RuntimeMethod* method)
{
	{
		int64_t L_0 = __this->get_mLocalClientId_1();
		return L_0;
	}
}
extern "C"  int64_t ConnectionResponse_get_LocalClientId_m4049806276_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	ConnectionResponse_t735328601 * _thisAdjusted = reinterpret_cast<ConnectionResponse_t735328601 *>(__this + 1);
	return ConnectionResponse_get_LocalClientId_m4049806276(_thisAdjusted, method);
}
// System.String GooglePlayGames.BasicApi.Nearby.ConnectionResponse::get_RemoteEndpointId()
extern "C"  String_t* ConnectionResponse_get_RemoteEndpointId_m2224172160 (ConnectionResponse_t735328601 * __this, const RuntimeMethod* method)
{
	{
		String_t* L_0 = __this->get_mRemoteEndpointId_2();
		return L_0;
	}
}
extern "C"  String_t* ConnectionResponse_get_RemoteEndpointId_m2224172160_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	ConnectionResponse_t735328601 * _thisAdjusted = reinterpret_cast<ConnectionResponse_t735328601 *>(__this + 1);
	return ConnectionResponse_get_RemoteEndpointId_m2224172160(_thisAdjusted, method);
}
// GooglePlayGames.BasicApi.Nearby.ConnectionResponse/Status GooglePlayGames.BasicApi.Nearby.ConnectionResponse::get_ResponseStatus()
extern "C"  int32_t ConnectionResponse_get_ResponseStatus_m1444621596 (ConnectionResponse_t735328601 * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = __this->get_mResponseStatus_3();
		return L_0;
	}
}
extern "C"  int32_t ConnectionResponse_get_ResponseStatus_m1444621596_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	ConnectionResponse_t735328601 * _thisAdjusted = reinterpret_cast<ConnectionResponse_t735328601 *>(__this + 1);
	return ConnectionResponse_get_ResponseStatus_m1444621596(_thisAdjusted, method);
}
// System.Byte[] GooglePlayGames.BasicApi.Nearby.ConnectionResponse::get_Payload()
extern "C"  ByteU5BU5D_t4116647657* ConnectionResponse_get_Payload_m4179017167 (ConnectionResponse_t735328601 * __this, const RuntimeMethod* method)
{
	{
		ByteU5BU5D_t4116647657* L_0 = __this->get_mPayload_4();
		return L_0;
	}
}
extern "C"  ByteU5BU5D_t4116647657* ConnectionResponse_get_Payload_m4179017167_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	ConnectionResponse_t735328601 * _thisAdjusted = reinterpret_cast<ConnectionResponse_t735328601 *>(__this + 1);
	return ConnectionResponse_get_Payload_m4179017167(_thisAdjusted, method);
}
// GooglePlayGames.BasicApi.Nearby.ConnectionResponse GooglePlayGames.BasicApi.Nearby.ConnectionResponse::Rejected(System.Int64,System.String)
extern "C"  ConnectionResponse_t735328601  ConnectionResponse_Rejected_m3185555180 (RuntimeObject * __this /* static, unused */, int64_t ___localClientId0, String_t* ___remoteEndpointId1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ConnectionResponse_Rejected_m3185555180_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		int64_t L_0 = ___localClientId0;
		String_t* L_1 = ___remoteEndpointId1;
		IL2CPP_RUNTIME_CLASS_INIT(ConnectionResponse_t735328601_il2cpp_TypeInfo_var);
		ByteU5BU5D_t4116647657* L_2 = ((ConnectionResponse_t735328601_StaticFields*)il2cpp_codegen_static_fields_for(ConnectionResponse_t735328601_il2cpp_TypeInfo_var))->get_EmptyPayload_0();
		ConnectionResponse_t735328601  L_3;
		memset(&L_3, 0, sizeof(L_3));
		ConnectionResponse__ctor_m1692756272((&L_3), L_0, L_1, 1, L_2, /*hidden argument*/NULL);
		return L_3;
	}
}
// GooglePlayGames.BasicApi.Nearby.ConnectionResponse GooglePlayGames.BasicApi.Nearby.ConnectionResponse::NetworkNotConnected(System.Int64,System.String)
extern "C"  ConnectionResponse_t735328601  ConnectionResponse_NetworkNotConnected_m1024688545 (RuntimeObject * __this /* static, unused */, int64_t ___localClientId0, String_t* ___remoteEndpointId1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ConnectionResponse_NetworkNotConnected_m1024688545_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		int64_t L_0 = ___localClientId0;
		String_t* L_1 = ___remoteEndpointId1;
		IL2CPP_RUNTIME_CLASS_INIT(ConnectionResponse_t735328601_il2cpp_TypeInfo_var);
		ByteU5BU5D_t4116647657* L_2 = ((ConnectionResponse_t735328601_StaticFields*)il2cpp_codegen_static_fields_for(ConnectionResponse_t735328601_il2cpp_TypeInfo_var))->get_EmptyPayload_0();
		ConnectionResponse_t735328601  L_3;
		memset(&L_3, 0, sizeof(L_3));
		ConnectionResponse__ctor_m1692756272((&L_3), L_0, L_1, 3, L_2, /*hidden argument*/NULL);
		return L_3;
	}
}
// GooglePlayGames.BasicApi.Nearby.ConnectionResponse GooglePlayGames.BasicApi.Nearby.ConnectionResponse::InternalError(System.Int64,System.String)
extern "C"  ConnectionResponse_t735328601  ConnectionResponse_InternalError_m432312254 (RuntimeObject * __this /* static, unused */, int64_t ___localClientId0, String_t* ___remoteEndpointId1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ConnectionResponse_InternalError_m432312254_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		int64_t L_0 = ___localClientId0;
		String_t* L_1 = ___remoteEndpointId1;
		IL2CPP_RUNTIME_CLASS_INIT(ConnectionResponse_t735328601_il2cpp_TypeInfo_var);
		ByteU5BU5D_t4116647657* L_2 = ((ConnectionResponse_t735328601_StaticFields*)il2cpp_codegen_static_fields_for(ConnectionResponse_t735328601_il2cpp_TypeInfo_var))->get_EmptyPayload_0();
		ConnectionResponse_t735328601  L_3;
		memset(&L_3, 0, sizeof(L_3));
		ConnectionResponse__ctor_m1692756272((&L_3), L_0, L_1, 2, L_2, /*hidden argument*/NULL);
		return L_3;
	}
}
// GooglePlayGames.BasicApi.Nearby.ConnectionResponse GooglePlayGames.BasicApi.Nearby.ConnectionResponse::EndpointNotConnected(System.Int64,System.String)
extern "C"  ConnectionResponse_t735328601  ConnectionResponse_EndpointNotConnected_m4227972055 (RuntimeObject * __this /* static, unused */, int64_t ___localClientId0, String_t* ___remoteEndpointId1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ConnectionResponse_EndpointNotConnected_m4227972055_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		int64_t L_0 = ___localClientId0;
		String_t* L_1 = ___remoteEndpointId1;
		IL2CPP_RUNTIME_CLASS_INIT(ConnectionResponse_t735328601_il2cpp_TypeInfo_var);
		ByteU5BU5D_t4116647657* L_2 = ((ConnectionResponse_t735328601_StaticFields*)il2cpp_codegen_static_fields_for(ConnectionResponse_t735328601_il2cpp_TypeInfo_var))->get_EmptyPayload_0();
		ConnectionResponse_t735328601  L_3;
		memset(&L_3, 0, sizeof(L_3));
		ConnectionResponse__ctor_m1692756272((&L_3), L_0, L_1, 4, L_2, /*hidden argument*/NULL);
		return L_3;
	}
}
// GooglePlayGames.BasicApi.Nearby.ConnectionResponse GooglePlayGames.BasicApi.Nearby.ConnectionResponse::Accepted(System.Int64,System.String,System.Byte[])
extern "C"  ConnectionResponse_t735328601  ConnectionResponse_Accepted_m2896721567 (RuntimeObject * __this /* static, unused */, int64_t ___localClientId0, String_t* ___remoteEndpointId1, ByteU5BU5D_t4116647657* ___payload2, const RuntimeMethod* method)
{
	{
		int64_t L_0 = ___localClientId0;
		String_t* L_1 = ___remoteEndpointId1;
		ByteU5BU5D_t4116647657* L_2 = ___payload2;
		ConnectionResponse_t735328601  L_3;
		memset(&L_3, 0, sizeof(L_3));
		ConnectionResponse__ctor_m1692756272((&L_3), L_0, L_1, 0, L_2, /*hidden argument*/NULL);
		return L_3;
	}
}
// GooglePlayGames.BasicApi.Nearby.ConnectionResponse GooglePlayGames.BasicApi.Nearby.ConnectionResponse::AlreadyConnected(System.Int64,System.String)
extern "C"  ConnectionResponse_t735328601  ConnectionResponse_AlreadyConnected_m4294086108 (RuntimeObject * __this /* static, unused */, int64_t ___localClientId0, String_t* ___remoteEndpointId1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ConnectionResponse_AlreadyConnected_m4294086108_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		int64_t L_0 = ___localClientId0;
		String_t* L_1 = ___remoteEndpointId1;
		IL2CPP_RUNTIME_CLASS_INIT(ConnectionResponse_t735328601_il2cpp_TypeInfo_var);
		ByteU5BU5D_t4116647657* L_2 = ((ConnectionResponse_t735328601_StaticFields*)il2cpp_codegen_static_fields_for(ConnectionResponse_t735328601_il2cpp_TypeInfo_var))->get_EmptyPayload_0();
		ConnectionResponse_t735328601  L_3;
		memset(&L_3, 0, sizeof(L_3));
		ConnectionResponse__ctor_m1692756272((&L_3), L_0, L_1, 5, L_2, /*hidden argument*/NULL);
		return L_3;
	}
}
// System.Void GooglePlayGames.BasicApi.Nearby.ConnectionResponse::.cctor()
extern "C"  void ConnectionResponse__cctor_m1493140984 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ConnectionResponse__cctor_m1493140984_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		((ConnectionResponse_t735328601_StaticFields*)il2cpp_codegen_static_fields_for(ConnectionResponse_t735328601_il2cpp_TypeInfo_var))->set_EmptyPayload_0(((ByteU5BU5D_t4116647657*)SZArrayNew(ByteU5BU5D_t4116647657_il2cpp_TypeInfo_var, (uint32_t)0)));
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
// Conversion methods for marshalling of: GooglePlayGames.BasicApi.Nearby.EndpointDetails
extern "C" void EndpointDetails_t3891698496_marshal_pinvoke(const EndpointDetails_t3891698496& unmarshaled, EndpointDetails_t3891698496_marshaled_pinvoke& marshaled)
{
	marshaled.___mEndpointId_0 = il2cpp_codegen_marshal_string(unmarshaled.get_mEndpointId_0());
	marshaled.___mName_1 = il2cpp_codegen_marshal_string(unmarshaled.get_mName_1());
	marshaled.___mServiceId_2 = il2cpp_codegen_marshal_string(unmarshaled.get_mServiceId_2());
}
extern "C" void EndpointDetails_t3891698496_marshal_pinvoke_back(const EndpointDetails_t3891698496_marshaled_pinvoke& marshaled, EndpointDetails_t3891698496& unmarshaled)
{
	unmarshaled.set_mEndpointId_0(il2cpp_codegen_marshal_string_result(marshaled.___mEndpointId_0));
	unmarshaled.set_mName_1(il2cpp_codegen_marshal_string_result(marshaled.___mName_1));
	unmarshaled.set_mServiceId_2(il2cpp_codegen_marshal_string_result(marshaled.___mServiceId_2));
}
// Conversion method for clean up from marshalling of: GooglePlayGames.BasicApi.Nearby.EndpointDetails
extern "C" void EndpointDetails_t3891698496_marshal_pinvoke_cleanup(EndpointDetails_t3891698496_marshaled_pinvoke& marshaled)
{
	il2cpp_codegen_marshal_free(marshaled.___mEndpointId_0);
	marshaled.___mEndpointId_0 = NULL;
	il2cpp_codegen_marshal_free(marshaled.___mName_1);
	marshaled.___mName_1 = NULL;
	il2cpp_codegen_marshal_free(marshaled.___mServiceId_2);
	marshaled.___mServiceId_2 = NULL;
}
// Conversion methods for marshalling of: GooglePlayGames.BasicApi.Nearby.EndpointDetails
extern "C" void EndpointDetails_t3891698496_marshal_com(const EndpointDetails_t3891698496& unmarshaled, EndpointDetails_t3891698496_marshaled_com& marshaled)
{
	marshaled.___mEndpointId_0 = il2cpp_codegen_marshal_bstring(unmarshaled.get_mEndpointId_0());
	marshaled.___mName_1 = il2cpp_codegen_marshal_bstring(unmarshaled.get_mName_1());
	marshaled.___mServiceId_2 = il2cpp_codegen_marshal_bstring(unmarshaled.get_mServiceId_2());
}
extern "C" void EndpointDetails_t3891698496_marshal_com_back(const EndpointDetails_t3891698496_marshaled_com& marshaled, EndpointDetails_t3891698496& unmarshaled)
{
	unmarshaled.set_mEndpointId_0(il2cpp_codegen_marshal_bstring_result(marshaled.___mEndpointId_0));
	unmarshaled.set_mName_1(il2cpp_codegen_marshal_bstring_result(marshaled.___mName_1));
	unmarshaled.set_mServiceId_2(il2cpp_codegen_marshal_bstring_result(marshaled.___mServiceId_2));
}
// Conversion method for clean up from marshalling of: GooglePlayGames.BasicApi.Nearby.EndpointDetails
extern "C" void EndpointDetails_t3891698496_marshal_com_cleanup(EndpointDetails_t3891698496_marshaled_com& marshaled)
{
	il2cpp_codegen_marshal_free_bstring(marshaled.___mEndpointId_0);
	marshaled.___mEndpointId_0 = NULL;
	il2cpp_codegen_marshal_free_bstring(marshaled.___mName_1);
	marshaled.___mName_1 = NULL;
	il2cpp_codegen_marshal_free_bstring(marshaled.___mServiceId_2);
	marshaled.___mServiceId_2 = NULL;
}
// System.Void GooglePlayGames.BasicApi.Nearby.EndpointDetails::.ctor(System.String,System.String,System.String)
extern "C"  void EndpointDetails__ctor_m21302606 (EndpointDetails_t3891698496 * __this, String_t* ___endpointId0, String_t* ___name1, String_t* ___serviceId2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (EndpointDetails__ctor_m21302606_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		String_t* L_0 = ___endpointId0;
		String_t* L_1 = Misc_CheckNotNull_TisString_t_m2144140679(NULL /*static, unused*/, L_0, /*hidden argument*/Misc_CheckNotNull_TisString_t_m2144140679_RuntimeMethod_var);
		__this->set_mEndpointId_0(L_1);
		String_t* L_2 = ___name1;
		String_t* L_3 = Misc_CheckNotNull_TisString_t_m2144140679(NULL /*static, unused*/, L_2, /*hidden argument*/Misc_CheckNotNull_TisString_t_m2144140679_RuntimeMethod_var);
		__this->set_mName_1(L_3);
		String_t* L_4 = ___serviceId2;
		String_t* L_5 = Misc_CheckNotNull_TisString_t_m2144140679(NULL /*static, unused*/, L_4, /*hidden argument*/Misc_CheckNotNull_TisString_t_m2144140679_RuntimeMethod_var);
		__this->set_mServiceId_2(L_5);
		return;
	}
}
extern "C"  void EndpointDetails__ctor_m21302606_AdjustorThunk (RuntimeObject * __this, String_t* ___endpointId0, String_t* ___name1, String_t* ___serviceId2, const RuntimeMethod* method)
{
	EndpointDetails_t3891698496 * _thisAdjusted = reinterpret_cast<EndpointDetails_t3891698496 *>(__this + 1);
	EndpointDetails__ctor_m21302606(_thisAdjusted, ___endpointId0, ___name1, ___serviceId2, method);
}
// System.String GooglePlayGames.BasicApi.Nearby.EndpointDetails::get_EndpointId()
extern "C"  String_t* EndpointDetails_get_EndpointId_m884044036 (EndpointDetails_t3891698496 * __this, const RuntimeMethod* method)
{
	{
		String_t* L_0 = __this->get_mEndpointId_0();
		return L_0;
	}
}
extern "C"  String_t* EndpointDetails_get_EndpointId_m884044036_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	EndpointDetails_t3891698496 * _thisAdjusted = reinterpret_cast<EndpointDetails_t3891698496 *>(__this + 1);
	return EndpointDetails_get_EndpointId_m884044036(_thisAdjusted, method);
}
// System.String GooglePlayGames.BasicApi.Nearby.EndpointDetails::get_Name()
extern "C"  String_t* EndpointDetails_get_Name_m3888561498 (EndpointDetails_t3891698496 * __this, const RuntimeMethod* method)
{
	{
		String_t* L_0 = __this->get_mName_1();
		return L_0;
	}
}
extern "C"  String_t* EndpointDetails_get_Name_m3888561498_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	EndpointDetails_t3891698496 * _thisAdjusted = reinterpret_cast<EndpointDetails_t3891698496 *>(__this + 1);
	return EndpointDetails_get_Name_m3888561498(_thisAdjusted, method);
}
// System.String GooglePlayGames.BasicApi.Nearby.EndpointDetails::get_ServiceId()
extern "C"  String_t* EndpointDetails_get_ServiceId_m1851016629 (EndpointDetails_t3891698496 * __this, const RuntimeMethod* method)
{
	{
		String_t* L_0 = __this->get_mServiceId_2();
		return L_0;
	}
}
extern "C"  String_t* EndpointDetails_get_ServiceId_m1851016629_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	EndpointDetails_t3891698496 * _thisAdjusted = reinterpret_cast<EndpointDetails_t3891698496 *>(__this + 1);
	return EndpointDetails_get_ServiceId_m1851016629(_thisAdjusted, method);
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
// Conversion methods for marshalling of: GooglePlayGames.BasicApi.Nearby.NearbyConnectionConfiguration
extern "C" void NearbyConnectionConfiguration_t2019425596_marshal_pinvoke(const NearbyConnectionConfiguration_t2019425596& unmarshaled, NearbyConnectionConfiguration_t2019425596_marshaled_pinvoke& marshaled)
{
	marshaled.___mInitializationCallback_2 = il2cpp_codegen_marshal_delegate(reinterpret_cast<MulticastDelegate_t*>(unmarshaled.get_mInitializationCallback_2()));
	marshaled.___mLocalClientId_3 = unmarshaled.get_mLocalClientId_3();
}
extern "C" void NearbyConnectionConfiguration_t2019425596_marshal_pinvoke_back(const NearbyConnectionConfiguration_t2019425596_marshaled_pinvoke& marshaled, NearbyConnectionConfiguration_t2019425596& unmarshaled)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (NearbyConnectionConfiguration_t2019425596_pinvoke_FromNativeMethodDefinition_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	unmarshaled.set_mInitializationCallback_2(il2cpp_codegen_marshal_function_ptr_to_delegate<Action_1_t2609895709>(marshaled.___mInitializationCallback_2, Action_1_t2609895709_il2cpp_TypeInfo_var));
	int64_t unmarshaled_mLocalClientId_temp_1 = 0;
	unmarshaled_mLocalClientId_temp_1 = marshaled.___mLocalClientId_3;
	unmarshaled.set_mLocalClientId_3(unmarshaled_mLocalClientId_temp_1);
}
// Conversion method for clean up from marshalling of: GooglePlayGames.BasicApi.Nearby.NearbyConnectionConfiguration
extern "C" void NearbyConnectionConfiguration_t2019425596_marshal_pinvoke_cleanup(NearbyConnectionConfiguration_t2019425596_marshaled_pinvoke& marshaled)
{
}
// Conversion methods for marshalling of: GooglePlayGames.BasicApi.Nearby.NearbyConnectionConfiguration
extern "C" void NearbyConnectionConfiguration_t2019425596_marshal_com(const NearbyConnectionConfiguration_t2019425596& unmarshaled, NearbyConnectionConfiguration_t2019425596_marshaled_com& marshaled)
{
	marshaled.___mInitializationCallback_2 = il2cpp_codegen_marshal_delegate(reinterpret_cast<MulticastDelegate_t*>(unmarshaled.get_mInitializationCallback_2()));
	marshaled.___mLocalClientId_3 = unmarshaled.get_mLocalClientId_3();
}
extern "C" void NearbyConnectionConfiguration_t2019425596_marshal_com_back(const NearbyConnectionConfiguration_t2019425596_marshaled_com& marshaled, NearbyConnectionConfiguration_t2019425596& unmarshaled)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (NearbyConnectionConfiguration_t2019425596_com_FromNativeMethodDefinition_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	unmarshaled.set_mInitializationCallback_2(il2cpp_codegen_marshal_function_ptr_to_delegate<Action_1_t2609895709>(marshaled.___mInitializationCallback_2, Action_1_t2609895709_il2cpp_TypeInfo_var));
	int64_t unmarshaled_mLocalClientId_temp_1 = 0;
	unmarshaled_mLocalClientId_temp_1 = marshaled.___mLocalClientId_3;
	unmarshaled.set_mLocalClientId_3(unmarshaled_mLocalClientId_temp_1);
}
// Conversion method for clean up from marshalling of: GooglePlayGames.BasicApi.Nearby.NearbyConnectionConfiguration
extern "C" void NearbyConnectionConfiguration_t2019425596_marshal_com_cleanup(NearbyConnectionConfiguration_t2019425596_marshaled_com& marshaled)
{
}
// System.Void GooglePlayGames.BasicApi.Nearby.NearbyConnectionConfiguration::.ctor(System.Action`1<GooglePlayGames.BasicApi.Nearby.InitializationStatus>,System.Int64)
extern "C"  void NearbyConnectionConfiguration__ctor_m3413108655 (NearbyConnectionConfiguration_t2019425596 * __this, Action_1_t2609895709 * ___callback0, int64_t ___localClientId1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (NearbyConnectionConfiguration__ctor_m3413108655_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		Action_1_t2609895709 * L_0 = ___callback0;
		Action_1_t2609895709 * L_1 = Misc_CheckNotNull_TisAction_1_t2609895709_m4157397171(NULL /*static, unused*/, L_0, /*hidden argument*/Misc_CheckNotNull_TisAction_1_t2609895709_m4157397171_RuntimeMethod_var);
		__this->set_mInitializationCallback_2(L_1);
		int64_t L_2 = ___localClientId1;
		__this->set_mLocalClientId_3(L_2);
		return;
	}
}
extern "C"  void NearbyConnectionConfiguration__ctor_m3413108655_AdjustorThunk (RuntimeObject * __this, Action_1_t2609895709 * ___callback0, int64_t ___localClientId1, const RuntimeMethod* method)
{
	NearbyConnectionConfiguration_t2019425596 * _thisAdjusted = reinterpret_cast<NearbyConnectionConfiguration_t2019425596 *>(__this + 1);
	NearbyConnectionConfiguration__ctor_m3413108655(_thisAdjusted, ___callback0, ___localClientId1, method);
}
// System.Int64 GooglePlayGames.BasicApi.Nearby.NearbyConnectionConfiguration::get_LocalClientId()
extern "C"  int64_t NearbyConnectionConfiguration_get_LocalClientId_m514333893 (NearbyConnectionConfiguration_t2019425596 * __this, const RuntimeMethod* method)
{
	{
		int64_t L_0 = __this->get_mLocalClientId_3();
		return L_0;
	}
}
extern "C"  int64_t NearbyConnectionConfiguration_get_LocalClientId_m514333893_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	NearbyConnectionConfiguration_t2019425596 * _thisAdjusted = reinterpret_cast<NearbyConnectionConfiguration_t2019425596 *>(__this + 1);
	return NearbyConnectionConfiguration_get_LocalClientId_m514333893(_thisAdjusted, method);
}
// System.Action`1<GooglePlayGames.BasicApi.Nearby.InitializationStatus> GooglePlayGames.BasicApi.Nearby.NearbyConnectionConfiguration::get_InitializationCallback()
extern "C"  Action_1_t2609895709 * NearbyConnectionConfiguration_get_InitializationCallback_m2901044093 (NearbyConnectionConfiguration_t2019425596 * __this, const RuntimeMethod* method)
{
	{
		Action_1_t2609895709 * L_0 = __this->get_mInitializationCallback_2();
		return L_0;
	}
}
extern "C"  Action_1_t2609895709 * NearbyConnectionConfiguration_get_InitializationCallback_m2901044093_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	NearbyConnectionConfiguration_t2019425596 * _thisAdjusted = reinterpret_cast<NearbyConnectionConfiguration_t2019425596 *>(__this + 1);
	return NearbyConnectionConfiguration_get_InitializationCallback_m2901044093(_thisAdjusted, method);
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
// System.Void GooglePlayGames.BasicApi.SavedGame.ConflictCallback::.ctor(System.Object,System.IntPtr)
extern "C"  void ConflictCallback__ctor_m3550611957 (ConflictCallback_t4045994657 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.Void GooglePlayGames.BasicApi.SavedGame.ConflictCallback::Invoke(GooglePlayGames.BasicApi.SavedGame.IConflictResolver,GooglePlayGames.BasicApi.SavedGame.ISavedGameMetadata,System.Byte[],GooglePlayGames.BasicApi.SavedGame.ISavedGameMetadata,System.Byte[])
extern "C"  void ConflictCallback_Invoke_m2182035770 (ConflictCallback_t4045994657 * __this, RuntimeObject* ___resolver0, RuntimeObject* ___original1, ByteU5BU5D_t4116647657* ___originalData2, RuntimeObject* ___unmerged3, ByteU5BU5D_t4116647657* ___unmergedData4, const RuntimeMethod* method)
{
	if(__this->get_prev_9() != NULL)
	{
		ConflictCallback_Invoke_m2182035770((ConflictCallback_t4045994657 *)__this->get_prev_9(), ___resolver0, ___original1, ___originalData2, ___unmerged3, ___unmergedData4, method);
	}
	Il2CppMethodPointer targetMethodPointer = __this->get_method_ptr_0();
	RuntimeMethod* targetMethod = (RuntimeMethod*)(__this->get_method_3());
	RuntimeObject* targetThis = __this->get_m_target_2();
	il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found(targetMethod);
	bool ___methodIsStatic = MethodIsStatic(targetMethod);
	if (___methodIsStatic)
	{
		if (il2cpp_codegen_method_parameter_count(targetMethod) == 5)
		{
			// open
			{
				typedef void (*FunctionPointerType) (RuntimeObject *, RuntimeObject*, RuntimeObject*, ByteU5BU5D_t4116647657*, RuntimeObject*, ByteU5BU5D_t4116647657*, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(NULL, ___resolver0, ___original1, ___originalData2, ___unmerged3, ___unmergedData4, targetMethod);
			}
		}
		else
		{
			// closed
			{
				typedef void (*FunctionPointerType) (RuntimeObject *, void*, RuntimeObject*, RuntimeObject*, ByteU5BU5D_t4116647657*, RuntimeObject*, ByteU5BU5D_t4116647657*, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(NULL, targetThis, ___resolver0, ___original1, ___originalData2, ___unmerged3, ___unmergedData4, targetMethod);
			}
		}
	}
	else
	{
		if (il2cpp_codegen_method_parameter_count(targetMethod) == 5)
		{
			// closed
			if (il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (il2cpp_codegen_method_is_generic_instance(targetMethod))
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						GenericInterfaceActionInvoker5< RuntimeObject*, RuntimeObject*, ByteU5BU5D_t4116647657*, RuntimeObject*, ByteU5BU5D_t4116647657* >::Invoke(targetMethod, targetThis, ___resolver0, ___original1, ___originalData2, ___unmerged3, ___unmergedData4);
					else
						GenericVirtActionInvoker5< RuntimeObject*, RuntimeObject*, ByteU5BU5D_t4116647657*, RuntimeObject*, ByteU5BU5D_t4116647657* >::Invoke(targetMethod, targetThis, ___resolver0, ___original1, ___originalData2, ___unmerged3, ___unmergedData4);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						InterfaceActionInvoker5< RuntimeObject*, RuntimeObject*, ByteU5BU5D_t4116647657*, RuntimeObject*, ByteU5BU5D_t4116647657* >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ___resolver0, ___original1, ___originalData2, ___unmerged3, ___unmergedData4);
					else
						VirtActionInvoker5< RuntimeObject*, RuntimeObject*, ByteU5BU5D_t4116647657*, RuntimeObject*, ByteU5BU5D_t4116647657* >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ___resolver0, ___original1, ___originalData2, ___unmerged3, ___unmergedData4);
				}
			}
			else
			{
				typedef void (*FunctionPointerType) (void*, RuntimeObject*, RuntimeObject*, ByteU5BU5D_t4116647657*, RuntimeObject*, ByteU5BU5D_t4116647657*, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, ___resolver0, ___original1, ___originalData2, ___unmerged3, ___unmergedData4, targetMethod);
			}
		}
		else
		{
			// open
			if (il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (il2cpp_codegen_method_is_generic_instance(targetMethod))
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						GenericInterfaceActionInvoker4< RuntimeObject*, ByteU5BU5D_t4116647657*, RuntimeObject*, ByteU5BU5D_t4116647657* >::Invoke(targetMethod, ___resolver0, ___original1, ___originalData2, ___unmerged3, ___unmergedData4);
					else
						GenericVirtActionInvoker4< RuntimeObject*, ByteU5BU5D_t4116647657*, RuntimeObject*, ByteU5BU5D_t4116647657* >::Invoke(targetMethod, ___resolver0, ___original1, ___originalData2, ___unmerged3, ___unmergedData4);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						InterfaceActionInvoker4< RuntimeObject*, ByteU5BU5D_t4116647657*, RuntimeObject*, ByteU5BU5D_t4116647657* >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), ___resolver0, ___original1, ___originalData2, ___unmerged3, ___unmergedData4);
					else
						VirtActionInvoker4< RuntimeObject*, ByteU5BU5D_t4116647657*, RuntimeObject*, ByteU5BU5D_t4116647657* >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), ___resolver0, ___original1, ___originalData2, ___unmerged3, ___unmergedData4);
				}
			}
			else
			{
				typedef void (*FunctionPointerType) (RuntimeObject*, RuntimeObject*, ByteU5BU5D_t4116647657*, RuntimeObject*, ByteU5BU5D_t4116647657*, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(___resolver0, ___original1, ___originalData2, ___unmerged3, ___unmergedData4, targetMethod);
			}
		}
	}
}
// System.IAsyncResult GooglePlayGames.BasicApi.SavedGame.ConflictCallback::BeginInvoke(GooglePlayGames.BasicApi.SavedGame.IConflictResolver,GooglePlayGames.BasicApi.SavedGame.ISavedGameMetadata,System.Byte[],GooglePlayGames.BasicApi.SavedGame.ISavedGameMetadata,System.Byte[],System.AsyncCallback,System.Object)
extern "C"  RuntimeObject* ConflictCallback_BeginInvoke_m2204966865 (ConflictCallback_t4045994657 * __this, RuntimeObject* ___resolver0, RuntimeObject* ___original1, ByteU5BU5D_t4116647657* ___originalData2, RuntimeObject* ___unmerged3, ByteU5BU5D_t4116647657* ___unmergedData4, AsyncCallback_t3962456242 * ___callback5, RuntimeObject * ___object6, const RuntimeMethod* method)
{
	void *__d_args[6] = {0};
	__d_args[0] = ___resolver0;
	__d_args[1] = ___original1;
	__d_args[2] = ___originalData2;
	__d_args[3] = ___unmerged3;
	__d_args[4] = ___unmergedData4;
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback5, (RuntimeObject*)___object6);
}
// System.Void GooglePlayGames.BasicApi.SavedGame.ConflictCallback::EndInvoke(System.IAsyncResult)
extern "C"  void ConflictCallback_EndInvoke_m1668328791 (ConflictCallback_t4045994657 * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
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
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Conversion methods for marshalling of: GooglePlayGames.BasicApi.SavedGame.SavedGameMetadataUpdate
extern "C" void SavedGameMetadataUpdate_t1775293339_marshal_pinvoke(const SavedGameMetadataUpdate_t1775293339& unmarshaled, SavedGameMetadataUpdate_t1775293339_marshaled_pinvoke& marshaled)
{
	Exception_t* ___mNewPlayedTime_4Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'mNewPlayedTime' of type 'SavedGameMetadataUpdate'.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___mNewPlayedTime_4Exception, NULL, NULL);
}
extern "C" void SavedGameMetadataUpdate_t1775293339_marshal_pinvoke_back(const SavedGameMetadataUpdate_t1775293339_marshaled_pinvoke& marshaled, SavedGameMetadataUpdate_t1775293339& unmarshaled)
{
	Exception_t* ___mNewPlayedTime_4Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'mNewPlayedTime' of type 'SavedGameMetadataUpdate'.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___mNewPlayedTime_4Exception, NULL, NULL);
}
// Conversion method for clean up from marshalling of: GooglePlayGames.BasicApi.SavedGame.SavedGameMetadataUpdate
extern "C" void SavedGameMetadataUpdate_t1775293339_marshal_pinvoke_cleanup(SavedGameMetadataUpdate_t1775293339_marshaled_pinvoke& marshaled)
{
}
// Conversion methods for marshalling of: GooglePlayGames.BasicApi.SavedGame.SavedGameMetadataUpdate
extern "C" void SavedGameMetadataUpdate_t1775293339_marshal_com(const SavedGameMetadataUpdate_t1775293339& unmarshaled, SavedGameMetadataUpdate_t1775293339_marshaled_com& marshaled)
{
	Exception_t* ___mNewPlayedTime_4Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'mNewPlayedTime' of type 'SavedGameMetadataUpdate'.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___mNewPlayedTime_4Exception, NULL, NULL);
}
extern "C" void SavedGameMetadataUpdate_t1775293339_marshal_com_back(const SavedGameMetadataUpdate_t1775293339_marshaled_com& marshaled, SavedGameMetadataUpdate_t1775293339& unmarshaled)
{
	Exception_t* ___mNewPlayedTime_4Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'mNewPlayedTime' of type 'SavedGameMetadataUpdate'.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___mNewPlayedTime_4Exception, NULL, NULL);
}
// Conversion method for clean up from marshalling of: GooglePlayGames.BasicApi.SavedGame.SavedGameMetadataUpdate
extern "C" void SavedGameMetadataUpdate_t1775293339_marshal_com_cleanup(SavedGameMetadataUpdate_t1775293339_marshaled_com& marshaled)
{
}
// System.Void GooglePlayGames.BasicApi.SavedGame.SavedGameMetadataUpdate::.ctor(GooglePlayGames.BasicApi.SavedGame.SavedGameMetadataUpdate/Builder)
extern "C"  void SavedGameMetadataUpdate__ctor_m3198095627 (SavedGameMetadataUpdate_t1775293339 * __this, Builder_t140438593  ___builder0, const RuntimeMethod* method)
{
	{
		bool L_0 = (&___builder0)->get_mDescriptionUpdated_0();
		__this->set_mDescriptionUpdated_0(L_0);
		String_t* L_1 = (&___builder0)->get_mNewDescription_1();
		__this->set_mNewDescription_1(L_1);
		bool L_2 = (&___builder0)->get_mCoverImageUpdated_2();
		__this->set_mCoverImageUpdated_2(L_2);
		ByteU5BU5D_t4116647657* L_3 = (&___builder0)->get_mNewPngCoverImage_3();
		__this->set_mNewPngCoverImage_3(L_3);
		Nullable_1_t2603721331  L_4 = (&___builder0)->get_mNewPlayedTime_4();
		__this->set_mNewPlayedTime_4(L_4);
		return;
	}
}
extern "C"  void SavedGameMetadataUpdate__ctor_m3198095627_AdjustorThunk (RuntimeObject * __this, Builder_t140438593  ___builder0, const RuntimeMethod* method)
{
	SavedGameMetadataUpdate_t1775293339 * _thisAdjusted = reinterpret_cast<SavedGameMetadataUpdate_t1775293339 *>(__this + 1);
	SavedGameMetadataUpdate__ctor_m3198095627(_thisAdjusted, ___builder0, method);
}
// System.Boolean GooglePlayGames.BasicApi.SavedGame.SavedGameMetadataUpdate::get_IsDescriptionUpdated()
extern "C"  bool SavedGameMetadataUpdate_get_IsDescriptionUpdated_m2472364427 (SavedGameMetadataUpdate_t1775293339 * __this, const RuntimeMethod* method)
{
	{
		bool L_0 = __this->get_mDescriptionUpdated_0();
		return L_0;
	}
}
extern "C"  bool SavedGameMetadataUpdate_get_IsDescriptionUpdated_m2472364427_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	SavedGameMetadataUpdate_t1775293339 * _thisAdjusted = reinterpret_cast<SavedGameMetadataUpdate_t1775293339 *>(__this + 1);
	return SavedGameMetadataUpdate_get_IsDescriptionUpdated_m2472364427(_thisAdjusted, method);
}
// System.String GooglePlayGames.BasicApi.SavedGame.SavedGameMetadataUpdate::get_UpdatedDescription()
extern "C"  String_t* SavedGameMetadataUpdate_get_UpdatedDescription_m4234892677 (SavedGameMetadataUpdate_t1775293339 * __this, const RuntimeMethod* method)
{
	{
		String_t* L_0 = __this->get_mNewDescription_1();
		return L_0;
	}
}
extern "C"  String_t* SavedGameMetadataUpdate_get_UpdatedDescription_m4234892677_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	SavedGameMetadataUpdate_t1775293339 * _thisAdjusted = reinterpret_cast<SavedGameMetadataUpdate_t1775293339 *>(__this + 1);
	return SavedGameMetadataUpdate_get_UpdatedDescription_m4234892677(_thisAdjusted, method);
}
// System.Boolean GooglePlayGames.BasicApi.SavedGame.SavedGameMetadataUpdate::get_IsCoverImageUpdated()
extern "C"  bool SavedGameMetadataUpdate_get_IsCoverImageUpdated_m2287708232 (SavedGameMetadataUpdate_t1775293339 * __this, const RuntimeMethod* method)
{
	{
		bool L_0 = __this->get_mCoverImageUpdated_2();
		return L_0;
	}
}
extern "C"  bool SavedGameMetadataUpdate_get_IsCoverImageUpdated_m2287708232_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	SavedGameMetadataUpdate_t1775293339 * _thisAdjusted = reinterpret_cast<SavedGameMetadataUpdate_t1775293339 *>(__this + 1);
	return SavedGameMetadataUpdate_get_IsCoverImageUpdated_m2287708232(_thisAdjusted, method);
}
// System.Byte[] GooglePlayGames.BasicApi.SavedGame.SavedGameMetadataUpdate::get_UpdatedPngCoverImage()
extern "C"  ByteU5BU5D_t4116647657* SavedGameMetadataUpdate_get_UpdatedPngCoverImage_m4180780714 (SavedGameMetadataUpdate_t1775293339 * __this, const RuntimeMethod* method)
{
	{
		ByteU5BU5D_t4116647657* L_0 = __this->get_mNewPngCoverImage_3();
		return L_0;
	}
}
extern "C"  ByteU5BU5D_t4116647657* SavedGameMetadataUpdate_get_UpdatedPngCoverImage_m4180780714_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	SavedGameMetadataUpdate_t1775293339 * _thisAdjusted = reinterpret_cast<SavedGameMetadataUpdate_t1775293339 *>(__this + 1);
	return SavedGameMetadataUpdate_get_UpdatedPngCoverImage_m4180780714(_thisAdjusted, method);
}
// System.Boolean GooglePlayGames.BasicApi.SavedGame.SavedGameMetadataUpdate::get_IsPlayedTimeUpdated()
extern "C"  bool SavedGameMetadataUpdate_get_IsPlayedTimeUpdated_m2037804757 (SavedGameMetadataUpdate_t1775293339 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SavedGameMetadataUpdate_get_IsPlayedTimeUpdated_m2037804757_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Nullable_1_t2603721331  V_0;
	memset(&V_0, 0, sizeof(V_0));
	{
		Nullable_1_t2603721331  L_0 = __this->get_mNewPlayedTime_4();
		V_0 = L_0;
		bool L_1 = Nullable_1_get_HasValue_m1210311128((Nullable_1_t2603721331 *)(&V_0), /*hidden argument*/Nullable_1_get_HasValue_m1210311128_RuntimeMethod_var);
		return L_1;
	}
}
extern "C"  bool SavedGameMetadataUpdate_get_IsPlayedTimeUpdated_m2037804757_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	SavedGameMetadataUpdate_t1775293339 * _thisAdjusted = reinterpret_cast<SavedGameMetadataUpdate_t1775293339 *>(__this + 1);
	return SavedGameMetadataUpdate_get_IsPlayedTimeUpdated_m2037804757(_thisAdjusted, method);
}
// System.Nullable`1<System.TimeSpan> GooglePlayGames.BasicApi.SavedGame.SavedGameMetadataUpdate::get_UpdatedPlayedTime()
extern "C"  Nullable_1_t2603721331  SavedGameMetadataUpdate_get_UpdatedPlayedTime_m710812417 (SavedGameMetadataUpdate_t1775293339 * __this, const RuntimeMethod* method)
{
	{
		Nullable_1_t2603721331  L_0 = __this->get_mNewPlayedTime_4();
		return L_0;
	}
}
extern "C"  Nullable_1_t2603721331  SavedGameMetadataUpdate_get_UpdatedPlayedTime_m710812417_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	SavedGameMetadataUpdate_t1775293339 * _thisAdjusted = reinterpret_cast<SavedGameMetadataUpdate_t1775293339 *>(__this + 1);
	return SavedGameMetadataUpdate_get_UpdatedPlayedTime_m710812417(_thisAdjusted, method);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Conversion methods for marshalling of: GooglePlayGames.BasicApi.SavedGame.SavedGameMetadataUpdate/Builder
extern "C" void Builder_t140438593_marshal_pinvoke(const Builder_t140438593& unmarshaled, Builder_t140438593_marshaled_pinvoke& marshaled)
{
	Exception_t* ___mNewPlayedTime_4Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'mNewPlayedTime' of type 'Builder'.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___mNewPlayedTime_4Exception, NULL, NULL);
}
extern "C" void Builder_t140438593_marshal_pinvoke_back(const Builder_t140438593_marshaled_pinvoke& marshaled, Builder_t140438593& unmarshaled)
{
	Exception_t* ___mNewPlayedTime_4Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'mNewPlayedTime' of type 'Builder'.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___mNewPlayedTime_4Exception, NULL, NULL);
}
// Conversion method for clean up from marshalling of: GooglePlayGames.BasicApi.SavedGame.SavedGameMetadataUpdate/Builder
extern "C" void Builder_t140438593_marshal_pinvoke_cleanup(Builder_t140438593_marshaled_pinvoke& marshaled)
{
}
// Conversion methods for marshalling of: GooglePlayGames.BasicApi.SavedGame.SavedGameMetadataUpdate/Builder
extern "C" void Builder_t140438593_marshal_com(const Builder_t140438593& unmarshaled, Builder_t140438593_marshaled_com& marshaled)
{
	Exception_t* ___mNewPlayedTime_4Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'mNewPlayedTime' of type 'Builder'.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___mNewPlayedTime_4Exception, NULL, NULL);
}
extern "C" void Builder_t140438593_marshal_com_back(const Builder_t140438593_marshaled_com& marshaled, Builder_t140438593& unmarshaled)
{
	Exception_t* ___mNewPlayedTime_4Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'mNewPlayedTime' of type 'Builder'.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___mNewPlayedTime_4Exception, NULL, NULL);
}
// Conversion method for clean up from marshalling of: GooglePlayGames.BasicApi.SavedGame.SavedGameMetadataUpdate/Builder
extern "C" void Builder_t140438593_marshal_com_cleanup(Builder_t140438593_marshaled_com& marshaled)
{
}
// GooglePlayGames.BasicApi.SavedGame.SavedGameMetadataUpdate/Builder GooglePlayGames.BasicApi.SavedGame.SavedGameMetadataUpdate/Builder::WithUpdatedDescription(System.String)
extern "C"  Builder_t140438593  Builder_WithUpdatedDescription_m2481299006 (Builder_t140438593 * __this, String_t* ___description0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Builder_WithUpdatedDescription_m2481299006_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		String_t* L_0 = ___description0;
		String_t* L_1 = Misc_CheckNotNull_TisString_t_m2144140679(NULL /*static, unused*/, L_0, /*hidden argument*/Misc_CheckNotNull_TisString_t_m2144140679_RuntimeMethod_var);
		__this->set_mNewDescription_1(L_1);
		__this->set_mDescriptionUpdated_0((bool)1);
		return (*(Builder_t140438593 *)__this);
	}
}
extern "C"  Builder_t140438593  Builder_WithUpdatedDescription_m2481299006_AdjustorThunk (RuntimeObject * __this, String_t* ___description0, const RuntimeMethod* method)
{
	Builder_t140438593 * _thisAdjusted = reinterpret_cast<Builder_t140438593 *>(__this + 1);
	return Builder_WithUpdatedDescription_m2481299006(_thisAdjusted, ___description0, method);
}
// GooglePlayGames.BasicApi.SavedGame.SavedGameMetadataUpdate/Builder GooglePlayGames.BasicApi.SavedGame.SavedGameMetadataUpdate/Builder::WithUpdatedPngCoverImage(System.Byte[])
extern "C"  Builder_t140438593  Builder_WithUpdatedPngCoverImage_m4039231983 (Builder_t140438593 * __this, ByteU5BU5D_t4116647657* ___newPngCoverImage0, const RuntimeMethod* method)
{
	{
		__this->set_mCoverImageUpdated_2((bool)1);
		ByteU5BU5D_t4116647657* L_0 = ___newPngCoverImage0;
		__this->set_mNewPngCoverImage_3(L_0);
		return (*(Builder_t140438593 *)__this);
	}
}
extern "C"  Builder_t140438593  Builder_WithUpdatedPngCoverImage_m4039231983_AdjustorThunk (RuntimeObject * __this, ByteU5BU5D_t4116647657* ___newPngCoverImage0, const RuntimeMethod* method)
{
	Builder_t140438593 * _thisAdjusted = reinterpret_cast<Builder_t140438593 *>(__this + 1);
	return Builder_WithUpdatedPngCoverImage_m4039231983(_thisAdjusted, ___newPngCoverImage0, method);
}
// GooglePlayGames.BasicApi.SavedGame.SavedGameMetadataUpdate/Builder GooglePlayGames.BasicApi.SavedGame.SavedGameMetadataUpdate/Builder::WithUpdatedPlayedTime(System.TimeSpan)
extern "C"  Builder_t140438593  Builder_WithUpdatedPlayedTime_m96114013 (Builder_t140438593 * __this, TimeSpan_t881159249  ___newPlayedTime0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Builder_WithUpdatedPlayedTime_m96114013_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		double L_0 = TimeSpan_get_TotalMilliseconds_m2429771311((TimeSpan_t881159249 *)(&___newPlayedTime0), /*hidden argument*/NULL);
		if ((!(((double)L_0) > ((double)(1.8446744073709552E+19)))))
		{
			goto IL_0020;
		}
	}
	{
		InvalidOperationException_t56020091 * L_1 = (InvalidOperationException_t56020091 *)il2cpp_codegen_object_new(InvalidOperationException_t56020091_il2cpp_TypeInfo_var);
		InvalidOperationException__ctor_m237278729(L_1, _stringLiteral2702124447, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, NULL, Builder_WithUpdatedPlayedTime_m96114013_RuntimeMethod_var);
	}

IL_0020:
	{
		TimeSpan_t881159249  L_2 = ___newPlayedTime0;
		Nullable_1_t2603721331  L_3;
		memset(&L_3, 0, sizeof(L_3));
		Nullable_1__ctor_m3314784284((&L_3), L_2, /*hidden argument*/Nullable_1__ctor_m3314784284_RuntimeMethod_var);
		__this->set_mNewPlayedTime_4(L_3);
		return (*(Builder_t140438593 *)__this);
	}
}
extern "C"  Builder_t140438593  Builder_WithUpdatedPlayedTime_m96114013_AdjustorThunk (RuntimeObject * __this, TimeSpan_t881159249  ___newPlayedTime0, const RuntimeMethod* method)
{
	Builder_t140438593 * _thisAdjusted = reinterpret_cast<Builder_t140438593 *>(__this + 1);
	return Builder_WithUpdatedPlayedTime_m96114013(_thisAdjusted, ___newPlayedTime0, method);
}
// GooglePlayGames.BasicApi.SavedGame.SavedGameMetadataUpdate GooglePlayGames.BasicApi.SavedGame.SavedGameMetadataUpdate/Builder::Build()
extern "C"  SavedGameMetadataUpdate_t1775293339  Builder_Build_m2845116586 (Builder_t140438593 * __this, const RuntimeMethod* method)
{
	{
		SavedGameMetadataUpdate_t1775293339  L_0;
		memset(&L_0, 0, sizeof(L_0));
		SavedGameMetadataUpdate__ctor_m3198095627((&L_0), (*(Builder_t140438593 *)__this), /*hidden argument*/NULL);
		return L_0;
	}
}
extern "C"  SavedGameMetadataUpdate_t1775293339  Builder_Build_m2845116586_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	Builder_t140438593 * _thisAdjusted = reinterpret_cast<Builder_t140438593 *>(__this + 1);
	return Builder_Build_m2845116586(_thisAdjusted, method);
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
// System.Void GooglePlayGames.BasicApi.Video.VideoCapabilities::.ctor(System.Boolean,System.Boolean,System.Boolean,System.Boolean[],System.Boolean[])
extern "C"  void VideoCapabilities__ctor_m225051308 (VideoCapabilities_t1298735124 * __this, bool ___isCameraSupported0, bool ___isMicSupported1, bool ___isWriteStorageSupported2, BooleanU5BU5D_t2897418192* ___captureModesSupported3, BooleanU5BU5D_t2897418192* ___qualityLevelsSupported4, const RuntimeMethod* method)
{
	{
		Object__ctor_m297566312(__this, /*hidden argument*/NULL);
		bool L_0 = ___isCameraSupported0;
		__this->set_mIsCameraSupported_0(L_0);
		bool L_1 = ___isMicSupported1;
		__this->set_mIsMicSupported_1(L_1);
		bool L_2 = ___isWriteStorageSupported2;
		__this->set_mIsWriteStorageSupported_2(L_2);
		BooleanU5BU5D_t2897418192* L_3 = ___captureModesSupported3;
		__this->set_mCaptureModesSupported_3(L_3);
		BooleanU5BU5D_t2897418192* L_4 = ___qualityLevelsSupported4;
		__this->set_mQualityLevelsSupported_4(L_4);
		return;
	}
}
// System.Boolean GooglePlayGames.BasicApi.Video.VideoCapabilities::get_IsCameraSupported()
extern "C"  bool VideoCapabilities_get_IsCameraSupported_m1910499309 (VideoCapabilities_t1298735124 * __this, const RuntimeMethod* method)
{
	{
		bool L_0 = __this->get_mIsCameraSupported_0();
		return L_0;
	}
}
// System.Boolean GooglePlayGames.BasicApi.Video.VideoCapabilities::get_IsMicSupported()
extern "C"  bool VideoCapabilities_get_IsMicSupported_m3114794490 (VideoCapabilities_t1298735124 * __this, const RuntimeMethod* method)
{
	{
		bool L_0 = __this->get_mIsMicSupported_1();
		return L_0;
	}
}
// System.Boolean GooglePlayGames.BasicApi.Video.VideoCapabilities::get_IsWriteStorageSupported()
extern "C"  bool VideoCapabilities_get_IsWriteStorageSupported_m1478362268 (VideoCapabilities_t1298735124 * __this, const RuntimeMethod* method)
{
	{
		bool L_0 = __this->get_mIsWriteStorageSupported_2();
		return L_0;
	}
}
// System.Boolean GooglePlayGames.BasicApi.Video.VideoCapabilities::SupportsCaptureMode(GooglePlayGames.BasicApi.VideoCaptureMode)
extern "C"  bool VideoCapabilities_SupportsCaptureMode_m1565474687 (VideoCapabilities_t1298735124 * __this, int32_t ___captureMode0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (VideoCapabilities_SupportsCaptureMode_m1565474687_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		int32_t L_0 = ___captureMode0;
		if ((((int32_t)L_0) == ((int32_t)(-1))))
		{
			goto IL_0010;
		}
	}
	{
		BooleanU5BU5D_t2897418192* L_1 = __this->get_mCaptureModesSupported_3();
		int32_t L_2 = ___captureMode0;
		NullCheck(L_1);
		int32_t L_3 = L_2;
		uint8_t L_4 = (L_1)->GetAt(static_cast<il2cpp_array_size_t>(L_3));
		return (bool)L_4;
	}

IL_0010:
	{
		IL2CPP_RUNTIME_CLASS_INIT(Logger_t3934082555_il2cpp_TypeInfo_var);
		Logger_w_m2887164710(NULL /*static, unused*/, _stringLiteral2232457108, /*hidden argument*/NULL);
		return (bool)0;
	}
}
// System.Boolean GooglePlayGames.BasicApi.Video.VideoCapabilities::SupportsQualityLevel(GooglePlayGames.BasicApi.VideoQualityLevel)
extern "C"  bool VideoCapabilities_SupportsQualityLevel_m2728670355 (VideoCapabilities_t1298735124 * __this, int32_t ___qualityLevel0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (VideoCapabilities_SupportsQualityLevel_m2728670355_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		int32_t L_0 = ___qualityLevel0;
		if ((((int32_t)L_0) == ((int32_t)(-1))))
		{
			goto IL_0010;
		}
	}
	{
		BooleanU5BU5D_t2897418192* L_1 = __this->get_mQualityLevelsSupported_4();
		int32_t L_2 = ___qualityLevel0;
		NullCheck(L_1);
		int32_t L_3 = L_2;
		uint8_t L_4 = (L_1)->GetAt(static_cast<il2cpp_array_size_t>(L_3));
		return (bool)L_4;
	}

IL_0010:
	{
		IL2CPP_RUNTIME_CLASS_INIT(Logger_t3934082555_il2cpp_TypeInfo_var);
		Logger_w_m2887164710(NULL /*static, unused*/, _stringLiteral2003653526, /*hidden argument*/NULL);
		return (bool)0;
	}
}
// System.String GooglePlayGames.BasicApi.Video.VideoCapabilities::ToString()
extern "C"  String_t* VideoCapabilities_ToString_m3384539885 (VideoCapabilities_t1298735124 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (VideoCapabilities_ToString_m3384539885_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	BooleanU5BU5D_t2897418192* G_B2_0 = NULL;
	String_t* G_B2_1 = NULL;
	int32_t G_B2_2 = 0;
	ObjectU5BU5D_t2843939325* G_B2_3 = NULL;
	ObjectU5BU5D_t2843939325* G_B2_4 = NULL;
	String_t* G_B2_5 = NULL;
	BooleanU5BU5D_t2897418192* G_B1_0 = NULL;
	String_t* G_B1_1 = NULL;
	int32_t G_B1_2 = 0;
	ObjectU5BU5D_t2843939325* G_B1_3 = NULL;
	ObjectU5BU5D_t2843939325* G_B1_4 = NULL;
	String_t* G_B1_5 = NULL;
	BooleanU5BU5D_t2897418192* G_B4_0 = NULL;
	String_t* G_B4_1 = NULL;
	int32_t G_B4_2 = 0;
	ObjectU5BU5D_t2843939325* G_B4_3 = NULL;
	ObjectU5BU5D_t2843939325* G_B4_4 = NULL;
	String_t* G_B4_5 = NULL;
	BooleanU5BU5D_t2897418192* G_B3_0 = NULL;
	String_t* G_B3_1 = NULL;
	int32_t G_B3_2 = 0;
	ObjectU5BU5D_t2843939325* G_B3_3 = NULL;
	ObjectU5BU5D_t2843939325* G_B3_4 = NULL;
	String_t* G_B3_5 = NULL;
	{
		ObjectU5BU5D_t2843939325* L_0 = ((ObjectU5BU5D_t2843939325*)SZArrayNew(ObjectU5BU5D_t2843939325_il2cpp_TypeInfo_var, (uint32_t)5));
		bool L_1 = __this->get_mIsCameraSupported_0();
		bool L_2 = L_1;
		RuntimeObject * L_3 = Box(Boolean_t97287965_il2cpp_TypeInfo_var, &L_2);
		NullCheck(L_0);
		ArrayElementTypeCheck (L_0, L_3);
		(L_0)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject *)L_3);
		ObjectU5BU5D_t2843939325* L_4 = L_0;
		bool L_5 = __this->get_mIsMicSupported_1();
		bool L_6 = L_5;
		RuntimeObject * L_7 = Box(Boolean_t97287965_il2cpp_TypeInfo_var, &L_6);
		NullCheck(L_4);
		ArrayElementTypeCheck (L_4, L_7);
		(L_4)->SetAt(static_cast<il2cpp_array_size_t>(1), (RuntimeObject *)L_7);
		ObjectU5BU5D_t2843939325* L_8 = L_4;
		bool L_9 = __this->get_mIsWriteStorageSupported_2();
		bool L_10 = L_9;
		RuntimeObject * L_11 = Box(Boolean_t97287965_il2cpp_TypeInfo_var, &L_10);
		NullCheck(L_8);
		ArrayElementTypeCheck (L_8, L_11);
		(L_8)->SetAt(static_cast<il2cpp_array_size_t>(2), (RuntimeObject *)L_11);
		ObjectU5BU5D_t2843939325* L_12 = L_8;
		BooleanU5BU5D_t2897418192* L_13 = __this->get_mCaptureModesSupported_3();
		Func_2_t1267953766 * L_14 = ((VideoCapabilities_t1298735124_StaticFields*)il2cpp_codegen_static_fields_for(VideoCapabilities_t1298735124_il2cpp_TypeInfo_var))->get_U3CU3Ef__amU24cache0_5();
		G_B1_0 = L_13;
		G_B1_1 = _stringLiteral3452614532;
		G_B1_2 = 3;
		G_B1_3 = L_12;
		G_B1_4 = L_12;
		G_B1_5 = _stringLiteral1193653825;
		if (L_14)
		{
			G_B2_0 = L_13;
			G_B2_1 = _stringLiteral3452614532;
			G_B2_2 = 3;
			G_B2_3 = L_12;
			G_B2_4 = L_12;
			G_B2_5 = _stringLiteral1193653825;
			goto IL_005a;
		}
	}
	{
		intptr_t L_15 = (intptr_t)VideoCapabilities_U3CToStringU3Em__0_m727207793_RuntimeMethod_var;
		Func_2_t1267953766 * L_16 = (Func_2_t1267953766 *)il2cpp_codegen_object_new(Func_2_t1267953766_il2cpp_TypeInfo_var);
		Func_2__ctor_m483955973(L_16, NULL, L_15, /*hidden argument*/Func_2__ctor_m483955973_RuntimeMethod_var);
		((VideoCapabilities_t1298735124_StaticFields*)il2cpp_codegen_static_fields_for(VideoCapabilities_t1298735124_il2cpp_TypeInfo_var))->set_U3CU3Ef__amU24cache0_5(L_16);
		G_B2_0 = G_B1_0;
		G_B2_1 = G_B1_1;
		G_B2_2 = G_B1_2;
		G_B2_3 = G_B1_3;
		G_B2_4 = G_B1_4;
		G_B2_5 = G_B1_5;
	}

IL_005a:
	{
		Func_2_t1267953766 * L_17 = ((VideoCapabilities_t1298735124_StaticFields*)il2cpp_codegen_static_fields_for(VideoCapabilities_t1298735124_il2cpp_TypeInfo_var))->get_U3CU3Ef__amU24cache0_5();
		RuntimeObject* L_18 = Enumerable_Select_TisBoolean_t97287965_TisString_t_m1157660285(NULL /*static, unused*/, (RuntimeObject*)(RuntimeObject*)G_B2_0, L_17, /*hidden argument*/Enumerable_Select_TisBoolean_t97287965_TisString_t_m1157660285_RuntimeMethod_var);
		StringU5BU5D_t1281789340* L_19 = Enumerable_ToArray_TisString_t_m4208096419(NULL /*static, unused*/, L_18, /*hidden argument*/Enumerable_ToArray_TisString_t_m4208096419_RuntimeMethod_var);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_20 = String_Join_m2050845953(NULL /*static, unused*/, G_B2_1, L_19, /*hidden argument*/NULL);
		NullCheck(G_B2_3);
		ArrayElementTypeCheck (G_B2_3, L_20);
		(G_B2_3)->SetAt(static_cast<il2cpp_array_size_t>(G_B2_2), (RuntimeObject *)L_20);
		ObjectU5BU5D_t2843939325* L_21 = G_B2_4;
		BooleanU5BU5D_t2897418192* L_22 = __this->get_mQualityLevelsSupported_4();
		Func_2_t1267953766 * L_23 = ((VideoCapabilities_t1298735124_StaticFields*)il2cpp_codegen_static_fields_for(VideoCapabilities_t1298735124_il2cpp_TypeInfo_var))->get_U3CU3Ef__amU24cache1_6();
		G_B3_0 = L_22;
		G_B3_1 = _stringLiteral3452614532;
		G_B3_2 = 4;
		G_B3_3 = L_21;
		G_B3_4 = L_21;
		G_B3_5 = G_B2_5;
		if (L_23)
		{
			G_B4_0 = L_22;
			G_B4_1 = _stringLiteral3452614532;
			G_B4_2 = 4;
			G_B4_3 = L_21;
			G_B4_4 = L_21;
			G_B4_5 = G_B2_5;
			goto IL_0094;
		}
	}
	{
		intptr_t L_24 = (intptr_t)VideoCapabilities_U3CToStringU3Em__1_m3708112702_RuntimeMethod_var;
		Func_2_t1267953766 * L_25 = (Func_2_t1267953766 *)il2cpp_codegen_object_new(Func_2_t1267953766_il2cpp_TypeInfo_var);
		Func_2__ctor_m483955973(L_25, NULL, L_24, /*hidden argument*/Func_2__ctor_m483955973_RuntimeMethod_var);
		((VideoCapabilities_t1298735124_StaticFields*)il2cpp_codegen_static_fields_for(VideoCapabilities_t1298735124_il2cpp_TypeInfo_var))->set_U3CU3Ef__amU24cache1_6(L_25);
		G_B4_0 = G_B3_0;
		G_B4_1 = G_B3_1;
		G_B4_2 = G_B3_2;
		G_B4_3 = G_B3_3;
		G_B4_4 = G_B3_4;
		G_B4_5 = G_B3_5;
	}

IL_0094:
	{
		Func_2_t1267953766 * L_26 = ((VideoCapabilities_t1298735124_StaticFields*)il2cpp_codegen_static_fields_for(VideoCapabilities_t1298735124_il2cpp_TypeInfo_var))->get_U3CU3Ef__amU24cache1_6();
		RuntimeObject* L_27 = Enumerable_Select_TisBoolean_t97287965_TisString_t_m1157660285(NULL /*static, unused*/, (RuntimeObject*)(RuntimeObject*)G_B4_0, L_26, /*hidden argument*/Enumerable_Select_TisBoolean_t97287965_TisString_t_m1157660285_RuntimeMethod_var);
		StringU5BU5D_t1281789340* L_28 = Enumerable_ToArray_TisString_t_m4208096419(NULL /*static, unused*/, L_27, /*hidden argument*/Enumerable_ToArray_TisString_t_m4208096419_RuntimeMethod_var);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_29 = String_Join_m2050845953(NULL /*static, unused*/, G_B4_1, L_28, /*hidden argument*/NULL);
		NullCheck(G_B4_3);
		ArrayElementTypeCheck (G_B4_3, L_29);
		(G_B4_3)->SetAt(static_cast<il2cpp_array_size_t>(G_B4_2), (RuntimeObject *)L_29);
		String_t* L_30 = String_Format_m630303134(NULL /*static, unused*/, G_B4_5, G_B4_4, /*hidden argument*/NULL);
		return L_30;
	}
}
// System.String GooglePlayGames.BasicApi.Video.VideoCapabilities::<ToString>m__0(System.Boolean)
extern "C"  String_t* VideoCapabilities_U3CToStringU3Em__0_m727207793 (RuntimeObject * __this /* static, unused */, bool ___p0, const RuntimeMethod* method)
{
	{
		String_t* L_0 = Boolean_ToString_m2664721875((bool*)(&___p0), /*hidden argument*/NULL);
		return L_0;
	}
}
// System.String GooglePlayGames.BasicApi.Video.VideoCapabilities::<ToString>m__1(System.Boolean)
extern "C"  String_t* VideoCapabilities_U3CToStringU3Em__1_m3708112702 (RuntimeObject * __this /* static, unused */, bool ___p0, const RuntimeMethod* method)
{
	{
		String_t* L_0 = Boolean_ToString_m2664721875((bool*)(&___p0), /*hidden argument*/NULL);
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
// System.Void GooglePlayGames.BasicApi.Video.VideoCaptureState::.ctor(System.Boolean,GooglePlayGames.BasicApi.VideoCaptureMode,GooglePlayGames.BasicApi.VideoQualityLevel,System.Boolean,System.Boolean)
extern "C"  void VideoCaptureState__ctor_m2235055244 (VideoCaptureState_t2350658599 * __this, bool ___isCapturing0, int32_t ___captureMode1, int32_t ___qualityLevel2, bool ___isOverlayVisible3, bool ___isPaused4, const RuntimeMethod* method)
{
	{
		Object__ctor_m297566312(__this, /*hidden argument*/NULL);
		bool L_0 = ___isCapturing0;
		__this->set_mIsCapturing_0(L_0);
		int32_t L_1 = ___captureMode1;
		__this->set_mCaptureMode_1(L_1);
		int32_t L_2 = ___qualityLevel2;
		__this->set_mQualityLevel_2(L_2);
		bool L_3 = ___isOverlayVisible3;
		__this->set_mIsOverlayVisible_3(L_3);
		bool L_4 = ___isPaused4;
		__this->set_mIsPaused_4(L_4);
		return;
	}
}
// System.Boolean GooglePlayGames.BasicApi.Video.VideoCaptureState::get_IsCapturing()
extern "C"  bool VideoCaptureState_get_IsCapturing_m2369818780 (VideoCaptureState_t2350658599 * __this, const RuntimeMethod* method)
{
	{
		bool L_0 = __this->get_mIsCapturing_0();
		return L_0;
	}
}
// GooglePlayGames.BasicApi.VideoCaptureMode GooglePlayGames.BasicApi.Video.VideoCaptureState::get_CaptureMode()
extern "C"  int32_t VideoCaptureState_get_CaptureMode_m943317226 (VideoCaptureState_t2350658599 * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = __this->get_mCaptureMode_1();
		return L_0;
	}
}
// GooglePlayGames.BasicApi.VideoQualityLevel GooglePlayGames.BasicApi.Video.VideoCaptureState::get_QualityLevel()
extern "C"  int32_t VideoCaptureState_get_QualityLevel_m1274529075 (VideoCaptureState_t2350658599 * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = __this->get_mQualityLevel_2();
		return L_0;
	}
}
// System.Boolean GooglePlayGames.BasicApi.Video.VideoCaptureState::get_IsOverlayVisible()
extern "C"  bool VideoCaptureState_get_IsOverlayVisible_m646089574 (VideoCaptureState_t2350658599 * __this, const RuntimeMethod* method)
{
	{
		bool L_0 = __this->get_mIsOverlayVisible_3();
		return L_0;
	}
}
// System.Boolean GooglePlayGames.BasicApi.Video.VideoCaptureState::get_IsPaused()
extern "C"  bool VideoCaptureState_get_IsPaused_m3115624110 (VideoCaptureState_t2350658599 * __this, const RuntimeMethod* method)
{
	{
		bool L_0 = __this->get_mIsPaused_4();
		return L_0;
	}
}
// System.String GooglePlayGames.BasicApi.Video.VideoCaptureState::ToString()
extern "C"  String_t* VideoCaptureState_ToString_m1063396444 (VideoCaptureState_t2350658599 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (VideoCaptureState_ToString_m1063396444_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		ObjectU5BU5D_t2843939325* L_0 = ((ObjectU5BU5D_t2843939325*)SZArrayNew(ObjectU5BU5D_t2843939325_il2cpp_TypeInfo_var, (uint32_t)5));
		bool L_1 = __this->get_mIsCapturing_0();
		bool L_2 = L_1;
		RuntimeObject * L_3 = Box(Boolean_t97287965_il2cpp_TypeInfo_var, &L_2);
		NullCheck(L_0);
		ArrayElementTypeCheck (L_0, L_3);
		(L_0)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject *)L_3);
		ObjectU5BU5D_t2843939325* L_4 = L_0;
		int32_t* L_5 = __this->get_address_of_mCaptureMode_1();
		RuntimeObject * L_6 = Box(VideoCaptureMode_t1984088482_il2cpp_TypeInfo_var, L_5);
		NullCheck(L_6);
		String_t* L_7 = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_6);
		*L_5 = *(int32_t*)UnBox(L_6);
		NullCheck(L_4);
		ArrayElementTypeCheck (L_4, L_7);
		(L_4)->SetAt(static_cast<il2cpp_array_size_t>(1), (RuntimeObject *)L_7);
		ObjectU5BU5D_t2843939325* L_8 = L_4;
		int32_t* L_9 = __this->get_address_of_mQualityLevel_2();
		RuntimeObject * L_10 = Box(VideoQualityLevel_t4283418091_il2cpp_TypeInfo_var, L_9);
		NullCheck(L_10);
		String_t* L_11 = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_10);
		*L_9 = *(int32_t*)UnBox(L_10);
		NullCheck(L_8);
		ArrayElementTypeCheck (L_8, L_11);
		(L_8)->SetAt(static_cast<il2cpp_array_size_t>(2), (RuntimeObject *)L_11);
		ObjectU5BU5D_t2843939325* L_12 = L_8;
		bool L_13 = __this->get_mIsOverlayVisible_3();
		bool L_14 = L_13;
		RuntimeObject * L_15 = Box(Boolean_t97287965_il2cpp_TypeInfo_var, &L_14);
		NullCheck(L_12);
		ArrayElementTypeCheck (L_12, L_15);
		(L_12)->SetAt(static_cast<il2cpp_array_size_t>(3), (RuntimeObject *)L_15);
		ObjectU5BU5D_t2843939325* L_16 = L_12;
		bool L_17 = __this->get_mIsPaused_4();
		bool L_18 = L_17;
		RuntimeObject * L_19 = Box(Boolean_t97287965_il2cpp_TypeInfo_var, &L_18);
		NullCheck(L_16);
		ArrayElementTypeCheck (L_16, L_19);
		(L_16)->SetAt(static_cast<il2cpp_array_size_t>(4), (RuntimeObject *)L_19);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_20 = String_Format_m630303134(NULL /*static, unused*/, _stringLiteral797399103, L_16, /*hidden argument*/NULL);
		return L_20;
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
// System.Void GooglePlayGames.OurUtils.Logger::.ctor()
extern "C"  void Logger__ctor_m2428022861 (Logger_t3934082555 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m297566312(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Boolean GooglePlayGames.OurUtils.Logger::get_DebugLogEnabled()
extern "C"  bool Logger_get_DebugLogEnabled_m2774793554 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Logger_get_DebugLogEnabled_m2774793554_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Logger_t3934082555_il2cpp_TypeInfo_var);
		bool L_0 = ((Logger_t3934082555_StaticFields*)il2cpp_codegen_static_fields_for(Logger_t3934082555_il2cpp_TypeInfo_var))->get_debugLogEnabled_0();
		return L_0;
	}
}
// System.Void GooglePlayGames.OurUtils.Logger::set_DebugLogEnabled(System.Boolean)
extern "C"  void Logger_set_DebugLogEnabled_m497549498 (RuntimeObject * __this /* static, unused */, bool ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Logger_set_DebugLogEnabled_m497549498_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		bool L_0 = ___value0;
		IL2CPP_RUNTIME_CLASS_INIT(Logger_t3934082555_il2cpp_TypeInfo_var);
		((Logger_t3934082555_StaticFields*)il2cpp_codegen_static_fields_for(Logger_t3934082555_il2cpp_TypeInfo_var))->set_debugLogEnabled_0(L_0);
		return;
	}
}
// System.Boolean GooglePlayGames.OurUtils.Logger::get_WarningLogEnabled()
extern "C"  bool Logger_get_WarningLogEnabled_m1046024761 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Logger_get_WarningLogEnabled_m1046024761_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Logger_t3934082555_il2cpp_TypeInfo_var);
		bool L_0 = ((Logger_t3934082555_StaticFields*)il2cpp_codegen_static_fields_for(Logger_t3934082555_il2cpp_TypeInfo_var))->get_warningLogEnabled_1();
		return L_0;
	}
}
// System.Void GooglePlayGames.OurUtils.Logger::set_WarningLogEnabled(System.Boolean)
extern "C"  void Logger_set_WarningLogEnabled_m2597660112 (RuntimeObject * __this /* static, unused */, bool ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Logger_set_WarningLogEnabled_m2597660112_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		bool L_0 = ___value0;
		IL2CPP_RUNTIME_CLASS_INIT(Logger_t3934082555_il2cpp_TypeInfo_var);
		((Logger_t3934082555_StaticFields*)il2cpp_codegen_static_fields_for(Logger_t3934082555_il2cpp_TypeInfo_var))->set_warningLogEnabled_1(L_0);
		return;
	}
}
// System.Void GooglePlayGames.OurUtils.Logger::d(System.String)
extern "C"  void Logger_d_m922460805 (RuntimeObject * __this /* static, unused */, String_t* ___msg0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Logger_d_m922460805_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	U3CdU3Ec__AnonStorey0_t2350509859 * V_0 = NULL;
	{
		U3CdU3Ec__AnonStorey0_t2350509859 * L_0 = (U3CdU3Ec__AnonStorey0_t2350509859 *)il2cpp_codegen_object_new(U3CdU3Ec__AnonStorey0_t2350509859_il2cpp_TypeInfo_var);
		U3CdU3Ec__AnonStorey0__ctor_m2573530652(L_0, /*hidden argument*/NULL);
		V_0 = L_0;
		U3CdU3Ec__AnonStorey0_t2350509859 * L_1 = V_0;
		String_t* L_2 = ___msg0;
		NullCheck(L_1);
		L_1->set_msg_0(L_2);
		IL2CPP_RUNTIME_CLASS_INIT(Logger_t3934082555_il2cpp_TypeInfo_var);
		bool L_3 = ((Logger_t3934082555_StaticFields*)il2cpp_codegen_static_fields_for(Logger_t3934082555_il2cpp_TypeInfo_var))->get_debugLogEnabled_0();
		if (!L_3)
		{
			goto IL_0028;
		}
	}
	{
		U3CdU3Ec__AnonStorey0_t2350509859 * L_4 = V_0;
		intptr_t L_5 = (intptr_t)U3CdU3Ec__AnonStorey0_U3CU3Em__0_m1228335655_RuntimeMethod_var;
		Action_t1264377477 * L_6 = (Action_t1264377477 *)il2cpp_codegen_object_new(Action_t1264377477_il2cpp_TypeInfo_var);
		Action__ctor_m2994342681(L_6, L_4, L_5, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(PlayGamesHelperObject_t4023745847_il2cpp_TypeInfo_var);
		PlayGamesHelperObject_RunOnGameThread_m3356747975(NULL /*static, unused*/, L_6, /*hidden argument*/NULL);
	}

IL_0028:
	{
		return;
	}
}
// System.Void GooglePlayGames.OurUtils.Logger::w(System.String)
extern "C"  void Logger_w_m2887164710 (RuntimeObject * __this /* static, unused */, String_t* ___msg0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Logger_w_m2887164710_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	U3CwU3Ec__AnonStorey1_t2080961746 * V_0 = NULL;
	{
		U3CwU3Ec__AnonStorey1_t2080961746 * L_0 = (U3CwU3Ec__AnonStorey1_t2080961746 *)il2cpp_codegen_object_new(U3CwU3Ec__AnonStorey1_t2080961746_il2cpp_TypeInfo_var);
		U3CwU3Ec__AnonStorey1__ctor_m3964734600(L_0, /*hidden argument*/NULL);
		V_0 = L_0;
		U3CwU3Ec__AnonStorey1_t2080961746 * L_1 = V_0;
		String_t* L_2 = ___msg0;
		NullCheck(L_1);
		L_1->set_msg_0(L_2);
		IL2CPP_RUNTIME_CLASS_INIT(Logger_t3934082555_il2cpp_TypeInfo_var);
		bool L_3 = ((Logger_t3934082555_StaticFields*)il2cpp_codegen_static_fields_for(Logger_t3934082555_il2cpp_TypeInfo_var))->get_warningLogEnabled_1();
		if (!L_3)
		{
			goto IL_0028;
		}
	}
	{
		U3CwU3Ec__AnonStorey1_t2080961746 * L_4 = V_0;
		intptr_t L_5 = (intptr_t)U3CwU3Ec__AnonStorey1_U3CU3Em__0_m2699359925_RuntimeMethod_var;
		Action_t1264377477 * L_6 = (Action_t1264377477 *)il2cpp_codegen_object_new(Action_t1264377477_il2cpp_TypeInfo_var);
		Action__ctor_m2994342681(L_6, L_4, L_5, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(PlayGamesHelperObject_t4023745847_il2cpp_TypeInfo_var);
		PlayGamesHelperObject_RunOnGameThread_m3356747975(NULL /*static, unused*/, L_6, /*hidden argument*/NULL);
	}

IL_0028:
	{
		return;
	}
}
// System.Void GooglePlayGames.OurUtils.Logger::e(System.String)
extern "C"  void Logger_e_m377266835 (RuntimeObject * __this /* static, unused */, String_t* ___msg0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Logger_e_m377266835_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	U3CeU3Ec__AnonStorey2_t2346119983 * V_0 = NULL;
	{
		U3CeU3Ec__AnonStorey2_t2346119983 * L_0 = (U3CeU3Ec__AnonStorey2_t2346119983 *)il2cpp_codegen_object_new(U3CeU3Ec__AnonStorey2_t2346119983_il2cpp_TypeInfo_var);
		U3CeU3Ec__AnonStorey2__ctor_m2768254390(L_0, /*hidden argument*/NULL);
		V_0 = L_0;
		U3CeU3Ec__AnonStorey2_t2346119983 * L_1 = V_0;
		String_t* L_2 = ___msg0;
		NullCheck(L_1);
		L_1->set_msg_0(L_2);
		IL2CPP_RUNTIME_CLASS_INIT(Logger_t3934082555_il2cpp_TypeInfo_var);
		bool L_3 = ((Logger_t3934082555_StaticFields*)il2cpp_codegen_static_fields_for(Logger_t3934082555_il2cpp_TypeInfo_var))->get_warningLogEnabled_1();
		if (!L_3)
		{
			goto IL_0028;
		}
	}
	{
		U3CeU3Ec__AnonStorey2_t2346119983 * L_4 = V_0;
		intptr_t L_5 = (intptr_t)U3CeU3Ec__AnonStorey2_U3CU3Em__0_m1436950235_RuntimeMethod_var;
		Action_t1264377477 * L_6 = (Action_t1264377477 *)il2cpp_codegen_object_new(Action_t1264377477_il2cpp_TypeInfo_var);
		Action__ctor_m2994342681(L_6, L_4, L_5, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(PlayGamesHelperObject_t4023745847_il2cpp_TypeInfo_var);
		PlayGamesHelperObject_RunOnGameThread_m3356747975(NULL /*static, unused*/, L_6, /*hidden argument*/NULL);
	}

IL_0028:
	{
		return;
	}
}
// System.String GooglePlayGames.OurUtils.Logger::describe(System.Byte[])
extern "C"  String_t* Logger_describe_m3385582320 (RuntimeObject * __this /* static, unused */, ByteU5BU5D_t4116647657* ___b0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Logger_describe_m3385582320_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	String_t* G_B3_0 = NULL;
	{
		ByteU5BU5D_t4116647657* L_0 = ___b0;
		if (L_0)
		{
			goto IL_0010;
		}
	}
	{
		G_B3_0 = _stringLiteral2389780707;
		goto IL_0027;
	}

IL_0010:
	{
		ByteU5BU5D_t4116647657* L_1 = ___b0;
		NullCheck(L_1);
		int32_t L_2 = (((int32_t)((int32_t)(((RuntimeArray *)L_1)->max_length))));
		RuntimeObject * L_3 = Box(Int32_t2950945753_il2cpp_TypeInfo_var, &L_2);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_4 = String_Concat_m1715369213(NULL /*static, unused*/, _stringLiteral130595647, L_3, _stringLiteral3452614643, /*hidden argument*/NULL);
		G_B3_0 = L_4;
	}

IL_0027:
	{
		return G_B3_0;
	}
}
// System.String GooglePlayGames.OurUtils.Logger::ToLogMessage(System.String,System.String,System.String)
extern "C"  String_t* Logger_ToLogMessage_m1026262968 (RuntimeObject * __this /* static, unused */, String_t* ___prefix0, String_t* ___logType1, String_t* ___msg2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Logger_ToLogMessage_m1026262968_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	DateTime_t3738529785  V_0;
	memset(&V_0, 0, sizeof(V_0));
	{
		ObjectU5BU5D_t2843939325* L_0 = ((ObjectU5BU5D_t2843939325*)SZArrayNew(ObjectU5BU5D_t2843939325_il2cpp_TypeInfo_var, (uint32_t)4));
		String_t* L_1 = ___prefix0;
		NullCheck(L_0);
		ArrayElementTypeCheck (L_0, L_1);
		(L_0)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject *)L_1);
		ObjectU5BU5D_t2843939325* L_2 = L_0;
		IL2CPP_RUNTIME_CLASS_INIT(DateTime_t3738529785_il2cpp_TypeInfo_var);
		DateTime_t3738529785  L_3 = DateTime_get_Now_m1277138875(NULL /*static, unused*/, /*hidden argument*/NULL);
		V_0 = L_3;
		String_t* L_4 = DateTime_ToString_m3718521780((DateTime_t3738529785 *)(&V_0), _stringLiteral972720932, /*hidden argument*/NULL);
		NullCheck(L_2);
		ArrayElementTypeCheck (L_2, L_4);
		(L_2)->SetAt(static_cast<il2cpp_array_size_t>(1), (RuntimeObject *)L_4);
		ObjectU5BU5D_t2843939325* L_5 = L_2;
		String_t* L_6 = ___logType1;
		NullCheck(L_5);
		ArrayElementTypeCheck (L_5, L_6);
		(L_5)->SetAt(static_cast<il2cpp_array_size_t>(2), (RuntimeObject *)L_6);
		ObjectU5BU5D_t2843939325* L_7 = L_5;
		String_t* L_8 = ___msg2;
		NullCheck(L_7);
		ArrayElementTypeCheck (L_7, L_8);
		(L_7)->SetAt(static_cast<il2cpp_array_size_t>(3), (RuntimeObject *)L_8);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_9 = String_Format_m630303134(NULL /*static, unused*/, _stringLiteral2783215974, L_7, /*hidden argument*/NULL);
		return L_9;
	}
}
// System.Void GooglePlayGames.OurUtils.Logger::.cctor()
extern "C"  void Logger__cctor_m1133542101 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Logger__cctor_m1133542101_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		((Logger_t3934082555_StaticFields*)il2cpp_codegen_static_fields_for(Logger_t3934082555_il2cpp_TypeInfo_var))->set_warningLogEnabled_1((bool)1);
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
// System.Void GooglePlayGames.OurUtils.Logger/<d>c__AnonStorey0::.ctor()
extern "C"  void U3CdU3Ec__AnonStorey0__ctor_m2573530652 (U3CdU3Ec__AnonStorey0_t2350509859 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m297566312(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void GooglePlayGames.OurUtils.Logger/<d>c__AnonStorey0::<>m__0()
extern "C"  void U3CdU3Ec__AnonStorey0_U3CU3Em__0_m1228335655 (U3CdU3Ec__AnonStorey0_t2350509859 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (U3CdU3Ec__AnonStorey0_U3CU3Em__0_m1228335655_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_0 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_2();
		String_t* L_1 = __this->get_msg_0();
		IL2CPP_RUNTIME_CLASS_INIT(Logger_t3934082555_il2cpp_TypeInfo_var);
		String_t* L_2 = Logger_ToLogMessage_m1026262968(NULL /*static, unused*/, L_0, _stringLiteral3145108695, L_1, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Debug_t3317548046_il2cpp_TypeInfo_var);
		Debug_Log_m4051431634(NULL /*static, unused*/, L_2, /*hidden argument*/NULL);
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
// System.Void GooglePlayGames.OurUtils.Logger/<e>c__AnonStorey2::.ctor()
extern "C"  void U3CeU3Ec__AnonStorey2__ctor_m2768254390 (U3CeU3Ec__AnonStorey2_t2346119983 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m297566312(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void GooglePlayGames.OurUtils.Logger/<e>c__AnonStorey2::<>m__0()
extern "C"  void U3CeU3Ec__AnonStorey2_U3CU3Em__0_m1436950235 (U3CeU3Ec__AnonStorey2_t2346119983 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (U3CeU3Ec__AnonStorey2_U3CU3Em__0_m1436950235_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		String_t* L_0 = __this->get_msg_0();
		IL2CPP_RUNTIME_CLASS_INIT(Logger_t3934082555_il2cpp_TypeInfo_var);
		String_t* L_1 = Logger_ToLogMessage_m1026262968(NULL /*static, unused*/, _stringLiteral298050862, _stringLiteral562053875, L_0, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Debug_t3317548046_il2cpp_TypeInfo_var);
		Debug_LogWarning_m3752629331(NULL /*static, unused*/, L_1, /*hidden argument*/NULL);
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
// System.Void GooglePlayGames.OurUtils.Logger/<w>c__AnonStorey1::.ctor()
extern "C"  void U3CwU3Ec__AnonStorey1__ctor_m3964734600 (U3CwU3Ec__AnonStorey1_t2080961746 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m297566312(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void GooglePlayGames.OurUtils.Logger/<w>c__AnonStorey1::<>m__0()
extern "C"  void U3CwU3Ec__AnonStorey1_U3CU3Em__0_m2699359925 (U3CwU3Ec__AnonStorey1_t2080961746 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (U3CwU3Ec__AnonStorey1_U3CU3Em__0_m2699359925_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		String_t* L_0 = __this->get_msg_0();
		IL2CPP_RUNTIME_CLASS_INIT(Logger_t3934082555_il2cpp_TypeInfo_var);
		String_t* L_1 = Logger_ToLogMessage_m1026262968(NULL /*static, unused*/, _stringLiteral2219906404, _stringLiteral3226225707, L_0, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Debug_t3317548046_il2cpp_TypeInfo_var);
		Debug_LogWarning_m3752629331(NULL /*static, unused*/, L_1, /*hidden argument*/NULL);
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
// System.Boolean GooglePlayGames.OurUtils.Misc::BuffersAreIdentical(System.Byte[],System.Byte[])
extern "C"  bool Misc_BuffersAreIdentical_m3176776738 (RuntimeObject * __this /* static, unused */, ByteU5BU5D_t4116647657* ___a0, ByteU5BU5D_t4116647657* ___b1, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	{
		ByteU5BU5D_t4116647657* L_0 = ___a0;
		ByteU5BU5D_t4116647657* L_1 = ___b1;
		if ((!(((RuntimeObject*)(ByteU5BU5D_t4116647657*)L_0) == ((RuntimeObject*)(ByteU5BU5D_t4116647657*)L_1))))
		{
			goto IL_0009;
		}
	}
	{
		return (bool)1;
	}

IL_0009:
	{
		ByteU5BU5D_t4116647657* L_2 = ___a0;
		if (!L_2)
		{
			goto IL_0015;
		}
	}
	{
		ByteU5BU5D_t4116647657* L_3 = ___b1;
		if (L_3)
		{
			goto IL_0017;
		}
	}

IL_0015:
	{
		return (bool)0;
	}

IL_0017:
	{
		ByteU5BU5D_t4116647657* L_4 = ___a0;
		NullCheck(L_4);
		ByteU5BU5D_t4116647657* L_5 = ___b1;
		NullCheck(L_5);
		if ((((int32_t)(((int32_t)((int32_t)(((RuntimeArray *)L_4)->max_length))))) == ((int32_t)(((int32_t)((int32_t)(((RuntimeArray *)L_5)->max_length)))))))
		{
			goto IL_0024;
		}
	}
	{
		return (bool)0;
	}

IL_0024:
	{
		V_0 = 0;
		goto IL_003c;
	}

IL_002b:
	{
		ByteU5BU5D_t4116647657* L_6 = ___a0;
		int32_t L_7 = V_0;
		NullCheck(L_6);
		int32_t L_8 = L_7;
		uint8_t L_9 = (L_6)->GetAt(static_cast<il2cpp_array_size_t>(L_8));
		ByteU5BU5D_t4116647657* L_10 = ___b1;
		int32_t L_11 = V_0;
		NullCheck(L_10);
		int32_t L_12 = L_11;
		uint8_t L_13 = (L_10)->GetAt(static_cast<il2cpp_array_size_t>(L_12));
		if ((((int32_t)L_9) == ((int32_t)L_13)))
		{
			goto IL_0038;
		}
	}
	{
		return (bool)0;
	}

IL_0038:
	{
		int32_t L_14 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_14, (int32_t)1));
	}

IL_003c:
	{
		int32_t L_15 = V_0;
		ByteU5BU5D_t4116647657* L_16 = ___a0;
		NullCheck(L_16);
		if ((((int32_t)L_15) < ((int32_t)(((int32_t)((int32_t)(((RuntimeArray *)L_16)->max_length)))))))
		{
			goto IL_002b;
		}
	}
	{
		return (bool)1;
	}
}
// System.Byte[] GooglePlayGames.OurUtils.Misc::GetSubsetBytes(System.Byte[],System.Int32,System.Int32)
extern "C"  ByteU5BU5D_t4116647657* Misc_GetSubsetBytes_m4142756084 (RuntimeObject * __this /* static, unused */, ByteU5BU5D_t4116647657* ___array0, int32_t ___offset1, int32_t ___length2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Misc_GetSubsetBytes_m4142756084_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	ByteU5BU5D_t4116647657* V_0 = NULL;
	{
		ByteU5BU5D_t4116647657* L_0 = ___array0;
		if (L_0)
		{
			goto IL_0011;
		}
	}
	{
		ArgumentNullException_t1615371798 * L_1 = (ArgumentNullException_t1615371798 *)il2cpp_codegen_object_new(ArgumentNullException_t1615371798_il2cpp_TypeInfo_var);
		ArgumentNullException__ctor_m1170824041(L_1, _stringLiteral4007973390, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, NULL, Misc_GetSubsetBytes_m4142756084_RuntimeMethod_var);
	}

IL_0011:
	{
		int32_t L_2 = ___offset1;
		if ((((int32_t)L_2) < ((int32_t)0)))
		{
			goto IL_0021;
		}
	}
	{
		int32_t L_3 = ___offset1;
		ByteU5BU5D_t4116647657* L_4 = ___array0;
		NullCheck(L_4);
		if ((((int32_t)L_3) < ((int32_t)(((int32_t)((int32_t)(((RuntimeArray *)L_4)->max_length)))))))
		{
			goto IL_002c;
		}
	}

IL_0021:
	{
		ArgumentOutOfRangeException_t777629997 * L_5 = (ArgumentOutOfRangeException_t777629997 *)il2cpp_codegen_object_new(ArgumentOutOfRangeException_t777629997_il2cpp_TypeInfo_var);
		ArgumentOutOfRangeException__ctor_m3628145864(L_5, _stringLiteral1082126080, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_5, NULL, Misc_GetSubsetBytes_m4142756084_RuntimeMethod_var);
	}

IL_002c:
	{
		int32_t L_6 = ___length2;
		if ((((int32_t)L_6) < ((int32_t)0)))
		{
			goto IL_003e;
		}
	}
	{
		ByteU5BU5D_t4116647657* L_7 = ___array0;
		NullCheck(L_7);
		int32_t L_8 = ___offset1;
		int32_t L_9 = ___length2;
		if ((((int32_t)((int32_t)il2cpp_codegen_subtract((int32_t)(((int32_t)((int32_t)(((RuntimeArray *)L_7)->max_length)))), (int32_t)L_8))) >= ((int32_t)L_9)))
		{
			goto IL_0049;
		}
	}

IL_003e:
	{
		ArgumentOutOfRangeException_t777629997 * L_10 = (ArgumentOutOfRangeException_t777629997 *)il2cpp_codegen_object_new(ArgumentOutOfRangeException_t777629997_il2cpp_TypeInfo_var);
		ArgumentOutOfRangeException__ctor_m3628145864(L_10, _stringLiteral1212500642, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_10, NULL, Misc_GetSubsetBytes_m4142756084_RuntimeMethod_var);
	}

IL_0049:
	{
		int32_t L_11 = ___offset1;
		if (L_11)
		{
			goto IL_005a;
		}
	}
	{
		int32_t L_12 = ___length2;
		ByteU5BU5D_t4116647657* L_13 = ___array0;
		NullCheck(L_13);
		if ((!(((uint32_t)L_12) == ((uint32_t)(((int32_t)((int32_t)(((RuntimeArray *)L_13)->max_length))))))))
		{
			goto IL_005a;
		}
	}
	{
		ByteU5BU5D_t4116647657* L_14 = ___array0;
		return L_14;
	}

IL_005a:
	{
		int32_t L_15 = ___length2;
		V_0 = ((ByteU5BU5D_t4116647657*)SZArrayNew(ByteU5BU5D_t4116647657_il2cpp_TypeInfo_var, (uint32_t)L_15));
		ByteU5BU5D_t4116647657* L_16 = ___array0;
		int32_t L_17 = ___offset1;
		ByteU5BU5D_t4116647657* L_18 = V_0;
		int32_t L_19 = ___length2;
		Array_Copy_m344457298(NULL /*static, unused*/, (RuntimeArray *)(RuntimeArray *)L_16, L_17, (RuntimeArray *)(RuntimeArray *)L_18, 0, L_19, /*hidden argument*/NULL);
		ByteU5BU5D_t4116647657* L_20 = V_0;
		return L_20;
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
// System.Void GooglePlayGames.OurUtils.PlayGamesHelperObject::.ctor()
extern "C"  void PlayGamesHelperObject__ctor_m842076472 (PlayGamesHelperObject_t4023745847 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (PlayGamesHelperObject__ctor_m842076472_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		List_1_t2736452219 * L_0 = (List_1_t2736452219 *)il2cpp_codegen_object_new(List_1_t2736452219_il2cpp_TypeInfo_var);
		List_1__ctor_m3850019872(L_0, /*hidden argument*/List_1__ctor_m3850019872_RuntimeMethod_var);
		__this->set_localQueue_5(L_0);
		MonoBehaviour__ctor_m1579109191(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void GooglePlayGames.OurUtils.PlayGamesHelperObject::CreateObject()
extern "C"  void PlayGamesHelperObject_CreateObject_m2548285831 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (PlayGamesHelperObject_CreateObject_m2548285831_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	GameObject_t1113636619 * V_0 = NULL;
	{
		IL2CPP_RUNTIME_CLASS_INIT(PlayGamesHelperObject_t4023745847_il2cpp_TypeInfo_var);
		PlayGamesHelperObject_t4023745847 * L_0 = ((PlayGamesHelperObject_t4023745847_StaticFields*)il2cpp_codegen_static_fields_for(PlayGamesHelperObject_t4023745847_il2cpp_TypeInfo_var))->get_instance_2();
		IL2CPP_RUNTIME_CLASS_INIT(Object_t631007953_il2cpp_TypeInfo_var);
		bool L_1 = Object_op_Inequality_m4071470834(NULL /*static, unused*/, L_0, (Object_t631007953 *)NULL, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_0011;
		}
	}
	{
		return;
	}

IL_0011:
	{
		bool L_2 = Application_get_isPlaying_m100394690(NULL /*static, unused*/, /*hidden argument*/NULL);
		if (!L_2)
		{
			goto IL_003c;
		}
	}
	{
		GameObject_t1113636619 * L_3 = (GameObject_t1113636619 *)il2cpp_codegen_object_new(GameObject_t1113636619_il2cpp_TypeInfo_var);
		GameObject__ctor_m2093116449(L_3, _stringLiteral1456124929, /*hidden argument*/NULL);
		V_0 = L_3;
		GameObject_t1113636619 * L_4 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(Object_t631007953_il2cpp_TypeInfo_var);
		Object_DontDestroyOnLoad_m166252750(NULL /*static, unused*/, L_4, /*hidden argument*/NULL);
		GameObject_t1113636619 * L_5 = V_0;
		NullCheck(L_5);
		PlayGamesHelperObject_t4023745847 * L_6 = GameObject_AddComponent_TisPlayGamesHelperObject_t4023745847_m1649163222(L_5, /*hidden argument*/GameObject_AddComponent_TisPlayGamesHelperObject_t4023745847_m1649163222_RuntimeMethod_var);
		IL2CPP_RUNTIME_CLASS_INIT(PlayGamesHelperObject_t4023745847_il2cpp_TypeInfo_var);
		((PlayGamesHelperObject_t4023745847_StaticFields*)il2cpp_codegen_static_fields_for(PlayGamesHelperObject_t4023745847_il2cpp_TypeInfo_var))->set_instance_2(L_6);
		goto IL_004c;
	}

IL_003c:
	{
		PlayGamesHelperObject_t4023745847 * L_7 = (PlayGamesHelperObject_t4023745847 *)il2cpp_codegen_object_new(PlayGamesHelperObject_t4023745847_il2cpp_TypeInfo_var);
		PlayGamesHelperObject__ctor_m842076472(L_7, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(PlayGamesHelperObject_t4023745847_il2cpp_TypeInfo_var);
		((PlayGamesHelperObject_t4023745847_StaticFields*)il2cpp_codegen_static_fields_for(PlayGamesHelperObject_t4023745847_il2cpp_TypeInfo_var))->set_instance_2(L_7);
		((PlayGamesHelperObject_t4023745847_StaticFields*)il2cpp_codegen_static_fields_for(PlayGamesHelperObject_t4023745847_il2cpp_TypeInfo_var))->set_sIsDummy_3((bool)1);
	}

IL_004c:
	{
		return;
	}
}
// System.Void GooglePlayGames.OurUtils.PlayGamesHelperObject::Awake()
extern "C"  void PlayGamesHelperObject_Awake_m2472884359 (PlayGamesHelperObject_t4023745847 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (PlayGamesHelperObject_Awake_m2472884359_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		GameObject_t1113636619 * L_0 = Component_get_gameObject_m442555142(__this, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_t631007953_il2cpp_TypeInfo_var);
		Object_DontDestroyOnLoad_m166252750(NULL /*static, unused*/, L_0, /*hidden argument*/NULL);
		return;
	}
}
// System.Void GooglePlayGames.OurUtils.PlayGamesHelperObject::OnDisable()
extern "C"  void PlayGamesHelperObject_OnDisable_m2619165721 (PlayGamesHelperObject_t4023745847 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (PlayGamesHelperObject_OnDisable_m2619165721_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(PlayGamesHelperObject_t4023745847_il2cpp_TypeInfo_var);
		PlayGamesHelperObject_t4023745847 * L_0 = ((PlayGamesHelperObject_t4023745847_StaticFields*)il2cpp_codegen_static_fields_for(PlayGamesHelperObject_t4023745847_il2cpp_TypeInfo_var))->get_instance_2();
		IL2CPP_RUNTIME_CLASS_INIT(Object_t631007953_il2cpp_TypeInfo_var);
		bool L_1 = Object_op_Equality_m1810815630(NULL /*static, unused*/, L_0, __this, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_0016;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(PlayGamesHelperObject_t4023745847_il2cpp_TypeInfo_var);
		((PlayGamesHelperObject_t4023745847_StaticFields*)il2cpp_codegen_static_fields_for(PlayGamesHelperObject_t4023745847_il2cpp_TypeInfo_var))->set_instance_2((PlayGamesHelperObject_t4023745847 *)NULL);
	}

IL_0016:
	{
		return;
	}
}
// System.Void GooglePlayGames.OurUtils.PlayGamesHelperObject::RunCoroutine(System.Collections.IEnumerator)
extern "C"  void PlayGamesHelperObject_RunCoroutine_m2582369998 (RuntimeObject * __this /* static, unused */, RuntimeObject* ___action0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (PlayGamesHelperObject_RunCoroutine_m2582369998_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	U3CRunCoroutineU3Ec__AnonStorey0_t3592917427 * V_0 = NULL;
	{
		U3CRunCoroutineU3Ec__AnonStorey0_t3592917427 * L_0 = (U3CRunCoroutineU3Ec__AnonStorey0_t3592917427 *)il2cpp_codegen_object_new(U3CRunCoroutineU3Ec__AnonStorey0_t3592917427_il2cpp_TypeInfo_var);
		U3CRunCoroutineU3Ec__AnonStorey0__ctor_m292185709(L_0, /*hidden argument*/NULL);
		V_0 = L_0;
		U3CRunCoroutineU3Ec__AnonStorey0_t3592917427 * L_1 = V_0;
		RuntimeObject* L_2 = ___action0;
		NullCheck(L_1);
		L_1->set_action_0(L_2);
		IL2CPP_RUNTIME_CLASS_INIT(PlayGamesHelperObject_t4023745847_il2cpp_TypeInfo_var);
		PlayGamesHelperObject_t4023745847 * L_3 = ((PlayGamesHelperObject_t4023745847_StaticFields*)il2cpp_codegen_static_fields_for(PlayGamesHelperObject_t4023745847_il2cpp_TypeInfo_var))->get_instance_2();
		IL2CPP_RUNTIME_CLASS_INIT(Object_t631007953_il2cpp_TypeInfo_var);
		bool L_4 = Object_op_Inequality_m4071470834(NULL /*static, unused*/, L_3, (Object_t631007953 *)NULL, /*hidden argument*/NULL);
		if (!L_4)
		{
			goto IL_002e;
		}
	}
	{
		U3CRunCoroutineU3Ec__AnonStorey0_t3592917427 * L_5 = V_0;
		intptr_t L_6 = (intptr_t)U3CRunCoroutineU3Ec__AnonStorey0_U3CU3Em__0_m735634040_RuntimeMethod_var;
		Action_t1264377477 * L_7 = (Action_t1264377477 *)il2cpp_codegen_object_new(Action_t1264377477_il2cpp_TypeInfo_var);
		Action__ctor_m2994342681(L_7, L_5, L_6, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(PlayGamesHelperObject_t4023745847_il2cpp_TypeInfo_var);
		PlayGamesHelperObject_RunOnGameThread_m3356747975(NULL /*static, unused*/, L_7, /*hidden argument*/NULL);
	}

IL_002e:
	{
		return;
	}
}
// System.Void GooglePlayGames.OurUtils.PlayGamesHelperObject::RunOnGameThread(System.Action)
extern "C"  void PlayGamesHelperObject_RunOnGameThread_m3356747975 (RuntimeObject * __this /* static, unused */, Action_t1264377477 * ___action0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (PlayGamesHelperObject_RunOnGameThread_m3356747975_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject * V_0 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		Action_t1264377477 * L_0 = ___action0;
		if (L_0)
		{
			goto IL_0011;
		}
	}
	{
		ArgumentNullException_t1615371798 * L_1 = (ArgumentNullException_t1615371798 *)il2cpp_codegen_object_new(ArgumentNullException_t1615371798_il2cpp_TypeInfo_var);
		ArgumentNullException__ctor_m1170824041(L_1, _stringLiteral2365897554, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, NULL, PlayGamesHelperObject_RunOnGameThread_m3356747975_RuntimeMethod_var);
	}

IL_0011:
	{
		IL2CPP_RUNTIME_CLASS_INIT(PlayGamesHelperObject_t4023745847_il2cpp_TypeInfo_var);
		bool L_2 = ((PlayGamesHelperObject_t4023745847_StaticFields*)il2cpp_codegen_static_fields_for(PlayGamesHelperObject_t4023745847_il2cpp_TypeInfo_var))->get_sIsDummy_3();
		if (!L_2)
		{
			goto IL_001c;
		}
	}
	{
		return;
	}

IL_001c:
	{
		IL2CPP_RUNTIME_CLASS_INIT(PlayGamesHelperObject_t4023745847_il2cpp_TypeInfo_var);
		List_1_t2736452219 * L_3 = ((PlayGamesHelperObject_t4023745847_StaticFields*)il2cpp_codegen_static_fields_for(PlayGamesHelperObject_t4023745847_il2cpp_TypeInfo_var))->get_sQueue_4();
		V_0 = L_3;
		RuntimeObject * L_4 = V_0;
		Monitor_Enter_m2249409497(NULL /*static, unused*/, L_4, /*hidden argument*/NULL);
	}

IL_0028:
	try
	{ // begin try (depth: 1)
		IL2CPP_RUNTIME_CLASS_INIT(PlayGamesHelperObject_t4023745847_il2cpp_TypeInfo_var);
		List_1_t2736452219 * L_5 = ((PlayGamesHelperObject_t4023745847_StaticFields*)il2cpp_codegen_static_fields_for(PlayGamesHelperObject_t4023745847_il2cpp_TypeInfo_var))->get_sQueue_4();
		Action_t1264377477 * L_6 = ___action0;
		NullCheck(L_5);
		List_1_Add_m263651446(L_5, L_6, /*hidden argument*/List_1_Add_m263651446_RuntimeMethod_var);
		il2cpp_codegen_memory_barrier();
		((PlayGamesHelperObject_t4023745847_StaticFields*)il2cpp_codegen_static_fields_for(PlayGamesHelperObject_t4023745847_il2cpp_TypeInfo_var))->set_sQueueEmpty_6(0);
		IL2CPP_LEAVE(0x47, FINALLY_0040);
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_0040;
	}

FINALLY_0040:
	{ // begin finally (depth: 1)
		RuntimeObject * L_7 = V_0;
		Monitor_Exit_m3585316909(NULL /*static, unused*/, L_7, /*hidden argument*/NULL);
		IL2CPP_END_FINALLY(64)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(64)
	{
		IL2CPP_JUMP_TBL(0x47, IL_0047)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
	}

IL_0047:
	{
		return;
	}
}
// System.Void GooglePlayGames.OurUtils.PlayGamesHelperObject::Update()
extern "C"  void PlayGamesHelperObject_Update_m1666979070 (PlayGamesHelperObject_t4023745847 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (PlayGamesHelperObject_Update_m1666979070_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject * V_0 = NULL;
	int32_t V_1 = 0;
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		IL2CPP_RUNTIME_CLASS_INIT(PlayGamesHelperObject_t4023745847_il2cpp_TypeInfo_var);
		bool L_0 = ((PlayGamesHelperObject_t4023745847_StaticFields*)il2cpp_codegen_static_fields_for(PlayGamesHelperObject_t4023745847_il2cpp_TypeInfo_var))->get_sIsDummy_3();
		if (L_0)
		{
			goto IL_0016;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(PlayGamesHelperObject_t4023745847_il2cpp_TypeInfo_var);
		bool L_1 = ((PlayGamesHelperObject_t4023745847_StaticFields*)il2cpp_codegen_static_fields_for(PlayGamesHelperObject_t4023745847_il2cpp_TypeInfo_var))->get_sQueueEmpty_6();
		il2cpp_codegen_memory_barrier();
		if (!L_1)
		{
			goto IL_0017;
		}
	}

IL_0016:
	{
		return;
	}

IL_0017:
	{
		List_1_t2736452219 * L_2 = __this->get_localQueue_5();
		NullCheck(L_2);
		List_1_Clear_m3969294004(L_2, /*hidden argument*/List_1_Clear_m3969294004_RuntimeMethod_var);
		IL2CPP_RUNTIME_CLASS_INIT(PlayGamesHelperObject_t4023745847_il2cpp_TypeInfo_var);
		List_1_t2736452219 * L_3 = ((PlayGamesHelperObject_t4023745847_StaticFields*)il2cpp_codegen_static_fields_for(PlayGamesHelperObject_t4023745847_il2cpp_TypeInfo_var))->get_sQueue_4();
		V_0 = L_3;
		RuntimeObject * L_4 = V_0;
		Monitor_Enter_m2249409497(NULL /*static, unused*/, L_4, /*hidden argument*/NULL);
	}

IL_002e:
	try
	{ // begin try (depth: 1)
		List_1_t2736452219 * L_5 = __this->get_localQueue_5();
		IL2CPP_RUNTIME_CLASS_INIT(PlayGamesHelperObject_t4023745847_il2cpp_TypeInfo_var);
		List_1_t2736452219 * L_6 = ((PlayGamesHelperObject_t4023745847_StaticFields*)il2cpp_codegen_static_fields_for(PlayGamesHelperObject_t4023745847_il2cpp_TypeInfo_var))->get_sQueue_4();
		NullCheck(L_5);
		List_1_AddRange_m3508878779(L_5, L_6, /*hidden argument*/List_1_AddRange_m3508878779_RuntimeMethod_var);
		List_1_t2736452219 * L_7 = ((PlayGamesHelperObject_t4023745847_StaticFields*)il2cpp_codegen_static_fields_for(PlayGamesHelperObject_t4023745847_il2cpp_TypeInfo_var))->get_sQueue_4();
		NullCheck(L_7);
		List_1_Clear_m3969294004(L_7, /*hidden argument*/List_1_Clear_m3969294004_RuntimeMethod_var);
		il2cpp_codegen_memory_barrier();
		((PlayGamesHelperObject_t4023745847_StaticFields*)il2cpp_codegen_static_fields_for(PlayGamesHelperObject_t4023745847_il2cpp_TypeInfo_var))->set_sQueueEmpty_6(1);
		IL2CPP_LEAVE(0x5C, FINALLY_0055);
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_0055;
	}

FINALLY_0055:
	{ // begin finally (depth: 1)
		RuntimeObject * L_8 = V_0;
		Monitor_Exit_m3585316909(NULL /*static, unused*/, L_8, /*hidden argument*/NULL);
		IL2CPP_END_FINALLY(85)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(85)
	{
		IL2CPP_JUMP_TBL(0x5C, IL_005c)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
	}

IL_005c:
	{
		V_1 = 0;
		goto IL_0078;
	}

IL_0063:
	{
		List_1_t2736452219 * L_9 = __this->get_localQueue_5();
		int32_t L_10 = V_1;
		NullCheck(L_9);
		Action_t1264377477 * L_11 = List_1_get_Item_m1396344728(L_9, L_10, /*hidden argument*/List_1_get_Item_m1396344728_RuntimeMethod_var);
		NullCheck(L_11);
		Action_Invoke_m937035532(L_11, /*hidden argument*/NULL);
		int32_t L_12 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_12, (int32_t)1));
	}

IL_0078:
	{
		int32_t L_13 = V_1;
		List_1_t2736452219 * L_14 = __this->get_localQueue_5();
		NullCheck(L_14);
		int32_t L_15 = List_1_get_Count_m2893360516(L_14, /*hidden argument*/List_1_get_Count_m2893360516_RuntimeMethod_var);
		if ((((int32_t)L_13) < ((int32_t)L_15)))
		{
			goto IL_0063;
		}
	}
	{
		return;
	}
}
// System.Void GooglePlayGames.OurUtils.PlayGamesHelperObject::OnApplicationFocus(System.Boolean)
extern "C"  void PlayGamesHelperObject_OnApplicationFocus_m746245203 (PlayGamesHelperObject_t4023745847 * __this, bool ___focused0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (PlayGamesHelperObject_OnApplicationFocus_m746245203_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Action_1_t269755560 * V_0 = NULL;
	Enumerator_t3631074179  V_1;
	memset(&V_1, 0, sizeof(V_1));
	Exception_t * V_2 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		IL2CPP_RUNTIME_CLASS_INIT(PlayGamesHelperObject_t4023745847_il2cpp_TypeInfo_var);
		List_1_t1741830302 * L_0 = ((PlayGamesHelperObject_t4023745847_StaticFields*)il2cpp_codegen_static_fields_for(PlayGamesHelperObject_t4023745847_il2cpp_TypeInfo_var))->get_sFocusCallbackList_8();
		NullCheck(L_0);
		Enumerator_t3631074179  L_1 = List_1_GetEnumerator_m1802404592(L_0, /*hidden argument*/List_1_GetEnumerator_m1802404592_RuntimeMethod_var);
		V_1 = L_1;
	}

IL_000b:
	try
	{ // begin try (depth: 1)
		{
			goto IL_004a;
		}

IL_0010:
		{
			Action_1_t269755560 * L_2 = Enumerator_get_Current_m3156154971((Enumerator_t3631074179 *)(&V_1), /*hidden argument*/Enumerator_get_Current_m3156154971_RuntimeMethod_var);
			V_0 = L_2;
		}

IL_0018:
		try
		{ // begin try (depth: 2)
			Action_1_t269755560 * L_3 = V_0;
			bool L_4 = ___focused0;
			NullCheck(L_3);
			Action_1_Invoke_m1933767679(L_3, L_4, /*hidden argument*/Action_1_Invoke_m1933767679_RuntimeMethod_var);
			goto IL_004a;
		} // end try (depth: 2)
		catch(Il2CppExceptionWrapper& e)
		{
			__exception_local = (Exception_t *)e.ex;
			if(il2cpp_codegen_class_is_assignable_from (Exception_t_il2cpp_TypeInfo_var, il2cpp_codegen_object_class(e.ex)))
				goto CATCH_0024;
			throw e;
		}

CATCH_0024:
		{ // begin catch(System.Exception)
			V_2 = ((Exception_t *)__exception_local);
			Exception_t * L_5 = V_2;
			NullCheck(L_5);
			String_t* L_6 = VirtFuncInvoker0< String_t* >::Invoke(5 /* System.String System.Exception::get_Message() */, L_5);
			Exception_t * L_7 = V_2;
			NullCheck(L_7);
			String_t* L_8 = VirtFuncInvoker0< String_t* >::Invoke(6 /* System.String System.Exception::get_StackTrace() */, L_7);
			IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
			String_t* L_9 = String_Concat_m2163913788(NULL /*static, unused*/, _stringLiteral2504426073, L_6, _stringLiteral3452614566, L_8, /*hidden argument*/NULL);
			IL2CPP_RUNTIME_CLASS_INIT(Debug_t3317548046_il2cpp_TypeInfo_var);
			Debug_LogError_m2850623458(NULL /*static, unused*/, L_9, /*hidden argument*/NULL);
			goto IL_004a;
		} // end catch (depth: 2)

IL_004a:
		{
			bool L_10 = Enumerator_MoveNext_m3351297324((Enumerator_t3631074179 *)(&V_1), /*hidden argument*/Enumerator_MoveNext_m3351297324_RuntimeMethod_var);
			if (L_10)
			{
				goto IL_0010;
			}
		}

IL_0056:
		{
			IL2CPP_LEAVE(0x69, FINALLY_005b);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_005b;
	}

FINALLY_005b:
	{ // begin finally (depth: 1)
		Enumerator_Dispose_m3070555129((Enumerator_t3631074179 *)(&V_1), /*hidden argument*/Enumerator_Dispose_m3070555129_RuntimeMethod_var);
		IL2CPP_END_FINALLY(91)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(91)
	{
		IL2CPP_JUMP_TBL(0x69, IL_0069)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
	}

IL_0069:
	{
		return;
	}
}
// System.Void GooglePlayGames.OurUtils.PlayGamesHelperObject::OnApplicationPause(System.Boolean)
extern "C"  void PlayGamesHelperObject_OnApplicationPause_m670092642 (PlayGamesHelperObject_t4023745847 * __this, bool ___paused0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (PlayGamesHelperObject_OnApplicationPause_m670092642_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Action_1_t269755560 * V_0 = NULL;
	Enumerator_t3631074179  V_1;
	memset(&V_1, 0, sizeof(V_1));
	Exception_t * V_2 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		IL2CPP_RUNTIME_CLASS_INIT(PlayGamesHelperObject_t4023745847_il2cpp_TypeInfo_var);
		List_1_t1741830302 * L_0 = ((PlayGamesHelperObject_t4023745847_StaticFields*)il2cpp_codegen_static_fields_for(PlayGamesHelperObject_t4023745847_il2cpp_TypeInfo_var))->get_sPauseCallbackList_7();
		NullCheck(L_0);
		Enumerator_t3631074179  L_1 = List_1_GetEnumerator_m1802404592(L_0, /*hidden argument*/List_1_GetEnumerator_m1802404592_RuntimeMethod_var);
		V_1 = L_1;
	}

IL_000b:
	try
	{ // begin try (depth: 1)
		{
			goto IL_004a;
		}

IL_0010:
		{
			Action_1_t269755560 * L_2 = Enumerator_get_Current_m3156154971((Enumerator_t3631074179 *)(&V_1), /*hidden argument*/Enumerator_get_Current_m3156154971_RuntimeMethod_var);
			V_0 = L_2;
		}

IL_0018:
		try
		{ // begin try (depth: 2)
			Action_1_t269755560 * L_3 = V_0;
			bool L_4 = ___paused0;
			NullCheck(L_3);
			Action_1_Invoke_m1933767679(L_3, L_4, /*hidden argument*/Action_1_Invoke_m1933767679_RuntimeMethod_var);
			goto IL_004a;
		} // end try (depth: 2)
		catch(Il2CppExceptionWrapper& e)
		{
			__exception_local = (Exception_t *)e.ex;
			if(il2cpp_codegen_class_is_assignable_from (Exception_t_il2cpp_TypeInfo_var, il2cpp_codegen_object_class(e.ex)))
				goto CATCH_0024;
			throw e;
		}

CATCH_0024:
		{ // begin catch(System.Exception)
			V_2 = ((Exception_t *)__exception_local);
			Exception_t * L_5 = V_2;
			NullCheck(L_5);
			String_t* L_6 = VirtFuncInvoker0< String_t* >::Invoke(5 /* System.String System.Exception::get_Message() */, L_5);
			Exception_t * L_7 = V_2;
			NullCheck(L_7);
			String_t* L_8 = VirtFuncInvoker0< String_t* >::Invoke(6 /* System.String System.Exception::get_StackTrace() */, L_7);
			IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
			String_t* L_9 = String_Concat_m2163913788(NULL /*static, unused*/, _stringLiteral3116899887, L_6, _stringLiteral3452614566, L_8, /*hidden argument*/NULL);
			IL2CPP_RUNTIME_CLASS_INIT(Debug_t3317548046_il2cpp_TypeInfo_var);
			Debug_LogError_m2850623458(NULL /*static, unused*/, L_9, /*hidden argument*/NULL);
			goto IL_004a;
		} // end catch (depth: 2)

IL_004a:
		{
			bool L_10 = Enumerator_MoveNext_m3351297324((Enumerator_t3631074179 *)(&V_1), /*hidden argument*/Enumerator_MoveNext_m3351297324_RuntimeMethod_var);
			if (L_10)
			{
				goto IL_0010;
			}
		}

IL_0056:
		{
			IL2CPP_LEAVE(0x69, FINALLY_005b);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_005b;
	}

FINALLY_005b:
	{ // begin finally (depth: 1)
		Enumerator_Dispose_m3070555129((Enumerator_t3631074179 *)(&V_1), /*hidden argument*/Enumerator_Dispose_m3070555129_RuntimeMethod_var);
		IL2CPP_END_FINALLY(91)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(91)
	{
		IL2CPP_JUMP_TBL(0x69, IL_0069)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
	}

IL_0069:
	{
		return;
	}
}
// System.Void GooglePlayGames.OurUtils.PlayGamesHelperObject::AddFocusCallback(System.Action`1<System.Boolean>)
extern "C"  void PlayGamesHelperObject_AddFocusCallback_m2762991539 (RuntimeObject * __this /* static, unused */, Action_1_t269755560 * ___callback0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (PlayGamesHelperObject_AddFocusCallback_m2762991539_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(PlayGamesHelperObject_t4023745847_il2cpp_TypeInfo_var);
		List_1_t1741830302 * L_0 = ((PlayGamesHelperObject_t4023745847_StaticFields*)il2cpp_codegen_static_fields_for(PlayGamesHelperObject_t4023745847_il2cpp_TypeInfo_var))->get_sFocusCallbackList_8();
		Action_1_t269755560 * L_1 = ___callback0;
		NullCheck(L_0);
		bool L_2 = List_1_Contains_m2016498970(L_0, L_1, /*hidden argument*/List_1_Contains_m2016498970_RuntimeMethod_var);
		if (L_2)
		{
			goto IL_001b;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(PlayGamesHelperObject_t4023745847_il2cpp_TypeInfo_var);
		List_1_t1741830302 * L_3 = ((PlayGamesHelperObject_t4023745847_StaticFields*)il2cpp_codegen_static_fields_for(PlayGamesHelperObject_t4023745847_il2cpp_TypeInfo_var))->get_sFocusCallbackList_8();
		Action_1_t269755560 * L_4 = ___callback0;
		NullCheck(L_3);
		List_1_Add_m2257682863(L_3, L_4, /*hidden argument*/List_1_Add_m2257682863_RuntimeMethod_var);
	}

IL_001b:
	{
		return;
	}
}
// System.Boolean GooglePlayGames.OurUtils.PlayGamesHelperObject::RemoveFocusCallback(System.Action`1<System.Boolean>)
extern "C"  bool PlayGamesHelperObject_RemoveFocusCallback_m1727832764 (RuntimeObject * __this /* static, unused */, Action_1_t269755560 * ___callback0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (PlayGamesHelperObject_RemoveFocusCallback_m1727832764_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(PlayGamesHelperObject_t4023745847_il2cpp_TypeInfo_var);
		List_1_t1741830302 * L_0 = ((PlayGamesHelperObject_t4023745847_StaticFields*)il2cpp_codegen_static_fields_for(PlayGamesHelperObject_t4023745847_il2cpp_TypeInfo_var))->get_sFocusCallbackList_8();
		Action_1_t269755560 * L_1 = ___callback0;
		NullCheck(L_0);
		bool L_2 = List_1_Remove_m2142717768(L_0, L_1, /*hidden argument*/List_1_Remove_m2142717768_RuntimeMethod_var);
		return L_2;
	}
}
// System.Void GooglePlayGames.OurUtils.PlayGamesHelperObject::AddPauseCallback(System.Action`1<System.Boolean>)
extern "C"  void PlayGamesHelperObject_AddPauseCallback_m3737367853 (RuntimeObject * __this /* static, unused */, Action_1_t269755560 * ___callback0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (PlayGamesHelperObject_AddPauseCallback_m3737367853_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(PlayGamesHelperObject_t4023745847_il2cpp_TypeInfo_var);
		List_1_t1741830302 * L_0 = ((PlayGamesHelperObject_t4023745847_StaticFields*)il2cpp_codegen_static_fields_for(PlayGamesHelperObject_t4023745847_il2cpp_TypeInfo_var))->get_sPauseCallbackList_7();
		Action_1_t269755560 * L_1 = ___callback0;
		NullCheck(L_0);
		bool L_2 = List_1_Contains_m2016498970(L_0, L_1, /*hidden argument*/List_1_Contains_m2016498970_RuntimeMethod_var);
		if (L_2)
		{
			goto IL_001b;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(PlayGamesHelperObject_t4023745847_il2cpp_TypeInfo_var);
		List_1_t1741830302 * L_3 = ((PlayGamesHelperObject_t4023745847_StaticFields*)il2cpp_codegen_static_fields_for(PlayGamesHelperObject_t4023745847_il2cpp_TypeInfo_var))->get_sPauseCallbackList_7();
		Action_1_t269755560 * L_4 = ___callback0;
		NullCheck(L_3);
		List_1_Add_m2257682863(L_3, L_4, /*hidden argument*/List_1_Add_m2257682863_RuntimeMethod_var);
	}

IL_001b:
	{
		return;
	}
}
// System.Boolean GooglePlayGames.OurUtils.PlayGamesHelperObject::RemovePauseCallback(System.Action`1<System.Boolean>)
extern "C"  bool PlayGamesHelperObject_RemovePauseCallback_m4074309365 (RuntimeObject * __this /* static, unused */, Action_1_t269755560 * ___callback0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (PlayGamesHelperObject_RemovePauseCallback_m4074309365_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(PlayGamesHelperObject_t4023745847_il2cpp_TypeInfo_var);
		List_1_t1741830302 * L_0 = ((PlayGamesHelperObject_t4023745847_StaticFields*)il2cpp_codegen_static_fields_for(PlayGamesHelperObject_t4023745847_il2cpp_TypeInfo_var))->get_sPauseCallbackList_7();
		Action_1_t269755560 * L_1 = ___callback0;
		NullCheck(L_0);
		bool L_2 = List_1_Remove_m2142717768(L_0, L_1, /*hidden argument*/List_1_Remove_m2142717768_RuntimeMethod_var);
		return L_2;
	}
}
// System.Void GooglePlayGames.OurUtils.PlayGamesHelperObject::.cctor()
extern "C"  void PlayGamesHelperObject__cctor_m3952985837 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (PlayGamesHelperObject__cctor_m3952985837_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		((PlayGamesHelperObject_t4023745847_StaticFields*)il2cpp_codegen_static_fields_for(PlayGamesHelperObject_t4023745847_il2cpp_TypeInfo_var))->set_instance_2((PlayGamesHelperObject_t4023745847 *)NULL);
		((PlayGamesHelperObject_t4023745847_StaticFields*)il2cpp_codegen_static_fields_for(PlayGamesHelperObject_t4023745847_il2cpp_TypeInfo_var))->set_sIsDummy_3((bool)0);
		List_1_t2736452219 * L_0 = (List_1_t2736452219 *)il2cpp_codegen_object_new(List_1_t2736452219_il2cpp_TypeInfo_var);
		List_1__ctor_m3850019872(L_0, /*hidden argument*/List_1__ctor_m3850019872_RuntimeMethod_var);
		((PlayGamesHelperObject_t4023745847_StaticFields*)il2cpp_codegen_static_fields_for(PlayGamesHelperObject_t4023745847_il2cpp_TypeInfo_var))->set_sQueue_4(L_0);
		il2cpp_codegen_memory_barrier();
		((PlayGamesHelperObject_t4023745847_StaticFields*)il2cpp_codegen_static_fields_for(PlayGamesHelperObject_t4023745847_il2cpp_TypeInfo_var))->set_sQueueEmpty_6(1);
		List_1_t1741830302 * L_1 = (List_1_t1741830302 *)il2cpp_codegen_object_new(List_1_t1741830302_il2cpp_TypeInfo_var);
		List_1__ctor_m70055677(L_1, /*hidden argument*/List_1__ctor_m70055677_RuntimeMethod_var);
		((PlayGamesHelperObject_t4023745847_StaticFields*)il2cpp_codegen_static_fields_for(PlayGamesHelperObject_t4023745847_il2cpp_TypeInfo_var))->set_sPauseCallbackList_7(L_1);
		List_1_t1741830302 * L_2 = (List_1_t1741830302 *)il2cpp_codegen_object_new(List_1_t1741830302_il2cpp_TypeInfo_var);
		List_1__ctor_m70055677(L_2, /*hidden argument*/List_1__ctor_m70055677_RuntimeMethod_var);
		((PlayGamesHelperObject_t4023745847_StaticFields*)il2cpp_codegen_static_fields_for(PlayGamesHelperObject_t4023745847_il2cpp_TypeInfo_var))->set_sFocusCallbackList_8(L_2);
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
// System.Void GooglePlayGames.OurUtils.PlayGamesHelperObject/<RunCoroutine>c__AnonStorey0::.ctor()
extern "C"  void U3CRunCoroutineU3Ec__AnonStorey0__ctor_m292185709 (U3CRunCoroutineU3Ec__AnonStorey0_t3592917427 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m297566312(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void GooglePlayGames.OurUtils.PlayGamesHelperObject/<RunCoroutine>c__AnonStorey0::<>m__0()
extern "C"  void U3CRunCoroutineU3Ec__AnonStorey0_U3CU3Em__0_m735634040 (U3CRunCoroutineU3Ec__AnonStorey0_t3592917427 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (U3CRunCoroutineU3Ec__AnonStorey0_U3CU3Em__0_m735634040_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(PlayGamesHelperObject_t4023745847_il2cpp_TypeInfo_var);
		PlayGamesHelperObject_t4023745847 * L_0 = ((PlayGamesHelperObject_t4023745847_StaticFields*)il2cpp_codegen_static_fields_for(PlayGamesHelperObject_t4023745847_il2cpp_TypeInfo_var))->get_instance_2();
		RuntimeObject* L_1 = __this->get_action_0();
		NullCheck(L_0);
		MonoBehaviour_StartCoroutine_m3411253000(L_0, L_1, /*hidden argument*/NULL);
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
// System.Void GooglePlayGames.PluginVersion::.ctor()
extern "C"  void PluginVersion__ctor_m771493026 (PluginVersion_t2872281160 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m297566312(__this, /*hidden argument*/NULL);
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
// System.Void Localize::.ctor()
extern "C"  void Localize__ctor_m1568928345 (Localize_t2088442295 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m297566312(__this, /*hidden argument*/NULL);
		return;
	}
}
// LocalizeString[] Localize::get_localizeStringList()
extern "C"  LocalizeStringU5BU5D_t1200507501* Localize_get_localizeStringList_m719393806 (Localize_t2088442295 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Localize_get_localizeStringList_m719393806_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		List_1_t1963720954 * L_0 = __this->get_list_0();
		NullCheck(L_0);
		LocalizeStringU5BU5D_t1200507501* L_1 = List_1_ToArray_m1385224522(L_0, /*hidden argument*/List_1_ToArray_m1385224522_RuntimeMethod_var);
		return L_1;
	}
}
// System.Void Localize::set_localizeStringList(LocalizeString[])
extern "C"  void Localize_set_localizeStringList_m1125332071 (Localize_t2088442295 * __this, LocalizeStringU5BU5D_t1200507501* ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Localize_set_localizeStringList_m1125332071_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		LocalizeStringU5BU5D_t1200507501* L_0 = ___value0;
		List_1_t1963720954 * L_1 = (List_1_t1963720954 *)il2cpp_codegen_object_new(List_1_t1963720954_il2cpp_TypeInfo_var);
		List_1__ctor_m2158357409(L_1, (RuntimeObject*)(RuntimeObject*)L_0, /*hidden argument*/List_1__ctor_m2158357409_RuntimeMethod_var);
		__this->set_list_0(L_1);
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
// System.Void LocalizeString::.ctor()
extern "C"  void LocalizeString__ctor_m2557820661 (LocalizeString_t491646212 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m297566312(__this, /*hidden argument*/NULL);
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
// System.Void LocalizeTool::.ctor()
extern "C"  void LocalizeTool__ctor_m2057244256 (LocalizeTool_t315363650 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m297566312(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void LocalizeTool::loadLocalizeString()
extern "C"  void LocalizeTool_loadLocalizeString_m3512941887 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (LocalizeTool_loadLocalizeString_m3512941887_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	TextAsset_t3022178571 * V_0 = NULL;
	XmlSerializer_t1117804635 * V_1 = NULL;
	Localize_t2088442295 * V_2 = NULL;
	String_t* V_3 = NULL;
	LocalizeString_t491646212 * V_4 = NULL;
	LocalizeStringU5BU5D_t1200507501* V_5 = NULL;
	int32_t V_6 = 0;
	{
		Object_t631007953 * L_0 = Resources_Load_m3880010804(NULL /*static, unused*/, _stringLiteral3768124858, /*hidden argument*/NULL);
		V_0 = ((TextAsset_t3022178571 *)IsInstClass((RuntimeObject*)L_0, TextAsset_t3022178571_il2cpp_TypeInfo_var));
		RuntimeTypeHandle_t3027515415  L_1 = { reinterpret_cast<intptr_t> (Localize_t2088442295_0_0_0_var) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_2 = Type_GetTypeFromHandle_m1620074514(NULL /*static, unused*/, L_1, /*hidden argument*/NULL);
		XmlSerializer_t1117804635 * L_3 = (XmlSerializer_t1117804635 *)il2cpp_codegen_object_new(XmlSerializer_t1117804635_il2cpp_TypeInfo_var);
		XmlSerializer__ctor_m1036498336(L_3, L_2, /*hidden argument*/NULL);
		V_1 = L_3;
		XmlSerializer_t1117804635 * L_4 = V_1;
		TextAsset_t3022178571 * L_5 = V_0;
		NullCheck(L_5);
		String_t* L_6 = TextAsset_get_text_m2027878391(L_5, /*hidden argument*/NULL);
		StringReader_t3465604688 * L_7 = (StringReader_t3465604688 *)il2cpp_codegen_object_new(StringReader_t3465604688_il2cpp_TypeInfo_var);
		StringReader__ctor_m126993932(L_7, L_6, /*hidden argument*/NULL);
		NullCheck(L_4);
		RuntimeObject * L_8 = XmlSerializer_Deserialize_m1833578159(L_4, L_7, /*hidden argument*/NULL);
		V_2 = ((Localize_t2088442295 *)IsInstClass((RuntimeObject*)L_8, Localize_t2088442295_il2cpp_TypeInfo_var));
		V_3 = _stringLiteral3454842811;
		int32_t L_9 = Application_get_systemLanguage_m3110370732(NULL /*static, unused*/, /*hidden argument*/NULL);
		if ((!(((uint32_t)L_9) == ((uint32_t)((int32_t)23)))))
		{
			goto IL_004f;
		}
	}
	{
		V_3 = _stringLiteral3454777285;
	}

IL_004f:
	{
		Localize_t2088442295 * L_10 = V_2;
		NullCheck(L_10);
		LocalizeStringU5BU5D_t1200507501* L_11 = Localize_get_localizeStringList_m719393806(L_10, /*hidden argument*/NULL);
		V_5 = L_11;
		V_6 = 0;
		goto IL_008a;
	}

IL_005f:
	{
		LocalizeStringU5BU5D_t1200507501* L_12 = V_5;
		int32_t L_13 = V_6;
		NullCheck(L_12);
		int32_t L_14 = L_13;
		LocalizeString_t491646212 * L_15 = (L_12)->GetAt(static_cast<il2cpp_array_size_t>(L_14));
		V_4 = L_15;
		LocalizeString_t491646212 * L_16 = V_4;
		NullCheck(L_16);
		String_t* L_17 = L_16->get_language_0();
		String_t* L_18 = V_3;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		bool L_19 = String_op_Equality_m920492651(NULL /*static, unused*/, L_17, L_18, /*hidden argument*/NULL);
		if (!L_19)
		{
			goto IL_0084;
		}
	}
	{
		LocalizeString_t491646212 * L_20 = V_4;
		((LocalizeTool_t315363650_StaticFields*)il2cpp_codegen_static_fields_for(LocalizeTool_t315363650_il2cpp_TypeInfo_var))->set_localizeString_0(L_20);
		goto IL_0095;
	}

IL_0084:
	{
		int32_t L_21 = V_6;
		V_6 = ((int32_t)il2cpp_codegen_add((int32_t)L_21, (int32_t)1));
	}

IL_008a:
	{
		int32_t L_22 = V_6;
		LocalizeStringU5BU5D_t1200507501* L_23 = V_5;
		NullCheck(L_23);
		if ((((int32_t)L_22) < ((int32_t)(((int32_t)((int32_t)(((RuntimeArray *)L_23)->max_length)))))))
		{
			goto IL_005f;
		}
	}

IL_0095:
	{
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
// System.Void MainSceneManager::.ctor()
extern "C"  void MainSceneManager__ctor_m1282062385 (MainSceneManager_t2603182452 * __this, const RuntimeMethod* method)
{
	{
		__this->set_DOT_INTERVAL_SIZE_2((40.0f));
		MonoBehaviour__ctor_m1579109191(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void MainSceneManager::Awake()
extern "C"  void MainSceneManager_Awake_m2893882138 (MainSceneManager_t2603182452 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (MainSceneManager_Awake_m2893882138_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	{
		V_0 = (bool)0;
		GameObject_t1113636619 * L_0 = GameObject_Find_m2032535176(NULL /*static, unused*/, _stringLiteral441913799, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_t631007953_il2cpp_TypeInfo_var);
		bool L_1 = Object_op_Equality_m1810815630(NULL /*static, unused*/, L_0, (Object_t631007953 *)NULL, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_0037;
		}
	}
	{
		Object_t631007953 * L_2 = Resources_Load_m3880010804(NULL /*static, unused*/, _stringLiteral3472418399, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_t631007953_il2cpp_TypeInfo_var);
		GameObject_t1113636619 * L_3 = Object_Instantiate_TisGameObject_t1113636619_m4070250708(NULL /*static, unused*/, ((GameObject_t1113636619 *)IsInstSealed((RuntimeObject*)L_2, GameObject_t1113636619_il2cpp_TypeInfo_var)), /*hidden argument*/Object_Instantiate_TisGameObject_t1113636619_m4070250708_RuntimeMethod_var);
		NullCheck(L_3);
		Object_set_name_m291480324(L_3, _stringLiteral441913799, /*hidden argument*/NULL);
		V_0 = (bool)1;
	}

IL_0037:
	{
		IL2CPP_RUNTIME_CLASS_INIT(GameManager_t1536523654_il2cpp_TypeInfo_var);
		GameManager_t1536523654 * L_4 = GameManager_GetInstance_m367300771(NULL /*static, unused*/, /*hidden argument*/NULL);
		__this->set_game_manager_9(L_4);
		Object_t631007953 * L_5 = Resources_Load_m3880010804(NULL /*static, unused*/, _stringLiteral1406827017, /*hidden argument*/NULL);
		__this->set_dot_active_10(((GameObject_t1113636619 *)IsInstSealed((RuntimeObject*)L_5, GameObject_t1113636619_il2cpp_TypeInfo_var)));
		Object_t631007953 * L_6 = Resources_Load_m3880010804(NULL /*static, unused*/, _stringLiteral2633343367, /*hidden argument*/NULL);
		__this->set_dot_non_active_11(((GameObject_t1113636619 *)IsInstSealed((RuntimeObject*)L_6, GameObject_t1113636619_il2cpp_TypeInfo_var)));
		GameObject_t1113636619 * L_7 = __this->get_dot_active_10();
		NullCheck(L_7);
		Image_t2670269651 * L_8 = GameObject_GetComponent_TisImage_t2670269651_m2486712510(L_7, /*hidden argument*/GameObject_GetComponent_TisImage_t2670269651_m2486712510_RuntimeMethod_var);
		NullCheck(L_8);
		Sprite_t280657092 * L_9 = Image_get_sprite_m1811690853(L_8, /*hidden argument*/NULL);
		__this->set_img_active_12(L_9);
		GameObject_t1113636619 * L_10 = __this->get_dot_non_active_11();
		NullCheck(L_10);
		Image_t2670269651 * L_11 = GameObject_GetComponent_TisImage_t2670269651_m2486712510(L_10, /*hidden argument*/GameObject_GetComponent_TisImage_t2670269651_m2486712510_RuntimeMethod_var);
		NullCheck(L_11);
		Sprite_t280657092 * L_12 = Image_get_sprite_m1811690853(L_11, /*hidden argument*/NULL);
		__this->set_img_non_active_13(L_12);
		List_1_t2585711361 * L_13 = (List_1_t2585711361 *)il2cpp_codegen_object_new(List_1_t2585711361_il2cpp_TypeInfo_var);
		List_1__ctor_m1424466557(L_13, /*hidden argument*/List_1__ctor_m1424466557_RuntimeMethod_var);
		__this->set_dot_objs_14(L_13);
		bool L_14 = V_0;
		if (!L_14)
		{
			goto IL_0153;
		}
	}
	{
		int32_t L_15 = Application_get_systemLanguage_m3110370732(NULL /*static, unused*/, /*hidden argument*/NULL);
		if ((!(((uint32_t)L_15) == ((uint32_t)((int32_t)23)))))
		{
			goto IL_00fe;
		}
	}
	{
		GameObject_t1113636619 * L_16 = __this->get_mainIluust_5();
		NullCheck(L_16);
		Transform_t3600365921 * L_17 = GameObject_get_transform_m1369836730(L_16, /*hidden argument*/NULL);
		NullCheck(L_17);
		Transform_t3600365921 * L_18 = Transform_GetChild_m1092972975(L_17, 0, /*hidden argument*/NULL);
		NullCheck(L_18);
		Transform_t3600365921 * L_19 = Transform_GetChild_m1092972975(L_18, 0, /*hidden argument*/NULL);
		NullCheck(L_19);
		GameObject_t1113636619 * L_20 = Component_get_gameObject_m442555142(L_19, /*hidden argument*/NULL);
		NullCheck(L_20);
		GameObject_SetActive_m796801857(L_20, (bool)1, /*hidden argument*/NULL);
		GameObject_t1113636619 * L_21 = __this->get_mainIluust_5();
		NullCheck(L_21);
		Transform_t3600365921 * L_22 = GameObject_get_transform_m1369836730(L_21, /*hidden argument*/NULL);
		NullCheck(L_22);
		Transform_t3600365921 * L_23 = Transform_GetChild_m1092972975(L_22, 0, /*hidden argument*/NULL);
		NullCheck(L_23);
		Transform_t3600365921 * L_24 = Transform_GetChild_m1092972975(L_23, 1, /*hidden argument*/NULL);
		NullCheck(L_24);
		GameObject_t1113636619 * L_25 = Component_get_gameObject_m442555142(L_24, /*hidden argument*/NULL);
		NullCheck(L_25);
		GameObject_SetActive_m796801857(L_25, (bool)0, /*hidden argument*/NULL);
		goto IL_0142;
	}

IL_00fe:
	{
		GameObject_t1113636619 * L_26 = __this->get_mainIluust_5();
		NullCheck(L_26);
		Transform_t3600365921 * L_27 = GameObject_get_transform_m1369836730(L_26, /*hidden argument*/NULL);
		NullCheck(L_27);
		Transform_t3600365921 * L_28 = Transform_GetChild_m1092972975(L_27, 0, /*hidden argument*/NULL);
		NullCheck(L_28);
		Transform_t3600365921 * L_29 = Transform_GetChild_m1092972975(L_28, 0, /*hidden argument*/NULL);
		NullCheck(L_29);
		GameObject_t1113636619 * L_30 = Component_get_gameObject_m442555142(L_29, /*hidden argument*/NULL);
		NullCheck(L_30);
		GameObject_SetActive_m796801857(L_30, (bool)0, /*hidden argument*/NULL);
		GameObject_t1113636619 * L_31 = __this->get_mainIluust_5();
		NullCheck(L_31);
		Transform_t3600365921 * L_32 = GameObject_get_transform_m1369836730(L_31, /*hidden argument*/NULL);
		NullCheck(L_32);
		Transform_t3600365921 * L_33 = Transform_GetChild_m1092972975(L_32, 0, /*hidden argument*/NULL);
		NullCheck(L_33);
		Transform_t3600365921 * L_34 = Transform_GetChild_m1092972975(L_33, 1, /*hidden argument*/NULL);
		NullCheck(L_34);
		GameObject_t1113636619 * L_35 = Component_get_gameObject_m442555142(L_34, /*hidden argument*/NULL);
		NullCheck(L_35);
		GameObject_SetActive_m796801857(L_35, (bool)1, /*hidden argument*/NULL);
	}

IL_0142:
	{
		GameObject_t1113636619 * L_36 = __this->get_mainIluust_5();
		NullCheck(L_36);
		GameObject_SetActive_m796801857(L_36, (bool)1, /*hidden argument*/NULL);
		goto IL_0159;
	}

IL_0153:
	{
		MainSceneManager_ActiveGallery_m2541763430(__this, /*hidden argument*/NULL);
	}

IL_0159:
	{
		return;
	}
}
// System.Void MainSceneManager::Start()
extern "C"  void MainSceneManager_Start_m3526906689 (MainSceneManager_t2603182452 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (MainSceneManager_Start_m3526906689_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		Text_t1901882714 * L_0 = __this->get_soulText_8();
		int32_t L_1 = DontDestroyManager_GetSoulNum_m1644499173(NULL /*static, unused*/, /*hidden argument*/NULL);
		int32_t L_2 = L_1;
		RuntimeObject * L_3 = Box(Int32_t2950945753_il2cpp_TypeInfo_var, &L_2);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_4 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_2();
		String_t* L_5 = String_Concat_m904156431(NULL /*static, unused*/, L_3, L_4, /*hidden argument*/NULL);
		NullCheck(L_0);
		VirtActionInvoker1< String_t* >::Invoke(72 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_0, L_5);
		return;
	}
}
// System.Void MainSceneManager::Update()
extern "C"  void MainSceneManager_Update_m2633168351 (MainSceneManager_t2603182452 * __this, const RuntimeMethod* method)
{
	{
		return;
	}
}
// System.Void MainSceneManager::PlayBoard()
extern "C"  void MainSceneManager_PlayBoard_m2008684372 (MainSceneManager_t2603182452 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (MainSceneManager_PlayBoard_m2008684372_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	StringU5BU5D_t1281789340* V_1 = NULL;
	int32_t V_2 = 0;
	String_t* V_3 = NULL;
	String_t* V_4 = NULL;
	{
		IL2CPP_RUNTIME_CLASS_INIT(EventSystem_t1003666588_il2cpp_TypeInfo_var);
		EventSystem_t1003666588 * L_0 = EventSystem_get_current_m1416377559(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_0);
		GameObject_t1113636619 * L_1 = EventSystem_get_currentSelectedGameObject_m2939274948(L_0, /*hidden argument*/NULL);
		NullCheck(L_1);
		Image_t2670269651 * L_2 = GameObject_GetComponent_TisImage_t2670269651_m2486712510(L_1, /*hidden argument*/GameObject_GetComponent_TisImage_t2670269651_m2486712510_RuntimeMethod_var);
		NullCheck(L_2);
		Sprite_t280657092 * L_3 = Image_get_sprite_m1811690853(L_2, /*hidden argument*/NULL);
		NullCheck(L_3);
		String_t* L_4 = Object_get_name_m4211327027(L_3, /*hidden argument*/NULL);
		V_0 = L_4;
		GameObject_t1113636619 * L_5 = __this->get_soul_popup_3();
		NullCheck(L_5);
		bool L_6 = GameObject_get_activeSelf_m1767405923(L_5, /*hidden argument*/NULL);
		if (!L_6)
		{
			goto IL_002b;
		}
	}
	{
		return;
	}

IL_002b:
	{
		String_t* L_7 = V_0;
		CharU5BU5D_t3528271667* L_8 = ((CharU5BU5D_t3528271667*)SZArrayNew(CharU5BU5D_t3528271667_il2cpp_TypeInfo_var, (uint32_t)1));
		NullCheck(L_8);
		(L_8)->SetAt(static_cast<il2cpp_array_size_t>(0), (Il2CppChar)((int32_t)95));
		NullCheck(L_7);
		StringU5BU5D_t1281789340* L_9 = String_Split_m3646115398(L_7, L_8, /*hidden argument*/NULL);
		V_1 = L_9;
		StringU5BU5D_t1281789340* L_10 = V_1;
		NullCheck(L_10);
		int32_t L_11 = 1;
		String_t* L_12 = (L_10)->GetAt(static_cast<il2cpp_array_size_t>(L_11));
		int32_t L_13 = Int32_Parse_m1033611559(NULL /*static, unused*/, L_12, /*hidden argument*/NULL);
		V_2 = L_13;
		int32_t L_14 = V_2;
		if ((((int32_t)L_14) <= ((int32_t)1)))
		{
			goto IL_00ad;
		}
	}
	{
		ObjectU5BU5D_t2843939325* L_15 = ((ObjectU5BU5D_t2843939325*)SZArrayNew(ObjectU5BU5D_t2843939325_il2cpp_TypeInfo_var, (uint32_t)5));
		NullCheck(L_15);
		ArrayElementTypeCheck (L_15, _stringLiteral3452614641);
		(L_15)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject *)_stringLiteral3452614641);
		ObjectU5BU5D_t2843939325* L_16 = L_15;
		int32_t L_17 = V_2;
		int32_t L_18 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_17, (int32_t)1));
		RuntimeObject * L_19 = Box(Int32_t2950945753_il2cpp_TypeInfo_var, &L_18);
		NullCheck(L_16);
		ArrayElementTypeCheck (L_16, L_19);
		(L_16)->SetAt(static_cast<il2cpp_array_size_t>(1), (RuntimeObject *)L_19);
		ObjectU5BU5D_t2843939325* L_20 = L_16;
		NullCheck(L_20);
		ArrayElementTypeCheck (L_20, _stringLiteral3452614641);
		(L_20)->SetAt(static_cast<il2cpp_array_size_t>(2), (RuntimeObject *)_stringLiteral3452614641);
		ObjectU5BU5D_t2843939325* L_21 = L_20;
		StringU5BU5D_t1281789340* L_22 = V_1;
		NullCheck(L_22);
		int32_t L_23 = 2;
		String_t* L_24 = (L_22)->GetAt(static_cast<il2cpp_array_size_t>(L_23));
		NullCheck(L_21);
		ArrayElementTypeCheck (L_21, L_24);
		(L_21)->SetAt(static_cast<il2cpp_array_size_t>(3), (RuntimeObject *)L_24);
		ObjectU5BU5D_t2843939325* L_25 = L_21;
		NullCheck(L_25);
		ArrayElementTypeCheck (L_25, _stringLiteral794013045);
		(L_25)->SetAt(static_cast<il2cpp_array_size_t>(4), (RuntimeObject *)_stringLiteral794013045);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_26 = String_Concat_m2971454694(NULL /*static, unused*/, L_25, /*hidden argument*/NULL);
		V_3 = L_26;
		String_t* L_27 = V_3;
		bool L_28 = PlayerPrefs_HasKey_m2794939670(NULL /*static, unused*/, L_27, /*hidden argument*/NULL);
		if (L_28)
		{
			goto IL_00ad;
		}
	}
	{
		GameManager_t1536523654 * L_29 = __this->get_game_manager_9();
		NullCheck(L_29);
		DontDestroyManager_t1329034447 * L_30 = GameManager_getDontDestroyManager_m2156172674(L_29, /*hidden argument*/NULL);
		NullCheck(L_30);
		BlurManager_t3192295244 * L_31 = L_30->get_blurManager_7();
		LocalizeString_t491646212 * L_32 = ((LocalizeTool_t315363650_StaticFields*)il2cpp_codegen_static_fields_for(LocalizeTool_t315363650_il2cpp_TypeInfo_var))->get_localizeString_0();
		NullCheck(L_32);
		String_t* L_33 = L_32->get_didnt_complete_1();
		NullCheck(L_31);
		BlurManager_popup_m1373291001(L_31, L_33, /*hidden argument*/NULL);
		return;
	}

IL_00ad:
	{
		String_t* L_34 = V_0;
		String_t* L_35 = V_0;
		NullCheck(L_35);
		int32_t L_36 = String_get_Length_m3847582255(L_35, /*hidden argument*/NULL);
		NullCheck(_stringLiteral794013045);
		int32_t L_37 = String_get_Length_m3847582255(_stringLiteral794013045, /*hidden argument*/NULL);
		NullCheck(L_34);
		String_t* L_38 = String_Substring_m1610150815(L_34, 0, ((int32_t)il2cpp_codegen_subtract((int32_t)L_36, (int32_t)L_37)), /*hidden argument*/NULL);
		V_4 = L_38;
		GameManager_t1536523654 * L_39 = __this->get_game_manager_9();
		RuntimeTypeHandle_t3027515415  L_40 = { reinterpret_cast<intptr_t> (BoardPrefabName_t3868180495_0_0_0_var) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_41 = Type_GetTypeFromHandle_m1620074514(NULL /*static, unused*/, L_40, /*hidden argument*/NULL);
		String_t* L_42 = V_4;
		IL2CPP_RUNTIME_CLASS_INIT(Enum_t4135868527_il2cpp_TypeInfo_var);
		RuntimeObject * L_43 = Enum_Parse_m1871331077(NULL /*static, unused*/, L_41, L_42, /*hidden argument*/NULL);
		NullCheck(L_39);
		GameManager_ChangeScene_m3732671280(L_39, 1, ((*(int32_t*)((int32_t*)UnBox(L_43, BoardPrefabName_t3868180495_il2cpp_TypeInfo_var)))), /*hidden argument*/NULL);
		return;
	}
}
// System.Void MainSceneManager::Soul()
extern "C"  void MainSceneManager_Soul_m3519914832 (MainSceneManager_t2603182452 * __this, const RuntimeMethod* method)
{
	{
		GameObject_t1113636619 * L_0 = __this->get_soul_popup_3();
		NullCheck(L_0);
		bool L_1 = GameObject_get_activeSelf_m1767405923(L_0, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_0011;
		}
	}
	{
		return;
	}

IL_0011:
	{
		GameObject_t1113636619 * L_2 = __this->get_soul_popup_3();
		NullCheck(L_2);
		GameObject_SetActive_m796801857(L_2, (bool)1, /*hidden argument*/NULL);
		return;
	}
}
// System.Boolean MainSceneManager::GetPopUpActive()
extern "C"  bool MainSceneManager_GetPopUpActive_m433334491 (MainSceneManager_t2603182452 * __this, const RuntimeMethod* method)
{
	{
		GameObject_t1113636619 * L_0 = __this->get_soul_popup_3();
		NullCheck(L_0);
		bool L_1 = GameObject_get_activeSelf_m1767405923(L_0, /*hidden argument*/NULL);
		return L_1;
	}
}
// System.Void MainSceneManager::ActiveGallery()
extern "C"  void MainSceneManager_ActiveGallery_m2541763430 (MainSceneManager_t2603182452 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (MainSceneManager_ActiveGallery_m2541763430_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	DragGalleryContentScript_t2491726244 * V_0 = NULL;
	Transform_t3600365921 * V_1 = NULL;
	RuntimeObject* V_2 = NULL;
	RuntimeObject* V_3 = NULL;
	Transform_t3600365921 * V_4 = NULL;
	RuntimeObject* V_5 = NULL;
	RuntimeObject* V_6 = NULL;
	int32_t V_7 = 0;
	float V_8 = 0.0f;
	int32_t V_9 = 0;
	GameObject_t1113636619 * V_10 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		GameObject_t1113636619 * L_0 = __this->get_gallery_6();
		NullCheck(L_0);
		Transform_t3600365921 * L_1 = GameObject_get_transform_m1369836730(L_0, /*hidden argument*/NULL);
		NullCheck(L_1);
		Transform_t3600365921 * L_2 = Transform_GetChild_m1092972975(L_1, 0, /*hidden argument*/NULL);
		NullCheck(L_2);
		Transform_t3600365921 * L_3 = Transform_GetChild_m1092972975(L_2, 0, /*hidden argument*/NULL);
		NullCheck(L_3);
		DragGalleryContentScript_t2491726244 * L_4 = Component_GetComponent_TisDragGalleryContentScript_t2491726244_m3299036926(L_3, /*hidden argument*/Component_GetComponent_TisDragGalleryContentScript_t2491726244_m3299036926_RuntimeMethod_var);
		V_0 = L_4;
		DragGalleryContentScript_t2491726244 * L_5 = V_0;
		NullCheck(L_5);
		Transform_t3600365921 * L_6 = Component_get_transform_m3162698980(L_5, /*hidden argument*/NULL);
		NullCheck(L_6);
		RuntimeObject* L_7 = Transform_GetEnumerator_m2717073726(L_6, /*hidden argument*/NULL);
		V_2 = L_7;
	}

IL_0029:
	try
	{ // begin try (depth: 1)
		{
			goto IL_0045;
		}

IL_002e:
		{
			RuntimeObject* L_8 = V_2;
			NullCheck(L_8);
			RuntimeObject * L_9 = InterfaceFuncInvoker0< RuntimeObject * >::Invoke(0 /* System.Object System.Collections.IEnumerator::get_Current() */, IEnumerator_t1853284238_il2cpp_TypeInfo_var, L_8);
			V_1 = ((Transform_t3600365921 *)CastclassClass((RuntimeObject*)L_9, Transform_t3600365921_il2cpp_TypeInfo_var));
			Transform_t3600365921 * L_10 = V_1;
			NullCheck(L_10);
			GameObject_t1113636619 * L_11 = Component_get_gameObject_m442555142(L_10, /*hidden argument*/NULL);
			IL2CPP_RUNTIME_CLASS_INIT(Object_t631007953_il2cpp_TypeInfo_var);
			Object_Destroy_m565254235(NULL /*static, unused*/, L_11, /*hidden argument*/NULL);
		}

IL_0045:
		{
			RuntimeObject* L_12 = V_2;
			NullCheck(L_12);
			bool L_13 = InterfaceFuncInvoker0< bool >::Invoke(1 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t1853284238_il2cpp_TypeInfo_var, L_12);
			if (L_13)
			{
				goto IL_002e;
			}
		}

IL_0050:
		{
			IL2CPP_LEAVE(0x69, FINALLY_0055);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_0055;
	}

FINALLY_0055:
	{ // begin finally (depth: 1)
		{
			RuntimeObject* L_14 = V_2;
			RuntimeObject* L_15 = ((RuntimeObject*)IsInst((RuntimeObject*)L_14, IDisposable_t3640265483_il2cpp_TypeInfo_var));
			V_3 = L_15;
			if (!L_15)
			{
				goto IL_0068;
			}
		}

IL_0062:
		{
			RuntimeObject* L_16 = V_3;
			NullCheck(L_16);
			InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t3640265483_il2cpp_TypeInfo_var, L_16);
		}

IL_0068:
		{
			IL2CPP_END_FINALLY(85)
		}
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(85)
	{
		IL2CPP_JUMP_TBL(0x69, IL_0069)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
	}

IL_0069:
	{
		GameObject_t1113636619 * L_17 = __this->get_dots_7();
		NullCheck(L_17);
		Transform_t3600365921 * L_18 = GameObject_get_transform_m1369836730(L_17, /*hidden argument*/NULL);
		NullCheck(L_18);
		RuntimeObject* L_19 = Transform_GetEnumerator_m2717073726(L_18, /*hidden argument*/NULL);
		V_5 = L_19;
	}

IL_007b:
	try
	{ // begin try (depth: 1)
		{
			goto IL_009a;
		}

IL_0080:
		{
			RuntimeObject* L_20 = V_5;
			NullCheck(L_20);
			RuntimeObject * L_21 = InterfaceFuncInvoker0< RuntimeObject * >::Invoke(0 /* System.Object System.Collections.IEnumerator::get_Current() */, IEnumerator_t1853284238_il2cpp_TypeInfo_var, L_20);
			V_4 = ((Transform_t3600365921 *)CastclassClass((RuntimeObject*)L_21, Transform_t3600365921_il2cpp_TypeInfo_var));
			Transform_t3600365921 * L_22 = V_4;
			NullCheck(L_22);
			GameObject_t1113636619 * L_23 = Component_get_gameObject_m442555142(L_22, /*hidden argument*/NULL);
			IL2CPP_RUNTIME_CLASS_INIT(Object_t631007953_il2cpp_TypeInfo_var);
			Object_Destroy_m565254235(NULL /*static, unused*/, L_23, /*hidden argument*/NULL);
		}

IL_009a:
		{
			RuntimeObject* L_24 = V_5;
			NullCheck(L_24);
			bool L_25 = InterfaceFuncInvoker0< bool >::Invoke(1 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t1853284238_il2cpp_TypeInfo_var, L_24);
			if (L_25)
			{
				goto IL_0080;
			}
		}

IL_00a6:
		{
			IL2CPP_LEAVE(0xC2, FINALLY_00ab);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_00ab;
	}

FINALLY_00ab:
	{ // begin finally (depth: 1)
		{
			RuntimeObject* L_26 = V_5;
			RuntimeObject* L_27 = ((RuntimeObject*)IsInst((RuntimeObject*)L_26, IDisposable_t3640265483_il2cpp_TypeInfo_var));
			V_6 = L_27;
			if (!L_27)
			{
				goto IL_00c1;
			}
		}

IL_00ba:
		{
			RuntimeObject* L_28 = V_6;
			NullCheck(L_28);
			InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t3640265483_il2cpp_TypeInfo_var, L_28);
		}

IL_00c1:
		{
			IL2CPP_END_FINALLY(171)
		}
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(171)
	{
		IL2CPP_JUMP_TBL(0xC2, IL_00c2)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
	}

IL_00c2:
	{
		GameObject_t1113636619 * L_29 = __this->get_gallery_6();
		NullCheck(L_29);
		GameObject_SetActive_m796801857(L_29, (bool)1, /*hidden argument*/NULL);
		DragGalleryContentScript_t2491726244 * L_30 = V_0;
		NullCheck(L_30);
		DragGalleryContentScript_loadGallery_m634214822(L_30, /*hidden argument*/NULL);
		List_1_t2585711361 * L_31 = __this->get_dot_objs_14();
		NullCheck(L_31);
		List_1_Clear_m2500309205(L_31, /*hidden argument*/List_1_Clear_m2500309205_RuntimeMethod_var);
		DragGalleryContentScript_t2491726244 * L_32 = V_0;
		NullCheck(L_32);
		int32_t L_33 = DragGalleryContentScript_GetTotalPageNum_m3965472721(L_32, /*hidden argument*/NULL);
		V_7 = L_33;
		float L_34 = __this->get_DOT_INTERVAL_SIZE_2();
		int32_t L_35 = V_7;
		V_8 = ((float)((float)((float)il2cpp_codegen_multiply((float)L_34, (float)(((float)((float)((int32_t)il2cpp_codegen_subtract((int32_t)L_35, (int32_t)1)))))))/(float)(-2.0f)));
		V_9 = 0;
		goto IL_0193;
	}

IL_0103:
	{
		int32_t L_36 = V_9;
		if (L_36)
		{
			goto IL_011c;
		}
	}
	{
		GameObject_t1113636619 * L_37 = __this->get_dot_active_10();
		IL2CPP_RUNTIME_CLASS_INIT(Object_t631007953_il2cpp_TypeInfo_var);
		GameObject_t1113636619 * L_38 = Object_Instantiate_TisGameObject_t1113636619_m4070250708(NULL /*static, unused*/, L_37, /*hidden argument*/Object_Instantiate_TisGameObject_t1113636619_m4070250708_RuntimeMethod_var);
		V_10 = L_38;
		goto IL_0129;
	}

IL_011c:
	{
		GameObject_t1113636619 * L_39 = __this->get_dot_non_active_11();
		IL2CPP_RUNTIME_CLASS_INIT(Object_t631007953_il2cpp_TypeInfo_var);
		GameObject_t1113636619 * L_40 = Object_Instantiate_TisGameObject_t1113636619_m4070250708(NULL /*static, unused*/, L_39, /*hidden argument*/Object_Instantiate_TisGameObject_t1113636619_m4070250708_RuntimeMethod_var);
		V_10 = L_40;
	}

IL_0129:
	{
		GameObject_t1113636619 * L_41 = V_10;
		NullCheck(L_41);
		Transform_t3600365921 * L_42 = GameObject_get_transform_m1369836730(L_41, /*hidden argument*/NULL);
		GameObject_t1113636619 * L_43 = __this->get_dots_7();
		NullCheck(L_43);
		Transform_t3600365921 * L_44 = GameObject_get_transform_m1369836730(L_43, /*hidden argument*/NULL);
		NullCheck(L_42);
		Transform_SetParent_m381167889(L_42, L_44, /*hidden argument*/NULL);
		GameObject_t1113636619 * L_45 = V_10;
		NullCheck(L_45);
		Transform_t3600365921 * L_46 = GameObject_get_transform_m1369836730(L_45, /*hidden argument*/NULL);
		float L_47 = V_8;
		float L_48 = __this->get_DOT_INTERVAL_SIZE_2();
		int32_t L_49 = V_9;
		Vector3_t3722313464  L_50;
		memset(&L_50, 0, sizeof(L_50));
		Vector3__ctor_m3353183577((&L_50), ((float)il2cpp_codegen_add((float)L_47, (float)((float)il2cpp_codegen_multiply((float)L_48, (float)(((float)((float)L_49))))))), (0.0f), (0.0f), /*hidden argument*/NULL);
		NullCheck(L_46);
		Transform_set_localPosition_m4128471975(L_46, L_50, /*hidden argument*/NULL);
		GameObject_t1113636619 * L_51 = V_10;
		int32_t L_52 = V_9;
		int32_t L_53 = L_52;
		RuntimeObject * L_54 = Box(Int32_t2950945753_il2cpp_TypeInfo_var, &L_53);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_55 = String_Concat_m904156431(NULL /*static, unused*/, _stringLiteral2553611042, L_54, /*hidden argument*/NULL);
		NullCheck(L_51);
		Object_set_name_m291480324(L_51, L_55, /*hidden argument*/NULL);
		List_1_t2585711361 * L_56 = __this->get_dot_objs_14();
		GameObject_t1113636619 * L_57 = V_10;
		NullCheck(L_56);
		List_1_Add_m2765963565(L_56, L_57, /*hidden argument*/List_1_Add_m2765963565_RuntimeMethod_var);
		int32_t L_58 = V_9;
		V_9 = ((int32_t)il2cpp_codegen_add((int32_t)L_58, (int32_t)1));
	}

IL_0193:
	{
		int32_t L_59 = V_9;
		int32_t L_60 = V_7;
		if ((((int32_t)L_59) < ((int32_t)L_60)))
		{
			goto IL_0103;
		}
	}
	{
		GameObject_t1113636619 * L_61 = __this->get_mainIluust_5();
		NullCheck(L_61);
		GameObject_SetActive_m796801857(L_61, (bool)0, /*hidden argument*/NULL);
		return;
	}
}
// System.Void MainSceneManager::startClick()
extern "C"  void MainSceneManager_startClick_m4287834383 (MainSceneManager_t2603182452 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (MainSceneManager_startClick_m4287834383_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	{
		String_t* L_0 = PlayerPrefs_GetString_m614532710(NULL /*static, unused*/, _stringLiteral2354090585, _stringLiteral4041729975, /*hidden argument*/NULL);
		V_0 = L_0;
		GameManager_t1536523654 * L_1 = __this->get_game_manager_9();
		RuntimeTypeHandle_t3027515415  L_2 = { reinterpret_cast<intptr_t> (BoardPrefabName_t3868180495_0_0_0_var) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_3 = Type_GetTypeFromHandle_m1620074514(NULL /*static, unused*/, L_2, /*hidden argument*/NULL);
		String_t* L_4 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(Enum_t4135868527_il2cpp_TypeInfo_var);
		RuntimeObject * L_5 = Enum_Parse_m1871331077(NULL /*static, unused*/, L_3, L_4, /*hidden argument*/NULL);
		NullCheck(L_1);
		GameManager_ChangeScene_m3732671280(L_1, 1, ((*(int32_t*)((int32_t*)UnBox(L_5, BoardPrefabName_t3868180495_il2cpp_TypeInfo_var)))), /*hidden argument*/NULL);
		return;
	}
}
// System.Void MainSceneManager::SetGalleryPage()
extern "C"  void MainSceneManager_SetGalleryPage_m824382587 (MainSceneManager_t2603182452 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (MainSceneManager_SetGalleryPage_m824382587_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	DragGalleryContentScript_t2491726244 * V_0 = NULL;
	{
		GameObject_t1113636619 * L_0 = __this->get_gallery_6();
		NullCheck(L_0);
		Transform_t3600365921 * L_1 = GameObject_get_transform_m1369836730(L_0, /*hidden argument*/NULL);
		NullCheck(L_1);
		Transform_t3600365921 * L_2 = Transform_GetChild_m1092972975(L_1, 0, /*hidden argument*/NULL);
		NullCheck(L_2);
		Transform_t3600365921 * L_3 = Transform_GetChild_m1092972975(L_2, 0, /*hidden argument*/NULL);
		NullCheck(L_3);
		DragGalleryContentScript_t2491726244 * L_4 = Component_GetComponent_TisDragGalleryContentScript_t2491726244_m3299036926(L_3, /*hidden argument*/Component_GetComponent_TisDragGalleryContentScript_t2491726244_m3299036926_RuntimeMethod_var);
		V_0 = L_4;
		DragGalleryContentScript_t2491726244 * L_5 = V_0;
		NullCheck(L_5);
		DragGalleryContentScript_SetDirectPage_m1764594248(L_5, /*hidden argument*/NULL);
		return;
	}
}
// System.Void MainSceneManager::SetDotImage(System.Int32,System.Boolean)
extern "C"  void MainSceneManager_SetDotImage_m1812060552 (MainSceneManager_t2603182452 * __this, int32_t ___current_page_num0, bool ___t_go_left_f_go_right1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (MainSceneManager_SetDotImage_m1812060552_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		bool L_0 = ___t_go_left_f_go_right1;
		if (!L_0)
		{
			goto IL_000f;
		}
	}
	{
		int32_t L_1 = ___current_page_num0;
		V_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_1, (int32_t)1));
		goto IL_0013;
	}

IL_000f:
	{
		int32_t L_2 = ___current_page_num0;
		V_0 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_2, (int32_t)1));
	}

IL_0013:
	{
		List_1_t2585711361 * L_3 = __this->get_dot_objs_14();
		int32_t L_4 = ___current_page_num0;
		NullCheck(L_3);
		GameObject_t1113636619 * L_5 = List_1_get_Item_m3743125852(L_3, ((int32_t)il2cpp_codegen_subtract((int32_t)L_4, (int32_t)1)), /*hidden argument*/List_1_get_Item_m3743125852_RuntimeMethod_var);
		NullCheck(L_5);
		Image_t2670269651 * L_6 = GameObject_GetComponent_TisImage_t2670269651_m2486712510(L_5, /*hidden argument*/GameObject_GetComponent_TisImage_t2670269651_m2486712510_RuntimeMethod_var);
		Sprite_t280657092 * L_7 = __this->get_img_active_12();
		NullCheck(L_6);
		Image_set_sprite_m2369174689(L_6, L_7, /*hidden argument*/NULL);
		List_1_t2585711361 * L_8 = __this->get_dot_objs_14();
		int32_t L_9 = V_0;
		NullCheck(L_8);
		GameObject_t1113636619 * L_10 = List_1_get_Item_m3743125852(L_8, ((int32_t)il2cpp_codegen_subtract((int32_t)L_9, (int32_t)1)), /*hidden argument*/List_1_get_Item_m3743125852_RuntimeMethod_var);
		NullCheck(L_10);
		Image_t2670269651 * L_11 = GameObject_GetComponent_TisImage_t2670269651_m2486712510(L_10, /*hidden argument*/GameObject_GetComponent_TisImage_t2670269651_m2486712510_RuntimeMethod_var);
		Sprite_t280657092 * L_12 = __this->get_img_non_active_13();
		NullCheck(L_11);
		Image_set_sprite_m2369174689(L_11, L_12, /*hidden argument*/NULL);
		return;
	}
}
// System.Void MainSceneManager::socialLogin()
extern "C"  void MainSceneManager_socialLogin_m2785575857 (MainSceneManager_t2603182452 * __this, const RuntimeMethod* method)
{
	{
		GameManager_t1536523654 * L_0 = __this->get_game_manager_9();
		NullCheck(L_0);
		DontDestroyManager_t1329034447 * L_1 = GameManager_getDontDestroyManager_m2156172674(L_0, /*hidden argument*/NULL);
		NullCheck(L_1);
		SocialTool_t1909827527 * L_2 = L_1->get_socialTool_6();
		NullCheck(L_2);
		SocialTool_socialLogin_m1551231671(L_2, /*hidden argument*/NULL);
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
// System.Void PlayBoardGameSceneManager::.ctor()
extern "C"  void PlayBoardGameSceneManager__ctor_m3762057517 (PlayBoardGameSceneManager_t1063580347 * __this, const RuntimeMethod* method)
{
	{
		MonoBehaviour__ctor_m1579109191(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void PlayBoardGameSceneManager::Awake()
extern "C"  void PlayBoardGameSceneManager_Awake_m3847176733 (PlayBoardGameSceneManager_t1063580347 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (PlayBoardGameSceneManager_Awake_m3847176733_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	GameObject_t1113636619 * V_1 = NULL;
	int32_t V_2 = 0;
	GameObject_t1113636619 * V_3 = NULL;
	Sprite_t280657092 * V_4 = NULL;
	int32_t V_5 = 0;
	{
		IL2CPP_RUNTIME_CLASS_INIT(GameManager_t1536523654_il2cpp_TypeInfo_var);
		GameManager_t1536523654 * L_0 = GameManager_GetInstance_m367300771(NULL /*static, unused*/, /*hidden argument*/NULL);
		__this->set_game_manager_7(L_0);
		GameManager_t1536523654 * L_1 = __this->get_game_manager_7();
		NullCheck(L_1);
		int32_t L_2 = GameManager_GetBoardImageName_m2118616804(L_1, /*hidden argument*/NULL);
		V_0 = L_2;
		RuntimeObject * L_3 = Box(BoardPrefabName_t3868180495_il2cpp_TypeInfo_var, (&V_0));
		NullCheck(L_3);
		String_t* L_4 = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_3);
		V_0 = *(int32_t*)UnBox(L_3);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_5 = String_Concat_m3755062657(NULL /*static, unused*/, _stringLiteral2527638099, L_4, _stringLiteral794013045, /*hidden argument*/NULL);
		__this->set__complete_image_name_9(L_5);
		V_1 = (GameObject_t1113636619 *)NULL;
		int32_t L_6 = PlayBoardGameSceneManager_GetBlockNum_m2562770194(__this, /*hidden argument*/NULL);
		V_2 = L_6;
		int32_t L_7 = V_2;
		if ((((int32_t)L_7) == ((int32_t)4)))
		{
			goto IL_0055;
		}
	}
	{
		int32_t L_8 = V_2;
		if ((((int32_t)L_8) == ((int32_t)5)))
		{
			goto IL_006a;
		}
	}
	{
		goto IL_007f;
	}

IL_0055:
	{
		Object_t631007953 * L_9 = Resources_Load_m3880010804(NULL /*static, unused*/, _stringLiteral2654357047, /*hidden argument*/NULL);
		V_1 = ((GameObject_t1113636619 *)IsInstSealed((RuntimeObject*)L_9, GameObject_t1113636619_il2cpp_TypeInfo_var));
		goto IL_007f;
	}

IL_006a:
	{
		Object_t631007953 * L_10 = Resources_Load_m3880010804(NULL /*static, unused*/, _stringLiteral697976375, /*hidden argument*/NULL);
		V_1 = ((GameObject_t1113636619 *)IsInstSealed((RuntimeObject*)L_10, GameObject_t1113636619_il2cpp_TypeInfo_var));
		goto IL_007f;
	}

IL_007f:
	{
		GameObject_t1113636619 * L_11 = V_1;
		GameObject_t1113636619 * L_12 = __this->get__board_parent_obj_2();
		NullCheck(L_12);
		Transform_t3600365921 * L_13 = GameObject_get_transform_m1369836730(L_12, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_t631007953_il2cpp_TypeInfo_var);
		GameObject_t1113636619 * L_14 = Object_Instantiate_TisGameObject_t1113636619_m3215236302(NULL /*static, unused*/, L_11, L_13, /*hidden argument*/Object_Instantiate_TisGameObject_t1113636619_m3215236302_RuntimeMethod_var);
		V_3 = L_14;
		GameObject_t1113636619 * L_15 = V_3;
		NullCheck(L_15);
		Object_set_name_m291480324(L_15, _stringLiteral22615885, /*hidden argument*/NULL);
		GameObject_t1113636619 * L_16 = V_3;
		NullCheck(L_16);
		Transform_t3600365921 * L_17 = GameObject_get_transform_m1369836730(L_16, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_t3722313464_il2cpp_TypeInfo_var);
		Vector3_t3722313464  L_18 = Vector3_get_zero_m1409827619(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_17);
		Transform_set_localPosition_m4128471975(L_17, L_18, /*hidden argument*/NULL);
		String_t* L_19 = __this->get__complete_image_name_9();
		Sprite_t280657092 * L_20 = Resources_Load_TisSprite_t280657092_m4144667290(NULL /*static, unused*/, L_19, /*hidden argument*/Resources_Load_TisSprite_t280657092_m4144667290_RuntimeMethod_var);
		V_4 = L_20;
		GameObject_t1113636619 * L_21 = __this->get__complete_image_obj_3();
		NullCheck(L_21);
		Image_t2670269651 * L_22 = GameObject_GetComponent_TisImage_t2670269651_m2486712510(L_21, /*hidden argument*/GameObject_GetComponent_TisImage_t2670269651_m2486712510_RuntimeMethod_var);
		Sprite_t280657092 * L_23 = V_4;
		NullCheck(L_22);
		Image_set_sprite_m2369174689(L_22, L_23, /*hidden argument*/NULL);
		GameManager_t1536523654 * L_24 = __this->get_game_manager_7();
		NullCheck(L_24);
		int32_t L_25 = GameManager_GetBoardImageName_m2118616804(L_24, /*hidden argument*/NULL);
		V_5 = L_25;
		RuntimeObject * L_26 = Box(BoardPrefabName_t3868180495_il2cpp_TypeInfo_var, (&V_5));
		NullCheck(L_26);
		String_t* L_27 = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_26);
		V_5 = *(int32_t*)UnBox(L_26);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_28 = String_Concat_m3937257545(NULL /*static, unused*/, _stringLiteral1024073229, L_27, /*hidden argument*/NULL);
		SpriteU5BU5D_t2581906349* L_29 = Resources_LoadAll_TisSprite_t280657092_m1417587347(NULL /*static, unused*/, L_28, /*hidden argument*/Resources_LoadAll_TisSprite_t280657092_m1417587347_RuntimeMethod_var);
		__this->set__sprites_8(L_29);
		int32_t L_30 = Application_get_systemLanguage_m3110370732(NULL /*static, unused*/, /*hidden argument*/NULL);
		if ((!(((uint32_t)L_30) == ((uint32_t)((int32_t)23)))))
		{
			goto IL_0139;
		}
	}
	{
		Transform_t3600365921 * L_31 = __this->get_titleImage_6();
		NullCheck(L_31);
		Transform_t3600365921 * L_32 = Transform_GetChild_m1092972975(L_31, 0, /*hidden argument*/NULL);
		NullCheck(L_32);
		GameObject_t1113636619 * L_33 = Component_get_gameObject_m442555142(L_32, /*hidden argument*/NULL);
		NullCheck(L_33);
		GameObject_SetActive_m796801857(L_33, (bool)1, /*hidden argument*/NULL);
		Transform_t3600365921 * L_34 = __this->get_titleImage_6();
		NullCheck(L_34);
		Transform_t3600365921 * L_35 = Transform_GetChild_m1092972975(L_34, 1, /*hidden argument*/NULL);
		NullCheck(L_35);
		GameObject_t1113636619 * L_36 = Component_get_gameObject_m442555142(L_35, /*hidden argument*/NULL);
		NullCheck(L_36);
		GameObject_SetActive_m796801857(L_36, (bool)0, /*hidden argument*/NULL);
		goto IL_0167;
	}

IL_0139:
	{
		Transform_t3600365921 * L_37 = __this->get_titleImage_6();
		NullCheck(L_37);
		Transform_t3600365921 * L_38 = Transform_GetChild_m1092972975(L_37, 0, /*hidden argument*/NULL);
		NullCheck(L_38);
		GameObject_t1113636619 * L_39 = Component_get_gameObject_m442555142(L_38, /*hidden argument*/NULL);
		NullCheck(L_39);
		GameObject_SetActive_m796801857(L_39, (bool)0, /*hidden argument*/NULL);
		Transform_t3600365921 * L_40 = __this->get_titleImage_6();
		NullCheck(L_40);
		Transform_t3600365921 * L_41 = Transform_GetChild_m1092972975(L_40, 1, /*hidden argument*/NULL);
		NullCheck(L_41);
		GameObject_t1113636619 * L_42 = Component_get_gameObject_m442555142(L_41, /*hidden argument*/NULL);
		NullCheck(L_42);
		GameObject_SetActive_m796801857(L_42, (bool)1, /*hidden argument*/NULL);
	}

IL_0167:
	{
		return;
	}
}
// System.Void PlayBoardGameSceneManager::Start()
extern "C"  void PlayBoardGameSceneManager_Start_m3037551455 (PlayBoardGameSceneManager_t1063580347 * __this, const RuntimeMethod* method)
{
	{
		PlayBoardGameSceneManager_SetSoulNumText_m3655537806(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void PlayBoardGameSceneManager::Update()
extern "C"  void PlayBoardGameSceneManager_Update_m325760565 (PlayBoardGameSceneManager_t1063580347 * __this, const RuntimeMethod* method)
{
	{
		return;
	}
}
// System.Int32 PlayBoardGameSceneManager::GetBlockNum()
extern "C"  int32_t PlayBoardGameSceneManager_GetBlockNum_m2562770194 (PlayBoardGameSceneManager_t1063580347 * __this, const RuntimeMethod* method)
{
	{
		GameManager_t1536523654 * L_0 = __this->get_game_manager_7();
		NullCheck(L_0);
		int32_t L_1 = GameManager_GetBlockSize_m4175583345(L_0, /*hidden argument*/NULL);
		return L_1;
	}
}
// System.Void PlayBoardGameSceneManager::SetSoulNumText()
extern "C"  void PlayBoardGameSceneManager_SetSoulNumText_m3655537806 (PlayBoardGameSceneManager_t1063580347 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (PlayBoardGameSceneManager_SetSoulNumText_m3655537806_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		Text_t1901882714 * L_0 = __this->get__soul_num_txt_5();
		int32_t L_1 = DontDestroyManager_GetSoulNum_m1644499173(NULL /*static, unused*/, /*hidden argument*/NULL);
		int32_t L_2 = L_1;
		RuntimeObject * L_3 = Box(Int32_t2950945753_il2cpp_TypeInfo_var, &L_2);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_4 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_2();
		String_t* L_5 = String_Concat_m904156431(NULL /*static, unused*/, L_3, L_4, /*hidden argument*/NULL);
		NullCheck(L_0);
		VirtActionInvoker1< String_t* >::Invoke(72 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_0, L_5);
		return;
	}
}
// UnityEngine.Sprite[] PlayBoardGameSceneManager::GetSprites()
extern "C"  SpriteU5BU5D_t2581906349* PlayBoardGameSceneManager_GetSprites_m1024580081 (PlayBoardGameSceneManager_t1063580347 * __this, const RuntimeMethod* method)
{
	{
		SpriteU5BU5D_t2581906349* L_0 = __this->get__sprites_8();
		return L_0;
	}
}
// System.Void PlayBoardGameSceneManager::backClick()
extern "C"  void PlayBoardGameSceneManager_backClick_m851491868 (PlayBoardGameSceneManager_t1063580347 * __this, const RuntimeMethod* method)
{
	{
		GameManager_t1536523654 * L_0 = __this->get_game_manager_7();
		NullCheck(L_0);
		GameManager_ChangeScene_m1824834679(L_0, 0, /*hidden argument*/NULL);
		return;
	}
}
// System.String PlayBoardGameSceneManager::GetBlockState()
extern "C"  String_t* PlayBoardGameSceneManager_GetBlockState_m3359666033 (PlayBoardGameSceneManager_t1063580347 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (PlayBoardGameSceneManager_GetBlockState_m3359666033_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		GameManager_t1536523654 * L_0 = __this->get_game_manager_7();
		NullCheck(L_0);
		int32_t L_1 = GameManager_GetBoardImageName_m2118616804(L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		RuntimeObject * L_2 = Box(BoardPrefabName_t3868180495_il2cpp_TypeInfo_var, (&V_0));
		NullCheck(L_2);
		String_t* L_3 = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_2);
		V_0 = *(int32_t*)UnBox(L_2);
		String_t* L_4 = PlayerPrefs_GetString_m389913383(NULL /*static, unused*/, L_3, /*hidden argument*/NULL);
		return L_4;
	}
}
// System.Void PlayBoardGameSceneManager::SetBlockState(System.String)
extern "C"  void PlayBoardGameSceneManager_SetBlockState_m2858193421 (PlayBoardGameSceneManager_t1063580347 * __this, String_t* ___s0, const RuntimeMethod* method)
{
	{
		GameManager_t1536523654 * L_0 = __this->get_game_manager_7();
		String_t* L_1 = ___s0;
		NullCheck(L_0);
		GameManager_SetBlockState_m3286834702(L_0, L_1, /*hidden argument*/NULL);
		return;
	}
}
// System.Void PlayBoardGameSceneManager::SaveBlockState(System.String)
extern "C"  void PlayBoardGameSceneManager_SaveBlockState_m3559858343 (PlayBoardGameSceneManager_t1063580347 * __this, String_t* ___s0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (PlayBoardGameSceneManager_SaveBlockState_m3559858343_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		GameManager_t1536523654 * L_0 = __this->get_game_manager_7();
		NullCheck(L_0);
		int32_t L_1 = GameManager_GetBoardImageName_m2118616804(L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		RuntimeObject * L_2 = Box(BoardPrefabName_t3868180495_il2cpp_TypeInfo_var, (&V_0));
		NullCheck(L_2);
		String_t* L_3 = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_2);
		V_0 = *(int32_t*)UnBox(L_2);
		String_t* L_4 = ___s0;
		PlayerPrefs_SetString_m2101271233(NULL /*static, unused*/, L_3, L_4, /*hidden argument*/NULL);
		GameManager_t1536523654 * L_5 = __this->get_game_manager_7();
		NullCheck(L_5);
		int32_t L_6 = GameManager_GetBoardImageName_m2118616804(L_5, /*hidden argument*/NULL);
		V_1 = L_6;
		RuntimeObject * L_7 = Box(BoardPrefabName_t3868180495_il2cpp_TypeInfo_var, (&V_1));
		NullCheck(L_7);
		String_t* L_8 = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_7);
		V_1 = *(int32_t*)UnBox(L_7);
		PlayerPrefs_SetString_m2101271233(NULL /*static, unused*/, _stringLiteral2354090585, L_8, /*hidden argument*/NULL);
		return;
	}
}
// System.Void PlayBoardGameSceneManager::CompleteBoard()
extern "C"  void PlayBoardGameSceneManager_CompleteBoard_m3268643837 (PlayBoardGameSceneManager_t1063580347 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (PlayBoardGameSceneManager_CompleteBoard_m3268643837_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	int32_t V_1 = 0;
	StringU5BU5D_t1281789340* V_2 = NULL;
	{
		GameManager_t1536523654 * L_0 = __this->get_game_manager_7();
		NullCheck(L_0);
		int32_t L_1 = GameManager_GetBoardImageName_m2118616804(L_0, /*hidden argument*/NULL);
		V_1 = L_1;
		RuntimeObject * L_2 = Box(BoardPrefabName_t3868180495_il2cpp_TypeInfo_var, (&V_1));
		NullCheck(L_2);
		String_t* L_3 = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_2);
		V_1 = *(int32_t*)UnBox(L_2);
		V_0 = L_3;
		String_t* L_4 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_5 = String_Concat_m3937257545(NULL /*static, unused*/, L_4, _stringLiteral794013045, /*hidden argument*/NULL);
		PlayerPrefs_SetInt_m2842000469(NULL /*static, unused*/, L_5, 1, /*hidden argument*/NULL);
		String_t* L_6 = V_0;
		CharU5BU5D_t3528271667* L_7 = ((CharU5BU5D_t3528271667*)SZArrayNew(CharU5BU5D_t3528271667_il2cpp_TypeInfo_var, (uint32_t)1));
		NullCheck(L_7);
		(L_7)->SetAt(static_cast<il2cpp_array_size_t>(0), (Il2CppChar)((int32_t)95));
		NullCheck(L_6);
		StringU5BU5D_t1281789340* L_8 = String_Split_m3646115398(L_6, L_7, /*hidden argument*/NULL);
		V_2 = L_8;
		StringU5BU5D_t1281789340* L_9 = V_2;
		NullCheck(L_9);
		int32_t L_10 = 2;
		String_t* L_11 = (L_9)->GetAt(static_cast<il2cpp_array_size_t>(L_10));
		bool L_12 = String_op_Equality_m920492651(NULL /*static, unused*/, L_11, _stringLiteral3451369402, /*hidden argument*/NULL);
		if (!L_12)
		{
			goto IL_0067;
		}
	}
	{
		String_t* L_13 = V_0;
		NullCheck(L_13);
		String_t* L_14 = String_Substring_m1610150815(L_13, 0, 3, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_15 = String_Concat_m3937257545(NULL /*static, unused*/, L_14, _stringLiteral3451500483, /*hidden argument*/NULL);
		V_0 = L_15;
		goto IL_00d6;
	}

IL_0067:
	{
		StringU5BU5D_t1281789340* L_16 = V_2;
		NullCheck(L_16);
		int32_t L_17 = 2;
		String_t* L_18 = (L_16)->GetAt(static_cast<il2cpp_array_size_t>(L_17));
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		bool L_19 = String_op_Equality_m920492651(NULL /*static, unused*/, L_18, _stringLiteral3451369411, /*hidden argument*/NULL);
		if (!L_19)
		{
			goto IL_00b3;
		}
	}
	{
		StringU5BU5D_t1281789340* L_20 = V_2;
		NullCheck(L_20);
		int32_t L_21 = 1;
		String_t* L_22 = (L_20)->GetAt(static_cast<il2cpp_array_size_t>(L_21));
		int32_t L_23 = Int32_Parse_m1033611559(NULL /*static, unused*/, L_22, /*hidden argument*/NULL);
		int32_t L_24 = ((int32_t)il2cpp_codegen_add((int32_t)L_23, (int32_t)1));
		RuntimeObject * L_25 = Box(Int32_t2950945753_il2cpp_TypeInfo_var, &L_24);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_26 = String_Concat_m1715369213(NULL /*static, unused*/, _stringLiteral3452614641, L_25, _stringLiteral1511312422, /*hidden argument*/NULL);
		V_0 = L_26;
		RuntimeTypeHandle_t3027515415  L_27 = { reinterpret_cast<intptr_t> (BoardPrefabName_t3868180495_0_0_0_var) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_28 = Type_GetTypeFromHandle_m1620074514(NULL /*static, unused*/, L_27, /*hidden argument*/NULL);
		String_t* L_29 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(Enum_t4135868527_il2cpp_TypeInfo_var);
		bool L_30 = Enum_IsDefined_m1442314461(NULL /*static, unused*/, L_28, L_29, /*hidden argument*/NULL);
		if (L_30)
		{
			goto IL_00ae;
		}
	}
	{
		return;
	}

IL_00ae:
	{
		goto IL_00d6;
	}

IL_00b3:
	{
		String_t* L_31 = V_0;
		NullCheck(L_31);
		String_t* L_32 = String_Substring_m1610150815(L_31, 0, 4, /*hidden argument*/NULL);
		StringU5BU5D_t1281789340* L_33 = V_2;
		NullCheck(L_33);
		int32_t L_34 = 2;
		String_t* L_35 = (L_33)->GetAt(static_cast<il2cpp_array_size_t>(L_34));
		NullCheck(L_35);
		String_t* L_36 = String_Substring_m2848979100(L_35, 1, /*hidden argument*/NULL);
		int32_t L_37 = Int32_Parse_m1033611559(NULL /*static, unused*/, L_36, /*hidden argument*/NULL);
		int32_t L_38 = ((int32_t)il2cpp_codegen_add((int32_t)L_37, (int32_t)1));
		RuntimeObject * L_39 = Box(Int32_t2950945753_il2cpp_TypeInfo_var, &L_38);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_40 = String_Concat_m904156431(NULL /*static, unused*/, L_32, L_39, /*hidden argument*/NULL);
		V_0 = L_40;
	}

IL_00d6:
	{
		String_t* L_41 = V_0;
		PlayerPrefs_SetString_m2101271233(NULL /*static, unused*/, _stringLiteral2354090585, L_41, /*hidden argument*/NULL);
		GameObject_t1113636619 * L_42 = __this->get__complete_image_obj_3();
		NullCheck(L_42);
		GameObject_SetActive_m796801857(L_42, (bool)0, /*hidden argument*/NULL);
		GameObject_t1113636619 * L_43 = __this->get_resetButton_4();
		NullCheck(L_43);
		GameObject_SetActive_m796801857(L_43, (bool)1, /*hidden argument*/NULL);
		GameManager_t1536523654 * L_44 = __this->get_game_manager_7();
		NullCheck(L_44);
		DontDestroyManager_t1329034447 * L_45 = GameManager_getDontDestroyManager_m2156172674(L_44, /*hidden argument*/NULL);
		NullCheck(L_45);
		BlurManager_t3192295244 * L_46 = L_45->get_blurManager_7();
		LocalizeString_t491646212 * L_47 = ((LocalizeTool_t315363650_StaticFields*)il2cpp_codegen_static_fields_for(LocalizeTool_t315363650_il2cpp_TypeInfo_var))->get_localizeString_0();
		NullCheck(L_47);
		String_t* L_48 = L_47->get_complete_board_2();
		NullCheck(L_46);
		BlurManager_popup_m1373291001(L_46, L_48, /*hidden argument*/NULL);
		return;
	}
}
// System.Void PlayBoardGameSceneManager::resetClick()
extern "C"  void PlayBoardGameSceneManager_resetClick_m3296291786 (PlayBoardGameSceneManager_t1063580347 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (PlayBoardGameSceneManager_resetClick_m3296291786_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		GameManager_t1536523654 * L_0 = __this->get_game_manager_7();
		NullCheck(L_0);
		DontDestroyManager_t1329034447 * L_1 = GameManager_getDontDestroyManager_m2156172674(L_0, /*hidden argument*/NULL);
		NullCheck(L_1);
		BlurManager_t3192295244 * L_2 = L_1->get_blurManager_7();
		LocalizeString_t491646212 * L_3 = ((LocalizeTool_t315363650_StaticFields*)il2cpp_codegen_static_fields_for(LocalizeTool_t315363650_il2cpp_TypeInfo_var))->get_localizeString_0();
		NullCheck(L_3);
		String_t* L_4 = L_3->get_msg_reset_3();
		intptr_t L_5 = (intptr_t)PlayBoardGameSceneManager_U3CresetClickU3Em__0_m3185857501_RuntimeMethod_var;
		UnityAction_t3245792599 * L_6 = (UnityAction_t3245792599 *)il2cpp_codegen_object_new(UnityAction_t3245792599_il2cpp_TypeInfo_var);
		UnityAction__ctor_m772160306(L_6, __this, L_5, /*hidden argument*/NULL);
		NullCheck(L_2);
		BlurManager_popup_m1972495530(L_2, L_4, L_6, /*hidden argument*/NULL);
		return;
	}
}
// System.Void PlayBoardGameSceneManager::<resetClick>m__0()
extern "C"  void PlayBoardGameSceneManager_U3CresetClickU3Em__0_m3185857501 (PlayBoardGameSceneManager_t1063580347 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (PlayBoardGameSceneManager_U3CresetClickU3Em__0_m3185857501_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		GameObject_t1113636619 * L_0 = __this->get__board_parent_obj_2();
		NullCheck(L_0);
		Transform_t3600365921 * L_1 = GameObject_get_transform_m1369836730(L_0, /*hidden argument*/NULL);
		NullCheck(L_1);
		Transform_t3600365921 * L_2 = Transform_Find_m1729760951(L_1, _stringLiteral22615885, /*hidden argument*/NULL);
		NullCheck(L_2);
		BlockGameScript_t725110519 * L_3 = Component_GetComponent_TisBlockGameScript_t725110519_m560207762(L_2, /*hidden argument*/Component_GetComponent_TisBlockGameScript_t725110519_m560207762_RuntimeMethod_var);
		NullCheck(L_3);
		BlockGameScript_Reset_m398893628(L_3, /*hidden argument*/NULL);
		GameObject_t1113636619 * L_4 = __this->get__complete_image_obj_3();
		NullCheck(L_4);
		GameObject_SetActive_m796801857(L_4, (bool)1, /*hidden argument*/NULL);
		GameObject_t1113636619 * L_5 = __this->get_resetButton_4();
		NullCheck(L_5);
		GameObject_SetActive_m796801857(L_5, (bool)0, /*hidden argument*/NULL);
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
// System.Void SocialTool::.ctor()
extern "C"  void SocialTool__ctor_m3886541085 (SocialTool_t1909827527 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SocialTool__ctor_m3886541085_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		Object__ctor_m297566312(__this, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(GameCenterPlatform_t2679391364_il2cpp_TypeInfo_var);
		GameCenterPlatform_ShowDefaultAchievementCompletionBanner_m2497844455(NULL /*static, unused*/, (bool)1, /*hidden argument*/NULL);
		return;
	}
}
// System.Void SocialTool::socialLogin()
extern "C"  void SocialTool_socialLogin_m1551231671 (SocialTool_t1909827527 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SocialTool_socialLogin_m1551231671_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* G_B2_0 = NULL;
	RuntimeObject* G_B1_0 = NULL;
	{
		RuntimeObject* L_0 = Social_get_localUser_m4215544813(NULL /*static, unused*/, /*hidden argument*/NULL);
		Action_1_t269755560 * L_1 = ((SocialTool_t1909827527_StaticFields*)il2cpp_codegen_static_fields_for(SocialTool_t1909827527_il2cpp_TypeInfo_var))->get_U3CU3Ef__amU24cache0_2();
		G_B1_0 = L_0;
		if (L_1)
		{
			G_B2_0 = L_0;
			goto IL_001d;
		}
	}
	{
		intptr_t L_2 = (intptr_t)SocialTool_U3CsocialLoginU3Em__0_m3261903763_RuntimeMethod_var;
		Action_1_t269755560 * L_3 = (Action_1_t269755560 *)il2cpp_codegen_object_new(Action_1_t269755560_il2cpp_TypeInfo_var);
		Action_1__ctor_m1363151734(L_3, NULL, L_2, /*hidden argument*/Action_1__ctor_m1363151734_RuntimeMethod_var);
		((SocialTool_t1909827527_StaticFields*)il2cpp_codegen_static_fields_for(SocialTool_t1909827527_il2cpp_TypeInfo_var))->set_U3CU3Ef__amU24cache0_2(L_3);
		G_B2_0 = G_B1_0;
	}

IL_001d:
	{
		Action_1_t269755560 * L_4 = ((SocialTool_t1909827527_StaticFields*)il2cpp_codegen_static_fields_for(SocialTool_t1909827527_il2cpp_TypeInfo_var))->get_U3CU3Ef__amU24cache0_2();
		NullCheck(G_B2_0);
		InterfaceActionInvoker1< Action_1_t269755560 * >::Invoke(0 /* System.Void UnityEngine.SocialPlatforms.ILocalUser::Authenticate(System.Action`1<System.Boolean>) */, ILocalUser_t2242999785_il2cpp_TypeInfo_var, G_B2_0, L_4);
		return;
	}
}
extern "C" void DEFAULT_CALL _AddData();
// System.Void SocialTool::_AddData()
extern "C"  void SocialTool__AddData_m24678439 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc) ();

	// Native function invocation
	reinterpret_cast<PInvokeFunc>(_AddData)();

}
extern "C" void DEFAULT_CALL _RequestData();
// System.Void SocialTool::_RequestData()
extern "C"  void SocialTool__RequestData_m322291549 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc) ();

	// Native function invocation
	reinterpret_cast<PInvokeFunc>(_RequestData)();

}
extern "C" void DEFAULT_CALL _UpdateData();
// System.Void SocialTool::_UpdateData()
extern "C"  void SocialTool__UpdateData_m3790300808 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc) ();

	// Native function invocation
	reinterpret_cast<PInvokeFunc>(_UpdateData)();

}
extern "C" void DEFAULT_CALL _DeleteData();
// System.Void SocialTool::_DeleteData()
extern "C"  void SocialTool__DeleteData_m864986569 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc) ();

	// Native function invocation
	reinterpret_cast<PInvokeFunc>(_DeleteData)();

}
// System.Void SocialTool::<socialLogin>m__0(System.Boolean)
extern "C"  void SocialTool_U3CsocialLoginU3Em__0_m3261903763 (RuntimeObject * __this /* static, unused */, bool ___success0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SocialTool_U3CsocialLoginU3Em__0_m3261903763_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		bool L_0 = ___success0;
		if (!L_0)
		{
			goto IL_001f;
		}
	}
	{
		RuntimeObject* L_1 = Social_get_localUser_m4215544813(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_1);
		String_t* L_2 = InterfaceFuncInvoker0< String_t* >::Invoke(0 /* System.String UnityEngine.SocialPlatforms.IUserProfile::get_id() */, IUserProfile_t360500636_il2cpp_TypeInfo_var, L_1);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_3 = String_Concat_m3937257545(NULL /*static, unused*/, L_2, _stringLiteral3463449499, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Debug_t3317548046_il2cpp_TypeInfo_var);
		Debug_Log_m4051431634(NULL /*static, unused*/, L_3, /*hidden argument*/NULL);
	}

IL_001f:
	{
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
// System.Void SoulPopUpManager::.ctor()
extern "C"  void SoulPopUpManager__ctor_m351342043 (SoulPopUpManager_t3321416543 * __this, const RuntimeMethod* method)
{
	{
		__this->set_PADDING_2((50.0f));
		__this->set_SOUL_DISTANCE_3((50.0f));
		MonoBehaviour__ctor_m1579109191(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void SoulPopUpManager::Awake()
extern "C"  void SoulPopUpManager_Awake_m1107351948 (SoulPopUpManager_t3321416543 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SoulPopUpManager_Awake_m1107351948_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	DateTime_t3738529785  V_0;
	memset(&V_0, 0, sizeof(V_0));
	int64_t V_1 = 0;
	{
		IL2CPP_RUNTIME_CLASS_INIT(GameManager_t1536523654_il2cpp_TypeInfo_var);
		GameManager_t1536523654 * L_0 = GameManager_GetInstance_m367300771(NULL /*static, unused*/, /*hidden argument*/NULL);
		__this->set_game_manager_11(L_0);
		List_1_t2585711361 * L_1 = (List_1_t2585711361 *)il2cpp_codegen_object_new(List_1_t2585711361_il2cpp_TypeInfo_var);
		List_1__ctor_m1424466557(L_1, /*hidden argument*/List_1__ctor_m1424466557_RuntimeMethod_var);
		__this->set__list_souls_12(L_1);
		int32_t L_2 = PlayerPrefs_GetInt_m1299643124(NULL /*static, unused*/, _stringLiteral4213792534, 0, /*hidden argument*/NULL);
		__this->set__collectable_soul_num_8(L_2);
		IL2CPP_RUNTIME_CLASS_INIT(DateTime_t3738529785_il2cpp_TypeInfo_var);
		DateTime_t3738529785  L_3 = DateTime_get_Now_m1277138875(NULL /*static, unused*/, /*hidden argument*/NULL);
		V_0 = L_3;
		String_t* L_4 = DateTime_ToString_m884486936((DateTime_t3738529785 *)(&V_0), /*hidden argument*/NULL);
		String_t* L_5 = PlayerPrefs_GetString_m614532710(NULL /*static, unused*/, _stringLiteral1458568745, L_4, /*hidden argument*/NULL);
		__this->set__last_opened_time_9(L_5);
		float L_6 = PlayerPrefs_GetFloat_m3293813615(NULL /*static, unused*/, _stringLiteral1764733236, (20.0f), /*hidden argument*/NULL);
		__this->set__last_time_to_create_new_soul_10(L_6);
		String_t* L_7 = __this->get__last_opened_time_9();
		int64_t L_8 = SoulPopUpManager_CheckSecondDifference_m4265491882(__this, L_7, /*hidden argument*/NULL);
		V_1 = L_8;
		int64_t L_9 = V_1;
		float L_10 = __this->get__last_time_to_create_new_soul_10();
		V_1 = ((int64_t)il2cpp_codegen_add((int64_t)L_9, (int64_t)((int64_t)il2cpp_codegen_subtract((int64_t)(((int64_t)((int64_t)((int32_t)20)))), (int64_t)(((int64_t)((int64_t)L_10)))))));
		int64_t L_11 = V_1;
		int32_t L_12 = __this->get__collectable_soul_num_8();
		if ((((int64_t)L_11) < ((int64_t)((int64_t)il2cpp_codegen_multiply((int64_t)(((int64_t)((int64_t)((int32_t)il2cpp_codegen_subtract((int32_t)((int32_t)50), (int32_t)L_12))))), (int64_t)(((int64_t)((int64_t)((int32_t)20)))))))))
		{
			goto IL_00a6;
		}
	}
	{
		__this->set__collectable_soul_num_8(((int32_t)50));
		__this->set__last_time_to_create_new_soul_10((20.0f));
		goto IL_00cb;
	}

IL_00a6:
	{
		int32_t L_13 = __this->get__collectable_soul_num_8();
		int64_t L_14 = V_1;
		__this->set__collectable_soul_num_8(((int32_t)il2cpp_codegen_add((int32_t)L_13, (int32_t)((int32_t)((int32_t)(((int32_t)((int32_t)L_14)))/(int32_t)((int32_t)20))))));
		float L_15 = __this->get__last_time_to_create_new_soul_10();
		int64_t L_16 = V_1;
		__this->set__last_time_to_create_new_soul_10(((float)il2cpp_codegen_subtract((float)L_15, (float)(((float)((float)((int64_t)((int64_t)L_16%(int64_t)(((int64_t)((int64_t)((int32_t)20))))))))))));
	}

IL_00cb:
	{
		return;
	}
}
// System.Void SoulPopUpManager::Start()
extern "C"  void SoulPopUpManager_Start_m1414307135 (SoulPopUpManager_t3321416543 * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = __this->get__collectable_soul_num_8();
		SoulPopUpManager_PlaceSoulsRandomly_m1447194973(__this, L_0, /*hidden argument*/NULL);
		return;
	}
}
// System.Void SoulPopUpManager::Update()
extern "C"  void SoulPopUpManager_Update_m2350063369 (SoulPopUpManager_t3321416543 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SoulPopUpManager_Update_m2350063369_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		SoulPopUpManager_CheckTouchInputs_m3936880048(__this, /*hidden argument*/NULL);
		int32_t L_0 = __this->get__collectable_soul_num_8();
		if ((((int32_t)L_0) >= ((int32_t)((int32_t)50))))
		{
			goto IL_007a;
		}
	}
	{
		float L_1 = __this->get__last_time_to_create_new_soul_10();
		float L_2 = Time_get_deltaTime_m372706562(NULL /*static, unused*/, /*hidden argument*/NULL);
		__this->set__last_time_to_create_new_soul_10(((float)il2cpp_codegen_subtract((float)L_1, (float)L_2)));
		Text_t1901882714 * L_3 = __this->get__remain_time_txt_6();
		float L_4 = __this->get__last_time_to_create_new_soul_10();
		int32_t L_5 = (((int32_t)((int32_t)L_4)));
		RuntimeObject * L_6 = Box(Int32_t2950945753_il2cpp_TypeInfo_var, &L_5);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_7 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_2();
		String_t* L_8 = String_Concat_m904156431(NULL /*static, unused*/, L_6, L_7, /*hidden argument*/NULL);
		NullCheck(L_3);
		VirtActionInvoker1< String_t* >::Invoke(72 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_3, L_8);
		float L_9 = __this->get__last_time_to_create_new_soul_10();
		if ((!(((float)L_9) < ((float)(0.0f)))))
		{
			goto IL_0075;
		}
	}
	{
		__this->set__last_time_to_create_new_soul_10((20.0f));
		SoulPopUpManager_CreateSoul_m3655787173(__this, /*hidden argument*/NULL);
		int32_t L_10 = __this->get__collectable_soul_num_8();
		__this->set__collectable_soul_num_8(((int32_t)il2cpp_codegen_add((int32_t)L_10, (int32_t)1)));
	}

IL_0075:
	{
		goto IL_008a;
	}

IL_007a:
	{
		Text_t1901882714 * L_11 = __this->get__remain_time_txt_6();
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_12 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_2();
		NullCheck(L_11);
		VirtActionInvoker1< String_t* >::Invoke(72 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_11, L_12);
	}

IL_008a:
	{
		return;
	}
}
// System.Void SoulPopUpManager::OnDestroy()
extern "C"  void SoulPopUpManager_OnDestroy_m2403062827 (SoulPopUpManager_t3321416543 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SoulPopUpManager_OnDestroy_m2403062827_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	DateTime_t3738529785  V_0;
	memset(&V_0, 0, sizeof(V_0));
	{
		int32_t L_0 = __this->get__collectable_soul_num_8();
		PlayerPrefs_SetInt_m2842000469(NULL /*static, unused*/, _stringLiteral4213792534, L_0, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(DateTime_t3738529785_il2cpp_TypeInfo_var);
		DateTime_t3738529785  L_1 = DateTime_get_Now_m1277138875(NULL /*static, unused*/, /*hidden argument*/NULL);
		V_0 = L_1;
		String_t* L_2 = DateTime_ToString_m884486936((DateTime_t3738529785 *)(&V_0), /*hidden argument*/NULL);
		PlayerPrefs_SetString_m2101271233(NULL /*static, unused*/, _stringLiteral1458568745, L_2, /*hidden argument*/NULL);
		float L_3 = __this->get__last_time_to_create_new_soul_10();
		PlayerPrefs_SetFloat_m3161432420(NULL /*static, unused*/, _stringLiteral1764733236, L_3, /*hidden argument*/NULL);
		return;
	}
}
// System.Int64 SoulPopUpManager::CheckSecondDifference(System.String)
extern "C"  int64_t SoulPopUpManager_CheckSecondDifference_m4265491882 (SoulPopUpManager_t3321416543 * __this, String_t* ___old0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SoulPopUpManager_CheckSecondDifference_m4265491882_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	DateTime_t3738529785  V_0;
	memset(&V_0, 0, sizeof(V_0));
	DateTime_t3738529785  V_1;
	memset(&V_1, 0, sizeof(V_1));
	TimeSpan_t881159249  V_2;
	memset(&V_2, 0, sizeof(V_2));
	{
		String_t* L_0 = ___old0;
		IL2CPP_RUNTIME_CLASS_INIT(Convert_t2465617642_il2cpp_TypeInfo_var);
		DateTime_t3738529785  L_1 = Convert_ToDateTime_m199555027(NULL /*static, unused*/, L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		IL2CPP_RUNTIME_CLASS_INIT(DateTime_t3738529785_il2cpp_TypeInfo_var);
		DateTime_t3738529785  L_2 = DateTime_get_Now_m1277138875(NULL /*static, unused*/, /*hidden argument*/NULL);
		V_1 = L_2;
		DateTime_t3738529785  L_3 = V_0;
		TimeSpan_t881159249  L_4 = DateTime_Subtract_m77007479((DateTime_t3738529785 *)(&V_1), L_3, /*hidden argument*/NULL);
		V_2 = L_4;
		double L_5 = TimeSpan_get_TotalSeconds_m4083325051((TimeSpan_t881159249 *)(&V_2), /*hidden argument*/NULL);
		return (((int64_t)((int64_t)L_5)));
	}
}
// System.Void SoulPopUpManager::PlaceSoulsRandomly(System.Int32)
extern "C"  void SoulPopUpManager_PlaceSoulsRandomly_m1447194973 (SoulPopUpManager_t3321416543 * __this, int32_t ____soul_num0, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	{
		V_0 = 0;
		goto IL_0011;
	}

IL_0007:
	{
		SoulPopUpManager_CreateSoul_m3655787173(__this, /*hidden argument*/NULL);
		int32_t L_0 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_0, (int32_t)1));
	}

IL_0011:
	{
		int32_t L_1 = V_0;
		int32_t L_2 = ____soul_num0;
		if ((((int32_t)L_1) < ((int32_t)L_2)))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void SoulPopUpManager::CreateSoul()
extern "C"  void SoulPopUpManager_CreateSoul_m3655787173 (SoulPopUpManager_t3321416543 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SoulPopUpManager_CreateSoul_m3655787173_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	GameObject_t1113636619 * V_0 = NULL;
	GameObject_t1113636619 * V_1 = NULL;
	float V_2 = 0.0f;
	Rect_t2360479859  V_3;
	memset(&V_3, 0, sizeof(V_3));
	float V_4 = 0.0f;
	Rect_t2360479859  V_5;
	memset(&V_5, 0, sizeof(V_5));
	Vector3_t3722313464  V_6;
	memset(&V_6, 0, sizeof(V_6));
	{
		Object_t631007953 * L_0 = Resources_Load_m3880010804(NULL /*static, unused*/, _stringLiteral310922397, /*hidden argument*/NULL);
		V_0 = ((GameObject_t1113636619 *)IsInstSealed((RuntimeObject*)L_0, GameObject_t1113636619_il2cpp_TypeInfo_var));
		GameObject_t1113636619 * L_1 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(Object_t631007953_il2cpp_TypeInfo_var);
		GameObject_t1113636619 * L_2 = Object_Instantiate_TisGameObject_t1113636619_m4070250708(NULL /*static, unused*/, L_1, /*hidden argument*/Object_Instantiate_TisGameObject_t1113636619_m4070250708_RuntimeMethod_var);
		V_1 = L_2;
		List_1_t2585711361 * L_3 = __this->get__list_souls_12();
		GameObject_t1113636619 * L_4 = V_1;
		NullCheck(L_3);
		List_1_Add_m2765963565(L_3, L_4, /*hidden argument*/List_1_Add_m2765963565_RuntimeMethod_var);
		GameObject_t1113636619 * L_5 = V_1;
		NullCheck(L_5);
		Transform_t3600365921 * L_6 = GameObject_get_transform_m1369836730(L_5, /*hidden argument*/NULL);
		GameObject_t1113636619 * L_7 = __this->get__soul_area_7();
		NullCheck(L_7);
		Transform_t3600365921 * L_8 = GameObject_GetComponent_TisTransform_t3600365921_m3348034436(L_7, /*hidden argument*/GameObject_GetComponent_TisTransform_t3600365921_m3348034436_RuntimeMethod_var);
		NullCheck(L_6);
		Transform_SetParent_m381167889(L_6, L_8, /*hidden argument*/NULL);
		GameObject_t1113636619 * L_9 = __this->get__soul_area_7();
		NullCheck(L_9);
		RectTransform_t3704657025 * L_10 = GameObject_GetComponent_TisRectTransform_t3704657025_m2005094398(L_9, /*hidden argument*/GameObject_GetComponent_TisRectTransform_t3704657025_m2005094398_RuntimeMethod_var);
		NullCheck(L_10);
		Rect_t2360479859  L_11 = RectTransform_get_rect_m574169965(L_10, /*hidden argument*/NULL);
		V_3 = L_11;
		float L_12 = Rect_get_width_m3421484486((Rect_t2360479859 *)(&V_3), /*hidden argument*/NULL);
		float L_13 = __this->get_PADDING_2();
		V_2 = ((float)il2cpp_codegen_subtract((float)((float)((float)L_12/(float)(2.0f))), (float)L_13));
		GameObject_t1113636619 * L_14 = __this->get__soul_area_7();
		NullCheck(L_14);
		RectTransform_t3704657025 * L_15 = GameObject_GetComponent_TisRectTransform_t3704657025_m2005094398(L_14, /*hidden argument*/GameObject_GetComponent_TisRectTransform_t3704657025_m2005094398_RuntimeMethod_var);
		NullCheck(L_15);
		Rect_t2360479859  L_16 = RectTransform_get_rect_m574169965(L_15, /*hidden argument*/NULL);
		V_5 = L_16;
		float L_17 = Rect_get_height_m1358425599((Rect_t2360479859 *)(&V_5), /*hidden argument*/NULL);
		float L_18 = __this->get_PADDING_2();
		V_4 = ((float)il2cpp_codegen_subtract((float)((float)((float)L_17/(float)(2.0f))), (float)L_18));
		float L_19 = V_2;
		float L_20 = V_2;
		float L_21 = Random_Range_m2202990745(NULL /*static, unused*/, ((float)il2cpp_codegen_multiply((float)(-1.0f), (float)L_19)), L_20, /*hidden argument*/NULL);
		float L_22 = V_4;
		float L_23 = V_4;
		float L_24 = Random_Range_m2202990745(NULL /*static, unused*/, ((float)il2cpp_codegen_multiply((float)(-1.0f), (float)L_22)), L_23, /*hidden argument*/NULL);
		Vector3__ctor_m3353183577((Vector3_t3722313464 *)(&V_6), L_21, L_24, (0.0f), /*hidden argument*/NULL);
		GameObject_t1113636619 * L_25 = V_1;
		NullCheck(L_25);
		Transform_t3600365921 * L_26 = GameObject_get_transform_m1369836730(L_25, /*hidden argument*/NULL);
		Vector3_t3722313464  L_27 = V_6;
		NullCheck(L_26);
		Transform_set_localPosition_m4128471975(L_26, L_27, /*hidden argument*/NULL);
		return;
	}
}
// System.Void SoulPopUpManager::CheckTouchInputs()
extern "C"  void SoulPopUpManager_CheckTouchInputs_m3936880048 (SoulPopUpManager_t3321416543 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SoulPopUpManager_CheckTouchInputs_m3936880048_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Vector3_t3722313464  V_0;
	memset(&V_0, 0, sizeof(V_0));
	int32_t V_1 = 0;
	GameObject_t1113636619 * V_2 = NULL;
	{
		IL2CPP_RUNTIME_CLASS_INIT(Input_t1431474628_il2cpp_TypeInfo_var);
		bool L_0 = Input_GetMouseButton_m513753021(NULL /*static, unused*/, 0, /*hidden argument*/NULL);
		if (!L_0)
		{
			goto IL_0063;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Input_t1431474628_il2cpp_TypeInfo_var);
		Vector3_t3722313464  L_1 = Input_get_mousePosition_m1616496925(NULL /*static, unused*/, /*hidden argument*/NULL);
		V_0 = L_1;
		V_1 = 0;
		goto IL_0052;
	}

IL_0018:
	{
		List_1_t2585711361 * L_2 = __this->get__list_souls_12();
		int32_t L_3 = V_1;
		NullCheck(L_2);
		GameObject_t1113636619 * L_4 = List_1_get_Item_m3743125852(L_2, L_3, /*hidden argument*/List_1_get_Item_m3743125852_RuntimeMethod_var);
		V_2 = L_4;
		GameObject_t1113636619 * L_5 = V_2;
		NullCheck(L_5);
		Transform_t3600365921 * L_6 = GameObject_GetComponent_TisTransform_t3600365921_m3348034436(L_5, /*hidden argument*/GameObject_GetComponent_TisTransform_t3600365921_m3348034436_RuntimeMethod_var);
		NullCheck(L_6);
		Vector3_t3722313464  L_7 = Transform_get_position_m36019626(L_6, /*hidden argument*/NULL);
		Vector3_t3722313464  L_8 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_t3722313464_il2cpp_TypeInfo_var);
		float L_9 = Vector3_Distance_m886789632(NULL /*static, unused*/, L_7, L_8, /*hidden argument*/NULL);
		float L_10 = __this->get_SOUL_DISTANCE_3();
		if ((!(((float)L_9) <= ((float)L_10))))
		{
			goto IL_004e;
		}
	}
	{
		GameObject_t1113636619 * L_11 = V_2;
		IL2CPP_RUNTIME_CLASS_INIT(Object_t631007953_il2cpp_TypeInfo_var);
		Object_Destroy_m565254235(NULL /*static, unused*/, L_11, /*hidden argument*/NULL);
		int32_t L_12 = V_1;
		SoulPopUpManager_GetSoul_m552337302(__this, L_12, /*hidden argument*/NULL);
	}

IL_004e:
	{
		int32_t L_13 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_13, (int32_t)1));
	}

IL_0052:
	{
		int32_t L_14 = V_1;
		List_1_t2585711361 * L_15 = __this->get__list_souls_12();
		NullCheck(L_15);
		int32_t L_16 = List_1_get_Count_m2812834599(L_15, /*hidden argument*/List_1_get_Count_m2812834599_RuntimeMethod_var);
		if ((((int32_t)L_14) < ((int32_t)L_16)))
		{
			goto IL_0018;
		}
	}

IL_0063:
	{
		return;
	}
}
// System.Void SoulPopUpManager::GetSoul(System.Int32)
extern "C"  void SoulPopUpManager_GetSoul_m552337302 (SoulPopUpManager_t3321416543 * __this, int32_t ___i0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SoulPopUpManager_GetSoul_m552337302_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		int32_t L_0 = __this->get__collectable_soul_num_8();
		__this->set__collectable_soul_num_8(((int32_t)il2cpp_codegen_subtract((int32_t)L_0, (int32_t)1)));
		List_1_t2585711361 * L_1 = __this->get__list_souls_12();
		int32_t L_2 = ___i0;
		NullCheck(L_1);
		List_1_RemoveAt_m3509344782(L_1, L_2, /*hidden argument*/List_1_RemoveAt_m3509344782_RuntimeMethod_var);
		int32_t L_3 = DontDestroyManager_GetSoulNum_m1644499173(NULL /*static, unused*/, /*hidden argument*/NULL);
		DontDestroyManager_SetSoulNum_m3127869396(NULL /*static, unused*/, ((int32_t)il2cpp_codegen_add((int32_t)L_3, (int32_t)1)), /*hidden argument*/NULL);
		int32_t L_4 = __this->get__collectable_soul_num_8();
		int32_t L_5 = L_4;
		RuntimeObject * L_6 = Box(Int32_t2950945753_il2cpp_TypeInfo_var, &L_5);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_7 = String_Concat_m904156431(NULL /*static, unused*/, _stringLiteral3193826057, L_6, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Debug_t3317548046_il2cpp_TypeInfo_var);
		Debug_Log_m4051431634(NULL /*static, unused*/, L_7, /*hidden argument*/NULL);
		return;
	}
}
// System.Void SoulPopUpManager::GoBack()
extern "C"  void SoulPopUpManager_GoBack_m2253770426 (SoulPopUpManager_t3321416543 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SoulPopUpManager_GoBack_m2253770426_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	MainSceneManager_t2603182452 * V_0 = NULL;
	{
		GameObject_t1113636619 * L_0 = GameObject_Find_m2032535176(NULL /*static, unused*/, _stringLiteral3675739884, /*hidden argument*/NULL);
		NullCheck(L_0);
		MainSceneManager_t2603182452 * L_1 = GameObject_GetComponent_TisMainSceneManager_t2603182452_m1706813279(L_0, /*hidden argument*/GameObject_GetComponent_TisMainSceneManager_t2603182452_m1706813279_RuntimeMethod_var);
		V_0 = L_1;
		MainSceneManager_t2603182452 * L_2 = V_0;
		NullCheck(L_2);
		MainSceneManager_SetGalleryPage_m824382587(L_2, /*hidden argument*/NULL);
		MainSceneManager_t2603182452 * L_3 = V_0;
		NullCheck(L_3);
		Text_t1901882714 * L_4 = L_3->get_soulText_8();
		int32_t L_5 = DontDestroyManager_GetSoulNum_m1644499173(NULL /*static, unused*/, /*hidden argument*/NULL);
		int32_t L_6 = L_5;
		RuntimeObject * L_7 = Box(Int32_t2950945753_il2cpp_TypeInfo_var, &L_6);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_8 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_2();
		String_t* L_9 = String_Concat_m904156431(NULL /*static, unused*/, L_7, L_8, /*hidden argument*/NULL);
		NullCheck(L_4);
		VirtActionInvoker1< String_t* >::Invoke(72 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_4, L_9);
		GameObject_t1113636619 * L_10 = Component_get_gameObject_m442555142(__this, /*hidden argument*/NULL);
		NullCheck(L_10);
		GameObject_SetActive_m796801857(L_10, (bool)0, /*hidden argument*/NULL);
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
// System.Void ToastActive::.ctor()
extern "C"  void ToastActive__ctor_m3697650613 (ToastActive_t2371010005 * __this, const RuntimeMethod* method)
{
	{
		MonoBehaviour__ctor_m1579109191(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void ToastActive::setDeactive()
extern "C"  void ToastActive_setDeactive_m3062039964 (ToastActive_t2371010005 * __this, const RuntimeMethod* method)
{
	{
		GameObject_t1113636619 * L_0 = Component_get_gameObject_m442555142(__this, /*hidden argument*/NULL);
		NullCheck(L_0);
		GameObject_SetActive_m796801857(L_0, (bool)0, /*hidden argument*/NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
