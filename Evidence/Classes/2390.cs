public class TeamArenaJoinPopup : MonoBehaviour, IPopUp // TypeDefIndex: 2390
{
	// Fields
	[SerializeField]
	private Timer _timer; // 0x18
	[SerializeField]
	private Button _infoButton; // 0x20
	[SerializeField]
	private Button _closeButton; // 0x28
	[SerializeField]
	private Button _continueButton; // 0x30
	[SerializeField]
	private GameObject _noTeamWarningContainer; // 0x38
	[SerializeField]
	private GameObject _notEnoughMemberWarningContainer; // 0x40
	[SerializeField]
	private GameObject _eligibleContainer; // 0x48
	private TaskCompletionSource<bool> _popupDisplayFlow; // 0x50
	private IPopUpService _popUpService; // 0x58
	private TeamArenaService _teamArenaService; // 0x60
	private TeamsService _teamsService; // 0x68
	private TeamArenaJoinPopupArguments _args; // 0x70

	// Methods

	// RVA: 0x2968DCC Offset: 0x2968DCC VA: 0x2968DCC Slot: 4
	public void Show(PopUpArguments popUpArguments) { }

	// RVA: 0x2968F04 Offset: 0x2968F04 VA: 0x2968F04 Slot: 5
	public Task ShowAsync(PopUpArguments popUpArguments) { }

	// RVA: 0x2968FE0 Offset: 0x2968FE0 VA: 0x2968FE0 Slot: 6
	public Task Hide() { }

	// RVA: 0x2969094 Offset: 0x2969094 VA: 0x2969094 Slot: 7
	public GameObject GetGameObject() { }

	// RVA: 0x296909C Offset: 0x296909C VA: 0x296909C
	private void Awake() { }

	// RVA: 0x29692AC Offset: 0x29692AC VA: 0x29692AC
	private void OnDestroy() { }

	// RVA: 0x29693D8 Offset: 0x29693D8 VA: 0x29693D8
	private void OnInfoButtonSelected() { }

	// RVA: 0x29694D4 Offset: 0x29694D4 VA: 0x29694D4
	private void OnContinueButtonSelected() { }

	// RVA: 0x296970C Offset: 0x296970C VA: 0x296970C
	private void OnCloseButtonSelected() { }

	// RVA: 0x296976C Offset: 0x296976C VA: 0x296976C
	public void .ctor() { }
}

// Namespace: Modules.Contexts.Home.TeamArena.UI.Popups