public class TeamSummaryView : BasicView // TypeDefIndex: 2219
{
	// Fields
	[SerializeField]
	private UIElement _uiElement; // 0x28
	[SerializeField]
	private TMP_Text _nameText; // 0x30
	[SerializeField]
	private SpriteRenderer _teamIcon; // 0x38
	[SerializeField]
	private TMP_Text _capacityText; // 0x40
	[SerializeField]
	private Button _infoButton; // 0x48
	[SerializeField]
	private TeamsBadgeConfig _badgeConfig; // 0x50
	[SerializeField]
	private GameObject _pendingContainer; // 0x58
	[CompilerGenerated]
	private int <Id>k__BackingField; // 0x60
	private TeamViewModel _team; // 0x68

	// Properties
	public override int Id { get; set; }
	public Vector3 Size { get; }

	// Methods

	[CompilerGenerated]
	// RVA: 0x2F01FEC Offset: 0x2F01FEC VA: 0x2F01FEC Slot: 5
	public override int get_Id() { }

	[CompilerGenerated]
	// RVA: 0x2F01FF4 Offset: 0x2F01FF4 VA: 0x2F01FF4 Slot: 6
	public override void set_Id(int value) { }

	// RVA: 0x2F01BBC Offset: 0x2F01BBC VA: 0x2F01BBC
	public Vector3 get_Size() { }

	// RVA: 0x2F01FFC Offset: 0x2F01FFC VA: 0x2F01FFC Slot: 7
	public override void Initialize() { }

	// RVA: 0x2F02000 Offset: 0x2F02000 VA: 0x2F02000 Slot: 8
	public override void Recycle() { }

	// RVA: 0x2F01CF0 Offset: 0x2F01CF0 VA: 0x2F01CF0
	public void SetModel(TeamViewModel teamData) { }

	// RVA: 0x2F0204C Offset: 0x2F0204C VA: 0x2F0204C
	private void Awake() { }

	// RVA: 0x2F020D8 Offset: 0x2F020D8 VA: 0x2F020D8
	private void OnDestroy() { }

	// RVA: 0x2F02164 Offset: 0x2F02164 VA: 0x2F02164
	private void OnInfoButtonSelected() { }

	// RVA: 0x2F02328 Offset: 0x2F02328 VA: 0x2F02328
	public void .ctor() { }
}

// Namespace: Modules.Contexts.Home.Teams.Scripts.UI
[CreateAssetMenu(fileName = "TeamSummaryViewFactory", menuName = "Factory/TeamSummaryViewFactory")]