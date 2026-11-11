public class SnitchAreYouSureContainer : AreYouSureContainer // TypeDefIndex: 2615
{
	// Fields
	private SnitchService _snitchService; // 0x28

	// Methods

	// RVA: 0x246E2B0 Offset: 0x246E2B0 VA: 0x246E2B0 Slot: 5
	public override void Initialize() { }

	// RVA: 0x246E334 Offset: 0x246E334 VA: 0x246E334 Slot: 6
	public override bool ShouldShow() { }

	[AsyncStateMachine(typeof(SnitchAreYouSureContainer.<Show>d__3))]
	// RVA: 0x246E34C Offset: 0x246E34C VA: 0x246E34C Slot: 7
	public override Task<bool> Show() { }

	// RVA: 0x246E460 Offset: 0x246E460 VA: 0x246E460 Slot: 8
	public override void Hide() { }

	// RVA: 0x246E484 Offset: 0x246E484 VA: 0x246E484
	public void .ctor() { }
}

// Namespace: Modules.Contexts.Home.Snitch.Scripts.UI