public class EndlessPortalPopup : MonoBehaviour, IPopUp // TypeDefIndex: 3360
{
	// Fields
	[SerializeField]
	private EndlessPortalController _endlessPortalController; // 0x18
	private TaskCompletionSource<bool> _popupDisplayFlow; // 0x20

	// Methods

	// RVA: 0x3467A14 Offset: 0x3467A14 VA: 0x3467A14 Slot: 4
	public void Show(PopUpArguments popUpArguments) { }

	// RVA: 0x3467D70 Offset: 0x3467D70 VA: 0x3467D70 Slot: 5
	public Task ShowAsync(PopUpArguments popUpArguments) { }

	// RVA: 0x3467E4C Offset: 0x3467E4C VA: 0x3467E4C Slot: 6
	public Task Hide() { }

	// RVA: 0x3468188 Offset: 0x3468188 VA: 0x3468188 Slot: 7
	public GameObject GetGameObject() { }

	// RVA: 0x3468190 Offset: 0x3468190 VA: 0x3468190
	public void .ctor() { }
}

// Namespace: Modules.Contexts.Home.Monetization.EndlessPortal.Scripts