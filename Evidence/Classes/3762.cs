public class MagicStreakTournamentInProgressController : MonoBehaviour // TypeDefIndex: 3762
{
	// Fields
	[SerializeField]
	private GameObject _scrollWithProgressBar; // 0x18
	[SerializeField]
	private GameObject _scrollWithoutProgressBar; // 0x20
	[SerializeField]
	private MagicStreakTournamentLeaderboardSwipeController _swipeController; // 0x28
	[SerializeField]
	private MagicStreakTournamentLeaderboardSwipeController _swipeControllerWithoutProgressBar; // 0x30
	[SerializeField]
	private MagicStreakTournamentRewardsSwipeController _rewardsSwipeController; // 0x38
	[SerializeField]
	private MagicStreakTournamentLastRewardView _lastRewardView; // 0x40
	[SerializeField]
	private MagicStreakTournamentPopupProgressBarView _progressBarView; // 0x48
	[SerializeField]
	private MagicStreakTournamentMultiplierProgressView _multiplierProgressView; // 0x50
	private MagicStreakService _magicStreakService; // 0x58

	// Methods

	// RVA: 0x3E0E594 Offset: 0x3E0E594 VA: 0x3E0E594
	public void Show(MagicStreakTournamentPopupStateType magicStreakTournamentPopupStateType) { }

	// RVA: 0x3E0EC10 Offset: 0x3E0EC10 VA: 0x3E0EC10
	private void IntroduceFeature(MagicStreakTournamentPopupStateType magicStreakTournamentPopupStateType) { }

	// RVA: 0x3E0EFD4 Offset: 0x3E0EFD4 VA: 0x3E0EFD4
	public void Hide() { }

	// RVA: 0x3E0EB5C Offset: 0x3E0EB5C VA: 0x3E0EB5C
	private void TryShowRankUpAnimation() { }

	[Button]
	// RVA: 0x3E0EFF8 Offset: 0x3E0EFF8 VA: 0x3E0EFF8
	public void PlayRankUpAnimation(int currentRank, int lastRank, int currentHat, int lastHat) { }

	// RVA: 0x3E0F4C8 Offset: 0x3E0F4C8 VA: 0x3E0F4C8
	public void Dispose() { }

	// RVA: 0x3E0F5C0 Offset: 0x3E0F5C0 VA: 0x3E0F5C0
	public void .ctor() { }
}

// Namespace: Modules.Contexts.Home.MagicStreakTournament.Scripts.UI