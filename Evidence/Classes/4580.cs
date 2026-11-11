public class CollectionCardSendRequestView : MonoBehaviour // TypeDefIndex: 4580
{
	// Fields
	[SerializeField]
	private Transform _viewsContainer; // 0x18
	[SerializeField]
	private Transform _sendAvailableView; // 0x20
	[SerializeField]
	private Transform _sendNoLimitView; // 0x28
	[SerializeField]
	private Transform _sendNoDuplicateView; // 0x30
	[SerializeField]
	private Transform _sendGoldCardView; // 0x38
	[SerializeField]
	private Transform _requestAvailableView; // 0x40
	[SerializeField]
	private Transform _requestNoLimitView; // 0x48
	[SerializeField]
	private Transform _requestGoldCardView; // 0x50
	[SerializeField]
	private Transform _cardMovePoint; // 0x58
	[SerializeField]
	private TextMeshPro[] _dailySendLimitTexts; // 0x60
	[SerializeField]
	private TextMeshPro[] _dailyRequestLimitTexts; // 0x68
	[SerializeField]
	private Button[] _sendRequestButtons; // 0x70
	[SerializeField]
	private Button _closeButton; // 0x78
	[SerializeField]
	private CollectionAnimationConfig _animationConfig; // 0x80
	[SerializeField]
	private ClockAnimationView _clockAnimationView; // 0x88
	[SerializeField]
	private TextMeshPro _timerText; // 0x90
	[SerializeField]
	private Transform _timerParent; // 0x98
	private CollectionCardView _cardView; // 0xA0
	private CollectionCardData _cardData; // 0xA8
	private CollectionService _service; // 0xB0
	private TeamsService _teamsService; // 0xB8
	private GameObject _duplicatedCardObject; // 0xC0
	private Vector3 _cardInitialPosition; // 0xC8
	private float _cardInitialScale; // 0xD4
	private const string daily_limit_localization_term = "CollectionDailyLimit";
	private const string card_sent_localization_term = "CardSent";
	private const string card_requested_localization_term = "CardRequested";
	private const string you_can_send_localization_term = "CollectionYouCanSend";
	private const string send_duplicate_localization_term = "CollectionSendDuplicate";
	private const string already_requested_localization_term = "CollectionAlreadyRequested";
	private const string need_join_team_localization_term = "CollectionNeedJoinTeam";

	// Methods

	// RVA: 0x3779080 Offset: 0x3779080 VA: 0x3779080
	public void Initialize(CollectionCardView cardView, CollectionCardData cardData) { }

	// RVA: 0x3779660 Offset: 0x3779660 VA: 0x3779660
	private void OnEnable() { }

	// RVA: 0x3779738 Offset: 0x3779738 VA: 0x3779738
	private void OnDisable() { }

	// RVA: 0x3779810 Offset: 0x3779810 VA: 0x3779810
	private void OnCloseButtonClicked() { }

	// RVA: 0x37792C8 Offset: 0x37792C8 VA: 0x37792C8
	private void MoveCardViewToCenter() { }

	// RVA: 0x3779814 Offset: 0x3779814 VA: 0x3779814
	private void MoveCardViewBack() { }

	// RVA: 0x3779188 Offset: 0x3779188 VA: 0x3779188
	private void UpdateViewState() { }

	// RVA: 0x3779CD0 Offset: 0x3779CD0 VA: 0x3779CD0
	private void UpdateRequestTimer(CardSendRequestState cardState) { }

	// RVA: 0x3779A70 Offset: 0x3779A70 VA: 0x3779A70
	private void UpdateDailyLimitTexts() { }

	// RVA: 0x3779ED8 Offset: 0x3779ED8 VA: 0x3779ED8
	private void OnSendRequestButtonClicked() { }

	// RVA: 0x377A3C0 Offset: 0x377A3C0 VA: 0x377A3C0
	public void .ctor() { }

	[CompilerGenerated]
	// RVA: 0x377A3C8 Offset: 0x377A3C8 VA: 0x377A3C8
	private void <MoveCardViewToCenter>b__35_0() { }

	[CompilerGenerated]
	// RVA: 0x377A4C8 Offset: 0x377A4C8 VA: 0x377A4C8
	private void <MoveCardViewBack>b__36_0() { }
}

// Namespace: 
[CompilerGenerated]