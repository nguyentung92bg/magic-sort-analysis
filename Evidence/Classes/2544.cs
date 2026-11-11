public class PurchaseFailedPopup : MonoBehaviour, IPopUp // TypeDefIndex: 2544
{
	// Fields
	[SerializeField]
	private Button closeButton; // 0x18
	private TaskCompletionSource<bool> popupDisplayFlow; // 0x20

	// Methods

	// RVA: 0x245FF08 Offset: 0x245FF08 VA: 0x245FF08 Slot: 7
	public GameObject GetGameObject() { }

	// RVA: 0x245FF10 Offset: 0x245FF10 VA: 0x245FF10 Slot: 6
	public Task Hide() { }

	// RVA: 0x245FFC8 Offset: 0x245FFC8 VA: 0x245FFC8 Slot: 4
	public void Show(PopUpArguments popUpArguments) { }

	// RVA: 0x245FFEC Offset: 0x245FFEC VA: 0x245FFEC Slot: 5
	public Task ShowAsync(PopUpArguments popUpArguments) { }

	// RVA: 0x24600AC Offset: 0x24600AC VA: 0x24600AC
	private void Awake() { }

	// RVA: 0x2460138 Offset: 0x2460138 VA: 0x2460138
	private void OnDestroy() { }

	// RVA: 0x24601C4 Offset: 0x24601C4 VA: 0x24601C4
	private void ClosePopup() { }

	// RVA: 0x2460238 Offset: 0x2460238 VA: 0x2460238
	public void .ctor() { }
}

// Namespace: Modules.Contexts.Home.Store.Scripts