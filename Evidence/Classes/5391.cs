public class AccountDeletionInfoPopup : MonoBehaviour, IPopUp // TypeDefIndex: 5391
{
	// Fields
	[SerializeField]
	private Button _cancelButton; // 0x18
	[SerializeField]
	private Button _deleteButton; // 0x20
	[SerializeField]
	private Button _closeButton; // 0x28
	private TaskCompletionSource<bool> _popupDisplayFlow; // 0x30
	private AccountDeletionInfoPopupArgs _args; // 0x38

	// Methods

	// RVA: 0x18601AC Offset: 0x18601AC VA: 0x18601AC Slot: 4
	public void Show(PopUpArguments popUpArguments) { }

	// RVA: 0x1860338 Offset: 0x1860338 VA: 0x1860338 Slot: 5
	public Task ShowAsync(PopUpArguments popUpArguments) { }

	// RVA: 0x1860414 Offset: 0x1860414 VA: 0x1860414 Slot: 6
	public Task Hide() { }

	// RVA: 0x18605B8 Offset: 0x18605B8 VA: 0x18605B8
	private void OnDeleteButtonSelected() { }

	// RVA: 0x1860660 Offset: 0x1860660 VA: 0x1860660
	private void OnCancelButtonSelected() { }

	// RVA: 0x1860708 Offset: 0x1860708 VA: 0x1860708 Slot: 7
	public GameObject GetGameObject() { }

	// RVA: 0x1860710 Offset: 0x1860710 VA: 0x1860710
	public void .ctor() { }
}

// Namespace: Modules.Contexts.Application.AccountDelete.UI