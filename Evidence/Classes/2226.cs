public class UserSummaryView : BasicView // TypeDefIndex: 2226
{
	// Fields
	[SerializeField]
	private UIElement _uiElement; // 0x28
	[SerializeField]
	private TMP_Text _nameText; // 0x30
	[SerializeField]
	private TMP_Text _rankText; // 0x38
	[SerializeField]
	private TMP_Text _memberRoleText; // 0x40
	[SerializeField]
	private TMP_Text _levelText; // 0x48
	[SerializeField]
	private TMP_Text _helpText; // 0x50
	[SerializeField]
	private ProfileImageView _profileImage; // 0x58
	[SerializeField]
	private GameObject[] _helpItems; // 0x60
	[SerializeField]
	private SpriteRenderer _rankBgRenderer; // 0x68
	[SerializeField]
	private Sprite[] _rankSprites; // 0x70
	[SerializeField]
	private Button _button; // 0x78
	[SerializeField]
	private Transform _tooltipRef; // 0x80
	[SerializeField]
	private GameObject _adminIndicatorContainer; // 0x88
	[SerializeField]
	private RectTransform _userNameRect; // 0x90
	[SerializeField]
	private float _memberUserNameYPos; // 0x98
	[SerializeField]
	private float _leaderUserNameYPos; // 0x9C
	[SerializeField]
	private SpriteRenderer _tokenImage; // 0xA0
	[SerializeField]
	private float _nameDefaultWidth; // 0xA8
	[SerializeField]
	private float _nameTokenWidth; // 0xAC
	[SerializeField]
	private float _memberUserNameXPos; // 0xB0
	[SerializeField]
	private float _memberUserNameTokenXPos; // 0xB4
	[SerializeField]
	private ProfileFrameView _frameView; // 0xB8
	[SerializeField]
	private ProfileNameStyleView _nameStyleView; // 0xC0
	[CompilerGenerated]
	private int <Id>k__BackingField; // 0xC8
	private TeamMemberViewModel _userData; // 0xD0

	// Properties
	public Vector3 Size { get; }
	public override int Id { get; set; }

	// Methods

	// RVA: 0x2F03314 Offset: 0x2F03314 VA: 0x2F03314
	public Vector3 get_Size() { }

	[CompilerGenerated]
	// RVA: 0x2F0333C Offset: 0x2F0333C VA: 0x2F0333C Slot: 5
	public override int get_Id() { }

	[CompilerGenerated]
	// RVA: 0x2F03344 Offset: 0x2F03344 VA: 0x2F03344 Slot: 6
	public override void set_Id(int value) { }

	// RVA: 0x2F0334C Offset: 0x2F0334C VA: 0x2F0334C Slot: 7
	public override void Initialize() { }

	// RVA: 0x2F03350 Offset: 0x2F03350 VA: 0x2F03350
	public void SetModel(TeamMemberViewModel userData, bool showHelps, int rank) { }

	// RVA: 0x2F03D5C Offset: 0x2F03D5C VA: 0x2F03D5C Slot: 8
	public override void Recycle() { }

	// RVA: 0x2F036F4 Offset: 0x2F036F4 VA: 0x2F036F4
	private void InitializeHelpItems(bool showHelps) { }

	// RVA: 0x2F03644 Offset: 0x2F03644 VA: 0x2F03644
	private void InitializeRank(int rank) { }

	// RVA: 0x2F03478 Offset: 0x2F03478 VA: 0x2F03478
	private void SetMemberText(MemberRole memberRole) { }

	// RVA: 0x2F03DB8 Offset: 0x2F03DB8 VA: 0x2F03DB8
	private void SetUserNameTextPos(float yPos) { }

	// RVA: 0x2F03E34 Offset: 0x2F03E34 VA: 0x2F03E34
	private void InitializeMemberRoleTextWidth() { }

	// RVA: 0x2F03EFC Offset: 0x2F03EFC VA: 0x2F03EFC
	private void Awake() { }

	// RVA: 0x2F03F88 Offset: 0x2F03F88 VA: 0x2F03F88
	private void OnDestroy() { }

	// RVA: 0x2F04014 Offset: 0x2F04014 VA: 0x2F04014
	private void OnSelected() { }

	// RVA: 0x2EFE16C Offset: 0x2EFE16C VA: 0x2EFE16C
	public void UpdateRole() { }

	// RVA: 0x2F0375C Offset: 0x2F0375C VA: 0x2F0375C
	private void SetTokenImage(TeamMemberViewModel userData) { }

	// RVA: 0x2F03924 Offset: 0x2F03924 VA: 0x2F03924
	private void SetFrameView(TeamMemberViewModel viewModel) { }

	// RVA: 0x2F03A24 Offset: 0x2F03A24 VA: 0x2F03A24
	private void SetNameText(TeamMemberViewModel viewModel) { }

	// RVA: 0x2F040BC Offset: 0x2F040BC VA: 0x2F040BC
	public void .ctor() { }
}

// Namespace: Modules.Contexts.Home.Teams.Scripts.UI