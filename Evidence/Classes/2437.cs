public class SuperChargerAreYouSureContainer : AreYouSureContainer // TypeDefIndex: 2437
{
	// Fields
	[SerializeField]
	private List<SuperChargerAreYourSureVariant> _variants; // 0x28
	private SuperChargerService _superChargerService; // 0x30

	// Methods

	// RVA: 0x2971A3C Offset: 0x2971A3C VA: 0x2971A3C Slot: 5
	public override void Initialize() { }

	// RVA: 0x2971D54 Offset: 0x2971D54 VA: 0x2971D54 Slot: 6
	public override bool ShouldShow() { }

	// RVA: 0x2971AE0 Offset: 0x2971AE0 VA: 0x2971AE0
	public void SetVariant(SuperChargerType chargerType) { }

	[AsyncStateMachine(typeof(SuperChargerAreYouSureContainer.<Show>d__5))]
	// RVA: 0x2971D6C Offset: 0x2971D6C VA: 0x2971D6C Slot: 7
	public override Task<bool> Show() { }

	// RVA: 0x2971E80 Offset: 0x2971E80 VA: 0x2971E80 Slot: 8
	public override void Hide() { }

	// RVA: 0x2971EA4 Offset: 0x2971EA4 VA: 0x2971EA4
	public void .ctor() { }
}

// Namespace: Modules.Contexts.Home.SuperCharger.Scripts.UI