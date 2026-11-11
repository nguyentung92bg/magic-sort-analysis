public class NoInternetConnectionPopUp : MonoBehaviour, IPopUp // TypeDefIndex: 5273
{
	// Fields
	[SerializeField]
	private Button _retryButton; // 0x18
	private TaskCompletionSource<bool> _popupDisplayFlow; // 0x20

	// Methods

	// RVA: 0x1CCB7C4 Offset: 0x1CCB7C4 VA: 0x1CCB7C4
	private void RetryAndClosePopup() { }

	// RVA: 0x1CCB860 Offset: 0x1CCB860 VA: 0x1CCB860 Slot: 4
	public void Show(PopUpArguments popUpArguments) { }

	// RVA: 0x1CCB8F0 Offset: 0x1CCB8F0 VA: 0x1CCB8F0 Slot: 5
	public Task ShowAsync(PopUpArguments popUpArguments) { }

	// RVA: 0x1CCB9BC Offset: 0x1CCB9BC VA: 0x1CCB9BC Slot: 6
	public Task Hide() { }

	// RVA: 0x1CCB864 Offset: 0x1CCB864 VA: 0x1CCB864
	private void SubscribeButton() { }

	// RVA: 0x1CCBA78 Offset: 0x1CCBA78 VA: 0x1CCBA78
	private void UnsubscribeButton() { }

	// RVA: 0x1CCBB04 Offset: 0x1CCBB04 VA: 0x1CCBB04 Slot: 7
	public GameObject GetGameObject() { }

	// RVA: 0x1CCB844 Offset: 0x1CCB844 VA: 0x1CCB844
	private bool HasInternetConnection() { }

	// RVA: 0x1CCBB0C Offset: 0x1CCBB0C VA: 0x1CCBB0C
	public void .ctor() { }
}

// Namespace: Modules.Contexts.Application.Events.Scripts.Sessions