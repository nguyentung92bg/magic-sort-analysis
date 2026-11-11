public class TeamChatService : IService, IInitializable, IDisposable, IIntervalUpdate, ILateLoginService, IRestartableService // TypeDefIndex: 2066
{
	// Fields
	private TeamsService _teamsService; // 0x10
	private TeamsRemoteService _remoteService; // 0x18
	private WebSocketManager _webSocketManager; // 0x20
	private BackendEnvironmentConfig _backendEnvironmentConfig; // 0x28
	private IPlayerService _playerService; // 0x30
	private ProfileSpriteCacheService _profileSpriteCacheService; // 0x38
	private CustomUpdater _customUpdater; // 0x40
	private CollectionService _collectionService; // 0x48
	private RewardService _rewardService; // 0x50
	private TeamsDataService _teamsDataService; // 0x58
	private MagicPassService _magicPassService; // 0x60
	private InventoryService _inventoryService; // 0x68
	private UserProfileService _userProfileService; // 0x70
	[CompilerGenerated]
	private bool <IsRefreshing>k__BackingField; // 0x78
	private List<TeamsChatMessageViewModel> _chatHistory; // 0x80
	private Dictionary<string, TeamsChatMessageViewModel> _helpMessages; // 0x88
	private Dictionary<string, TeamsChatMessageViewModel> _cardRequests; // 0x90
	private Dictionary<string, TeamsChatMessageViewModel> _magicPassMessages; // 0x98
	private string _userPublicId; // 0xA0
	private long _sessionMessageOrder; // 0xA8
	private long _lastSentMessageOrder; // 0xB0
	private List<long> _pendingAcks; // 0xB8
	private DateTime _outOfOrderDetectionTime; // 0xC0
	private bool _reconnectingEnabled; // 0xC8
	private Dictionary<long, DateTime> _pendingMessageTimestamps; // 0xD0
	private const float MessageAckTimeout = 5;
	[CompilerGenerated]
	private Action OnTeamChatUpdated; // 0xD8
	[CompilerGenerated]
	private Action<TeamsChatMessageViewModel> OnMessageReceived; // 0xE0
	[CompilerGenerated]
	private Action<TeamsChatMessageViewModel> OnMessageRemoved; // 0xE8
	[CompilerGenerated]
	private Action<TeamsChatMessageViewModel> OnMessageSent; // 0xF0
	[CompilerGenerated]
	private Action<string, string> OnCardSent; // 0xF8
	[CompilerGenerated]
	private Action OnRefreshStarted; // 0x100

	// Properties
	public bool IsRefreshing { get; set; }

	// Methods

	[CompilerGenerated]
	// RVA: 0x35A1DC8 Offset: 0x35A1DC8 VA: 0x35A1DC8
	public bool get_IsRefreshing() { }

	[CompilerGenerated]
	// RVA: 0x35A1DD0 Offset: 0x35A1DD0 VA: 0x35A1DD0
	private void set_IsRefreshing(bool value) { }

	[CompilerGenerated]
	// RVA: 0x35A1DDC Offset: 0x35A1DDC VA: 0x35A1DDC
	public void add_OnTeamChatUpdated(Action value) { }

	[CompilerGenerated]
	// RVA: 0x35A1E78 Offset: 0x35A1E78 VA: 0x35A1E78
	public void remove_OnTeamChatUpdated(Action value) { }

	[CompilerGenerated]
	// RVA: 0x35A1F14 Offset: 0x35A1F14 VA: 0x35A1F14
	public void add_OnMessageReceived(Action<TeamsChatMessageViewModel> value) { }

	[CompilerGenerated]
	// RVA: 0x35A1FC4 Offset: 0x35A1FC4 VA: 0x35A1FC4
	public void remove_OnMessageReceived(Action<TeamsChatMessageViewModel> value) { }

	[CompilerGenerated]
	// RVA: 0x35A2074 Offset: 0x35A2074 VA: 0x35A2074
	public void add_OnMessageRemoved(Action<TeamsChatMessageViewModel> value) { }

	[CompilerGenerated]
	// RVA: 0x35A2124 Offset: 0x35A2124 VA: 0x35A2124
	public void remove_OnMessageRemoved(Action<TeamsChatMessageViewModel> value) { }

	[CompilerGenerated]
	// RVA: 0x35A21D4 Offset: 0x35A21D4 VA: 0x35A21D4
	public void add_OnMessageSent(Action<TeamsChatMessageViewModel> value) { }

	[CompilerGenerated]
	// RVA: 0x35A2284 Offset: 0x35A2284 VA: 0x35A2284
	public void remove_OnMessageSent(Action<TeamsChatMessageViewModel> value) { }

	[CompilerGenerated]
	// RVA: 0x35A2334 Offset: 0x35A2334 VA: 0x35A2334
	public void add_OnCardSent(Action<string, string> value) { }

	[CompilerGenerated]
	// RVA: 0x35A23E4 Offset: 0x35A23E4 VA: 0x35A23E4
	public void remove_OnCardSent(Action<string, string> value) { }

	[CompilerGenerated]
	// RVA: 0x35A2494 Offset: 0x35A2494 VA: 0x35A2494
	public void add_OnRefreshStarted(Action value) { }

	[CompilerGenerated]
	// RVA: 0x35A2534 Offset: 0x35A2534 VA: 0x35A2534
	public void remove_OnRefreshStarted(Action value) { }

	// RVA: 0x35A25D4 Offset: 0x35A25D4 VA: 0x35A25D4
	public void .ctor(TeamsService teamsService, TeamsRemoteService remoteService, WebSocketManager webSocketManager, BackendEnvironmentConfig backendEnvironmentConfig, IPlayerService playerService, ProfileSpriteCacheService profileSpriteCacheService, CustomUpdater customUpdater, CollectionService collectionService, RewardService rewardService, TeamsDataService dataService, MagicPassService magicPassService, InventoryService inventoryService, UserProfileService userProfileService) { }

	// RVA: 0x35A2798 Offset: 0x35A2798 VA: 0x35A2798 Slot: 4
	public void Initialize() { }

	// RVA: 0x35A2D20 Offset: 0x35A2D20 VA: 0x35A2D20 Slot: 5
	public void Dispose() { }

	// RVA: 0x35A3004 Offset: 0x35A3004 VA: 0x35A3004
	public void DisconnectFromChat() { }

	// RVA: 0x35A3024 Offset: 0x35A3024 VA: 0x35A3024
	public void SendMessage(string content) { }

	// RVA: 0x35A34A4 Offset: 0x35A34A4 VA: 0x35A34A4
	public List<TeamsChatMessageViewModel> GetChatHistory() { }

	// RVA: 0x35A3520 Offset: 0x35A3520 VA: 0x35A3520
	public void SetReconnectingEnabled(bool enabled) { }

	// RVA: 0x35A352C Offset: 0x35A352C VA: 0x35A352C
	public void RequestHelp() { }

	// RVA: 0x35A3870 Offset: 0x35A3870 VA: 0x35A3870
	public bool SendCardRequest(string cardId) { }

	// RVA: 0x35A3B54 Offset: 0x35A3B54 VA: 0x35A3B54
	public void SendCard(string cardId, string requestMessageId, string receiverId) { }

	// RVA: 0x35A3208 Offset: 0x35A3208 VA: 0x35A3208
	private string SendMessage(TeamChatMessage message) { }

	[AsyncStateMachine(typeof(TeamChatService.<RefreshChatAsync>d__58))]
	// RVA: 0x35A4904 Offset: 0x35A4904 VA: 0x35A4904
	private Task RefreshChatAsync() { }

	// RVA: 0x35A49F0 Offset: 0x35A49F0 VA: 0x35A49F0
	private void RefreshChat() { }

	// RVA: 0x35A49F4 Offset: 0x35A49F4 VA: 0x35A49F4
	private void InitializeChat(List<SocketMessage<TeamChatMessage>> history) { }

	// RVA: 0x35A43C4 Offset: 0x35A43C4 VA: 0x35A43C4
	private void ProcessReceivedMessage(TeamsChatMessageViewModel viewModel, string messageId, bool fireEvent = True) { }

	// RVA: 0x35A53B0 Offset: 0x35A53B0 VA: 0x35A53B0
	private void TryRemoveHelpMessageIfMaxedOut(TeamsChatMessageViewModel helpMessage) { }

	// RVA: 0x35A4FE4 Offset: 0x35A4FE4 VA: 0x35A4FE4
	private void RemoveHelpRequestFromSameUser(TeamsChatMessageViewModel viewModel, bool fireEvent = True) { }

	// RVA: 0x35A5450 Offset: 0x35A5450 VA: 0x35A5450
	private void RemoveCardRequest(TeamsChatMessageViewModel cardSent, bool fireEvent = True) { }

	// RVA: 0x35A55B0 Offset: 0x35A55B0 VA: 0x35A55B0
	private void OnSocketOpened() { }

	// RVA: 0x35A58D4 Offset: 0x35A58D4 VA: 0x35A58D4
	private void TeamChatMessageReceived(SocketMessage<TeamChatMessage> message) { }

	// RVA: 0x35A3F9C Offset: 0x35A3F9C VA: 0x35A3F9C
	private void AddToPendingAcks(SocketMessage<TeamChatMessage> message) { }

	// RVA: 0x35A594C Offset: 0x35A594C VA: 0x35A594C
	private void RemoveFromPendingAcks(SocketMessage<TeamChatMessage> message) { }

	// RVA: 0x35A40AC Offset: 0x35A40AC VA: 0x35A40AC
	private TeamsChatMessageViewModel GetViewModel(SocketMessage<TeamChatMessage> message) { }

	// RVA: 0x35A5CF0 Offset: 0x35A5CF0 VA: 0x35A5CF0
	private void ReconnectToChat() { }

	// RVA: 0x35A5D74 Offset: 0x35A5D74 VA: 0x35A5D74
	public void SupportHelp(TeamsChatMessageViewModel viewModel) { }

	// RVA: 0x35A63E8 Offset: 0x35A63E8 VA: 0x35A63E8
	public void SendMagicPassMessage() { }

	// RVA: 0x35A6620 Offset: 0x35A6620 VA: 0x35A6620
	public int GetSupportableHelpCount() { }

	// RVA: 0x35A67A0 Offset: 0x35A67A0 VA: 0x35A67A0 Slot: 6
	public void IntervalUpdate() { }

	// RVA: 0x35A5A5C Offset: 0x35A5A5C VA: 0x35A5A5C
	private void CheckSystemMessageForUserStateChange(TeamsChatMessageViewModel viewModel) { }

	// RVA: 0x35A6608 Offset: 0x35A6608 VA: 0x35A6608
	private void CacheMessage(int messageType, string context) { }

	// RVA: 0x35A56DC Offset: 0x35A56DC VA: 0x35A56DC
	private void TrySendCachedMessage() { }

	// RVA: 0x35A4EF8 Offset: 0x35A4EF8 VA: 0x35A4EF8
	private void ClearMessages() { }

	// RVA: 0x35A6CE4 Offset: 0x35A6CE4 VA: 0x35A6CE4
	public int GetClaimableMagicTicketCount() { }

	// RVA: 0x35A6E8C Offset: 0x35A6E8C VA: 0x35A6E8C
	public void MagicPassTicketClaimed(string messageId) { }
}

// Namespace: Modules.Contexts.Home.Teams.Scripts.UI
[Serializable]