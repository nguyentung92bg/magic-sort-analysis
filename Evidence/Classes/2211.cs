public class TeamNotificationController : MonoBehaviour // TypeDefIndex: 2211
{
	// Fields
	[SerializeField]
	private TMP_Text _notificationCount; // 0x18
	[SerializeField]
	private GameObject _notificationContainer; // 0x20
	private TeamChatService _chatService; // 0x28
	private TeamsService _teamsService; // 0x30

	// Methods

	// RVA: 0x2EFFF4C Offset: 0x2EFFF4C VA: 0x2EFFF4C
	private void Awake() { }

	// RVA: 0x2F00450 Offset: 0x2F00450 VA: 0x2F00450
	private void OnDestroy() { }

	// RVA: 0x2F00768 Offset: 0x2F00768 VA: 0x2F00768
	private void OnUserTeamDataUpdated() { }

	// RVA: 0x2F0076C Offset: 0x2F0076C VA: 0x2F0076C
	private void TeamChatUpdated() { }

	// RVA: 0x2F00770 Offset: 0x2F00770 VA: 0x2F00770
	private void OnMessageReceived(TeamsChatMessageViewModel _) { }

	// RVA: 0x2F00774 Offset: 0x2F00774 VA: 0x2F00774
	private void OnMessageRemoved(TeamsChatMessageViewModel _) { }

	// RVA: 0x2F00778 Offset: 0x2F00778 VA: 0x2F00778
	private void OnMessageSent(TeamsChatMessageViewModel _) { }

	// RVA: 0x2F0077C Offset: 0x2F0077C VA: 0x2F0077C
	private void HelpMessageUpdated(TeamsChatMessageViewModel _) { }

	// RVA: 0x2F00310 Offset: 0x2F00310 VA: 0x2F00310
	private void UpdateView() { }

	// RVA: 0x2F00780 Offset: 0x2F00780 VA: 0x2F00780
	private void OnPageSelected(PageType pageType) { }

	// RVA: 0x2F007C4 Offset: 0x2F007C4 VA: 0x2F007C4
	public void .ctor() { }
}

// Namespace: Modules.Contexts.Home.Teams.Scripts.UI