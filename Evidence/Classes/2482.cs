public class StrikeShowEventPopupArguments : PopUpArguments // TypeDefIndex: 2482
{
	// Fields
	public StrikeShowEventPopupMode Mode; // 0x24
	public StrikeShowLeagueType League; // 0x28
	public DateTime EventEndDate; // 0x30
	public List<StrikeShowLeaderboardPlayerViewModel> Leaderboard; // 0x38
	public int CurrentMultiplierIndex; // 0x40
	public List<int> Multipliers; // 0x48
	public bool IsStreakEnabled; // 0x50
	public int MyRank; // 0x54
	public List<RewardModel> MyRewards; // 0x58
	public bool IsLeagueEnabled; // 0x60
	public StrikeShowPromotionState PromotionState; // 0x64
	public bool ShouldOpenInfoPopup; // 0x68

	// Methods

	// RVA: 0x2AF7620 Offset: 0x2AF7620 VA: 0x2AF7620
	public void .ctor() { }
}

// Namespace: Modules.Contexts.Home.StrikeShow.Scripts.UI