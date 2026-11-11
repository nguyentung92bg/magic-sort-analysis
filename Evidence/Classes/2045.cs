public class TowerWinStreakAreYouSureContainer : AreYouSureContainer // TypeDefIndex: 2045
{
	// Fields
	[SerializeField]
	private TowerWinStreakAreYouSureAnimation _towerWinStreakAreYouSureAnimation; // 0x28
	[SerializeField]
	private TextMeshPro _totalRankText; // 0x30
	private TowerWinStreakService _towerWinStreakService; // 0x38

	// Methods

	// RVA: 0x359C540 Offset: 0x359C540 VA: 0x359C540 Slot: 5
	public override void Initialize() { }

	// RVA: 0x359C5C4 Offset: 0x359C5C4 VA: 0x359C5C4 Slot: 6
	public override bool ShouldShow() { }

	[AsyncStateMachine(typeof(TowerWinStreakAreYouSureContainer.<Show>d__5))]
	// RVA: 0x359C5E8 Offset: 0x359C5E8 VA: 0x359C5E8 Slot: 7
	public override Task<bool> Show() { }

	// RVA: 0x359C6FC Offset: 0x359C6FC VA: 0x359C6FC
	private void SetStickerRankText() { }

	// RVA: 0x359C7EC Offset: 0x359C7EC VA: 0x359C7EC Slot: 8
	public override void Hide() { }

	// RVA: 0x359C834 Offset: 0x359C834 VA: 0x359C834
	public void .ctor() { }
}

// Namespace: Modules.Contexts.Home.TowerWinStreak.Scripts.UI
[CreateAssetMenu(fileName = "TowerWinStreakBannerConfig", menuName = "Configs/TowerWinStreakBannerConfig")]