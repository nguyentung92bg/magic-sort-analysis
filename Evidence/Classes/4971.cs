public class SoftUpdatePopup : MonoBehaviour, IPopUp // TypeDefIndex: 4971
{
	// Fields
	[SerializeField]
	private Button[] _updateButtons; // 0x18
	[SerializeField]
	private Button[] _closeButtons; // 0x20
	private TaskCompletionSource<bool> _tcs; // 0x28

	// Methods

	// RVA: 0x3E28690 Offset: 0x3E28690 VA: 0x3E28690 Slot: 4
	public void Show(PopUpArguments popUpArguments) { }

	// RVA: 0x3E286B4 Offset: 0x3E286B4 VA: 0x3E286B4 Slot: 5
	public Task ShowAsync(PopUpArguments popUpArguments) { }

	// RVA: 0x3E28758 Offset: 0x3E28758 VA: 0x3E28758 Slot: 6
	public Task Hide() { }

	// RVA: 0x3E28804 Offset: 0x3E28804 VA: 0x3E28804 Slot: 7
	public GameObject GetGameObject() { }

	// RVA: 0x3E2880C Offset: 0x3E2880C VA: 0x3E2880C
	private void Awake() { }

	// RVA: 0x3E28964 Offset: 0x3E28964 VA: 0x3E28964
	private void OnDestroy() { }

	// RVA: 0x3E28ABC Offset: 0x3E28ABC VA: 0x3E28ABC
	private void OnCloseButtonSelected() { }

	// RVA: 0x3E28B10 Offset: 0x3E28B10 VA: 0x3E28B10
	private void OnUpdateButtonSelected() { }

	// RVA: 0x3E28BBC Offset: 0x3E28BBC VA: 0x3E28BBC
	public void .ctor() { }
}

// Namespace: 
[CompilerGenerated]