public static class CommandPool // TypeDefIndex: 999
{
	// Fields
	private static Dictionary<Type, List<ICommand>> _cachedCommandsByType; // 0x0

	// Methods

	// RVA: -1 Offset: -1
	public static T GetCommand<T>() { }
	/* GenericInstMethod :
	|
	|-RVA: 0x27202F8 Offset: 0x27202F8 VA: 0x27202F8
	|-CommandPool.GetCommand<object>
	*/

	// RVA: 0x40EBC18 Offset: 0x40EBC18 VA: 0x40EBC18
	public static void ReturnCommand(ICommand command) { }

	// RVA: -1 Offset: -1
	private static ICommand CreateCommand<T>() { }
	/* GenericInstMethod :
	|
	|-RVA: 0x27202E8 Offset: 0x27202E8 VA: 0x27202E8
	|-CommandPool.CreateCommand<object>
	*/

	// RVA: 0x40EBE74 Offset: 0x40EBE74 VA: 0x40EBE74
	private static void .cctor() { }
}

// Namespace: Modules.Infrastructure.Common.Scripts.CommandNS