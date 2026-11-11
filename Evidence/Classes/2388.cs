public class TeamArenaInfoPopup : MonoBehaviour, IPopUp // TypeDefIndex: 2388
{
	// Fields
	[SerializeField]
	private Button _closeButton; // 0x18
	[SerializeField]
	private List<Transform> _transforms; // 0x20
	[SerializeField]
	private StreakTournamentInfoPopupAnimationConfig _animationConfig; // 0x28
	[SerializeField]
	private TMP_Text[] _winTexts; // 0x30
	private Sequence _sequence; // 0x38
	private TaskCompletionSource<bool> _popupDisplayFlow; // 0x40

	// Methods

	// RVA: 0x29682A8 Offset: 0x29682A8 VA: 0x29682A8 Slot: 4
	public void Show(PopUpArguments popUpArguments) { }

	// RVA: 0x2968A34 Offset: 0x2968A34 VA: 0x2968A34 Slot: 5
	public Task ShowAsync(PopUpArguments popUpArguments) { }

	// RVA: 0x2968B10 Offset: 0x2968B10 VA: 0x2968B10 Slot: 6
	public Task Hide() { }

	// RVA: 0x2968BC4 Offset: 0x2968BC4 VA: 0x2968BC4 Slot: 7
	public GameObject GetGameObject() { }

	// RVA: 0x2968514 Offset: 0x2968514 VA: 0x2968514
	private void SetActiveAll(bool active) { }

	// RVA: 0x2968BCC Offset: 0x2968BCC VA: 0x2968BCC
	private void OnDestroy() { }

	// RVA: 0x2968684 Offset: 0x2968684 VA: 0x2968684
	private void PlayAnimationsWithInterval() { }

	// RVA: 0x2968C88 Offset: 0x2968C88 VA: 0x2968C88
	private void SubscribeButton() { }

	// RVA: 0x2968BF4 Offset: 0x2968BF4 VA: 0x2968BF4
	private void UnsubscribeButton() { }

	// RVA: 0x2968D14 Offset: 0x2968D14 VA: 0x2968D14
	private void ClosePopup() { }

	// RVA: 0x2968D90 Offset: 0x2968D90 VA: 0x2968D90
	public void .ctor() { }
}

// Namespace: Modules.Contexts.Home.TeamArena.UI.Popups