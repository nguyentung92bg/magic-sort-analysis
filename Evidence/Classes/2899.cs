public class StreakTournamentInfoPopup : MonoBehaviour, IPopUp // TypeDefIndex: 2899
{
	// Fields
	[SerializeField]
	private StreakTournamentInfoPopupAnimationConfig _animationConfig; // 0x18
	[SerializeField]
	private List<Transform> _transforms; // 0x20
	[SerializeField]
	private Button _closeButton; // 0x28
	private TaskCompletionSource<bool> popupDisplayFlow; // 0x30
	private Sequence _sequence; // 0x38

	// Methods

	// RVA: 0x298039C Offset: 0x298039C VA: 0x298039C
	private void OnDestroy() { }

	// RVA: 0x29803B4 Offset: 0x29803B4 VA: 0x29803B4
	private void SetActiveAll(bool active) { }

	// RVA: 0x2980524 Offset: 0x2980524 VA: 0x2980524
	private void PlayAnimationsWithInterval() { }

	// RVA: 0x29808DC Offset: 0x29808DC VA: 0x29808DC
	private void SubscribeButton() { }

	// RVA: 0x2980968 Offset: 0x2980968 VA: 0x2980968
	private void UnsubscribeButton() { }

	// RVA: 0x29809F4 Offset: 0x29809F4 VA: 0x29809F4
	private void ClosePopup() { }

	// RVA: 0x2980A74 Offset: 0x2980A74 VA: 0x2980A74 Slot: 4
	public void Show(PopUpArguments popUpArguments) { }

	// RVA: 0x2980AD4 Offset: 0x2980AD4 VA: 0x2980AD4 Slot: 5
	public Task ShowAsync(PopUpArguments popUpArguments) { }

	// RVA: 0x2980BA0 Offset: 0x2980BA0 VA: 0x2980BA0 Slot: 6
	public Task Hide() { }

	// RVA: 0x2980C54 Offset: 0x2980C54 VA: 0x2980C54 Slot: 7
	public GameObject GetGameObject() { }

	// RVA: 0x2980C5C Offset: 0x2980C5C VA: 0x2980C5C
	public void .ctor() { }
}

// Namespace: Modules.Contexts.Home.UI.Common.Scripts
[CreateAssetMenu(fileName = "StreakTournamentInfoPopupAnimationConfig", menuName = "Configs/StreakTournamentInfoPopupAnimationConfig", order = 1)]