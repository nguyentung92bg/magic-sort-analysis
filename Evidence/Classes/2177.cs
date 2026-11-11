public class TeamHelpChatMessageView : TeamMessageView // TypeDefIndex: 2177
{
	// Fields
	[SerializeField]
	private TMP_Text _userNameText; // 0x38
	[SerializeField]
	private TMP_Text _progressText; // 0x40
	[SerializeField]
	private ProfileImageView _profileImageView; // 0x48
	[SerializeField]
	private ProfileFrameView _profileFrameView; // 0x50
	[SerializeField]
	private ProfileNameStyleView _profileNameStyleView; // 0x58
	[SerializeField]
	private SpriteRenderer _fillRenderer; // 0x60
	[SerializeField]
	private float _fillMaxWidth; // 0x68
	[SerializeField]
	private Button _helpButton; // 0x70
	[SerializeField]
	private Button _helpButtonDisabled; // 0x78
	[SerializeField]
	private GameObject _helpContainer; // 0x80
	[SerializeField]
	private GameObject _helpBlocker; // 0x88
	[SerializeField]
	private Button _profileButton; // 0x90
	private TeamsChatMessageViewModel _viewModel; // 0x98
	private const float MaxNameWidth = 3;

	// Methods

	// RVA: 0x34592C8 Offset: 0x34592C8 VA: 0x34592C8 Slot: 10
	public override void SetMessage(TeamsChatMessageViewModel message) { }

	// RVA: 0x3459764 Offset: 0x3459764 VA: 0x3459764 Slot: 8
	public override void Recycle() { }

	[AsyncStateMachine(typeof(TeamHelpChatMessageView.<RefreshView>d__16))]
	// RVA: 0x3459840 Offset: 0x3459840 VA: 0x3459840 Slot: 11
	public override Task RefreshView() { }

	// RVA: 0x3459930 Offset: 0x3459930 VA: 0x3459930
	private void Awake() { }

	// RVA: 0x3459B60 Offset: 0x3459B60 VA: 0x3459B60
	private void OnDestroy() { }

	// RVA: 0x3459DB4 Offset: 0x3459DB4 VA: 0x3459DB4
	private void OnProfileInfoUpdated() { }

	// RVA: 0x3459E0C Offset: 0x3459E0C VA: 0x3459E0C
	private void OnProfileButtonsSelected() { }

	// RVA: 0x3459EAC Offset: 0x3459EAC VA: 0x3459EAC
	private void OnHelpButtonSelected() { }

	// RVA: 0x345A004 Offset: 0x345A004 VA: 0x345A004
	private void OnDisabledHelpButtonSelected() { }

	// RVA: 0x34594F4 Offset: 0x34594F4 VA: 0x34594F4
	private void InitializeNameText() { }

	// RVA: 0x345968C Offset: 0x345968C VA: 0x345968C
	private int GetRequiredHelpCount(TeamsChatMessageViewModel viewModel) { }

	// RVA: 0x345A11C Offset: 0x345A11C VA: 0x345A11C
	public void .ctor() { }

	[CompilerGenerated]
	// RVA: 0x345A12C Offset: 0x345A12C VA: 0x345A12C
	private void <RefreshView>b__16_0(float val) { }
}

// Namespace: Modules.Contexts.Home.Teams.Scripts.UI