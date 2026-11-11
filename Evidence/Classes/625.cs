public abstract class APopup : MonoBehaviour, IPopUp // TypeDefIndex: 625
{
	// Fields
	private TaskCompletionSource<bool> _popupDisplayFlow; // 0x18

	// Methods

	// RVA: 0x400E21C Offset: 0x400E21C VA: 0x400E21C Slot: 5
	public Task ShowAsync(PopUpArguments popupArguments) { }

	// RVA: -1 Offset: -1 Slot: 8
	public abstract void Show(PopUpArguments popupArguments);

	// RVA: 0x400E2D8 Offset: 0x400E2D8 VA: 0x400E2D8
	protected void Close() { }

	// RVA: 0x400E34C Offset: 0x400E34C VA: 0x400E34C Slot: 6
	public Task Hide() { }

	// RVA: 0x400E410 Offset: 0x400E410 VA: 0x400E410 Slot: 9
	protected virtual void OnClose() { }

	// RVA: 0x400E414 Offset: 0x400E414 VA: 0x400E414 Slot: 7
	public GameObject GetGameObject() { }

	// RVA: 0x400E41C Offset: 0x400E41C VA: 0x400E41C
	protected void .ctor() { }
}

// Namespace: Modules.Infrastructure.UI.Common.Scripts.PopUp