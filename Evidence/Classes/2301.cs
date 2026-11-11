public class TeamQuestJoinPopup : MonoBehaviour, IPopUp // TypeDefIndex: 2301
{
	// Fields
	[SerializeField]
	private Button _infoPopupButton; // 0x18
	[SerializeField]
	private Button _closeButton; // 0x20
	[SerializeField]
	private GameObject _joinATeamText; // 0x28
	[SerializeField]
	private GameObject _joinTeamQuestText; // 0x30
	[SerializeField]
	private Button _joinButton; // 0x38
	[SerializeField]
	private Timer _timer; // 0x40
	private TaskCompletionSource<bool> _popupDisplayFlow; // 0x48
	private TeamQuestService _teamQuestService; // 0x50
	private TeamsService _teamService; // 0x58

	// Methods

	// RVA: 0x2DDB590 Offset: 0x2DDB590 VA: 0x2DDB590
	private void Awake() { }

	// RVA: 0x2DDB6BC Offset: 0x2DDB6BC VA: 0x2DDB6BC
	private void OnDestroy() { }

	// RVA: 0x2DDB7E8 Offset: 0x2DDB7E8 VA: 0x2DDB7E8
	private void OpenTeamQuestInfoPopUp() { }

	// RVA: 0x2DDB8D0 Offset: 0x2DDB8D0 VA: 0x2DDB8D0 Slot: 4
	public void Show(PopUpArguments popUpArguments) { }

	[AsyncStateMachine(typeof(TeamQuestJoinPopup.<JoinButtonOnSelectSuccessEvent>d__13))]
	// RVA: 0x2DDBAF8 Offset: 0x2DDBAF8 VA: 0x2DDBAF8
	private void JoinButtonOnSelectSuccessEvent() { }

	[AsyncStateMachine(typeof(TeamQuestJoinPopup.<CloseButtonOnSelectSuccessEvent>d__14))]
	// RVA: 0x2DDBB90 Offset: 0x2DDBB90 VA: 0x2DDBB90
	private void CloseButtonOnSelectSuccessEvent() { }

	// RVA: 0x2DDBC28 Offset: 0x2DDBC28 VA: 0x2DDBC28 Slot: 5
	public Task ShowAsync(PopUpArguments popUpArguments) { }

	// RVA: 0x2DDBD04 Offset: 0x2DDBD04 VA: 0x2DDBD04 Slot: 6
	public Task Hide() { }

	// RVA: 0x2DDBDB8 Offset: 0x2DDBDB8 VA: 0x2DDBDB8 Slot: 7
	public GameObject GetGameObject() { }

	// RVA: 0x2DDBDC0 Offset: 0x2DDBDC0 VA: 0x2DDBDC0
	public void .ctor() { }
}

// Namespace: 
[CompilerGenerated]