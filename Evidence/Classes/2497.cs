public class StrikeShowAreYouSureContainer : AreYouSureContainer // TypeDefIndex: 2497
{
	// Fields
	[SerializeField]
	private StrikeShowAreYouSureAnimationView _animationView; // 0x28
	private StrikeShowService _strikeShowService; // 0x30

	// Methods

	// RVA: 0x2AFCB08 Offset: 0x2AFCB08 VA: 0x2AFCB08 Slot: 5
	public override void Initialize() { }

	// RVA: 0x2AFCB8C Offset: 0x2AFCB8C VA: 0x2AFCB8C Slot: 6
	public override bool ShouldShow() { }

	[AsyncStateMachine(typeof(StrikeShowAreYouSureContainer.<Show>d__4))]
	// RVA: 0x2AFCBA4 Offset: 0x2AFCBA4 VA: 0x2AFCBA4 Slot: 7
	public override Task<bool> Show() { }

	// RVA: 0x2AFCCB8 Offset: 0x2AFCCB8 VA: 0x2AFCCB8 Slot: 8
	public override void Hide() { }

	// RVA: 0x2AFCCEC Offset: 0x2AFCCEC VA: 0x2AFCCEC
	public void .ctor() { }
}

// Namespace: Modules.Contexts.Home.StrikeShow.Scripts.UI