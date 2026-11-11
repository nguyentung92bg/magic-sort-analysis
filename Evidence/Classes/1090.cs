public class LifeLoseAreYouSureContainer : AreYouSureContainer // TypeDefIndex: 1090
{
	// Fields
	private InventoryService _inventoryService; // 0x28
	[SerializeField]
	private HeartBeatAnimationView _heartBeatAnimationView; // 0x30

	// Methods

	// RVA: 0x16F4EBC Offset: 0x16F4EBC VA: 0x16F4EBC Slot: 5
	public override void Initialize() { }

	// RVA: 0x16F4F40 Offset: 0x16F4F40 VA: 0x16F4F40 Slot: 6
	public override bool ShouldShow() { }

	[AsyncStateMachine(typeof(LifeLoseAreYouSureContainer.<Show>d__4))]
	// RVA: 0x16F4F48 Offset: 0x16F4F48 VA: 0x16F4F48 Slot: 7
	public override Task<bool> Show() { }

	// RVA: 0x16F505C Offset: 0x16F505C VA: 0x16F505C Slot: 8
	public override void Hide() { }

	// RVA: 0x16F5080 Offset: 0x16F5080 VA: 0x16F5080
	public void .ctor() { }
}

// Namespace: Modules.Contexts.GamePlay.UI.LevelFailPopUpNS.Scripts