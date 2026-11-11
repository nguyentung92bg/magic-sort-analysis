public class ChampionsLeagueLeaderboardElementPlacementController : MonoBehaviour // TypeDefIndex: 4654
{
	// Fields
	[SerializeField]
	private ScrollBar _scrollBar; // 0x18
	[SerializeField]
	private BasicScrollAdapter _scrollAdapter; // 0x20
	[SerializeField]
	private ChampionsLeagueLeaderboardViewAdapter _viewAdapter; // 0x28
	[SerializeField]
	private MagicStreakTournamentLeaderBoardRankUpAnimationConfig _animationConfig; // 0x30
	private float _boundLimitsY; // 0x38
	private Vector3 _userViewWorldPosition; // 0x3C
	private Vector3 _boxColliderCenterPosition; // 0x48
	private readonly List<Vector3> initialLocalPositions; // 0x58

	// Methods

	// RVA: 0x3A73B54 Offset: 0x3A73B54 VA: 0x3A73B54
	public void Initialize(int rank) { }

	[Button]
	// RVA: 0x3A748C4 Offset: 0x3A748C4 VA: 0x3A748C4
	public void MoveTo(int index) { }

	[Button]
	// RVA: 0x3A748E0 Offset: 0x3A748E0 VA: 0x3A748E0
	public void MoveToTween(int index, float duration) { }

	[Button]
	// RVA: 0x3A748FC Offset: 0x3A748FC VA: 0x3A748FC
	public void SetUserToIndex(int index) { }

	// RVA: 0x3A74A94 Offset: 0x3A74A94 VA: 0x3A74A94
	public void SetUserToRank(int rank) { }

	[Button]
	// RVA: 0x3A74AE4 Offset: 0x3A74AE4 VA: 0x3A74AE4
	public void StartRankUpAnimationCall(int newRankNumber, int previousRankNumber, int oldHatCount, int newHatCount) { }

	[Button]
	// RVA: 0x3A751F8 Offset: 0x3A751F8 VA: 0x3A751F8
	private void PlayUserRankIncreaseAnim(int previousRankIndex, int newRankIndex, int newRankNumber, float scrollDuration, int oldHatCount, int newHatCount, Vector3 targetCenterPosition) { }

	// RVA: 0x3A75854 Offset: 0x3A75854 VA: 0x3A75854
	private Tween ExtractUserViewTween(ChampionsLeagueLeaderboardElementView userView, Vector3 targetCenterPosition) { }

	// RVA: 0x3A759C0 Offset: 0x3A759C0 VA: 0x3A759C0
	private Tween PlugUserViewTween(ChampionsLeagueLeaderboardElementView userView, int newRankIndex) { }

	// RVA: 0x3A75C20 Offset: 0x3A75C20 VA: 0x3A75C20
	private void MoveBelowElements(int clampedDelta, int newRankIndex, List<ChampionsLeagueLeaderboardElementView> belowViewElements) { }

	// RVA: 0x3A75E30 Offset: 0x3A75E30 VA: 0x3A75E30
	private void UpdateScrollElements(int newRankIndex, int currentRankIndex, int rankDelta) { }

	// RVA: 0x3A75EAC Offset: 0x3A75EAC VA: 0x3A75EAC
	private void PlugUserView(int currentRankIndex, int newRankIndex, int rankDelta, ChampionsLeagueLeaderboardElementView userView) { }

	// RVA: 0x3A746E8 Offset: 0x3A746E8 VA: 0x3A746E8
	private void StoreInitialLocalPositionsOfScrollElements() { }

	// RVA: 0x3A76094 Offset: 0x3A76094 VA: 0x3A76094
	private void RecalculateBoundsCenterOfElements() { }

	// RVA: 0x3A75E34 Offset: 0x3A75E34 VA: 0x3A75E34
	private void UpdateAllScrollElements(int newRankIndex, int currentRankIndex, int rankDelta) { }

	// RVA: 0x3A75994 Offset: 0x3A75994 VA: 0x3A75994
	private float CalculateScrollDuration(int rankDelta) { }

	// RVA: 0x3A757A0 Offset: 0x3A757A0 VA: 0x3A757A0
	private void ExtractUserView(ChampionsLeagueLeaderboardElementView userView) { }

	// RVA: 0x3A75F84 Offset: 0x3A75F84 VA: 0x3A75F84
	private void RemoveInsertUserViewModelAt(int currentRankIndex, int newRankIndex) { }

	// RVA: 0x3A75FE4 Offset: 0x3A75FE4 VA: 0x3A75FE4
	private void PlugUserViewToIndex(ChampionsLeagueLeaderboardElementView userView, int newRankIndex) { }

	// RVA: 0x3A73CF4 Offset: 0x3A73CF4 VA: 0x3A73CF4
	public void Dispose() { }

	// RVA: 0x3A7644C Offset: 0x3A7644C VA: 0x3A7644C
	public void .ctor() { }
}

// Namespace: Modules.Contexts.Home.ChampionsLeague.UI
[Serializable]