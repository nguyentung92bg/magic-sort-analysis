public class TeamMagicPassChatMessageView : TeamMessageView // TypeDefIndex: 3969
{
	// Fields
	[SerializeField]
	private Button _claimButton; // 0x38
	[SerializeField]
	private Transform _claimedButtonParent; // 0x40
	[SerializeField]
	private ProfileNameStyleView _nameStyleView; // 0x48
	[SerializeField]
	private TextMeshPro _coinAmountText; // 0x50
	[SerializeField]
	private bool _centerNameText; // 0x58
	[SerializeField]
	private TextMeshPro _nameText; // 0x60
	[SerializeField]
	private float _sizeOfSuffix; // 0x68
	[SerializeField]
	private float _containerSize; // 0x6C
	private MagicPassService _magicPassService; // 0x70
	private TeamChatService _teamChatService; // 0x78
	private TeamsChatMessageViewModel _viewModel; // 0x80

	// Methods

	// RVA: 0x38EE9DC Offset: 0x38EE9DC VA: 0x38EE9DC Slot: 10
	public override void SetMessage(TeamsChatMessageViewModel message) { }

	[Button]
	// RVA: 0x38EEBAC Offset: 0x38EEBAC VA: 0x38EEBAC
	private void CenterNameText(string userName) { }

	// RVA: 0x38EED1C Offset: 0x38EED1C VA: 0x38EED1C
	private void Awake() { }

	// RVA: 0x38EEE90 Offset: 0x38EEE90 VA: 0x38EEE90
	private void OnDestroy() { }

	// RVA: 0x38EEF64 Offset: 0x38EEF64 VA: 0x38EEF64
	private void OnClaimButtonSelected() { }

	[Button]
	// RVA: 0x38EF0D0 Offset: 0x38EF0D0 VA: 0x38EF0D0
	private void ShowClaimAnimation() { }

	// RVA: 0x38EF208 Offset: 0x38EF208 VA: 0x38EF208
	public void .ctor() { }
}

// Namespace: Modules.Contexts.Home.MagicLab.Scripts
[Serializable]