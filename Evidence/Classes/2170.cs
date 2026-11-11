public class TeamChatController : MonoBehaviour // TypeDefIndex: 2170
{
	// Fields
	[SerializeField]
	private float _contentPlacementOffset; // 0x18
	[SerializeField]
	private TMP_Text _teamNameText; // 0x20
	[SerializeField]
	private SpriteRenderer _teamBadgeRenderer; // 0x28
	[SerializeField]
	private Button _teamInfoButton; // 0x30
	[SerializeField]
	private Button _chatButton; // 0x38
	[SerializeField]
	private Button _newMessageButton; // 0x40
	[SerializeField]
	private TeamChatInputController _chatInput; // 0x48
	[SerializeField]
	private ScrollBar _scrollBar; // 0x50
	[SerializeField]
	private BasicScrollAdapter _scrollAdapter; // 0x58
	[SerializeField]
	private TeamChatScrollViewAdapter _messageViewAdapter; // 0x60
	[SerializeField]
	private TeamChatCardRequestController _cardRequestController; // 0x68
	[SerializeField]
	private TeamsChatHelpRequestController _helpRequestController; // 0x70
	[SerializeField]
	private TeamsBadgeConfig _badgeConfig; // 0x78
	[SerializeField]
	private TeamChatEventController _eventController; // 0x80
	[SerializeField]
	private GameObject _requestContainer; // 0x88
	[SerializeField]
	private TMP_Text _requestText; // 0x90
	[SerializeField]
	private GameObject _loadingIndicator; // 0x98
	[SerializeField]
	private TeamArenaInfoView _arenaInfoView; // 0xA0
	private TeamsService _teamsService; // 0xA8
	private TeamArenaService _teamArenaService; // 0xB0
	private TeamChatService _chatService; // 0xB8
	private WebSocketManager _webSocketManager; // 0xC0
	private KeyboardService _keyboardService; // 0xC8
	private MagicPassService _magicPassService; // 0xD0
	private Camera _mainCam; // 0xD8
	private Vector3 _defaultScrollPosition; // 0xE0
	private bool _isShowed; // 0xEC

	// Methods

	// RVA: 0x3454DF4 Offset: 0x3454DF4 VA: 0x3454DF4
	public void Initialize() { }

	// RVA: 0x34556E4 Offset: 0x34556E4 VA: 0x34556E4
	public void Dispose() { }

	// RVA: 0x3455CCC Offset: 0x3455CCC VA: 0x3455CCC
	public void Show() { }

	// RVA: 0x34561EC Offset: 0x34561EC VA: 0x34561EC
	public void Hide() { }

	// RVA: 0x3456408 Offset: 0x3456408 VA: 0x3456408
	public void MoveToBottom(float duration = 0) { }

	// RVA: 0x34564A4 Offset: 0x34564A4 VA: 0x34564A4
	private void TeamChatRefreshStarted() { }

	// RVA: 0x34564C4 Offset: 0x34564C4 VA: 0x34564C4
	private void TeamChatUpdated() { }

	// RVA: 0x34565D8 Offset: 0x34565D8 VA: 0x34565D8
	private void OnMessageReceived(TeamsChatMessageViewModel message) { }

	// RVA: 0x3456AEC Offset: 0x3456AEC VA: 0x3456AEC
	private void OnChatButtonSelected() { }

	// RVA: 0x3456BEC Offset: 0x3456BEC VA: 0x3456BEC
	private void OnMessagesButtonSelected() { }

	// RVA: 0x3456C4C Offset: 0x3456C4C VA: 0x3456C4C
	private void OnTeamInfoButtonSelected() { }

	[AsyncStateMachine(typeof(TeamChatController.<HelpMessageUpdated>d__38))]
	// RVA: 0x3456CF0 Offset: 0x3456CF0 VA: 0x3456CF0
	private void HelpMessageUpdated(TeamsChatMessageViewModel viewModel) { }

	// RVA: 0x3456DC8 Offset: 0x3456DC8 VA: 0x3456DC8
	private void OnMessageRemoved(TeamsChatMessageViewModel viewModel) { }

	// RVA: 0x3456F74 Offset: 0x3456F74 VA: 0x3456F74
	private void OnSocketReconnecting() { }

	// RVA: 0x3456F94 Offset: 0x3456F94 VA: 0x3456F94
	private void OnSocketReconnected() { }

	// RVA: 0x3456FB4 Offset: 0x3456FB4 VA: 0x3456FB4
	private void OnScrollDragged() { }

	// RVA: 0x345702C Offset: 0x345702C VA: 0x345702C
	private void OnRequestCountUpdated() { }

	// RVA: 0x345600C Offset: 0x345600C VA: 0x345600C
	private void SetRequestCount() { }

	[Button]
	// RVA: 0x3457030 Offset: 0x3457030 VA: 0x3457030
	private void OnKeyboardHeightChanged(int heightPx) { }

	// RVA: 0x34570BC Offset: 0x34570BC VA: 0x34570BC
	private void MoveContentByKeyboardIntersection(int keyboardHeight, float duration = 0) { }

	// RVA: 0x34574F0 Offset: 0x34574F0 VA: 0x34574F0
	public bool ShowFirstAvailableInteractableMessageAbove() { }

	// RVA: 0x3456830 Offset: 0x3456830 VA: 0x3456830
	private void PlayIntroAnimByMessageId(string messageId, bool setDelay = False) { }

	// RVA: 0x3457A00 Offset: 0x3457A00 VA: 0x3457A00
	private void OnApplicationFocus(bool hasFocus) { }

	// RVA: 0x3457A1C Offset: 0x3457A1C VA: 0x3457A1C
	public void SetupEmptyMessageForEvents() { }

	// RVA: 0x3457F8C Offset: 0x3457F8C VA: 0x3457F8C
	private void OnPageSelected(PageType pageType) { }

	// RVA: 0x3457FB8 Offset: 0x3457FB8 VA: 0x3457FB8
	public void .ctor() { }
}

// Namespace: Modules.Contexts.Home.Teams.Scripts.UI