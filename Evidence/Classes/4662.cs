public class ChampionsLeagueLeaderboardInfoPopup : MonoBehaviour, IPopUp // TypeDefIndex: 4662
{
	// Fields
	[SerializeField]
	private StreakTournamentInfoPopupAnimationConfig _animationConfig; // 0x18
	[SerializeField]
	private List<Transform> _transforms; // 0x20
	[SerializeField]
	private Button _closeButton; // 0x28
	[SerializeField]
	private GameObject _leagueInfoParent; // 0x30
	[SerializeField]
	private TextMeshPro _leagueInfoText; // 0x38
	private TaskCompletionSource<bool> _popupDisplayFlow; // 0x40
	private Sequence _sequence; // 0x48

	// Methods

	// RVA: 0x3A77104 Offset: 0x3A77104 VA: 0x3A77104
	private void OnDestroy() { }

	// RVA: 0x3A7711C Offset: 0x3A7711C VA: 0x3A7711C
	private void SetActiveAll(bool active) { }

	// RVA: 0x3A7728C Offset: 0x3A7728C VA: 0x3A7728C
	private void PlayAnimationsWithInterval() { }

	// RVA: 0x3A77644 Offset: 0x3A77644 VA: 0x3A77644
	private void SubscribeButton() { }

	// RVA: 0x3A776D0 Offset: 0x3A776D0 VA: 0x3A776D0
	private void UnsubscribeButton() { }

	// RVA: 0x3A7775C Offset: 0x3A7775C VA: 0x3A7775C
	private void ClosePopup() { }

	// RVA: 0x3A777DC Offset: 0x3A777DC VA: 0x3A777DC Slot: 4
	public void Show(PopUpArguments popUpArguments) { }

	// RVA: 0x3A77850 Offset: 0x3A77850 VA: 0x3A77850
	private void SetInfoTextState() { }

	// RVA: 0x3A77AA8 Offset: 0x3A77AA8 VA: 0x3A77AA8 Slot: 5
	public Task ShowAsync(PopUpArguments popUpArguments) { }

	// RVA: 0x3A77B74 Offset: 0x3A77B74 VA: 0x3A77B74 Slot: 6
	public Task Hide() { }

	// RVA: 0x3A77C28 Offset: 0x3A77C28 VA: 0x3A77C28 Slot: 7
	public GameObject GetGameObject() { }

	// RVA: 0x3A77C30 Offset: 0x3A77C30 VA: 0x3A77C30
	public void .ctor() { }
}

// Namespace: Modules.Contexts.Home.ChampionsLeague.UI