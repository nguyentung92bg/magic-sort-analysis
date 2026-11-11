public class MagicBottleAreYouSureContainer : AreYouSureContainer // TypeDefIndex: 4043
{
	// Fields
	private MagicBottleService _magicBottleService; // 0x28

	// Methods

	// RVA: 0x375D804 Offset: 0x375D804 VA: 0x375D804 Slot: 5
	public override void Initialize() { }

	// RVA: 0x375D888 Offset: 0x375D888 VA: 0x375D888 Slot: 6
	public override bool ShouldShow() { }

	[AsyncStateMachine(typeof(MagicBottleAreYouSureContainer.<Show>d__3))]
	// RVA: 0x375D8A0 Offset: 0x375D8A0 VA: 0x375D8A0 Slot: 7
	public override Task<bool> Show() { }

	// RVA: 0x375D9B4 Offset: 0x375D9B4 VA: 0x375D9B4 Slot: 8
	public override void Hide() { }

	// RVA: 0x375D9D8 Offset: 0x375D9D8 VA: 0x375D9D8
	public void .ctor() { }
}

// Namespace: Modules.Contexts.Home.MagicBottle.Scripts.UI
[CreateAssetMenu(fileName = "MagicBottleCongratsAnimationConfig", menuName = "Configs/MagicBottleCongratsAnimationConfig")]