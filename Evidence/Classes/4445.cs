public class DuckFestivalLeaderboardElementPlacementController : MonoBehaviour // TypeDefIndex: 4445
{
	// Fields
	[SerializeField]
	private ScrollBar _scrollBar; // 0x18
	[SerializeField]
	private BasicScrollAdapter _scrollAdapter; // 0x20
	[SerializeField]
	private DuckFestivalLeaderboardViewAdapter _viewAdapter; // 0x28
	[SerializeField]
	private MagicStreakTournamentLeaderBoardRankUpAnimationConfig _animationConfig; // 0x30
	private float _boundLimitsY; // 0x38
	private Vector3 _userViewWorldPosition; // 0x3C
	private Vector3 _boxColliderCenterPosition; // 0x48
	private readonly List<Vector3> _initialLocalPositions; // 0x58

	// Methods

	// RVA: 0x38C9A30 Offset: 0x38C9A30 VA: 0x38C9A30
	public void Initialize(int currentRank) { }

	[Button]
	// RVA: 0x38CAAB8 Offset: 0x38CAAB8 VA: 0x38CAAB8
	public void MoveTo(int index) { }

	[Button]
	// RVA: 0x38CAAD4 Offset: 0x38CAAD4 VA: 0x38CAAD4
	public void MoveToTween(int index, float duration) { }

	[Button]
	// RVA: 0x38CAAF0 Offset: 0x38CAAF0 VA: 0x38CAAF0
	public void SetUserToIndex(int index) { }

	// RVA: 0x38CAC88 Offset: 0x38CAC88 VA: 0x38CAC88
	public void SetUserToRank(int rank) { }

	[Button]
	// RVA: 0x38CACD8 Offset: 0x38CACD8 VA: 0x38CACD8
	public void StartRankUpAnimationCall(int newRankNumber, int previousRankNumber, int oldHatCount, int newHatCount) { }

	[Button]
	// RVA: 0x38CB304 Offset: 0x38CB304 VA: 0x38CB304
	private void PlayUserRankIncreaseAnim(int previousRankIndex, int newRankIndex, int newRankNumber, float scrollDuration, int oldHatCount, int newHatCount, Vector3 targetCenterPosition) { }

	// RVA: 0x38CB944 Offset: 0x38CB944 VA: 0x38CB944
	private Tween ExtractUserViewTween(DuckFestivalLeaderboardElementView userView, Vector3 targetCenterPosition) { }

	// RVA: 0x38CBAB0 Offset: 0x38CBAB0 VA: 0x38CBAB0
	private Tween PlugUserViewTween(DuckFestivalLeaderboardElementView userView, int newRankIndex) { }

	// RVA: 0x38CBD10 Offset: 0x38CBD10 VA: 0x38CBD10
	private void MoveBelowElements(int clampedDelta, int newRankIndex, List<DuckFestivalLeaderboardElementView> belowViewElements) { }

	// RVA: 0x38CBF20 Offset: 0x38CBF20 VA: 0x38CBF20
	private void UpdateScrollElements(int newRankIndex, int currentRankIndex, int rankDelta) { }

	// RVA: 0x38CBF9C Offset: 0x38CBF9C VA: 0x38CBF9C
	private void PlugUserView(int currentRankIndex, int newRankIndex, int rankDelta, DuckFestivalLeaderboardElementView userView) { }

	// RVA: 0x38CA91C Offset: 0x38CA91C VA: 0x38CA91C
	private void StoreInitialLocalPositionsOfScrollElements() { }

	// RVA: 0x38CC184 Offset: 0x38CC184 VA: 0x38CC184
	private void RecalculateBoundsCenterOfElements() { }

	// RVA: 0x38CBF24 Offset: 0x38CBF24 VA: 0x38CBF24
	private void UpdateAllScrollElements(int newRankIndex, int currentRankIndex, int rankDelta) { }

	// RVA: 0x38CBA84 Offset: 0x38CBA84 VA: 0x38CBA84
	private float CalculateScrollDuration(int rankDelta) { }

	// RVA: 0x38CB890 Offset: 0x38CB890 VA: 0x38CB890
	private void ExtractUserView(DuckFestivalLeaderboardElementView userView) { }

	// RVA: 0x38CC074 Offset: 0x38CC074 VA: 0x38CC074
	private void RemoveInsertUserViewModelAt(int currentRankIndex, int newRankIndex) { }

	// RVA: 0x38CC0D4 Offset: 0x38CC0D4 VA: 0x38CC0D4
	private void PlugUserViewToIndex(DuckFestivalLeaderboardElementView userView, int newRankIndex) { }

	// RVA: 0x38C9DBC Offset: 0x38C9DBC VA: 0x38C9DBC
	public void Dispose() { }

	// RVA: 0x38CC53C Offset: 0x38CC53C VA: 0x38CC53C
	public void .ctor() { }
}

// Namespace: Modules.Contexts.Home.DuckFestival.Scripts.UI.Leaderboard