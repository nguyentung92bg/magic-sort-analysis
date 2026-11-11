public static class ServiceLocator // TypeDefIndex: 697
{
	// Fields
	private static readonly Dictionary<Type, object> Services; // 0x0

	// Methods

	// RVA: -1 Offset: -1
	public static bool Add<T>(T obj) { }
	/* GenericInstMethod :
	|
	|-RVA: 0x268C48C Offset: 0x268C48C VA: 0x268C48C
	|-ServiceLocator.Add<object>
	*/

	// RVA: -1 Offset: -1
	public static bool Add<TInterface, TClass>() { }
	/* GenericInstMethod :
	|
	|-RVA: 0x268C330 Offset: 0x268C330 VA: 0x268C330
	|-ServiceLocator.Add<object, object>
	*/

	// RVA: -1 Offset: -1
	public static bool Add<TInterface, T>(T obj) { }
	/* GenericInstMethod :
	|
	|-RVA: 0x268C5DC Offset: 0x268C5DC VA: 0x268C5DC
	|-ServiceLocator.Add<object, object>
	*/

	// RVA: -1 Offset: -1
	public static T Get<T>() { }
	/* GenericInstMethod :
	|
	|-RVA: 0x268C72C Offset: 0x268C72C VA: 0x268C72C
	|-ServiceLocator.Get<object>
	*/

	// RVA: -1 Offset: -1
	public static TInterface Get<TInterface, TClass>() { }
	/* GenericInstMethod :
	|
	|-RVA: 0x268C8A4 Offset: 0x268C8A4 VA: 0x268C8A4
	|-ServiceLocator.Get<object, object>
	*/

	// RVA: -1 Offset: -1
	public static bool Remove<T>() { }
	/* GenericInstMethod :
	|
	|-RVA: 0x268CAA8 Offset: 0x268CAA8 VA: 0x268CAA8
	|-ServiceLocator.Remove<object>
	*/

	// RVA: 0x40E4E58 Offset: 0x40E4E58 VA: 0x40E4E58
	public static void Clear() { }

	// RVA: 0x40E4ED0 Offset: 0x40E4ED0 VA: 0x40E4ED0
	private static void .cctor() { }
}

// Namespace: Modules.Infrastructure.Common.Scripts