public class SnitchInfoPopUp : MonoBehaviour, IPopUp // TypeDefIndex: 2620
{
	// Fields
	[SerializeField]
	private StreakTournamentInfoPopupAnimationConfig _animationConfig; // 0x18
	[SerializeField]
	private List<Transform> _transforms; // 0x20
	[SerializeField]
	private Button _closeButton; // 0x28
	[SerializeField]
	private TextMeshPro _maxLevelText; // 0x30
	private TaskCompletionSource<bool> _popupDisplayFlow; // 0x38
	private Sequence _sequence; // 0x40
	private const string max_level_localization_term = "SnitchInfoStep1";

	// Methods

	// RVA: 0x246E9D4 Offset: 0x246E9D4 VA: 0x246E9D4 Slot: 4
	public void Show(PopUpArguments popUpArguments) { }

	// RVA: 0x246F0CC Offset: 0x246F0CC VA: 0x246F0CC Slot: 5
	public Task ShowAsync(PopUpArguments popUpArguments) { }

	// RVA: 0x246EBAC Offset: 0x246EBAC VA: 0x246EBAC
	private void SetActiveAll(bool active) { }

	// RVA: 0x246ED1C Offset: 0x246ED1C VA: 0x246ED1C
	private void PlayAnimationsWithInterval() { }

	// RVA: 0x246F1B0 Offset: 0x246F1B0 VA: 0x246F1B0
	private void SubscribeButton() { }

	// RVA: 0x246F23C Offset: 0x246F23C VA: 0x246F23C
	private void UnsubscribeButton() { }

	// RVA: 0x246F2C8 Offset: 0x246F2C8 VA: 0x246F2C8
	private void ClosePopup() { }

	// RVA: 0x246F348 Offset: 0x246F348 VA: 0x246F348 Slot: 6
	public Task Hide() { }

	// RVA: 0x246F3FC Offset: 0x246F3FC VA: 0x246F3FC Slot: 7
	public GameObject GetGameObject() { }

	// RVA: 0x246F404 Offset: 0x246F404 VA: 0x246F404
	private void OnDestroy() { }

	// RVA: 0x246F41C Offset: 0x246F41C VA: 0x246F41C
	public void .ctor() { }
}

// Namespace: Modules.Contexts.Home.Snitch.Scripts.UI