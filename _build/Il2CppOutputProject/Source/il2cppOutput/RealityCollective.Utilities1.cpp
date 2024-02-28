#include "pch-cpp.hpp"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <limits>


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
template <typename R, typename T1>
struct VirtualFuncInvoker1
{
	typedef R (*Func)(void*, T1, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};

// System.Func`2<System.Object,System.Boolean>
struct Func_2_tE1F0D41563EE092E5E5540B061449FDE88F1DC00;
// System.Func`2<System.Type,System.Boolean>
struct Func_2_t7AF8146EC94DFCBB0F1B3E70111C1FB21D39F00E;
// System.Collections.Generic.IEnumerable`1<System.Object>
struct IEnumerable_1_tF95C9E01A913DD50575531C8305932628663D9E9;
// System.Collections.Generic.IEnumerable`1<System.Type>
struct IEnumerable_1_t6686595E4CB7AC210F0EF075F7B1DD4A21D3902B;
// System.Delegate[]
struct DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771;
// System.Type[]
struct TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB;
// System.Reflection.Binder
struct Binder_t91BFCE95A7057FADF4D8A1A342AFE52872246235;
// System.DelegateData
struct DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E;
// RealityCollective.Attributes.EnumFlagsAttribute
struct EnumFlagsAttribute_t087BC1272239AB650BB22707149A6EAB57360471;
// RealityCollective.Attributes.ExtendsAttribute
struct ExtendsAttribute_tBC4F0C1680100AA39B521E57C5D051E94DC86107;
// RealityCollective.Attributes.ImplementsAttribute
struct ImplementsAttribute_tA860407A2CAD81BE53BD11D93BD84DD7C094584B;
// System.Reflection.MemberFilter
struct MemberFilter_tF644F1AE82F611B677CE1964D5A3277DDA21D553;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// RealityCollective.Attributes.PhysicsLayerAttribute
struct PhysicsLayerAttribute_tE0BBC9A3652CEE2E69CBE5244BEAC70A4A69128E;
// RealityCollective.Attributes.PrefabAttribute
struct PrefabAttribute_t9087EC89BC6D5BD206415A4774E47862A549EC7E;
// UnityEngine.PropertyAttribute
struct PropertyAttribute_t5E0CB5A6CDA6E24CBD4FF26DE3B0C29D8BB54BF0;
// System.String
struct String_t;
// RealityCollective.Attributes.SystemTypeAttribute
struct SystemTypeAttribute_t2716978F86472359470C3D7281A9DBA3D24DA37D;
// System.Type
struct Type_t;
// RealityCollective.Attributes.Vector3RangeAttribute
struct Vector3RangeAttribute_t6E045C048E2D15DD54383DB2BE0AD808BE278265;
// System.Void
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915;

IL2CPP_EXTERN_C RuntimeClass* Func_2_t7AF8146EC94DFCBB0F1B3E70111C1FB21D39F00E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Mathf_tE284D016E3B297B72311AAD9EB8F0E643F6A4682_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Type_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerable_Any_TisType_t_mD8597B059A2354F3F7C115AEC22CD569D67D9E5D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ImplementsAttribute_U3CIsConstraintSatisfiedU3Eb__4_0_m236D6A3BF58A054DC42FF35CE1B26C9BE1294DAC_RuntimeMethod_var;
struct Delegate_t_marshaled_com;
struct Delegate_t_marshaled_pinvoke;

struct TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Attribute
struct Attribute_tFDA8EFEFB0711976D22474794576DAF28F7440AA  : public RuntimeObject
{
};

// System.Reflection.MemberInfo
struct MemberInfo_t  : public RuntimeObject
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

// System.Boolean
struct Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22 
{
	// System.Boolean System.Boolean::m_value
	bool ___m_value_0;
};

// System.IntPtr
struct IntPtr_t 
{
	// System.Void* System.IntPtr::m_value
	void* ___m_value_0;
};

// UnityEngine.Mathf
struct Mathf_tE284D016E3B297B72311AAD9EB8F0E643F6A4682 
{
	union
	{
		struct
		{
		};
		uint8_t Mathf_tE284D016E3B297B72311AAD9EB8F0E643F6A4682__padding[1];
	};
};

// UnityEngine.PropertyAttribute
struct PropertyAttribute_t5E0CB5A6CDA6E24CBD4FF26DE3B0C29D8BB54BF0  : public Attribute_tFDA8EFEFB0711976D22474794576DAF28F7440AA
{
};

// System.Single
struct Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C 
{
	// System.Single System.Single::m_value
	float ___m_value_0;
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

// RealityCollective.Attributes.EnumFlagsAttribute
struct EnumFlagsAttribute_t087BC1272239AB650BB22707149A6EAB57360471  : public PropertyAttribute_t5E0CB5A6CDA6E24CBD4FF26DE3B0C29D8BB54BF0
{
};

// RealityCollective.Attributes.PhysicsLayerAttribute
struct PhysicsLayerAttribute_tE0BBC9A3652CEE2E69CBE5244BEAC70A4A69128E  : public PropertyAttribute_t5E0CB5A6CDA6E24CBD4FF26DE3B0C29D8BB54BF0
{
};

// RealityCollective.Attributes.PrefabAttribute
struct PrefabAttribute_t9087EC89BC6D5BD206415A4774E47862A549EC7E  : public PropertyAttribute_t5E0CB5A6CDA6E24CBD4FF26DE3B0C29D8BB54BF0
{
	// System.Type RealityCollective.Attributes.PrefabAttribute::<Constraint>k__BackingField
	Type_t* ___U3CConstraintU3Ek__BackingField_0;
};

// System.RuntimeTypeHandle
struct RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B 
{
	// System.IntPtr System.RuntimeTypeHandle::value
	intptr_t ___value_0;
};

// RealityCollective.Attributes.SystemTypeAttribute
struct SystemTypeAttribute_t2716978F86472359470C3D7281A9DBA3D24DA37D  : public PropertyAttribute_t5E0CB5A6CDA6E24CBD4FF26DE3B0C29D8BB54BF0
{
	// RealityCollective.Definitions.Utilities.TypeGrouping RealityCollective.Attributes.SystemTypeAttribute::<Grouping>k__BackingField
	int32_t ___U3CGroupingU3Ek__BackingField_0;
	// System.Boolean RealityCollective.Attributes.SystemTypeAttribute::<AllowAbstract>k__BackingField
	bool ___U3CAllowAbstractU3Ek__BackingField_1;
};

// RealityCollective.Attributes.Vector3RangeAttribute
struct Vector3RangeAttribute_t6E045C048E2D15DD54383DB2BE0AD808BE278265  : public PropertyAttribute_t5E0CB5A6CDA6E24CBD4FF26DE3B0C29D8BB54BF0
{
	// System.Single RealityCollective.Attributes.Vector3RangeAttribute::Min
	float ___Min_0;
	// System.Single RealityCollective.Attributes.Vector3RangeAttribute::Max
	float ___Max_1;
};

// RealityCollective.Definitions.Utilities.Vector3Smoothed
struct Vector3Smoothed_t09A69085C1AE0824362A7C7327EEA2828F147505 
{
	// UnityEngine.Vector3 RealityCollective.Definitions.Utilities.Vector3Smoothed::<Current>k__BackingField
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___U3CCurrentU3Ek__BackingField_0;
	// UnityEngine.Vector3 RealityCollective.Definitions.Utilities.Vector3Smoothed::<Goal>k__BackingField
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___U3CGoalU3Ek__BackingField_1;
	// System.Single RealityCollective.Definitions.Utilities.Vector3Smoothed::<SmoothTime>k__BackingField
	float ___U3CSmoothTimeU3Ek__BackingField_2;
};

// RealityCollective.Attributes.ExtendsAttribute
struct ExtendsAttribute_tBC4F0C1680100AA39B521E57C5D051E94DC86107  : public SystemTypeAttribute_t2716978F86472359470C3D7281A9DBA3D24DA37D
{
	// System.Type RealityCollective.Attributes.ExtendsAttribute::<BaseType>k__BackingField
	Type_t* ___U3CBaseTypeU3Ek__BackingField_2;
};

// RealityCollective.Attributes.ImplementsAttribute
struct ImplementsAttribute_tA860407A2CAD81BE53BD11D93BD84DD7C094584B  : public SystemTypeAttribute_t2716978F86472359470C3D7281A9DBA3D24DA37D
{
	// System.Type RealityCollective.Attributes.ImplementsAttribute::<InterfaceType>k__BackingField
	Type_t* ___U3CInterfaceTypeU3Ek__BackingField_2;
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

// System.Type
struct Type_t  : public MemberInfo_t
{
	// System.RuntimeTypeHandle System.Type::_impl
	RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B ____impl_8;
};

// System.Func`2<System.Type,System.Boolean>
struct Func_2_t7AF8146EC94DFCBB0F1B3E70111C1FB21D39F00E  : public MulticastDelegate_t
{
};

// System.Attribute

// System.Attribute

// System.Reflection.MemberInfo

// System.Reflection.MemberInfo

// System.ValueType

// System.ValueType

// System.Boolean
struct Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_StaticFields
{
	// System.String System.Boolean::TrueString
	String_t* ___TrueString_5;
	// System.String System.Boolean::FalseString
	String_t* ___FalseString_6;
};

// System.Boolean

// System.IntPtr
struct IntPtr_t_StaticFields
{
	// System.IntPtr System.IntPtr::Zero
	intptr_t ___Zero_1;
};

// System.IntPtr

// UnityEngine.Mathf
struct Mathf_tE284D016E3B297B72311AAD9EB8F0E643F6A4682_StaticFields
{
	// System.Single UnityEngine.Mathf::Epsilon
	float ___Epsilon_0;
};

// UnityEngine.Mathf

// UnityEngine.PropertyAttribute

// UnityEngine.PropertyAttribute

// System.Single

// System.Single

// UnityEngine.Vector3
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

// UnityEngine.Vector3

// System.Void

// System.Void

// System.Delegate

// System.Delegate

// RealityCollective.Attributes.EnumFlagsAttribute

// RealityCollective.Attributes.EnumFlagsAttribute

// RealityCollective.Attributes.PhysicsLayerAttribute

// RealityCollective.Attributes.PhysicsLayerAttribute

// RealityCollective.Attributes.PrefabAttribute

// RealityCollective.Attributes.PrefabAttribute

// System.RuntimeTypeHandle

// System.RuntimeTypeHandle

// RealityCollective.Attributes.SystemTypeAttribute

// RealityCollective.Attributes.SystemTypeAttribute

// RealityCollective.Attributes.Vector3RangeAttribute

// RealityCollective.Attributes.Vector3RangeAttribute

// RealityCollective.Definitions.Utilities.Vector3Smoothed

// RealityCollective.Definitions.Utilities.Vector3Smoothed

// RealityCollective.Attributes.ExtendsAttribute

// RealityCollective.Attributes.ExtendsAttribute

// RealityCollective.Attributes.ImplementsAttribute

// RealityCollective.Attributes.ImplementsAttribute

// System.MulticastDelegate

// System.MulticastDelegate

// System.Type
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

// System.Type

// System.Func`2<System.Type,System.Boolean>

// System.Func`2<System.Type,System.Boolean>
#ifdef __clang__
#pragma clang diagnostic pop
#endif
// System.Type[]
struct TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB  : public RuntimeArray
{
	ALIGN_FIELD (8) Type_t* m_Items[1];

