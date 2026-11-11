public class WheelOfFortuneInfoPopUp : MonoBehaviour, IPopUp // TypeDefIndex: 1894
{
	// Fields
	[SerializeField]
	private StreakTournamentInfoPopupAnimationConfig _animationConfig; // 0x18
	[SerializeField]
	private List<Transform> _transforms; // 0x20
	[SerializeField]
	private Button _closeButton; // 0x28
	[SerializeField]
	private Button _probabilityButton; // 0x30
	private TaskCompletionSource<bool> _popupDisplayFlow; // 0x38
	private Sequence _sequence; // 0x40

	// Methods

	// RVA: 0x319EC00 Offset: 0x319EC00 VA: 0x319EC00
	private void SetActiveAll(bool active) { }

	// RVA: 0x319ED70 Offset: 0x319ED70 VA: 0x319ED70
	private void OnProbabilityButtonClicked() { }

	// RVA: 0x319EE58 Offset: 0x319EE58 VA: 0x319EE58 Slot: 4
	public void Show(PopUpArguments popUpArguments) { }

	// RVA: 0x319EE74 Offset: 0x319EE74 VA: 0x319EE74
	private void PlayAnimationsWithInterval() { }

	// RVA: 0x319F22C Offset: 0x319F22C VA: 0x319F22C
	private void OnDestroy() { }

	// RVA: 0x319F244 Offset: 0x319F244 VA: 0x319F244
	private void SubscribeButtons() { }

	// RVA: 0x319F324 Offset: 0x319F324 VA: 0x319F324
	private void UnsubscribeButtons() { }

	// RVA: 0x319F404 Offset: 0x319F404 VA: 0x319F404
	private void ClosePopup() { }

	// RVA: 0x319F484 Offset: 0x319F484 VA: 0x319F484 Slot: 5
	public Task ShowAsync(PopUpArguments popUpArguments) { }

	// RVA: 0x319F55C Offset: 0x319F55C VA: 0x319F55C Slot: 6
	public Task Hide() { }

	// RVA: 0x319F610 Offset: 0x319F610 VA: 0x319F610 Slot: 7
	public GameObject GetGameObject() { }

	// RVA: 0x319F618 Offset: 0x319F618 VA: 0x319F618
	public void .ctor() { }
}

// Namespace: Modules.Contexts.Home.WheelOfFortune.Scripts.UI
[CreateAssetMenu(fileName = "WheelOfFortuneLobbyButtonAnimationConfig", menuName = "Configs/WheelOfFortuneLobbyButtonAnimationConfig", order = 1)]