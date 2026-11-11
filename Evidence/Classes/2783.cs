public class SkyJumpAreYouSureView : AreYouSureContainer // TypeDefIndex: 2783
{
	// Fields
	[SerializeField]
	private SkyJumpAreYouSureAnimationView _animationView; // 0x28
	[SerializeField]
	private TextMeshPro _totalRankText; // 0x30
	private SkyJumpService _skyJumpService; // 0x38

	// Methods

	// RVA: 0x2F1E808 Offset: 0x2F1E808 VA: 0x2F1E808 Slot: 5
	public override void Initialize() { }

	// RVA: 0x2F1E88C Offset: 0x2F1E88C VA: 0x2F1E88C Slot: 6
	public override bool ShouldShow() { }

	[AsyncStateMachine(typeof(SkyJumpAreYouSureView.<Show>d__5))]
	// RVA: 0x2F1E8AC Offset: 0x2F1E8AC VA: 0x2F1E8AC Slot: 7
	public override Task<bool> Show() { }

	// RVA: 0x2F1E9C0 Offset: 0x2F1E9C0 VA: 0x2F1E9C0
	private void SetStickerRankText() { }

	// RVA: 0x2F1EA98 Offset: 0x2F1EA98 VA: 0x2F1EA98 Slot: 8
	public override void Hide() { }

	// RVA: 0x2F1EAE0 Offset: 0x2F1EAE0 VA: 0x2F1EAE0
	public void .ctor() { }
}

// Namespace: Modules.Contexts.Home.SkyJump.Scripts.UI