	inline Type_t* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Type_t** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Type_t* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline Type_t* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Type_t** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Type_t* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};


// System.Void System.Func`2<System.Object,System.Boolean>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Func_2__ctor_m13C0A7F33154D861E2A041B52E88461832DA1697_gshared (Func_2_tE1F0D41563EE092E5E5540B061449FDE88F1DC00* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method) ;
// System.Boolean System.Linq.Enumerable::Any<System.Object>(System.Collections.Generic.IEnumerable`1<TSource>,System.Func`2<TSource,System.Boolean>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Enumerable_Any_TisRuntimeObject_mF6C6AC8DF8971883615734832D09C9210B956F0F_gshared (RuntimeObject* ___0_source, Func_2_tE1F0D41563EE092E5E5540B061449FDE88F1DC00* ___1_predicate, const RuntimeMethod* method) ;

// UnityEngine.Vector3 RealityCollective.Definitions.Utilities.Vector3Smoothed::get_Current()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3Smoothed_get_Current_m1F6D8B925C0A8AD0036C3B812DFDAD1E8444F48C_inline (Vector3Smoothed_t09A69085C1AE0824362A7C7327EEA2828F147505* __this, const RuntimeMethod* method) ;
// System.Void RealityCollective.Definitions.Utilities.Vector3Smoothed::set_Current(UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector3Smoothed_set_Current_m6F64F854DEA800AF344BCC6FCFA5B22FF7AC7F5E_inline (Vector3Smoothed_t09A69085C1AE0824362A7C7327EEA2828F147505* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_value, const RuntimeMethod* method) ;
// UnityEngine.Vector3 RealityCollective.Definitions.Utilities.Vector3Smoothed::get_Goal()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3Smoothed_get_Goal_m373404E5DCEA6EA8E58FB6C03A850B1D7674DB1E_inline (Vector3Smoothed_t09A69085C1AE0824362A7C7327EEA2828F147505* __this, const RuntimeMethod* method) ;
// System.Void RealityCollective.Definitions.Utilities.Vector3Smoothed::set_Goal(UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector3Smoothed_set_Goal_mBADD63A4BC4F1FEF685BA158D85DD4E311C4F87A_inline (Vector3Smoothed_t09A69085C1AE0824362A7C7327EEA2828F147505* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_value, const RuntimeMethod* method) ;
// System.Single RealityCollective.Definitions.Utilities.Vector3Smoothed::get_SmoothTime()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Vector3Smoothed_get_SmoothTime_mA35F39C9206BF698069919FEACD2409326101CE9_inline (Vector3Smoothed_t09A69085C1AE0824362A7C7327EEA2828F147505* __this, const RuntimeMethod* method) ;
// System.Void RealityCollective.Definitions.Utilities.Vector3Smoothed::set_SmoothTime(System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector3Smoothed_set_SmoothTime_m2C3AEF2E6A1C90D1A3D97FA95E3168BC190E14F1_inline (Vector3Smoothed_t09A69085C1AE0824362A7C7327EEA2828F147505* __this, float ___0_value, const RuntimeMethod* method) ;
// System.Void RealityCollective.Definitions.Utilities.Vector3Smoothed::.ctor(UnityEngine.Vector3,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Vector3Smoothed__ctor_m544528D3F9634202C1B06909F5D9126B276B727B (Vector3Smoothed_t09A69085C1AE0824362A7C7327EEA2828F147505* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_value, float ___1_smoothingTime, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::Lerp(UnityEngine.Vector3,UnityEngine.Vector3,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_Lerp_m3A906D0530A94FAABB94F0F905E84D99BE85C3F8_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_a, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___1_b, float ___2_t, const RuntimeMethod* method) ;
// System.Void RealityCollective.Definitions.Utilities.Vector3Smoothed::Update(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Vector3Smoothed_Update_mB8B284D4A47980080DD9D904B31651DA786E95AB (Vector3Smoothed_t09A69085C1AE0824362A7C7327EEA2828F147505* __this, float ___0_deltaTime, const RuntimeMethod* method) ;
// System.Void RealityCollective.Definitions.Utilities.Vector3Smoothed::SetGoal(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Vector3Smoothed_SetGoal_m1D07F5C24D32838EF174806E1ED52A9615BC9303 (Vector3Smoothed_t09A69085C1AE0824362A7C7327EEA2828F147505* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_newGoal, const RuntimeMethod* method) ;
// System.Void UnityEngine.PropertyAttribute::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PropertyAttribute__ctor_m19247686E165101F140615C7306DC2DA3953D97D (PropertyAttribute_t5E0CB5A6CDA6E24CBD4FF26DE3B0C29D8BB54BF0* __this, const RuntimeMethod* method) ;
// System.Void RealityCollective.Attributes.SystemTypeAttribute::.ctor(System.Type,RealityCollective.Definitions.Utilities.TypeGrouping)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SystemTypeAttribute__ctor_m79A75C46653FC9492C264ABAFA6FCCAB46F4FEFB (SystemTypeAttribute_t2716978F86472359470C3D7281A9DBA3D24DA37D* __this, Type_t* ___0_type, int32_t ___1_grouping, const RuntimeMethod* method) ;
// System.Void RealityCollective.Attributes.ExtendsAttribute::set_BaseType(System.Type)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ExtendsAttribute_set_BaseType_mBEDA38D37BF948855DD9169FFF462FAD25D5EF5E_inline (ExtendsAttribute_tBC4F0C1680100AA39B521E57C5D051E94DC86107* __this, Type_t* ___0_value, const RuntimeMethod* method) ;
// System.Boolean RealityCollective.Attributes.SystemTypeAttribute::IsConstraintSatisfied(System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool SystemTypeAttribute_IsConstraintSatisfied_mD98914F0FE5204DF12BB8E48772CFAA3A8DFEF73 (SystemTypeAttribute_t2716978F86472359470C3D7281A9DBA3D24DA37D* __this, Type_t* ___0_type, const RuntimeMethod* method) ;
// System.Type RealityCollective.Attributes.ExtendsAttribute::get_BaseType()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Type_t* ExtendsAttribute_get_BaseType_mE241ABC133BDE1D1043765FC51AD9ACE6FDD1D0A_inline (ExtendsAttribute_tBC4F0C1680100AA39B521E57C5D051E94DC86107* __this, const RuntimeMethod* method) ;
// System.Boolean System.Type::op_Inequality(System.Type,System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Type_op_Inequality_m83209C7BB3C05DFBEA3B6199B0BEFE8037301172 (Type_t* ___0_left, Type_t* ___1_right, const RuntimeMethod* method) ;
// System.Void System.Func`2<System.Type,System.Boolean>::.ctor(System.Object,System.IntPtr)
inline void Func_2__ctor_mAFDFA2B152082BBF5E0626BF143EDACD61DE9D74 (Func_2_t7AF8146EC94DFCBB0F1B3E70111C1FB21D39F00E* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method)
{
	((  void (*) (Func_2_t7AF8146EC94DFCBB0F1B3E70111C1FB21D39F00E*, RuntimeObject*, intptr_t, const RuntimeMethod*))Func_2__ctor_m13C0A7F33154D861E2A041B52E88461832DA1697_gshared)(__this, ___0_object, ___1_method, method);
}
// System.Boolean System.Linq.Enumerable::Any<System.Type>(System.Collections.Generic.IEnumerable`1<TSource>,System.Func`2<TSource,System.Boolean>)
inline bool Enumerable_Any_TisType_t_mD8597B059A2354F3F7C115AEC22CD569D67D9E5D (RuntimeObject* ___0_source, Func_2_t7AF8146EC94DFCBB0F1B3E70111C1FB21D39F00E* ___1_predicate, const RuntimeMethod* method)
{
	return ((  bool (*) (RuntimeObject*, Func_2_t7AF8146EC94DFCBB0F1B3E70111C1FB21D39F00E*, const RuntimeMethod*))Enumerable_Any_TisRuntimeObject_mF6C6AC8DF8971883615734832D09C9210B956F0F_gshared)(___0_source, ___1_predicate, method);
}
// System.Type RealityCollective.Attributes.ImplementsAttribute::get_InterfaceType()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Type_t* ImplementsAttribute_get_InterfaceType_m01FC02169D6D53CB858F766151FE376771C2EDCE_inline (ImplementsAttribute_tA860407A2CAD81BE53BD11D93BD84DD7C094584B* __this, const RuntimeMethod* method) ;
// System.Boolean System.Type::op_Equality(System.Type,System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC (Type_t* ___0_left, Type_t* ___1_right, const RuntimeMethod* method) ;
// System.Boolean System.Type::get_IsClass()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Type_get_IsClass_mACC1E0E79C9996ADE9973F81971B740132B64549 (Type_t* __this, const RuntimeMethod* method) ;
// System.Boolean System.Type::get_IsInterface()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Type_get_IsInterface_m484A7D9321E72758EABE7F36AE266EB0905957EC (Type_t* __this, const RuntimeMethod* method) ;
// System.Boolean System.Type::get_IsValueType()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Type_get_IsValueType_m59AE2E0439DC06347B8D6B38548F3CBA54D38318 (Type_t* __this, const RuntimeMethod* method) ;
// System.Void RealityCollective.Attributes.SystemTypeAttribute::set_Grouping(RealityCollective.Definitions.Utilities.TypeGrouping)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void SystemTypeAttribute_set_Grouping_m6B4340EF5EBBF01DCDB713715291D6FEF7E43786_inline (SystemTypeAttribute_t2716978F86472359470C3D7281A9DBA3D24DA37D* __this, int32_t ___0_value, const RuntimeMethod* method) ;
// System.Boolean RealityCollective.Attributes.SystemTypeAttribute::get_AllowAbstract()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool SystemTypeAttribute_get_AllowAbstract_m949614CA09725369A9F49BF53965D4B8FADA0052_inline (SystemTypeAttribute_t2716978F86472359470C3D7281A9DBA3D24DA37D* __this, const RuntimeMethod* method) ;
// System.Boolean System.Type::get_IsAbstract()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Type_get_IsAbstract_m16FA83463867635ED9DECAE1C5F6BE96B4579CE5 (Type_t* __this, const RuntimeMethod* method) ;
// System.Single UnityEngine.Mathf::Clamp01(System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Mathf_Clamp01_mA7E048DBDA832D399A581BE4D6DED9FA44CE0F14_inline (float ___0_value, const RuntimeMethod* method) ;
// System.Void UnityEngine.Vector3::.ctor(System.Single,System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* __this, float ___0_x, float ___1_y, float ___2_z, const RuntimeMethod* method) ;
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// UnityEngine.Vector3 RealityCollective.Definitions.Utilities.Vector3Smoothed::get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3Smoothed_get_Current_m1F6D8B925C0A8AD0036C3B812DFDAD1E8444F48C (Vector3Smoothed_t09A69085C1AE0824362A7C7327EEA2828F147505* __this, const RuntimeMethod* method) 
{
	{
		// public Vector3 Current { get; set; }
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = __this->___U3CCurrentU3Ek__BackingField_0;
		return L_0;
	}
}
IL2CPP_EXTERN_C  Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3Smoothed_get_Current_m1F6D8B925C0A8AD0036C3B812DFDAD1E8444F48C_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	Vector3Smoothed_t09A69085C1AE0824362A7C7327EEA2828F147505* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<Vector3Smoothed_t09A69085C1AE0824362A7C7327EEA2828F147505*>(__this + _offset);
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 _returnValue;
	_returnValue = Vector3Smoothed_get_Current_m1F6D8B925C0A8AD0036C3B812DFDAD1E8444F48C_inline(_thisAdjusted, method);
	return _returnValue;
}
// System.Void RealityCollective.Definitions.Utilities.Vector3Smoothed::set_Current(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Vector3Smoothed_set_Current_m6F64F854DEA800AF344BCC6FCFA5B22FF7AC7F5E (Vector3Smoothed_t09A69085C1AE0824362A7C7327EEA2828F147505* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_value, const RuntimeMethod* method) 
{
	{
		// public Vector3 Current { get; set; }
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___0_value;
		__this->___U3CCurrentU3Ek__BackingField_0 = L_0;
		return;
	}
}
IL2CPP_EXTERN_C  void Vector3Smoothed_set_Current_m6F64F854DEA800AF344BCC6FCFA5B22FF7AC7F5E_AdjustorThunk (RuntimeObject* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_value, const RuntimeMethod* method)
{
	Vector3Smoothed_t09A69085C1AE0824362A7C7327EEA2828F147505* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<Vector3Smoothed_t09A69085C1AE0824362A7C7327EEA2828F147505*>(__this + _offset);
	Vector3Smoothed_set_Current_m6F64F854DEA800AF344BCC6FCFA5B22FF7AC7F5E_inline(_thisAdjusted, ___0_value, method);
}
// UnityEngine.Vector3 RealityCollective.Definitions.Utilities.Vector3Smoothed::get_Goal()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3Smoothed_get_Goal_m373404E5DCEA6EA8E58FB6C03A850B1D7674DB1E (Vector3Smoothed_t09A69085C1AE0824362A7C7327EEA2828F147505* __this, const RuntimeMethod* method) 
{
	{
		// public Vector3 Goal { get; set; }
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = __this->___U3CGoalU3Ek__BackingField_1;
		return L_0;
	}
}
IL2CPP_EXTERN_C  Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3Smoothed_get_Goal_m373404E5DCEA6EA8E58FB6C03A850B1D7674DB1E_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	Vector3Smoothed_t09A69085C1AE0824362A7C7327EEA2828F147505* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<Vector3Smoothed_t09A69085C1AE0824362A7C7327EEA2828F147505*>(__this + _offset);
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 _returnValue;
	_returnValue = Vector3Smoothed_get_Goal_m373404E5DCEA6EA8E58FB6C03A850B1D7674DB1E_inline(_thisAdjusted, method);
	return _returnValue;
}
// System.Void RealityCollective.Definitions.Utilities.Vector3Smoothed::set_Goal(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Vector3Smoothed_set_Goal_mBADD63A4BC4F1FEF685BA158D85DD4E311C4F87A (Vector3Smoothed_t09A69085C1AE0824362A7C7327EEA2828F147505* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_value, const RuntimeMethod* method) 
{
	{
		// public Vector3 Goal { get; set; }
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___0_value;
		__this->___U3CGoalU3Ek__BackingField_1 = L_0;
		return;
	}
}
IL2CPP_EXTERN_C  void Vector3Smoothed_set_Goal_mBADD63A4BC4F1FEF685BA158D85DD4E311C4F87A_AdjustorThunk (RuntimeObject* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_value, const RuntimeMethod* method)
{
	Vector3Smoothed_t09A69085C1AE0824362A7C7327EEA2828F147505* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<Vector3Smoothed_t09A69085C1AE0824362A7C7327EEA2828F147505*>(__this + _offset);
	Vector3Smoothed_set_Goal_mBADD63A4BC4F1FEF685BA158D85DD4E311C4F87A_inline(_thisAdjusted, ___0_value, method);
}
// System.Single RealityCollective.Definitions.Utilities.Vector3Smoothed::get_SmoothTime()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Vector3Smoothed_get_SmoothTime_mA35F39C9206BF698069919FEACD2409326101CE9 (Vector3Smoothed_t09A69085C1AE0824362A7C7327EEA2828F147505* __this, const RuntimeMethod* method) 
{
	{
		// public float SmoothTime { get; set; }
		float L_0 = __this->___U3CSmoothTimeU3Ek__BackingField_2;
		return L_0;
	}
}
IL2CPP_EXTERN_C  float Vector3Smoothed_get_SmoothTime_mA35F39C9206BF698069919FEACD2409326101CE9_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	Vector3Smoothed_t09A69085C1AE0824362A7C7327EEA2828F147505* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<Vector3Smoothed_t09A69085C1AE0824362A7C7327EEA2828F147505*>(__this + _offset);
	float _returnValue;
	_returnValue = Vector3Smoothed_get_SmoothTime_mA35F39C9206BF698069919FEACD2409326101CE9_inline(_thisAdjusted, method);
	return _returnValue;
}
// System.Void RealityCollective.Definitions.Utilities.Vector3Smoothed::set_SmoothTime(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Vector3Smoothed_set_SmoothTime_m2C3AEF2E6A1C90D1A3D97FA95E3168BC190E14F1 (Vector3Smoothed_t09A69085C1AE0824362A7C7327EEA2828F147505* __this, float ___0_value, const RuntimeMethod* method) 
{
	{
		// public float SmoothTime { get; set; }
		float L_0 = ___0_value;
		__this->___U3CSmoothTimeU3Ek__BackingField_2 = L_0;
		return;
	}
}
IL2CPP_EXTERN_C  void Vector3Smoothed_set_SmoothTime_m2C3AEF2E6A1C90D1A3D97FA95E3168BC190E14F1_AdjustorThunk (RuntimeObject* __this, float ___0_value, const RuntimeMethod* method)
{
	Vector3Smoothed_t09A69085C1AE0824362A7C7327EEA2828F147505* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<Vector3Smoothed_t09A69085C1AE0824362A7C7327EEA2828F147505*>(__this + _offset);
	Vector3Smoothed_set_SmoothTime_m2C3AEF2E6A1C90D1A3D97FA95E3168BC190E14F1_inline(_thisAdjusted, ___0_value, method);
}
// System.Void RealityCollective.Definitions.Utilities.Vector3Smoothed::.ctor(UnityEngine.Vector3,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Vector3Smoothed__ctor_m544528D3F9634202C1B06909F5D9126B276B727B (Vector3Smoothed_t09A69085C1AE0824362A7C7327EEA2828F147505* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_value, float ___1_smoothingTime, const RuntimeMethod* method) 
{
	{
		// public Vector3Smoothed(Vector3 value, float smoothingTime) : this()
		il2cpp_codegen_initobj(__this, sizeof(Vector3Smoothed_t09A69085C1AE0824362A7C7327EEA2828F147505));
		// Current = value;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___0_value;
		Vector3Smoothed_set_Current_m6F64F854DEA800AF344BCC6FCFA5B22FF7AC7F5E_inline(__this, L_0, NULL);
		// Goal = value;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1 = ___0_value;
		Vector3Smoothed_set_Goal_mBADD63A4BC4F1FEF685BA158D85DD4E311C4F87A_inline(__this, L_1, NULL);
		// SmoothTime = smoothingTime;
		float L_2 = ___1_smoothingTime;
		Vector3Smoothed_set_SmoothTime_m2C3AEF2E6A1C90D1A3D97FA95E3168BC190E14F1_inline(__this, L_2, NULL);
		// }
		return;
	}
}
IL2CPP_EXTERN_C  void Vector3Smoothed__ctor_m544528D3F9634202C1B06909F5D9126B276B727B_AdjustorThunk (RuntimeObject* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_value, float ___1_smoothingTime, const RuntimeMethod* method)
{
	Vector3Smoothed_t09A69085C1AE0824362A7C7327EEA2828F147505* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<Vector3Smoothed_t09A69085C1AE0824362A7C7327EEA2828F147505*>(__this + _offset);
	Vector3Smoothed__ctor_m544528D3F9634202C1B06909F5D9126B276B727B(_thisAdjusted, ___0_value, ___1_smoothingTime, method);
}
// System.Void RealityCollective.Definitions.Utilities.Vector3Smoothed::Update(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Vector3Smoothed_Update_mB8B284D4A47980080DD9D904B31651DA786E95AB (Vector3Smoothed_t09A69085C1AE0824362A7C7327EEA2828F147505* __this, float ___0_deltaTime, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Mathf_tE284D016E3B297B72311AAD9EB8F0E643F6A4682_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 G_B2_0;
	memset((&G_B2_0), 0, sizeof(G_B2_0));
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 G_B2_1;
	memset((&G_B2_1), 0, sizeof(G_B2_1));
	Vector3Smoothed_t09A69085C1AE0824362A7C7327EEA2828F147505* G_B2_2 = NULL;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 G_B1_0;
	memset((&G_B1_0), 0, sizeof(G_B1_0));
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 G_B1_1;
	memset((&G_B1_1), 0, sizeof(G_B1_1));
	Vector3Smoothed_t09A69085C1AE0824362A7C7327EEA2828F147505* G_B1_2 = NULL;
	float G_B3_0 = 0.0f;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 G_B3_1;
	memset((&G_B3_1), 0, sizeof(G_B3_1));
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 G_B3_2;
	memset((&G_B3_2), 0, sizeof(G_B3_2));
	Vector3Smoothed_t09A69085C1AE0824362A7C7327EEA2828F147505* G_B3_3 = NULL;
	{
		// Current = Vector3.Lerp(Current, Goal, (Math.Abs(SmoothTime) < Mathf.Epsilon) ? 1.0f : deltaTime / SmoothTime);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0;
		L_0 = Vector3Smoothed_get_Current_m1F6D8B925C0A8AD0036C3B812DFDAD1E8444F48C_inline(__this, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1;
		L_1 = Vector3Smoothed_get_Goal_m373404E5DCEA6EA8E58FB6C03A850B1D7674DB1E_inline(__this, NULL);
		float L_2;
		L_2 = Vector3Smoothed_get_SmoothTime_mA35F39C9206BF698069919FEACD2409326101CE9_inline(__this, NULL);
		il2cpp_codegen_runtime_class_init_inline(Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		float L_3;
		L_3 = fabsf(L_2);
		float L_4 = ((Mathf_tE284D016E3B297B72311AAD9EB8F0E643F6A4682_StaticFields*)il2cpp_codegen_static_fields_for(Mathf_tE284D016E3B297B72311AAD9EB8F0E643F6A4682_il2cpp_TypeInfo_var))->___Epsilon_0;
		G_B1_0 = L_1;
		G_B1_1 = L_0;
		G_B1_2 = __this;
		if ((((float)L_3) < ((float)L_4)))
		{
			G_B2_0 = L_1;
			G_B2_1 = L_0;
			G_B2_2 = __this;
			goto IL_0029;
		}
	}
	{
		float L_5 = ___0_deltaTime;
		float L_6;
		L_6 = Vector3Smoothed_get_SmoothTime_mA35F39C9206BF698069919FEACD2409326101CE9_inline(__this, NULL);
		G_B3_0 = ((float)(L_5/L_6));
		G_B3_1 = G_B1_0;
		G_B3_2 = G_B1_1;
		G_B3_3 = G_B1_2;
		goto IL_002e;
	}

IL_0029:
	{
		G_B3_0 = (1.0f);
		G_B3_1 = G_B2_0;
		G_B3_2 = G_B2_1;
		G_B3_3 = G_B2_2;
	}

IL_002e:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_7;
		L_7 = Vector3_Lerp_m3A906D0530A94FAABB94F0F905E84D99BE85C3F8_inline(G_B3_2, G_B3_1, G_B3_0, NULL);
		Vector3Smoothed_set_Current_m6F64F854DEA800AF344BCC6FCFA5B22FF7AC7F5E_inline(G_B3_3, L_7, NULL);
		// }
		return;
	}
}
IL2CPP_EXTERN_C  void Vector3Smoothed_Update_mB8B284D4A47980080DD9D904B31651DA786E95AB_AdjustorThunk (RuntimeObject* __this, float ___0_deltaTime, const RuntimeMethod* method)
{
	Vector3Smoothed_t09A69085C1AE0824362A7C7327EEA2828F147505* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<Vector3Smoothed_t09A69085C1AE0824362A7C7327EEA2828F147505*>(__this + _offset);
	Vector3Smoothed_Update_mB8B284D4A47980080DD9D904B31651DA786E95AB(_thisAdjusted, ___0_deltaTime, method);
}
// System.Void RealityCollective.Definitions.Utilities.Vector3Smoothed::SetGoal(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Vector3Smoothed_SetGoal_m1D07F5C24D32838EF174806E1ED52A9615BC9303 (Vector3Smoothed_t09A69085C1AE0824362A7C7327EEA2828F147505* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_newGoal, const RuntimeMethod* method) 
{
	{
		// Goal = newGoal;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___0_newGoal;
		Vector3Smoothed_set_Goal_mBADD63A4BC4F1FEF685BA158D85DD4E311C4F87A_inline(__this, L_0, NULL);
		// }
		return;
	}
}
IL2CPP_EXTERN_C  void Vector3Smoothed_SetGoal_m1D07F5C24D32838EF174806E1ED52A9615BC9303_AdjustorThunk (RuntimeObject* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_newGoal, const RuntimeMethod* method)
{
	Vector3Smoothed_t09A69085C1AE0824362A7C7327EEA2828F147505* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<Vector3Smoothed_t09A69085C1AE0824362A7C7327EEA2828F147505*>(__this + _offset);
	Vector3Smoothed_SetGoal_m1D07F5C24D32838EF174806E1ED52A9615BC9303(_thisAdjusted, ___0_newGoal, method);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void RealityCollective.Attributes.EnumFlagsAttribute::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EnumFlagsAttribute__ctor_mC90F659E2F1CD8D4D726F6D3E0429C621A02C1EF (EnumFlagsAttribute_t087BC1272239AB650BB22707149A6EAB57360471* __this, const RuntimeMethod* method) 
{
	{
		// public EnumFlagsAttribute() { }
		PropertyAttribute__ctor_m19247686E165101F140615C7306DC2DA3953D97D(__this, NULL);
		// public EnumFlagsAttribute() { }
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
// System.Type RealityCollective.Attributes.ExtendsAttribute::get_BaseType()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t* ExtendsAttribute_get_BaseType_mE241ABC133BDE1D1043765FC51AD9ACE6FDD1D0A (ExtendsAttribute_tBC4F0C1680100AA39B521E57C5D051E94DC86107* __this, const RuntimeMethod* method) 
{
	{
		// public Type BaseType { get; private set; }
		Type_t* L_0 = __this->___U3CBaseTypeU3Ek__BackingField_2;
		return L_0;
	}
}
// System.Void RealityCollective.Attributes.ExtendsAttribute::set_BaseType(System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ExtendsAttribute_set_BaseType_mBEDA38D37BF948855DD9169FFF462FAD25D5EF5E (ExtendsAttribute_tBC4F0C1680100AA39B521E57C5D051E94DC86107* __this, Type_t* ___0_value, const RuntimeMethod* method) 
{
	{
		// public Type BaseType { get; private set; }
		Type_t* L_0 = ___0_value;
		__this->___U3CBaseTypeU3Ek__BackingField_2 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CBaseTypeU3Ek__BackingField_2), (void*)L_0);
		return;
	}
}
// System.Void RealityCollective.Attributes.ExtendsAttribute::.ctor(System.Type,RealityCollective.Definitions.Utilities.TypeGrouping)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ExtendsAttribute__ctor_m694B64E5A78D0E5AD0FE24837E9425242831BAE9 (ExtendsAttribute_tBC4F0C1680100AA39B521E57C5D051E94DC86107* __this, Type_t* ___0_baseType, int32_t ___1_grouping, const RuntimeMethod* method) 
{
	{
		// public ExtendsAttribute(Type baseType, TypeGrouping grouping) : base(baseType, grouping)
		Type_t* L_0 = ___0_baseType;
		int32_t L_1 = ___1_grouping;
		SystemTypeAttribute__ctor_m79A75C46653FC9492C264ABAFA6FCCAB46F4FEFB(__this, L_0, L_1, NULL);
		// BaseType = baseType;
		Type_t* L_2 = ___0_baseType;
		ExtendsAttribute_set_BaseType_mBEDA38D37BF948855DD9169FFF462FAD25D5EF5E_inline(__this, L_2, NULL);
		// }
		return;
	}
}
// System.Boolean RealityCollective.Attributes.ExtendsAttribute::IsConstraintSatisfied(System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ExtendsAttribute_IsConstraintSatisfied_mE4BC2EAF40A10714E0B307D88F2E8EC0591984BD (ExtendsAttribute_tBC4F0C1680100AA39B521E57C5D051E94DC86107* __this, Type_t* ___0_type, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return base.IsConstraintSatisfied(type) &&
		//        BaseType.IsAssignableFrom(type) &&
		//        type != BaseType;
		Type_t* L_0 = ___0_type;
		bool L_1;
		L_1 = SystemTypeAttribute_IsConstraintSatisfied_mD98914F0FE5204DF12BB8E48772CFAA3A8DFEF73(__this, L_0, NULL);
		if (!L_1)
		{
			goto IL_0024;
		}
	}
	{
		Type_t* L_2;
		L_2 = ExtendsAttribute_get_BaseType_mE241ABC133BDE1D1043765FC51AD9ACE6FDD1D0A_inline(__this, NULL);
		Type_t* L_3 = ___0_type;
		NullCheck(L_2);
		bool L_4;
		L_4 = VirtualFuncInvoker1< bool, Type_t* >::Invoke(21 /* System.Boolean System.Type::IsAssignableFrom(System.Type) */, L_2, L_3);
		if (!L_4)
		{
			goto IL_0024;
		}
	}
	{
		Type_t* L_5 = ___0_type;
		Type_t* L_6;
		L_6 = ExtendsAttribute_get_BaseType_mE241ABC133BDE1D1043765FC51AD9ACE6FDD1D0A_inline(__this, NULL);
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		bool L_7;
		L_7 = Type_op_Inequality_m83209C7BB3C05DFBEA3B6199B0BEFE8037301172(L_5, L_6, NULL);
		return L_7;
	}

