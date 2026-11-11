public class BanPopup : MonoBehaviour, IPopUp // TypeDefIndex: 5324
{
	// Fields
	[SerializeField]
	private Button[] _closeButtons; // 0x18
	private TaskCompletionSource<bool> _tcs; // 0x20

	// Methods

	// RVA: 0x1B5CB08 Offset: 0x1B5CB08 VA: 0x1B5CB08 Slot: 4
	public void Show(PopUpArguments popUpArguments) { }

	// RVA: 0x1B5CBA8 Offset: 0x1B5CBA8 VA: 0x1B5CBA8 Slot: 5
	public Task ShowAsync(PopUpArguments popUpArguments) { }

	// RVA: 0x1B5CC4C Offset: 0x1B5CC4C VA: 0x1B5CC4C Slot: 6
	public Task Hide() { }

	// RVA: 0x1B5CCF8 Offset: 0x1B5CCF8 VA: 0x1B5CCF8 Slot: 7
	public GameObject GetGameObject() { }

	// RVA: 0x1B5CD00 Offset: 0x1B5CD00 VA: 0x1B5CD00
	private void Awake() { }

	// RVA: 0x1B5CDD8 Offset: 0x1B5CDD8 VA: 0x1B5CDD8
	private void OnDestroy() { }

	// RVA: 0x1B5CEB0 Offset: 0x1B5CEB0 VA: 0x1B5CEB0
	private void OnCloseButtonSelected() { }

	// RVA: 0x1B5CF0C Offset: 0x1B5CF0C VA: 0x1B5CF0C
	public void .ctor() { }
}

// Namespace: Modules.Contexts.Application.Ban