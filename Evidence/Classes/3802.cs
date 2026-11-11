public class MagicStreakTournamentLeaderboardElementRewardView : MonoBehaviour // TypeDefIndex: 3802
{
	// Fields
	[SerializeField]
	private Transform _rewardContainer; // 0x18
	[SerializeField]
	private CurrencyViewFactory _currencyViewFactory; // 0x20
	private CurrencyView _currentCurrencyView; // 0x28

	// Methods

	// RVA: 0x3E157D8 Offset: 0x3E157D8 VA: 0x3E157D8
	public void Show(RewardModel rewardModel) { }

	// RVA: 0x3E16A80 Offset: 0x3E16A80 VA: 0x3E16A80
	private void RecycleCurrentCurrencyView() { }

	// RVA: 0x3E16B4C Offset: 0x3E16B4C VA: 0x3E16B4C
	public void AnimateRankChange(int currentRewardAmount, int targetRewardAmount, float totalDuration) { }

	// RVA: 0x3E16D64 Offset: 0x3E16D64 VA: 0x3E16D64
	public void Dispose() { }

	// RVA: 0x3E16D68 Offset: 0x3E16D68 VA: 0x3E16D68
	public void .ctor() { }
}

// Namespace: Modules.Contexts.Home.MagicStreakTournament.Scripts.UI.Leaderboard
[CreateAssetMenu(fileName = "MagicStreakTournamentLeaderboardFactory", menuName = "Factory/MagicStreakTournamentLeaderboardFactory")]