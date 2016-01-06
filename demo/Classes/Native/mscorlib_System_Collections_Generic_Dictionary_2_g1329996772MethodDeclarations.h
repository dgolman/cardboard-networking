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

// System.Collections.Generic.Dictionary`2<System.Byte,System.Object>
struct Dictionary_2_t1329996772_0;
// System.Collections.Generic.IEqualityComparer`1<System.Byte>
struct IEqualityComparer_1_t1927796637_0;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t526833679_0;
// System.Collections.ICollection
struct ICollection_t592284435_0;
// System.Object
struct Object_t;
// System.Collections.Generic.KeyValuePair`2<System.Byte,System.Object>[]
struct KeyValuePair_2U5BU5D_t1144566906_0;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t1412936761_0;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.Byte,System.Object>>
struct IEnumerator_1_t_141867423_0;
// System.Collections.IDictionaryEnumerator
struct IDictionaryEnumerator_t_855216337_0;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.Byte,System.Object>
struct KeyCollection_t1774618208_0;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.Byte,System.Object>
struct ValueCollection_t1303461774_0;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Runtime_Serialization_StreamingCo_1216992900.h"
#include "mscorlib_System_Collections_Generic_KeyValuePair_21567112494.h"
#include "mscorlib_System_Collections_Generic_Dictionary_2_En970667915.h"
#include "mscorlib_System_Collections_DictionaryEntry_1842557272.h"

