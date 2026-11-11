public class TeamsRemoteService : IService, IInitializable, IDisposable // TypeDefIndex: 2114
{
	// Fields
	private HttpProxy _httpProxy; // 0x10
	private BackendEnvironmentConfig _backendEnvironmentConfig; // 0x18
	private CancellationTokenSource _cts; // 0x20

	// Methods

	// RVA: 0x35A9580 Offset: 0x35A9580 VA: 0x35A9580
	public void .ctor(HttpProxy httpProxy, BackendEnvironmentConfig backendEnvironmentConfig) { }

	// RVA: 0x35A95C4 Offset: 0x35A95C4 VA: 0x35A95C4 Slot: 4
	public void Initialize() { }

	// RVA: 0x35A962C Offset: 0x35A962C VA: 0x35A962C Slot: 5
	public void Dispose() { }

	[AsyncStateMachine(typeof(TeamsRemoteService.<GetUserTeamSummary>d__6))]
	// RVA: 0x35A9664 Offset: 0x35A9664 VA: 0x35A9664
	public Task<Nullable<GetMyTeamResponse>> GetUserTeamSummary() { }

	[AsyncStateMachine(typeof(TeamsRemoteService.<GetTeamDetails>d__7))]
	// RVA: 0x35A9778 Offset: 0x35A9778 VA: 0x35A9778
	public Task<Nullable<GetTeamWithMembersResponse>> GetTeamDetails(string teamId) { }

	[AsyncStateMachine(typeof(TeamsRemoteService.<CreateTeam>d__8))]
	// RVA: 0x35A98AC Offset: 0x35A98AC VA: 0x35A98AC
	public Task<Nullable<GetTeamWithMembersResponse>> CreateTeam(TeamCreateRequestModel requestModel) { }

	[AsyncStateMachine(typeof(TeamsRemoteService.<JoinTeam>d__9))]
	// RVA: 0x35A99E0 Offset: 0x35A99E0 VA: 0x35A99E0
	public Task<Nullable<GetTeamWithMembersResponse>> JoinTeam(TeamJoinRequestModel requestModel) { }

	[AsyncStateMachine(typeof(TeamsRemoteService.<ChangeTeam>d__10))]
	// RVA: 0x35A9B14 Offset: 0x35A9B14 VA: 0x35A9B14
	public Task<Nullable<GetTeamWithMembersResponse>> ChangeTeam(ChangeTeamRequestModel requestModel) { }

	[AsyncStateMachine(typeof(TeamsRemoteService.<SearchTeams>d__11))]
	// RVA: 0x35A9C48 Offset: 0x35A9C48 VA: 0x35A9C48
	public Task<Nullable<GetTeamsResponse>> SearchTeams(string keyword) { }

	[AsyncStateMachine(typeof(TeamsRemoteService.<GetTeamSuggestions>d__12))]
	// RVA: 0x35A9D7C Offset: 0x35A9D7C VA: 0x35A9D7C
	public Task<Nullable<GetTeamsResponse>> GetTeamSuggestions() { }

	[AsyncStateMachine(typeof(TeamsRemoteService.<GetTeamLeaderboard>d__13))]
	// RVA: 0x35A9E90 Offset: 0x35A9E90 VA: 0x35A9E90
	public Task<Nullable<GetTeamLeaderboardResponse>> GetTeamLeaderboard() { }

	[AsyncStateMachine(typeof(TeamsRemoteService.<EditTeam>d__14))]
	// RVA: 0x35A9FA4 Offset: 0x35A9FA4 VA: 0x35A9FA4
	public Task<TeamsWebResponse> EditTeam(EditTeamRequestModel requestModel) { }

	[AsyncStateMachine(typeof(TeamsRemoteService.<GetJoinRequests>d__15))]
	// RVA: 0x35AA0D0 Offset: 0x35AA0D0 VA: 0x35AA0D0
	public Task<TeamGetJoinRequestsResponse> GetJoinRequests(TeamsGetJoinRequestModel request) { }

	[AsyncStateMachine(typeof(TeamsRemoteService.<ReplyJoinRequest>d__16))]
	// RVA: 0x35AA1FC Offset: 0x35AA1FC VA: 0x35AA1FC
	public Task<TeamsWebResponse> ReplyJoinRequest(TeamReplyJoinRequestModel requestModel) { }

	[AsyncStateMachine(typeof(TeamsRemoteService.<KickMember>d__17))]
	// RVA: 0x35AA328 Offset: 0x35AA328 VA: 0x35AA328
	public Task<TeamsWebResponse> KickMember(TeamKickMemberRequestModel requestModel) { }

	[AsyncStateMachine(typeof(TeamsRemoteService.<SendJoinTeamRequest>d__18))]
	// RVA: 0x35AA454 Offset: 0x35AA454 VA: 0x35AA454
	public Task<TeamsWebResponse> SendJoinTeamRequest(TeamJoinRequestModel requestModel) { }

	[AsyncStateMachine(typeof(TeamsRemoteService.<LeaveTeam>d__19))]
	// RVA: 0x35AA580 Offset: 0x35AA580 VA: 0x35AA580
	public Task<TeamsWebResponse> LeaveTeam(TeamLeaveRequestModel requestModel) { }

	[AsyncStateMachine(typeof(TeamsRemoteService.<UpdateMemberRole>d__20))]
	// RVA: 0x35AA6AC Offset: 0x35AA6AC VA: 0x35AA6AC
	public Task<TeamsWebResponse> UpdateMemberRole(TeamUpdateMemberRoleRequestModel requestModel) { }

	[AsyncStateMachine(typeof(TeamsRemoteService.<GetUserFreeLives>d__21))]
	// RVA: 0x35AA7D8 Offset: 0x35AA7D8 VA: 0x35AA7D8
	public Task<GetHelpsResponse> GetUserFreeLives() { }

	[AsyncStateMachine(typeof(TeamsRemoteService.<ClaimHelps>d__22))]
	// RVA: 0x35AA8E4 Offset: 0x35AA8E4 VA: 0x35AA8E4
	public Task<TeamsWebResponse> ClaimHelps(ClaimHelpRequestModel requestModel) { }

	[AsyncStateMachine(typeof(TeamsRemoteService.<FetchChatHistory>d__23))]
	// RVA: 0x35A7470 Offset: 0x35A7470 VA: 0x35A7470
	public Task<List<SocketMessage<TeamChatMessage>>> FetchChatHistory(TeamChatHistoryRequestModel request) { }

	// RVA: -1 Offset: -1
	private bool IsResponseValid<T>(ApiResponse<T> response) { }
	/* GenericInstMethod :
	|
	|-RVA: 0x26EB610 Offset: 0x26EB610 VA: 0x26EB610
	|-TeamsRemoteService.IsResponseValid<object>
	*/
}

// Namespace: Modules.Contexts.Home.Teams.Scripts.UI