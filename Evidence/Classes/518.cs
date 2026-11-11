public static class DIUtils // TypeDefIndex: 518
{
	// Fields
	private static Dictionary<Type, FieldInfo[]> _fieldInfoCache; // 0x0
	private static Dictionary<Type, PropertyInfo[]> _propertyInfoCache; // 0x8

	// Methods

	// RVA: 0x3D2EAE8 Offset: 0x3D2EAE8 VA: 0x3D2EAE8
	public static FieldInfo[] GetFields(Type type) { }

	// RVA: 0x3D2EB0C Offset: 0x3D2EB0C VA: 0x3D2EB0C
	public static PropertyInfo[] GetProperties(Type type) { }

	// RVA: 0x3D2EC50 Offset: 0x3D2EC50 VA: 0x3D2EC50
	public static FieldInfo[] GetFieldsByFieldType(FieldInfo[] fields, Type type) { }

	// RVA: 0x3D2ED54 Offset: 0x3D2ED54 VA: 0x3D2ED54
	public static PropertyInfo[] GetPropertiesByPropertyType(PropertyInfo[] properties, Type type) { }

	// RVA: 0x3D2EE58 Offset: 0x3D2EE58 VA: 0x3D2EE58
	public static FieldInfo[] GetFieldsThatHasInjectAttributeAndNoId(FieldInfo[] fieldInfos) { }

	// RVA: 0x3D2EF74 Offset: 0x3D2EF74 VA: 0x3D2EF74
	public static FieldInfo[] GetFieldsThatHasAttribute(FieldInfo[] fieldInfos, Type attributeType) { }

	// RVA: 0x3D2F078 Offset: 0x3D2F078 VA: 0x3D2F078
	public static FieldInfo[] GetFieldsThatHasInjectAttributeAndId(FieldInfo[] fieldInfos) { }

	// RVA: 0x3D2F194 Offset: 0x3D2F194 VA: 0x3D2F194
	public static PropertyInfo[] GetPropertiesThatHasInjectAttributeAndNoId(PropertyInfo[] propertyInfos) { }

	// RVA: 0x3D2F2B0 Offset: 0x3D2F2B0 VA: 0x3D2F2B0
	public static PropertyInfo[] GetPropertiesThatHasInjectAttributeAndId(PropertyInfo[] propertyInfos) { }

	// RVA: 0x3D2F3CC Offset: 0x3D2F3CC VA: 0x3D2F3CC
	public static ParameterInfo[] GetParameterInfosThatHasAttributeAndId(ConstructorInfo constructorInfo) { }

	// RVA: 0x3D2F50C Offset: 0x3D2F50C VA: 0x3D2F50C
	public static ParameterInfo[] GetParameterInfosThatHasNoAttributeAndId(ConstructorInfo constructorInfo) { }

	// RVA: 0x3D2F64C Offset: 0x3D2F64C VA: 0x3D2F64C
	public static ConstructorInfo GetConstructorInfoThatHasMaxParameter(UnresolvedType unResolvedType) { }

	// RVA: 0x3D2F788 Offset: 0x3D2F788 VA: 0x3D2F788
	public static void FillAllPropertiesAndFieldsWithInstance(Type type, object instance) { }

	// RVA: 0x3D2F8F4 Offset: 0x3D2F8F4 VA: 0x3D2F8F4
	private static Type GetOneConcreteTypeIfItIsInterfaceOrAbstract(Type type) { }

	// RVA: 0x3D2FAC0 Offset: 0x3D2FAC0 VA: 0x3D2FAC0
	public static bool IsInheritedFromUnity(Type type) { }
}

// Namespace: Modules.Infrastructure.DI