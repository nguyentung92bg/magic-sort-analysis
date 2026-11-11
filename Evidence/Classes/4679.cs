public class ChampionsLeaguePreJoinInfoPopup : MonoBehaviour, IPopUp // TypeDefIndex: 4679
{
	// Fields
	[SerializeField]
	private StreakTournamentInfoPopupAnimationConfig _animationConfig; // 0x18
	[SerializeField]
	private List<Transform> _transforms; // 0x20
	[SerializeField]
	private Button _closeButton; // 0x28
	private TaskCompletionSource<bool> _popupDisplayFlow; // 0x30
	private Sequence _sequence; // 0x38

	// Methods

	// RVA: 0x3A79E14 Offset: 0x3A79E14 VA: 0x3A79E14
	private void OnDestroy() { }

	// RVA: 0x3A79E2C Offset: 0x3A79E2C VA: 0x3A79E2C
	private void SetActiveAll(bool active) { }

	// RVA: 0x3A79F9C Offset: 0x3A79F9C VA: 0x3A79F9C
	private void PlayAnimationsWithInterval() { }

	// RVA: 0x3A7A354 Offset: 0x3A7A354 VA: 0x3A7A354
	private void SubscribeButton() { }

	// RVA: 0x3A7A3E0 Offset: 0x3A7A3E0 VA: 0x3A7A3E0
	private void UnsubscribeButton() { }

	// RVA: 0x3A7A46C Offset: 0x3A7A46C VA: 0x3A7A46C
	private void ClosePopup() { }

	// RVA: 0x3A7A4EC Offset: 0x3A7A4EC VA: 0x3A7A4EC Slot: 4
	public void Show(PopUpArguments popUpArguments) { }

	// RVA: 0x3A7A558 Offset: 0x3A7A558 VA: 0x3A7A558 Slot: 5
	public Task ShowAsync(PopUpArguments popUpArguments) { }

	// RVA: 0x3A7A624 Offset: 0x3A7A624 VA: 0x3A7A624 Slot: 6
	public Task Hide() { }

	// RVA: 0x3A7A6D8 Offset: 0x3A7A6D8 VA: 0x3A7A6D8 Slot: 7
	public GameObject GetGameObject() { }

	// RVA: 0x3A7A6E0 Offset: 0x3A7A6E0 VA: 0x3A7A6E0
	public void .ctor() { }
}

// Namespace: 
[Serializable]