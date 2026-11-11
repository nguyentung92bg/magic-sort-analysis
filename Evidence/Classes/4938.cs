public class DailyStuckPopUp : MonoBehaviour, IPopUp // TypeDefIndex: 4938
{
	// Fields
	[SerializeField]
	private PlayOnView _playOnView; // 0x18
	[SerializeField]
	private ADailyStuckPopUpVariant _currentVariant; // 0x20
	private TaskCompletionSource<bool> _popupDisplayFlow; // 0x28

	// Methods

	// RVA: 0x3E2289C Offset: 0x3E2289C VA: 0x3E2289C Slot: 4
	public void Show(PopUpArguments popUpArguments) { }

	// RVA: 0x3E22A48 Offset: 0x3E22A48 VA: 0x3E22A48 Slot: 5
	public Task ShowAsync(PopUpArguments popUpArguments) { }

	// RVA: 0x3E22B24 Offset: 0x3E22B24 VA: 0x3E22B24 Slot: 6
	public Task Hide() { }

	// RVA: 0x3E22BD8 Offset: 0x3E22BD8 VA: 0x3E22BD8 Slot: 7
	public GameObject GetGameObject() { }

	// RVA: 0x3E22BE0 Offset: 0x3E22BE0 VA: 0x3E22BE0
	public void .ctor() { }
}

// Namespace: Modules.Contexts.Home.Daily.Scripts.UI