IL_0024:
	{
		return (bool)0;
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
// System.Type RealityCollective.Attributes.ImplementsAttribute::get_InterfaceType()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t* ImplementsAttribute_get_InterfaceType_m01FC02169D6D53CB858F766151FE376771C2EDCE (ImplementsAttribute_tA860407A2CAD81BE53BD11D93BD84DD7C094584B* __this, const RuntimeMethod* method) 
{
	{
		// public Type InterfaceType { get; }
		Type_t* L_0 = __this->___U3CInterfaceTypeU3Ek__BackingField_2;
		return L_0;
	}
}
// System.Void RealityCollective.Attributes.ImplementsAttribute::.ctor(System.Type,RealityCollective.Definitions.Utilities.TypeGrouping)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ImplementsAttribute__ctor_mA698F892A969A9AD0E6B44F89BF19E0C78EE179F (ImplementsAttribute_tA860407A2CAD81BE53BD11D93BD84DD7C094584B* __this, Type_t* ___0_interfaceType, int32_t ___1_grouping, const RuntimeMethod* method) 
{
	{
		// : base(interfaceType, grouping)
		Type_t* L_0 = ___0_interfaceType;
		int32_t L_1 = ___1_grouping;
		SystemTypeAttribute__ctor_m79A75C46653FC9492C264ABAFA6FCCAB46F4FEFB(__this, L_0, L_1, NULL);
		// InterfaceType = interfaceType;
		Type_t* L_2 = ___0_interfaceType;
		__this->___U3CInterfaceTypeU3Ek__BackingField_2 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CInterfaceTypeU3Ek__BackingField_2), (void*)L_2);
		// }
		return;
	}
}
// System.Boolean RealityCollective.Attributes.ImplementsAttribute::IsConstraintSatisfied(System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ImplementsAttribute_IsConstraintSatisfied_m9621B1F9B440D255C6C01F3A560DC2C60CE3D3AD (ImplementsAttribute_tA860407A2CAD81BE53BD11D93BD84DD7C094584B* __this, Type_t* ___0_type, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerable_Any_TisType_t_mD8597B059A2354F3F7C115AEC22CD569D67D9E5D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Func_2_t7AF8146EC94DFCBB0F1B3E70111C1FB21D39F00E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ImplementsAttribute_U3CIsConstraintSatisfiedU3Eb__4_0_m236D6A3BF58A054DC42FF35CE1B26C9BE1294DAC_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return base.IsConstraintSatisfied(type) && type.GetInterfaces().Any(t => t == InterfaceType);
		Type_t* L_0 = ___0_type;
		bool L_1;
		L_1 = SystemTypeAttribute_IsConstraintSatisfied_mD98914F0FE5204DF12BB8E48772CFAA3A8DFEF73(__this, L_0, NULL);
		if (!L_1)
		{
			goto IL_0021;
		}
	}
	{
		Type_t* L_2 = ___0_type;
		NullCheck(L_2);
		TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* L_3;
		L_3 = VirtualFuncInvoker0< TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* >::Invoke(110 /* System.Type[] System.Type::GetInterfaces() */, L_2);
		Func_2_t7AF8146EC94DFCBB0F1B3E70111C1FB21D39F00E* L_4 = (Func_2_t7AF8146EC94DFCBB0F1B3E70111C1FB21D39F00E*)il2cpp_codegen_object_new(Func_2_t7AF8146EC94DFCBB0F1B3E70111C1FB21D39F00E_il2cpp_TypeInfo_var);
		NullCheck(L_4);
		Func_2__ctor_mAFDFA2B152082BBF5E0626BF143EDACD61DE9D74(L_4, __this, (intptr_t)((void*)ImplementsAttribute_U3CIsConstraintSatisfiedU3Eb__4_0_m236D6A3BF58A054DC42FF35CE1B26C9BE1294DAC_RuntimeMethod_var), NULL);
		bool L_5;
		L_5 = Enumerable_Any_TisType_t_mD8597B059A2354F3F7C115AEC22CD569D67D9E5D((RuntimeObject*)L_3, L_4, Enumerable_Any_TisType_t_mD8597B059A2354F3F7C115AEC22CD569D67D9E5D_RuntimeMethod_var);
		return L_5;
	}

