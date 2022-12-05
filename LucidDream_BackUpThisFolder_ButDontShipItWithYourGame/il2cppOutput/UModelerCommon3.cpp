#include "pch-cpp.hpp"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <limits>
#include <stdint.h>


struct VirtualActionInvoker0
{
	typedef void (*Action)(void*, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, invokeData.method);
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
struct GenericVirtualActionInvoker0
{
	typedef void (*Action)(void*, const RuntimeMethod*);

	static inline void Invoke (const RuntimeMethod* method, RuntimeObject* obj)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_virtual_invoke_data(method, obj, &invokeData);
		((Action)invokeData.methodPtr)(obj, invokeData.method);
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
struct GenericInterfaceActionInvoker0
{
	typedef void (*Action)(void*, const RuntimeMethod*);

	static inline void Invoke (const RuntimeMethod* method, RuntimeObject* obj)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_interface_invoke_data(method, obj, &invokeData);
		((Action)invokeData.methodPtr)(obj, invokeData.method);
	}
};
struct InvokerActionInvoker0
{
	static inline void Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj)
	{
		method->invoker_method(methodPtr, method, obj, NULL, NULL);
	}
};
template <typename T1>
struct InvokerActionInvoker1;
template <typename T1>
struct InvokerActionInvoker1<T1*>
{
	static inline void Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1* p1)
	{
		void* params[1] = { p1 };
		method->invoker_method(methodPtr, method, obj, params, NULL);
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
template <typename R, typename T1, typename T2, typename T3>
struct InvokerFuncInvoker3
{
	static inline R Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1 p1, T2 p2, T3 p3)
	{
		R ret;
		void* params[3] = { &p1, &p2, &p3 };
		method->invoker_method(methodPtr, method, obj, params, &ret);
		return ret;
	}
};
template <typename R, typename T1, typename T2, typename T3, typename T4>
struct InvokerFuncInvoker4;
template <typename R, typename T1, typename T2, typename T3, typename T4>
struct InvokerFuncInvoker4<R, T1*, T2, T3, T4>
{
	static inline R Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1* p1, T2 p2, T3 p3, T4 p4)
	{
		R ret;
		void* params[4] = { p1, &p2, &p3, &p4 };
		method->invoker_method(methodPtr, method, obj, params, &ret);
		return ret;
	}
};

// System.Collections.Generic.Dictionary`2<System.Int32,UnityEngine.Mesh>
struct Dictionary_2_t6D39865003E656D60A88B22671895E4EA1590710;
// System.Collections.Generic.Dictionary`2<System.Int32,System.Object>
struct Dictionary_2_tA75D1125AC9BE8F005BA9B868B373398E643C907;
// System.Collections.Generic.Dictionary`2<tripolygon.UModeler.SimplePolygon,System.Collections.Generic.List`1<tripolygon.UModeler.SimplePolygon>>
struct Dictionary_2_t59016DC6236C94667B57479BF0E39817771EF9DC;
// System.Func`2<System.Collections.Generic.KeyValuePair`2<tripolygon.UModeler.Hotspot,System.Single>,tripolygon.UModeler.Hotspot>
struct Func_2_tB21762CB355C1AC2E7F2757825C9BFEB83E112AB;
// System.Collections.Generic.IEnumerable`1<UnityEngine.Material>
struct IEnumerable_1_tB8C86BD783ADA156CF66B9AF8F1FB3B64D57CE5C;
// System.Collections.Generic.IEnumerable`1<System.Object>
struct IEnumerable_1_tF95C9E01A913DD50575531C8305932628663D9E9;
// System.Collections.Generic.IEqualityComparer`1<System.Int32>
struct IEqualityComparer_1_tDBFC8496F14612776AF930DBF84AFE7D06D1F0E9;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.Int32,UnityEngine.Mesh>
struct KeyCollection_t18C507C428A898759B7A40DC14B44106CC557352;
// System.Collections.Generic.SortedDictionary`2/KeyCollection<System.Single,System.Int32>
struct KeyCollection_t90F8E955C3513D8D119B4FDFC3692C26049518E3;
// System.Collections.Generic.List`1<tripolygon.UModeler.Edge>
struct List_1_t9A7220215C9ED1BE212A9632A14022A68B3BFC12;
// System.Collections.Generic.List`1<tripolygon.UModeler.IndexPair>
struct List_1_t77E791A5D872DCB1195678FCECC444A825292814;
// System.Collections.Generic.List`1<System.Int32>
struct List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73;
// System.Collections.Generic.List`1<UnityEngine.Material>
struct List_1_t386E09F4F22DDE4D2AC41A8567FFF283C254537B;
// System.Collections.Generic.List`1<System.Object>
struct List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D;
// System.Collections.Generic.List`1<tripolygon.UModeler.SimplePolygon>
struct List_1_tBD3EFF6C36C49D37E37AA532C06442E0AEC0544D;
// System.Collections.Generic.List`1<System.Single>
struct List_1_t0D1C46FD8DDDE974D93CA4F3474EEC05AF950918;
// System.Collections.Generic.List`1<tripolygon.UModeler.SmoothingGroup>
struct List_1_t51907573DE621C7B6F8A45BE5A45C7775CB6A7DE;
// System.Collections.Generic.List`1<System.UInt64>
struct List_1_tB88E7361EE76DFB3EBB7FCD60CC59ACC3E48C284;
// System.Collections.Generic.List`1<tripolygon.UModeler.UVIsland>
struct List_1_t72FE227E373E5AEED90235540B93352AB4F4B4E8;
// System.Collections.Generic.List`1<UnityEngine.Vector2>
struct List_1_t8F3790B7F8C471B3A1336522C7415FB0AC36D47B;
// System.Collections.Generic.List`1<UnityEngine.Vector3>
struct List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B;
// System.Collections.Generic.List`1<tripolygon.UModeler.Vertex>
struct List_1_t302A75244C10A0CEF3AC031C484C2772A9D30A6F;
// System.Collections.Generic.List`1<tripolygon.UModeler.VertexSelection>
struct List_1_tD1AF371C43DF0B37278148C46393C71C101E7BCF;
// System.Collections.Generic.List`1<tripolygon.UModeler.StopModelerBuild/BuildShelfArg>
struct List_1_t2FB40158AFCD69E77037C532086C70828AC06862;
// System.Collections.Generic.List`1<tripolygon.UModeler.Util/ClippingVertex>
struct List_1_tD13CD97762EDE4928859DDC2999E6E2175B20A11;
// System.Collections.Generic.SortedSet`1/Node<System.Collections.Generic.KeyValuePair`2<System.Single,System.Int32>>
struct Node_t5A5ACF97B4916D3155AA176EAAF809EDF24C613A;
// System.Collections.Generic.SortedDictionary`2<System.Single,System.Int32>
struct SortedDictionary_2_t4C2768740A7E0300B8278590463E71E6C439B5F2;
// System.Collections.Generic.SortedSet`1<System.Collections.Generic.KeyValuePair`2<System.Single,System.Int32>>
struct SortedSet_1_t2CFC5266138C9D2FAD0FBAC7791CB305EB45739C;
// System.Collections.Generic.Stack`1<System.Collections.Generic.SortedSet`1/Node<System.Collections.Generic.KeyValuePair`2<System.Single,System.Int32>>>
struct Stack_1_t324D4C068DE437F858B7B501FF8C66BEA231B5A4;
// System.Collections.Generic.TreeSet`1<System.Collections.Generic.KeyValuePair`2<System.Single,System.Int32>>
struct TreeSet_1_t79C8F97B4FC55A57C36F14FDCD4D22EE4E7209AD;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.Int32,UnityEngine.Mesh>
struct ValueCollection_t6086EE2C4A07E9AA54F49A70CC85B0B8E792AA72;
// System.Collections.Generic.SortedDictionary`2/ValueCollection<System.Single,System.Int32>
struct ValueCollection_t2734E6CD442641AC0D84DD8E48465518C4CB2DAF;
// System.Collections.Generic.Dictionary`2/Entry<System.Int32,UnityEngine.Mesh>[]
struct EntryU5BU5D_tFFB876B4F6AFA934289DA36D04C33DCCBF2607AF;
// System.Collections.Generic.List`1<tripolygon.UModeler.SimplePolygon>[]
struct List_1U5BU5D_tA26F03D600203AEE7348CFBF89274A23C4FCE53E;
// System.Byte[]
struct ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031;
// System.Char[]
struct CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB;
// UnityEngine.Color[]
struct ColorU5BU5D_t612261CF293F6FFC3D80AB52259FF0DC2B2CC389;
// UnityEngine.Color32[]
struct Color32U5BU5D_t38116C3E91765C4C5726CE12C77FAD7F9F737259;
// System.Delegate[]
struct DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771;
// tripolygon.UModeler.Edge[]
struct EdgeU5BU5D_t607E23044110B4F9C78A29CEBA1F602C0C6E6E38;
// tripolygon.UModeler.IndexPair[]
struct IndexPairU5BU5D_t7DADFE14ED812552F52BBA4FBC53CBFA963AAC3F;
// System.Int32[]
struct Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C;
// System.IntPtr[]
struct IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832;
// UnityEngine.Material[]
struct MaterialU5BU5D_t2B1D11C42DB07A4400C0535F92DBB87A2E346D3D;
// System.Object[]
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918;
// tripolygon.UModeler.SimplePolygon[]
struct SimplePolygonU5BU5D_tE6F5FF9D9ED61A79C6D03DCF9D8BE8E19E7235D5;
// System.Single[]
struct SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C;
// System.Diagnostics.StackTrace[]
struct StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF;
// System.UInt64[]
struct UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299;
// UnityEngine.Vector2[]
struct Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA;
// UnityEngine.Vector3[]
struct Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C;
// tripolygon.UModeler.Vertex[]
struct VertexU5BU5D_t07F49DEEE6D7E655044105AE9D7D8DFE2D7B050F;
// tripolygon.UModeler.StopModelerBuild/BuildShelfArg[]
struct BuildShelfArgU5BU5D_tEE107092A29354035B9937C7BE767E56C332AEEC;
// tripolygon.UModeler.Util/ClippingVertex[]
struct ClippingVertexU5BU5D_t22795A518FF4C4AFBC78D6B6FD57A7EA88AC83F5;
// tripolygon.UModeler.AABB
struct AABB_t9C7B4FCF1ED10D750373270786690AAF7801AC6B;
// tripolygon.UModeler.ActiveModelerHolder
struct ActiveModelerHolder_t1B23CBE2E0ECE532A1899BC6BBE8C3F8EE3F1AE7;
// tripolygon.UModeler.ArcShape
struct ArcShape_tD79A3A8B50D88CAABD9AB2CDBE67A6D525242779;
// System.AsyncCallback
struct AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C;
// tripolygon.UModeler.BSPTree2D
struct BSPTree2D_t9E8EF14D272A60027A636E897210797581B95327;
// tripolygon.UModeler.BSPTree2DNode
struct BSPTree2DNode_t8947098D311A5BE8BE4767DFEFACE93CB7E96BCF;
// tripolygon.UModeler.BSPTree3D
struct BSPTree3D_t3E93976DC8E1221862C966998463F86EF51E77C1;
// tripolygon.UModeler.CachedMesh
struct CachedMesh_t453A9D0951B407F6D189C4D10211DAB3444FCF02;
// UnityEngine.Camera
struct Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184;
// UnityEngine.Component
struct Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3;
// System.Delegate
struct Delegate_t;
// System.DelegateData
struct DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E;
// tripolygon.UModeler.DrawDelegate
struct DrawDelegate_t75FC8E4340EB4F9F6EF0F6726F3DD4E64C8CED7F;
// tripolygon.UModeler.Edge
struct Edge_t61E163F7AA3BA416F72B1EDF0DD966F41041D4FF;
// tripolygon.UModeler.EdgeSharpnessManager
struct EdgeSharpnessManager_t80D1F7481F6908340716F39CDFF1B01F0A9BADDB;
// tripolygon.UModeler.EditableMesh
struct EditableMesh_tF419912423C538859FC4EDB1F6ABD7314E01A476;
// tripolygon.UModeler.EditableMeshCache
struct EditableMeshCache_t670115114CAE4890073BECDA625009C01B883B27;
// tripolygon.UModeler.EngineResourceManager
struct EngineResourceManager_tB814C237AED9E9140B8D664B9F5D3BE18965A951;
// tripolygon.UModeler.GLUtil
struct GLUtil_t30C5E6F23BE3C996BD3B4AE090E5928D44D31A91;
// UnityEngine.GameObject
struct GameObject_t76FEDD663AB33C991A9C9A23129337651094216F;
// tripolygon.UModeler.HitResult
struct HitResult_t1C6A2CA0F36DF67C6BF66A35ECC5D1F9BA600AEA;
// tripolygon.UModeler.Hotspot
struct Hotspot_tEB2930836E4965CBF2CB96A6996B6F302DF108B7;
// tripolygon.UModeler.HotspotLayout
struct HotspotLayout_t3E858B06631E101D2D83F70E7231E17CB5F3E63A;
// System.IAsyncResult
struct IAsyncResult_t7B9B5A0ECB35DCEC31B8A8122C37D687369253B5;
// System.Collections.IDictionary
struct IDictionary_t6D03155AF1FA9083817AA5B6AD7DEEACC26AB220;
// tripolygon.UModeler.IModelerEngine
struct IModelerEngine_tA4FF8143DA93FCF03B5ABEDFF3409090D3BD4E81;
// System.IndexOutOfRangeException
struct IndexOutOfRangeException_t7ECB35264FB6CA8FAA516BD958F4B2ADC78E8A82;
// tripolygon.UModeler.IndexPair
struct IndexPair_t6886ED92041E20F053A60B5DE14E4710BB42A376;
// tripolygon.UModeler.InspectorValueChanged
struct InspectorValueChanged_tE5BCC32DFB0EA6FB5E89ECC103172F2227F18F25;
// tripolygon.UModeler.Line2D
struct Line2D_tAC46D1228FCBF2872CC1DF7DA8C02274FDE4A750;
// UnityEngine.Material
struct Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3;
// tripolygon.UModeler.MathUtil
struct MathUtil_t8B5351E9F78AC26C512287FC18EEF6C156568229;
// tripolygon.UModeler.Matrix4x4Ex
struct Matrix4x4Ex_t3EFC7AD9C36AB8195F5B6B29A27B518F63F24553;
// UnityEngine.Mesh
struct Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4;
// UnityEngine.MeshCollider
struct MeshCollider_tB525E4DDE383252364ED0BDD32CF2B53914EE455;
// UnityEngine.MeshFilter
struct MeshFilter_t6D1CE2473A1E45AC73013400585A1163BF66B2F5;
// UnityEngine.MeshRenderer
struct MeshRenderer_t4B7747212F0B88244BB7790C61AE124BFC15BAAE;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// tripolygon.UModeler.MirrorMode
struct MirrorMode_t0D417488BFAB834D1F9FCDE7494F98BA0DF82BC7;
// UnityEngine.MonoBehaviour
struct MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71;
// UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C;
// tripolygon.UModeler.PlaneEx
struct PlaneEx_t5512A7D4BF235ED6ED6F1F09A1621A1DCB31509D;
// tripolygon.UModeler.PolygonGroupManager
struct PolygonGroupManager_t1BB3FBAEF6E82B6D95F484A2DB56C18DA588BC92;
// UnityEngine.Renderer
struct Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF;
// System.Runtime.Serialization.SafeSerializationManager
struct SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6;
// tripolygon.UModeler.Segment
struct Segment_tC9A02427362D651880C6027436A738A68B4ACB3F;
// tripolygon.UModeler.SegmentPolygons
struct SegmentPolygons_tBF714BD1D4BBA1D3D8A6A6774BB1A61D6334E5D3;
// tripolygon.UModeler.SelectExtended
struct SelectExtended_tA9AA94ECFF1523DC7FE8E001FF9593BD32AC030E;
// UnityEngine.Shader
struct Shader_tADC867D36B7876EE22427FAA2CE485105F4EE692;
// tripolygon.UModeler.ShelfHolder
struct ShelfHolder_tFDAAF16135FA93DB3AD68D57913C99082A757058;
// tripolygon.UModeler.SimplePolygon
struct SimplePolygon_t5F51D3D1F485B3C377E0E40766EBFD86BA9D9385;
// tripolygon.UModeler.SmallestVertexX
struct SmallestVertexX_tBCBE7D65267ED083AF73282807C1D9ED3EF7C495;
// tripolygon.UModeler.SmoothingGroupManager
struct SmoothingGroupManager_t1D2F4A2DF787BB531A1358F88CFC80C4B3E0C037;
// tripolygon.UModeler.StopModelerBuild
struct StopModelerBuild_t0BB93EB56149A7D7B04B0961A77C2010CEF8DB84;
// System.String
struct String_t;
// UnityEngine.Texture2D
struct Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4;
// UnityEngine.Transform
struct Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1;
// tripolygon.UModeler.UMContext
struct UMContext_tD5DABA4A108180D95D3BDB86E9A4669F51289AFB;
// tripolygon.UModeler.UModeler
struct UModeler_tF29E9161DE3331F85E86886244AC15FEC514C577;
// tripolygon.UModeler.UVIslandManager
struct UVIslandManager_tFDD6F91ECB27D6846C79AD6B3B87F4C06BB002E6;
// tripolygon.UModeler.UVParameter
struct UVParameter_t3DB903DED34BB8F9E4C5E5345C316D0E793081B3;
// tripolygon.UModeler.UVUtil
struct UVUtil_t52D342AE33D61171F82A4AD64BD1AEA48567C302;
// tripolygon.UModeler.Util
struct Util_tBEDFF10A323370DC03D5CAB4FEF2AB8EFEB0D7D2;
// tripolygon.UModeler.Vertex
struct Vertex_tB6D4D191E463D1653AA47DED15E41F21BA5A21FC;
// System.Void
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915;
// UnityEngine.Camera/CameraCallback
struct CameraCallback_t844E527BFE37BC0495E7F67993E43C07642DA9DD;
// tripolygon.UModeler.HotspotLayout/<>c
struct U3CU3Ec_t5EEE260C4A12263EE0C77B5F2414795F3DBA94ED;
// tripolygon.UModeler.HotspotLayout/<>c__DisplayClass5_0
struct U3CU3Ec__DisplayClass5_0_tFAF9EE157798AFB91BB83DBE0A6B4768F30EB75D;
// tripolygon.UModeler.HotspotLayout/<>c__DisplayClass6_0
struct U3CU3Ec__DisplayClass6_0_t26043494B2AEA270630D4CEECF00F4C6AF39353D;
// tripolygon.UModeler.MathUtil/<>c
struct U3CU3Ec_t0AE2255F25D8D7ACA16A285DCF06E69F0D3951D6;
// tripolygon.UModeler.MathUtil/Vector2_3InputFloatReturnDelegate
struct Vector2_3InputFloatReturnDelegate_tDF554F3258BCA6D8F1BEC540B850729000D15F46;
// tripolygon.UModeler.UModeler/ModelerDelegate
struct ModelerDelegate_t3E84323788B9A588C192E5D33F6809AAB16B2707;

IL2CPP_EXTERN_C RuntimeClass* ActiveModelerHolder_t1B23CBE2E0ECE532A1899BC6BBE8C3F8EE3F1AE7_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ArcShape_tD79A3A8B50D88CAABD9AB2CDBE67A6D525242779_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Color32U5BU5D_t38116C3E91765C4C5726CE12C77FAD7F9F737259_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Dictionary_2_t6D39865003E656D60A88B22671895E4EA1590710_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* EClippingVertexTypeU5BU5D_tC73D7A9A6652F04884D6DCE03FE775D313E17D6D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Edge_t61E163F7AA3BA416F72B1EDF0DD966F41041D4FF_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* EditableMeshU5BU5D_t404D4B72A1C23719E39B03C9ECACE067F1A04511_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* EditableMesh_tF419912423C538859FC4EDB1F6ABD7314E01A476_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* EngineResourceManager_tB814C237AED9E9140B8D664B9F5D3BE18965A951_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* GLUtil_t30C5E6F23BE3C996BD3B4AE090E5928D44D31A91_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Graphics_t99CD970FFEA58171C70F54DF0C06D315BD452F2C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IModelerEngine_tA4FF8143DA93FCF03B5ABEDFF3409090D3BD4E81_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IndexOutOfRangeException_t7ECB35264FB6CA8FAA516BD958F4B2ADC78E8A82_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IndexPair_t6886ED92041E20F053A60B5DE14E4710BB42A376_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Line2D_tAC46D1228FCBF2872CC1DF7DA8C02274FDE4A750_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1U5BU5D_tA26F03D600203AEE7348CFBF89274A23C4FCE53E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1U5BU5D_tD580B54AE4CC7B8D11722E8FF7B59A303E0C6B2C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1U5BU5D_tDE88DA8DCD79A37A10DCC96911E1242D15FF66FE_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_t0D1C46FD8DDDE974D93CA4F3474EEC05AF950918_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_t2FB40158AFCD69E77037C532086C70828AC06862_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_t302A75244C10A0CEF3AC031C484C2772A9D30A6F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_t386E09F4F22DDE4D2AC41A8567FFF283C254537B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_t77E791A5D872DCB1195678FCECC444A825292814_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_t8F3790B7F8C471B3A1336522C7415FB0AC36D47B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_tB88E7361EE76DFB3EBB7FCD60CC59ACC3E48C284_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_tBD3EFF6C36C49D37E37AA532C06442E0AEC0544D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_tD13CD97762EDE4928859DDC2999E6E2175B20A11_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* MaterialU5BU5D_t2B1D11C42DB07A4400C0535F92DBB87A2E346D3D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* PlaneEx_t5512A7D4BF235ED6ED6F1F09A1621A1DCB31509D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ShelfHolder_tFDAAF16135FA93DB3AD68D57913C99082A757058_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SimplePolygon_t5F51D3D1F485B3C377E0E40766EBFD86BA9D9385_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SortedDictionary_2_t4C2768740A7E0300B8278590463E71E6C439B5F2_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* StopModelerBuild_t0BB93EB56149A7D7B04B0961A77C2010CEF8DB84_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* String_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec_t0AE2255F25D8D7ACA16A285DCF06E69F0D3951D6_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec_t5EEE260C4A12263EE0C77B5F2414795F3DBA94ED_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* UMContext_tD5DABA4A108180D95D3BDB86E9A4669F51289AFB_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* UModeler_tF29E9161DE3331F85E86886244AC15FEC514C577_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* UVParameter_t3DB903DED34BB8F9E4C5E5345C316D0E793081B3_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* UVUtil_t52D342AE33D61171F82A4AD64BD1AEA48567C302_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Util_tBEDFF10A323370DC03D5CAB4FEF2AB8EFEB0D7D2_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Vector2_3InputFloatReturnDelegate_tDF554F3258BCA6D8F1BEC540B850729000D15F46_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Vertex_tB6D4D191E463D1653AA47DED15E41F21BA5A21FC_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral181BB4565C7AA61CC8716A421960A53BA01AEE22;
IL2CPP_EXTERN_C String_t* _stringLiteral2386E77CF610F786B06A91AF2C1B3FD2282D2745;
IL2CPP_EXTERN_C String_t* _stringLiteral27C7727EAAAD675C621F6257F2BD5190CE343979;
IL2CPP_EXTERN_C String_t* _stringLiteral3100DDE01867AE42A5451E50906F4258BD9DB4F5;
IL2CPP_EXTERN_C String_t* _stringLiteral3708CDBCC9F390AB99D52FE7DEE4724401B69B9F;
IL2CPP_EXTERN_C String_t* _stringLiteral3717295B45F9AF68EC42C83663337C3AD423E46D;
IL2CPP_EXTERN_C String_t* _stringLiteral3C73394BEFC13A1F539275C77FA59F83301065F5;
IL2CPP_EXTERN_C String_t* _stringLiteral4379B0249B80A34ABC2748B5F0D030FD7D4E007C;
IL2CPP_EXTERN_C String_t* _stringLiteral4A54A044C78A0B525750842E7D16A36E35B4D9E3;
IL2CPP_EXTERN_C String_t* _stringLiteral4E8A8460777BA546EF33027F63BAAF6396716FBE;
IL2CPP_EXTERN_C String_t* _stringLiteral66E0F15563627FEE06E4648DB48E8D9B3EEDCC91;
IL2CPP_EXTERN_C String_t* _stringLiteral73B13DE9817379145386BC6ECC87E983FC8ED41A;
IL2CPP_EXTERN_C String_t* _stringLiteral91D8238D4B7DF9CBA8C761B0EB69EEE7E1F496C8;
IL2CPP_EXTERN_C String_t* _stringLiteralB23993EFD3E41919DE94C67F5C88AE1DEAB4D590;
IL2CPP_EXTERN_C String_t* _stringLiteralB25CF1C6B74339FBFCE846454A70688CE58C094C;
IL2CPP_EXTERN_C String_t* _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709;
IL2CPP_EXTERN_C String_t* _stringLiteralDA7E8B88100AA34B19982A11B0554BAF879AFF81;
IL2CPP_EXTERN_C String_t* _stringLiteralDDEEF5C98FF6DACE0E26854D3312EE942E548D70;
IL2CPP_EXTERN_C String_t* _stringLiteralEEE880C2909E04B23E44F1F5085CDAC706BD0A94;
IL2CPP_EXTERN_C String_t* _stringLiteralFC490934C5E6868672675E881D19C7AC8BAF0703;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisMeshCollider_tB525E4DDE383252364ED0BDD32CF2B53914EE455_mFC0F02CCD26A6A186031CF43E92D7B60EA1CC370_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisRenderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF_mC91ACC92AD57CA6CA00991DAF1DB3830BCE07AF8_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_Add_m95F3B444BCCD32EF7B74E1D23DDFDE5AC25B3CEF_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_Clear_m128E800DB0E185C5BB4ED5914C473C0C1E10F4FF_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_ContainsKey_m21D5DD2F766D7E5C5B4E2C6EF256A761A884C1BF_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_ContainsValue_mD78B49B88B29AD52435FBAC9B83D720AD9A79E56_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_Remove_mD4F721D02F35A2CCC78B8D5FD2962FF622CEA54F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2__ctor_mB2AF39366CCF9A9E898D6D5400BEDF4F6E1BB646_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_get_Item_m5E7AC64571E0BC7C192F651C85E5014C2ED73611_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_set_Item_m55CEAE784C2CAC35A087DA900D0ABD474AAC6243_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_Dispose_m38A9F15FDBDCDFB9590C961110777EE028621923_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_Dispose_mE7B3A8C68D42EBA87037FE92CF1572658798EE8D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_MoveNext_m39C71A39758E2B4A04F44F20FCEFAF7009D5F312_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_MoveNext_mB97D38C9C1685FC126DFDF90CEC4756431EEED73_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_MoveNext_mFC98FC5250B2A826D366A6F67C6FB95809892167_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_get_Current_mB49912FF111A954F2C326BF4FA29A53C1027187B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_get_Current_mB94096C5ED127D93564C02549007FEA63482CE38_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_get_Current_mE14BCB04881066336130EC2A6DD93CE1405342A3_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_AddComponent_TisMeshFilter_t6D1CE2473A1E45AC73013400585A1163BF66B2F5_mEAB8177A64DF1A50BB7996ACEEEADCD65358AC94_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_AddComponent_TisMeshRenderer_t4B7747212F0B88244BB7790C61AE124BFC15BAAE_mCDD3E77673305199F52C772AE8C7952F3864740D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponent_TisMeshFilter_t6D1CE2473A1E45AC73013400585A1163BF66B2F5_mDF6525BCE37B444313BE0AA2305BDF4EB8B92FE8_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponent_TisMeshRenderer_t4B7747212F0B88244BB7790C61AE124BFC15BAAE_m7FF948365C38BC39333D82B235A7C4EAD219960D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* KeyValuePair_2_get_Key_mA978A749A9D3816BACF46036CAA0B69DC5DBE53F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* KeyValuePair_2_get_Value_m6FA5BE7064800329CEC3EBCA8A7CB46C6FA7930A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* KeyValuePair_2_get_Value_mAB1FC5832CB06EEF53C3A3E9C2A67258EAC6048E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_AddRange_mACF0CBFB5107412F825BB12F5FC93699031073AA_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Add_m0248A96C5334E9A93E6994B7780478BCD994EA3D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Add_m0C32AFF3B7A78D3835F96AE54D8283A8BE23F63B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Add_m0DF26D386384974DAC8B0D1C07AC0EF19FF930A1_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Add_m274AF4878E2EFA91B7127EE757F5C83A1A499438_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Add_m2F86E252D086E288E02FA1C830B7E86C0A431E51_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Add_mB5FDF069171C4CB1778BFAC3B9015A22EA7DFBCD_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Add_mBEA06988AE0C126241C9FFA08A9F2612A7A542A4_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Add_mFB89FD2BEC65E65F1A68C47CBA4E02B6E8449495_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Clear_mB542E879C436E98D901D3068C891582A25F85711_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Contains_m041392123604C80BB0821138BB776371E95EB79B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Contains_m4FD96E89F15844C90032C7386BAB528817F1FF5B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_GetEnumerator_m9744D5CAF082A1770E6BE24FB6EAF9C203C8708F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_GetEnumerator_mCADB185AB483C855873FCD0B1D5AAC909ED7F7BD_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Insert_m1DA8358A97752239559B7B85806979EE764DB22C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Reverse_m9D5D6524E78A4D1590BACA474B193AC2E0DA93EF_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_ToArray_m2D61F9E785B53324A0EC7DCA2B58DD6F959A89F6_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_m0CFEC6DF8A1CFB6838EBE5970ADD5DDA4469FAB0_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_m17F501B5A5C289ECE1B4F3D6EBF05DFA421433F8_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_m27907A101D0DAF1C842184C25FF2FCF5F7116E9D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_m29BEDE660794161B463CE980419121848921671C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_m38500C20418699AEC04B1946434E06EC96FB4B1C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_m55E32E673C1206F631655902E4BA7FB92ED22DC8_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_m88C4BD8AC607DB3585552068F4DC437406358D5F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_mC29D3D824786832A31096310B3B3016B8B42B802_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_mD0461A0F9F5D1C4A9C578D17033D69A8AC82FF3F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_mDB0C054143B34FBA213A5507B676252235210932_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Count_m352EA89E4CDFF4A895FECAF36592AA5A290CBB5E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Count_m39BE269C49EF164BBA706DF15603809754CCD1F9_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Count_m46EEFFA770BE665EA0CB3A5332E941DA4B3C1D37_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Count_m48BBB83C5F748E6E6FF0731C3682092DEA6A7173_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Count_m7935E7124EA3BEA7676657329170EE232B69B967_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Count_m8E2B23B32C1F3E24BA82A3784717FA771E38B208_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Count_mA79590207FB644521F7A974F233A21E17FB60578_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Count_mF1C0C56457C655BDFFC6EE5B46FAD8BAEC1F588B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Item_m1F8E226CAD72B83C5E75BB66B43025247806B543_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Item_m366D9A7BF7C504940BEF501AB07B83FD7A22BC7F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Item_m435D761DB4AF80679A1C0AD9F789379A779DBFD1_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Item_m6DF1DC5CD1B48E953F95D42B4899B75CC59BA29F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Item_m70F5CFC2DEA9332B78C5ADC0EE1CE1B7465B1456_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Item_m858C445AE858FEBCE8E4BB1F655914EC1E5DFD1F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Item_m8F2E15FC96DA75186C51228128A0660709E4E810_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Item_mE2354D72C00BBCA64441D77732E04E9E56069425_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* SortedDictionary_2_Add_mF9B1C9C48B997CF0B490926FC6C5338959D1960C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* SortedDictionary_2_ContainsKey_mD4CCA93B685E372DFBD7A21DAB034A4FC2C2C8EE_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* SortedDictionary_2_GetEnumerator_m52D1F7C3A27183B19E70A3A6563A996FF34CAEA6_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* SortedDictionary_2__ctor_m518A3BFE4904E6F4411A44950B724F3089818BAD_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec_U3CPointInTriangleU3Eb__12_0_mF4B51D9BB63A8D99E32D00D6587D9D8B22F623DF_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Vector2_get_Item_m18BC65BB0512B16A1F9C8BE4B83A3E7BBAD7064D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Vector2_set_Item_mEF309880B9B3B370B542AABEB32256EEC589DD03_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Vector3_get_Item_m163510BFC2F7BFAD1B601DC9F3606B799CF199F2_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Vector3_set_Item_m79136861DEC5862CE7EC20AB3B0EF10A3957CEC3_RuntimeMethod_var;
struct Delegate_t_marshaled_com;
struct Delegate_t_marshaled_pinvoke;
struct Exception_t_marshaled_com;
struct Exception_t_marshaled_pinvoke;

struct List_1U5BU5D_tA26F03D600203AEE7348CFBF89274A23C4FCE53E;
struct List_1U5BU5D_tDE88DA8DCD79A37A10DCC96911E1242D15FF66FE;
struct List_1U5BU5D_tD580B54AE4CC7B8D11722E8FF7B59A303E0C6B2C;
struct ColorU5BU5D_t612261CF293F6FFC3D80AB52259FF0DC2B2CC389;
struct Color32U5BU5D_t38116C3E91765C4C5726CE12C77FAD7F9F737259;
struct DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771;
struct EditableMeshU5BU5D_t404D4B72A1C23719E39B03C9ECACE067F1A04511;
struct Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C;
struct MaterialU5BU5D_t2B1D11C42DB07A4400C0535F92DBB87A2E346D3D;
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918;
struct SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C;
struct Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA;
struct Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C;
struct BuildShelfArgU5BU5D_tEE107092A29354035B9937C7BE767E56C332AEEC;
struct ClippingVertexU5BU5D_t22795A518FF4C4AFBC78D6B6FD57A7EA88AC83F5;
struct EClippingVertexTypeU5BU5D_tC73D7A9A6652F04884D6DCE03FE775D313E17D6D;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.Dictionary`2<System.Int32,UnityEngine.Mesh>
struct Dictionary_2_t6D39865003E656D60A88B22671895E4EA1590710  : public RuntimeObject
{
	// System.Int32[] System.Collections.Generic.Dictionary`2::_buckets
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ____buckets_0;
	// System.Collections.Generic.Dictionary`2/Entry<TKey,TValue>[] System.Collections.Generic.Dictionary`2::_entries
	EntryU5BU5D_tFFB876B4F6AFA934289DA36D04C33DCCBF2607AF* ____entries_1;
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
	KeyCollection_t18C507C428A898759B7A40DC14B44106CC557352* ____keys_7;
	// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::_values
	ValueCollection_t6086EE2C4A07E9AA54F49A70CC85B0B8E792AA72* ____values_8;
	// System.Object System.Collections.Generic.Dictionary`2::_syncRoot
	RuntimeObject* ____syncRoot_9;
};

// System.Collections.Generic.List`1<tripolygon.UModeler.Edge>
struct List_1_t9A7220215C9ED1BE212A9632A14022A68B3BFC12  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	EdgeU5BU5D_t607E23044110B4F9C78A29CEBA1F602C0C6E6E38* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

struct List_1_t9A7220215C9ED1BE212A9632A14022A68B3BFC12_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	EdgeU5BU5D_t607E23044110B4F9C78A29CEBA1F602C0C6E6E38* ___s_emptyArray_5;
};

// System.Collections.Generic.List`1<tripolygon.UModeler.IndexPair>
struct List_1_t77E791A5D872DCB1195678FCECC444A825292814  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	IndexPairU5BU5D_t7DADFE14ED812552F52BBA4FBC53CBFA963AAC3F* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

struct List_1_t77E791A5D872DCB1195678FCECC444A825292814_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	IndexPairU5BU5D_t7DADFE14ED812552F52BBA4FBC53CBFA963AAC3F* ___s_emptyArray_5;
};

// System.Collections.Generic.List`1<System.Int32>
struct List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

struct List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___s_emptyArray_5;
};

// System.Collections.Generic.List`1<UnityEngine.Material>
struct List_1_t386E09F4F22DDE4D2AC41A8567FFF283C254537B  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	MaterialU5BU5D_t2B1D11C42DB07A4400C0535F92DBB87A2E346D3D* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

struct List_1_t386E09F4F22DDE4D2AC41A8567FFF283C254537B_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	MaterialU5BU5D_t2B1D11C42DB07A4400C0535F92DBB87A2E346D3D* ___s_emptyArray_5;
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

// System.Collections.Generic.List`1<tripolygon.UModeler.SimplePolygon>
struct List_1_tBD3EFF6C36C49D37E37AA532C06442E0AEC0544D  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	SimplePolygonU5BU5D_tE6F5FF9D9ED61A79C6D03DCF9D8BE8E19E7235D5* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

struct List_1_tBD3EFF6C36C49D37E37AA532C06442E0AEC0544D_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	SimplePolygonU5BU5D_tE6F5FF9D9ED61A79C6D03DCF9D8BE8E19E7235D5* ___s_emptyArray_5;
};

// System.Collections.Generic.List`1<System.Single>
struct List_1_t0D1C46FD8DDDE974D93CA4F3474EEC05AF950918  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

struct List_1_t0D1C46FD8DDDE974D93CA4F3474EEC05AF950918_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* ___s_emptyArray_5;
};

// System.Collections.Generic.List`1<System.UInt64>
struct List_1_tB88E7361EE76DFB3EBB7FCD60CC59ACC3E48C284  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

struct List_1_tB88E7361EE76DFB3EBB7FCD60CC59ACC3E48C284_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* ___s_emptyArray_5;
};

// System.Collections.Generic.List`1<UnityEngine.Vector2>
struct List_1_t8F3790B7F8C471B3A1336522C7415FB0AC36D47B  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

struct List_1_t8F3790B7F8C471B3A1336522C7415FB0AC36D47B_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* ___s_emptyArray_5;
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

// System.Collections.Generic.List`1<tripolygon.UModeler.Vertex>
struct List_1_t302A75244C10A0CEF3AC031C484C2772A9D30A6F  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	VertexU5BU5D_t07F49DEEE6D7E655044105AE9D7D8DFE2D7B050F* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

struct List_1_t302A75244C10A0CEF3AC031C484C2772A9D30A6F_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	VertexU5BU5D_t07F49DEEE6D7E655044105AE9D7D8DFE2D7B050F* ___s_emptyArray_5;
};

// System.Collections.Generic.List`1<tripolygon.UModeler.StopModelerBuild/BuildShelfArg>
struct List_1_t2FB40158AFCD69E77037C532086C70828AC06862  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	BuildShelfArgU5BU5D_tEE107092A29354035B9937C7BE767E56C332AEEC* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

struct List_1_t2FB40158AFCD69E77037C532086C70828AC06862_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	BuildShelfArgU5BU5D_tEE107092A29354035B9937C7BE767E56C332AEEC* ___s_emptyArray_5;
};

// System.Collections.Generic.List`1<tripolygon.UModeler.Util/ClippingVertex>
struct List_1_tD13CD97762EDE4928859DDC2999E6E2175B20A11  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	ClippingVertexU5BU5D_t22795A518FF4C4AFBC78D6B6FD57A7EA88AC83F5* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

struct List_1_tD13CD97762EDE4928859DDC2999E6E2175B20A11_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	ClippingVertexU5BU5D_t22795A518FF4C4AFBC78D6B6FD57A7EA88AC83F5* ___s_emptyArray_5;
};

// System.Collections.Generic.SortedDictionary`2<System.Single,System.Int32>
struct SortedDictionary_2_t4C2768740A7E0300B8278590463E71E6C439B5F2  : public RuntimeObject
{
	// System.Collections.Generic.SortedDictionary`2/KeyCollection<TKey,TValue> System.Collections.Generic.SortedDictionary`2::_keys
	KeyCollection_t90F8E955C3513D8D119B4FDFC3692C26049518E3* ____keys_0;
	// System.Collections.Generic.SortedDictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.SortedDictionary`2::_values
	ValueCollection_t2734E6CD442641AC0D84DD8E48465518C4CB2DAF* ____values_1;
	// System.Collections.Generic.TreeSet`1<System.Collections.Generic.KeyValuePair`2<TKey,TValue>> System.Collections.Generic.SortedDictionary`2::_set
	TreeSet_1_t79C8F97B4FC55A57C36F14FDCD4D22EE4E7209AD* ____set_2;
};

// tripolygon.UModeler.ActiveModelerHolder
struct ActiveModelerHolder_t1B23CBE2E0ECE532A1899BC6BBE8C3F8EE3F1AE7  : public RuntimeObject
{
	// tripolygon.UModeler.UModeler tripolygon.UModeler.ActiveModelerHolder::originalModeler_
	UModeler_tF29E9161DE3331F85E86886244AC15FEC514C577* ___originalModeler__0;
};
struct Il2CppArrayBounds;

// tripolygon.UModeler.BSPTree2D
struct BSPTree2D_t9E8EF14D272A60027A636E897210797581B95327  : public RuntimeObject
{
	// tripolygon.UModeler.BSPTree2DNode tripolygon.UModeler.BSPTree2D::root_
	BSPTree2DNode_t8947098D311A5BE8BE4767DFEFACE93CB7E96BCF* ___root__0;
	// tripolygon.UModeler.PlaneEx tripolygon.UModeler.BSPTree2D::plane_
	PlaneEx_t5512A7D4BF235ED6ED6F1F09A1621A1DCB31509D* ___plane__1;
};

// tripolygon.UModeler.EditableMesh
struct EditableMesh_tF419912423C538859FC4EDB1F6ABD7314E01A476  : public RuntimeObject
{
	// System.Int32 tripolygon.UModeler.EditableMesh::editMeshVersion
	int32_t ___editMeshVersion_0;
	// System.Collections.Generic.List`1<tripolygon.UModeler.SimplePolygon> tripolygon.UModeler.EditableMesh::mainPolygons_
	List_1_tBD3EFF6C36C49D37E37AA532C06442E0AEC0544D* ___mainPolygons__4;
	// System.Byte[] tripolygon.UModeler.EditableMesh::mainPolygonsStream
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___mainPolygonsStream_5;
	// System.Collections.Generic.List`1<tripolygon.UModeler.SimplePolygon> tripolygon.UModeler.EditableMesh::mainPolygonsStreamList_
	List_1_tBD3EFF6C36C49D37E37AA532C06442E0AEC0544D* ___mainPolygonsStreamList__6;
	// System.Collections.Generic.List`1<tripolygon.UModeler.SimplePolygon> tripolygon.UModeler.EditableMesh::subPolygons_
	List_1_tBD3EFF6C36C49D37E37AA532C06442E0AEC0544D* ___subPolygons__7;
	// tripolygon.UModeler.SmoothingGroupManager tripolygon.UModeler.EditableMesh::smoothingGroups_
	SmoothingGroupManager_t1D2F4A2DF787BB531A1358F88CFC80C4B3E0C037* ___smoothingGroups__8;
	// tripolygon.UModeler.EdgeSharpnessManager tripolygon.UModeler.EditableMesh::edgeSharpnesses_
	EdgeSharpnessManager_t80D1F7481F6908340716F39CDFF1B01F0A9BADDB* ___edgeSharpnesses__9;
	// tripolygon.UModeler.MirrorMode tripolygon.UModeler.EditableMesh::mirrorMode_
	MirrorMode_t0D417488BFAB834D1F9FCDE7494F98BA0DF82BC7* ___mirrorMode__10;
	// tripolygon.UModeler.UVIslandManager tripolygon.UModeler.EditableMesh::uvIslandManager_
	UVIslandManager_tFDD6F91ECB27D6846C79AD6B3B87F4C06BB002E6* ___uvIslandManager__11;
	// tripolygon.UModeler.PolygonGroupManager tripolygon.UModeler.EditableMesh::polygonGroupManager_
	PolygonGroupManager_t1BB3FBAEF6E82B6D95F484A2DB56C18DA588BC92* ___polygonGroupManager__12;
	// tripolygon.UModeler.EditableMeshCache tripolygon.UModeler.EditableMesh::editableMeshCache_
	EditableMeshCache_t670115114CAE4890073BECDA625009C01B883B27* ___editableMeshCache__13;
	// System.UInt64 tripolygon.UModeler.EditableMesh::activePolygonGroupId
	uint64_t ___activePolygonGroupId_14;
	// System.Boolean tripolygon.UModeler.EditableMesh::IsBuilt
	bool ___IsBuilt_15;
	// System.Collections.Generic.List`1<tripolygon.UModeler.SimplePolygon>[] tripolygon.UModeler.EditableMesh::polygons_
	List_1U5BU5D_tA26F03D600203AEE7348CFBF89274A23C4FCE53E* ___polygons__16;
	// tripolygon.UModeler.AABB tripolygon.UModeler.EditableMesh::aabb_
	AABB_t9C7B4FCF1ED10D750373270786690AAF7801AC6B* ___aabb__17;
	// tripolygon.UModeler.BSPTree3D tripolygon.UModeler.EditableMesh::bsptree3d_
	BSPTree3D_t3E93976DC8E1221862C966998463F86EF51E77C1* ___bsptree3d__18;
	// System.Collections.Generic.Dictionary`2<tripolygon.UModeler.SimplePolygon,System.Collections.Generic.List`1<tripolygon.UModeler.SimplePolygon>> tripolygon.UModeler.EditableMesh::adjacentPolygons_
	Dictionary_2_t59016DC6236C94667B57479BF0E39817771EF9DC* ___adjacentPolygons__19;
	// System.Int32 tripolygon.UModeler.EditableMesh::shelf_
	int32_t ___shelf__20;
};

struct EditableMesh_tF419912423C538859FC4EDB1F6ABD7314E01A476_StaticFields
{
	// System.Int32 tripolygon.UModeler.EditableMesh::DefaultMeshVersion
	int32_t ___DefaultMeshVersion_3;
};

// tripolygon.UModeler.EngineResourceManager
struct EngineResourceManager_tB814C237AED9E9140B8D664B9F5D3BE18965A951  : public RuntimeObject
{
	// UnityEngine.Mesh tripolygon.UModeler.EngineResourceManager::renderableMesh
	Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* ___renderableMesh_1;
	// System.Collections.Generic.List`1<UnityEngine.Material> tripolygon.UModeler.EngineResourceManager::renderableMaterials
	List_1_t386E09F4F22DDE4D2AC41A8567FFF283C254537B* ___renderableMaterials_2;
};

struct EngineResourceManager_tB814C237AED9E9140B8D664B9F5D3BE18965A951_StaticFields
{
	// System.Collections.Generic.List`1<tripolygon.UModeler.VertexSelection> tripolygon.UModeler.EngineResourceManager::vertexSelectionObjects_
	List_1_tD1AF371C43DF0B37278148C46393C71C101E7BCF* ___vertexSelectionObjects__0;
};

// tripolygon.UModeler.GLUtil
struct GLUtil_t30C5E6F23BE3C996BD3B4AE090E5928D44D31A91  : public RuntimeObject
{
};

struct GLUtil_t30C5E6F23BE3C996BD3B4AE090E5928D44D31A91_StaticFields
{
	// UnityEngine.Material tripolygon.UModeler.GLUtil::material_
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___material__0;
};

// tripolygon.UModeler.Hotspot
struct Hotspot_tEB2930836E4965CBF2CB96A6996B6F302DF108B7  : public RuntimeObject
{
	// System.Collections.Generic.List`1<UnityEngine.Vector2> tripolygon.UModeler.Hotspot::uvs
	List_1_t8F3790B7F8C471B3A1336522C7415FB0AC36D47B* ___uvs_0;
};

// tripolygon.UModeler.MathUtil
struct MathUtil_t8B5351E9F78AC26C512287FC18EEF6C156568229  : public RuntimeObject
{
};

// tripolygon.UModeler.Segment
struct Segment_tC9A02427362D651880C6027436A738A68B4ACB3F  : public RuntimeObject
{
	// System.Collections.Generic.List`1<tripolygon.UModeler.Vertex> tripolygon.UModeler.Segment::vertices
	List_1_t302A75244C10A0CEF3AC031C484C2772A9D30A6F* ___vertices_0;
	// System.Collections.Generic.List`1<System.Int32> tripolygon.UModeler.Segment::indices
	List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* ___indices_1;
	// System.Boolean tripolygon.UModeler.Segment::open
	bool ___open_2;
};

// tripolygon.UModeler.SelectExtended
struct SelectExtended_tA9AA94ECFF1523DC7FE8E001FF9593BD32AC030E  : public RuntimeObject
{
	// tripolygon.UModeler.SelectionType tripolygon.UModeler.SelectExtended::selection_
	int32_t ___selection__0;
	// tripolygon.UModeler.SelectionType tripolygon.UModeler.SelectExtended::prevSelection_
	int32_t ___prevSelection__1;
};

// tripolygon.UModeler.ShelfHolder
struct ShelfHolder_tFDAAF16135FA93DB3AD68D57913C99082A757058  : public RuntimeObject
{
	// tripolygon.UModeler.EditableMesh tripolygon.UModeler.ShelfHolder::originalEdMesh_
	EditableMesh_tF419912423C538859FC4EDB1F6ABD7314E01A476* ___originalEdMesh__0;
	// System.Int32 tripolygon.UModeler.ShelfHolder::shelf
	int32_t ___shelf_1;
};

// tripolygon.UModeler.SimplePolygon
struct SimplePolygon_t5F51D3D1F485B3C377E0E40766EBFD86BA9D9385  : public RuntimeObject
{
	// System.Collections.Generic.List`1<tripolygon.UModeler.Vertex> tripolygon.UModeler.SimplePolygon::vertices_
	List_1_t302A75244C10A0CEF3AC031C484C2772A9D30A6F* ___vertices__0;
	// System.Collections.Generic.List`1<tripolygon.UModeler.IndexPair> tripolygon.UModeler.SimplePolygon::edges_
	List_1_t77E791A5D872DCB1195678FCECC444A825292814* ___edges__1;
	// tripolygon.UModeler.UVParameter tripolygon.UModeler.SimplePolygon::uvParams_
	UVParameter_t3DB903DED34BB8F9E4C5E5345C316D0E793081B3* ___uvParams__2;
	// tripolygon.UModeler.PlaneEx tripolygon.UModeler.SimplePolygon::plane_
	PlaneEx_t5512A7D4BF235ED6ED6F1F09A1621A1DCB31509D* ___plane__3;
	// System.Int32 tripolygon.UModeler.SimplePolygon::matID_
	int32_t ___matID__4;
	// tripolygon.UModeler.EPolygonFlag tripolygon.UModeler.SimplePolygon::flags_
	int32_t ___flags__5;
	// System.UInt64 tripolygon.UModeler.SimplePolygon::instanceID_
	uint64_t ___instanceID__6;
	// System.UInt64 tripolygon.UModeler.SimplePolygon::groupID
	uint64_t ___groupID_7;
	// tripolygon.UModeler.CachedMesh tripolygon.UModeler.SimplePolygon::renderableMesh_
	CachedMesh_t453A9D0951B407F6D189C4D10211DAB3444FCF02* ___renderableMesh__8;
	// tripolygon.UModeler.AABB tripolygon.UModeler.SimplePolygon::aabb_
	AABB_t9C7B4FCF1ED10D750373270786690AAF7801AC6B* ___aabb__9;
	// tripolygon.UModeler.AABB tripolygon.UModeler.SimplePolygon::worldAABB_
	AABB_t9C7B4FCF1ED10D750373270786690AAF7801AC6B* ___worldAABB__10;
	// tripolygon.UModeler.AABB tripolygon.UModeler.SimplePolygon::uvAABB_
	AABB_t9C7B4FCF1ED10D750373270786690AAF7801AC6B* ___uvAABB__11;
	// tripolygon.UModeler.BSPTree2D tripolygon.UModeler.SimplePolygon::bsptree_
	BSPTree2D_t9E8EF14D272A60027A636E897210797581B95327* ___bsptree__12;
	// tripolygon.UModeler.SegmentPolygons tripolygon.UModeler.SimplePolygon::segments_
	SegmentPolygons_tBF714BD1D4BBA1D3D8A6A6774BB1A61D6334E5D3* ___segments__13;
	// System.Int32 tripolygon.UModeler.SimplePolygon::privateFlags_
	int32_t ___privateFlags__14;
	// tripolygon.UModeler.SmallestVertexX tripolygon.UModeler.SimplePolygon::smallestX_
	SmallestVertexX_tBCBE7D65267ED083AF73282807C1D9ED3EF7C495* ___smallestX__15;
	// tripolygon.UModeler.EPolygonCacheRefreshFlag tripolygon.UModeler.SimplePolygon::refreshFlag
	int32_t ___refreshFlag_16;
	// System.Collections.Generic.List`1<tripolygon.UModeler.SimplePolygon> tripolygon.UModeler.SimplePolygon::convexhulls_
	List_1_tBD3EFF6C36C49D37E37AA532C06442E0AEC0544D* ___convexhulls__17;
	// System.Boolean tripolygon.UModeler.SimplePolygon::allowOptimization_
	bool ___allowOptimization__18;
};

struct SimplePolygon_t5F51D3D1F485B3C377E0E40766EBFD86BA9D9385_StaticFields
{
	// tripolygon.UModeler.UVParameter tripolygon.UModeler.SimplePolygon::DefaultUVParameter
	UVParameter_t3DB903DED34BB8F9E4C5E5345C316D0E793081B3* ___DefaultUVParameter_19;
	// System.Boolean tripolygon.UModeler.SimplePolygon::flattenEdgesEnable
	bool ___flattenEdgesEnable_20;
};

// tripolygon.UModeler.SmoothingGroupManager
struct SmoothingGroupManager_t1D2F4A2DF787BB531A1358F88CFC80C4B3E0C037  : public RuntimeObject
{
	// System.Collections.Generic.List`1<tripolygon.UModeler.SmoothingGroup> tripolygon.UModeler.SmoothingGroupManager::smoothing_groups_
	List_1_t51907573DE621C7B6F8A45BE5A45C7775CB6A7DE* ___smoothing_groups__0;
	// System.Byte[] tripolygon.UModeler.SmoothingGroupManager::smoothingGroupStream_
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___smoothingGroupStream__1;
	// System.Collections.Generic.List`1<tripolygon.UModeler.SmoothingGroup> tripolygon.UModeler.SmoothingGroupManager::smoothing_groupsStreamList_
	List_1_t51907573DE621C7B6F8A45BE5A45C7775CB6A7DE* ___smoothing_groupsStreamList__2;
	// System.Collections.Generic.List`1<tripolygon.UModeler.SmoothingGroup> tripolygon.UModeler.SmoothingGroupManager::smoothing_groupsList_
	List_1_t51907573DE621C7B6F8A45BE5A45C7775CB6A7DE* ___smoothing_groupsList__3;
};

// tripolygon.UModeler.StopModelerBuild
struct StopModelerBuild_t0BB93EB56149A7D7B04B0961A77C2010CEF8DB84  : public RuntimeObject
{
	// System.Collections.Generic.List`1<tripolygon.UModeler.StopModelerBuild/BuildShelfArg> tripolygon.UModeler.StopModelerBuild::buildSelfs_
	List_1_t2FB40158AFCD69E77037C532086C70828AC06862* ___buildSelfs__1;
	// System.Collections.Generic.List`1<System.Int32> tripolygon.UModeler.StopModelerBuild::BuildEdMeshSelfs_
	List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* ___BuildEdMeshSelfs__2;
	// tripolygon.UModeler.UModeler tripolygon.UModeler.StopModelerBuild::modeler_
	UModeler_tF29E9161DE3331F85E86886244AC15FEC514C577* ___modeler__3;
};

struct StopModelerBuild_t0BB93EB56149A7D7B04B0961A77C2010CEF8DB84_StaticFields
{
	// tripolygon.UModeler.StopModelerBuild tripolygon.UModeler.StopModelerBuild::stopModelerBuild_
	StopModelerBuild_t0BB93EB56149A7D7B04B0961A77C2010CEF8DB84* ___stopModelerBuild__0;
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

// tripolygon.UModeler.UMContext
struct UMContext_tD5DABA4A108180D95D3BDB86E9A4669F51289AFB  : public RuntimeObject
{
};

struct UMContext_tD5DABA4A108180D95D3BDB86E9A4669F51289AFB_StaticFields
{
	// tripolygon.UModeler.UModeler tripolygon.UModeler.UMContext::activeModeler
	UModeler_tF29E9161DE3331F85E86886244AC15FEC514C577* ___activeModeler_0;
	// tripolygon.UModeler.IModelerEngine tripolygon.UModeler.UMContext::engine
	RuntimeObject* ___engine_1;
};

// tripolygon.UModeler.UVIslandManager
struct UVIslandManager_tFDD6F91ECB27D6846C79AD6B3B87F4C06BB002E6  : public RuntimeObject
{
	// System.Collections.Generic.List`1<tripolygon.UModeler.UVIsland> tripolygon.UModeler.UVIslandManager::uvislands_
	List_1_t72FE227E373E5AEED90235540B93352AB4F4B4E8* ___uvislands__0;
	// System.Byte[] tripolygon.UModeler.UVIslandManager::uvislandsStream_
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___uvislandsStream__1;
	// System.Collections.Generic.List`1<tripolygon.UModeler.UVIsland> tripolygon.UModeler.UVIslandManager::uvislandsStreamList_
	List_1_t72FE227E373E5AEED90235540B93352AB4F4B4E8* ___uvislandsStreamList__2;
	// System.Collections.Generic.List`1<tripolygon.UModeler.UVIsland> tripolygon.UModeler.UVIslandManager::uvislandsList_
	List_1_t72FE227E373E5AEED90235540B93352AB4F4B4E8* ___uvislandsList__3;
};

// tripolygon.UModeler.UVUtil
struct UVUtil_t52D342AE33D61171F82A4AD64BD1AEA48567C302  : public RuntimeObject
{
};

struct UVUtil_t52D342AE33D61171F82A4AD64BD1AEA48567C302_StaticFields
{
	// UnityEngine.Vector3[] tripolygon.UModeler.UVUtil::elemental_axes_
	Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* ___elemental_axes__0;
};

// tripolygon.UModeler.Util
struct Util_tBEDFF10A323370DC03D5CAB4FEF2AB8EFEB0D7D2  : public RuntimeObject
{
};

struct Util_tBEDFF10A323370DC03D5CAB4FEF2AB8EFEB0D7D2_StaticFields
{
	// System.Single tripolygon.UModeler.Util::defaultOutlineOffset_
	float ___defaultOutlineOffset__0;
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

// tripolygon.UModeler.HotspotLayout/<>c
struct U3CU3Ec_t5EEE260C4A12263EE0C77B5F2414795F3DBA94ED  : public RuntimeObject
{
};

struct U3CU3Ec_t5EEE260C4A12263EE0C77B5F2414795F3DBA94ED_StaticFields
{
	// tripolygon.UModeler.HotspotLayout/<>c tripolygon.UModeler.HotspotLayout/<>c::<>9
	U3CU3Ec_t5EEE260C4A12263EE0C77B5F2414795F3DBA94ED* ___U3CU3E9_0;
	// System.Func`2<System.Collections.Generic.KeyValuePair`2<tripolygon.UModeler.Hotspot,System.Single>,tripolygon.UModeler.Hotspot> tripolygon.UModeler.HotspotLayout/<>c::<>9__5_1
	Func_2_tB21762CB355C1AC2E7F2757825C9BFEB83E112AB* ___U3CU3E9__5_1_1;
	// System.Func`2<System.Collections.Generic.KeyValuePair`2<tripolygon.UModeler.Hotspot,System.Single>,tripolygon.UModeler.Hotspot> tripolygon.UModeler.HotspotLayout/<>c::<>9__6_1
	Func_2_tB21762CB355C1AC2E7F2757825C9BFEB83E112AB* ___U3CU3E9__6_1_2;
};

// tripolygon.UModeler.HotspotLayout/<>c__DisplayClass5_0
struct U3CU3Ec__DisplayClass5_0_tFAF9EE157798AFB91BB83DBE0A6B4768F30EB75D  : public RuntimeObject
{
	// System.Single tripolygon.UModeler.HotspotLayout/<>c__DisplayClass5_0::gab
	float ___gab_0;
};

// tripolygon.UModeler.HotspotLayout/<>c__DisplayClass6_0
struct U3CU3Ec__DisplayClass6_0_t26043494B2AEA270630D4CEECF00F4C6AF39353D  : public RuntimeObject
{
	// System.Single tripolygon.UModeler.HotspotLayout/<>c__DisplayClass6_0::gab
	float ___gab_0;
};

// tripolygon.UModeler.MathUtil/<>c
struct U3CU3Ec_t0AE2255F25D8D7ACA16A285DCF06E69F0D3951D6  : public RuntimeObject
{
};

struct U3CU3Ec_t0AE2255F25D8D7ACA16A285DCF06E69F0D3951D6_StaticFields
{
	// tripolygon.UModeler.MathUtil/<>c tripolygon.UModeler.MathUtil/<>c::<>9
	U3CU3Ec_t0AE2255F25D8D7ACA16A285DCF06E69F0D3951D6* ___U3CU3E9_0;
	// tripolygon.UModeler.MathUtil/Vector2_3InputFloatReturnDelegate tripolygon.UModeler.MathUtil/<>c::<>9__12_0
	Vector2_3InputFloatReturnDelegate_tDF554F3258BCA6D8F1BEC540B850729000D15F46* ___U3CU3E9__12_0_1;
};

// System.Collections.Generic.SortedSet`1/Enumerator<System.Collections.Generic.KeyValuePair`2<System.Single,System.Int32>>
struct Enumerator_t58F115C7A52EAC57AC60BF250D3572D5D0126BDA 
{
	// System.Collections.Generic.SortedSet`1<T> System.Collections.Generic.SortedSet`1/Enumerator::_tree
	SortedSet_1_t2CFC5266138C9D2FAD0FBAC7791CB305EB45739C* ____tree_1;
	// System.Int32 System.Collections.Generic.SortedSet`1/Enumerator::_version
	int32_t ____version_2;
	// System.Collections.Generic.Stack`1<System.Collections.Generic.SortedSet`1/Node<T>> System.Collections.Generic.SortedSet`1/Enumerator::_stack
	Stack_1_t324D4C068DE437F858B7B501FF8C66BEA231B5A4* ____stack_3;
	// System.Collections.Generic.SortedSet`1/Node<T> System.Collections.Generic.SortedSet`1/Enumerator::_current
	Node_t5A5ACF97B4916D3155AA176EAAF809EDF24C613A* ____current_4;
	// System.Boolean System.Collections.Generic.SortedSet`1/Enumerator::_reverse
	bool ____reverse_5;
};

struct Enumerator_t58F115C7A52EAC57AC60BF250D3572D5D0126BDA_StaticFields
{
	// System.Collections.Generic.SortedSet`1/Node<T> System.Collections.Generic.SortedSet`1/Enumerator::s_dummyNode
	Node_t5A5ACF97B4916D3155AA176EAAF809EDF24C613A* ___s_dummyNode_0;
};

// System.Collections.Generic.List`1/Enumerator<System.Int32>
struct Enumerator_t9DBCD072C72E44AB8959D9884EF7F528028F20EC 
{
	// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1/Enumerator::_list
	List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* ____list_0;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::_index
	int32_t ____index_1;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::_version
	int32_t ____version_2;
	// T System.Collections.Generic.List`1/Enumerator::_current
	int32_t ____current_3;
};

// System.Collections.Generic.KeyValuePair`2<tripolygon.UModeler.Hotspot,System.Single>
struct KeyValuePair_2_tABDAC15331E8BE8B1534467FC11E1A59441A1865 
{
	// TKey System.Collections.Generic.KeyValuePair`2::key
	Hotspot_tEB2930836E4965CBF2CB96A6996B6F302DF108B7* ___key_0;
	// TValue System.Collections.Generic.KeyValuePair`2::value
	float ___value_1;
};

// System.Collections.Generic.KeyValuePair`2<System.Object,System.Single>
struct KeyValuePair_2_tA76653DFC8A4C9B07EC11B4FF878E42681D3EACE 
{
	// TKey System.Collections.Generic.KeyValuePair`2::key
	RuntimeObject* ___key_0;
	// TValue System.Collections.Generic.KeyValuePair`2::value
	float ___value_1;
};

// System.Collections.Generic.KeyValuePair`2<System.Single,System.Int32>
struct KeyValuePair_2_tF9681614985AA4D11569AFA8747D722D1447A120 
{
	// TKey System.Collections.Generic.KeyValuePair`2::key
	float ___key_0;
	// TValue System.Collections.Generic.KeyValuePair`2::value
	int32_t ___value_1;
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

// System.Char
struct Char_t521A6F19B456D956AF452D926C32709DC03D6B17 
{
	// System.Char System.Char::m_value
	Il2CppChar ___m_value_0;
};

struct Char_t521A6F19B456D956AF452D926C32709DC03D6B17_StaticFields
{
	// System.Byte[] System.Char::s_categoryForLatin1
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___s_categoryForLatin1_3;
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

// System.Double
struct Double_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F 
{
	// System.Double System.Double::m_value
	double ___m_value_0;
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

// tripolygon.UModeler.IndexPair
struct IndexPair_t6886ED92041E20F053A60B5DE14E4710BB42A376  : public SelectExtended_tA9AA94ECFF1523DC7FE8E001FF9593BD32AC030E
{
	// System.Int32 tripolygon.UModeler.IndexPair::i0_
	int32_t ___i0__3;
	// System.Int32 tripolygon.UModeler.IndexPair::i1_
	int32_t ___i1__4;
};

struct IndexPair_t6886ED92041E20F053A60B5DE14E4710BB42A376_StaticFields
{
	// tripolygon.UModeler.IndexPair tripolygon.UModeler.IndexPair::invalide_pair
	IndexPair_t6886ED92041E20F053A60B5DE14E4710BB42A376* ___invalide_pair_2;
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

// System.UInt32
struct UInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B 
{
	// System.UInt32 System.UInt32::m_value
	uint32_t ___m_value_0;
};

// System.UInt64
struct UInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF 
{
	// System.UInt64 System.UInt64::m_value
	uint64_t ___m_value_0;
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

// tripolygon.UModeler.StopModelerBuild/BuildShelfArg
struct BuildShelfArg_t2137F4C02DE10B54ED77462BCB4FC85BA4B81BCA 
{
	// System.Int32 tripolygon.UModeler.StopModelerBuild/BuildShelfArg::shelf
	int32_t ___shelf_0;
	// System.Boolean tripolygon.UModeler.StopModelerBuild/BuildShelfArg::updateToGraphicsAPIImmediately
	bool ___updateToGraphicsAPIImmediately_1;
};
// Native definition for P/Invoke marshalling of tripolygon.UModeler.StopModelerBuild/BuildShelfArg
struct BuildShelfArg_t2137F4C02DE10B54ED77462BCB4FC85BA4B81BCA_marshaled_pinvoke
{
	int32_t ___shelf_0;
	int32_t ___updateToGraphicsAPIImmediately_1;
};
// Native definition for COM marshalling of tripolygon.UModeler.StopModelerBuild/BuildShelfArg
struct BuildShelfArg_t2137F4C02DE10B54ED77462BCB4FC85BA4B81BCA_marshaled_com
{
	int32_t ___shelf_0;
	int32_t ___updateToGraphicsAPIImmediately_1;
};

// tripolygon.UModeler.Util/ClippingVertex
struct ClippingVertex_tF5DB1E0668D7F574FF74C67BC6C91561FAF13E30 
{
	// tripolygon.UModeler.Vertex tripolygon.UModeler.Util/ClippingVertex::vtx
	Vertex_tB6D4D191E463D1653AA47DED15E41F21BA5A21FC* ___vtx_0;
	// tripolygon.UModeler.Util/EClippingVertexType tripolygon.UModeler.Util/ClippingVertex::type
	int32_t ___type_1;
	// System.Boolean tripolygon.UModeler.Util/ClippingVertex::zeroDistAndNoCreated
	bool ___zeroDistAndNoCreated_2;
};
// Native definition for P/Invoke marshalling of tripolygon.UModeler.Util/ClippingVertex
struct ClippingVertex_tF5DB1E0668D7F574FF74C67BC6C91561FAF13E30_marshaled_pinvoke
{
	Vertex_tB6D4D191E463D1653AA47DED15E41F21BA5A21FC* ___vtx_0;
	int32_t ___type_1;
	int32_t ___zeroDistAndNoCreated_2;
};
// Native definition for COM marshalling of tripolygon.UModeler.Util/ClippingVertex
struct ClippingVertex_tF5DB1E0668D7F574FF74C67BC6C91561FAF13E30_marshaled_com
{
	Vertex_tB6D4D191E463D1653AA47DED15E41F21BA5A21FC* ___vtx_0;
	int32_t ___type_1;
	int32_t ___zeroDistAndNoCreated_2;
};

// System.Collections.Generic.List`1/Enumerator<tripolygon.UModeler.StopModelerBuild/BuildShelfArg>
struct Enumerator_t3914DB61CC010B7C53852DA850D379468E909002 
{
	// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1/Enumerator::_list
	List_1_t2FB40158AFCD69E77037C532086C70828AC06862* ____list_0;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::_index
	int32_t ____index_1;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::_version
	int32_t ____version_2;
	// T System.Collections.Generic.List`1/Enumerator::_current
	BuildShelfArg_t2137F4C02DE10B54ED77462BCB4FC85BA4B81BCA ____current_3;
};

// System.Collections.Generic.SortedDictionary`2/Enumerator<System.Single,System.Int32>
struct Enumerator_t422FE7CC7AC06DA0CD21EF1FC7B746F9C4C7BEF2 
{
	// System.Collections.Generic.SortedSet`1/Enumerator<System.Collections.Generic.KeyValuePair`2<TKey,TValue>> System.Collections.Generic.SortedDictionary`2/Enumerator::_treeEnum
	Enumerator_t58F115C7A52EAC57AC60BF250D3572D5D0126BDA ____treeEnum_0;
	// System.Int32 System.Collections.Generic.SortedDictionary`2/Enumerator::_getEnumeratorRetType
	int32_t ____getEnumeratorRetType_1;
};

// tripolygon.UModeler.AABB
struct AABB_t9C7B4FCF1ED10D750373270786690AAF7801AC6B  : public RuntimeObject
{
	// UnityEngine.Vector3 tripolygon.UModeler.AABB::min
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___min_0;
	// UnityEngine.Vector3 tripolygon.UModeler.AABB::max
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___max_1;
};

struct AABB_t9C7B4FCF1ED10D750373270786690AAF7801AC6B_StaticFields
{
	// UnityEngine.Vector3 tripolygon.UModeler.AABB::minInit
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___minInit_2;
	// UnityEngine.Vector3 tripolygon.UModeler.AABB::maxInit
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___maxInit_3;
};

// tripolygon.UModeler.ArcShape
struct ArcShape_tD79A3A8B50D88CAABD9AB2CDBE67A6D525242779  : public RuntimeObject
{
	// UnityEngine.Vector3 tripolygon.UModeler.ArcShape::center
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___center_0;
	// UnityEngine.Vector3 tripolygon.UModeler.ArcShape::normal
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___normal_1;
	// UnityEngine.Vector3 tripolygon.UModeler.ArcShape::from
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___from_2;
	// System.Single tripolygon.UModeler.ArcShape::angle
	float ___angle_3;
	// System.Single tripolygon.UModeler.ArcShape::radius
	float ___radius_4;
	// System.Int32 tripolygon.UModeler.ArcShape::segment_count
	int32_t ___segment_count_5;
	// UnityEngine.Quaternion tripolygon.UModeler.ArcShape::rot
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___rot_6;
	// System.Collections.Generic.List`1<UnityEngine.Vector2> tripolygon.UModeler.ArcShape::arcPoints_
	List_1_t8F3790B7F8C471B3A1336522C7415FB0AC36D47B* ___arcPoints__7;
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

// tripolygon.UModeler.Edge
struct Edge_t61E163F7AA3BA416F72B1EDF0DD966F41041D4FF  : public RuntimeObject
{
	// UnityEngine.Vector3 tripolygon.UModeler.Edge::p0
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___p0_0;
	// UnityEngine.Vector3 tripolygon.UModeler.Edge::p1
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___p1_1;
};

// tripolygon.UModeler.Edge2D
struct Edge2D_t9FDACD4F24D6997F00FF589D414CA11D256A7364 
{
	// UnityEngine.Vector2 tripolygon.UModeler.Edge2D::p0
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___p0_0;
	// UnityEngine.Vector2 tripolygon.UModeler.Edge2D::p1
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___p1_1;
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

// tripolygon.UModeler.HitResult
struct HitResult_t1C6A2CA0F36DF67C6BF66A35ECC5D1F9BA600AEA  : public RuntimeObject
{
	// UnityEngine.Vector2 tripolygon.UModeler.HitResult::pos
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___pos_0;
	// System.Single tripolygon.UModeler.HitResult::t
	float ___t_1;
};

// tripolygon.UModeler.Line2D
struct Line2D_tAC46D1228FCBF2872CC1DF7DA8C02274FDE4A750  : public RuntimeObject
{
	// UnityEngine.Vector2 tripolygon.UModeler.Line2D::normal_
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___normal__0;
	// System.Single tripolygon.UModeler.Line2D::distance_
	float ___distance__1;
};

// tripolygon.UModeler.Matrix4x4Ex
struct Matrix4x4Ex_t3EFC7AD9C36AB8195F5B6B29A27B518F63F24553  : public RuntimeObject
{
	// UnityEngine.Matrix4x4 tripolygon.UModeler.Matrix4x4Ex::m
	Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 ___m_0;
	// UnityEngine.Matrix4x4 tripolygon.UModeler.Matrix4x4Ex::inv_m
	Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 ___inv_m_1;
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

// tripolygon.UModeler.PlaneEx
struct PlaneEx_t5512A7D4BF235ED6ED6F1F09A1621A1DCB31509D  : public RuntimeObject
{
	// UnityEngine.Vector3 tripolygon.UModeler.PlaneEx::normal_
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___normal__0;
	// System.Single tripolygon.UModeler.PlaneEx::distance_
	float ___distance__1;
	// tripolygon.UModeler.Matrix4x4Ex tripolygon.UModeler.PlaneEx::basis_
	Matrix4x4Ex_t3EFC7AD9C36AB8195F5B6B29A27B518F63F24553* ___basis__2;
};

// UnityEngine.Ray
struct Ray_t2B1742D7958DC05BDC3EFC7461D3593E1430DC00 
{
	// UnityEngine.Vector3 UnityEngine.Ray::m_Origin
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_Origin_0;
	// UnityEngine.Vector3 UnityEngine.Ray::m_Direction
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_Direction_1;
};

// tripolygon.UModeler.UVParameter
struct UVParameter_t3DB903DED34BB8F9E4C5E5345C316D0E793081B3  : public RuntimeObject
{
	// UnityEngine.Vector2 tripolygon.UModeler.UVParameter::shift
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___shift_0;
	// UnityEngine.Vector2 tripolygon.UModeler.UVParameter::scale
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___scale_1;
	// System.Single tripolygon.UModeler.UVParameter::rotation
	float ___rotation_2;
};

// tripolygon.UModeler.Vertex
struct Vertex_tB6D4D191E463D1653AA47DED15E41F21BA5A21FC  : public RuntimeObject
{
	// UnityEngine.Vector3 tripolygon.UModeler.Vertex::pos
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___pos_0;
	// UnityEngine.Vector2 tripolygon.UModeler.Vertex::uv
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___uv_1;
	// UnityEngine.Color tripolygon.UModeler.Vertex::color
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___color_2;
};

// tripolygon.UModeler.HotspotLayout/TransHotspotData
struct TransHotspotData_t2A3F93D286B0BB07C96EDBD07629DDA4CA72AFBA 
{
	// UnityEngine.Vector2 tripolygon.UModeler.HotspotLayout/TransHotspotData::a
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___a_0;
	// UnityEngine.Vector2 tripolygon.UModeler.HotspotLayout/TransHotspotData::b
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___b_1;
	// UnityEngine.Vector2 tripolygon.UModeler.HotspotLayout/TransHotspotData::c
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___c_2;
	// tripolygon.UModeler.Line2D tripolygon.UModeler.HotspotLayout/TransHotspotData::abLine
	Line2D_tAC46D1228FCBF2872CC1DF7DA8C02274FDE4A750* ___abLine_3;
	// tripolygon.UModeler.Line2D tripolygon.UModeler.HotspotLayout/TransHotspotData::acLine
	Line2D_tAC46D1228FCBF2872CC1DF7DA8C02274FDE4A750* ___acLine_4;
};
// Native definition for P/Invoke marshalling of tripolygon.UModeler.HotspotLayout/TransHotspotData
struct TransHotspotData_t2A3F93D286B0BB07C96EDBD07629DDA4CA72AFBA_marshaled_pinvoke
{
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___a_0;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___b_1;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___c_2;
	Line2D_tAC46D1228FCBF2872CC1DF7DA8C02274FDE4A750* ___abLine_3;
	Line2D_tAC46D1228FCBF2872CC1DF7DA8C02274FDE4A750* ___acLine_4;
};
// Native definition for COM marshalling of tripolygon.UModeler.HotspotLayout/TransHotspotData
struct TransHotspotData_t2A3F93D286B0BB07C96EDBD07629DDA4CA72AFBA_marshaled_com
{
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___a_0;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___b_1;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___c_2;
	Line2D_tAC46D1228FCBF2872CC1DF7DA8C02274FDE4A750* ___abLine_3;
	Line2D_tAC46D1228FCBF2872CC1DF7DA8C02274FDE4A750* ___acLine_4;
};

// tripolygon.UModeler.Util/EClippingVertexType
struct EClippingVertexType_t7A7516C7E4126B5571F3DBFB1BC45A6D3C28D644 
{
	// System.Int32 tripolygon.UModeler.Util/EClippingVertexType::value__
	int32_t ___value___2;
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

// UnityEngine.Shader
struct Shader_tADC867D36B7876EE22427FAA2CE485105F4EE692  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
};

// System.SystemException
struct SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295  : public Exception_t
{
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

// tripolygon.UModeler.DrawDelegate
struct DrawDelegate_t75FC8E4340EB4F9F6EF0F6726F3DD4E64C8CED7F  : public MulticastDelegate_t
{
};

// System.IndexOutOfRangeException
struct IndexOutOfRangeException_t7ECB35264FB6CA8FAA516BD958F4B2ADC78E8A82  : public SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295
{
};

// tripolygon.UModeler.InspectorValueChanged
struct InspectorValueChanged_tE5BCC32DFB0EA6FB5E89ECC103172F2227F18F25  : public MulticastDelegate_t
{
};

// UnityEngine.MeshFilter
struct MeshFilter_t6D1CE2473A1E45AC73013400585A1163BF66B2F5  : public Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3
{
};

// UnityEngine.Renderer
struct Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF  : public Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3
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

// tripolygon.UModeler.MathUtil/Vector2_3InputFloatReturnDelegate
struct Vector2_3InputFloatReturnDelegate_tDF554F3258BCA6D8F1BEC540B850729000D15F46  : public MulticastDelegate_t
{
};

// tripolygon.UModeler.UModeler/ModelerDelegate
struct ModelerDelegate_t3E84323788B9A588C192E5D33F6809AAB16B2707  : public MulticastDelegate_t
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

// UnityEngine.MeshCollider
struct MeshCollider_tB525E4DDE383252364ED0BDD32CF2B53914EE455  : public Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76
{
};

// UnityEngine.MeshRenderer
struct MeshRenderer_t4B7747212F0B88244BB7790C61AE124BFC15BAAE  : public Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF
{
};

// UnityEngine.MonoBehaviour
struct MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71  : public Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA
{
};

// tripolygon.UModeler.UModeler
struct UModeler_tF29E9161DE3331F85E86886244AC15FEC514C577  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// tripolygon.UModeler.EditableMesh tripolygon.UModeler.UModeler::editableMesh_
	EditableMesh_tF419912423C538859FC4EDB1F6ABD7314E01A476* ___editableMesh__11;
	// System.Boolean tripolygon.UModeler.UModeler::backfaces_
	bool ___backfaces__12;
	// System.Collections.Generic.List`1<UnityEngine.Material> tripolygon.UModeler.UModeler::materials
	List_1_t386E09F4F22DDE4D2AC41A8567FFF283C254537B* ___materials_13;
	// UnityEngine.Material[] tripolygon.UModeler.UModeler::originalMaterials
	MaterialU5BU5D_t2B1D11C42DB07A4400C0535F92DBB87A2E346D3D* ___originalMaterials_14;
	// System.Boolean tripolygon.UModeler.UModeler::editMode
	bool ___editMode_15;
	// System.Boolean tripolygon.UModeler.UModeler::recalculateTangents
	bool ___recalculateTangents_16;
	// System.String tripolygon.UModeler.UModeler::serializedGuid
	String_t* ___serializedGuid_17;
	// System.String tripolygon.UModeler.UModeler::assetPath
	String_t* ___assetPath_18;
	// System.Boolean tripolygon.UModeler.UModeler::isInvisibleObject
	bool ___isInvisibleObject_19;
	// UnityEngine.Mesh tripolygon.UModeler.UModeler::mainRenderableMesh
	Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* ___mainRenderableMesh_20;
	// tripolygon.UModeler.HotspotLayout tripolygon.UModeler.UModeler::hotspotLayout
	HotspotLayout_t3E858B06631E101D2D83F70E7231E17CB5F3E63A* ___hotspotLayout_21;
	// System.Single tripolygon.UModeler.UModeler::hotspotScale
	float ___hotspotScale_22;
	// System.Int32 tripolygon.UModeler.UModeler::hotspotPadding
	int32_t ___hotspotPadding_23;
	// System.Single tripolygon.UModeler.UModeler::hotspotPriority
	float ___hotspotPriority_24;
	// System.Boolean tripolygon.UModeler.UModeler::autoHotspotLayout
	bool ___autoHotspotLayout_25;
	// System.Boolean tripolygon.UModeler.UModeler::hotspotGroup
	bool ___hotspotGroup_26;
	// System.Boolean tripolygon.UModeler.UModeler::<LockGenerateMesh>k__BackingField
	bool ___U3CLockGenerateMeshU3Ek__BackingField_27;
	// tripolygon.UModeler.EngineResourceManager tripolygon.UModeler.UModeler::engineResources_
	EngineResourceManager_tB814C237AED9E9140B8D664B9F5D3BE18965A951* ___engineResources__29;
	// System.Int32 tripolygon.UModeler.UModeler::totalTriangleCount_
	int32_t ___totalTriangleCount__30;
	// System.Int32 tripolygon.UModeler.UModeler::totalPolygonCount_
	int32_t ___totalPolygonCount__31;
	// UnityEngine.MeshFilter tripolygon.UModeler.UModeler::renderableMeshFilter_
	MeshFilter_t6D1CE2473A1E45AC73013400585A1163BF66B2F5* ___renderableMeshFilter__32;
	// UnityEngine.MeshRenderer tripolygon.UModeler.UModeler::meshRenderer_
	MeshRenderer_t4B7747212F0B88244BB7790C61AE124BFC15BAAE* ___meshRenderer__33;
};

struct UModeler_tF29E9161DE3331F85E86886244AC15FEC514C577_StaticFields
{
	// System.Boolean tripolygon.UModeler.UModeler::enableDelegate
	bool ___enableDelegate_4;
	// tripolygon.UModeler.UModeler/ModelerDelegate tripolygon.UModeler.UModeler::OnAwakeDelegate
	ModelerDelegate_t3E84323788B9A588C192E5D33F6809AAB16B2707* ___OnAwakeDelegate_5;
	// tripolygon.UModeler.UModeler/ModelerDelegate tripolygon.UModeler.UModeler::OnDestroyDelegate
	ModelerDelegate_t3E84323788B9A588C192E5D33F6809AAB16B2707* ___OnDestroyDelegate_6;
	// tripolygon.UModeler.UModeler/ModelerDelegate tripolygon.UModeler.UModeler::OnDisableDelegate
	ModelerDelegate_t3E84323788B9A588C192E5D33F6809AAB16B2707* ___OnDisableDelegate_7;
	// tripolygon.UModeler.UModeler/ModelerDelegate tripolygon.UModeler.UModeler::OnEnableDelegate
	ModelerDelegate_t3E84323788B9A588C192E5D33F6809AAB16B2707* ___OnEnableDelegate_8;
	// tripolygon.UModeler.UModeler/ModelerDelegate tripolygon.UModeler.UModeler::OnStartDelegate
	ModelerDelegate_t3E84323788B9A588C192E5D33F6809AAB16B2707* ___OnStartDelegate_9;
	// System.UInt64 tripolygon.UModeler.UModeler::latestID_
	uint64_t ___latestID__10;
	// System.Collections.Generic.Dictionary`2<System.Int32,UnityEngine.Mesh> tripolygon.UModeler.UModeler::meshContainer
	Dictionary_2_t6D39865003E656D60A88B22671895E4EA1590710* ___meshContainer_28;
};
#ifdef __clang__
#pragma clang diagnostic pop
#endif
// UnityEngine.Vector2[]
struct Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA  : public RuntimeArray
{
	ALIGN_FIELD (8) Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 m_Items[1];

	inline Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 value)
	{
		m_Items[index] = value;
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
// UnityEngine.Material[]
struct MaterialU5BU5D_t2B1D11C42DB07A4400C0535F92DBB87A2E346D3D  : public RuntimeArray
{
	ALIGN_FIELD (8) Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* m_Items[1];

	inline Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* value)
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
// System.Single[]
struct SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C  : public RuntimeArray
{
	ALIGN_FIELD (8) float m_Items[1];

	inline float GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline float* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, float value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline float GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline float* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, float value)
	{
		m_Items[index] = value;
	}
};
// System.Collections.Generic.List`1<UnityEngine.Vector2>[]
struct List_1U5BU5D_tDE88DA8DCD79A37A10DCC96911E1242D15FF66FE  : public RuntimeArray
{
	ALIGN_FIELD (8) List_1_t8F3790B7F8C471B3A1336522C7415FB0AC36D47B* m_Items[1];

	inline List_1_t8F3790B7F8C471B3A1336522C7415FB0AC36D47B* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline List_1_t8F3790B7F8C471B3A1336522C7415FB0AC36D47B** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, List_1_t8F3790B7F8C471B3A1336522C7415FB0AC36D47B* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline List_1_t8F3790B7F8C471B3A1336522C7415FB0AC36D47B* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline List_1_t8F3790B7F8C471B3A1336522C7415FB0AC36D47B** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, List_1_t8F3790B7F8C471B3A1336522C7415FB0AC36D47B* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
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
// System.Collections.Generic.List`1<tripolygon.UModeler.Util/ClippingVertex>[]
struct List_1U5BU5D_tD580B54AE4CC7B8D11722E8FF7B59A303E0C6B2C  : public RuntimeArray
{
	ALIGN_FIELD (8) List_1_tD13CD97762EDE4928859DDC2999E6E2175B20A11* m_Items[1];

	inline List_1_tD13CD97762EDE4928859DDC2999E6E2175B20A11* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline List_1_tD13CD97762EDE4928859DDC2999E6E2175B20A11** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, List_1_tD13CD97762EDE4928859DDC2999E6E2175B20A11* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline List_1_tD13CD97762EDE4928859DDC2999E6E2175B20A11* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline List_1_tD13CD97762EDE4928859DDC2999E6E2175B20A11** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, List_1_tD13CD97762EDE4928859DDC2999E6E2175B20A11* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// tripolygon.UModeler.Util/EClippingVertexType[]
struct EClippingVertexTypeU5BU5D_tC73D7A9A6652F04884D6DCE03FE775D313E17D6D  : public RuntimeArray
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
// System.Collections.Generic.List`1<tripolygon.UModeler.SimplePolygon>[]
struct List_1U5BU5D_tA26F03D600203AEE7348CFBF89274A23C4FCE53E  : public RuntimeArray
{
	ALIGN_FIELD (8) List_1_tBD3EFF6C36C49D37E37AA532C06442E0AEC0544D* m_Items[1];

	inline List_1_tBD3EFF6C36C49D37E37AA532C06442E0AEC0544D* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline List_1_tBD3EFF6C36C49D37E37AA532C06442E0AEC0544D** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, List_1_tBD3EFF6C36C49D37E37AA532C06442E0AEC0544D* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline List_1_tBD3EFF6C36C49D37E37AA532C06442E0AEC0544D* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline List_1_tBD3EFF6C36C49D37E37AA532C06442E0AEC0544D** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, List_1_tBD3EFF6C36C49D37E37AA532C06442E0AEC0544D* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// tripolygon.UModeler.EditableMesh[]
struct EditableMeshU5BU5D_t404D4B72A1C23719E39B03C9ECACE067F1A04511  : public RuntimeArray
{
	ALIGN_FIELD (8) EditableMesh_tF419912423C538859FC4EDB1F6ABD7314E01A476* m_Items[1];

	inline EditableMesh_tF419912423C538859FC4EDB1F6ABD7314E01A476* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline EditableMesh_tF419912423C538859FC4EDB1F6ABD7314E01A476** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, EditableMesh_tF419912423C538859FC4EDB1F6ABD7314E01A476* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline EditableMesh_tF419912423C538859FC4EDB1F6ABD7314E01A476* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline EditableMesh_tF419912423C538859FC4EDB1F6ABD7314E01A476** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, EditableMesh_tF419912423C538859FC4EDB1F6ABD7314E01A476* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// UnityEngine.Color32[]
struct Color32U5BU5D_t38116C3E91765C4C5726CE12C77FAD7F9F737259  : public RuntimeArray
{
	ALIGN_FIELD (8) Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B m_Items[1];

	inline Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B value)
	{
		m_Items[index] = value;
	}
};
// UnityEngine.Color[]
struct ColorU5BU5D_t612261CF293F6FFC3D80AB52259FF0DC2B2CC389  : public RuntimeArray
{
	ALIGN_FIELD (8) Color_tD001788D726C3A7F1379BEED0260B9591F440C1F m_Items[1];

	inline Color_tD001788D726C3A7F1379BEED0260B9591F440C1F GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Color_tD001788D726C3A7F1379BEED0260B9591F440C1F* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Color_tD001788D726C3A7F1379BEED0260B9591F440C1F value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline Color_tD001788D726C3A7F1379BEED0260B9591F440C1F GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Color_tD001788D726C3A7F1379BEED0260B9591F440C1F* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Color_tD001788D726C3A7F1379BEED0260B9591F440C1F value)
	{
		m_Items[index] = value;
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
// tripolygon.UModeler.StopModelerBuild/BuildShelfArg[]
struct BuildShelfArgU5BU5D_tEE107092A29354035B9937C7BE767E56C332AEEC  : public RuntimeArray
{
	ALIGN_FIELD (8) BuildShelfArg_t2137F4C02DE10B54ED77462BCB4FC85BA4B81BCA m_Items[1];

	inline BuildShelfArg_t2137F4C02DE10B54ED77462BCB4FC85BA4B81BCA GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline BuildShelfArg_t2137F4C02DE10B54ED77462BCB4FC85BA4B81BCA* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, BuildShelfArg_t2137F4C02DE10B54ED77462BCB4FC85BA4B81BCA value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline BuildShelfArg_t2137F4C02DE10B54ED77462BCB4FC85BA4B81BCA GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline BuildShelfArg_t2137F4C02DE10B54ED77462BCB4FC85BA4B81BCA* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, BuildShelfArg_t2137F4C02DE10B54ED77462BCB4FC85BA4B81BCA value)
	{
		m_Items[index] = value;
	}
};
// tripolygon.UModeler.Util/ClippingVertex[]
struct ClippingVertexU5BU5D_t22795A518FF4C4AFBC78D6B6FD57A7EA88AC83F5  : public RuntimeArray
{
	ALIGN_FIELD (8) ClippingVertex_tF5DB1E0668D7F574FF74C67BC6C91561FAF13E30 m_Items[1];

	inline ClippingVertex_tF5DB1E0668D7F574FF74C67BC6C91561FAF13E30 GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline ClippingVertex_tF5DB1E0668D7F574FF74C67BC6C91561FAF13E30* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, ClippingVertex_tF5DB1E0668D7F574FF74C67BC6C91561FAF13E30 value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___vtx_0), (void*)NULL);
	}
	inline ClippingVertex_tF5DB1E0668D7F574FF74C67BC6C91561FAF13E30 GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline ClippingVertex_tF5DB1E0668D7F574FF74C67BC6C91561FAF13E30* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, ClippingVertex_tF5DB1E0668D7F574FF74C67BC6C91561FAF13E30 value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___vtx_0), (void*)NULL);
	}
};


// TValue System.Collections.Generic.KeyValuePair`2<System.Object,System.Single>::get_Value()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float KeyValuePair_2_get_Value_mA5BE7C11B215197C303FBF99576CBDE919413929_gshared_inline (KeyValuePair_2_tA76653DFC8A4C9B07EC11B4FF878E42681D3EACE* __this, const RuntimeMethod* method) ;
// TKey System.Collections.Generic.KeyValuePair`2<System.Object,System.Single>::get_Key()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* KeyValuePair_2_get_Key_m0B6F02450AE5541F7814A6C8C48B92F6D992762E_gshared_inline (KeyValuePair_2_tA76653DFC8A4C9B07EC11B4FF878E42681D3EACE* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_m92E9AB321FBD7147CA109C822D99C8B0610C27B7_gshared (Dictionary_2_tA75D1125AC9BE8F005BA9B868B373398E643C907* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::Clear()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_Clear_mE1EFF7C68491EE07D21EE9924475A559BF0A4773_gshared (Dictionary_2_tA75D1125AC9BE8F005BA9B868B373398E643C907* __this, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::ContainsKey(TKey)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_ContainsKey_mED5C451F158CDDD2B3F4B0720CD248DA9DB27B25_gshared (Dictionary_2_tA75D1125AC9BE8F005BA9B868B373398E643C907* __this, int32_t ___key0, const RuntimeMethod* method) ;
// TValue System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::get_Item(TKey)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Dictionary_2_get_Item_mC3FEA647E750C27367C990777D8890E0E712E514_gshared (Dictionary_2_tA75D1125AC9BE8F005BA9B868B373398E643C907* __this, int32_t ___key0, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::Remove(TKey)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_Remove_m12BAB2F82E34CAA21A7245AB61E48F106340C1A4_gshared (Dictionary_2_tA75D1125AC9BE8F005BA9B868B373398E643C907* __this, int32_t ___key0, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::ContainsValue(TValue)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_ContainsValue_m999D98061B8048248A312862400275D718C22535_gshared (Dictionary_2_tA75D1125AC9BE8F005BA9B868B373398E643C907* __this, RuntimeObject* ___value0, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::Add(TKey,TValue)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_Add_mAF1EF7DA16BD70E252EA5C4B0F74DE519A02CBCD_gshared (Dictionary_2_tA75D1125AC9BE8F005BA9B868B373398E643C907* __this, int32_t ___key0, RuntimeObject* ___value1, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::set_Item(TKey,TValue)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_set_Item_m2888D71A14F2B8510102F24FEE90552E91B124C1_gshared (Dictionary_2_tA75D1125AC9BE8F005BA9B868B373398E643C907* __this, int32_t ___key0, RuntimeObject* ___value1, const RuntimeMethod* method) ;
// T[] System.Collections.Generic.List`1<System.Object>::ToArray()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* List_1_ToArray_mD7E4F8E7C11C3C67CB5739FCC0A6E86106A6291F_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method) ;
// T UnityEngine.Component::GetComponent<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Component_GetComponent_TisRuntimeObject_m7181F81CAEC2CF53F5D2BC79B7425C16E1F80D33_gshared (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.UInt64>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__ctor_m29BEDE660794161B463CE980419121848921671C_gshared (List_1_tB88E7361EE76DFB3EBB7FCD60CC59ACC3E48C284* __this, const RuntimeMethod* method) ;
// System.Int32 System.Collections.Generic.List`1<System.Object>::get_Count()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t List_1_get_Count_m4407E4C389F22B8CEC282C15D56516658746C383_gshared_inline (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method) ;
// T System.Collections.Generic.List`1<System.Object>::get_Item(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* List_1_get_Item_m33561245D64798C2AB07584C0EC4F240E4839A38_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, int32_t ___index0, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.Object>::Clear()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Clear_m16C1F2C61FED5955F10EB36BC1CB2DF34B128994_gshared_inline (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.Object>::AddRange(System.Collections.Generic.IEnumerable`1<T>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_AddRange_m1F76B300133150E6046C5FED00E88B5DE0A02E17_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, RuntimeObject* ___collection0, const RuntimeMethod* method) ;
// T UnityEngine.GameObject::GetComponent<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* GameObject_GetComponent_TisRuntimeObject_m6EAED4AA356F0F48288F67899E5958792395563B_gshared (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method) ;
// T UnityEngine.GameObject::AddComponent<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* GameObject_AddComponent_TisRuntimeObject_m69B93700FACCF372F5753371C6E8FB780800B824_gshared (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__ctor_m7F078BB342729BDF11327FD89D7872265328F690_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.List`1<tripolygon.UModeler.StopModelerBuild/BuildShelfArg>::Contains(T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool List_1_Contains_m041392123604C80BB0821138BB776371E95EB79B_gshared (List_1_t2FB40158AFCD69E77037C532086C70828AC06862* __this, BuildShelfArg_t2137F4C02DE10B54ED77462BCB4FC85BA4B81BCA ___item0, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<tripolygon.UModeler.StopModelerBuild/BuildShelfArg>::Add(T)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Add_m0C32AFF3B7A78D3835F96AE54D8283A8BE23F63B_gshared_inline (List_1_t2FB40158AFCD69E77037C532086C70828AC06862* __this, BuildShelfArg_t2137F4C02DE10B54ED77462BCB4FC85BA4B81BCA ___item0, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.List`1<System.Int32>::Contains(T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool List_1_Contains_m4FD96E89F15844C90032C7386BAB528817F1FF5B_gshared (List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* __this, int32_t ___item0, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.Int32>::Add(T)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Add_m0248A96C5334E9A93E6994B7780478BCD994EA3D_gshared_inline (List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* __this, int32_t ___item0, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<tripolygon.UModeler.StopModelerBuild/BuildShelfArg>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__ctor_mD0461A0F9F5D1C4A9C578D17033D69A8AC82FF3F_gshared (List_1_t2FB40158AFCD69E77037C532086C70828AC06862* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.Int32>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__ctor_m17F501B5A5C289ECE1B4F3D6EBF05DFA421433F8_gshared (List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* __this, const RuntimeMethod* method) ;
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<tripolygon.UModeler.StopModelerBuild/BuildShelfArg>::GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Enumerator_t3914DB61CC010B7C53852DA850D379468E909002 List_1_GetEnumerator_m9744D5CAF082A1770E6BE24FB6EAF9C203C8708F_gshared (List_1_t2FB40158AFCD69E77037C532086C70828AC06862* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1/Enumerator<tripolygon.UModeler.StopModelerBuild/BuildShelfArg>::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enumerator_Dispose_mE7B3A8C68D42EBA87037FE92CF1572658798EE8D_gshared (Enumerator_t3914DB61CC010B7C53852DA850D379468E909002* __this, const RuntimeMethod* method) ;
// T System.Collections.Generic.List`1/Enumerator<tripolygon.UModeler.StopModelerBuild/BuildShelfArg>::get_Current()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR BuildShelfArg_t2137F4C02DE10B54ED77462BCB4FC85BA4B81BCA Enumerator_get_Current_mE14BCB04881066336130EC2A6DD93CE1405342A3_gshared_inline (Enumerator_t3914DB61CC010B7C53852DA850D379468E909002* __this, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.List`1/Enumerator<tripolygon.UModeler.StopModelerBuild/BuildShelfArg>::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Enumerator_MoveNext_mFC98FC5250B2A826D366A6F67C6FB95809892167_gshared (Enumerator_t3914DB61CC010B7C53852DA850D379468E909002* __this, const RuntimeMethod* method) ;
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<System.Int32>::GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Enumerator_t9DBCD072C72E44AB8959D9884EF7F528028F20EC List_1_GetEnumerator_mCADB185AB483C855873FCD0B1D5AAC909ED7F7BD_gshared (List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1/Enumerator<System.Int32>::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enumerator_Dispose_m38A9F15FDBDCDFB9590C961110777EE028621923_gshared (Enumerator_t9DBCD072C72E44AB8959D9884EF7F528028F20EC* __this, const RuntimeMethod* method) ;
// T System.Collections.Generic.List`1/Enumerator<System.Int32>::get_Current()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Enumerator_get_Current_mB49912FF111A954F2C326BF4FA29A53C1027187B_gshared_inline (Enumerator_t9DBCD072C72E44AB8959D9884EF7F528028F20EC* __this, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.List`1/Enumerator<System.Int32>::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Enumerator_MoveNext_m39C71A39758E2B4A04F44F20FCEFAF7009D5F312_gshared (Enumerator_t9DBCD072C72E44AB8959D9884EF7F528028F20EC* __this, const RuntimeMethod* method) ;
// T System.Collections.Generic.List`1<UnityEngine.Vector2>::get_Item(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 List_1_get_Item_m1F8E226CAD72B83C5E75BB66B43025247806B543_gshared (List_1_t8F3790B7F8C471B3A1336522C7415FB0AC36D47B* __this, int32_t ___index0, const RuntimeMethod* method) ;
// System.Int32 System.Collections.Generic.List`1<UnityEngine.Vector2>::get_Count()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t List_1_get_Count_mF1C0C56457C655BDFFC6EE5B46FAD8BAEC1F588B_gshared_inline (List_1_t8F3790B7F8C471B3A1336522C7415FB0AC36D47B* __this, const RuntimeMethod* method) ;
// T System.Collections.Generic.List`1<UnityEngine.Vector3>::get_Item(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 List_1_get_Item_m8F2E15FC96DA75186C51228128A0660709E4E810_gshared (List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B* __this, int32_t ___index0, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.Object>::Add(T)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Add_mEBCF994CC3814631017F46A387B1A192ED6C85C7_gshared_inline (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, RuntimeObject* ___item0, const RuntimeMethod* method) ;
// System.Int32 System.Collections.Generic.List`1<UnityEngine.Vector3>::get_Count()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t List_1_get_Count_m46EEFFA770BE665EA0CB3A5332E941DA4B3C1D37_gshared_inline (List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.Object>::Insert(System.Int32,T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_Insert_m9C9559248941FED50561DB029D55DF08DEF3B094_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, int32_t ___index0, RuntimeObject* ___item1, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<UnityEngine.Vector2>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__ctor_m88C4BD8AC607DB3585552068F4DC437406358D5F_gshared (List_1_t8F3790B7F8C471B3A1336522C7415FB0AC36D47B* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<UnityEngine.Vector2>::Add(T)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Add_mB5FDF069171C4CB1778BFAC3B9015A22EA7DFBCD_gshared_inline (List_1_t8F3790B7F8C471B3A1336522C7415FB0AC36D47B* __this, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___item0, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<UnityEngine.Vector2>::Reverse()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_Reverse_m9D5D6524E78A4D1590BACA474B193AC2E0DA93EF_gshared (List_1_t8F3790B7F8C471B3A1336522C7415FB0AC36D47B* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.SortedDictionary`2<System.Single,System.Int32>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SortedDictionary_2__ctor_m518A3BFE4904E6F4411A44950B724F3089818BAD_gshared (SortedDictionary_2_t4C2768740A7E0300B8278590463E71E6C439B5F2* __this, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.SortedDictionary`2<System.Single,System.Int32>::ContainsKey(TKey)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool SortedDictionary_2_ContainsKey_mD4CCA93B685E372DFBD7A21DAB034A4FC2C2C8EE_gshared (SortedDictionary_2_t4C2768740A7E0300B8278590463E71E6C439B5F2* __this, float ___key0, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.SortedDictionary`2<System.Single,System.Int32>::Add(TKey,TValue)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SortedDictionary_2_Add_mF9B1C9C48B997CF0B490926FC6C5338959D1960C_gshared (SortedDictionary_2_t4C2768740A7E0300B8278590463E71E6C439B5F2* __this, float ___key0, int32_t ___value1, const RuntimeMethod* method) ;
// System.Collections.Generic.SortedDictionary`2/Enumerator<TKey,TValue> System.Collections.Generic.SortedDictionary`2<System.Single,System.Int32>::GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Enumerator_t422FE7CC7AC06DA0CD21EF1FC7B746F9C4C7BEF2 SortedDictionary_2_GetEnumerator_m52D1F7C3A27183B19E70A3A6563A996FF34CAEA6_gshared (SortedDictionary_2_t4C2768740A7E0300B8278590463E71E6C439B5F2* __this, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.SortedDictionary`2/Enumerator<System.Single,System.Int32>::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Enumerator_MoveNext_mB97D38C9C1685FC126DFDF90CEC4756431EEED73_gshared (Enumerator_t422FE7CC7AC06DA0CD21EF1FC7B746F9C4C7BEF2* __this, const RuntimeMethod* method) ;
// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.SortedDictionary`2/Enumerator<System.Single,System.Int32>::get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR KeyValuePair_2_tF9681614985AA4D11569AFA8747D722D1447A120 Enumerator_get_Current_mB94096C5ED127D93564C02549007FEA63482CE38_gshared (Enumerator_t422FE7CC7AC06DA0CD21EF1FC7B746F9C4C7BEF2* __this, const RuntimeMethod* method) ;
// TValue System.Collections.Generic.KeyValuePair`2<System.Single,System.Int32>::get_Value()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t KeyValuePair_2_get_Value_mAB1FC5832CB06EEF53C3A3E9C2A67258EAC6048E_gshared_inline (KeyValuePair_2_tF9681614985AA4D11569AFA8747D722D1447A120* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.Single>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__ctor_mC29D3D824786832A31096310B3B3016B8B42B802_gshared (List_1_t0D1C46FD8DDDE974D93CA4F3474EEC05AF950918* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.Single>::Add(T)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Add_m2F86E252D086E288E02FA1C830B7E86C0A431E51_gshared_inline (List_1_t0D1C46FD8DDDE974D93CA4F3474EEC05AF950918* __this, float ___item0, const RuntimeMethod* method) ;
// T System.Collections.Generic.List`1<tripolygon.UModeler.Util/ClippingVertex>::get_Item(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ClippingVertex_tF5DB1E0668D7F574FF74C67BC6C91561FAF13E30 List_1_get_Item_mE2354D72C00BBCA64441D77732E04E9E56069425_gshared (List_1_tD13CD97762EDE4928859DDC2999E6E2175B20A11* __this, int32_t ___index0, const RuntimeMethod* method) ;
// System.Int32 System.Collections.Generic.List`1<tripolygon.UModeler.Util/ClippingVertex>::get_Count()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t List_1_get_Count_m39BE269C49EF164BBA706DF15603809754CCD1F9_gshared_inline (List_1_tD13CD97762EDE4928859DDC2999E6E2175B20A11* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<tripolygon.UModeler.Util/ClippingVertex>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__ctor_m55E32E673C1206F631655902E4BA7FB92ED22DC8_gshared (List_1_tD13CD97762EDE4928859DDC2999E6E2175B20A11* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<tripolygon.UModeler.Util/ClippingVertex>::Add(T)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Add_mFB89FD2BEC65E65F1A68C47CBA4E02B6E8449495_gshared_inline (List_1_tD13CD97762EDE4928859DDC2999E6E2175B20A11* __this, ClippingVertex_tF5DB1E0668D7F574FF74C67BC6C91561FAF13E30 ___item0, const RuntimeMethod* method) ;

// System.Void tripolygon.UModeler.Line2D::.ctor(UnityEngine.Vector2,UnityEngine.Vector2)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Line2D__ctor_mCBAC2475401718A2EC118AA7818CBCBBA238490B (Line2D_tAC46D1228FCBF2872CC1DF7DA8C02274FDE4A750* __this, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___v00, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___v11, const RuntimeMethod* method) ;
// System.Void tripolygon.UModeler.HotspotLayout/TransHotspotData::PreProcess(UnityEngine.Vector2[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TransHotspotData_PreProcess_m417B10EE8CA088664296F15125A09EF4B7E54531 (TransHotspotData_t2A3F93D286B0BB07C96EDBD07629DDA4CA72AFBA* __this, Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* ___triangle0, const RuntimeMethod* method) ;
// UnityEngine.Vector2 UnityEngine.Vector2::op_Subtraction(UnityEngine.Vector2,UnityEngine.Vector2)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 Vector2_op_Subtraction_m44475FCDAD2DA2F98D78A6625EC2DCDFE8803837_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___a0, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___b1, const RuntimeMethod* method) ;
// UnityEngine.Vector2 UnityEngine.Vector2::get_normalized()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 Vector2_get_normalized_mF6722883AEFB5027690A778DF8ACC20F0FA65297_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* __this, const RuntimeMethod* method) ;
// tripolygon.UModeler.HitResult tripolygon.UModeler.Line2D::RayHit(UnityEngine.Vector2,UnityEngine.Vector2)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR HitResult_t1C6A2CA0F36DF67C6BF66A35ECC5D1F9BA600AEA* Line2D_RayHit_mECB8FDFB32AC50483ECB09E4AA6A5CD24D084DF0 (Line2D_tAC46D1228FCBF2872CC1DF7DA8C02274FDE4A750* __this, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___origin0, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___direction1, const RuntimeMethod* method) ;
// System.Single UnityEngine.Vector2::get_magnitude()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Vector2_get_magnitude_m5C59B4056420AEFDB291AD0914A3F675330A75CE_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Vector2::.ctor(System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* __this, float ___x0, float ___y1, const RuntimeMethod* method) ;
// UnityEngine.Vector2 tripolygon.UModeler.HotspotLayout/TransHotspotData::GetUV(UnityEngine.Vector2)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 TransHotspotData_GetUV_mEF1FD33A3262C35B1C5081746AA5C8A00A42399A (TransHotspotData_t2A3F93D286B0BB07C96EDBD07629DDA4CA72AFBA* __this, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___pos0, const RuntimeMethod* method) ;
// UnityEngine.Vector2 UnityEngine.Vector2::get_zero()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 Vector2_get_zero_m32506C40EC2EE7D5D4410BF40D3EE683A3D5F32C_inline (const RuntimeMethod* method) ;
// UnityEngine.Vector2 UnityEngine.Vector2::op_Multiply(UnityEngine.Vector2,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 Vector2_op_Multiply_m2D984B613020089BF5165BA4CA10988E2DC771FE_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___a0, float ___d1, const RuntimeMethod* method) ;
// UnityEngine.Vector2 UnityEngine.Vector2::op_Addition(UnityEngine.Vector2,UnityEngine.Vector2)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 Vector2_op_Addition_m8136742CE6EE33BA4EB81C5F584678455917D2AE_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___a0, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___b1, const RuntimeMethod* method) ;
// UnityEngine.Vector2 tripolygon.UModeler.HotspotLayout/TransHotspotData::GetPos(UnityEngine.Vector2)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 TransHotspotData_GetPos_mF0BF832FF1F8F4CD93F1B7C404E1884DACD2C70E (TransHotspotData_t2A3F93D286B0BB07C96EDBD07629DDA4CA72AFBA* __this, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___uv0, const RuntimeMethod* method) ;
// System.Void System.Object::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2 (RuntimeObject* __this, const RuntimeMethod* method) ;
// TValue System.Collections.Generic.KeyValuePair`2<tripolygon.UModeler.Hotspot,System.Single>::get_Value()
inline float KeyValuePair_2_get_Value_m6FA5BE7064800329CEC3EBCA8A7CB46C6FA7930A_inline (KeyValuePair_2_tABDAC15331E8BE8B1534467FC11E1A59441A1865* __this, const RuntimeMethod* method)
{
	return ((  float (*) (KeyValuePair_2_tABDAC15331E8BE8B1534467FC11E1A59441A1865*, const RuntimeMethod*))KeyValuePair_2_get_Value_mA5BE7C11B215197C303FBF99576CBDE919413929_gshared_inline)(__this, method);
}
// System.Void tripolygon.UModeler.HotspotLayout/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_m2C4A90CCCCB9010B613255724074B165263D771A (U3CU3Ec_t5EEE260C4A12263EE0C77B5F2414795F3DBA94ED* __this, const RuntimeMethod* method) ;
// TKey System.Collections.Generic.KeyValuePair`2<tripolygon.UModeler.Hotspot,System.Single>::get_Key()
inline Hotspot_tEB2930836E4965CBF2CB96A6996B6F302DF108B7* KeyValuePair_2_get_Key_mA978A749A9D3816BACF46036CAA0B69DC5DBE53F_inline (KeyValuePair_2_tABDAC15331E8BE8B1534467FC11E1A59441A1865* __this, const RuntimeMethod* method)
{
	return ((  Hotspot_tEB2930836E4965CBF2CB96A6996B6F302DF108B7* (*) (KeyValuePair_2_tABDAC15331E8BE8B1534467FC11E1A59441A1865*, const RuntimeMethod*))KeyValuePair_2_get_Key_m0B6F02450AE5541F7814A6C8C48B92F6D992762E_gshared_inline)(__this, method);
}
// System.UInt64 tripolygon.UModeler.UModeler::CollectLatestID()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint64_t UModeler_CollectLatestID_m93A909453B30FF2AE54ACFFBD5F4AE432C9A2D79 (UModeler_tF29E9161DE3331F85E86886244AC15FEC514C577* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,UnityEngine.Mesh>::.ctor()
inline void Dictionary_2__ctor_mB2AF39366CCF9A9E898D6D5400BEDF4F6E1BB646 (Dictionary_2_t6D39865003E656D60A88B22671895E4EA1590710* __this, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t6D39865003E656D60A88B22671895E4EA1590710*, const RuntimeMethod*))Dictionary_2__ctor_m92E9AB321FBD7147CA109C822D99C8B0610C27B7_gshared)(__this, method);
}
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,UnityEngine.Mesh>::Clear()
inline void Dictionary_2_Clear_m128E800DB0E185C5BB4ED5914C473C0C1E10F4FF (Dictionary_2_t6D39865003E656D60A88B22671895E4EA1590710* __this, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t6D39865003E656D60A88B22671895E4EA1590710*, const RuntimeMethod*))Dictionary_2_Clear_mE1EFF7C68491EE07D21EE9924475A559BF0A4773_gshared)(__this, method);
}
// System.Boolean UnityEngine.Object::op_Equality(UnityEngine.Object,UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605 (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___x0, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___y1, const RuntimeMethod* method) ;
// System.Boolean tripolygon.UModeler.UModeler::get_LockGenerateMesh()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool UModeler_get_LockGenerateMesh_m06B23EE04399CBF0018CE43C6E862A40CCDF6E21_inline (UModeler_tF29E9161DE3331F85E86886244AC15FEC514C577* __this, const RuntimeMethod* method) ;
// System.Int32 UnityEngine.Object::GetInstanceID()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Object_GetInstanceID_m554FF4073C9465F3835574CC084E68AAEEC6CC6A (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* __this, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,UnityEngine.Mesh>::ContainsKey(TKey)
inline bool Dictionary_2_ContainsKey_m21D5DD2F766D7E5C5B4E2C6EF256A761A884C1BF (Dictionary_2_t6D39865003E656D60A88B22671895E4EA1590710* __this, int32_t ___key0, const RuntimeMethod* method)
{
	return ((  bool (*) (Dictionary_2_t6D39865003E656D60A88B22671895E4EA1590710*, int32_t, const RuntimeMethod*))Dictionary_2_ContainsKey_mED5C451F158CDDD2B3F4B0720CD248DA9DB27B25_gshared)(__this, ___key0, method);
}
// TValue System.Collections.Generic.Dictionary`2<System.Int32,UnityEngine.Mesh>::get_Item(TKey)
inline Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* Dictionary_2_get_Item_m5E7AC64571E0BC7C192F651C85E5014C2ED73611 (Dictionary_2_t6D39865003E656D60A88B22671895E4EA1590710* __this, int32_t ___key0, const RuntimeMethod* method)
{
	return ((  Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* (*) (Dictionary_2_t6D39865003E656D60A88B22671895E4EA1590710*, int32_t, const RuntimeMethod*))Dictionary_2_get_Item_mC3FEA647E750C27367C990777D8890E0E712E514_gshared)(__this, ___key0, method);
}
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,UnityEngine.Mesh>::Remove(TKey)
inline bool Dictionary_2_Remove_mD4F721D02F35A2CCC78B8D5FD2962FF622CEA54F (Dictionary_2_t6D39865003E656D60A88B22671895E4EA1590710* __this, int32_t ___key0, const RuntimeMethod* method)
{
	return ((  bool (*) (Dictionary_2_t6D39865003E656D60A88B22671895E4EA1590710*, int32_t, const RuntimeMethod*))Dictionary_2_Remove_m12BAB2F82E34CAA21A7245AB61E48F106340C1A4_gshared)(__this, ___key0, method);
}
// System.Boolean UnityEngine.Object::op_Inequality(UnityEngine.Object,UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602 (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___x0, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___y1, const RuntimeMethod* method) ;
// System.Void UnityEngine.MeshFilter::set_sharedMesh(UnityEngine.Mesh)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MeshFilter_set_sharedMesh_m946F7E3F583761982642BDA4753784AF1DF6E16F (MeshFilter_t6D1CE2473A1E45AC73013400585A1163BF66B2F5* __this, Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* ___value0, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,UnityEngine.Mesh>::ContainsValue(TValue)
inline bool Dictionary_2_ContainsValue_mD78B49B88B29AD52435FBAC9B83D720AD9A79E56 (Dictionary_2_t6D39865003E656D60A88B22671895E4EA1590710* __this, Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* ___value0, const RuntimeMethod* method)
{
	return ((  bool (*) (Dictionary_2_t6D39865003E656D60A88B22671895E4EA1590710*, Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4*, const RuntimeMethod*))Dictionary_2_ContainsValue_m999D98061B8048248A312862400275D718C22535_gshared)(__this, ___value0, method);
}
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,UnityEngine.Mesh>::Add(TKey,TValue)
inline void Dictionary_2_Add_m95F3B444BCCD32EF7B74E1D23DDFDE5AC25B3CEF (Dictionary_2_t6D39865003E656D60A88B22671895E4EA1590710* __this, int32_t ___key0, Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* ___value1, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t6D39865003E656D60A88B22671895E4EA1590710*, int32_t, Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4*, const RuntimeMethod*))Dictionary_2_Add_mAF1EF7DA16BD70E252EA5C4B0F74DE519A02CBCD_gshared)(__this, ___key0, ___value1, method);
}
// System.Void tripolygon.UModeler.UModeler::ResetAssetPath()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UModeler_ResetAssetPath_mF85D6195F038F8A6498FF2B3691B3FEC41B6891C (UModeler_tF29E9161DE3331F85E86886244AC15FEC514C577* __this, const RuntimeMethod* method) ;
// System.Int32 UnityEngine.Mathf::Abs(System.Int32)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Mathf_Abs_mD945EDDEA0D62D21BFDBAB7B1C0F18DFF1CEC905_inline (int32_t ___value0, const RuntimeMethod* method) ;
// System.String System.Int32::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5 (int32_t* __this, const RuntimeMethod* method) ;
// System.String System.String::Concat(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_m9E3155FB84015C823606188F53B47CB44C444991 (String_t* ___str00, String_t* ___str11, const RuntimeMethod* method) ;
// System.Void UnityEngine.Mesh::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Mesh__ctor_m5A9AECEDDAFFD84811ED8928012BDE97A9CEBD00 (Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Object::set_name(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object_set_name_mC79E6DC8FFD72479C90F0C4CC7F42A0FEAF5AE47 (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* __this, String_t* ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Mesh::MarkDynamic()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Mesh_MarkDynamic_m718089940F240AFE625D6DC9DA4E6F20229CC322 (Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,UnityEngine.Mesh>::set_Item(TKey,TValue)
inline void Dictionary_2_set_Item_m55CEAE784C2CAC35A087DA900D0ABD474AAC6243 (Dictionary_2_t6D39865003E656D60A88B22671895E4EA1590710* __this, int32_t ___key0, Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* ___value1, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t6D39865003E656D60A88B22671895E4EA1590710*, int32_t, Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4*, const RuntimeMethod*))Dictionary_2_set_Item_m2888D71A14F2B8510102F24FEE90552E91B124C1_gshared)(__this, ___key0, ___value1, method);
}
// UnityEngine.MeshFilter tripolygon.UModeler.UModeler::get_renderableMeshFilter()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR MeshFilter_t6D1CE2473A1E45AC73013400585A1163BF66B2F5* UModeler_get_renderableMeshFilter_mC09382DC2071BB225D5687667B77401B16B5B23F (UModeler_tF29E9161DE3331F85E86886244AC15FEC514C577* __this, const RuntimeMethod* method) ;
// System.Int32 tripolygon.UModeler.Util::CountTriangle(UnityEngine.MeshFilter)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Util_CountTriangle_m31F85BDD2CE3AE040B935836DF526FDF5E98D01F (MeshFilter_t6D1CE2473A1E45AC73013400585A1163BF66B2F5* ___mf0, const RuntimeMethod* method) ;
// tripolygon.UModeler.EngineResourceManager tripolygon.UModeler.UModeler::get_engineResources()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR EngineResourceManager_tB814C237AED9E9140B8D664B9F5D3BE18965A951* UModeler_get_engineResources_m05783A7FBCD6CE7656B364D73CFD2C9D583FC181 (UModeler_tF29E9161DE3331F85E86886244AC15FEC514C577* __this, const RuntimeMethod* method) ;
// UnityEngine.Mesh tripolygon.UModeler.EngineResourceManager::get_RenderableMesh()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* EngineResourceManager_get_RenderableMesh_m511431D5A84480BC6B19F3C475926EFE5B5A1A20 (EngineResourceManager_tB814C237AED9E9140B8D664B9F5D3BE18965A951* __this, const RuntimeMethod* method) ;
// System.Int32 tripolygon.UModeler.Util::CountTriangle(UnityEngine.Mesh)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Util_CountTriangle_mD954412C2FF3C08F88D635A382826DA5B8FC175F (Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* ___mesh0, const RuntimeMethod* method) ;
// System.Void tripolygon.UModeler.ShelfHolder::.ctor(tripolygon.UModeler.EditableMesh)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ShelfHolder__ctor_mCAD01DBBEC2780D16B25E9B4034F9C88A5221ADF (ShelfHolder_tFDAAF16135FA93DB3AD68D57913C99082A757058* __this, EditableMesh_tF419912423C538859FC4EDB1F6ABD7314E01A476* ___editableMesh0, const RuntimeMethod* method) ;
// tripolygon.UModeler.EditableMesh tripolygon.UModeler.UModeler::get_editableMesh()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR EditableMesh_tF419912423C538859FC4EDB1F6ABD7314E01A476* UModeler_get_editableMesh_m61B3969B0C185AA5A9A0BAA98CDF4B54D4527776 (UModeler_tF29E9161DE3331F85E86886244AC15FEC514C577* __this, const RuntimeMethod* method) ;
// System.Void tripolygon.UModeler.EditableMesh::set_shelf(System.Int32)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void EditableMesh_set_shelf_m537118F79630165B0C68F530226AED1625A9EC21_inline (EditableMesh_tF419912423C538859FC4EDB1F6ABD7314E01A476* __this, int32_t ___value0, const RuntimeMethod* method) ;
// System.Int32 tripolygon.UModeler.EditableMesh::GetPolygonCount(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t EditableMesh_GetPolygonCount_m8E8542BEAA9C806A06A4144B5CFF409C39AC7494 (EditableMesh_tF419912423C538859FC4EDB1F6ABD7314E01A476* __this, int32_t ___inShelf0, const RuntimeMethod* method) ;
// System.Int32 System.String::get_Length()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline (String_t* __this, const RuntimeMethod* method) ;
// System.Boolean tripolygon.UModeler.EditableMesh::IsCorruptMesh()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool EditableMesh_IsCorruptMesh_m8FF39436BAA29AEC396F8725F03FBBF04260149A (EditableMesh_tF419912423C538859FC4EDB1F6ABD7314E01A476* __this, const RuntimeMethod* method) ;
// System.Boolean tripolygon.UModeler.EditableMesh::Repair()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool EditableMesh_Repair_m33E36C9C68C73C8A20073C8453593774F13E697B (EditableMesh_tF419912423C538859FC4EDB1F6ABD7314E01A476* __this, const RuntimeMethod* method) ;
// System.Boolean tripolygon.UModeler.UModeler::IsAssetPathValid()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool UModeler_IsAssetPathValid_mC134001F871B08D5653E6798EAE15EE4DC64B0CF (UModeler_tF29E9161DE3331F85E86886244AC15FEC514C577* __this, const RuntimeMethod* method) ;
// System.Int32 System.String::LastIndexOf(System.Char)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t String_LastIndexOf_m6BB3E7E1B48702D4C715FA423F8A822C053B290E (String_t* __this, Il2CppChar ___value0, const RuntimeMethod* method) ;
// System.String System.String::Remove(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Remove_m4D7A58E2124F8D0D8AE3EEDE74B6AD6A863ABA68 (String_t* __this, int32_t ___startIndex0, int32_t ___count1, const RuntimeMethod* method) ;
// System.String tripolygon.UModeler.UModeler::get_AssetFileName()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* UModeler_get_AssetFileName_m8060FCE92A71717A99F8835082C2D571A9E3A329 (UModeler_tF29E9161DE3331F85E86886244AC15FEC514C577* __this, const RuntimeMethod* method) ;
// System.Int32 System.String::IndexOf(System.Char)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t String_IndexOf_mE21E78F35EF4A7768E385A72814C88D22B689966 (String_t* __this, Il2CppChar ___value0, const RuntimeMethod* method) ;
// System.String System.String::Remove(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Remove_m8266E0BF5D8565D4CDC850F21E9178AE254C3E85 (String_t* __this, int32_t ___startIndex0, const RuntimeMethod* method) ;
// System.Void tripolygon.UModeler.EditableMesh::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EditableMesh__ctor_m4E761AC673DEA77B1C3E421931D3BA2AFDD855C1 (EditableMesh_tF419912423C538859FC4EDB1F6ABD7314E01A476* __this, const RuntimeMethod* method) ;
// T[] System.Collections.Generic.List`1<UnityEngine.Material>::ToArray()
inline MaterialU5BU5D_t2B1D11C42DB07A4400C0535F92DBB87A2E346D3D* List_1_ToArray_m2D61F9E785B53324A0EC7DCA2B58DD6F959A89F6 (List_1_t386E09F4F22DDE4D2AC41A8567FFF283C254537B* __this, const RuntimeMethod* method)
{
	return ((  MaterialU5BU5D_t2B1D11C42DB07A4400C0535F92DBB87A2E346D3D* (*) (List_1_t386E09F4F22DDE4D2AC41A8567FFF283C254537B*, const RuntimeMethod*))List_1_ToArray_mD7E4F8E7C11C3C67CB5739FCC0A6E86106A6291F_gshared)(__this, method);
}
// System.Void tripolygon.UModeler.UModeler/ModelerDelegate::Invoke(tripolygon.UModeler.UModeler)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ModelerDelegate_Invoke_mDC38E9A49BD3FA13238128AB62B526A823CEADC1_inline (ModelerDelegate_t3E84323788B9A588C192E5D33F6809AAB16B2707* __this, UModeler_tF29E9161DE3331F85E86886244AC15FEC514C577* ___modeler0, const RuntimeMethod* method) ;
// System.Void tripolygon.UModeler.ActiveModelerHolder::.ctor(tripolygon.UModeler.UModeler)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ActiveModelerHolder__ctor_mA3F4D58A020E8413BED8A3C96B2A5687862E1816 (ActiveModelerHolder_t1B23CBE2E0ECE532A1899BC6BBE8C3F8EE3F1AE7* __this, UModeler_tF29E9161DE3331F85E86886244AC15FEC514C577* ___modeler0, const RuntimeMethod* method) ;
// tripolygon.UModeler.UVIslandManager tripolygon.UModeler.EditableMesh::get_uvIslandManager()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR UVIslandManager_tFDD6F91ECB27D6846C79AD6B3B87F4C06BB002E6* EditableMesh_get_uvIslandManager_mDF7A5D459F7BBB41F117BEBB2E712170D4B46F7F_inline (EditableMesh_tF419912423C538859FC4EDB1F6ABD7314E01A476* __this, const RuntimeMethod* method) ;
// System.Void tripolygon.UModeler.UVIslandManager::Refresh()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UVIslandManager_Refresh_m1A91C2C0B745C69EDBCD573D460CABA0407111DF (UVIslandManager_tFDD6F91ECB27D6846C79AD6B3B87F4C06BB002E6* __this, const RuntimeMethod* method) ;
// tripolygon.UModeler.SmoothingGroupManager tripolygon.UModeler.EditableMesh::get_smoothingGroups()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR SmoothingGroupManager_t1D2F4A2DF787BB531A1358F88CFC80C4B3E0C037* EditableMesh_get_smoothingGroups_m5B31EF008E5ED618E659388C2EAF6FFED6BB5EF6_inline (EditableMesh_tF419912423C538859FC4EDB1F6ABD7314E01A476* __this, const RuntimeMethod* method) ;
// System.Void tripolygon.UModeler.SmoothingGroupManager::Refresh()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SmoothingGroupManager_Refresh_m5D2329A4ED4D1CD8F65442F11653A82BBB4A35A3 (SmoothingGroupManager_t1D2F4A2DF787BB531A1358F88CFC80C4B3E0C037* __this, const RuntimeMethod* method) ;
// System.Boolean tripolygon.UModeler.StopModelerBuild::CheckBuild(System.Int32,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool StopModelerBuild_CheckBuild_mF23F61D8E0022BC759FA6AFCD77A156FD7BE0AD2 (int32_t ___shelf0, bool ___updateToGraphicsAPIImmediately1, const RuntimeMethod* method) ;
// System.Void tripolygon.UModeler.UModeler::RefreshResources()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UModeler_RefreshResources_mA1A6E90445A137DB26F717E2D010FFEC8F5A2615 (UModeler_tF29E9161DE3331F85E86886244AC15FEC514C577* __this, const RuntimeMethod* method) ;
// System.Void tripolygon.UModeler.UModeler::BuildEdMesh(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UModeler_BuildEdMesh_mD94F8A88186AEF4A5D86C4D9B2322A93F93E3728 (UModeler_tF29E9161DE3331F85E86886244AC15FEC514C577* __this, int32_t ___shelf0, const RuntimeMethod* method) ;
// UnityEngine.Mesh UnityEngine.MeshFilter::get_sharedMesh()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* MeshFilter_get_sharedMesh_mE4ED3E7E31C1DE5097E4980DA996E620F7D7CB8C (MeshFilter_t6D1CE2473A1E45AC73013400585A1163BF66B2F5* __this, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Mesh::get_isReadable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Mesh_get_isReadable_m3309900DB9B66BD321128839E6801722D15CD1E0 (Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* __this, const RuntimeMethod* method) ;
// T UnityEngine.Component::GetComponent<UnityEngine.MeshCollider>()
inline MeshCollider_tB525E4DDE383252364ED0BDD32CF2B53914EE455* Component_GetComponent_TisMeshCollider_tB525E4DDE383252364ED0BDD32CF2B53914EE455_mFC0F02CCD26A6A186031CF43E92D7B60EA1CC370 (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method)
{
	return ((  MeshCollider_tB525E4DDE383252364ED0BDD32CF2B53914EE455* (*) (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m7181F81CAEC2CF53F5D2BC79B7425C16E1F80D33_gshared)(__this, method);
}
// UnityEngine.Mesh UnityEngine.MeshCollider::get_sharedMesh()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* MeshCollider_get_sharedMesh_mFB4B8534501C29930D2D3710D6D82E60093FA21E (MeshCollider_tB525E4DDE383252364ED0BDD32CF2B53914EE455* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.MeshCollider::set_sharedMesh(UnityEngine.Mesh)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MeshCollider_set_sharedMesh_m05F87B9AC04139285EBBCC159F77B51C6940E79C (MeshCollider_tB525E4DDE383252364ED0BDD32CF2B53914EE455* __this, Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Mesh::UploadMeshData(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Mesh_UploadMeshData_mE4C94F263DAA8CAC1641FE137E1CE7D3F09396EB (Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* __this, bool ___markNoLongerReadable0, const RuntimeMethod* method) ;
// System.Boolean tripolygon.UModeler.StopModelerBuild::CheckBuildEdMesh(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool StopModelerBuild_CheckBuildEdMesh_m22367E5D35222E893C4B2B923CF169D6E4D497C9 (int32_t ___shelf0, const RuntimeMethod* method) ;
// System.Void tripolygon.UModeler.Builder::Build(tripolygon.UModeler.UModeler,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Builder_Build_m0AF6E1EA0C1E4384E7B6A2DB8F9E3EF808A3A591 (UModeler_tF29E9161DE3331F85E86886244AC15FEC514C577* ___modeler0, int32_t ___shelf1, const RuntimeMethod* method) ;
// System.Void tripolygon.UModeler.UModeler::InvalideCounting()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UModeler_InvalideCounting_m8AE4EF1365CD4C5755CCFC1CB3DA26142D2B2047 (UModeler_tF29E9161DE3331F85E86886244AC15FEC514C577* __this, const RuntimeMethod* method) ;
// System.Void tripolygon.UModeler.EditableMesh::BeforeSerialize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EditableMesh_BeforeSerialize_mF404E78EC03A1741662B44B433538F0A425F9A84 (EditableMesh_tF419912423C538859FC4EDB1F6ABD7314E01A476* __this, const RuntimeMethod* method) ;
// System.Void tripolygon.UModeler.EditableMesh::AfterDeserialize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EditableMesh_AfterDeserialize_mF3F24A4C1ECEF1971077EB14FA7B4985B4CC9AE9 (EditableMesh_tF419912423C538859FC4EDB1F6ABD7314E01A476* __this, const RuntimeMethod* method) ;
// System.Void tripolygon.UModeler.EditableMesh::InvalidateCache()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EditableMesh_InvalidateCache_m186322226E114D4051F4193BF56C42B43ADE7B58 (EditableMesh_tF419912423C538859FC4EDB1F6ABD7314E01A476* __this, const RuntimeMethod* method) ;
// System.Void tripolygon.UModeler.EditableMesh::InvalidateVertexManager()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EditableMesh_InvalidateVertexManager_mD37A395193FE7D425DF8B6076D1FDB8EC04ABA4D (EditableMesh_tF419912423C538859FC4EDB1F6ABD7314E01A476* __this, const RuntimeMethod* method) ;
// System.Void tripolygon.UModeler.UModeler::UpdateLatestID(tripolygon.UModeler.UModeler)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UModeler_UpdateLatestID_mA6F9D5CE423D3776B83069EE902D85B1956E6043 (UModeler_tF29E9161DE3331F85E86886244AC15FEC514C577* ___modeler0, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Application::get_isPlaying()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Application_get_isPlaying_m25B0ABDFEF54F5370CD3F263A813540843D00F34 (const RuntimeMethod* method) ;
// T UnityEngine.Component::GetComponent<UnityEngine.Renderer>()
inline Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF* Component_GetComponent_TisRenderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF_mC91ACC92AD57CA6CA00991DAF1DB3830BCE07AF8 (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method)
{
	return ((  Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF* (*) (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m7181F81CAEC2CF53F5D2BC79B7425C16E1F80D33_gshared)(__this, method);
}
// System.Void UnityEngine.Renderer::set_enabled(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Renderer_set_enabled_m015E6D7B825528A31182F267234CC6A925F71DA8 (Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF* __this, bool ___value0, const RuntimeMethod* method) ;
// System.UInt64 tripolygon.UModeler.EditableMesh::CollectLatestID()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint64_t EditableMesh_CollectLatestID_m424F789134F7146B87613E12DFAC05F8950CD869 (EditableMesh_tF419912423C538859FC4EDB1F6ABD7314E01A476* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.UInt64>::.ctor()
inline void List_1__ctor_m29BEDE660794161B463CE980419121848921671C (List_1_tB88E7361EE76DFB3EBB7FCD60CC59ACC3E48C284* __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_tB88E7361EE76DFB3EBB7FCD60CC59ACC3E48C284*, const RuntimeMethod*))List_1__ctor_m29BEDE660794161B463CE980419121848921671C_gshared)(__this, method);
}
// System.Void tripolygon.UModeler.EditableMesh::CheckInstanceID(System.Collections.Generic.List`1<System.UInt64>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EditableMesh_CheckInstanceID_m55D17D0C26C6DC3A2B7009D9244B7382FE64A21D (EditableMesh_tF419912423C538859FC4EDB1F6ABD7314E01A476* __this, List_1_tB88E7361EE76DFB3EBB7FCD60CC59ACC3E48C284* ___instanceIDs0, const RuntimeMethod* method) ;
// UnityEngine.Camera UnityEngine.Camera::get_current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* Camera_get_current_m25217A02CB09E3BD50E3E0327879E870AD58C6C3 (const RuntimeMethod* method) ;
// System.Collections.Generic.List`1<UnityEngine.Material> tripolygon.UModeler.EngineResourceManager::get_RenderableMaterials()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR List_1_t386E09F4F22DDE4D2AC41A8567FFF283C254537B* EngineResourceManager_get_RenderableMaterials_mB75F05A29226B0F7B93BCBF3B77A303134E148D1_inline (EngineResourceManager_tB814C237AED9E9140B8D664B9F5D3BE18965A951* __this, const RuntimeMethod* method) ;
// System.Int32 System.Collections.Generic.List`1<UnityEngine.Material>::get_Count()
inline int32_t List_1_get_Count_m48BBB83C5F748E6E6FF0731C3682092DEA6A7173_inline (List_1_t386E09F4F22DDE4D2AC41A8567FFF283C254537B* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (List_1_t386E09F4F22DDE4D2AC41A8567FFF283C254537B*, const RuntimeMethod*))List_1_get_Count_m4407E4C389F22B8CEC282C15D56516658746C383_gshared_inline)(__this, method);
}
// System.String UnityEngine.Object::get_name()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Object_get_name_mAC2F6B897CF1303BA4249B4CB55271AFACBB6392 (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* __this, const RuntimeMethod* method) ;
// System.Boolean System.String::op_Inequality(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_op_Inequality_m8C940F3CFC42866709D7CA931B3D77B4BE94BCB6 (String_t* ___a0, String_t* ___b1, const RuntimeMethod* method) ;
// System.UInt32 UnityEngine.Mesh::GetIndexCount(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t Mesh_GetIndexCount_m8F6E3C336023DFD649715A2F9DAAFD83E25ED366 (Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* __this, int32_t ___submesh0, const RuntimeMethod* method) ;
// UnityEngine.Matrix4x4 tripolygon.UModeler.UModeler::get_worldTM()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 UModeler_get_worldTM_mDC2A444D24B9C454511EFAA167A70D0A3829B323 (UModeler_tF29E9161DE3331F85E86886244AC15FEC514C577* __this, const RuntimeMethod* method) ;
// T System.Collections.Generic.List`1<UnityEngine.Material>::get_Item(System.Int32)
inline Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* List_1_get_Item_m70F5CFC2DEA9332B78C5ADC0EE1CE1B7465B1456 (List_1_t386E09F4F22DDE4D2AC41A8567FFF283C254537B* __this, int32_t ___index0, const RuntimeMethod* method)
{
	return ((  Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* (*) (List_1_t386E09F4F22DDE4D2AC41A8567FFF283C254537B*, int32_t, const RuntimeMethod*))List_1_get_Item_m33561245D64798C2AB07584C0EC4F240E4839A38_gshared)(__this, ___index0, method);
}
// System.Void UnityEngine.Graphics::DrawMesh(UnityEngine.Mesh,UnityEngine.Matrix4x4,UnityEngine.Material,System.Int32,UnityEngine.Camera,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Graphics_DrawMesh_mF8680B54DC948581F29D6B3E75008FF9612B4930 (Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* ___mesh0, Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 ___matrix1, Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___material2, int32_t ___layer3, Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* ___camera4, int32_t ___submeshIndex5, const RuntimeMethod* method) ;
// System.Int32 UnityEngine.Mesh::get_subMeshCount()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Mesh_get_subMeshCount_mC0141293D0F339D8D721CCA2612B32E6FD7E3F8B (Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<UnityEngine.Material>::Clear()
inline void List_1_Clear_mB542E879C436E98D901D3068C891582A25F85711_inline (List_1_t386E09F4F22DDE4D2AC41A8567FFF283C254537B* __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_t386E09F4F22DDE4D2AC41A8567FFF283C254537B*, const RuntimeMethod*))List_1_Clear_m16C1F2C61FED5955F10EB36BC1CB2DF34B128994_gshared_inline)(__this, method);
}
// System.Void System.Collections.Generic.List`1<UnityEngine.Material>::AddRange(System.Collections.Generic.IEnumerable`1<T>)
inline void List_1_AddRange_mACF0CBFB5107412F825BB12F5FC93699031073AA (List_1_t386E09F4F22DDE4D2AC41A8567FFF283C254537B* __this, RuntimeObject* ___collection0, const RuntimeMethod* method)
{
	((  void (*) (List_1_t386E09F4F22DDE4D2AC41A8567FFF283C254537B*, RuntimeObject*, const RuntimeMethod*))List_1_AddRange_m1F76B300133150E6046C5FED00E88B5DE0A02E17_gshared)(__this, ___collection0, method);
}
// UnityEngine.Transform UnityEngine.Component::get_transform()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371 (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method) ;
// UnityEngine.Matrix4x4 UnityEngine.Transform::get_localToWorldMatrix()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 Transform_get_localToWorldMatrix_m5D35188766856338DD21DE756F42277C21719E6D (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, const RuntimeMethod* method) ;
// UnityEngine.Matrix4x4 UnityEngine.Transform::get_worldToLocalMatrix()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 Transform_get_worldToLocalMatrix_mB633C122A01BCE8E51B10B8B8CB95F580750B3F1 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, const RuntimeMethod* method) ;
// UnityEngine.GameObject UnityEngine.Component::get_gameObject()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method) ;
// System.Void tripolygon.UModeler.EngineResourceManager::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EngineResourceManager__ctor_mC75ACA770653EDA61FB699FB3CA6DDAFD68B685C (EngineResourceManager_tB814C237AED9E9140B8D664B9F5D3BE18965A951* __this, const RuntimeMethod* method) ;
// System.Void tripolygon.UModeler.EngineResourceManager::Init()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EngineResourceManager_Init_m9AB9E965A1606AA5C510C8F3189BFC991D64BB58 (EngineResourceManager_tB814C237AED9E9140B8D664B9F5D3BE18965A951* __this, const RuntimeMethod* method) ;
// T UnityEngine.GameObject::GetComponent<UnityEngine.MeshFilter>()
inline MeshFilter_t6D1CE2473A1E45AC73013400585A1163BF66B2F5* GameObject_GetComponent_TisMeshFilter_t6D1CE2473A1E45AC73013400585A1163BF66B2F5_mDF6525BCE37B444313BE0AA2305BDF4EB8B92FE8 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method)
{
	return ((  MeshFilter_t6D1CE2473A1E45AC73013400585A1163BF66B2F5* (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_m6EAED4AA356F0F48288F67899E5958792395563B_gshared)(__this, method);
}
// System.Void UnityEngine.Debug::LogError(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_LogError_mB00B2B4468EF3CAF041B038D840820FB84C924B2 (RuntimeObject* ___message0, const RuntimeMethod* method) ;
// T UnityEngine.GameObject::AddComponent<UnityEngine.MeshFilter>()
inline MeshFilter_t6D1CE2473A1E45AC73013400585A1163BF66B2F5* GameObject_AddComponent_TisMeshFilter_t6D1CE2473A1E45AC73013400585A1163BF66B2F5_mEAB8177A64DF1A50BB7996ACEEEADCD65358AC94 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method)
{
	return ((  MeshFilter_t6D1CE2473A1E45AC73013400585A1163BF66B2F5* (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, const RuntimeMethod*))GameObject_AddComponent_TisRuntimeObject_m69B93700FACCF372F5753371C6E8FB780800B824_gshared)(__this, method);
}
// System.Void UnityEngine.Object::set_hideFlags(UnityEngine.HideFlags)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object_set_hideFlags_mACB8BFC903FB3B01BBD427753E791BF28B5E33D4 (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* __this, int32_t ___value0, const RuntimeMethod* method) ;
// System.Boolean tripolygon.UModeler.UModeler::CheckMesh()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool UModeler_CheckMesh_mDEB1A16EE52D9574760A37557EE2C35BA090F56F (UModeler_tF29E9161DE3331F85E86886244AC15FEC514C577* __this, const RuntimeMethod* method) ;
// UnityEngine.Mesh tripolygon.UModeler.UModeler::GenerateMesh()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* UModeler_GenerateMesh_mB474AC636ACBC90E91807EDAE98C2E69A6A670AD (UModeler_tF29E9161DE3331F85E86886244AC15FEC514C577* __this, const RuntimeMethod* method) ;
// System.Void tripolygon.UModeler.UModeler::Build(System.Int32,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UModeler_Build_m631EF070C206EFDCDC5892F43BDFA2BB3BE72943 (UModeler_tF29E9161DE3331F85E86886244AC15FEC514C577* __this, int32_t ___shelf0, bool ___updateToGraphicsAPIImmediately1, const RuntimeMethod* method) ;
// System.Void tripolygon.UModeler.UModeler::UpdateMeshContainer()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UModeler_UpdateMeshContainer_mC751BD368FA9BFB1A7FF94E8D137F9A7B7EACDC7 (UModeler_tF29E9161DE3331F85E86886244AC15FEC514C577* __this, const RuntimeMethod* method) ;
// T UnityEngine.GameObject::GetComponent<UnityEngine.MeshRenderer>()
inline MeshRenderer_t4B7747212F0B88244BB7790C61AE124BFC15BAAE* GameObject_GetComponent_TisMeshRenderer_t4B7747212F0B88244BB7790C61AE124BFC15BAAE_m7FF948365C38BC39333D82B235A7C4EAD219960D (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method)
{
	return ((  MeshRenderer_t4B7747212F0B88244BB7790C61AE124BFC15BAAE* (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_m6EAED4AA356F0F48288F67899E5958792395563B_gshared)(__this, method);
}
// T UnityEngine.GameObject::AddComponent<UnityEngine.MeshRenderer>()
inline MeshRenderer_t4B7747212F0B88244BB7790C61AE124BFC15BAAE* GameObject_AddComponent_TisMeshRenderer_t4B7747212F0B88244BB7790C61AE124BFC15BAAE_mCDD3E77673305199F52C772AE8C7952F3864740D (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method)
{
	return ((  MeshRenderer_t4B7747212F0B88244BB7790C61AE124BFC15BAAE* (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, const RuntimeMethod*))GameObject_AddComponent_TisRuntimeObject_m69B93700FACCF372F5753371C6E8FB780800B824_gshared)(__this, method);
}
// System.Void UnityEngine.Renderer::set_sortingOrder(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Renderer_set_sortingOrder_m4C67F002AD68CA0D55D20D6B78CDED3DB24467DA (Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF* __this, int32_t ___value0, const RuntimeMethod* method) ;
// System.Void tripolygon.UModeler.UModeler::CreateMeshFilter()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UModeler_CreateMeshFilter_mFD050A12989E4918784C4378D3DAA9D800B7E6B9 (UModeler_tF29E9161DE3331F85E86886244AC15FEC514C577* __this, const RuntimeMethod* method) ;
// System.Void tripolygon.UModeler.UModeler::CreateMeshRenderer()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UModeler_CreateMeshRenderer_m8BA1A34E7C629388A876913DC21629A650B10D63 (UModeler_tF29E9161DE3331F85E86886244AC15FEC514C577* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<UnityEngine.Material>::.ctor()
inline void List_1__ctor_m38500C20418699AEC04B1946434E06EC96FB4B1C (List_1_t386E09F4F22DDE4D2AC41A8567FFF283C254537B* __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_t386E09F4F22DDE4D2AC41A8567FFF283C254537B*, const RuntimeMethod*))List_1__ctor_m7F078BB342729BDF11327FD89D7872265328F690_gshared)(__this, method);
}
// System.Void UnityEngine.MonoBehaviour::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E (MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71* __this, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.List`1<tripolygon.UModeler.StopModelerBuild/BuildShelfArg>::Contains(T)
inline bool List_1_Contains_m041392123604C80BB0821138BB776371E95EB79B (List_1_t2FB40158AFCD69E77037C532086C70828AC06862* __this, BuildShelfArg_t2137F4C02DE10B54ED77462BCB4FC85BA4B81BCA ___item0, const RuntimeMethod* method)
{
	return ((  bool (*) (List_1_t2FB40158AFCD69E77037C532086C70828AC06862*, BuildShelfArg_t2137F4C02DE10B54ED77462BCB4FC85BA4B81BCA, const RuntimeMethod*))List_1_Contains_m041392123604C80BB0821138BB776371E95EB79B_gshared)(__this, ___item0, method);
}
// System.Void System.Collections.Generic.List`1<tripolygon.UModeler.StopModelerBuild/BuildShelfArg>::Add(T)
inline void List_1_Add_m0C32AFF3B7A78D3835F96AE54D8283A8BE23F63B_inline (List_1_t2FB40158AFCD69E77037C532086C70828AC06862* __this, BuildShelfArg_t2137F4C02DE10B54ED77462BCB4FC85BA4B81BCA ___item0, const RuntimeMethod* method)
{
	((  void (*) (List_1_t2FB40158AFCD69E77037C532086C70828AC06862*, BuildShelfArg_t2137F4C02DE10B54ED77462BCB4FC85BA4B81BCA, const RuntimeMethod*))List_1_Add_m0C32AFF3B7A78D3835F96AE54D8283A8BE23F63B_gshared_inline)(__this, ___item0, method);
}
// System.Boolean System.Collections.Generic.List`1<System.Int32>::Contains(T)
inline bool List_1_Contains_m4FD96E89F15844C90032C7386BAB528817F1FF5B (List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* __this, int32_t ___item0, const RuntimeMethod* method)
{
	return ((  bool (*) (List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73*, int32_t, const RuntimeMethod*))List_1_Contains_m4FD96E89F15844C90032C7386BAB528817F1FF5B_gshared)(__this, ___item0, method);
}
// System.Void System.Collections.Generic.List`1<System.Int32>::Add(T)
inline void List_1_Add_m0248A96C5334E9A93E6994B7780478BCD994EA3D_inline (List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* __this, int32_t ___item0, const RuntimeMethod* method)
{
	((  void (*) (List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73*, int32_t, const RuntimeMethod*))List_1_Add_m0248A96C5334E9A93E6994B7780478BCD994EA3D_gshared_inline)(__this, ___item0, method);
}
// System.Void System.Collections.Generic.List`1<tripolygon.UModeler.StopModelerBuild/BuildShelfArg>::.ctor()
inline void List_1__ctor_mD0461A0F9F5D1C4A9C578D17033D69A8AC82FF3F (List_1_t2FB40158AFCD69E77037C532086C70828AC06862* __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_t2FB40158AFCD69E77037C532086C70828AC06862*, const RuntimeMethod*))List_1__ctor_mD0461A0F9F5D1C4A9C578D17033D69A8AC82FF3F_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1<System.Int32>::.ctor()
inline void List_1__ctor_m17F501B5A5C289ECE1B4F3D6EBF05DFA421433F8 (List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73*, const RuntimeMethod*))List_1__ctor_m17F501B5A5C289ECE1B4F3D6EBF05DFA421433F8_gshared)(__this, method);
}
// System.Void UnityEngine.Debug::Log(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB (RuntimeObject* ___message0, const RuntimeMethod* method) ;
// System.Void tripolygon.UModeler.StopModelerBuild::RunBuild()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StopModelerBuild_RunBuild_m60504A057FA4AAF1E32CBE5FEF757FF8D7B4FD3A (StopModelerBuild_t0BB93EB56149A7D7B04B0961A77C2010CEF8DB84* __this, const RuntimeMethod* method) ;
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<tripolygon.UModeler.StopModelerBuild/BuildShelfArg>::GetEnumerator()
inline Enumerator_t3914DB61CC010B7C53852DA850D379468E909002 List_1_GetEnumerator_m9744D5CAF082A1770E6BE24FB6EAF9C203C8708F (List_1_t2FB40158AFCD69E77037C532086C70828AC06862* __this, const RuntimeMethod* method)
{
	return ((  Enumerator_t3914DB61CC010B7C53852DA850D379468E909002 (*) (List_1_t2FB40158AFCD69E77037C532086C70828AC06862*, const RuntimeMethod*))List_1_GetEnumerator_m9744D5CAF082A1770E6BE24FB6EAF9C203C8708F_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1/Enumerator<tripolygon.UModeler.StopModelerBuild/BuildShelfArg>::Dispose()
inline void Enumerator_Dispose_mE7B3A8C68D42EBA87037FE92CF1572658798EE8D (Enumerator_t3914DB61CC010B7C53852DA850D379468E909002* __this, const RuntimeMethod* method)
{
	((  void (*) (Enumerator_t3914DB61CC010B7C53852DA850D379468E909002*, const RuntimeMethod*))Enumerator_Dispose_mE7B3A8C68D42EBA87037FE92CF1572658798EE8D_gshared)(__this, method);
}
// T System.Collections.Generic.List`1/Enumerator<tripolygon.UModeler.StopModelerBuild/BuildShelfArg>::get_Current()
inline BuildShelfArg_t2137F4C02DE10B54ED77462BCB4FC85BA4B81BCA Enumerator_get_Current_mE14BCB04881066336130EC2A6DD93CE1405342A3_inline (Enumerator_t3914DB61CC010B7C53852DA850D379468E909002* __this, const RuntimeMethod* method)
{
	return ((  BuildShelfArg_t2137F4C02DE10B54ED77462BCB4FC85BA4B81BCA (*) (Enumerator_t3914DB61CC010B7C53852DA850D379468E909002*, const RuntimeMethod*))Enumerator_get_Current_mE14BCB04881066336130EC2A6DD93CE1405342A3_gshared_inline)(__this, method);
}
// System.Boolean System.Collections.Generic.List`1/Enumerator<tripolygon.UModeler.StopModelerBuild/BuildShelfArg>::MoveNext()
inline bool Enumerator_MoveNext_mFC98FC5250B2A826D366A6F67C6FB95809892167 (Enumerator_t3914DB61CC010B7C53852DA850D379468E909002* __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Enumerator_t3914DB61CC010B7C53852DA850D379468E909002*, const RuntimeMethod*))Enumerator_MoveNext_mFC98FC5250B2A826D366A6F67C6FB95809892167_gshared)(__this, method);
}
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<System.Int32>::GetEnumerator()
inline Enumerator_t9DBCD072C72E44AB8959D9884EF7F528028F20EC List_1_GetEnumerator_mCADB185AB483C855873FCD0B1D5AAC909ED7F7BD (List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* __this, const RuntimeMethod* method)
{
	return ((  Enumerator_t9DBCD072C72E44AB8959D9884EF7F528028F20EC (*) (List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73*, const RuntimeMethod*))List_1_GetEnumerator_mCADB185AB483C855873FCD0B1D5AAC909ED7F7BD_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1/Enumerator<System.Int32>::Dispose()
inline void Enumerator_Dispose_m38A9F15FDBDCDFB9590C961110777EE028621923 (Enumerator_t9DBCD072C72E44AB8959D9884EF7F528028F20EC* __this, const RuntimeMethod* method)
{
	((  void (*) (Enumerator_t9DBCD072C72E44AB8959D9884EF7F528028F20EC*, const RuntimeMethod*))Enumerator_Dispose_m38A9F15FDBDCDFB9590C961110777EE028621923_gshared)(__this, method);
}
// T System.Collections.Generic.List`1/Enumerator<System.Int32>::get_Current()
inline int32_t Enumerator_get_Current_mB49912FF111A954F2C326BF4FA29A53C1027187B_inline (Enumerator_t9DBCD072C72E44AB8959D9884EF7F528028F20EC* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (Enumerator_t9DBCD072C72E44AB8959D9884EF7F528028F20EC*, const RuntimeMethod*))Enumerator_get_Current_mB49912FF111A954F2C326BF4FA29A53C1027187B_gshared_inline)(__this, method);
}
// System.Boolean System.Collections.Generic.List`1/Enumerator<System.Int32>::MoveNext()
inline bool Enumerator_MoveNext_m39C71A39758E2B4A04F44F20FCEFAF7009D5F312 (Enumerator_t9DBCD072C72E44AB8959D9884EF7F528028F20EC* __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Enumerator_t9DBCD072C72E44AB8959D9884EF7F528028F20EC*, const RuntimeMethod*))Enumerator_MoveNext_m39C71A39758E2B4A04F44F20FCEFAF7009D5F312_gshared)(__this, method);
}
// UnityEngine.Shader UnityEngine.Shader::Find(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Shader_tADC867D36B7876EE22427FAA2CE485105F4EE692* Shader_Find_m183AA54F78320212DDEC811592F98456898A41C5 (String_t* ___name0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Material::.ctor(UnityEngine.Shader)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Material__ctor_m7FDF47105D66D19591BE505A0C42B0F90D88C9BF (Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* __this, Shader_tADC867D36B7876EE22427FAA2CE485105F4EE692* ___shader0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Material::SetInt(System.String,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Material_SetInt_m41DF5404A9942239265888105E1DC83F2FBF901A (Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* __this, String_t* ___name0, int32_t ___value1, const RuntimeMethod* method) ;
// UnityEngine.Material tripolygon.UModeler.GLUtil::get_material()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* GLUtil_get_material_mEAAD08822025916BA5CEB447EDD71BC1F33D2060 (const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Material::SetPass(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Material_SetPass_mBB03542DFF4FAEADFCED332009F9D61B6DED75FE (Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* __this, int32_t ___pass0, const RuntimeMethod* method) ;
// System.Void UnityEngine.GL::Begin(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GL_Begin_m17A70A7A3C161D8A127C11BDC5FC393392AB70C7 (int32_t ___mode0, const RuntimeMethod* method) ;
// System.Void UnityEngine.GL::Color(UnityEngine.Color)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GL_Color_mE2D27D8FCA9B5E07ECC15574BCBCBA16E6E0CB3E (Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___c0, const RuntimeMethod* method) ;
// System.Void UnityEngine.GL::End()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GL_End_m6CE9D562B738075125F901B1D5254520EC30AB36 (const RuntimeMethod* method) ;
// System.Void UnityEngine.GL::Vertex(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GL_Vertex_m54BA6BE5B0E6F856EEE3671D1C59CEF7D5C13B72 (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___v0, const RuntimeMethod* method) ;
// tripolygon.UModeler.PlaneEx tripolygon.UModeler.SimplePolygon::get_plane()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR PlaneEx_t5512A7D4BF235ED6ED6F1F09A1621A1DCB31509D* SimplePolygon_get_plane_mF42E1C3275AB8ED168516709C333F0875315D92D (SimplePolygon_t5F51D3D1F485B3C377E0E40766EBFD86BA9D9385* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector3 tripolygon.UModeler.PlaneEx::get_normal()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 PlaneEx_get_normal_m934F59FA92AFFDF816E50D2CF5971AA97B1D067C_inline (PlaneEx_t5512A7D4BF235ED6ED6F1F09A1621A1DCB31509D* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector3 tripolygon.UModeler.Util::GetScaledNormal(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Util_GetScaledNormal_m7E93F2D30C675C8ECF12DB8C23ED5D35B541378C (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___normal0, const RuntimeMethod* method) ;
// tripolygon.UModeler.IndexPair tripolygon.UModeler.SimplePolygon::GetEdge(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR IndexPair_t6886ED92041E20F053A60B5DE14E4710BB42A376* SimplePolygon_GetEdge_m990E077DB64E20FDEF9AB4D2C89A255120C8D38B (SimplePolygon_t5F51D3D1F485B3C377E0E40766EBFD86BA9D9385* __this, int32_t ___idx0, const RuntimeMethod* method) ;
// tripolygon.UModeler.SelectionType tripolygon.UModeler.SelectExtended::get_selection()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t SelectExtended_get_selection_mA8131FB1E716C5F92C5A04A49B61DB79506961AD_inline (SelectExtended_tA9AA94ECFF1523DC7FE8E001FF9593BD32AC030E* __this, const RuntimeMethod* method) ;
// tripolygon.UModeler.Edge tripolygon.UModeler.SimplePolygon::GetPureEdge(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Edge_t61E163F7AA3BA416F72B1EDF0DD966F41041D4FF* SimplePolygon_GetPureEdge_m2B428DD5282199D5F858FF60959D75DED1043BEE (SimplePolygon_t5F51D3D1F485B3C377E0E40766EBFD86BA9D9385* __this, int32_t ___idx0, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::op_Multiply(UnityEngine.Vector3,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___a0, float ___d1, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::op_Addition(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Addition_m78C0EC70CB66E8DCAC225743D82B268DAEE92067_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___a0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___b1, const RuntimeMethod* method) ;
// System.Void tripolygon.UModeler.GLUtil::DrawLine(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GLUtil_DrawLine_m39A281D7EC4E28A7B0D5765A6A000426DFAF6F6D (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___v00, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___v11, const RuntimeMethod* method) ;
// System.Int32 tripolygon.UModeler.SimplePolygon::GetEdgeCount()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t SimplePolygon_GetEdgeCount_m45A95814D089F716DBFAB1D7D8975835751E4295 (SimplePolygon_t5F51D3D1F485B3C377E0E40766EBFD86BA9D9385* __this, const RuntimeMethod* method) ;
// System.Void tripolygon.UModeler.PlaneEx::.ctor(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlaneEx__ctor_m209D1BF880E2F0A8B1D5222286D91807650BE04A (PlaneEx_t5512A7D4BF235ED6ED6F1F09A1621A1DCB31509D* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___in_normal0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___in_point1, const RuntimeMethod* method) ;
// System.Void tripolygon.UModeler.ArcShape::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArcShape__ctor_m4AF3BB2A93B2D4CC835FDD92DDAEAA0D7EE585F1 (ArcShape_tD79A3A8B50D88CAABD9AB2CDBE67A6D525242779* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Ray::get_origin()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Ray_get_origin_m97604A8F180316A410DCD77B7D74D04522FA1BA6 (Ray_t2B1742D7958DC05BDC3EFC7461D3593E1430DC00* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Ray::get_direction()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Ray_get_direction_m21C2D22D3BD4A683BD4DC191AB22DD05F5EC2086 (Ray_t2B1742D7958DC05BDC3EFC7461D3593E1430DC00* __this, const RuntimeMethod* method) ;
// System.Boolean tripolygon.UModeler.ArcShape::RayHit(UnityEngine.Vector3,UnityEngine.Vector3,System.Single&,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ArcShape_RayHit_m7BC2DEC0706075D0ADBC8999A1149839CD6E0618 (ArcShape_tD79A3A8B50D88CAABD9AB2CDBE67A6D525242779* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___origin0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___dir1, float* ___t2, float ___hit_width3, const RuntimeMethod* method) ;
// System.Void tripolygon.UModeler.MathUtil::CreatePointsOnArc(tripolygon.UModeler.ArcShape,System.Collections.Generic.List`1<UnityEngine.Vector2>&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MathUtil_CreatePointsOnArc_m75A6708E743F3DF2E939AA091834BBEFCA54B8F5 (ArcShape_tD79A3A8B50D88CAABD9AB2CDBE67A6D525242779* ___arc0, List_1_t8F3790B7F8C471B3A1336522C7415FB0AC36D47B** ___outPoints1, const RuntimeMethod* method) ;
// tripolygon.UModeler.PlaneEx tripolygon.UModeler.ArcShape::get_plane()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR PlaneEx_t5512A7D4BF235ED6ED6F1F09A1621A1DCB31509D* ArcShape_get_plane_m8AFB38200562F513CE1206552D6397EE4715E48A (ArcShape_tD79A3A8B50D88CAABD9AB2CDBE67A6D525242779* __this, const RuntimeMethod* method) ;
// T System.Collections.Generic.List`1<UnityEngine.Vector2>::get_Item(System.Int32)
inline Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 List_1_get_Item_m1F8E226CAD72B83C5E75BB66B43025247806B543 (List_1_t8F3790B7F8C471B3A1336522C7415FB0AC36D47B* __this, int32_t ___index0, const RuntimeMethod* method)
{
	return ((  Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 (*) (List_1_t8F3790B7F8C471B3A1336522C7415FB0AC36D47B*, int32_t, const RuntimeMethod*))List_1_get_Item_m1F8E226CAD72B83C5E75BB66B43025247806B543_gshared)(__this, ___index0, method);
}
// UnityEngine.Vector3 tripolygon.UModeler.PlaneEx::FromPlaneCoord(UnityEngine.Vector2)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 PlaneEx_FromPlaneCoord_m7EB702AFA210E9E823B07C15410235B3A3E0461A (PlaneEx_t5512A7D4BF235ED6ED6F1F09A1621A1DCB31509D* __this, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___pos0, const RuntimeMethod* method) ;
// System.Void tripolygon.UModeler.Edge::.ctor(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Edge__ctor_m247792235F4220D03FA76DCC57E527491595869D (Edge_t61E163F7AA3BA416F72B1EDF0DD966F41041D4FF* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ____p00, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ____p11, const RuntimeMethod* method) ;
// System.Boolean tripolygon.UModeler.Edge::RayHit(UnityEngine.Vector3,UnityEngine.Vector3,System.Single&,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Edge_RayHit_m4EE260FE2DB3F9A450D06B27FA9FF354F0C3E1EC (Edge_t61E163F7AA3BA416F72B1EDF0DD966F41041D4FF* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___origin0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___dir1, float* ___t2, float ___hit_width3, const RuntimeMethod* method) ;
// System.Int32 System.Collections.Generic.List`1<UnityEngine.Vector2>::get_Count()
inline int32_t List_1_get_Count_mF1C0C56457C655BDFFC6EE5B46FAD8BAEC1F588B_inline (List_1_t8F3790B7F8C471B3A1336522C7415FB0AC36D47B* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (List_1_t8F3790B7F8C471B3A1336522C7415FB0AC36D47B*, const RuntimeMethod*))List_1_get_Count_mF1C0C56457C655BDFFC6EE5B46FAD8BAEC1F588B_gshared_inline)(__this, method);
}
// UnityEngine.Vector3 UnityEngine.Vector3::op_Subtraction(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Subtraction_mE42023FF80067CB44A1D4A27EB7CF2B24CABB828_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___a0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___b1, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::get_normalized()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_get_normalized_m736BBF65D5CDA7A18414370D15B4DFCC1E466F07_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector2 tripolygon.UModeler.PlaneEx::ToPlaneCoord(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 PlaneEx_ToPlaneCoord_m4C8B08C0002FE6D79C67380F185CAADEA16273BD (PlaneEx_t5512A7D4BF235ED6ED6F1F09A1621A1DCB31509D* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___pos0, const RuntimeMethod* method) ;
// System.Single tripolygon.UModeler.MathUtil::ComputeAngleOnDisc(UnityEngine.Vector2,UnityEngine.Vector2)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float MathUtil_ComputeAngleOnDisc_mF4A5A0688CCD08EDB3CA26FB9FF7BAC374D9A141 (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___dir0, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___from1, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::Cross(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_Cross_mF93A280558BCE756D13B6CC5DCD7DE8A43148987_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___lhs0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___rhs1, const RuntimeMethod* method) ;
// System.Single UnityEngine.Vector3::Dot(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Vector3_Dot_mBB86BB940AA0A32FA7D3C02AC42E5BC7095A5D52_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___lhs0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___rhs1, const RuntimeMethod* method) ;
// System.Boolean tripolygon.UModeler.MathUtil::Raycast(UnityEngine.Ray,UnityEngine.Vector3,UnityEngine.Vector3,UnityEngine.Vector3,System.Single&,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool MathUtil_Raycast_mA3535A944DBE366B8986ED46A2C77B36283F2628 (Ray_t2B1742D7958DC05BDC3EFC7461D3593E1430DC00 ___ray0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___TriangleV01, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___TriangleV12, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___TriangleV23, float* ___dist4, bool ___excludeBackface5, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<tripolygon.UModeler.Vertex>::.ctor()
inline void List_1__ctor_m27907A101D0DAF1C842184C25FF2FCF5F7116E9D (List_1_t302A75244C10A0CEF3AC031C484C2772A9D30A6F* __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_t302A75244C10A0CEF3AC031C484C2772A9D30A6F*, const RuntimeMethod*))List_1__ctor_m7F078BB342729BDF11327FD89D7872265328F690_gshared)(__this, method);
}
// T System.Collections.Generic.List`1<UnityEngine.Vector3>::get_Item(System.Int32)
inline Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 List_1_get_Item_m8F2E15FC96DA75186C51228128A0660709E4E810 (List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B* __this, int32_t ___index0, const RuntimeMethod* method)
{
	return ((  Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 (*) (List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B*, int32_t, const RuntimeMethod*))List_1_get_Item_m8F2E15FC96DA75186C51228128A0660709E4E810_gshared)(__this, ___index0, method);
}
// System.Void tripolygon.UModeler.Vertex::.ctor(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Vertex__ctor_m1FF1D2AAD46FEC67D7FD50A350BB3F08DFAE7256 (Vertex_tB6D4D191E463D1653AA47DED15E41F21BA5A21FC* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ____pos0, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<tripolygon.UModeler.Vertex>::Add(T)
inline void List_1_Add_mBEA06988AE0C126241C9FFA08A9F2612A7A542A4_inline (List_1_t302A75244C10A0CEF3AC031C484C2772A9D30A6F* __this, Vertex_tB6D4D191E463D1653AA47DED15E41F21BA5A21FC* ___item0, const RuntimeMethod* method)
{
	((  void (*) (List_1_t302A75244C10A0CEF3AC031C484C2772A9D30A6F*, Vertex_tB6D4D191E463D1653AA47DED15E41F21BA5A21FC*, const RuntimeMethod*))List_1_Add_mEBCF994CC3814631017F46A387B1A192ED6C85C7_gshared_inline)(__this, ___item0, method);
}
// System.Int32 System.Collections.Generic.List`1<UnityEngine.Vector3>::get_Count()
inline int32_t List_1_get_Count_m46EEFFA770BE665EA0CB3A5332E941DA4B3C1D37_inline (List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B*, const RuntimeMethod*))List_1_get_Count_m46EEFFA770BE665EA0CB3A5332E941DA4B3C1D37_gshared_inline)(__this, method);
}
// tripolygon.UModeler.PlaneEx tripolygon.UModeler.MathUtil::ComputePlane(System.Collections.Generic.List`1<tripolygon.UModeler.Vertex>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR PlaneEx_t5512A7D4BF235ED6ED6F1F09A1621A1DCB31509D* MathUtil_ComputePlane_m30938DE934DEA97A7E710637AA461090894FE219 (List_1_t302A75244C10A0CEF3AC031C484C2772A9D30A6F* ___vertices0, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<tripolygon.UModeler.IndexPair>::.ctor()
inline void List_1__ctor_mDB0C054143B34FBA213A5507B676252235210932 (List_1_t77E791A5D872DCB1195678FCECC444A825292814* __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_t77E791A5D872DCB1195678FCECC444A825292814*, const RuntimeMethod*))List_1__ctor_m7F078BB342729BDF11327FD89D7872265328F690_gshared)(__this, method);
}
// System.Int32 System.Collections.Generic.List`1<tripolygon.UModeler.Vertex>::get_Count()
inline int32_t List_1_get_Count_m8E2B23B32C1F3E24BA82A3784717FA771E38B208_inline (List_1_t302A75244C10A0CEF3AC031C484C2772A9D30A6F* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (List_1_t302A75244C10A0CEF3AC031C484C2772A9D30A6F*, const RuntimeMethod*))List_1_get_Count_m4407E4C389F22B8CEC282C15D56516658746C383_gshared_inline)(__this, method);
}
// System.Void tripolygon.UModeler.IndexPair::.ctor(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IndexPair__ctor_m7BAF035D664A349A5DB6D5CE734E103571C7A369 (IndexPair_t6886ED92041E20F053A60B5DE14E4710BB42A376* __this, int32_t ___idx00, int32_t ___idx11, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<tripolygon.UModeler.IndexPair>::Add(T)
inline void List_1_Add_m274AF4878E2EFA91B7127EE757F5C83A1A499438_inline (List_1_t77E791A5D872DCB1195678FCECC444A825292814* __this, IndexPair_t6886ED92041E20F053A60B5DE14E4710BB42A376* ___item0, const RuntimeMethod* method)
{
	((  void (*) (List_1_t77E791A5D872DCB1195678FCECC444A825292814*, IndexPair_t6886ED92041E20F053A60B5DE14E4710BB42A376*, const RuntimeMethod*))List_1_Add_mEBCF994CC3814631017F46A387B1A192ED6C85C7_gshared_inline)(__this, ___item0, method);
}
// tripolygon.UModeler.PlaneEx tripolygon.UModeler.MathUtil::ComputePlane(System.Collections.Generic.List`1<tripolygon.UModeler.Vertex>,System.Collections.Generic.List`1<tripolygon.UModeler.IndexPair>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR PlaneEx_t5512A7D4BF235ED6ED6F1F09A1621A1DCB31509D* MathUtil_ComputePlane_mA02A86AB73273F2F7CBC57EF179176EF62D108D3 (List_1_t302A75244C10A0CEF3AC031C484C2772A9D30A6F* ___vertices0, List_1_t77E791A5D872DCB1195678FCECC444A825292814* ___edges1, const RuntimeMethod* method) ;
// T System.Collections.Generic.List`1<tripolygon.UModeler.Vertex>::get_Item(System.Int32)
inline Vertex_tB6D4D191E463D1653AA47DED15E41F21BA5A21FC* List_1_get_Item_m435D761DB4AF80679A1C0AD9F789379A779DBFD1 (List_1_t302A75244C10A0CEF3AC031C484C2772A9D30A6F* __this, int32_t ___index0, const RuntimeMethod* method)
{
	return ((  Vertex_tB6D4D191E463D1653AA47DED15E41F21BA5A21FC* (*) (List_1_t302A75244C10A0CEF3AC031C484C2772A9D30A6F*, int32_t, const RuntimeMethod*))List_1_get_Item_m33561245D64798C2AB07584C0EC4F240E4839A38_gshared)(__this, ___index0, method);
}
// System.Single UnityEngine.Vector3::get_Item(System.Int32)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Vector3_get_Item_m163510BFC2F7BFAD1B601DC9F3606B799CF199F2_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* __this, int32_t ___index0, const RuntimeMethod* method) ;
// System.Void tripolygon.UModeler.MathUtil::FindEdgesWithVertexIndex(System.Int32,System.Collections.Generic.List`1<tripolygon.UModeler.IndexPair>,System.Collections.Generic.List`1<tripolygon.UModeler.IndexPair>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MathUtil_FindEdgesWithVertexIndex_m27E38424F8336C36C99522F00529F16B1B6E7477 (int32_t ___idx0, List_1_t77E791A5D872DCB1195678FCECC444A825292814* ___edges1, List_1_t77E791A5D872DCB1195678FCECC444A825292814* ___out_pairs2, const RuntimeMethod* method) ;
// System.Int32 System.Collections.Generic.List`1<tripolygon.UModeler.IndexPair>::get_Count()
inline int32_t List_1_get_Count_m7935E7124EA3BEA7676657329170EE232B69B967_inline (List_1_t77E791A5D872DCB1195678FCECC444A825292814* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (List_1_t77E791A5D872DCB1195678FCECC444A825292814*, const RuntimeMethod*))List_1_get_Count_m4407E4C389F22B8CEC282C15D56516658746C383_gshared_inline)(__this, method);
}
// T System.Collections.Generic.List`1<tripolygon.UModeler.IndexPair>::get_Item(System.Int32)
inline IndexPair_t6886ED92041E20F053A60B5DE14E4710BB42A376* List_1_get_Item_m858C445AE858FEBCE8E4BB1F655914EC1E5DFD1F (List_1_t77E791A5D872DCB1195678FCECC444A825292814* __this, int32_t ___index0, const RuntimeMethod* method)
{
	return ((  IndexPair_t6886ED92041E20F053A60B5DE14E4710BB42A376* (*) (List_1_t77E791A5D872DCB1195678FCECC444A825292814*, int32_t, const RuntimeMethod*))List_1_get_Item_m33561245D64798C2AB07584C0EC4F240E4839A38_gshared)(__this, ___index0, method);
}
// System.Int32 tripolygon.UModeler.IndexPair::get_i0()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t IndexPair_get_i0_m0E7AABFDBCA03351A53F255657182209C9DAAA59_inline (IndexPair_t6886ED92041E20F053A60B5DE14E4710BB42A376* __this, const RuntimeMethod* method) ;
// System.Int32 tripolygon.UModeler.IndexPair::get_i1()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t IndexPair_get_i1_mE94972096B356E165B606945C56B0889B71E3BB4_inline (IndexPair_t6886ED92041E20F053A60B5DE14E4710BB42A376* __this, const RuntimeMethod* method) ;
// System.Void tripolygon.UModeler.PlaneEx::.ctor(UnityEngine.Vector3,UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlaneEx__ctor_mAC6412D967A3C091AC621DE6D22C441E51A775F2 (PlaneEx_t5512A7D4BF235ED6ED6F1F09A1621A1DCB31509D* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___a0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___b1, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___c2, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<tripolygon.UModeler.IndexPair>::Insert(System.Int32,T)
inline void List_1_Insert_m1DA8358A97752239559B7B85806979EE764DB22C (List_1_t77E791A5D872DCB1195678FCECC444A825292814* __this, int32_t ___index0, IndexPair_t6886ED92041E20F053A60B5DE14E4710BB42A376* ___item1, const RuntimeMethod* method)
{
	((  void (*) (List_1_t77E791A5D872DCB1195678FCECC444A825292814*, int32_t, IndexPair_t6886ED92041E20F053A60B5DE14E4710BB42A376*, const RuntimeMethod*))List_1_Insert_m9C9559248941FED50561DB029D55DF08DEF3B094_gshared)(__this, ___index0, ___item1, method);
}
// UnityEngine.Vector3 UnityEngine.Transform::get_position()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Matrix4x4::MultiplyPoint(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Matrix4x4_MultiplyPoint_m20E910B65693559BFDE99382472D8DD02C862E7E (Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___point0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Vector3::.ctor(System.Single,System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* __this, float ___x0, float ___y1, float ___z2, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Transform::TransformDirection(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Transform_TransformDirection_m9BE1261DF2D48B7A4A27D31EE24D2D97F89E7757 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___direction0, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Camera::WorldToScreenPoint(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Camera_WorldToScreenPoint_m26B4C8945C3B5731F1CC5944CFD96BF17126BAA3 (Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___position0, const RuntimeMethod* method) ;
// System.Single UnityEngine.Vector3::get_magnitude()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Vector3_get_magnitude_mF0D6017E90B345F1F52D1CC564C640F1A847AF2D_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* __this, const RuntimeMethod* method) ;
// System.Single UnityEngine.Mathf::Max(System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Mathf_Max_mF5379E63D2BBAC76D090748695D833934F8AD051_inline (float ___a0, float ___b1, const RuntimeMethod* method) ;
// UnityEngine.Matrix4x4 UnityEngine.Matrix4x4::get_identity()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 Matrix4x4_get_identity_m6568A73831F3E2D587420D20FF423959D7D8AB56_inline (const RuntimeMethod* method) ;
// UnityEngine.Vector3 tripolygon.UModeler.Util::ConvertWorldToScreen(UnityEngine.Camera,UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Util_ConvertWorldToScreen_mF52A2BA937C7AD8DB71B16E015B0F4584F69D56F (Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* ___camera0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___worldPos1, const RuntimeMethod* method) ;
// System.Single UnityEngine.Vector3::Distance(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Vector3_Distance_m2314DB9B8BD01157E013DF87BEA557375C7F9FF9_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___a0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___b1, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::Normalize(UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_Normalize_mEF8349CC39674236CFC694189AFD36E31F89AC8F_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___value0, const RuntimeMethod* method) ;
// System.Void tripolygon.UModeler.MathUtil/Vector2_3InputFloatReturnDelegate::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Vector2_3InputFloatReturnDelegate__ctor_m2F23F6BFF809D35A1524776F161AC77F89249843 (Vector2_3InputFloatReturnDelegate_tDF554F3258BCA6D8F1BEC540B850729000D15F46* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector2::op_Implicit(UnityEngine.Vector2)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector2_op_Implicit_m6D9CABB2C791A192867D7A4559D132BE86DD3EB7_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___v0, const RuntimeMethod* method) ;
// System.Single tripolygon.UModeler.MathUtil/Vector2_3InputFloatReturnDelegate::Invoke(UnityEngine.Vector2,UnityEngine.Vector2,UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Vector2_3InputFloatReturnDelegate_Invoke_m41B4E1FCA6B3F0AC839C7E15F7030FBDB6B46D36_inline (Vector2_3InputFloatReturnDelegate_tDF554F3258BCA6D8F1BEC540B850729000D15F46* __this, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___p10, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___p21, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___p32, const RuntimeMethod* method) ;
// System.Boolean tripolygon.UModeler.MathUtil::PointInTriangle(UnityEngine.Vector2,UnityEngine.Vector2,UnityEngine.Vector2,UnityEngine.Vector2)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool MathUtil_PointInTriangle_mB1DAC2467DA5335F01B170B2F9F55FF8699F865D (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___pt0, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___v11, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___v22, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___v33, const RuntimeMethod* method) ;
// System.Single UnityEngine.Vector2::Dot(UnityEngine.Vector2,UnityEngine.Vector2)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Vector2_Dot_mC1E68FDB4FB462A279A303C043B8FD0AC11C8458_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___lhs0, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___rhs1, const RuntimeMethod* method) ;
// UnityEngine.Vector2 UnityEngine.Vector2::op_Division(UnityEngine.Vector2,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 Vector2_op_Division_m57A2DCD71E0CE7420851D705D1951F9238902AAB_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___a0, float ___d1, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<UnityEngine.Vector2>::.ctor()
inline void List_1__ctor_m88C4BD8AC607DB3585552068F4DC437406358D5F (List_1_t8F3790B7F8C471B3A1336522C7415FB0AC36D47B* __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_t8F3790B7F8C471B3A1336522C7415FB0AC36D47B*, const RuntimeMethod*))List_1__ctor_m88C4BD8AC607DB3585552068F4DC437406358D5F_gshared)(__this, method);
}
// UnityEngine.Vector2 UnityEngine.Vector2::op_Multiply(System.Single,UnityEngine.Vector2)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 Vector2_op_Multiply_mC53581E703768BA2512A7C65283657C331994353_inline (float ___d0, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___a1, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<UnityEngine.Vector2>::Add(T)
inline void List_1_Add_mB5FDF069171C4CB1778BFAC3B9015A22EA7DFBCD_inline (List_1_t8F3790B7F8C471B3A1336522C7415FB0AC36D47B* __this, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___item0, const RuntimeMethod* method)
{
	((  void (*) (List_1_t8F3790B7F8C471B3A1336522C7415FB0AC36D47B*, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7, const RuntimeMethod*))List_1_Add_mB5FDF069171C4CB1778BFAC3B9015A22EA7DFBCD_gshared_inline)(__this, ___item0, method);
}
// UnityEngine.Vector3 UnityEngine.Vector3::get_right()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_get_right_mFF573AFBBB2186E7AFA1BA7CA271A78DF67E4EA0_inline (const RuntimeMethod* method) ;
// UnityEngine.Vector2 UnityEngine.Vector2::op_Implicit(UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 Vector2_op_Implicit_mE8EBEE9291F11BB02F062D6E000F4798968CBD96_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___v0, const RuntimeMethod* method) ;
// System.Void tripolygon.UModeler.MathUtil::CreatePointsOnArc(System.Single,UnityEngine.Vector2,System.Single,System.Single,System.Int32,System.Collections.Generic.List`1<UnityEngine.Vector2>&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MathUtil_CreatePointsOnArc_m2C2362003D566AACF963B134F6B0D08A0C607C72 (float ___radius0, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___center1, float ___start_radian2, float ___diff_radian3, int32_t ___segment_count4, List_1_t8F3790B7F8C471B3A1336522C7415FB0AC36D47B** ___outPoints5, const RuntimeMethod* method) ;
// UnityEngine.Vector2 UnityEngine.Vector2::op_UnaryNegation(UnityEngine.Vector2)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 Vector2_op_UnaryNegation_mBA9FC53A2194EE3CC067A12D11879F695B34D6F9_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___a0, const RuntimeMethod* method) ;
// System.Single tripolygon.UModeler.Line2D::Distance(UnityEngine.Vector2)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Line2D_Distance_m984F208D81F284E5D450F6D2B962FE7579200154 (Line2D_tAC46D1228FCBF2872CC1DF7DA8C02274FDE4A750* __this, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___pos0, const RuntimeMethod* method) ;
// System.Boolean tripolygon.UModeler.MathUtil::ComputeCircumCircleRadiusAndCenter(UnityEngine.Vector2,UnityEngine.Vector2,UnityEngine.Vector2,System.Single&,UnityEngine.Vector2&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool MathUtil_ComputeCircumCircleRadiusAndCenter_m600D4FC42C11DD88A0D1A55FEF1869F9C8532550 (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___v00, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___v11, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___v22, float* ___out_radius3, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* ___out_center4, const RuntimeMethod* method) ;
// System.Void tripolygon.UModeler.Edge2D::.ctor(UnityEngine.Vector2,UnityEngine.Vector2)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Edge2D__ctor_mC9DADA4D1BE449D1001BDC06F2468EF7F3D84B86 (Edge2D_t9FDACD4F24D6997F00FF589D414CA11D256A7364* __this, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ____p00, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ____p11, const RuntimeMethod* method) ;
// System.Single tripolygon.UModeler.Edge2D::SquaredDistanceToPoint(UnityEngine.Vector2)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Edge2D_SquaredDistanceToPoint_m5D7E2BC603A71545E932B8026DF4EE7F56C53B60 (Edge2D_t9FDACD4F24D6997F00FF589D414CA11D256A7364* __this, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___point0, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<UnityEngine.Vector2>::Reverse()
inline void List_1_Reverse_m9D5D6524E78A4D1590BACA474B193AC2E0DA93EF (List_1_t8F3790B7F8C471B3A1336522C7415FB0AC36D47B* __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_t8F3790B7F8C471B3A1336522C7415FB0AC36D47B*, const RuntimeMethod*))List_1_Reverse_m9D5D6524E78A4D1590BACA474B193AC2E0DA93EF_gshared)(__this, method);
}
// System.Boolean tripolygon.UModeler.Comparer::IsEquivalent(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Comparer_IsEquivalent_mAB00A170CAA5452C62FD8203EC6D3D463103985E (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___v00, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___v11, const RuntimeMethod* method) ;
// System.Collections.Generic.List`1<tripolygon.UModeler.Vertex> tripolygon.UModeler.MathUtil::RemoveLinkVertices(System.Collections.Generic.List`1<tripolygon.UModeler.Vertex>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR List_1_t302A75244C10A0CEF3AC031C484C2772A9D30A6F* MathUtil_RemoveLinkVertices_m04547C955E394F345F2445B83A73C375970B1408 (List_1_t302A75244C10A0CEF3AC031C484C2772A9D30A6F* ___loop0, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.SortedDictionary`2<System.Single,System.Int32>::.ctor()
inline void SortedDictionary_2__ctor_m518A3BFE4904E6F4411A44950B724F3089818BAD (SortedDictionary_2_t4C2768740A7E0300B8278590463E71E6C439B5F2* __this, const RuntimeMethod* method)
{
	((  void (*) (SortedDictionary_2_t4C2768740A7E0300B8278590463E71E6C439B5F2*, const RuntimeMethod*))SortedDictionary_2__ctor_m518A3BFE4904E6F4411A44950B724F3089818BAD_gshared)(__this, method);
}
// System.Boolean System.Collections.Generic.SortedDictionary`2<System.Single,System.Int32>::ContainsKey(TKey)
inline bool SortedDictionary_2_ContainsKey_mD4CCA93B685E372DFBD7A21DAB034A4FC2C2C8EE (SortedDictionary_2_t4C2768740A7E0300B8278590463E71E6C439B5F2* __this, float ___key0, const RuntimeMethod* method)
{
	return ((  bool (*) (SortedDictionary_2_t4C2768740A7E0300B8278590463E71E6C439B5F2*, float, const RuntimeMethod*))SortedDictionary_2_ContainsKey_mD4CCA93B685E372DFBD7A21DAB034A4FC2C2C8EE_gshared)(__this, ___key0, method);
}
// System.Void System.Collections.Generic.SortedDictionary`2<System.Single,System.Int32>::Add(TKey,TValue)
inline void SortedDictionary_2_Add_mF9B1C9C48B997CF0B490926FC6C5338959D1960C (SortedDictionary_2_t4C2768740A7E0300B8278590463E71E6C439B5F2* __this, float ___key0, int32_t ___value1, const RuntimeMethod* method)
{
	((  void (*) (SortedDictionary_2_t4C2768740A7E0300B8278590463E71E6C439B5F2*, float, int32_t, const RuntimeMethod*))SortedDictionary_2_Add_mF9B1C9C48B997CF0B490926FC6C5338959D1960C_gshared)(__this, ___key0, ___value1, method);
}
// System.Collections.Generic.SortedDictionary`2/Enumerator<TKey,TValue> System.Collections.Generic.SortedDictionary`2<System.Single,System.Int32>::GetEnumerator()
inline Enumerator_t422FE7CC7AC06DA0CD21EF1FC7B746F9C4C7BEF2 SortedDictionary_2_GetEnumerator_m52D1F7C3A27183B19E70A3A6563A996FF34CAEA6 (SortedDictionary_2_t4C2768740A7E0300B8278590463E71E6C439B5F2* __this, const RuntimeMethod* method)
{
	return ((  Enumerator_t422FE7CC7AC06DA0CD21EF1FC7B746F9C4C7BEF2 (*) (SortedDictionary_2_t4C2768740A7E0300B8278590463E71E6C439B5F2*, const RuntimeMethod*))SortedDictionary_2_GetEnumerator_m52D1F7C3A27183B19E70A3A6563A996FF34CAEA6_gshared)(__this, method);
}
// System.Boolean System.Collections.Generic.SortedDictionary`2/Enumerator<System.Single,System.Int32>::MoveNext()
inline bool Enumerator_MoveNext_mB97D38C9C1685FC126DFDF90CEC4756431EEED73 (Enumerator_t422FE7CC7AC06DA0CD21EF1FC7B746F9C4C7BEF2* __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Enumerator_t422FE7CC7AC06DA0CD21EF1FC7B746F9C4C7BEF2*, const RuntimeMethod*))Enumerator_MoveNext_mB97D38C9C1685FC126DFDF90CEC4756431EEED73_gshared)(__this, method);
}
// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.SortedDictionary`2/Enumerator<System.Single,System.Int32>::get_Current()
inline KeyValuePair_2_tF9681614985AA4D11569AFA8747D722D1447A120 Enumerator_get_Current_mB94096C5ED127D93564C02549007FEA63482CE38 (Enumerator_t422FE7CC7AC06DA0CD21EF1FC7B746F9C4C7BEF2* __this, const RuntimeMethod* method)
{
	return ((  KeyValuePair_2_tF9681614985AA4D11569AFA8747D722D1447A120 (*) (Enumerator_t422FE7CC7AC06DA0CD21EF1FC7B746F9C4C7BEF2*, const RuntimeMethod*))Enumerator_get_Current_mB94096C5ED127D93564C02549007FEA63482CE38_gshared)(__this, method);
}
// TValue System.Collections.Generic.KeyValuePair`2<System.Single,System.Int32>::get_Value()
inline int32_t KeyValuePair_2_get_Value_mAB1FC5832CB06EEF53C3A3E9C2A67258EAC6048E_inline (KeyValuePair_2_tF9681614985AA4D11569AFA8747D722D1447A120* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (KeyValuePair_2_tF9681614985AA4D11569AFA8747D722D1447A120*, const RuntimeMethod*))KeyValuePair_2_get_Value_mAB1FC5832CB06EEF53C3A3E9C2A67258EAC6048E_gshared_inline)(__this, method);
}
// System.Void System.Collections.Generic.List`1<System.Single>::.ctor()
inline void List_1__ctor_mC29D3D824786832A31096310B3B3016B8B42B802 (List_1_t0D1C46FD8DDDE974D93CA4F3474EEC05AF950918* __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_t0D1C46FD8DDDE974D93CA4F3474EEC05AF950918*, const RuntimeMethod*))List_1__ctor_mC29D3D824786832A31096310B3B3016B8B42B802_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1<System.Single>::Add(T)
inline void List_1_Add_m2F86E252D086E288E02FA1C830B7E86C0A431E51_inline (List_1_t0D1C46FD8DDDE974D93CA4F3474EEC05AF950918* __this, float ___item0, const RuntimeMethod* method)
{
	((  void (*) (List_1_t0D1C46FD8DDDE974D93CA4F3474EEC05AF950918*, float, const RuntimeMethod*))List_1_Add_m2F86E252D086E288E02FA1C830B7E86C0A431E51_gshared_inline)(__this, ___item0, method);
}
// System.Int32 UnityEngine.Mathf::CeilToInt(System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Mathf_CeilToInt_mF2BF9F4261B3431DC20E10A46CFEEED103C48963_inline (float ___f0, const RuntimeMethod* method) ;
// System.Single UnityEngine.Mathf::Sign(System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Mathf_Sign_m42EE1F0BC041AF14F89DED7F762BE996E2C50D8A_inline (float ___f0, const RuntimeMethod* method) ;
// tripolygon.UModeler.EDistanceToEdgeDesc tripolygon.UModeler.Edge::CalculateSquaredDistance(UnityEngine.Vector3,System.Single&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Edge_CalculateSquaredDistance_mBD64EC1E55C36BFB1AE42B6692B42262E1578C2B (Edge_t61E163F7AA3BA416F72B1EDF0DD966F41041D4FF* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___pos0, float* ___distance1, const RuntimeMethod* method) ;
// UnityEngine.Vector3 tripolygon.UModeler.Edge::GetDir()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Edge_GetDir_m95D71E3034B234FF7CF29D4DD636519AFC98F7C8 (Edge_t61E163F7AA3BA416F72B1EDF0DD966F41041D4FF* __this, const RuntimeMethod* method) ;
// System.Void tripolygon.UModeler.MathUtil/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_m6FD7C1B8437D856791FBDB4C405D2424AC8D5475 (U3CU3Ec_t0AE2255F25D8D7ACA16A285DCF06E69F0D3951D6* __this, const RuntimeMethod* method) ;
// System.Collections.Generic.List`1<tripolygon.UModeler.IndexPair> tripolygon.UModeler.SimplePolygon::FindPrevEdges(tripolygon.UModeler.IndexPair)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR List_1_t77E791A5D872DCB1195678FCECC444A825292814* SimplePolygon_FindPrevEdges_mB62BB11046AEA889F075197B885E6AF00D52B01B (SimplePolygon_t5F51D3D1F485B3C377E0E40766EBFD86BA9D9385* __this, IndexPair_t6886ED92041E20F053A60B5DE14E4710BB42A376* ___e0, const RuntimeMethod* method) ;
// System.Collections.Generic.List`1<tripolygon.UModeler.IndexPair> tripolygon.UModeler.SimplePolygon::FindNextEdges(tripolygon.UModeler.IndexPair)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR List_1_t77E791A5D872DCB1195678FCECC444A825292814* SimplePolygon_FindNextEdges_m2F8B9375D5A2002CA6A695206791CACB87155F03 (SimplePolygon_t5F51D3D1F485B3C377E0E40766EBFD86BA9D9385* __this, IndexPair_t6886ED92041E20F053A60B5DE14E4710BB42A376* ___e0, const RuntimeMethod* method) ;
// tripolygon.UModeler.SimplePolygon tripolygon.UModeler.EditableMesh::FindPolygon(System.UInt64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR SimplePolygon_t5F51D3D1F485B3C377E0E40766EBFD86BA9D9385* EditableMesh_FindPolygon_m8436DDE6CDA98DC1BDF39486FF5763543249C5FD (EditableMesh_tF419912423C538859FC4EDB1F6ABD7314E01A476* __this, uint64_t ___id0, const RuntimeMethod* method) ;
// System.Boolean tripolygon.UModeler.PlaneEx::IsEquivalent(tripolygon.UModeler.PlaneEx,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool PlaneEx_IsEquivalent_m481649C10F4115B92F9538B7AA14A45DF9C6A1A1 (PlaneEx_t5512A7D4BF235ED6ED6F1F09A1621A1DCB31509D* __this, PlaneEx_t5512A7D4BF235ED6ED6F1F09A1621A1DCB31509D* ___plane0, float ___epsilon1, const RuntimeMethod* method) ;
// System.Single tripolygon.UModeler.PlaneEx::CalcDistanceToPoint(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float PlaneEx_CalcDistanceToPoint_m72481C5E65ADBF9FBDF999CF3188D9725D7D2F16 (PlaneEx_t5512A7D4BF235ED6ED6F1F09A1621A1DCB31509D* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___pt0, const RuntimeMethod* method) ;
// System.Boolean tripolygon.UModeler.SimplePolygon::IsPosInside(UnityEngine.Vector3,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool SimplePolygon_IsPosInside_m2A84207068B1B24E0A9B48D4576EE8FFE793B97E (SimplePolygon_t5F51D3D1F485B3C377E0E40766EBFD86BA9D9385* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___pos0, bool ___checkOnEdge1, const RuntimeMethod* method) ;
// tripolygon.UModeler.PlaneEx tripolygon.UModeler.Util::FindBestPlane(tripolygon.UModeler.EditableMesh,UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR PlaneEx_t5512A7D4BF235ED6ED6F1F09A1621A1DCB31509D* Util_FindBestPlane_m239AC100484C660846057EBB3267A23594FEEC43 (EditableMesh_tF419912423C538859FC4EDB1F6ABD7314E01A476* ___editableMesh0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___p01, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___p12, const RuntimeMethod* method) ;
// tripolygon.UModeler.SimplePolygon tripolygon.UModeler.EditableMesh::GetPolygon(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR SimplePolygon_t5F51D3D1F485B3C377E0E40766EBFD86BA9D9385* EditableMesh_GetPolygon_mD4F6AF94D277FD14E96037738A1FF51B220309F2 (EditableMesh_tF419912423C538859FC4EDB1F6ABD7314E01A476* __this, int32_t ___idx0, const RuntimeMethod* method) ;
// System.Boolean tripolygon.UModeler.SimplePolygon::ContainsEdge(tripolygon.UModeler.Edge)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool SimplePolygon_ContainsEdge_m57999509C1F7EDA82C88668902A2FD4981B15A71 (SimplePolygon_t5F51D3D1F485B3C377E0E40766EBFD86BA9D9385* __this, Edge_t61E163F7AA3BA416F72B1EDF0DD966F41041D4FF* ___edge0, const RuntimeMethod* method) ;
// tripolygon.UModeler.BSPTree2D tripolygon.UModeler.SimplePolygon::get_bsptree()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR BSPTree2D_t9E8EF14D272A60027A636E897210797581B95327* SimplePolygon_get_bsptree_m23D0CD8F1E46D44ECD88C8609E1574BB9D6F2728 (SimplePolygon_t5F51D3D1F485B3C377E0E40766EBFD86BA9D9385* __this, const RuntimeMethod* method) ;
// System.Boolean tripolygon.UModeler.BSPTree2D::IsInside(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool BSPTree2D_IsInside_m650655EAF3F1AE9AF272D0D138B9817B1DEA5E03 (BSPTree2D_t9E8EF14D272A60027A636E897210797581B95327* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___pos0, const RuntimeMethod* method) ;
// T System.Collections.Generic.List`1<tripolygon.UModeler.Util/ClippingVertex>::get_Item(System.Int32)
inline ClippingVertex_tF5DB1E0668D7F574FF74C67BC6C91561FAF13E30 List_1_get_Item_mE2354D72C00BBCA64441D77732E04E9E56069425 (List_1_tD13CD97762EDE4928859DDC2999E6E2175B20A11* __this, int32_t ___index0, const RuntimeMethod* method)
{
	return ((  ClippingVertex_tF5DB1E0668D7F574FF74C67BC6C91561FAF13E30 (*) (List_1_tD13CD97762EDE4928859DDC2999E6E2175B20A11*, int32_t, const RuntimeMethod*))List_1_get_Item_mE2354D72C00BBCA64441D77732E04E9E56069425_gshared)(__this, ___index0, method);
}
// System.Int32 System.Collections.Generic.List`1<tripolygon.UModeler.Util/ClippingVertex>::get_Count()
inline int32_t List_1_get_Count_m39BE269C49EF164BBA706DF15603809754CCD1F9_inline (List_1_tD13CD97762EDE4928859DDC2999E6E2175B20A11* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (List_1_tD13CD97762EDE4928859DDC2999E6E2175B20A11*, const RuntimeMethod*))List_1_get_Count_m39BE269C49EF164BBA706DF15603809754CCD1F9_gshared_inline)(__this, method);
}
// System.Void System.Collections.Generic.List`1<tripolygon.UModeler.Util/ClippingVertex>::.ctor()
inline void List_1__ctor_m55E32E673C1206F631655902E4BA7FB92ED22DC8 (List_1_tD13CD97762EDE4928859DDC2999E6E2175B20A11* __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_tD13CD97762EDE4928859DDC2999E6E2175B20A11*, const RuntimeMethod*))List_1__ctor_m55E32E673C1206F631655902E4BA7FB92ED22DC8_gshared)(__this, method);
}
// System.Void tripolygon.UModeler.Util/ClippingVertex::.ctor(tripolygon.UModeler.Vertex,tripolygon.UModeler.Util/EClippingVertexType,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ClippingVertex__ctor_m449126CCE5B7596828D939C80C832B40FA77107D (ClippingVertex_tF5DB1E0668D7F574FF74C67BC6C91561FAF13E30* __this, Vertex_tB6D4D191E463D1653AA47DED15E41F21BA5A21FC* ____vtx0, int32_t ____type1, bool ____zero_dist_no_created2, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<tripolygon.UModeler.Util/ClippingVertex>::Add(T)
inline void List_1_Add_mFB89FD2BEC65E65F1A68C47CBA4E02B6E8449495_inline (List_1_tD13CD97762EDE4928859DDC2999E6E2175B20A11* __this, ClippingVertex_tF5DB1E0668D7F574FF74C67BC6C91561FAF13E30 ___item0, const RuntimeMethod* method)
{
	((  void (*) (List_1_tD13CD97762EDE4928859DDC2999E6E2175B20A11*, ClippingVertex_tF5DB1E0668D7F574FF74C67BC6C91561FAF13E30, const RuntimeMethod*))List_1_Add_mFB89FD2BEC65E65F1A68C47CBA4E02B6E8449495_gshared_inline)(__this, ___item0, method);
}
// UnityEngine.Color UnityEngine.Color::op_Subtraction(UnityEngine.Color,UnityEngine.Color)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Color_tD001788D726C3A7F1379BEED0260B9591F440C1F Color_op_Subtraction_mF003448D819F2A41405BB6D85F1563CDA900B07F_inline (Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___a0, Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___b1, const RuntimeMethod* method) ;
// System.Boolean tripolygon.UModeler.PlaneEx::RayHit(UnityEngine.Vector3,UnityEngine.Vector3,System.Single&,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool PlaneEx_RayHit_mA82D46895EF3FB6FC10719F3EF124F08955269EF (PlaneEx_t5512A7D4BF235ED6ED6F1F09A1621A1DCB31509D* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___origin0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___direction1, float* ___t2, bool ___excludeBackface3, const RuntimeMethod* method) ;
// UnityEngine.Color UnityEngine.Color::op_Multiply(UnityEngine.Color,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Color_tD001788D726C3A7F1379BEED0260B9591F440C1F Color_op_Multiply_m379B20A820266ACF82A21425B9CAE8DCD773CFBB_inline (Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___a0, float ___b1, const RuntimeMethod* method) ;
// UnityEngine.Color UnityEngine.Color::op_Addition(UnityEngine.Color,UnityEngine.Color)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Color_tD001788D726C3A7F1379BEED0260B9591F440C1F Color_op_Addition_mA7A51CACA49ED8D23D3D9CA3A0092D32F657E053_inline (Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___a0, Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___b1, const RuntimeMethod* method) ;
// System.Void tripolygon.UModeler.Vertex::.ctor(UnityEngine.Vector3,UnityEngine.Vector2,UnityEngine.Color)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Vertex__ctor_mB8077F23FEF7A57733513EE841DCF8C906A9E704 (Vertex_tB6D4D191E463D1653AA47DED15E41F21BA5A21FC* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ____pos0, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ____uv1, Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ____color2, const RuntimeMethod* method) ;
// System.Int32 tripolygon.UModeler.Util::CountVertexOnPlane(System.Collections.Generic.List`1<tripolygon.UModeler.Util/ClippingVertex>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Util_CountVertexOnPlane_m89D8EE0BD96C4B02CA83B06A67E3AE32C08A2A8E (List_1_tD13CD97762EDE4928859DDC2999E6E2175B20A11* ___vertices0, const RuntimeMethod* method) ;
// System.Void tripolygon.UModeler.Util::ClipByPlane(System.Collections.Generic.List`1<tripolygon.UModeler.Vertex>,tripolygon.UModeler.PlaneEx,System.Collections.Generic.List`1<tripolygon.UModeler.Util/ClippingVertex>&,System.Collections.Generic.List`1<tripolygon.UModeler.Util/ClippingVertex>&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Util_ClipByPlane_m4B4209D0EECEAC8788E27258020F65C3BAA4B736 (List_1_t302A75244C10A0CEF3AC031C484C2772A9D30A6F* ___vertices0, PlaneEx_t5512A7D4BF235ED6ED6F1F09A1621A1DCB31509D* ___plane1, List_1_tD13CD97762EDE4928859DDC2999E6E2175B20A11** ___above2, List_1_tD13CD97762EDE4928859DDC2999E6E2175B20A11** ___below3, const RuntimeMethod* method) ;
// System.Collections.Generic.List`1<tripolygon.UModeler.Vertex> tripolygon.UModeler.Util::FromClippingVerticesToVertices(System.Collections.Generic.List`1<tripolygon.UModeler.Util/ClippingVertex>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR List_1_t302A75244C10A0CEF3AC031C484C2772A9D30A6F* Util_FromClippingVerticesToVertices_m91FB3F76B9597D3FC8324D59483337872C437E37 (List_1_tD13CD97762EDE4928859DDC2999E6E2175B20A11* ___clippingVertices0, const RuntimeMethod* method) ;
// System.Void tripolygon.UModeler.SimplePolygon::.ctor(System.Collections.Generic.List`1<tripolygon.UModeler.Vertex>,tripolygon.UModeler.PlaneEx,System.Boolean,tripolygon.UModeler.EPolygonFlag)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SimplePolygon__ctor_m075A96EE98FE20B45D2B499E364AB03432551D67 (SimplePolygon_t5F51D3D1F485B3C377E0E40766EBFD86BA9D9385* __this, List_1_t302A75244C10A0CEF3AC031C484C2772A9D30A6F* ___vertices0, PlaneEx_t5512A7D4BF235ED6ED6F1F09A1621A1DCB31509D* ____plane1, bool ___open2, int32_t ___flags3, const RuntimeMethod* method) ;
// System.Boolean tripolygon.UModeler.SimplePolygon::IsValid(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool SimplePolygon_IsValid_m4F619A7FC8918E4C286BBBDFE407E5CF17F097F5 (SimplePolygon_t5F51D3D1F485B3C377E0E40766EBFD86BA9D9385* __this, bool ___strict_check0, const RuntimeMethod* method) ;
// System.Boolean tripolygon.UModeler.SimplePolygon::IsOpen()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool SimplePolygon_IsOpen_m706572246C373B3472B0F4F4E92D43DDE2CC7017 (SimplePolygon_t5F51D3D1F485B3C377E0E40766EBFD86BA9D9385* __this, const RuntimeMethod* method) ;
// System.Void tripolygon.UModeler.EditableMesh::AddPolygon(tripolygon.UModeler.SimplePolygon)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EditableMesh_AddPolygon_mF57867AD29D5AB63CD45C8E13373C0C93DF53FFD (EditableMesh_tF419912423C538859FC4EDB1F6ABD7314E01A476* __this, SimplePolygon_t5F51D3D1F485B3C377E0E40766EBFD86BA9D9385* ___polygon0, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<tripolygon.UModeler.SimplePolygon>::.ctor()
inline void List_1__ctor_m0CFEC6DF8A1CFB6838EBE5970ADD5DDA4469FAB0 (List_1_tBD3EFF6C36C49D37E37AA532C06442E0AEC0544D* __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_tBD3EFF6C36C49D37E37AA532C06442E0AEC0544D*, const RuntimeMethod*))List_1__ctor_m7F078BB342729BDF11327FD89D7872265328F690_gshared)(__this, method);
}
// System.Boolean tripolygon.UModeler.PlaneEx::IsOnPlane(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool PlaneEx_IsOnPlane_mB7389A07752E3D2329841098DA4E9F37E5F4765C (PlaneEx_t5512A7D4BF235ED6ED6F1F09A1621A1DCB31509D* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___pos0, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<tripolygon.UModeler.SimplePolygon>::Add(T)
inline void List_1_Add_m0DF26D386384974DAC8B0D1C07AC0EF19FF930A1_inline (List_1_tBD3EFF6C36C49D37E37AA532C06442E0AEC0544D* __this, SimplePolygon_t5F51D3D1F485B3C377E0E40766EBFD86BA9D9385* ___item0, const RuntimeMethod* method)
{
	((  void (*) (List_1_tBD3EFF6C36C49D37E37AA532C06442E0AEC0544D*, SimplePolygon_t5F51D3D1F485B3C377E0E40766EBFD86BA9D9385*, const RuntimeMethod*))List_1_Add_mEBCF994CC3814631017F46A387B1A192ED6C85C7_gshared_inline)(__this, ___item0, method);
}
// T System.Collections.Generic.List`1<tripolygon.UModeler.SimplePolygon>::get_Item(System.Int32)
inline SimplePolygon_t5F51D3D1F485B3C377E0E40766EBFD86BA9D9385* List_1_get_Item_m6DF1DC5CD1B48E953F95D42B4899B75CC59BA29F (List_1_tBD3EFF6C36C49D37E37AA532C06442E0AEC0544D* __this, int32_t ___index0, const RuntimeMethod* method)
{
	return ((  SimplePolygon_t5F51D3D1F485B3C377E0E40766EBFD86BA9D9385* (*) (List_1_tBD3EFF6C36C49D37E37AA532C06442E0AEC0544D*, int32_t, const RuntimeMethod*))List_1_get_Item_m33561245D64798C2AB07584C0EC4F240E4839A38_gshared)(__this, ___index0, method);
}
// System.Boolean tripolygon.UModeler.PlaneEx::IsTowardSameDirection(tripolygon.UModeler.PlaneEx)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool PlaneEx_IsTowardSameDirection_m61A6CCE474823083416626B1B2E0040E9F41B128 (PlaneEx_t5512A7D4BF235ED6ED6F1F09A1621A1DCB31509D* __this, PlaneEx_t5512A7D4BF235ED6ED6F1F09A1621A1DCB31509D* ___plane0, const RuntimeMethod* method) ;
// System.Void tripolygon.UModeler.SimplePolygon::set_plane(tripolygon.UModeler.PlaneEx)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SimplePolygon_set_plane_m7E841762B582586ECC0C30C5DA7B345F5A7A6E8A (SimplePolygon_t5F51D3D1F485B3C377E0E40766EBFD86BA9D9385* __this, PlaneEx_t5512A7D4BF235ED6ED6F1F09A1621A1DCB31509D* ___value0, const RuntimeMethod* method) ;
// System.Int32 System.Collections.Generic.List`1<tripolygon.UModeler.SimplePolygon>::get_Count()
inline int32_t List_1_get_Count_mA79590207FB644521F7A974F233A21E17FB60578_inline (List_1_tBD3EFF6C36C49D37E37AA532C06442E0AEC0544D* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (List_1_tBD3EFF6C36C49D37E37AA532C06442E0AEC0544D*, const RuntimeMethod*))List_1_get_Count_m4407E4C389F22B8CEC282C15D56516658746C383_gshared_inline)(__this, method);
}
// tripolygon.UModeler.SimplePolygon tripolygon.UModeler.SimplePolygon::Flip()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR SimplePolygon_t5F51D3D1F485B3C377E0E40766EBFD86BA9D9385* SimplePolygon_Flip_mDF1391E8924332ABBB637357E24AB7D13465E2BF (SimplePolygon_t5F51D3D1F485B3C377E0E40766EBFD86BA9D9385* __this, const RuntimeMethod* method) ;
// System.Collections.Generic.List`1<tripolygon.UModeler.SimplePolygon> tripolygon.UModeler.EditableMesh::AddSubtractedPolygon(tripolygon.UModeler.SimplePolygon)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR List_1_tBD3EFF6C36C49D37E37AA532C06442E0AEC0544D* EditableMesh_AddSubtractedPolygon_m57BA1B3D2F4E21EC3B17F3A7AB4D606862481DDD (EditableMesh_tF419912423C538859FC4EDB1F6ABD7314E01A476* __this, SimplePolygon_t5F51D3D1F485B3C377E0E40766EBFD86BA9D9385* ___polygon0, const RuntimeMethod* method) ;
// System.Collections.Generic.List`1<tripolygon.UModeler.Vertex> tripolygon.UModeler.SimplePolygon::GetVertexList()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR List_1_t302A75244C10A0CEF3AC031C484C2772A9D30A6F* SimplePolygon_GetVertexList_m8DFDD7DE30F8978236330F89982370EB5455368C_inline (SimplePolygon_t5F51D3D1F485B3C377E0E40766EBFD86BA9D9385* __this, const RuntimeMethod* method) ;
// tripolygon.UModeler.SimplePolygon tripolygon.UModeler.Util::FindPolygonHavingVertex(tripolygon.UModeler.EditableMesh,System.Collections.Generic.List`1<tripolygon.UModeler.Vertex>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR SimplePolygon_t5F51D3D1F485B3C377E0E40766EBFD86BA9D9385* Util_FindPolygonHavingVertex_m9756E2F7264233DBBD726DCA12C884163B0C5646 (EditableMesh_tF419912423C538859FC4EDB1F6ABD7314E01A476* ___editableMesh0, List_1_t302A75244C10A0CEF3AC031C484C2772A9D30A6F* ___vertices1, const RuntimeMethod* method) ;
// System.Int32 tripolygon.UModeler.Util::CountVertexAbove(System.Collections.Generic.List`1<tripolygon.UModeler.Vertex>,tripolygon.UModeler.PlaneEx)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Util_CountVertexAbove_mCB10810F3DD128853E8B0369B801B542B239ADC3 (List_1_t302A75244C10A0CEF3AC031C484C2772A9D30A6F* ___vertices0, PlaneEx_t5512A7D4BF235ED6ED6F1F09A1621A1DCB31509D* ___plane1, const RuntimeMethod* method) ;
// System.Int32 tripolygon.UModeler.Util::CountVertexBelow(System.Collections.Generic.List`1<tripolygon.UModeler.Vertex>,tripolygon.UModeler.PlaneEx)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Util_CountVertexBelow_m73C587899B185E7389434BD073973924123B2CA0 (List_1_t302A75244C10A0CEF3AC031C484C2772A9D30A6F* ___vertices0, PlaneEx_t5512A7D4BF235ED6ED6F1F09A1621A1DCB31509D* ___plane1, const RuntimeMethod* method) ;
// tripolygon.UModeler.SimplePolygon tripolygon.UModeler.SimplePolygon::Subtract(tripolygon.UModeler.SimplePolygon)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR SimplePolygon_t5F51D3D1F485B3C377E0E40766EBFD86BA9D9385* SimplePolygon_Subtract_mC44396258FEAD142DB3A89479EAC4F9DFEBAD872 (SimplePolygon_t5F51D3D1F485B3C377E0E40766EBFD86BA9D9385* __this, SimplePolygon_t5F51D3D1F485B3C377E0E40766EBFD86BA9D9385* ___BPolygon0, const RuntimeMethod* method) ;
// System.Void tripolygon.UModeler.SimplePolygon::Attach(System.Collections.Generic.List`1<tripolygon.UModeler.Vertex>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SimplePolygon_Attach_m8B461FD3C882AE21F7EC03C7F29A76A06CF572EA (SimplePolygon_t5F51D3D1F485B3C377E0E40766EBFD86BA9D9385* __this, List_1_t302A75244C10A0CEF3AC031C484C2772A9D30A6F* ___polygon0, const RuntimeMethod* method) ;
// System.Boolean tripolygon.UModeler.SimplePolygon::AtLeastOneVertexIncluded(System.Collections.Generic.List`1<tripolygon.UModeler.Vertex>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool SimplePolygon_AtLeastOneVertexIncluded_mC1037BD75E994BA0F0415D8C987D73CFFF77AF39 (SimplePolygon_t5F51D3D1F485B3C377E0E40766EBFD86BA9D9385* __this, List_1_t302A75244C10A0CEF3AC031C484C2772A9D30A6F* ___vertices0, const RuntimeMethod* method) ;
// System.Collections.Generic.List`1<tripolygon.UModeler.Edge> tripolygon.UModeler.SimplePolygon::FindOverlappedEdge(tripolygon.UModeler.Edge)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR List_1_t9A7220215C9ED1BE212A9632A14022A68B3BFC12* SimplePolygon_FindOverlappedEdge_m2D7E7BC0E500340A9A97728F5E09B4B74F2D76F3 (SimplePolygon_t5F51D3D1F485B3C377E0E40766EBFD86BA9D9385* __this, Edge_t61E163F7AA3BA416F72B1EDF0DD966F41041D4FF* ___edge0, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Camera::ScreenToWorldPoint(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Camera_ScreenToWorldPoint_m5EA3148F070985EC72127AAC3448D8D6ABE6E7E5 (Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___position0, const RuntimeMethod* method) ;
// System.Int32[] UnityEngine.Mesh::GetIndices(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* Mesh_GetIndices_m112B85EF32EE3C446947CE6CBC1AF3D50FC18179 (Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* __this, int32_t ___submesh0, const RuntimeMethod* method) ;
// T System.Collections.Generic.List`1<tripolygon.UModeler.Edge>::get_Item(System.Int32)
inline Edge_t61E163F7AA3BA416F72B1EDF0DD966F41041D4FF* List_1_get_Item_m366D9A7BF7C504940BEF501AB07B83FD7A22BC7F (List_1_t9A7220215C9ED1BE212A9632A14022A68B3BFC12* __this, int32_t ___index0, const RuntimeMethod* method)
{
	return ((  Edge_t61E163F7AA3BA416F72B1EDF0DD966F41041D4FF* (*) (List_1_t9A7220215C9ED1BE212A9632A14022A68B3BFC12*, int32_t, const RuntimeMethod*))List_1_get_Item_m33561245D64798C2AB07584C0EC4F240E4839A38_gshared)(__this, ___index0, method);
}
// System.Boolean tripolygon.UModeler.Edge::IsEquivalent(tripolygon.UModeler.Edge)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Edge_IsEquivalent_m4634710D1FFBED8319318CED11063439B0498365 (Edge_t61E163F7AA3BA416F72B1EDF0DD966F41041D4FF* __this, Edge_t61E163F7AA3BA416F72B1EDF0DD966F41041D4FF* ___rhs0, const RuntimeMethod* method) ;
// System.Int32 System.Collections.Generic.List`1<tripolygon.UModeler.Edge>::get_Count()
inline int32_t List_1_get_Count_m352EA89E4CDFF4A895FECAF36592AA5A290CBB5E_inline (List_1_t9A7220215C9ED1BE212A9632A14022A68B3BFC12* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (List_1_t9A7220215C9ED1BE212A9632A14022A68B3BFC12*, const RuntimeMethod*))List_1_get_Count_m4407E4C389F22B8CEC282C15D56516658746C383_gshared_inline)(__this, method);
}
// UnityEngine.Vector3 UnityEngine.Transform::get_lossyScale()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Transform_get_lossyScale_mFF740DA4BE1489C6882CD2F3A37B7321176E5D07 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, const RuntimeMethod* method) ;
// System.Single tripolygon.UModeler.Util::GetAdaptedVertexSize(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Util_GetAdaptedVertexSize_mA6CACCC30A4D2D99A09283C13516A3A3BD151B73 (float ___distFromVtxToCamera0, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Matrix4x4::MultiplyPoint3x4(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Matrix4x4_MultiplyPoint3x4_mACCBD70AFA82C63DA88555780B7B6B01281AB814 (Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___point0, const RuntimeMethod* method) ;
// System.Single tripolygon.UModeler.Util::GetAdaptedVertexSizeOnWorld(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Util_GetAdaptedVertexSizeOnWorld_mC851DD31427747CA1AC171A4F52AD4FA0175FBEC (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___worldPos0, const RuntimeMethod* method) ;
// System.Single tripolygon.UModeler.Util::GetAdaptedVertexSize(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Util_GetAdaptedVertexSize_m3CA1C0DE28B376C2E33F62615733D04B3409D43B (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___cameraPos0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___worldPos1, const RuntimeMethod* method) ;
// System.Single tripolygon.UModeler.Util::GetScreenSize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Util_GetScreenSize_m0B9D8A7A5608280361EC767141C2AD75139B8255 (const RuntimeMethod* method) ;
// UnityEngine.Rect UnityEngine.Camera::get_pixelRect()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D Camera_get_pixelRect_m5F40F5C324EB252261F66962411EE08CC4BE39E7 (Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector2 UnityEngine.Rect::get_min()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 Rect_get_min_mD0D1BABF9C955D2D9CCA86E257B0783ACDEE69AC (Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector2 UnityEngine.Rect::get_max()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 Rect_get_max_m60149158D9A01113214BB417AA48CEF774899167 (Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D* __this, const RuntimeMethod* method) ;
// System.Single UnityEngine.Vector2::Distance(UnityEngine.Vector2,UnityEngine.Vector2)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Vector2_Distance_mBACBB1609E1894D68F882D86A93519E311810C89_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___a0, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___b1, const RuntimeMethod* method) ;
// System.Single tripolygon.UModeler.Util::DistanceToCameraInWorld(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Util_DistanceToCameraInWorld_mF665E4F1FC247A86BC1D7607D0D0E0DC39DCBB76 (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___worldPos0, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Camera::get_orthographic()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Camera_get_orthographic_m904DEFC76C54DA4E30C20A62A86D5D87B7D4DD8F (Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* __this, const RuntimeMethod* method) ;
// System.Single UnityEngine.Camera::get_fieldOfView()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Camera_get_fieldOfView_m9A93F17BBF89F496AE231C21817AFD1C1E833FBB (Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* __this, const RuntimeMethod* method) ;
// System.Single tripolygon.UModeler.Util::DistanceToCamera(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Util_DistanceToCamera_m182F7726DACCD451AC7068AA9363420A203D6028 (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___pos0, const RuntimeMethod* method) ;
// System.Single tripolygon.UModeler.Util::CameraFovPow()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Util_CameraFovPow_mB4E93B914B7AB013AE4A5F31497CDC23732C2214 (const RuntimeMethod* method) ;
// UnityEngine.Vector3 tripolygon.UModeler.AABB::GetCenter()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 AABB_GetCenter_m5231D87131E3ECF85D66AE7A73FF3328FB89F720 (AABB_t9C7B4FCF1ED10D750373270786690AAF7801AC6B* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Texture2D::.ctor(System.Int32,System.Int32,UnityEngine.TextureFormat,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Texture2D__ctor_mECF60A9EC0638EC353C02C8E99B6B465D23BE917 (Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* __this, int32_t ___width0, int32_t ___height1, int32_t ___textureFormat2, bool ___mipChain3, const RuntimeMethod* method) ;
// System.Void UnityEngine.Color32::.ctor(System.Byte,System.Byte,System.Byte,System.Byte)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Color32__ctor_mC9C6B443F0C7CA3F8B174158B2AF6F05E18EAC4E_inline (Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B* __this, uint8_t ___r0, uint8_t ___g1, uint8_t ___b2, uint8_t ___a3, const RuntimeMethod* method) ;
// System.Void UnityEngine.Texture2D::SetPixels32(UnityEngine.Color32[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Texture2D_SetPixels32_m169F9873A21FB8DECA24DC1B8F06FB23D13BEE2A (Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* __this, Color32U5BU5D_t38116C3E91765C4C5726CE12C77FAD7F9F737259* ___colors0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Texture2D::Apply()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Texture2D_Apply_mA014182C9EE0BBF6EEE3B286854F29E50EB972DC (Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* __this, const RuntimeMethod* method) ;
// System.String System.String::Replace(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Replace_mABDB7003A1D0AEDCAE9FF85E3DFFFBA752D2A166 (String_t* __this, String_t* ___oldValue0, String_t* ___newValue1, const RuntimeMethod* method) ;
// System.Char System.String::get_Chars(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Il2CppChar String_get_Chars_mC49DF0CD2D3BE7BE97B3AD9C995BE3094F8E36D3 (String_t* __this, int32_t ___index0, const RuntimeMethod* method) ;
// System.String System.String::Insert(System.Int32,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Insert_mA279E748F06514A6D0B9B680D651D6A6C6BB561A (String_t* __this, int32_t ___startIndex0, String_t* ___value1, const RuntimeMethod* method) ;
// UnityEngine.Color[] UnityEngine.Texture2D::GetPixels()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ColorU5BU5D_t612261CF293F6FFC3D80AB52259FF0DC2B2CC389* Texture2D_GetPixels_m77A00D71DF5CDC7DAA0EE66FF2C90A24C7604039 (Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* __this, const RuntimeMethod* method) ;
// System.Single UnityEngine.Color::get_grayscale()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Color_get_grayscale_m35DB26808E366521ED38551860082DBB83A0EDBB_inline (Color_tD001788D726C3A7F1379BEED0260B9591F440C1F* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Color::.ctor(System.Single,System.Single,System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Color__ctor_m3786F0D6E510D9CFA544523A955870BD2A514C8C_inline (Color_tD001788D726C3A7F1379BEED0260B9591F440C1F* __this, float ___r0, float ___g1, float ___b2, float ___a3, const RuntimeMethod* method) ;
// System.Void UnityEngine.Texture2D::SetPixel(System.Int32,System.Int32,UnityEngine.Color)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Texture2D_SetPixel_m2CCFC5F729135D59DC4A697C2605A3FC5C8574DB (Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* __this, int32_t ___x0, int32_t ___y1, Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___color2, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::get_zero()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_get_zero_m0C1249C3F25B1C70EAD3CC8B31259975A457AE39_inline (const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::get_forward()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_get_forward_mAA55A7034304DF8B2152EAD49AE779FC4CA2EB4A_inline (const RuntimeMethod* method) ;
// UnityEngine.Quaternion UnityEngine.Quaternion::AngleAxis(System.Single,UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 Quaternion_AngleAxis_mF37022977B297E63AA70D69EA1C4C922FF22CC80 (float ___angle0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___axis1, const RuntimeMethod* method) ;
// UnityEngine.Matrix4x4 UnityEngine.Matrix4x4::TRS(UnityEngine.Vector3,UnityEngine.Quaternion,UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 Matrix4x4_TRS_mCC04FD47347234B451ACC6CCD2CE6D02E1E0E1E3 (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___pos0, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___q1, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___s2, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Matrix4x4::MultiplyVector(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Matrix4x4_MultiplyVector_mFD12F86A473E90BBB0002149ABA3917B2A518937 (Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___vector0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Vector3::.ctor(System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector3__ctor_m5F87930F9B0828E5652E2D9D01ED907C01122C86_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* __this, float ___x0, float ___y1, const RuntimeMethod* method) ;
// System.Void tripolygon.UModeler.UVUtil::CalcTextureBasis(UnityEngine.Vector3,UnityEngine.Vector3&,UnityEngine.Vector3&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UVUtil_CalcTextureBasis_m237CEF37696147F00086FC824117EB094F605454 (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___normal0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* ___basis_u1, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* ___basis_v2, const RuntimeMethod* method) ;
// System.Void tripolygon.UModeler.UVUtil::CalcTextureAxis(UnityEngine.Vector3,UnityEngine.Vector3&,UnityEngine.Vector3&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UVUtil_CalcTextureAxis_mF9730725A87A39A060A21ABC76019FEDF36CEC46 (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___normal0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* ___xv1, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* ___yv2, const RuntimeMethod* method) ;
// System.Void UnityEngine.Vector3::set_Item(System.Int32,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector3_set_Item_m79136861DEC5862CE7EC20AB3B0EF10A3957CEC3_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* __this, int32_t ___index0, float ___value1, const RuntimeMethod* method) ;
// System.Void tripolygon.UModeler.UVParameter::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UVParameter__ctor_mA4F56CBC322ACB03523E0184D8BF8BB16037ED82 (UVParameter_t3DB903DED34BB8F9E4C5E5345C316D0E793081B3* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Vector2::set_Item(System.Int32,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector2_set_Item_mEF309880B9B3B370B542AABEB32256EEC589DD03_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* __this, int32_t ___index0, float ___value1, const RuntimeMethod* method) ;
// System.Single UnityEngine.Vector2::get_Item(System.Int32)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Vector2_get_Item_m18BC65BB0512B16A1F9C8BE4B83A3E7BBAD7064D_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* __this, int32_t ___index0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Vector2::Normalize()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector2_Normalize_m56DABCAB5967DF37A6B96710477D3660D800C652_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* __this, const RuntimeMethod* method) ;
// System.Void System.IndexOutOfRangeException::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IndexOutOfRangeException__ctor_mFD06819F05B815BE2D6E826D4E04F4C449D0A425 (IndexOutOfRangeException_t7ECB35264FB6CA8FAA516BD958F4B2ADC78E8A82* __this, String_t* ___message0, const RuntimeMethod* method) ;
// System.Single UnityEngine.Vector3::Magnitude(UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Vector3_Magnitude_m21652D951393A3D7CE92CE40049A0E7F76544D1B_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___vector0, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::op_Division(UnityEngine.Vector3,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Division_mCC6BB24E372AB96B8380D1678446EF6A8BAE13BB_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___a0, float ___d1, const RuntimeMethod* method) ;
// System.Void System.Array::Clear(System.Array,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Array_Clear_m50BAA3751899858B097D3FF2ED31F284703FE5CB (RuntimeArray* ___array0, int32_t ___index1, int32_t ___length2, const RuntimeMethod* method) ;
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Conversion methods for marshalling of: tripolygon.UModeler.HotspotLayout/TransHotspotData
IL2CPP_EXTERN_C void TransHotspotData_t2A3F93D286B0BB07C96EDBD07629DDA4CA72AFBA_marshal_pinvoke(const TransHotspotData_t2A3F93D286B0BB07C96EDBD07629DDA4CA72AFBA& unmarshaled, TransHotspotData_t2A3F93D286B0BB07C96EDBD07629DDA4CA72AFBA_marshaled_pinvoke& marshaled)
{
	Exception_t* ___abLine_3Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'abLine' of type 'TransHotspotData': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___abLine_3Exception, NULL);
}
IL2CPP_EXTERN_C void TransHotspotData_t2A3F93D286B0BB07C96EDBD07629DDA4CA72AFBA_marshal_pinvoke_back(const TransHotspotData_t2A3F93D286B0BB07C96EDBD07629DDA4CA72AFBA_marshaled_pinvoke& marshaled, TransHotspotData_t2A3F93D286B0BB07C96EDBD07629DDA4CA72AFBA& unmarshaled)
{
	Exception_t* ___abLine_3Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'abLine' of type 'TransHotspotData': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___abLine_3Exception, NULL);
}
// Conversion method for clean up from marshalling of: tripolygon.UModeler.HotspotLayout/TransHotspotData
IL2CPP_EXTERN_C void TransHotspotData_t2A3F93D286B0BB07C96EDBD07629DDA4CA72AFBA_marshal_pinvoke_cleanup(TransHotspotData_t2A3F93D286B0BB07C96EDBD07629DDA4CA72AFBA_marshaled_pinvoke& marshaled)
{
}
// Conversion methods for marshalling of: tripolygon.UModeler.HotspotLayout/TransHotspotData
IL2CPP_EXTERN_C void TransHotspotData_t2A3F93D286B0BB07C96EDBD07629DDA4CA72AFBA_marshal_com(const TransHotspotData_t2A3F93D286B0BB07C96EDBD07629DDA4CA72AFBA& unmarshaled, TransHotspotData_t2A3F93D286B0BB07C96EDBD07629DDA4CA72AFBA_marshaled_com& marshaled)
{
	Exception_t* ___abLine_3Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'abLine' of type 'TransHotspotData': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___abLine_3Exception, NULL);
}
IL2CPP_EXTERN_C void TransHotspotData_t2A3F93D286B0BB07C96EDBD07629DDA4CA72AFBA_marshal_com_back(const TransHotspotData_t2A3F93D286B0BB07C96EDBD07629DDA4CA72AFBA_marshaled_com& marshaled, TransHotspotData_t2A3F93D286B0BB07C96EDBD07629DDA4CA72AFBA& unmarshaled)
{
	Exception_t* ___abLine_3Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'abLine' of type 'TransHotspotData': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___abLine_3Exception, NULL);
}
// Conversion method for clean up from marshalling of: tripolygon.UModeler.HotspotLayout/TransHotspotData
IL2CPP_EXTERN_C void TransHotspotData_t2A3F93D286B0BB07C96EDBD07629DDA4CA72AFBA_marshal_com_cleanup(TransHotspotData_t2A3F93D286B0BB07C96EDBD07629DDA4CA72AFBA_marshaled_com& marshaled)
{
}
// System.Void tripolygon.UModeler.HotspotLayout/TransHotspotData::PreProcess(UnityEngine.Vector2[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TransHotspotData_PreProcess_m417B10EE8CA088664296F15125A09EF4B7E54531 (TransHotspotData_t2A3F93D286B0BB07C96EDBD07629DDA4CA72AFBA* __this, Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* ___triangle0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Line2D_tAC46D1228FCBF2872CC1DF7DA8C02274FDE4A750_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* L_0 = ___triangle0;
		NullCheck(L_0);
		if ((!(((uint32_t)((int32_t)(((RuntimeArray*)L_0)->max_length))) == ((uint32_t)3))))
		{
			goto IL_005b;
		}
	}
	{
		Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* L_1 = ___triangle0;
		NullCheck(L_1);
		int32_t L_2 = 0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_3 = (L_1)->GetAt(static_cast<il2cpp_array_size_t>(L_2));
		__this->___a_0 = L_3;
		Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* L_4 = ___triangle0;
		NullCheck(L_4);
		int32_t L_5 = 1;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_6 = (L_4)->GetAt(static_cast<il2cpp_array_size_t>(L_5));
		__this->___b_1 = L_6;
		Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* L_7 = ___triangle0;
		NullCheck(L_7);
		int32_t L_8 = 2;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_9 = (L_7)->GetAt(static_cast<il2cpp_array_size_t>(L_8));
		__this->___c_2 = L_9;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_10 = __this->___b_1;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_11 = __this->___a_0;
		Line2D_tAC46D1228FCBF2872CC1DF7DA8C02274FDE4A750* L_12 = (Line2D_tAC46D1228FCBF2872CC1DF7DA8C02274FDE4A750*)il2cpp_codegen_object_new(Line2D_tAC46D1228FCBF2872CC1DF7DA8C02274FDE4A750_il2cpp_TypeInfo_var);
		NullCheck(L_12);
		Line2D__ctor_mCBAC2475401718A2EC118AA7818CBCBBA238490B(L_12, L_10, L_11, NULL);
		__this->___abLine_3 = L_12;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___abLine_3), (void*)L_12);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_13 = __this->___c_2;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_14 = __this->___a_0;
		Line2D_tAC46D1228FCBF2872CC1DF7DA8C02274FDE4A750* L_15 = (Line2D_tAC46D1228FCBF2872CC1DF7DA8C02274FDE4A750*)il2cpp_codegen_object_new(Line2D_tAC46D1228FCBF2872CC1DF7DA8C02274FDE4A750_il2cpp_TypeInfo_var);
		NullCheck(L_15);
		Line2D__ctor_mCBAC2475401718A2EC118AA7818CBCBBA238490B(L_15, L_13, L_14, NULL);
		__this->___acLine_4 = L_15;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___acLine_4), (void*)L_15);
	}

IL_005b:
	{
		return;
	}
}
IL2CPP_EXTERN_C  void TransHotspotData_PreProcess_m417B10EE8CA088664296F15125A09EF4B7E54531_AdjustorThunk (RuntimeObject* __this, Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* ___triangle0, const RuntimeMethod* method)
{
	TransHotspotData_t2A3F93D286B0BB07C96EDBD07629DDA4CA72AFBA* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<TransHotspotData_t2A3F93D286B0BB07C96EDBD07629DDA4CA72AFBA*>(__this + _offset);
	TransHotspotData_PreProcess_m417B10EE8CA088664296F15125A09EF4B7E54531(_thisAdjusted, ___triangle0, method);
}
// UnityEngine.Vector2 tripolygon.UModeler.HotspotLayout/TransHotspotData::GetUV(UnityEngine.Vector2)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 TransHotspotData_GetUV_mEF1FD33A3262C35B1C5081746AA5C8A00A42399A (TransHotspotData_t2A3F93D286B0BB07C96EDBD07629DDA4CA72AFBA* __this, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___pos0, const RuntimeMethod* method) 
{
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 V_0;
	memset((&V_0), 0, sizeof(V_0));
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 V_1;
	memset((&V_1), 0, sizeof(V_1));
	HitResult_t1C6A2CA0F36DF67C6BF66A35ECC5D1F9BA600AEA* V_2 = NULL;
	HitResult_t1C6A2CA0F36DF67C6BF66A35ECC5D1F9BA600AEA* V_3 = NULL;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 V_4;
	memset((&V_4), 0, sizeof(V_4));
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_0 = ___pos0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_1 = __this->___b_1;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_2;
		L_2 = Vector2_op_Subtraction_m44475FCDAD2DA2F98D78A6625EC2DCDFE8803837_inline(L_0, L_1, NULL);
		V_0 = L_2;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_3 = ___pos0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_4 = __this->___c_2;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_5;
		L_5 = Vector2_op_Subtraction_m44475FCDAD2DA2F98D78A6625EC2DCDFE8803837_inline(L_3, L_4, NULL);
		V_1 = L_5;
		Line2D_tAC46D1228FCBF2872CC1DF7DA8C02274FDE4A750* L_6 = __this->___acLine_4;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_7 = __this->___b_1;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_8;
		L_8 = Vector2_get_normalized_mF6722883AEFB5027690A778DF8ACC20F0FA65297_inline((&V_0), NULL);
		NullCheck(L_6);
		HitResult_t1C6A2CA0F36DF67C6BF66A35ECC5D1F9BA600AEA* L_9;
		L_9 = Line2D_RayHit_mECB8FDFB32AC50483ECB09E4AA6A5CD24D084DF0(L_6, L_7, L_8, NULL);
		V_2 = L_9;
		Line2D_tAC46D1228FCBF2872CC1DF7DA8C02274FDE4A750* L_10 = __this->___abLine_3;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_11 = __this->___c_2;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_12;
		L_12 = Vector2_get_normalized_mF6722883AEFB5027690A778DF8ACC20F0FA65297_inline((&V_1), NULL);
		NullCheck(L_10);
		HitResult_t1C6A2CA0F36DF67C6BF66A35ECC5D1F9BA600AEA* L_13;
		L_13 = Line2D_RayHit_mECB8FDFB32AC50483ECB09E4AA6A5CD24D084DF0(L_10, L_11, L_12, NULL);
		V_3 = L_13;
		float L_14;
		L_14 = Vector2_get_magnitude_m5C59B4056420AEFDB291AD0914A3F675330A75CE_inline((&V_0), NULL);
		HitResult_t1C6A2CA0F36DF67C6BF66A35ECC5D1F9BA600AEA* L_15 = V_2;
		NullCheck(L_15);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_16 = L_15->___pos_0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_17 = __this->___b_1;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_18;
		L_18 = Vector2_op_Subtraction_m44475FCDAD2DA2F98D78A6625EC2DCDFE8803837_inline(L_16, L_17, NULL);
		V_4 = L_18;
		float L_19;
		L_19 = Vector2_get_magnitude_m5C59B4056420AEFDB291AD0914A3F675330A75CE_inline((&V_4), NULL);
		float L_20;
		L_20 = Vector2_get_magnitude_m5C59B4056420AEFDB291AD0914A3F675330A75CE_inline((&V_1), NULL);
		HitResult_t1C6A2CA0F36DF67C6BF66A35ECC5D1F9BA600AEA* L_21 = V_3;
		NullCheck(L_21);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_22 = L_21->___pos_0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_23 = __this->___c_2;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_24;
		L_24 = Vector2_op_Subtraction_m44475FCDAD2DA2F98D78A6625EC2DCDFE8803837_inline(L_22, L_23, NULL);
		V_4 = L_24;
		float L_25;
		L_25 = Vector2_get_magnitude_m5C59B4056420AEFDB291AD0914A3F675330A75CE_inline((&V_4), NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_26;
		memset((&L_26), 0, sizeof(L_26));
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&L_26), ((float)il2cpp_codegen_subtract((1.0f), ((float)(L_14/L_19)))), ((float)il2cpp_codegen_subtract((1.0f), ((float)(L_20/L_25)))), /*hidden argument*/NULL);
		return L_26;
	}
}
IL2CPP_EXTERN_C  Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 TransHotspotData_GetUV_mEF1FD33A3262C35B1C5081746AA5C8A00A42399A_AdjustorThunk (RuntimeObject* __this, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___pos0, const RuntimeMethod* method)
{
	TransHotspotData_t2A3F93D286B0BB07C96EDBD07629DDA4CA72AFBA* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<TransHotspotData_t2A3F93D286B0BB07C96EDBD07629DDA4CA72AFBA*>(__this + _offset);
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 _returnValue;
	_returnValue = TransHotspotData_GetUV_mEF1FD33A3262C35B1C5081746AA5C8A00A42399A(_thisAdjusted, ___pos0, method);
	return _returnValue;
}
// UnityEngine.Vector2 tripolygon.UModeler.HotspotLayout/TransHotspotData::GetPos(UnityEngine.Vector2)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 TransHotspotData_GetPos_mF0BF832FF1F8F4CD93F1B7C404E1884DACD2C70E (TransHotspotData_t2A3F93D286B0BB07C96EDBD07629DDA4CA72AFBA* __this, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___uv0, const RuntimeMethod* method) 
{
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_0;
		L_0 = Vector2_get_zero_m32506C40EC2EE7D5D4410BF40D3EE683A3D5F32C_inline(NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_1 = __this->___a_0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_2 = ___uv0;
		float L_3 = L_2.___x_0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_4 = ___uv0;
		float L_5 = L_4.___y_1;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_6;
		L_6 = Vector2_op_Multiply_m2D984B613020089BF5165BA4CA10988E2DC771FE_inline(L_1, ((float)il2cpp_codegen_subtract(((float)il2cpp_codegen_subtract((1.0f), L_3)), L_5)), NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_7;
		L_7 = Vector2_op_Addition_m8136742CE6EE33BA4EB81C5F584678455917D2AE_inline(L_0, L_6, NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_8 = __this->___b_1;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_9 = ___uv0;
		float L_10 = L_9.___x_0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_11;
		L_11 = Vector2_op_Multiply_m2D984B613020089BF5165BA4CA10988E2DC771FE_inline(L_8, L_10, NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_12;
		L_12 = Vector2_op_Addition_m8136742CE6EE33BA4EB81C5F584678455917D2AE_inline(L_7, L_11, NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_13 = __this->___c_2;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_14 = ___uv0;
		float L_15 = L_14.___y_1;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_16;
		L_16 = Vector2_op_Multiply_m2D984B613020089BF5165BA4CA10988E2DC771FE_inline(L_13, L_15, NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_17;
		L_17 = Vector2_op_Addition_m8136742CE6EE33BA4EB81C5F584678455917D2AE_inline(L_12, L_16, NULL);
		return L_17;
	}
}
IL2CPP_EXTERN_C  Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 TransHotspotData_GetPos_mF0BF832FF1F8F4CD93F1B7C404E1884DACD2C70E_AdjustorThunk (RuntimeObject* __this, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___uv0, const RuntimeMethod* method)
{
	TransHotspotData_t2A3F93D286B0BB07C96EDBD07629DDA4CA72AFBA* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<TransHotspotData_t2A3F93D286B0BB07C96EDBD07629DDA4CA72AFBA*>(__this + _offset);
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 _returnValue;
	_returnValue = TransHotspotData_GetPos_mF0BF832FF1F8F4CD93F1B7C404E1884DACD2C70E(_thisAdjusted, ___uv0, method);
	return _returnValue;
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void tripolygon.UModeler.HotspotLayout/<>c__DisplayClass5_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass5_0__ctor_m9F66BBDCC108B5C1199870E6F8B079C184E75FAC (U3CU3Ec__DisplayClass5_0_tFAF9EE157798AFB91BB83DBE0A6B4768F30EB75D* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
// System.Boolean tripolygon.UModeler.HotspotLayout/<>c__DisplayClass5_0::<GetHotspotUVs>b__0(System.Collections.Generic.KeyValuePair`2<tripolygon.UModeler.Hotspot,System.Single>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CU3Ec__DisplayClass5_0_U3CGetHotspotUVsU3Eb__0_m719C46B28334B1F3E635016DDF205FEAD15141FC (U3CU3Ec__DisplayClass5_0_tFAF9EE157798AFB91BB83DBE0A6B4768F30EB75D* __this, KeyValuePair_2_tABDAC15331E8BE8B1534467FC11E1A59441A1865 ___a0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&KeyValuePair_2_get_Value_m6FA5BE7064800329CEC3EBCA8A7CB46C6FA7930A_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		float L_0;
		L_0 = KeyValuePair_2_get_Value_m6FA5BE7064800329CEC3EBCA8A7CB46C6FA7930A_inline((&___a0), KeyValuePair_2_get_Value_m6FA5BE7064800329CEC3EBCA8A7CB46C6FA7930A_RuntimeMethod_var);
		float L_1 = __this->___gab_0;
		return (bool)((((int32_t)((!(((float)L_0) <= ((float)L_1)))? 1 : 0)) == ((int32_t)0))? 1 : 0);
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
// System.Void tripolygon.UModeler.HotspotLayout/<>c::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__cctor_m0D71897A037CC33E4A251887236242C2BB10C448 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_t5EEE260C4A12263EE0C77B5F2414795F3DBA94ED_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CU3Ec_t5EEE260C4A12263EE0C77B5F2414795F3DBA94ED* L_0 = (U3CU3Ec_t5EEE260C4A12263EE0C77B5F2414795F3DBA94ED*)il2cpp_codegen_object_new(U3CU3Ec_t5EEE260C4A12263EE0C77B5F2414795F3DBA94ED_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		U3CU3Ec__ctor_m2C4A90CCCCB9010B613255724074B165263D771A(L_0, NULL);
		((U3CU3Ec_t5EEE260C4A12263EE0C77B5F2414795F3DBA94ED_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t5EEE260C4A12263EE0C77B5F2414795F3DBA94ED_il2cpp_TypeInfo_var))->___U3CU3E9_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&((U3CU3Ec_t5EEE260C4A12263EE0C77B5F2414795F3DBA94ED_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t5EEE260C4A12263EE0C77B5F2414795F3DBA94ED_il2cpp_TypeInfo_var))->___U3CU3E9_0), (void*)L_0);
		return;
	}
}
// System.Void tripolygon.UModeler.HotspotLayout/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_m2C4A90CCCCB9010B613255724074B165263D771A (U3CU3Ec_t5EEE260C4A12263EE0C77B5F2414795F3DBA94ED* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
// tripolygon.UModeler.Hotspot tripolygon.UModeler.HotspotLayout/<>c::<GetHotspotUVs>b__5_1(System.Collections.Generic.KeyValuePair`2<tripolygon.UModeler.Hotspot,System.Single>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Hotspot_tEB2930836E4965CBF2CB96A6996B6F302DF108B7* U3CU3Ec_U3CGetHotspotUVsU3Eb__5_1_mA424BCC7824A21D6F7048706D57F2E53B43B7B8D (U3CU3Ec_t5EEE260C4A12263EE0C77B5F2414795F3DBA94ED* __this, KeyValuePair_2_tABDAC15331E8BE8B1534467FC11E1A59441A1865 ___a0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&KeyValuePair_2_get_Key_mA978A749A9D3816BACF46036CAA0B69DC5DBE53F_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		Hotspot_tEB2930836E4965CBF2CB96A6996B6F302DF108B7* L_0;
		L_0 = KeyValuePair_2_get_Key_mA978A749A9D3816BACF46036CAA0B69DC5DBE53F_inline((&___a0), KeyValuePair_2_get_Key_mA978A749A9D3816BACF46036CAA0B69DC5DBE53F_RuntimeMethod_var);
		return L_0;
	}
}
// tripolygon.UModeler.Hotspot tripolygon.UModeler.HotspotLayout/<>c::<GetSelectedHotspotUnwrap>b__6_1(System.Collections.Generic.KeyValuePair`2<tripolygon.UModeler.Hotspot,System.Single>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Hotspot_tEB2930836E4965CBF2CB96A6996B6F302DF108B7* U3CU3Ec_U3CGetSelectedHotspotUnwrapU3Eb__6_1_mCFC9FBBC491CDDA69120C56B63591FDC555CABA4 (U3CU3Ec_t5EEE260C4A12263EE0C77B5F2414795F3DBA94ED* __this, KeyValuePair_2_tABDAC15331E8BE8B1534467FC11E1A59441A1865 ___a0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&KeyValuePair_2_get_Key_mA978A749A9D3816BACF46036CAA0B69DC5DBE53F_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		Hotspot_tEB2930836E4965CBF2CB96A6996B6F302DF108B7* L_0;
		L_0 = KeyValuePair_2_get_Key_mA978A749A9D3816BACF46036CAA0B69DC5DBE53F_inline((&___a0), KeyValuePair_2_get_Key_mA978A749A9D3816BACF46036CAA0B69DC5DBE53F_RuntimeMethod_var);
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
// System.Void tripolygon.UModeler.HotspotLayout/<>c__DisplayClass6_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass6_0__ctor_m129526C0EA3A3919DE9C34B50F33D2C5F4EFA3B1 (U3CU3Ec__DisplayClass6_0_t26043494B2AEA270630D4CEECF00F4C6AF39353D* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
// System.Boolean tripolygon.UModeler.HotspotLayout/<>c__DisplayClass6_0::<GetSelectedHotspotUnwrap>b__0(System.Collections.Generic.KeyValuePair`2<tripolygon.UModeler.Hotspot,System.Single>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CU3Ec__DisplayClass6_0_U3CGetSelectedHotspotUnwrapU3Eb__0_m516FC630EEF8F2C7C09D12D4C1BB9916D0F3FB0E (U3CU3Ec__DisplayClass6_0_t26043494B2AEA270630D4CEECF00F4C6AF39353D* __this, KeyValuePair_2_tABDAC15331E8BE8B1534467FC11E1A59441A1865 ___a0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&KeyValuePair_2_get_Value_m6FA5BE7064800329CEC3EBCA8A7CB46C6FA7930A_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		float L_0;
		L_0 = KeyValuePair_2_get_Value_m6FA5BE7064800329CEC3EBCA8A7CB46C6FA7930A_inline((&___a0), KeyValuePair_2_get_Value_m6FA5BE7064800329CEC3EBCA8A7CB46C6FA7930A_RuntimeMethod_var);
		float L_1 = __this->___gab_0;
		return (bool)((((int32_t)((!(((float)L_0) <= ((float)L_1)))? 1 : 0)) == ((int32_t)0))? 1 : 0);
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
void DrawDelegate_Invoke_m34E9A529416CB055EB72A49111695BC15D6C8390_Multicast(DrawDelegate_t75FC8E4340EB4F9F6EF0F6726F3DD4E64C8CED7F* __this, const RuntimeMethod* method)
{
	il2cpp_array_size_t length = __this->___delegates_13->max_length;
	Delegate_t** delegatesToInvoke = reinterpret_cast<Delegate_t**>(__this->___delegates_13->GetAddressAtUnchecked(0));
	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		DrawDelegate_t75FC8E4340EB4F9F6EF0F6726F3DD4E64C8CED7F* currentDelegate = reinterpret_cast<DrawDelegate_t75FC8E4340EB4F9F6EF0F6726F3DD4E64C8CED7F*>(delegatesToInvoke[i]);
		typedef void (*FunctionPointerType) (RuntimeObject*, const RuntimeMethod*);
		((FunctionPointerType)currentDelegate->___invoke_impl_1)((Il2CppObject*)currentDelegate->___method_code_6, reinterpret_cast<RuntimeMethod*>(currentDelegate->___method_3));
	}
}
void DrawDelegate_Invoke_m34E9A529416CB055EB72A49111695BC15D6C8390_OpenInst(DrawDelegate_t75FC8E4340EB4F9F6EF0F6726F3DD4E64C8CED7F* __this, const RuntimeMethod* method)
{
	typedef void (*FunctionPointerType) (const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr_0)(method);
}
void DrawDelegate_Invoke_m34E9A529416CB055EB72A49111695BC15D6C8390_OpenStatic(DrawDelegate_t75FC8E4340EB4F9F6EF0F6726F3DD4E64C8CED7F* __this, const RuntimeMethod* method)
{
	typedef void (*FunctionPointerType) (const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr_0)(method);
}
void DrawDelegate_Invoke_m34E9A529416CB055EB72A49111695BC15D6C8390_OpenStaticInvoker(DrawDelegate_t75FC8E4340EB4F9F6EF0F6726F3DD4E64C8CED7F* __this, const RuntimeMethod* method)
{
	InvokerActionInvoker0::Invoke(__this->___method_ptr_0, method, NULL);
}
void DrawDelegate_Invoke_m34E9A529416CB055EB72A49111695BC15D6C8390_ClosedStaticInvoker(DrawDelegate_t75FC8E4340EB4F9F6EF0F6726F3DD4E64C8CED7F* __this, const RuntimeMethod* method)
{
	InvokerActionInvoker1< RuntimeObject* >::Invoke(__this->___method_ptr_0, method, NULL, __this->___m_target_2);
}
IL2CPP_EXTERN_C  void DelegatePInvokeWrapper_DrawDelegate_t75FC8E4340EB4F9F6EF0F6726F3DD4E64C8CED7F (DrawDelegate_t75FC8E4340EB4F9F6EF0F6726F3DD4E64C8CED7F* __this, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc)();
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(il2cpp_codegen_get_reverse_pinvoke_function_ptr(__this));
	// Native function invocation
	il2cppPInvokeFunc();

}
// System.Void tripolygon.UModeler.DrawDelegate::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DrawDelegate__ctor_mEBC14A0F92372CC00C4F67A394AB482ECE031711 (DrawDelegate_t75FC8E4340EB4F9F6EF0F6726F3DD4E64C8CED7F* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) 
{
	__this->___method_ptr_0 = il2cpp_codegen_get_virtual_call_method_pointer((RuntimeMethod*)___method1);
	__this->___method_3 = ___method1;
	__this->___m_target_2 = ___object0;
	Il2CppCodeGenWriteBarrier((void**)(&__this->___m_target_2), (void*)___object0);
	int parameterCount = il2cpp_codegen_method_parameter_count((RuntimeMethod*)___method1);
	__this->___method_code_6 = (intptr_t)__this;
	if (MethodIsStatic((RuntimeMethod*)___method1))
	{
		bool isOpen = parameterCount == 0;
		if (il2cpp_codegen_call_method_via_invoker((RuntimeMethod*)___method1))
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&DrawDelegate_Invoke_m34E9A529416CB055EB72A49111695BC15D6C8390_OpenStaticInvoker;
			else
				__this->___invoke_impl_1 = (intptr_t)&DrawDelegate_Invoke_m34E9A529416CB055EB72A49111695BC15D6C8390_ClosedStaticInvoker;
		else
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&DrawDelegate_Invoke_m34E9A529416CB055EB72A49111695BC15D6C8390_OpenStatic;
			else
				{
					__this->___invoke_impl_1 = (intptr_t)__this->___method_ptr_0;
					__this->___method_code_6 = (intptr_t)__this->___m_target_2;
				}
	}
	else
	{
		if (___object0 == NULL)
			il2cpp_codegen_raise_exception(il2cpp_codegen_get_argument_exception(NULL, "Delegate to an instance method cannot have null 'this'."), NULL);
		__this->___invoke_impl_1 = (intptr_t)__this->___method_ptr_0;
		__this->___method_code_6 = (intptr_t)__this->___m_target_2;
	}
	__this->___extra_arg_5 = (intptr_t)&DrawDelegate_Invoke_m34E9A529416CB055EB72A49111695BC15D6C8390_Multicast;
}
// System.Void tripolygon.UModeler.DrawDelegate::Invoke()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DrawDelegate_Invoke_m34E9A529416CB055EB72A49111695BC15D6C8390 (DrawDelegate_t75FC8E4340EB4F9F6EF0F6726F3DD4E64C8CED7F* __this, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
// System.IAsyncResult tripolygon.UModeler.DrawDelegate::BeginInvoke(System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* DrawDelegate_BeginInvoke_m44FF344268D64BFC7C93F33CFA57A8E1393DA1FA (DrawDelegate_t75FC8E4340EB4F9F6EF0F6726F3DD4E64C8CED7F* __this, AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C* ___callback0, RuntimeObject* ___object1, const RuntimeMethod* method) 
{
	void *__d_args[1] = {0};
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback0, (RuntimeObject*)___object1);
}
// System.Void tripolygon.UModeler.DrawDelegate::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DrawDelegate_EndInvoke_m4A9498B737645455CA92625CBF77D6017F969D76 (DrawDelegate_t75FC8E4340EB4F9F6EF0F6726F3DD4E64C8CED7F* __this, RuntimeObject* ___result0, const RuntimeMethod* method) 
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
void InspectorValueChanged_Invoke_m1B69DC5362AB45C842D8F6032C893342742AB455_Multicast(InspectorValueChanged_tE5BCC32DFB0EA6FB5E89ECC103172F2227F18F25* __this, const RuntimeMethod* method)
{
	il2cpp_array_size_t length = __this->___delegates_13->max_length;
	Delegate_t** delegatesToInvoke = reinterpret_cast<Delegate_t**>(__this->___delegates_13->GetAddressAtUnchecked(0));
	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		InspectorValueChanged_tE5BCC32DFB0EA6FB5E89ECC103172F2227F18F25* currentDelegate = reinterpret_cast<InspectorValueChanged_tE5BCC32DFB0EA6FB5E89ECC103172F2227F18F25*>(delegatesToInvoke[i]);
		typedef void (*FunctionPointerType) (RuntimeObject*, const RuntimeMethod*);
		((FunctionPointerType)currentDelegate->___invoke_impl_1)((Il2CppObject*)currentDelegate->___method_code_6, reinterpret_cast<RuntimeMethod*>(currentDelegate->___method_3));
	}
}
void InspectorValueChanged_Invoke_m1B69DC5362AB45C842D8F6032C893342742AB455_OpenInst(InspectorValueChanged_tE5BCC32DFB0EA6FB5E89ECC103172F2227F18F25* __this, const RuntimeMethod* method)
{
	typedef void (*FunctionPointerType) (const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr_0)(method);
}
void InspectorValueChanged_Invoke_m1B69DC5362AB45C842D8F6032C893342742AB455_OpenStatic(InspectorValueChanged_tE5BCC32DFB0EA6FB5E89ECC103172F2227F18F25* __this, const RuntimeMethod* method)
{
	typedef void (*FunctionPointerType) (const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr_0)(method);
}
void InspectorValueChanged_Invoke_m1B69DC5362AB45C842D8F6032C893342742AB455_OpenStaticInvoker(InspectorValueChanged_tE5BCC32DFB0EA6FB5E89ECC103172F2227F18F25* __this, const RuntimeMethod* method)
{
	InvokerActionInvoker0::Invoke(__this->___method_ptr_0, method, NULL);
}
void InspectorValueChanged_Invoke_m1B69DC5362AB45C842D8F6032C893342742AB455_ClosedStaticInvoker(InspectorValueChanged_tE5BCC32DFB0EA6FB5E89ECC103172F2227F18F25* __this, const RuntimeMethod* method)
{
	InvokerActionInvoker1< RuntimeObject* >::Invoke(__this->___method_ptr_0, method, NULL, __this->___m_target_2);
}
IL2CPP_EXTERN_C  void DelegatePInvokeWrapper_InspectorValueChanged_tE5BCC32DFB0EA6FB5E89ECC103172F2227F18F25 (InspectorValueChanged_tE5BCC32DFB0EA6FB5E89ECC103172F2227F18F25* __this, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc)();
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(il2cpp_codegen_get_reverse_pinvoke_function_ptr(__this));
	// Native function invocation
	il2cppPInvokeFunc();

}
// System.Void tripolygon.UModeler.InspectorValueChanged::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InspectorValueChanged__ctor_m054BC53716A29D796A44400647ED5106C7DBFBEF (InspectorValueChanged_tE5BCC32DFB0EA6FB5E89ECC103172F2227F18F25* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) 
{
	__this->___method_ptr_0 = il2cpp_codegen_get_virtual_call_method_pointer((RuntimeMethod*)___method1);
	__this->___method_3 = ___method1;
	__this->___m_target_2 = ___object0;
	Il2CppCodeGenWriteBarrier((void**)(&__this->___m_target_2), (void*)___object0);
	int parameterCount = il2cpp_codegen_method_parameter_count((RuntimeMethod*)___method1);
	__this->___method_code_6 = (intptr_t)__this;
	if (MethodIsStatic((RuntimeMethod*)___method1))
	{
		bool isOpen = parameterCount == 0;
		if (il2cpp_codegen_call_method_via_invoker((RuntimeMethod*)___method1))
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&InspectorValueChanged_Invoke_m1B69DC5362AB45C842D8F6032C893342742AB455_OpenStaticInvoker;
			else
				__this->___invoke_impl_1 = (intptr_t)&InspectorValueChanged_Invoke_m1B69DC5362AB45C842D8F6032C893342742AB455_ClosedStaticInvoker;
		else
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&InspectorValueChanged_Invoke_m1B69DC5362AB45C842D8F6032C893342742AB455_OpenStatic;
			else
				{
					__this->___invoke_impl_1 = (intptr_t)__this->___method_ptr_0;
					__this->___method_code_6 = (intptr_t)__this->___m_target_2;
				}
	}
	else
	{
		if (___object0 == NULL)
			il2cpp_codegen_raise_exception(il2cpp_codegen_get_argument_exception(NULL, "Delegate to an instance method cannot have null 'this'."), NULL);
		__this->___invoke_impl_1 = (intptr_t)__this->___method_ptr_0;
		__this->___method_code_6 = (intptr_t)__this->___m_target_2;
	}
	__this->___extra_arg_5 = (intptr_t)&InspectorValueChanged_Invoke_m1B69DC5362AB45C842D8F6032C893342742AB455_Multicast;
}
// System.Void tripolygon.UModeler.InspectorValueChanged::Invoke()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InspectorValueChanged_Invoke_m1B69DC5362AB45C842D8F6032C893342742AB455 (InspectorValueChanged_tE5BCC32DFB0EA6FB5E89ECC103172F2227F18F25* __this, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
// System.IAsyncResult tripolygon.UModeler.InspectorValueChanged::BeginInvoke(System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* InspectorValueChanged_BeginInvoke_m1FA9658CE61BF2BD1EE6134FB367549DE85ACEB3 (InspectorValueChanged_tE5BCC32DFB0EA6FB5E89ECC103172F2227F18F25* __this, AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C* ___callback0, RuntimeObject* ___object1, const RuntimeMethod* method) 
{
	void *__d_args[1] = {0};
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback0, (RuntimeObject*)___object1);
}
// System.Void tripolygon.UModeler.InspectorValueChanged::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InspectorValueChanged_EndInvoke_m174071A65737673651BDC566EC5A2E7C2F2FEAD7 (InspectorValueChanged_tE5BCC32DFB0EA6FB5E89ECC103172F2227F18F25* __this, RuntimeObject* ___result0, const RuntimeMethod* method) 
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
// System.UInt64 tripolygon.UModeler.UModeler::GenerateID()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint64_t UModeler_GenerateID_m26F66E0F10A2A9E921540D76944DC8AE55A55061 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UModeler_tF29E9161DE3331F85E86886244AC15FEC514C577_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_runtime_class_init_inline(UModeler_tF29E9161DE3331F85E86886244AC15FEC514C577_il2cpp_TypeInfo_var);
		uint64_t L_0 = ((UModeler_tF29E9161DE3331F85E86886244AC15FEC514C577_StaticFields*)il2cpp_codegen_static_fields_for(UModeler_tF29E9161DE3331F85E86886244AC15FEC514C577_il2cpp_TypeInfo_var))->___latestID__10;
		int64_t L_1 = ((int64_t)il2cpp_codegen_add((int64_t)L_0, ((int64_t)1)));
		((UModeler_tF29E9161DE3331F85E86886244AC15FEC514C577_StaticFields*)il2cpp_codegen_static_fields_for(UModeler_tF29E9161DE3331F85E86886244AC15FEC514C577_il2cpp_TypeInfo_var))->___latestID__10 = L_1;
		return L_1;
	}
}
// System.Void tripolygon.UModeler.UModeler::UpdateLatestID(tripolygon.UModeler.UModeler)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UModeler_UpdateLatestID_mA6F9D5CE423D3776B83069EE902D85B1956E6043 (UModeler_tF29E9161DE3331F85E86886244AC15FEC514C577* ___modeler0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UModeler_tF29E9161DE3331F85E86886244AC15FEC514C577_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	uint64_t V_0 = 0;
	{
		UModeler_tF29E9161DE3331F85E86886244AC15FEC514C577* L_0 = ___modeler0;
		NullCheck(L_0);
		uint64_t L_1;
		L_1 = UModeler_CollectLatestID_m93A909453B30FF2AE54ACFFBD5F4AE432C9A2D79(L_0, NULL);
		V_0 = L_1;
		uint64_t L_2 = V_0;
		il2cpp_codegen_runtime_class_init_inline(UModeler_tF29E9161DE3331F85E86886244AC15FEC514C577_il2cpp_TypeInfo_var);
		uint64_t L_3 = ((UModeler_tF29E9161DE3331F85E86886244AC15FEC514C577_StaticFields*)il2cpp_codegen_static_fields_for(UModeler_tF29E9161DE3331F85E86886244AC15FEC514C577_il2cpp_TypeInfo_var))->___latestID__10;
		if ((!(((uint64_t)L_2) > ((uint64_t)L_3))))
		{
			goto IL_0015;
		}
	}
	{
		uint64_t L_4 = V_0;
		il2cpp_codegen_runtime_class_init_inline(UModeler_tF29E9161DE3331F85E86886244AC15FEC514C577_il2cpp_TypeInfo_var);
		((UModeler_tF29E9161DE3331F85E86886244AC15FEC514C577_StaticFields*)il2cpp_codegen_static_fields_for(UModeler_tF29E9161DE3331F85E86886244AC15FEC514C577_il2cpp_TypeInfo_var))->___latestID__10 = L_4;
	}

IL_0015:
	{
		return;
	}
}
// System.Boolean tripolygon.UModeler.UModeler::get_LockGenerateMesh()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool UModeler_get_LockGenerateMesh_m06B23EE04399CBF0018CE43C6E862A40CCDF6E21 (UModeler_tF29E9161DE3331F85E86886244AC15FEC514C577* __this, const RuntimeMethod* method) 
{
	{
		bool L_0 = __this->___U3CLockGenerateMeshU3Ek__BackingField_27;
		return L_0;
	}
}
// System.Void tripolygon.UModeler.UModeler::set_LockGenerateMesh(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UModeler_set_LockGenerateMesh_mBD5D6268F278779D416170ED23B88AB013C049D0 (UModeler_tF29E9161DE3331F85E86886244AC15FEC514C577* __this, bool ___value0, const RuntimeMethod* method) 
{
	{
		bool L_0 = ___value0;
		__this->___U3CLockGenerateMeshU3Ek__BackingField_27 = L_0;
		return;
	}
}
// System.Void tripolygon.UModeler.UModeler::ResetMeshContainer()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UModeler_ResetMeshContainer_mAB868E05341AA0EC0C3F4DA24E59ABDC492F1C44 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_Clear_m128E800DB0E185C5BB4ED5914C473C0C1E10F4FF_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2__ctor_mB2AF39366CCF9A9E898D6D5400BEDF4F6E1BB646_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_t6D39865003E656D60A88B22671895E4EA1590710_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UModeler_tF29E9161DE3331F85E86886244AC15FEC514C577_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_runtime_class_init_inline(UModeler_tF29E9161DE3331F85E86886244AC15FEC514C577_il2cpp_TypeInfo_var);
		Dictionary_2_t6D39865003E656D60A88B22671895E4EA1590710* L_0 = ((UModeler_tF29E9161DE3331F85E86886244AC15FEC514C577_StaticFields*)il2cpp_codegen_static_fields_for(UModeler_tF29E9161DE3331F85E86886244AC15FEC514C577_il2cpp_TypeInfo_var))->___meshContainer_28;
		if (L_0)
		{
			goto IL_0011;
		}
	}
	{
		Dictionary_2_t6D39865003E656D60A88B22671895E4EA1590710* L_1 = (Dictionary_2_t6D39865003E656D60A88B22671895E4EA1590710*)il2cpp_codegen_object_new(Dictionary_2_t6D39865003E656D60A88B22671895E4EA1590710_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		Dictionary_2__ctor_mB2AF39366CCF9A9E898D6D5400BEDF4F6E1BB646(L_1, Dictionary_2__ctor_mB2AF39366CCF9A9E898D6D5400BEDF4F6E1BB646_RuntimeMethod_var);
		il2cpp_codegen_runtime_class_init_inline(UModeler_tF29E9161DE3331F85E86886244AC15FEC514C577_il2cpp_TypeInfo_var);
		((UModeler_tF29E9161DE3331F85E86886244AC15FEC514C577_StaticFields*)il2cpp_codegen_static_fields_for(UModeler_tF29E9161DE3331F85E86886244AC15FEC514C577_il2cpp_TypeInfo_var))->___meshContainer_28 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&((UModeler_tF29E9161DE3331F85E86886244AC15FEC514C577_StaticFields*)il2cpp_codegen_static_fields_for(UModeler_tF29E9161DE3331F85E86886244AC15FEC514C577_il2cpp_TypeInfo_var))->___meshContainer_28), (void*)L_1);
	}

IL_0011:
	{
		il2cpp_codegen_runtime_class_init_inline(UModeler_tF29E9161DE3331F85E86886244AC15FEC514C577_il2cpp_TypeInfo_var);
		Dictionary_2_t6D39865003E656D60A88B22671895E4EA1590710* L_2 = ((UModeler_tF29E9161DE3331F85E86886244AC15FEC514C577_StaticFields*)il2cpp_codegen_static_fields_for(UModeler_tF29E9161DE3331F85E86886244AC15FEC514C577_il2cpp_TypeInfo_var))->___meshContainer_28;
		NullCheck(L_2);
		Dictionary_2_Clear_m128E800DB0E185C5BB4ED5914C473C0C1E10F4FF(L_2, Dictionary_2_Clear_m128E800DB0E185C5BB4ED5914C473C0C1E10F4FF_RuntimeMethod_var);
		return;
	}
}
// System.Boolean tripolygon.UModeler.UModeler::CheckMesh()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool UModeler_CheckMesh_mDEB1A16EE52D9574760A37557EE2C35BA090F56F (UModeler_tF29E9161DE3331F85E86886244AC15FEC514C577* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_Add_m95F3B444BCCD32EF7B74E1D23DDFDE5AC25B3CEF_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_ContainsKey_m21D5DD2F766D7E5C5B4E2C6EF256A761A884C1BF_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_ContainsValue_mD78B49B88B29AD52435FBAC9B83D720AD9A79E56_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_Remove_mD4F721D02F35A2CCC78B8D5FD2962FF622CEA54F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_get_Item_m5E7AC64571E0BC7C192F651C85E5014C2ED73611_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UModeler_tF29E9161DE3331F85E86886244AC15FEC514C577_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* L_0 = __this->___mainRenderableMesh_20;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605(L_0, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_1)
		{
			goto IL_0010;
		}
	}
	{
		return (bool)1;
	}

IL_0010:
	{
		bool L_2;
		L_2 = UModeler_get_LockGenerateMesh_m06B23EE04399CBF0018CE43C6E862A40CCDF6E21_inline(__this, NULL);
		if (!L_2)
		{
			goto IL_001a;
		}
	}
	{
		return (bool)0;
	}

IL_001a:
	{
		int32_t L_3;
		L_3 = Object_GetInstanceID_m554FF4073C9465F3835574CC084E68AAEEC6CC6A(__this, NULL);
		V_0 = L_3;
		il2cpp_codegen_runtime_class_init_inline(UModeler_tF29E9161DE3331F85E86886244AC15FEC514C577_il2cpp_TypeInfo_var);
		Dictionary_2_t6D39865003E656D60A88B22671895E4EA1590710* L_4 = ((UModeler_tF29E9161DE3331F85E86886244AC15FEC514C577_StaticFields*)il2cpp_codegen_static_fields_for(UModeler_tF29E9161DE3331F85E86886244AC15FEC514C577_il2cpp_TypeInfo_var))->___meshContainer_28;
		int32_t L_5 = V_0;
		NullCheck(L_4);
		bool L_6;
		L_6 = Dictionary_2_ContainsKey_m21D5DD2F766D7E5C5B4E2C6EF256A761A884C1BF(L_4, L_5, Dictionary_2_ContainsKey_m21D5DD2F766D7E5C5B4E2C6EF256A761A884C1BF_RuntimeMethod_var);
		if (!L_6)
		{
			goto IL_0099;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(UModeler_tF29E9161DE3331F85E86886244AC15FEC514C577_il2cpp_TypeInfo_var);
		Dictionary_2_t6D39865003E656D60A88B22671895E4EA1590710* L_7 = ((UModeler_tF29E9161DE3331F85E86886244AC15FEC514C577_StaticFields*)il2cpp_codegen_static_fields_for(UModeler_tF29E9161DE3331F85E86886244AC15FEC514C577_il2cpp_TypeInfo_var))->___meshContainer_28;
		int32_t L_8 = V_0;
		NullCheck(L_7);
		Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* L_9;
		L_9 = Dictionary_2_get_Item_m5E7AC64571E0BC7C192F651C85E5014C2ED73611(L_7, L_8, Dictionary_2_get_Item_m5E7AC64571E0BC7C192F651C85E5014C2ED73611_RuntimeMethod_var);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_10;
		L_10 = Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605(L_9, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_10)
		{
			goto IL_004f;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(UModeler_tF29E9161DE3331F85E86886244AC15FEC514C577_il2cpp_TypeInfo_var);
		Dictionary_2_t6D39865003E656D60A88B22671895E4EA1590710* L_11 = ((UModeler_tF29E9161DE3331F85E86886244AC15FEC514C577_StaticFields*)il2cpp_codegen_static_fields_for(UModeler_tF29E9161DE3331F85E86886244AC15FEC514C577_il2cpp_TypeInfo_var))->___meshContainer_28;
		int32_t L_12 = V_0;
		NullCheck(L_11);
		bool L_13;
		L_13 = Dictionary_2_Remove_mD4F721D02F35A2CCC78B8D5FD2962FF622CEA54F(L_11, L_12, Dictionary_2_Remove_mD4F721D02F35A2CCC78B8D5FD2962FF622CEA54F_RuntimeMethod_var);
		return (bool)1;
	}

IL_004f:
	{
		il2cpp_codegen_runtime_class_init_inline(UModeler_tF29E9161DE3331F85E86886244AC15FEC514C577_il2cpp_TypeInfo_var);
		Dictionary_2_t6D39865003E656D60A88B22671895E4EA1590710* L_14 = ((UModeler_tF29E9161DE3331F85E86886244AC15FEC514C577_StaticFields*)il2cpp_codegen_static_fields_for(UModeler_tF29E9161DE3331F85E86886244AC15FEC514C577_il2cpp_TypeInfo_var))->___meshContainer_28;
		int32_t L_15 = V_0;
		NullCheck(L_14);
		Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* L_16;
		L_16 = Dictionary_2_get_Item_m5E7AC64571E0BC7C192F651C85E5014C2ED73611(L_14, L_15, Dictionary_2_get_Item_m5E7AC64571E0BC7C192F651C85E5014C2ED73611_RuntimeMethod_var);
		Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* L_17 = __this->___mainRenderableMesh_20;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_18;
		L_18 = Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602(L_16, L_17, NULL);
		if (!L_18)
		{
			goto IL_0097;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(UModeler_tF29E9161DE3331F85E86886244AC15FEC514C577_il2cpp_TypeInfo_var);
		Dictionary_2_t6D39865003E656D60A88B22671895E4EA1590710* L_19 = ((UModeler_tF29E9161DE3331F85E86886244AC15FEC514C577_StaticFields*)il2cpp_codegen_static_fields_for(UModeler_tF29E9161DE3331F85E86886244AC15FEC514C577_il2cpp_TypeInfo_var))->___meshContainer_28;
		int32_t L_20 = V_0;
		NullCheck(L_19);
		Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* L_21;
		L_21 = Dictionary_2_get_Item_m5E7AC64571E0BC7C192F651C85E5014C2ED73611(L_19, L_20, Dictionary_2_get_Item_m5E7AC64571E0BC7C192F651C85E5014C2ED73611_RuntimeMethod_var);
		__this->___mainRenderableMesh_20 = L_21;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___mainRenderableMesh_20), (void*)L_21);
		MeshFilter_t6D1CE2473A1E45AC73013400585A1163BF66B2F5* L_22 = __this->___renderableMeshFilter__32;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_23;
		L_23 = Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602(L_22, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_23)
		{
			goto IL_0097;
		}
	}
	{
		MeshFilter_t6D1CE2473A1E45AC73013400585A1163BF66B2F5* L_24 = __this->___renderableMeshFilter__32;
		Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* L_25 = __this->___mainRenderableMesh_20;
		NullCheck(L_24);
		MeshFilter_set_sharedMesh_m946F7E3F583761982642BDA4753784AF1DF6E16F(L_24, L_25, NULL);
	}

IL_0097:
	{
		return (bool)0;
	}

IL_0099:
	{
		il2cpp_codegen_runtime_class_init_inline(UModeler_tF29E9161DE3331F85E86886244AC15FEC514C577_il2cpp_TypeInfo_var);
		Dictionary_2_t6D39865003E656D60A88B22671895E4EA1590710* L_26 = ((UModeler_tF29E9161DE3331F85E86886244AC15FEC514C577_StaticFields*)il2cpp_codegen_static_fields_for(UModeler_tF29E9161DE3331F85E86886244AC15FEC514C577_il2cpp_TypeInfo_var))->___meshContainer_28;
		Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* L_27 = __this->___mainRenderableMesh_20;
		NullCheck(L_26);
		bool L_28;
		L_28 = Dictionary_2_ContainsValue_mD78B49B88B29AD52435FBAC9B83D720AD9A79E56(L_26, L_27, Dictionary_2_ContainsValue_mD78B49B88B29AD52435FBAC9B83D720AD9A79E56_RuntimeMethod_var);
		if (!L_28)
		{
			goto IL_00ad;
		}
	}
	{
		return (bool)1;
	}

IL_00ad:
	{
		il2cpp_codegen_runtime_class_init_inline(UModeler_tF29E9161DE3331F85E86886244AC15FEC514C577_il2cpp_TypeInfo_var);
		Dictionary_2_t6D39865003E656D60A88B22671895E4EA1590710* L_29 = ((UModeler_tF29E9161DE3331F85E86886244AC15FEC514C577_StaticFields*)il2cpp_codegen_static_fields_for(UModeler_tF29E9161DE3331F85E86886244AC15FEC514C577_il2cpp_TypeInfo_var))->___meshContainer_28;
		int32_t L_30 = V_0;
		Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* L_31 = __this->___mainRenderableMesh_20;
		NullCheck(L_29);
		Dictionary_2_Add_m95F3B444BCCD32EF7B74E1D23DDFDE5AC25B3CEF(L_29, L_30, L_31, Dictionary_2_Add_m95F3B444BCCD32EF7B74E1D23DDFDE5AC25B3CEF_RuntimeMethod_var);
		return (bool)0;
	}
}
// UnityEngine.Mesh tripolygon.UModeler.UModeler::GenerateMesh()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* UModeler_GenerateMesh_mB474AC636ACBC90E91807EDAE98C2E69A6A670AD (UModeler_tF29E9161DE3331F85E86886244AC15FEC514C577* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralFC490934C5E6868672675E881D19C7AC8BAF0703);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	int32_t V_1 = 0;
	{
		UModeler_ResetAssetPath_mF85D6195F038F8A6498FF2B3691B3FEC41B6891C(__this, NULL);
		int32_t L_0;
		L_0 = Object_GetInstanceID_m554FF4073C9465F3835574CC084E68AAEEC6CC6A(__this, NULL);
		int32_t L_1;
		L_1 = Mathf_Abs_mD945EDDEA0D62D21BFDBAB7B1C0F18DFF1CEC905_inline(L_0, NULL);
		V_1 = L_1;
		String_t* L_2;
		L_2 = Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5((&V_1), NULL);
		String_t* L_3;
		L_3 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(_stringLiteralFC490934C5E6868672675E881D19C7AC8BAF0703, L_2, NULL);
		V_0 = L_3;
		Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* L_4 = (Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4*)il2cpp_codegen_object_new(Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4_il2cpp_TypeInfo_var);
		NullCheck(L_4);
		Mesh__ctor_m5A9AECEDDAFFD84811ED8928012BDE97A9CEBD00(L_4, NULL);
		Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* L_5 = L_4;
		String_t* L_6 = V_0;
		NullCheck(L_5);
		Object_set_name_mC79E6DC8FFD72479C90F0C4CC7F42A0FEAF5AE47(L_5, L_6, NULL);
		__this->___mainRenderableMesh_20 = L_5;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___mainRenderableMesh_20), (void*)L_5);
		Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* L_7 = __this->___mainRenderableMesh_20;
		NullCheck(L_7);
		Mesh_MarkDynamic_m718089940F240AFE625D6DC9DA4E6F20229CC322(L_7, NULL);
		Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* L_8 = __this->___mainRenderableMesh_20;
		return L_8;
	}
}
// System.Void tripolygon.UModeler.UModeler::UpdateMeshContainer()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UModeler_UpdateMeshContainer_mC751BD368FA9BFB1A7FF94E8D137F9A7B7EACDC7 (UModeler_tF29E9161DE3331F85E86886244AC15FEC514C577* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_Add_m95F3B444BCCD32EF7B74E1D23DDFDE5AC25B3CEF_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_ContainsKey_m21D5DD2F766D7E5C5B4E2C6EF256A761A884C1BF_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_ContainsValue_mD78B49B88B29AD52435FBAC9B83D720AD9A79E56_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_set_Item_m55CEAE784C2CAC35A087DA900D0ABD474AAC6243_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UModeler_tF29E9161DE3331F85E86886244AC15FEC514C577_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		bool L_0;
		L_0 = UModeler_get_LockGenerateMesh_m06B23EE04399CBF0018CE43C6E862A40CCDF6E21_inline(__this, NULL);
		if (!L_0)
		{
			goto IL_0009;
		}
	}
	{
		return;
	}

IL_0009:
	{
		int32_t L_1;
		L_1 = Object_GetInstanceID_m554FF4073C9465F3835574CC084E68AAEEC6CC6A(__this, NULL);
		V_0 = L_1;
		il2cpp_codegen_runtime_class_init_inline(UModeler_tF29E9161DE3331F85E86886244AC15FEC514C577_il2cpp_TypeInfo_var);
		Dictionary_2_t6D39865003E656D60A88B22671895E4EA1590710* L_2 = ((UModeler_tF29E9161DE3331F85E86886244AC15FEC514C577_StaticFields*)il2cpp_codegen_static_fields_for(UModeler_tF29E9161DE3331F85E86886244AC15FEC514C577_il2cpp_TypeInfo_var))->___meshContainer_28;
		int32_t L_3 = V_0;
		NullCheck(L_2);
		bool L_4;
		L_4 = Dictionary_2_ContainsKey_m21D5DD2F766D7E5C5B4E2C6EF256A761A884C1BF(L_2, L_3, Dictionary_2_ContainsKey_m21D5DD2F766D7E5C5B4E2C6EF256A761A884C1BF_RuntimeMethod_var);
		if (L_4)
		{
			goto IL_002f;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(UModeler_tF29E9161DE3331F85E86886244AC15FEC514C577_il2cpp_TypeInfo_var);
		Dictionary_2_t6D39865003E656D60A88B22671895E4EA1590710* L_5 = ((UModeler_tF29E9161DE3331F85E86886244AC15FEC514C577_StaticFields*)il2cpp_codegen_static_fields_for(UModeler_tF29E9161DE3331F85E86886244AC15FEC514C577_il2cpp_TypeInfo_var))->___meshContainer_28;
		int32_t L_6 = V_0;
		Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* L_7 = __this->___mainRenderableMesh_20;
		NullCheck(L_5);
		Dictionary_2_Add_m95F3B444BCCD32EF7B74E1D23DDFDE5AC25B3CEF(L_5, L_6, L_7, Dictionary_2_Add_m95F3B444BCCD32EF7B74E1D23DDFDE5AC25B3CEF_RuntimeMethod_var);
		return;
	}

IL_002f:
	{
		il2cpp_codegen_runtime_class_init_inline(UModeler_tF29E9161DE3331F85E86886244AC15FEC514C577_il2cpp_TypeInfo_var);
		Dictionary_2_t6D39865003E656D60A88B22671895E4EA1590710* L_8 = ((UModeler_tF29E9161DE3331F85E86886244AC15FEC514C577_StaticFields*)il2cpp_codegen_static_fields_for(UModeler_tF29E9161DE3331F85E86886244AC15FEC514C577_il2cpp_TypeInfo_var))->___meshContainer_28;
		Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* L_9 = __this->___mainRenderableMesh_20;
		NullCheck(L_8);
		bool L_10;
		L_10 = Dictionary_2_ContainsValue_mD78B49B88B29AD52435FBAC9B83D720AD9A79E56(L_8, L_9, Dictionary_2_ContainsValue_mD78B49B88B29AD52435FBAC9B83D720AD9A79E56_RuntimeMethod_var);
		if (L_10)
		{
			goto IL_0052;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(UModeler_tF29E9161DE3331F85E86886244AC15FEC514C577_il2cpp_TypeInfo_var);
		Dictionary_2_t6D39865003E656D60A88B22671895E4EA1590710* L_11 = ((UModeler_tF29E9161DE3331F85E86886244AC15FEC514C577_StaticFields*)il2cpp_codegen_static_fields_for(UModeler_tF29E9161DE3331F85E86886244AC15FEC514C577_il2cpp_TypeInfo_var))->___meshContainer_28;
		int32_t L_12 = V_0;
		Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* L_13 = __this->___mainRenderableMesh_20;
		NullCheck(L_11);
		Dictionary_2_set_Item_m55CEAE784C2CAC35A087DA900D0ABD474AAC6243(L_11, L_12, L_13, Dictionary_2_set_Item_m55CEAE784C2CAC35A087DA900D0ABD474AAC6243_RuntimeMethod_var);
	}

IL_0052:
	{
		return;
	}
}
// tripolygon.UModeler.EngineResourceManager tripolygon.UModeler.UModeler::get_engineResources()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR EngineResourceManager_tB814C237AED9E9140B8D664B9F5D3BE18965A951* UModeler_get_engineResources_m05783A7FBCD6CE7656B364D73CFD2C9D583FC181 (UModeler_tF29E9161DE3331F85E86886244AC15FEC514C577* __this, const RuntimeMethod* method) 
{
	{
		EngineResourceManager_tB814C237AED9E9140B8D664B9F5D3BE18965A951* L_0 = __this->___engineResources__29;
		EngineResourceManager_tB814C237AED9E9140B8D664B9F5D3BE18965A951* L_1 = __this->___engineResources__29;
		return L_1;
	}
}
// System.Int32 tripolygon.UModeler.UModeler::GetTotalTriangleCount(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UModeler_GetTotalTriangleCount_m10F5D54AD0EC88CCB61BC67669461AD21525321B (UModeler_tF29E9161DE3331F85E86886244AC15FEC514C577* __this, bool ___IncludeSubMeshTriangles0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Util_tBEDFF10A323370DC03D5CAB4FEF2AB8EFEB0D7D2_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		int32_t L_0 = __this->___totalTriangleCount__30;
		if ((!(((uint32_t)L_0) == ((uint32_t)(-1)))))
		{
			goto IL_003a;
		}
	}
	{
		MeshFilter_t6D1CE2473A1E45AC73013400585A1163BF66B2F5* L_1;
		L_1 = UModeler_get_renderableMeshFilter_mC09382DC2071BB225D5687667B77401B16B5B23F(__this, NULL);
		il2cpp_codegen_runtime_class_init_inline(Util_tBEDFF10A323370DC03D5CAB4FEF2AB8EFEB0D7D2_il2cpp_TypeInfo_var);
		int32_t L_2;
		L_2 = Util_CountTriangle_m31F85BDD2CE3AE040B935836DF526FDF5E98D01F(L_1, NULL);
		__this->___totalTriangleCount__30 = L_2;
		bool L_3 = ___IncludeSubMeshTriangles0;
		if (!L_3)
		{
			goto IL_003a;
		}
	}
	{
		int32_t L_4 = __this->___totalTriangleCount__30;
		EngineResourceManager_tB814C237AED9E9140B8D664B9F5D3BE18965A951* L_5;
		L_5 = UModeler_get_engineResources_m05783A7FBCD6CE7656B364D73CFD2C9D583FC181(__this, NULL);
		NullCheck(L_5);
		Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* L_6;
		L_6 = EngineResourceManager_get_RenderableMesh_m511431D5A84480BC6B19F3C475926EFE5B5A1A20(L_5, NULL);
		il2cpp_codegen_runtime_class_init_inline(Util_tBEDFF10A323370DC03D5CAB4FEF2AB8EFEB0D7D2_il2cpp_TypeInfo_var);
		int32_t L_7;
		L_7 = Util_CountTriangle_mD954412C2FF3C08F88D635A382826DA5B8FC175F(L_6, NULL);
		__this->___totalTriangleCount__30 = ((int32_t)il2cpp_codegen_add(L_4, L_7));
	}

IL_003a:
	{
		int32_t L_8 = __this->___totalTriangleCount__30;
		return L_8;
	}
}
// System.Int32 tripolygon.UModeler.UModeler::GetTotalPolygonCount()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UModeler_GetTotalPolygonCount_mF034EAC70298C6613C267F386D974FD37085C387 (UModeler_tF29E9161DE3331F85E86886244AC15FEC514C577* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ShelfHolder_tFDAAF16135FA93DB3AD68D57913C99082A757058_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	ShelfHolder_tFDAAF16135FA93DB3AD68D57913C99082A757058* V_0 = NULL;
	int32_t V_1 = 0;
	{
		int32_t L_0 = __this->___totalPolygonCount__31;
		if ((!(((uint32_t)L_0) == ((uint32_t)(-1)))))
		{
			goto IL_0054;
		}
	}
	{
		__this->___totalPolygonCount__31 = 0;
		ShelfHolder_tFDAAF16135FA93DB3AD68D57913C99082A757058* L_1 = (ShelfHolder_tFDAAF16135FA93DB3AD68D57913C99082A757058*)il2cpp_codegen_object_new(ShelfHolder_tFDAAF16135FA93DB3AD68D57913C99082A757058_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		ShelfHolder__ctor_mCAD01DBBEC2780D16B25E9B4034F9C88A5221ADF(L_1, (EditableMesh_tF419912423C538859FC4EDB1F6ABD7314E01A476*)NULL, NULL);
		V_0 = L_1;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_004a:
			{// begin finally (depth: 1)
				{
					ShelfHolder_tFDAAF16135FA93DB3AD68D57913C99082A757058* L_2 = V_0;
					if (!L_2)
					{
						goto IL_0053;
					}
				}
				{
					ShelfHolder_tFDAAF16135FA93DB3AD68D57913C99082A757058* L_3 = V_0;
					NullCheck(L_3);
					InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, L_3);
				}

IL_0053:
				{
					return;
				}
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				V_1 = 0;
				goto IL_0044_1;
			}

IL_001b_1:
			{
				EditableMesh_tF419912423C538859FC4EDB1F6ABD7314E01A476* L_4;
				L_4 = UModeler_get_editableMesh_m61B3969B0C185AA5A9A0BAA98CDF4B54D4527776(__this, NULL);
				int32_t L_5 = V_1;
				NullCheck(L_4);
				EditableMesh_set_shelf_m537118F79630165B0C68F530226AED1625A9EC21_inline(L_4, L_5, NULL);
				int32_t L_6 = __this->___totalPolygonCount__31;
				EditableMesh_tF419912423C538859FC4EDB1F6ABD7314E01A476* L_7;
				L_7 = UModeler_get_editableMesh_m61B3969B0C185AA5A9A0BAA98CDF4B54D4527776(__this, NULL);
				NullCheck(L_7);
				int32_t L_8;
				L_8 = EditableMesh_GetPolygonCount_m8E8542BEAA9C806A06A4144B5CFF409C39AC7494(L_7, (-1), NULL);
				__this->___totalPolygonCount__31 = ((int32_t)il2cpp_codegen_add(L_6, L_8));
				int32_t L_9 = V_1;
				V_1 = ((int32_t)il2cpp_codegen_add(L_9, 1));
			}

IL_0044_1:
			{
				int32_t L_10 = V_1;
				if ((((int32_t)L_10) < ((int32_t)2)))
				{
					goto IL_001b_1;
				}
			}
			{
				goto IL_0054;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0054:
	{
		int32_t L_11 = __this->___totalPolygonCount__31;
		return L_11;
	}
}
// System.Boolean tripolygon.UModeler.UModeler::IsAssetPathValid()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool UModeler_IsAssetPathValid_mC134001F871B08D5653E6798EAE15EE4DC64B0CF (UModeler_tF29E9161DE3331F85E86886244AC15FEC514C577* __this, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = __this->___assetPath_18;
		if (!L_0)
		{
			goto IL_0017;
		}
	}
	{
		String_t* L_1 = __this->___assetPath_18;
		NullCheck(L_1);
		int32_t L_2;
		L_2 = String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline(L_1, NULL);
		return (bool)((((int32_t)L_2) > ((int32_t)0))? 1 : 0);
	}

IL_0017:
	{
		return (bool)0;
	}
}
// System.Boolean tripolygon.UModeler.UModeler::IsCorruptModeler()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool UModeler_IsCorruptModeler_m8DD8FAE21402B722791FA5A6F8CE06A307D64147 (UModeler_tF29E9161DE3331F85E86886244AC15FEC514C577* __this, const RuntimeMethod* method) 
{
	{
		EditableMesh_tF419912423C538859FC4EDB1F6ABD7314E01A476* L_0 = __this->___editableMesh__11;
		NullCheck(L_0);
		bool L_1;
		L_1 = EditableMesh_IsCorruptMesh_m8FF39436BAA29AEC396F8725F03FBBF04260149A(L_0, NULL);
		return L_1;
	}
}
// System.Boolean tripolygon.UModeler.UModeler::Repair()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool UModeler_Repair_m625A489DC8D97D848CCB8E1C91928D594064CFC4 (UModeler_tF29E9161DE3331F85E86886244AC15FEC514C577* __this, const RuntimeMethod* method) 
{
	{
		EditableMesh_tF419912423C538859FC4EDB1F6ABD7314E01A476* L_0 = __this->___editableMesh__11;
		NullCheck(L_0);
		bool L_1;
		L_1 = EditableMesh_Repair_m33E36C9C68C73C8A20073C8453593774F13E697B(L_0, NULL);
		return L_1;
	}
}
// System.Void tripolygon.UModeler.UModeler::ResetAssetPath()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UModeler_ResetAssetPath_mF85D6195F038F8A6498FF2B3691B3FEC41B6891C (UModeler_tF29E9161DE3331F85E86886244AC15FEC514C577* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		String_t* L_0 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->___Empty_6;
		__this->___assetPath_18 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___assetPath_18), (void*)L_0);
		return;
	}
}
// System.String tripolygon.UModeler.UModeler::get_AssetFileName()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* UModeler_get_AssetFileName_m8060FCE92A71717A99F8835082C2D571A9E3A329 (UModeler_tF29E9161DE3331F85E86886244AC15FEC514C577* __this, const RuntimeMethod* method) 
{
	{
		bool L_0;
		L_0 = UModeler_IsAssetPathValid_mC134001F871B08D5653E6798EAE15EE4DC64B0CF(__this, NULL);
		if (L_0)
		{
			goto IL_000a;
		}
	}
	{
		return (String_t*)NULL;
	}

IL_000a:
	{
		String_t* L_1 = __this->___assetPath_18;
		String_t* L_2 = __this->___assetPath_18;
		NullCheck(L_2);
		int32_t L_3;
		L_3 = String_LastIndexOf_m6BB3E7E1B48702D4C715FA423F8A822C053B290E(L_2, ((int32_t)47), NULL);
		NullCheck(L_1);
		String_t* L_4;
		L_4 = String_Remove_m4D7A58E2124F8D0D8AE3EEDE74B6AD6A863ABA68(L_1, 0, ((int32_t)il2cpp_codegen_add(L_3, 1)), NULL);
		return L_4;
	}
}
// System.String tripolygon.UModeler.UModeler::get_MeshName()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* UModeler_get_MeshName_mE03F57AB71F9A1FBD5B8BFBDB83D93B5A6A035E9 (UModeler_tF29E9161DE3331F85E86886244AC15FEC514C577* __this, const RuntimeMethod* method) 
{
	{
		bool L_0;
		L_0 = UModeler_IsAssetPathValid_mC134001F871B08D5653E6798EAE15EE4DC64B0CF(__this, NULL);
		if (L_0)
		{
			goto IL_000a;
		}
	}
	{
		return (String_t*)NULL;
	}

IL_000a:
	{
		String_t* L_1;
		L_1 = UModeler_get_AssetFileName_m8060FCE92A71717A99F8835082C2D571A9E3A329(__this, NULL);
		String_t* L_2;
		L_2 = UModeler_get_AssetFileName_m8060FCE92A71717A99F8835082C2D571A9E3A329(__this, NULL);
		NullCheck(L_2);
		int32_t L_3;
		L_3 = String_IndexOf_mE21E78F35EF4A7768E385A72814C88D22B689966(L_2, ((int32_t)46), NULL);
		NullCheck(L_1);
		String_t* L_4;
		L_4 = String_Remove_m8266E0BF5D8565D4CDC850F21E9178AE254C3E85(L_1, L_3, NULL);
		return L_4;
	}
}
// tripolygon.UModeler.EditableMesh tripolygon.UModeler.UModeler::get_editableMesh()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR EditableMesh_tF419912423C538859FC4EDB1F6ABD7314E01A476* UModeler_get_editableMesh_m61B3969B0C185AA5A9A0BAA98CDF4B54D4527776 (UModeler_tF29E9161DE3331F85E86886244AC15FEC514C577* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EditableMesh_tF419912423C538859FC4EDB1F6ABD7314E01A476_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		EditableMesh_tF419912423C538859FC4EDB1F6ABD7314E01A476* L_0 = __this->___editableMesh__11;
		if (L_0)
		{
			goto IL_0013;
		}
	}
	{
		EditableMesh_tF419912423C538859FC4EDB1F6ABD7314E01A476* L_1 = (EditableMesh_tF419912423C538859FC4EDB1F6ABD7314E01A476*)il2cpp_codegen_object_new(EditableMesh_tF419912423C538859FC4EDB1F6ABD7314E01A476_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		EditableMesh__ctor_m4E761AC673DEA77B1C3E421931D3BA2AFDD855C1(L_1, NULL);
		__this->___editableMesh__11 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___editableMesh__11), (void*)L_1);
	}

IL_0013:
	{
		EditableMesh_tF419912423C538859FC4EDB1F6ABD7314E01A476* L_2 = __this->___editableMesh__11;
		return L_2;
	}
}
// System.Boolean tripolygon.UModeler.UModeler::get_backfaces()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool UModeler_get_backfaces_mCEC07B5DBAA8737980B412A410F8356C10CB5A52 (UModeler_tF29E9161DE3331F85E86886244AC15FEC514C577* __this, const RuntimeMethod* method) 
{
	{
		bool L_0 = __this->___backfaces__12;
		return L_0;
	}
}
// System.Void tripolygon.UModeler.UModeler::set_backfaces(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UModeler_set_backfaces_m1434F21ED099D8D3902EF32AEE44E9967EB3DEAC (UModeler_tF29E9161DE3331F85E86886244AC15FEC514C577* __this, bool ___value0, const RuntimeMethod* method) 
{
	{
		bool L_0 = ___value0;
		__this->___backfaces__12 = L_0;
		return;
	}
}
// System.Boolean tripolygon.UModeler.UModeler::get_IsInvisibleObject()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool UModeler_get_IsInvisibleObject_m68D9402B742DAD75A6771B5A6546E57C268785B3 (UModeler_tF29E9161DE3331F85E86886244AC15FEC514C577* __this, const RuntimeMethod* method) 
{
	{
		bool L_0 = __this->___isInvisibleObject_19;
		return L_0;
	}
}
// System.Void tripolygon.UModeler.UModeler::set_IsInvisibleObject(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UModeler_set_IsInvisibleObject_m36B9A4A156220092F2ECD0CA1FE4B80C441D0A5B (UModeler_tF29E9161DE3331F85E86886244AC15FEC514C577* __this, bool ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_ToArray_m2D61F9E785B53324A0EC7DCA2B58DD6F959A89F6_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		bool L_0 = ___value0;
		__this->___isInvisibleObject_19 = L_0;
		bool L_1 = __this->___isInvisibleObject_19;
		if (!L_1)
		{
			goto IL_0020;
		}
	}
	{
		List_1_t386E09F4F22DDE4D2AC41A8567FFF283C254537B* L_2 = __this->___materials_13;
		NullCheck(L_2);
		MaterialU5BU5D_t2B1D11C42DB07A4400C0535F92DBB87A2E346D3D* L_3;
		L_3 = List_1_ToArray_m2D61F9E785B53324A0EC7DCA2B58DD6F959A89F6(L_2, List_1_ToArray_m2D61F9E785B53324A0EC7DCA2B58DD6F959A89F6_RuntimeMethod_var);
		__this->___originalMaterials_14 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___originalMaterials_14), (void*)L_3);
	}

IL_0020:
	{
		return;
	}
}
// System.Void tripolygon.UModeler.UModeler::SetColliderObject()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UModeler_SetColliderObject_m8B3FABE1EFE716352B23A3AF021F3D2D2F36EFCA (UModeler_tF29E9161DE3331F85E86886244AC15FEC514C577* __this, const RuntimeMethod* method) 
{
	{
		return;
	}
}
// System.Void tripolygon.UModeler.UModeler::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UModeler_Start_m0A541A87C3BA71847C6667D680580A94D6DCA930 (UModeler_tF29E9161DE3331F85E86886244AC15FEC514C577* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UModeler_tF29E9161DE3331F85E86886244AC15FEC514C577_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_runtime_class_init_inline(UModeler_tF29E9161DE3331F85E86886244AC15FEC514C577_il2cpp_TypeInfo_var);
		ModelerDelegate_t3E84323788B9A588C192E5D33F6809AAB16B2707* L_0 = ((UModeler_tF29E9161DE3331F85E86886244AC15FEC514C577_StaticFields*)il2cpp_codegen_static_fields_for(UModeler_tF29E9161DE3331F85E86886244AC15FEC514C577_il2cpp_TypeInfo_var))->___OnStartDelegate_9;
		if (!L_0)
		{
			goto IL_0019;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(UModeler_tF29E9161DE3331F85E86886244AC15FEC514C577_il2cpp_TypeInfo_var);
		bool L_1 = ((UModeler_tF29E9161DE3331F85E86886244AC15FEC514C577_StaticFields*)il2cpp_codegen_static_fields_for(UModeler_tF29E9161DE3331F85E86886244AC15FEC514C577_il2cpp_TypeInfo_var))->___enableDelegate_4;
		if (!L_1)
		{
			goto IL_0019;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(UModeler_tF29E9161DE3331F85E86886244AC15FEC514C577_il2cpp_TypeInfo_var);
		ModelerDelegate_t3E84323788B9A588C192E5D33F6809AAB16B2707* L_2 = ((UModeler_tF29E9161DE3331F85E86886244AC15FEC514C577_StaticFields*)il2cpp_codegen_static_fields_for(UModeler_tF29E9161DE3331F85E86886244AC15FEC514C577_il2cpp_TypeInfo_var))->___OnStartDelegate_9;
		NullCheck(L_2);
		ModelerDelegate_Invoke_mDC38E9A49BD3FA13238128AB62B526A823CEADC1_inline(L_2, __this, NULL);
	}

IL_0019:
	{
		return;
	}
}
// System.Void tripolygon.UModeler.UModeler::RefreshResources()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UModeler_RefreshResources_mA1A6E90445A137DB26F717E2D010FFEC8F5A2615 (UModeler_tF29E9161DE3331F85E86886244AC15FEC514C577* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ActiveModelerHolder_t1B23CBE2E0ECE532A1899BC6BBE8C3F8EE3F1AE7_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	ActiveModelerHolder_t1B23CBE2E0ECE532A1899BC6BBE8C3F8EE3F1AE7* V_0 = NULL;
	{
		ActiveModelerHolder_t1B23CBE2E0ECE532A1899BC6BBE8C3F8EE3F1AE7* L_0 = (ActiveModelerHolder_t1B23CBE2E0ECE532A1899BC6BBE8C3F8EE3F1AE7*)il2cpp_codegen_object_new(ActiveModelerHolder_t1B23CBE2E0ECE532A1899BC6BBE8C3F8EE3F1AE7_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		ActiveModelerHolder__ctor_mA3F4D58A020E8413BED8A3C96B2A5687862E1816(L_0, __this, NULL);
		V_0 = L_0;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0043:
			{// begin finally (depth: 1)
				{
					ActiveModelerHolder_t1B23CBE2E0ECE532A1899BC6BBE8C3F8EE3F1AE7* L_1 = V_0;
					if (!L_1)
					{
						goto IL_004c;
					}
				}
				{
					ActiveModelerHolder_t1B23CBE2E0ECE532A1899BC6BBE8C3F8EE3F1AE7* L_2 = V_0;
					NullCheck(L_2);
					InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, L_2);
				}

IL_004c:
				{
					return;
				}
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				EditableMesh_tF419912423C538859FC4EDB1F6ABD7314E01A476* L_3;
				L_3 = UModeler_get_editableMesh_m61B3969B0C185AA5A9A0BAA98CDF4B54D4527776(__this, NULL);
				NullCheck(L_3);
				UVIslandManager_tFDD6F91ECB27D6846C79AD6B3B87F4C06BB002E6* L_4;
				L_4 = EditableMesh_get_uvIslandManager_mDF7A5D459F7BBB41F117BEBB2E712170D4B46F7F_inline(L_3, NULL);
				if (!L_4)
				{
					goto IL_0024_1;
				}
			}
			{
				EditableMesh_tF419912423C538859FC4EDB1F6ABD7314E01A476* L_5;
				L_5 = UModeler_get_editableMesh_m61B3969B0C185AA5A9A0BAA98CDF4B54D4527776(__this, NULL);
				NullCheck(L_5);
				UVIslandManager_tFDD6F91ECB27D6846C79AD6B3B87F4C06BB002E6* L_6;
				L_6 = EditableMesh_get_uvIslandManager_mDF7A5D459F7BBB41F117BEBB2E712170D4B46F7F_inline(L_5, NULL);
				NullCheck(L_6);
				UVIslandManager_Refresh_m1A91C2C0B745C69EDBCD573D460CABA0407111DF(L_6, NULL);
			}

IL_0024_1:
			{
				EditableMesh_tF419912423C538859FC4EDB1F6ABD7314E01A476* L_7;
				L_7 = UModeler_get_editableMesh_m61B3969B0C185AA5A9A0BAA98CDF4B54D4527776(__this, NULL);
				NullCheck(L_7);
				SmoothingGroupManager_t1D2F4A2DF787BB531A1358F88CFC80C4B3E0C037* L_8;
				L_8 = EditableMesh_get_smoothingGroups_m5B31EF008E5ED618E659388C2EAF6FFED6BB5EF6_inline(L_7, NULL);
				if (!L_8)
				{
					goto IL_0041_1;
				}
			}
			{
				EditableMesh_tF419912423C538859FC4EDB1F6ABD7314E01A476* L_9;
				L_9 = UModeler_get_editableMesh_m61B3969B0C185AA5A9A0BAA98CDF4B54D4527776(__this, NULL);
				NullCheck(L_9);
				SmoothingGroupManager_t1D2F4A2DF787BB531A1358F88CFC80C4B3E0C037* L_10;
				L_10 = EditableMesh_get_smoothingGroups_m5B31EF008E5ED618E659388C2EAF6FFED6BB5EF6_inline(L_9, NULL);
				NullCheck(L_10);
				SmoothingGroupManager_Refresh_m5D2329A4ED4D1CD8F65442F11653A82BBB4A35A3(L_10, NULL);
			}

IL_0041_1:
			{
				goto IL_004d;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_004d:
	{
		return;
	}
}
// System.Void tripolygon.UModeler.UModeler::Build(System.Int32,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UModeler_Build_m631EF070C206EFDCDC5892F43BDFA2BB3BE72943 (UModeler_tF29E9161DE3331F85E86886244AC15FEC514C577* __this, int32_t ___shelf0, bool ___updateToGraphicsAPIImmediately1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ActiveModelerHolder_t1B23CBE2E0ECE532A1899BC6BBE8C3F8EE3F1AE7_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisMeshCollider_tB525E4DDE383252364ED0BDD32CF2B53914EE455_mFC0F02CCD26A6A186031CF43E92D7B60EA1CC370_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	ActiveModelerHolder_t1B23CBE2E0ECE532A1899BC6BBE8C3F8EE3F1AE7* V_0 = NULL;
	MeshCollider_tB525E4DDE383252364ED0BDD32CF2B53914EE455* V_1 = NULL;
	{
		int32_t L_0 = ___shelf0;
		bool L_1 = ___updateToGraphicsAPIImmediately1;
		bool L_2;
		L_2 = StopModelerBuild_CheckBuild_mF23F61D8E0022BC759FA6AFCD77A156FD7BE0AD2(L_0, L_1, NULL);
		if (L_2)
		{
			goto IL_000a;
		}
	}
	{
		return;
	}

IL_000a:
	{
		ActiveModelerHolder_t1B23CBE2E0ECE532A1899BC6BBE8C3F8EE3F1AE7* L_3 = (ActiveModelerHolder_t1B23CBE2E0ECE532A1899BC6BBE8C3F8EE3F1AE7*)il2cpp_codegen_object_new(ActiveModelerHolder_t1B23CBE2E0ECE532A1899BC6BBE8C3F8EE3F1AE7_il2cpp_TypeInfo_var);
		NullCheck(L_3);
		ActiveModelerHolder__ctor_mA3F4D58A020E8413BED8A3C96B2A5687862E1816(L_3, __this, NULL);
		V_0 = L_3;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_00aa:
			{// begin finally (depth: 1)
				{
					ActiveModelerHolder_t1B23CBE2E0ECE532A1899BC6BBE8C3F8EE3F1AE7* L_4 = V_0;
					if (!L_4)
					{
						goto IL_00b3;
					}
				}
				{
					ActiveModelerHolder_t1B23CBE2E0ECE532A1899BC6BBE8C3F8EE3F1AE7* L_5 = V_0;
					NullCheck(L_5);
					InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, L_5);
				}

IL_00b3:
				{
					return;
				}
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				UModeler_RefreshResources_mA1A6E90445A137DB26F717E2D010FFEC8F5A2615(__this, NULL);
				int32_t L_6 = ___shelf0;
				UModeler_BuildEdMesh_mD94F8A88186AEF4A5D86C4D9B2322A93F93E3728(__this, L_6, NULL);
				int32_t L_7 = ___shelf0;
				if (!L_7)
				{
					goto IL_0028_1;
				}
			}
			{
				int32_t L_8 = ___shelf0;
				if ((!(((uint32_t)L_8) == ((uint32_t)(-1)))))
				{
					goto IL_00a8_1;
				}
			}

IL_0028_1:
			{
				MeshFilter_t6D1CE2473A1E45AC73013400585A1163BF66B2F5* L_9;
				L_9 = UModeler_get_renderableMeshFilter_mC09382DC2071BB225D5687667B77401B16B5B23F(__this, NULL);
				il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
				bool L_10;
				L_10 = Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602(L_9, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
				if (!L_10)
				{
					goto IL_00a8_1;
				}
			}
			{
				MeshFilter_t6D1CE2473A1E45AC73013400585A1163BF66B2F5* L_11;
				L_11 = UModeler_get_renderableMeshFilter_mC09382DC2071BB225D5687667B77401B16B5B23F(__this, NULL);
				NullCheck(L_11);
				Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* L_12;
				L_12 = MeshFilter_get_sharedMesh_mE4ED3E7E31C1DE5097E4980DA996E620F7D7CB8C(L_11, NULL);
				il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
				bool L_13;
				L_13 = Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602(L_12, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
				if (!L_13)
				{
					goto IL_00a8_1;
				}
			}
			{
				MeshFilter_t6D1CE2473A1E45AC73013400585A1163BF66B2F5* L_14;
				L_14 = UModeler_get_renderableMeshFilter_mC09382DC2071BB225D5687667B77401B16B5B23F(__this, NULL);
				NullCheck(L_14);
				Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* L_15;
				L_15 = MeshFilter_get_sharedMesh_mE4ED3E7E31C1DE5097E4980DA996E620F7D7CB8C(L_14, NULL);
				NullCheck(L_15);
				bool L_16;
				L_16 = Mesh_get_isReadable_m3309900DB9B66BD321128839E6801722D15CD1E0(L_15, NULL);
				if (!L_16)
				{
					goto IL_00a8_1;
				}
			}
			{
				MeshCollider_tB525E4DDE383252364ED0BDD32CF2B53914EE455* L_17;
				L_17 = Component_GetComponent_TisMeshCollider_tB525E4DDE383252364ED0BDD32CF2B53914EE455_mFC0F02CCD26A6A186031CF43E92D7B60EA1CC370(__this, Component_GetComponent_TisMeshCollider_tB525E4DDE383252364ED0BDD32CF2B53914EE455_mFC0F02CCD26A6A186031CF43E92D7B60EA1CC370_RuntimeMethod_var);
				V_1 = L_17;
				MeshCollider_tB525E4DDE383252364ED0BDD32CF2B53914EE455* L_18 = V_1;
				il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
				bool L_19;
				L_19 = Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602(L_18, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
				if (!L_19)
				{
					goto IL_0094_1;
				}
			}
			{
				MeshCollider_tB525E4DDE383252364ED0BDD32CF2B53914EE455* L_20 = V_1;
				NullCheck(L_20);
				Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* L_21;
				L_21 = MeshCollider_get_sharedMesh_mFB4B8534501C29930D2D3710D6D82E60093FA21E(L_20, NULL);
				MeshFilter_t6D1CE2473A1E45AC73013400585A1163BF66B2F5* L_22;
				L_22 = UModeler_get_renderableMeshFilter_mC09382DC2071BB225D5687667B77401B16B5B23F(__this, NULL);
				NullCheck(L_22);
				Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* L_23;
				L_23 = MeshFilter_get_sharedMesh_mE4ED3E7E31C1DE5097E4980DA996E620F7D7CB8C(L_22, NULL);
				il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
				bool L_24;
				L_24 = Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602(L_21, L_23, NULL);
				if (!L_24)
				{
					goto IL_0094_1;
				}
			}
			{
				MeshCollider_tB525E4DDE383252364ED0BDD32CF2B53914EE455* L_25 = V_1;
				MeshFilter_t6D1CE2473A1E45AC73013400585A1163BF66B2F5* L_26;
				L_26 = UModeler_get_renderableMeshFilter_mC09382DC2071BB225D5687667B77401B16B5B23F(__this, NULL);
				NullCheck(L_26);
				Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* L_27;
				L_27 = MeshFilter_get_sharedMesh_mE4ED3E7E31C1DE5097E4980DA996E620F7D7CB8C(L_26, NULL);
				NullCheck(L_25);
				MeshCollider_set_sharedMesh_m05F87B9AC04139285EBBCC159F77B51C6940E79C(L_25, L_27, NULL);
			}

IL_0094_1:
			{
				bool L_28 = ___updateToGraphicsAPIImmediately1;
				if (!L_28)
				{
					goto IL_00a8_1;
				}
			}
			{
				MeshFilter_t6D1CE2473A1E45AC73013400585A1163BF66B2F5* L_29;
				L_29 = UModeler_get_renderableMeshFilter_mC09382DC2071BB225D5687667B77401B16B5B23F(__this, NULL);
				NullCheck(L_29);
				Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* L_30;
				L_30 = MeshFilter_get_sharedMesh_mE4ED3E7E31C1DE5097E4980DA996E620F7D7CB8C(L_29, NULL);
				NullCheck(L_30);
				Mesh_UploadMeshData_mE4C94F263DAA8CAC1641FE137E1CE7D3F09396EB(L_30, (bool)0, NULL);
			}

IL_00a8_1:
			{
				goto IL_00b4;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_00b4:
	{
		return;
	}
}
// System.Void tripolygon.UModeler.UModeler::BuildEdMesh(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UModeler_BuildEdMesh_mD94F8A88186AEF4A5D86C4D9B2322A93F93E3728 (UModeler_tF29E9161DE3331F85E86886244AC15FEC514C577* __this, int32_t ___shelf0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ActiveModelerHolder_t1B23CBE2E0ECE532A1899BC6BBE8C3F8EE3F1AE7_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	ActiveModelerHolder_t1B23CBE2E0ECE532A1899BC6BBE8C3F8EE3F1AE7* V_0 = NULL;
	{
		int32_t L_0 = ___shelf0;
		bool L_1;
		L_1 = StopModelerBuild_CheckBuildEdMesh_m22367E5D35222E893C4B2B923CF169D6E4D497C9(L_0, NULL);
		if (L_1)
		{
			goto IL_0009;
		}
	}
	{
		return;
	}

IL_0009:
	{
		ActiveModelerHolder_t1B23CBE2E0ECE532A1899BC6BBE8C3F8EE3F1AE7* L_2 = (ActiveModelerHolder_t1B23CBE2E0ECE532A1899BC6BBE8C3F8EE3F1AE7*)il2cpp_codegen_object_new(ActiveModelerHolder_t1B23CBE2E0ECE532A1899BC6BBE8C3F8EE3F1AE7_il2cpp_TypeInfo_var);
		NullCheck(L_2);
		ActiveModelerHolder__ctor_mA3F4D58A020E8413BED8A3C96B2A5687862E1816(L_2, __this, NULL);
		V_0 = L_2;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0019:
			{// begin finally (depth: 1)
				{
					ActiveModelerHolder_t1B23CBE2E0ECE532A1899BC6BBE8C3F8EE3F1AE7* L_3 = V_0;
					if (!L_3)
					{
						goto IL_0022;
					}
				}
				{
					ActiveModelerHolder_t1B23CBE2E0ECE532A1899BC6BBE8C3F8EE3F1AE7* L_4 = V_0;
					NullCheck(L_4);
					InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, L_4);
				}

IL_0022:
				{
					return;
				}
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			int32_t L_5 = ___shelf0;
			Builder_Build_m0AF6E1EA0C1E4384E7B6A2DB8F9E3EF808A3A591(__this, L_5, NULL);
			goto IL_0023;
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0023:
	{
		UModeler_InvalideCounting_m8AE4EF1365CD4C5755CCFC1CB3DA26142D2B2047(__this, NULL);
		return;
	}
}
// System.Void tripolygon.UModeler.UModeler::OnBeforeSerialize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UModeler_OnBeforeSerialize_mB9BD07B6063F9D74D5CA86C28B3DEEABDADC0EBD (UModeler_tF29E9161DE3331F85E86886244AC15FEC514C577* __this, const RuntimeMethod* method) 
{
	{
		EditableMesh_tF419912423C538859FC4EDB1F6ABD7314E01A476* L_0;
		L_0 = UModeler_get_editableMesh_m61B3969B0C185AA5A9A0BAA98CDF4B54D4527776(__this, NULL);
		NullCheck(L_0);
		EditableMesh_BeforeSerialize_mF404E78EC03A1741662B44B433538F0A425F9A84(L_0, NULL);
		return;
	}
}
// System.Void tripolygon.UModeler.UModeler::OnAfterDeserialize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UModeler_OnAfterDeserialize_m35DB285F4063DDE2CFAA90975BC4D09C74C3340E (UModeler_tF29E9161DE3331F85E86886244AC15FEC514C577* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UModeler_tF29E9161DE3331F85E86886244AC15FEC514C577_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		EditableMesh_tF419912423C538859FC4EDB1F6ABD7314E01A476* L_0;
		L_0 = UModeler_get_editableMesh_m61B3969B0C185AA5A9A0BAA98CDF4B54D4527776(__this, NULL);
		NullCheck(L_0);
		EditableMesh_AfterDeserialize_mF3F24A4C1ECEF1971077EB14FA7B4985B4CC9AE9(L_0, NULL);
		EditableMesh_tF419912423C538859FC4EDB1F6ABD7314E01A476* L_1;
		L_1 = UModeler_get_editableMesh_m61B3969B0C185AA5A9A0BAA98CDF4B54D4527776(__this, NULL);
		NullCheck(L_1);
		EditableMesh_InvalidateCache_m186322226E114D4051F4193BF56C42B43ADE7B58(L_1, NULL);
		EditableMesh_tF419912423C538859FC4EDB1F6ABD7314E01A476* L_2;
		L_2 = UModeler_get_editableMesh_m61B3969B0C185AA5A9A0BAA98CDF4B54D4527776(__this, NULL);
		NullCheck(L_2);
		EditableMesh_InvalidateVertexManager_mD37A395193FE7D425DF8B6076D1FDB8EC04ABA4D(L_2, NULL);
		il2cpp_codegen_runtime_class_init_inline(UModeler_tF29E9161DE3331F85E86886244AC15FEC514C577_il2cpp_TypeInfo_var);
		UModeler_UpdateLatestID_mA6F9D5CE423D3776B83069EE902D85B1956E6043(__this, NULL);
		return;
	}
}
// System.Void tripolygon.UModeler.UModeler::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UModeler_Awake_m81DC903C2849C113B6ACFAF172EC36B385859039 (UModeler_tF29E9161DE3331F85E86886244AC15FEC514C577* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisRenderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF_mC91ACC92AD57CA6CA00991DAF1DB3830BCE07AF8_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UModeler_tF29E9161DE3331F85E86886244AC15FEC514C577_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF* V_0 = NULL;
	{
		il2cpp_codegen_runtime_class_init_inline(UModeler_tF29E9161DE3331F85E86886244AC15FEC514C577_il2cpp_TypeInfo_var);
		ModelerDelegate_t3E84323788B9A588C192E5D33F6809AAB16B2707* L_0 = ((UModeler_tF29E9161DE3331F85E86886244AC15FEC514C577_StaticFields*)il2cpp_codegen_static_fields_for(UModeler_tF29E9161DE3331F85E86886244AC15FEC514C577_il2cpp_TypeInfo_var))->___OnAwakeDelegate_5;
		if (!L_0)
		{
			goto IL_0019;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(UModeler_tF29E9161DE3331F85E86886244AC15FEC514C577_il2cpp_TypeInfo_var);
		bool L_1 = ((UModeler_tF29E9161DE3331F85E86886244AC15FEC514C577_StaticFields*)il2cpp_codegen_static_fields_for(UModeler_tF29E9161DE3331F85E86886244AC15FEC514C577_il2cpp_TypeInfo_var))->___enableDelegate_4;
		if (!L_1)
		{
			goto IL_0019;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(UModeler_tF29E9161DE3331F85E86886244AC15FEC514C577_il2cpp_TypeInfo_var);
		ModelerDelegate_t3E84323788B9A588C192E5D33F6809AAB16B2707* L_2 = ((UModeler_tF29E9161DE3331F85E86886244AC15FEC514C577_StaticFields*)il2cpp_codegen_static_fields_for(UModeler_tF29E9161DE3331F85E86886244AC15FEC514C577_il2cpp_TypeInfo_var))->___OnAwakeDelegate_5;
		NullCheck(L_2);
		ModelerDelegate_Invoke_mDC38E9A49BD3FA13238128AB62B526A823CEADC1_inline(L_2, __this, NULL);
	}

IL_0019:
	{
		bool L_3 = __this->___isInvisibleObject_19;
		if (!L_3)
		{
			goto IL_003f;
		}
	}
	{
		bool L_4;
		L_4 = Application_get_isPlaying_m25B0ABDFEF54F5370CD3F263A813540843D00F34(NULL);
		if (!L_4)
		{
			goto IL_003f;
		}
	}
	{
		Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF* L_5;
		L_5 = Component_GetComponent_TisRenderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF_mC91ACC92AD57CA6CA00991DAF1DB3830BCE07AF8(__this, Component_GetComponent_TisRenderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF_mC91ACC92AD57CA6CA00991DAF1DB3830BCE07AF8_RuntimeMethod_var);
		V_0 = L_5;
		Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF* L_6 = V_0;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_7;
		L_7 = Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602(L_6, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_7)
		{
			goto IL_003f;
		}
	}
	{
		Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF* L_8 = V_0;
		NullCheck(L_8);
		Renderer_set_enabled_m015E6D7B825528A31182F267234CC6A925F71DA8(L_8, (bool)0, NULL);
	}

IL_003f:
	{
		return;
	}
}
// System.UInt64 tripolygon.UModeler.UModeler::CollectLatestID()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint64_t UModeler_CollectLatestID_m93A909453B30FF2AE54ACFFBD5F4AE432C9A2D79 (UModeler_tF29E9161DE3331F85E86886244AC15FEC514C577* __this, const RuntimeMethod* method) 
{
	uint64_t V_0 = 0;
	{
		V_0 = ((int64_t)0);
		EditableMesh_tF419912423C538859FC4EDB1F6ABD7314E01A476* L_0 = __this->___editableMesh__11;
		if (!L_0)
		{
			goto IL_0017;
		}
	}
	{
		EditableMesh_tF419912423C538859FC4EDB1F6ABD7314E01A476* L_1 = __this->___editableMesh__11;
		NullCheck(L_1);
		uint64_t L_2;
		L_2 = EditableMesh_CollectLatestID_m424F789134F7146B87613E12DFAC05F8950CD869(L_1, NULL);
		V_0 = L_2;
	}

IL_0017:
	{
		uint64_t L_3 = V_0;
		return L_3;
	}
}
// System.Void tripolygon.UModeler.UModeler::CheckInstanceID()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UModeler_CheckInstanceID_m8C1679FDEAECE92907BF5C0CBDA5A2A1D26BB122 (UModeler_tF29E9161DE3331F85E86886244AC15FEC514C577* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_m29BEDE660794161B463CE980419121848921671C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_tB88E7361EE76DFB3EBB7FCD60CC59ACC3E48C284_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	List_1_tB88E7361EE76DFB3EBB7FCD60CC59ACC3E48C284* V_0 = NULL;
	{
		List_1_tB88E7361EE76DFB3EBB7FCD60CC59ACC3E48C284* L_0 = (List_1_tB88E7361EE76DFB3EBB7FCD60CC59ACC3E48C284*)il2cpp_codegen_object_new(List_1_tB88E7361EE76DFB3EBB7FCD60CC59ACC3E48C284_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		List_1__ctor_m29BEDE660794161B463CE980419121848921671C(L_0, List_1__ctor_m29BEDE660794161B463CE980419121848921671C_RuntimeMethod_var);
		V_0 = L_0;
		EditableMesh_tF419912423C538859FC4EDB1F6ABD7314E01A476* L_1 = __this->___editableMesh__11;
		if (!L_1)
		{
			goto IL_001a;
		}
	}
	{
		EditableMesh_tF419912423C538859FC4EDB1F6ABD7314E01A476* L_2 = __this->___editableMesh__11;
		List_1_tB88E7361EE76DFB3EBB7FCD60CC59ACC3E48C284* L_3 = V_0;
		NullCheck(L_2);
		EditableMesh_CheckInstanceID_m55D17D0C26C6DC3A2B7009D9244B7382FE64A21D(L_2, L_3, NULL);
	}

IL_001a:
	{
		return;
	}
}
// System.Void tripolygon.UModeler.UModeler::OnDestroy()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UModeler_OnDestroy_m27B4A2DF336D24F421DC2C4B0BB3C8D3C9B4A74B (UModeler_tF29E9161DE3331F85E86886244AC15FEC514C577* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UModeler_tF29E9161DE3331F85E86886244AC15FEC514C577_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_runtime_class_init_inline(UModeler_tF29E9161DE3331F85E86886244AC15FEC514C577_il2cpp_TypeInfo_var);
		ModelerDelegate_t3E84323788B9A588C192E5D33F6809AAB16B2707* L_0 = ((UModeler_tF29E9161DE3331F85E86886244AC15FEC514C577_StaticFields*)il2cpp_codegen_static_fields_for(UModeler_tF29E9161DE3331F85E86886244AC15FEC514C577_il2cpp_TypeInfo_var))->___OnDestroyDelegate_6;
		if (!L_0)
		{
			goto IL_0019;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(UModeler_tF29E9161DE3331F85E86886244AC15FEC514C577_il2cpp_TypeInfo_var);
		bool L_1 = ((UModeler_tF29E9161DE3331F85E86886244AC15FEC514C577_StaticFields*)il2cpp_codegen_static_fields_for(UModeler_tF29E9161DE3331F85E86886244AC15FEC514C577_il2cpp_TypeInfo_var))->___enableDelegate_4;
		if (!L_1)
		{
			goto IL_0019;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(UModeler_tF29E9161DE3331F85E86886244AC15FEC514C577_il2cpp_TypeInfo_var);
		ModelerDelegate_t3E84323788B9A588C192E5D33F6809AAB16B2707* L_2 = ((UModeler_tF29E9161DE3331F85E86886244AC15FEC514C577_StaticFields*)il2cpp_codegen_static_fields_for(UModeler_tF29E9161DE3331F85E86886244AC15FEC514C577_il2cpp_TypeInfo_var))->___OnDestroyDelegate_6;
		NullCheck(L_2);
		ModelerDelegate_Invoke_mDC38E9A49BD3FA13238128AB62B526A823CEADC1_inline(L_2, __this, NULL);
	}

IL_0019:
	{
		return;
	}
}
// System.Void tripolygon.UModeler.UModeler::OnDisable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UModeler_OnDisable_m64A370DE661ADBC42DCC7637ED3C3382B91416A6 (UModeler_tF29E9161DE3331F85E86886244AC15FEC514C577* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UModeler_tF29E9161DE3331F85E86886244AC15FEC514C577_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_runtime_class_init_inline(UModeler_tF29E9161DE3331F85E86886244AC15FEC514C577_il2cpp_TypeInfo_var);
		ModelerDelegate_t3E84323788B9A588C192E5D33F6809AAB16B2707* L_0 = ((UModeler_tF29E9161DE3331F85E86886244AC15FEC514C577_StaticFields*)il2cpp_codegen_static_fields_for(UModeler_tF29E9161DE3331F85E86886244AC15FEC514C577_il2cpp_TypeInfo_var))->___OnDisableDelegate_7;
		if (!L_0)
		{
			goto IL_0019;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(UModeler_tF29E9161DE3331F85E86886244AC15FEC514C577_il2cpp_TypeInfo_var);
		bool L_1 = ((UModeler_tF29E9161DE3331F85E86886244AC15FEC514C577_StaticFields*)il2cpp_codegen_static_fields_for(UModeler_tF29E9161DE3331F85E86886244AC15FEC514C577_il2cpp_TypeInfo_var))->___enableDelegate_4;
		if (!L_1)
		{
			goto IL_0019;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(UModeler_tF29E9161DE3331F85E86886244AC15FEC514C577_il2cpp_TypeInfo_var);
		ModelerDelegate_t3E84323788B9A588C192E5D33F6809AAB16B2707* L_2 = ((UModeler_tF29E9161DE3331F85E86886244AC15FEC514C577_StaticFields*)il2cpp_codegen_static_fields_for(UModeler_tF29E9161DE3331F85E86886244AC15FEC514C577_il2cpp_TypeInfo_var))->___OnDisableDelegate_7;
		NullCheck(L_2);
		ModelerDelegate_Invoke_mDC38E9A49BD3FA13238128AB62B526A823CEADC1_inline(L_2, __this, NULL);
	}

IL_0019:
	{
		return;
	}
}
// System.Void tripolygon.UModeler.UModeler::OnEnable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UModeler_OnEnable_m0F58E7CD0C874B1AA16BBDEE9971076788BF44E8 (UModeler_tF29E9161DE3331F85E86886244AC15FEC514C577* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UModeler_tF29E9161DE3331F85E86886244AC15FEC514C577_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_runtime_class_init_inline(UModeler_tF29E9161DE3331F85E86886244AC15FEC514C577_il2cpp_TypeInfo_var);
		ModelerDelegate_t3E84323788B9A588C192E5D33F6809AAB16B2707* L_0 = ((UModeler_tF29E9161DE3331F85E86886244AC15FEC514C577_StaticFields*)il2cpp_codegen_static_fields_for(UModeler_tF29E9161DE3331F85E86886244AC15FEC514C577_il2cpp_TypeInfo_var))->___OnEnableDelegate_8;
		if (!L_0)
		{
			goto IL_0019;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(UModeler_tF29E9161DE3331F85E86886244AC15FEC514C577_il2cpp_TypeInfo_var);
		bool L_1 = ((UModeler_tF29E9161DE3331F85E86886244AC15FEC514C577_StaticFields*)il2cpp_codegen_static_fields_for(UModeler_tF29E9161DE3331F85E86886244AC15FEC514C577_il2cpp_TypeInfo_var))->___enableDelegate_4;
		if (!L_1)
		{
			goto IL_0019;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(UModeler_tF29E9161DE3331F85E86886244AC15FEC514C577_il2cpp_TypeInfo_var);
		ModelerDelegate_t3E84323788B9A588C192E5D33F6809AAB16B2707* L_2 = ((UModeler_tF29E9161DE3331F85E86886244AC15FEC514C577_StaticFields*)il2cpp_codegen_static_fields_for(UModeler_tF29E9161DE3331F85E86886244AC15FEC514C577_il2cpp_TypeInfo_var))->___OnEnableDelegate_8;
		NullCheck(L_2);
		ModelerDelegate_Invoke_mDC38E9A49BD3FA13238128AB62B526A823CEADC1_inline(L_2, __this, NULL);
	}

IL_0019:
	{
		return;
	}
}
// System.Void tripolygon.UModeler.UModeler::OnRenderObject()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UModeler_OnRenderObject_m8C397C6BEE5C0B59178B3C51FE23FE7D215EF23E (UModeler_tF29E9161DE3331F85E86886244AC15FEC514C577* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Graphics_t99CD970FFEA58171C70F54DF0C06D315BD452F2C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_m48BBB83C5F748E6E6FF0731C3682092DEA6A7173_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_m70F5CFC2DEA9332B78C5ADC0EE1CE1B7465B1456_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3100DDE01867AE42A5451E50906F4258BD9DB4F5);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral66E0F15563627FEE06E4648DB48E8D9B3EEDCC91);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDA7E8B88100AA34B19982A11B0554BAF879AFF81);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_0;
		L_0 = Camera_get_current_m25217A02CB09E3BD50E3E0327879E870AD58C6C3(NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602(L_0, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_1)
		{
			goto IL_00e3;
		}
	}
	{
		EngineResourceManager_tB814C237AED9E9140B8D664B9F5D3BE18965A951* L_2;
		L_2 = UModeler_get_engineResources_m05783A7FBCD6CE7656B364D73CFD2C9D583FC181(__this, NULL);
		if (!L_2)
		{
			goto IL_00e3;
		}
	}
	{
		EngineResourceManager_tB814C237AED9E9140B8D664B9F5D3BE18965A951* L_3;
		L_3 = UModeler_get_engineResources_m05783A7FBCD6CE7656B364D73CFD2C9D583FC181(__this, NULL);
		NullCheck(L_3);
		Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* L_4;
		L_4 = EngineResourceManager_get_RenderableMesh_m511431D5A84480BC6B19F3C475926EFE5B5A1A20(L_3, NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_5;
		L_5 = Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602(L_4, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_5)
		{
			goto IL_00e3;
		}
	}
	{
		EngineResourceManager_tB814C237AED9E9140B8D664B9F5D3BE18965A951* L_6;
		L_6 = UModeler_get_engineResources_m05783A7FBCD6CE7656B364D73CFD2C9D583FC181(__this, NULL);
		NullCheck(L_6);
		List_1_t386E09F4F22DDE4D2AC41A8567FFF283C254537B* L_7;
		L_7 = EngineResourceManager_get_RenderableMaterials_mB75F05A29226B0F7B93BCBF3B77A303134E148D1_inline(L_6, NULL);
		NullCheck(L_7);
		int32_t L_8;
		L_8 = List_1_get_Count_m48BBB83C5F748E6E6FF0731C3682092DEA6A7173_inline(L_7, List_1_get_Count_m48BBB83C5F748E6E6FF0731C3682092DEA6A7173_RuntimeMethod_var);
		if ((((int32_t)L_8) <= ((int32_t)0)))
		{
			goto IL_00e3;
		}
	}
	{
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_9;
		L_9 = Camera_get_current_m25217A02CB09E3BD50E3E0327879E870AD58C6C3(NULL);
		NullCheck(L_9);
		String_t* L_10;
		L_10 = Object_get_name_mAC2F6B897CF1303BA4249B4CB55271AFACBB6392(L_9, NULL);
		bool L_11;
		L_11 = String_op_Inequality_m8C940F3CFC42866709D7CA931B3D77B4BE94BCB6(L_10, _stringLiteral3100DDE01867AE42A5451E50906F4258BD9DB4F5, NULL);
		if (!L_11)
		{
			goto IL_008a;
		}
	}
	{
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_12;
		L_12 = Camera_get_current_m25217A02CB09E3BD50E3E0327879E870AD58C6C3(NULL);
		NullCheck(L_12);
		String_t* L_13;
		L_13 = Object_get_name_mAC2F6B897CF1303BA4249B4CB55271AFACBB6392(L_12, NULL);
		bool L_14;
		L_14 = String_op_Inequality_m8C940F3CFC42866709D7CA931B3D77B4BE94BCB6(L_13, _stringLiteralDA7E8B88100AA34B19982A11B0554BAF879AFF81, NULL);
		if (!L_14)
		{
			goto IL_008a;
		}
	}
	{
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_15;
		L_15 = Camera_get_current_m25217A02CB09E3BD50E3E0327879E870AD58C6C3(NULL);
		NullCheck(L_15);
		String_t* L_16;
		L_16 = Object_get_name_mAC2F6B897CF1303BA4249B4CB55271AFACBB6392(L_15, NULL);
		bool L_17;
		L_17 = String_op_Inequality_m8C940F3CFC42866709D7CA931B3D77B4BE94BCB6(L_16, _stringLiteral66E0F15563627FEE06E4648DB48E8D9B3EEDCC91, NULL);
		if (!L_17)
		{
			goto IL_008a;
		}
	}
	{
		return;
	}

IL_008a:
	{
		V_0 = 0;
		goto IL_00d0;
	}

IL_008e:
	{
		EngineResourceManager_tB814C237AED9E9140B8D664B9F5D3BE18965A951* L_18;
		L_18 = UModeler_get_engineResources_m05783A7FBCD6CE7656B364D73CFD2C9D583FC181(__this, NULL);
		NullCheck(L_18);
		Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* L_19;
		L_19 = EngineResourceManager_get_RenderableMesh_m511431D5A84480BC6B19F3C475926EFE5B5A1A20(L_18, NULL);
		int32_t L_20 = V_0;
		NullCheck(L_19);
		uint32_t L_21;
		L_21 = Mesh_GetIndexCount_m8F6E3C336023DFD649715A2F9DAAFD83E25ED366(L_19, L_20, NULL);
		if ((!(((uint32_t)L_21) > ((uint32_t)0))))
		{
			goto IL_00cc;
		}
	}
	{
		EngineResourceManager_tB814C237AED9E9140B8D664B9F5D3BE18965A951* L_22;
		L_22 = UModeler_get_engineResources_m05783A7FBCD6CE7656B364D73CFD2C9D583FC181(__this, NULL);
		NullCheck(L_22);
		Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* L_23;
		L_23 = EngineResourceManager_get_RenderableMesh_m511431D5A84480BC6B19F3C475926EFE5B5A1A20(L_22, NULL);
		Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 L_24;
		L_24 = UModeler_get_worldTM_mDC2A444D24B9C454511EFAA167A70D0A3829B323(__this, NULL);
		EngineResourceManager_tB814C237AED9E9140B8D664B9F5D3BE18965A951* L_25;
		L_25 = UModeler_get_engineResources_m05783A7FBCD6CE7656B364D73CFD2C9D583FC181(__this, NULL);
		NullCheck(L_25);
		List_1_t386E09F4F22DDE4D2AC41A8567FFF283C254537B* L_26;
		L_26 = EngineResourceManager_get_RenderableMaterials_mB75F05A29226B0F7B93BCBF3B77A303134E148D1_inline(L_25, NULL);
		int32_t L_27 = V_0;
		NullCheck(L_26);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_28;
		L_28 = List_1_get_Item_m70F5CFC2DEA9332B78C5ADC0EE1CE1B7465B1456(L_26, L_27, List_1_get_Item_m70F5CFC2DEA9332B78C5ADC0EE1CE1B7465B1456_RuntimeMethod_var);
		int32_t L_29 = V_0;
		il2cpp_codegen_runtime_class_init_inline(Graphics_t99CD970FFEA58171C70F54DF0C06D315BD452F2C_il2cpp_TypeInfo_var);
		Graphics_DrawMesh_mF8680B54DC948581F29D6B3E75008FF9612B4930(L_23, L_24, L_28, 0, (Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184*)NULL, L_29, NULL);
	}

IL_00cc:
	{
		int32_t L_30 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_30, 1));
	}

IL_00d0:
	{
		int32_t L_31 = V_0;
		EngineResourceManager_tB814C237AED9E9140B8D664B9F5D3BE18965A951* L_32;
		L_32 = UModeler_get_engineResources_m05783A7FBCD6CE7656B364D73CFD2C9D583FC181(__this, NULL);
		NullCheck(L_32);
		Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* L_33;
		L_33 = EngineResourceManager_get_RenderableMesh_m511431D5A84480BC6B19F3C475926EFE5B5A1A20(L_32, NULL);
		NullCheck(L_33);
		int32_t L_34;
		L_34 = Mesh_get_subMeshCount_mC0141293D0F339D8D721CCA2612B32E6FD7E3F8B(L_33, NULL);
		if ((((int32_t)L_31) < ((int32_t)L_34)))
		{
			goto IL_008e;
		}
	}

IL_00e3:
	{
		return;
	}
}
// System.Void tripolygon.UModeler.UModeler::InvalideCounting()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UModeler_InvalideCounting_m8AE4EF1365CD4C5755CCFC1CB3DA26142D2B2047 (UModeler_tF29E9161DE3331F85E86886244AC15FEC514C577* __this, const RuntimeMethod* method) 
{
	{
		__this->___totalTriangleCount__30 = (-1);
		__this->___totalPolygonCount__31 = (-1);
		return;
	}
}
// System.Void tripolygon.UModeler.UModeler::CopySubData(tripolygon.UModeler.UModeler)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UModeler_CopySubData_m39ACBCD3EABD7B910FB3804D9FADA79FB663C40E (UModeler_tF29E9161DE3331F85E86886244AC15FEC514C577* __this, UModeler_tF29E9161DE3331F85E86886244AC15FEC514C577* ___originalModeler0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_AddRange_mACF0CBFB5107412F825BB12F5FC93699031073AA_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Clear_mB542E879C436E98D901D3068C891582A25F85711_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		UModeler_tF29E9161DE3331F85E86886244AC15FEC514C577* L_0 = ___originalModeler0;
		NullCheck(L_0);
		bool L_1 = L_0->___backfaces__12;
		__this->___backfaces__12 = L_1;
		List_1_t386E09F4F22DDE4D2AC41A8567FFF283C254537B* L_2 = __this->___materials_13;
		NullCheck(L_2);
		List_1_Clear_mB542E879C436E98D901D3068C891582A25F85711_inline(L_2, List_1_Clear_mB542E879C436E98D901D3068C891582A25F85711_RuntimeMethod_var);
		List_1_t386E09F4F22DDE4D2AC41A8567FFF283C254537B* L_3 = __this->___materials_13;
		UModeler_tF29E9161DE3331F85E86886244AC15FEC514C577* L_4 = ___originalModeler0;
		NullCheck(L_4);
		List_1_t386E09F4F22DDE4D2AC41A8567FFF283C254537B* L_5 = L_4->___materials_13;
		NullCheck(L_3);
		List_1_AddRange_mACF0CBFB5107412F825BB12F5FC93699031073AA(L_3, L_5, List_1_AddRange_mACF0CBFB5107412F825BB12F5FC93699031073AA_RuntimeMethod_var);
		return;
	}
}
// UnityEngine.Matrix4x4 tripolygon.UModeler.UModeler::get_worldTM()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 UModeler_get_worldTM_mDC2A444D24B9C454511EFAA167A70D0A3829B323 (UModeler_tF29E9161DE3331F85E86886244AC15FEC514C577* __this, const RuntimeMethod* method) 
{
	{
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_0;
		L_0 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_0);
		Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 L_1;
		L_1 = Transform_get_localToWorldMatrix_m5D35188766856338DD21DE756F42277C21719E6D(L_0, NULL);
		return L_1;
	}
}
// UnityEngine.Matrix4x4 tripolygon.UModeler.UModeler::get_worldToLocalTM()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 UModeler_get_worldToLocalTM_m444C9AC2CD7F8D20F2805A2618DC25B0DFAF67FA (UModeler_tF29E9161DE3331F85E86886244AC15FEC514C577* __this, const RuntimeMethod* method) 
{
	{
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_0;
		L_0 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_0);
		Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 L_1;
		L_1 = Transform_get_worldToLocalMatrix_mB633C122A01BCE8E51B10B8B8CB95F580750B3F1(L_0, NULL);
		return L_1;
	}
}
// System.String tripolygon.UModeler.UModeler::get_objectName()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* UModeler_get_objectName_m3DE60BFF7C9DFD622350948719B8308709D62710 (UModeler_tF29E9161DE3331F85E86886244AC15FEC514C577* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UMContext_tD5DABA4A108180D95D3BDB86E9A4669F51289AFB_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		UModeler_tF29E9161DE3331F85E86886244AC15FEC514C577* L_0 = ((UMContext_tD5DABA4A108180D95D3BDB86E9A4669F51289AFB_StaticFields*)il2cpp_codegen_static_fields_for(UMContext_tD5DABA4A108180D95D3BDB86E9A4669F51289AFB_il2cpp_TypeInfo_var))->___activeModeler_0;
		NullCheck(L_0);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_1;
		L_1 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_0, NULL);
		NullCheck(L_1);
		String_t* L_2;
		L_2 = Object_get_name_mAC2F6B897CF1303BA4249B4CB55271AFACBB6392(L_1, NULL);
		return L_2;
	}
}
// System.Void tripolygon.UModeler.UModeler::InvalidateMeshResources()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UModeler_InvalidateMeshResources_mBBBCF74CB4772F81AC98F163F3B38372BC4F9EDA (UModeler_tF29E9161DE3331F85E86886244AC15FEC514C577* __this, const RuntimeMethod* method) 
{
	{
		__this->___renderableMeshFilter__32 = (MeshFilter_t6D1CE2473A1E45AC73013400585A1163BF66B2F5*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___renderableMeshFilter__32), (void*)(MeshFilter_t6D1CE2473A1E45AC73013400585A1163BF66B2F5*)NULL);
		__this->___meshRenderer__33 = (MeshRenderer_t4B7747212F0B88244BB7790C61AE124BFC15BAAE*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___meshRenderer__33), (void*)(MeshRenderer_t4B7747212F0B88244BB7790C61AE124BFC15BAAE*)NULL);
		return;
	}
}
// System.Void tripolygon.UModeler.UModeler::CreateEngineResource()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UModeler_CreateEngineResource_m896AA10FA12B7E69581135F30370735BB337008B (UModeler_tF29E9161DE3331F85E86886244AC15FEC514C577* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EngineResourceManager_tB814C237AED9E9140B8D664B9F5D3BE18965A951_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		EngineResourceManager_tB814C237AED9E9140B8D664B9F5D3BE18965A951* L_0 = __this->___engineResources__29;
		if (L_0)
		{
			goto IL_001e;
		}
	}
	{
		EngineResourceManager_tB814C237AED9E9140B8D664B9F5D3BE18965A951* L_1 = (EngineResourceManager_tB814C237AED9E9140B8D664B9F5D3BE18965A951*)il2cpp_codegen_object_new(EngineResourceManager_tB814C237AED9E9140B8D664B9F5D3BE18965A951_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		EngineResourceManager__ctor_mC75ACA770653EDA61FB699FB3CA6DDAFD68B685C(L_1, NULL);
		__this->___engineResources__29 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___engineResources__29), (void*)L_1);
		EngineResourceManager_tB814C237AED9E9140B8D664B9F5D3BE18965A951* L_2 = __this->___engineResources__29;
		NullCheck(L_2);
		EngineResourceManager_Init_m9AB9E965A1606AA5C510C8F3189BFC991D64BB58(L_2, NULL);
	}

IL_001e:
	{
		return;
	}
}
// System.Void tripolygon.UModeler.UModeler::CreateMeshFilter()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UModeler_CreateMeshFilter_mFD050A12989E4918784C4378D3DAA9D800B7E6B9 (UModeler_tF29E9161DE3331F85E86886244AC15FEC514C577* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_AddComponent_TisMeshFilter_t6D1CE2473A1E45AC73013400585A1163BF66B2F5_mEAB8177A64DF1A50BB7996ACEEEADCD65358AC94_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisMeshFilter_t6D1CE2473A1E45AC73013400585A1163BF66B2F5_mDF6525BCE37B444313BE0AA2305BDF4EB8B92FE8_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3717295B45F9AF68EC42C83663337C3AD423E46D);
		s_Il2CppMethodInitialized = true;
	}
	MeshFilter_t6D1CE2473A1E45AC73013400585A1163BF66B2F5* V_0 = NULL;
	{
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_0;
		L_0 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_0);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_1;
		L_1 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_0, NULL);
		NullCheck(L_1);
		MeshFilter_t6D1CE2473A1E45AC73013400585A1163BF66B2F5* L_2;
		L_2 = GameObject_GetComponent_TisMeshFilter_t6D1CE2473A1E45AC73013400585A1163BF66B2F5_mDF6525BCE37B444313BE0AA2305BDF4EB8B92FE8(L_1, GameObject_GetComponent_TisMeshFilter_t6D1CE2473A1E45AC73013400585A1163BF66B2F5_mDF6525BCE37B444313BE0AA2305BDF4EB8B92FE8_RuntimeMethod_var);
		V_0 = L_2;
		MeshFilter_t6D1CE2473A1E45AC73013400585A1163BF66B2F5* L_3 = V_0;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_4;
		L_4 = Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605(L_3, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_4)
		{
			goto IL_0035;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_LogError_mB00B2B4468EF3CAF041B038D840820FB84C924B2(_stringLiteral3717295B45F9AF68EC42C83663337C3AD423E46D, NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_5;
		L_5 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_5);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_6;
		L_6 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_5, NULL);
		NullCheck(L_6);
		MeshFilter_t6D1CE2473A1E45AC73013400585A1163BF66B2F5* L_7;
		L_7 = GameObject_AddComponent_TisMeshFilter_t6D1CE2473A1E45AC73013400585A1163BF66B2F5_mEAB8177A64DF1A50BB7996ACEEEADCD65358AC94(L_6, GameObject_AddComponent_TisMeshFilter_t6D1CE2473A1E45AC73013400585A1163BF66B2F5_mEAB8177A64DF1A50BB7996ACEEEADCD65358AC94_RuntimeMethod_var);
		V_0 = L_7;
	}

IL_0035:
	{
		MeshFilter_t6D1CE2473A1E45AC73013400585A1163BF66B2F5* L_8 = V_0;
		NullCheck(L_8);
		Object_set_hideFlags_mACB8BFC903FB3B01BBD427753E791BF28B5E33D4(L_8, 0, NULL);
		MeshFilter_t6D1CE2473A1E45AC73013400585A1163BF66B2F5* L_9 = V_0;
		__this->___renderableMeshFilter__32 = L_9;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___renderableMeshFilter__32), (void*)L_9);
		MeshFilter_t6D1CE2473A1E45AC73013400585A1163BF66B2F5* L_10 = V_0;
		NullCheck(L_10);
		Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* L_11;
		L_11 = MeshFilter_get_sharedMesh_mE4ED3E7E31C1DE5097E4980DA996E620F7D7CB8C(L_10, NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_12;
		L_12 = Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605(L_11, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (L_12)
		{
			goto IL_0060;
		}
	}
	{
		bool L_13;
		L_13 = Application_get_isPlaying_m25B0ABDFEF54F5370CD3F263A813540843D00F34(NULL);
		if (L_13)
		{
			goto IL_007a;
		}
	}
	{
		bool L_14;
		L_14 = UModeler_CheckMesh_mDEB1A16EE52D9574760A37557EE2C35BA090F56F(__this, NULL);
		if (!L_14)
		{
			goto IL_007a;
		}
	}

IL_0060:
	{
		MeshFilter_t6D1CE2473A1E45AC73013400585A1163BF66B2F5* L_15 = V_0;
		Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* L_16;
		L_16 = UModeler_GenerateMesh_mB474AC636ACBC90E91807EDAE98C2E69A6A670AD(__this, NULL);
		NullCheck(L_15);
		MeshFilter_set_sharedMesh_m946F7E3F583761982642BDA4753784AF1DF6E16F(L_15, L_16, NULL);
		UModeler_Build_m631EF070C206EFDCDC5892F43BDFA2BB3BE72943(__this, 0, (bool)0, NULL);
		UModeler_UpdateMeshContainer_mC751BD368FA9BFB1A7FF94E8D137F9A7B7EACDC7(__this, NULL);
	}

IL_007a:
	{
		return;
	}
}
// System.Void tripolygon.UModeler.UModeler::CreateMeshRenderer()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UModeler_CreateMeshRenderer_m8BA1A34E7C629388A876913DC21629A650B10D63 (UModeler_tF29E9161DE3331F85E86886244AC15FEC514C577* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_AddComponent_TisMeshRenderer_t4B7747212F0B88244BB7790C61AE124BFC15BAAE_mCDD3E77673305199F52C772AE8C7952F3864740D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisMeshRenderer_t4B7747212F0B88244BB7790C61AE124BFC15BAAE_m7FF948365C38BC39333D82B235A7C4EAD219960D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB23993EFD3E41919DE94C67F5C88AE1DEAB4D590);
		s_Il2CppMethodInitialized = true;
	}
	MeshRenderer_t4B7747212F0B88244BB7790C61AE124BFC15BAAE* V_0 = NULL;
	{
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_0;
		L_0 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_0);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_1;
		L_1 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_0, NULL);
		NullCheck(L_1);
		MeshRenderer_t4B7747212F0B88244BB7790C61AE124BFC15BAAE* L_2;
		L_2 = GameObject_GetComponent_TisMeshRenderer_t4B7747212F0B88244BB7790C61AE124BFC15BAAE_m7FF948365C38BC39333D82B235A7C4EAD219960D(L_1, GameObject_GetComponent_TisMeshRenderer_t4B7747212F0B88244BB7790C61AE124BFC15BAAE_m7FF948365C38BC39333D82B235A7C4EAD219960D_RuntimeMethod_var);
		V_0 = L_2;
		MeshRenderer_t4B7747212F0B88244BB7790C61AE124BFC15BAAE* L_3 = V_0;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_4;
		L_4 = Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605(L_3, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_4)
		{
			goto IL_0035;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_LogError_mB00B2B4468EF3CAF041B038D840820FB84C924B2(_stringLiteralB23993EFD3E41919DE94C67F5C88AE1DEAB4D590, NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_5;
		L_5 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_5);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_6;
		L_6 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_5, NULL);
		NullCheck(L_6);
		MeshRenderer_t4B7747212F0B88244BB7790C61AE124BFC15BAAE* L_7;
		L_7 = GameObject_AddComponent_TisMeshRenderer_t4B7747212F0B88244BB7790C61AE124BFC15BAAE_mCDD3E77673305199F52C772AE8C7952F3864740D(L_6, GameObject_AddComponent_TisMeshRenderer_t4B7747212F0B88244BB7790C61AE124BFC15BAAE_mCDD3E77673305199F52C772AE8C7952F3864740D_RuntimeMethod_var);
		V_0 = L_7;
	}

IL_0035:
	{
		MeshRenderer_t4B7747212F0B88244BB7790C61AE124BFC15BAAE* L_8 = V_0;
		NullCheck(L_8);
		Renderer_set_sortingOrder_m4C67F002AD68CA0D55D20D6B78CDED3DB24467DA(L_8, 0, NULL);
		MeshRenderer_t4B7747212F0B88244BB7790C61AE124BFC15BAAE* L_9 = V_0;
		__this->___meshRenderer__33 = L_9;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___meshRenderer__33), (void*)L_9);
		return;
	}
}
// UnityEngine.MeshFilter tripolygon.UModeler.UModeler::get_renderableMeshFilter()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR MeshFilter_t6D1CE2473A1E45AC73013400585A1163BF66B2F5* UModeler_get_renderableMeshFilter_mC09382DC2071BB225D5687667B77401B16B5B23F (UModeler_tF29E9161DE3331F85E86886244AC15FEC514C577* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		MeshFilter_t6D1CE2473A1E45AC73013400585A1163BF66B2F5* L_0 = __this->___renderableMeshFilter__32;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605(L_0, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_1)
		{
			goto IL_0014;
		}
	}
	{
		UModeler_CreateMeshFilter_mFD050A12989E4918784C4378D3DAA9D800B7E6B9(__this, NULL);
	}

IL_0014:
	{
		MeshFilter_t6D1CE2473A1E45AC73013400585A1163BF66B2F5* L_2 = __this->___renderableMeshFilter__32;
		return L_2;
	}
}
// UnityEngine.MeshRenderer tripolygon.UModeler.UModeler::get_meshRenderer()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR MeshRenderer_t4B7747212F0B88244BB7790C61AE124BFC15BAAE* UModeler_get_meshRenderer_m3E26F0C6193357FE36E79AF21AAA08A114BC3C81 (UModeler_tF29E9161DE3331F85E86886244AC15FEC514C577* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		MeshRenderer_t4B7747212F0B88244BB7790C61AE124BFC15BAAE* L_0 = __this->___meshRenderer__33;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605(L_0, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_1)
		{
			goto IL_0014;
		}
	}
	{
		UModeler_CreateMeshRenderer_m8BA1A34E7C629388A876913DC21629A650B10D63(__this, NULL);
	}

IL_0014:
	{
		MeshRenderer_t4B7747212F0B88244BB7790C61AE124BFC15BAAE* L_2 = __this->___meshRenderer__33;
		return L_2;
	}
}
// System.Void tripolygon.UModeler.UModeler::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UModeler__ctor_m4EA125D3102793D3FC95BF9710531E8E9F226E06 (UModeler_tF29E9161DE3331F85E86886244AC15FEC514C577* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_m38500C20418699AEC04B1946434E06EC96FB4B1C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_t386E09F4F22DDE4D2AC41A8567FFF283C254537B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MaterialU5BU5D_t2B1D11C42DB07A4400C0535F92DBB87A2E346D3D_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		List_1_t386E09F4F22DDE4D2AC41A8567FFF283C254537B* L_0 = (List_1_t386E09F4F22DDE4D2AC41A8567FFF283C254537B*)il2cpp_codegen_object_new(List_1_t386E09F4F22DDE4D2AC41A8567FFF283C254537B_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		List_1__ctor_m38500C20418699AEC04B1946434E06EC96FB4B1C(L_0, List_1__ctor_m38500C20418699AEC04B1946434E06EC96FB4B1C_RuntimeMethod_var);
		__this->___materials_13 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___materials_13), (void*)L_0);
		MaterialU5BU5D_t2B1D11C42DB07A4400C0535F92DBB87A2E346D3D* L_1 = (MaterialU5BU5D_t2B1D11C42DB07A4400C0535F92DBB87A2E346D3D*)(MaterialU5BU5D_t2B1D11C42DB07A4400C0535F92DBB87A2E346D3D*)SZArrayNew(MaterialU5BU5D_t2B1D11C42DB07A4400C0535F92DBB87A2E346D3D_il2cpp_TypeInfo_var, (uint32_t)0);
		__this->___originalMaterials_14 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___originalMaterials_14), (void*)L_1);
		__this->___editMode_15 = (bool)1;
		__this->___recalculateTangents_16 = (bool)1;
		__this->___hotspotScale_22 = (1.0f);
		__this->___hotspotPriority_24 = (0.5f);
		__this->___totalTriangleCount__30 = (-1);
		__this->___totalPolygonCount__31 = (-1);
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
		return;
	}
}
// System.Void tripolygon.UModeler.UModeler::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UModeler__cctor_m4734CF6E5E27004BCD2F65499D5A386725D0DEE6 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2__ctor_mB2AF39366CCF9A9E898D6D5400BEDF4F6E1BB646_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_t6D39865003E656D60A88B22671895E4EA1590710_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UModeler_tF29E9161DE3331F85E86886244AC15FEC514C577_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		((UModeler_tF29E9161DE3331F85E86886244AC15FEC514C577_StaticFields*)il2cpp_codegen_static_fields_for(UModeler_tF29E9161DE3331F85E86886244AC15FEC514C577_il2cpp_TypeInfo_var))->___enableDelegate_4 = (bool)1;
		((UModeler_tF29E9161DE3331F85E86886244AC15FEC514C577_StaticFields*)il2cpp_codegen_static_fields_for(UModeler_tF29E9161DE3331F85E86886244AC15FEC514C577_il2cpp_TypeInfo_var))->___OnAwakeDelegate_5 = (ModelerDelegate_t3E84323788B9A588C192E5D33F6809AAB16B2707*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&((UModeler_tF29E9161DE3331F85E86886244AC15FEC514C577_StaticFields*)il2cpp_codegen_static_fields_for(UModeler_tF29E9161DE3331F85E86886244AC15FEC514C577_il2cpp_TypeInfo_var))->___OnAwakeDelegate_5), (void*)(ModelerDelegate_t3E84323788B9A588C192E5D33F6809AAB16B2707*)NULL);
		((UModeler_tF29E9161DE3331F85E86886244AC15FEC514C577_StaticFields*)il2cpp_codegen_static_fields_for(UModeler_tF29E9161DE3331F85E86886244AC15FEC514C577_il2cpp_TypeInfo_var))->___OnDestroyDelegate_6 = (ModelerDelegate_t3E84323788B9A588C192E5D33F6809AAB16B2707*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&((UModeler_tF29E9161DE3331F85E86886244AC15FEC514C577_StaticFields*)il2cpp_codegen_static_fields_for(UModeler_tF29E9161DE3331F85E86886244AC15FEC514C577_il2cpp_TypeInfo_var))->___OnDestroyDelegate_6), (void*)(ModelerDelegate_t3E84323788B9A588C192E5D33F6809AAB16B2707*)NULL);
		((UModeler_tF29E9161DE3331F85E86886244AC15FEC514C577_StaticFields*)il2cpp_codegen_static_fields_for(UModeler_tF29E9161DE3331F85E86886244AC15FEC514C577_il2cpp_TypeInfo_var))->___OnDisableDelegate_7 = (ModelerDelegate_t3E84323788B9A588C192E5D33F6809AAB16B2707*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&((UModeler_tF29E9161DE3331F85E86886244AC15FEC514C577_StaticFields*)il2cpp_codegen_static_fields_for(UModeler_tF29E9161DE3331F85E86886244AC15FEC514C577_il2cpp_TypeInfo_var))->___OnDisableDelegate_7), (void*)(ModelerDelegate_t3E84323788B9A588C192E5D33F6809AAB16B2707*)NULL);
		((UModeler_tF29E9161DE3331F85E86886244AC15FEC514C577_StaticFields*)il2cpp_codegen_static_fields_for(UModeler_tF29E9161DE3331F85E86886244AC15FEC514C577_il2cpp_TypeInfo_var))->___OnEnableDelegate_8 = (ModelerDelegate_t3E84323788B9A588C192E5D33F6809AAB16B2707*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&((UModeler_tF29E9161DE3331F85E86886244AC15FEC514C577_StaticFields*)il2cpp_codegen_static_fields_for(UModeler_tF29E9161DE3331F85E86886244AC15FEC514C577_il2cpp_TypeInfo_var))->___OnEnableDelegate_8), (void*)(ModelerDelegate_t3E84323788B9A588C192E5D33F6809AAB16B2707*)NULL);
		((UModeler_tF29E9161DE3331F85E86886244AC15FEC514C577_StaticFields*)il2cpp_codegen_static_fields_for(UModeler_tF29E9161DE3331F85E86886244AC15FEC514C577_il2cpp_TypeInfo_var))->___OnStartDelegate_9 = (ModelerDelegate_t3E84323788B9A588C192E5D33F6809AAB16B2707*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&((UModeler_tF29E9161DE3331F85E86886244AC15FEC514C577_StaticFields*)il2cpp_codegen_static_fields_for(UModeler_tF29E9161DE3331F85E86886244AC15FEC514C577_il2cpp_TypeInfo_var))->___OnStartDelegate_9), (void*)(ModelerDelegate_t3E84323788B9A588C192E5D33F6809AAB16B2707*)NULL);
		((UModeler_tF29E9161DE3331F85E86886244AC15FEC514C577_StaticFields*)il2cpp_codegen_static_fields_for(UModeler_tF29E9161DE3331F85E86886244AC15FEC514C577_il2cpp_TypeInfo_var))->___latestID__10 = ((int64_t)0);
		Dictionary_2_t6D39865003E656D60A88B22671895E4EA1590710* L_0 = (Dictionary_2_t6D39865003E656D60A88B22671895E4EA1590710*)il2cpp_codegen_object_new(Dictionary_2_t6D39865003E656D60A88B22671895E4EA1590710_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		Dictionary_2__ctor_mB2AF39366CCF9A9E898D6D5400BEDF4F6E1BB646(L_0, Dictionary_2__ctor_mB2AF39366CCF9A9E898D6D5400BEDF4F6E1BB646_RuntimeMethod_var);
		((UModeler_tF29E9161DE3331F85E86886244AC15FEC514C577_StaticFields*)il2cpp_codegen_static_fields_for(UModeler_tF29E9161DE3331F85E86886244AC15FEC514C577_il2cpp_TypeInfo_var))->___meshContainer_28 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&((UModeler_tF29E9161DE3331F85E86886244AC15FEC514C577_StaticFields*)il2cpp_codegen_static_fields_for(UModeler_tF29E9161DE3331F85E86886244AC15FEC514C577_il2cpp_TypeInfo_var))->___meshContainer_28), (void*)L_0);
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
void ModelerDelegate_Invoke_mDC38E9A49BD3FA13238128AB62B526A823CEADC1_Multicast(ModelerDelegate_t3E84323788B9A588C192E5D33F6809AAB16B2707* __this, UModeler_tF29E9161DE3331F85E86886244AC15FEC514C577* ___modeler0, const RuntimeMethod* method)
{
	il2cpp_array_size_t length = __this->___delegates_13->max_length;
	Delegate_t** delegatesToInvoke = reinterpret_cast<Delegate_t**>(__this->___delegates_13->GetAddressAtUnchecked(0));
	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		ModelerDelegate_t3E84323788B9A588C192E5D33F6809AAB16B2707* currentDelegate = reinterpret_cast<ModelerDelegate_t3E84323788B9A588C192E5D33F6809AAB16B2707*>(delegatesToInvoke[i]);
		typedef void (*FunctionPointerType) (RuntimeObject*, UModeler_tF29E9161DE3331F85E86886244AC15FEC514C577*, const RuntimeMethod*);
		((FunctionPointerType)currentDelegate->___invoke_impl_1)((Il2CppObject*)currentDelegate->___method_code_6, ___modeler0, reinterpret_cast<RuntimeMethod*>(currentDelegate->___method_3));
	}
}
void ModelerDelegate_Invoke_mDC38E9A49BD3FA13238128AB62B526A823CEADC1_OpenInst(ModelerDelegate_t3E84323788B9A588C192E5D33F6809AAB16B2707* __this, UModeler_tF29E9161DE3331F85E86886244AC15FEC514C577* ___modeler0, const RuntimeMethod* method)
{
	NullCheck(___modeler0);
	typedef void (*FunctionPointerType) (UModeler_tF29E9161DE3331F85E86886244AC15FEC514C577*, const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr_0)(___modeler0, method);
}
void ModelerDelegate_Invoke_mDC38E9A49BD3FA13238128AB62B526A823CEADC1_OpenStatic(ModelerDelegate_t3E84323788B9A588C192E5D33F6809AAB16B2707* __this, UModeler_tF29E9161DE3331F85E86886244AC15FEC514C577* ___modeler0, const RuntimeMethod* method)
{
	typedef void (*FunctionPointerType) (UModeler_tF29E9161DE3331F85E86886244AC15FEC514C577*, const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr_0)(___modeler0, method);
}
void ModelerDelegate_Invoke_mDC38E9A49BD3FA13238128AB62B526A823CEADC1_OpenStaticInvoker(ModelerDelegate_t3E84323788B9A588C192E5D33F6809AAB16B2707* __this, UModeler_tF29E9161DE3331F85E86886244AC15FEC514C577* ___modeler0, const RuntimeMethod* method)
{
	InvokerActionInvoker1< UModeler_tF29E9161DE3331F85E86886244AC15FEC514C577* >::Invoke(__this->___method_ptr_0, method, NULL, ___modeler0);
}
void ModelerDelegate_Invoke_mDC38E9A49BD3FA13238128AB62B526A823CEADC1_ClosedStaticInvoker(ModelerDelegate_t3E84323788B9A588C192E5D33F6809AAB16B2707* __this, UModeler_tF29E9161DE3331F85E86886244AC15FEC514C577* ___modeler0, const RuntimeMethod* method)
{
	InvokerActionInvoker2< RuntimeObject*, UModeler_tF29E9161DE3331F85E86886244AC15FEC514C577* >::Invoke(__this->___method_ptr_0, method, NULL, __this->___m_target_2, ___modeler0);
}
void ModelerDelegate_Invoke_mDC38E9A49BD3FA13238128AB62B526A823CEADC1_OpenVirtual(ModelerDelegate_t3E84323788B9A588C192E5D33F6809AAB16B2707* __this, UModeler_tF29E9161DE3331F85E86886244AC15FEC514C577* ___modeler0, const RuntimeMethod* method)
{
	NullCheck(___modeler0);
	VirtualActionInvoker0::Invoke(il2cpp_codegen_method_get_slot(method), ___modeler0);
}
void ModelerDelegate_Invoke_mDC38E9A49BD3FA13238128AB62B526A823CEADC1_OpenInterface(ModelerDelegate_t3E84323788B9A588C192E5D33F6809AAB16B2707* __this, UModeler_tF29E9161DE3331F85E86886244AC15FEC514C577* ___modeler0, const RuntimeMethod* method)
{
	NullCheck(___modeler0);
	InterfaceActionInvoker0::Invoke(il2cpp_codegen_method_get_slot(method), il2cpp_codegen_method_get_declaring_type(method), ___modeler0);
}
void ModelerDelegate_Invoke_mDC38E9A49BD3FA13238128AB62B526A823CEADC1_OpenGenericVirtual(ModelerDelegate_t3E84323788B9A588C192E5D33F6809AAB16B2707* __this, UModeler_tF29E9161DE3331F85E86886244AC15FEC514C577* ___modeler0, const RuntimeMethod* method)
{
	NullCheck(___modeler0);
	GenericVirtualActionInvoker0::Invoke(method, ___modeler0);
}
void ModelerDelegate_Invoke_mDC38E9A49BD3FA13238128AB62B526A823CEADC1_OpenGenericInterface(ModelerDelegate_t3E84323788B9A588C192E5D33F6809AAB16B2707* __this, UModeler_tF29E9161DE3331F85E86886244AC15FEC514C577* ___modeler0, const RuntimeMethod* method)
{
	NullCheck(___modeler0);
	GenericInterfaceActionInvoker0::Invoke(method, ___modeler0);
}
// System.Void tripolygon.UModeler.UModeler/ModelerDelegate::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ModelerDelegate__ctor_mB8611ED5BA64219B031A34F9A1916CA97E4759EA (ModelerDelegate_t3E84323788B9A588C192E5D33F6809AAB16B2707* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) 
{
	__this->___method_ptr_0 = il2cpp_codegen_get_virtual_call_method_pointer((RuntimeMethod*)___method1);
	__this->___method_3 = ___method1;
	__this->___m_target_2 = ___object0;
	Il2CppCodeGenWriteBarrier((void**)(&__this->___m_target_2), (void*)___object0);
	int parameterCount = il2cpp_codegen_method_parameter_count((RuntimeMethod*)___method1);
	__this->___method_code_6 = (intptr_t)__this;
	if (MethodIsStatic((RuntimeMethod*)___method1))
	{
		bool isOpen = parameterCount == 1;
		if (il2cpp_codegen_call_method_via_invoker((RuntimeMethod*)___method1))
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&ModelerDelegate_Invoke_mDC38E9A49BD3FA13238128AB62B526A823CEADC1_OpenStaticInvoker;
			else
				__this->___invoke_impl_1 = (intptr_t)&ModelerDelegate_Invoke_mDC38E9A49BD3FA13238128AB62B526A823CEADC1_ClosedStaticInvoker;
		else
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&ModelerDelegate_Invoke_mDC38E9A49BD3FA13238128AB62B526A823CEADC1_OpenStatic;
			else
				{
					__this->___invoke_impl_1 = (intptr_t)__this->___method_ptr_0;
					__this->___method_code_6 = (intptr_t)__this->___m_target_2;
				}
	}
	else
	{
		bool isOpen = parameterCount == 0;
		if (isOpen)
		{
			if (__this->___method_is_virtual_12)
			{
				if (il2cpp_codegen_method_is_generic_instance_method((RuntimeMethod*)___method1))
					if (il2cpp_codegen_method_is_interface_method((RuntimeMethod*)___method1))
						__this->___invoke_impl_1 = (intptr_t)&ModelerDelegate_Invoke_mDC38E9A49BD3FA13238128AB62B526A823CEADC1_OpenGenericInterface;
					else
						__this->___invoke_impl_1 = (intptr_t)&ModelerDelegate_Invoke_mDC38E9A49BD3FA13238128AB62B526A823CEADC1_OpenGenericVirtual;
				else
					if (il2cpp_codegen_method_is_interface_method((RuntimeMethod*)___method1))
						__this->___invoke_impl_1 = (intptr_t)&ModelerDelegate_Invoke_mDC38E9A49BD3FA13238128AB62B526A823CEADC1_OpenInterface;
					else
						__this->___invoke_impl_1 = (intptr_t)&ModelerDelegate_Invoke_mDC38E9A49BD3FA13238128AB62B526A823CEADC1_OpenVirtual;
			}
			else
			{
				__this->___invoke_impl_1 = (intptr_t)&ModelerDelegate_Invoke_mDC38E9A49BD3FA13238128AB62B526A823CEADC1_OpenInst;
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
	__this->___extra_arg_5 = (intptr_t)&ModelerDelegate_Invoke_mDC38E9A49BD3FA13238128AB62B526A823CEADC1_Multicast;
}
// System.Void tripolygon.UModeler.UModeler/ModelerDelegate::Invoke(tripolygon.UModeler.UModeler)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ModelerDelegate_Invoke_mDC38E9A49BD3FA13238128AB62B526A823CEADC1 (ModelerDelegate_t3E84323788B9A588C192E5D33F6809AAB16B2707* __this, UModeler_tF29E9161DE3331F85E86886244AC15FEC514C577* ___modeler0, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, UModeler_tF29E9161DE3331F85E86886244AC15FEC514C577*, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___modeler0, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
// System.IAsyncResult tripolygon.UModeler.UModeler/ModelerDelegate::BeginInvoke(tripolygon.UModeler.UModeler,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ModelerDelegate_BeginInvoke_mA0BDCED20A59D208D2AD1E9A85265B6A08B29767 (ModelerDelegate_t3E84323788B9A588C192E5D33F6809AAB16B2707* __this, UModeler_tF29E9161DE3331F85E86886244AC15FEC514C577* ___modeler0, AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C* ___callback1, RuntimeObject* ___object2, const RuntimeMethod* method) 
{
	void *__d_args[2] = {0};
	__d_args[0] = ___modeler0;
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback1, (RuntimeObject*)___object2);
}
// System.Void tripolygon.UModeler.UModeler/ModelerDelegate::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ModelerDelegate_EndInvoke_m390C2F74E5E9E1C2E7B7ED776A919B92A45B06FC (ModelerDelegate_t3E84323788B9A588C192E5D33F6809AAB16B2707* __this, RuntimeObject* ___result0, const RuntimeMethod* method) 
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
// System.Void tripolygon.UModeler.ActiveModelerHolder::.ctor(tripolygon.UModeler.UModeler)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ActiveModelerHolder__ctor_mA3F4D58A020E8413BED8A3C96B2A5687862E1816 (ActiveModelerHolder_t1B23CBE2E0ECE532A1899BC6BBE8C3F8EE3F1AE7* __this, UModeler_tF29E9161DE3331F85E86886244AC15FEC514C577* ___modeler0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UMContext_tD5DABA4A108180D95D3BDB86E9A4669F51289AFB_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		UModeler_tF29E9161DE3331F85E86886244AC15FEC514C577* L_0 = ((UMContext_tD5DABA4A108180D95D3BDB86E9A4669F51289AFB_StaticFields*)il2cpp_codegen_static_fields_for(UMContext_tD5DABA4A108180D95D3BDB86E9A4669F51289AFB_il2cpp_TypeInfo_var))->___activeModeler_0;
		__this->___originalModeler__0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___originalModeler__0), (void*)L_0);
		UModeler_tF29E9161DE3331F85E86886244AC15FEC514C577* L_1 = ___modeler0;
		((UMContext_tD5DABA4A108180D95D3BDB86E9A4669F51289AFB_StaticFields*)il2cpp_codegen_static_fields_for(UMContext_tD5DABA4A108180D95D3BDB86E9A4669F51289AFB_il2cpp_TypeInfo_var))->___activeModeler_0 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&((UMContext_tD5DABA4A108180D95D3BDB86E9A4669F51289AFB_StaticFields*)il2cpp_codegen_static_fields_for(UMContext_tD5DABA4A108180D95D3BDB86E9A4669F51289AFB_il2cpp_TypeInfo_var))->___activeModeler_0), (void*)L_1);
		return;
	}
}
// System.Void tripolygon.UModeler.ActiveModelerHolder::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ActiveModelerHolder_Dispose_m0E7952959908AF7322EDCC8393BA9954E2046E63 (ActiveModelerHolder_t1B23CBE2E0ECE532A1899BC6BBE8C3F8EE3F1AE7* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UMContext_tD5DABA4A108180D95D3BDB86E9A4669F51289AFB_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		UModeler_tF29E9161DE3331F85E86886244AC15FEC514C577* L_0 = __this->___originalModeler__0;
		((UMContext_tD5DABA4A108180D95D3BDB86E9A4669F51289AFB_StaticFields*)il2cpp_codegen_static_fields_for(UMContext_tD5DABA4A108180D95D3BDB86E9A4669F51289AFB_il2cpp_TypeInfo_var))->___activeModeler_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&((UMContext_tD5DABA4A108180D95D3BDB86E9A4669F51289AFB_StaticFields*)il2cpp_codegen_static_fields_for(UMContext_tD5DABA4A108180D95D3BDB86E9A4669F51289AFB_il2cpp_TypeInfo_var))->___activeModeler_0), (void*)L_0);
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
// System.Boolean tripolygon.UModeler.StopModelerBuild::CheckBuild(System.Int32,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool StopModelerBuild_CheckBuild_mF23F61D8E0022BC759FA6AFCD77A156FD7BE0AD2 (int32_t ___shelf0, bool ___updateToGraphicsAPIImmediately1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_m0C32AFF3B7A78D3835F96AE54D8283A8BE23F63B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Contains_m041392123604C80BB0821138BB776371E95EB79B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StopModelerBuild_t0BB93EB56149A7D7B04B0961A77C2010CEF8DB84_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	BuildShelfArg_t2137F4C02DE10B54ED77462BCB4FC85BA4B81BCA V_0;
	memset((&V_0), 0, sizeof(V_0));
	BuildShelfArg_t2137F4C02DE10B54ED77462BCB4FC85BA4B81BCA V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		StopModelerBuild_t0BB93EB56149A7D7B04B0961A77C2010CEF8DB84* L_0 = ((StopModelerBuild_t0BB93EB56149A7D7B04B0961A77C2010CEF8DB84_StaticFields*)il2cpp_codegen_static_fields_for(StopModelerBuild_t0BB93EB56149A7D7B04B0961A77C2010CEF8DB84_il2cpp_TypeInfo_var))->___stopModelerBuild__0;
		if (L_0)
		{
			goto IL_0009;
		}
	}
	{
		return (bool)1;
	}

IL_0009:
	{
		il2cpp_codegen_initobj((&V_1), sizeof(BuildShelfArg_t2137F4C02DE10B54ED77462BCB4FC85BA4B81BCA));
		int32_t L_1 = ___shelf0;
		(&V_1)->___shelf_0 = L_1;
		bool L_2 = ___updateToGraphicsAPIImmediately1;
		(&V_1)->___updateToGraphicsAPIImmediately_1 = L_2;
		BuildShelfArg_t2137F4C02DE10B54ED77462BCB4FC85BA4B81BCA L_3 = V_1;
		V_0 = L_3;
		StopModelerBuild_t0BB93EB56149A7D7B04B0961A77C2010CEF8DB84* L_4 = ((StopModelerBuild_t0BB93EB56149A7D7B04B0961A77C2010CEF8DB84_StaticFields*)il2cpp_codegen_static_fields_for(StopModelerBuild_t0BB93EB56149A7D7B04B0961A77C2010CEF8DB84_il2cpp_TypeInfo_var))->___stopModelerBuild__0;
		NullCheck(L_4);
		List_1_t2FB40158AFCD69E77037C532086C70828AC06862* L_5 = L_4->___buildSelfs__1;
		BuildShelfArg_t2137F4C02DE10B54ED77462BCB4FC85BA4B81BCA L_6 = V_0;
		NullCheck(L_5);
		bool L_7;
		L_7 = List_1_Contains_m041392123604C80BB0821138BB776371E95EB79B(L_5, L_6, List_1_Contains_m041392123604C80BB0821138BB776371E95EB79B_RuntimeMethod_var);
		if (L_7)
		{
			goto IL_0045;
		}
	}
	{
		StopModelerBuild_t0BB93EB56149A7D7B04B0961A77C2010CEF8DB84* L_8 = ((StopModelerBuild_t0BB93EB56149A7D7B04B0961A77C2010CEF8DB84_StaticFields*)il2cpp_codegen_static_fields_for(StopModelerBuild_t0BB93EB56149A7D7B04B0961A77C2010CEF8DB84_il2cpp_TypeInfo_var))->___stopModelerBuild__0;
		NullCheck(L_8);
		List_1_t2FB40158AFCD69E77037C532086C70828AC06862* L_9 = L_8->___buildSelfs__1;
		BuildShelfArg_t2137F4C02DE10B54ED77462BCB4FC85BA4B81BCA L_10 = V_0;
		NullCheck(L_9);
		List_1_Add_m0C32AFF3B7A78D3835F96AE54D8283A8BE23F63B_inline(L_9, L_10, List_1_Add_m0C32AFF3B7A78D3835F96AE54D8283A8BE23F63B_RuntimeMethod_var);
	}

IL_0045:
	{
		return (bool)0;
	}
}
// System.Boolean tripolygon.UModeler.StopModelerBuild::CheckBuildEdMesh(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool StopModelerBuild_CheckBuildEdMesh_m22367E5D35222E893C4B2B923CF169D6E4D497C9 (int32_t ___shelf0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_m0248A96C5334E9A93E6994B7780478BCD994EA3D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Contains_m4FD96E89F15844C90032C7386BAB528817F1FF5B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StopModelerBuild_t0BB93EB56149A7D7B04B0961A77C2010CEF8DB84_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		StopModelerBuild_t0BB93EB56149A7D7B04B0961A77C2010CEF8DB84* L_0 = ((StopModelerBuild_t0BB93EB56149A7D7B04B0961A77C2010CEF8DB84_StaticFields*)il2cpp_codegen_static_fields_for(StopModelerBuild_t0BB93EB56149A7D7B04B0961A77C2010CEF8DB84_il2cpp_TypeInfo_var))->___stopModelerBuild__0;
		if (L_0)
		{
			goto IL_0009;
		}
	}
	{
		return (bool)1;
	}

IL_0009:
	{
		StopModelerBuild_t0BB93EB56149A7D7B04B0961A77C2010CEF8DB84* L_1 = ((StopModelerBuild_t0BB93EB56149A7D7B04B0961A77C2010CEF8DB84_StaticFields*)il2cpp_codegen_static_fields_for(StopModelerBuild_t0BB93EB56149A7D7B04B0961A77C2010CEF8DB84_il2cpp_TypeInfo_var))->___stopModelerBuild__0;
		NullCheck(L_1);
		List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* L_2 = L_1->___BuildEdMeshSelfs__2;
		int32_t L_3 = ___shelf0;
		NullCheck(L_2);
		bool L_4;
		L_4 = List_1_Contains_m4FD96E89F15844C90032C7386BAB528817F1FF5B(L_2, L_3, List_1_Contains_m4FD96E89F15844C90032C7386BAB528817F1FF5B_RuntimeMethod_var);
		if (L_4)
		{
			goto IL_002b;
		}
	}
	{
		StopModelerBuild_t0BB93EB56149A7D7B04B0961A77C2010CEF8DB84* L_5 = ((StopModelerBuild_t0BB93EB56149A7D7B04B0961A77C2010CEF8DB84_StaticFields*)il2cpp_codegen_static_fields_for(StopModelerBuild_t0BB93EB56149A7D7B04B0961A77C2010CEF8DB84_il2cpp_TypeInfo_var))->___stopModelerBuild__0;
		NullCheck(L_5);
		List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* L_6 = L_5->___BuildEdMeshSelfs__2;
		int32_t L_7 = ___shelf0;
		NullCheck(L_6);
		List_1_Add_m0248A96C5334E9A93E6994B7780478BCD994EA3D_inline(L_6, L_7, List_1_Add_m0248A96C5334E9A93E6994B7780478BCD994EA3D_RuntimeMethod_var);
	}

IL_002b:
	{
		return (bool)0;
	}
}
// System.Void tripolygon.UModeler.StopModelerBuild::.ctor(tripolygon.UModeler.UModeler)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StopModelerBuild__ctor_mE5327841725A7AC92E9F528D9A623D79F77A1580 (StopModelerBuild_t0BB93EB56149A7D7B04B0961A77C2010CEF8DB84* __this, UModeler_tF29E9161DE3331F85E86886244AC15FEC514C577* ___modeler0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_m17F501B5A5C289ECE1B4F3D6EBF05DFA421433F8_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_mD0461A0F9F5D1C4A9C578D17033D69A8AC82FF3F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_t2FB40158AFCD69E77037C532086C70828AC06862_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StopModelerBuild_t0BB93EB56149A7D7B04B0961A77C2010CEF8DB84_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralEEE880C2909E04B23E44F1F5085CDAC706BD0A94);
		s_Il2CppMethodInitialized = true;
	}
	{
		List_1_t2FB40158AFCD69E77037C532086C70828AC06862* L_0 = (List_1_t2FB40158AFCD69E77037C532086C70828AC06862*)il2cpp_codegen_object_new(List_1_t2FB40158AFCD69E77037C532086C70828AC06862_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		List_1__ctor_mD0461A0F9F5D1C4A9C578D17033D69A8AC82FF3F(L_0, List_1__ctor_mD0461A0F9F5D1C4A9C578D17033D69A8AC82FF3F_RuntimeMethod_var);
		__this->___buildSelfs__1 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___buildSelfs__1), (void*)L_0);
		List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* L_1 = (List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73*)il2cpp_codegen_object_new(List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		List_1__ctor_m17F501B5A5C289ECE1B4F3D6EBF05DFA421433F8(L_1, List_1__ctor_m17F501B5A5C289ECE1B4F3D6EBF05DFA421433F8_RuntimeMethod_var);
		__this->___BuildEdMeshSelfs__2 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___BuildEdMeshSelfs__2), (void*)L_1);
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		StopModelerBuild_t0BB93EB56149A7D7B04B0961A77C2010CEF8DB84* L_2 = ((StopModelerBuild_t0BB93EB56149A7D7B04B0961A77C2010CEF8DB84_StaticFields*)il2cpp_codegen_static_fields_for(StopModelerBuild_t0BB93EB56149A7D7B04B0961A77C2010CEF8DB84_il2cpp_TypeInfo_var))->___stopModelerBuild__0;
		if (L_2)
		{
			goto IL_0031;
		}
	}
	{
		((StopModelerBuild_t0BB93EB56149A7D7B04B0961A77C2010CEF8DB84_StaticFields*)il2cpp_codegen_static_fields_for(StopModelerBuild_t0BB93EB56149A7D7B04B0961A77C2010CEF8DB84_il2cpp_TypeInfo_var))->___stopModelerBuild__0 = __this;
		Il2CppCodeGenWriteBarrier((void**)(&((StopModelerBuild_t0BB93EB56149A7D7B04B0961A77C2010CEF8DB84_StaticFields*)il2cpp_codegen_static_fields_for(StopModelerBuild_t0BB93EB56149A7D7B04B0961A77C2010CEF8DB84_il2cpp_TypeInfo_var))->___stopModelerBuild__0), (void*)__this);
		UModeler_tF29E9161DE3331F85E86886244AC15FEC514C577* L_3 = ___modeler0;
		__this->___modeler__3 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___modeler__3), (void*)L_3);
		return;
	}

IL_0031:
	{
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB(_stringLiteralEEE880C2909E04B23E44F1F5085CDAC706BD0A94, NULL);
		return;
	}
}
// System.Void tripolygon.UModeler.StopModelerBuild::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StopModelerBuild_Dispose_m0800A5E9EB32EFF67DAFEB4CDA6C71A38D2212E2 (StopModelerBuild_t0BB93EB56149A7D7B04B0961A77C2010CEF8DB84* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StopModelerBuild_t0BB93EB56149A7D7B04B0961A77C2010CEF8DB84_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral4A54A044C78A0B525750842E7D16A36E35B4D9E3);
		s_Il2CppMethodInitialized = true;
	}
	{
		StopModelerBuild_t0BB93EB56149A7D7B04B0961A77C2010CEF8DB84* L_0 = ((StopModelerBuild_t0BB93EB56149A7D7B04B0961A77C2010CEF8DB84_StaticFields*)il2cpp_codegen_static_fields_for(StopModelerBuild_t0BB93EB56149A7D7B04B0961A77C2010CEF8DB84_il2cpp_TypeInfo_var))->___stopModelerBuild__0;
		if (!L_0)
		{
			goto IL_0014;
		}
	}
	{
		((StopModelerBuild_t0BB93EB56149A7D7B04B0961A77C2010CEF8DB84_StaticFields*)il2cpp_codegen_static_fields_for(StopModelerBuild_t0BB93EB56149A7D7B04B0961A77C2010CEF8DB84_il2cpp_TypeInfo_var))->___stopModelerBuild__0 = (StopModelerBuild_t0BB93EB56149A7D7B04B0961A77C2010CEF8DB84*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&((StopModelerBuild_t0BB93EB56149A7D7B04B0961A77C2010CEF8DB84_StaticFields*)il2cpp_codegen_static_fields_for(StopModelerBuild_t0BB93EB56149A7D7B04B0961A77C2010CEF8DB84_il2cpp_TypeInfo_var))->___stopModelerBuild__0), (void*)(StopModelerBuild_t0BB93EB56149A7D7B04B0961A77C2010CEF8DB84*)NULL);
		StopModelerBuild_RunBuild_m60504A057FA4AAF1E32CBE5FEF757FF8D7B4FD3A(__this, NULL);
		return;
	}

IL_0014:
	{
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB(_stringLiteral4A54A044C78A0B525750842E7D16A36E35B4D9E3, NULL);
		return;
	}
}
// System.Void tripolygon.UModeler.StopModelerBuild::RunBuild()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StopModelerBuild_RunBuild_m60504A057FA4AAF1E32CBE5FEF757FF8D7B4FD3A (StopModelerBuild_t0BB93EB56149A7D7B04B0961A77C2010CEF8DB84* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_Dispose_m38A9F15FDBDCDFB9590C961110777EE028621923_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_Dispose_mE7B3A8C68D42EBA87037FE92CF1572658798EE8D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_MoveNext_m39C71A39758E2B4A04F44F20FCEFAF7009D5F312_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_MoveNext_mFC98FC5250B2A826D366A6F67C6FB95809892167_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_get_Current_mB49912FF111A954F2C326BF4FA29A53C1027187B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_get_Current_mE14BCB04881066336130EC2A6DD93CE1405342A3_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_GetEnumerator_m9744D5CAF082A1770E6BE24FB6EAF9C203C8708F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_GetEnumerator_mCADB185AB483C855873FCD0B1D5AAC909ED7F7BD_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	Enumerator_t3914DB61CC010B7C53852DA850D379468E909002 V_0;
	memset((&V_0), 0, sizeof(V_0));
	BuildShelfArg_t2137F4C02DE10B54ED77462BCB4FC85BA4B81BCA V_1;
	memset((&V_1), 0, sizeof(V_1));
	Enumerator_t9DBCD072C72E44AB8959D9884EF7F528028F20EC V_2;
	memset((&V_2), 0, sizeof(V_2));
	int32_t V_3 = 0;
	{
		List_1_t2FB40158AFCD69E77037C532086C70828AC06862* L_0 = __this->___buildSelfs__1;
		NullCheck(L_0);
		Enumerator_t3914DB61CC010B7C53852DA850D379468E909002 L_1;
		L_1 = List_1_GetEnumerator_m9744D5CAF082A1770E6BE24FB6EAF9C203C8708F(L_0, List_1_GetEnumerator_m9744D5CAF082A1770E6BE24FB6EAF9C203C8708F_RuntimeMethod_var);
		V_0 = L_1;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0038:
			{// begin finally (depth: 1)
				Enumerator_Dispose_mE7B3A8C68D42EBA87037FE92CF1572658798EE8D((&V_0), Enumerator_Dispose_mE7B3A8C68D42EBA87037FE92CF1572658798EE8D_RuntimeMethod_var);
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				goto IL_002d_1;
			}

IL_000e_1:
			{
				BuildShelfArg_t2137F4C02DE10B54ED77462BCB4FC85BA4B81BCA L_2;
				L_2 = Enumerator_get_Current_mE14BCB04881066336130EC2A6DD93CE1405342A3_inline((&V_0), Enumerator_get_Current_mE14BCB04881066336130EC2A6DD93CE1405342A3_RuntimeMethod_var);
				V_1 = L_2;
				UModeler_tF29E9161DE3331F85E86886244AC15FEC514C577* L_3 = __this->___modeler__3;
				BuildShelfArg_t2137F4C02DE10B54ED77462BCB4FC85BA4B81BCA L_4 = V_1;
				int32_t L_5 = L_4.___shelf_0;
				BuildShelfArg_t2137F4C02DE10B54ED77462BCB4FC85BA4B81BCA L_6 = V_1;
				bool L_7 = L_6.___updateToGraphicsAPIImmediately_1;
				NullCheck(L_3);
				UModeler_Build_m631EF070C206EFDCDC5892F43BDFA2BB3BE72943(L_3, L_5, L_7, NULL);
			}

IL_002d_1:
			{
				bool L_8;
				L_8 = Enumerator_MoveNext_mFC98FC5250B2A826D366A6F67C6FB95809892167((&V_0), Enumerator_MoveNext_mFC98FC5250B2A826D366A6F67C6FB95809892167_RuntimeMethod_var);
				if (L_8)
				{
					goto IL_000e_1;
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
		List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* L_9 = __this->___BuildEdMeshSelfs__2;
		NullCheck(L_9);
		Enumerator_t9DBCD072C72E44AB8959D9884EF7F528028F20EC L_10;
		L_10 = List_1_GetEnumerator_mCADB185AB483C855873FCD0B1D5AAC909ED7F7BD(L_9, List_1_GetEnumerator_mCADB185AB483C855873FCD0B1D5AAC909ED7F7BD_RuntimeMethod_var);
		V_2 = L_10;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0073:
			{// begin finally (depth: 1)
				Enumerator_Dispose_m38A9F15FDBDCDFB9590C961110777EE028621923((&V_2), Enumerator_Dispose_m38A9F15FDBDCDFB9590C961110777EE028621923_RuntimeMethod_var);
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				goto IL_0068_1;
			}

IL_0054_1:
			{
				int32_t L_11;
				L_11 = Enumerator_get_Current_mB49912FF111A954F2C326BF4FA29A53C1027187B_inline((&V_2), Enumerator_get_Current_mB49912FF111A954F2C326BF4FA29A53C1027187B_RuntimeMethod_var);
				V_3 = L_11;
				UModeler_tF29E9161DE3331F85E86886244AC15FEC514C577* L_12 = __this->___modeler__3;
				int32_t L_13 = V_3;
				NullCheck(L_12);
				UModeler_BuildEdMesh_mD94F8A88186AEF4A5D86C4D9B2322A93F93E3728(L_12, L_13, NULL);
			}

IL_0068_1:
			{
				bool L_14;
				L_14 = Enumerator_MoveNext_m39C71A39758E2B4A04F44F20FCEFAF7009D5F312((&V_2), Enumerator_MoveNext_m39C71A39758E2B4A04F44F20FCEFAF7009D5F312_RuntimeMethod_var);
				if (L_14)
				{
					goto IL_0054_1;
				}
			}
			{
				goto IL_0081;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0081:
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
// Conversion methods for marshalling of: tripolygon.UModeler.StopModelerBuild/BuildShelfArg
IL2CPP_EXTERN_C void BuildShelfArg_t2137F4C02DE10B54ED77462BCB4FC85BA4B81BCA_marshal_pinvoke(const BuildShelfArg_t2137F4C02DE10B54ED77462BCB4FC85BA4B81BCA& unmarshaled, BuildShelfArg_t2137F4C02DE10B54ED77462BCB4FC85BA4B81BCA_marshaled_pinvoke& marshaled)
{
	marshaled.___shelf_0 = unmarshaled.___shelf_0;
	marshaled.___updateToGraphicsAPIImmediately_1 = static_cast<int32_t>(unmarshaled.___updateToGraphicsAPIImmediately_1);
}
IL2CPP_EXTERN_C void BuildShelfArg_t2137F4C02DE10B54ED77462BCB4FC85BA4B81BCA_marshal_pinvoke_back(const BuildShelfArg_t2137F4C02DE10B54ED77462BCB4FC85BA4B81BCA_marshaled_pinvoke& marshaled, BuildShelfArg_t2137F4C02DE10B54ED77462BCB4FC85BA4B81BCA& unmarshaled)
{
	int32_t unmarshaledshelf_temp_0 = 0;
	unmarshaledshelf_temp_0 = marshaled.___shelf_0;
	unmarshaled.___shelf_0 = unmarshaledshelf_temp_0;
	bool unmarshaledupdateToGraphicsAPIImmediately_temp_1 = false;
	unmarshaledupdateToGraphicsAPIImmediately_temp_1 = static_cast<bool>(marshaled.___updateToGraphicsAPIImmediately_1);
	unmarshaled.___updateToGraphicsAPIImmediately_1 = unmarshaledupdateToGraphicsAPIImmediately_temp_1;
}
// Conversion method for clean up from marshalling of: tripolygon.UModeler.StopModelerBuild/BuildShelfArg
IL2CPP_EXTERN_C void BuildShelfArg_t2137F4C02DE10B54ED77462BCB4FC85BA4B81BCA_marshal_pinvoke_cleanup(BuildShelfArg_t2137F4C02DE10B54ED77462BCB4FC85BA4B81BCA_marshaled_pinvoke& marshaled)
{
}
// Conversion methods for marshalling of: tripolygon.UModeler.StopModelerBuild/BuildShelfArg
IL2CPP_EXTERN_C void BuildShelfArg_t2137F4C02DE10B54ED77462BCB4FC85BA4B81BCA_marshal_com(const BuildShelfArg_t2137F4C02DE10B54ED77462BCB4FC85BA4B81BCA& unmarshaled, BuildShelfArg_t2137F4C02DE10B54ED77462BCB4FC85BA4B81BCA_marshaled_com& marshaled)
{
	marshaled.___shelf_0 = unmarshaled.___shelf_0;
	marshaled.___updateToGraphicsAPIImmediately_1 = static_cast<int32_t>(unmarshaled.___updateToGraphicsAPIImmediately_1);
}
IL2CPP_EXTERN_C void BuildShelfArg_t2137F4C02DE10B54ED77462BCB4FC85BA4B81BCA_marshal_com_back(const BuildShelfArg_t2137F4C02DE10B54ED77462BCB4FC85BA4B81BCA_marshaled_com& marshaled, BuildShelfArg_t2137F4C02DE10B54ED77462BCB4FC85BA4B81BCA& unmarshaled)
{
	int32_t unmarshaledshelf_temp_0 = 0;
	unmarshaledshelf_temp_0 = marshaled.___shelf_0;
	unmarshaled.___shelf_0 = unmarshaledshelf_temp_0;
	bool unmarshaledupdateToGraphicsAPIImmediately_temp_1 = false;
	unmarshaledupdateToGraphicsAPIImmediately_temp_1 = static_cast<bool>(marshaled.___updateToGraphicsAPIImmediately_1);
	unmarshaled.___updateToGraphicsAPIImmediately_1 = unmarshaledupdateToGraphicsAPIImmediately_temp_1;
}
// Conversion method for clean up from marshalling of: tripolygon.UModeler.StopModelerBuild/BuildShelfArg
IL2CPP_EXTERN_C void BuildShelfArg_t2137F4C02DE10B54ED77462BCB4FC85BA4B81BCA_marshal_com_cleanup(BuildShelfArg_t2137F4C02DE10B54ED77462BCB4FC85BA4B81BCA_marshaled_com& marshaled)
{
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void tripolygon.UModeler.UMContext::Init(tripolygon.UModeler.IModelerEngine)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UMContext_Init_mA4F3CEBF3D6BB4093EB410F71C572EC385C5C37B (RuntimeObject* ___engineInst0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UMContext_tD5DABA4A108180D95D3BDB86E9A4669F51289AFB_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = ___engineInst0;
		((UMContext_tD5DABA4A108180D95D3BDB86E9A4669F51289AFB_StaticFields*)il2cpp_codegen_static_fields_for(UMContext_tD5DABA4A108180D95D3BDB86E9A4669F51289AFB_il2cpp_TypeInfo_var))->___engine_1 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&((UMContext_tD5DABA4A108180D95D3BDB86E9A4669F51289AFB_StaticFields*)il2cpp_codegen_static_fields_for(UMContext_tD5DABA4A108180D95D3BDB86E9A4669F51289AFB_il2cpp_TypeInfo_var))->___engine_1), (void*)L_0);
		return;
	}
}
// System.Void tripolygon.UModeler.UMContext::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UMContext__ctor_m83EA4B2D7A79CC1723D0E560FD258CE02CC49A20 (UMContext_tD5DABA4A108180D95D3BDB86E9A4669F51289AFB* __this, const RuntimeMethod* method) 
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
// UnityEngine.Material tripolygon.UModeler.GLUtil::get_material()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* GLUtil_get_material_mEAAD08822025916BA5CEB447EDD71BC1F33D2060 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GLUtil_t30C5E6F23BE3C996BD3B4AE090E5928D44D31A91_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral181BB4565C7AA61CC8716A421960A53BA01AEE22);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3708CDBCC9F390AB99D52FE7DEE4724401B69B9F);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3C73394BEFC13A1F539275C77FA59F83301065F5);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral4E8A8460777BA546EF33027F63BAAF6396716FBE);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral73B13DE9817379145386BC6ECC87E983FC8ED41A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB25CF1C6B74339FBFCE846454A70688CE58C094C);
		s_Il2CppMethodInitialized = true;
	}
	{
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_0 = ((GLUtil_t30C5E6F23BE3C996BD3B4AE090E5928D44D31A91_StaticFields*)il2cpp_codegen_static_fields_for(GLUtil_t30C5E6F23BE3C996BD3B4AE090E5928D44D31A91_il2cpp_TypeInfo_var))->___material__0;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605(L_0, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_1)
		{
			goto IL_007e;
		}
	}
	{
		Shader_tADC867D36B7876EE22427FAA2CE485105F4EE692* L_2;
		L_2 = Shader_Find_m183AA54F78320212DDEC811592F98456898A41C5(_stringLiteral4E8A8460777BA546EF33027F63BAAF6396716FBE, NULL);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_3 = (Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3*)il2cpp_codegen_object_new(Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3_il2cpp_TypeInfo_var);
		NullCheck(L_3);
		Material__ctor_m7FDF47105D66D19591BE505A0C42B0F90D88C9BF(L_3, L_2, NULL);
		((GLUtil_t30C5E6F23BE3C996BD3B4AE090E5928D44D31A91_StaticFields*)il2cpp_codegen_static_fields_for(GLUtil_t30C5E6F23BE3C996BD3B4AE090E5928D44D31A91_il2cpp_TypeInfo_var))->___material__0 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&((GLUtil_t30C5E6F23BE3C996BD3B4AE090E5928D44D31A91_StaticFields*)il2cpp_codegen_static_fields_for(GLUtil_t30C5E6F23BE3C996BD3B4AE090E5928D44D31A91_il2cpp_TypeInfo_var))->___material__0), (void*)L_3);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_4 = ((GLUtil_t30C5E6F23BE3C996BD3B4AE090E5928D44D31A91_StaticFields*)il2cpp_codegen_static_fields_for(GLUtil_t30C5E6F23BE3C996BD3B4AE090E5928D44D31A91_il2cpp_TypeInfo_var))->___material__0;
		NullCheck(L_4);
		Object_set_hideFlags_mACB8BFC903FB3B01BBD427753E791BF28B5E33D4(L_4, ((int32_t)61), NULL);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_5 = ((GLUtil_t30C5E6F23BE3C996BD3B4AE090E5928D44D31A91_StaticFields*)il2cpp_codegen_static_fields_for(GLUtil_t30C5E6F23BE3C996BD3B4AE090E5928D44D31A91_il2cpp_TypeInfo_var))->___material__0;
		NullCheck(L_5);
		Material_SetInt_m41DF5404A9942239265888105E1DC83F2FBF901A(L_5, _stringLiteral3708CDBCC9F390AB99D52FE7DEE4724401B69B9F, 5, NULL);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_6 = ((GLUtil_t30C5E6F23BE3C996BD3B4AE090E5928D44D31A91_StaticFields*)il2cpp_codegen_static_fields_for(GLUtil_t30C5E6F23BE3C996BD3B4AE090E5928D44D31A91_il2cpp_TypeInfo_var))->___material__0;
		NullCheck(L_6);
		Material_SetInt_m41DF5404A9942239265888105E1DC83F2FBF901A(L_6, _stringLiteral73B13DE9817379145386BC6ECC87E983FC8ED41A, ((int32_t)10), NULL);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_7 = ((GLUtil_t30C5E6F23BE3C996BD3B4AE090E5928D44D31A91_StaticFields*)il2cpp_codegen_static_fields_for(GLUtil_t30C5E6F23BE3C996BD3B4AE090E5928D44D31A91_il2cpp_TypeInfo_var))->___material__0;
		NullCheck(L_7);
		Material_SetInt_m41DF5404A9942239265888105E1DC83F2FBF901A(L_7, _stringLiteral181BB4565C7AA61CC8716A421960A53BA01AEE22, 0, NULL);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_8 = ((GLUtil_t30C5E6F23BE3C996BD3B4AE090E5928D44D31A91_StaticFields*)il2cpp_codegen_static_fields_for(GLUtil_t30C5E6F23BE3C996BD3B4AE090E5928D44D31A91_il2cpp_TypeInfo_var))->___material__0;
		NullCheck(L_8);
		Material_SetInt_m41DF5404A9942239265888105E1DC83F2FBF901A(L_8, _stringLiteralB25CF1C6B74339FBFCE846454A70688CE58C094C, 1, NULL);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_9 = ((GLUtil_t30C5E6F23BE3C996BD3B4AE090E5928D44D31A91_StaticFields*)il2cpp_codegen_static_fields_for(GLUtil_t30C5E6F23BE3C996BD3B4AE090E5928D44D31A91_il2cpp_TypeInfo_var))->___material__0;
		NullCheck(L_9);
		Material_SetInt_m41DF5404A9942239265888105E1DC83F2FBF901A(L_9, _stringLiteral3C73394BEFC13A1F539275C77FA59F83301065F5, 2, NULL);
	}

IL_007e:
	{
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_10 = ((GLUtil_t30C5E6F23BE3C996BD3B4AE090E5928D44D31A91_StaticFields*)il2cpp_codegen_static_fields_for(GLUtil_t30C5E6F23BE3C996BD3B4AE090E5928D44D31A91_il2cpp_TypeInfo_var))->___material__0;
		return L_10;
	}
}
// System.Void tripolygon.UModeler.GLUtil::Begin(System.Int32,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GLUtil_Begin_m26D9B818B47D38388F4B19A45687C8D9F2653923 (int32_t ___mode0, bool ___ztest1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3C73394BEFC13A1F539275C77FA59F83301065F5);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB25CF1C6B74339FBFCE846454A70688CE58C094C);
		s_Il2CppMethodInitialized = true;
	}
	{
		bool L_0 = ___ztest1;
		if (!L_0)
		{
			goto IL_0025;
		}
	}
	{
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_1;
		L_1 = GLUtil_get_material_mEAAD08822025916BA5CEB447EDD71BC1F33D2060(NULL);
		NullCheck(L_1);
		Material_SetInt_m41DF5404A9942239265888105E1DC83F2FBF901A(L_1, _stringLiteralB25CF1C6B74339FBFCE846454A70688CE58C094C, 1, NULL);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_2;
		L_2 = GLUtil_get_material_mEAAD08822025916BA5CEB447EDD71BC1F33D2060(NULL);
		NullCheck(L_2);
		Material_SetInt_m41DF5404A9942239265888105E1DC83F2FBF901A(L_2, _stringLiteral3C73394BEFC13A1F539275C77FA59F83301065F5, 2, NULL);
		goto IL_0045;
	}

IL_0025:
	{
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_3;
		L_3 = GLUtil_get_material_mEAAD08822025916BA5CEB447EDD71BC1F33D2060(NULL);
		NullCheck(L_3);
		Material_SetInt_m41DF5404A9942239265888105E1DC83F2FBF901A(L_3, _stringLiteralB25CF1C6B74339FBFCE846454A70688CE58C094C, 0, NULL);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_4;
		L_4 = GLUtil_get_material_mEAAD08822025916BA5CEB447EDD71BC1F33D2060(NULL);
		NullCheck(L_4);
		Material_SetInt_m41DF5404A9942239265888105E1DC83F2FBF901A(L_4, _stringLiteral3C73394BEFC13A1F539275C77FA59F83301065F5, 8, NULL);
	}

IL_0045:
	{
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_5;
		L_5 = GLUtil_get_material_mEAAD08822025916BA5CEB447EDD71BC1F33D2060(NULL);
		NullCheck(L_5);
		bool L_6;
		L_6 = Material_SetPass_mBB03542DFF4FAEADFCED332009F9D61B6DED75FE(L_5, 0, NULL);
		int32_t L_7 = ___mode0;
		GL_Begin_m17A70A7A3C161D8A127C11BDC5FC393392AB70C7(L_7, NULL);
		return;
	}
}
// System.Void tripolygon.UModeler.GLUtil::set_color(UnityEngine.Color)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GLUtil_set_color_m9BC38B8904295FE9BFBEF6A4DFAEF47DAF7DDD85 (Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___value0, const RuntimeMethod* method) 
{
	{
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_0 = ___value0;
		GL_Color_mE2D27D8FCA9B5E07ECC15574BCBCBA16E6E0CB3E(L_0, NULL);
		return;
	}
}
// System.Void tripolygon.UModeler.GLUtil::End()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GLUtil_End_m72320D487996FE1D29005D59100E8CBCF69AE6B2 (const RuntimeMethod* method) 
{
	{
		GL_End_m6CE9D562B738075125F901B1D5254520EC30AB36(NULL);
		return;
	}
}
// System.Void tripolygon.UModeler.GLUtil::DrawLine(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GLUtil_DrawLine_m39A281D7EC4E28A7B0D5765A6A000426DFAF6F6D (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___v00, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___v11, const RuntimeMethod* method) 
{
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___v00;
		GL_Vertex_m54BA6BE5B0E6F856EEE3671D1C59CEF7D5C13B72(L_0, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1 = ___v11;
		GL_Vertex_m54BA6BE5B0E6F856EEE3671D1C59CEF7D5C13B72(L_1, NULL);
		return;
	}
}
// System.Void tripolygon.UModeler.GLUtil::DrawTriangle(UnityEngine.Vector3,UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GLUtil_DrawTriangle_m2F890A16EB031D77700CC536907F6AEDB7C3B71B (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___v00, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___v11, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___v22, const RuntimeMethod* method) 
{
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___v00;
		GL_Vertex_m54BA6BE5B0E6F856EEE3671D1C59CEF7D5C13B72(L_0, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1 = ___v11;
		GL_Vertex_m54BA6BE5B0E6F856EEE3671D1C59CEF7D5C13B72(L_1, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2 = ___v22;
		GL_Vertex_m54BA6BE5B0E6F856EEE3671D1C59CEF7D5C13B72(L_2, NULL);
		return;
	}
}
// System.Void tripolygon.UModeler.GLUtil::DrawPolygonEdges(tripolygon.UModeler.SimplePolygon,tripolygon.UModeler.SelectionType,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GLUtil_DrawPolygonEdges_m29A19CAB31DE441D0C1D9DCF48E72B9DB944E693 (SimplePolygon_t5F51D3D1F485B3C377E0E40766EBFD86BA9D9385* ___polygon0, int32_t ___type1, float ___offset2, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Util_tBEDFF10A323370DC03D5CAB4FEF2AB8EFEB0D7D2_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	int32_t V_1 = 0;
	Edge_t61E163F7AA3BA416F72B1EDF0DD966F41041D4FF* V_2 = NULL;
	{
		SimplePolygon_t5F51D3D1F485B3C377E0E40766EBFD86BA9D9385* L_0 = ___polygon0;
		NullCheck(L_0);
		PlaneEx_t5512A7D4BF235ED6ED6F1F09A1621A1DCB31509D* L_1;
		L_1 = SimplePolygon_get_plane_mF42E1C3275AB8ED168516709C333F0875315D92D(L_0, NULL);
		NullCheck(L_1);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2;
		L_2 = PlaneEx_get_normal_m934F59FA92AFFDF816E50D2CF5971AA97B1D067C_inline(L_1, NULL);
		il2cpp_codegen_runtime_class_init_inline(Util_tBEDFF10A323370DC03D5CAB4FEF2AB8EFEB0D7D2_il2cpp_TypeInfo_var);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3;
		L_3 = Util_GetScaledNormal_m7E93F2D30C675C8ECF12DB8C23ED5D35B541378C(L_2, NULL);
		V_0 = L_3;
		V_1 = 0;
		goto IL_0074;
	}

IL_0015:
	{
		SimplePolygon_t5F51D3D1F485B3C377E0E40766EBFD86BA9D9385* L_4 = ___polygon0;
		int32_t L_5 = V_1;
		NullCheck(L_4);
		IndexPair_t6886ED92041E20F053A60B5DE14E4710BB42A376* L_6;
		L_6 = SimplePolygon_GetEdge_m990E077DB64E20FDEF9AB4D2C89A255120C8D38B(L_4, L_5, NULL);
		NullCheck(L_6);
		int32_t L_7;
		L_7 = SelectExtended_get_selection_mA8131FB1E716C5F92C5A04A49B61DB79506961AD_inline(L_6, NULL);
		int32_t L_8 = ___type1;
		if ((!(((uint32_t)L_7) == ((uint32_t)L_8))))
		{
			goto IL_0070;
		}
	}
	{
		SimplePolygon_t5F51D3D1F485B3C377E0E40766EBFD86BA9D9385* L_9 = ___polygon0;
		int32_t L_10 = V_1;
		NullCheck(L_9);
		Edge_t61E163F7AA3BA416F72B1EDF0DD966F41041D4FF* L_11;
		L_11 = SimplePolygon_GetPureEdge_m2B428DD5282199D5F858FF60959D75DED1043BEE(L_9, L_10, NULL);
		V_2 = L_11;
		SimplePolygon_t5F51D3D1F485B3C377E0E40766EBFD86BA9D9385* L_12 = ___polygon0;
		NullCheck(L_12);
		PlaneEx_t5512A7D4BF235ED6ED6F1F09A1621A1DCB31509D* L_13;
		L_13 = SimplePolygon_get_plane_mF42E1C3275AB8ED168516709C333F0875315D92D(L_12, NULL);
		if (!L_13)
		{
			goto IL_005f;
		}
	}
	{
		Edge_t61E163F7AA3BA416F72B1EDF0DD966F41041D4FF* L_14 = V_2;
		NullCheck(L_14);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_15 = L_14->___p0_0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_16 = V_0;
		float L_17 = ___offset2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_18;
		L_18 = Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline(L_16, L_17, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_19;
		L_19 = Vector3_op_Addition_m78C0EC70CB66E8DCAC225743D82B268DAEE92067_inline(L_15, L_18, NULL);
		Edge_t61E163F7AA3BA416F72B1EDF0DD966F41041D4FF* L_20 = V_2;
		NullCheck(L_20);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_21 = L_20->___p1_1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_22 = V_0;
		float L_23 = ___offset2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_24;
		L_24 = Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline(L_22, L_23, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_25;
		L_25 = Vector3_op_Addition_m78C0EC70CB66E8DCAC225743D82B268DAEE92067_inline(L_21, L_24, NULL);
		GLUtil_DrawLine_m39A281D7EC4E28A7B0D5765A6A000426DFAF6F6D(L_19, L_25, NULL);
		goto IL_0070;
	}

IL_005f:
	{
		Edge_t61E163F7AA3BA416F72B1EDF0DD966F41041D4FF* L_26 = V_2;
		NullCheck(L_26);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_27 = L_26->___p0_0;
		Edge_t61E163F7AA3BA416F72B1EDF0DD966F41041D4FF* L_28 = V_2;
		NullCheck(L_28);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_29 = L_28->___p1_1;
		GLUtil_DrawLine_m39A281D7EC4E28A7B0D5765A6A000426DFAF6F6D(L_27, L_29, NULL);
	}

IL_0070:
	{
		int32_t L_30 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_30, 1));
	}

IL_0074:
	{
		int32_t L_31 = V_1;
		SimplePolygon_t5F51D3D1F485B3C377E0E40766EBFD86BA9D9385* L_32 = ___polygon0;
		NullCheck(L_32);
		int32_t L_33;
		L_33 = SimplePolygon_GetEdgeCount_m45A95814D089F716DBFAB1D7D8975835751E4295(L_32, NULL);
		if ((((int32_t)L_31) < ((int32_t)L_33)))
		{
			goto IL_0015;
		}
	}
	{
		return;
	}
}
// System.Void tripolygon.UModeler.GLUtil::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GLUtil__ctor_m95E2F18EB8EBB74EA6E4AD8B4EB3C48E2A14D1FF (GLUtil_t30C5E6F23BE3C996BD3B4AE090E5928D44D31A91* __this, const RuntimeMethod* method) 
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
// tripolygon.UModeler.PlaneEx tripolygon.UModeler.ArcShape::get_plane()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR PlaneEx_t5512A7D4BF235ED6ED6F1F09A1621A1DCB31509D* ArcShape_get_plane_m8AFB38200562F513CE1206552D6397EE4715E48A (ArcShape_tD79A3A8B50D88CAABD9AB2CDBE67A6D525242779* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PlaneEx_t5512A7D4BF235ED6ED6F1F09A1621A1DCB31509D_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = __this->___normal_1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1 = __this->___center_0;
		PlaneEx_t5512A7D4BF235ED6ED6F1F09A1621A1DCB31509D* L_2 = (PlaneEx_t5512A7D4BF235ED6ED6F1F09A1621A1DCB31509D*)il2cpp_codegen_object_new(PlaneEx_t5512A7D4BF235ED6ED6F1F09A1621A1DCB31509D_il2cpp_TypeInfo_var);
		NullCheck(L_2);
		PlaneEx__ctor_m209D1BF880E2F0A8B1D5222286D91807650BE04A(L_2, L_0, L_1, NULL);
		return L_2;
	}
}
// tripolygon.UModeler.ArcShape tripolygon.UModeler.ArcShape::Clone()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ArcShape_tD79A3A8B50D88CAABD9AB2CDBE67A6D525242779* ArcShape_Clone_m50944D97437BB3DAEAF67F5A225054D85C61CD01 (ArcShape_tD79A3A8B50D88CAABD9AB2CDBE67A6D525242779* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ArcShape_tD79A3A8B50D88CAABD9AB2CDBE67A6D525242779_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		ArcShape_tD79A3A8B50D88CAABD9AB2CDBE67A6D525242779* L_0 = (ArcShape_tD79A3A8B50D88CAABD9AB2CDBE67A6D525242779*)il2cpp_codegen_object_new(ArcShape_tD79A3A8B50D88CAABD9AB2CDBE67A6D525242779_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		ArcShape__ctor_m4AF3BB2A93B2D4CC835FDD92DDAEAA0D7EE585F1(L_0, NULL);
		ArcShape_tD79A3A8B50D88CAABD9AB2CDBE67A6D525242779* L_1 = L_0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2 = __this->___center_0;
		NullCheck(L_1);
		L_1->___center_0 = L_2;
		ArcShape_tD79A3A8B50D88CAABD9AB2CDBE67A6D525242779* L_3 = L_1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4 = __this->___normal_1;
		NullCheck(L_3);
		L_3->___normal_1 = L_4;
		ArcShape_tD79A3A8B50D88CAABD9AB2CDBE67A6D525242779* L_5 = L_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6 = __this->___from_2;
		NullCheck(L_5);
		L_5->___from_2 = L_6;
		ArcShape_tD79A3A8B50D88CAABD9AB2CDBE67A6D525242779* L_7 = L_5;
		float L_8 = __this->___angle_3;
		NullCheck(L_7);
		L_7->___angle_3 = L_8;
		ArcShape_tD79A3A8B50D88CAABD9AB2CDBE67A6D525242779* L_9 = L_7;
		float L_10 = __this->___radius_4;
		NullCheck(L_9);
		L_9->___radius_4 = L_10;
		ArcShape_tD79A3A8B50D88CAABD9AB2CDBE67A6D525242779* L_11 = L_9;
		int32_t L_12 = __this->___segment_count_5;
		NullCheck(L_11);
		L_11->___segment_count_5 = L_12;
		ArcShape_tD79A3A8B50D88CAABD9AB2CDBE67A6D525242779* L_13 = L_11;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_14 = __this->___rot_6;
		NullCheck(L_13);
		L_13->___rot_6 = L_14;
		return L_13;
	}
}
// System.Void tripolygon.UModeler.ArcShape::Invalidate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArcShape_Invalidate_m3FFF92C34256869B1CE5294473A65CDC67149404 (ArcShape_tD79A3A8B50D88CAABD9AB2CDBE67A6D525242779* __this, const RuntimeMethod* method) 
{
	{
		__this->___arcPoints__7 = (List_1_t8F3790B7F8C471B3A1336522C7415FB0AC36D47B*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___arcPoints__7), (void*)(List_1_t8F3790B7F8C471B3A1336522C7415FB0AC36D47B*)NULL);
		return;
	}
}
// System.Boolean tripolygon.UModeler.ArcShape::Raycast(UnityEngine.Ray,System.Single&,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ArcShape_Raycast_m572C62075ADB9A9011418BAF499F960D4F279F5B (ArcShape_tD79A3A8B50D88CAABD9AB2CDBE67A6D525242779* __this, Ray_t2B1742D7958DC05BDC3EFC7461D3593E1430DC00 ___ray0, float* ___t1, float ___hit_width2, const RuntimeMethod* method) 
{
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0;
		L_0 = Ray_get_origin_m97604A8F180316A410DCD77B7D74D04522FA1BA6((&___ray0), NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1;
		L_1 = Ray_get_direction_m21C2D22D3BD4A683BD4DC191AB22DD05F5EC2086((&___ray0), NULL);
		float* L_2 = ___t1;
		float L_3 = ___hit_width2;
		bool L_4;
		L_4 = ArcShape_RayHit_m7BC2DEC0706075D0ADBC8999A1149839CD6E0618(__this, L_0, L_1, L_2, L_3, NULL);
		return L_4;
	}
}
// System.Boolean tripolygon.UModeler.ArcShape::RayHit(UnityEngine.Vector3,UnityEngine.Vector3,System.Single&,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ArcShape_RayHit_m7BC2DEC0706075D0ADBC8999A1149839CD6E0618 (ArcShape_tD79A3A8B50D88CAABD9AB2CDBE67A6D525242779* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___origin0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___dir1, float* ___t2, float ___hit_width3, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Edge_t61E163F7AA3BA416F72B1EDF0DD966F41041D4FF_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_mF1C0C56457C655BDFFC6EE5B46FAD8BAEC1F588B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_m1F8E226CAD72B83C5E75BB66B43025247806B543_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	PlaneEx_t5512A7D4BF235ED6ED6F1F09A1621A1DCB31509D* V_0 = NULL;
	int32_t V_1 = 0;
	{
		float* L_0 = ___t2;
		*((float*)L_0) = (float)(0.0f);
		List_1_t8F3790B7F8C471B3A1336522C7415FB0AC36D47B* L_1 = __this->___arcPoints__7;
		if (L_1)
		{
			goto IL_001b;
		}
	}
	{
		List_1_t8F3790B7F8C471B3A1336522C7415FB0AC36D47B** L_2 = (&__this->___arcPoints__7);
		MathUtil_CreatePointsOnArc_m75A6708E743F3DF2E939AA091834BBEFCA54B8F5(__this, L_2, NULL);
	}

IL_001b:
	{
		PlaneEx_t5512A7D4BF235ED6ED6F1F09A1621A1DCB31509D* L_3;
		L_3 = ArcShape_get_plane_m8AFB38200562F513CE1206552D6397EE4715E48A(__this, NULL);
		V_0 = L_3;
		V_1 = 0;
		goto IL_0063;
	}

IL_0026:
	{
		PlaneEx_t5512A7D4BF235ED6ED6F1F09A1621A1DCB31509D* L_4 = V_0;
		List_1_t8F3790B7F8C471B3A1336522C7415FB0AC36D47B* L_5 = __this->___arcPoints__7;
		int32_t L_6 = V_1;
		NullCheck(L_5);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_7;
		L_7 = List_1_get_Item_m1F8E226CAD72B83C5E75BB66B43025247806B543(L_5, L_6, List_1_get_Item_m1F8E226CAD72B83C5E75BB66B43025247806B543_RuntimeMethod_var);
		NullCheck(L_4);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8;
		L_8 = PlaneEx_FromPlaneCoord_m7EB702AFA210E9E823B07C15410235B3A3E0461A(L_4, L_7, NULL);
		PlaneEx_t5512A7D4BF235ED6ED6F1F09A1621A1DCB31509D* L_9 = V_0;
		List_1_t8F3790B7F8C471B3A1336522C7415FB0AC36D47B* L_10 = __this->___arcPoints__7;
		int32_t L_11 = V_1;
		NullCheck(L_10);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_12;
		L_12 = List_1_get_Item_m1F8E226CAD72B83C5E75BB66B43025247806B543(L_10, ((int32_t)il2cpp_codegen_add(L_11, 1)), List_1_get_Item_m1F8E226CAD72B83C5E75BB66B43025247806B543_RuntimeMethod_var);
		NullCheck(L_9);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_13;
		L_13 = PlaneEx_FromPlaneCoord_m7EB702AFA210E9E823B07C15410235B3A3E0461A(L_9, L_12, NULL);
		Edge_t61E163F7AA3BA416F72B1EDF0DD966F41041D4FF* L_14 = (Edge_t61E163F7AA3BA416F72B1EDF0DD966F41041D4FF*)il2cpp_codegen_object_new(Edge_t61E163F7AA3BA416F72B1EDF0DD966F41041D4FF_il2cpp_TypeInfo_var);
		NullCheck(L_14);
		Edge__ctor_m247792235F4220D03FA76DCC57E527491595869D(L_14, L_8, L_13, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_15 = ___origin0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_16 = ___dir1;
		float* L_17 = ___t2;
		float L_18 = ___hit_width3;
		NullCheck(L_14);
		bool L_19;
		L_19 = Edge_RayHit_m4EE260FE2DB3F9A450D06B27FA9FF354F0C3E1EC(L_14, L_15, L_16, L_17, L_18, NULL);
		if (!L_19)
		{
			goto IL_005f;
		}
	}
	{
		return (bool)1;
	}

IL_005f:
	{
		int32_t L_20 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_20, 1));
	}

IL_0063:
	{
		int32_t L_21 = V_1;
		List_1_t8F3790B7F8C471B3A1336522C7415FB0AC36D47B* L_22 = __this->___arcPoints__7;
		NullCheck(L_22);
		int32_t L_23;
		L_23 = List_1_get_Count_mF1C0C56457C655BDFFC6EE5B46FAD8BAEC1F588B_inline(L_22, List_1_get_Count_mF1C0C56457C655BDFFC6EE5B46FAD8BAEC1F588B_RuntimeMethod_var);
		if ((((int32_t)L_21) < ((int32_t)((int32_t)il2cpp_codegen_subtract(L_23, 1)))))
		{
			goto IL_0026;
		}
	}
	{
		return (bool)0;
	}
}
// System.Single tripolygon.UModeler.ArcShape::CalculateAngle(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float ArcShape_CalculateAngle_m6CB8691C252D7FF8E769C670E0F870061698179D (ArcShape_tD79A3A8B50D88CAABD9AB2CDBE67A6D525242779* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___pos0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___from1, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		PlaneEx_t5512A7D4BF235ED6ED6F1F09A1621A1DCB31509D* L_0;
		L_0 = ArcShape_get_plane_m8AFB38200562F513CE1206552D6397EE4715E48A(__this, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1 = ___pos0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2 = __this->___center_0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3;
		L_3 = Vector3_op_Subtraction_mE42023FF80067CB44A1D4A27EB7CF2B24CABB828_inline(L_1, L_2, NULL);
		V_0 = L_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4;
		L_4 = Vector3_get_normalized_m736BBF65D5CDA7A18414370D15B4DFCC1E466F07_inline((&V_0), NULL);
		NullCheck(L_0);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_5;
		L_5 = PlaneEx_ToPlaneCoord_m4C8B08C0002FE6D79C67380F185CAADEA16273BD(L_0, L_4, NULL);
		PlaneEx_t5512A7D4BF235ED6ED6F1F09A1621A1DCB31509D* L_6;
		L_6 = ArcShape_get_plane_m8AFB38200562F513CE1206552D6397EE4715E48A(__this, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_7 = ___from1;
		NullCheck(L_6);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_8;
		L_8 = PlaneEx_ToPlaneCoord_m4C8B08C0002FE6D79C67380F185CAADEA16273BD(L_6, L_7, NULL);
		V_1 = L_8;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_9;
		L_9 = Vector2_get_normalized_mF6722883AEFB5027690A778DF8ACC20F0FA65297_inline((&V_1), NULL);
		float L_10;
		L_10 = MathUtil_ComputeAngleOnDisc_mF4A5A0688CCD08EDB3CA26FB9FF7BAC374D9A141(L_5, L_9, NULL);
		return ((float)il2cpp_codegen_multiply((57.2957802f), L_10));
	}
}
// System.Void tripolygon.UModeler.ArcShape::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArcShape__ctor_m4AF3BB2A93B2D4CC835FDD92DDAEAA0D7EE585F1 (ArcShape_tD79A3A8B50D88CAABD9AB2CDBE67A6D525242779* __this, const RuntimeMethod* method) 
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
// System.Boolean tripolygon.UModeler.MathUtil::Raycast(UnityEngine.Ray,UnityEngine.Vector3,UnityEngine.Vector3,UnityEngine.Vector3,System.Single&,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool MathUtil_Raycast_mA3535A944DBE366B8986ED46A2C77B36283F2628 (Ray_t2B1742D7958DC05BDC3EFC7461D3593E1430DC00 ___ray0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___TriangleV01, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___TriangleV12, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___TriangleV23, float* ___dist4, bool ___excludeBackface5, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_1;
	memset((&V_1), 0, sizeof(V_1));
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_2;
	memset((&V_2), 0, sizeof(V_2));
	float V_3 = 0.0f;
	float V_4 = 0.0f;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_5;
	memset((&V_5), 0, sizeof(V_5));
	float V_6 = 0.0f;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_7;
	memset((&V_7), 0, sizeof(V_7));
	float V_8 = 0.0f;
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___TriangleV12;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1 = ___TriangleV01;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2;
		L_2 = Vector3_op_Subtraction_mE42023FF80067CB44A1D4A27EB7CF2B24CABB828_inline(L_0, L_1, NULL);
		V_0 = L_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3 = ___TriangleV23;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4 = ___TriangleV01;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_5;
		L_5 = Vector3_op_Subtraction_mE42023FF80067CB44A1D4A27EB7CF2B24CABB828_inline(L_3, L_4, NULL);
		V_1 = L_5;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6;
		L_6 = Ray_get_direction_m21C2D22D3BD4A683BD4DC191AB22DD05F5EC2086((&___ray0), NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_7 = V_1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8;
		L_8 = Vector3_Cross_mF93A280558BCE756D13B6CC5DCD7DE8A43148987_inline(L_6, L_7, NULL);
		V_2 = L_8;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_9 = V_0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10 = V_2;
		float L_11;
		L_11 = Vector3_Dot_mBB86BB940AA0A32FA7D3C02AC42E5BC7095A5D52_inline(L_9, L_10, NULL);
		V_3 = L_11;
		float* L_12 = ___dist4;
		*((float*)L_12) = (float)(0.0f);
		float L_13 = V_3;
		if ((((float)L_13) == ((float)(0.0f))))
		{
			goto IL_0042;
		}
	}
	{
		bool L_14 = ___excludeBackface5;
		if (!L_14)
		{
			goto IL_0044;
		}
	}
	{
		float L_15 = V_3;
		if ((!(((float)L_15) < ((float)(0.0f)))))
		{
			goto IL_0044;
		}
	}

IL_0042:
	{
		return (bool)0;
	}

IL_0044:
	{
		float L_16 = V_3;
		V_4 = ((float)((1.0f)/L_16));
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_17;
		L_17 = Ray_get_origin_m97604A8F180316A410DCD77B7D74D04522FA1BA6((&___ray0), NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_18 = ___TriangleV01;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_19;
		L_19 = Vector3_op_Subtraction_mE42023FF80067CB44A1D4A27EB7CF2B24CABB828_inline(L_17, L_18, NULL);
		V_5 = L_19;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_20 = V_5;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_21 = V_2;
		float L_22;
		L_22 = Vector3_Dot_mBB86BB940AA0A32FA7D3C02AC42E5BC7095A5D52_inline(L_20, L_21, NULL);
		float L_23 = V_4;
		V_6 = ((float)il2cpp_codegen_multiply(L_22, L_23));
		float L_24 = V_6;
		if ((((float)L_24) < ((float)(0.0f))))
		{
			goto IL_0080;
		}
	}
	{
		float L_25 = V_6;
		if ((!(((double)((double)L_25)) > ((double)(1.0)))))
		{
			goto IL_0082;
		}
	}

IL_0080:
	{
		return (bool)0;
	}

IL_0082:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_26 = V_5;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_27 = V_0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_28;
		L_28 = Vector3_Cross_mF93A280558BCE756D13B6CC5DCD7DE8A43148987_inline(L_26, L_27, NULL);
		V_7 = L_28;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_29;
		L_29 = Ray_get_direction_m21C2D22D3BD4A683BD4DC191AB22DD05F5EC2086((&___ray0), NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_30 = V_7;
		float L_31;
		L_31 = Vector3_Dot_mBB86BB940AA0A32FA7D3C02AC42E5BC7095A5D52_inline(L_29, L_30, NULL);
		float L_32 = V_4;
		V_8 = ((float)il2cpp_codegen_multiply(L_31, L_32));
		float L_33 = V_8;
		if ((((float)L_33) < ((float)(0.0f))))
		{
			goto IL_00b4;
		}
	}
	{
		float L_34 = V_6;
		float L_35 = V_8;
		if ((!(((float)((float)il2cpp_codegen_add(L_34, L_35))) > ((float)(1.0f)))))
		{
			goto IL_00b6;
		}
	}

IL_00b4:
	{
		return (bool)0;
	}

IL_00b6:
	{
		float* L_36 = ___dist4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_37 = V_1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_38 = V_7;
		float L_39;
		L_39 = Vector3_Dot_mBB86BB940AA0A32FA7D3C02AC42E5BC7095A5D52_inline(L_37, L_38, NULL);
		float L_40 = V_4;
		*((float*)L_36) = (float)((float)il2cpp_codegen_multiply(L_39, L_40));
		return (bool)1;
	}
}
// System.Boolean tripolygon.UModeler.MathUtil::Raycast(UnityEngine.Ray,UnityEngine.Vector3[],System.Single&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool MathUtil_Raycast_mA0A218231A19D12C30A92BAB0498EB742624BBC8 (Ray_t2B1742D7958DC05BDC3EFC7461D3593E1430DC00 ___ray0, Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* ___RectangleVert1, float* ___dist2, const RuntimeMethod* method) 
{
	{
		float* L_0 = ___dist2;
		*((float*)L_0) = (float)(0.0f);
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_1 = ___RectangleVert1;
		NullCheck(L_1);
		if ((((int32_t)((int32_t)(((RuntimeArray*)L_1)->max_length))) == ((int32_t)4)))
		{
			goto IL_000f;
		}
	}
	{
		return (bool)0;
	}

IL_000f:
	{
		Ray_t2B1742D7958DC05BDC3EFC7461D3593E1430DC00 L_2 = ___ray0;
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_3 = ___RectangleVert1;
		NullCheck(L_3);
		int32_t L_4 = 0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_5 = (L_3)->GetAt(static_cast<il2cpp_array_size_t>(L_4));
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_6 = ___RectangleVert1;
		NullCheck(L_6);
		int32_t L_7 = 1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8 = (L_6)->GetAt(static_cast<il2cpp_array_size_t>(L_7));
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_9 = ___RectangleVert1;
		NullCheck(L_9);
		int32_t L_10 = 2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_11 = (L_9)->GetAt(static_cast<il2cpp_array_size_t>(L_10));
		float* L_12 = ___dist2;
		bool L_13;
		L_13 = MathUtil_Raycast_mA3535A944DBE366B8986ED46A2C77B36283F2628(L_2, L_5, L_8, L_11, L_12, (bool)0, NULL);
		if (!L_13)
		{
			goto IL_0030;
		}
	}
	{
		return (bool)1;
	}

IL_0030:
	{
		Ray_t2B1742D7958DC05BDC3EFC7461D3593E1430DC00 L_14 = ___ray0;
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_15 = ___RectangleVert1;
		NullCheck(L_15);
		int32_t L_16 = 0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_17 = (L_15)->GetAt(static_cast<il2cpp_array_size_t>(L_16));
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_18 = ___RectangleVert1;
		NullCheck(L_18);
		int32_t L_19 = 2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_20 = (L_18)->GetAt(static_cast<il2cpp_array_size_t>(L_19));
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_21 = ___RectangleVert1;
		NullCheck(L_21);
		int32_t L_22 = 3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_23 = (L_21)->GetAt(static_cast<il2cpp_array_size_t>(L_22));
		float* L_24 = ___dist2;
		bool L_25;
		L_25 = MathUtil_Raycast_mA3535A944DBE366B8986ED46A2C77B36283F2628(L_14, L_17, L_20, L_23, L_24, (bool)0, NULL);
		if (!L_25)
		{
			goto IL_0051;
		}
	}
	{
		return (bool)1;
	}

IL_0051:
	{
		return (bool)0;
	}
}
// System.Boolean tripolygon.UModeler.MathUtil::Intersect2DEdgeToAABB(tripolygon.UModeler.AABB,UnityEngine.Vector2,UnityEngine.Vector2)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool MathUtil_Intersect2DEdgeToAABB_m4A9978DE25EBEBC901196156D40DCA78FEA71D6D (AABB_t9C7B4FCF1ED10D750373270786690AAF7801AC6B* ___aabb0, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___p01, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___p12, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	float V_1 = 0.0f;
	float V_2 = 0.0f;
	float V_3 = 0.0f;
	float V_4 = 0.0f;
	float V_5 = 0.0f;
	float V_6 = 0.0f;
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_0 = ___p01;
		float L_1 = L_0.___x_0;
		V_0 = L_1;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_2 = ___p12;
		float L_3 = L_2.___x_0;
		V_1 = L_3;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_4 = ___p01;
		float L_5 = L_4.___x_0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_6 = ___p12;
		float L_7 = L_6.___x_0;
		if ((!(((float)L_5) > ((float)L_7))))
		{
			goto IL_002a;
		}
	}
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_8 = ___p12;
		float L_9 = L_8.___x_0;
		V_0 = L_9;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_10 = ___p01;
		float L_11 = L_10.___x_0;
		V_1 = L_11;
	}

IL_002a:
	{
		float L_12 = V_1;
		AABB_t9C7B4FCF1ED10D750373270786690AAF7801AC6B* L_13 = ___aabb0;
		NullCheck(L_13);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_14 = (&L_13->___max_1);
		float L_15 = L_14->___x_2;
		if ((!(((float)L_12) > ((float)L_15))))
		{
			goto IL_0044;
		}
	}
	{
		AABB_t9C7B4FCF1ED10D750373270786690AAF7801AC6B* L_16 = ___aabb0;
		NullCheck(L_16);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_17 = (&L_16->___max_1);
		float L_18 = L_17->___x_2;
		V_1 = L_18;
	}

IL_0044:
	{
		float L_19 = V_0;
		AABB_t9C7B4FCF1ED10D750373270786690AAF7801AC6B* L_20 = ___aabb0;
		NullCheck(L_20);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_21 = (&L_20->___min_0);
		float L_22 = L_21->___x_2;
		if ((!(((float)L_19) < ((float)L_22))))
		{
			goto IL_005e;
		}
	}
	{
		AABB_t9C7B4FCF1ED10D750373270786690AAF7801AC6B* L_23 = ___aabb0;
		NullCheck(L_23);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_24 = (&L_23->___min_0);
		float L_25 = L_24->___x_2;
		V_0 = L_25;
	}

IL_005e:
	{
		float L_26 = V_0;
		float L_27 = V_1;
		if ((!(((float)L_26) > ((float)L_27))))
		{
			goto IL_0064;
		}
	}
	{
		return (bool)0;
	}

IL_0064:
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_28 = ___p01;
		float L_29 = L_28.___y_1;
		V_2 = L_29;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_30 = ___p12;
		float L_31 = L_30.___y_1;
		V_3 = L_31;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_32 = ___p12;
		float L_33 = L_32.___x_0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_34 = ___p01;
		float L_35 = L_34.___x_0;
		V_4 = ((float)il2cpp_codegen_subtract(L_33, L_35));
		float L_36 = V_4;
		float L_37;
		L_37 = fabsf(L_36);
		if ((!(((double)((double)L_37)) > ((double)(9.9999999999999995E-08)))))
		{
			goto IL_00c8;
		}
	}
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_38 = ___p12;
		float L_39 = L_38.___y_1;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_40 = ___p01;
		float L_41 = L_40.___y_1;
		float L_42 = V_4;
		V_5 = ((float)(((float)il2cpp_codegen_subtract(L_39, L_41))/L_42));
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_43 = ___p01;
		float L_44 = L_43.___y_1;
		float L_45 = V_5;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_46 = ___p01;
		float L_47 = L_46.___x_0;
		V_6 = ((float)il2cpp_codegen_subtract(L_44, ((float)il2cpp_codegen_multiply(L_45, L_47))));
		float L_48 = V_5;
		float L_49 = V_0;
		float L_50 = V_6;
		V_2 = ((float)il2cpp_codegen_add(((float)il2cpp_codegen_multiply(L_48, L_49)), L_50));
		float L_51 = V_5;
		float L_52 = V_1;
		float L_53 = V_6;
		V_3 = ((float)il2cpp_codegen_add(((float)il2cpp_codegen_multiply(L_51, L_52)), L_53));
	}

IL_00c8:
	{
		float L_54 = V_2;
		float L_55 = V_3;
		if ((!(((float)L_54) > ((float)L_55))))
		{
			goto IL_00d0;
		}
	}
	{
		float L_56 = V_3;
		float L_57 = V_2;
		V_3 = L_57;
		V_2 = L_56;
	}

IL_00d0:
	{
		float L_58 = V_3;
		AABB_t9C7B4FCF1ED10D750373270786690AAF7801AC6B* L_59 = ___aabb0;
		NullCheck(L_59);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_60 = (&L_59->___max_1);
		float L_61 = L_60->___y_3;
		if ((!(((float)L_58) > ((float)L_61))))
		{
			goto IL_00ea;
		}
	}
	{
		AABB_t9C7B4FCF1ED10D750373270786690AAF7801AC6B* L_62 = ___aabb0;
		NullCheck(L_62);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_63 = (&L_62->___max_1);
		float L_64 = L_63->___y_3;
		V_3 = L_64;
	}

IL_00ea:
	{
		float L_65 = V_2;
		AABB_t9C7B4FCF1ED10D750373270786690AAF7801AC6B* L_66 = ___aabb0;
		NullCheck(L_66);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_67 = (&L_66->___min_0);
		float L_68 = L_67->___y_3;
		if ((!(((float)L_65) < ((float)L_68))))
		{
			goto IL_0104;
		}
	}
	{
		AABB_t9C7B4FCF1ED10D750373270786690AAF7801AC6B* L_69 = ___aabb0;
		NullCheck(L_69);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_70 = (&L_69->___min_0);
		float L_71 = L_70->___y_3;
		V_2 = L_71;
	}

IL_0104:
	{
		float L_72 = V_2;
		float L_73 = V_3;
		if ((!(((float)L_72) > ((float)L_73))))
		{
			goto IL_010a;
		}
	}
	{
		return (bool)0;
	}

IL_010a:
	{
		return (bool)1;
	}
}
// tripolygon.UModeler.PlaneEx tripolygon.UModeler.MathUtil::ComputePlane(System.Collections.Generic.List`1<UnityEngine.Vector3>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR PlaneEx_t5512A7D4BF235ED6ED6F1F09A1621A1DCB31509D* MathUtil_ComputePlane_m199587985283C4DAD6BC1F07F2C2F54C667A56DE (List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B* ___positions0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_mBEA06988AE0C126241C9FFA08A9F2612A7A542A4_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_m27907A101D0DAF1C842184C25FF2FCF5F7116E9D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_m46EEFFA770BE665EA0CB3A5332E941DA4B3C1D37_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_m8F2E15FC96DA75186C51228128A0660709E4E810_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_t302A75244C10A0CEF3AC031C484C2772A9D30A6F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vertex_tB6D4D191E463D1653AA47DED15E41F21BA5A21FC_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	List_1_t302A75244C10A0CEF3AC031C484C2772A9D30A6F* V_0 = NULL;
	int32_t V_1 = 0;
	{
		List_1_t302A75244C10A0CEF3AC031C484C2772A9D30A6F* L_0 = (List_1_t302A75244C10A0CEF3AC031C484C2772A9D30A6F*)il2cpp_codegen_object_new(List_1_t302A75244C10A0CEF3AC031C484C2772A9D30A6F_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		List_1__ctor_m27907A101D0DAF1C842184C25FF2FCF5F7116E9D(L_0, List_1__ctor_m27907A101D0DAF1C842184C25FF2FCF5F7116E9D_RuntimeMethod_var);
		V_0 = L_0;
		V_1 = 0;
		goto IL_0020;
	}

IL_000a:
	{
		List_1_t302A75244C10A0CEF3AC031C484C2772A9D30A6F* L_1 = V_0;
		List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B* L_2 = ___positions0;
		int32_t L_3 = V_1;
		NullCheck(L_2);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4;
		L_4 = List_1_get_Item_m8F2E15FC96DA75186C51228128A0660709E4E810(L_2, L_3, List_1_get_Item_m8F2E15FC96DA75186C51228128A0660709E4E810_RuntimeMethod_var);
		Vertex_tB6D4D191E463D1653AA47DED15E41F21BA5A21FC* L_5 = (Vertex_tB6D4D191E463D1653AA47DED15E41F21BA5A21FC*)il2cpp_codegen_object_new(Vertex_tB6D4D191E463D1653AA47DED15E41F21BA5A21FC_il2cpp_TypeInfo_var);
		NullCheck(L_5);
		Vertex__ctor_m1FF1D2AAD46FEC67D7FD50A350BB3F08DFAE7256(L_5, L_4, NULL);
		NullCheck(L_1);
		List_1_Add_mBEA06988AE0C126241C9FFA08A9F2612A7A542A4_inline(L_1, L_5, List_1_Add_mBEA06988AE0C126241C9FFA08A9F2612A7A542A4_RuntimeMethod_var);
		int32_t L_6 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_6, 1));
	}

IL_0020:
	{
		int32_t L_7 = V_1;
		List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B* L_8 = ___positions0;
		NullCheck(L_8);
		int32_t L_9;
		L_9 = List_1_get_Count_m46EEFFA770BE665EA0CB3A5332E941DA4B3C1D37_inline(L_8, List_1_get_Count_m46EEFFA770BE665EA0CB3A5332E941DA4B3C1D37_RuntimeMethod_var);
		if ((((int32_t)L_7) < ((int32_t)L_9)))
		{
			goto IL_000a;
		}
	}
	{
		List_1_t302A75244C10A0CEF3AC031C484C2772A9D30A6F* L_10 = V_0;
		PlaneEx_t5512A7D4BF235ED6ED6F1F09A1621A1DCB31509D* L_11;
		L_11 = MathUtil_ComputePlane_m30938DE934DEA97A7E710637AA461090894FE219(L_10, NULL);
		return L_11;
	}
}
// tripolygon.UModeler.PlaneEx tripolygon.UModeler.MathUtil::ComputePlane(System.Collections.Generic.List`1<tripolygon.UModeler.Vertex>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR PlaneEx_t5512A7D4BF235ED6ED6F1F09A1621A1DCB31509D* MathUtil_ComputePlane_m30938DE934DEA97A7E710637AA461090894FE219 (List_1_t302A75244C10A0CEF3AC031C484C2772A9D30A6F* ___vertices0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IndexPair_t6886ED92041E20F053A60B5DE14E4710BB42A376_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_m274AF4878E2EFA91B7127EE757F5C83A1A499438_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_mDB0C054143B34FBA213A5507B676252235210932_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_m8E2B23B32C1F3E24BA82A3784717FA771E38B208_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_t77E791A5D872DCB1195678FCECC444A825292814_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	List_1_t77E791A5D872DCB1195678FCECC444A825292814* V_0 = NULL;
	int32_t V_1 = 0;
	{
		List_1_t77E791A5D872DCB1195678FCECC444A825292814* L_0 = (List_1_t77E791A5D872DCB1195678FCECC444A825292814*)il2cpp_codegen_object_new(List_1_t77E791A5D872DCB1195678FCECC444A825292814_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		List_1__ctor_mDB0C054143B34FBA213A5507B676252235210932(L_0, List_1__ctor_mDB0C054143B34FBA213A5507B676252235210932_RuntimeMethod_var);
		V_0 = L_0;
		V_1 = 0;
		goto IL_0024;
	}

IL_000a:
	{
		List_1_t77E791A5D872DCB1195678FCECC444A825292814* L_1 = V_0;
		int32_t L_2 = V_1;
		int32_t L_3 = V_1;
		List_1_t302A75244C10A0CEF3AC031C484C2772A9D30A6F* L_4 = ___vertices0;
		NullCheck(L_4);
		int32_t L_5;
		L_5 = List_1_get_Count_m8E2B23B32C1F3E24BA82A3784717FA771E38B208_inline(L_4, List_1_get_Count_m8E2B23B32C1F3E24BA82A3784717FA771E38B208_RuntimeMethod_var);
		IndexPair_t6886ED92041E20F053A60B5DE14E4710BB42A376* L_6 = (IndexPair_t6886ED92041E20F053A60B5DE14E4710BB42A376*)il2cpp_codegen_object_new(IndexPair_t6886ED92041E20F053A60B5DE14E4710BB42A376_il2cpp_TypeInfo_var);
		NullCheck(L_6);
		IndexPair__ctor_m7BAF035D664A349A5DB6D5CE734E103571C7A369(L_6, L_2, ((int32_t)(((int32_t)il2cpp_codegen_add(L_3, 1))%L_5)), NULL);
		NullCheck(L_1);
		List_1_Add_m274AF4878E2EFA91B7127EE757F5C83A1A499438_inline(L_1, L_6, List_1_Add_m274AF4878E2EFA91B7127EE757F5C83A1A499438_RuntimeMethod_var);
		int32_t L_7 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_7, 1));
	}

IL_0024:
	{
		int32_t L_8 = V_1;
		List_1_t302A75244C10A0CEF3AC031C484C2772A9D30A6F* L_9 = ___vertices0;
		NullCheck(L_9);
		int32_t L_10;
		L_10 = List_1_get_Count_m8E2B23B32C1F3E24BA82A3784717FA771E38B208_inline(L_9, List_1_get_Count_m8E2B23B32C1F3E24BA82A3784717FA771E38B208_RuntimeMethod_var);
		if ((((int32_t)L_8) < ((int32_t)L_10)))
		{
			goto IL_000a;
		}
	}
	{
		List_1_t302A75244C10A0CEF3AC031C484C2772A9D30A6F* L_11 = ___vertices0;
		List_1_t77E791A5D872DCB1195678FCECC444A825292814* L_12 = V_0;
		PlaneEx_t5512A7D4BF235ED6ED6F1F09A1621A1DCB31509D* L_13;
		L_13 = MathUtil_ComputePlane_mA02A86AB73273F2F7CBC57EF179176EF62D108D3(L_11, L_12, NULL);
		return L_13;
	}
}
// tripolygon.UModeler.PlaneEx tripolygon.UModeler.MathUtil::ComputePlane(System.Collections.Generic.List`1<tripolygon.UModeler.Vertex>,System.Collections.Generic.List`1<tripolygon.UModeler.IndexPair>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR PlaneEx_t5512A7D4BF235ED6ED6F1F09A1621A1DCB31509D* MathUtil_ComputePlane_mA02A86AB73273F2F7CBC57EF179176EF62D108D3 (List_1_t302A75244C10A0CEF3AC031C484C2772A9D30A6F* ___vertices0, List_1_t77E791A5D872DCB1195678FCECC444A825292814* ___edges1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_mDB0C054143B34FBA213A5507B676252235210932_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_m7935E7124EA3BEA7676657329170EE232B69B967_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_m8E2B23B32C1F3E24BA82A3784717FA771E38B208_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_m435D761DB4AF80679A1C0AD9F789379A779DBFD1_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_m858C445AE858FEBCE8E4BB1F655914EC1E5DFD1F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_t77E791A5D872DCB1195678FCECC444A825292814_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PlaneEx_t5512A7D4BF235ED6ED6F1F09A1621A1DCB31509D_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	float V_1 = 0.0f;
	int32_t V_2 = 0;
	List_1_t77E791A5D872DCB1195678FCECC444A825292814* V_3 = NULL;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	{
		List_1_t302A75244C10A0CEF3AC031C484C2772A9D30A6F* L_0 = ___vertices0;
		NullCheck(L_0);
		int32_t L_1;
		L_1 = List_1_get_Count_m8E2B23B32C1F3E24BA82A3784717FA771E38B208_inline(L_0, List_1_get_Count_m8E2B23B32C1F3E24BA82A3784717FA771E38B208_RuntimeMethod_var);
		if ((((int32_t)L_1) >= ((int32_t)3)))
		{
			goto IL_000b;
		}
	}
	{
		return (PlaneEx_t5512A7D4BF235ED6ED6F1F09A1621A1DCB31509D*)NULL;
	}

IL_000b:
	{
		V_0 = (-1);
		V_4 = 0;
		goto IL_0050;
	}

IL_0012:
	{
		List_1_t302A75244C10A0CEF3AC031C484C2772A9D30A6F* L_2 = ___vertices0;
		NullCheck(L_2);
		Vertex_tB6D4D191E463D1653AA47DED15E41F21BA5A21FC* L_3;
		L_3 = List_1_get_Item_m435D761DB4AF80679A1C0AD9F789379A779DBFD1(L_2, 0, List_1_get_Item_m435D761DB4AF80679A1C0AD9F789379A779DBFD1_RuntimeMethod_var);
		NullCheck(L_3);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_4 = (&L_3->___pos_0);
		int32_t L_5 = V_4;
		float L_6;
		L_6 = Vector3_get_Item_m163510BFC2F7BFAD1B601DC9F3606B799CF199F2_inline(L_4, L_5, NULL);
		List_1_t302A75244C10A0CEF3AC031C484C2772A9D30A6F* L_7 = ___vertices0;
		NullCheck(L_7);
		Vertex_tB6D4D191E463D1653AA47DED15E41F21BA5A21FC* L_8;
		L_8 = List_1_get_Item_m435D761DB4AF80679A1C0AD9F789379A779DBFD1(L_7, 1, List_1_get_Item_m435D761DB4AF80679A1C0AD9F789379A779DBFD1_RuntimeMethod_var);
		NullCheck(L_8);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_9 = (&L_8->___pos_0);
		int32_t L_10 = V_4;
		float L_11;
		L_11 = Vector3_get_Item_m163510BFC2F7BFAD1B601DC9F3606B799CF199F2_inline(L_9, L_10, NULL);
		float L_12;
		L_12 = fabsf(((float)il2cpp_codegen_subtract(L_6, L_11)));
		if ((!(((float)L_12) > ((float)(9.99999975E-05f)))))
		{
			goto IL_004a;
		}
	}
	{
		int32_t L_13 = V_4;
		V_0 = L_13;
		goto IL_0055;
	}

IL_004a:
	{
		int32_t L_14 = V_4;
		V_4 = ((int32_t)il2cpp_codegen_add(L_14, 1));
	}

IL_0050:
	{
		int32_t L_15 = V_4;
		if ((((int32_t)L_15) < ((int32_t)3)))
		{
			goto IL_0012;
		}
	}

IL_0055:
	{
		int32_t L_16 = V_0;
		if ((!(((uint32_t)L_16) == ((uint32_t)(-1)))))
		{
			goto IL_005b;
		}
	}
	{
		return (PlaneEx_t5512A7D4BF235ED6ED6F1F09A1621A1DCB31509D*)NULL;
	}

IL_005b:
	{
		V_1 = (3.0000001E+10f);
		V_2 = (-1);
		V_5 = 0;
		goto IL_009b;
	}

IL_0068:
	{
		List_1_t302A75244C10A0CEF3AC031C484C2772A9D30A6F* L_17 = ___vertices0;
		int32_t L_18 = V_5;
		NullCheck(L_17);
		Vertex_tB6D4D191E463D1653AA47DED15E41F21BA5A21FC* L_19;
		L_19 = List_1_get_Item_m435D761DB4AF80679A1C0AD9F789379A779DBFD1(L_17, L_18, List_1_get_Item_m435D761DB4AF80679A1C0AD9F789379A779DBFD1_RuntimeMethod_var);
		NullCheck(L_19);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_20 = (&L_19->___pos_0);
		int32_t L_21 = V_0;
		float L_22;
		L_22 = Vector3_get_Item_m163510BFC2F7BFAD1B601DC9F3606B799CF199F2_inline(L_20, L_21, NULL);
		float L_23 = V_1;
		if ((!(((float)L_22) < ((float)L_23))))
		{
			goto IL_0095;
		}
	}
	{
		List_1_t302A75244C10A0CEF3AC031C484C2772A9D30A6F* L_24 = ___vertices0;
		int32_t L_25 = V_5;
		NullCheck(L_24);
		Vertex_tB6D4D191E463D1653AA47DED15E41F21BA5A21FC* L_26;
		L_26 = List_1_get_Item_m435D761DB4AF80679A1C0AD9F789379A779DBFD1(L_24, L_25, List_1_get_Item_m435D761DB4AF80679A1C0AD9F789379A779DBFD1_RuntimeMethod_var);
		NullCheck(L_26);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_27 = (&L_26->___pos_0);
		int32_t L_28 = V_0;
		float L_29;
		L_29 = Vector3_get_Item_m163510BFC2F7BFAD1B601DC9F3606B799CF199F2_inline(L_27, L_28, NULL);
		V_1 = L_29;
		int32_t L_30 = V_5;
		V_2 = L_30;
	}

IL_0095:
	{
		int32_t L_31 = V_5;
		V_5 = ((int32_t)il2cpp_codegen_add(L_31, 1));
	}

IL_009b:
	{
		int32_t L_32 = V_5;
		List_1_t302A75244C10A0CEF3AC031C484C2772A9D30A6F* L_33 = ___vertices0;
		NullCheck(L_33);
		int32_t L_34;
		L_34 = List_1_get_Count_m8E2B23B32C1F3E24BA82A3784717FA771E38B208_inline(L_33, List_1_get_Count_m8E2B23B32C1F3E24BA82A3784717FA771E38B208_RuntimeMethod_var);
		if ((((int32_t)L_32) < ((int32_t)L_34)))
		{
			goto IL_0068;
		}
	}
	{
		int32_t L_35 = V_2;
		if ((!(((uint32_t)L_35) == ((uint32_t)(-1)))))
		{
			goto IL_00ab;
		}
	}
	{
		return (PlaneEx_t5512A7D4BF235ED6ED6F1F09A1621A1DCB31509D*)NULL;
	}

IL_00ab:
	{
		List_1_t77E791A5D872DCB1195678FCECC444A825292814* L_36 = (List_1_t77E791A5D872DCB1195678FCECC444A825292814*)il2cpp_codegen_object_new(List_1_t77E791A5D872DCB1195678FCECC444A825292814_il2cpp_TypeInfo_var);
		NullCheck(L_36);
		List_1__ctor_mDB0C054143B34FBA213A5507B676252235210932(L_36, List_1__ctor_mDB0C054143B34FBA213A5507B676252235210932_RuntimeMethod_var);
		V_3 = L_36;
		int32_t L_37 = V_2;
		List_1_t77E791A5D872DCB1195678FCECC444A825292814* L_38 = ___edges1;
		List_1_t77E791A5D872DCB1195678FCECC444A825292814* L_39 = V_3;
		MathUtil_FindEdgesWithVertexIndex_m27E38424F8336C36C99522F00529F16B1B6E7477(L_37, L_38, L_39, NULL);
		List_1_t77E791A5D872DCB1195678FCECC444A825292814* L_40 = V_3;
		NullCheck(L_40);
		int32_t L_41;
		L_41 = List_1_get_Count_m7935E7124EA3BEA7676657329170EE232B69B967_inline(L_40, List_1_get_Count_m7935E7124EA3BEA7676657329170EE232B69B967_RuntimeMethod_var);
		if ((((int32_t)L_41) == ((int32_t)2)))
		{
			goto IL_00c4;
		}
	}
	{
		return (PlaneEx_t5512A7D4BF235ED6ED6F1F09A1621A1DCB31509D*)NULL;
	}

IL_00c4:
	{
		List_1_t302A75244C10A0CEF3AC031C484C2772A9D30A6F* L_42 = ___vertices0;
		List_1_t77E791A5D872DCB1195678FCECC444A825292814* L_43 = V_3;
		NullCheck(L_43);
		IndexPair_t6886ED92041E20F053A60B5DE14E4710BB42A376* L_44;
		L_44 = List_1_get_Item_m858C445AE858FEBCE8E4BB1F655914EC1E5DFD1F(L_43, 0, List_1_get_Item_m858C445AE858FEBCE8E4BB1F655914EC1E5DFD1F_RuntimeMethod_var);
		NullCheck(L_44);
		int32_t L_45;
		L_45 = IndexPair_get_i0_m0E7AABFDBCA03351A53F255657182209C9DAAA59_inline(L_44, NULL);
		NullCheck(L_42);
		Vertex_tB6D4D191E463D1653AA47DED15E41F21BA5A21FC* L_46;
		L_46 = List_1_get_Item_m435D761DB4AF80679A1C0AD9F789379A779DBFD1(L_42, L_45, List_1_get_Item_m435D761DB4AF80679A1C0AD9F789379A779DBFD1_RuntimeMethod_var);
		NullCheck(L_46);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_47 = L_46->___pos_0;
		List_1_t302A75244C10A0CEF3AC031C484C2772A9D30A6F* L_48 = ___vertices0;
		List_1_t77E791A5D872DCB1195678FCECC444A825292814* L_49 = V_3;
		NullCheck(L_49);
		IndexPair_t6886ED92041E20F053A60B5DE14E4710BB42A376* L_50;
		L_50 = List_1_get_Item_m858C445AE858FEBCE8E4BB1F655914EC1E5DFD1F(L_49, 0, List_1_get_Item_m858C445AE858FEBCE8E4BB1F655914EC1E5DFD1F_RuntimeMethod_var);
		NullCheck(L_50);
		int32_t L_51;
		L_51 = IndexPair_get_i1_mE94972096B356E165B606945C56B0889B71E3BB4_inline(L_50, NULL);
		NullCheck(L_48);
		Vertex_tB6D4D191E463D1653AA47DED15E41F21BA5A21FC* L_52;
		L_52 = List_1_get_Item_m435D761DB4AF80679A1C0AD9F789379A779DBFD1(L_48, L_51, List_1_get_Item_m435D761DB4AF80679A1C0AD9F789379A779DBFD1_RuntimeMethod_var);
		NullCheck(L_52);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_53 = L_52->___pos_0;
		List_1_t302A75244C10A0CEF3AC031C484C2772A9D30A6F* L_54 = ___vertices0;
		List_1_t77E791A5D872DCB1195678FCECC444A825292814* L_55 = V_3;
		NullCheck(L_55);
		IndexPair_t6886ED92041E20F053A60B5DE14E4710BB42A376* L_56;
		L_56 = List_1_get_Item_m858C445AE858FEBCE8E4BB1F655914EC1E5DFD1F(L_55, 1, List_1_get_Item_m858C445AE858FEBCE8E4BB1F655914EC1E5DFD1F_RuntimeMethod_var);
		NullCheck(L_56);
		int32_t L_57;
		L_57 = IndexPair_get_i1_mE94972096B356E165B606945C56B0889B71E3BB4_inline(L_56, NULL);
		NullCheck(L_54);
		Vertex_tB6D4D191E463D1653AA47DED15E41F21BA5A21FC* L_58;
		L_58 = List_1_get_Item_m435D761DB4AF80679A1C0AD9F789379A779DBFD1(L_54, L_57, List_1_get_Item_m435D761DB4AF80679A1C0AD9F789379A779DBFD1_RuntimeMethod_var);
		NullCheck(L_58);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_59 = L_58->___pos_0;
		PlaneEx_t5512A7D4BF235ED6ED6F1F09A1621A1DCB31509D* L_60 = (PlaneEx_t5512A7D4BF235ED6ED6F1F09A1621A1DCB31509D*)il2cpp_codegen_object_new(PlaneEx_t5512A7D4BF235ED6ED6F1F09A1621A1DCB31509D_il2cpp_TypeInfo_var);
		NullCheck(L_60);
		PlaneEx__ctor_mAC6412D967A3C091AC621DE6D22C441E51A775F2(L_60, L_47, L_53, L_59, NULL);
		return L_60;
	}
}
// System.Void tripolygon.UModeler.MathUtil::FindEdgesWithVertexIndex(System.Int32,System.Collections.Generic.List`1<tripolygon.UModeler.IndexPair>,System.Collections.Generic.List`1<tripolygon.UModeler.IndexPair>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MathUtil_FindEdgesWithVertexIndex_m27E38424F8336C36C99522F00529F16B1B6E7477 (int32_t ___idx0, List_1_t77E791A5D872DCB1195678FCECC444A825292814* ___edges1, List_1_t77E791A5D872DCB1195678FCECC444A825292814* ___out_pairs2, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_m274AF4878E2EFA91B7127EE757F5C83A1A499438_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Insert_m1DA8358A97752239559B7B85806979EE764DB22C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_m7935E7124EA3BEA7676657329170EE232B69B967_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_m858C445AE858FEBCE8E4BB1F655914EC1E5DFD1F_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	IndexPair_t6886ED92041E20F053A60B5DE14E4710BB42A376* V_1 = NULL;
	{
		V_0 = 0;
		goto IL_0033;
	}

IL_0004:
	{
		List_1_t77E791A5D872DCB1195678FCECC444A825292814* L_0 = ___edges1;
		int32_t L_1 = V_0;
		NullCheck(L_0);
		IndexPair_t6886ED92041E20F053A60B5DE14E4710BB42A376* L_2;
		L_2 = List_1_get_Item_m858C445AE858FEBCE8E4BB1F655914EC1E5DFD1F(L_0, L_1, List_1_get_Item_m858C445AE858FEBCE8E4BB1F655914EC1E5DFD1F_RuntimeMethod_var);
		V_1 = L_2;
		IndexPair_t6886ED92041E20F053A60B5DE14E4710BB42A376* L_3 = V_1;
		NullCheck(L_3);
		int32_t L_4;
		L_4 = IndexPair_get_i1_mE94972096B356E165B606945C56B0889B71E3BB4_inline(L_3, NULL);
		int32_t L_5 = ___idx0;
		if ((!(((uint32_t)L_4) == ((uint32_t)L_5))))
		{
			goto IL_001f;
		}
	}
	{
		List_1_t77E791A5D872DCB1195678FCECC444A825292814* L_6 = ___out_pairs2;
		IndexPair_t6886ED92041E20F053A60B5DE14E4710BB42A376* L_7 = V_1;
		NullCheck(L_6);
		List_1_Insert_m1DA8358A97752239559B7B85806979EE764DB22C(L_6, 0, L_7, List_1_Insert_m1DA8358A97752239559B7B85806979EE764DB22C_RuntimeMethod_var);
		goto IL_002f;
	}

IL_001f:
	{
		IndexPair_t6886ED92041E20F053A60B5DE14E4710BB42A376* L_8 = V_1;
		NullCheck(L_8);
		int32_t L_9;
		L_9 = IndexPair_get_i0_m0E7AABFDBCA03351A53F255657182209C9DAAA59_inline(L_8, NULL);
		int32_t L_10 = ___idx0;
		if ((!(((uint32_t)L_9) == ((uint32_t)L_10))))
		{
			goto IL_002f;
		}
	}
	{
		List_1_t77E791A5D872DCB1195678FCECC444A825292814* L_11 = ___out_pairs2;
		IndexPair_t6886ED92041E20F053A60B5DE14E4710BB42A376* L_12 = V_1;
		NullCheck(L_11);
		List_1_Add_m274AF4878E2EFA91B7127EE757F5C83A1A499438_inline(L_11, L_12, List_1_Add_m274AF4878E2EFA91B7127EE757F5C83A1A499438_RuntimeMethod_var);
	}

IL_002f:
	{
		int32_t L_13 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_13, 1));
	}

IL_0033:
	{
		int32_t L_14 = V_0;
		List_1_t77E791A5D872DCB1195678FCECC444A825292814* L_15 = ___edges1;
		NullCheck(L_15);
		int32_t L_16;
		L_16 = List_1_get_Count_m7935E7124EA3BEA7676657329170EE232B69B967_inline(L_15, List_1_get_Count_m7935E7124EA3BEA7676657329170EE232B69B967_RuntimeMethod_var);
		if ((((int32_t)L_14) < ((int32_t)L_16)))
		{
			goto IL_0004;
		}
	}
	{
		return;
	}
}
// System.Single tripolygon.UModeler.MathUtil::GetHandleSize(UnityEngine.Vector3,UnityEngine.Matrix4x4,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float MathUtil_GetHandleSize_m3EE40C7E1E9CE6F194A02764DFBFA1FC57BAB3D1 (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___position0, Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 ___worldToLocal1, float ___pixelSize2, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* V_0 = NULL;
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* V_1 = NULL;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_2;
	memset((&V_2), 0, sizeof(V_2));
	float V_3 = 0.0f;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_4;
	memset((&V_4), 0, sizeof(V_4));
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_5;
	memset((&V_5), 0, sizeof(V_5));
	float V_6 = 0.0f;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_7;
	memset((&V_7), 0, sizeof(V_7));
	{
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_0;
		L_0 = Camera_get_current_m25217A02CB09E3BD50E3E0327879E870AD58C6C3(NULL);
		V_0 = L_0;
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_1 = V_0;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_2;
		L_2 = Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605(L_1, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_2)
		{
			goto IL_0015;
		}
	}
	{
		return (20.0f);
	}

IL_0015:
	{
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_3 = V_0;
		NullCheck(L_3);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_4;
		L_4 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_3, NULL);
		V_1 = L_4;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_5 = V_1;
		NullCheck(L_5);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6;
		L_6 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_5, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_7;
		L_7 = Matrix4x4_MultiplyPoint_m20E910B65693559BFDE99382472D8DD02C862E7E((&___worldToLocal1), L_6, NULL);
		V_2 = L_7;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8 = ___position0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_9 = V_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10;
		L_10 = Vector3_op_Subtraction_mE42023FF80067CB44A1D4A27EB7CF2B24CABB828_inline(L_8, L_9, NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_11 = V_1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_12;
		memset((&L_12), 0, sizeof(L_12));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_12), (0.0f), (0.0f), (1.0f), /*hidden argument*/NULL);
		NullCheck(L_11);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_13;
		L_13 = Transform_TransformDirection_m9BE1261DF2D48B7A4A27D31EE24D2D97F89E7757(L_11, L_12, NULL);
		float L_14;
		L_14 = Vector3_Dot_mBB86BB940AA0A32FA7D3C02AC42E5BC7095A5D52_inline(L_10, L_13, NULL);
		V_3 = L_14;
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_15 = V_0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_16 = V_2;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_17 = V_1;
		float L_18 = V_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_19;
		memset((&L_19), 0, sizeof(L_19));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_19), (0.0f), (0.0f), L_18, /*hidden argument*/NULL);
		NullCheck(L_17);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_20;
		L_20 = Transform_TransformDirection_m9BE1261DF2D48B7A4A27D31EE24D2D97F89E7757(L_17, L_19, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_21;
		L_21 = Vector3_op_Addition_m78C0EC70CB66E8DCAC225743D82B268DAEE92067_inline(L_16, L_20, NULL);
		NullCheck(L_15);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_22;
		L_22 = Camera_WorldToScreenPoint_m26B4C8945C3B5731F1CC5944CFD96BF17126BAA3(L_15, L_21, NULL);
		V_4 = L_22;
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_23 = V_0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_24 = V_2;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_25 = V_1;
		float L_26 = V_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_27;
		memset((&L_27), 0, sizeof(L_27));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_27), (1.0f), (0.0f), L_26, /*hidden argument*/NULL);
		NullCheck(L_25);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_28;
		L_28 = Transform_TransformDirection_m9BE1261DF2D48B7A4A27D31EE24D2D97F89E7757(L_25, L_27, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_29;
		L_29 = Vector3_op_Addition_m78C0EC70CB66E8DCAC225743D82B268DAEE92067_inline(L_24, L_28, NULL);
		NullCheck(L_23);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_30;
		L_30 = Camera_WorldToScreenPoint_m26B4C8945C3B5731F1CC5944CFD96BF17126BAA3(L_23, L_29, NULL);
		V_5 = L_30;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_31 = V_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_32 = V_5;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_33;
		L_33 = Vector3_op_Subtraction_mE42023FF80067CB44A1D4A27EB7CF2B24CABB828_inline(L_31, L_32, NULL);
		V_7 = L_33;
		float L_34;
		L_34 = Vector3_get_magnitude_mF0D6017E90B345F1F52D1CC564C640F1A847AF2D_inline((&V_7), NULL);
		V_6 = L_34;
		float L_35 = ___pixelSize2;
		float L_36 = V_6;
		float L_37;
		L_37 = Mathf_Max_mF5379E63D2BBAC76D090748695D833934F8AD051_inline(L_36, (9.99999975E-05f), NULL);
		return ((float)(L_35/L_37));
	}
}
// System.Single tripolygon.UModeler.MathUtil::DistanceOnScreen(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float MathUtil_DistanceOnScreen_m73690348E25007D0699488B46FEB8D3369C67A55 (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___pos00, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___pos11, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UMContext_tD5DABA4A108180D95D3BDB86E9A4669F51289AFB_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Util_tBEDFF10A323370DC03D5CAB4FEF2AB8EFEB0D7D2_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* V_0 = NULL;
	Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 V_1;
	memset((&V_1), 0, sizeof(V_1));
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_2;
	memset((&V_2), 0, sizeof(V_2));
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_3;
	memset((&V_3), 0, sizeof(V_3));
	float V_4 = 0.0f;
	Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 G_B5_0;
	memset((&G_B5_0), 0, sizeof(G_B5_0));
	{
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_0;
		L_0 = Camera_get_current_m25217A02CB09E3BD50E3E0327879E870AD58C6C3(NULL);
		V_0 = L_0;
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_1 = V_0;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_2;
		L_2 = Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605(L_1, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_2)
		{
			goto IL_0015;
		}
	}
	{
		return (0.0f);
	}

IL_0015:
	{
		UModeler_tF29E9161DE3331F85E86886244AC15FEC514C577* L_3 = ((UMContext_tD5DABA4A108180D95D3BDB86E9A4669F51289AFB_StaticFields*)il2cpp_codegen_static_fields_for(UMContext_tD5DABA4A108180D95D3BDB86E9A4669F51289AFB_il2cpp_TypeInfo_var))->___activeModeler_0;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_4;
		L_4 = Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605(L_3, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (L_4)
		{
			goto IL_002e;
		}
	}
	{
		UModeler_tF29E9161DE3331F85E86886244AC15FEC514C577* L_5 = ((UMContext_tD5DABA4A108180D95D3BDB86E9A4669F51289AFB_StaticFields*)il2cpp_codegen_static_fields_for(UMContext_tD5DABA4A108180D95D3BDB86E9A4669F51289AFB_il2cpp_TypeInfo_var))->___activeModeler_0;
		NullCheck(L_5);
		Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 L_6;
		L_6 = UModeler_get_worldTM_mDC2A444D24B9C454511EFAA167A70D0A3829B323(L_5, NULL);
		G_B5_0 = L_6;
		goto IL_0033;
	}

IL_002e:
	{
		Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 L_7;
		L_7 = Matrix4x4_get_identity_m6568A73831F3E2D587420D20FF423959D7D8AB56_inline(NULL);
		G_B5_0 = L_7;
	}

IL_0033:
	{
		V_1 = G_B5_0;
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_8 = V_0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_9 = ___pos00;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10;
		L_10 = Matrix4x4_MultiplyPoint_m20E910B65693559BFDE99382472D8DD02C862E7E((&V_1), L_9, NULL);
		il2cpp_codegen_runtime_class_init_inline(Util_tBEDFF10A323370DC03D5CAB4FEF2AB8EFEB0D7D2_il2cpp_TypeInfo_var);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_11;
		L_11 = Util_ConvertWorldToScreen_mF52A2BA937C7AD8DB71B16E015B0F4584F69D56F(L_8, L_10, NULL);
		V_2 = L_11;
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_12 = V_0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_13 = ___pos11;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_14;
		L_14 = Matrix4x4_MultiplyPoint_m20E910B65693559BFDE99382472D8DD02C862E7E((&V_1), L_13, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_15;
		L_15 = Util_ConvertWorldToScreen_mF52A2BA937C7AD8DB71B16E015B0F4584F69D56F(L_12, L_14, NULL);
		V_3 = L_15;
		float L_16 = (0.0f);
		V_4 = L_16;
		(&V_3)->___z_4 = L_16;
		float L_17 = V_4;
		(&V_2)->___z_4 = L_17;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_18 = V_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_19 = V_3;
		float L_20;
		L_20 = Vector3_Distance_m2314DB9B8BD01157E013DF87BEA557375C7F9FF9_inline(L_18, L_19, NULL);
		return L_20;
	}
}
// System.Boolean tripolygon.UModeler.MathUtil::IsConvexhull(System.Collections.Generic.List`1<tripolygon.UModeler.Vertex>,tripolygon.UModeler.PlaneEx)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool MathUtil_IsConvexhull_m0691B82D096C4D388178F4E3F6EB8DD5B72975C8 (List_1_t302A75244C10A0CEF3AC031C484C2772A9D30A6F* ___vList0, PlaneEx_t5512A7D4BF235ED6ED6F1F09A1621A1DCB31509D* ___plane1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_m8E2B23B32C1F3E24BA82A3784717FA771E38B208_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_m435D761DB4AF80679A1C0AD9F789379A779DBFD1_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_1;
	memset((&V_1), 0, sizeof(V_1));
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_2;
	memset((&V_2), 0, sizeof(V_2));
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_3;
	memset((&V_3), 0, sizeof(V_3));
	{
		PlaneEx_t5512A7D4BF235ED6ED6F1F09A1621A1DCB31509D* L_0 = ___plane1;
		if (L_0)
		{
			goto IL_0005;
		}
	}
	{
		return (bool)0;
	}

IL_0005:
	{
		V_0 = 0;
		goto IL_0077;
	}

IL_0009:
	{
		List_1_t302A75244C10A0CEF3AC031C484C2772A9D30A6F* L_1 = ___vList0;
		int32_t L_2 = V_0;
		NullCheck(L_1);
		Vertex_tB6D4D191E463D1653AA47DED15E41F21BA5A21FC* L_3;
		L_3 = List_1_get_Item_m435D761DB4AF80679A1C0AD9F789379A779DBFD1(L_1, L_2, List_1_get_Item_m435D761DB4AF80679A1C0AD9F789379A779DBFD1_RuntimeMethod_var);
		NullCheck(L_3);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4 = L_3->___pos_0;
		V_1 = L_4;
		List_1_t302A75244C10A0CEF3AC031C484C2772A9D30A6F* L_5 = ___vList0;
		int32_t L_6 = V_0;
		List_1_t302A75244C10A0CEF3AC031C484C2772A9D30A6F* L_7 = ___vList0;
		NullCheck(L_7);
		int32_t L_8;
		L_8 = List_1_get_Count_m8E2B23B32C1F3E24BA82A3784717FA771E38B208_inline(L_7, List_1_get_Count_m8E2B23B32C1F3E24BA82A3784717FA771E38B208_RuntimeMethod_var);
		NullCheck(L_5);
		Vertex_tB6D4D191E463D1653AA47DED15E41F21BA5A21FC* L_9;
		L_9 = List_1_get_Item_m435D761DB4AF80679A1C0AD9F789379A779DBFD1(L_5, ((int32_t)(((int32_t)il2cpp_codegen_add(L_6, 1))%L_8)), List_1_get_Item_m435D761DB4AF80679A1C0AD9F789379A779DBFD1_RuntimeMethod_var);
		NullCheck(L_9);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10 = L_9->___pos_0;
		V_2 = L_10;
		List_1_t302A75244C10A0CEF3AC031C484C2772A9D30A6F* L_11 = ___vList0;
		int32_t L_12 = V_0;
		List_1_t302A75244C10A0CEF3AC031C484C2772A9D30A6F* L_13 = ___vList0;
		NullCheck(L_13);
		int32_t L_14;
		L_14 = List_1_get_Count_m8E2B23B32C1F3E24BA82A3784717FA771E38B208_inline(L_13, List_1_get_Count_m8E2B23B32C1F3E24BA82A3784717FA771E38B208_RuntimeMethod_var);
		NullCheck(L_11);
		Vertex_tB6D4D191E463D1653AA47DED15E41F21BA5A21FC* L_15;
		L_15 = List_1_get_Item_m435D761DB4AF80679A1C0AD9F789379A779DBFD1(L_11, ((int32_t)(((int32_t)il2cpp_codegen_add(L_12, 2))%L_14)), List_1_get_Item_m435D761DB4AF80679A1C0AD9F789379A779DBFD1_RuntimeMethod_var);
		NullCheck(L_15);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_16 = L_15->___pos_0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_17 = V_1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_18 = V_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_19;
		L_19 = Vector3_op_Subtraction_mE42023FF80067CB44A1D4A27EB7CF2B24CABB828_inline(L_17, L_18, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_20;
		L_20 = Vector3_Normalize_mEF8349CC39674236CFC694189AFD36E31F89AC8F_inline(L_19, NULL);
		V_3 = L_20;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_21 = V_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_22;
		L_22 = Vector3_op_Subtraction_mE42023FF80067CB44A1D4A27EB7CF2B24CABB828_inline(L_16, L_21, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_23;
		L_23 = Vector3_Normalize_mEF8349CC39674236CFC694189AFD36E31F89AC8F_inline(L_22, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_24 = V_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_25;
		L_25 = Vector3_Cross_mF93A280558BCE756D13B6CC5DCD7DE8A43148987_inline(L_23, L_24, NULL);
		PlaneEx_t5512A7D4BF235ED6ED6F1F09A1621A1DCB31509D* L_26 = ___plane1;
		NullCheck(L_26);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_27;
		L_27 = PlaneEx_get_normal_m934F59FA92AFFDF816E50D2CF5971AA97B1D067C_inline(L_26, NULL);
		float L_28;
		L_28 = Vector3_Dot_mBB86BB940AA0A32FA7D3C02AC42E5BC7095A5D52_inline(L_25, L_27, NULL);
		if ((!(((float)L_28) < ((float)(-9.99999975E-05f)))))
		{
			goto IL_0073;
		}
	}
	{
		return (bool)0;
	}

IL_0073:
	{
		int32_t L_29 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_29, 1));
	}

IL_0077:
	{
		int32_t L_30 = V_0;
		List_1_t302A75244C10A0CEF3AC031C484C2772A9D30A6F* L_31 = ___vList0;
		NullCheck(L_31);
		int32_t L_32;
		L_32 = List_1_get_Count_m8E2B23B32C1F3E24BA82A3784717FA771E38B208_inline(L_31, List_1_get_Count_m8E2B23B32C1F3E24BA82A3784717FA771E38B208_RuntimeMethod_var);
		if ((((int32_t)L_30) < ((int32_t)L_32)))
		{
			goto IL_0009;
		}
	}
	{
		return (bool)1;
	}
}
// System.Boolean tripolygon.UModeler.MathUtil::PointInTriangle(UnityEngine.Vector2,UnityEngine.Vector2,UnityEngine.Vector2,UnityEngine.Vector2)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool MathUtil_PointInTriangle_mB1DAC2467DA5335F01B170B2F9F55FF8699F865D (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___pt0, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___v11, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___v22, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___v33, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_U3CPointInTriangleU3Eb__12_0_mF4B51D9BB63A8D99E32D00D6587D9D8B22F623DF_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_t0AE2255F25D8D7ACA16A285DCF06E69F0D3951D6_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vector2_3InputFloatReturnDelegate_tDF554F3258BCA6D8F1BEC540B850729000D15F46_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	bool V_1 = false;
	bool V_2 = false;
	Vector2_3InputFloatReturnDelegate_tDF554F3258BCA6D8F1BEC540B850729000D15F46* G_B2_0 = NULL;
	Vector2_3InputFloatReturnDelegate_tDF554F3258BCA6D8F1BEC540B850729000D15F46* G_B1_0 = NULL;
	{
		il2cpp_codegen_runtime_class_init_inline(U3CU3Ec_t0AE2255F25D8D7ACA16A285DCF06E69F0D3951D6_il2cpp_TypeInfo_var);
		Vector2_3InputFloatReturnDelegate_tDF554F3258BCA6D8F1BEC540B850729000D15F46* L_0 = ((U3CU3Ec_t0AE2255F25D8D7ACA16A285DCF06E69F0D3951D6_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t0AE2255F25D8D7ACA16A285DCF06E69F0D3951D6_il2cpp_TypeInfo_var))->___U3CU3E9__12_0_1;
		Vector2_3InputFloatReturnDelegate_tDF554F3258BCA6D8F1BEC540B850729000D15F46* L_1 = L_0;
		G_B1_0 = L_1;
		if (L_1)
		{
			G_B2_0 = L_1;
			goto IL_001f;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(U3CU3Ec_t0AE2255F25D8D7ACA16A285DCF06E69F0D3951D6_il2cpp_TypeInfo_var);
		U3CU3Ec_t0AE2255F25D8D7ACA16A285DCF06E69F0D3951D6* L_2 = ((U3CU3Ec_t0AE2255F25D8D7ACA16A285DCF06E69F0D3951D6_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t0AE2255F25D8D7ACA16A285DCF06E69F0D3951D6_il2cpp_TypeInfo_var))->___U3CU3E9_0;
		Vector2_3InputFloatReturnDelegate_tDF554F3258BCA6D8F1BEC540B850729000D15F46* L_3 = (Vector2_3InputFloatReturnDelegate_tDF554F3258BCA6D8F1BEC540B850729000D15F46*)il2cpp_codegen_object_new(Vector2_3InputFloatReturnDelegate_tDF554F3258BCA6D8F1BEC540B850729000D15F46_il2cpp_TypeInfo_var);
		NullCheck(L_3);
		Vector2_3InputFloatReturnDelegate__ctor_m2F23F6BFF809D35A1524776F161AC77F89249843(L_3, L_2, (intptr_t)((void*)U3CU3Ec_U3CPointInTriangleU3Eb__12_0_mF4B51D9BB63A8D99E32D00D6587D9D8B22F623DF_RuntimeMethod_var), NULL);
		Vector2_3InputFloatReturnDelegate_tDF554F3258BCA6D8F1BEC540B850729000D15F46* L_4 = L_3;
		((U3CU3Ec_t0AE2255F25D8D7ACA16A285DCF06E69F0D3951D6_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t0AE2255F25D8D7ACA16A285DCF06E69F0D3951D6_il2cpp_TypeInfo_var))->___U3CU3E9__12_0_1 = L_4;
		Il2CppCodeGenWriteBarrier((void**)(&((U3CU3Ec_t0AE2255F25D8D7ACA16A285DCF06E69F0D3951D6_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t0AE2255F25D8D7ACA16A285DCF06E69F0D3951D6_il2cpp_TypeInfo_var))->___U3CU3E9__12_0_1), (void*)L_4);
		G_B2_0 = L_4;
	}

IL_001f:
	{
		Vector2_3InputFloatReturnDelegate_tDF554F3258BCA6D8F1BEC540B850729000D15F46* L_5 = G_B2_0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_6 = ___pt0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_7 = ___v11;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_8 = ___v22;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_9;
		L_9 = Vector2_op_Implicit_m6D9CABB2C791A192867D7A4559D132BE86DD3EB7_inline(L_8, NULL);
		NullCheck(L_5);
		float L_10;
		L_10 = Vector2_3InputFloatReturnDelegate_Invoke_m41B4E1FCA6B3F0AC839C7E15F7030FBDB6B46D36_inline(L_5, L_6, L_7, L_9, NULL);
		V_0 = (bool)((((float)L_10) < ((float)(0.0f)))? 1 : 0);
		Vector2_3InputFloatReturnDelegate_tDF554F3258BCA6D8F1BEC540B850729000D15F46* L_11 = L_5;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_12 = ___pt0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_13 = ___v22;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_14 = ___v33;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_15;
		L_15 = Vector2_op_Implicit_m6D9CABB2C791A192867D7A4559D132BE86DD3EB7_inline(L_14, NULL);
		NullCheck(L_11);
		float L_16;
		L_16 = Vector2_3InputFloatReturnDelegate_Invoke_m41B4E1FCA6B3F0AC839C7E15F7030FBDB6B46D36_inline(L_11, L_12, L_13, L_15, NULL);
		V_1 = (bool)((((float)L_16) < ((float)(0.0f)))? 1 : 0);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_17 = ___pt0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_18 = ___v33;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_19 = ___v11;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_20;
		L_20 = Vector2_op_Implicit_m6D9CABB2C791A192867D7A4559D132BE86DD3EB7_inline(L_19, NULL);
		NullCheck(L_11);
		float L_21;
		L_21 = Vector2_3InputFloatReturnDelegate_Invoke_m41B4E1FCA6B3F0AC839C7E15F7030FBDB6B46D36_inline(L_11, L_17, L_18, L_20, NULL);
		V_2 = (bool)((((float)L_21) < ((float)(0.0f)))? 1 : 0);
		bool L_22 = V_0;
		bool L_23 = V_1;
		if ((!(((uint32_t)L_22) == ((uint32_t)L_23))))
		{
			goto IL_0069;
		}
	}
	{
		bool L_24 = V_1;
		bool L_25 = V_2;
		return (bool)((((int32_t)L_24) == ((int32_t)L_25))? 1 : 0);
	}

IL_0069:
	{
		return (bool)0;
	}
}
// System.Boolean tripolygon.UModeler.MathUtil::PointInRectangle(UnityEngine.Vector2,UnityEngine.Vector2,UnityEngine.Vector2)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool MathUtil_PointInRectangle_m7E1AE3A300F420D78F0A0450A41851538D482577 (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___pt0, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___min1, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___max2, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* V_0 = NULL;
	{
		Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* L_0 = (Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA*)(Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA*)SZArrayNew(Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA_il2cpp_TypeInfo_var, (uint32_t)4);
		Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* L_1 = L_0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_2 = ___min1;
		NullCheck(L_1);
		(L_1)->SetAt(static_cast<il2cpp_array_size_t>(0), (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7)L_2);
		Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* L_3 = L_1;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_4 = ___min1;
		float L_5 = L_4.___x_0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_6 = ___max2;
		float L_7 = L_6.___y_1;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_8;
		memset((&L_8), 0, sizeof(L_8));
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&L_8), L_5, L_7, /*hidden argument*/NULL);
		NullCheck(L_3);
		(L_3)->SetAt(static_cast<il2cpp_array_size_t>(1), (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7)L_8);
		Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* L_9 = L_3;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_10 = ___max2;
		NullCheck(L_9);
		(L_9)->SetAt(static_cast<il2cpp_array_size_t>(2), (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7)L_10);
		Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* L_11 = L_9;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_12 = ___max2;
		float L_13 = L_12.___x_0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_14 = ___min1;
		float L_15 = L_14.___y_1;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_16;
		memset((&L_16), 0, sizeof(L_16));
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&L_16), L_13, L_15, /*hidden argument*/NULL);
		NullCheck(L_11);
		(L_11)->SetAt(static_cast<il2cpp_array_size_t>(3), (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7)L_16);
		V_0 = L_11;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_17 = ___pt0;
		Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* L_18 = V_0;
		NullCheck(L_18);
		int32_t L_19 = 0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_20 = (L_18)->GetAt(static_cast<il2cpp_array_size_t>(L_19));
		Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* L_21 = V_0;
		NullCheck(L_21);
		int32_t L_22 = 1;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_23 = (L_21)->GetAt(static_cast<il2cpp_array_size_t>(L_22));
		Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* L_24 = V_0;
		NullCheck(L_24);
		int32_t L_25 = 2;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_26 = (L_24)->GetAt(static_cast<il2cpp_array_size_t>(L_25));
		bool L_27;
		L_27 = MathUtil_PointInTriangle_mB1DAC2467DA5335F01B170B2F9F55FF8699F865D(L_17, L_20, L_23, L_26, NULL);
		if (L_27)
		{
			goto IL_0080;
		}
	}
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_28 = ___pt0;
		Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* L_29 = V_0;
		NullCheck(L_29);
		int32_t L_30 = 0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_31 = (L_29)->GetAt(static_cast<il2cpp_array_size_t>(L_30));
		Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* L_32 = V_0;
		NullCheck(L_32);
		int32_t L_33 = 2;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_34 = (L_32)->GetAt(static_cast<il2cpp_array_size_t>(L_33));
		Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* L_35 = V_0;
		NullCheck(L_35);
		int32_t L_36 = 3;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_37 = (L_35)->GetAt(static_cast<il2cpp_array_size_t>(L_36));
		bool L_38;
		L_38 = MathUtil_PointInTriangle_mB1DAC2467DA5335F01B170B2F9F55FF8699F865D(L_28, L_31, L_34, L_37, NULL);
		return L_38;
	}

IL_0080:
	{
		return (bool)1;
	}
}
// System.Boolean tripolygon.UModeler.MathUtil::ComputeCircumCircleRadiusAndCenter(UnityEngine.Vector2,UnityEngine.Vector2,UnityEngine.Vector2,System.Single&,UnityEngine.Vector2&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool MathUtil_ComputeCircumCircleRadiusAndCenter_m600D4FC42C11DD88A0D1A55FEF1869F9C8532550 (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___v00, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___v11, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___v22, float* ___out_radius3, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* ___out_center4, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	float V_1 = 0.0f;
	float V_2 = 0.0f;
	float V_3 = 0.0f;
	float V_4 = 0.0f;
	float V_5 = 0.0f;
	float V_6 = 0.0f;
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_0 = ___v22;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_1 = ___v00;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_2;
		L_2 = Vector2_op_Subtraction_m44475FCDAD2DA2F98D78A6625EC2DCDFE8803837_inline(L_0, L_1, NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_3 = ___v11;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_4 = ___v00;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_5;
		L_5 = Vector2_op_Subtraction_m44475FCDAD2DA2F98D78A6625EC2DCDFE8803837_inline(L_3, L_4, NULL);
		float L_6;
		L_6 = Vector2_Dot_mC1E68FDB4FB462A279A303C043B8FD0AC11C8458_inline(L_2, L_5, NULL);
		V_0 = L_6;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_7 = ___v22;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_8 = ___v11;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_9;
		L_9 = Vector2_op_Subtraction_m44475FCDAD2DA2F98D78A6625EC2DCDFE8803837_inline(L_7, L_8, NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_10 = ___v00;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_11 = ___v11;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_12;
		L_12 = Vector2_op_Subtraction_m44475FCDAD2DA2F98D78A6625EC2DCDFE8803837_inline(L_10, L_11, NULL);
		float L_13;
		L_13 = Vector2_Dot_mC1E68FDB4FB462A279A303C043B8FD0AC11C8458_inline(L_9, L_12, NULL);
		V_1 = L_13;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_14 = ___v00;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_15 = ___v22;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_16;
		L_16 = Vector2_op_Subtraction_m44475FCDAD2DA2F98D78A6625EC2DCDFE8803837_inline(L_14, L_15, NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_17 = ___v11;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_18 = ___v22;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_19;
		L_19 = Vector2_op_Subtraction_m44475FCDAD2DA2F98D78A6625EC2DCDFE8803837_inline(L_17, L_18, NULL);
		float L_20;
		L_20 = Vector2_Dot_mC1E68FDB4FB462A279A303C043B8FD0AC11C8458_inline(L_16, L_19, NULL);
		V_2 = L_20;
		float L_21 = V_1;
		float L_22 = V_2;
		V_3 = ((float)il2cpp_codegen_multiply(L_21, L_22));
		float L_23 = V_2;
		float L_24 = V_0;
		V_4 = ((float)il2cpp_codegen_multiply(L_23, L_24));
		float L_25 = V_0;
		float L_26 = V_1;
		V_5 = ((float)il2cpp_codegen_multiply(L_25, L_26));
		float L_27 = V_3;
		float L_28 = V_4;
		float L_29 = V_5;
		V_6 = ((float)il2cpp_codegen_add(((float)il2cpp_codegen_add(L_27, L_28)), L_29));
		float L_30 = V_6;
		float L_31;
		L_31 = fabsf(L_30);
		if ((!(((float)L_31) < ((float)(1.40129846E-45f)))))
		{
			goto IL_0072;
		}
	}
	{
		float* L_32 = ___out_radius3;
		*((float*)L_32) = (float)(0.0f);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* L_33 = ___out_center4;
		il2cpp_codegen_initobj(L_33, sizeof(Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7));
		return (bool)0;
	}

IL_0072:
	{
		float* L_34 = ___out_radius3;
		float L_35 = V_0;
		float L_36 = V_1;
		float L_37 = V_1;
		float L_38 = V_2;
		float L_39 = V_2;
		float L_40 = V_0;
		float L_41 = V_6;
		float L_42;
		L_42 = sqrtf(((float)(((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_add(L_35, L_36)), ((float)il2cpp_codegen_add(L_37, L_38)))), ((float)il2cpp_codegen_add(L_39, L_40))))/L_41)));
		*((float*)L_34) = (float)((float)il2cpp_codegen_multiply(L_42, (0.5f)));
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* L_43 = ___out_center4;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_44 = ___v00;
		float L_45 = V_4;
		float L_46 = V_5;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_47;
		L_47 = Vector2_op_Multiply_m2D984B613020089BF5165BA4CA10988E2DC771FE_inline(L_44, ((float)il2cpp_codegen_add(L_45, L_46)), NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_48 = ___v11;
		float L_49 = V_5;
		float L_50 = V_3;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_51;
		L_51 = Vector2_op_Multiply_m2D984B613020089BF5165BA4CA10988E2DC771FE_inline(L_48, ((float)il2cpp_codegen_add(L_49, L_50)), NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_52;
		L_52 = Vector2_op_Addition_m8136742CE6EE33BA4EB81C5F584678455917D2AE_inline(L_47, L_51, NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_53 = ___v22;
		float L_54 = V_3;
		float L_55 = V_4;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_56;
		L_56 = Vector2_op_Multiply_m2D984B613020089BF5165BA4CA10988E2DC771FE_inline(L_53, ((float)il2cpp_codegen_add(L_54, L_55)), NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_57;
		L_57 = Vector2_op_Addition_m8136742CE6EE33BA4EB81C5F584678455917D2AE_inline(L_52, L_56, NULL);
		float L_58 = V_6;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_59;
		L_59 = Vector2_op_Division_m57A2DCD71E0CE7420851D705D1951F9238902AAB_inline(L_57, ((float)il2cpp_codegen_multiply((2.0f), L_58)), NULL);
		*(Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7*)L_43 = L_59;
		return (bool)1;
	}
}
// System.Void tripolygon.UModeler.MathUtil::CreatePointsOnArc(System.Single,UnityEngine.Vector2,System.Single,System.Single,System.Int32,System.Collections.Generic.List`1<UnityEngine.Vector2>&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MathUtil_CreatePointsOnArc_m2C2362003D566AACF963B134F6B0D08A0C607C72 (float ___radius0, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___center1, float ___start_radian2, float ___diff_radian3, int32_t ___segment_count4, List_1_t8F3790B7F8C471B3A1336522C7415FB0AC36D47B** ___outPoints5, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_mB5FDF069171C4CB1778BFAC3B9015A22EA7DFBCD_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_m88C4BD8AC607DB3585552068F4DC437406358D5F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_t8F3790B7F8C471B3A1336522C7415FB0AC36D47B_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	float V_1 = 0.0f;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		List_1_t8F3790B7F8C471B3A1336522C7415FB0AC36D47B** L_0 = ___outPoints5;
		List_1_t8F3790B7F8C471B3A1336522C7415FB0AC36D47B* L_1 = (List_1_t8F3790B7F8C471B3A1336522C7415FB0AC36D47B*)il2cpp_codegen_object_new(List_1_t8F3790B7F8C471B3A1336522C7415FB0AC36D47B_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		List_1__ctor_m88C4BD8AC607DB3585552068F4DC437406358D5F(L_1, List_1__ctor_m88C4BD8AC607DB3585552068F4DC437406358D5F_RuntimeMethod_var);
		*((RuntimeObject**)L_0) = (RuntimeObject*)L_1;
		Il2CppCodeGenWriteBarrier((void**)(RuntimeObject**)L_0, (void*)(RuntimeObject*)L_1);
		int32_t L_2 = ___segment_count4;
		V_0 = L_2;
		goto IL_0044;
	}

IL_000d:
	{
		float L_3 = ___start_radian2;
		float L_4 = ___diff_radian3;
		int32_t L_5 = V_0;
		int32_t L_6 = ___segment_count4;
		V_1 = ((float)il2cpp_codegen_add(L_3, ((float)il2cpp_codegen_multiply(L_4, ((float)(((float)L_5)/((float)L_6)))))));
		float L_7 = V_1;
		float L_8;
		L_8 = cosf(L_7);
		float L_9 = V_1;
		float L_10;
		L_10 = sinf(L_9);
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&V_2), L_8, L_10, NULL);
		List_1_t8F3790B7F8C471B3A1336522C7415FB0AC36D47B** L_11 = ___outPoints5;
		List_1_t8F3790B7F8C471B3A1336522C7415FB0AC36D47B* L_12 = *((List_1_t8F3790B7F8C471B3A1336522C7415FB0AC36D47B**)L_11);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_13 = ___center1;
		float L_14 = ___radius0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_15 = V_2;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_16;
		L_16 = Vector2_op_Multiply_mC53581E703768BA2512A7C65283657C331994353_inline(L_14, L_15, NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_17;
		L_17 = Vector2_op_Addition_m8136742CE6EE33BA4EB81C5F584678455917D2AE_inline(L_13, L_16, NULL);
		NullCheck(L_12);
		List_1_Add_mB5FDF069171C4CB1778BFAC3B9015A22EA7DFBCD_inline(L_12, L_17, List_1_Add_mB5FDF069171C4CB1778BFAC3B9015A22EA7DFBCD_RuntimeMethod_var);
		int32_t L_18 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_subtract(L_18, 1));
	}

IL_0044:
	{
		int32_t L_19 = V_0;
		if ((((int32_t)L_19) >= ((int32_t)0)))
		{
			goto IL_000d;
		}
	}
	{
		return;
	}
}
// System.Void tripolygon.UModeler.MathUtil::CreatePointsOnArc(tripolygon.UModeler.ArcShape,System.Collections.Generic.List`1<UnityEngine.Vector2>&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MathUtil_CreatePointsOnArc_m75A6708E743F3DF2E939AA091834BBEFCA54B8F5 (ArcShape_tD79A3A8B50D88CAABD9AB2CDBE67A6D525242779* ___arc0, List_1_t8F3790B7F8C471B3A1336522C7415FB0AC36D47B** ___outPoints1, const RuntimeMethod* method) 
{
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		ArcShape_tD79A3A8B50D88CAABD9AB2CDBE67A6D525242779* L_0 = ___arc0;
		NullCheck(L_0);
		float L_1 = L_0->___radius_4;
		ArcShape_tD79A3A8B50D88CAABD9AB2CDBE67A6D525242779* L_2 = ___arc0;
		NullCheck(L_2);
		PlaneEx_t5512A7D4BF235ED6ED6F1F09A1621A1DCB31509D* L_3;
		L_3 = ArcShape_get_plane_m8AFB38200562F513CE1206552D6397EE4715E48A(L_2, NULL);
		ArcShape_tD79A3A8B50D88CAABD9AB2CDBE67A6D525242779* L_4 = ___arc0;
		NullCheck(L_4);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_5 = L_4->___center_0;
		NullCheck(L_3);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_6;
		L_6 = PlaneEx_ToPlaneCoord_m4C8B08C0002FE6D79C67380F185CAADEA16273BD(L_3, L_5, NULL);
		ArcShape_tD79A3A8B50D88CAABD9AB2CDBE67A6D525242779* L_7 = ___arc0;
		NullCheck(L_7);
		PlaneEx_t5512A7D4BF235ED6ED6F1F09A1621A1DCB31509D* L_8;
		L_8 = ArcShape_get_plane_m8AFB38200562F513CE1206552D6397EE4715E48A(L_7, NULL);
		ArcShape_tD79A3A8B50D88CAABD9AB2CDBE67A6D525242779* L_9 = ___arc0;
		NullCheck(L_9);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10 = L_9->___from_2;
		NullCheck(L_8);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_11;
		L_11 = PlaneEx_ToPlaneCoord_m4C8B08C0002FE6D79C67380F185CAADEA16273BD(L_8, L_10, NULL);
		V_0 = L_11;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_12;
		L_12 = Vector2_get_normalized_mF6722883AEFB5027690A778DF8ACC20F0FA65297_inline((&V_0), NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_13;
		L_13 = Vector3_get_right_mFF573AFBBB2186E7AFA1BA7CA271A78DF67E4EA0_inline(NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_14;
		L_14 = Vector2_op_Implicit_mE8EBEE9291F11BB02F062D6E000F4798968CBD96_inline(L_13, NULL);
		float L_15;
		L_15 = MathUtil_ComputeAngleOnDisc_mF4A5A0688CCD08EDB3CA26FB9FF7BAC374D9A141(L_12, L_14, NULL);
		ArcShape_tD79A3A8B50D88CAABD9AB2CDBE67A6D525242779* L_16 = ___arc0;
		NullCheck(L_16);
		float L_17 = L_16->___angle_3;
		ArcShape_tD79A3A8B50D88CAABD9AB2CDBE67A6D525242779* L_18 = ___arc0;
		NullCheck(L_18);
		int32_t L_19 = L_18->___segment_count_5;
		List_1_t8F3790B7F8C471B3A1336522C7415FB0AC36D47B** L_20 = ___outPoints1;
		MathUtil_CreatePointsOnArc_m2C2362003D566AACF963B134F6B0D08A0C607C72(L_1, L_6, L_15, ((float)il2cpp_codegen_multiply((0.0174532924f), L_17)), L_19, L_20, NULL);
		return;
	}
}
// System.Single tripolygon.UModeler.MathUtil::ComputeAngleOnDisc(UnityEngine.Vector2,UnityEngine.Vector2)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float MathUtil_ComputeAngleOnDisc_mF4A5A0688CCD08EDB3CA26FB9FF7BAC374D9A141 (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___dir0, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___from1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Line2D_tAC46D1228FCBF2872CC1DF7DA8C02274FDE4A750_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_0 = ___from1;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_1 = ___dir0;
		float L_2;
		L_2 = Vector2_Dot_mC1E68FDB4FB462A279A303C043B8FD0AC11C8458_inline(L_0, L_1, NULL);
		float L_3;
		L_3 = acosf(L_2);
		V_0 = L_3;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_4;
		L_4 = Vector2_get_zero_m32506C40EC2EE7D5D4410BF40D3EE683A3D5F32C_inline(NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_5 = ___from1;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_6;
		L_6 = Vector2_op_UnaryNegation_mBA9FC53A2194EE3CC067A12D11879F695B34D6F9_inline(L_5, NULL);
		Line2D_tAC46D1228FCBF2872CC1DF7DA8C02274FDE4A750* L_7 = (Line2D_tAC46D1228FCBF2872CC1DF7DA8C02274FDE4A750*)il2cpp_codegen_object_new(Line2D_tAC46D1228FCBF2872CC1DF7DA8C02274FDE4A750_il2cpp_TypeInfo_var);
		NullCheck(L_7);
		Line2D__ctor_mCBAC2475401718A2EC118AA7818CBCBBA238490B(L_7, L_4, L_6, NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_8 = ___dir0;
		NullCheck(L_7);
		float L_9;
		L_9 = Line2D_Distance_m984F208D81F284E5D450F6D2B962FE7579200154(L_7, L_8, NULL);
		if ((!(((float)L_9) < ((float)(0.0f)))))
		{
			goto IL_0032;
		}
	}
	{
		float L_10 = V_0;
		V_0 = ((float)il2cpp_codegen_subtract((6.28318548f), L_10));
	}

IL_0032:
	{
		float L_11 = V_0;
		return L_11;
	}
}
// System.Boolean tripolygon.UModeler.MathUtil::CreateArc(tripolygon.UModeler.Edge2D,UnityEngine.Vector2,System.Int32,System.Collections.Generic.List`1<UnityEngine.Vector2>&,UnityEngine.Vector2&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool MathUtil_CreateArc_mAB6B69521F96997E35B17F16A0EC2A96B9FDFEA0 (Edge2D_t9FDACD4F24D6997F00FF589D414CA11D256A7364 ___edge0, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___third_v1, int32_t ___segment_count2, List_1_t8F3790B7F8C471B3A1336522C7415FB0AC36D47B** ___outPoints3, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* ___circum_circle_center4, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1U5BU5D_tDE88DA8DCD79A37A10DCC96911E1242D15FF66FE_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Reverse_m9D5D6524E78A4D1590BACA474B193AC2E0DA93EF_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_mF1C0C56457C655BDFFC6EE5B46FAD8BAEC1F588B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_m1F8E226CAD72B83C5E75BB66B43025247806B543_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	float V_1 = 0.0f;
	float V_2 = 0.0f;
	SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* V_3 = NULL;
	List_1U5BU5D_tDE88DA8DCD79A37A10DCC96911E1242D15FF66FE* V_4 = NULL;
	float V_5 = 0.0f;
	int32_t V_6 = 0;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 V_7;
	memset((&V_7), 0, sizeof(V_7));
	int32_t V_8 = 0;
	int32_t V_9 = 0;
	int32_t V_10 = 0;
	Edge2D_t9FDACD4F24D6997F00FF589D414CA11D256A7364 V_11;
	memset((&V_11), 0, sizeof(V_11));
	float V_12 = 0.0f;
	int32_t G_B4_0 = 0;
	SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* G_B4_1 = NULL;
	SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* G_B4_2 = NULL;
	int32_t G_B3_0 = 0;
	SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* G_B3_1 = NULL;
	SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* G_B3_2 = NULL;
	float G_B5_0 = 0.0f;
	int32_t G_B5_1 = 0;
	SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* G_B5_2 = NULL;
	SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* G_B5_3 = NULL;
	{
		V_0 = (0.0f);
		Edge2D_t9FDACD4F24D6997F00FF589D414CA11D256A7364 L_0 = ___edge0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_1 = L_0.___p0_0;
		Edge2D_t9FDACD4F24D6997F00FF589D414CA11D256A7364 L_2 = ___edge0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_3 = L_2.___p1_1;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_4 = ___third_v1;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* L_5 = ___circum_circle_center4;
		bool L_6;
		L_6 = MathUtil_ComputeCircumCircleRadiusAndCenter_m600D4FC42C11DD88A0D1A55FEF1869F9C8532550(L_1, L_3, L_4, (&V_0), L_5, NULL);
		if (L_6)
		{
			goto IL_0023;
		}
	}
	{
		List_1_t8F3790B7F8C471B3A1336522C7415FB0AC36D47B** L_7 = ___outPoints3;
		*((RuntimeObject**)L_7) = (RuntimeObject*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(RuntimeObject**)L_7, (void*)(RuntimeObject*)NULL);
		return (bool)0;
	}

IL_0023:
	{
		Edge2D_t9FDACD4F24D6997F00FF589D414CA11D256A7364 L_8 = ___edge0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_9 = L_8.___p0_0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* L_10 = ___circum_circle_center4;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_11 = (*(Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7*)L_10);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_12;
		L_12 = Vector2_op_Subtraction_m44475FCDAD2DA2F98D78A6625EC2DCDFE8803837_inline(L_9, L_11, NULL);
		V_7 = L_12;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_13;
		L_13 = Vector2_get_normalized_mF6722883AEFB5027690A778DF8ACC20F0FA65297_inline((&V_7), NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_14;
		L_14 = Vector3_get_right_mFF573AFBBB2186E7AFA1BA7CA271A78DF67E4EA0_inline(NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_15;
		L_15 = Vector2_op_Implicit_mE8EBEE9291F11BB02F062D6E000F4798968CBD96_inline(L_14, NULL);
		float L_16;
		L_16 = MathUtil_ComputeAngleOnDisc_mF4A5A0688CCD08EDB3CA26FB9FF7BAC374D9A141(L_13, L_15, NULL);
		V_1 = L_16;
		Edge2D_t9FDACD4F24D6997F00FF589D414CA11D256A7364 L_17 = ___edge0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_18 = L_17.___p1_1;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* L_19 = ___circum_circle_center4;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_20 = (*(Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7*)L_19);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_21;
		L_21 = Vector2_op_Subtraction_m44475FCDAD2DA2F98D78A6625EC2DCDFE8803837_inline(L_18, L_20, NULL);
		V_7 = L_21;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_22;
		L_22 = Vector2_get_normalized_mF6722883AEFB5027690A778DF8ACC20F0FA65297_inline((&V_7), NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_23;
		L_23 = Vector3_get_right_mFF573AFBBB2186E7AFA1BA7CA271A78DF67E4EA0_inline(NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_24;
		L_24 = Vector2_op_Implicit_mE8EBEE9291F11BB02F062D6E000F4798968CBD96_inline(L_23, NULL);
		float L_25;
		L_25 = MathUtil_ComputeAngleOnDisc_mF4A5A0688CCD08EDB3CA26FB9FF7BAC374D9A141(L_22, L_24, NULL);
		float L_26 = V_1;
		V_2 = ((float)il2cpp_codegen_subtract(L_25, L_26));
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_27 = (SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C*)(SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C*)SZArrayNew(SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C_il2cpp_TypeInfo_var, (uint32_t)2);
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_28 = L_27;
		float L_29 = V_2;
		NullCheck(L_28);
		(L_28)->SetAt(static_cast<il2cpp_array_size_t>(0), (float)L_29);
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_30 = L_28;
		float L_31 = V_2;
		G_B3_0 = 1;
		G_B3_1 = L_30;
		G_B3_2 = L_30;
		if ((((float)L_31) > ((float)(0.0f))))
		{
			G_B4_0 = 1;
			G_B4_1 = L_30;
			G_B4_2 = L_30;
			goto IL_0099;
		}
	}
	{
		float L_32 = V_2;
		G_B5_0 = ((-((float)il2cpp_codegen_subtract((-6.28318548f), L_32))));
		G_B5_1 = G_B3_0;
		G_B5_2 = G_B3_1;
		G_B5_3 = G_B3_2;
		goto IL_00a1;
	}

IL_0099:
	{
		float L_33 = V_2;
		G_B5_0 = ((-((float)il2cpp_codegen_subtract((6.28318548f), L_33))));
		G_B5_1 = G_B4_0;
		G_B5_2 = G_B4_1;
		G_B5_3 = G_B4_2;
	}

IL_00a1:
	{
		NullCheck(G_B5_2);
		(G_B5_2)->SetAt(static_cast<il2cpp_array_size_t>(G_B5_1), (float)G_B5_0);
		V_3 = G_B5_3;
		List_1U5BU5D_tDE88DA8DCD79A37A10DCC96911E1242D15FF66FE* L_34 = (List_1U5BU5D_tDE88DA8DCD79A37A10DCC96911E1242D15FF66FE*)(List_1U5BU5D_tDE88DA8DCD79A37A10DCC96911E1242D15FF66FE*)SZArrayNew(List_1U5BU5D_tDE88DA8DCD79A37A10DCC96911E1242D15FF66FE_il2cpp_TypeInfo_var, (uint32_t)2);
		V_4 = L_34;
		V_5 = (3.0000001E+10f);
		V_6 = 0;
		V_8 = 0;
		goto IL_013d;
	}

IL_00bd:
	{
		float L_35 = V_0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* L_36 = ___circum_circle_center4;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_37 = (*(Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7*)L_36);
		float L_38 = V_1;
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_39 = V_3;
		int32_t L_40 = V_8;
		NullCheck(L_39);
		int32_t L_41 = L_40;
		float L_42 = (L_39)->GetAt(static_cast<il2cpp_array_size_t>(L_41));
		List_1U5BU5D_tDE88DA8DCD79A37A10DCC96911E1242D15FF66FE* L_43 = V_4;
		int32_t L_44 = V_8;
		NullCheck(L_43);
		MathUtil_CreatePointsOnArc_m2C2362003D566AACF963B134F6B0D08A0C607C72(L_35, L_37, L_38, L_42, 4, ((L_43)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_44))), NULL);
		List_1U5BU5D_tDE88DA8DCD79A37A10DCC96911E1242D15FF66FE* L_45 = V_4;
		int32_t L_46 = V_8;
		NullCheck(L_45);
		int32_t L_47 = L_46;
		List_1_t8F3790B7F8C471B3A1336522C7415FB0AC36D47B* L_48 = (L_45)->GetAt(static_cast<il2cpp_array_size_t>(L_47));
		NullCheck(L_48);
		int32_t L_49;
		L_49 = List_1_get_Count_mF1C0C56457C655BDFFC6EE5B46FAD8BAEC1F588B_inline(L_48, List_1_get_Count_mF1C0C56457C655BDFFC6EE5B46FAD8BAEC1F588B_RuntimeMethod_var);
		V_9 = L_49;
		V_10 = 0;
		goto IL_0131;
	}

IL_00ea:
	{
		List_1U5BU5D_tDE88DA8DCD79A37A10DCC96911E1242D15FF66FE* L_50 = V_4;
		int32_t L_51 = V_8;
		NullCheck(L_50);
		int32_t L_52 = L_51;
		List_1_t8F3790B7F8C471B3A1336522C7415FB0AC36D47B* L_53 = (L_50)->GetAt(static_cast<il2cpp_array_size_t>(L_52));
		int32_t L_54 = V_10;
		NullCheck(L_53);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_55;
		L_55 = List_1_get_Item_m1F8E226CAD72B83C5E75BB66B43025247806B543(L_53, L_54, List_1_get_Item_m1F8E226CAD72B83C5E75BB66B43025247806B543_RuntimeMethod_var);
		List_1U5BU5D_tDE88DA8DCD79A37A10DCC96911E1242D15FF66FE* L_56 = V_4;
		int32_t L_57 = V_8;
		NullCheck(L_56);
		int32_t L_58 = L_57;
		List_1_t8F3790B7F8C471B3A1336522C7415FB0AC36D47B* L_59 = (L_56)->GetAt(static_cast<il2cpp_array_size_t>(L_58));
		int32_t L_60 = V_10;
		int32_t L_61 = V_9;
		NullCheck(L_59);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_62;
		L_62 = List_1_get_Item_m1F8E226CAD72B83C5E75BB66B43025247806B543(L_59, ((int32_t)(((int32_t)il2cpp_codegen_add(L_60, 1))%L_61)), List_1_get_Item_m1F8E226CAD72B83C5E75BB66B43025247806B543_RuntimeMethod_var);
		Edge2D__ctor_mC9DADA4D1BE449D1001BDC06F2468EF7F3D84B86((&V_11), L_55, L_62, NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_63 = ___third_v1;
		float L_64;
		L_64 = Edge2D_SquaredDistanceToPoint_m5D7E2BC603A71545E932B8026DF4EE7F56C53B60((&V_11), L_63, NULL);
		float L_65;
		L_65 = fabsf(L_64);
		V_12 = L_65;
		float L_66 = V_12;
		float L_67 = V_5;
		if ((!(((float)L_66) < ((float)L_67))))
		{
			goto IL_012b;
		}
	}
	{
		int32_t L_68 = V_8;
		V_6 = L_68;
		float L_69 = V_12;
		V_5 = L_69;
	}

IL_012b:
	{
		int32_t L_70 = V_10;
		V_10 = ((int32_t)il2cpp_codegen_add(L_70, 1));
	}

IL_0131:
	{
		int32_t L_71 = V_10;
		int32_t L_72 = V_9;
		if ((((int32_t)L_71) < ((int32_t)L_72)))
		{
			goto IL_00ea;
		}
	}
	{
		int32_t L_73 = V_8;
		V_8 = ((int32_t)il2cpp_codegen_add(L_73, 1));
	}

IL_013d:
	{
		int32_t L_74 = V_8;
		if ((((int32_t)L_74) < ((int32_t)2)))
		{
			goto IL_00bd;
		}
	}
	{
		float L_75 = V_0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* L_76 = ___circum_circle_center4;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_77 = (*(Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7*)L_76);
		float L_78 = V_1;
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_79 = V_3;
		int32_t L_80 = V_6;
		NullCheck(L_79);
		int32_t L_81 = L_80;
		float L_82 = (L_79)->GetAt(static_cast<il2cpp_array_size_t>(L_81));
		int32_t L_83 = ___segment_count2;
		List_1_t8F3790B7F8C471B3A1336522C7415FB0AC36D47B** L_84 = ___outPoints3;
		MathUtil_CreatePointsOnArc_m2C2362003D566AACF963B134F6B0D08A0C607C72(L_75, L_77, L_78, L_82, L_83, L_84, NULL);
		List_1_t8F3790B7F8C471B3A1336522C7415FB0AC36D47B** L_85 = ___outPoints3;
		List_1_t8F3790B7F8C471B3A1336522C7415FB0AC36D47B* L_86 = *((List_1_t8F3790B7F8C471B3A1336522C7415FB0AC36D47B**)L_85);
		NullCheck(L_86);
		List_1_Reverse_m9D5D6524E78A4D1590BACA474B193AC2E0DA93EF(L_86, List_1_Reverse_m9D5D6524E78A4D1590BACA474B193AC2E0DA93EF_RuntimeMethod_var);
		return (bool)1;
	}
}
// System.Single tripolygon.UModeler.MathUtil::Cosine(UnityEngine.Vector3,UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float MathUtil_Cosine_m71D94EC4D58AA8B0F22392D46A923544E4236E6A (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___v00, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___v11, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___v22, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___v00;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1 = ___v11;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2;
		L_2 = Vector3_op_Subtraction_mE42023FF80067CB44A1D4A27EB7CF2B24CABB828_inline(L_0, L_1, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3;
		L_3 = Vector3_Normalize_mEF8349CC39674236CFC694189AFD36E31F89AC8F_inline(L_2, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4 = ___v22;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_5 = ___v11;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6;
		L_6 = Vector3_op_Subtraction_mE42023FF80067CB44A1D4A27EB7CF2B24CABB828_inline(L_4, L_5, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_7;
		L_7 = Vector3_Normalize_mEF8349CC39674236CFC694189AFD36E31F89AC8F_inline(L_6, NULL);
		V_0 = L_7;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8 = V_0;
		float L_9;
		L_9 = Vector3_Dot_mBB86BB940AA0A32FA7D3C02AC42E5BC7095A5D52_inline(L_3, L_8, NULL);
		return L_9;
	}
}
// System.Collections.Generic.List`1<tripolygon.UModeler.Vertex> tripolygon.UModeler.MathUtil::RemoveLinkVertices(System.Collections.Generic.List`1<tripolygon.UModeler.Vertex>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR List_1_t302A75244C10A0CEF3AC031C484C2772A9D30A6F* MathUtil_RemoveLinkVertices_m04547C955E394F345F2445B83A73C375970B1408 (List_1_t302A75244C10A0CEF3AC031C484C2772A9D30A6F* ___loop0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_mBEA06988AE0C126241C9FFA08A9F2612A7A542A4_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_m27907A101D0DAF1C842184C25FF2FCF5F7116E9D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_m8E2B23B32C1F3E24BA82A3784717FA771E38B208_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_m435D761DB4AF80679A1C0AD9F789379A779DBFD1_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_t302A75244C10A0CEF3AC031C484C2772A9D30A6F_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	List_1_t302A75244C10A0CEF3AC031C484C2772A9D30A6F* V_0 = NULL;
	int32_t V_1 = 0;
	bool V_2 = false;
	int32_t V_3 = 0;
	{
		List_1_t302A75244C10A0CEF3AC031C484C2772A9D30A6F* L_0 = (List_1_t302A75244C10A0CEF3AC031C484C2772A9D30A6F*)il2cpp_codegen_object_new(List_1_t302A75244C10A0CEF3AC031C484C2772A9D30A6F_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		List_1__ctor_m27907A101D0DAF1C842184C25FF2FCF5F7116E9D(L_0, List_1__ctor_m27907A101D0DAF1C842184C25FF2FCF5F7116E9D_RuntimeMethod_var);
		V_0 = L_0;
		V_1 = 0;
		goto IL_0058;
	}

IL_000a:
	{
		V_2 = (bool)0;
		V_3 = 0;
		goto IL_003b;
	}

IL_0010:
	{
		int32_t L_1 = V_1;
		int32_t L_2 = V_3;
		if ((((int32_t)L_1) == ((int32_t)L_2)))
		{
			goto IL_0037;
		}
	}
	{
		List_1_t302A75244C10A0CEF3AC031C484C2772A9D30A6F* L_3 = ___loop0;
		int32_t L_4 = V_1;
		NullCheck(L_3);
		Vertex_tB6D4D191E463D1653AA47DED15E41F21BA5A21FC* L_5;
		L_5 = List_1_get_Item_m435D761DB4AF80679A1C0AD9F789379A779DBFD1(L_3, L_4, List_1_get_Item_m435D761DB4AF80679A1C0AD9F789379A779DBFD1_RuntimeMethod_var);
		NullCheck(L_5);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6 = L_5->___pos_0;
		List_1_t302A75244C10A0CEF3AC031C484C2772A9D30A6F* L_7 = ___loop0;
		int32_t L_8 = V_3;
		NullCheck(L_7);
		Vertex_tB6D4D191E463D1653AA47DED15E41F21BA5A21FC* L_9;
		L_9 = List_1_get_Item_m435D761DB4AF80679A1C0AD9F789379A779DBFD1(L_7, L_8, List_1_get_Item_m435D761DB4AF80679A1C0AD9F789379A779DBFD1_RuntimeMethod_var);
		NullCheck(L_9);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10 = L_9->___pos_0;
		bool L_11;
		L_11 = Comparer_IsEquivalent_mAB00A170CAA5452C62FD8203EC6D3D463103985E(L_6, L_10, NULL);
		if (!L_11)
		{
			goto IL_0037;
		}
	}
	{
		V_2 = (bool)1;
		goto IL_0044;
	}

IL_0037:
	{
		int32_t L_12 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_12, 1));
	}

IL_003b:
	{
		int32_t L_13 = V_3;
		List_1_t302A75244C10A0CEF3AC031C484C2772A9D30A6F* L_14 = ___loop0;
		NullCheck(L_14);
		int32_t L_15;
		L_15 = List_1_get_Count_m8E2B23B32C1F3E24BA82A3784717FA771E38B208_inline(L_14, List_1_get_Count_m8E2B23B32C1F3E24BA82A3784717FA771E38B208_RuntimeMethod_var);
		if ((((int32_t)L_13) < ((int32_t)L_15)))
		{
			goto IL_0010;
		}
	}

IL_0044:
	{
		bool L_16 = V_2;
		if (L_16)
		{
			goto IL_0054;
		}
	}
	{
		List_1_t302A75244C10A0CEF3AC031C484C2772A9D30A6F* L_17 = V_0;
		List_1_t302A75244C10A0CEF3AC031C484C2772A9D30A6F* L_18 = ___loop0;
		int32_t L_19 = V_1;
		NullCheck(L_18);
		Vertex_tB6D4D191E463D1653AA47DED15E41F21BA5A21FC* L_20;
		L_20 = List_1_get_Item_m435D761DB4AF80679A1C0AD9F789379A779DBFD1(L_18, L_19, List_1_get_Item_m435D761DB4AF80679A1C0AD9F789379A779DBFD1_RuntimeMethod_var);
		NullCheck(L_17);
		List_1_Add_mBEA06988AE0C126241C9FFA08A9F2612A7A542A4_inline(L_17, L_20, List_1_Add_mBEA06988AE0C126241C9FFA08A9F2612A7A542A4_RuntimeMethod_var);
	}

IL_0054:
	{
		int32_t L_21 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_21, 1));
	}

IL_0058:
	{
		int32_t L_22 = V_1;
		List_1_t302A75244C10A0CEF3AC031C484C2772A9D30A6F* L_23 = ___loop0;
		NullCheck(L_23);
		int32_t L_24;
		L_24 = List_1_get_Count_m8E2B23B32C1F3E24BA82A3784717FA771E38B208_inline(L_23, List_1_get_Count_m8E2B23B32C1F3E24BA82A3784717FA771E38B208_RuntimeMethod_var);
		if ((((int32_t)L_22) < ((int32_t)L_24)))
		{
			goto IL_000a;
		}
	}
	{
		List_1_t302A75244C10A0CEF3AC031C484C2772A9D30A6F* L_25 = V_0;
		return L_25;
	}
}
// System.Boolean tripolygon.UModeler.MathUtil::IsCCW(System.Collections.Generic.List`1<tripolygon.UModeler.Vertex>,tripolygon.UModeler.PlaneEx)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool MathUtil_IsCCW_mD32702F01B5D485C1C0F9754EE87BAF09B3AF592 (List_1_t302A75244C10A0CEF3AC031C484C2772A9D30A6F* ___loop0, PlaneEx_t5512A7D4BF235ED6ED6F1F09A1621A1DCB31509D* ___plane1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_MoveNext_mB97D38C9C1685FC126DFDF90CEC4756431EEED73_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_get_Current_mB94096C5ED127D93564C02549007FEA63482CE38_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&KeyValuePair_2_get_Value_mAB1FC5832CB06EEF53C3A3E9C2A67258EAC6048E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_m8E2B23B32C1F3E24BA82A3784717FA771E38B208_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_m435D761DB4AF80679A1C0AD9F789379A779DBFD1_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SortedDictionary_2_Add_mF9B1C9C48B997CF0B490926FC6C5338959D1960C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SortedDictionary_2_ContainsKey_mD4CCA93B685E372DFBD7A21DAB034A4FC2C2C8EE_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SortedDictionary_2_GetEnumerator_m52D1F7C3A27183B19E70A3A6563A996FF34CAEA6_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SortedDictionary_2__ctor_m518A3BFE4904E6F4411A44950B724F3089818BAD_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SortedDictionary_2_t4C2768740A7E0300B8278590463E71E6C439B5F2_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	List_1_t302A75244C10A0CEF3AC031C484C2772A9D30A6F* V_0 = NULL;
	SortedDictionary_2_t4C2768740A7E0300B8278590463E71E6C439B5F2* V_1 = NULL;
	Enumerator_t422FE7CC7AC06DA0CD21EF1FC7B746F9C4C7BEF2 V_2;
	memset((&V_2), 0, sizeof(V_2));
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_6;
	memset((&V_6), 0, sizeof(V_6));
	int32_t V_7 = 0;
	float V_8 = 0.0f;
	KeyValuePair_2_tF9681614985AA4D11569AFA8747D722D1447A120 V_9;
	memset((&V_9), 0, sizeof(V_9));
	{
		List_1_t302A75244C10A0CEF3AC031C484C2772A9D30A6F* L_0 = ___loop0;
		if (!L_0)
		{
			goto IL_000f;
		}
	}
	{
		List_1_t302A75244C10A0CEF3AC031C484C2772A9D30A6F* L_1 = ___loop0;
		NullCheck(L_1);
		int32_t L_2;
		L_2 = List_1_get_Count_m8E2B23B32C1F3E24BA82A3784717FA771E38B208_inline(L_1, List_1_get_Count_m8E2B23B32C1F3E24BA82A3784717FA771E38B208_RuntimeMethod_var);
		if ((((int32_t)L_2) < ((int32_t)3)))
		{
			goto IL_000f;
		}
	}
	{
		PlaneEx_t5512A7D4BF235ED6ED6F1F09A1621A1DCB31509D* L_3 = ___plane1;
		if (L_3)
		{
			goto IL_0011;
		}
	}

IL_000f:
	{
		return (bool)0;
	}

IL_0011:
	{
		List_1_t302A75244C10A0CEF3AC031C484C2772A9D30A6F* L_4 = ___loop0;
		List_1_t302A75244C10A0CEF3AC031C484C2772A9D30A6F* L_5;
		L_5 = MathUtil_RemoveLinkVertices_m04547C955E394F345F2445B83A73C375970B1408(L_4, NULL);
		V_0 = L_5;
		List_1_t302A75244C10A0CEF3AC031C484C2772A9D30A6F* L_6 = V_0;
		NullCheck(L_6);
		int32_t L_7;
		L_7 = List_1_get_Count_m8E2B23B32C1F3E24BA82A3784717FA771E38B208_inline(L_6, List_1_get_Count_m8E2B23B32C1F3E24BA82A3784717FA771E38B208_RuntimeMethod_var);
		if ((((int32_t)L_7) >= ((int32_t)3)))
		{
			goto IL_0023;
		}
	}
	{
		return (bool)0;
	}

IL_0023:
	{
		SortedDictionary_2_t4C2768740A7E0300B8278590463E71E6C439B5F2* L_8 = (SortedDictionary_2_t4C2768740A7E0300B8278590463E71E6C439B5F2*)il2cpp_codegen_object_new(SortedDictionary_2_t4C2768740A7E0300B8278590463E71E6C439B5F2_il2cpp_TypeInfo_var);
		NullCheck(L_8);
		SortedDictionary_2__ctor_m518A3BFE4904E6F4411A44950B724F3089818BAD(L_8, SortedDictionary_2__ctor_m518A3BFE4904E6F4411A44950B724F3089818BAD_RuntimeMethod_var);
		V_1 = L_8;
		V_7 = 0;
		goto IL_0062;
	}

IL_002e:
	{
		PlaneEx_t5512A7D4BF235ED6ED6F1F09A1621A1DCB31509D* L_9 = ___plane1;
		List_1_t302A75244C10A0CEF3AC031C484C2772A9D30A6F* L_10 = V_0;
		int32_t L_11 = V_7;
		NullCheck(L_10);
		Vertex_tB6D4D191E463D1653AA47DED15E41F21BA5A21FC* L_12;
		L_12 = List_1_get_Item_m435D761DB4AF80679A1C0AD9F789379A779DBFD1(L_10, L_11, List_1_get_Item_m435D761DB4AF80679A1C0AD9F789379A779DBFD1_RuntimeMethod_var);
		NullCheck(L_12);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_13 = L_12->___pos_0;
		NullCheck(L_9);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_14;
		L_14 = PlaneEx_ToPlaneCoord_m4C8B08C0002FE6D79C67380F185CAADEA16273BD(L_9, L_13, NULL);
		float L_15 = L_14.___y_1;
		V_8 = L_15;
		SortedDictionary_2_t4C2768740A7E0300B8278590463E71E6C439B5F2* L_16 = V_1;
		float L_17 = V_8;
		NullCheck(L_16);
		bool L_18;
		L_18 = SortedDictionary_2_ContainsKey_mD4CCA93B685E372DFBD7A21DAB034A4FC2C2C8EE(L_16, L_17, SortedDictionary_2_ContainsKey_mD4CCA93B685E372DFBD7A21DAB034A4FC2C2C8EE_RuntimeMethod_var);
		if (L_18)
		{
			goto IL_005c;
		}
	}
	{
		SortedDictionary_2_t4C2768740A7E0300B8278590463E71E6C439B5F2* L_19 = V_1;
		float L_20 = V_8;
		int32_t L_21 = V_7;
		NullCheck(L_19);
		SortedDictionary_2_Add_mF9B1C9C48B997CF0B490926FC6C5338959D1960C(L_19, L_20, L_21, SortedDictionary_2_Add_mF9B1C9C48B997CF0B490926FC6C5338959D1960C_RuntimeMethod_var);
	}

IL_005c:
	{
		int32_t L_22 = V_7;
		V_7 = ((int32_t)il2cpp_codegen_add(L_22, 1));
	}

IL_0062:
	{
		int32_t L_23 = V_7;
		List_1_t302A75244C10A0CEF3AC031C484C2772A9D30A6F* L_24 = V_0;
		NullCheck(L_24);
		int32_t L_25;
		L_25 = List_1_get_Count_m8E2B23B32C1F3E24BA82A3784717FA771E38B208_inline(L_24, List_1_get_Count_m8E2B23B32C1F3E24BA82A3784717FA771E38B208_RuntimeMethod_var);
		if ((((int32_t)L_23) < ((int32_t)L_25)))
		{
			goto IL_002e;
		}
	}
	{
		SortedDictionary_2_t4C2768740A7E0300B8278590463E71E6C439B5F2* L_26 = V_1;
		NullCheck(L_26);
		Enumerator_t422FE7CC7AC06DA0CD21EF1FC7B746F9C4C7BEF2 L_27;
		L_27 = SortedDictionary_2_GetEnumerator_m52D1F7C3A27183B19E70A3A6563A996FF34CAEA6(L_26, SortedDictionary_2_GetEnumerator_m52D1F7C3A27183B19E70A3A6563A996FF34CAEA6_RuntimeMethod_var);
		V_2 = L_27;
		bool L_28;
		L_28 = Enumerator_MoveNext_mB97D38C9C1685FC126DFDF90CEC4756431EEED73((&V_2), Enumerator_MoveNext_mB97D38C9C1685FC126DFDF90CEC4756431EEED73_RuntimeMethod_var);
		KeyValuePair_2_tF9681614985AA4D11569AFA8747D722D1447A120 L_29;
		L_29 = Enumerator_get_Current_mB94096C5ED127D93564C02549007FEA63482CE38((&V_2), Enumerator_get_Current_mB94096C5ED127D93564C02549007FEA63482CE38_RuntimeMethod_var);
		V_9 = L_29;
		int32_t L_30;
		L_30 = KeyValuePair_2_get_Value_mAB1FC5832CB06EEF53C3A3E9C2A67258EAC6048E_inline((&V_9), KeyValuePair_2_get_Value_mAB1FC5832CB06EEF53C3A3E9C2A67258EAC6048E_RuntimeMethod_var);
		V_3 = L_30;
		int32_t L_31 = V_3;
		List_1_t302A75244C10A0CEF3AC031C484C2772A9D30A6F* L_32 = V_0;
		NullCheck(L_32);
		int32_t L_33;
		L_33 = List_1_get_Count_m8E2B23B32C1F3E24BA82A3784717FA771E38B208_inline(L_32, List_1_get_Count_m8E2B23B32C1F3E24BA82A3784717FA771E38B208_RuntimeMethod_var);
		List_1_t302A75244C10A0CEF3AC031C484C2772A9D30A6F* L_34 = V_0;
		NullCheck(L_34);
		int32_t L_35;
		L_35 = List_1_get_Count_m8E2B23B32C1F3E24BA82A3784717FA771E38B208_inline(L_34, List_1_get_Count_m8E2B23B32C1F3E24BA82A3784717FA771E38B208_RuntimeMethod_var);
		V_4 = ((int32_t)(((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_subtract(L_31, 1)), L_33))%L_35));
		int32_t L_36 = V_3;
		List_1_t302A75244C10A0CEF3AC031C484C2772A9D30A6F* L_37 = V_0;
		NullCheck(L_37);
		int32_t L_38;
		L_38 = List_1_get_Count_m8E2B23B32C1F3E24BA82A3784717FA771E38B208_inline(L_37, List_1_get_Count_m8E2B23B32C1F3E24BA82A3784717FA771E38B208_RuntimeMethod_var);
		V_5 = ((int32_t)(((int32_t)il2cpp_codegen_add(L_36, 1))%L_38));
		List_1_t302A75244C10A0CEF3AC031C484C2772A9D30A6F* L_39 = V_0;
		int32_t L_40 = V_4;
		NullCheck(L_39);
		Vertex_tB6D4D191E463D1653AA47DED15E41F21BA5A21FC* L_41;
		L_41 = List_1_get_Item_m435D761DB4AF80679A1C0AD9F789379A779DBFD1(L_39, L_40, List_1_get_Item_m435D761DB4AF80679A1C0AD9F789379A779DBFD1_RuntimeMethod_var);
		NullCheck(L_41);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_42 = L_41->___pos_0;
		List_1_t302A75244C10A0CEF3AC031C484C2772A9D30A6F* L_43 = V_0;
		int32_t L_44 = V_3;
		NullCheck(L_43);
		Vertex_tB6D4D191E463D1653AA47DED15E41F21BA5A21FC* L_45;
		L_45 = List_1_get_Item_m435D761DB4AF80679A1C0AD9F789379A779DBFD1(L_43, L_44, List_1_get_Item_m435D761DB4AF80679A1C0AD9F789379A779DBFD1_RuntimeMethod_var);
		NullCheck(L_45);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_46 = L_45->___pos_0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_47;
		L_47 = Vector3_op_Subtraction_mE42023FF80067CB44A1D4A27EB7CF2B24CABB828_inline(L_42, L_46, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_48;
		L_48 = Vector3_Normalize_mEF8349CC39674236CFC694189AFD36E31F89AC8F_inline(L_47, NULL);
		List_1_t302A75244C10A0CEF3AC031C484C2772A9D30A6F* L_49 = V_0;
		int32_t L_50 = V_5;
		NullCheck(L_49);
		Vertex_tB6D4D191E463D1653AA47DED15E41F21BA5A21FC* L_51;
		L_51 = List_1_get_Item_m435D761DB4AF80679A1C0AD9F789379A779DBFD1(L_49, L_50, List_1_get_Item_m435D761DB4AF80679A1C0AD9F789379A779DBFD1_RuntimeMethod_var);
		NullCheck(L_51);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_52 = L_51->___pos_0;
		List_1_t302A75244C10A0CEF3AC031C484C2772A9D30A6F* L_53 = V_0;
		int32_t L_54 = V_3;
		NullCheck(L_53);
		Vertex_tB6D4D191E463D1653AA47DED15E41F21BA5A21FC* L_55;
		L_55 = List_1_get_Item_m435D761DB4AF80679A1C0AD9F789379A779DBFD1(L_53, L_54, List_1_get_Item_m435D761DB4AF80679A1C0AD9F789379A779DBFD1_RuntimeMethod_var);
		NullCheck(L_55);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_56 = L_55->___pos_0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_57;
		L_57 = Vector3_op_Subtraction_mE42023FF80067CB44A1D4A27EB7CF2B24CABB828_inline(L_52, L_56, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_58;
		L_58 = Vector3_Normalize_mEF8349CC39674236CFC694189AFD36E31F89AC8F_inline(L_57, NULL);
		V_6 = L_58;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_59 = V_6;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_60;
		L_60 = Vector3_Cross_mF93A280558BCE756D13B6CC5DCD7DE8A43148987_inline(L_48, L_59, NULL);
		PlaneEx_t5512A7D4BF235ED6ED6F1F09A1621A1DCB31509D* L_61 = ___plane1;
		NullCheck(L_61);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_62;
		L_62 = PlaneEx_get_normal_m934F59FA92AFFDF816E50D2CF5971AA97B1D067C_inline(L_61, NULL);
		float L_63;
		L_63 = Vector3_Dot_mBB86BB940AA0A32FA7D3C02AC42E5BC7095A5D52_inline(L_60, L_62, NULL);
		return (bool)((((float)L_63) < ((float)(0.0f)))? 1 : 0);
	}
}
// System.Boolean tripolygon.UModeler.MathUtil::IsRectangleSizeOver(UnityEngine.Vector2,UnityEngine.Vector2,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool MathUtil_IsRectangleSizeOver_m7CDB67D66831DD4A9E521DCD02DE05756D4A8F84 (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___p00, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___p11, float ___size2, const RuntimeMethod* method) 
{
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_0 = ___p00;
		float L_1 = L_0.___x_0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_2 = ___p11;
		float L_3 = L_2.___x_0;
		float L_4;
		L_4 = fabsf(((float)il2cpp_codegen_subtract(L_1, L_3)));
		float L_5 = ___size2;
		if ((((float)L_4) > ((float)L_5)))
		{
			goto IL_002b;
		}
	}
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_6 = ___p00;
		float L_7 = L_6.___y_1;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_8 = ___p11;
		float L_9 = L_8.___y_1;
		float L_10;
		L_10 = fabsf(((float)il2cpp_codegen_subtract(L_7, L_9)));
		float L_11 = ___size2;
		return (bool)((((float)L_10) > ((float)L_11))? 1 : 0);
	}

IL_002b:
	{
		return (bool)1;
	}
}
// UnityEngine.Vector3 tripolygon.UModeler.MathUtil::Cross(UnityEngine.Vector3,UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 MathUtil_Cross_m7D92E92D5C4D740C23DDC844FE64267FE0A1C891 (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___p00, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___p11, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___p22, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___p00;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1 = ___p11;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2;
		L_2 = Vector3_op_Subtraction_mE42023FF80067CB44A1D4A27EB7CF2B24CABB828_inline(L_0, L_1, NULL);
		V_0 = L_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3 = ___p22;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4 = ___p11;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_5;
		L_5 = Vector3_op_Subtraction_mE42023FF80067CB44A1D4A27EB7CF2B24CABB828_inline(L_3, L_4, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6 = V_0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_7;
		L_7 = Vector3_Cross_mF93A280558BCE756D13B6CC5DCD7DE8A43148987_inline(L_5, L_6, NULL);
		return L_7;
	}
}
// System.Collections.Generic.List`1<System.Single> tripolygon.UModeler.MathUtil::SolveQuadraticEquation(System.Single,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR List_1_t0D1C46FD8DDDE974D93CA4F3474EEC05AF950918* MathUtil_SolveQuadraticEquation_mCC7A1B6CF1D9F1C3D531DD0CA702A9DA8B6998F7 (float ___a0, float ___b1, float ___c2, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_m2F86E252D086E288E02FA1C830B7E86C0A431E51_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_mC29D3D824786832A31096310B3B3016B8B42B802_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_t0D1C46FD8DDDE974D93CA4F3474EEC05AF950918_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	List_1_t0D1C46FD8DDDE974D93CA4F3474EEC05AF950918* V_1 = NULL;
	{
		float L_0 = ___a0;
		if ((!(((float)L_0) == ((float)(0.0f)))))
		{
			goto IL_000a;
		}
	}
	{
		return (List_1_t0D1C46FD8DDDE974D93CA4F3474EEC05AF950918*)NULL;
	}

IL_000a:
	{
		float L_1 = ___b1;
		float L_2 = ___b1;
		float L_3 = ___a0;
		float L_4 = ___c2;
		V_0 = ((float)il2cpp_codegen_subtract(((float)il2cpp_codegen_multiply(L_1, L_2)), ((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_multiply((4.0f), L_3)), L_4))));
		float L_5 = V_0;
		if ((!(((float)L_5) < ((float)(0.0f)))))
		{
			goto IL_0022;
		}
	}
	{
		return (List_1_t0D1C46FD8DDDE974D93CA4F3474EEC05AF950918*)NULL;
	}

IL_0022:
	{
		List_1_t0D1C46FD8DDDE974D93CA4F3474EEC05AF950918* L_6 = (List_1_t0D1C46FD8DDDE974D93CA4F3474EEC05AF950918*)il2cpp_codegen_object_new(List_1_t0D1C46FD8DDDE974D93CA4F3474EEC05AF950918_il2cpp_TypeInfo_var);
		NullCheck(L_6);
		List_1__ctor_mC29D3D824786832A31096310B3B3016B8B42B802(L_6, List_1__ctor_mC29D3D824786832A31096310B3B3016B8B42B802_RuntimeMethod_var);
		V_1 = L_6;
		float L_7 = V_0;
		if ((!(((float)L_7) == ((float)(0.0f)))))
		{
			goto IL_0042;
		}
	}
	{
		List_1_t0D1C46FD8DDDE974D93CA4F3474EEC05AF950918* L_8 = V_1;
		float L_9 = ___b1;
		float L_10 = ___a0;
		NullCheck(L_8);
		List_1_Add_m2F86E252D086E288E02FA1C830B7E86C0A431E51_inline(L_8, ((float)il2cpp_codegen_multiply(((float)(((-L_9))/(2.0f))), L_10)), List_1_Add_m2F86E252D086E288E02FA1C830B7E86C0A431E51_RuntimeMethod_var);
		goto IL_0070;
	}

IL_0042:
	{
		List_1_t0D1C46FD8DDDE974D93CA4F3474EEC05AF950918* L_11 = V_1;
		float L_12 = ___b1;
		float L_13 = V_0;
		float L_14;
		L_14 = sqrtf(L_13);
		float L_15 = ___a0;
		NullCheck(L_11);
		List_1_Add_m2F86E252D086E288E02FA1C830B7E86C0A431E51_inline(L_11, ((float)(((float)il2cpp_codegen_subtract(((-L_12)), L_14))/((float)il2cpp_codegen_multiply((2.0f), L_15)))), List_1_Add_m2F86E252D086E288E02FA1C830B7E86C0A431E51_RuntimeMethod_var);
		List_1_t0D1C46FD8DDDE974D93CA4F3474EEC05AF950918* L_16 = V_1;
		float L_17 = ___b1;
		float L_18 = V_0;
		float L_19;
		L_19 = sqrtf(L_18);
		float L_20 = ___a0;
		NullCheck(L_16);
		List_1_Add_m2F86E252D086E288E02FA1C830B7E86C0A431E51_inline(L_16, ((float)(((float)il2cpp_codegen_add(((-L_17)), L_19))/((float)il2cpp_codegen_multiply((2.0f), L_20)))), List_1_Add_m2F86E252D086E288E02FA1C830B7E86C0A431E51_RuntimeMethod_var);
	}

IL_0070:
	{
		List_1_t0D1C46FD8DDDE974D93CA4F3474EEC05AF950918* L_21 = V_1;
		return L_21;
	}
}
// System.Single tripolygon.UModeler.MathUtil::ComputeClosest2Power(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float MathUtil_ComputeClosest2Power_m57F051640DD328EED5A7ADAD7D9E1E87FBCB95DC (float ___value0, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	{
		float L_0 = ___value0;
		int32_t L_1;
		L_1 = Mathf_CeilToInt_mF2BF9F4261B3431DC20E10A46CFEEED103C48963_inline(L_0, NULL);
		int32_t L_2;
		L_2 = Mathf_Abs_mD945EDDEA0D62D21BFDBAB7B1C0F18DFF1CEC905_inline(L_1, NULL);
		V_0 = L_2;
		V_1 = 0;
	}

IL_000e:
	{
		int32_t L_3 = V_1;
		int32_t L_4 = L_3;
		V_1 = ((int32_t)il2cpp_codegen_add(L_4, 1));
		float L_5;
		L_5 = powf((2.0f), ((float)L_4));
		V_2 = il2cpp_codegen_cast_double_to_int<int32_t>(L_5);
		int32_t L_6 = V_0;
		int32_t L_7 = V_2;
		if ((((int32_t)L_6) > ((int32_t)L_7)))
		{
			goto IL_000e;
		}
	}
	{
		int32_t L_8 = V_2;
		V_0 = L_8;
		int32_t L_9 = V_0;
		float L_10 = ___value0;
		float L_11;
		L_11 = Mathf_Sign_m42EE1F0BC041AF14F89DED7F762BE996E2C50D8A_inline(L_10, NULL);
		return ((float)il2cpp_codegen_multiply(((float)L_9), L_11));
	}
}
// System.Boolean tripolygon.UModeler.MathUtil::IsOverlappedEdges(tripolygon.UModeler.Edge,tripolygon.UModeler.Edge)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool MathUtil_IsOverlappedEdges_mC35B4259ADB791A690ED3DD335E8380E9CD9AD72 (Edge_t61E163F7AA3BA416F72B1EDF0DD966F41041D4FF* ___e00, Edge_t61E163F7AA3BA416F72B1EDF0DD966F41041D4FF* ___e11, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	float V_1 = 0.0f;
	bool V_2 = false;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_3;
	memset((&V_3), 0, sizeof(V_3));
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_4;
	memset((&V_4), 0, sizeof(V_4));
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_5;
	memset((&V_5), 0, sizeof(V_5));
	{
		V_0 = (0.0f);
		V_1 = (0.0f);
		Edge_t61E163F7AA3BA416F72B1EDF0DD966F41041D4FF* L_0 = ___e11;
		Edge_t61E163F7AA3BA416F72B1EDF0DD966F41041D4FF* L_1 = ___e00;
		NullCheck(L_1);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2 = L_1->___p0_0;
		NullCheck(L_0);
		int32_t L_3;
		L_3 = Edge_CalculateSquaredDistance_mBD64EC1E55C36BFB1AE42B6692B42262E1578C2B(L_0, L_2, (&V_0), NULL);
		Edge_t61E163F7AA3BA416F72B1EDF0DD966F41041D4FF* L_4 = ___e11;
		Edge_t61E163F7AA3BA416F72B1EDF0DD966F41041D4FF* L_5 = ___e00;
		NullCheck(L_5);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6 = L_5->___p1_1;
		NullCheck(L_4);
		int32_t L_7;
		L_7 = Edge_CalculateSquaredDistance_mBD64EC1E55C36BFB1AE42B6692B42262E1578C2B(L_4, L_6, (&V_1), NULL);
		V_2 = (bool)((((int32_t)L_7) == ((int32_t)1))? 1 : 0);
		Edge_t61E163F7AA3BA416F72B1EDF0DD966F41041D4FF* L_8 = ___e00;
		NullCheck(L_8);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_9;
		L_9 = Edge_GetDir_m95D71E3034B234FF7CF29D4DD636519AFC98F7C8(L_8, NULL);
		V_5 = L_9;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10;
		L_10 = Vector3_get_normalized_m736BBF65D5CDA7A18414370D15B4DFCC1E466F07_inline((&V_5), NULL);
		V_3 = L_10;
		Edge_t61E163F7AA3BA416F72B1EDF0DD966F41041D4FF* L_11 = ___e11;
		NullCheck(L_11);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_12;
		L_12 = Edge_GetDir_m95D71E3034B234FF7CF29D4DD636519AFC98F7C8(L_11, NULL);
		V_5 = L_12;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_13;
		L_13 = Vector3_get_normalized_m736BBF65D5CDA7A18414370D15B4DFCC1E466F07_inline((&V_5), NULL);
		V_4 = L_13;
		if (!((((int32_t)L_3) == ((int32_t)1))? 1 : 0))
		{
			goto IL_005a;
		}
	}
	{
		float L_14 = V_0;
		if ((((float)L_14) < ((float)(9.99999975E-05f))))
		{
			goto IL_0065;
		}
	}

IL_005a:
	{
		bool L_15 = V_2;
		if (!L_15)
		{
			goto IL_007a;
		}
	}
	{
		float L_16 = V_1;
		if ((!(((float)L_16) < ((float)(9.99999975E-05f)))))
		{
			goto IL_007a;
		}
	}

IL_0065:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_17 = V_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_18 = V_4;
		float L_19;
		L_19 = Vector3_Dot_mBB86BB940AA0A32FA7D3C02AC42E5BC7095A5D52_inline(L_17, L_18, NULL);
		float L_20;
		L_20 = fabsf(L_19);
		return (bool)((((float)L_20) > ((float)(0.999899983f)))? 1 : 0);
	}

IL_007a:
	{
		return (bool)0;
	}
}
// System.Void tripolygon.UModeler.MathUtil::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MathUtil__ctor_m1BA84D638C1800F8A47FCC9068B8E367CD65C8C4 (MathUtil_t8B5351E9F78AC26C512287FC18EEF6C156568229* __this, const RuntimeMethod* method) 
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
float Vector2_3InputFloatReturnDelegate_Invoke_m41B4E1FCA6B3F0AC839C7E15F7030FBDB6B46D36_Multicast(Vector2_3InputFloatReturnDelegate_tDF554F3258BCA6D8F1BEC540B850729000D15F46* __this, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___p10, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___p21, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___p32, const RuntimeMethod* method)
{
	il2cpp_array_size_t length = __this->___delegates_13->max_length;
	Delegate_t** delegatesToInvoke = reinterpret_cast<Delegate_t**>(__this->___delegates_13->GetAddressAtUnchecked(0));
	float retVal = 0.0f;
	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		Vector2_3InputFloatReturnDelegate_tDF554F3258BCA6D8F1BEC540B850729000D15F46* currentDelegate = reinterpret_cast<Vector2_3InputFloatReturnDelegate_tDF554F3258BCA6D8F1BEC540B850729000D15F46*>(delegatesToInvoke[i]);
		typedef float (*FunctionPointerType) (RuntimeObject*, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2, const RuntimeMethod*);
		retVal = ((FunctionPointerType)currentDelegate->___invoke_impl_1)((Il2CppObject*)currentDelegate->___method_code_6, ___p10, ___p21, ___p32, reinterpret_cast<RuntimeMethod*>(currentDelegate->___method_3));
	}
	return retVal;
}
float Vector2_3InputFloatReturnDelegate_Invoke_m41B4E1FCA6B3F0AC839C7E15F7030FBDB6B46D36_OpenInst(Vector2_3InputFloatReturnDelegate_tDF554F3258BCA6D8F1BEC540B850729000D15F46* __this, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___p10, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___p21, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___p32, const RuntimeMethod* method)
{
	typedef float (*FunctionPointerType) (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___method_ptr_0)(___p10, ___p21, ___p32, method);
}
float Vector2_3InputFloatReturnDelegate_Invoke_m41B4E1FCA6B3F0AC839C7E15F7030FBDB6B46D36_OpenStatic(Vector2_3InputFloatReturnDelegate_tDF554F3258BCA6D8F1BEC540B850729000D15F46* __this, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___p10, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___p21, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___p32, const RuntimeMethod* method)
{
	typedef float (*FunctionPointerType) (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___method_ptr_0)(___p10, ___p21, ___p32, method);
}
float Vector2_3InputFloatReturnDelegate_Invoke_m41B4E1FCA6B3F0AC839C7E15F7030FBDB6B46D36_OpenStaticInvoker(Vector2_3InputFloatReturnDelegate_tDF554F3258BCA6D8F1BEC540B850729000D15F46* __this, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___p10, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___p21, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___p32, const RuntimeMethod* method)
{
	return InvokerFuncInvoker3< float, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 >::Invoke(__this->___method_ptr_0, method, NULL, ___p10, ___p21, ___p32);
}
float Vector2_3InputFloatReturnDelegate_Invoke_m41B4E1FCA6B3F0AC839C7E15F7030FBDB6B46D36_ClosedStaticInvoker(Vector2_3InputFloatReturnDelegate_tDF554F3258BCA6D8F1BEC540B850729000D15F46* __this, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___p10, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___p21, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___p32, const RuntimeMethod* method)
{
	return InvokerFuncInvoker4< float, RuntimeObject*, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 >::Invoke(__this->___method_ptr_0, method, NULL, __this->___m_target_2, ___p10, ___p21, ___p32);
}
IL2CPP_EXTERN_C  float DelegatePInvokeWrapper_Vector2_3InputFloatReturnDelegate_tDF554F3258BCA6D8F1BEC540B850729000D15F46 (Vector2_3InputFloatReturnDelegate_tDF554F3258BCA6D8F1BEC540B850729000D15F46* __this, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___p10, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___p21, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___p32, const RuntimeMethod* method)
{
	typedef float (DEFAULT_CALL *PInvokeFunc)(Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2);
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(il2cpp_codegen_get_reverse_pinvoke_function_ptr(__this));
	// Native function invocation
	float returnValue = il2cppPInvokeFunc(___p10, ___p21, ___p32);

	return returnValue;
}
// System.Void tripolygon.UModeler.MathUtil/Vector2_3InputFloatReturnDelegate::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Vector2_3InputFloatReturnDelegate__ctor_m2F23F6BFF809D35A1524776F161AC77F89249843 (Vector2_3InputFloatReturnDelegate_tDF554F3258BCA6D8F1BEC540B850729000D15F46* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) 
{
	__this->___method_ptr_0 = il2cpp_codegen_get_virtual_call_method_pointer((RuntimeMethod*)___method1);
	__this->___method_3 = ___method1;
	__this->___m_target_2 = ___object0;
	Il2CppCodeGenWriteBarrier((void**)(&__this->___m_target_2), (void*)___object0);
	int parameterCount = il2cpp_codegen_method_parameter_count((RuntimeMethod*)___method1);
	__this->___method_code_6 = (intptr_t)__this;
	if (MethodIsStatic((RuntimeMethod*)___method1))
	{
		bool isOpen = parameterCount == 3;
		if (il2cpp_codegen_call_method_via_invoker((RuntimeMethod*)___method1))
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&Vector2_3InputFloatReturnDelegate_Invoke_m41B4E1FCA6B3F0AC839C7E15F7030FBDB6B46D36_OpenStaticInvoker;
			else
				__this->___invoke_impl_1 = (intptr_t)&Vector2_3InputFloatReturnDelegate_Invoke_m41B4E1FCA6B3F0AC839C7E15F7030FBDB6B46D36_ClosedStaticInvoker;
		else
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&Vector2_3InputFloatReturnDelegate_Invoke_m41B4E1FCA6B3F0AC839C7E15F7030FBDB6B46D36_OpenStatic;
			else
				{
					__this->___invoke_impl_1 = (intptr_t)__this->___method_ptr_0;
					__this->___method_code_6 = (intptr_t)__this->___m_target_2;
				}
	}
	else
	{
		if (___object0 == NULL)
			il2cpp_codegen_raise_exception(il2cpp_codegen_get_argument_exception(NULL, "Delegate to an instance method cannot have null 'this'."), NULL);
		__this->___invoke_impl_1 = (intptr_t)__this->___method_ptr_0;
		__this->___method_code_6 = (intptr_t)__this->___m_target_2;
	}
	__this->___extra_arg_5 = (intptr_t)&Vector2_3InputFloatReturnDelegate_Invoke_m41B4E1FCA6B3F0AC839C7E15F7030FBDB6B46D36_Multicast;
}
// System.Single tripolygon.UModeler.MathUtil/Vector2_3InputFloatReturnDelegate::Invoke(UnityEngine.Vector2,UnityEngine.Vector2,UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Vector2_3InputFloatReturnDelegate_Invoke_m41B4E1FCA6B3F0AC839C7E15F7030FBDB6B46D36 (Vector2_3InputFloatReturnDelegate_tDF554F3258BCA6D8F1BEC540B850729000D15F46* __this, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___p10, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___p21, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___p32, const RuntimeMethod* method) 
{
	typedef float (*FunctionPointerType) (RuntimeObject*, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___p10, ___p21, ___p32, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
// System.IAsyncResult tripolygon.UModeler.MathUtil/Vector2_3InputFloatReturnDelegate::BeginInvoke(UnityEngine.Vector2,UnityEngine.Vector2,UnityEngine.Vector3,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Vector2_3InputFloatReturnDelegate_BeginInvoke_mA21C1EDB0B90BE6F4123DD3230E7B750783487BB (Vector2_3InputFloatReturnDelegate_tDF554F3258BCA6D8F1BEC540B850729000D15F46* __this, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___p10, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___p21, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___p32, AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C* ___callback3, RuntimeObject* ___object4, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	void *__d_args[4] = {0};
	__d_args[0] = Box(Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_il2cpp_TypeInfo_var, &___p10);
	__d_args[1] = Box(Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_il2cpp_TypeInfo_var, &___p21);
	__d_args[2] = Box(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var, &___p32);
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback3, (RuntimeObject*)___object4);
}
// System.Single tripolygon.UModeler.MathUtil/Vector2_3InputFloatReturnDelegate::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Vector2_3InputFloatReturnDelegate_EndInvoke_mAFE13EC6D5A02994414413D2F4152CDD1C508DA8 (Vector2_3InputFloatReturnDelegate_tDF554F3258BCA6D8F1BEC540B850729000D15F46* __this, RuntimeObject* ___result0, const RuntimeMethod* method) 
{
	RuntimeObject *__result = il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result0, 0);
	return *(float*)UnBox ((RuntimeObject*)__result);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void tripolygon.UModeler.MathUtil/<>c::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__cctor_m8E6AF42CC07A3C9492C4B47CF50B632AC5C58029 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_t0AE2255F25D8D7ACA16A285DCF06E69F0D3951D6_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CU3Ec_t0AE2255F25D8D7ACA16A285DCF06E69F0D3951D6* L_0 = (U3CU3Ec_t0AE2255F25D8D7ACA16A285DCF06E69F0D3951D6*)il2cpp_codegen_object_new(U3CU3Ec_t0AE2255F25D8D7ACA16A285DCF06E69F0D3951D6_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		U3CU3Ec__ctor_m6FD7C1B8437D856791FBDB4C405D2424AC8D5475(L_0, NULL);
		((U3CU3Ec_t0AE2255F25D8D7ACA16A285DCF06E69F0D3951D6_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t0AE2255F25D8D7ACA16A285DCF06E69F0D3951D6_il2cpp_TypeInfo_var))->___U3CU3E9_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&((U3CU3Ec_t0AE2255F25D8D7ACA16A285DCF06E69F0D3951D6_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t0AE2255F25D8D7ACA16A285DCF06E69F0D3951D6_il2cpp_TypeInfo_var))->___U3CU3E9_0), (void*)L_0);
		return;
	}
}
// System.Void tripolygon.UModeler.MathUtil/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_m6FD7C1B8437D856791FBDB4C405D2424AC8D5475 (U3CU3Ec_t0AE2255F25D8D7ACA16A285DCF06E69F0D3951D6* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
// System.Single tripolygon.UModeler.MathUtil/<>c::<PointInTriangle>b__12_0(UnityEngine.Vector2,UnityEngine.Vector2,UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float U3CU3Ec_U3CPointInTriangleU3Eb__12_0_mF4B51D9BB63A8D99E32D00D6587D9D8B22F623DF (U3CU3Ec_t0AE2255F25D8D7ACA16A285DCF06E69F0D3951D6* __this, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___p10, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___p21, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___p32, const RuntimeMethod* method) 
{
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_0 = ___p10;
		float L_1 = L_0.___x_0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2 = ___p32;
		float L_3 = L_2.___x_2;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_4 = ___p21;
		float L_5 = L_4.___y_1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6 = ___p32;
		float L_7 = L_6.___y_3;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_8 = ___p21;
		float L_9 = L_8.___x_0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10 = ___p32;
		float L_11 = L_10.___x_2;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_12 = ___p10;
		float L_13 = L_12.___y_1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_14 = ___p32;
		float L_15 = L_14.___y_3;
		return ((float)il2cpp_codegen_subtract(((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_subtract(L_1, L_3)), ((float)il2cpp_codegen_subtract(L_5, L_7)))), ((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_subtract(L_9, L_11)), ((float)il2cpp_codegen_subtract(L_13, L_15))))));
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
// System.Void tripolygon.UModeler.Matrix4x4Ex::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Matrix4x4Ex__ctor_mA587F10750A83633ACD2B566FF1AE3B5638A195E (Matrix4x4Ex_t3EFC7AD9C36AB8195F5B6B29A27B518F63F24553* __this, const RuntimeMethod* method) 
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
// System.Boolean tripolygon.UModeler.Util::IsNullPolygon(tripolygon.UModeler.SimplePolygon)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Util_IsNullPolygon_m77537F6523AEA00D1601160DB2FEB46816350A4C (SimplePolygon_t5F51D3D1F485B3C377E0E40766EBFD86BA9D9385* ___polygon0, const RuntimeMethod* method) 
{
	{
		SimplePolygon_t5F51D3D1F485B3C377E0E40766EBFD86BA9D9385* L_0 = ___polygon0;
		return (bool)((((RuntimeObject*)(SimplePolygon_t5F51D3D1F485B3C377E0E40766EBFD86BA9D9385*)L_0) == ((RuntimeObject*)(RuntimeObject*)NULL))? 1 : 0);
	}
}
// System.Boolean tripolygon.UModeler.Util::IsOpenPolygon(tripolygon.UModeler.SimplePolygon)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Util_IsOpenPolygon_m758DFF68B201803FF6685B15AE9513737887734F (SimplePolygon_t5F51D3D1F485B3C377E0E40766EBFD86BA9D9385* ___polygon0, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	IndexPair_t6886ED92041E20F053A60B5DE14E4710BB42A376* V_1 = NULL;
	{
		V_0 = 0;
		goto IL_0024;
	}

IL_0004:
	{
		SimplePolygon_t5F51D3D1F485B3C377E0E40766EBFD86BA9D9385* L_0 = ___polygon0;
		int32_t L_1 = V_0;
		NullCheck(L_0);
		IndexPair_t6886ED92041E20F053A60B5DE14E4710BB42A376* L_2;
		L_2 = SimplePolygon_GetEdge_m990E077DB64E20FDEF9AB4D2C89A255120C8D38B(L_0, L_1, NULL);
		V_1 = L_2;
		SimplePolygon_t5F51D3D1F485B3C377E0E40766EBFD86BA9D9385* L_3 = ___polygon0;
		IndexPair_t6886ED92041E20F053A60B5DE14E4710BB42A376* L_4 = V_1;
		NullCheck(L_3);
		List_1_t77E791A5D872DCB1195678FCECC444A825292814* L_5;
		L_5 = SimplePolygon_FindPrevEdges_mB62BB11046AEA889F075197B885E6AF00D52B01B(L_3, L_4, NULL);
		if (!L_5)
		{
			goto IL_001e;
		}
	}
	{
		SimplePolygon_t5F51D3D1F485B3C377E0E40766EBFD86BA9D9385* L_6 = ___polygon0;
		IndexPair_t6886ED92041E20F053A60B5DE14E4710BB42A376* L_7 = V_1;
		NullCheck(L_6);
		List_1_t77E791A5D872DCB1195678FCECC444A825292814* L_8;
		L_8 = SimplePolygon_FindNextEdges_m2F8B9375D5A2002CA6A695206791CACB87155F03(L_6, L_7, NULL);
		if (L_8)
		{
			goto IL_0020;
		}
	}

IL_001e:
	{
		return (bool)1;
	}

IL_0020:
	{
		int32_t L_9 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_9, 1));
	}

IL_0024:
	{
		int32_t L_10 = V_0;
		SimplePolygon_t5F51D3D1F485B3C377E0E40766EBFD86BA9D9385* L_11 = ___polygon0;
		NullCheck(L_11);
		int32_t L_12;
		L_12 = SimplePolygon_GetEdgeCount_m45A95814D089F716DBFAB1D7D8975835751E4295(L_11, NULL);
		if ((((int32_t)L_10) < ((int32_t)L_12)))
		{
			goto IL_0004;
		}
	}
	{
		return (bool)0;
	}
}
// tripolygon.UModeler.SimplePolygon tripolygon.UModeler.Util::FindPolygonInEdMesh(System.UInt64,System.Int32,tripolygon.UModeler.EditableMesh)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR SimplePolygon_t5F51D3D1F485B3C377E0E40766EBFD86BA9D9385* Util_FindPolygonInEdMesh_mAE6541D4D1597360A7BCBA7253F012ABDF579697 (uint64_t ___polygonID0, int32_t ___shelf1, EditableMesh_tF419912423C538859FC4EDB1F6ABD7314E01A476* ___edMesh2, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ShelfHolder_tFDAAF16135FA93DB3AD68D57913C99082A757058_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UMContext_tD5DABA4A108180D95D3BDB86E9A4669F51289AFB_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	ShelfHolder_tFDAAF16135FA93DB3AD68D57913C99082A757058* V_0 = NULL;
	int32_t V_1 = 0;
	SimplePolygon_t5F51D3D1F485B3C377E0E40766EBFD86BA9D9385* V_2 = NULL;
	SimplePolygon_t5F51D3D1F485B3C377E0E40766EBFD86BA9D9385* V_3 = NULL;
	{
		EditableMesh_tF419912423C538859FC4EDB1F6ABD7314E01A476* L_0 = ___edMesh2;
		if (L_0)
		{
			goto IL_000f;
		}
	}
	{
		UModeler_tF29E9161DE3331F85E86886244AC15FEC514C577* L_1 = ((UMContext_tD5DABA4A108180D95D3BDB86E9A4669F51289AFB_StaticFields*)il2cpp_codegen_static_fields_for(UMContext_tD5DABA4A108180D95D3BDB86E9A4669F51289AFB_il2cpp_TypeInfo_var))->___activeModeler_0;
		NullCheck(L_1);
		EditableMesh_tF419912423C538859FC4EDB1F6ABD7314E01A476* L_2;
		L_2 = UModeler_get_editableMesh_m61B3969B0C185AA5A9A0BAA98CDF4B54D4527776(L_1, NULL);
		___edMesh2 = L_2;
	}

IL_000f:
	{
		EditableMesh_tF419912423C538859FC4EDB1F6ABD7314E01A476* L_3 = ___edMesh2;
		ShelfHolder_tFDAAF16135FA93DB3AD68D57913C99082A757058* L_4 = (ShelfHolder_tFDAAF16135FA93DB3AD68D57913C99082A757058*)il2cpp_codegen_object_new(ShelfHolder_tFDAAF16135FA93DB3AD68D57913C99082A757058_il2cpp_TypeInfo_var);
		NullCheck(L_4);
		ShelfHolder__ctor_mCAD01DBBEC2780D16B25E9B4034F9C88A5221ADF(L_4, L_3, NULL);
		V_0 = L_4;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0042:
			{// begin finally (depth: 1)
				{
					ShelfHolder_tFDAAF16135FA93DB3AD68D57913C99082A757058* L_5 = V_0;
					if (!L_5)
					{
						goto IL_004b;
					}
				}
				{
					ShelfHolder_tFDAAF16135FA93DB3AD68D57913C99082A757058* L_6 = V_0;
					NullCheck(L_6);
					InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, L_6);
				}

IL_004b:
				{
					return;
				}
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				V_1 = 0;
				goto IL_003c_1;
			}

IL_001a_1:
			{
				int32_t L_7 = ___shelf1;
				if ((((int32_t)L_7) == ((int32_t)(-1))))
				{
					goto IL_0022_1;
				}
			}
			{
				int32_t L_8 = ___shelf1;
				int32_t L_9 = V_1;
				if ((!(((uint32_t)L_8) == ((uint32_t)L_9))))
				{
					goto IL_0038_1;
				}
			}

IL_0022_1:
			{
				EditableMesh_tF419912423C538859FC4EDB1F6ABD7314E01A476* L_10 = ___edMesh2;
				int32_t L_11 = V_1;
				NullCheck(L_10);
				EditableMesh_set_shelf_m537118F79630165B0C68F530226AED1625A9EC21_inline(L_10, L_11, NULL);
				EditableMesh_tF419912423C538859FC4EDB1F6ABD7314E01A476* L_12 = ___edMesh2;
				uint64_t L_13 = ___polygonID0;
				NullCheck(L_12);
				SimplePolygon_t5F51D3D1F485B3C377E0E40766EBFD86BA9D9385* L_14;
				L_14 = EditableMesh_FindPolygon_m8436DDE6CDA98DC1BDF39486FF5763543249C5FD(L_12, L_13, NULL);
				V_2 = L_14;
				SimplePolygon_t5F51D3D1F485B3C377E0E40766EBFD86BA9D9385* L_15 = V_2;
				if (!L_15)
				{
					goto IL_0038_1;
				}
			}
			{
				SimplePolygon_t5F51D3D1F485B3C377E0E40766EBFD86BA9D9385* L_16 = V_2;
				V_3 = L_16;
				goto IL_004e;
			}

IL_0038_1:
			{
				int32_t L_17 = V_1;
				V_1 = ((int32_t)il2cpp_codegen_add(L_17, 1));
			}

IL_003c_1:
			{
				int32_t L_18 = V_1;
				if ((((int32_t)L_18) < ((int32_t)2)))
				{
					goto IL_001a_1;
				}
			}
			{
				goto IL_004c;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_004c:
	{
		return (SimplePolygon_t5F51D3D1F485B3C377E0E40766EBFD86BA9D9385*)NULL;
	}

IL_004e:
	{
		SimplePolygon_t5F51D3D1F485B3C377E0E40766EBFD86BA9D9385* L_19 = V_3;
		return L_19;
	}
}
// tripolygon.UModeler.PlaneEx tripolygon.UModeler.Util::FindBestPlane(tripolygon.UModeler.EditableMesh,UnityEngine.Vector3,UnityEngine.Vector3,tripolygon.UModeler.PlaneEx,tripolygon.UModeler.PlaneEx,tripolygon.UModeler.SimplePolygon,tripolygon.UModeler.SimplePolygon)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR PlaneEx_t5512A7D4BF235ED6ED6F1F09A1621A1DCB31509D* Util_FindBestPlane_mB4704D2E68BEB550AD802BFAF34B20748B086471 (EditableMesh_tF419912423C538859FC4EDB1F6ABD7314E01A476* ___editableMesh0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___p01, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___p12, PlaneEx_t5512A7D4BF235ED6ED6F1F09A1621A1DCB31509D* ___plane03, PlaneEx_t5512A7D4BF235ED6ED6F1F09A1621A1DCB31509D* ___plane14, SimplePolygon_t5F51D3D1F485B3C377E0E40766EBFD86BA9D9385* ___polygon05, SimplePolygon_t5F51D3D1F485B3C377E0E40766EBFD86BA9D9385* ___polygon16, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Util_tBEDFF10A323370DC03D5CAB4FEF2AB8EFEB0D7D2_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		PlaneEx_t5512A7D4BF235ED6ED6F1F09A1621A1DCB31509D* L_0 = ___plane03;
		if (!L_0)
		{
			goto IL_0009;
		}
	}
	{
		PlaneEx_t5512A7D4BF235ED6ED6F1F09A1621A1DCB31509D* L_1 = ___plane14;
		if (L_1)
		{
			goto IL_0009;
		}
	}
	{
		PlaneEx_t5512A7D4BF235ED6ED6F1F09A1621A1DCB31509D* L_2 = ___plane03;
		return L_2;
	}

IL_0009:
	{
		PlaneEx_t5512A7D4BF235ED6ED6F1F09A1621A1DCB31509D* L_3 = ___plane03;
		if (L_3)
		{
			goto IL_0013;
		}
	}
	{
		PlaneEx_t5512A7D4BF235ED6ED6F1F09A1621A1DCB31509D* L_4 = ___plane14;
		if (!L_4)
		{
			goto IL_0013;
		}
	}
	{
		PlaneEx_t5512A7D4BF235ED6ED6F1F09A1621A1DCB31509D* L_5 = ___plane14;
		return L_5;
	}

IL_0013:
	{
		PlaneEx_t5512A7D4BF235ED6ED6F1F09A1621A1DCB31509D* L_6 = ___plane03;
		if (L_6)
		{
			goto IL_001c;
		}
	}
	{
		PlaneEx_t5512A7D4BF235ED6ED6F1F09A1621A1DCB31509D* L_7 = ___plane14;
		if (L_7)
		{
			goto IL_001c;
		}
	}
	{
		return (PlaneEx_t5512A7D4BF235ED6ED6F1F09A1621A1DCB31509D*)NULL;
	}

IL_001c:
	{
		PlaneEx_t5512A7D4BF235ED6ED6F1F09A1621A1DCB31509D* L_8 = ___plane03;
		PlaneEx_t5512A7D4BF235ED6ED6F1F09A1621A1DCB31509D* L_9 = ___plane14;
		NullCheck(L_8);
		bool L_10;
		L_10 = PlaneEx_IsEquivalent_m481649C10F4115B92F9538B7AA14A45DF9C6A1A1(L_8, L_9, (9.99999975E-05f), NULL);
		if (!L_10)
		{
			goto IL_002d;
		}
	}
	{
		PlaneEx_t5512A7D4BF235ED6ED6F1F09A1621A1DCB31509D* L_11 = ___plane03;
		return L_11;
	}

IL_002d:
	{
		PlaneEx_t5512A7D4BF235ED6ED6F1F09A1621A1DCB31509D* L_12 = ___plane03;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_13 = ___p01;
		NullCheck(L_12);
		float L_14;
		L_14 = PlaneEx_CalcDistanceToPoint_m72481C5E65ADBF9FBDF999CF3188D9725D7D2F16(L_12, L_13, NULL);
		float L_15;
		L_15 = fabsf(L_14);
		if ((!(((float)L_15) < ((float)(9.99999975E-05f)))))
		{
			goto IL_006f;
		}
	}
	{
		PlaneEx_t5512A7D4BF235ED6ED6F1F09A1621A1DCB31509D* L_16 = ___plane03;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_17 = ___p12;
		NullCheck(L_16);
		float L_18;
		L_18 = PlaneEx_CalcDistanceToPoint_m72481C5E65ADBF9FBDF999CF3188D9725D7D2F16(L_16, L_17, NULL);
		float L_19;
		L_19 = fabsf(L_18);
		if ((!(((float)L_19) < ((float)(9.99999975E-05f)))))
		{
			goto IL_006f;
		}
	}
	{
		SimplePolygon_t5F51D3D1F485B3C377E0E40766EBFD86BA9D9385* L_20 = ___polygon05;
		if (!L_20)
		{
			goto IL_006f;
		}
	}
	{
		SimplePolygon_t5F51D3D1F485B3C377E0E40766EBFD86BA9D9385* L_21 = ___polygon05;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_22 = ___p01;
		NullCheck(L_21);
		bool L_23;
		L_23 = SimplePolygon_IsPosInside_m2A84207068B1B24E0A9B48D4576EE8FFE793B97E(L_21, L_22, (bool)1, NULL);
		if (!L_23)
		{
			goto IL_006f;
		}
	}
	{
		SimplePolygon_t5F51D3D1F485B3C377E0E40766EBFD86BA9D9385* L_24 = ___polygon05;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_25 = ___p12;
		NullCheck(L_24);
		bool L_26;
		L_26 = SimplePolygon_IsPosInside_m2A84207068B1B24E0A9B48D4576EE8FFE793B97E(L_24, L_25, (bool)1, NULL);
		if (!L_26)
		{
			goto IL_006f;
		}
	}
	{
		PlaneEx_t5512A7D4BF235ED6ED6F1F09A1621A1DCB31509D* L_27 = ___plane03;
		return L_27;
	}

IL_006f:
	{
		PlaneEx_t5512A7D4BF235ED6ED6F1F09A1621A1DCB31509D* L_28 = ___plane14;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_29 = ___p01;
		NullCheck(L_28);
		float L_30;
		L_30 = PlaneEx_CalcDistanceToPoint_m72481C5E65ADBF9FBDF999CF3188D9725D7D2F16(L_28, L_29, NULL);
		float L_31;
		L_31 = fabsf(L_30);
		if ((!(((float)L_31) < ((float)(9.99999975E-05f)))))
		{
			goto IL_00b4;
		}
	}
	{
		PlaneEx_t5512A7D4BF235ED6ED6F1F09A1621A1DCB31509D* L_32 = ___plane14;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_33 = ___p12;
		NullCheck(L_32);
		float L_34;
		L_34 = PlaneEx_CalcDistanceToPoint_m72481C5E65ADBF9FBDF999CF3188D9725D7D2F16(L_32, L_33, NULL);
		float L_35;
		L_35 = fabsf(L_34);
		if ((!(((float)L_35) < ((float)(9.99999975E-05f)))))
		{
			goto IL_00b4;
		}
	}
	{
		SimplePolygon_t5F51D3D1F485B3C377E0E40766EBFD86BA9D9385* L_36 = ___polygon16;
		if (!L_36)
		{
			goto IL_00b4;
		}
	}
	{
		SimplePolygon_t5F51D3D1F485B3C377E0E40766EBFD86BA9D9385* L_37 = ___polygon16;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_38 = ___p01;
		NullCheck(L_37);
		bool L_39;
		L_39 = SimplePolygon_IsPosInside_m2A84207068B1B24E0A9B48D4576EE8FFE793B97E(L_37, L_38, (bool)1, NULL);
		if (!L_39)
		{
			goto IL_00b4;
		}
	}
	{
		SimplePolygon_t5F51D3D1F485B3C377E0E40766EBFD86BA9D9385* L_40 = ___polygon16;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_41 = ___p12;
		NullCheck(L_40);
		bool L_42;
		L_42 = SimplePolygon_IsPosInside_m2A84207068B1B24E0A9B48D4576EE8FFE793B97E(L_40, L_41, (bool)1, NULL);
		if (!L_42)
		{
			goto IL_00b4;
		}
	}
	{
		PlaneEx_t5512A7D4BF235ED6ED6F1F09A1621A1DCB31509D* L_43 = ___plane14;
		return L_43;
	}

IL_00b4:
	{
		EditableMesh_tF419912423C538859FC4EDB1F6ABD7314E01A476* L_44 = ___editableMesh0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_45 = ___p01;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_46 = ___p12;
		il2cpp_codegen_runtime_class_init_inline(Util_tBEDFF10A323370DC03D5CAB4FEF2AB8EFEB0D7D2_il2cpp_TypeInfo_var);
		PlaneEx_t5512A7D4BF235ED6ED6F1F09A1621A1DCB31509D* L_47;
		L_47 = Util_FindBestPlane_m239AC100484C660846057EBB3267A23594FEEC43(L_44, L_45, L_46, NULL);
		return L_47;
	}
}
// tripolygon.UModeler.PlaneEx tripolygon.UModeler.Util::FindBestPlane(tripolygon.UModeler.EditableMesh,UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR PlaneEx_t5512A7D4BF235ED6ED6F1F09A1621A1DCB31509D* Util_FindBestPlane_m239AC100484C660846057EBB3267A23594FEEC43 (EditableMesh_tF419912423C538859FC4EDB1F6ABD7314E01A476* ___editableMesh0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___p01, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___p12, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Edge_t61E163F7AA3BA416F72B1EDF0DD966F41041D4FF_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	PlaneEx_t5512A7D4BF235ED6ED6F1F09A1621A1DCB31509D* V_0 = NULL;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_1;
	memset((&V_1), 0, sizeof(V_1));
	Edge_t61E163F7AA3BA416F72B1EDF0DD966F41041D4FF* V_2 = NULL;
	Edge_t61E163F7AA3BA416F72B1EDF0DD966F41041D4FF* V_3 = NULL;
	int32_t V_4 = 0;
	SimplePolygon_t5F51D3D1F485B3C377E0E40766EBFD86BA9D9385* V_5 = NULL;
	{
		V_0 = (PlaneEx_t5512A7D4BF235ED6ED6F1F09A1621A1DCB31509D*)NULL;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___p01;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1 = ___p12;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2;
		L_2 = Vector3_op_Addition_m78C0EC70CB66E8DCAC225743D82B268DAEE92067_inline(L_0, L_1, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3;
		L_3 = Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline(L_2, (0.5f), NULL);
		V_1 = L_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4 = ___p01;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_5 = ___p12;
		Edge_t61E163F7AA3BA416F72B1EDF0DD966F41041D4FF* L_6 = (Edge_t61E163F7AA3BA416F72B1EDF0DD966F41041D4FF*)il2cpp_codegen_object_new(Edge_t61E163F7AA3BA416F72B1EDF0DD966F41041D4FF_il2cpp_TypeInfo_var);
		NullCheck(L_6);
		Edge__ctor_m247792235F4220D03FA76DCC57E527491595869D(L_6, L_4, L_5, NULL);
		V_2 = L_6;
		Edge_t61E163F7AA3BA416F72B1EDF0DD966F41041D4FF* L_7 = V_2;
		NullCheck(L_7);
		Edge_t61E163F7AA3BA416F72B1EDF0DD966F41041D4FF* L_8;
		L_8 = VirtualFuncInvoker0< Edge_t61E163F7AA3BA416F72B1EDF0DD966F41041D4FF* >::Invoke(10 /* tripolygon.UModeler.Edge tripolygon.UModeler.Edge::Clone() */, L_7);
		NullCheck(L_8);
		Edge_t61E163F7AA3BA416F72B1EDF0DD966F41041D4FF* L_9;
		L_9 = VirtualFuncInvoker0< Edge_t61E163F7AA3BA416F72B1EDF0DD966F41041D4FF* >::Invoke(9 /* tripolygon.UModeler.Edge tripolygon.UModeler.Edge::Invert() */, L_8);
		V_3 = L_9;
		V_4 = 0;
		goto IL_00a2;
	}

IL_002d:
	{
		EditableMesh_tF419912423C538859FC4EDB1F6ABD7314E01A476* L_10 = ___editableMesh0;
		int32_t L_11 = V_4;
		NullCheck(L_10);
		SimplePolygon_t5F51D3D1F485B3C377E0E40766EBFD86BA9D9385* L_12;
		L_12 = EditableMesh_GetPolygon_mD4F6AF94D277FD14E96037738A1FF51B220309F2(L_10, L_11, NULL);
		V_5 = L_12;
		SimplePolygon_t5F51D3D1F485B3C377E0E40766EBFD86BA9D9385* L_13 = V_5;
		NullCheck(L_13);
		PlaneEx_t5512A7D4BF235ED6ED6F1F09A1621A1DCB31509D* L_14;
		L_14 = SimplePolygon_get_plane_mF42E1C3275AB8ED168516709C333F0875315D92D(L_13, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_15 = ___p01;
		NullCheck(L_14);
		float L_16;
		L_16 = PlaneEx_CalcDistanceToPoint_m72481C5E65ADBF9FBDF999CF3188D9725D7D2F16(L_14, L_15, NULL);
		float L_17;
		L_17 = fabsf(L_16);
		if ((!(((float)L_17) < ((float)(9.99999975E-05f)))))
		{
			goto IL_009c;
		}
	}
	{
		SimplePolygon_t5F51D3D1F485B3C377E0E40766EBFD86BA9D9385* L_18 = V_5;
		NullCheck(L_18);
		PlaneEx_t5512A7D4BF235ED6ED6F1F09A1621A1DCB31509D* L_19;
		L_19 = SimplePolygon_get_plane_mF42E1C3275AB8ED168516709C333F0875315D92D(L_18, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_20 = ___p12;
		NullCheck(L_19);
		float L_21;
		L_21 = PlaneEx_CalcDistanceToPoint_m72481C5E65ADBF9FBDF999CF3188D9725D7D2F16(L_19, L_20, NULL);
		float L_22;
		L_22 = fabsf(L_21);
		if ((!(((float)L_22) < ((float)(9.99999975E-05f)))))
		{
			goto IL_009c;
		}
	}
	{
		SimplePolygon_t5F51D3D1F485B3C377E0E40766EBFD86BA9D9385* L_23 = V_5;
		Edge_t61E163F7AA3BA416F72B1EDF0DD966F41041D4FF* L_24 = V_2;
		NullCheck(L_23);
		bool L_25;
		L_25 = SimplePolygon_ContainsEdge_m57999509C1F7EDA82C88668902A2FD4981B15A71(L_23, L_24, NULL);
		if (L_25)
		{
			goto IL_008c;
		}
	}
	{
		SimplePolygon_t5F51D3D1F485B3C377E0E40766EBFD86BA9D9385* L_26 = V_5;
		Edge_t61E163F7AA3BA416F72B1EDF0DD966F41041D4FF* L_27 = V_3;
		NullCheck(L_26);
		bool L_28;
		L_28 = SimplePolygon_ContainsEdge_m57999509C1F7EDA82C88668902A2FD4981B15A71(L_26, L_27, NULL);
		if (L_28)
		{
			goto IL_008c;
		}
	}
	{
		SimplePolygon_t5F51D3D1F485B3C377E0E40766EBFD86BA9D9385* L_29 = V_5;
		NullCheck(L_29);
		BSPTree2D_t9E8EF14D272A60027A636E897210797581B95327* L_30;
		L_30 = SimplePolygon_get_bsptree_m23D0CD8F1E46D44ECD88C8609E1574BB9D6F2728(L_29, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_31 = V_1;
		NullCheck(L_30);
		bool L_32;
		L_32 = BSPTree2D_IsInside_m650655EAF3F1AE9AF272D0D138B9817B1DEA5E03(L_30, L_31, NULL);
		if (!L_32)
		{
			goto IL_0094;
		}
	}

IL_008c:
	{
		SimplePolygon_t5F51D3D1F485B3C377E0E40766EBFD86BA9D9385* L_33 = V_5;
		NullCheck(L_33);
		PlaneEx_t5512A7D4BF235ED6ED6F1F09A1621A1DCB31509D* L_34;
		L_34 = SimplePolygon_get_plane_mF42E1C3275AB8ED168516709C333F0875315D92D(L_33, NULL);
		return L_34;
	}

IL_0094:
	{
		SimplePolygon_t5F51D3D1F485B3C377E0E40766EBFD86BA9D9385* L_35 = V_5;
		NullCheck(L_35);
		PlaneEx_t5512A7D4BF235ED6ED6F1F09A1621A1DCB31509D* L_36;
		L_36 = SimplePolygon_get_plane_mF42E1C3275AB8ED168516709C333F0875315D92D(L_35, NULL);
		V_0 = L_36;
	}

IL_009c:
	{
		int32_t L_37 = V_4;
		V_4 = ((int32_t)il2cpp_codegen_add(L_37, 1));
	}

IL_00a2:
	{
		int32_t L_38 = V_4;
		EditableMesh_tF419912423C538859FC4EDB1F6ABD7314E01A476* L_39 = ___editableMesh0;
		NullCheck(L_39);
		int32_t L_40;
		L_40 = EditableMesh_GetPolygonCount_m8E8542BEAA9C806A06A4144B5CFF409C39AC7494(L_39, (-1), NULL);
		if ((((int32_t)L_38) < ((int32_t)L_40)))
		{
			goto IL_002d;
		}
	}
	{
		PlaneEx_t5512A7D4BF235ED6ED6F1F09A1621A1DCB31509D* L_41 = V_0;
		return L_41;
	}
}
// tripolygon.UModeler.SimplePolygon tripolygon.UModeler.Util::FindPolygonOfBestPlane(tripolygon.UModeler.EditableMesh,UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR SimplePolygon_t5F51D3D1F485B3C377E0E40766EBFD86BA9D9385* Util_FindPolygonOfBestPlane_m02D27A359B941BEBF008F7644B4CEF6C443123E4 (EditableMesh_tF419912423C538859FC4EDB1F6ABD7314E01A476* ___editableMesh0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___p01, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___p12, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Edge_t61E163F7AA3BA416F72B1EDF0DD966F41041D4FF_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	Edge_t61E163F7AA3BA416F72B1EDF0DD966F41041D4FF* V_1 = NULL;
	Edge_t61E163F7AA3BA416F72B1EDF0DD966F41041D4FF* V_2 = NULL;
	int32_t V_3 = 0;
	SimplePolygon_t5F51D3D1F485B3C377E0E40766EBFD86BA9D9385* V_4 = NULL;
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___p01;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1 = ___p12;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2;
		L_2 = Vector3_op_Addition_m78C0EC70CB66E8DCAC225743D82B268DAEE92067_inline(L_0, L_1, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3;
		L_3 = Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline(L_2, (0.5f), NULL);
		V_0 = L_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4 = ___p01;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_5 = ___p12;
		Edge_t61E163F7AA3BA416F72B1EDF0DD966F41041D4FF* L_6 = (Edge_t61E163F7AA3BA416F72B1EDF0DD966F41041D4FF*)il2cpp_codegen_object_new(Edge_t61E163F7AA3BA416F72B1EDF0DD966F41041D4FF_il2cpp_TypeInfo_var);
		NullCheck(L_6);
		Edge__ctor_m247792235F4220D03FA76DCC57E527491595869D(L_6, L_4, L_5, NULL);
		V_1 = L_6;
		Edge_t61E163F7AA3BA416F72B1EDF0DD966F41041D4FF* L_7 = V_1;
		NullCheck(L_7);
		Edge_t61E163F7AA3BA416F72B1EDF0DD966F41041D4FF* L_8;
		L_8 = VirtualFuncInvoker0< Edge_t61E163F7AA3BA416F72B1EDF0DD966F41041D4FF* >::Invoke(10 /* tripolygon.UModeler.Edge tripolygon.UModeler.Edge::Clone() */, L_7);
		NullCheck(L_8);
		Edge_t61E163F7AA3BA416F72B1EDF0DD966F41041D4FF* L_9;
		L_9 = VirtualFuncInvoker0< Edge_t61E163F7AA3BA416F72B1EDF0DD966F41041D4FF* >::Invoke(9 /* tripolygon.UModeler.Edge tripolygon.UModeler.Edge::Invert() */, L_8);
		V_2 = L_9;
		V_3 = 0;
		goto IL_008f;
	}

IL_002a:
	{
		EditableMesh_tF419912423C538859FC4EDB1F6ABD7314E01A476* L_10 = ___editableMesh0;
		int32_t L_11 = V_3;
		NullCheck(L_10);
		SimplePolygon_t5F51D3D1F485B3C377E0E40766EBFD86BA9D9385* L_12;
		L_12 = EditableMesh_GetPolygon_mD4F6AF94D277FD14E96037738A1FF51B220309F2(L_10, L_11, NULL);
		V_4 = L_12;
		SimplePolygon_t5F51D3D1F485B3C377E0E40766EBFD86BA9D9385* L_13 = V_4;
		NullCheck(L_13);
		PlaneEx_t5512A7D4BF235ED6ED6F1F09A1621A1DCB31509D* L_14;
		L_14 = SimplePolygon_get_plane_mF42E1C3275AB8ED168516709C333F0875315D92D(L_13, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_15 = ___p01;
		NullCheck(L_14);
		float L_16;
		L_16 = PlaneEx_CalcDistanceToPoint_m72481C5E65ADBF9FBDF999CF3188D9725D7D2F16(L_14, L_15, NULL);
		float L_17;
		L_17 = fabsf(L_16);
		if ((!(((float)L_17) < ((float)(9.99999975E-05f)))))
		{
			goto IL_008b;
		}
	}
	{
		SimplePolygon_t5F51D3D1F485B3C377E0E40766EBFD86BA9D9385* L_18 = V_4;
		NullCheck(L_18);
		PlaneEx_t5512A7D4BF235ED6ED6F1F09A1621A1DCB31509D* L_19;
		L_19 = SimplePolygon_get_plane_mF42E1C3275AB8ED168516709C333F0875315D92D(L_18, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_20 = ___p12;
		NullCheck(L_19);
		float L_21;
		L_21 = PlaneEx_CalcDistanceToPoint_m72481C5E65ADBF9FBDF999CF3188D9725D7D2F16(L_19, L_20, NULL);
		float L_22;
		L_22 = fabsf(L_21);
		if ((!(((float)L_22) < ((float)(9.99999975E-05f)))))
		{
			goto IL_008b;
		}
	}
	{
		SimplePolygon_t5F51D3D1F485B3C377E0E40766EBFD86BA9D9385* L_23 = V_4;
		Edge_t61E163F7AA3BA416F72B1EDF0DD966F41041D4FF* L_24 = V_1;
		NullCheck(L_23);
		bool L_25;
		L_25 = SimplePolygon_ContainsEdge_m57999509C1F7EDA82C88668902A2FD4981B15A71(L_23, L_24, NULL);
		if (L_25)
		{
			goto IL_0088;
		}
	}
	{
		SimplePolygon_t5F51D3D1F485B3C377E0E40766EBFD86BA9D9385* L_26 = V_4;
		Edge_t61E163F7AA3BA416F72B1EDF0DD966F41041D4FF* L_27 = V_2;
		NullCheck(L_26);
		bool L_28;
		L_28 = SimplePolygon_ContainsEdge_m57999509C1F7EDA82C88668902A2FD4981B15A71(L_26, L_27, NULL);
		if (L_28)
		{
			goto IL_0088;
		}
	}
	{
		SimplePolygon_t5F51D3D1F485B3C377E0E40766EBFD86BA9D9385* L_29 = V_4;
		NullCheck(L_29);
		BSPTree2D_t9E8EF14D272A60027A636E897210797581B95327* L_30;
		L_30 = SimplePolygon_get_bsptree_m23D0CD8F1E46D44ECD88C8609E1574BB9D6F2728(L_29, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_31 = V_0;
		NullCheck(L_30);
		bool L_32;
		L_32 = BSPTree2D_IsInside_m650655EAF3F1AE9AF272D0D138B9817B1DEA5E03(L_30, L_31, NULL);
		if (!L_32)
		{
			goto IL_008b;
		}
	}

IL_0088:
	{
		SimplePolygon_t5F51D3D1F485B3C377E0E40766EBFD86BA9D9385* L_33 = V_4;
		return L_33;
	}

IL_008b:
	{
		int32_t L_34 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_34, 1));
	}

IL_008f:
	{
		int32_t L_35 = V_3;
		EditableMesh_tF419912423C538859FC4EDB1F6ABD7314E01A476* L_36 = ___editableMesh0;
		NullCheck(L_36);
		int32_t L_37;
		L_37 = EditableMesh_GetPolygonCount_m8E8542BEAA9C806A06A4144B5CFF409C39AC7494(L_36, (-1), NULL);
		if ((((int32_t)L_35) < ((int32_t)L_37)))
		{
			goto IL_002a;
		}
	}
	{
		return (SimplePolygon_t5F51D3D1F485B3C377E0E40766EBFD86BA9D9385*)NULL;
	}
}
// System.Collections.Generic.List`1<tripolygon.UModeler.Vertex> tripolygon.UModeler.Util::FromClippingVerticesToVertices(System.Collections.Generic.List`1<tripolygon.UModeler.Util/ClippingVertex>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR List_1_t302A75244C10A0CEF3AC031C484C2772A9D30A6F* Util_FromClippingVerticesToVertices_m91FB3F76B9597D3FC8324D59483337872C437E37 (List_1_tD13CD97762EDE4928859DDC2999E6E2175B20A11* ___clippingVertices0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_mBEA06988AE0C126241C9FFA08A9F2612A7A542A4_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_m27907A101D0DAF1C842184C25FF2FCF5F7116E9D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_m39BE269C49EF164BBA706DF15603809754CCD1F9_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_mE2354D72C00BBCA64441D77732E04E9E56069425_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_t302A75244C10A0CEF3AC031C484C2772A9D30A6F_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	List_1_t302A75244C10A0CEF3AC031C484C2772A9D30A6F* V_0 = NULL;
	int32_t V_1 = 0;
	{
		List_1_t302A75244C10A0CEF3AC031C484C2772A9D30A6F* L_0 = (List_1_t302A75244C10A0CEF3AC031C484C2772A9D30A6F*)il2cpp_codegen_object_new(List_1_t302A75244C10A0CEF3AC031C484C2772A9D30A6F_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		List_1__ctor_m27907A101D0DAF1C842184C25FF2FCF5F7116E9D(L_0, List_1__ctor_m27907A101D0DAF1C842184C25FF2FCF5F7116E9D_RuntimeMethod_var);
		V_0 = L_0;
		V_1 = 0;
		goto IL_0020;
	}

IL_000a:
	{
		List_1_t302A75244C10A0CEF3AC031C484C2772A9D30A6F* L_1 = V_0;
		List_1_tD13CD97762EDE4928859DDC2999E6E2175B20A11* L_2 = ___clippingVertices0;
		int32_t L_3 = V_1;
		NullCheck(L_2);
		ClippingVertex_tF5DB1E0668D7F574FF74C67BC6C91561FAF13E30 L_4;
		L_4 = List_1_get_Item_mE2354D72C00BBCA64441D77732E04E9E56069425(L_2, L_3, List_1_get_Item_mE2354D72C00BBCA64441D77732E04E9E56069425_RuntimeMethod_var);
		Vertex_tB6D4D191E463D1653AA47DED15E41F21BA5A21FC* L_5 = L_4.___vtx_0;
		NullCheck(L_1);
		List_1_Add_mBEA06988AE0C126241C9FFA08A9F2612A7A542A4_inline(L_1, L_5, List_1_Add_mBEA06988AE0C126241C9FFA08A9F2612A7A542A4_RuntimeMethod_var);
		int32_t L_6 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_6, 1));
	}

IL_0020:
	{
		int32_t L_7 = V_1;
		List_1_tD13CD97762EDE4928859DDC2999E6E2175B20A11* L_8 = ___clippingVertices0;
		NullCheck(L_8);
		int32_t L_9;
		L_9 = List_1_get_Count_m39BE269C49EF164BBA706DF15603809754CCD1F9_inline(L_8, List_1_get_Count_m39BE269C49EF164BBA706DF15603809754CCD1F9_RuntimeMethod_var);
		if ((((int32_t)L_7) < ((int32_t)L_9)))
		{
			goto IL_000a;
		}
	}
	{
		List_1_t302A75244C10A0CEF3AC031C484C2772A9D30A6F* L_10 = V_0;
		return L_10;
	}
}
// System.Void tripolygon.UModeler.Util::ClipByPlane(System.Collections.Generic.List`1<tripolygon.UModeler.Vertex>,tripolygon.UModeler.PlaneEx,System.Collections.Generic.List`1<tripolygon.UModeler.Util/ClippingVertex>&,System.Collections.Generic.List`1<tripolygon.UModeler.Util/ClippingVertex>&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Util_ClipByPlane_m4B4209D0EECEAC8788E27258020F65C3BAA4B736 (List_1_t302A75244C10A0CEF3AC031C484C2772A9D30A6F* ___vertices0, PlaneEx_t5512A7D4BF235ED6ED6F1F09A1621A1DCB31509D* ___plane1, List_1_tD13CD97762EDE4928859DDC2999E6E2175B20A11** ___above2, List_1_tD13CD97762EDE4928859DDC2999E6E2175B20A11** ___below3, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_mFB89FD2BEC65E65F1A68C47CBA4E02B6E8449495_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_m55E32E673C1206F631655902E4BA7FB92ED22DC8_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_m39BE269C49EF164BBA706DF15603809754CCD1F9_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_m8E2B23B32C1F3E24BA82A3784717FA771E38B208_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_m435D761DB4AF80679A1C0AD9F789379A779DBFD1_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_tD13CD97762EDE4928859DDC2999E6E2175B20A11_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Util_tBEDFF10A323370DC03D5CAB4FEF2AB8EFEB0D7D2_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vertex_tB6D4D191E463D1653AA47DED15E41F21BA5A21FC_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* V_0 = NULL;
	int32_t V_1 = 0;
	float V_2 = 0.0f;
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	int32_t V_6 = 0;
	int32_t V_7 = 0;
	float V_8 = 0.0f;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_9;
	memset((&V_9), 0, sizeof(V_9));
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 V_10;
	memset((&V_10), 0, sizeof(V_10));
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F V_11;
	memset((&V_11), 0, sizeof(V_11));
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_12;
	memset((&V_12), 0, sizeof(V_12));
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 V_13;
	memset((&V_13), 0, sizeof(V_13));
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F V_14;
	memset((&V_14), 0, sizeof(V_14));
	{
		List_1_tD13CD97762EDE4928859DDC2999E6E2175B20A11** L_0 = ___above2;
		List_1_tD13CD97762EDE4928859DDC2999E6E2175B20A11* L_1 = (List_1_tD13CD97762EDE4928859DDC2999E6E2175B20A11*)il2cpp_codegen_object_new(List_1_tD13CD97762EDE4928859DDC2999E6E2175B20A11_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		List_1__ctor_m55E32E673C1206F631655902E4BA7FB92ED22DC8(L_1, List_1__ctor_m55E32E673C1206F631655902E4BA7FB92ED22DC8_RuntimeMethod_var);
		*((RuntimeObject**)L_0) = (RuntimeObject*)L_1;
		Il2CppCodeGenWriteBarrier((void**)(RuntimeObject**)L_0, (void*)(RuntimeObject*)L_1);
		List_1_tD13CD97762EDE4928859DDC2999E6E2175B20A11** L_2 = ___below3;
		List_1_tD13CD97762EDE4928859DDC2999E6E2175B20A11* L_3 = (List_1_tD13CD97762EDE4928859DDC2999E6E2175B20A11*)il2cpp_codegen_object_new(List_1_tD13CD97762EDE4928859DDC2999E6E2175B20A11_il2cpp_TypeInfo_var);
		NullCheck(L_3);
		List_1__ctor_m55E32E673C1206F631655902E4BA7FB92ED22DC8(L_3, List_1__ctor_m55E32E673C1206F631655902E4BA7FB92ED22DC8_RuntimeMethod_var);
		*((RuntimeObject**)L_2) = (RuntimeObject*)L_3;
		Il2CppCodeGenWriteBarrier((void**)(RuntimeObject**)L_2, (void*)(RuntimeObject*)L_3);
		List_1_t302A75244C10A0CEF3AC031C484C2772A9D30A6F* L_4 = ___vertices0;
		NullCheck(L_4);
		int32_t L_5;
		L_5 = List_1_get_Count_m8E2B23B32C1F3E24BA82A3784717FA771E38B208_inline(L_4, List_1_get_Count_m8E2B23B32C1F3E24BA82A3784717FA771E38B208_RuntimeMethod_var);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_6 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)SZArrayNew(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var, (uint32_t)L_5);
		V_0 = L_6;
		V_1 = 0;
		goto IL_0055;
	}

IL_001e:
	{
		PlaneEx_t5512A7D4BF235ED6ED6F1F09A1621A1DCB31509D* L_7 = ___plane1;
		List_1_t302A75244C10A0CEF3AC031C484C2772A9D30A6F* L_8 = ___vertices0;
		int32_t L_9 = V_1;
		NullCheck(L_8);
		Vertex_tB6D4D191E463D1653AA47DED15E41F21BA5A21FC* L_10;
		L_10 = List_1_get_Item_m435D761DB4AF80679A1C0AD9F789379A779DBFD1(L_8, L_9, List_1_get_Item_m435D761DB4AF80679A1C0AD9F789379A779DBFD1_RuntimeMethod_var);
		NullCheck(L_10);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_11 = L_10->___pos_0;
		NullCheck(L_7);
		float L_12;
		L_12 = PlaneEx_CalcDistanceToPoint_m72481C5E65ADBF9FBDF999CF3188D9725D7D2F16(L_7, L_11, NULL);
		V_2 = L_12;
		float L_13 = V_2;
		if ((!(((float)L_13) > ((float)(9.99999975E-05f)))))
		{
			goto IL_003f;
		}
	}
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_14 = V_0;
		int32_t L_15 = V_1;
		NullCheck(L_14);
		(L_14)->SetAt(static_cast<il2cpp_array_size_t>(L_15), (int32_t)1);
		goto IL_0051;
	}

IL_003f:
	{
		float L_16 = V_2;
		if ((!(((float)L_16) < ((float)(-9.99999975E-05f)))))
		{
			goto IL_004d;
		}
	}
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_17 = V_0;
		int32_t L_18 = V_1;
		NullCheck(L_17);
		(L_17)->SetAt(static_cast<il2cpp_array_size_t>(L_18), (int32_t)(-1));
		goto IL_0051;
	}

IL_004d:
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_19 = V_0;
		int32_t L_20 = V_1;
		NullCheck(L_19);
		(L_19)->SetAt(static_cast<il2cpp_array_size_t>(L_20), (int32_t)0);
	}

IL_0051:
	{
		int32_t L_21 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_21, 1));
	}

IL_0055:
	{
		int32_t L_22 = V_1;
		List_1_t302A75244C10A0CEF3AC031C484C2772A9D30A6F* L_23 = ___vertices0;
		NullCheck(L_23);
		int32_t L_24;
		L_24 = List_1_get_Count_m8E2B23B32C1F3E24BA82A3784717FA771E38B208_inline(L_23, List_1_get_Count_m8E2B23B32C1F3E24BA82A3784717FA771E38B208_RuntimeMethod_var);
		if ((((int32_t)L_22) < ((int32_t)L_24)))
		{
			goto IL_001e;
		}
	}
	{
		V_3 = 0;
		goto IL_0392;
	}

IL_0065:
	{
		int32_t L_25 = V_3;
		List_1_t302A75244C10A0CEF3AC031C484C2772A9D30A6F* L_26 = ___vertices0;
		NullCheck(L_26);
		int32_t L_27;
		L_27 = List_1_get_Count_m8E2B23B32C1F3E24BA82A3784717FA771E38B208_inline(L_26, List_1_get_Count_m8E2B23B32C1F3E24BA82A3784717FA771E38B208_RuntimeMethod_var);
		V_4 = ((int32_t)(((int32_t)il2cpp_codegen_add(L_25, 1))%L_27));
		int32_t L_28 = V_4;
		List_1_t302A75244C10A0CEF3AC031C484C2772A9D30A6F* L_29 = ___vertices0;
		NullCheck(L_29);
		int32_t L_30;
		L_30 = List_1_get_Count_m8E2B23B32C1F3E24BA82A3784717FA771E38B208_inline(L_29, List_1_get_Count_m8E2B23B32C1F3E24BA82A3784717FA771E38B208_RuntimeMethod_var);
		V_5 = ((int32_t)(((int32_t)il2cpp_codegen_add(L_28, 1))%L_30));
		int32_t L_31 = V_3;
		List_1_t302A75244C10A0CEF3AC031C484C2772A9D30A6F* L_32 = ___vertices0;
		NullCheck(L_32);
		int32_t L_33;
		L_33 = List_1_get_Count_m8E2B23B32C1F3E24BA82A3784717FA771E38B208_inline(L_32, List_1_get_Count_m8E2B23B32C1F3E24BA82A3784717FA771E38B208_RuntimeMethod_var);
		List_1_t302A75244C10A0CEF3AC031C484C2772A9D30A6F* L_34 = ___vertices0;
		NullCheck(L_34);
		int32_t L_35;
		L_35 = List_1_get_Count_m8E2B23B32C1F3E24BA82A3784717FA771E38B208_inline(L_34, List_1_get_Count_m8E2B23B32C1F3E24BA82A3784717FA771E38B208_RuntimeMethod_var);
		V_6 = ((int32_t)(((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_subtract(L_31, 1)), L_33))%L_35));
		int32_t L_36 = V_6;
		List_1_t302A75244C10A0CEF3AC031C484C2772A9D30A6F* L_37 = ___vertices0;
		NullCheck(L_37);
		int32_t L_38;
		L_38 = List_1_get_Count_m8E2B23B32C1F3E24BA82A3784717FA771E38B208_inline(L_37, List_1_get_Count_m8E2B23B32C1F3E24BA82A3784717FA771E38B208_RuntimeMethod_var);
		List_1_t302A75244C10A0CEF3AC031C484C2772A9D30A6F* L_39 = ___vertices0;
		NullCheck(L_39);
		int32_t L_40;
		L_40 = List_1_get_Count_m8E2B23B32C1F3E24BA82A3784717FA771E38B208_inline(L_39, List_1_get_Count_m8E2B23B32C1F3E24BA82A3784717FA771E38B208_RuntimeMethod_var);
		V_7 = ((int32_t)(((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_subtract(L_36, 1)), L_38))%L_40));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_41 = V_0;
		int32_t L_42 = V_3;
		NullCheck(L_41);
		int32_t L_43 = L_42;
		int32_t L_44 = (L_41)->GetAt(static_cast<il2cpp_array_size_t>(L_43));
		if ((!(((uint32_t)L_44) == ((uint32_t)1))))
		{
			goto IL_00c5;
		}
	}
	{
		List_1_tD13CD97762EDE4928859DDC2999E6E2175B20A11** L_45 = ___above2;
		List_1_tD13CD97762EDE4928859DDC2999E6E2175B20A11* L_46 = *((List_1_tD13CD97762EDE4928859DDC2999E6E2175B20A11**)L_45);
		List_1_t302A75244C10A0CEF3AC031C484C2772A9D30A6F* L_47 = ___vertices0;
		int32_t L_48 = V_3;
		NullCheck(L_47);
		Vertex_tB6D4D191E463D1653AA47DED15E41F21BA5A21FC* L_49;
		L_49 = List_1_get_Item_m435D761DB4AF80679A1C0AD9F789379A779DBFD1(L_47, L_48, List_1_get_Item_m435D761DB4AF80679A1C0AD9F789379A779DBFD1_RuntimeMethod_var);
		ClippingVertex_tF5DB1E0668D7F574FF74C67BC6C91561FAF13E30 L_50;
		memset((&L_50), 0, sizeof(L_50));
		ClippingVertex__ctor_m449126CCE5B7596828D939C80C832B40FA77107D((&L_50), L_49, 1, (bool)0, /*hidden argument*/NULL);
		NullCheck(L_46);
		List_1_Add_mFB89FD2BEC65E65F1A68C47CBA4E02B6E8449495_inline(L_46, L_50, List_1_Add_mFB89FD2BEC65E65F1A68C47CBA4E02B6E8449495_RuntimeMethod_var);
		goto IL_0241;
	}

IL_00c5:
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_51 = V_0;
		int32_t L_52 = V_3;
		NullCheck(L_51);
		int32_t L_53 = L_52;
		int32_t L_54 = (L_51)->GetAt(static_cast<il2cpp_array_size_t>(L_53));
		if ((!(((uint32_t)L_54) == ((uint32_t)(-1)))))
		{
			goto IL_00e5;
		}
	}
	{
		List_1_tD13CD97762EDE4928859DDC2999E6E2175B20A11** L_55 = ___below3;
		List_1_tD13CD97762EDE4928859DDC2999E6E2175B20A11* L_56 = *((List_1_tD13CD97762EDE4928859DDC2999E6E2175B20A11**)L_55);
		List_1_t302A75244C10A0CEF3AC031C484C2772A9D30A6F* L_57 = ___vertices0;
		int32_t L_58 = V_3;
		NullCheck(L_57);
		Vertex_tB6D4D191E463D1653AA47DED15E41F21BA5A21FC* L_59;
		L_59 = List_1_get_Item_m435D761DB4AF80679A1C0AD9F789379A779DBFD1(L_57, L_58, List_1_get_Item_m435D761DB4AF80679A1C0AD9F789379A779DBFD1_RuntimeMethod_var);
		ClippingVertex_tF5DB1E0668D7F574FF74C67BC6C91561FAF13E30 L_60;
		memset((&L_60), 0, sizeof(L_60));
		ClippingVertex__ctor_m449126CCE5B7596828D939C80C832B40FA77107D((&L_60), L_59, 3, (bool)0, /*hidden argument*/NULL);
		NullCheck(L_56);
		List_1_Add_mFB89FD2BEC65E65F1A68C47CBA4E02B6E8449495_inline(L_56, L_60, List_1_Add_mFB89FD2BEC65E65F1A68C47CBA4E02B6E8449495_RuntimeMethod_var);
		goto IL_0241;
	}

IL_00e5:
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_61 = V_0;
		int32_t L_62 = V_6;
		NullCheck(L_61);
		int32_t L_63 = L_62;
		int32_t L_64 = (L_61)->GetAt(static_cast<il2cpp_array_size_t>(L_63));
		if ((!(((uint32_t)L_64) == ((uint32_t)1))))
		{
			goto IL_0143;
		}
	}
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_65 = V_0;
		int32_t L_66 = V_4;
		NullCheck(L_65);
		int32_t L_67 = L_66;
		int32_t L_68 = (L_65)->GetAt(static_cast<il2cpp_array_size_t>(L_67));
		if ((((int32_t)L_68) == ((int32_t)(-1))))
		{
			goto IL_00fa;
		}
	}
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_69 = V_0;
		int32_t L_70 = V_5;
		NullCheck(L_69);
		int32_t L_71 = L_70;
		int32_t L_72 = (L_69)->GetAt(static_cast<il2cpp_array_size_t>(L_71));
		if ((!(((uint32_t)L_72) == ((uint32_t)(-1)))))
		{
			goto IL_0129;
		}
	}

IL_00fa:
	{
		List_1_tD13CD97762EDE4928859DDC2999E6E2175B20A11** L_73 = ___below3;
		List_1_tD13CD97762EDE4928859DDC2999E6E2175B20A11* L_74 = *((List_1_tD13CD97762EDE4928859DDC2999E6E2175B20A11**)L_73);
		List_1_t302A75244C10A0CEF3AC031C484C2772A9D30A6F* L_75 = ___vertices0;
		int32_t L_76 = V_3;
		NullCheck(L_75);
		Vertex_tB6D4D191E463D1653AA47DED15E41F21BA5A21FC* L_77;
		L_77 = List_1_get_Item_m435D761DB4AF80679A1C0AD9F789379A779DBFD1(L_75, L_76, List_1_get_Item_m435D761DB4AF80679A1C0AD9F789379A779DBFD1_RuntimeMethod_var);
		ClippingVertex_tF5DB1E0668D7F574FF74C67BC6C91561FAF13E30 L_78;
		memset((&L_78), 0, sizeof(L_78));
		ClippingVertex__ctor_m449126CCE5B7596828D939C80C832B40FA77107D((&L_78), L_77, 2, (bool)1, /*hidden argument*/NULL);
		NullCheck(L_74);
		List_1_Add_mFB89FD2BEC65E65F1A68C47CBA4E02B6E8449495_inline(L_74, L_78, List_1_Add_mFB89FD2BEC65E65F1A68C47CBA4E02B6E8449495_RuntimeMethod_var);
		List_1_tD13CD97762EDE4928859DDC2999E6E2175B20A11** L_79 = ___above2;
		List_1_tD13CD97762EDE4928859DDC2999E6E2175B20A11* L_80 = *((List_1_tD13CD97762EDE4928859DDC2999E6E2175B20A11**)L_79);
		List_1_t302A75244C10A0CEF3AC031C484C2772A9D30A6F* L_81 = ___vertices0;
		int32_t L_82 = V_3;
		NullCheck(L_81);
		Vertex_tB6D4D191E463D1653AA47DED15E41F21BA5A21FC* L_83;
		L_83 = List_1_get_Item_m435D761DB4AF80679A1C0AD9F789379A779DBFD1(L_81, L_82, List_1_get_Item_m435D761DB4AF80679A1C0AD9F789379A779DBFD1_RuntimeMethod_var);
		ClippingVertex_tF5DB1E0668D7F574FF74C67BC6C91561FAF13E30 L_84;
		memset((&L_84), 0, sizeof(L_84));
		ClippingVertex__ctor_m449126CCE5B7596828D939C80C832B40FA77107D((&L_84), L_83, 2, (bool)1, /*hidden argument*/NULL);
		NullCheck(L_80);
		List_1_Add_mFB89FD2BEC65E65F1A68C47CBA4E02B6E8449495_inline(L_80, L_84, List_1_Add_mFB89FD2BEC65E65F1A68C47CBA4E02B6E8449495_RuntimeMethod_var);
		goto IL_0241;
	}

IL_0129:
	{
		List_1_tD13CD97762EDE4928859DDC2999E6E2175B20A11** L_85 = ___above2;
		List_1_tD13CD97762EDE4928859DDC2999E6E2175B20A11* L_86 = *((List_1_tD13CD97762EDE4928859DDC2999E6E2175B20A11**)L_85);
		List_1_t302A75244C10A0CEF3AC031C484C2772A9D30A6F* L_87 = ___vertices0;
		int32_t L_88 = V_3;
		NullCheck(L_87);
		Vertex_tB6D4D191E463D1653AA47DED15E41F21BA5A21FC* L_89;
		L_89 = List_1_get_Item_m435D761DB4AF80679A1C0AD9F789379A779DBFD1(L_87, L_88, List_1_get_Item_m435D761DB4AF80679A1C0AD9F789379A779DBFD1_RuntimeMethod_var);
		ClippingVertex_tF5DB1E0668D7F574FF74C67BC6C91561FAF13E30 L_90;
		memset((&L_90), 0, sizeof(L_90));
		ClippingVertex__ctor_m449126CCE5B7596828D939C80C832B40FA77107D((&L_90), L_89, 4, (bool)1, /*hidden argument*/NULL);
		NullCheck(L_86);
		List_1_Add_mFB89FD2BEC65E65F1A68C47CBA4E02B6E8449495_inline(L_86, L_90, List_1_Add_mFB89FD2BEC65E65F1A68C47CBA4E02B6E8449495_RuntimeMethod_var);
		goto IL_0241;
	}

IL_0143:
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_91 = V_0;
		int32_t L_92 = V_6;
		NullCheck(L_91);
		int32_t L_93 = L_92;
		int32_t L_94 = (L_91)->GetAt(static_cast<il2cpp_array_size_t>(L_93));
		if ((!(((uint32_t)L_94) == ((uint32_t)(-1)))))
		{
			goto IL_01a1;
		}
	}
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_95 = V_0;
		int32_t L_96 = V_4;
		NullCheck(L_95);
		int32_t L_97 = L_96;
		int32_t L_98 = (L_95)->GetAt(static_cast<il2cpp_array_size_t>(L_97));
		if ((((int32_t)L_98) == ((int32_t)1)))
		{
			goto IL_0158;
		}
	}
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_99 = V_0;
		int32_t L_100 = V_5;
		NullCheck(L_99);
		int32_t L_101 = L_100;
		int32_t L_102 = (L_99)->GetAt(static_cast<il2cpp_array_size_t>(L_101));
		if ((!(((uint32_t)L_102) == ((uint32_t)1))))
		{
			goto IL_0187;
		}
	}

IL_0158:
	{
		List_1_tD13CD97762EDE4928859DDC2999E6E2175B20A11** L_103 = ___above2;
		List_1_tD13CD97762EDE4928859DDC2999E6E2175B20A11* L_104 = *((List_1_tD13CD97762EDE4928859DDC2999E6E2175B20A11**)L_103);
		List_1_t302A75244C10A0CEF3AC031C484C2772A9D30A6F* L_105 = ___vertices0;
		int32_t L_106 = V_3;
		NullCheck(L_105);
		Vertex_tB6D4D191E463D1653AA47DED15E41F21BA5A21FC* L_107;
		L_107 = List_1_get_Item_m435D761DB4AF80679A1C0AD9F789379A779DBFD1(L_105, L_106, List_1_get_Item_m435D761DB4AF80679A1C0AD9F789379A779DBFD1_RuntimeMethod_var);
		ClippingVertex_tF5DB1E0668D7F574FF74C67BC6C91561FAF13E30 L_108;
		memset((&L_108), 0, sizeof(L_108));
		ClippingVertex__ctor_m449126CCE5B7596828D939C80C832B40FA77107D((&L_108), L_107, 0, (bool)1, /*hidden argument*/NULL);
		NullCheck(L_104);
		List_1_Add_mFB89FD2BEC65E65F1A68C47CBA4E02B6E8449495_inline(L_104, L_108, List_1_Add_mFB89FD2BEC65E65F1A68C47CBA4E02B6E8449495_RuntimeMethod_var);
		List_1_tD13CD97762EDE4928859DDC2999E6E2175B20A11** L_109 = ___below3;
		List_1_tD13CD97762EDE4928859DDC2999E6E2175B20A11* L_110 = *((List_1_tD13CD97762EDE4928859DDC2999E6E2175B20A11**)L_109);
		List_1_t302A75244C10A0CEF3AC031C484C2772A9D30A6F* L_111 = ___vertices0;
		int32_t L_112 = V_3;
		NullCheck(L_111);
		Vertex_tB6D4D191E463D1653AA47DED15E41F21BA5A21FC* L_113;
		L_113 = List_1_get_Item_m435D761DB4AF80679A1C0AD9F789379A779DBFD1(L_111, L_112, List_1_get_Item_m435D761DB4AF80679A1C0AD9F789379A779DBFD1_RuntimeMethod_var);
		ClippingVertex_tF5DB1E0668D7F574FF74C67BC6C91561FAF13E30 L_114;
		memset((&L_114), 0, sizeof(L_114));
		ClippingVertex__ctor_m449126CCE5B7596828D939C80C832B40FA77107D((&L_114), L_113, 0, (bool)1, /*hidden argument*/NULL);
		NullCheck(L_110);
		List_1_Add_mFB89FD2BEC65E65F1A68C47CBA4E02B6E8449495_inline(L_110, L_114, List_1_Add_mFB89FD2BEC65E65F1A68C47CBA4E02B6E8449495_RuntimeMethod_var);
		goto IL_0241;
	}

IL_0187:
	{
		List_1_tD13CD97762EDE4928859DDC2999E6E2175B20A11** L_115 = ___below3;
		List_1_tD13CD97762EDE4928859DDC2999E6E2175B20A11* L_116 = *((List_1_tD13CD97762EDE4928859DDC2999E6E2175B20A11**)L_115);
		List_1_t302A75244C10A0CEF3AC031C484C2772A9D30A6F* L_117 = ___vertices0;
		int32_t L_118 = V_3;
		NullCheck(L_117);
		Vertex_tB6D4D191E463D1653AA47DED15E41F21BA5A21FC* L_119;
		L_119 = List_1_get_Item_m435D761DB4AF80679A1C0AD9F789379A779DBFD1(L_117, L_118, List_1_get_Item_m435D761DB4AF80679A1C0AD9F789379A779DBFD1_RuntimeMethod_var);
		ClippingVertex_tF5DB1E0668D7F574FF74C67BC6C91561FAF13E30 L_120;
		memset((&L_120), 0, sizeof(L_120));
		ClippingVertex__ctor_m449126CCE5B7596828D939C80C832B40FA77107D((&L_120), L_119, 4, (bool)1, /*hidden argument*/NULL);
		NullCheck(L_116);
		List_1_Add_mFB89FD2BEC65E65F1A68C47CBA4E02B6E8449495_inline(L_116, L_120, List_1_Add_mFB89FD2BEC65E65F1A68C47CBA4E02B6E8449495_RuntimeMethod_var);
		goto IL_0241;
	}

IL_01a1:
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_121 = V_0;
		int32_t L_122 = V_4;
		NullCheck(L_121);
		int32_t L_123 = L_122;
		int32_t L_124 = (L_121)->GetAt(static_cast<il2cpp_array_size_t>(L_123));
		if ((!(((uint32_t)L_124) == ((uint32_t)1))))
		{
			goto IL_01f2;
		}
	}
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_125 = V_0;
		int32_t L_126 = V_7;
		NullCheck(L_125);
		int32_t L_127 = L_126;
		int32_t L_128 = (L_125)->GetAt(static_cast<il2cpp_array_size_t>(L_127));
		if ((!(((uint32_t)L_128) == ((uint32_t)(-1)))))
		{
			goto IL_01db;
		}
	}
	{
		List_1_tD13CD97762EDE4928859DDC2999E6E2175B20A11** L_129 = ___above2;
		List_1_tD13CD97762EDE4928859DDC2999E6E2175B20A11* L_130 = *((List_1_tD13CD97762EDE4928859DDC2999E6E2175B20A11**)L_129);
		List_1_t302A75244C10A0CEF3AC031C484C2772A9D30A6F* L_131 = ___vertices0;
		int32_t L_132 = V_3;
		NullCheck(L_131);
		Vertex_tB6D4D191E463D1653AA47DED15E41F21BA5A21FC* L_133;
		L_133 = List_1_get_Item_m435D761DB4AF80679A1C0AD9F789379A779DBFD1(L_131, L_132, List_1_get_Item_m435D761DB4AF80679A1C0AD9F789379A779DBFD1_RuntimeMethod_var);
		ClippingVertex_tF5DB1E0668D7F574FF74C67BC6C91561FAF13E30 L_134;
		memset((&L_134), 0, sizeof(L_134));
		ClippingVertex__ctor_m449126CCE5B7596828D939C80C832B40FA77107D((&L_134), L_133, 0, (bool)1, /*hidden argument*/NULL);
		NullCheck(L_130);
		List_1_Add_mFB89FD2BEC65E65F1A68C47CBA4E02B6E8449495_inline(L_130, L_134, List_1_Add_mFB89FD2BEC65E65F1A68C47CBA4E02B6E8449495_RuntimeMethod_var);
		List_1_tD13CD97762EDE4928859DDC2999E6E2175B20A11** L_135 = ___below3;
		List_1_tD13CD97762EDE4928859DDC2999E6E2175B20A11* L_136 = *((List_1_tD13CD97762EDE4928859DDC2999E6E2175B20A11**)L_135);
		List_1_t302A75244C10A0CEF3AC031C484C2772A9D30A6F* L_137 = ___vertices0;
		int32_t L_138 = V_3;
		NullCheck(L_137);
		Vertex_tB6D4D191E463D1653AA47DED15E41F21BA5A21FC* L_139;
		L_139 = List_1_get_Item_m435D761DB4AF80679A1C0AD9F789379A779DBFD1(L_137, L_138, List_1_get_Item_m435D761DB4AF80679A1C0AD9F789379A779DBFD1_RuntimeMethod_var);
		ClippingVertex_tF5DB1E0668D7F574FF74C67BC6C91561FAF13E30 L_140;
		memset((&L_140), 0, sizeof(L_140));
		ClippingVertex__ctor_m449126CCE5B7596828D939C80C832B40FA77107D((&L_140), L_139, 0, (bool)1, /*hidden argument*/NULL);
		NullCheck(L_136);
		List_1_Add_mFB89FD2BEC65E65F1A68C47CBA4E02B6E8449495_inline(L_136, L_140, List_1_Add_mFB89FD2BEC65E65F1A68C47CBA4E02B6E8449495_RuntimeMethod_var);
		goto IL_0241;
	}

IL_01db:
	{
		List_1_tD13CD97762EDE4928859DDC2999E6E2175B20A11** L_141 = ___above2;
		List_1_tD13CD97762EDE4928859DDC2999E6E2175B20A11* L_142 = *((List_1_tD13CD97762EDE4928859DDC2999E6E2175B20A11**)L_141);
		List_1_t302A75244C10A0CEF3AC031C484C2772A9D30A6F* L_143 = ___vertices0;
		int32_t L_144 = V_3;
		NullCheck(L_143);
		Vertex_tB6D4D191E463D1653AA47DED15E41F21BA5A21FC* L_145;
		L_145 = List_1_get_Item_m435D761DB4AF80679A1C0AD9F789379A779DBFD1(L_143, L_144, List_1_get_Item_m435D761DB4AF80679A1C0AD9F789379A779DBFD1_RuntimeMethod_var);
		ClippingVertex_tF5DB1E0668D7F574FF74C67BC6C91561FAF13E30 L_146;
		memset((&L_146), 0, sizeof(L_146));
		ClippingVertex__ctor_m449126CCE5B7596828D939C80C832B40FA77107D((&L_146), L_145, 4, (bool)1, /*hidden argument*/NULL);
		NullCheck(L_142);
		List_1_Add_mFB89FD2BEC65E65F1A68C47CBA4E02B6E8449495_inline(L_142, L_146, List_1_Add_mFB89FD2BEC65E65F1A68C47CBA4E02B6E8449495_RuntimeMethod_var);
		goto IL_0241;
	}

IL_01f2:
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_147 = V_0;
		int32_t L_148 = V_4;
		NullCheck(L_147);
		int32_t L_149 = L_148;
		int32_t L_150 = (L_147)->GetAt(static_cast<il2cpp_array_size_t>(L_149));
		if ((!(((uint32_t)L_150) == ((uint32_t)(-1)))))
		{
			goto IL_0241;
		}
	}
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_151 = V_0;
		int32_t L_152 = V_7;
		NullCheck(L_151);
		int32_t L_153 = L_152;
		int32_t L_154 = (L_151)->GetAt(static_cast<il2cpp_array_size_t>(L_153));
		if ((!(((uint32_t)L_154) == ((uint32_t)1))))
		{
			goto IL_022c;
		}
	}
	{
		List_1_tD13CD97762EDE4928859DDC2999E6E2175B20A11** L_155 = ___below3;
		List_1_tD13CD97762EDE4928859DDC2999E6E2175B20A11* L_156 = *((List_1_tD13CD97762EDE4928859DDC2999E6E2175B20A11**)L_155);
		List_1_t302A75244C10A0CEF3AC031C484C2772A9D30A6F* L_157 = ___vertices0;
		int32_t L_158 = V_3;
		NullCheck(L_157);
		Vertex_tB6D4D191E463D1653AA47DED15E41F21BA5A21FC* L_159;
		L_159 = List_1_get_Item_m435D761DB4AF80679A1C0AD9F789379A779DBFD1(L_157, L_158, List_1_get_Item_m435D761DB4AF80679A1C0AD9F789379A779DBFD1_RuntimeMethod_var);
		ClippingVertex_tF5DB1E0668D7F574FF74C67BC6C91561FAF13E30 L_160;
		memset((&L_160), 0, sizeof(L_160));
		ClippingVertex__ctor_m449126CCE5B7596828D939C80C832B40FA77107D((&L_160), L_159, 2, (bool)1, /*hidden argument*/NULL);
		NullCheck(L_156);
		List_1_Add_mFB89FD2BEC65E65F1A68C47CBA4E02B6E8449495_inline(L_156, L_160, List_1_Add_mFB89FD2BEC65E65F1A68C47CBA4E02B6E8449495_RuntimeMethod_var);
		List_1_tD13CD97762EDE4928859DDC2999E6E2175B20A11** L_161 = ___above2;
		List_1_tD13CD97762EDE4928859DDC2999E6E2175B20A11* L_162 = *((List_1_tD13CD97762EDE4928859DDC2999E6E2175B20A11**)L_161);
		List_1_t302A75244C10A0CEF3AC031C484C2772A9D30A6F* L_163 = ___vertices0;
		int32_t L_164 = V_3;
		NullCheck(L_163);
		Vertex_tB6D4D191E463D1653AA47DED15E41F21BA5A21FC* L_165;
		L_165 = List_1_get_Item_m435D761DB4AF80679A1C0AD9F789379A779DBFD1(L_163, L_164, List_1_get_Item_m435D761DB4AF80679A1C0AD9F789379A779DBFD1_RuntimeMethod_var);
		ClippingVertex_tF5DB1E0668D7F574FF74C67BC6C91561FAF13E30 L_166;
		memset((&L_166), 0, sizeof(L_166));
		ClippingVertex__ctor_m449126CCE5B7596828D939C80C832B40FA77107D((&L_166), L_165, 2, (bool)1, /*hidden argument*/NULL);
		NullCheck(L_162);
		List_1_Add_mFB89FD2BEC65E65F1A68C47CBA4E02B6E8449495_inline(L_162, L_166, List_1_Add_mFB89FD2BEC65E65F1A68C47CBA4E02B6E8449495_RuntimeMethod_var);
		goto IL_0241;
	}

IL_022c:
	{
		List_1_tD13CD97762EDE4928859DDC2999E6E2175B20A11** L_167 = ___below3;
		List_1_tD13CD97762EDE4928859DDC2999E6E2175B20A11* L_168 = *((List_1_tD13CD97762EDE4928859DDC2999E6E2175B20A11**)L_167);
		List_1_t302A75244C10A0CEF3AC031C484C2772A9D30A6F* L_169 = ___vertices0;
		int32_t L_170 = V_3;
		NullCheck(L_169);
		Vertex_tB6D4D191E463D1653AA47DED15E41F21BA5A21FC* L_171;
		L_171 = List_1_get_Item_m435D761DB4AF80679A1C0AD9F789379A779DBFD1(L_169, L_170, List_1_get_Item_m435D761DB4AF80679A1C0AD9F789379A779DBFD1_RuntimeMethod_var);
		ClippingVertex_tF5DB1E0668D7F574FF74C67BC6C91561FAF13E30 L_172;
		memset((&L_172), 0, sizeof(L_172));
		ClippingVertex__ctor_m449126CCE5B7596828D939C80C832B40FA77107D((&L_172), L_171, 4, (bool)1, /*hidden argument*/NULL);
		NullCheck(L_168);
		List_1_Add_mFB89FD2BEC65E65F1A68C47CBA4E02B6E8449495_inline(L_168, L_172, List_1_Add_mFB89FD2BEC65E65F1A68C47CBA4E02B6E8449495_RuntimeMethod_var);
	}

IL_0241:
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_173 = V_0;
		int32_t L_174 = V_3;
		NullCheck(L_173);
		int32_t L_175 = L_174;
		int32_t L_176 = (L_173)->GetAt(static_cast<il2cpp_array_size_t>(L_175));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_177 = V_0;
		int32_t L_178 = V_4;
		NullCheck(L_177);
		int32_t L_179 = L_178;
		int32_t L_180 = (L_177)->GetAt(static_cast<il2cpp_array_size_t>(L_179));
		if ((!(((uint32_t)((int32_t)il2cpp_codegen_multiply(L_176, L_180))) == ((uint32_t)(-1)))))
		{
			goto IL_038e;
		}
	}
	{
		V_8 = (0.0f);
		List_1_t302A75244C10A0CEF3AC031C484C2772A9D30A6F* L_181 = ___vertices0;
		int32_t L_182 = V_4;
		NullCheck(L_181);
		Vertex_tB6D4D191E463D1653AA47DED15E41F21BA5A21FC* L_183;
		L_183 = List_1_get_Item_m435D761DB4AF80679A1C0AD9F789379A779DBFD1(L_181, L_182, List_1_get_Item_m435D761DB4AF80679A1C0AD9F789379A779DBFD1_RuntimeMethod_var);
		NullCheck(L_183);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_184 = L_183->___pos_0;
		List_1_t302A75244C10A0CEF3AC031C484C2772A9D30A6F* L_185 = ___vertices0;
		int32_t L_186 = V_3;
		NullCheck(L_185);
		Vertex_tB6D4D191E463D1653AA47DED15E41F21BA5A21FC* L_187;
		L_187 = List_1_get_Item_m435D761DB4AF80679A1C0AD9F789379A779DBFD1(L_185, L_186, List_1_get_Item_m435D761DB4AF80679A1C0AD9F789379A779DBFD1_RuntimeMethod_var);
		NullCheck(L_187);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_188 = L_187->___pos_0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_189;
		L_189 = Vector3_op_Subtraction_mE42023FF80067CB44A1D4A27EB7CF2B24CABB828_inline(L_184, L_188, NULL);
		V_9 = L_189;
		List_1_t302A75244C10A0CEF3AC031C484C2772A9D30A6F* L_190 = ___vertices0;
		int32_t L_191 = V_4;
		NullCheck(L_190);
		Vertex_tB6D4D191E463D1653AA47DED15E41F21BA5A21FC* L_192;
		L_192 = List_1_get_Item_m435D761DB4AF80679A1C0AD9F789379A779DBFD1(L_190, L_191, List_1_get_Item_m435D761DB4AF80679A1C0AD9F789379A779DBFD1_RuntimeMethod_var);
		NullCheck(L_192);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_193 = L_192->___uv_1;
		List_1_t302A75244C10A0CEF3AC031C484C2772A9D30A6F* L_194 = ___vertices0;
		int32_t L_195 = V_3;
		NullCheck(L_194);
		Vertex_tB6D4D191E463D1653AA47DED15E41F21BA5A21FC* L_196;
		L_196 = List_1_get_Item_m435D761DB4AF80679A1C0AD9F789379A779DBFD1(L_194, L_195, List_1_get_Item_m435D761DB4AF80679A1C0AD9F789379A779DBFD1_RuntimeMethod_var);
		NullCheck(L_196);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_197 = L_196->___uv_1;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_198;
		L_198 = Vector2_op_Subtraction_m44475FCDAD2DA2F98D78A6625EC2DCDFE8803837_inline(L_193, L_197, NULL);
		V_10 = L_198;
		List_1_t302A75244C10A0CEF3AC031C484C2772A9D30A6F* L_199 = ___vertices0;
		int32_t L_200 = V_4;
		NullCheck(L_199);
		Vertex_tB6D4D191E463D1653AA47DED15E41F21BA5A21FC* L_201;
		L_201 = List_1_get_Item_m435D761DB4AF80679A1C0AD9F789379A779DBFD1(L_199, L_200, List_1_get_Item_m435D761DB4AF80679A1C0AD9F789379A779DBFD1_RuntimeMethod_var);
		NullCheck(L_201);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_202 = L_201->___color_2;
		List_1_t302A75244C10A0CEF3AC031C484C2772A9D30A6F* L_203 = ___vertices0;
		int32_t L_204 = V_3;
		NullCheck(L_203);
		Vertex_tB6D4D191E463D1653AA47DED15E41F21BA5A21FC* L_205;
		L_205 = List_1_get_Item_m435D761DB4AF80679A1C0AD9F789379A779DBFD1(L_203, L_204, List_1_get_Item_m435D761DB4AF80679A1C0AD9F789379A779DBFD1_RuntimeMethod_var);
		NullCheck(L_205);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_206 = L_205->___color_2;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_207;
		L_207 = Color_op_Subtraction_mF003448D819F2A41405BB6D85F1563CDA900B07F_inline(L_202, L_206, NULL);
		V_11 = L_207;
		PlaneEx_t5512A7D4BF235ED6ED6F1F09A1621A1DCB31509D* L_208 = ___plane1;
		List_1_t302A75244C10A0CEF3AC031C484C2772A9D30A6F* L_209 = ___vertices0;
		int32_t L_210 = V_3;
		NullCheck(L_209);
		Vertex_tB6D4D191E463D1653AA47DED15E41F21BA5A21FC* L_211;
		L_211 = List_1_get_Item_m435D761DB4AF80679A1C0AD9F789379A779DBFD1(L_209, L_210, List_1_get_Item_m435D761DB4AF80679A1C0AD9F789379A779DBFD1_RuntimeMethod_var);
		NullCheck(L_211);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_212 = L_211->___pos_0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_213 = V_9;
		NullCheck(L_208);
		bool L_214;
		L_214 = PlaneEx_RayHit_mA82D46895EF3FB6FC10719F3EF124F08955269EF(L_208, L_212, L_213, (&V_8), (bool)0, NULL);
		List_1_t302A75244C10A0CEF3AC031C484C2772A9D30A6F* L_215 = ___vertices0;
		int32_t L_216 = V_3;
		NullCheck(L_215);
		Vertex_tB6D4D191E463D1653AA47DED15E41F21BA5A21FC* L_217;
		L_217 = List_1_get_Item_m435D761DB4AF80679A1C0AD9F789379A779DBFD1(L_215, L_216, List_1_get_Item_m435D761DB4AF80679A1C0AD9F789379A779DBFD1_RuntimeMethod_var);
		NullCheck(L_217);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_218 = L_217->___pos_0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_219 = V_9;
		float L_220 = V_8;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_221;
		L_221 = Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline(L_219, L_220, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_222;
		L_222 = Vector3_op_Addition_m78C0EC70CB66E8DCAC225743D82B268DAEE92067_inline(L_218, L_221, NULL);
		V_12 = L_222;
		List_1_t302A75244C10A0CEF3AC031C484C2772A9D30A6F* L_223 = ___vertices0;
		int32_t L_224 = V_3;
		NullCheck(L_223);
		Vertex_tB6D4D191E463D1653AA47DED15E41F21BA5A21FC* L_225;
		L_225 = List_1_get_Item_m435D761DB4AF80679A1C0AD9F789379A779DBFD1(L_223, L_224, List_1_get_Item_m435D761DB4AF80679A1C0AD9F789379A779DBFD1_RuntimeMethod_var);
		NullCheck(L_225);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_226 = L_225->___uv_1;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_227 = V_10;
		float L_228 = V_8;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_229;
		L_229 = Vector2_op_Multiply_m2D984B613020089BF5165BA4CA10988E2DC771FE_inline(L_227, L_228, NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_230;
		L_230 = Vector2_op_Addition_m8136742CE6EE33BA4EB81C5F584678455917D2AE_inline(L_226, L_229, NULL);
		V_13 = L_230;
		List_1_t302A75244C10A0CEF3AC031C484C2772A9D30A6F* L_231 = ___vertices0;
		int32_t L_232 = V_3;
		NullCheck(L_231);
		Vertex_tB6D4D191E463D1653AA47DED15E41F21BA5A21FC* L_233;
		L_233 = List_1_get_Item_m435D761DB4AF80679A1C0AD9F789379A779DBFD1(L_231, L_232, List_1_get_Item_m435D761DB4AF80679A1C0AD9F789379A779DBFD1_RuntimeMethod_var);
		NullCheck(L_233);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_234 = L_233->___color_2;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_235 = V_11;
		float L_236 = V_8;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_237;
		L_237 = Color_op_Multiply_m379B20A820266ACF82A21425B9CAE8DCD773CFBB_inline(L_235, L_236, NULL);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_238;
		L_238 = Color_op_Addition_mA7A51CACA49ED8D23D3D9CA3A0092D32F657E053_inline(L_234, L_237, NULL);
		V_14 = L_238;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_239 = V_0;
		int32_t L_240 = V_3;
		NullCheck(L_239);
		int32_t L_241 = L_240;
		int32_t L_242 = (L_239)->GetAt(static_cast<il2cpp_array_size_t>(L_241));
		if ((!(((uint32_t)L_242) == ((uint32_t)(-1)))))
		{
			goto IL_035c;
		}
	}
	{
		List_1_tD13CD97762EDE4928859DDC2999E6E2175B20A11** L_243 = ___above2;
		List_1_tD13CD97762EDE4928859DDC2999E6E2175B20A11* L_244 = *((List_1_tD13CD97762EDE4928859DDC2999E6E2175B20A11**)L_243);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_245 = V_12;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_246 = V_13;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_247 = V_14;
		Vertex_tB6D4D191E463D1653AA47DED15E41F21BA5A21FC* L_248 = (Vertex_tB6D4D191E463D1653AA47DED15E41F21BA5A21FC*)il2cpp_codegen_object_new(Vertex_tB6D4D191E463D1653AA47DED15E41F21BA5A21FC_il2cpp_TypeInfo_var);
		NullCheck(L_248);
		Vertex__ctor_mB8077F23FEF7A57733513EE841DCF8C906A9E704(L_248, L_245, L_246, L_247, NULL);
		ClippingVertex_tF5DB1E0668D7F574FF74C67BC6C91561FAF13E30 L_249;
		memset((&L_249), 0, sizeof(L_249));
		ClippingVertex__ctor_m449126CCE5B7596828D939C80C832B40FA77107D((&L_249), L_248, 0, (bool)0, /*hidden argument*/NULL);
		NullCheck(L_244);
		List_1_Add_mFB89FD2BEC65E65F1A68C47CBA4E02B6E8449495_inline(L_244, L_249, List_1_Add_mFB89FD2BEC65E65F1A68C47CBA4E02B6E8449495_RuntimeMethod_var);
		List_1_tD13CD97762EDE4928859DDC2999E6E2175B20A11** L_250 = ___below3;
		List_1_tD13CD97762EDE4928859DDC2999E6E2175B20A11* L_251 = *((List_1_tD13CD97762EDE4928859DDC2999E6E2175B20A11**)L_250);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_252 = V_12;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_253 = V_13;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_254 = V_14;
		Vertex_tB6D4D191E463D1653AA47DED15E41F21BA5A21FC* L_255 = (Vertex_tB6D4D191E463D1653AA47DED15E41F21BA5A21FC*)il2cpp_codegen_object_new(Vertex_tB6D4D191E463D1653AA47DED15E41F21BA5A21FC_il2cpp_TypeInfo_var);
		NullCheck(L_255);
		Vertex__ctor_mB8077F23FEF7A57733513EE841DCF8C906A9E704(L_255, L_252, L_253, L_254, NULL);
		ClippingVertex_tF5DB1E0668D7F574FF74C67BC6C91561FAF13E30 L_256;
		memset((&L_256), 0, sizeof(L_256));
		ClippingVertex__ctor_m449126CCE5B7596828D939C80C832B40FA77107D((&L_256), L_255, 0, (bool)0, /*hidden argument*/NULL);
		NullCheck(L_251);
		List_1_Add_mFB89FD2BEC65E65F1A68C47CBA4E02B6E8449495_inline(L_251, L_256, List_1_Add_mFB89FD2BEC65E65F1A68C47CBA4E02B6E8449495_RuntimeMethod_var);
		goto IL_038e;
	}

IL_035c:
	{
		List_1_tD13CD97762EDE4928859DDC2999E6E2175B20A11** L_257 = ___above2;
		List_1_tD13CD97762EDE4928859DDC2999E6E2175B20A11* L_258 = *((List_1_tD13CD97762EDE4928859DDC2999E6E2175B20A11**)L_257);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_259 = V_12;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_260 = V_13;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_261 = V_14;
		Vertex_tB6D4D191E463D1653AA47DED15E41F21BA5A21FC* L_262 = (Vertex_tB6D4D191E463D1653AA47DED15E41F21BA5A21FC*)il2cpp_codegen_object_new(Vertex_tB6D4D191E463D1653AA47DED15E41F21BA5A21FC_il2cpp_TypeInfo_var);
		NullCheck(L_262);
		Vertex__ctor_mB8077F23FEF7A57733513EE841DCF8C906A9E704(L_262, L_259, L_260, L_261, NULL);
		ClippingVertex_tF5DB1E0668D7F574FF74C67BC6C91561FAF13E30 L_263;
		memset((&L_263), 0, sizeof(L_263));
		ClippingVertex__ctor_m449126CCE5B7596828D939C80C832B40FA77107D((&L_263), L_262, 2, (bool)0, /*hidden argument*/NULL);
		NullCheck(L_258);
		List_1_Add_mFB89FD2BEC65E65F1A68C47CBA4E02B6E8449495_inline(L_258, L_263, List_1_Add_mFB89FD2BEC65E65F1A68C47CBA4E02B6E8449495_RuntimeMethod_var);
		List_1_tD13CD97762EDE4928859DDC2999E6E2175B20A11** L_264 = ___below3;
		List_1_tD13CD97762EDE4928859DDC2999E6E2175B20A11* L_265 = *((List_1_tD13CD97762EDE4928859DDC2999E6E2175B20A11**)L_264);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_266 = V_12;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_267 = V_13;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_268 = V_14;
		Vertex_tB6D4D191E463D1653AA47DED15E41F21BA5A21FC* L_269 = (Vertex_tB6D4D191E463D1653AA47DED15E41F21BA5A21FC*)il2cpp_codegen_object_new(Vertex_tB6D4D191E463D1653AA47DED15E41F21BA5A21FC_il2cpp_TypeInfo_var);
		NullCheck(L_269);
		Vertex__ctor_mB8077F23FEF7A57733513EE841DCF8C906A9E704(L_269, L_266, L_267, L_268, NULL);
		ClippingVertex_tF5DB1E0668D7F574FF74C67BC6C91561FAF13E30 L_270;
		memset((&L_270), 0, sizeof(L_270));
		ClippingVertex__ctor_m449126CCE5B7596828D939C80C832B40FA77107D((&L_270), L_269, 2, (bool)0, /*hidden argument*/NULL);
		NullCheck(L_265);
		List_1_Add_mFB89FD2BEC65E65F1A68C47CBA4E02B6E8449495_inline(L_265, L_270, List_1_Add_mFB89FD2BEC65E65F1A68C47CBA4E02B6E8449495_RuntimeMethod_var);
	}

IL_038e:
	{
		int32_t L_271 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_271, 1));
	}

IL_0392:
	{
		int32_t L_272 = V_3;
		List_1_t302A75244C10A0CEF3AC031C484C2772A9D30A6F* L_273 = ___vertices0;
		NullCheck(L_273);
		int32_t L_274;
		L_274 = List_1_get_Count_m8E2B23B32C1F3E24BA82A3784717FA771E38B208_inline(L_273, List_1_get_Count_m8E2B23B32C1F3E24BA82A3784717FA771E38B208_RuntimeMethod_var);
		if ((((int32_t)L_272) < ((int32_t)L_274)))
		{
			goto IL_0065;
		}
	}
	{
		List_1_tD13CD97762EDE4928859DDC2999E6E2175B20A11** L_275 = ___above2;
		List_1_tD13CD97762EDE4928859DDC2999E6E2175B20A11* L_276 = *((List_1_tD13CD97762EDE4928859DDC2999E6E2175B20A11**)L_275);
		NullCheck(L_276);
		int32_t L_277;
		L_277 = List_1_get_Count_m39BE269C49EF164BBA706DF15603809754CCD1F9_inline(L_276, List_1_get_Count_m39BE269C49EF164BBA706DF15603809754CCD1F9_RuntimeMethod_var);
		if (!L_277)
		{
			goto IL_03b7;
		}
	}
	{
		List_1_tD13CD97762EDE4928859DDC2999E6E2175B20A11** L_278 = ___above2;
		List_1_tD13CD97762EDE4928859DDC2999E6E2175B20A11* L_279 = *((List_1_tD13CD97762EDE4928859DDC2999E6E2175B20A11**)L_278);
		il2cpp_codegen_runtime_class_init_inline(Util_tBEDFF10A323370DC03D5CAB4FEF2AB8EFEB0D7D2_il2cpp_TypeInfo_var);
		int32_t L_280;
		L_280 = Util_CountVertexOnPlane_m89D8EE0BD96C4B02CA83B06A67E3AE32C08A2A8E(L_279, NULL);
		List_1_tD13CD97762EDE4928859DDC2999E6E2175B20A11** L_281 = ___above2;
		List_1_tD13CD97762EDE4928859DDC2999E6E2175B20A11* L_282 = *((List_1_tD13CD97762EDE4928859DDC2999E6E2175B20A11**)L_281);
		NullCheck(L_282);
		int32_t L_283;
		L_283 = List_1_get_Count_m39BE269C49EF164BBA706DF15603809754CCD1F9_inline(L_282, List_1_get_Count_m39BE269C49EF164BBA706DF15603809754CCD1F9_RuntimeMethod_var);
		if ((!(((uint32_t)L_280) == ((uint32_t)L_283))))
		{
			goto IL_03ba;
		}
	}

IL_03b7:
	{
		List_1_tD13CD97762EDE4928859DDC2999E6E2175B20A11** L_284 = ___above2;
		*((RuntimeObject**)L_284) = (RuntimeObject*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(RuntimeObject**)L_284, (void*)(RuntimeObject*)NULL);
	}

IL_03ba:
	{
		List_1_tD13CD97762EDE4928859DDC2999E6E2175B20A11** L_285 = ___below3;
		List_1_tD13CD97762EDE4928859DDC2999E6E2175B20A11* L_286 = *((List_1_tD13CD97762EDE4928859DDC2999E6E2175B20A11**)L_285);
		NullCheck(L_286);
		int32_t L_287;
		L_287 = List_1_get_Count_m39BE269C49EF164BBA706DF15603809754CCD1F9_inline(L_286, List_1_get_Count_m39BE269C49EF164BBA706DF15603809754CCD1F9_RuntimeMethod_var);
		if (!L_287)
		{
			goto IL_03d3;
		}
	}
	{
		List_1_tD13CD97762EDE4928859DDC2999E6E2175B20A11** L_288 = ___below3;
		List_1_tD13CD97762EDE4928859DDC2999E6E2175B20A11* L_289 = *((List_1_tD13CD97762EDE4928859DDC2999E6E2175B20A11**)L_288);
		il2cpp_codegen_runtime_class_init_inline(Util_tBEDFF10A323370DC03D5CAB4FEF2AB8EFEB0D7D2_il2cpp_TypeInfo_var);
		int32_t L_290;
		L_290 = Util_CountVertexOnPlane_m89D8EE0BD96C4B02CA83B06A67E3AE32C08A2A8E(L_289, NULL);
		List_1_tD13CD97762EDE4928859DDC2999E6E2175B20A11** L_291 = ___below3;
		List_1_tD13CD97762EDE4928859DDC2999E6E2175B20A11* L_292 = *((List_1_tD13CD97762EDE4928859DDC2999E6E2175B20A11**)L_291);
		NullCheck(L_292);
		int32_t L_293;
		L_293 = List_1_get_Count_m39BE269C49EF164BBA706DF15603809754CCD1F9_inline(L_292, List_1_get_Count_m39BE269C49EF164BBA706DF15603809754CCD1F9_RuntimeMethod_var);
		if ((!(((uint32_t)L_290) == ((uint32_t)L_293))))
		{
			goto IL_03d6;
		}
	}

IL_03d3:
	{
		List_1_tD13CD97762EDE4928859DDC2999E6E2175B20A11** L_294 = ___below3;
		*((RuntimeObject**)L_294) = (RuntimeObject*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(RuntimeObject**)L_294, (void*)(RuntimeObject*)NULL);
	}

IL_03d6:
	{
		return;
	}
}
// System.Void tripolygon.UModeler.Util::ClipByPlane(tripolygon.UModeler.Segment,tripolygon.UModeler.PlaneEx,tripolygon.UModeler.EditableMesh&,tripolygon.UModeler.EditableMesh&,tripolygon.UModeler.EPolygonFlag)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Util_ClipByPlane_mBAB98026EC7E83AD65F1077D75BDC9471AADCCDC (Segment_tC9A02427362D651880C6027436A738A68B4ACB3F* ___segment0, PlaneEx_t5512A7D4BF235ED6ED6F1F09A1621A1DCB31509D* ___plane1, EditableMesh_tF419912423C538859FC4EDB1F6ABD7314E01A476** ___above2, EditableMesh_tF419912423C538859FC4EDB1F6ABD7314E01A476** ___below3, int32_t ___polygonFlags4, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EClippingVertexTypeU5BU5D_tC73D7A9A6652F04884D6DCE03FE775D313E17D6D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EditableMeshU5BU5D_t404D4B72A1C23719E39B03C9ECACE067F1A04511_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EditableMesh_tF419912423C538859FC4EDB1F6ABD7314E01A476_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1U5BU5D_tA26F03D600203AEE7348CFBF89274A23C4FCE53E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1U5BU5D_tD580B54AE4CC7B8D11722E8FF7B59A303E0C6B2C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_m0DF26D386384974DAC8B0D1C07AC0EF19FF930A1_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_mBEA06988AE0C126241C9FFA08A9F2612A7A542A4_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_m0CFEC6DF8A1CFB6838EBE5970ADD5DDA4469FAB0_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_m27907A101D0DAF1C842184C25FF2FCF5F7116E9D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_m39BE269C49EF164BBA706DF15603809754CCD1F9_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_mA79590207FB644521F7A974F233A21E17FB60578_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_m6DF1DC5CD1B48E953F95D42B4899B75CC59BA29F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_mE2354D72C00BBCA64441D77732E04E9E56069425_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_t302A75244C10A0CEF3AC031C484C2772A9D30A6F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_tBD3EFF6C36C49D37E37AA532C06442E0AEC0544D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SimplePolygon_t5F51D3D1F485B3C377E0E40766EBFD86BA9D9385_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Util_tBEDFF10A323370DC03D5CAB4FEF2AB8EFEB0D7D2_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	List_1_tD13CD97762EDE4928859DDC2999E6E2175B20A11* V_0 = NULL;
	List_1_tD13CD97762EDE4928859DDC2999E6E2175B20A11* V_1 = NULL;
	PlaneEx_t5512A7D4BF235ED6ED6F1F09A1621A1DCB31509D* V_2 = NULL;
	List_1U5BU5D_tD580B54AE4CC7B8D11722E8FF7B59A303E0C6B2C* V_3 = NULL;
	EClippingVertexTypeU5BU5D_tC73D7A9A6652F04884D6DCE03FE775D313E17D6D* V_4 = NULL;
	List_1U5BU5D_tA26F03D600203AEE7348CFBF89274A23C4FCE53E* V_5 = NULL;
	EditableMeshU5BU5D_t404D4B72A1C23719E39B03C9ECACE067F1A04511* V_6 = NULL;
	SimplePolygon_t5F51D3D1F485B3C377E0E40766EBFD86BA9D9385* V_7 = NULL;
	SimplePolygon_t5F51D3D1F485B3C377E0E40766EBFD86BA9D9385* V_8 = NULL;
	int32_t V_9 = 0;
	int32_t V_10 = 0;
	List_1_t302A75244C10A0CEF3AC031C484C2772A9D30A6F* V_11 = NULL;
	List_1_tBD3EFF6C36C49D37E37AA532C06442E0AEC0544D* V_12 = NULL;
	int32_t V_13 = 0;
	int32_t V_14 = 0;
	int32_t V_15 = 0;
	int32_t V_16 = 0;
	int32_t V_17 = 0;
	int32_t V_18 = 0;
	int32_t V_19 = 0;
	{
		Segment_tC9A02427362D651880C6027436A738A68B4ACB3F* L_0 = ___segment0;
		if (L_0)
		{
			goto IL_000a;
		}
	}
	{
		EditableMesh_tF419912423C538859FC4EDB1F6ABD7314E01A476** L_1 = ___above2;
		*((RuntimeObject**)L_1) = (RuntimeObject*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(RuntimeObject**)L_1, (void*)(RuntimeObject*)NULL);
		EditableMesh_tF419912423C538859FC4EDB1F6ABD7314E01A476** L_2 = ___below3;
		*((RuntimeObject**)L_2) = (RuntimeObject*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(RuntimeObject**)L_2, (void*)(RuntimeObject*)NULL);
		return;
	}

IL_000a:
	{
		EditableMesh_tF419912423C538859FC4EDB1F6ABD7314E01A476** L_3 = ___above2;
		EditableMesh_tF419912423C538859FC4EDB1F6ABD7314E01A476* L_4 = (EditableMesh_tF419912423C538859FC4EDB1F6ABD7314E01A476*)il2cpp_codegen_object_new(EditableMesh_tF419912423C538859FC4EDB1F6ABD7314E01A476_il2cpp_TypeInfo_var);
		NullCheck(L_4);
		EditableMesh__ctor_m4E761AC673DEA77B1C3E421931D3BA2AFDD855C1(L_4, NULL);
		*((RuntimeObject**)L_3) = (RuntimeObject*)L_4;
		Il2CppCodeGenWriteBarrier((void**)(RuntimeObject**)L_3, (void*)(RuntimeObject*)L_4);
		EditableMesh_tF419912423C538859FC4EDB1F6ABD7314E01A476** L_5 = ___below3;
		EditableMesh_tF419912423C538859FC4EDB1F6ABD7314E01A476* L_6 = (EditableMesh_tF419912423C538859FC4EDB1F6ABD7314E01A476*)il2cpp_codegen_object_new(EditableMesh_tF419912423C538859FC4EDB1F6ABD7314E01A476_il2cpp_TypeInfo_var);
		NullCheck(L_6);
		EditableMesh__ctor_m4E761AC673DEA77B1C3E421931D3BA2AFDD855C1(L_6, NULL);
		*((RuntimeObject**)L_5) = (RuntimeObject*)L_6;
		Il2CppCodeGenWriteBarrier((void**)(RuntimeObject**)L_5, (void*)(RuntimeObject*)L_6);
		V_0 = (List_1_tD13CD97762EDE4928859DDC2999E6E2175B20A11*)NULL;
		V_1 = (List_1_tD13CD97762EDE4928859DDC2999E6E2175B20A11*)NULL;
		Segment_tC9A02427362D651880C6027436A738A68B4ACB3F* L_7 = ___segment0;
		NullCheck(L_7);
		List_1_t302A75244C10A0CEF3AC031C484C2772A9D30A6F* L_8 = L_7->___vertices_0;
		PlaneEx_t5512A7D4BF235ED6ED6F1F09A1621A1DCB31509D* L_9 = ___plane1;
		il2cpp_codegen_runtime_class_init_inline(Util_tBEDFF10A323370DC03D5CAB4FEF2AB8EFEB0D7D2_il2cpp_TypeInfo_var);
		Util_ClipByPlane_m4B4209D0EECEAC8788E27258020F65C3BAA4B736(L_8, L_9, (&V_0), (&V_1), NULL);
		Segment_tC9A02427362D651880C6027436A738A68B4ACB3F* L_10 = ___segment0;
		NullCheck(L_10);
		List_1_t302A75244C10A0CEF3AC031C484C2772A9D30A6F* L_11 = L_10->___vertices_0;
		PlaneEx_t5512A7D4BF235ED6ED6F1F09A1621A1DCB31509D* L_12;
		L_12 = MathUtil_ComputePlane_m30938DE934DEA97A7E710637AA461090894FE219(L_11, NULL);
		V_2 = L_12;
		List_1_tD13CD97762EDE4928859DDC2999E6E2175B20A11* L_13 = V_0;
		if (!L_13)
		{
			goto IL_003e;
		}
	}
	{
		List_1_tD13CD97762EDE4928859DDC2999E6E2175B20A11* L_14 = V_1;
		if (L_14)
		{
			goto IL_00af;
		}
	}

IL_003e:
	{
		List_1_tD13CD97762EDE4928859DDC2999E6E2175B20A11* L_15 = V_0;
		if (!L_15)
		{
			goto IL_0076;
		}
	}
	{
		List_1_tD13CD97762EDE4928859DDC2999E6E2175B20A11* L_16 = V_0;
		il2cpp_codegen_runtime_class_init_inline(Util_tBEDFF10A323370DC03D5CAB4FEF2AB8EFEB0D7D2_il2cpp_TypeInfo_var);
		List_1_t302A75244C10A0CEF3AC031C484C2772A9D30A6F* L_17;
		L_17 = Util_FromClippingVerticesToVertices_m91FB3F76B9597D3FC8324D59483337872C437E37(L_16, NULL);
		PlaneEx_t5512A7D4BF235ED6ED6F1F09A1621A1DCB31509D* L_18 = V_2;
		int32_t L_19 = ___polygonFlags4;
		SimplePolygon_t5F51D3D1F485B3C377E0E40766EBFD86BA9D9385* L_20 = (SimplePolygon_t5F51D3D1F485B3C377E0E40766EBFD86BA9D9385*)il2cpp_codegen_object_new(SimplePolygon_t5F51D3D1F485B3C377E0E40766EBFD86BA9D9385_il2cpp_TypeInfo_var);
		NullCheck(L_20);
		SimplePolygon__ctor_m075A96EE98FE20B45D2B499E364AB03432551D67(L_20, L_17, L_18, (bool)0, L_19, NULL);
		V_7 = L_20;
		SimplePolygon_t5F51D3D1F485B3C377E0E40766EBFD86BA9D9385* L_21 = V_7;
		NullCheck(L_21);
		bool L_22;
		L_22 = SimplePolygon_IsValid_m4F619A7FC8918E4C286BBBDFE407E5CF17F097F5(L_21, (bool)0, NULL);
		if (!L_22)
		{
			goto IL_0070;
		}
	}
	{
		SimplePolygon_t5F51D3D1F485B3C377E0E40766EBFD86BA9D9385* L_23 = V_7;
		NullCheck(L_23);
		bool L_24;
		L_24 = SimplePolygon_IsOpen_m706572246C373B3472B0F4F4E92D43DDE2CC7017(L_23, NULL);
		if (L_24)
		{
			goto IL_0070;
		}
	}
	{
		EditableMesh_tF419912423C538859FC4EDB1F6ABD7314E01A476** L_25 = ___above2;
		EditableMesh_tF419912423C538859FC4EDB1F6ABD7314E01A476* L_26 = *((EditableMesh_tF419912423C538859FC4EDB1F6ABD7314E01A476**)L_25);
		SimplePolygon_t5F51D3D1F485B3C377E0E40766EBFD86BA9D9385* L_27 = V_7;
		NullCheck(L_26);
		EditableMesh_AddPolygon_mF57867AD29D5AB63CD45C8E13373C0C93DF53FFD(L_26, L_27, NULL);
		goto IL_0073;
	}

IL_0070:
	{
		EditableMesh_tF419912423C538859FC4EDB1F6ABD7314E01A476** L_28 = ___above2;
		*((RuntimeObject**)L_28) = (RuntimeObject*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(RuntimeObject**)L_28, (void*)(RuntimeObject*)NULL);
	}

IL_0073:
	{
		EditableMesh_tF419912423C538859FC4EDB1F6ABD7314E01A476** L_29 = ___below3;
		*((RuntimeObject**)L_29) = (RuntimeObject*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(RuntimeObject**)L_29, (void*)(RuntimeObject*)NULL);
	}

IL_0076:
	{
		List_1_tD13CD97762EDE4928859DDC2999E6E2175B20A11* L_30 = V_1;
		if (!L_30)
		{
			goto IL_00ae;
		}
	}
	{
		List_1_tD13CD97762EDE4928859DDC2999E6E2175B20A11* L_31 = V_1;
		il2cpp_codegen_runtime_class_init_inline(Util_tBEDFF10A323370DC03D5CAB4FEF2AB8EFEB0D7D2_il2cpp_TypeInfo_var);
		List_1_t302A75244C10A0CEF3AC031C484C2772A9D30A6F* L_32;
		L_32 = Util_FromClippingVerticesToVertices_m91FB3F76B9597D3FC8324D59483337872C437E37(L_31, NULL);
		PlaneEx_t5512A7D4BF235ED6ED6F1F09A1621A1DCB31509D* L_33 = V_2;
		int32_t L_34 = ___polygonFlags4;
		SimplePolygon_t5F51D3D1F485B3C377E0E40766EBFD86BA9D9385* L_35 = (SimplePolygon_t5F51D3D1F485B3C377E0E40766EBFD86BA9D9385*)il2cpp_codegen_object_new(SimplePolygon_t5F51D3D1F485B3C377E0E40766EBFD86BA9D9385_il2cpp_TypeInfo_var);
		NullCheck(L_35);
		SimplePolygon__ctor_m075A96EE98FE20B45D2B499E364AB03432551D67(L_35, L_32, L_33, (bool)0, L_34, NULL);
		V_8 = L_35;
		SimplePolygon_t5F51D3D1F485B3C377E0E40766EBFD86BA9D9385* L_36 = V_8;
		NullCheck(L_36);
		bool L_37;
		L_37 = SimplePolygon_IsValid_m4F619A7FC8918E4C286BBBDFE407E5CF17F097F5(L_36, (bool)0, NULL);
		if (!L_37)
		{
			goto IL_00a8;
		}
	}
	{
		SimplePolygon_t5F51D3D1F485B3C377E0E40766EBFD86BA9D9385* L_38 = V_8;
		NullCheck(L_38);
		bool L_39;
		L_39 = SimplePolygon_IsOpen_m706572246C373B3472B0F4F4E92D43DDE2CC7017(L_38, NULL);
		if (L_39)
		{
			goto IL_00a8;
		}
	}
	{
		EditableMesh_tF419912423C538859FC4EDB1F6ABD7314E01A476** L_40 = ___below3;
		EditableMesh_tF419912423C538859FC4EDB1F6ABD7314E01A476* L_41 = *((EditableMesh_tF419912423C538859FC4EDB1F6ABD7314E01A476**)L_40);
		SimplePolygon_t5F51D3D1F485B3C377E0E40766EBFD86BA9D9385* L_42 = V_8;
		NullCheck(L_41);
		EditableMesh_AddPolygon_mF57867AD29D5AB63CD45C8E13373C0C93DF53FFD(L_41, L_42, NULL);
		goto IL_00ab;
	}

IL_00a8:
	{
		EditableMesh_tF419912423C538859FC4EDB1F6ABD7314E01A476** L_43 = ___below3;
		*((RuntimeObject**)L_43) = (RuntimeObject*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(RuntimeObject**)L_43, (void*)(RuntimeObject*)NULL);
	}

IL_00ab:
	{
		EditableMesh_tF419912423C538859FC4EDB1F6ABD7314E01A476** L_44 = ___above2;
		*((RuntimeObject**)L_44) = (RuntimeObject*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(RuntimeObject**)L_44, (void*)(RuntimeObject*)NULL);
	}

IL_00ae:
	{
		return;
	}

IL_00af:
	{
		List_1U5BU5D_tD580B54AE4CC7B8D11722E8FF7B59A303E0C6B2C* L_45 = (List_1U5BU5D_tD580B54AE4CC7B8D11722E8FF7B59A303E0C6B2C*)(List_1U5BU5D_tD580B54AE4CC7B8D11722E8FF7B59A303E0C6B2C*)SZArrayNew(List_1U5BU5D_tD580B54AE4CC7B8D11722E8FF7B59A303E0C6B2C_il2cpp_TypeInfo_var, (uint32_t)2);
		List_1U5BU5D_tD580B54AE4CC7B8D11722E8FF7B59A303E0C6B2C* L_46 = L_45;
		List_1_tD13CD97762EDE4928859DDC2999E6E2175B20A11* L_47 = V_0;
		NullCheck(L_46);
		ArrayElementTypeCheck (L_46, L_47);
		(L_46)->SetAt(static_cast<il2cpp_array_size_t>(0), (List_1_tD13CD97762EDE4928859DDC2999E6E2175B20A11*)L_47);
		List_1U5BU5D_tD580B54AE4CC7B8D11722E8FF7B59A303E0C6B2C* L_48 = L_46;
		List_1_tD13CD97762EDE4928859DDC2999E6E2175B20A11* L_49 = V_1;
		NullCheck(L_48);
		ArrayElementTypeCheck (L_48, L_49);
		(L_48)->SetAt(static_cast<il2cpp_array_size_t>(1), (List_1_tD13CD97762EDE4928859DDC2999E6E2175B20A11*)L_49);
		V_3 = L_48;
		EClippingVertexTypeU5BU5D_tC73D7A9A6652F04884D6DCE03FE775D313E17D6D* L_50 = (EClippingVertexTypeU5BU5D_tC73D7A9A6652F04884D6DCE03FE775D313E17D6D*)(EClippingVertexTypeU5BU5D_tC73D7A9A6652F04884D6DCE03FE775D313E17D6D*)SZArrayNew(EClippingVertexTypeU5BU5D_tC73D7A9A6652F04884D6DCE03FE775D313E17D6D_il2cpp_TypeInfo_var, (uint32_t)2);
		EClippingVertexTypeU5BU5D_tC73D7A9A6652F04884D6DCE03FE775D313E17D6D* L_51 = L_50;
		NullCheck(L_51);
		(L_51)->SetAt(static_cast<il2cpp_array_size_t>(1), (int32_t)2);
		V_4 = L_51;
		List_1U5BU5D_tA26F03D600203AEE7348CFBF89274A23C4FCE53E* L_52 = (List_1U5BU5D_tA26F03D600203AEE7348CFBF89274A23C4FCE53E*)(List_1U5BU5D_tA26F03D600203AEE7348CFBF89274A23C4FCE53E*)SZArrayNew(List_1U5BU5D_tA26F03D600203AEE7348CFBF89274A23C4FCE53E_il2cpp_TypeInfo_var, (uint32_t)2);
		List_1U5BU5D_tA26F03D600203AEE7348CFBF89274A23C4FCE53E* L_53 = L_52;
		List_1_tBD3EFF6C36C49D37E37AA532C06442E0AEC0544D* L_54 = (List_1_tBD3EFF6C36C49D37E37AA532C06442E0AEC0544D*)il2cpp_codegen_object_new(List_1_tBD3EFF6C36C49D37E37AA532C06442E0AEC0544D_il2cpp_TypeInfo_var);
		NullCheck(L_54);
		List_1__ctor_m0CFEC6DF8A1CFB6838EBE5970ADD5DDA4469FAB0(L_54, List_1__ctor_m0CFEC6DF8A1CFB6838EBE5970ADD5DDA4469FAB0_RuntimeMethod_var);
		NullCheck(L_53);
		ArrayElementTypeCheck (L_53, L_54);
		(L_53)->SetAt(static_cast<il2cpp_array_size_t>(0), (List_1_tBD3EFF6C36C49D37E37AA532C06442E0AEC0544D*)L_54);
		List_1U5BU5D_tA26F03D600203AEE7348CFBF89274A23C4FCE53E* L_55 = L_53;
		List_1_tBD3EFF6C36C49D37E37AA532C06442E0AEC0544D* L_56 = (List_1_tBD3EFF6C36C49D37E37AA532C06442E0AEC0544D*)il2cpp_codegen_object_new(List_1_tBD3EFF6C36C49D37E37AA532C06442E0AEC0544D_il2cpp_TypeInfo_var);
		NullCheck(L_56);
		List_1__ctor_m0CFEC6DF8A1CFB6838EBE5970ADD5DDA4469FAB0(L_56, List_1__ctor_m0CFEC6DF8A1CFB6838EBE5970ADD5DDA4469FAB0_RuntimeMethod_var);
		NullCheck(L_55);
		ArrayElementTypeCheck (L_55, L_56);
		(L_55)->SetAt(static_cast<il2cpp_array_size_t>(1), (List_1_tBD3EFF6C36C49D37E37AA532C06442E0AEC0544D*)L_56);
		V_5 = L_55;
		EditableMeshU5BU5D_t404D4B72A1C23719E39B03C9ECACE067F1A04511* L_57 = (EditableMeshU5BU5D_t404D4B72A1C23719E39B03C9ECACE067F1A04511*)(EditableMeshU5BU5D_t404D4B72A1C23719E39B03C9ECACE067F1A04511*)SZArrayNew(EditableMeshU5BU5D_t404D4B72A1C23719E39B03C9ECACE067F1A04511_il2cpp_TypeInfo_var, (uint32_t)2);
		EditableMeshU5BU5D_t404D4B72A1C23719E39B03C9ECACE067F1A04511* L_58 = L_57;
		EditableMesh_tF419912423C538859FC4EDB1F6ABD7314E01A476** L_59 = ___above2;
		EditableMesh_tF419912423C538859FC4EDB1F6ABD7314E01A476* L_60 = *((EditableMesh_tF419912423C538859FC4EDB1F6ABD7314E01A476**)L_59);
		NullCheck(L_58);
		ArrayElementTypeCheck (L_58, L_60);
		(L_58)->SetAt(static_cast<il2cpp_array_size_t>(0), (EditableMesh_tF419912423C538859FC4EDB1F6ABD7314E01A476*)L_60);
		EditableMeshU5BU5D_t404D4B72A1C23719E39B03C9ECACE067F1A04511* L_61 = L_58;
		EditableMesh_tF419912423C538859FC4EDB1F6ABD7314E01A476** L_62 = ___below3;
		EditableMesh_tF419912423C538859FC4EDB1F6ABD7314E01A476* L_63 = *((EditableMesh_tF419912423C538859FC4EDB1F6ABD7314E01A476**)L_62);
		NullCheck(L_61);
		ArrayElementTypeCheck (L_61, L_63);
		(L_61)->SetAt(static_cast<il2cpp_array_size_t>(1), (EditableMesh_tF419912423C538859FC4EDB1F6ABD7314E01A476*)L_63);
		V_6 = L_61;
		V_9 = 0;
		goto IL_034c;
	}

IL_00fc:
	{
		V_10 = (-1);
		V_13 = 0;
		goto IL_0191;
	}

IL_0107:
	{
		int32_t L_64 = V_13;
		List_1U5BU5D_tD580B54AE4CC7B8D11722E8FF7B59A303E0C6B2C* L_65 = V_3;
		int32_t L_66 = V_9;
		NullCheck(L_65);
		int32_t L_67 = L_66;
		List_1_tD13CD97762EDE4928859DDC2999E6E2175B20A11* L_68 = (L_65)->GetAt(static_cast<il2cpp_array_size_t>(L_67));
		NullCheck(L_68);
		int32_t L_69;
		L_69 = List_1_get_Count_m39BE269C49EF164BBA706DF15603809754CCD1F9_inline(L_68, List_1_get_Count_m39BE269C49EF164BBA706DF15603809754CCD1F9_RuntimeMethod_var);
		V_14 = ((int32_t)(((int32_t)il2cpp_codegen_add(L_64, 1))%L_69));
		PlaneEx_t5512A7D4BF235ED6ED6F1F09A1621A1DCB31509D* L_70 = ___plane1;
		List_1U5BU5D_tD580B54AE4CC7B8D11722E8FF7B59A303E0C6B2C* L_71 = V_3;
		int32_t L_72 = V_9;
		NullCheck(L_71);
		int32_t L_73 = L_72;
		List_1_tD13CD97762EDE4928859DDC2999E6E2175B20A11* L_74 = (L_71)->GetAt(static_cast<il2cpp_array_size_t>(L_73));
		int32_t L_75 = V_13;
		NullCheck(L_74);
		ClippingVertex_tF5DB1E0668D7F574FF74C67BC6C91561FAF13E30 L_76;
		L_76 = List_1_get_Item_mE2354D72C00BBCA64441D77732E04E9E56069425(L_74, L_75, List_1_get_Item_mE2354D72C00BBCA64441D77732E04E9E56069425_RuntimeMethod_var);
		Vertex_tB6D4D191E463D1653AA47DED15E41F21BA5A21FC* L_77 = L_76.___vtx_0;
		NullCheck(L_77);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_78 = L_77->___pos_0;
		NullCheck(L_70);
		bool L_79;
		L_79 = PlaneEx_IsOnPlane_mB7389A07752E3D2329841098DA4E9F37E5F4765C(L_70, L_78, NULL);
		if (!L_79)
		{
			goto IL_018b;
		}
	}
	{
		List_1U5BU5D_tD580B54AE4CC7B8D11722E8FF7B59A303E0C6B2C* L_80 = V_3;
		int32_t L_81 = V_9;
		NullCheck(L_80);
		int32_t L_82 = L_81;
		List_1_tD13CD97762EDE4928859DDC2999E6E2175B20A11* L_83 = (L_80)->GetAt(static_cast<il2cpp_array_size_t>(L_82));
		int32_t L_84 = V_13;
		NullCheck(L_83);
		ClippingVertex_tF5DB1E0668D7F574FF74C67BC6C91561FAF13E30 L_85;
		L_85 = List_1_get_Item_mE2354D72C00BBCA64441D77732E04E9E56069425(L_83, L_84, List_1_get_Item_mE2354D72C00BBCA64441D77732E04E9E56069425_RuntimeMethod_var);
		int32_t L_86 = L_85.___type_1;
		EClippingVertexTypeU5BU5D_tC73D7A9A6652F04884D6DCE03FE775D313E17D6D* L_87 = V_4;
		int32_t L_88 = V_9;
		NullCheck(L_87);
		int32_t L_89 = L_88;
		int32_t L_90 = (int32_t)(L_87)->GetAt(static_cast<il2cpp_array_size_t>(L_89));
		if ((!(((uint32_t)L_86) == ((uint32_t)L_90))))
		{
			goto IL_018b;
		}
	}
	{
		PlaneEx_t5512A7D4BF235ED6ED6F1F09A1621A1DCB31509D* L_91 = ___plane1;
		List_1U5BU5D_tD580B54AE4CC7B8D11722E8FF7B59A303E0C6B2C* L_92 = V_3;
		int32_t L_93 = V_9;
		NullCheck(L_92);
		int32_t L_94 = L_93;
		List_1_tD13CD97762EDE4928859DDC2999E6E2175B20A11* L_95 = (L_92)->GetAt(static_cast<il2cpp_array_size_t>(L_94));
		int32_t L_96 = V_14;
		NullCheck(L_95);
		ClippingVertex_tF5DB1E0668D7F574FF74C67BC6C91561FAF13E30 L_97;
		L_97 = List_1_get_Item_mE2354D72C00BBCA64441D77732E04E9E56069425(L_95, L_96, List_1_get_Item_mE2354D72C00BBCA64441D77732E04E9E56069425_RuntimeMethod_var);
		Vertex_tB6D4D191E463D1653AA47DED15E41F21BA5A21FC* L_98 = L_97.___vtx_0;
		NullCheck(L_98);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_99 = L_98->___pos_0;
		NullCheck(L_91);
		bool L_100;
		L_100 = PlaneEx_IsOnPlane_mB7389A07752E3D2329841098DA4E9F37E5F4765C(L_91, L_99, NULL);
		if (!L_100)
		{
			goto IL_0185;
		}
	}
	{
		List_1U5BU5D_tD580B54AE4CC7B8D11722E8FF7B59A303E0C6B2C* L_101 = V_3;
		int32_t L_102 = V_9;
		NullCheck(L_101);
		int32_t L_103 = L_102;
		List_1_tD13CD97762EDE4928859DDC2999E6E2175B20A11* L_104 = (L_101)->GetAt(static_cast<il2cpp_array_size_t>(L_103));
		int32_t L_105 = V_14;
		NullCheck(L_104);
		ClippingVertex_tF5DB1E0668D7F574FF74C67BC6C91561FAF13E30 L_106;
		L_106 = List_1_get_Item_mE2354D72C00BBCA64441D77732E04E9E56069425(L_104, L_105, List_1_get_Item_mE2354D72C00BBCA64441D77732E04E9E56069425_RuntimeMethod_var);
		int32_t L_107 = L_106.___type_1;
		EClippingVertexTypeU5BU5D_tC73D7A9A6652F04884D6DCE03FE775D313E17D6D* L_108 = V_4;
		int32_t L_109 = V_9;
		NullCheck(L_108);
		int32_t L_110 = L_109;
		int32_t L_111 = (int32_t)(L_108)->GetAt(static_cast<il2cpp_array_size_t>(L_110));
		if ((!(((uint32_t)L_107) == ((uint32_t)L_111))))
		{
			goto IL_0185;
		}
	}
	{
		int32_t L_112 = V_14;
		V_10 = L_112;
		goto IL_01a1;
	}

IL_0185:
	{
		int32_t L_113 = V_13;
		V_10 = L_113;
		goto IL_01a1;
	}

IL_018b:
	{
		int32_t L_114 = V_13;
		V_13 = ((int32_t)il2cpp_codegen_add(L_114, 1));
	}

IL_0191:
	{
		int32_t L_115 = V_13;
		List_1U5BU5D_tD580B54AE4CC7B8D11722E8FF7B59A303E0C6B2C* L_116 = V_3;
		int32_t L_117 = V_9;
		NullCheck(L_116);
		int32_t L_118 = L_117;
		List_1_tD13CD97762EDE4928859DDC2999E6E2175B20A11* L_119 = (L_116)->GetAt(static_cast<il2cpp_array_size_t>(L_118));
		NullCheck(L_119);
		int32_t L_120;
		L_120 = List_1_get_Count_m39BE269C49EF164BBA706DF15603809754CCD1F9_inline(L_119, List_1_get_Count_m39BE269C49EF164BBA706DF15603809754CCD1F9_RuntimeMethod_var);
		if ((((int32_t)L_115) < ((int32_t)L_120)))
		{
			goto IL_0107;
		}
	}

IL_01a1:
	{
		int32_t L_121 = V_10;
		if ((!(((uint32_t)L_121) == ((uint32_t)(-1)))))
		{
			goto IL_01a9;
		}
	}
	{
		V_10 = 0;
	}

IL_01a9:
	{
		V_11 = (List_1_t302A75244C10A0CEF3AC031C484C2772A9D30A6F*)NULL;
		List_1U5BU5D_tA26F03D600203AEE7348CFBF89274A23C4FCE53E* L_122 = V_5;
		int32_t L_123 = V_9;
		NullCheck(L_122);
		int32_t L_124 = L_123;
		List_1_tBD3EFF6C36C49D37E37AA532C06442E0AEC0544D* L_125 = (L_122)->GetAt(static_cast<il2cpp_array_size_t>(L_124));
		V_12 = L_125;
		V_15 = 0;
		int32_t L_126 = V_10;
		V_16 = L_126;
		goto IL_024a;
	}

IL_01bf:
	{
		int32_t L_127 = V_16;
		List_1U5BU5D_tD580B54AE4CC7B8D11722E8FF7B59A303E0C6B2C* L_128 = V_3;
		int32_t L_129 = V_9;
		NullCheck(L_128);
		int32_t L_130 = L_129;
		List_1_tD13CD97762EDE4928859DDC2999E6E2175B20A11* L_131 = (L_128)->GetAt(static_cast<il2cpp_array_size_t>(L_130));
		NullCheck(L_131);
		int32_t L_132;
		L_132 = List_1_get_Count_m39BE269C49EF164BBA706DF15603809754CCD1F9_inline(L_131, List_1_get_Count_m39BE269C49EF164BBA706DF15603809754CCD1F9_RuntimeMethod_var);
		V_17 = ((int32_t)(L_127%L_132));
		List_1_t302A75244C10A0CEF3AC031C484C2772A9D30A6F* L_133 = V_11;
		if (!L_133)
		{
			goto IL_01e8;
		}
	}
	{
		List_1_t302A75244C10A0CEF3AC031C484C2772A9D30A6F* L_134 = V_11;
		List_1U5BU5D_tD580B54AE4CC7B8D11722E8FF7B59A303E0C6B2C* L_135 = V_3;
		int32_t L_136 = V_9;
		NullCheck(L_135);
		int32_t L_137 = L_136;
		List_1_tD13CD97762EDE4928859DDC2999E6E2175B20A11* L_138 = (L_135)->GetAt(static_cast<il2cpp_array_size_t>(L_137));
		int32_t L_139 = V_17;
		NullCheck(L_138);
		ClippingVertex_tF5DB1E0668D7F574FF74C67BC6C91561FAF13E30 L_140;
		L_140 = List_1_get_Item_mE2354D72C00BBCA64441D77732E04E9E56069425(L_138, L_139, List_1_get_Item_mE2354D72C00BBCA64441D77732E04E9E56069425_RuntimeMethod_var);
		Vertex_tB6D4D191E463D1653AA47DED15E41F21BA5A21FC* L_141 = L_140.___vtx_0;
		NullCheck(L_134);
		List_1_Add_mBEA06988AE0C126241C9FFA08A9F2612A7A542A4_inline(L_134, L_141, List_1_Add_mBEA06988AE0C126241C9FFA08A9F2612A7A542A4_RuntimeMethod_var);
	}

IL_01e8:
	{
		PlaneEx_t5512A7D4BF235ED6ED6F1F09A1621A1DCB31509D* L_142 = ___plane1;
		List_1U5BU5D_tD580B54AE4CC7B8D11722E8FF7B59A303E0C6B2C* L_143 = V_3;
		int32_t L_144 = V_9;
		NullCheck(L_143);
		int32_t L_145 = L_144;
		List_1_tD13CD97762EDE4928859DDC2999E6E2175B20A11* L_146 = (L_143)->GetAt(static_cast<il2cpp_array_size_t>(L_145));
		int32_t L_147 = V_17;
		NullCheck(L_146);
		ClippingVertex_tF5DB1E0668D7F574FF74C67BC6C91561FAF13E30 L_148;
		L_148 = List_1_get_Item_mE2354D72C00BBCA64441D77732E04E9E56069425(L_146, L_147, List_1_get_Item_mE2354D72C00BBCA64441D77732E04E9E56069425_RuntimeMethod_var);
		Vertex_tB6D4D191E463D1653AA47DED15E41F21BA5A21FC* L_149 = L_148.___vtx_0;
		NullCheck(L_149);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_150 = L_149->___pos_0;
		NullCheck(L_142);
		bool L_151;
		L_151 = PlaneEx_IsOnPlane_mB7389A07752E3D2329841098DA4E9F37E5F4765C(L_142, L_150, NULL);
		if (!L_151)
		{
			goto IL_023e;
		}
	}
	{
		List_1_t302A75244C10A0CEF3AC031C484C2772A9D30A6F* L_152 = V_11;
		if (L_152)
		{
			goto IL_0229;
		}
	}
	{
		List_1_t302A75244C10A0CEF3AC031C484C2772A9D30A6F* L_153 = (List_1_t302A75244C10A0CEF3AC031C484C2772A9D30A6F*)il2cpp_codegen_object_new(List_1_t302A75244C10A0CEF3AC031C484C2772A9D30A6F_il2cpp_TypeInfo_var);
		NullCheck(L_153);
		List_1__ctor_m27907A101D0DAF1C842184C25FF2FCF5F7116E9D(L_153, List_1__ctor_m27907A101D0DAF1C842184C25FF2FCF5F7116E9D_RuntimeMethod_var);
		V_11 = L_153;
		List_1_t302A75244C10A0CEF3AC031C484C2772A9D30A6F* L_154 = V_11;
		List_1U5BU5D_tD580B54AE4CC7B8D11722E8FF7B59A303E0C6B2C* L_155 = V_3;
		int32_t L_156 = V_9;
		NullCheck(L_155);
		int32_t L_157 = L_156;
		List_1_tD13CD97762EDE4928859DDC2999E6E2175B20A11* L_158 = (L_155)->GetAt(static_cast<il2cpp_array_size_t>(L_157));
		int32_t L_159 = V_17;
		NullCheck(L_158);
		ClippingVertex_tF5DB1E0668D7F574FF74C67BC6C91561FAF13E30 L_160;
		L_160 = List_1_get_Item_mE2354D72C00BBCA64441D77732E04E9E56069425(L_158, L_159, List_1_get_Item_mE2354D72C00BBCA64441D77732E04E9E56069425_RuntimeMethod_var);
		Vertex_tB6D4D191E463D1653AA47DED15E41F21BA5A21FC* L_161 = L_160.___vtx_0;
		NullCheck(L_154);
		List_1_Add_mBEA06988AE0C126241C9FFA08A9F2612A7A542A4_inline(L_154, L_161, List_1_Add_mBEA06988AE0C126241C9FFA08A9F2612A7A542A4_RuntimeMethod_var);
		goto IL_023e;
	}

IL_0229:
	{
		List_1_tBD3EFF6C36C49D37E37AA532C06442E0AEC0544D* L_162 = V_12;
		List_1_t302A75244C10A0CEF3AC031C484C2772A9D30A6F* L_163 = V_11;
		int32_t L_164 = ___polygonFlags4;
		SimplePolygon_t5F51D3D1F485B3C377E0E40766EBFD86BA9D9385* L_165 = (SimplePolygon_t5F51D3D1F485B3C377E0E40766EBFD86BA9D9385*)il2cpp_codegen_object_new(SimplePolygon_t5F51D3D1F485B3C377E0E40766EBFD86BA9D9385_il2cpp_TypeInfo_var);
		NullCheck(L_165);
		SimplePolygon__ctor_m075A96EE98FE20B45D2B499E364AB03432551D67(L_165, L_163, (PlaneEx_t5512A7D4BF235ED6ED6F1F09A1621A1DCB31509D*)NULL, (bool)0, L_164, NULL);
		NullCheck(L_162);
		List_1_Add_m0DF26D386384974DAC8B0D1C07AC0EF19FF930A1_inline(L_162, L_165, List_1_Add_m0DF26D386384974DAC8B0D1C07AC0EF19FF930A1_RuntimeMethod_var);
		V_11 = (List_1_t302A75244C10A0CEF3AC031C484C2772A9D30A6F*)NULL;
	}

IL_023e:
	{
		int32_t L_166 = V_15;
		V_15 = ((int32_t)il2cpp_codegen_add(L_166, 1));
		int32_t L_167 = V_16;
		V_16 = ((int32_t)il2cpp_codegen_add(L_167, 1));
	}

IL_024a:
	{
		int32_t L_168 = V_15;
		List_1U5BU5D_tD580B54AE4CC7B8D11722E8FF7B59A303E0C6B2C* L_169 = V_3;
		int32_t L_170 = V_9;
		NullCheck(L_169);
		int32_t L_171 = L_170;
		List_1_tD13CD97762EDE4928859DDC2999E6E2175B20A11* L_172 = (L_169)->GetAt(static_cast<il2cpp_array_size_t>(L_171));
		NullCheck(L_172);
		int32_t L_173;
		L_173 = List_1_get_Count_m39BE269C49EF164BBA706DF15603809754CCD1F9_inline(L_172, List_1_get_Count_m39BE269C49EF164BBA706DF15603809754CCD1F9_RuntimeMethod_var);
		if ((((int32_t)L_168) < ((int32_t)L_173)))
		{
			goto IL_01bf;
		}
	}
	{
		V_18 = 0;
		goto IL_02bd;
	}

IL_025f:
	{
		List_1_tBD3EFF6C36C49D37E37AA532C06442E0AEC0544D* L_174 = V_12;
		int32_t L_175 = V_18;
		NullCheck(L_174);
		SimplePolygon_t5F51D3D1F485B3C377E0E40766EBFD86BA9D9385* L_176;
		L_176 = List_1_get_Item_m6DF1DC5CD1B48E953F95D42B4899B75CC59BA29F(L_174, L_175, List_1_get_Item_m6DF1DC5CD1B48E953F95D42B4899B75CC59BA29F_RuntimeMethod_var);
		NullCheck(L_176);
		PlaneEx_t5512A7D4BF235ED6ED6F1F09A1621A1DCB31509D* L_177;
		L_177 = SimplePolygon_get_plane_mF42E1C3275AB8ED168516709C333F0875315D92D(L_176, NULL);
		if (!L_177)
		{
			goto IL_02b7;
		}
	}
	{
		List_1_tBD3EFF6C36C49D37E37AA532C06442E0AEC0544D* L_178 = V_12;
		int32_t L_179 = V_18;
		NullCheck(L_178);
		SimplePolygon_t5F51D3D1F485B3C377E0E40766EBFD86BA9D9385* L_180;
		L_180 = List_1_get_Item_m6DF1DC5CD1B48E953F95D42B4899B75CC59BA29F(L_178, L_179, List_1_get_Item_m6DF1DC5CD1B48E953F95D42B4899B75CC59BA29F_RuntimeMethod_var);
		NullCheck(L_180);
		bool L_181;
		L_181 = SimplePolygon_IsOpen_m706572246C373B3472B0F4F4E92D43DDE2CC7017(L_180, NULL);
		if (L_181)
		{
			goto IL_02b7;
		}
	}
	{
		PlaneEx_t5512A7D4BF235ED6ED6F1F09A1621A1DCB31509D* L_182 = V_2;
		List_1_tBD3EFF6C36C49D37E37AA532C06442E0AEC0544D* L_183 = V_12;
		int32_t L_184 = V_18;
		NullCheck(L_183);
		SimplePolygon_t5F51D3D1F485B3C377E0E40766EBFD86BA9D9385* L_185;
		L_185 = List_1_get_Item_m6DF1DC5CD1B48E953F95D42B4899B75CC59BA29F(L_183, L_184, List_1_get_Item_m6DF1DC5CD1B48E953F95D42B4899B75CC59BA29F_RuntimeMethod_var);
		NullCheck(L_185);
		PlaneEx_t5512A7D4BF235ED6ED6F1F09A1621A1DCB31509D* L_186;
		L_186 = SimplePolygon_get_plane_mF42E1C3275AB8ED168516709C333F0875315D92D(L_185, NULL);
		NullCheck(L_182);
		bool L_187;
		L_187 = PlaneEx_IsTowardSameDirection_m61A6CCE474823083416626B1B2E0040E9F41B128(L_182, L_186, NULL);
		if (!L_187)
		{
			goto IL_02b7;
		}
	}
	{
		List_1_tBD3EFF6C36C49D37E37AA532C06442E0AEC0544D* L_188 = V_12;
		int32_t L_189 = V_18;
		NullCheck(L_188);
		SimplePolygon_t5F51D3D1F485B3C377E0E40766EBFD86BA9D9385* L_190;
		L_190 = List_1_get_Item_m6DF1DC5CD1B48E953F95D42B4899B75CC59BA29F(L_188, L_189, List_1_get_Item_m6DF1DC5CD1B48E953F95D42B4899B75CC59BA29F_RuntimeMethod_var);
		PlaneEx_t5512A7D4BF235ED6ED6F1F09A1621A1DCB31509D* L_191 = V_2;
		NullCheck(L_190);
		SimplePolygon_set_plane_m7E841762B582586ECC0C30C5DA7B345F5A7A6E8A(L_190, L_191, NULL);
		EditableMeshU5BU5D_t404D4B72A1C23719E39B03C9ECACE067F1A04511* L_192 = V_6;
		int32_t L_193 = V_9;
		NullCheck(L_192);
		int32_t L_194 = L_193;
		EditableMesh_tF419912423C538859FC4EDB1F6ABD7314E01A476* L_195 = (L_192)->GetAt(static_cast<il2cpp_array_size_t>(L_194));
		List_1_tBD3EFF6C36C49D37E37AA532C06442E0AEC0544D* L_196 = V_12;
		int32_t L_197 = V_18;
		NullCheck(L_196);
		SimplePolygon_t5F51D3D1F485B3C377E0E40766EBFD86BA9D9385* L_198;
		L_198 = List_1_get_Item_m6DF1DC5CD1B48E953F95D42B4899B75CC59BA29F(L_196, L_197, List_1_get_Item_m6DF1DC5CD1B48E953F95D42B4899B75CC59BA29F_RuntimeMethod_var);
		NullCheck(L_195);
		EditableMesh_AddPolygon_mF57867AD29D5AB63CD45C8E13373C0C93DF53FFD(L_195, L_198, NULL);
	}

IL_02b7:
	{
		int32_t L_199 = V_18;
		V_18 = ((int32_t)il2cpp_codegen_add(L_199, 1));
	}

IL_02bd:
	{
		int32_t L_200 = V_18;
		List_1_tBD3EFF6C36C49D37E37AA532C06442E0AEC0544D* L_201 = V_12;
		NullCheck(L_201);
		int32_t L_202;
		L_202 = List_1_get_Count_mA79590207FB644521F7A974F233A21E17FB60578_inline(L_201, List_1_get_Count_mA79590207FB644521F7A974F233A21E17FB60578_RuntimeMethod_var);
		if ((((int32_t)L_200) < ((int32_t)L_202)))
		{
			goto IL_025f;
		}
	}
	{
		V_19 = 0;
		goto IL_033b;
	}

IL_02cd:
	{
		List_1_tBD3EFF6C36C49D37E37AA532C06442E0AEC0544D* L_203 = V_12;
		int32_t L_204 = V_19;
		NullCheck(L_203);
		SimplePolygon_t5F51D3D1F485B3C377E0E40766EBFD86BA9D9385* L_205;
		L_205 = List_1_get_Item_m6DF1DC5CD1B48E953F95D42B4899B75CC59BA29F(L_203, L_204, List_1_get_Item_m6DF1DC5CD1B48E953F95D42B4899B75CC59BA29F_RuntimeMethod_var);
		NullCheck(L_205);
		PlaneEx_t5512A7D4BF235ED6ED6F1F09A1621A1DCB31509D* L_206;
		L_206 = SimplePolygon_get_plane_mF42E1C3275AB8ED168516709C333F0875315D92D(L_205, NULL);
		if (!L_206)
		{
			goto IL_0335;
		}
	}
	{
		List_1_tBD3EFF6C36C49D37E37AA532C06442E0AEC0544D* L_207 = V_12;
		int32_t L_208 = V_19;
		NullCheck(L_207);
		SimplePolygon_t5F51D3D1F485B3C377E0E40766EBFD86BA9D9385* L_209;
		L_209 = List_1_get_Item_m6DF1DC5CD1B48E953F95D42B4899B75CC59BA29F(L_207, L_208, List_1_get_Item_m6DF1DC5CD1B48E953F95D42B4899B75CC59BA29F_RuntimeMethod_var);
		NullCheck(L_209);
		bool L_210;
		L_210 = SimplePolygon_IsOpen_m706572246C373B3472B0F4F4E92D43DDE2CC7017(L_209, NULL);
		if (L_210)
		{
			goto IL_0335;
		}
	}
	{
		PlaneEx_t5512A7D4BF235ED6ED6F1F09A1621A1DCB31509D* L_211 = V_2;
		List_1_tBD3EFF6C36C49D37E37AA532C06442E0AEC0544D* L_212 = V_12;
		int32_t L_213 = V_19;
		NullCheck(L_212);
		SimplePolygon_t5F51D3D1F485B3C377E0E40766EBFD86BA9D9385* L_214;
		L_214 = List_1_get_Item_m6DF1DC5CD1B48E953F95D42B4899B75CC59BA29F(L_212, L_213, List_1_get_Item_m6DF1DC5CD1B48E953F95D42B4899B75CC59BA29F_RuntimeMethod_var);
		NullCheck(L_214);
		PlaneEx_t5512A7D4BF235ED6ED6F1F09A1621A1DCB31509D* L_215;
		L_215 = SimplePolygon_get_plane_mF42E1C3275AB8ED168516709C333F0875315D92D(L_214, NULL);
		NullCheck(L_211);
		bool L_216;
		L_216 = PlaneEx_IsTowardSameDirection_m61A6CCE474823083416626B1B2E0040E9F41B128(L_211, L_215, NULL);
		if (L_216)
		{
			goto IL_0335;
		}
	}
	{
		List_1_tBD3EFF6C36C49D37E37AA532C06442E0AEC0544D* L_217 = V_12;
		int32_t L_218 = V_19;
		NullCheck(L_217);
		SimplePolygon_t5F51D3D1F485B3C377E0E40766EBFD86BA9D9385* L_219;
		L_219 = List_1_get_Item_m6DF1DC5CD1B48E953F95D42B4899B75CC59BA29F(L_217, L_218, List_1_get_Item_m6DF1DC5CD1B48E953F95D42B4899B75CC59BA29F_RuntimeMethod_var);
		NullCheck(L_219);
		SimplePolygon_t5F51D3D1F485B3C377E0E40766EBFD86BA9D9385* L_220;
		L_220 = SimplePolygon_Flip_mDF1391E8924332ABBB637357E24AB7D13465E2BF(L_219, NULL);
		List_1_tBD3EFF6C36C49D37E37AA532C06442E0AEC0544D* L_221 = V_12;
		int32_t L_222 = V_19;
		NullCheck(L_221);
		SimplePolygon_t5F51D3D1F485B3C377E0E40766EBFD86BA9D9385* L_223;
		L_223 = List_1_get_Item_m6DF1DC5CD1B48E953F95D42B4899B75CC59BA29F(L_221, L_222, List_1_get_Item_m6DF1DC5CD1B48E953F95D42B4899B75CC59BA29F_RuntimeMethod_var);
		PlaneEx_t5512A7D4BF235ED6ED6F1F09A1621A1DCB31509D* L_224 = V_2;
		NullCheck(L_223);
		SimplePolygon_set_plane_m7E841762B582586ECC0C30C5DA7B345F5A7A6E8A(L_223, L_224, NULL);
		EditableMeshU5BU5D_t404D4B72A1C23719E39B03C9ECACE067F1A04511* L_225 = V_6;
		int32_t L_226 = V_9;
		NullCheck(L_225);
		int32_t L_227 = L_226;
		EditableMesh_tF419912423C538859FC4EDB1F6ABD7314E01A476* L_228 = (L_225)->GetAt(static_cast<il2cpp_array_size_t>(L_227));
		List_1_tBD3EFF6C36C49D37E37AA532C06442E0AEC0544D* L_229 = V_12;
		int32_t L_230 = V_19;
		NullCheck(L_229);
		SimplePolygon_t5F51D3D1F485B3C377E0E40766EBFD86BA9D9385* L_231;
		L_231 = List_1_get_Item_m6DF1DC5CD1B48E953F95D42B4899B75CC59BA29F(L_229, L_230, List_1_get_Item_m6DF1DC5CD1B48E953F95D42B4899B75CC59BA29F_RuntimeMethod_var);
		NullCheck(L_228);
		List_1_tBD3EFF6C36C49D37E37AA532C06442E0AEC0544D* L_232;
		L_232 = EditableMesh_AddSubtractedPolygon_m57BA1B3D2F4E21EC3B17F3A7AB4D606862481DDD(L_228, L_231, NULL);
	}

IL_0335:
	{
		int32_t L_233 = V_19;
		V_19 = ((int32_t)il2cpp_codegen_add(L_233, 1));
	}

IL_033b:
	{
		int32_t L_234 = V_19;
		List_1_tBD3EFF6C36C49D37E37AA532C06442E0AEC0544D* L_235 = V_12;
		NullCheck(L_235);
		int32_t L_236;
		L_236 = List_1_get_Count_mA79590207FB644521F7A974F233A21E17FB60578_inline(L_235, List_1_get_Count_mA79590207FB644521F7A974F233A21E17FB60578_RuntimeMethod_var);
		if ((((int32_t)L_234) < ((int32_t)L_236)))
		{
			goto IL_02cd;
		}
	}
	{
		int32_t L_237 = V_9;
		V_9 = ((int32_t)il2cpp_codegen_add(L_237, 1));
	}

IL_034c:
	{
		int32_t L_238 = V_9;
		List_1U5BU5D_tA26F03D600203AEE7348CFBF89274A23C4FCE53E* L_239 = V_5;
		NullCheck(L_239);
		if ((((int32_t)L_238) < ((int32_t)((int32_t)(((RuntimeArray*)L_239)->max_length)))))
		{
			goto IL_00fc;
		}
	}
	{
		return;
	}
}
// System.Int32 tripolygon.UModeler.Util::CountVertexOnPlane(System.Collections.Generic.List`1<tripolygon.UModeler.Util/ClippingVertex>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Util_CountVertexOnPlane_m89D8EE0BD96C4B02CA83B06A67E3AE32C08A2A8E (List_1_tD13CD97762EDE4928859DDC2999E6E2175B20A11* ___vertices0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_m39BE269C49EF164BBA706DF15603809754CCD1F9_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_mE2354D72C00BBCA64441D77732E04E9E56069425_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		V_0 = 0;
		V_1 = 0;
		goto IL_001c;
	}

IL_0006:
	{
		List_1_tD13CD97762EDE4928859DDC2999E6E2175B20A11* L_0 = ___vertices0;
		int32_t L_1 = V_1;
		NullCheck(L_0);
		ClippingVertex_tF5DB1E0668D7F574FF74C67BC6C91561FAF13E30 L_2;
		L_2 = List_1_get_Item_mE2354D72C00BBCA64441D77732E04E9E56069425(L_0, L_1, List_1_get_Item_mE2354D72C00BBCA64441D77732E04E9E56069425_RuntimeMethod_var);
		bool L_3 = L_2.___zeroDistAndNoCreated_2;
		if (!L_3)
		{
			goto IL_0018;
		}
	}
	{
		int32_t L_4 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_4, 1));
	}

IL_0018:
	{
		int32_t L_5 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_5, 1));
	}

IL_001c:
	{
		int32_t L_6 = V_1;
		List_1_tD13CD97762EDE4928859DDC2999E6E2175B20A11* L_7 = ___vertices0;
		NullCheck(L_7);
		int32_t L_8;
		L_8 = List_1_get_Count_m39BE269C49EF164BBA706DF15603809754CCD1F9_inline(L_7, List_1_get_Count_m39BE269C49EF164BBA706DF15603809754CCD1F9_RuntimeMethod_var);
		if ((((int32_t)L_6) < ((int32_t)L_8)))
		{
			goto IL_0006;
		}
	}
	{
		int32_t L_9 = V_0;
		return L_9;
	}
}
// System.Int32 tripolygon.UModeler.Util::CountVertexAbove(System.Collections.Generic.List`1<tripolygon.UModeler.Vertex>,tripolygon.UModeler.PlaneEx)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Util_CountVertexAbove_mCB10810F3DD128853E8B0369B801B542B239ADC3 (List_1_t302A75244C10A0CEF3AC031C484C2772A9D30A6F* ___vertices0, PlaneEx_t5512A7D4BF235ED6ED6F1F09A1621A1DCB31509D* ___plane1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_m8E2B23B32C1F3E24BA82A3784717FA771E38B208_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_m435D761DB4AF80679A1C0AD9F789379A779DBFD1_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		V_0 = 0;
		V_1 = 0;
		goto IL_0027;
	}

IL_0006:
	{
		PlaneEx_t5512A7D4BF235ED6ED6F1F09A1621A1DCB31509D* L_0 = ___plane1;
		List_1_t302A75244C10A0CEF3AC031C484C2772A9D30A6F* L_1 = ___vertices0;
		int32_t L_2 = V_1;
		NullCheck(L_1);
		Vertex_tB6D4D191E463D1653AA47DED15E41F21BA5A21FC* L_3;
		L_3 = List_1_get_Item_m435D761DB4AF80679A1C0AD9F789379A779DBFD1(L_1, L_2, List_1_get_Item_m435D761DB4AF80679A1C0AD9F789379A779DBFD1_RuntimeMethod_var);
		NullCheck(L_3);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4 = L_3->___pos_0;
		NullCheck(L_0);
		float L_5;
		L_5 = PlaneEx_CalcDistanceToPoint_m72481C5E65ADBF9FBDF999CF3188D9725D7D2F16(L_0, L_4, NULL);
		if ((!(((float)L_5) > ((float)(9.99999975E-05f)))))
		{
			goto IL_0023;
		}
	}
	{
		int32_t L_6 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_6, 1));
	}

IL_0023:
	{
		int32_t L_7 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_7, 1));
	}

IL_0027:
	{
		int32_t L_8 = V_1;
		List_1_t302A75244C10A0CEF3AC031C484C2772A9D30A6F* L_9 = ___vertices0;
		NullCheck(L_9);
		int32_t L_10;
		L_10 = List_1_get_Count_m8E2B23B32C1F3E24BA82A3784717FA771E38B208_inline(L_9, List_1_get_Count_m8E2B23B32C1F3E24BA82A3784717FA771E38B208_RuntimeMethod_var);
		if ((((int32_t)L_8) < ((int32_t)L_10)))
		{
			goto IL_0006;
		}
	}
	{
		int32_t L_11 = V_0;
		return L_11;
	}
}
// System.Int32 tripolygon.UModeler.Util::CountVertexBelow(System.Collections.Generic.List`1<tripolygon.UModeler.Vertex>,tripolygon.UModeler.PlaneEx)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Util_CountVertexBelow_m73C587899B185E7389434BD073973924123B2CA0 (List_1_t302A75244C10A0CEF3AC031C484C2772A9D30A6F* ___vertices0, PlaneEx_t5512A7D4BF235ED6ED6F1F09A1621A1DCB31509D* ___plane1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_m8E2B23B32C1F3E24BA82A3784717FA771E38B208_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_m435D761DB4AF80679A1C0AD9F789379A779DBFD1_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		V_0 = 0;
		V_1 = 0;
		goto IL_0027;
	}

IL_0006:
	{
		PlaneEx_t5512A7D4BF235ED6ED6F1F09A1621A1DCB31509D* L_0 = ___plane1;
		List_1_t302A75244C10A0CEF3AC031C484C2772A9D30A6F* L_1 = ___vertices0;
		int32_t L_2 = V_1;
		NullCheck(L_1);
		Vertex_tB6D4D191E463D1653AA47DED15E41F21BA5A21FC* L_3;
		L_3 = List_1_get_Item_m435D761DB4AF80679A1C0AD9F789379A779DBFD1(L_1, L_2, List_1_get_Item_m435D761DB4AF80679A1C0AD9F789379A779DBFD1_RuntimeMethod_var);
		NullCheck(L_3);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4 = L_3->___pos_0;
		NullCheck(L_0);
		float L_5;
		L_5 = PlaneEx_CalcDistanceToPoint_m72481C5E65ADBF9FBDF999CF3188D9725D7D2F16(L_0, L_4, NULL);
		if ((!(((float)L_5) < ((float)(-9.99999975E-05f)))))
		{
			goto IL_0023;
		}
	}
	{
		int32_t L_6 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_6, 1));
	}

IL_0023:
	{
		int32_t L_7 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_7, 1));
	}

IL_0027:
	{
		int32_t L_8 = V_1;
		List_1_t302A75244C10A0CEF3AC031C484C2772A9D30A6F* L_9 = ___vertices0;
		NullCheck(L_9);
		int32_t L_10;
		L_10 = List_1_get_Count_m8E2B23B32C1F3E24BA82A3784717FA771E38B208_inline(L_9, List_1_get_Count_m8E2B23B32C1F3E24BA82A3784717FA771E38B208_RuntimeMethod_var);
		if ((((int32_t)L_8) < ((int32_t)L_10)))
		{
			goto IL_0006;
		}
	}
	{
		int32_t L_11 = V_0;
		return L_11;
	}
}
// System.Int32 tripolygon.UModeler.Util::CountVertexOnPlane(System.Collections.Generic.List`1<tripolygon.UModeler.Vertex>,tripolygon.UModeler.PlaneEx)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Util_CountVertexOnPlane_mF5BD9D105F5848D6ABAF0655C7EF6CED9984C14A (List_1_t302A75244C10A0CEF3AC031C484C2772A9D30A6F* ___vertices0, PlaneEx_t5512A7D4BF235ED6ED6F1F09A1621A1DCB31509D* ___plane1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_m8E2B23B32C1F3E24BA82A3784717FA771E38B208_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_m435D761DB4AF80679A1C0AD9F789379A779DBFD1_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	float V_2 = 0.0f;
	{
		V_0 = 0;
		V_1 = 0;
		goto IL_0031;
	}

IL_0006:
	{
		PlaneEx_t5512A7D4BF235ED6ED6F1F09A1621A1DCB31509D* L_0 = ___plane1;
		List_1_t302A75244C10A0CEF3AC031C484C2772A9D30A6F* L_1 = ___vertices0;
		int32_t L_2 = V_1;
		NullCheck(L_1);
		Vertex_tB6D4D191E463D1653AA47DED15E41F21BA5A21FC* L_3;
		L_3 = List_1_get_Item_m435D761DB4AF80679A1C0AD9F789379A779DBFD1(L_1, L_2, List_1_get_Item_m435D761DB4AF80679A1C0AD9F789379A779DBFD1_RuntimeMethod_var);
		NullCheck(L_3);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4 = L_3->___pos_0;
		NullCheck(L_0);
		float L_5;
		L_5 = PlaneEx_CalcDistanceToPoint_m72481C5E65ADBF9FBDF999CF3188D9725D7D2F16(L_0, L_4, NULL);
		V_2 = L_5;
		float L_6 = V_2;
		if ((!(((float)L_6) > ((float)(9.99999975E-05f)))))
		{
			goto IL_002d;
		}
	}
	{
		float L_7 = V_2;
		if ((!(((float)L_7) < ((float)(-9.99999975E-05f)))))
		{
			goto IL_002d;
		}
	}
	{
		int32_t L_8 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_8, 1));
	}

IL_002d:
	{
		int32_t L_9 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_9, 1));
	}

IL_0031:
	{
		int32_t L_10 = V_1;
		List_1_t302A75244C10A0CEF3AC031C484C2772A9D30A6F* L_11 = ___vertices0;
		NullCheck(L_11);
		int32_t L_12;
		L_12 = List_1_get_Count_m8E2B23B32C1F3E24BA82A3784717FA771E38B208_inline(L_11, List_1_get_Count_m8E2B23B32C1F3E24BA82A3784717FA771E38B208_RuntimeMethod_var);
		if ((((int32_t)L_10) < ((int32_t)L_12)))
		{
			goto IL_0006;
		}
	}
	{
		int32_t L_13 = V_0;
		return L_13;
	}
}
// System.Void tripolygon.UModeler.Util::MatchHolesToOutsides(tripolygon.UModeler.EditableMesh,tripolygon.UModeler.EditableMesh,tripolygon.UModeler.PlaneEx)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Util_MatchHolesToOutsides_m43545FA7444589F4ECE66ACE7483C8C2CCF5DBC4 (EditableMesh_tF419912423C538859FC4EDB1F6ABD7314E01A476* ___holeEdMesh0, EditableMesh_tF419912423C538859FC4EDB1F6ABD7314E01A476* ___outsideModel1, PlaneEx_t5512A7D4BF235ED6ED6F1F09A1621A1DCB31509D* ___clipPlane2, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_m8E2B23B32C1F3E24BA82A3784717FA771E38B208_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Util_tBEDFF10A323370DC03D5CAB4FEF2AB8EFEB0D7D2_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	SimplePolygon_t5F51D3D1F485B3C377E0E40766EBFD86BA9D9385* V_1 = NULL;
	List_1_t302A75244C10A0CEF3AC031C484C2772A9D30A6F* V_2 = NULL;
	SimplePolygon_t5F51D3D1F485B3C377E0E40766EBFD86BA9D9385* V_3 = NULL;
	{
		V_0 = 0;
		goto IL_0058;
	}

IL_0004:
	{
		EditableMesh_tF419912423C538859FC4EDB1F6ABD7314E01A476* L_0 = ___holeEdMesh0;
		int32_t L_1 = V_0;
		NullCheck(L_0);
		SimplePolygon_t5F51D3D1F485B3C377E0E40766EBFD86BA9D9385* L_2;
		L_2 = EditableMesh_GetPolygon_mD4F6AF94D277FD14E96037738A1FF51B220309F2(L_0, L_1, NULL);
		V_1 = L_2;
		SimplePolygon_t5F51D3D1F485B3C377E0E40766EBFD86BA9D9385* L_3 = V_1;
		NullCheck(L_3);
		List_1_t302A75244C10A0CEF3AC031C484C2772A9D30A6F* L_4;
		L_4 = SimplePolygon_GetVertexList_m8DFDD7DE30F8978236330F89982370EB5455368C_inline(L_3, NULL);
		V_2 = L_4;
		EditableMesh_tF419912423C538859FC4EDB1F6ABD7314E01A476* L_5 = ___outsideModel1;
		List_1_t302A75244C10A0CEF3AC031C484C2772A9D30A6F* L_6 = V_2;
		il2cpp_codegen_runtime_class_init_inline(Util_tBEDFF10A323370DC03D5CAB4FEF2AB8EFEB0D7D2_il2cpp_TypeInfo_var);
		SimplePolygon_t5F51D3D1F485B3C377E0E40766EBFD86BA9D9385* L_7;
		L_7 = Util_FindPolygonHavingVertex_m9756E2F7264233DBBD726DCA12C884163B0C5646(L_5, L_6, NULL);
		V_3 = L_7;
		SimplePolygon_t5F51D3D1F485B3C377E0E40766EBFD86BA9D9385* L_8 = V_3;
		if (!L_8)
		{
			goto IL_0054;
		}
	}
	{
		List_1_t302A75244C10A0CEF3AC031C484C2772A9D30A6F* L_9 = V_2;
		PlaneEx_t5512A7D4BF235ED6ED6F1F09A1621A1DCB31509D* L_10 = ___clipPlane2;
		il2cpp_codegen_runtime_class_init_inline(Util_tBEDFF10A323370DC03D5CAB4FEF2AB8EFEB0D7D2_il2cpp_TypeInfo_var);
		int32_t L_11;
		L_11 = Util_CountVertexAbove_mCB10810F3DD128853E8B0369B801B542B239ADC3(L_9, L_10, NULL);
		List_1_t302A75244C10A0CEF3AC031C484C2772A9D30A6F* L_12 = V_2;
		NullCheck(L_12);
		int32_t L_13;
		L_13 = List_1_get_Count_m8E2B23B32C1F3E24BA82A3784717FA771E38B208_inline(L_12, List_1_get_Count_m8E2B23B32C1F3E24BA82A3784717FA771E38B208_RuntimeMethod_var);
		if ((((int32_t)L_11) == ((int32_t)L_13)))
		{
			goto IL_004d;
		}
	}
	{
		List_1_t302A75244C10A0CEF3AC031C484C2772A9D30A6F* L_14 = V_2;
		PlaneEx_t5512A7D4BF235ED6ED6F1F09A1621A1DCB31509D* L_15 = ___clipPlane2;
		il2cpp_codegen_runtime_class_init_inline(Util_tBEDFF10A323370DC03D5CAB4FEF2AB8EFEB0D7D2_il2cpp_TypeInfo_var);
		int32_t L_16;
		L_16 = Util_CountVertexBelow_m73C587899B185E7389434BD073973924123B2CA0(L_14, L_15, NULL);
		List_1_t302A75244C10A0CEF3AC031C484C2772A9D30A6F* L_17 = V_2;
		NullCheck(L_17);
		int32_t L_18;
		L_18 = List_1_get_Count_m8E2B23B32C1F3E24BA82A3784717FA771E38B208_inline(L_17, List_1_get_Count_m8E2B23B32C1F3E24BA82A3784717FA771E38B208_RuntimeMethod_var);
		if ((((int32_t)L_16) == ((int32_t)L_18)))
		{
			goto IL_004d;
		}
	}
	{
		SimplePolygon_t5F51D3D1F485B3C377E0E40766EBFD86BA9D9385* L_19 = V_1;
		NullCheck(L_19);
		SimplePolygon_t5F51D3D1F485B3C377E0E40766EBFD86BA9D9385* L_20;
		L_20 = SimplePolygon_Flip_mDF1391E8924332ABBB637357E24AB7D13465E2BF(L_19, NULL);
		SimplePolygon_t5F51D3D1F485B3C377E0E40766EBFD86BA9D9385* L_21 = V_3;
		SimplePolygon_t5F51D3D1F485B3C377E0E40766EBFD86BA9D9385* L_22 = V_1;
		NullCheck(L_21);
		SimplePolygon_t5F51D3D1F485B3C377E0E40766EBFD86BA9D9385* L_23;
		L_23 = SimplePolygon_Subtract_mC44396258FEAD142DB3A89479EAC4F9DFEBAD872(L_21, L_22, NULL);
		goto IL_0054;
	}

IL_004d:
	{
		SimplePolygon_t5F51D3D1F485B3C377E0E40766EBFD86BA9D9385* L_24 = V_3;
		List_1_t302A75244C10A0CEF3AC031C484C2772A9D30A6F* L_25 = V_2;
		NullCheck(L_24);
		SimplePolygon_Attach_m8B461FD3C882AE21F7EC03C7F29A76A06CF572EA(L_24, L_25, NULL);
	}

IL_0054:
	{
		int32_t L_26 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_26, 1));
	}

IL_0058:
	{
		int32_t L_27 = V_0;
		EditableMesh_tF419912423C538859FC4EDB1F6ABD7314E01A476* L_28 = ___holeEdMesh0;
		NullCheck(L_28);
		int32_t L_29;
		L_29 = EditableMesh_GetPolygonCount_m8E8542BEAA9C806A06A4144B5CFF409C39AC7494(L_28, (-1), NULL);
		if ((((int32_t)L_27) < ((int32_t)L_29)))
		{
			goto IL_0004;
		}
	}
	{
		return;
	}
}
// System.Collections.Generic.List`1<tripolygon.UModeler.Vertex> tripolygon.UModeler.Util::ToVertices(System.Collections.Generic.List`1<UnityEngine.Vector3>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR List_1_t302A75244C10A0CEF3AC031C484C2772A9D30A6F* Util_ToVertices_m5F2D443483BD51509E900E5F191F1A00E6DCAF19 (List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B* ___positions0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_mBEA06988AE0C126241C9FFA08A9F2612A7A542A4_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_m27907A101D0DAF1C842184C25FF2FCF5F7116E9D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_m46EEFFA770BE665EA0CB3A5332E941DA4B3C1D37_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_m8F2E15FC96DA75186C51228128A0660709E4E810_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_t302A75244C10A0CEF3AC031C484C2772A9D30A6F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vertex_tB6D4D191E463D1653AA47DED15E41F21BA5A21FC_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	List_1_t302A75244C10A0CEF3AC031C484C2772A9D30A6F* V_0 = NULL;
	int32_t V_1 = 0;
	{
		List_1_t302A75244C10A0CEF3AC031C484C2772A9D30A6F* L_0 = (List_1_t302A75244C10A0CEF3AC031C484C2772A9D30A6F*)il2cpp_codegen_object_new(List_1_t302A75244C10A0CEF3AC031C484C2772A9D30A6F_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		List_1__ctor_m27907A101D0DAF1C842184C25FF2FCF5F7116E9D(L_0, List_1__ctor_m27907A101D0DAF1C842184C25FF2FCF5F7116E9D_RuntimeMethod_var);
		V_0 = L_0;
		V_1 = 0;
		goto IL_0020;
	}

IL_000a:
	{
		List_1_t302A75244C10A0CEF3AC031C484C2772A9D30A6F* L_1 = V_0;
		List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B* L_2 = ___positions0;
		int32_t L_3 = V_1;
		NullCheck(L_2);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4;
		L_4 = List_1_get_Item_m8F2E15FC96DA75186C51228128A0660709E4E810(L_2, L_3, List_1_get_Item_m8F2E15FC96DA75186C51228128A0660709E4E810_RuntimeMethod_var);
		Vertex_tB6D4D191E463D1653AA47DED15E41F21BA5A21FC* L_5 = (Vertex_tB6D4D191E463D1653AA47DED15E41F21BA5A21FC*)il2cpp_codegen_object_new(Vertex_tB6D4D191E463D1653AA47DED15E41F21BA5A21FC_il2cpp_TypeInfo_var);
		NullCheck(L_5);
		Vertex__ctor_m1FF1D2AAD46FEC67D7FD50A350BB3F08DFAE7256(L_5, L_4, NULL);
		NullCheck(L_1);
		List_1_Add_mBEA06988AE0C126241C9FFA08A9F2612A7A542A4_inline(L_1, L_5, List_1_Add_mBEA06988AE0C126241C9FFA08A9F2612A7A542A4_RuntimeMethod_var);
		int32_t L_6 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_6, 1));
	}

IL_0020:
	{
		int32_t L_7 = V_1;
		List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B* L_8 = ___positions0;
		NullCheck(L_8);
		int32_t L_9;
		L_9 = List_1_get_Count_m46EEFFA770BE665EA0CB3A5332E941DA4B3C1D37_inline(L_8, List_1_get_Count_m46EEFFA770BE665EA0CB3A5332E941DA4B3C1D37_RuntimeMethod_var);
		if ((((int32_t)L_7) < ((int32_t)L_9)))
		{
			goto IL_000a;
		}
	}
	{
		List_1_t302A75244C10A0CEF3AC031C484C2772A9D30A6F* L_10 = V_0;
		return L_10;
	}
}
// tripolygon.UModeler.SimplePolygon tripolygon.UModeler.Util::FindPolygonHavingVertex(tripolygon.UModeler.EditableMesh,System.Collections.Generic.List`1<tripolygon.UModeler.Vertex>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR SimplePolygon_t5F51D3D1F485B3C377E0E40766EBFD86BA9D9385* Util_FindPolygonHavingVertex_m9756E2F7264233DBBD726DCA12C884163B0C5646 (EditableMesh_tF419912423C538859FC4EDB1F6ABD7314E01A476* ___editableMesh0, List_1_t302A75244C10A0CEF3AC031C484C2772A9D30A6F* ___vertices1, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	SimplePolygon_t5F51D3D1F485B3C377E0E40766EBFD86BA9D9385* V_1 = NULL;
	{
		EditableMesh_tF419912423C538859FC4EDB1F6ABD7314E01A476* L_0 = ___editableMesh0;
		if (L_0)
		{
			goto IL_0005;
		}
	}
	{
		return (SimplePolygon_t5F51D3D1F485B3C377E0E40766EBFD86BA9D9385*)NULL;
	}

IL_0005:
	{
		V_0 = 0;
		goto IL_0020;
	}

IL_0009:
	{
		EditableMesh_tF419912423C538859FC4EDB1F6ABD7314E01A476* L_1 = ___editableMesh0;
		int32_t L_2 = V_0;
		NullCheck(L_1);
		SimplePolygon_t5F51D3D1F485B3C377E0E40766EBFD86BA9D9385* L_3;
		L_3 = EditableMesh_GetPolygon_mD4F6AF94D277FD14E96037738A1FF51B220309F2(L_1, L_2, NULL);
		V_1 = L_3;
		SimplePolygon_t5F51D3D1F485B3C377E0E40766EBFD86BA9D9385* L_4 = V_1;
		List_1_t302A75244C10A0CEF3AC031C484C2772A9D30A6F* L_5 = ___vertices1;
		NullCheck(L_4);
		bool L_6;
		L_6 = SimplePolygon_AtLeastOneVertexIncluded_mC1037BD75E994BA0F0415D8C987D73CFFF77AF39(L_4, L_5, NULL);
		if (!L_6)
		{
			goto IL_001c;
		}
	}
	{
		SimplePolygon_t5F51D3D1F485B3C377E0E40766EBFD86BA9D9385* L_7 = V_1;
		return L_7;
	}

IL_001c:
	{
		int32_t L_8 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_8, 1));
	}

IL_0020:
	{
		int32_t L_9 = V_0;
		EditableMesh_tF419912423C538859FC4EDB1F6ABD7314E01A476* L_10 = ___editableMesh0;
		NullCheck(L_10);
		int32_t L_11;
		L_11 = EditableMesh_GetPolygonCount_m8E8542BEAA9C806A06A4144B5CFF409C39AC7494(L_10, (-1), NULL);
		if ((((int32_t)L_9) < ((int32_t)L_11)))
		{
			goto IL_0009;
		}
	}
	{
		return (SimplePolygon_t5F51D3D1F485B3C377E0E40766EBFD86BA9D9385*)NULL;
	}
}
// tripolygon.UModeler.SimplePolygon tripolygon.UModeler.Util::FindPolygonHavingEdge(System.Collections.Generic.List`1<tripolygon.UModeler.SimplePolygon>,tripolygon.UModeler.Edge)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR SimplePolygon_t5F51D3D1F485B3C377E0E40766EBFD86BA9D9385* Util_FindPolygonHavingEdge_mC7906F46CA4B4BFC57C7D20A613B5C7D918E4E1B (List_1_tBD3EFF6C36C49D37E37AA532C06442E0AEC0544D* ___polygons0, Edge_t61E163F7AA3BA416F72B1EDF0DD966F41041D4FF* ___edge1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_mA79590207FB644521F7A974F233A21E17FB60578_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_m6DF1DC5CD1B48E953F95D42B4899B75CC59BA29F_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		V_0 = 0;
		goto IL_001f;
	}

IL_0004:
	{
		List_1_tBD3EFF6C36C49D37E37AA532C06442E0AEC0544D* L_0 = ___polygons0;
		int32_t L_1 = V_0;
		NullCheck(L_0);
		SimplePolygon_t5F51D3D1F485B3C377E0E40766EBFD86BA9D9385* L_2;
		L_2 = List_1_get_Item_m6DF1DC5CD1B48E953F95D42B4899B75CC59BA29F(L_0, L_1, List_1_get_Item_m6DF1DC5CD1B48E953F95D42B4899B75CC59BA29F_RuntimeMethod_var);
		Edge_t61E163F7AA3BA416F72B1EDF0DD966F41041D4FF* L_3 = ___edge1;
		NullCheck(L_2);
		List_1_t9A7220215C9ED1BE212A9632A14022A68B3BFC12* L_4;
		L_4 = SimplePolygon_FindOverlappedEdge_m2D7E7BC0E500340A9A97728F5E09B4B74F2D76F3(L_2, L_3, NULL);
		if (!L_4)
		{
			goto IL_001b;
		}
	}
	{
		List_1_tBD3EFF6C36C49D37E37AA532C06442E0AEC0544D* L_5 = ___polygons0;
		int32_t L_6 = V_0;
		NullCheck(L_5);
		SimplePolygon_t5F51D3D1F485B3C377E0E40766EBFD86BA9D9385* L_7;
		L_7 = List_1_get_Item_m6DF1DC5CD1B48E953F95D42B4899B75CC59BA29F(L_5, L_6, List_1_get_Item_m6DF1DC5CD1B48E953F95D42B4899B75CC59BA29F_RuntimeMethod_var);
		return L_7;
	}

IL_001b:
	{
		int32_t L_8 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_8, 1));
	}

IL_001f:
	{
		int32_t L_9 = V_0;
		List_1_tBD3EFF6C36C49D37E37AA532C06442E0AEC0544D* L_10 = ___polygons0;
		NullCheck(L_10);
		int32_t L_11;
		L_11 = List_1_get_Count_mA79590207FB644521F7A974F233A21E17FB60578_inline(L_10, List_1_get_Count_mA79590207FB644521F7A974F233A21E17FB60578_RuntimeMethod_var);
		if ((((int32_t)L_9) < ((int32_t)L_11)))
		{
			goto IL_0004;
		}
	}
	{
		return (SimplePolygon_t5F51D3D1F485B3C377E0E40766EBFD86BA9D9385*)NULL;
	}
}
// UnityEngine.Vector3 tripolygon.UModeler.Util::ConvertWorldToScreen(UnityEngine.Camera,UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Util_ConvertWorldToScreen_mF52A2BA937C7AD8DB71B16E015B0F4584F69D56F (Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* ___camera0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___worldPos1, const RuntimeMethod* method) 
{
	{
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_0 = ___camera0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1 = ___worldPos1;
		NullCheck(L_0);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2;
		L_2 = Camera_WorldToScreenPoint_m26B4C8945C3B5731F1CC5944CFD96BF17126BAA3(L_0, L_1, NULL);
		return L_2;
	}
}
// UnityEngine.Vector3 tripolygon.UModeler.Util::ConvertScreenToWorld(UnityEngine.Camera,UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Util_ConvertScreenToWorld_m097120936A371480108148F512D87827BFD0CFB2 (Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* ___camera0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___screenPos1, const RuntimeMethod* method) 
{
	{
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_0 = ___camera0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1 = ___screenPos1;
		NullCheck(L_0);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2;
		L_2 = Camera_ScreenToWorldPoint_m5EA3148F070985EC72127AAC3448D8D6ABE6E7E5(L_0, L_1, NULL);
		return L_2;
	}
}
// System.Int32 tripolygon.UModeler.Util::CountTriangle(UnityEngine.MeshFilter)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Util_CountTriangle_m31F85BDD2CE3AE040B935836DF526FDF5E98D01F (MeshFilter_t6D1CE2473A1E45AC73013400585A1163BF66B2F5* ___mf0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Util_tBEDFF10A323370DC03D5CAB4FEF2AB8EFEB0D7D2_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		MeshFilter_t6D1CE2473A1E45AC73013400585A1163BF66B2F5* L_0 = ___mf0;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605(L_0, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (L_1)
		{
			goto IL_0017;
		}
	}
	{
		MeshFilter_t6D1CE2473A1E45AC73013400585A1163BF66B2F5* L_2 = ___mf0;
		NullCheck(L_2);
		Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* L_3;
		L_3 = MeshFilter_get_sharedMesh_mE4ED3E7E31C1DE5097E4980DA996E620F7D7CB8C(L_2, NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_4;
		L_4 = Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605(L_3, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_4)
		{
			goto IL_0019;
		}
	}

IL_0017:
	{
		return 0;
	}

IL_0019:
	{
		MeshFilter_t6D1CE2473A1E45AC73013400585A1163BF66B2F5* L_5 = ___mf0;
		NullCheck(L_5);
		Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* L_6;
		L_6 = MeshFilter_get_sharedMesh_mE4ED3E7E31C1DE5097E4980DA996E620F7D7CB8C(L_5, NULL);
		il2cpp_codegen_runtime_class_init_inline(Util_tBEDFF10A323370DC03D5CAB4FEF2AB8EFEB0D7D2_il2cpp_TypeInfo_var);
		int32_t L_7;
		L_7 = Util_CountTriangle_mD954412C2FF3C08F88D635A382826DA5B8FC175F(L_6, NULL);
		return L_7;
	}
}
// System.Int32 tripolygon.UModeler.Util::CountTriangle(UnityEngine.Mesh)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Util_CountTriangle_mD954412C2FF3C08F88D635A382826DA5B8FC175F (Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* ___mesh0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* L_0 = ___mesh0;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605(L_0, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_1)
		{
			goto IL_000b;
		}
	}
	{
		return 0;
	}

IL_000b:
	{
		V_0 = 0;
		V_1 = 0;
		goto IL_0021;
	}

IL_0011:
	{
		int32_t L_2 = V_0;
		Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* L_3 = ___mesh0;
		int32_t L_4 = V_1;
		NullCheck(L_3);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_5;
		L_5 = Mesh_GetIndices_m112B85EF32EE3C446947CE6CBC1AF3D50FC18179(L_3, L_4, NULL);
		NullCheck(L_5);
		V_0 = ((int32_t)il2cpp_codegen_add(L_2, ((int32_t)(((RuntimeArray*)L_5)->max_length))));
		int32_t L_6 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_6, 1));
	}

IL_0021:
	{
		int32_t L_7 = V_1;
		Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* L_8 = ___mesh0;
		NullCheck(L_8);
		int32_t L_9;
		L_9 = Mesh_get_subMeshCount_mC0141293D0F339D8D721CCA2612B32E6FD7E3F8B(L_8, NULL);
		if ((((int32_t)L_7) < ((int32_t)L_9)))
		{
			goto IL_0011;
		}
	}
	{
		int32_t L_10 = V_0;
		return ((int32_t)(L_10/3));
	}
}
// System.Boolean tripolygon.UModeler.Util::ContainsEdge(tripolygon.UModeler.Edge,System.Collections.Generic.List`1<tripolygon.UModeler.Edge>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Util_ContainsEdge_m192B1F528851DBB639A14B67AF1B3C21AB889BF7 (Edge_t61E163F7AA3BA416F72B1EDF0DD966F41041D4FF* ___edge0, List_1_t9A7220215C9ED1BE212A9632A14022A68B3BFC12* ___edges1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_m352EA89E4CDFF4A895FECAF36592AA5A290CBB5E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_m366D9A7BF7C504940BEF501AB07B83FD7A22BC7F_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		V_0 = 0;
		goto IL_0019;
	}

IL_0004:
	{
		List_1_t9A7220215C9ED1BE212A9632A14022A68B3BFC12* L_0 = ___edges1;
		int32_t L_1 = V_0;
		NullCheck(L_0);
		Edge_t61E163F7AA3BA416F72B1EDF0DD966F41041D4FF* L_2;
		L_2 = List_1_get_Item_m366D9A7BF7C504940BEF501AB07B83FD7A22BC7F(L_0, L_1, List_1_get_Item_m366D9A7BF7C504940BEF501AB07B83FD7A22BC7F_RuntimeMethod_var);
		Edge_t61E163F7AA3BA416F72B1EDF0DD966F41041D4FF* L_3 = ___edge0;
		NullCheck(L_2);
		bool L_4;
		L_4 = Edge_IsEquivalent_m4634710D1FFBED8319318CED11063439B0498365(L_2, L_3, NULL);
		if (!L_4)
		{
			goto IL_0015;
		}
	}
	{
		return (bool)1;
	}

IL_0015:
	{
		int32_t L_5 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_5, 1));
	}

IL_0019:
	{
		int32_t L_6 = V_0;
		List_1_t9A7220215C9ED1BE212A9632A14022A68B3BFC12* L_7 = ___edges1;
		NullCheck(L_7);
		int32_t L_8;
		L_8 = List_1_get_Count_m352EA89E4CDFF4A895FECAF36592AA5A290CBB5E_inline(L_7, List_1_get_Count_m352EA89E4CDFF4A895FECAF36592AA5A290CBB5E_RuntimeMethod_var);
		if ((((int32_t)L_6) < ((int32_t)L_8)))
		{
			goto IL_0004;
		}
	}
	{
		return (bool)0;
	}
}
// UnityEngine.Vector3 tripolygon.UModeler.Util::GetScaledNormal(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Util_GetScaledNormal_m7E93F2D30C675C8ECF12DB8C23ED5D35B541378C (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___normal0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UMContext_tD5DABA4A108180D95D3BDB86E9A4669F51289AFB_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___normal0;
		float L_1 = L_0.___x_2;
		UModeler_tF29E9161DE3331F85E86886244AC15FEC514C577* L_2 = ((UMContext_tD5DABA4A108180D95D3BDB86E9A4669F51289AFB_StaticFields*)il2cpp_codegen_static_fields_for(UMContext_tD5DABA4A108180D95D3BDB86E9A4669F51289AFB_il2cpp_TypeInfo_var))->___activeModeler_0;
		NullCheck(L_2);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_3;
		L_3 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_2, NULL);
		NullCheck(L_3);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4;
		L_4 = Transform_get_lossyScale_mFF740DA4BE1489C6882CD2F3A37B7321176E5D07(L_3, NULL);
		float L_5 = L_4.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6 = ___normal0;
		float L_7 = L_6.___y_3;
		UModeler_tF29E9161DE3331F85E86886244AC15FEC514C577* L_8 = ((UMContext_tD5DABA4A108180D95D3BDB86E9A4669F51289AFB_StaticFields*)il2cpp_codegen_static_fields_for(UMContext_tD5DABA4A108180D95D3BDB86E9A4669F51289AFB_il2cpp_TypeInfo_var))->___activeModeler_0;
		NullCheck(L_8);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_9;
		L_9 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_8, NULL);
		NullCheck(L_9);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10;
		L_10 = Transform_get_lossyScale_mFF740DA4BE1489C6882CD2F3A37B7321176E5D07(L_9, NULL);
		float L_11 = L_10.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_12 = ___normal0;
		float L_13 = L_12.___z_4;
		UModeler_tF29E9161DE3331F85E86886244AC15FEC514C577* L_14 = ((UMContext_tD5DABA4A108180D95D3BDB86E9A4669F51289AFB_StaticFields*)il2cpp_codegen_static_fields_for(UMContext_tD5DABA4A108180D95D3BDB86E9A4669F51289AFB_il2cpp_TypeInfo_var))->___activeModeler_0;
		NullCheck(L_14);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_15;
		L_15 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_14, NULL);
		NullCheck(L_15);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_16;
		L_16 = Transform_get_lossyScale_mFF740DA4BE1489C6882CD2F3A37B7321176E5D07(L_15, NULL);
		float L_17 = L_16.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_18;
		memset((&L_18), 0, sizeof(L_18));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_18), ((float)(L_1/L_5)), ((float)(L_7/L_11)), ((float)(L_13/L_17)), /*hidden argument*/NULL);
		return L_18;
	}
}
// System.Single tripolygon.UModeler.Util::GetAdaptedVertexSize(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Util_GetAdaptedVertexSize_m3CA1C0DE28B376C2E33F62615733D04B3409D43B (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___cameraPos0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___worldPos1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Util_tBEDFF10A323370DC03D5CAB4FEF2AB8EFEB0D7D2_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___cameraPos0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1 = ___worldPos1;
		float L_2;
		L_2 = Vector3_Distance_m2314DB9B8BD01157E013DF87BEA557375C7F9FF9_inline(L_0, L_1, NULL);
		il2cpp_codegen_runtime_class_init_inline(Util_tBEDFF10A323370DC03D5CAB4FEF2AB8EFEB0D7D2_il2cpp_TypeInfo_var);
		float L_3;
		L_3 = Util_GetAdaptedVertexSize_mA6CACCC30A4D2D99A09283C13516A3A3BD151B73(L_2, NULL);
		return L_3;
	}
}
// System.Single tripolygon.UModeler.Util::GetAdaptedVertexSize(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Util_GetAdaptedVertexSize_mD3AA3F5D8D9F6162EC59E1E88BBE75920A5538D0 (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___pos0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UMContext_tD5DABA4A108180D95D3BDB86E9A4669F51289AFB_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Util_tBEDFF10A323370DC03D5CAB4FEF2AB8EFEB0D7D2_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		UModeler_tF29E9161DE3331F85E86886244AC15FEC514C577* L_0 = ((UMContext_tD5DABA4A108180D95D3BDB86E9A4669F51289AFB_StaticFields*)il2cpp_codegen_static_fields_for(UMContext_tD5DABA4A108180D95D3BDB86E9A4669F51289AFB_il2cpp_TypeInfo_var))->___activeModeler_0;
		NullCheck(L_0);
		Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 L_1;
		L_1 = UModeler_get_worldTM_mDC2A444D24B9C454511EFAA167A70D0A3829B323(L_0, NULL);
		V_0 = L_1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2 = ___pos0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3;
		L_3 = Matrix4x4_MultiplyPoint3x4_mACCBD70AFA82C63DA88555780B7B6B01281AB814((&V_0), L_2, NULL);
		il2cpp_codegen_runtime_class_init_inline(Util_tBEDFF10A323370DC03D5CAB4FEF2AB8EFEB0D7D2_il2cpp_TypeInfo_var);
		float L_4;
		L_4 = Util_GetAdaptedVertexSizeOnWorld_mC851DD31427747CA1AC171A4F52AD4FA0175FBEC(L_3, NULL);
		return L_4;
	}
}
// System.Single tripolygon.UModeler.Util::GetAdaptedVertexSizeOnWorld(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Util_GetAdaptedVertexSizeOnWorld_mC851DD31427747CA1AC171A4F52AD4FA0175FBEC (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___worldPos0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IModelerEngine_tA4FF8143DA93FCF03B5ABEDFF3409090D3BD4E81_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UMContext_tD5DABA4A108180D95D3BDB86E9A4669F51289AFB_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Util_tBEDFF10A323370DC03D5CAB4FEF2AB8EFEB0D7D2_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = ((UMContext_tD5DABA4A108180D95D3BDB86E9A4669F51289AFB_StaticFields*)il2cpp_codegen_static_fields_for(UMContext_tD5DABA4A108180D95D3BDB86E9A4669F51289AFB_il2cpp_TypeInfo_var))->___engine_1;
		NullCheck(L_0);
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_1;
		L_1 = InterfaceFuncInvoker0< Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* >::Invoke(3 /* UnityEngine.Camera tripolygon.UModeler.IModelerEngine::get_currentCamera() */, IModelerEngine_tA4FF8143DA93FCF03B5ABEDFF3409090D3BD4E81_il2cpp_TypeInfo_var, L_0);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_2;
		L_2 = Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605(L_1, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (L_2)
		{
			goto IL_001f;
		}
	}
	{
		UModeler_tF29E9161DE3331F85E86886244AC15FEC514C577* L_3 = ((UMContext_tD5DABA4A108180D95D3BDB86E9A4669F51289AFB_StaticFields*)il2cpp_codegen_static_fields_for(UMContext_tD5DABA4A108180D95D3BDB86E9A4669F51289AFB_il2cpp_TypeInfo_var))->___activeModeler_0;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_4;
		L_4 = Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605(L_3, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_4)
		{
			goto IL_0025;
		}
	}

IL_001f:
	{
		return (0.0f);
	}

IL_0025:
	{
		RuntimeObject* L_5 = ((UMContext_tD5DABA4A108180D95D3BDB86E9A4669F51289AFB_StaticFields*)il2cpp_codegen_static_fields_for(UMContext_tD5DABA4A108180D95D3BDB86E9A4669F51289AFB_il2cpp_TypeInfo_var))->___engine_1;
		NullCheck(L_5);
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_6;
		L_6 = InterfaceFuncInvoker0< Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* >::Invoke(3 /* UnityEngine.Camera tripolygon.UModeler.IModelerEngine::get_currentCamera() */, IModelerEngine_tA4FF8143DA93FCF03B5ABEDFF3409090D3BD4E81_il2cpp_TypeInfo_var, L_5);
		NullCheck(L_6);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_7;
		L_7 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_6, NULL);
		NullCheck(L_7);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8;
		L_8 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_7, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_9 = ___worldPos0;
		il2cpp_codegen_runtime_class_init_inline(Util_tBEDFF10A323370DC03D5CAB4FEF2AB8EFEB0D7D2_il2cpp_TypeInfo_var);
		float L_10;
		L_10 = Util_GetAdaptedVertexSize_m3CA1C0DE28B376C2E33F62615733D04B3409D43B(L_8, L_9, NULL);
		return L_10;
	}
}
// System.Single tripolygon.UModeler.Util::GetAdaptedVertexSize(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Util_GetAdaptedVertexSize_mA6CACCC30A4D2D99A09283C13516A3A3BD151B73 (float ___distFromVtxToCamera0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Util_tBEDFF10A323370DC03D5CAB4FEF2AB8EFEB0D7D2_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		float L_0 = ___distFromVtxToCamera0;
		il2cpp_codegen_runtime_class_init_inline(Util_tBEDFF10A323370DC03D5CAB4FEF2AB8EFEB0D7D2_il2cpp_TypeInfo_var);
		float L_1;
		L_1 = Util_GetScreenSize_m0B9D8A7A5608280361EC767141C2AD75139B8255(NULL);
		return ((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_multiply((12.5f), L_0)), ((float)((1.0f)/L_1))));
	}
}
// System.Single tripolygon.UModeler.Util::GetScreenSize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Util_GetScreenSize_m0B9D8A7A5608280361EC767141C2AD75139B8255 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IModelerEngine_tA4FF8143DA93FCF03B5ABEDFF3409090D3BD4E81_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UMContext_tD5DABA4A108180D95D3BDB86E9A4669F51289AFB_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		RuntimeObject* L_0 = ((UMContext_tD5DABA4A108180D95D3BDB86E9A4669F51289AFB_StaticFields*)il2cpp_codegen_static_fields_for(UMContext_tD5DABA4A108180D95D3BDB86E9A4669F51289AFB_il2cpp_TypeInfo_var))->___engine_1;
		NullCheck(L_0);
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_1;
		L_1 = InterfaceFuncInvoker0< Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* >::Invoke(3 /* UnityEngine.Camera tripolygon.UModeler.IModelerEngine::get_currentCamera() */, IModelerEngine_tA4FF8143DA93FCF03B5ABEDFF3409090D3BD4E81_il2cpp_TypeInfo_var, L_0);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_2;
		L_2 = Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605(L_1, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_2)
		{
			goto IL_0018;
		}
	}
	{
		return (1.0f);
	}

IL_0018:
	{
		RuntimeObject* L_3 = ((UMContext_tD5DABA4A108180D95D3BDB86E9A4669F51289AFB_StaticFields*)il2cpp_codegen_static_fields_for(UMContext_tD5DABA4A108180D95D3BDB86E9A4669F51289AFB_il2cpp_TypeInfo_var))->___engine_1;
		NullCheck(L_3);
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_4;
		L_4 = InterfaceFuncInvoker0< Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* >::Invoke(3 /* UnityEngine.Camera tripolygon.UModeler.IModelerEngine::get_currentCamera() */, IModelerEngine_tA4FF8143DA93FCF03B5ABEDFF3409090D3BD4E81_il2cpp_TypeInfo_var, L_3);
		NullCheck(L_4);
		Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D L_5;
		L_5 = Camera_get_pixelRect_m5F40F5C324EB252261F66962411EE08CC4BE39E7(L_4, NULL);
		V_0 = L_5;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_6;
		L_6 = Rect_get_min_mD0D1BABF9C955D2D9CCA86E257B0783ACDEE69AC((&V_0), NULL);
		RuntimeObject* L_7 = ((UMContext_tD5DABA4A108180D95D3BDB86E9A4669F51289AFB_StaticFields*)il2cpp_codegen_static_fields_for(UMContext_tD5DABA4A108180D95D3BDB86E9A4669F51289AFB_il2cpp_TypeInfo_var))->___engine_1;
		NullCheck(L_7);
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_8;
		L_8 = InterfaceFuncInvoker0< Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* >::Invoke(3 /* UnityEngine.Camera tripolygon.UModeler.IModelerEngine::get_currentCamera() */, IModelerEngine_tA4FF8143DA93FCF03B5ABEDFF3409090D3BD4E81_il2cpp_TypeInfo_var, L_7);
		NullCheck(L_8);
		Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D L_9;
		L_9 = Camera_get_pixelRect_m5F40F5C324EB252261F66962411EE08CC4BE39E7(L_8, NULL);
		V_0 = L_9;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_10;
		L_10 = Rect_get_max_m60149158D9A01113214BB417AA48CEF774899167((&V_0), NULL);
		float L_11;
		L_11 = Vector2_Distance_mBACBB1609E1894D68F882D86A93519E311810C89_inline(L_6, L_10, NULL);
		return L_11;
	}
}
// System.Single tripolygon.UModeler.Util::DistanceToCamera(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Util_DistanceToCamera_m182F7726DACCD451AC7068AA9363420A203D6028 (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___pos0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UMContext_tD5DABA4A108180D95D3BDB86E9A4669F51289AFB_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Util_tBEDFF10A323370DC03D5CAB4FEF2AB8EFEB0D7D2_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		UModeler_tF29E9161DE3331F85E86886244AC15FEC514C577* L_0 = ((UMContext_tD5DABA4A108180D95D3BDB86E9A4669F51289AFB_StaticFields*)il2cpp_codegen_static_fields_for(UMContext_tD5DABA4A108180D95D3BDB86E9A4669F51289AFB_il2cpp_TypeInfo_var))->___activeModeler_0;
		NullCheck(L_0);
		Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 L_1;
		L_1 = UModeler_get_worldTM_mDC2A444D24B9C454511EFAA167A70D0A3829B323(L_0, NULL);
		V_0 = L_1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2 = ___pos0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3;
		L_3 = Matrix4x4_MultiplyPoint3x4_mACCBD70AFA82C63DA88555780B7B6B01281AB814((&V_0), L_2, NULL);
		il2cpp_codegen_runtime_class_init_inline(Util_tBEDFF10A323370DC03D5CAB4FEF2AB8EFEB0D7D2_il2cpp_TypeInfo_var);
		float L_4;
		L_4 = Util_DistanceToCameraInWorld_mF665E4F1FC247A86BC1D7607D0D0E0DC39DCBB76(L_3, NULL);
		return L_4;
	}
}
// System.Single tripolygon.UModeler.Util::DistanceToCameraInWorld(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Util_DistanceToCameraInWorld_mF665E4F1FC247A86BC1D7607D0D0E0DC39DCBB76 (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___worldPos0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IModelerEngine_tA4FF8143DA93FCF03B5ABEDFF3409090D3BD4E81_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UMContext_tD5DABA4A108180D95D3BDB86E9A4669F51289AFB_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___worldPos0;
		RuntimeObject* L_1 = ((UMContext_tD5DABA4A108180D95D3BDB86E9A4669F51289AFB_StaticFields*)il2cpp_codegen_static_fields_for(UMContext_tD5DABA4A108180D95D3BDB86E9A4669F51289AFB_il2cpp_TypeInfo_var))->___engine_1;
		NullCheck(L_1);
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_2;
		L_2 = InterfaceFuncInvoker0< Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* >::Invoke(3 /* UnityEngine.Camera tripolygon.UModeler.IModelerEngine::get_currentCamera() */, IModelerEngine_tA4FF8143DA93FCF03B5ABEDFF3409090D3BD4E81_il2cpp_TypeInfo_var, L_1);
		NullCheck(L_2);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_3;
		L_3 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_2, NULL);
		NullCheck(L_3);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4;
		L_4 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_3, NULL);
		float L_5;
		L_5 = Vector3_Distance_m2314DB9B8BD01157E013DF87BEA557375C7F9FF9_inline(L_0, L_4, NULL);
		return L_5;
	}
}
// System.Single tripolygon.UModeler.Util::CameraFovPow()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Util_CameraFovPow_mB4E93B914B7AB013AE4A5F31497CDC23732C2214 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IModelerEngine_tA4FF8143DA93FCF03B5ABEDFF3409090D3BD4E81_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UMContext_tD5DABA4A108180D95D3BDB86E9A4669F51289AFB_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = ((UMContext_tD5DABA4A108180D95D3BDB86E9A4669F51289AFB_StaticFields*)il2cpp_codegen_static_fields_for(UMContext_tD5DABA4A108180D95D3BDB86E9A4669F51289AFB_il2cpp_TypeInfo_var))->___engine_1;
		NullCheck(L_0);
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_1;
		L_1 = InterfaceFuncInvoker0< Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* >::Invoke(3 /* UnityEngine.Camera tripolygon.UModeler.IModelerEngine::get_currentCamera() */, IModelerEngine_tA4FF8143DA93FCF03B5ABEDFF3409090D3BD4E81_il2cpp_TypeInfo_var, L_0);
		NullCheck(L_1);
		bool L_2;
		L_2 = Camera_get_orthographic_m904DEFC76C54DA4E30C20A62A86D5D87B7D4DD8F(L_1, NULL);
		if (!L_2)
		{
			goto IL_0017;
		}
	}
	{
		return (10.0f);
	}

IL_0017:
	{
		RuntimeObject* L_3 = ((UMContext_tD5DABA4A108180D95D3BDB86E9A4669F51289AFB_StaticFields*)il2cpp_codegen_static_fields_for(UMContext_tD5DABA4A108180D95D3BDB86E9A4669F51289AFB_il2cpp_TypeInfo_var))->___engine_1;
		NullCheck(L_3);
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_4;
		L_4 = InterfaceFuncInvoker0< Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* >::Invoke(3 /* UnityEngine.Camera tripolygon.UModeler.IModelerEngine::get_currentCamera() */, IModelerEngine_tA4FF8143DA93FCF03B5ABEDFF3409090D3BD4E81_il2cpp_TypeInfo_var, L_3);
		NullCheck(L_4);
		float L_5;
		L_5 = Camera_get_fieldOfView_m9A93F17BBF89F496AE231C21817AFD1C1E833FBB(L_4, NULL);
		return ((float)(L_5/(60.0f)));
	}
}
// System.Single tripolygon.UModeler.Util::CalculateOutlineOffset(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Util_CalculateOutlineOffset_m1EFD2B756083A82CBD484E90E907B3027D176DCB (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___pos0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Util_tBEDFF10A323370DC03D5CAB4FEF2AB8EFEB0D7D2_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___pos0;
		il2cpp_codegen_runtime_class_init_inline(Util_tBEDFF10A323370DC03D5CAB4FEF2AB8EFEB0D7D2_il2cpp_TypeInfo_var);
		float L_1;
		L_1 = Util_DistanceToCamera_m182F7726DACCD451AC7068AA9363420A203D6028(L_0, NULL);
		V_0 = L_1;
		float L_2 = ((Util_tBEDFF10A323370DC03D5CAB4FEF2AB8EFEB0D7D2_StaticFields*)il2cpp_codegen_static_fields_for(Util_tBEDFF10A323370DC03D5CAB4FEF2AB8EFEB0D7D2_il2cpp_TypeInfo_var))->___defaultOutlineOffset__0;
		float L_3 = V_0;
		float L_4;
		L_4 = Util_CameraFovPow_mB4E93B914B7AB013AE4A5F31497CDC23732C2214(NULL);
		return ((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_multiply(L_2, L_3)), L_4));
	}
}
// UnityEngine.Vector3 tripolygon.UModeler.Util::CalculateOutlineVector3(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Util_CalculateOutlineVector3_m42013C5DBBC793D6BC07D8BD9F67D45D8AA18DF4 (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___pos0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IModelerEngine_tA4FF8143DA93FCF03B5ABEDFF3409090D3BD4E81_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UMContext_tD5DABA4A108180D95D3BDB86E9A4669F51289AFB_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		RuntimeObject* L_0 = ((UMContext_tD5DABA4A108180D95D3BDB86E9A4669F51289AFB_StaticFields*)il2cpp_codegen_static_fields_for(UMContext_tD5DABA4A108180D95D3BDB86E9A4669F51289AFB_il2cpp_TypeInfo_var))->___engine_1;
		NullCheck(L_0);
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_1;
		L_1 = InterfaceFuncInvoker0< Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* >::Invoke(3 /* UnityEngine.Camera tripolygon.UModeler.IModelerEngine::get_currentCamera() */, IModelerEngine_tA4FF8143DA93FCF03B5ABEDFF3409090D3BD4E81_il2cpp_TypeInfo_var, L_0);
		NullCheck(L_1);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_2;
		L_2 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_1, NULL);
		NullCheck(L_2);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3;
		L_3 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_2, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4 = ___pos0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_5;
		L_5 = Vector3_op_Subtraction_mE42023FF80067CB44A1D4A27EB7CF2B24CABB828_inline(L_3, L_4, NULL);
		V_0 = L_5;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6;
		L_6 = Vector3_get_normalized_m736BBF65D5CDA7A18414370D15B4DFCC1E466F07_inline((&V_0), NULL);
		return L_6;
	}
}
// System.Single tripolygon.UModeler.Util::CalculateOutlineOffset(tripolygon.UModeler.AABB)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Util_CalculateOutlineOffset_m3D1513391497B4089FA1A9F4A99E166531FA16A1 (AABB_t9C7B4FCF1ED10D750373270786690AAF7801AC6B* ___aabb0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Util_tBEDFF10A323370DC03D5CAB4FEF2AB8EFEB0D7D2_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* V_0 = NULL;
	float V_1 = 0.0f;
	int32_t V_2 = 0;
	float V_3 = 0.0f;
	{
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_0 = (Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C*)(Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C*)SZArrayNew(Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C_il2cpp_TypeInfo_var, (uint32_t)((int32_t)9));
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_1 = L_0;
		AABB_t9C7B4FCF1ED10D750373270786690AAF7801AC6B* L_2 = ___aabb0;
		NullCheck(L_2);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3;
		L_3 = AABB_GetCenter_m5231D87131E3ECF85D66AE7A73FF3328FB89F720(L_2, NULL);
		NullCheck(L_1);
		(L_1)->SetAt(static_cast<il2cpp_array_size_t>(0), (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2)L_3);
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_4 = L_1;
		AABB_t9C7B4FCF1ED10D750373270786690AAF7801AC6B* L_5 = ___aabb0;
		NullCheck(L_5);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_6 = (&L_5->___min_0);
		float L_7 = L_6->___x_2;
		AABB_t9C7B4FCF1ED10D750373270786690AAF7801AC6B* L_8 = ___aabb0;
		NullCheck(L_8);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_9 = (&L_8->___min_0);
		float L_10 = L_9->___y_3;
		AABB_t9C7B4FCF1ED10D750373270786690AAF7801AC6B* L_11 = ___aabb0;
		NullCheck(L_11);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_12 = (&L_11->___min_0);
		float L_13 = L_12->___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_14;
		memset((&L_14), 0, sizeof(L_14));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_14), L_7, L_10, L_13, /*hidden argument*/NULL);
		NullCheck(L_4);
		(L_4)->SetAt(static_cast<il2cpp_array_size_t>(1), (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2)L_14);
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_15 = L_4;
		AABB_t9C7B4FCF1ED10D750373270786690AAF7801AC6B* L_16 = ___aabb0;
		NullCheck(L_16);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_17 = (&L_16->___min_0);
		float L_18 = L_17->___x_2;
		AABB_t9C7B4FCF1ED10D750373270786690AAF7801AC6B* L_19 = ___aabb0;
		NullCheck(L_19);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_20 = (&L_19->___min_0);
		float L_21 = L_20->___y_3;
		AABB_t9C7B4FCF1ED10D750373270786690AAF7801AC6B* L_22 = ___aabb0;
		NullCheck(L_22);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_23 = (&L_22->___max_1);
		float L_24 = L_23->___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_25;
		memset((&L_25), 0, sizeof(L_25));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_25), L_18, L_21, L_24, /*hidden argument*/NULL);
		NullCheck(L_15);
		(L_15)->SetAt(static_cast<il2cpp_array_size_t>(2), (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2)L_25);
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_26 = L_15;
		AABB_t9C7B4FCF1ED10D750373270786690AAF7801AC6B* L_27 = ___aabb0;
		NullCheck(L_27);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_28 = (&L_27->___min_0);
		float L_29 = L_28->___x_2;
		AABB_t9C7B4FCF1ED10D750373270786690AAF7801AC6B* L_30 = ___aabb0;
		NullCheck(L_30);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_31 = (&L_30->___max_1);
		float L_32 = L_31->___y_3;
		AABB_t9C7B4FCF1ED10D750373270786690AAF7801AC6B* L_33 = ___aabb0;
		NullCheck(L_33);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_34 = (&L_33->___min_0);
		float L_35 = L_34->___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_36;
		memset((&L_36), 0, sizeof(L_36));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_36), L_29, L_32, L_35, /*hidden argument*/NULL);
		NullCheck(L_26);
		(L_26)->SetAt(static_cast<il2cpp_array_size_t>(3), (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2)L_36);
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_37 = L_26;
		AABB_t9C7B4FCF1ED10D750373270786690AAF7801AC6B* L_38 = ___aabb0;
		NullCheck(L_38);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_39 = (&L_38->___min_0);
		float L_40 = L_39->___x_2;
		AABB_t9C7B4FCF1ED10D750373270786690AAF7801AC6B* L_41 = ___aabb0;
		NullCheck(L_41);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_42 = (&L_41->___max_1);
		float L_43 = L_42->___y_3;
		AABB_t9C7B4FCF1ED10D750373270786690AAF7801AC6B* L_44 = ___aabb0;
		NullCheck(L_44);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_45 = (&L_44->___max_1);
		float L_46 = L_45->___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_47;
		memset((&L_47), 0, sizeof(L_47));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_47), L_40, L_43, L_46, /*hidden argument*/NULL);
		NullCheck(L_37);
		(L_37)->SetAt(static_cast<il2cpp_array_size_t>(4), (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2)L_47);
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_48 = L_37;
		AABB_t9C7B4FCF1ED10D750373270786690AAF7801AC6B* L_49 = ___aabb0;
		NullCheck(L_49);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_50 = (&L_49->___max_1);
		float L_51 = L_50->___x_2;
		AABB_t9C7B4FCF1ED10D750373270786690AAF7801AC6B* L_52 = ___aabb0;
		NullCheck(L_52);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_53 = (&L_52->___min_0);
		float L_54 = L_53->___y_3;
		AABB_t9C7B4FCF1ED10D750373270786690AAF7801AC6B* L_55 = ___aabb0;
		NullCheck(L_55);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_56 = (&L_55->___min_0);
		float L_57 = L_56->___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_58;
		memset((&L_58), 0, sizeof(L_58));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_58), L_51, L_54, L_57, /*hidden argument*/NULL);
		NullCheck(L_48);
		(L_48)->SetAt(static_cast<il2cpp_array_size_t>(5), (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2)L_58);
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_59 = L_48;
		AABB_t9C7B4FCF1ED10D750373270786690AAF7801AC6B* L_60 = ___aabb0;
		NullCheck(L_60);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_61 = (&L_60->___max_1);
		float L_62 = L_61->___x_2;
		AABB_t9C7B4FCF1ED10D750373270786690AAF7801AC6B* L_63 = ___aabb0;
		NullCheck(L_63);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_64 = (&L_63->___min_0);
		float L_65 = L_64->___y_3;
		AABB_t9C7B4FCF1ED10D750373270786690AAF7801AC6B* L_66 = ___aabb0;
		NullCheck(L_66);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_67 = (&L_66->___max_1);
		float L_68 = L_67->___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_69;
		memset((&L_69), 0, sizeof(L_69));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_69), L_62, L_65, L_68, /*hidden argument*/NULL);
		NullCheck(L_59);
		(L_59)->SetAt(static_cast<il2cpp_array_size_t>(6), (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2)L_69);
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_70 = L_59;
		AABB_t9C7B4FCF1ED10D750373270786690AAF7801AC6B* L_71 = ___aabb0;
		NullCheck(L_71);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_72 = (&L_71->___max_1);
		float L_73 = L_72->___x_2;
		AABB_t9C7B4FCF1ED10D750373270786690AAF7801AC6B* L_74 = ___aabb0;
		NullCheck(L_74);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_75 = (&L_74->___max_1);
		float L_76 = L_75->___y_3;
		AABB_t9C7B4FCF1ED10D750373270786690AAF7801AC6B* L_77 = ___aabb0;
		NullCheck(L_77);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_78 = (&L_77->___min_0);
		float L_79 = L_78->___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_80;
		memset((&L_80), 0, sizeof(L_80));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_80), L_73, L_76, L_79, /*hidden argument*/NULL);
		NullCheck(L_70);
		(L_70)->SetAt(static_cast<il2cpp_array_size_t>(7), (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2)L_80);
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_81 = L_70;
		AABB_t9C7B4FCF1ED10D750373270786690AAF7801AC6B* L_82 = ___aabb0;
		NullCheck(L_82);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_83 = (&L_82->___max_1);
		float L_84 = L_83->___x_2;
		AABB_t9C7B4FCF1ED10D750373270786690AAF7801AC6B* L_85 = ___aabb0;
		NullCheck(L_85);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_86 = (&L_85->___max_1);
		float L_87 = L_86->___y_3;
		AABB_t9C7B4FCF1ED10D750373270786690AAF7801AC6B* L_88 = ___aabb0;
		NullCheck(L_88);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_89 = (&L_88->___max_1);
		float L_90 = L_89->___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_91;
		memset((&L_91), 0, sizeof(L_91));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_91), L_84, L_87, L_90, /*hidden argument*/NULL);
		NullCheck(L_81);
		(L_81)->SetAt(static_cast<il2cpp_array_size_t>(8), (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2)L_91);
		V_0 = L_81;
		V_1 = (3.0000001E+10f);
		V_2 = 0;
		goto IL_019e;
	}

IL_0187:
	{
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_92 = V_0;
		int32_t L_93 = V_2;
		NullCheck(L_92);
		int32_t L_94 = L_93;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_95 = (L_92)->GetAt(static_cast<il2cpp_array_size_t>(L_94));
		il2cpp_codegen_runtime_class_init_inline(Util_tBEDFF10A323370DC03D5CAB4FEF2AB8EFEB0D7D2_il2cpp_TypeInfo_var);
		float L_96;
		L_96 = Util_DistanceToCamera_m182F7726DACCD451AC7068AA9363420A203D6028(L_95, NULL);
		V_3 = L_96;
		float L_97 = V_3;
		float L_98 = V_1;
		if ((!(((float)L_97) < ((float)L_98))))
		{
			goto IL_019a;
		}
	}
	{
		float L_99 = V_3;
		V_1 = L_99;
	}

IL_019a:
	{
		int32_t L_100 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_100, 1));
	}

IL_019e:
	{
		int32_t L_101 = V_2;
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_102 = V_0;
		NullCheck(L_102);
		if ((((int32_t)L_101) < ((int32_t)((int32_t)(((RuntimeArray*)L_102)->max_length)))))
		{
			goto IL_0187;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(Util_tBEDFF10A323370DC03D5CAB4FEF2AB8EFEB0D7D2_il2cpp_TypeInfo_var);
		float L_103 = ((Util_tBEDFF10A323370DC03D5CAB4FEF2AB8EFEB0D7D2_StaticFields*)il2cpp_codegen_static_fields_for(Util_tBEDFF10A323370DC03D5CAB4FEF2AB8EFEB0D7D2_il2cpp_TypeInfo_var))->___defaultOutlineOffset__0;
		float L_104 = V_1;
		float L_105;
		L_105 = Util_CameraFovPow_mB4E93B914B7AB013AE4A5F31497CDC23732C2214(NULL);
		return ((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_multiply(L_103, L_104)), L_105));
	}
}
// UnityEngine.Texture2D tripolygon.UModeler.Util::EmptyIcon(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* Util_EmptyIcon_mC2B7D9A63EE8E1CB33E9CF64829851D27ADD5637 (int32_t ___iconSize0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Color32U5BU5D_t38116C3E91765C4C5726CE12C77FAD7F9F737259_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* V_0 = NULL;
	Color32U5BU5D_t38116C3E91765C4C5726CE12C77FAD7F9F737259* V_1 = NULL;
	int32_t V_2 = 0;
	{
		int32_t L_0 = ___iconSize0;
		int32_t L_1 = ___iconSize0;
		Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* L_2 = (Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4*)il2cpp_codegen_object_new(Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4_il2cpp_TypeInfo_var);
		NullCheck(L_2);
		Texture2D__ctor_mECF60A9EC0638EC353C02C8E99B6B465D23BE917(L_2, L_0, L_1, 5, (bool)0, NULL);
		V_0 = L_2;
		int32_t L_3 = ___iconSize0;
		int32_t L_4 = ___iconSize0;
		Color32U5BU5D_t38116C3E91765C4C5726CE12C77FAD7F9F737259* L_5 = (Color32U5BU5D_t38116C3E91765C4C5726CE12C77FAD7F9F737259*)(Color32U5BU5D_t38116C3E91765C4C5726CE12C77FAD7F9F737259*)SZArrayNew(Color32U5BU5D_t38116C3E91765C4C5726CE12C77FAD7F9F737259_il2cpp_TypeInfo_var, (uint32_t)((int32_t)il2cpp_codegen_multiply(L_3, L_4)));
		V_1 = L_5;
		V_2 = 0;
		goto IL_002c;
	}

IL_0017:
	{
		Color32U5BU5D_t38116C3E91765C4C5726CE12C77FAD7F9F737259* L_6 = V_1;
		int32_t L_7 = V_2;
		Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B L_8;
		memset((&L_8), 0, sizeof(L_8));
		Color32__ctor_mC9C6B443F0C7CA3F8B174158B2AF6F05E18EAC4E_inline((&L_8), (uint8_t)0, (uint8_t)0, (uint8_t)0, (uint8_t)((int32_t)50), /*hidden argument*/NULL);
		NullCheck(L_6);
		(L_6)->SetAt(static_cast<il2cpp_array_size_t>(L_7), (Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B)L_8);
		int32_t L_9 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_9, 1));
	}

IL_002c:
	{
		int32_t L_10 = V_2;
		int32_t L_11 = ___iconSize0;
		int32_t L_12 = ___iconSize0;
		if ((((int32_t)L_10) < ((int32_t)((int32_t)il2cpp_codegen_multiply(L_11, L_12)))))
		{
			goto IL_0017;
		}
	}
	{
		Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* L_13 = V_0;
		Color32U5BU5D_t38116C3E91765C4C5726CE12C77FAD7F9F737259* L_14 = V_1;
		NullCheck(L_13);
		Texture2D_SetPixels32_m169F9873A21FB8DECA24DC1B8F06FB23D13BEE2A(L_13, L_14, NULL);
		Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* L_15 = V_0;
		NullCheck(L_15);
		Texture2D_Apply_mA014182C9EE0BBF6EEE3B286854F29E50EB972DC(L_15, NULL);
		Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* L_16 = V_0;
		return L_16;
	}
}
// System.String tripolygon.UModeler.Util::ToDisplayName(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Util_ToDisplayName_mF4F7D51262E6BE41ABCF77B68053E10A515BE53D (String_t* ___name0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2386E77CF610F786B06A91AF2C1B3FD2282D2745);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral91D8238D4B7DF9CBA8C761B0EB69EEE7E1F496C8);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDDEEF5C98FF6DACE0E26854D3312EE942E548D70);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	int32_t V_1 = 0;
	{
		String_t* L_0 = ___name0;
		NullCheck(L_0);
		String_t* L_1;
		L_1 = String_Replace_mABDB7003A1D0AEDCAE9FF85E3DFFFBA752D2A166(L_0, _stringLiteral91D8238D4B7DF9CBA8C761B0EB69EEE7E1F496C8, _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709, NULL);
		V_0 = L_1;
		String_t* L_2 = V_0;
		NullCheck(L_2);
		String_t* L_3;
		L_3 = String_Replace_mABDB7003A1D0AEDCAE9FF85E3DFFFBA752D2A166(L_2, _stringLiteralDDEEF5C98FF6DACE0E26854D3312EE942E548D70, _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709, NULL);
		V_0 = L_3;
		V_1 = 1;
		goto IL_0051;
	}

IL_0026:
	{
		String_t* L_4 = V_0;
		int32_t L_5 = V_1;
		NullCheck(L_4);
		Il2CppChar L_6;
		L_6 = String_get_Chars_mC49DF0CD2D3BE7BE97B3AD9C995BE3094F8E36D3(L_4, L_5, NULL);
		if ((((int32_t)L_6) < ((int32_t)((int32_t)65))))
		{
			goto IL_004d;
		}
	}
	{
		String_t* L_7 = V_0;
		int32_t L_8 = V_1;
		NullCheck(L_7);
		Il2CppChar L_9;
		L_9 = String_get_Chars_mC49DF0CD2D3BE7BE97B3AD9C995BE3094F8E36D3(L_7, L_8, NULL);
		if ((((int32_t)L_9) > ((int32_t)((int32_t)90))))
		{
			goto IL_004d;
		}
	}
	{
		String_t* L_10 = V_0;
		int32_t L_11 = V_1;
		int32_t L_12 = L_11;
		V_1 = ((int32_t)il2cpp_codegen_add(L_12, 1));
		NullCheck(L_10);
		String_t* L_13;
		L_13 = String_Insert_mA279E748F06514A6D0B9B680D651D6A6C6BB561A(L_10, L_12, _stringLiteral2386E77CF610F786B06A91AF2C1B3FD2282D2745, NULL);
		V_0 = L_13;
	}

IL_004d:
	{
		int32_t L_14 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_14, 1));
	}

IL_0051:
	{
		int32_t L_15 = V_1;
		String_t* L_16 = V_0;
		NullCheck(L_16);
		int32_t L_17;
		L_17 = String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline(L_16, NULL);
		if ((((int32_t)L_15) < ((int32_t)L_17)))
		{
			goto IL_0026;
		}
	}
	{
		String_t* L_18 = V_0;
		return L_18;
	}
}
// UnityEngine.Texture2D tripolygon.UModeler.Util::ConvertToGrayScale(UnityEngine.Texture2D)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* Util_ConvertToGrayScale_m71472205BEB44CBB4864957F79E6A664C3A5DBDB (Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* ___original0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	ColorU5BU5D_t612261CF293F6FFC3D80AB52259FF0DC2B2CC389* V_0 = NULL;
	Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* V_1 = NULL;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	float V_5 = 0.0f;
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F V_6;
	memset((&V_6), 0, sizeof(V_6));
	{
		Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* L_0 = ___original0;
		NullCheck(L_0);
		ColorU5BU5D_t612261CF293F6FFC3D80AB52259FF0DC2B2CC389* L_1;
		L_1 = Texture2D_GetPixels_m77A00D71DF5CDC7DAA0EE66FF2C90A24C7604039(L_0, NULL);
		V_0 = L_1;
		Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* L_2 = ___original0;
		NullCheck(L_2);
		int32_t L_3;
		L_3 = VirtualFuncInvoker0< int32_t >::Invoke(5 /* System.Int32 UnityEngine.Texture::get_width() */, L_2);
		Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* L_4 = ___original0;
		NullCheck(L_4);
		int32_t L_5;
		L_5 = VirtualFuncInvoker0< int32_t >::Invoke(7 /* System.Int32 UnityEngine.Texture::get_height() */, L_4);
		Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* L_6 = (Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4*)il2cpp_codegen_object_new(Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4_il2cpp_TypeInfo_var);
		NullCheck(L_6);
		Texture2D__ctor_mECF60A9EC0638EC353C02C8E99B6B465D23BE917(L_6, L_3, L_5, 5, (bool)0, NULL);
		V_1 = L_6;
		V_2 = 0;
		goto IL_0073;
	}

IL_001f:
	{
		V_3 = 0;
		goto IL_0066;
	}

IL_0023:
	{
		int32_t L_7 = V_2;
		Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* L_8 = ___original0;
		NullCheck(L_8);
		int32_t L_9;
		L_9 = VirtualFuncInvoker0< int32_t >::Invoke(5 /* System.Int32 UnityEngine.Texture::get_width() */, L_8);
		int32_t L_10 = V_3;
		V_4 = ((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_multiply(L_7, L_9)), L_10));
		ColorU5BU5D_t612261CF293F6FFC3D80AB52259FF0DC2B2CC389* L_11 = V_0;
		int32_t L_12 = V_4;
		NullCheck(L_11);
		float L_13;
		L_13 = Color_get_grayscale_m35DB26808E366521ED38551860082DBB83A0EDBB_inline(((L_11)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_12))), NULL);
		V_5 = L_13;
		float L_14 = V_5;
		float L_15 = V_5;
		float L_16 = V_5;
		ColorU5BU5D_t612261CF293F6FFC3D80AB52259FF0DC2B2CC389* L_17 = V_0;
		int32_t L_18 = V_4;
		NullCheck(L_17);
		float L_19 = ((L_17)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_18)))->___a_3;
		Color__ctor_m3786F0D6E510D9CFA544523A955870BD2A514C8C_inline((&V_6), L_14, L_15, L_16, L_19, NULL);
		Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* L_20 = V_1;
		int32_t L_21 = V_3;
		int32_t L_22 = V_2;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_23 = V_6;
		NullCheck(L_20);
		Texture2D_SetPixel_m2CCFC5F729135D59DC4A697C2605A3FC5C8574DB(L_20, L_21, L_22, L_23, NULL);
		int32_t L_24 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_24, 1));
	}

IL_0066:
	{
		int32_t L_25 = V_3;
		Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* L_26 = ___original0;
		NullCheck(L_26);
		int32_t L_27;
		L_27 = VirtualFuncInvoker0< int32_t >::Invoke(5 /* System.Int32 UnityEngine.Texture::get_width() */, L_26);
		if ((((int32_t)L_25) < ((int32_t)L_27)))
		{
			goto IL_0023;
		}
	}
	{
		int32_t L_28 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_28, 1));
	}

IL_0073:
	{
		int32_t L_29 = V_2;
		Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* L_30 = ___original0;
		NullCheck(L_30);
		int32_t L_31;
		L_31 = VirtualFuncInvoker0< int32_t >::Invoke(7 /* System.Int32 UnityEngine.Texture::get_height() */, L_30);
		if ((((int32_t)L_29) < ((int32_t)L_31)))
		{
			goto IL_001f;
		}
	}
	{
		Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* L_32 = V_1;
		NullCheck(L_32);
		Texture2D_Apply_mA014182C9EE0BBF6EEE3B286854F29E50EB972DC(L_32, NULL);
		Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* L_33 = V_1;
		return L_33;
	}
}
// System.Void tripolygon.UModeler.Util::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Util__ctor_m491C73F110B9D309C3B5374FDFB8924B4C4FF49B (Util_tBEDFF10A323370DC03D5CAB4FEF2AB8EFEB0D7D2* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
// System.Void tripolygon.UModeler.Util::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Util__cctor_mB9771B88B243181A129AFA374AC705933767FDAD (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Util_tBEDFF10A323370DC03D5CAB4FEF2AB8EFEB0D7D2_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		((Util_tBEDFF10A323370DC03D5CAB4FEF2AB8EFEB0D7D2_StaticFields*)il2cpp_codegen_static_fields_for(Util_tBEDFF10A323370DC03D5CAB4FEF2AB8EFEB0D7D2_il2cpp_TypeInfo_var))->___defaultOutlineOffset__0 = (0.00039999999f);
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
// Conversion methods for marshalling of: tripolygon.UModeler.Util/ClippingVertex
IL2CPP_EXTERN_C void ClippingVertex_tF5DB1E0668D7F574FF74C67BC6C91561FAF13E30_marshal_pinvoke(const ClippingVertex_tF5DB1E0668D7F574FF74C67BC6C91561FAF13E30& unmarshaled, ClippingVertex_tF5DB1E0668D7F574FF74C67BC6C91561FAF13E30_marshaled_pinvoke& marshaled)
{
	Exception_t* ___vtx_0Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'vtx' of type 'ClippingVertex': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___vtx_0Exception, NULL);
}
IL2CPP_EXTERN_C void ClippingVertex_tF5DB1E0668D7F574FF74C67BC6C91561FAF13E30_marshal_pinvoke_back(const ClippingVertex_tF5DB1E0668D7F574FF74C67BC6C91561FAF13E30_marshaled_pinvoke& marshaled, ClippingVertex_tF5DB1E0668D7F574FF74C67BC6C91561FAF13E30& unmarshaled)
{
	Exception_t* ___vtx_0Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'vtx' of type 'ClippingVertex': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___vtx_0Exception, NULL);
}
// Conversion method for clean up from marshalling of: tripolygon.UModeler.Util/ClippingVertex
IL2CPP_EXTERN_C void ClippingVertex_tF5DB1E0668D7F574FF74C67BC6C91561FAF13E30_marshal_pinvoke_cleanup(ClippingVertex_tF5DB1E0668D7F574FF74C67BC6C91561FAF13E30_marshaled_pinvoke& marshaled)
{
}
// Conversion methods for marshalling of: tripolygon.UModeler.Util/ClippingVertex
IL2CPP_EXTERN_C void ClippingVertex_tF5DB1E0668D7F574FF74C67BC6C91561FAF13E30_marshal_com(const ClippingVertex_tF5DB1E0668D7F574FF74C67BC6C91561FAF13E30& unmarshaled, ClippingVertex_tF5DB1E0668D7F574FF74C67BC6C91561FAF13E30_marshaled_com& marshaled)
{
	Exception_t* ___vtx_0Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'vtx' of type 'ClippingVertex': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___vtx_0Exception, NULL);
}
IL2CPP_EXTERN_C void ClippingVertex_tF5DB1E0668D7F574FF74C67BC6C91561FAF13E30_marshal_com_back(const ClippingVertex_tF5DB1E0668D7F574FF74C67BC6C91561FAF13E30_marshaled_com& marshaled, ClippingVertex_tF5DB1E0668D7F574FF74C67BC6C91561FAF13E30& unmarshaled)
{
	Exception_t* ___vtx_0Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'vtx' of type 'ClippingVertex': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___vtx_0Exception, NULL);
}
// Conversion method for clean up from marshalling of: tripolygon.UModeler.Util/ClippingVertex
IL2CPP_EXTERN_C void ClippingVertex_tF5DB1E0668D7F574FF74C67BC6C91561FAF13E30_marshal_com_cleanup(ClippingVertex_tF5DB1E0668D7F574FF74C67BC6C91561FAF13E30_marshaled_com& marshaled)
{
}
// System.Void tripolygon.UModeler.Util/ClippingVertex::.ctor(tripolygon.UModeler.Vertex,tripolygon.UModeler.Util/EClippingVertexType,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ClippingVertex__ctor_m449126CCE5B7596828D939C80C832B40FA77107D (ClippingVertex_tF5DB1E0668D7F574FF74C67BC6C91561FAF13E30* __this, Vertex_tB6D4D191E463D1653AA47DED15E41F21BA5A21FC* ____vtx0, int32_t ____type1, bool ____zero_dist_no_created2, const RuntimeMethod* method) 
{
	{
		Vertex_tB6D4D191E463D1653AA47DED15E41F21BA5A21FC* L_0 = ____vtx0;
		__this->___vtx_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___vtx_0), (void*)L_0);
		int32_t L_1 = ____type1;
		__this->___type_1 = L_1;
		bool L_2 = ____zero_dist_no_created2;
		__this->___zeroDistAndNoCreated_2 = L_2;
		return;
	}
}
IL2CPP_EXTERN_C  void ClippingVertex__ctor_m449126CCE5B7596828D939C80C832B40FA77107D_AdjustorThunk (RuntimeObject* __this, Vertex_tB6D4D191E463D1653AA47DED15E41F21BA5A21FC* ____vtx0, int32_t ____type1, bool ____zero_dist_no_created2, const RuntimeMethod* method)
{
	ClippingVertex_tF5DB1E0668D7F574FF74C67BC6C91561FAF13E30* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<ClippingVertex_tF5DB1E0668D7F574FF74C67BC6C91561FAF13E30*>(__this + _offset);
	ClippingVertex__ctor_m449126CCE5B7596828D939C80C832B40FA77107D(_thisAdjusted, ____vtx0, ____type1, ____zero_dist_no_created2, method);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// UnityEngine.Vector2 tripolygon.UModeler.UVUtil::TransformUV(UnityEngine.Vector2,tripolygon.UModeler.UVParameter,UnityEngine.Vector2)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 UVUtil_TransformUV_m3E1A106877B6D139AE5DFDA0519A60307C2EB10F (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___uv0, UVParameter_t3DB903DED34BB8F9E4C5E5345C316D0E793081B3* ___texture_param1, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___uv_center2, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	float V_1 = 0.0f;
	Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 V_2;
	memset((&V_2), 0, sizeof(V_2));
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_3;
	memset((&V_3), 0, sizeof(V_3));
	float G_B3_0 = 0.0f;
	float G_B6_0 = 0.0f;
	{
		UVParameter_t3DB903DED34BB8F9E4C5E5345C316D0E793081B3* L_0 = ___texture_param1;
		NullCheck(L_0);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* L_1 = (&L_0->___scale_1);
		float L_2 = L_1->___x_0;
		float L_3;
		L_3 = fabsf(L_2);
		if ((((float)L_3) < ((float)(9.99999975E-05f))))
		{
			goto IL_0024;
		}
	}
	{
		UVParameter_t3DB903DED34BB8F9E4C5E5345C316D0E793081B3* L_4 = ___texture_param1;
		NullCheck(L_4);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* L_5 = (&L_4->___scale_1);
		float L_6 = L_5->___x_0;
		G_B3_0 = L_6;
		goto IL_0029;
	}

IL_0024:
	{
		G_B3_0 = (9.99999975E-05f);
	}

IL_0029:
	{
		V_0 = G_B3_0;
		UVParameter_t3DB903DED34BB8F9E4C5E5345C316D0E793081B3* L_7 = ___texture_param1;
		NullCheck(L_7);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* L_8 = (&L_7->___scale_1);
		float L_9 = L_8->___y_1;
		float L_10;
		L_10 = fabsf(L_9);
		if ((((float)L_10) < ((float)(9.99999975E-05f))))
		{
			goto IL_004e;
		}
	}
	{
		UVParameter_t3DB903DED34BB8F9E4C5E5345C316D0E793081B3* L_11 = ___texture_param1;
		NullCheck(L_11);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* L_12 = (&L_11->___scale_1);
		float L_13 = L_12->___y_1;
		G_B6_0 = L_13;
		goto IL_0053;
	}

IL_004e:
	{
		G_B6_0 = (9.99999975E-05f);
	}

IL_0053:
	{
		V_1 = G_B6_0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_14;
		L_14 = Vector3_get_zero_m0C1249C3F25B1C70EAD3CC8B31259975A457AE39_inline(NULL);
		UVParameter_t3DB903DED34BB8F9E4C5E5345C316D0E793081B3* L_15 = ___texture_param1;
		NullCheck(L_15);
		float L_16 = L_15->___rotation_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_17;
		L_17 = Vector3_get_forward_mAA55A7034304DF8B2152EAD49AE779FC4CA2EB4A_inline(NULL);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_18;
		L_18 = Quaternion_AngleAxis_mF37022977B297E63AA70D69EA1C4C922FF22CC80(L_16, L_17, NULL);
		float L_19 = V_0;
		float L_20 = V_1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_21;
		memset((&L_21), 0, sizeof(L_21));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_21), ((float)((1.0f)/L_19)), ((float)((1.0f)/L_20)), (1.0f), /*hidden argument*/NULL);
		Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 L_22;
		L_22 = Matrix4x4_TRS_mCC04FD47347234B451ACC6CCD2CE6D02E1E0E1E3(L_14, L_18, L_21, NULL);
		V_2 = L_22;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_23 = ___uv0;
		float L_24 = L_23.___x_0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_25 = ___uv_center2;
		float L_26 = L_25.___x_0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_27 = ___uv0;
		float L_28 = L_27.___y_1;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_29 = ___uv_center2;
		float L_30 = L_29.___y_1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_31;
		memset((&L_31), 0, sizeof(L_31));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_31), ((float)il2cpp_codegen_subtract(L_24, L_26)), ((float)il2cpp_codegen_subtract(L_28, L_30)), (1.0f), /*hidden argument*/NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_32;
		L_32 = Matrix4x4_MultiplyVector_mFD12F86A473E90BBB0002149ABA3917B2A518937((&V_2), L_31, NULL);
		V_3 = L_32;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_33 = V_3;
		float L_34 = L_33.___x_2;
		UVParameter_t3DB903DED34BB8F9E4C5E5345C316D0E793081B3* L_35 = ___texture_param1;
		NullCheck(L_35);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* L_36 = (&L_35->___shift_0);
		float L_37 = L_36->___x_0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_38 = ___uv_center2;
		float L_39 = L_38.___x_0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_40 = V_3;
		float L_41 = L_40.___y_3;
		UVParameter_t3DB903DED34BB8F9E4C5E5345C316D0E793081B3* L_42 = ___texture_param1;
		NullCheck(L_42);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* L_43 = (&L_42->___shift_0);
		float L_44 = L_43->___y_1;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_45 = ___uv_center2;
		float L_46 = L_45.___y_1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_47;
		memset((&L_47), 0, sizeof(L_47));
		Vector3__ctor_m5F87930F9B0828E5652E2D9D01ED907C01122C86_inline((&L_47), ((float)il2cpp_codegen_add(((float)il2cpp_codegen_add(L_34, L_37)), L_39)), ((float)il2cpp_codegen_add(((float)il2cpp_codegen_add(L_41, L_44)), L_46)), /*hidden argument*/NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_48;
		L_48 = Vector2_op_Implicit_mE8EBEE9291F11BB02F062D6E000F4798968CBD96_inline(L_47, NULL);
		return L_48;
	}
}
// UnityEngine.Vector2 tripolygon.UModeler.UVUtil::CalcTexCoords(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 UVUtil_CalcTexCoords_m38167AFE2256205853C23DABC2B9040A8D2D78A9 (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___pos0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___normal1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UVUtil_t52D342AE33D61171F82A4AD64BD1AEA48567C302_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___normal1;
		il2cpp_codegen_runtime_class_init_inline(UVUtil_t52D342AE33D61171F82A4AD64BD1AEA48567C302_il2cpp_TypeInfo_var);
		UVUtil_CalcTextureBasis_m237CEF37696147F00086FC824117EB094F605454(L_0, (&V_0), (&V_1), NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1 = ___pos0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2 = V_0;
		float L_3;
		L_3 = Vector3_Dot_mBB86BB940AA0A32FA7D3C02AC42E5BC7095A5D52_inline(L_1, L_2, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4 = ___pos0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_5 = V_1;
		float L_6;
		L_6 = Vector3_Dot_mBB86BB940AA0A32FA7D3C02AC42E5BC7095A5D52_inline(L_4, L_5, NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_7;
		memset((&L_7), 0, sizeof(L_7));
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&L_7), L_3, ((-L_6)), /*hidden argument*/NULL);
		return L_7;
	}
}
// System.Void tripolygon.UModeler.UVUtil::CalcTextureBasis(UnityEngine.Vector3,UnityEngine.Vector3&,UnityEngine.Vector3&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UVUtil_CalcTextureBasis_m237CEF37696147F00086FC824117EB094F605454 (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___normal0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* ___basis_u1, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* ___basis_v2, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UVUtil_t52D342AE33D61171F82A4AD64BD1AEA48567C302_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* V_0 = NULL;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	float V_4 = 0.0f;
	float V_5 = 0.0f;
	{
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_0 = (Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C*)(Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C*)SZArrayNew(Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C_il2cpp_TypeInfo_var, (uint32_t)2);
		V_0 = L_0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1 = ___normal0;
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_2 = V_0;
		NullCheck(L_2);
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_3 = V_0;
		NullCheck(L_3);
		il2cpp_codegen_runtime_class_init_inline(UVUtil_t52D342AE33D61171F82A4AD64BD1AEA48567C302_il2cpp_TypeInfo_var);
		UVUtil_CalcTextureAxis_mF9730725A87A39A060A21ABC76019FEDF36CEC46(L_1, ((L_2)->GetAddressAt(static_cast<il2cpp_array_size_t>(0))), ((L_3)->GetAddressAt(static_cast<il2cpp_array_size_t>(1))), NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_4 = ___basis_u1;
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_5 = V_0;
		NullCheck(L_5);
		int32_t L_6 = 0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_7 = (L_5)->GetAt(static_cast<il2cpp_array_size_t>(L_6));
		*(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2*)L_4 = L_7;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_8 = ___basis_v2;
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_9 = V_0;
		NullCheck(L_9);
		int32_t L_10 = 1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_11 = (L_9)->GetAt(static_cast<il2cpp_array_size_t>(L_10));
		*(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2*)L_8 = L_11;
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_12 = V_0;
		NullCheck(L_12);
		float L_13 = ((L_12)->GetAddressAt(static_cast<il2cpp_array_size_t>(0)))->___x_2;
		if ((((float)L_13) == ((float)(0.0f))))
		{
			goto IL_004c;
		}
	}
	{
		V_1 = 0;
		goto IL_0065;
	}

IL_004c:
	{
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_14 = V_0;
		NullCheck(L_14);
		float L_15 = ((L_14)->GetAddressAt(static_cast<il2cpp_array_size_t>(0)))->___y_3;
		if ((((float)L_15) == ((float)(0.0f))))
		{
			goto IL_0063;
		}
	}
	{
		V_1 = 1;
		goto IL_0065;
	}

IL_0063:
	{
		V_1 = 2;
	}

IL_0065:
	{
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_16 = V_0;
		NullCheck(L_16);
		float L_17 = ((L_16)->GetAddressAt(static_cast<il2cpp_array_size_t>(1)))->___x_2;
		if ((((float)L_17) == ((float)(0.0f))))
		{
			goto IL_007c;
		}
	}
	{
		V_2 = 0;
		goto IL_0095;
	}

IL_007c:
	{
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_18 = V_0;
		NullCheck(L_18);
		float L_19 = ((L_18)->GetAddressAt(static_cast<il2cpp_array_size_t>(1)))->___y_3;
		if ((((float)L_19) == ((float)(0.0f))))
		{
			goto IL_0093;
		}
	}
	{
		V_2 = 1;
		goto IL_0095;
	}

IL_0093:
	{
		V_2 = 2;
	}

IL_0095:
	{
		V_3 = 0;
		goto IL_00e4;
	}

IL_0099:
	{
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_20 = V_0;
		int32_t L_21 = V_3;
		NullCheck(L_20);
		int32_t L_22 = V_1;
		float L_23;
		L_23 = Vector3_get_Item_m163510BFC2F7BFAD1B601DC9F3606B799CF199F2_inline(((L_20)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_21))), L_22, NULL);
		V_4 = L_23;
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_24 = V_0;
		int32_t L_25 = V_3;
		NullCheck(L_24);
		int32_t L_26 = V_2;
		float L_27;
		L_27 = Vector3_get_Item_m163510BFC2F7BFAD1B601DC9F3606B799CF199F2_inline(((L_24)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_25))), L_26, NULL);
		V_5 = L_27;
		int32_t L_28 = V_3;
		if (L_28)
		{
			goto IL_00ce;
		}
	}
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_29 = ___basis_u1;
		int32_t L_30 = V_1;
		float L_31 = V_4;
		Vector3_set_Item_m79136861DEC5862CE7EC20AB3B0EF10A3957CEC3_inline(L_29, L_30, L_31, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_32 = ___basis_u1;
		int32_t L_33 = V_2;
		float L_34 = V_5;
		Vector3_set_Item_m79136861DEC5862CE7EC20AB3B0EF10A3957CEC3_inline(L_32, L_33, L_34, NULL);
		goto IL_00e0;
	}

IL_00ce:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_35 = ___basis_v2;
		int32_t L_36 = V_1;
		float L_37 = V_4;
		Vector3_set_Item_m79136861DEC5862CE7EC20AB3B0EF10A3957CEC3_inline(L_35, L_36, L_37, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_38 = ___basis_v2;
		int32_t L_39 = V_2;
		float L_40 = V_5;
		Vector3_set_Item_m79136861DEC5862CE7EC20AB3B0EF10A3957CEC3_inline(L_38, L_39, L_40, NULL);
	}

IL_00e0:
	{
		int32_t L_41 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_41, 1));
	}

IL_00e4:
	{
		int32_t L_42 = V_3;
		if ((((int32_t)L_42) < ((int32_t)2)))
		{
			goto IL_0099;
		}
	}
	{
		return;
	}
}
// System.Void tripolygon.UModeler.UVUtil::CalcTextureAxis(UnityEngine.Vector3,UnityEngine.Vector3&,UnityEngine.Vector3&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UVUtil_CalcTextureAxis_mF9730725A87A39A060A21ABC76019FEDF36CEC46 (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___normal0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* ___xv1, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* ___yv2, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UVUtil_t52D342AE33D61171F82A4AD64BD1AEA48567C302_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	float V_1 = 0.0f;
	float V_2 = 0.0f;
	int32_t V_3 = 0;
	{
		V_2 = (-1.0f);
		V_0 = 0;
		V_3 = 0;
		goto IL_002c;
	}

IL_000c:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___normal0;
		il2cpp_codegen_runtime_class_init_inline(UVUtil_t52D342AE33D61171F82A4AD64BD1AEA48567C302_il2cpp_TypeInfo_var);
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_1 = ((UVUtil_t52D342AE33D61171F82A4AD64BD1AEA48567C302_StaticFields*)il2cpp_codegen_static_fields_for(UVUtil_t52D342AE33D61171F82A4AD64BD1AEA48567C302_il2cpp_TypeInfo_var))->___elemental_axes__0;
		int32_t L_2 = V_3;
		NullCheck(L_1);
		int32_t L_3 = ((int32_t)il2cpp_codegen_multiply(L_2, 3));
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4 = (L_1)->GetAt(static_cast<il2cpp_array_size_t>(L_3));
		float L_5;
		L_5 = Vector3_Dot_mBB86BB940AA0A32FA7D3C02AC42E5BC7095A5D52_inline(L_0, L_4, NULL);
		V_1 = L_5;
		float L_6 = V_1;
		float L_7 = V_2;
		if ((!(((float)L_6) > ((float)L_7))))
		{
			goto IL_0028;
		}
	}
	{
		float L_8 = V_1;
		V_2 = L_8;
		int32_t L_9 = V_3;
		V_0 = L_9;
	}

IL_0028:
	{
		int32_t L_10 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_10, 1));
	}

IL_002c:
	{
		int32_t L_11 = V_3;
		if ((((int32_t)L_11) < ((int32_t)6)))
		{
			goto IL_000c;
		}
	}
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_12 = ___xv1;
		il2cpp_codegen_runtime_class_init_inline(UVUtil_t52D342AE33D61171F82A4AD64BD1AEA48567C302_il2cpp_TypeInfo_var);
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_13 = ((UVUtil_t52D342AE33D61171F82A4AD64BD1AEA48567C302_StaticFields*)il2cpp_codegen_static_fields_for(UVUtil_t52D342AE33D61171F82A4AD64BD1AEA48567C302_il2cpp_TypeInfo_var))->___elemental_axes__0;
		int32_t L_14 = V_0;
		NullCheck(L_13);
		int32_t L_15 = ((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_multiply(L_14, 3)), 1));
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_16 = (L_13)->GetAt(static_cast<il2cpp_array_size_t>(L_15));
		*(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2*)L_12 = L_16;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_17 = ___yv2;
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_18 = ((UVUtil_t52D342AE33D61171F82A4AD64BD1AEA48567C302_StaticFields*)il2cpp_codegen_static_fields_for(UVUtil_t52D342AE33D61171F82A4AD64BD1AEA48567C302_il2cpp_TypeInfo_var))->___elemental_axes__0;
		int32_t L_19 = V_0;
		NullCheck(L_18);
		int32_t L_20 = ((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_multiply(L_19, 3)), 2));
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_21 = (L_18)->GetAt(static_cast<il2cpp_array_size_t>(L_20));
		*(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2*)L_17 = L_21;
		return;
	}
}
// tripolygon.UModeler.UVParameter tripolygon.UModeler.UVUtil::TileUVs(tripolygon.UModeler.PlaneEx,tripolygon.UModeler.AABB,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR UVParameter_t3DB903DED34BB8F9E4C5E5345C316D0E793081B3* UVUtil_TileUVs_mEF6815BA67EA2A493A0FF03C6A99C5595CDCF3C1 (PlaneEx_t5512A7D4BF235ED6ED6F1F09A1621A1DCB31509D* ___plane0, AABB_t9C7B4FCF1ED10D750373270786690AAF7801AC6B* ___aabb1, float ___tile_u2, float ___tile_v3, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UVParameter_t3DB903DED34BB8F9E4C5E5345C316D0E793081B3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UVUtil_t52D342AE33D61171F82A4AD64BD1AEA48567C302_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	UVParameter_t3DB903DED34BB8F9E4C5E5345C316D0E793081B3* V_0 = NULL;
	Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* V_1 = NULL;
	Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* V_2 = NULL;
	float V_3 = 0.0f;
	float V_4 = 0.0f;
	float V_5 = 0.0f;
	float V_6 = 0.0f;
	float V_7 = 0.0f;
	float V_8 = 0.0f;
	float V_9 = 0.0f;
	float V_10 = 0.0f;
	float V_11 = 0.0f;
	float V_12 = 0.0f;
	float V_13 = 0.0f;
	float V_14 = 0.0f;
	int32_t V_15 = 0;
	float V_16 = 0.0f;
	float V_17 = 0.0f;
	float G_B16_0 = 0.0f;
	float G_B19_0 = 0.0f;
	float G_B22_0 = 0.0f;
	float G_B25_0 = 0.0f;
	{
		UVParameter_t3DB903DED34BB8F9E4C5E5345C316D0E793081B3* L_0 = (UVParameter_t3DB903DED34BB8F9E4C5E5345C316D0E793081B3*)il2cpp_codegen_object_new(UVParameter_t3DB903DED34BB8F9E4C5E5345C316D0E793081B3_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		UVParameter__ctor_mA4F56CBC322ACB03523E0184D8BF8BB16037ED82(L_0, NULL);
		V_0 = L_0;
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_1 = (Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C*)(Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C*)SZArrayNew(Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C_il2cpp_TypeInfo_var, (uint32_t)2);
		V_1 = L_1;
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_2 = (Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C*)(Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C*)SZArrayNew(Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C_il2cpp_TypeInfo_var, (uint32_t)4);
		V_2 = L_2;
		float L_3;
		L_3 = sinf((0.0f));
		V_3 = L_3;
		float L_4;
		L_4 = cosf((0.0f));
		V_4 = L_4;
		PlaneEx_t5512A7D4BF235ED6ED6F1F09A1621A1DCB31509D* L_5 = ___plane0;
		NullCheck(L_5);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6;
		L_6 = PlaneEx_get_normal_m934F59FA92AFFDF816E50D2CF5971AA97B1D067C_inline(L_5, NULL);
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_7 = V_1;
		NullCheck(L_7);
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_8 = V_1;
		NullCheck(L_8);
		il2cpp_codegen_runtime_class_init_inline(UVUtil_t52D342AE33D61171F82A4AD64BD1AEA48567C302_il2cpp_TypeInfo_var);
		UVUtil_CalcTextureAxis_mF9730725A87A39A060A21ABC76019FEDF36CEC46(L_6, ((L_7)->GetAddressAt(static_cast<il2cpp_array_size_t>(0))), ((L_8)->GetAddressAt(static_cast<il2cpp_array_size_t>(1))), NULL);
		AABB_t9C7B4FCF1ED10D750373270786690AAF7801AC6B* L_9 = ___aabb1;
		NullCheck(L_9);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10 = L_9->___min_0;
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_11 = V_1;
		NullCheck(L_11);
		int32_t L_12 = 0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_13 = (L_11)->GetAt(static_cast<il2cpp_array_size_t>(L_12));
		float L_14;
		L_14 = Vector3_Dot_mBB86BB940AA0A32FA7D3C02AC42E5BC7095A5D52_inline(L_10, L_13, NULL);
		V_5 = L_14;
		AABB_t9C7B4FCF1ED10D750373270786690AAF7801AC6B* L_15 = ___aabb1;
		NullCheck(L_15);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_16 = L_15->___min_0;
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_17 = V_1;
		NullCheck(L_17);
		int32_t L_18 = 1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_19 = (L_17)->GetAt(static_cast<il2cpp_array_size_t>(L_18));
		float L_20;
		L_20 = Vector3_Dot_mBB86BB940AA0A32FA7D3C02AC42E5BC7095A5D52_inline(L_16, L_19, NULL);
		V_6 = L_20;
		AABB_t9C7B4FCF1ED10D750373270786690AAF7801AC6B* L_21 = ___aabb1;
		NullCheck(L_21);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_22 = L_21->___max_1;
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_23 = V_1;
		NullCheck(L_23);
		int32_t L_24 = 0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_25 = (L_23)->GetAt(static_cast<il2cpp_array_size_t>(L_24));
		float L_26;
		L_26 = Vector3_Dot_mBB86BB940AA0A32FA7D3C02AC42E5BC7095A5D52_inline(L_22, L_25, NULL);
		V_7 = L_26;
		AABB_t9C7B4FCF1ED10D750373270786690AAF7801AC6B* L_27 = ___aabb1;
		NullCheck(L_27);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_28 = L_27->___max_1;
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_29 = V_1;
		NullCheck(L_29);
		int32_t L_30 = 1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_31 = (L_29)->GetAt(static_cast<il2cpp_array_size_t>(L_30));
		float L_32;
		L_32 = Vector3_Dot_mBB86BB940AA0A32FA7D3C02AC42E5BC7095A5D52_inline(L_28, L_31, NULL);
		V_8 = L_32;
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_33 = V_2;
		NullCheck(L_33);
		float L_34 = V_5;
		Vector3_set_Item_m79136861DEC5862CE7EC20AB3B0EF10A3957CEC3_inline(((L_33)->GetAddressAt(static_cast<il2cpp_array_size_t>(0))), 0, L_34, NULL);
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_35 = V_2;
		NullCheck(L_35);
		float L_36 = V_6;
		Vector3_set_Item_m79136861DEC5862CE7EC20AB3B0EF10A3957CEC3_inline(((L_35)->GetAddressAt(static_cast<il2cpp_array_size_t>(0))), 1, L_36, NULL);
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_37 = V_2;
		NullCheck(L_37);
		float L_38 = V_7;
		Vector3_set_Item_m79136861DEC5862CE7EC20AB3B0EF10A3957CEC3_inline(((L_37)->GetAddressAt(static_cast<il2cpp_array_size_t>(1))), 0, L_38, NULL);
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_39 = V_2;
		NullCheck(L_39);
		float L_40 = V_6;
		Vector3_set_Item_m79136861DEC5862CE7EC20AB3B0EF10A3957CEC3_inline(((L_39)->GetAddressAt(static_cast<il2cpp_array_size_t>(1))), 1, L_40, NULL);
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_41 = V_2;
		NullCheck(L_41);
		float L_42 = V_5;
		Vector3_set_Item_m79136861DEC5862CE7EC20AB3B0EF10A3957CEC3_inline(((L_41)->GetAddressAt(static_cast<il2cpp_array_size_t>(2))), 0, L_42, NULL);
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_43 = V_2;
		NullCheck(L_43);
		float L_44 = V_8;
		Vector3_set_Item_m79136861DEC5862CE7EC20AB3B0EF10A3957CEC3_inline(((L_43)->GetAddressAt(static_cast<il2cpp_array_size_t>(2))), 1, L_44, NULL);
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_45 = V_2;
		NullCheck(L_45);
		float L_46 = V_7;
		Vector3_set_Item_m79136861DEC5862CE7EC20AB3B0EF10A3957CEC3_inline(((L_45)->GetAddressAt(static_cast<il2cpp_array_size_t>(3))), 0, L_46, NULL);
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_47 = V_2;
		NullCheck(L_47);
		float L_48 = V_8;
		Vector3_set_Item_m79136861DEC5862CE7EC20AB3B0EF10A3957CEC3_inline(((L_47)->GetAddressAt(static_cast<il2cpp_array_size_t>(3))), 1, L_48, NULL);
		float L_49 = (99999.0f);
		V_6 = L_49;
		V_5 = L_49;
		float L_50 = (-99999.0f);
		V_8 = L_50;
		V_7 = L_50;
		V_15 = 0;
		goto IL_01ae;
	}

IL_0128:
	{
		float L_51 = V_4;
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_52 = V_2;
		int32_t L_53 = V_15;
		NullCheck(L_52);
		float L_54;
		L_54 = Vector3_get_Item_m163510BFC2F7BFAD1B601DC9F3606B799CF199F2_inline(((L_52)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_53))), 0, NULL);
		float L_55 = V_3;
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_56 = V_2;
		int32_t L_57 = V_15;
		NullCheck(L_56);
		float L_58;
		L_58 = Vector3_get_Item_m163510BFC2F7BFAD1B601DC9F3606B799CF199F2_inline(((L_56)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_57))), 1, NULL);
		V_16 = ((float)il2cpp_codegen_subtract(((float)il2cpp_codegen_multiply(L_51, L_54)), ((float)il2cpp_codegen_multiply(L_55, L_58))));
		float L_59 = V_3;
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_60 = V_2;
		int32_t L_61 = V_15;
		NullCheck(L_60);
		float L_62;
		L_62 = Vector3_get_Item_m163510BFC2F7BFAD1B601DC9F3606B799CF199F2_inline(((L_60)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_61))), 0, NULL);
		float L_63 = V_4;
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_64 = V_2;
		int32_t L_65 = V_15;
		NullCheck(L_64);
		float L_66;
		L_66 = Vector3_get_Item_m163510BFC2F7BFAD1B601DC9F3606B799CF199F2_inline(((L_64)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_65))), 1, NULL);
		V_17 = ((float)il2cpp_codegen_add(((float)il2cpp_codegen_multiply(L_59, L_62)), ((float)il2cpp_codegen_multiply(L_63, L_66))));
		int32_t L_67 = V_15;
		if ((!(((uint32_t)((int32_t)(L_67%2))) == ((uint32_t)1))))
		{
			goto IL_0183;
		}
	}
	{
		float L_68 = V_16;
		float L_69 = V_7;
		if ((!(((float)L_68) > ((float)L_69))))
		{
			goto IL_01a8;
		}
	}
	{
		float L_70 = V_16;
		V_7 = L_70;
		goto IL_01a8;
	}

IL_0183:
	{
		float L_71 = V_16;
		float L_72 = V_5;
		if ((!(((float)L_71) < ((float)L_72))))
		{
			goto IL_018d;
		}
	}
	{
		float L_73 = V_16;
		V_5 = L_73;
	}

IL_018d:
	{
		int32_t L_74 = V_15;
		if ((((int32_t)L_74) >= ((int32_t)2)))
		{
			goto IL_019e;
		}
	}
	{
		float L_75 = V_17;
		float L_76 = V_6;
		if ((!(((float)L_75) < ((float)L_76))))
		{
			goto IL_01a8;
		}
	}
	{
		float L_77 = V_17;
		V_6 = L_77;
		goto IL_01a8;
	}

IL_019e:
	{
		float L_78 = V_17;
		float L_79 = V_8;
		if ((!(((float)L_78) > ((float)L_79))))
		{
			goto IL_01a8;
		}
	}
	{
		float L_80 = V_17;
		V_8 = L_80;
	}

IL_01a8:
	{
		int32_t L_81 = V_15;
		V_15 = ((int32_t)il2cpp_codegen_add(L_81, 1));
	}

IL_01ae:
	{
		int32_t L_82 = V_15;
		if ((((int32_t)L_82) < ((int32_t)4)))
		{
			goto IL_0128;
		}
	}
	{
		float L_83 = V_7;
		float L_84 = V_5;
		V_9 = ((float)il2cpp_codegen_subtract(L_83, L_84));
		float L_85 = V_8;
		float L_86 = V_6;
		V_10 = ((float)il2cpp_codegen_subtract(L_85, L_86));
		float L_87 = ___tile_u2;
		float L_88;
		L_88 = fabsf(L_87);
		if ((((float)L_88) < ((float)(9.99999975E-05f))))
		{
			goto IL_01d4;
		}
	}
	{
		float L_89 = ___tile_u2;
		G_B16_0 = L_89;
		goto IL_01e0;
	}

IL_01d4:
	{
		float L_90 = ___tile_u2;
		float L_91;
		L_91 = Mathf_Sign_m42EE1F0BC041AF14F89DED7F762BE996E2C50D8A_inline(L_90, NULL);
		G_B16_0 = ((float)il2cpp_codegen_multiply((9.99999975E-05f), L_91));
	}

IL_01e0:
	{
		V_11 = G_B16_0;
		float L_92 = ___tile_v3;
		float L_93;
		L_93 = fabsf(L_92);
		if ((((float)L_93) < ((float)(9.99999975E-05f))))
		{
			goto IL_01f2;
		}
	}
	{
		float L_94 = ___tile_v3;
		G_B19_0 = L_94;
		goto IL_01fe;
	}

IL_01f2:
	{
		float L_95 = ___tile_v3;
		float L_96;
		L_96 = Mathf_Sign_m42EE1F0BC041AF14F89DED7F762BE996E2C50D8A_inline(L_95, NULL);
		G_B19_0 = ((float)il2cpp_codegen_multiply((9.99999975E-05f), L_96));
	}

IL_01fe:
	{
		V_12 = G_B19_0;
		UVParameter_t3DB903DED34BB8F9E4C5E5345C316D0E793081B3* L_97 = V_0;
		NullCheck(L_97);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* L_98 = (&L_97->___scale_1);
		float L_99 = V_9;
		float L_100 = V_11;
		Vector2_set_Item_mEF309880B9B3B370B542AABEB32256EEC589DD03_inline(L_98, 0, ((float)(((-L_99))/L_100)), NULL);
		UVParameter_t3DB903DED34BB8F9E4C5E5345C316D0E793081B3* L_101 = V_0;
		NullCheck(L_101);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* L_102 = (&L_101->___scale_1);
		float L_103 = V_10;
		float L_104 = V_12;
		Vector2_set_Item_mEF309880B9B3B370B542AABEB32256EEC589DD03_inline(L_102, 1, ((float)(((-L_103))/L_104)), NULL);
		UVParameter_t3DB903DED34BB8F9E4C5E5345C316D0E793081B3* L_105 = V_0;
		NullCheck(L_105);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* L_106 = (&L_105->___scale_1);
		float L_107;
		L_107 = Vector2_get_Item_m18BC65BB0512B16A1F9C8BE4B83A3E7BBAD7064D_inline(L_106, 0, NULL);
		float L_108;
		L_108 = fabsf(L_107);
		if ((((float)L_108) < ((float)(9.99999975E-05f))))
		{
			goto IL_024a;
		}
	}
	{
		UVParameter_t3DB903DED34BB8F9E4C5E5345C316D0E793081B3* L_109 = V_0;
		NullCheck(L_109);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* L_110 = (&L_109->___scale_1);
		float L_111;
		L_111 = Vector2_get_Item_m18BC65BB0512B16A1F9C8BE4B83A3E7BBAD7064D_inline(L_110, 0, NULL);
		G_B22_0 = L_111;
		goto IL_0261;
	}

IL_024a:
	{
		UVParameter_t3DB903DED34BB8F9E4C5E5345C316D0E793081B3* L_112 = V_0;
		NullCheck(L_112);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* L_113 = (&L_112->___scale_1);
		float L_114;
		L_114 = Vector2_get_Item_m18BC65BB0512B16A1F9C8BE4B83A3E7BBAD7064D_inline(L_113, 0, NULL);
		float L_115;
		L_115 = Mathf_Sign_m42EE1F0BC041AF14F89DED7F762BE996E2C50D8A_inline(L_114, NULL);
		G_B22_0 = ((float)il2cpp_codegen_multiply((9.99999975E-05f), L_115));
	}

IL_0261:
	{
		V_13 = G_B22_0;
		UVParameter_t3DB903DED34BB8F9E4C5E5345C316D0E793081B3* L_116 = V_0;
		NullCheck(L_116);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* L_117 = (&L_116->___scale_1);
		float L_118;
		L_118 = Vector2_get_Item_m18BC65BB0512B16A1F9C8BE4B83A3E7BBAD7064D_inline(L_117, 1, NULL);
		float L_119;
		L_119 = fabsf(L_118);
		if ((((float)L_119) < ((float)(9.99999975E-05f))))
		{
			goto IL_0289;
		}
	}
	{
		UVParameter_t3DB903DED34BB8F9E4C5E5345C316D0E793081B3* L_120 = V_0;
		NullCheck(L_120);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* L_121 = (&L_120->___scale_1);
		float L_122;
		L_122 = Vector2_get_Item_m18BC65BB0512B16A1F9C8BE4B83A3E7BBAD7064D_inline(L_121, 1, NULL);
		G_B25_0 = L_122;
		goto IL_02a0;
	}

IL_0289:
	{
		UVParameter_t3DB903DED34BB8F9E4C5E5345C316D0E793081B3* L_123 = V_0;
		NullCheck(L_123);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* L_124 = (&L_123->___scale_1);
		float L_125;
		L_125 = Vector2_get_Item_m18BC65BB0512B16A1F9C8BE4B83A3E7BBAD7064D_inline(L_124, 1, NULL);
		float L_126;
		L_126 = Mathf_Sign_m42EE1F0BC041AF14F89DED7F762BE996E2C50D8A_inline(L_125, NULL);
		G_B25_0 = ((float)il2cpp_codegen_multiply((9.99999975E-05f), L_126));
	}

IL_02a0:
	{
		V_14 = G_B25_0;
		UVParameter_t3DB903DED34BB8F9E4C5E5345C316D0E793081B3* L_127 = V_0;
		NullCheck(L_127);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* L_128 = (&L_127->___shift_0);
		float L_129 = V_5;
		float L_130 = V_13;
		Vector2_set_Item_mEF309880B9B3B370B542AABEB32256EEC589DD03_inline(L_128, 0, ((float)(L_129/L_130)), NULL);
		UVParameter_t3DB903DED34BB8F9E4C5E5345C316D0E793081B3* L_131 = V_0;
		NullCheck(L_131);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* L_132 = (&L_131->___shift_0);
		float L_133 = V_6;
		float L_134 = V_14;
		Vector2_set_Item_mEF309880B9B3B370B542AABEB32256EEC589DD03_inline(L_132, 1, ((float)(L_133/L_134)), NULL);
		UVParameter_t3DB903DED34BB8F9E4C5E5345C316D0E793081B3* L_135 = V_0;
		return L_135;
	}
}
// System.Void tripolygon.UModeler.UVUtil::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UVUtil__ctor_m8BB5D61DF0A5608CA111708D447DC9A978D9F94F (UVUtil_t52D342AE33D61171F82A4AD64BD1AEA48567C302* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
// System.Void tripolygon.UModeler.UVUtil::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UVUtil__cctor_m8353C2481BA220516861EA1DEF5135F2D55964CC (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UVUtil_t52D342AE33D61171F82A4AD64BD1AEA48567C302_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_0 = (Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C*)(Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C*)SZArrayNew(Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C_il2cpp_TypeInfo_var, (uint32_t)((int32_t)18));
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_1 = L_0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2;
		memset((&L_2), 0, sizeof(L_2));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_2), (0.0f), (1.0f), (0.0f), /*hidden argument*/NULL);
		NullCheck(L_1);
		(L_1)->SetAt(static_cast<il2cpp_array_size_t>(0), (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2)L_2);
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_3 = L_1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4;
		memset((&L_4), 0, sizeof(L_4));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_4), (1.0f), (0.0f), (0.0f), /*hidden argument*/NULL);
		NullCheck(L_3);
		(L_3)->SetAt(static_cast<il2cpp_array_size_t>(1), (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2)L_4);
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_5 = L_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6;
		memset((&L_6), 0, sizeof(L_6));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_6), (0.0f), (0.0f), (-1.0f), /*hidden argument*/NULL);
		NullCheck(L_5);
		(L_5)->SetAt(static_cast<il2cpp_array_size_t>(2), (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2)L_6);
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_7 = L_5;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8;
		memset((&L_8), 0, sizeof(L_8));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_8), (0.0f), (-1.0f), (0.0f), /*hidden argument*/NULL);
		NullCheck(L_7);
		(L_7)->SetAt(static_cast<il2cpp_array_size_t>(3), (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2)L_8);
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_9 = L_7;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10;
		memset((&L_10), 0, sizeof(L_10));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_10), (-1.0f), (0.0f), (0.0f), /*hidden argument*/NULL);
		NullCheck(L_9);
		(L_9)->SetAt(static_cast<il2cpp_array_size_t>(4), (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2)L_10);
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_11 = L_9;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_12;
		memset((&L_12), 0, sizeof(L_12));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_12), (0.0f), (0.0f), (1.0f), /*hidden argument*/NULL);
		NullCheck(L_11);
		(L_11)->SetAt(static_cast<il2cpp_array_size_t>(5), (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2)L_12);
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_13 = L_11;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_14;
		memset((&L_14), 0, sizeof(L_14));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_14), (1.0f), (0.0f), (0.0f), /*hidden argument*/NULL);
		NullCheck(L_13);
		(L_13)->SetAt(static_cast<il2cpp_array_size_t>(6), (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2)L_14);
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_15 = L_13;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_16;
		memset((&L_16), 0, sizeof(L_16));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_16), (0.0f), (0.0f), (1.0f), /*hidden argument*/NULL);
		NullCheck(L_15);
		(L_15)->SetAt(static_cast<il2cpp_array_size_t>(7), (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2)L_16);
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_17 = L_15;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_18;
		memset((&L_18), 0, sizeof(L_18));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_18), (0.0f), (-1.0f), (0.0f), /*hidden argument*/NULL);
		NullCheck(L_17);
		(L_17)->SetAt(static_cast<il2cpp_array_size_t>(8), (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2)L_18);
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_19 = L_17;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_20;
		memset((&L_20), 0, sizeof(L_20));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_20), (-1.0f), (0.0f), (0.0f), /*hidden argument*/NULL);
		NullCheck(L_19);
		(L_19)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)9)), (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2)L_20);
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_21 = L_19;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_22;
		memset((&L_22), 0, sizeof(L_22));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_22), (0.0f), (0.0f), (-1.0f), /*hidden argument*/NULL);
		NullCheck(L_21);
		(L_21)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)10)), (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2)L_22);
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_23 = L_21;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_24;
		memset((&L_24), 0, sizeof(L_24));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_24), (0.0f), (-1.0f), (0.0f), /*hidden argument*/NULL);
		NullCheck(L_23);
		(L_23)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)11)), (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2)L_24);
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_25 = L_23;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_26;
		memset((&L_26), 0, sizeof(L_26));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_26), (0.0f), (0.0f), (1.0f), /*hidden argument*/NULL);
		NullCheck(L_25);
		(L_25)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)12)), (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2)L_26);
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_27 = L_25;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_28;
		memset((&L_28), 0, sizeof(L_28));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_28), (-1.0f), (0.0f), (0.0f), /*hidden argument*/NULL);
		NullCheck(L_27);
		(L_27)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)13)), (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2)L_28);
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_29 = L_27;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_30;
		memset((&L_30), 0, sizeof(L_30));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_30), (0.0f), (-1.0f), (0.0f), /*hidden argument*/NULL);
		NullCheck(L_29);
		(L_29)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)14)), (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2)L_30);
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_31 = L_29;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_32;
		memset((&L_32), 0, sizeof(L_32));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_32), (0.0f), (0.0f), (-1.0f), /*hidden argument*/NULL);
		NullCheck(L_31);
		(L_31)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)15)), (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2)L_32);
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_33 = L_31;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_34;
		memset((&L_34), 0, sizeof(L_34));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_34), (1.0f), (0.0f), (0.0f), /*hidden argument*/NULL);
		NullCheck(L_33);
		(L_33)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)16)), (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2)L_34);
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_35 = L_33;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_36;
		memset((&L_36), 0, sizeof(L_36));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_36), (0.0f), (-1.0f), (0.0f), /*hidden argument*/NULL);
		NullCheck(L_35);
		(L_35)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)17)), (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2)L_36);
		((UVUtil_t52D342AE33D61171F82A4AD64BD1AEA48567C302_StaticFields*)il2cpp_codegen_static_fields_for(UVUtil_t52D342AE33D61171F82A4AD64BD1AEA48567C302_il2cpp_TypeInfo_var))->___elemental_axes__0 = L_35;
		Il2CppCodeGenWriteBarrier((void**)(&((UVUtil_t52D342AE33D61171F82A4AD64BD1AEA48567C302_StaticFields*)il2cpp_codegen_static_fields_for(UVUtil_t52D342AE33D61171F82A4AD64BD1AEA48567C302_il2cpp_TypeInfo_var))->___elemental_axes__0), (void*)L_35);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 Vector2_op_Subtraction_m44475FCDAD2DA2F98D78A6625EC2DCDFE8803837_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___a0, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___b1, const RuntimeMethod* method) 
{
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_0 = ___a0;
		float L_1 = L_0.___x_0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_2 = ___b1;
		float L_3 = L_2.___x_0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_4 = ___a0;
		float L_5 = L_4.___y_1;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_6 = ___b1;
		float L_7 = L_6.___y_1;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_8;
		memset((&L_8), 0, sizeof(L_8));
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&L_8), ((float)il2cpp_codegen_subtract(L_1, L_3)), ((float)il2cpp_codegen_subtract(L_5, L_7)), /*hidden argument*/NULL);
		V_0 = L_8;
		goto IL_0023;
	}

IL_0023:
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_9 = V_0;
		return L_9;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 Vector2_get_normalized_mF6722883AEFB5027690A778DF8ACC20F0FA65297_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* __this, const RuntimeMethod* method) 
{
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 V_0;
	memset((&V_0), 0, sizeof(V_0));
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		float L_0 = __this->___x_0;
		float L_1 = __this->___y_1;
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&V_0), L_0, L_1, NULL);
		Vector2_Normalize_m56DABCAB5967DF37A6B96710477D3660D800C652_inline((&V_0), NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_2 = V_0;
		V_1 = L_2;
		goto IL_0020;
	}

IL_0020:
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_3 = V_1;
		return L_3;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Vector2_get_magnitude_m5C59B4056420AEFDB291AD0914A3F675330A75CE_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	{
		float L_0 = __this->___x_0;
		float L_1 = __this->___x_0;
		float L_2 = __this->___y_1;
		float L_3 = __this->___y_1;
		il2cpp_codegen_runtime_class_init_inline(Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		double L_4;
		L_4 = sqrt(((double)((float)il2cpp_codegen_add(((float)il2cpp_codegen_multiply(L_0, L_1)), ((float)il2cpp_codegen_multiply(L_2, L_3))))));
		V_0 = ((float)L_4);
		goto IL_0026;
	}

IL_0026:
	{
		float L_5 = V_0;
		return L_5;
	}
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
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 Vector2_get_zero_m32506C40EC2EE7D5D4410BF40D3EE683A3D5F32C_inline (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_0 = ((Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_StaticFields*)il2cpp_codegen_static_fields_for(Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_il2cpp_TypeInfo_var))->___zeroVector_2;
		V_0 = L_0;
		goto IL_0009;
	}

IL_0009:
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_1 = V_0;
		return L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 Vector2_op_Multiply_m2D984B613020089BF5165BA4CA10988E2DC771FE_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___a0, float ___d1, const RuntimeMethod* method) 
{
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_0 = ___a0;
		float L_1 = L_0.___x_0;
		float L_2 = ___d1;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_3 = ___a0;
		float L_4 = L_3.___y_1;
		float L_5 = ___d1;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_6;
		memset((&L_6), 0, sizeof(L_6));
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&L_6), ((float)il2cpp_codegen_multiply(L_1, L_2)), ((float)il2cpp_codegen_multiply(L_4, L_5)), /*hidden argument*/NULL);
		V_0 = L_6;
		goto IL_0019;
	}

IL_0019:
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_7 = V_0;
		return L_7;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 Vector2_op_Addition_m8136742CE6EE33BA4EB81C5F584678455917D2AE_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___a0, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___b1, const RuntimeMethod* method) 
{
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_0 = ___a0;
		float L_1 = L_0.___x_0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_2 = ___b1;
		float L_3 = L_2.___x_0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_4 = ___a0;
		float L_5 = L_4.___y_1;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_6 = ___b1;
		float L_7 = L_6.___y_1;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_8;
		memset((&L_8), 0, sizeof(L_8));
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&L_8), ((float)il2cpp_codegen_add(L_1, L_3)), ((float)il2cpp_codegen_add(L_5, L_7)), /*hidden argument*/NULL);
		V_0 = L_8;
		goto IL_0023;
	}

IL_0023:
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_9 = V_0;
		return L_9;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool UModeler_get_LockGenerateMesh_m06B23EE04399CBF0018CE43C6E862A40CCDF6E21_inline (UModeler_tF29E9161DE3331F85E86886244AC15FEC514C577* __this, const RuntimeMethod* method) 
{
	{
		bool L_0 = __this->___U3CLockGenerateMeshU3Ek__BackingField_27;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Mathf_Abs_mD945EDDEA0D62D21BFDBAB7B1C0F18DFF1CEC905_inline (int32_t ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		int32_t L_0 = ___value0;
		il2cpp_codegen_runtime_class_init_inline(Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		int32_t L_1;
		L_1 = il2cpp_codegen_abs(L_0);
		V_0 = L_1;
		goto IL_000a;
	}

IL_000a:
	{
		int32_t L_2 = V_0;
		return L_2;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void EditableMesh_set_shelf_m537118F79630165B0C68F530226AED1625A9EC21_inline (EditableMesh_tF419912423C538859FC4EDB1F6ABD7314E01A476* __this, int32_t ___value0, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___value0;
		__this->___shelf__20 = L_0;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline (String_t* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->____stringLength_4;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ModelerDelegate_Invoke_mDC38E9A49BD3FA13238128AB62B526A823CEADC1_inline (ModelerDelegate_t3E84323788B9A588C192E5D33F6809AAB16B2707* __this, UModeler_tF29E9161DE3331F85E86886244AC15FEC514C577* ___modeler0, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, UModeler_tF29E9161DE3331F85E86886244AC15FEC514C577*, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___modeler0, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR UVIslandManager_tFDD6F91ECB27D6846C79AD6B3B87F4C06BB002E6* EditableMesh_get_uvIslandManager_mDF7A5D459F7BBB41F117BEBB2E712170D4B46F7F_inline (EditableMesh_tF419912423C538859FC4EDB1F6ABD7314E01A476* __this, const RuntimeMethod* method) 
{
	{
		UVIslandManager_tFDD6F91ECB27D6846C79AD6B3B87F4C06BB002E6* L_0 = __this->___uvIslandManager__11;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR SmoothingGroupManager_t1D2F4A2DF787BB531A1358F88CFC80C4B3E0C037* EditableMesh_get_smoothingGroups_m5B31EF008E5ED618E659388C2EAF6FFED6BB5EF6_inline (EditableMesh_tF419912423C538859FC4EDB1F6ABD7314E01A476* __this, const RuntimeMethod* method) 
{
	{
		SmoothingGroupManager_t1D2F4A2DF787BB531A1358F88CFC80C4B3E0C037* L_0 = __this->___smoothingGroups__8;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR List_1_t386E09F4F22DDE4D2AC41A8567FFF283C254537B* EngineResourceManager_get_RenderableMaterials_mB75F05A29226B0F7B93BCBF3B77A303134E148D1_inline (EngineResourceManager_tB814C237AED9E9140B8D664B9F5D3BE18965A951* __this, const RuntimeMethod* method) 
{
	{
		List_1_t386E09F4F22DDE4D2AC41A8567FFF283C254537B* L_0 = __this->___renderableMaterials_2;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 PlaneEx_get_normal_m934F59FA92AFFDF816E50D2CF5971AA97B1D067C_inline (PlaneEx_t5512A7D4BF235ED6ED6F1F09A1621A1DCB31509D* __this, const RuntimeMethod* method) 
{
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = __this->___normal__0;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t SelectExtended_get_selection_mA8131FB1E716C5F92C5A04A49B61DB79506961AD_inline (SelectExtended_tA9AA94ECFF1523DC7FE8E001FF9593BD32AC030E* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->___selection__0;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___a0, float ___d1, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___a0;
		float L_1 = L_0.___x_2;
		float L_2 = ___d1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3 = ___a0;
		float L_4 = L_3.___y_3;
		float L_5 = ___d1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6 = ___a0;
		float L_7 = L_6.___z_4;
		float L_8 = ___d1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_9;
		memset((&L_9), 0, sizeof(L_9));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_9), ((float)il2cpp_codegen_multiply(L_1, L_2)), ((float)il2cpp_codegen_multiply(L_4, L_5)), ((float)il2cpp_codegen_multiply(L_7, L_8)), /*hidden argument*/NULL);
		V_0 = L_9;
		goto IL_0021;
	}

IL_0021:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10 = V_0;
		return L_10;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Addition_m78C0EC70CB66E8DCAC225743D82B268DAEE92067_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___a0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___b1, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___a0;
		float L_1 = L_0.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2 = ___b1;
		float L_3 = L_2.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4 = ___a0;
		float L_5 = L_4.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6 = ___b1;
		float L_7 = L_6.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8 = ___a0;
		float L_9 = L_8.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10 = ___b1;
		float L_11 = L_10.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_12;
		memset((&L_12), 0, sizeof(L_12));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_12), ((float)il2cpp_codegen_add(L_1, L_3)), ((float)il2cpp_codegen_add(L_5, L_7)), ((float)il2cpp_codegen_add(L_9, L_11)), /*hidden argument*/NULL);
		V_0 = L_12;
		goto IL_0030;
	}

IL_0030:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_13 = V_0;
		return L_13;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Subtraction_mE42023FF80067CB44A1D4A27EB7CF2B24CABB828_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___a0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___b1, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___a0;
		float L_1 = L_0.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2 = ___b1;
		float L_3 = L_2.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4 = ___a0;
		float L_5 = L_4.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6 = ___b1;
		float L_7 = L_6.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8 = ___a0;
		float L_9 = L_8.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10 = ___b1;
		float L_11 = L_10.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_12;
		memset((&L_12), 0, sizeof(L_12));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_12), ((float)il2cpp_codegen_subtract(L_1, L_3)), ((float)il2cpp_codegen_subtract(L_5, L_7)), ((float)il2cpp_codegen_subtract(L_9, L_11)), /*hidden argument*/NULL);
		V_0 = L_12;
		goto IL_0030;
	}

IL_0030:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_13 = V_0;
		return L_13;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_get_normalized_m736BBF65D5CDA7A18414370D15B4DFCC1E466F07_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* __this, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = (*(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2*)__this);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1;
		L_1 = Vector3_Normalize_mEF8349CC39674236CFC694189AFD36E31F89AC8F_inline(L_0, NULL);
		V_0 = L_1;
		goto IL_000f;
	}

IL_000f:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2 = V_0;
		return L_2;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_Cross_mF93A280558BCE756D13B6CC5DCD7DE8A43148987_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___lhs0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___rhs1, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___lhs0;
		float L_1 = L_0.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2 = ___rhs1;
		float L_3 = L_2.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4 = ___lhs0;
		float L_5 = L_4.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6 = ___rhs1;
		float L_7 = L_6.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8 = ___lhs0;
		float L_9 = L_8.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10 = ___rhs1;
		float L_11 = L_10.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_12 = ___lhs0;
		float L_13 = L_12.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_14 = ___rhs1;
		float L_15 = L_14.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_16 = ___lhs0;
		float L_17 = L_16.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_18 = ___rhs1;
		float L_19 = L_18.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_20 = ___lhs0;
		float L_21 = L_20.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_22 = ___rhs1;
		float L_23 = L_22.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_24;
		memset((&L_24), 0, sizeof(L_24));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_24), ((float)il2cpp_codegen_subtract(((float)il2cpp_codegen_multiply(L_1, L_3)), ((float)il2cpp_codegen_multiply(L_5, L_7)))), ((float)il2cpp_codegen_subtract(((float)il2cpp_codegen_multiply(L_9, L_11)), ((float)il2cpp_codegen_multiply(L_13, L_15)))), ((float)il2cpp_codegen_subtract(((float)il2cpp_codegen_multiply(L_17, L_19)), ((float)il2cpp_codegen_multiply(L_21, L_23)))), /*hidden argument*/NULL);
		V_0 = L_24;
		goto IL_005a;
	}

IL_005a:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_25 = V_0;
		return L_25;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Vector3_Dot_mBB86BB940AA0A32FA7D3C02AC42E5BC7095A5D52_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___lhs0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___rhs1, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___lhs0;
		float L_1 = L_0.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2 = ___rhs1;
		float L_3 = L_2.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4 = ___lhs0;
		float L_5 = L_4.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6 = ___rhs1;
		float L_7 = L_6.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8 = ___lhs0;
		float L_9 = L_8.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10 = ___rhs1;
		float L_11 = L_10.___z_4;
		V_0 = ((float)il2cpp_codegen_add(((float)il2cpp_codegen_add(((float)il2cpp_codegen_multiply(L_1, L_3)), ((float)il2cpp_codegen_multiply(L_5, L_7)))), ((float)il2cpp_codegen_multiply(L_9, L_11))));
		goto IL_002d;
	}

IL_002d:
	{
		float L_12 = V_0;
		return L_12;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Vector3_get_Item_m163510BFC2F7BFAD1B601DC9F3606B799CF199F2_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* __this, int32_t ___index0, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	float V_2 = 0.0f;
	{
		int32_t L_0 = ___index0;
		V_1 = L_0;
		int32_t L_1 = V_1;
		V_0 = L_1;
		int32_t L_2 = V_0;
		switch (L_2)
		{
			case 0:
			{
				goto IL_0019;
			}
			case 1:
			{
				goto IL_0022;
			}
			case 2:
			{
				goto IL_002b;
			}
		}
	}
	{
		goto IL_0034;
	}

IL_0019:
	{
		float L_3 = __this->___x_2;
		V_2 = L_3;
		goto IL_003f;
	}

IL_0022:
	{
		float L_4 = __this->___y_3;
		V_2 = L_4;
		goto IL_003f;
	}

IL_002b:
	{
		float L_5 = __this->___z_4;
		V_2 = L_5;
		goto IL_003f;
	}

IL_0034:
	{
		IndexOutOfRangeException_t7ECB35264FB6CA8FAA516BD958F4B2ADC78E8A82* L_6 = (IndexOutOfRangeException_t7ECB35264FB6CA8FAA516BD958F4B2ADC78E8A82*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&IndexOutOfRangeException_t7ECB35264FB6CA8FAA516BD958F4B2ADC78E8A82_il2cpp_TypeInfo_var)));
		NullCheck(L_6);
		IndexOutOfRangeException__ctor_mFD06819F05B815BE2D6E826D4E04F4C449D0A425(L_6, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral27C7727EAAAD675C621F6257F2BD5190CE343979)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_6, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Vector3_get_Item_m163510BFC2F7BFAD1B601DC9F3606B799CF199F2_RuntimeMethod_var)));
	}

IL_003f:
	{
		float L_7 = V_2;
		return L_7;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t IndexPair_get_i0_m0E7AABFDBCA03351A53F255657182209C9DAAA59_inline (IndexPair_t6886ED92041E20F053A60B5DE14E4710BB42A376* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->___i0__3;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t IndexPair_get_i1_mE94972096B356E165B606945C56B0889B71E3BB4_inline (IndexPair_t6886ED92041E20F053A60B5DE14E4710BB42A376* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->___i1__4;
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
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Vector3_get_magnitude_mF0D6017E90B345F1F52D1CC564C640F1A847AF2D_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	{
		float L_0 = __this->___x_2;
		float L_1 = __this->___x_2;
		float L_2 = __this->___y_3;
		float L_3 = __this->___y_3;
		float L_4 = __this->___z_4;
		float L_5 = __this->___z_4;
		il2cpp_codegen_runtime_class_init_inline(Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		double L_6;
		L_6 = sqrt(((double)((float)il2cpp_codegen_add(((float)il2cpp_codegen_add(((float)il2cpp_codegen_multiply(L_0, L_1)), ((float)il2cpp_codegen_multiply(L_2, L_3)))), ((float)il2cpp_codegen_multiply(L_4, L_5))))));
		V_0 = ((float)L_6);
		goto IL_0034;
	}

IL_0034:
	{
		float L_7 = V_0;
		return L_7;
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
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 Matrix4x4_get_identity_m6568A73831F3E2D587420D20FF423959D7D8AB56_inline (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 L_0 = ((Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6_StaticFields*)il2cpp_codegen_static_fields_for(Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6_il2cpp_TypeInfo_var))->___identityMatrix_17;
		V_0 = L_0;
		goto IL_0009;
	}

IL_0009:
	{
		Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 L_1 = V_0;
		return L_1;
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
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_Normalize_mEF8349CC39674236CFC694189AFD36E31F89AC8F_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___value0, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	bool V_1 = false;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___value0;
		float L_1;
		L_1 = Vector3_Magnitude_m21652D951393A3D7CE92CE40049A0E7F76544D1B_inline(L_0, NULL);
		V_0 = L_1;
		float L_2 = V_0;
		V_1 = (bool)((((float)L_2) > ((float)(9.99999975E-06f)))? 1 : 0);
		bool L_3 = V_1;
		if (!L_3)
		{
			goto IL_001e;
		}
	}
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4 = ___value0;
		float L_5 = V_0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6;
		L_6 = Vector3_op_Division_mCC6BB24E372AB96B8380D1678446EF6A8BAE13BB_inline(L_4, L_5, NULL);
		V_2 = L_6;
		goto IL_0026;
	}

IL_001e:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_7;
		L_7 = Vector3_get_zero_m0C1249C3F25B1C70EAD3CC8B31259975A457AE39_inline(NULL);
		V_2 = L_7;
		goto IL_0026;
	}

IL_0026:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8 = V_2;
		return L_8;
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
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Vector2_3InputFloatReturnDelegate_Invoke_m41B4E1FCA6B3F0AC839C7E15F7030FBDB6B46D36_inline (Vector2_3InputFloatReturnDelegate_tDF554F3258BCA6D8F1BEC540B850729000D15F46* __this, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___p10, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___p21, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___p32, const RuntimeMethod* method) 
{
	typedef float (*FunctionPointerType) (RuntimeObject*, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___p10, ___p21, ___p32, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Vector2_Dot_mC1E68FDB4FB462A279A303C043B8FD0AC11C8458_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___lhs0, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___rhs1, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_0 = ___lhs0;
		float L_1 = L_0.___x_0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_2 = ___rhs1;
		float L_3 = L_2.___x_0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_4 = ___lhs0;
		float L_5 = L_4.___y_1;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_6 = ___rhs1;
		float L_7 = L_6.___y_1;
		V_0 = ((float)il2cpp_codegen_add(((float)il2cpp_codegen_multiply(L_1, L_3)), ((float)il2cpp_codegen_multiply(L_5, L_7))));
		goto IL_001f;
	}

IL_001f:
	{
		float L_8 = V_0;
		return L_8;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 Vector2_op_Division_m57A2DCD71E0CE7420851D705D1951F9238902AAB_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___a0, float ___d1, const RuntimeMethod* method) 
{
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_0 = ___a0;
		float L_1 = L_0.___x_0;
		float L_2 = ___d1;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_3 = ___a0;
		float L_4 = L_3.___y_1;
		float L_5 = ___d1;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_6;
		memset((&L_6), 0, sizeof(L_6));
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&L_6), ((float)(L_1/L_2)), ((float)(L_4/L_5)), /*hidden argument*/NULL);
		V_0 = L_6;
		goto IL_0019;
	}

IL_0019:
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_7 = V_0;
		return L_7;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 Vector2_op_Multiply_mC53581E703768BA2512A7C65283657C331994353_inline (float ___d0, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___a1, const RuntimeMethod* method) 
{
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_0 = ___a1;
		float L_1 = L_0.___x_0;
		float L_2 = ___d0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_3 = ___a1;
		float L_4 = L_3.___y_1;
		float L_5 = ___d0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_6;
		memset((&L_6), 0, sizeof(L_6));
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&L_6), ((float)il2cpp_codegen_multiply(L_1, L_2)), ((float)il2cpp_codegen_multiply(L_4, L_5)), /*hidden argument*/NULL);
		V_0 = L_6;
		goto IL_0019;
	}

IL_0019:
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_7 = V_0;
		return L_7;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_get_right_mFF573AFBBB2186E7AFA1BA7CA271A78DF67E4EA0_inline (const RuntimeMethod* method) 
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
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ((Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_StaticFields*)il2cpp_codegen_static_fields_for(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var))->___rightVector_10;
		V_0 = L_0;
		goto IL_0009;
	}

IL_0009:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1 = V_0;
		return L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 Vector2_op_Implicit_mE8EBEE9291F11BB02F062D6E000F4798968CBD96_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___v0, const RuntimeMethod* method) 
{
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___v0;
		float L_1 = L_0.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2 = ___v0;
		float L_3 = L_2.___y_3;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_4;
		memset((&L_4), 0, sizeof(L_4));
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&L_4), L_1, L_3, /*hidden argument*/NULL);
		V_0 = L_4;
		goto IL_0015;
	}

IL_0015:
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_5 = V_0;
		return L_5;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 Vector2_op_UnaryNegation_mBA9FC53A2194EE3CC067A12D11879F695B34D6F9_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___a0, const RuntimeMethod* method) 
{
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_0 = ___a0;
		float L_1 = L_0.___x_0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_2 = ___a0;
		float L_3 = L_2.___y_1;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_4;
		memset((&L_4), 0, sizeof(L_4));
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&L_4), ((-L_1)), ((-L_3)), /*hidden argument*/NULL);
		V_0 = L_4;
		goto IL_0017;
	}

IL_0017:
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_5 = V_0;
		return L_5;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Mathf_CeilToInt_mF2BF9F4261B3431DC20E10A46CFEEED103C48963_inline (float ___f0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		float L_0 = ___f0;
		il2cpp_codegen_runtime_class_init_inline(Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		double L_1;
		L_1 = ceil(((double)L_0));
		V_0 = il2cpp_codegen_cast_double_to_int<int32_t>(L_1);
		goto IL_000c;
	}

IL_000c:
	{
		int32_t L_2 = V_0;
		return L_2;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Mathf_Sign_m42EE1F0BC041AF14F89DED7F762BE996E2C50D8A_inline (float ___f0, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	float G_B3_0 = 0.0f;
	{
		float L_0 = ___f0;
		if ((((float)L_0) >= ((float)(0.0f))))
		{
			goto IL_0010;
		}
	}
	{
		G_B3_0 = (-1.0f);
		goto IL_0015;
	}

IL_0010:
	{
		G_B3_0 = (1.0f);
	}

IL_0015:
	{
		V_0 = G_B3_0;
		goto IL_0018;
	}

IL_0018:
	{
		float L_1 = V_0;
		return L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Color_tD001788D726C3A7F1379BEED0260B9591F440C1F Color_op_Subtraction_mF003448D819F2A41405BB6D85F1563CDA900B07F_inline (Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___a0, Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___b1, const RuntimeMethod* method) 
{
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_0 = ___a0;
		float L_1 = L_0.___r_0;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_2 = ___b1;
		float L_3 = L_2.___r_0;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_4 = ___a0;
		float L_5 = L_4.___g_1;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_6 = ___b1;
		float L_7 = L_6.___g_1;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_8 = ___a0;
		float L_9 = L_8.___b_2;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_10 = ___b1;
		float L_11 = L_10.___b_2;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_12 = ___a0;
		float L_13 = L_12.___a_3;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_14 = ___b1;
		float L_15 = L_14.___a_3;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_16;
		memset((&L_16), 0, sizeof(L_16));
		Color__ctor_m3786F0D6E510D9CFA544523A955870BD2A514C8C_inline((&L_16), ((float)il2cpp_codegen_subtract(L_1, L_3)), ((float)il2cpp_codegen_subtract(L_5, L_7)), ((float)il2cpp_codegen_subtract(L_9, L_11)), ((float)il2cpp_codegen_subtract(L_13, L_15)), /*hidden argument*/NULL);
		V_0 = L_16;
		goto IL_003d;
	}

IL_003d:
	{
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_17 = V_0;
		return L_17;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Color_tD001788D726C3A7F1379BEED0260B9591F440C1F Color_op_Multiply_m379B20A820266ACF82A21425B9CAE8DCD773CFBB_inline (Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___a0, float ___b1, const RuntimeMethod* method) 
{
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_0 = ___a0;
		float L_1 = L_0.___r_0;
		float L_2 = ___b1;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_3 = ___a0;
		float L_4 = L_3.___g_1;
		float L_5 = ___b1;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_6 = ___a0;
		float L_7 = L_6.___b_2;
		float L_8 = ___b1;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_9 = ___a0;
		float L_10 = L_9.___a_3;
		float L_11 = ___b1;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_12;
		memset((&L_12), 0, sizeof(L_12));
		Color__ctor_m3786F0D6E510D9CFA544523A955870BD2A514C8C_inline((&L_12), ((float)il2cpp_codegen_multiply(L_1, L_2)), ((float)il2cpp_codegen_multiply(L_4, L_5)), ((float)il2cpp_codegen_multiply(L_7, L_8)), ((float)il2cpp_codegen_multiply(L_10, L_11)), /*hidden argument*/NULL);
		V_0 = L_12;
		goto IL_0029;
	}

IL_0029:
	{
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_13 = V_0;
		return L_13;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Color_tD001788D726C3A7F1379BEED0260B9591F440C1F Color_op_Addition_mA7A51CACA49ED8D23D3D9CA3A0092D32F657E053_inline (Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___a0, Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___b1, const RuntimeMethod* method) 
{
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_0 = ___a0;
		float L_1 = L_0.___r_0;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_2 = ___b1;
		float L_3 = L_2.___r_0;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_4 = ___a0;
		float L_5 = L_4.___g_1;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_6 = ___b1;
		float L_7 = L_6.___g_1;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_8 = ___a0;
		float L_9 = L_8.___b_2;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_10 = ___b1;
		float L_11 = L_10.___b_2;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_12 = ___a0;
		float L_13 = L_12.___a_3;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_14 = ___b1;
		float L_15 = L_14.___a_3;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_16;
		memset((&L_16), 0, sizeof(L_16));
		Color__ctor_m3786F0D6E510D9CFA544523A955870BD2A514C8C_inline((&L_16), ((float)il2cpp_codegen_add(L_1, L_3)), ((float)il2cpp_codegen_add(L_5, L_7)), ((float)il2cpp_codegen_add(L_9, L_11)), ((float)il2cpp_codegen_add(L_13, L_15)), /*hidden argument*/NULL);
		V_0 = L_16;
		goto IL_003d;
	}

IL_003d:
	{
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_17 = V_0;
		return L_17;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR List_1_t302A75244C10A0CEF3AC031C484C2772A9D30A6F* SimplePolygon_GetVertexList_m8DFDD7DE30F8978236330F89982370EB5455368C_inline (SimplePolygon_t5F51D3D1F485B3C377E0E40766EBFD86BA9D9385* __this, const RuntimeMethod* method) 
{
	{
		List_1_t302A75244C10A0CEF3AC031C484C2772A9D30A6F* L_0 = __this->___vertices__0;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Vector2_Distance_mBACBB1609E1894D68F882D86A93519E311810C89_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___a0, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___b1, const RuntimeMethod* method) 
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
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_0 = ___a0;
		float L_1 = L_0.___x_0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_2 = ___b1;
		float L_3 = L_2.___x_0;
		V_0 = ((float)il2cpp_codegen_subtract(L_1, L_3));
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_4 = ___a0;
		float L_5 = L_4.___y_1;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_6 = ___b1;
		float L_7 = L_6.___y_1;
		V_1 = ((float)il2cpp_codegen_subtract(L_5, L_7));
		float L_8 = V_0;
		float L_9 = V_0;
		float L_10 = V_1;
		float L_11 = V_1;
		il2cpp_codegen_runtime_class_init_inline(Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		double L_12;
		L_12 = sqrt(((double)((float)il2cpp_codegen_add(((float)il2cpp_codegen_multiply(L_8, L_9)), ((float)il2cpp_codegen_multiply(L_10, L_11))))));
		V_2 = ((float)L_12);
		goto IL_002e;
	}

IL_002e:
	{
		float L_13 = V_2;
		return L_13;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Color32__ctor_mC9C6B443F0C7CA3F8B174158B2AF6F05E18EAC4E_inline (Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B* __this, uint8_t ___r0, uint8_t ___g1, uint8_t ___b2, uint8_t ___a3, const RuntimeMethod* method) 
{
	{
		__this->___rgba_0 = 0;
		uint8_t L_0 = ___r0;
		__this->___r_1 = L_0;
		uint8_t L_1 = ___g1;
		__this->___g_2 = L_1;
		uint8_t L_2 = ___b2;
		__this->___b_3 = L_2;
		uint8_t L_3 = ___a3;
		__this->___a_4 = L_3;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Color_get_grayscale_m35DB26808E366521ED38551860082DBB83A0EDBB_inline (Color_tD001788D726C3A7F1379BEED0260B9591F440C1F* __this, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	{
		float L_0 = __this->___r_0;
		float L_1 = __this->___g_1;
		float L_2 = __this->___b_2;
		V_0 = ((float)il2cpp_codegen_add(((float)il2cpp_codegen_add(((float)il2cpp_codegen_multiply((0.298999995f), L_0)), ((float)il2cpp_codegen_multiply((0.587000012f), L_1)))), ((float)il2cpp_codegen_multiply((0.114f), L_2))));
		goto IL_002a;
	}

IL_002a:
	{
		float L_3 = V_0;
		return L_3;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Color__ctor_m3786F0D6E510D9CFA544523A955870BD2A514C8C_inline (Color_tD001788D726C3A7F1379BEED0260B9591F440C1F* __this, float ___r0, float ___g1, float ___b2, float ___a3, const RuntimeMethod* method) 
{
	{
		float L_0 = ___r0;
		__this->___r_0 = L_0;
		float L_1 = ___g1;
		__this->___g_1 = L_1;
		float L_2 = ___b2;
		__this->___b_2 = L_2;
		float L_3 = ___a3;
		__this->___a_3 = L_3;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_get_zero_m0C1249C3F25B1C70EAD3CC8B31259975A457AE39_inline (const RuntimeMethod* method) 
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
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ((Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_StaticFields*)il2cpp_codegen_static_fields_for(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var))->___zeroVector_5;
		V_0 = L_0;
		goto IL_0009;
	}

IL_0009:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1 = V_0;
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
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector3__ctor_m5F87930F9B0828E5652E2D9D01ED907C01122C86_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* __this, float ___x0, float ___y1, const RuntimeMethod* method) 
{
	{
		float L_0 = ___x0;
		__this->___x_2 = L_0;
		float L_1 = ___y1;
		__this->___y_3 = L_1;
		__this->___z_4 = (0.0f);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector3_set_Item_m79136861DEC5862CE7EC20AB3B0EF10A3957CEC3_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* __this, int32_t ___index0, float ___value1, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		int32_t L_0 = ___index0;
		V_1 = L_0;
		int32_t L_1 = V_1;
		V_0 = L_1;
		int32_t L_2 = V_0;
		switch (L_2)
		{
			case 0:
			{
				goto IL_0019;
			}
			case 1:
			{
				goto IL_0022;
			}
			case 2:
			{
				goto IL_002b;
			}
		}
	}
	{
		goto IL_0034;
	}

IL_0019:
	{
		float L_3 = ___value1;
		__this->___x_2 = L_3;
		goto IL_003f;
	}

IL_0022:
	{
		float L_4 = ___value1;
		__this->___y_3 = L_4;
		goto IL_003f;
	}

IL_002b:
	{
		float L_5 = ___value1;
		__this->___z_4 = L_5;
		goto IL_003f;
	}

IL_0034:
	{
		IndexOutOfRangeException_t7ECB35264FB6CA8FAA516BD958F4B2ADC78E8A82* L_6 = (IndexOutOfRangeException_t7ECB35264FB6CA8FAA516BD958F4B2ADC78E8A82*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&IndexOutOfRangeException_t7ECB35264FB6CA8FAA516BD958F4B2ADC78E8A82_il2cpp_TypeInfo_var)));
		NullCheck(L_6);
		IndexOutOfRangeException__ctor_mFD06819F05B815BE2D6E826D4E04F4C449D0A425(L_6, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral27C7727EAAAD675C621F6257F2BD5190CE343979)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_6, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Vector3_set_Item_m79136861DEC5862CE7EC20AB3B0EF10A3957CEC3_RuntimeMethod_var)));
	}

IL_003f:
	{
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector2_set_Item_mEF309880B9B3B370B542AABEB32256EEC589DD03_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* __this, int32_t ___index0, float ___value1, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		int32_t L_0 = ___index0;
		V_1 = L_0;
		int32_t L_1 = V_1;
		V_0 = L_1;
		int32_t L_2 = V_0;
		if (!L_2)
		{
			goto IL_0010;
		}
	}
	{
		goto IL_000a;
	}

IL_000a:
	{
		int32_t L_3 = V_0;
		if ((((int32_t)L_3) == ((int32_t)1)))
		{
			goto IL_0019;
		}
	}
	{
		goto IL_0022;
	}

IL_0010:
	{
		float L_4 = ___value1;
		__this->___x_0 = L_4;
		goto IL_002d;
	}

IL_0019:
	{
		float L_5 = ___value1;
		__this->___y_1 = L_5;
		goto IL_002d;
	}

IL_0022:
	{
		IndexOutOfRangeException_t7ECB35264FB6CA8FAA516BD958F4B2ADC78E8A82* L_6 = (IndexOutOfRangeException_t7ECB35264FB6CA8FAA516BD958F4B2ADC78E8A82*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&IndexOutOfRangeException_t7ECB35264FB6CA8FAA516BD958F4B2ADC78E8A82_il2cpp_TypeInfo_var)));
		NullCheck(L_6);
		IndexOutOfRangeException__ctor_mFD06819F05B815BE2D6E826D4E04F4C449D0A425(L_6, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral4379B0249B80A34ABC2748B5F0D030FD7D4E007C)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_6, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Vector2_set_Item_mEF309880B9B3B370B542AABEB32256EEC589DD03_RuntimeMethod_var)));
	}

IL_002d:
	{
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Vector2_get_Item_m18BC65BB0512B16A1F9C8BE4B83A3E7BBAD7064D_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* __this, int32_t ___index0, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	float V_2 = 0.0f;
	{
		int32_t L_0 = ___index0;
		V_1 = L_0;
		int32_t L_1 = V_1;
		V_0 = L_1;
		int32_t L_2 = V_0;
		if (!L_2)
		{
			goto IL_0010;
		}
	}
	{
		goto IL_000a;
	}

IL_000a:
	{
		int32_t L_3 = V_0;
		if ((((int32_t)L_3) == ((int32_t)1)))
		{
			goto IL_0019;
		}
	}
	{
		goto IL_0022;
	}

IL_0010:
	{
		float L_4 = __this->___x_0;
		V_2 = L_4;
		goto IL_002d;
	}

IL_0019:
	{
		float L_5 = __this->___y_1;
		V_2 = L_5;
		goto IL_002d;
	}

IL_0022:
	{
		IndexOutOfRangeException_t7ECB35264FB6CA8FAA516BD958F4B2ADC78E8A82* L_6 = (IndexOutOfRangeException_t7ECB35264FB6CA8FAA516BD958F4B2ADC78E8A82*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&IndexOutOfRangeException_t7ECB35264FB6CA8FAA516BD958F4B2ADC78E8A82_il2cpp_TypeInfo_var)));
		NullCheck(L_6);
		IndexOutOfRangeException__ctor_mFD06819F05B815BE2D6E826D4E04F4C449D0A425(L_6, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral4379B0249B80A34ABC2748B5F0D030FD7D4E007C)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_6, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Vector2_get_Item_m18BC65BB0512B16A1F9C8BE4B83A3E7BBAD7064D_RuntimeMethod_var)));
	}

IL_002d:
	{
		float L_7 = V_2;
		return L_7;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float KeyValuePair_2_get_Value_mA5BE7C11B215197C303FBF99576CBDE919413929_gshared_inline (KeyValuePair_2_tA76653DFC8A4C9B07EC11B4FF878E42681D3EACE* __this, const RuntimeMethod* method) 
{
	{
		float L_0 = (float)__this->___value_1;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* KeyValuePair_2_get_Key_m0B6F02450AE5541F7814A6C8C48B92F6D992762E_gshared_inline (KeyValuePair_2_tA76653DFC8A4C9B07EC11B4FF878E42681D3EACE* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = (RuntimeObject*)__this->___key_0;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t List_1_get_Count_m4407E4C389F22B8CEC282C15D56516658746C383_gshared_inline (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = (int32_t)__this->____size_2;
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
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Add_m0C32AFF3B7A78D3835F96AE54D8283A8BE23F63B_gshared_inline (List_1_t2FB40158AFCD69E77037C532086C70828AC06862* __this, BuildShelfArg_t2137F4C02DE10B54ED77462BCB4FC85BA4B81BCA ___item0, const RuntimeMethod* method) 
{
	BuildShelfArgU5BU5D_tEE107092A29354035B9937C7BE767E56C332AEEC* V_0 = NULL;
	int32_t V_1 = 0;
	{
		int32_t L_0 = (int32_t)__this->____version_3;
		__this->____version_3 = ((int32_t)il2cpp_codegen_add(L_0, 1));
		BuildShelfArgU5BU5D_tEE107092A29354035B9937C7BE767E56C332AEEC* L_1 = (BuildShelfArgU5BU5D_tEE107092A29354035B9937C7BE767E56C332AEEC*)__this->____items_1;
		V_0 = L_1;
		int32_t L_2 = (int32_t)__this->____size_2;
		V_1 = L_2;
		int32_t L_3 = V_1;
		BuildShelfArgU5BU5D_tEE107092A29354035B9937C7BE767E56C332AEEC* L_4 = V_0;
		NullCheck(L_4);
		if ((!(((uint32_t)L_3) < ((uint32_t)((int32_t)(((RuntimeArray*)L_4)->max_length))))))
		{
			goto IL_0034;
		}
	}
	{
		int32_t L_5 = V_1;
		__this->____size_2 = ((int32_t)il2cpp_codegen_add(L_5, 1));
		BuildShelfArgU5BU5D_tEE107092A29354035B9937C7BE767E56C332AEEC* L_6 = V_0;
		int32_t L_7 = V_1;
		BuildShelfArg_t2137F4C02DE10B54ED77462BCB4FC85BA4B81BCA L_8 = ___item0;
		NullCheck(L_6);
		(L_6)->SetAt(static_cast<il2cpp_array_size_t>(L_7), (BuildShelfArg_t2137F4C02DE10B54ED77462BCB4FC85BA4B81BCA)L_8);
		return;
	}

IL_0034:
	{
		BuildShelfArg_t2137F4C02DE10B54ED77462BCB4FC85BA4B81BCA L_9 = ___item0;
		((  void (*) (List_1_t2FB40158AFCD69E77037C532086C70828AC06862*, BuildShelfArg_t2137F4C02DE10B54ED77462BCB4FC85BA4B81BCA, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 11)))(__this, L_9, il2cpp_rgctx_method(method->klass->rgctx_data, 11));
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Add_m0248A96C5334E9A93E6994B7780478BCD994EA3D_gshared_inline (List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* __this, int32_t ___item0, const RuntimeMethod* method) 
{
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* V_0 = NULL;
	int32_t V_1 = 0;
	{
		int32_t L_0 = (int32_t)__this->____version_3;
		__this->____version_3 = ((int32_t)il2cpp_codegen_add(L_0, 1));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_1 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)__this->____items_1;
		V_0 = L_1;
		int32_t L_2 = (int32_t)__this->____size_2;
		V_1 = L_2;
		int32_t L_3 = V_1;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_4 = V_0;
		NullCheck(L_4);
		if ((!(((uint32_t)L_3) < ((uint32_t)((int32_t)(((RuntimeArray*)L_4)->max_length))))))
		{
			goto IL_0034;
		}
	}
	{
		int32_t L_5 = V_1;
		__this->____size_2 = ((int32_t)il2cpp_codegen_add(L_5, 1));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_6 = V_0;
		int32_t L_7 = V_1;
		int32_t L_8 = ___item0;
		NullCheck(L_6);
		(L_6)->SetAt(static_cast<il2cpp_array_size_t>(L_7), (int32_t)L_8);
		return;
	}

IL_0034:
	{
		int32_t L_9 = ___item0;
		((  void (*) (List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73*, int32_t, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 11)))(__this, L_9, il2cpp_rgctx_method(method->klass->rgctx_data, 11));
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR BuildShelfArg_t2137F4C02DE10B54ED77462BCB4FC85BA4B81BCA Enumerator_get_Current_mE14BCB04881066336130EC2A6DD93CE1405342A3_gshared_inline (Enumerator_t3914DB61CC010B7C53852DA850D379468E909002* __this, const RuntimeMethod* method) 
{
	{
		BuildShelfArg_t2137F4C02DE10B54ED77462BCB4FC85BA4B81BCA L_0 = (BuildShelfArg_t2137F4C02DE10B54ED77462BCB4FC85BA4B81BCA)__this->____current_3;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Enumerator_get_Current_mB49912FF111A954F2C326BF4FA29A53C1027187B_gshared_inline (Enumerator_t9DBCD072C72E44AB8959D9884EF7F528028F20EC* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = (int32_t)__this->____current_3;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t List_1_get_Count_mF1C0C56457C655BDFFC6EE5B46FAD8BAEC1F588B_gshared_inline (List_1_t8F3790B7F8C471B3A1336522C7415FB0AC36D47B* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = (int32_t)__this->____size_2;
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
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t List_1_get_Count_m46EEFFA770BE665EA0CB3A5332E941DA4B3C1D37_gshared_inline (List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = (int32_t)__this->____size_2;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Add_mB5FDF069171C4CB1778BFAC3B9015A22EA7DFBCD_gshared_inline (List_1_t8F3790B7F8C471B3A1336522C7415FB0AC36D47B* __this, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___item0, const RuntimeMethod* method) 
{
	Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* V_0 = NULL;
	int32_t V_1 = 0;
	{
		int32_t L_0 = (int32_t)__this->____version_3;
		__this->____version_3 = ((int32_t)il2cpp_codegen_add(L_0, 1));
		Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* L_1 = (Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA*)__this->____items_1;
		V_0 = L_1;
		int32_t L_2 = (int32_t)__this->____size_2;
		V_1 = L_2;
		int32_t L_3 = V_1;
		Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* L_4 = V_0;
		NullCheck(L_4);
		if ((!(((uint32_t)L_3) < ((uint32_t)((int32_t)(((RuntimeArray*)L_4)->max_length))))))
		{
			goto IL_0034;
		}
	}
	{
		int32_t L_5 = V_1;
		__this->____size_2 = ((int32_t)il2cpp_codegen_add(L_5, 1));
		Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* L_6 = V_0;
		int32_t L_7 = V_1;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_8 = ___item0;
		NullCheck(L_6);
		(L_6)->SetAt(static_cast<il2cpp_array_size_t>(L_7), (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7)L_8);
		return;
	}

IL_0034:
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_9 = ___item0;
		((  void (*) (List_1_t8F3790B7F8C471B3A1336522C7415FB0AC36D47B*, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 11)))(__this, L_9, il2cpp_rgctx_method(method->klass->rgctx_data, 11));
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t KeyValuePair_2_get_Value_mAB1FC5832CB06EEF53C3A3E9C2A67258EAC6048E_gshared_inline (KeyValuePair_2_tF9681614985AA4D11569AFA8747D722D1447A120* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = (int32_t)__this->___value_1;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Add_m2F86E252D086E288E02FA1C830B7E86C0A431E51_gshared_inline (List_1_t0D1C46FD8DDDE974D93CA4F3474EEC05AF950918* __this, float ___item0, const RuntimeMethod* method) 
{
	SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* V_0 = NULL;
	int32_t V_1 = 0;
	{
		int32_t L_0 = (int32_t)__this->____version_3;
		__this->____version_3 = ((int32_t)il2cpp_codegen_add(L_0, 1));
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_1 = (SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C*)__this->____items_1;
		V_0 = L_1;
		int32_t L_2 = (int32_t)__this->____size_2;
		V_1 = L_2;
		int32_t L_3 = V_1;
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_4 = V_0;
		NullCheck(L_4);
		if ((!(((uint32_t)L_3) < ((uint32_t)((int32_t)(((RuntimeArray*)L_4)->max_length))))))
		{
			goto IL_0034;
		}
	}
	{
		int32_t L_5 = V_1;
		__this->____size_2 = ((int32_t)il2cpp_codegen_add(L_5, 1));
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_6 = V_0;
		int32_t L_7 = V_1;
		float L_8 = ___item0;
		NullCheck(L_6);
		(L_6)->SetAt(static_cast<il2cpp_array_size_t>(L_7), (float)L_8);
		return;
	}

IL_0034:
	{
		float L_9 = ___item0;
		((  void (*) (List_1_t0D1C46FD8DDDE974D93CA4F3474EEC05AF950918*, float, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 11)))(__this, L_9, il2cpp_rgctx_method(method->klass->rgctx_data, 11));
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t List_1_get_Count_m39BE269C49EF164BBA706DF15603809754CCD1F9_gshared_inline (List_1_tD13CD97762EDE4928859DDC2999E6E2175B20A11* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = (int32_t)__this->____size_2;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Add_mFB89FD2BEC65E65F1A68C47CBA4E02B6E8449495_gshared_inline (List_1_tD13CD97762EDE4928859DDC2999E6E2175B20A11* __this, ClippingVertex_tF5DB1E0668D7F574FF74C67BC6C91561FAF13E30 ___item0, const RuntimeMethod* method) 
{
	ClippingVertexU5BU5D_t22795A518FF4C4AFBC78D6B6FD57A7EA88AC83F5* V_0 = NULL;
	int32_t V_1 = 0;
	{
		int32_t L_0 = (int32_t)__this->____version_3;
		__this->____version_3 = ((int32_t)il2cpp_codegen_add(L_0, 1));
		ClippingVertexU5BU5D_t22795A518FF4C4AFBC78D6B6FD57A7EA88AC83F5* L_1 = (ClippingVertexU5BU5D_t22795A518FF4C4AFBC78D6B6FD57A7EA88AC83F5*)__this->____items_1;
		V_0 = L_1;
		int32_t L_2 = (int32_t)__this->____size_2;
		V_1 = L_2;
		int32_t L_3 = V_1;
		ClippingVertexU5BU5D_t22795A518FF4C4AFBC78D6B6FD57A7EA88AC83F5* L_4 = V_0;
		NullCheck(L_4);
		if ((!(((uint32_t)L_3) < ((uint32_t)((int32_t)(((RuntimeArray*)L_4)->max_length))))))
		{
			goto IL_0034;
		}
	}
	{
		int32_t L_5 = V_1;
		__this->____size_2 = ((int32_t)il2cpp_codegen_add(L_5, 1));
		ClippingVertexU5BU5D_t22795A518FF4C4AFBC78D6B6FD57A7EA88AC83F5* L_6 = V_0;
		int32_t L_7 = V_1;
		ClippingVertex_tF5DB1E0668D7F574FF74C67BC6C91561FAF13E30 L_8 = ___item0;
		NullCheck(L_6);
		(L_6)->SetAt(static_cast<il2cpp_array_size_t>(L_7), (ClippingVertex_tF5DB1E0668D7F574FF74C67BC6C91561FAF13E30)L_8);
		return;
	}

IL_0034:
	{
		ClippingVertex_tF5DB1E0668D7F574FF74C67BC6C91561FAF13E30 L_9 = ___item0;
		((  void (*) (List_1_tD13CD97762EDE4928859DDC2999E6E2175B20A11*, ClippingVertex_tF5DB1E0668D7F574FF74C67BC6C91561FAF13E30, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 11)))(__this, L_9, il2cpp_rgctx_method(method->klass->rgctx_data, 11));
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector2_Normalize_m56DABCAB5967DF37A6B96710477D3660D800C652_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* __this, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	bool V_1 = false;
	{
		float L_0;
		L_0 = Vector2_get_magnitude_m5C59B4056420AEFDB291AD0914A3F675330A75CE_inline(__this, NULL);
		V_0 = L_0;
		float L_1 = V_0;
		V_1 = (bool)((((float)L_1) > ((float)(9.99999975E-06f)))? 1 : 0);
		bool L_2 = V_1;
		if (!L_2)
		{
			goto IL_0028;
		}
	}
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_3 = (*(Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7*)__this);
		float L_4 = V_0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_5;
		L_5 = Vector2_op_Division_m57A2DCD71E0CE7420851D705D1951F9238902AAB_inline(L_3, L_4, NULL);
		*(Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7*)__this = L_5;
		goto IL_0033;
	}

IL_0028:
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_6;
		L_6 = Vector2_get_zero_m32506C40EC2EE7D5D4410BF40D3EE683A3D5F32C_inline(NULL);
		*(Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7*)__this = L_6;
	}

IL_0033:
	{
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Vector3_Magnitude_m21652D951393A3D7CE92CE40049A0E7F76544D1B_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___vector0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___vector0;
		float L_1 = L_0.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2 = ___vector0;
		float L_3 = L_2.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4 = ___vector0;
		float L_5 = L_4.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6 = ___vector0;
		float L_7 = L_6.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8 = ___vector0;
		float L_9 = L_8.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10 = ___vector0;
		float L_11 = L_10.___z_4;
		il2cpp_codegen_runtime_class_init_inline(Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		double L_12;
		L_12 = sqrt(((double)((float)il2cpp_codegen_add(((float)il2cpp_codegen_add(((float)il2cpp_codegen_multiply(L_1, L_3)), ((float)il2cpp_codegen_multiply(L_5, L_7)))), ((float)il2cpp_codegen_multiply(L_9, L_11))))));
		V_0 = ((float)L_12);
		goto IL_0034;
	}

IL_0034:
	{
		float L_13 = V_0;
		return L_13;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Division_mCC6BB24E372AB96B8380D1678446EF6A8BAE13BB_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___a0, float ___d1, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___a0;
		float L_1 = L_0.___x_2;
		float L_2 = ___d1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3 = ___a0;
		float L_4 = L_3.___y_3;
		float L_5 = ___d1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6 = ___a0;
		float L_7 = L_6.___z_4;
		float L_8 = ___d1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_9;
		memset((&L_9), 0, sizeof(L_9));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_9), ((float)(L_1/L_2)), ((float)(L_4/L_5)), ((float)(L_7/L_8)), /*hidden argument*/NULL);
		V_0 = L_9;
		goto IL_0021;
	}

IL_0021:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10 = V_0;
		return L_10;
	}
}
