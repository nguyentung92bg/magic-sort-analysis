public class PurchaseResultPopup : MonoBehaviour, IPopUp // TypeDefIndex: 2545
{
	// Fields
	[SerializeField]
	private List<Button> closeButtons; // 0x18
	[SerializeField]
	private GameObject successImage; // 0x20
	[SerializeField]
	private GameObject failImage; // 0x28
	[SerializeField]
	private TextMeshPro headerText; // 0x30
	[SerializeField]
	private TextMeshPro descriptionText; // 0x38
	private TaskCompletionSource<bool> popupDisplayFlow; // 0x40

	// Methods

	// RVA: 0x2460240 Offset: 0x2460240 VA: 0x2460240 Slot: 7
	public GameObject GetGameObject() { }

	// RVA: 0x2460248 Offset: 0x2460248 VA: 0x2460248 Slot: 6
	public Task Hide() { }

	// RVA: 0x2460300 Offset: 0x2460300 VA: 0x2460300 Slot: 4
	public void Show(PopUpArguments popUpArguments) { }

	// RVA: 0x2460458 Offset: 0x2460458 VA: 0x2460458 Slot: 5
	public Task ShowAsync(PopUpArguments popUpArguments) { }

	// RVA: 0x246062C Offset: 0x246062C VA: 0x246062C
	private void ActivateSuccess() { }

	// RVA: 0x246073C Offset: 0x246073C VA: 0x246073C
	private void ActivateFail() { }

	// RVA: 0x246084C Offset: 0x246084C VA: 0x246084C
	private void ActivateCancel() { }

	// RVA: 0x246095C Offset: 0x246095C VA: 0x246095C
	private void Awake() { }

	// RVA: 0x2460B00 Offset: 0x2460B00 VA: 0x2460B00
	private void OnDestroy() { }

	// RVA: 0x2460CA4 Offset: 0x2460CA4 VA: 0x2460CA4
	private void ClosePopup() { }

	// RVA: 0x2460D18 Offset: 0x2460D18 VA: 0x2460D18
	public void .ctor() { }
}

// Namespace: Modules.Contexts.Home.Store.Scripts