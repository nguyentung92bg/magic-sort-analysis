public class TeamArenaPlayerView : TeamArenaLeaderboardViewBase // TypeDefIndex: 2406
{
	// Fields
	[SerializeField]
	private BasicUIElement _uiElement; // 0x28
	[SerializeField]
	private UserProfileView _userProfileView; // 0x30
	[SerializeField]
	private TeamArenaLeaderboardRewardView _rewardView; // 0x38
	[SerializeField]
	private TMP_Text _progressText; // 0x40
	[SerializeField]
	private TMP_Text _rankText; // 0x48
	[SerializeField]
	private GameObject[] _rankBgs; // 0x50
	[SerializeField]
	private GameObject _defaultBg; // 0x58
	[SerializeField]
	private GameObject _myUserBg; // 0x60
	[SerializeField]
	private GameObject _defaultScoreBg; // 0x68
	[SerializeField]
	private GameObject _myUserScoreBg; // 0x70
	[SerializeField]
	private Button _userButton; // 0x78
	[CompilerGenerated]
	private int <Id>k__BackingField; // 0x80
	private TeamArenaPlayerViewModel _viewModel; // 0x88

	// Properties
	public override Vector3 Size { get; }
	public override int Id { get; set; }

	// Methods

	// RVA: 0x296B91C Offset: 0x296B91C VA: 0x296B91C Slot: 9
	public override Vector3 get_Size() { }

	[CompilerGenerated]
	// RVA: 0x296B944 Offset: 0x296B944 VA: 0x296B944 Slot: 5
	public override int get_Id() { }

	[CompilerGenerated]
	// RVA: 0x296B94C Offset: 0x296B94C VA: 0x296B94C Slot: 6
	public override void set_Id(int value) { }

	// RVA: 0x296B954 Offset: 0x296B954 VA: 0x296B954 Slot: 10
	public override void SetViewModel(ITeamArenaLeaderboardViewModel viewModel) { }

	// RVA: 0x296BB88 Offset: 0x296BB88 VA: 0x296BB88
	private void SetRank(int rank) { }

	// RVA: 0x296BCF0 Offset: 0x296BCF0 VA: 0x296BCF0 Slot: 7
	public override void Initialize() { }

	// RVA: 0x296BCF4 Offset: 0x296BCF4 VA: 0x296BCF4 Slot: 8
	public override void Recycle() { }

	// RVA: 0x296BD80 Offset: 0x296BD80 VA: 0x296BD80
	public void .ctor() { }
}

// Namespace: Modules.Contexts.Home.TeamArena.UI.Lobby