public class JourneyPopup : MonoBehaviour, IPopUp // TypeDefIndex: 4100
{
	// Fields
	[SerializeField]
	private JourneyController _journeyController; // 0x18
	[SerializeField]
	private Button _closeButton; // 0x20

	// Methods

	// RVA: 0x3A7F57C Offset: 0x3A7F57C VA: 0x3A7F57C Slot: 4
	public void Show(PopUpArguments popUpArguments) { }

	// RVA: 0x3A7F5B4 Offset: 0x3A7F5B4 VA: 0x3A7F5B4 Slot: 5
	public Task ShowAsync(PopUpArguments popUpArguments) { }

	// RVA: 0x3A7F648 Offset: 0x3A7F648 VA: 0x3A7F648 Slot: 6
	public Task Hide() { }

	// RVA: 0x3A7F6F4 Offset: 0x3A7F6F4 VA: 0x3A7F6F4 Slot: 7
	public GameObject GetGameObject() { }

	// RVA: 0x3A7F6FC Offset: 0x3A7F6FC VA: 0x3A7F6FC
	private void Awake() { }

	// RVA: 0x3A7F7C8 Offset: 0x3A7F7C8 VA: 0x3A7F7C8
	private void OnDestroy() { }

	// RVA: 0x3A7F860 Offset: 0x3A7F860 VA: 0x3A7F860
	private void OnCloseButtonSelected() { }

	// RVA: 0x3A7F8D4 Offset: 0x3A7F8D4 VA: 0x3A7F8D4
	public Tween PlayRewardClaimAnimations() { }

	// RVA: 0x3A7F8EC Offset: 0x3A7F8EC VA: 0x3A7F8EC
	public Tween PlayPosterClaimAnimations() { }

	// RVA: 0x3A7F91C Offset: 0x3A7F91C VA: 0x3A7F91C
	public void .ctor() { }
}

// Namespace: Modules.Contexts.Home.Journey.Scripts.UI