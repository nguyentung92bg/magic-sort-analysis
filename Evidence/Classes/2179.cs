public class TeamsCardRequestMessageView : TeamMessageView // TypeDefIndex: 2179
{
	// Fields
	[SerializeField]
	private CollectionThemeDatabase _collectionThemeDatabase; // 0x38
	[SerializeField]
	private TMP_Text _userNameText; // 0x40
	[SerializeField]
	private TMP_Text _remainingTimeText; // 0x48
	[SerializeField]
	private TMP_Text _dailyLimitText; // 0x50
	[SerializeField]
	private TMP_Text _titleHelpSuffixText; // 0x58
	[SerializeField]
	private TMP_Text _messageHelpSuffixText; // 0x60
	[SerializeField]
	private ProfileImageView _profileImageView; // 0x68
	[SerializeField]
	private ProfileFrameView _profileFrameView; // 0x70
	[SerializeField]
	private ProfileNameStyleView _profileNameStyleView; // 0x78
	[SerializeField]
	private TMP_Text _defaultUserNameTextInProfile; // 0x80
	[SerializeField]
	private Button _sendButton; // 0x88
	[SerializeField]
	private Button _sendDisabledButton; // 0x90
	[SerializeField]
	private Button _profileButton; // 0x98
	[SerializeField]
	private CollectionCardView _collectionCardView; // 0xA0
	[SerializeField]
	private SpriteRenderer _background; // 0xA8
	[SerializeField]
	private SpriteRenderer _innerBackground; // 0xB0
	[SerializeField]
	private SpriteRenderer _timerBackground; // 0xB8
	private CollectionThemeSpriteLibrary _collectionThemeSpriteLibrary; // 0xC0
	private TeamsChatMessageViewModel _viewModel; // 0xC8
	private CollectionService _collectionService; // 0xD0
	private TeamsService _teamsService; // 0xD8
	private const float MaxNameWidth = 3;

	// Methods

	// RVA: 0x345A85C Offset: 0x345A85C VA: 0x345A85C Slot: 10
	public override void SetMessage(TeamsChatMessageViewModel message) { }

	// RVA: 0x345B26C Offset: 0x345B26C VA: 0x345B26C Slot: 8
	public override void Recycle() { }

	// RVA: 0x345B28C Offset: 0x345B28C VA: 0x345B28C
	private void Awake() { }

	// RVA: 0x345B55C Offset: 0x345B55C VA: 0x345B55C
	private void OnDestroy() { }

	// RVA: 0x345B78C Offset: 0x345B78C VA: 0x345B78C
	private void OnEnable() { }

	// RVA: 0x345B86C Offset: 0x345B86C VA: 0x345B86C
	private void OnDisable() { }

	// RVA: 0x345B94C Offset: 0x345B94C VA: 0x345B94C
	private void OnProfileInfoUpdated() { }

	// RVA: 0x345B980 Offset: 0x345B980 VA: 0x345B980
	private void OnProfileButtonsSelected() { }

	// RVA: 0x345BA20 Offset: 0x345BA20 VA: 0x345BA20
	private void OnSendButtonSelected() { }

	// RVA: 0x345BAC4 Offset: 0x345BAC4 VA: 0x345BAC4
	private void OnSendDisabledButtonSelected() { }

	// RVA: 0x345AB2C Offset: 0x345AB2C VA: 0x345AB2C
	private void InitializeNameText() { }

	// RVA: 0x345ADA8 Offset: 0x345ADA8 VA: 0x345ADA8
	private void InitializeRemainingTimeText() { }

	// RVA: 0x345AFA8 Offset: 0x345AFA8 VA: 0x345AFA8
	private void InitializeSendingLimitText() { }

	// RVA: 0x345B148 Offset: 0x345B148 VA: 0x345B148
	private void InitializeHelpButtons() { }

	// RVA: 0x345BCA0 Offset: 0x345BCA0 VA: 0x345BCA0
	private void OnCardInventoryUpdated() { }

	// RVA: 0x345BCB8 Offset: 0x345BCB8 VA: 0x345BCB8
	private void OnSentCardCountUpdated() { }

	// RVA: 0x345BCE8 Offset: 0x345BCE8 VA: 0x345BCE8
	public void .ctor() { }
}

// Namespace: Modules.Contexts.Home.Teams.Scripts.UI