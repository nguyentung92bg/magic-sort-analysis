public class FirebaseEventSender : IEventSender // TypeDefIndex: 5261
{
	// Fields
	private InventoryParametersProvider _inventoryParametersProvider; // 0x10
	private FirebaseInitializer _firebaseInitializer; // 0x18

	// Methods

	// RVA: 0x1CC6698 Offset: 0x1CC6698 VA: 0x1CC6698
	public void .ctor(FirebaseInitializer firebaseInitializer) { }

	// RVA: 0x1CC6730 Offset: 0x1CC6730 VA: 0x1CC6730
	public void SetInventoryService(InventoryService inventoryService) { }

	// RVA: 0x1CC674C Offset: 0x1CC674C VA: 0x1CC674C Slot: 4
	public void SendEvent(Event eventToSend) { }

	// RVA: 0x1CC743C Offset: 0x1CC743C VA: 0x1CC743C Slot: 5
	public void SendEventWithoutExtraParameter(Event eventToSend) { }

	// RVA: 0x1CC6A70 Offset: 0x1CC6A70 VA: 0x1CC6A70
	private void AddParameter(ref Parameter[] parameters, int index, string key, object value) { }
}

// Namespace: Modules.Contexts.Application.Events.Scripts