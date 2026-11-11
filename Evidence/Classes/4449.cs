public class DuckFestivalLeaderboardElementView : BasicView // TypeDefIndex: 4449
{
	// Fields
	[SerializeField]
	private TextMeshPro _rankText; // 0x28
	[SerializeField]
	private TextMeshPro _scoreText; // 0x30
	[SerializeField]
	private GameObject _myPlayerBackground; // 0x38
	[SerializeField]
	private GameObject _otherPlayerBackground; // 0x40
	[SerializeField]
	private GameObject _myPlayerTextBackground; // 0x48
	[SerializeField]
	private GameObject _otherPlayerTextBackground; // 0x50
	[SerializeField]
	private DuckFestivalLeaderboardElementRewardView _rewardView; // 0x58
	[SerializeField]
	private DuckFestivalLeaderboardElementRankImageSelector _rankImageSelector; // 0x60
	[SerializeField]
	private ProfileImageView _profileImageView; // 0x68
	[SerializeField]
	private UserProfileView _userProfileView; // 0x70
	[CompilerGenerated]
	private int <Id>k__BackingField; // 0x78

	// Properties
	public override int Id { get; set; }

	// Methods

	[CompilerGenerated]
	// RVA: 0x38CCF2C Offset: 0x38CCF2C VA: 0x38CCF2C Slot: 5
	public override int get_Id() { }

	[CompilerGenerated]
	// RVA: 0x38CCF34 Offset: 0x38CCF34 VA: 0x38CCF34 Slot: 6
	public override void set_Id(int value) { }

	// RVA: 0x38CCF3C Offset: 0x38CCF3C VA: 0x38CCF3C
	public void Awake() { }

	// RVA: 0x38CCF44 Offset: 0x38CCF44 VA: 0x38CCF44 Slot: 7
	public override void Initialize() { }

	// RVA: 0x38CB2B8 Offset: 0x38CB2B8 VA: 0x38CB2B8
	public void SetRankDisplay(int newRankNumber) { }

	// RVA: 0x38CB2BC Offset: 0x38CB2BC VA: 0x38CB2BC
	public void SetHatCountForRankUpAnim(int oldHatCount) { }

	// RVA: 0x38CC760 Offset: 0x38CC760 VA: 0x38CC760
	public void UpdateHatCountTween(int currentRewardAmount, int targetRewardAmount, float totalDuration) { }

	// RVA: 0x38CC9A4 Offset: 0x38CC9A4 VA: 0x38CC9A4
	public void AnimateRankChange(int currentRewardAmount, int targetRewardAmount, float totalDuration) { }

	// RVA: 0x38CCF58 Offset: 0x38CCF58 VA: 0x38CCF58
	public void SetModel(DuckFestivalLeaderboardViewModel duckLeaderboardViewModel) { }

	// RVA: 0x38CD10C Offset: 0x38CD10C VA: 0x38CD10C Slot: 8
	public override void Recycle() { }

	// RVA: 0x38CC270 Offset: 0x38CC270 VA: 0x38CC270
	public void AddSortingGroup(string popup, int i) { }

	// RVA: 0x38CC480 Offset: 0x38CC480 VA: 0x38CC480
	public void RemoveSortingGroup() { }

	// RVA: 0x38CD1FC Offset: 0x38CD1FC VA: 0x38CD1FC
	public void OnDestroy() { }

	// RVA: 0x38CD208 Offset: 0x38CD208 VA: 0x38CD208
	public void .ctor() { }
}

// Namespace: Modules.Contexts.Home.DuckFestival.Scripts.UI.Leaderboard