public class ForceUpdatePopup : MonoBehaviour, IPopUp // TypeDefIndex: 4970
{
	// Fields
	[SerializeField]
	private Button[] _updateButtons; // 0x18
	private TaskCompletionSource<bool> _tcs; // 0x20

	// Methods

	// RVA: 0x3E282DC Offset: 0x3E282DC VA: 0x3E282DC Slot: 4
	public void Show(PopUpArguments popUpArguments) { }

	// RVA: 0x3E28300 Offset: 0x3E28300 VA: 0x3E28300 Slot: 5
	public Task ShowAsync(PopUpArguments popUpArguments) { }

	// RVA: 0x3E283A4 Offset: 0x3E283A4 VA: 0x3E283A4 Slot: 6
	public Task Hide() { }

	// RVA: 0x3E28450 Offset: 0x3E28450 VA: 0x3E28450 Slot: 7
	public GameObject GetGameObject() { }

	// RVA: 0x3E28458 Offset: 0x3E28458 VA: 0x3E28458
	private void Awake() { }

	// RVA: 0x3E28530 Offset: 0x3E28530 VA: 0x3E28530
	private void OnDestroy() { }

	// RVA: 0x3E28608 Offset: 0x3E28608 VA: 0x3E28608
	private void OnUpdateButtonSelected() { }

	// RVA: 0x3E28688 Offset: 0x3E28688 VA: 0x3E28688
	public void .ctor() { }
}

// Namespace: Modules.Contexts.Application.UI