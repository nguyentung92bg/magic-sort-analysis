public class WeeklyTournamentLeaderboardElementView : BasicView // TypeDefIndex: 1992
{
	// Fields
	[SerializeField]
	private int _id; // 0x24
	[SerializeField]
	private UIElement _uiElement; // 0x28
	[SerializeField]
	private RankView _rankView; // 0x30
	[SerializeField]
	private LeaderboardElementNameView _nameView; // 0x38
	[SerializeField]
	private TextMeshPro _nameText; // 0x40
	[SerializeField]
	private TextMeshPro _teamText; // 0x48
	[SerializeField]
	private TextMeshPro _score; // 0x50
	[SerializeField]
	private TextMeshPro _myScore; // 0x58
	[SerializeField]
	private ProfileImageView _profileImageView; // 0x60
	[SerializeField]
	private List<GameObject> _userObjects; // 0x68
	[SerializeField]
	private List<GameObject> _otherObjects; // 0x70
	[SerializeField]
	private StreakTournamentRewardImage _rewardView; // 0x78
	[SerializeField]
	private UserProfileView _profileUpdater; // 0x80

	// Properties
	public override int Id { get; set; }
	public Vector3 Size { get; }

	// Methods

	// RVA: 0x32DE764 Offset: 0x32DE764 VA: 0x32DE764 Slot: 5
	public override int get_Id() { }

	// RVA: 0x32DE76C Offset: 0x32DE76C VA: 0x32DE76C Slot: 6
	public override void set_Id(int value) { }

	// RVA: 0x32DE774 Offset: 0x32DE774 VA: 0x32DE774
	public Vector3 get_Size() { }

	// RVA: 0x32DE79C Offset: 0x32DE79C VA: 0x32DE79C Slot: 7
	public override void Initialize() { }

	// RVA: 0x32DE7A0 Offset: 0x32DE7A0 VA: 0x32DE7A0
	public void Awake() { }

	// RVA: 0x32DE7A8 Offset: 0x32DE7A8 VA: 0x32DE7A8
	public void SetModel(WeeklyTournamentLeaderboardPlayerViewModel model) { }

	// RVA: 0x32DE968 Offset: 0x32DE968 VA: 0x32DE968
	private void SetBackgrounds(bool isUser) { }

	// RVA: 0x32DE974 Offset: 0x32DE974 VA: 0x32DE974
	private void ApplyUserSprites() { }

	// RVA: 0x32DEBB8 Offset: 0x32DEBB8 VA: 0x32DEBB8
	private void ApplyCompetitorSprites() { }

	// RVA: 0x32DEDFC Offset: 0x32DEDFC VA: 0x32DEDFC
	public void OnDestroy() { }

	// RVA: 0x32DEE08 Offset: 0x32DEE08 VA: 0x32DEE08 Slot: 8
	public override void Recycle() { }

	// RVA: 0x32DEE68 Offset: 0x32DEE68 VA: 0x32DEE68
	public void .ctor() { }
}

// Namespace: Modules.Contexts.Home.WeeklyTournament.Scripts.UI