public class JetpackRaceWithStageView : MonoBehaviour // TypeDefIndex: 4196
{
	// Fields
	[SerializeField]
	private List<JetpackRaceWithStageUserView> _userViews; // 0x18
	[SerializeField]
	private List<JetpackRaceWithStageProfileView> _profileViews; // 0x20
	[SerializeField]
	private GameObject _userChestBanner; // 0x28
	[SerializeField]
	private GameObject _opponentChestBanner; // 0x30
	[SerializeField]
	private List<Transform> _startPositionsStage1; // 0x38
	[SerializeField]
	private List<Transform> _startPositionsStage2; // 0x40
	[SerializeField]
	private List<Transform> _startPositionsStage3; // 0x48
	[SerializeField]
	private Transform _medalPositionYRefTransform; // 0x50
	[SerializeField]
	private Transform _userStartPositionYRefTransform; // 0x58
	[SerializeField]
	private Transform _profileViewYRefTransform; // 0x60
	[SerializeField]
	private Transform _userEndPositionYRefTransform; // 0x68
	[SerializeField]
	private JetpackRaceWithStageAnimationConfig _animationConfig; // 0x70
	[SerializeField]
	private ParticleSystem _userChestClaimParticle; // 0x78
	[SerializeField]
	private ParticleSystem _medalBreakParticle; // 0x80
	[SerializeField]
	private GameObject _firstRankMedal; // 0x88
	[SerializeField]
	private List<ToolbarButton> _toolbarButtons; // 0x90
	[SerializeField]
	private TextMeshPro _titleInfoText; // 0x98
	[SerializeField]
	private TextMeshPro _stageText; // 0xA0
	[SerializeField]
	private List<GameObject> _stages; // 0xA8
	[SerializeField]
	private List<SpriteRenderer> _chestSprites; // 0xB0
	private List<JetpackRaceWithStageLeaderboardPlayerViewModel> _initialViewModels; // 0xB8
	private Tween _userChestClaimTween; // 0xC0
	private Tween _medalBreakTween; // 0xC8
	private Tween _chestBannerTween; // 0xD0
	private int _currentStage; // 0xD8
	private bool _isResultView; // 0xDC

	// Methods

	// RVA: 0x3B10674 Offset: 0x3B10674 VA: 0x3B10674
	public void Initialize(List<JetpackRaceWithStageLeaderboardPlayerViewModel> viewModels, int currentStage, bool isResultView) { }

	// RVA: 0x3B14188 Offset: 0x3B14188 VA: 0x3B14188
	private Vector3 GetMedalPositionByStage(int stage, int rank) { }

	// RVA: 0x3B13E1C Offset: 0x3B13E1C VA: 0x3B13E1C
	private Vector3 GetProfileViewStartPositionsByStageAndRank(int stage, int rank, bool resultView) { }

	// RVA: 0x3B13C6C Offset: 0x3B13C6C VA: 0x3B13C6C
	private Vector3 GetStartPositionsByStageAndRank(int stage, int rank, bool isResultView) { }

	// RVA: 0x3B13D50 Offset: 0x3B13D50 VA: 0x3B13D50
	private Vector3 GetEndPositionsByStageAndRank(int stage, int rank) { }

	// RVA: 0x3B14254 Offset: 0x3B14254 VA: 0x3B14254
	private List<Transform> GetStartPositionsByStage(int stageIndex) { }

	// RVA: 0x3B13F00 Offset: 0x3B13F00 VA: 0x3B13F00
	public void SetStage(int stageIndex) { }

	// RVA: 0x3B0FA7C Offset: 0x3B0FA7C VA: 0x3B0FA7C
	public void SetRewardModel(RewardModel rewardModel) { }

	// RVA: 0x3B108E8 Offset: 0x3B108E8 VA: 0x3B108E8
	public void ShowMedalForFirstPlace(List<JetpackRaceWithStageLeaderboardPlayerViewModel> viewModels) { }

	[AsyncStateMachine(typeof(JetpackRaceWithStageView.<PlayFirstShowEverAnimations>d__35))]
	// RVA: 0x3B1261C Offset: 0x3B1261C VA: 0x3B1261C
	public Task PlayFirstShowEverAnimations() { }

	// RVA: 0x3B10B88 Offset: 0x3B10B88 VA: 0x3B10B88
	public void PlayUnseenAnimations(List<JetpackRaceWithStageLeaderboardPlayerViewModel> newViewModels) { }

	[Button]
	// RVA: 0x3B14424 Offset: 0x3B14424 VA: 0x3B14424
	public void PlayUserIncreaseAnimation(int score) { }

	[Button]
	// RVA: 0x3B10940 Offset: 0x3B10940 VA: 0x3B10940
	public void PlayUserFailAnimation() { }

	// RVA: 0x3B145D0 Offset: 0x3B145D0 VA: 0x3B145D0
	private void PlayUnseenAnimationsInternal(List<JetpackRaceWithStageLeaderboardPlayerViewModel> currentViewModels) { }

	// RVA: 0x3B14280 Offset: 0x3B14280 VA: 0x3B14280
	private int FindHighestRankIndex(List<JetpackRaceWithStageLeaderboardPlayerViewModel> newViewModels) { }

	// RVA: 0x3B14A04 Offset: 0x3B14A04 VA: 0x3B14A04
	private void PlayMedalBreak() { }

	// RVA: 0x3B14A90 Offset: 0x3B14A90 VA: 0x3B14A90
	private void PlayChestRewardBanner(bool isMe, int rankRow) { }

	[AsyncStateMachine(typeof(JetpackRaceWithStageView.<PlayChestClaimAnimation>d__43))]
	// RVA: 0x3B11E44 Offset: 0x3B11E44 VA: 0x3B11E44
	public Task PlayChestClaimAnimation() { }

	// RVA: 0x3B10EA8 Offset: 0x3B10EA8 VA: 0x3B10EA8
	public void SetResultViewDisplay(List<JetpackRaceWithStageLeaderboardPlayerViewModel> viewModels) { }

	// RVA: 0x3B108C4 Offset: 0x3B108C4 VA: 0x3B108C4
	public void SetInfoText(string text) { }

	// RVA: 0x3B1182C Offset: 0x3B1182C VA: 0x3B1182C
	public void Dispose() { }

	// RVA: 0x3B14D04 Offset: 0x3B14D04 VA: 0x3B14D04
	public void .ctor() { }
}

// Namespace: 
[CompilerGenerated]