public class ShowTeamCommand : TeamsCommandBase // TypeDefIndex: 2257
{
	// Fields
	private string _teamId; // 0x10
	private TeamsService _teamsService; // 0x18
	private IPopUpService _popUpService; // 0x20
	private ProfileSpriteCacheService _cacheService; // 0x28
	private bool _closePreviousPopup; // 0x30

	// Methods

	// RVA: 0x2F021E8 Offset: 0x2F021E8 VA: 0x2F021E8
	public void .ctor(string id, bool closePreviousPopup = False) { }

	[AsyncStateMachine(typeof(ShowTeamCommand.<ExecuteAsync>d__6))]
	// RVA: 0x2F0C3DC Offset: 0x2F0C3DC VA: 0x2F0C3DC Slot: 6
	public override Task ExecuteAsync() { }

	// RVA: 0x2F0C4D0 Offset: 0x2F0C4D0 VA: 0x2F0C4D0
	private void CloseTeamInfoPopupIfOpened() { }

	[AsyncStateMachine(typeof(ShowTeamCommand.<ClosePreviousPopup>d__8))]
	// RVA: 0x2F0C654 Offset: 0x2F0C654 VA: 0x2F0C654
	private Task ClosePreviousPopup() { }

	// RVA: 0x2F0C740 Offset: 0x2F0C740 VA: 0x2F0C740 Slot: 7
	public override void Dispose() { }

	// RVA: 0x2F0C778 Offset: 0x2F0C778 VA: 0x2F0C778
	private void RequestProfileImages(List<TeamJoinRequestInfo> requests, List<TeamMemberViewModel> users) { }

	// RVA: 0x2F0CA04 Offset: 0x2F0CA04 VA: 0x2F0CA04
	private void UpdateUsersTeamMemberCount(TeamDetailsViewModel teamData) { }
}

// Namespace: Modules.Contexts.Home.Teams.Scripts.UI.Commands