// System.Void System.Collections.Generic.Dictionary`2<System.Byte,System.Object>::.ctor()
extern "C"  void Dictionary_2__ctor_m_311687822_0_gshared (Dictionary_2_t1329996772_0 * __this, const MethodInfo* method);
#define Dictionary_2__ctor_m_311687822_0(__this, method) ((  void (*) (Dictionary_2_t1329996772_0 *, const MethodInfo*))Dictionary_2__ctor_m_311687822_0_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Byte,System.Object>::.ctor(System.Collections.Generic.IEqualityComparer`1<TKey>)
extern "C"  void Dictionary_2__ctor_m1303775679_0_gshared (Dictionary_2_t1329996772_0 * __this, Object_t* ___comparer, const MethodInfo* method);
#define Dictionary_2__ctor_m1303775679_0(__this, ___comparer, method) ((  void (*) (Dictionary_2_t1329996772_0 *, Object_t*, const MethodInfo*))Dictionary_2__ctor_m1303775679_0_gshared)(__this, ___comparer, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Byte,System.Object>::.ctor(System.Int32)
extern "C"  void Dictionary_2__ctor_m124985283_0_gshared (Dictionary_2_t1329996772_0 * __this, int32_t ___capacity, const MethodInfo* method);
#define Dictionary_2__ctor_m124985283_0(__this, ___capacity, method) ((  void (*) (Dictionary_2_t1329996772_0 *, int32_t, const MethodInfo*))Dictionary_2__ctor_m124985283_0_gshared)(__this, ___capacity, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Byte,System.Object>::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C"  void Dictionary_2__ctor_m_899167095_0_gshared (Dictionary_2_t1329996772_0 * __this, SerializationInfo_t526833679_0 * ___info, StreamingContext_t_1216992900_0  ___context, const MethodInfo* method);
#define Dictionary_2__ctor_m_899167095_0(__this, ___info, ___context, method) ((  void (*) (Dictionary_2_t1329996772_0 *, SerializationInfo_t526833679_0 *, StreamingContext_t_1216992900_0 , const MethodInfo*))Dictionary_2__ctor_m_899167095_0_gshared)(__this, ___info, ___context, method)
// System.Collections.ICollection System.Collections.Generic.Dictionary`2<System.Byte,System.Object>::System.Collections.IDictionary.get_Keys()
extern "C"  Object_t * Dictionary_2_System_Collections_IDictionary_get_Keys_m2130896398_0_gshared (Dictionary_2_t1329996772_0 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_get_Keys_m2130896398_0(__this, method) ((  Object_t * (*) (Dictionary_2_t1329996772_0 *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_get_Keys_m2130896398_0_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2<System.Byte,System.Object>::System.Collections.IDictionary.get_Item(System.Object)
extern "C"  Object_t * Dictionary_2_System_Collections_IDictionary_get_Item_m_849704064_0_gshared (Dictionary_2_t1329996772_0 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_get_Item_m_849704064_0(__this, ___key, method) ((  Object_t * (*) (Dictionary_2_t1329996772_0 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_get_Item_m_849704064_0_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Byte,System.Object>::System.Collections.IDictionary.set_Item(System.Object,System.Object)
extern "C"  void Dictionary_2_System_Collections_IDictionary_set_Item_m_1785325851_0_gshared (Dictionary_2_t1329996772_0 * __this, Object_t * ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_set_Item_m_1785325851_0(__this, ___key, ___value, method) ((  void (*) (Dictionary_2_t1329996772_0 *, Object_t *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_set_Item_m_1785325851_0_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Byte,System.Object>::System.Collections.IDictionary.Add(System.Object,System.Object)
extern "C"  void Dictionary_2_System_Collections_IDictionary_Add_m_2038649780_0_gshared (Dictionary_2_t1329996772_0 * __this, Object_t * ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_Add_m_2038649780_0(__this, ___key, ___value, method) ((  void (*) (Dictionary_2_t1329996772_0 *, Object_t *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Add_m_2038649780_0_gshared)(__this, ___key, ___value, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Byte,System.Object>::System.Collections.IDictionary.Contains(System.Object)
extern "C"  bool Dictionary_2_System_Collections_IDictionary_Contains_m1971236778_0_gshared (Dictionary_2_t1329996772_0 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_Contains_m1971236778_0(__this, ___key, method) ((  bool (*) (Dictionary_2_t1329996772_0 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Contains_m1971236778_0_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Byte,System.Object>::System.Collections.IDictionary.Remove(System.Object)
extern "C"  void Dictionary_2_System_Collections_IDictionary_Remove_m2136275747_0_gshared (Dictionary_2_t1329996772_0 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_Remove_m2136275747_0(__this, ___key, method) ((  void (*) (Dictionary_2_t1329996772_0 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Remove_m2136275747_0_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Byte,System.Object>::System.Collections.ICollection.get_IsSynchronized()
extern "C"  bool Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m_1139331094_0_gshared (Dictionary_2_t1329996772_0 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m_1139331094_0(__this, method) ((  bool (*) (Dictionary_2_t1329996772_0 *, const MethodInfo*))Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m_1139331094_0_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2<System.Byte,System.Object>::System.Collections.ICollection.get_SyncRoot()
extern "C"  Object_t * Dictionary_2_System_Collections_ICollection_get_SyncRoot_m198118422_0_gshared (Dictionary_2_t1329996772_0 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_ICollection_get_SyncRoot_m198118422_0(__this, method) ((  Object_t * (*) (Dictionary_2_t1329996772_0 *, const MethodInfo*))Dictionary_2_System_Collections_ICollection_get_SyncRoot_m198118422_0_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Byte,System.Object>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.get_IsReadOnly()
extern "C"  bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m_1895854162_0_gshared (Dictionary_2_t1329996772_0 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m_1895854162_0(__this, method) ((  bool (*) (Dictionary_2_t1329996772_0 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m_1895854162_0_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Byte,System.Object>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Add(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C"  void Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m955415097_0_gshared (Dictionary_2_t1329996772_0 * __this, KeyValuePair_2_t1567112494_0  ___keyValuePair, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m955415097_0(__this, ___keyValuePair, method) ((  void (*) (Dictionary_2_t1329996772_0 *, KeyValuePair_2_t1567112494_0 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m955415097_0_gshared)(__this, ___keyValuePair, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Byte,System.Object>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Contains(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C"  bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m1160199209_0_gshared (Dictionary_2_t1329996772_0 * __this, KeyValuePair_2_t1567112494_0  ___keyValuePair, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m1160199209_0(__this, ___keyValuePair, method) ((  bool (*) (Dictionary_2_t1329996772_0 *, KeyValuePair_2_t1567112494_0 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m1160199209_0_gshared)(__this, ___keyValuePair, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Byte,System.Object>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
extern "C"  void Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m1796517341_0_gshared (Dictionary_2_t1329996772_0 * __this, KeyValuePair_2U5BU5D_t1144566906_0* ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m1796517341_0(__this, ___array, ___index, method) ((  void (*) (Dictionary_2_t1329996772_0 *, KeyValuePair_2U5BU5D_t1144566906_0*, int32_t, const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m1796517341_0_gshared)(__this, ___array, ___index, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Byte,System.Object>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Remove(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C"  bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m1249401230_0_gshared (Dictionary_2_t1329996772_0 * __this, KeyValuePair_2_t1567112494_0  ___keyValuePair, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m1249401230_0(__this, ___keyValuePair, method) ((  bool (*) (Dictionary_2_t1329996772_0 *, KeyValuePair_2_t1567112494_0 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m1249401230_0_gshared)(__this, ___keyValuePair, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Byte,System.Object>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
extern "C"  void Dictionary_2_System_Collections_ICollection_CopyTo_m2022110972_0_gshared (Dictionary_2_t1329996772_0 * __this, Array_t * ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_System_Collections_ICollection_CopyTo_m2022110972_0(__this, ___array, ___index, method) ((  void (*) (Dictionary_2_t1329996772_0 *, Array_t *, int32_t, const MethodInfo*))Dictionary_2_System_Collections_ICollection_CopyTo_m2022110972_0_gshared)(__this, ___array, ___index, method)
// System.Collections.IEnumerator System.Collections.Generic.Dictionary`2<System.Byte,System.Object>::System.Collections.IEnumerable.GetEnumerator()
extern "C"  Object_t * Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m_1829529225_0_gshared (Dictionary_2_t1329996772_0 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m_1829529225_0(__this, method) ((  Object_t * (*) (Dictionary_2_t1329996772_0 *, const MethodInfo*))Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m_1829529225_0_gshared)(__this, method)
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<TKey,TValue>> System.Collections.Generic.Dictionary`2<System.Byte,System.Object>::System.Collections.Generic.IEnumerable<System.Collections.Generic.KeyValuePair<TKey,TValue>>.GetEnumerator()
extern "C"  Object_t* Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m_2092142348_0_gshared (Dictionary_2_t1329996772_0 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m_2092142348_0(__this, method) ((  Object_t* (*) (Dictionary_2_t1329996772_0 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m_2092142348_0_gshared)(__this, method)
// System.Collections.IDictionaryEnumerator System.Collections.Generic.Dictionary`2<System.Byte,System.Object>::System.Collections.IDictionary.GetEnumerator()
extern "C"  Object_t * Dictionary_2_System_Collections_IDictionary_GetEnumerator_m_593352817_0_gshared (Dictionary_2_t1329996772_0 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_GetEnumerator_m_593352817_0(__this, method) ((  Object_t * (*) (Dictionary_2_t1329996772_0 *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_GetEnumerator_m_593352817_0_gshared)(__this, method)
// System.Int32 System.Collections.Generic.Dictionary`2<System.Byte,System.Object>::get_Count()
extern "C"  int32_t Dictionary_2_get_Count_m1693086640_0_gshared (Dictionary_2_t1329996772_0 * __this, const MethodInfo* method);
#define Dictionary_2_get_Count_m1693086640_0(__this, method) ((  int32_t (*) (Dictionary_2_t1329996772_0 *, const MethodInfo*))Dictionary_2_get_Count_m1693086640_0_gshared)(__this, method)
// TValue System.Collections.Generic.Dictionary`2<System.Byte,System.Object>::get_Item(TKey)
extern "C"  Object_t * Dictionary_2_get_Item_m_1737781445_0_gshared (Dictionary_2_t1329996772_0 * __this, uint8_t ___key, const MethodInfo* method);
#define Dictionary_2_get_Item_m_1737781445_0(__this, ___key, method) ((  Object_t * (*) (Dictionary_2_t1329996772_0 *, uint8_t, const MethodInfo*))Dictionary_2_get_Item_m_1737781445_0_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Byte,System.Object>::set_Item(TKey,TValue)
extern "C"  void Dictionary_2_set_Item_m_2087166200_0_gshared (Dictionary_2_t1329996772_0 * __this, uint8_t ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_set_Item_m_2087166200_0(__this, ___key, ___value, method) ((  void (*) (Dictionary_2_t1329996772_0 *, uint8_t, Object_t *, const MethodInfo*))Dictionary_2_set_Item_m_2087166200_0_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Byte,System.Object>::Init(System.Int32,System.Collections.Generic.IEqualityComparer`1<TKey>)
extern "C"  void Dictionary_2_Init_m_1648550208_0_gshared (Dictionary_2_t1329996772_0 * __this, int32_t ___capacity, Object_t* ___hcp, const MethodInfo* method);
#define Dictionary_2_Init_m_1648550208_0(__this, ___capacity, ___hcp, method) ((  void (*) (Dictionary_2_t1329996772_0 *, int32_t, Object_t*, const MethodInfo*))Dictionary_2_Init_m_1648550208_0_gshared)(__this, ___capacity, ___hcp, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Byte,System.Object>::InitArrays(System.Int32)
extern "C"  void Dictionary_2_InitArrays_m_1558573833_0_gshared (Dictionary_2_t1329996772_0 * __this, int32_t ___size, const MethodInfo* method);
#define Dictionary_2_InitArrays_m_1558573833_0(__this, ___size, method) ((  void (*) (Dictionary_2_t1329996772_0 *, int32_t, const MethodInfo*))Dictionary_2_InitArrays_m_1558573833_0_gshared)(__this, ___size, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Byte,System.Object>::CopyToCheck(System.Array,System.Int32)
extern "C"  void Dictionary_2_CopyToCheck_m_187994957_0_gshared (Dictionary_2_t1329996772_0 * __this, Array_t * ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_CopyToCheck_m_187994957_0(__this, ___array, ___index, method) ((  void (*) (Dictionary_2_t1329996772_0 *, Array_t *, int32_t, const MethodInfo*))Dictionary_2_CopyToCheck_m_187994957_0_gshared)(__this, ___array, ___index, method)
// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Byte,System.Object>::make_pair(TKey,TValue)
extern "C"  KeyValuePair_2_t1567112494_0  Dictionary_2_make_pair_m_1901545217_0_gshared (Object_t * __this /* static, unused */, uint8_t ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_make_pair_m_1901545217_0(__this /* static, unused */, ___key, ___value, method) ((  KeyValuePair_2_t1567112494_0  (*) (Object_t * /* static, unused */, uint8_t, Object_t *, const MethodInfo*))Dictionary_2_make_pair_m_1901545217_0_gshared)(__this /* static, unused */, ___key, ___value, method)
// TKey System.Collections.Generic.Dictionary`2<System.Byte,System.Object>::pick_key(TKey,TValue)
extern "C"  uint8_t Dictionary_2_pick_key_m975496727_0_gshared (Object_t * __this /* static, unused */, uint8_t ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_pick_key_m975496727_0(__this /* static, unused */, ___key, ___value, method) ((  uint8_t (*) (Object_t * /* static, unused */, uint8_t, Object_t *, const MethodInfo*))Dictionary_2_pick_key_m975496727_0_gshared)(__this /* static, unused */, ___key, ___value, method)
// TValue System.Collections.Generic.Dictionary`2<System.Byte,System.Object>::pick_value(TKey,TValue)
extern "C"  Object_t * Dictionary_2_pick_value_m451431319_0_gshared (Object_t * __this /* static, unused */, uint8_t ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_pick_value_m451431319_0(__this /* static, unused */, ___key, ___value, method) ((  Object_t * (*) (Object_t * /* static, unused */, uint8_t, Object_t *, const MethodInfo*))Dictionary_2_pick_value_m451431319_0_gshared)(__this /* static, unused */, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Byte,System.Object>::CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
extern "C"  void Dictionary_2_CopyTo_m305943484_0_gshared (Dictionary_2_t1329996772_0 * __this, KeyValuePair_2U5BU5D_t1144566906_0* ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_CopyTo_m305943484_0(__this, ___array, ___index, method) ((  void (*) (Dictionary_2_t1329996772_0 *, KeyValuePair_2U5BU5D_t1144566906_0*, int32_t, const MethodInfo*))Dictionary_2_CopyTo_m305943484_0_gshared)(__this, ___array, ___index, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Byte,System.Object>::Resize()
extern "C"  void Dictionary_2_Resize_m_589542928_0_gshared (Dictionary_2_t1329996772_0 * __this, const MethodInfo* method);
#define Dictionary_2_Resize_m_589542928_0(__this, method) ((  void (*) (Dictionary_2_t1329996772_0 *, const MethodInfo*))Dictionary_2_Resize_m_589542928_0_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Byte,System.Object>::Add(TKey,TValue)
extern "C"  void Dictionary_2_Add_m_1162846611_0_gshared (Dictionary_2_t1329996772_0 * __this, uint8_t ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_Add_m_1162846611_0(__this, ___key, ___value, method) ((  void (*) (Dictionary_2_t1329996772_0 *, uint8_t, Object_t *, const MethodInfo*))Dictionary_2_Add_m_1162846611_0_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Byte,System.Object>::Clear()
extern "C"  void Dictionary_2_Clear_m_120896653_0_gshared (Dictionary_2_t1329996772_0 * __this, const MethodInfo* method);
#define Dictionary_2_Clear_m_120896653_0(__this, method) ((  void (*) (Dictionary_2_t1329996772_0 *, const MethodInfo*))Dictionary_2_Clear_m_120896653_0_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Byte,System.Object>::ContainsKey(TKey)
extern "C"  bool Dictionary_2_ContainsKey_m1049467929_0_gshared (Dictionary_2_t1329996772_0 * __this, uint8_t ___key, const MethodInfo* method);
#define Dictionary_2_ContainsKey_m1049467929_0(__this, ___key, method) ((  bool (*) (Dictionary_2_t1329996772_0 *, uint8_t, const MethodInfo*))Dictionary_2_ContainsKey_m1049467929_0_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Byte,System.Object>::ContainsValue(TValue)
extern "C"  bool Dictionary_2_ContainsValue_m_1139065959_0_gshared (Dictionary_2_t1329996772_0 * __this, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_ContainsValue_m_1139065959_0(__this, ___value, method) ((  bool (*) (Dictionary_2_t1329996772_0 *, Object_t *, const MethodInfo*))Dictionary_2_ContainsValue_m_1139065959_0_gshared)(__this, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Byte,System.Object>::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C"  void Dictionary_2_GetObjectData_m_725845274_0_gshared (Dictionary_2_t1329996772_0 * __this, SerializationInfo_t526833679_0 * ___info, StreamingContext_t_1216992900_0  ___context, const MethodInfo* method);
#define Dictionary_2_GetObjectData_m_725845274_0(__this, ___info, ___context, method) ((  void (*) (Dictionary_2_t1329996772_0 *, SerializationInfo_t526833679_0 *, StreamingContext_t_1216992900_0 , const MethodInfo*))Dictionary_2_GetObjectData_m_725845274_0_gshared)(__this, ___info, ___context, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Byte,System.Object>::OnDeserialization(System.Object)
extern "C"  void Dictionary_2_OnDeserialization_m_1487758530_0_gshared (Dictionary_2_t1329996772_0 * __this, Object_t * ___sender, const MethodInfo* method);
#define Dictionary_2_OnDeserialization_m_1487758530_0(__this, ___sender, method) ((  void (*) (Dictionary_2_t1329996772_0 *, Object_t *, const MethodInfo*))Dictionary_2_OnDeserialization_m_1487758530_0_gshared)(__this, ___sender, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Byte,System.Object>::Remove(TKey)
extern "C"  bool Dictionary_2_Remove_m_1650085577_0_gshared (Dictionary_2_t1329996772_0 * __this, uint8_t ___key, const MethodInfo* method);
#define Dictionary_2_Remove_m_1650085577_0(__this, ___key, method) ((  bool (*) (Dictionary_2_t1329996772_0 *, uint8_t, const MethodInfo*))Dictionary_2_Remove_m_1650085577_0_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Byte,System.Object>::TryGetValue(TKey,TValue&)
extern "C"  bool Dictionary_2_TryGetValue_m_1620259982_0_gshared (Dictionary_2_t1329996772_0 * __this, uint8_t ___key, Object_t ** ___value, const MethodInfo* method);
#define Dictionary_2_TryGetValue_m_1620259982_0(__this, ___key, ___value, method) ((  bool (*) (Dictionary_2_t1329996772_0 *, uint8_t, Object_t **, const MethodInfo*))Dictionary_2_TryGetValue_m_1620259982_0_gshared)(__this, ___key, ___value, method)
// System.Collections.Generic.Dictionary`2/KeyCollection<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Byte,System.Object>::get_Keys()
extern "C"  KeyCollection_t1774618208_0 * Dictionary_2_get_Keys_m444377549_0_gshared (Dictionary_2_t1329996772_0 * __this, const MethodInfo* method);
#define Dictionary_2_get_Keys_m444377549_0(__this, method) ((  KeyCollection_t1774618208_0 * (*) (Dictionary_2_t1329996772_0 *, const MethodInfo*))Dictionary_2_get_Keys_m444377549_0_gshared)(__this, method)
// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Byte,System.Object>::get_Values()
extern "C"  ValueCollection_t1303461774_0 * Dictionary_2_get_Values_m2115071885_0_gshared (Dictionary_2_t1329996772_0 * __this, const MethodInfo* method);
#define Dictionary_2_get_Values_m2115071885_0(__this, method) ((  ValueCollection_t1303461774_0 * (*) (Dictionary_2_t1329996772_0 *, const MethodInfo*))Dictionary_2_get_Values_m2115071885_0_gshared)(__this, method)
// TKey System.Collections.Generic.Dictionary`2<System.Byte,System.Object>::ToTKey(System.Object)
extern "C"  uint8_t Dictionary_2_ToTKey_m425355634_0_gshared (Dictionary_2_t1329996772_0 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_ToTKey_m425355634_0(__this, ___key, method) ((  uint8_t (*) (Dictionary_2_t1329996772_0 *, Object_t *, const MethodInfo*))Dictionary_2_ToTKey_m425355634_0_gshared)(__this, ___key, method)
// TValue System.Collections.Generic.Dictionary`2<System.Byte,System.Object>::ToTValue(System.Object)
extern "C"  Object_t * Dictionary_2_ToTValue_m_1236254542_0_gshared (Dictionary_2_t1329996772_0 * __this, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_ToTValue_m_1236254542_0(__this, ___value, method) ((  Object_t * (*) (Dictionary_2_t1329996772_0 *, Object_t *, const MethodInfo*))Dictionary_2_ToTValue_m_1236254542_0_gshared)(__this, ___value, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Byte,System.Object>::ContainsKeyValuePair(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C"  bool Dictionary_2_ContainsKeyValuePair_m1306634010_0_gshared (Dictionary_2_t1329996772_0 * __this, KeyValuePair_2_t1567112494_0  ___pair, const MethodInfo* method);
#define Dictionary_2_ContainsKeyValuePair_m1306634010_0(__this, ___pair, method) ((  bool (*) (Dictionary_2_t1329996772_0 *, KeyValuePair_2_t1567112494_0 , const MethodInfo*))Dictionary_2_ContainsKeyValuePair_m1306634010_0_gshared)(__this, ___pair, method)
// System.Collections.Generic.Dictionary`2/Enumerator<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Byte,System.Object>::GetEnumerator()
extern "C"  Enumerator_t970667915_0  Dictionary_2_GetEnumerator_m1804505000_0_gshared (Dictionary_2_t1329996772_0 * __this, const MethodInfo* method);
#define Dictionary_2_GetEnumerator_m1804505000_0(__this, method) ((  Enumerator_t970667915_0  (*) (Dictionary_2_t1329996772_0 *, const MethodInfo*))Dictionary_2_GetEnumerator_m1804505000_0_gshared)(__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2<System.Byte,System.Object>::<CopyTo>m__0(TKey,TValue)
extern "C"  DictionaryEntry_t_1842557272_0  Dictionary_2_U3CCopyToU3Em__0_m282674588_0_gshared (Object_t * __this /* static, unused */, uint8_t ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_U3CCopyToU3Em__0_m282674588_0(__this /* static, unused */, ___key, ___value, method) ((  DictionaryEntry_t_1842557272_0  (*) (Object_t * /* static, unused */, uint8_t, Object_t *, const MethodInfo*))Dictionary_2_U3CCopyToU3Em__0_m282674588_0_gshared)(__this /* static, unused */, ___key, ___value, method)
