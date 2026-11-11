public class TeamsService : IDataInitializable, IRestartableService, IService, IInitializable, IDisposable, IIntervalUpdate, ILateLoginService // TypeDefIndex: 2137
{
	// Fields
	[CompilerGenerated]
	private TeamViewModel <UserTeamModel>k__BackingField; // 0x10
	[CompilerGenerated]
	private TeamServiceState <State>k__BackingField; // 0x18
	private DateTime _helpRequestActivationTime; // 0x20
	[CompilerGenerated]
	private string <UserImageUrl>k__BackingField; // 0x28
	[CompilerGenerated]
	private MemberRole <UserRole>k__BackingField; // 0x30
	[CompilerGenerated]
	private long <RequestCount>k__BackingField; // 0x38
	[CompilerGenerated]
	private DateTime <CardRequestCooldownEndDate>k__BackingField; // 0x40
	[CompilerGenerated]
	private long <SentCardCount>k__BackingField; // 0x48
	[CompilerGenerated]
	private List<TeamViewModel> <SuggestedTeams>k__BackingField; // 0x50
	[CompilerGenerated]
	private int <MinLevelDeltaStep>k__BackingField; // 0x58
	private bool _needToRefresh; // 0x5C
	private bool _shouldUpdateLeaderboard; // 0x5D
	private RemoteConfigs _remoteConfigs; // 0x60
	private IPlayerService _playerService; // 0x68
	private TeamsRemoteService _remoteService; // 0x70
	private SyncService _syncService; // 0x78
	private InventoryService _inventoryService; // 0x80
	private TeamsDataService _dataService; // 0x88
	private CustomUpdater _customUpdater; // 0x90
	private WebSocketManager _webSocketManager; // 0x98
	private MagicPassService _magicPassService; // 0xA0
	[CompilerGenerated]
	private Action OnTeamServiceStateUpdated; // 0xA8
	[CompilerGenerated]
	private Action OnUserTeamDataUpdated; // 0xB0
	[CompilerGenerated]
	private Action OnUserHelpRequestUpdated; // 0xB8
	[CompilerGenerated]
	private Action OnUserJoinedTeams; // 0xC0
	[CompilerGenerated]
	private Action OnRequestCountUpdated; // 0xC8
	[CompilerGenerated]
	private Action OnFreeLivesUpdated; // 0xD0
	[CompilerGenerated]
	private Action<string, string> OnLifeClaimed; // 0xD8
	[CompilerGenerated]
	private Action OnCardRequestCooldownUpdated; // 0xE0
	[CompilerGenerated]
	private Action OnSentCardCountUpdated; // 0xE8
	private bool _freeLivesInitializing; // 0xF0

	// Properties
	public bool IsUserInTeam { get; }
	public TeamViewModel UserTeamModel { get; set; }
	public TeamServiceState State { get; set; }
	public bool CanRequestHelp { get; }
	public long HelpRequestRemainingTime { get; }
	public string UserImageUrl { get; set; }
	public MemberRole UserRole { get; set; }
	public long RequestCount { get; set; }
	public long CardRequestRemainingTime { get; }
	public DateTime CardRequestCooldownEndDate { get; set; }
	public bool CanRequestCard { get; }
	public long SentCardCount { get; set; }
	public List<TeamViewModel> SuggestedTeams { get; set; }
	public int MinLevelDeltaStep { get; set; }

	// Methods

	// RVA: 0x35A31E0 Offset: 0x35A31E0 VA: 0x35A31E0
	public bool get_IsUserInTeam() { }

	[CompilerGenerated]
	// RVA: 0x35B0E84 Offset: 0x35B0E84 VA: 0x35B0E84
	public TeamViewModel get_UserTeamModel() { }

	[CompilerGenerated]
	// RVA: 0x35B0E8C Offset: 0x35B0E8C VA: 0x35B0E8C
	private void set_UserTeamModel(TeamViewModel value) { }

	[CompilerGenerated]
	// RVA: 0x35B0E94 Offset: 0x35B0E94 VA: 0x35B0E94
	public TeamServiceState get_State() { }

	[CompilerGenerated]
	// RVA: 0x35B0E9C Offset: 0x35B0E9C VA: 0x35B0E9C
	private void set_State(TeamServiceState value) { }

	// RVA: 0x35A3794 Offset: 0x35A3794 VA: 0x35A3794
	public bool get_CanRequestHelp() { }

	// RVA: 0x35B0EA4 Offset: 0x35B0EA4 VA: 0x35B0EA4
	public long get_HelpRequestRemainingTime() { }

	[CompilerGenerated]
	// RVA: 0x35B0F6C Offset: 0x35B0F6C VA: 0x35B0F6C
	public string get_UserImageUrl() { }

	[CompilerGenerated]
	// RVA: 0x35B0F74 Offset: 0x35B0F74 VA: 0x35B0F74
	private void set_UserImageUrl(string value) { }

	[CompilerGenerated]
	// RVA: 0x35B0F7C Offset: 0x35B0F7C VA: 0x35B0F7C
	public MemberRole get_UserRole() { }

	[CompilerGenerated]
	// RVA: 0x35B0F84 Offset: 0x35B0F84 VA: 0x35B0F84
	private void set_UserRole(MemberRole value) { }

	[CompilerGenerated]
	// RVA: 0x35B0F8C Offset: 0x35B0F8C VA: 0x35B0F8C
	public long get_RequestCount() { }

	[CompilerGenerated]
	// RVA: 0x35B0F94 Offset: 0x35B0F94 VA: 0x35B0F94
	private void set_RequestCount(long value) { }

	// RVA: 0x35B0F9C Offset: 0x35B0F9C VA: 0x35B0F9C
	public long get_CardRequestRemainingTime() { }

	[CompilerGenerated]
	// RVA: 0x35B1064 Offset: 0x35B1064 VA: 0x35B1064
	public DateTime get_CardRequestCooldownEndDate() { }

	[CompilerGenerated]
	// RVA: 0x35B106C Offset: 0x35B106C VA: 0x35B106C
	private void set_CardRequestCooldownEndDate(DateTime value) { }

	// RVA: 0x35A3A7C Offset: 0x35A3A7C VA: 0x35A3A7C
	public bool get_CanRequestCard() { }

	[CompilerGenerated]
	// RVA: 0x35B1074 Offset: 0x35B1074 VA: 0x35B1074
	public long get_SentCardCount() { }

	[CompilerGenerated]
	// RVA: 0x35B107C Offset: 0x35B107C VA: 0x35B107C
	private void set_SentCardCount(long value) { }

	[CompilerGenerated]
	// RVA: 0x35B1084 Offset: 0x35B1084 VA: 0x35B1084
	public List<TeamViewModel> get_SuggestedTeams() { }

	[CompilerGenerated]
	// RVA: 0x35B108C Offset: 0x35B108C VA: 0x35B108C
	private void set_SuggestedTeams(List<TeamViewModel> value) { }

	[CompilerGenerated]
	// RVA: 0x35B1094 Offset: 0x35B1094 VA: 0x35B1094
	public int get_MinLevelDeltaStep() { }

	[CompilerGenerated]
	// RVA: 0x35B109C Offset: 0x35B109C VA: 0x35B109C
	private void set_MinLevelDeltaStep(int value) { }

	[CompilerGenerated]
	// RVA: 0x35A2BE8 Offset: 0x35A2BE8 VA: 0x35A2BE8
	public void add_OnTeamServiceStateUpdated(Action value) { }

	[CompilerGenerated]
	// RVA: 0x35A2ECC Offset: 0x35A2ECC VA: 0x35A2ECC
	public void remove_OnTeamServiceStateUpdated(Action value) { }

	[CompilerGenerated]
	// RVA: 0x35A2C84 Offset: 0x35A2C84 VA: 0x35A2C84
	public void add_OnUserTeamDataUpdated(Action value) { }

	[CompilerGenerated]
	// RVA: 0x35A2F68 Offset: 0x35A2F68 VA: 0x35A2F68
	public void remove_OnUserTeamDataUpdated(Action value) { }

	[CompilerGenerated]
	// RVA: 0x35B10A4 Offset: 0x35B10A4 VA: 0x35B10A4
	public void add_OnUserHelpRequestUpdated(Action value) { }

	[CompilerGenerated]
	// RVA: 0x35B1140 Offset: 0x35B1140 VA: 0x35B1140
	public void remove_OnUserHelpRequestUpdated(Action value) { }

	[CompilerGenerated]
	// RVA: 0x35B11DC Offset: 0x35B11DC VA: 0x35B11DC
	public void add_OnUserJoinedTeams(Action value) { }

	[CompilerGenerated]
	// RVA: 0x35B1278 Offset: 0x35B1278 VA: 0x35B1278
	public void remove_OnUserJoinedTeams(Action value) { }

	[CompilerGenerated]
	// RVA: 0x35B1314 Offset: 0x35B1314 VA: 0x35B1314
	public void add_OnRequestCountUpdated(Action value) { }

	[CompilerGenerated]
	// RVA: 0x35B13B0 Offset: 0x35B13B0 VA: 0x35B13B0
	public void remove_OnRequestCountUpdated(Action value) { }

	[CompilerGenerated]
	// RVA: 0x35B144C Offset: 0x35B144C VA: 0x35B144C
	public void add_OnFreeLivesUpdated(Action value) { }

	[CompilerGenerated]
	// RVA: 0x35B14E8 Offset: 0x35B14E8 VA: 0x35B14E8
	public void remove_OnFreeLivesUpdated(Action value) { }

	[CompilerGenerated]
	// RVA: 0x35B1584 Offset: 0x35B1584 VA: 0x35B1584
	public void add_OnLifeClaimed(Action<string, string> value) { }

	[CompilerGenerated]
	// RVA: 0x35B1634 Offset: 0x35B1634 VA: 0x35B1634
	public void remove_OnLifeClaimed(Action<string, string> value) { }

	[CompilerGenerated]
	// RVA: 0x35B16E4 Offset: 0x35B16E4 VA: 0x35B16E4
	public void add_OnCardRequestCooldownUpdated(Action value) { }

	[CompilerGenerated]
	// RVA: 0x35B1780 Offset: 0x35B1780 VA: 0x35B1780
	public void remove_OnCardRequestCooldownUpdated(Action value) { }

	[CompilerGenerated]
	// RVA: 0x35B181C Offset: 0x35B181C VA: 0x35B181C
	public void add_OnSentCardCountUpdated(Action value) { }

	[CompilerGenerated]
	// RVA: 0x35B18B8 Offset: 0x35B18B8 VA: 0x35B18B8
	public void remove_OnSentCardCountUpdated(Action value) { }

	// RVA: 0x35B1954 Offset: 0x35B1954 VA: 0x35B1954
	public void .ctor(RemoteConfigs remoteConfigs, IPlayerService playerService, TeamsRemoteService remoteService, InventoryService inventoryService, TeamsDataService dataService, CustomUpdater customUpdater, WebSocketManager webSocketManager, MagicPassService magicPassService) { }

	[AsyncStateMachine(typeof(TeamsService.<TryFetchCurrentState>d__86))]
	// RVA: 0x35B1A30 Offset: 0x35B1A30 VA: 0x35B1A30
	public void TryFetchCurrentState() { }

	[AsyncStateMachine(typeof(TeamsService.<RefreshUserTeamData>d__87))]
	// RVA: 0x35B1AE4 Offset: 0x35B1AE4 VA: 0x35B1AE4
	public Task RefreshUserTeamData() { }

	// RVA: 0x35B1BD0 Offset: 0x35B1BD0 VA: 0x35B1BD0 Slot: 5
	public void Initialize() { }

	// RVA: 0x35B1D18 Offset: 0x35B1D18 VA: 0x35B1D18 Slot: 4
	public void InitializeData() { }

	// RVA: 0x35B1F04 Offset: 0x35B1F04 VA: 0x35B1F04 Slot: 6
	public void Dispose() { }

	// RVA: 0x35B203C Offset: 0x35B203C VA: 0x35B203C
	private void OnLevelWin() { }

	// RVA: 0x35B1D64 Offset: 0x35B1D64 VA: 0x35B1D64
	public bool IsEnabled() { }

	// RVA: 0x35B214C Offset: 0x35B214C VA: 0x35B214C
	public int GetTeamsUnlockLevel() { }

	// RVA: 0x35B2178 Offset: 0x35B2178 VA: 0x35B2178
	public int GetTeamCapacity() { }

	// RVA: 0x35B21A4 Offset: 0x35B21A4 VA: 0x35B21A4
	public int GetTeamCreateCost() { }

	// RVA: 0x35A5CC4 Offset: 0x35A5CC4 VA: 0x35A5CC4
	public int GetMaxHelpCount() { }

	// RVA: 0x35B21D0 Offset: 0x35B21D0 VA: 0x35B21D0
	public int GetHelpMaxCooldown() { }

	// RVA: 0x35A611C Offset: 0x35A611C VA: 0x35A611C
	public int GetHelpSupportReward() { }

	// RVA: 0x35B21FC Offset: 0x35B21FC VA: 0x35B21FC
	public int GetMaxColeaderCount() { }

	// RVA: 0x35B2228 Offset: 0x35B2228 VA: 0x35B2228
	public long GetCardMaxCooldown() { }

	// RVA: 0x35B2234 Offset: 0x35B2234 VA: 0x35B2234
	public long GetCardNumberUserCansSendPerDay() { }

	// RVA: 0x35B1D90 Offset: 0x35B1D90 VA: 0x35B1D90
	public bool IsTeamsUnlocked() { }

	[AsyncStateMachine(typeof(TeamsService.<RefreshRequestsCooldowns>d__103))]
	// RVA: 0x35B223C Offset: 0x35B223C VA: 0x35B223C
	public void RefreshRequestsCooldowns() { }

	// RVA: 0x35A37D4 Offset: 0x35A37D4 VA: 0x35A37D4
	public void StartHelpCooldown() { }

	// RVA: 0x35A3ABC Offset: 0x35A3ABC VA: 0x35A3ABC
	public void StartCardRequestCooldown() { }

	[AsyncStateMachine(typeof(TeamsService.<TryFetchSuggestedTeams>d__106))]
	// RVA: 0x35B22F4 Offset: 0x35B22F4 VA: 0x35B22F4
	private Task TryFetchSuggestedTeams() { }

	[AsyncStateMachine(typeof(TeamsService.<SearchTeam>d__107))]
	// RVA: 0x35B23E0 Offset: 0x35B23E0 VA: 0x35B23E0
	public Task<List<TeamViewModel>> SearchTeam(string keyword) { }

	[AsyncStateMachine(typeof(TeamsService.<LeaveTeam>d__108))]
	// RVA: 0x35B250C Offset: 0x35B250C VA: 0x35B250C
	public Task<TeamsWebResponse> LeaveTeam() { }

	[AsyncStateMachine(typeof(TeamsService.<GetJoinRequests>d__109))]
	// RVA: 0x35B2618 Offset: 0x35B2618 VA: 0x35B2618
	public Task<List<TeamJoinRequestInfo>> GetJoinRequests() { }

	[AsyncStateMachine(typeof(TeamsService.<KickUser>d__110))]
	// RVA: 0x35B2724 Offset: 0x35B2724 VA: 0x35B2724
	public Task<TeamsWebResponse> KickUser(TeamKickMemberRequestModel request) { }

	[AsyncStateMachine(typeof(TeamsService.<UpdateMemberRole>d__111))]
	// RVA: 0x35B2850 Offset: 0x35B2850 VA: 0x35B2850
	public Task<TeamsWebResponse> UpdateMemberRole(TeamUpdateMemberRoleRequestModel request) { }

	[AsyncStateMachine(typeof(TeamsService.<EditTeam>d__112))]
	// RVA: 0x35B297C Offset: 0x35B297C VA: 0x35B297C
	public Task<TeamsWebResponse> EditTeam(EditTeamRequestModel request) { }

	// RVA: 0x35B2AA8 Offset: 0x35B2AA8 VA: 0x35B2AA8
	private void UserJoinedTeam(TeamDetailsViewModel viewModel) { }

	// RVA: 0x35B2CAC Offset: 0x35B2CAC VA: 0x35B2CAC
	public Task<TeamsWebResponse> SendJoinTeamRequest(string teamDataId) { }

	[AsyncStateMachine(typeof(TeamsService.<ReplyJoinRequest>d__115))]
	// RVA: 0x35B2D34 Offset: 0x35B2D34 VA: 0x35B2D34
	public Task<TeamsWebResponse> ReplyJoinRequest(string requestId, bool accepted) { }

	[AsyncStateMachine(typeof(TeamsService.<GetTeamDetails>d__116))]
	// RVA: 0x35B2E64 Offset: 0x35B2E64 VA: 0x35B2E64
	public Task<TeamDetailsViewModel> GetTeamDetails(string teamId) { }

	// RVA: 0x35B2F90 Offset: 0x35B2F90 VA: 0x35B2F90
	private void CheckTeamDetailsForUserRoleUpdates(TeamDetailsViewModel viewModel) { }

	[AsyncStateMachine(typeof(TeamsService.<CreateTeam>d__118))]
	// RVA: 0x35B316C Offset: 0x35B316C VA: 0x35B316C
	public Task<int> CreateTeam(TeamCreateRequestModel requestModel) { }

	[AsyncStateMachine(typeof(TeamsService.<JoinTeam>d__119))]
	// RVA: 0x35B32A0 Offset: 0x35B32A0 VA: 0x35B32A0
	public Task<TeamDetailsViewModel> JoinTeam(string teamId) { }

	[AsyncStateMachine(typeof(TeamsService.<ChangeTeam>d__120))]
	// RVA: 0x35B33CC Offset: 0x35B33CC VA: 0x35B33CC
	public Task<TeamDetailsViewModel> ChangeTeam(string newTeamId) { }

	// RVA: 0x35B34F8 Offset: 0x35B34F8 VA: 0x35B34F8
	public bool GetTeamsIntroduced() { }

	// RVA: 0x35B3510 Offset: 0x35B3510 VA: 0x35B3510
	public void SetTeamsIntroduced(bool isIntroduced) { }

	// RVA: 0x35B352C Offset: 0x35B352C VA: 0x35B352C
	public bool GetUserJoinedTeam() { }

	// RVA: 0x35B3544 Offset: 0x35B3544 VA: 0x35B3544
	public void SetUserJoinedTeam(bool isJoined) { }

	// RVA: 0x35A6B50 Offset: 0x35A6B50 VA: 0x35A6B50
	public void UserKicked() { }

	// RVA: 0x35A6BD0 Offset: 0x35A6BD0 VA: 0x35A6BD0
	public void UserPromoted() { }

	// RVA: 0x35A6BF4 Offset: 0x35A6BF4 VA: 0x35A6BF4
	public void Demoted() { }

	// RVA: 0x35B3598 Offset: 0x35B3598 VA: 0x35B3598
	public List<FreeLiveViewModel> GetFreeLives() { }

	[AsyncStateMachine(typeof(TeamsService.<InitializeFreeLives>d__130))]
	// RVA: 0x35A52F0 Offset: 0x35A52F0 VA: 0x35A52F0
	public void InitializeFreeLives(bool putDelay = False) { }

	[AsyncStateMachine(typeof(TeamsService.<SyncClaimedHelps>d__131))]
	// RVA: 0x35B3864 Offset: 0x35B3864 VA: 0x35B3864
	private Task SyncClaimedHelps(List<TeamFreeLifeModel> localClaimedHelps, List<TeamHelpData> remoteLives) { }

	// RVA: 0x35B3980 Offset: 0x35B3980 VA: 0x35B3980
	private TeamFreeLifeModel GetFreeLifeModel(List<TeamFreeLifeModel> freeLives, TeamHelpData helpData) { }

	// RVA: 0x35B3B14 Offset: 0x35B3B14 VA: 0x35B3B14
	public void ClaimFreeLive(string messageId, string userId) { }

	[AsyncStateMachine(typeof(TeamsService.<UpdateLeaderboard>d__134))]
	// RVA: 0x35B1E4C Offset: 0x35B1E4C VA: 0x35B1E4C
	private void UpdateLeaderboard() { }

	// RVA: 0x35B3D38 Offset: 0x35B3D38 VA: 0x35B3D38
	public List<LeaderboardTeam> GetCountryLeaderboard() { }

	// RVA: 0x35B3D5C Offset: 0x35B3D5C VA: 0x35B3D5C
	public List<LeaderboardTeam> GetGlobalLeaderboard() { }

	// RVA: 0x35B3D80 Offset: 0x35B3D80 VA: 0x35B3D80 Slot: 7
	public void IntervalUpdate() { }

	// RVA: 0x35B3D8C Offset: 0x35B3D8C VA: 0x35B3D8C
	public void SetRequestCount(long count) { }

	// RVA: 0x35B3DBC Offset: 0x35B3DBC VA: 0x35B3DBC
	public long GetRequestCount() { }

	// RVA: 0x35B3DC4 Offset: 0x35B3DC4 VA: 0x35B3DC4
	private void OnReconnected() { }

	// RVA: 0x35A3F64 Offset: 0x35A3F64 VA: 0x35A3F64
	public bool DailyCardSentLimitReached() { }

	// RVA: 0x35B3DC8 Offset: 0x35B3DC8 VA: 0x35B3DC8
	public long GetDailySentCardsCount() { }

	// RVA: 0x35A3F74 Offset: 0x35A3F74 VA: 0x35A3F74
	public void IncreaseSentCardCount() { }

	// RVA: 0x35B3DD0 Offset: 0x35B3DD0 VA: 0x35B3DD0
	public bool ShouldShowUserKickedNotification() { }

	// RVA: 0x35B3E28 Offset: 0x35B3E28 VA: 0x35B3E28
	public void SetKickNotificationSeen() { }

	// RVA: 0x35B3E84 Offset: 0x35B3E84 VA: 0x35B3E84
	public void UpdateUserTeamMemberCount(int memberCount) { }

	// RVA: 0x35B3EA0 Offset: 0x35B3EA0 VA: 0x35B3EA0
	private void SendUserTeamInfoEvent() { }
}

// Namespace: Modules.Contexts.Home.Teams.Scripts.UI