public class MagicStreakTournamentLeaderboardSwipeController : MonoBehaviour // TypeDefIndex: 3809
{
	// Fields
	[SerializeField]
	private ScrollBar _scrollBar; // 0x18
	[SerializeField]
	private BasicScrollAdapter _scrollAdapter; // 0x20
	[SerializeField]
	private MagicStreakTournamentLeaderboardViewAdapter _viewAdapter; // 0x28
	[SerializeField]
	private MagicStreakTournamentLeaderBoardRankUpAnimationConfig _animationConfig; // 0x30
	private float _boundLimitsY; // 0x38
	private Vector3 _userViewWorldPosition; // 0x3C
	private Vector3 _boxColliderCenterPosition; // 0x48
	private readonly List<Vector3> initialLocalPositions; // 0x58

	// Methods

	// RVA: 0x3E0E78C Offset: 0x3E0E78C VA: 0x3E0E78C
	public void Initialize(int initialScrollIndex) { }

	[Button]
	// RVA: 0x3E17194 Offset: 0x3E17194 VA: 0x3E17194
	public void MoveTo(int index) { }

	[Button]
	// RVA: 0x3E171B0 Offset: 0x3E171B0 VA: 0x3E171B0
	public void MoveToTween(int index, float duration) { }

	[Button]
	// RVA: 0x3E171CC Offset: 0x3E171CC VA: 0x3E171CC
	public void SetUserToIndex(int index) { }

	[Button]
	// RVA: 0x3E17364 Offset: 0x3E17364 VA: 0x3E17364
	public void SetRankAndHatCountForTesting(int lastRank, int lastHat) { }

	[Button]
	// RVA: 0x3E17368 Offset: 0x3E17368 VA: 0x3E17368
	public void SetCurrentRank(int rank) { }

	[Button]
	// RVA: 0x3E0F060 Offset: 0x3E0F060 VA: 0x3E0F060
	public void StartRankUpAnimationCall(int newRankNumber, int previousRankNumber, int oldHatCount, int newHatCount) { }

	[Button]
	// RVA: 0x3E174E8 Offset: 0x3E174E8 VA: 0x3E174E8
	private void PlayUserRankIncreaseAnim(int newRankNumber, float scrollDuration, int oldHatCount, int newHatCount, Vector3 targetCenterPosition) { }

	// RVA: 0x3E17BCC Offset: 0x3E17BCC VA: 0x3E17BCC
	private Tween ExtractUserViewTween(MagicStreakTournamentLeaderboardElement userView, Vector3 targetCenterPosition) { }

	// RVA: 0x3E17D38 Offset: 0x3E17D38 VA: 0x3E17D38
	private Tween PlugUserViewTween(MagicStreakTournamentLeaderboardElement userView, int newRankIndex) { }

	// RVA: 0x3E17F98 Offset: 0x3E17F98 VA: 0x3E17F98
	private void MoveBelowElements(int clampedDelta, int newRankIndex, List<MagicStreakTournamentLeaderboardElement> belowViewElements) { }

	// RVA: 0x3E181A8 Offset: 0x3E181A8 VA: 0x3E181A8
	private void UpdateScrollElements(int newRankIndex, int currentRankIndex, int rankDelta) { }

	// RVA: 0x3E18224 Offset: 0x3E18224 VA: 0x3E18224
	private void PlugUserView(int currentRankIndex, int newRankIndex, int rankDelta, MagicStreakTournamentLeaderboardElement userView) { }

	// RVA: 0x3E1709C Offset: 0x3E1709C VA: 0x3E1709C
	private void StoreInitialLocalPositionsOfScrollElements() { }

	// RVA: 0x3E1840C Offset: 0x3E1840C VA: 0x3E1840C
	private void RecalculateBoundsCenterOfElements() { }

	// RVA: 0x3E181AC Offset: 0x3E181AC VA: 0x3E181AC
	private void UpdateAllScrollElements(int newRankIndex, int currentRankIndex, int rankDelta) { }

	// RVA: 0x3E17D0C Offset: 0x3E17D0C VA: 0x3E17D0C
	private float CalculateScrollDuration(int rankDelta) { }

	// RVA: 0x3E17B18 Offset: 0x3E17B18 VA: 0x3E17B18
	private void ExtractUserView(MagicStreakTournamentLeaderboardElement userView) { }

	// RVA: 0x3E182FC Offset: 0x3E182FC VA: 0x3E182FC
	private void RemoveInsertUserViewModelAt(int currentRankIndex, int newRankIndex) { }

	// RVA: 0x3E1835C Offset: 0x3E1835C VA: 0x3E1835C
	private void PlugUserViewToIndex(MagicStreakTournamentLeaderboardElement userView, int newRankIndex) { }

	// RVA: 0x3E0F584 Offset: 0x3E0F584 VA: 0x3E0F584
	public void Dispose() { }

	// RVA: 0x3E18610 Offset: 0x3E18610 VA: 0x3E18610
	public void .ctor() { }
}

// Namespace: Modules.Contexts.Home.MagicStreakTournament.Scripts.UI.Leaderboard