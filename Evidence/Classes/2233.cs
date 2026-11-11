public class FreeLiveView : BasicView // TypeDefIndex: 2233
{
	// Fields
	[SerializeField]
	private BasicUIElement _uiElement; // 0x28
	[SerializeField]
	private ProfileImageView _profileImageView; // 0x30
	[SerializeField]
	private ProfileFrameView _profileFrameView; // 0x38
	[SerializeField]
	private ProfileNameStyleView _profileNameStyleView; // 0x40
	[SerializeField]
	private TMP_Text _userName; // 0x48
	[SerializeField]
	private Button _addButton; // 0x50
	[CompilerGenerated]
	private int <Id>k__BackingField; // 0x58
	private FreeLiveViewModel _viewModel; // 0x60
	private TeamsService _teamsService; // 0x68
	private InventoryService _inventoryService; // 0x70

	// Properties
	public override int Id { get; set; }

	// Methods

	[CompilerGenerated]
	// RVA: 0x2F05160 Offset: 0x2F05160 VA: 0x2F05160 Slot: 5
	public override int get_Id() { }

	[CompilerGenerated]
	// RVA: 0x2F05168 Offset: 0x2F05168 VA: 0x2F05168 Slot: 6
	public override void set_Id(int value) { }

	// RVA: 0x2F05170 Offset: 0x2F05170 VA: 0x2F05170
	public void SetViewModel(FreeLiveViewModel viewModel) { }

	// RVA: 0x2F052BC Offset: 0x2F052BC VA: 0x2F052BC Slot: 7
	public override void Initialize() { }

	// RVA: 0x2F052C0 Offset: 0x2F052C0 VA: 0x2F052C0 Slot: 8
	public override void Recycle() { }

	// RVA: 0x2F05328 Offset: 0x2F05328 VA: 0x2F05328
	public Vector3 GetSize() { }

	// RVA: 0x2F05350 Offset: 0x2F05350 VA: 0x2F05350
	private void Awake() { }

	// RVA: 0x2F0547C Offset: 0x2F0547C VA: 0x2F0547C
	private void OnDestroy() { }

	// RVA: 0x2F05508 Offset: 0x2F05508 VA: 0x2F05508
	private void OnAddButtonSelect() { }

	// RVA: 0x2F056EC Offset: 0x2F056EC VA: 0x2F056EC
	public void .ctor() { }
}

// Namespace: Modules.Contexts.Home.Teams.Scripts.UI.FreeLives