public class JetpackRaceWithStageAreYouSureView : AreYouSureContainer // TypeDefIndex: 4160
{
	// Fields
	[SerializeField]
	private JetpackRaceWithStageAreYouSureAnimationView _animationView; // 0x28
	[SerializeField]
	private TextMeshPro _rankText; // 0x30
	[SerializeField]
	private TextMeshPro _totalRankText; // 0x38
	private JetpackRaceWithStageService _jetpackRaceWithStageService; // 0x40

	// Methods

	// RVA: 0x3B0A1A0 Offset: 0x3B0A1A0 VA: 0x3B0A1A0 Slot: 5
	public override void Initialize() { }

	// RVA: 0x3B0A224 Offset: 0x3B0A224 VA: 0x3B0A224 Slot: 6
	public override bool ShouldShow() { }

	[AsyncStateMachine(typeof(JetpackRaceWithStageAreYouSureView.<Show>d__6))]
	// RVA: 0x3B0A248 Offset: 0x3B0A248 VA: 0x3B0A248 Slot: 7
	public override Task<bool> Show() { }

	// RVA: 0x3B0A35C Offset: 0x3B0A35C VA: 0x3B0A35C
	private void SetStickerRankText() { }

	// RVA: 0x3B0A498 Offset: 0x3B0A498 VA: 0x3B0A498 Slot: 8
	public override void Hide() { }

	// RVA: 0x3B0A4E0 Offset: 0x3B0A4E0 VA: 0x3B0A4E0
	public void .ctor() { }
}

// Namespace: Modules.Contexts.Home.JetpackRaceWithStage.Scripts.UI
[CreateAssetMenu(fileName = "JetpackRaceWithStageBannerAnimationConfig", menuName = "Configs/JetpackRaceWithStageBannerAnimationConfig")]