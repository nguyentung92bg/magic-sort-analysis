public class MagicPassFinishedPopUp : MonoBehaviour, IPopUp // TypeDefIndex: 3923
{
	// Fields
	[SerializeField]
	private Timer _timer; // 0x18
	[SerializeField]
	private TextMeshPro _descriptionText; // 0x20
	[SerializeField]
	private TextMeshPro _descriptionPassActiveText; // 0x28
	private TaskCompletionSource<bool> _popupDisplayFlow; // 0x30

	// Methods

	// RVA: 0x38E2AF0 Offset: 0x38E2AF0 VA: 0x38E2AF0 Slot: 4
	public void Show(PopUpArguments popUpArguments) { }

	// RVA: 0x38E2C0C Offset: 0x38E2C0C VA: 0x38E2C0C Slot: 5
	public Task ShowAsync(PopUpArguments popUpArguments) { }

	// RVA: 0x38E2CC0 Offset: 0x38E2CC0 VA: 0x38E2CC0 Slot: 6
	public Task Hide() { }

	// RVA: 0x38E2D74 Offset: 0x38E2D74 VA: 0x38E2D74 Slot: 7
	public GameObject GetGameObject() { }

	// RVA: 0x38E2D7C Offset: 0x38E2D7C VA: 0x38E2D7C
	public void .ctor() { }
}

// Namespace: Modules.Contexts.Home.MagicPass.Scripts.UI