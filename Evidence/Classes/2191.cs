public class RequestView : BasicView // TypeDefIndex: 2191
{
	// Fields
	[SerializeField]
	private UIElement _uiElement; // 0x28
	[SerializeField]
	private ProfileImageView _profileImageView; // 0x30
	[SerializeField]
	private TMP_Text _name; // 0x38
	[SerializeField]
	private TMP_Text _level; // 0x40
	[SerializeField]
	private Button _acceptButton; // 0x48
	[SerializeField]
	private Button _rejectButton; // 0x50
	[SerializeField]
	private ProfileFrameView _profileFrameView; // 0x58
	[SerializeField]
	private ProfileNameStyleView _profileNameStyleView; // 0x60
	private TeamJoinRequestInfo _request; // 0x68
	[CompilerGenerated]
	private int <Id>k__BackingField; // 0x70

	// Properties
	public override int Id { get; set; }
	public Vector3 Size { get; }

	// Methods

	[CompilerGenerated]
	// RVA: 0x345ED78 Offset: 0x345ED78 VA: 0x345ED78 Slot: 5
	public override int get_Id() { }

	[CompilerGenerated]
	// RVA: 0x345ED80 Offset: 0x345ED80 VA: 0x345ED80 Slot: 6
	public override void set_Id(int value) { }

	// RVA: 0x345DC28 Offset: 0x345DC28 VA: 0x345DC28
	public Vector3 get_Size() { }

	// RVA: 0x345ED88 Offset: 0x345ED88 VA: 0x345ED88 Slot: 7
	public override void Initialize() { }

	// RVA: 0x345ED8C Offset: 0x345ED8C VA: 0x345ED8C Slot: 8
	public override void Recycle() { }

	// RVA: 0x345DD5C Offset: 0x345DD5C VA: 0x345DD5C
	public void SetRequest(TeamJoinRequestInfo request) { }

	// RVA: 0x345EDF4 Offset: 0x345EDF4 VA: 0x345EDF4
	private void OnEnable() { }

	// RVA: 0x345EED4 Offset: 0x345EED4 VA: 0x345EED4
	private void OnDisable() { }

	// RVA: 0x345EFB4 Offset: 0x345EFB4 VA: 0x345EFB4
	private void OnAcceptButtonSelected() { }

	// RVA: 0x345F030 Offset: 0x345F030 VA: 0x345F030
	private void OnRejectButtonSelected() { }

	// RVA: 0x345F0AC Offset: 0x345F0AC VA: 0x345F0AC
	public void .ctor() { }
}

// Namespace: Modules.Contexts.Home.Teams.Scripts.UI
[CreateAssetMenu(fileName = "RequestViewFactory", menuName = "Factory/RequestViewFactory")]