public class ChampionsLeagueLeaderboardPlayerElementView : ChampionsLeagueLeaderboardElementView // TypeDefIndex: 4666
{
	// Fields
	[SerializeField]
	private TextMeshPro _nameText; // 0x38
	[SerializeField]
	private TextMeshPro _teamText; // 0x40
	[SerializeField]
	private TextMeshPro _rankText; // 0x48
	[SerializeField]
	private TextMeshPro _scoreText; // 0x50
	[SerializeField]
	private GameObject _myPlayerBackground; // 0x58
	[SerializeField]
	private GameObject _otherPlayerBackground; // 0x60
	[SerializeField]
	private ChampionsLeagueLeaderboardElementRewardView _rewardView; // 0x68
	[SerializeField]
	private ChampionsLeagueLeaderboardElementRankImageSelector _rankImageSelector; // 0x70
	[SerializeField]
	private ProfileImageView _profileImageView; // 0x78
	[SerializeField]
	private UserProfileView _userProfileView; // 0x80

	// Methods

	// RVA: 0x3A77EE0 Offset: 0x3A77EE0 VA: 0x3A77EE0 Slot: 7
	public override void Initialize() { }

	// RVA: 0x3A77EE4 Offset: 0x3A77EE4 VA: 0x3A77EE4 Slot: 10
	public override void SetRankDisplay(int newRankNumber) { }

	// RVA: 0x3A77EE8 Offset: 0x3A77EE8 VA: 0x3A77EE8 Slot: 11
	public override void SetHatCountForRankUpAnim(int oldHatCount) { }

	// RVA: 0x3A77F30 Offset: 0x3A77F30 VA: 0x3A77F30 Slot: 12
	public override void UpdateHatCountTween(int currentRewardAmount, int targetRewardAmount, float totalDuration) { }

	// RVA: 0x3A7812C Offset: 0x3A7812C VA: 0x3A7812C Slot: 13
	public override void AnimateRankChange(int currentRewardAmount, int targetRewardAmount, float totalDuration) { }

	// RVA: 0x3A78328 Offset: 0x3A78328 VA: 0x3A78328 Slot: 9
	public override void SetModel(IChampionsLeagueLeaderboardViewModel championsLeagueLeaderboardViewModel) { }

	// RVA: 0x3A78508 Offset: 0x3A78508 VA: 0x3A78508 Slot: 8
	public override void Recycle() { }

	// RVA: 0x3A785BC Offset: 0x3A785BC VA: 0x3A785BC
	public void .ctor() { }
}

// Namespace: Modules.Contexts.Home.ChampionsLeague.UI