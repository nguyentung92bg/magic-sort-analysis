public class JetpackRaceView : MonoBehaviour // TypeDefIndex: 4280
{
	// Fields
	[SerializeField]
	private List<JetpackRaceUserView> _userViews; // 0x18
	[SerializeField]
	private List<JetpackRaceProfileView> _profileViews; // 0x20
	[SerializeField]
	private GameObject _userChestBanner; // 0x28
	[SerializeField]
	private GameObject _opponentChestBanner; // 0x30
	[SerializeField]
	private List<Transform> _startPositions; // 0x38
	[SerializeField]
	private List<Transform> _medalPositions; // 0x40
	[SerializeField]
	private JetpackRaceAnimationConfig _animationConfig; // 0x48
	[SerializeField]
	private ParticleSystem _userChestClaimParticle; // 0x50
	[SerializeField]
	private ParticleSystem _medalBreakParticle; // 0x58
	[SerializeField]
	private GameObject _firstRankMedal; // 0x60
	[SerializeField]
	private List<ToolbarButton> _toolbarButtons; // 0x68
	[SerializeField]
	private TextMeshPro _titleInfoText; // 0x70
	[SerializeField]
	private TextMeshPro _stageText; // 0x78
	[SerializeField]
	private List<GameObject> _stages; // 0x80
	[SerializeField]
	private List<SpriteRenderer> _chestSprites; // 0x88
	private List<JetpackRaceLeaderboardPlayerViewModel> _initialViewModels; // 0x90
	private Tween _userChestClaimTween; // 0x98
	private Tween _medalBreakTween; // 0xA0
	private Tween _chestBannerTween; // 0xA8

	// Methods

	// RVA: 0x1C6C934 Offset: 0x1C6C934 VA: 0x1C6C934
	public void Initialize(List<JetpackRaceLeaderboardPlayerViewModel> viewModels) { }

	// RVA: 0x1C70044 Offset: 0x1C70044 VA: 0x1C70044
	public void SetStage(int stageIndex) { }

	// RVA: 0x1C6C054 Offset: 0x1C6C054 VA: 0x1C6C054
	public void SetRewardModel(RewardModel rewardModel) { }

	// RVA: 0x1C6CC2C Offset: 0x1C6CC2C VA: 0x1C6CC2C
	public void ShowMedalForFirstPlace(List<JetpackRaceLeaderboardPlayerViewModel> viewModels) { }

	[AsyncStateMachine(typeof(JetpackRaceView.<PlayFirstShowEverAnimations>d__23))]
	// RVA: 0x1C6ED1C Offset: 0x1C6ED1C VA: 0x1C6ED1C
	public Task PlayFirstShowEverAnimations() { }

	// RVA: 0x1C6CF40 Offset: 0x1C6CF40 VA: 0x1C6CF40
	public void PlayUnseenAnimations(List<JetpackRaceLeaderboardPlayerViewModel> newViewModels) { }

	[Button]
	// RVA: 0x1C703BC Offset: 0x1C703BC VA: 0x1C703BC
	public void PlayUserIncreaseAnimation(int score) { }

	[Button]
	// RVA: 0x1C6CCD4 Offset: 0x1C6CCD4 VA: 0x1C6CCD4
	public void PlayUserFailAnimation() { }

	// RVA: 0x1C70568 Offset: 0x1C70568 VA: 0x1C70568
	private void PlayUnseenAnimationsInternal(List<JetpackRaceLeaderboardPlayerViewModel> currentViewModels) { }

	// RVA: 0x1C70218 Offset: 0x1C70218 VA: 0x1C70218
	private int FindHighestRankIndex(List<JetpackRaceLeaderboardPlayerViewModel> newViewModels) { }

	// RVA: 0x1C7099C Offset: 0x1C7099C VA: 0x1C7099C
	private void PlayMedalBreak() { }

	// RVA: 0x1C70A28 Offset: 0x1C70A28 VA: 0x1C70A28
	private void PlayChestRewardBanner(bool isMe, int rankRow) { }

	[AsyncStateMachine(typeof(JetpackRaceView.<PlayChestClaimAnimation>d__31))]
	// RVA: 0x1C6E544 Offset: 0x1C6E544 VA: 0x1C6E544
	public Task PlayChestClaimAnimation() { }

	// RVA: 0x1C6D260 Offset: 0x1C6D260 VA: 0x1C6D260
	public void SetResultViewDisplay(List<JetpackRaceLeaderboardPlayerViewModel> viewModels) { }

	// RVA: 0x1C6CAFC Offset: 0x1C6CAFC VA: 0x1C6CAFC
	public void SetInProgressViewDisplay() { }

	// RVA: 0x1C6CF1C Offset: 0x1C6CF1C VA: 0x1C6CF1C
	public void SetInfoText(string text) { }

	// RVA: 0x1C6DF30 Offset: 0x1C6DF30 VA: 0x1C6DF30
	public void Dispose() { }

	// RVA: 0x1C70CF0 Offset: 0x1C70CF0 VA: 0x1C70CF0
	public void .ctor() { }
}

// Namespace: 
[CompilerGenerated]