IL_0021:
	{
		return (bool)0;
	}
}
// System.Boolean RealityCollective.Attributes.ImplementsAttribute::<IsConstraintSatisfied>b__4_0(System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ImplementsAttribute_U3CIsConstraintSatisfiedU3Eb__4_0_m236D6A3BF58A054DC42FF35CE1B26C9BE1294DAC (ImplementsAttribute_tA860407A2CAD81BE53BD11D93BD84DD7C094584B* __this, Type_t* ___0_t, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return base.IsConstraintSatisfied(type) && type.GetInterfaces().Any(t => t == InterfaceType);
		Type_t* L_0 = ___0_t;
		Type_t* L_1;
		L_1 = ImplementsAttribute_get_InterfaceType_m01FC02169D6D53CB858F766151FE376771C2EDCE_inline(__this, NULL);
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		bool L_2;
		L_2 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_0, L_1, NULL);
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
// System.Void RealityCollective.Attributes.PhysicsLayerAttribute::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PhysicsLayerAttribute__ctor_m0A4435A41C38F8B5EAEBFD509D96008CA075245A (PhysicsLayerAttribute_tE0BBC9A3652CEE2E69CBE5244BEAC70A4A69128E* __this, const RuntimeMethod* method) 
{
	{
		// public PhysicsLayerAttribute() { }
		PropertyAttribute__ctor_m19247686E165101F140615C7306DC2DA3953D97D(__this, NULL);
		// public PhysicsLayerAttribute() { }
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
// System.Void RealityCollective.Attributes.PrefabAttribute::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PrefabAttribute__ctor_m8B524BF79477CCC4A8303DA314D28C5D746A0772 (PrefabAttribute_t9087EC89BC6D5BD206415A4774E47862A549EC7E* __this, const RuntimeMethod* method) 
{
	{
		// public PrefabAttribute() { }
		PropertyAttribute__ctor_m19247686E165101F140615C7306DC2DA3953D97D(__this, NULL);
		// public PrefabAttribute() { }
		return;
	}
}
// System.Void RealityCollective.Attributes.PrefabAttribute::.ctor(System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PrefabAttribute__ctor_mB70D5319A1CC2CE89C60DC2133ED0E205BD80A2D (PrefabAttribute_t9087EC89BC6D5BD206415A4774E47862A549EC7E* __this, Type_t* ___0_type, const RuntimeMethod* method) 
{
	{
		// public PrefabAttribute(Type type)
		PropertyAttribute__ctor_m19247686E165101F140615C7306DC2DA3953D97D(__this, NULL);
		// Constraint = type;
		Type_t* L_0 = ___0_type;
		__this->___U3CConstraintU3Ek__BackingField_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CConstraintU3Ek__BackingField_0), (void*)L_0);
		// }
		return;
	}
}
// System.Type RealityCollective.Attributes.PrefabAttribute::get_Constraint()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t* PrefabAttribute_get_Constraint_m8EC7B22290C4895C25CE9BA16B33EAF0402DEBA1 (PrefabAttribute_t9087EC89BC6D5BD206415A4774E47862A549EC7E* __this, const RuntimeMethod* method) 
{
	{
		// public Type Constraint { get; }
		Type_t* L_0 = __this->___U3CConstraintU3Ek__BackingField_0;
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
// RealityCollective.Definitions.Utilities.TypeGrouping RealityCollective.Attributes.SystemTypeAttribute::get_Grouping()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t SystemTypeAttribute_get_Grouping_mC4DF3919723B2E27C50732CC36F6ED08EEEFFC9B (SystemTypeAttribute_t2716978F86472359470C3D7281A9DBA3D24DA37D* __this, const RuntimeMethod* method) 
{
	{
		// public TypeGrouping Grouping { get; protected set; }
		int32_t L_0 = __this->___U3CGroupingU3Ek__BackingField_0;
		return L_0;
	}
}
// System.Void RealityCollective.Attributes.SystemTypeAttribute::set_Grouping(RealityCollective.Definitions.Utilities.TypeGrouping)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SystemTypeAttribute_set_Grouping_m6B4340EF5EBBF01DCDB713715291D6FEF7E43786 (SystemTypeAttribute_t2716978F86472359470C3D7281A9DBA3D24DA37D* __this, int32_t ___0_value, const RuntimeMethod* method) 
{
	{
		// public TypeGrouping Grouping { get; protected set; }
		int32_t L_0 = ___0_value;
		__this->___U3CGroupingU3Ek__BackingField_0 = L_0;
		return;
	}
}
// System.Boolean RealityCollective.Attributes.SystemTypeAttribute::get_AllowAbstract()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool SystemTypeAttribute_get_AllowAbstract_m949614CA09725369A9F49BF53965D4B8FADA0052 (SystemTypeAttribute_t2716978F86472359470C3D7281A9DBA3D24DA37D* __this, const RuntimeMethod* method) 
{
	{
		// public bool AllowAbstract { get; protected set; } = false;
		bool L_0 = __this->___U3CAllowAbstractU3Ek__BackingField_1;
		return L_0;
	}
}
// System.Void RealityCollective.Attributes.SystemTypeAttribute::set_AllowAbstract(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SystemTypeAttribute_set_AllowAbstract_m5524CC3C737CBBEAB7AAD0C9098BC17E2D7A06E7 (SystemTypeAttribute_t2716978F86472359470C3D7281A9DBA3D24DA37D* __this, bool ___0_value, const RuntimeMethod* method) 
{
	{
		// public bool AllowAbstract { get; protected set; } = false;
		bool L_0 = ___0_value;
		__this->___U3CAllowAbstractU3Ek__BackingField_1 = L_0;
		return;
	}
}
// System.Void RealityCollective.Attributes.SystemTypeAttribute::.ctor(System.Type,RealityCollective.Definitions.Utilities.TypeGrouping)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SystemTypeAttribute__ctor_m79A75C46653FC9492C264ABAFA6FCCAB46F4FEFB (SystemTypeAttribute_t2716978F86472359470C3D7281A9DBA3D24DA37D* __this, Type_t* ___0_type, int32_t ___1_grouping, const RuntimeMethod* method) 
{
	int32_t G_B6_0 = 0;
	{
		// public SystemTypeAttribute(Type type, TypeGrouping grouping = TypeGrouping.ByNamespaceFlat)
		PropertyAttribute__ctor_m19247686E165101F140615C7306DC2DA3953D97D(__this, NULL);
		// bool isValid = type.IsClass || type.IsInterface || type.IsValueType && !type.IsEnum;
		Type_t* L_0 = ___0_type;
		NullCheck(L_0);
		bool L_1;
		L_1 = Type_get_IsClass_mACC1E0E79C9996ADE9973F81971B740132B64549(L_0, NULL);
		if (L_1)
		{
			goto IL_002c;
		}
	}
	{
		Type_t* L_2 = ___0_type;
		NullCheck(L_2);
		bool L_3;
		L_3 = Type_get_IsInterface_m484A7D9321E72758EABE7F36AE266EB0905957EC(L_2, NULL);
		if (L_3)
		{
			goto IL_002c;
		}
	}
	{
		Type_t* L_4 = ___0_type;
		NullCheck(L_4);
		bool L_5;
		L_5 = Type_get_IsValueType_m59AE2E0439DC06347B8D6B38548F3CBA54D38318(L_4, NULL);
		if (!L_5)
		{
			goto IL_0029;
		}
	}
	{
		Type_t* L_6 = ___0_type;
		NullCheck(L_6);
		bool L_7;
		L_7 = VirtualFuncInvoker0< bool >::Invoke(67 /* System.Boolean System.Type::get_IsEnum() */, L_6);
		G_B6_0 = ((((int32_t)L_7) == ((int32_t)0))? 1 : 0);
		goto IL_002d;
	}

IL_0029:
	{
		G_B6_0 = 0;
		goto IL_002d;
	}

IL_002c:
	{
		G_B6_0 = 1;
	}

IL_002d:
	{
		// Grouping = grouping;
		int32_t L_8 = ___1_grouping;
		SystemTypeAttribute_set_Grouping_m6B4340EF5EBBF01DCDB713715291D6FEF7E43786_inline(__this, L_8, NULL);
		// }
		return;
	}
}
// System.Boolean RealityCollective.Attributes.SystemTypeAttribute::IsConstraintSatisfied(System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool SystemTypeAttribute_IsConstraintSatisfied_mD98914F0FE5204DF12BB8E48772CFAA3A8DFEF73 (SystemTypeAttribute_t2716978F86472359470C3D7281A9DBA3D24DA37D* __this, Type_t* ___0_type, const RuntimeMethod* method) 
{
	{
		// return AllowAbstract || !type.IsAbstract;
		bool L_0;
		L_0 = SystemTypeAttribute_get_AllowAbstract_m949614CA09725369A9F49BF53965D4B8FADA0052_inline(__this, NULL);
		if (L_0)
		{
			goto IL_0012;
		}
	}
	{
		Type_t* L_1 = ___0_type;
		NullCheck(L_1);
		bool L_2;
		L_2 = Type_get_IsAbstract_m16FA83463867635ED9DECAE1C5F6BE96B4579CE5(L_1, NULL);
		return (bool)((((int32_t)L_2) == ((int32_t)0))? 1 : 0);
	}

IL_0012:
	{
		return (bool)1;
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
// System.Void RealityCollective.Attributes.Vector3RangeAttribute::.ctor(System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Vector3RangeAttribute__ctor_m0452526C0D0C2DA033D0569C0B442F0467D46E9D (Vector3RangeAttribute_t6E045C048E2D15DD54383DB2BE0AD808BE278265* __this, float ___0_min, float ___1_max, const RuntimeMethod* method) 
{
	{
		// public Vector3RangeAttribute(float min, float max)
		PropertyAttribute__ctor_m19247686E165101F140615C7306DC2DA3953D97D(__this, NULL);
		// Min = min;
		float L_0 = ___0_min;
		__this->___Min_0 = L_0;
		// Max = max;
		float L_1 = ___1_max;
		__this->___Max_1 = L_1;
		// }
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3Smoothed_get_Current_m1F6D8B925C0A8AD0036C3B812DFDAD1E8444F48C_inline (Vector3Smoothed_t09A69085C1AE0824362A7C7327EEA2828F147505* __this, const RuntimeMethod* method) 
{
	{
		// public Vector3 Current { get; set; }
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = __this->___U3CCurrentU3Ek__BackingField_0;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector3Smoothed_set_Current_m6F64F854DEA800AF344BCC6FCFA5B22FF7AC7F5E_inline (Vector3Smoothed_t09A69085C1AE0824362A7C7327EEA2828F147505* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_value, const RuntimeMethod* method) 
{
	{
		// public Vector3 Current { get; set; }
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___0_value;
		__this->___U3CCurrentU3Ek__BackingField_0 = L_0;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3Smoothed_get_Goal_m373404E5DCEA6EA8E58FB6C03A850B1D7674DB1E_inline (Vector3Smoothed_t09A69085C1AE0824362A7C7327EEA2828F147505* __this, const RuntimeMethod* method) 
{
	{
		// public Vector3 Goal { get; set; }
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = __this->___U3CGoalU3Ek__BackingField_1;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector3Smoothed_set_Goal_mBADD63A4BC4F1FEF685BA158D85DD4E311C4F87A_inline (Vector3Smoothed_t09A69085C1AE0824362A7C7327EEA2828F147505* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_value, const RuntimeMethod* method) 
{
	{
		// public Vector3 Goal { get; set; }
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___0_value;
		__this->___U3CGoalU3Ek__BackingField_1 = L_0;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Vector3Smoothed_get_SmoothTime_mA35F39C9206BF698069919FEACD2409326101CE9_inline (Vector3Smoothed_t09A69085C1AE0824362A7C7327EEA2828F147505* __this, const RuntimeMethod* method) 
{
	{
		// public float SmoothTime { get; set; }
		float L_0 = __this->___U3CSmoothTimeU3Ek__BackingField_2;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector3Smoothed_set_SmoothTime_m2C3AEF2E6A1C90D1A3D97FA95E3168BC190E14F1_inline (Vector3Smoothed_t09A69085C1AE0824362A7C7327EEA2828F147505* __this, float ___0_value, const RuntimeMethod* method) 
{
	{
		// public float SmoothTime { get; set; }
		float L_0 = ___0_value;
		__this->___U3CSmoothTimeU3Ek__BackingField_2 = L_0;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_Lerp_m3A906D0530A94FAABB94F0F905E84D99BE85C3F8_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_a, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___1_b, float ___2_t, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		float L_0 = ___2_t;
		float L_1;
		L_1 = Mathf_Clamp01_mA7E048DBDA832D399A581BE4D6DED9FA44CE0F14_inline(L_0, NULL);
		___2_t = L_1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2 = ___0_a;
		float L_3 = L_2.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4 = ___1_b;
		float L_5 = L_4.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6 = ___0_a;
		float L_7 = L_6.___x_2;
		float L_8 = ___2_t;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_9 = ___0_a;
		float L_10 = L_9.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_11 = ___1_b;
		float L_12 = L_11.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_13 = ___0_a;
		float L_14 = L_13.___y_3;
		float L_15 = ___2_t;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_16 = ___0_a;
		float L_17 = L_16.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_18 = ___1_b;
		float L_19 = L_18.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_20 = ___0_a;
		float L_21 = L_20.___z_4;
		float L_22 = ___2_t;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_23;
		memset((&L_23), 0, sizeof(L_23));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_23), ((float)il2cpp_codegen_add(L_3, ((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_subtract(L_5, L_7)), L_8)))), ((float)il2cpp_codegen_add(L_10, ((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_subtract(L_12, L_14)), L_15)))), ((float)il2cpp_codegen_add(L_17, ((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_subtract(L_19, L_21)), L_22)))), /*hidden argument*/NULL);
		V_0 = L_23;
		goto IL_0053;
	}

IL_0053:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_24 = V_0;
		return L_24;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ExtendsAttribute_set_BaseType_mBEDA38D37BF948855DD9169FFF462FAD25D5EF5E_inline (ExtendsAttribute_tBC4F0C1680100AA39B521E57C5D051E94DC86107* __this, Type_t* ___0_value, const RuntimeMethod* method) 
{
	{
		// public Type BaseType { get; private set; }
		Type_t* L_0 = ___0_value;
		__this->___U3CBaseTypeU3Ek__BackingField_2 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CBaseTypeU3Ek__BackingField_2), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Type_t* ExtendsAttribute_get_BaseType_mE241ABC133BDE1D1043765FC51AD9ACE6FDD1D0A_inline (ExtendsAttribute_tBC4F0C1680100AA39B521E57C5D051E94DC86107* __this, const RuntimeMethod* method) 
{
	{
		// public Type BaseType { get; private set; }
		Type_t* L_0 = __this->___U3CBaseTypeU3Ek__BackingField_2;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Type_t* ImplementsAttribute_get_InterfaceType_m01FC02169D6D53CB858F766151FE376771C2EDCE_inline (ImplementsAttribute_tA860407A2CAD81BE53BD11D93BD84DD7C094584B* __this, const RuntimeMethod* method) 
{
	{
		// public Type InterfaceType { get; }
		Type_t* L_0 = __this->___U3CInterfaceTypeU3Ek__BackingField_2;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void SystemTypeAttribute_set_Grouping_m6B4340EF5EBBF01DCDB713715291D6FEF7E43786_inline (SystemTypeAttribute_t2716978F86472359470C3D7281A9DBA3D24DA37D* __this, int32_t ___0_value, const RuntimeMethod* method) 
{
	{
		// public TypeGrouping Grouping { get; protected set; }
		int32_t L_0 = ___0_value;
		__this->___U3CGroupingU3Ek__BackingField_0 = L_0;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool SystemTypeAttribute_get_AllowAbstract_m949614CA09725369A9F49BF53965D4B8FADA0052_inline (SystemTypeAttribute_t2716978F86472359470C3D7281A9DBA3D24DA37D* __this, const RuntimeMethod* method) 
{
	{
		// public bool AllowAbstract { get; protected set; } = false;
		bool L_0 = __this->___U3CAllowAbstractU3Ek__BackingField_1;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Mathf_Clamp01_mA7E048DBDA832D399A581BE4D6DED9FA44CE0F14_inline (float ___0_value, const RuntimeMethod* method) 
{
	bool V_0 = false;
	float V_1 = 0.0f;
	bool V_2 = false;
	{
		float L_0 = ___0_value;
		V_0 = (bool)((((float)L_0) < ((float)(0.0f)))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0015;
		}
	}
	{
		V_1 = (0.0f);
		goto IL_002d;
	}

IL_0015:
	{
		float L_2 = ___0_value;
		V_2 = (bool)((((float)L_2) > ((float)(1.0f)))? 1 : 0);
		bool L_3 = V_2;
		if (!L_3)
		{
			goto IL_0029;
		}
	}
	{
		V_1 = (1.0f);
		goto IL_002d;
	}

IL_0029:
	{
		float L_4 = ___0_value;
		V_1 = L_4;
		goto IL_002d;
	}

IL_002d:
	{
		float L_5 = V_1;
		return L_5;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* __this, float ___0_x, float ___1_y, float ___2_z, const RuntimeMethod* method) 
{
	{
		float L_0 = ___0_x;
		__this->___x_2 = L_0;
		float L_1 = ___1_y;
		__this->___y_3 = L_1;
		float L_2 = ___2_z;
		__this->___z_4 = L_2;
		return;
	}
}
