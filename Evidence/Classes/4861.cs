public class BoatRushInfoPopUp : MonoBehaviour, IPopUp // TypeDefIndex: 4861
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

	// RVA: 0x40F8868 Offset: 0x40F8868 VA: 0x40F8868
	private void SetActiveAll(bool active) { }

	// RVA: 0x40F89D8 Offset: 0x40F89D8 VA: 0x40F89D8 Slot: 4
	public void Show(PopUpArguments popUpArguments) { }

	// RVA: 0x40F8AB4 Offset: 0x40F8AB4 VA: 0x40F8AB4
	private void PlayAnimationsWithInterval() { }

	// RVA: 0x40F8E6C Offset: 0x40F8E6C VA: 0x40F8E6C
	private void OnDestroy() { }

	// RVA: 0x40F8E84 Offset: 0x40F8E84 VA: 0x40F8E84
	private void SubscribeButtons() { }

	// RVA: 0x40F8F10 Offset: 0x40F8F10 VA: 0x40F8F10
	private void UnsubscribeButtons() { }

	// RVA: 0x40F8F9C Offset: 0x40F8F9C VA: 0x40F8F9C
	private void ClosePopup() { }

	// RVA: 0x40F901C Offset: 0x40F901C VA: 0x40F901C Slot: 5
	public Task ShowAsync(PopUpArguments popUpArguments) { }

	// RVA: 0x40F90F8 Offset: 0x40F90F8 VA: 0x40F90F8 Slot: 6
	public Task Hide() { }

	// RVA: 0x40F91AC Offset: 0x40F91AC VA: 0x40F91AC Slot: 7
	public GameObject GetGameObject() { }

	// RVA: 0x40F91B4 Offset: 0x40F91B4 VA: 0x40F91B4
	public void .ctor() { }
}

// Namespace: Modules.Contexts.Home.BoatRush.Scripts.UI