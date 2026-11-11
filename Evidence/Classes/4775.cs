public class BroomStreakAreYouSureContainer : AreYouSureContainer // TypeDefIndex: 4775
{
	// Fields
	[SerializeField]
	private BroomStreakAreYouSureAnimation _broomStreakAreYouSureAnimation; // 0x28
	[SerializeField]
	private TextMeshPro _totalRankText; // 0x30
	private BroomStreakService _broomStreakService; // 0x38

	// Methods

	// RVA: 0x3FC0A20 Offset: 0x3FC0A20 VA: 0x3FC0A20 Slot: 5
	public override void Initialize() { }

	// RVA: 0x3FC0AA4 Offset: 0x3FC0AA4 VA: 0x3FC0AA4 Slot: 6
	public override bool ShouldShow() { }

	[AsyncStateMachine(typeof(BroomStreakAreYouSureContainer.<Show>d__5))]
	// RVA: 0x3FC0AC4 Offset: 0x3FC0AC4 VA: 0x3FC0AC4 Slot: 7
	public override Task<bool> Show() { }

	// RVA: 0x3FC0BD8 Offset: 0x3FC0BD8 VA: 0x3FC0BD8
	private void SetStickerRankText() { }

	// RVA: 0x3FC0CCC Offset: 0x3FC0CCC VA: 0x3FC0CCC Slot: 8
	public override void Hide() { }

	// RVA: 0x3FC0CF8 Offset: 0x3FC0CF8 VA: 0x3FC0CF8
	public void .ctor() { }
}

// Namespace: Modules.Contexts.Home.BroomStreak.Scripts.UI
[CreateAssetMenu(fileName = "BroomStreakBannerConfig", menuName = "Configs/BroomStreakBannerConfig")]