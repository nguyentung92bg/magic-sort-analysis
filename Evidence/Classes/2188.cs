public class TeamLeaderboardView : BasicView // TypeDefIndex: 2188
{
	// Fields
	[SerializeField]
	private BasicUIElement _uiElement; // 0x28
	[SerializeField]
	private TMP_Text _rankText; // 0x30
	[SerializeField]
	private TMP_Text _nameText; // 0x38
	[SerializeField]
	private TMP_Text _capacityText; // 0x40
	[SerializeField]
	private TMP_Text _scoreText; // 0x48
	[SerializeField]
	private SpriteRenderer _teamBadge; // 0x50
	[SerializeField]
	private GameObject[] _rankBgs; // 0x58
	[SerializeField]
	private TeamsBadgeConfig _badgeConfig; // 0x60
	[SerializeField]
	private Button _button; // 0x68
	private TeamsService _teamsService; // 0x70
	private string _teamId; // 0x78
	[CompilerGenerated]
	private int <Id>k__BackingField; // 0x80

	// Properties
	public override int Id { get; set; }
	public Vector3 Size { get; }

	// Methods

	[CompilerGenerated]
	// RVA: 0x345E2E4 Offset: 0x345E2E4 VA: 0x345E2E4 Slot: 5
	public override int get_Id() { }

	[CompilerGenerated]
	// RVA: 0x345E2EC Offset: 0x345E2EC VA: 0x345E2EC Slot: 6
	public override void set_Id(int value) { }

	// RVA: 0x345E2F4 Offset: 0x345E2F4 VA: 0x345E2F4
	public Vector3 get_Size() { }

	// RVA: 0x345E31C Offset: 0x345E31C VA: 0x345E31C Slot: 7
	public override void Initialize() { }

	// RVA: 0x345E320 Offset: 0x345E320 VA: 0x345E320 Slot: 8
	public override void Recycle() { }

	// RVA: 0x345E388 Offset: 0x345E388 VA: 0x345E388
	public void SetTeamData(LeaderboardTeam data, int rank) { }

	// RVA: 0x345E5B8 Offset: 0x345E5B8 VA: 0x345E5B8
	private void Awake() { }

	// RVA: 0x345E6A0 Offset: 0x345E6A0 VA: 0x345E6A0
	private void OnDestroy() { }

	// RVA: 0x345E72C Offset: 0x345E72C VA: 0x345E72C
	private void OnButtonSelected() { }

	// RVA: 0x345E7BC Offset: 0x345E7BC VA: 0x345E7BC
	public void .ctor() { }
}

// Namespace: Modules.Contexts.Home.Teams.Scripts.UI