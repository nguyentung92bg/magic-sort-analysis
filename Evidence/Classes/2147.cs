public static class TeamsUtils // TypeDefIndex: 2147
{
	// Methods

	// RVA: 0x344DAC0 Offset: 0x344DAC0 VA: 0x344DAC0
	public static TeamViewModel GetTeamViewModel(Nullable<TeamSummary> summary) { }

	// RVA: 0x344AF50 Offset: 0x344AF50 VA: 0x344AF50
	public static TeamDetailsViewModel GetTeamDetailsViewModel(GetTeamWithMembersResponse response) { }

	// RVA: 0x344FD84 Offset: 0x344FD84 VA: 0x344FD84
	private static TeamViewModel GetTeamData(GetTeamWithMembersResponse response) { }

	// RVA: 0x344FF64 Offset: 0x344FF64 VA: 0x344FF64
	private static List<TeamMemberViewModel> GetTeamMembers(GetTeamWithMembersResponse getTeamWithMembersResponse) { }

	// RVA: 0x344E310 Offset: 0x344E310 VA: 0x344E310
	public static List<TeamViewModel> GetTeams(GetTeamsResponse response) { }

	// RVA: 0x34502EC Offset: 0x34502EC VA: 0x34502EC
	public static TeamGetJoinRequestsResponse GetJoinRequests(GetTeamRequestsResponse response) { }

	// RVA: 0x3450500 Offset: 0x3450500 VA: 0x3450500
	private static TeamJoinRequestInfo GetJoinRequest(TeamRequest requestFb) { }

	// RVA: 0x344F854 Offset: 0x344F854 VA: 0x344F854
	public static int GetErrorCode(Nullable<BaseResponse> response) { }

	// RVA: 0x345063C Offset: 0x345063C VA: 0x345063C
	public static void UpdateLeaderboardTeam(TeamLeaderboardSummary countryTeamLeaderboard, LeaderboardTeam leaderboardTeam) { }

	// RVA: 0x34506C8 Offset: 0x34506C8 VA: 0x34506C8
	public static TeamHelpData GetTeamHelp(TeamHelp help) { }
}

// Namespace: 
[CompilerGenerated]