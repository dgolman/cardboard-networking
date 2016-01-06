#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>
#include <assert.h>
#include <exception>

// PhotonView
struct PhotonView_t_751779204_0;
// System.Object[]
struct ObjectU5BU5D_t1774424924_0;
// PhotonPlayer
struct PhotonPlayer_t_1074427656_0;
// PhotonStream
struct PhotonStream_t_980664937_0;
// PhotonMessageInfo
struct PhotonMessageInfo_t1537066398_0;
// UnityEngine.Component
struct Component_t_867674284_0;
// System.String
struct String_t;
// UnityEngine.GameObject
struct GameObject_t_184308134_0;

#include "codegen/il2cpp-codegen.h"
#include "AssemblyU2DCSharp_PhotonTargets7771595.h"

// System.Void PhotonView::.ctor()
extern "C"  void PhotonView__ctor_m_2084790182_0 (PhotonView_t_751779204_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 PhotonView::get_prefix()
extern "C"  int32_t PhotonView_get_prefix_m_2119593037_0 (PhotonView_t_751779204_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PhotonView::set_prefix(System.Int32)
extern "C"  void PhotonView_set_prefix_m_44346390_0 (PhotonView_t_751779204_0 * __this, int32_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object[] PhotonView::get_instantiationData()
extern "C"  ObjectU5BU5D_t1774424924_0* PhotonView_get_instantiationData_m_298163501_0 (PhotonView_t_751779204_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PhotonView::set_instantiationData(System.Object[])
extern "C"  void PhotonView_set_instantiationData_m_1445687200_0 (PhotonView_t_751779204_0 * __this, ObjectU5BU5D_t1774424924_0* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 PhotonView::get_viewID()
extern "C"  int32_t PhotonView_get_viewID_m364432417_0 (PhotonView_t_751779204_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PhotonView::set_viewID(System.Int32)
extern "C"  void PhotonView_set_viewID_m413357912_0 (PhotonView_t_751779204_0 * __this, int32_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean PhotonView::get_isSceneView()
extern "C"  bool PhotonView_get_isSceneView_m1216699138_0 (PhotonView_t_751779204_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// PhotonPlayer PhotonView::get_owner()
extern "C"  PhotonPlayer_t_1074427656_0 * PhotonView_get_owner_m722703586_0 (PhotonView_t_751779204_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 PhotonView::get_OwnerActorNr()
extern "C"  int32_t PhotonView_get_OwnerActorNr_m994861223_0 (PhotonView_t_751779204_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean PhotonView::get_isOwnerActive()
extern "C"  bool PhotonView_get_isOwnerActive_m_1619519670_0 (PhotonView_t_751779204_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 PhotonView::get_CreatorActorNr()
extern "C"  int32_t PhotonView_get_CreatorActorNr_m_175719602_0 (PhotonView_t_751779204_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean PhotonView::get_isMine()
extern "C"  bool PhotonView_get_isMine_m1828472228_0 (PhotonView_t_751779204_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PhotonView::Awake()
extern "C"  void PhotonView_Awake_m_1847184963_0 (PhotonView_t_751779204_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PhotonView::RequestOwnership()
extern "C"  void PhotonView_RequestOwnership_m_1163340342_0 (PhotonView_t_751779204_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PhotonView::TransferOwnership(PhotonPlayer)
extern "C"  void PhotonView_TransferOwnership_m_646742465_0 (PhotonView_t_751779204_0 * __this, PhotonPlayer_t_1074427656_0 * ___newOwner, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PhotonView::TransferOwnership(System.Int32)
extern "C"  void PhotonView_TransferOwnership_m120881421_0 (PhotonView_t_751779204_0 * __this, int32_t ___newOwnerId, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PhotonView::OnDestroy()
extern "C"  void PhotonView_OnDestroy_m_1456293805_0 (PhotonView_t_751779204_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PhotonView::SerializeView(PhotonStream,PhotonMessageInfo)
extern "C"  void PhotonView_SerializeView_m_1724184492_0 (PhotonView_t_751779204_0 * __this, PhotonStream_t_980664937_0 * ___stream, PhotonMessageInfo_t1537066398_0 * ___info, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PhotonView::DeserializeView(PhotonStream,PhotonMessageInfo)
extern "C"  void PhotonView_DeserializeView_m1411246003_0 (PhotonView_t_751779204_0 * __this, PhotonStream_t_980664937_0 * ___stream, PhotonMessageInfo_t1537066398_0 * ___info, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PhotonView::DeserializeComponent(UnityEngine.Component,PhotonStream,PhotonMessageInfo)
extern "C"  void PhotonView_DeserializeComponent_m_1050980519_0 (PhotonView_t_751779204_0 * __this, Component_t_867674284_0 * ___component, PhotonStream_t_980664937_0 * ___stream, PhotonMessageInfo_t1537066398_0 * ___info, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PhotonView::SerializeComponent(UnityEngine.Component,PhotonStream,PhotonMessageInfo)
extern "C"  void PhotonView_SerializeComponent_m_964701672_0 (PhotonView_t_751779204_0 * __this, Component_t_867674284_0 * ___component, PhotonStream_t_980664937_0 * ___stream, PhotonMessageInfo_t1537066398_0 * ___info, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PhotonView::ExecuteComponentOnSerialize(UnityEngine.Component,PhotonStream,PhotonMessageInfo)
extern "C"  void PhotonView_ExecuteComponentOnSerialize_m_941651454_0 (PhotonView_t_751779204_0 * __this, Component_t_867674284_0 * ___component, PhotonStream_t_980664937_0 * ___stream, PhotonMessageInfo_t1537066398_0 * ___info, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PhotonView::RefreshRpcMonoBehaviourCache()
extern "C"  void PhotonView_RefreshRpcMonoBehaviourCache_m_1033697444_0 (PhotonView_t_751779204_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PhotonView::RPC(System.String,PhotonTargets,System.Object[])
extern "C"  void PhotonView_RPC_m1971004631_0 (PhotonView_t_751779204_0 * __this, String_t* ___methodName, int32_t ___target, ObjectU5BU5D_t1774424924_0* ___parameters, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PhotonView::RpcSecure(System.String,PhotonTargets,System.Boolean,System.Object[])
extern "C"  void PhotonView_RpcSecure_m_1305223115_0 (PhotonView_t_751779204_0 * __this, String_t* ___methodName, int32_t ___target, bool ___encrypt, ObjectU5BU5D_t1774424924_0* ___parameters, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PhotonView::RPC(System.String,PhotonPlayer,System.Object[])
extern "C"  void PhotonView_RPC_m1026161232_0 (PhotonView_t_751779204_0 * __this, String_t* ___methodName, PhotonPlayer_t_1074427656_0 * ___targetPlayer, ObjectU5BU5D_t1774424924_0* ___parameters, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PhotonView::RpcSecure(System.String,PhotonPlayer,System.Boolean,System.Object[])
extern "C"  void PhotonView_RpcSecure_m_946477426_0 (PhotonView_t_751779204_0 * __this, String_t* ___methodName, PhotonPlayer_t_1074427656_0 * ___targetPlayer, bool ___encrypt, ObjectU5BU5D_t1774424924_0* ___parameters, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// PhotonView PhotonView::Get(UnityEngine.Component)
extern "C"  PhotonView_t_751779204_0 * PhotonView_Get_m126248122_0 (Object_t * __this /* static, unused */, Component_t_867674284_0 * ___component, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// PhotonView PhotonView::Get(UnityEngine.GameObject)
extern "C"  PhotonView_t_751779204_0 * PhotonView_Get_m_1188530102_0 (Object_t * __this /* static, unused */, GameObject_t_184308134_0 * ___gameObj, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// PhotonView PhotonView::Find(System.Int32)
extern "C"  PhotonView_t_751779204_0 * PhotonView_Find_m1872143152_0 (Object_t * __this /* static, unused */, int32_t ___viewID, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String PhotonView::ToString()
extern "C"  String_t* PhotonView_ToString_m1546105465_0 (PhotonView_t_751779204_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
