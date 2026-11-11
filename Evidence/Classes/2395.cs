public class TeamArenaTeamView : TeamArenaLeaderboardViewBase // TypeDefIndex: 2395
{
	// Fields
	[SerializeField]
	private BasicUIElement _uiElement; // 0x28
	[SerializeField]
	private Button _teamButton; // 0x30
	[SerializeField]
	private TeamArenaLeaderboardRewardView _rewardView; // 0x38
	[SerializeField]
	private TMP_Text _nameText; // 0x40
	[SerializeField]
	private TMP_Text _progressText; // 0x48
	[SerializeField]
	private TMP_Text _rankText; // 0x50
	[SerializeField]
	private SpriteRenderer _badgeRenderer; // 0x58
	[SerializeField]
	private TeamsBadgeConfig _badgeConfig; // 0x60
	[SerializeField]
	private GameObject[] _rankBgs; // 0x68
	[SerializeField]
	private GameObject _myTeamBg; // 0x70
	[SerializeField]
	private GameObject _defaultBg; // 0x78
	[SerializeField]
	private GameObject _defaultScoreBg; // 0x80
	[SerializeField]
	private GameObject _myTeamScoreBg; // 0x88
	[SerializeField]
	private ToolbarButton _toolbarButton; // 0x90
	[CompilerGenerated]
	private int <Id>k__BackingField; // 0x98
	private TeamArenaTeamViewModel _viewModel; // 0xA0

	// Properties
	public override Vector3 Size { get; }
	public override int Id { get; set; }

	// Methods

	// RVA: 0x296A3F4 Offset: 0x296A3F4 VA: 0x296A3F4 Slot: 9
	public override Vector3 get_Size() { }

	[CompilerGenerated]
	// RVA: 0x296A41C Offset: 0x296A41C VA: 0x296A41C Slot: 5
	public override int get_Id() { }

	[CompilerGenerated]
	// RVA: 0x296A424 Offset: 0x296A424 VA: 0x296A424 Slot: 6
	public override void set_Id(int value) { }

	// RVA: 0x296A42C Offset: 0x296A42C VA: 0x296A42C Slot: 7
	public override void Initialize() { }

	// RVA: 0x296A430 Offset: 0x296A430 VA: 0x296A430 Slot: 8
	public override void Recycle() { }

	// RVA: 0x296A4AC Offset: 0x296A4AC VA: 0x296A4AC Slot: 10
	public override void SetViewModel(ITeamArenaLeaderboardViewModel viewModel) { }

	// RVA: 0x296A6EC Offset: 0x296A6EC VA: 0x296A6EC
	private void ShowRank(int rank) { }

	// RVA: 0x296A7E8 Offset: 0x296A7E8 VA: 0x296A7E8
	private void OnEnable() { }

	// RVA: 0x296A874 Offset: 0x296A874 VA: 0x296A874
	private void OnDisable() { }

	// RVA: 0x296A900 Offset: 0x296A900 VA: 0x296A900
	private void OnTeamButtonSelected() { }

	// RVA: 0x296A97C Offset: 0x296A97C VA: 0x296A97C
	public void .ctor() { }
}

// Namespace: Modules.Contexts.Home.TeamArena.UI.Popups.TeamLeaderboard
[CreateAssetMenu(fileName = "TeamArenaTeamViewFactory", menuName = "Factory/TeamArenaTeamViewFactory")]