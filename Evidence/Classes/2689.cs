public class SkyJumpWithStageAreYouSureView : AreYouSureContainer // TypeDefIndex: 2689
{
	// Fields
	[SerializeField]
	private SkyJumpWithStageAreYouSureAnimationView _animationView; // 0x28
	[SerializeField]
	private TextMeshPro _totalRankText; // 0x30
	private SkyJumpWithStageService _SkyJumpWithStageService; // 0x38

	// Methods

	// RVA: 0x233A918 Offset: 0x233A918 VA: 0x233A918 Slot: 5
	public override void Initialize() { }

	// RVA: 0x233A99C Offset: 0x233A99C VA: 0x233A99C Slot: 6
	public override bool ShouldShow() { }

	[AsyncStateMachine(typeof(SkyJumpWithStageAreYouSureView.<Show>d__5))]
	// RVA: 0x233A9BC Offset: 0x233A9BC VA: 0x233A9BC Slot: 7
	public override Task<bool> Show() { }

	// RVA: 0x233AAD0 Offset: 0x233AAD0 VA: 0x233AAD0
	private void SetStickerRankText() { }

	// RVA: 0x233ABC4 Offset: 0x233ABC4 VA: 0x233ABC4 Slot: 8
	public override void Hide() { }

	// RVA: 0x233AC0C Offset: 0x233AC0C VA: 0x233AC0C
	public void .ctor() { }
}

// Namespace: Modules.Contexts.Home.SkyJumpWithStage.Scripts.UI