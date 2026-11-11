public class AccountDeletionCancelPopup : MonoBehaviour, IPopUp // TypeDefIndex: 5389
{
	// Fields
	[SerializeField]
	private Button _cancelButton; // 0x18
	private TaskCompletionSource<bool> _popupDisplayFlow; // 0x20

	// Methods

	// RVA: 0x185FAD8 Offset: 0x185FAD8 VA: 0x185FAD8 Slot: 4
	public void Show(PopUpArguments popUpArguments) { }

	// RVA: 0x185FB64 Offset: 0x185FB64 VA: 0x185FB64 Slot: 5
	public Task ShowAsync(PopUpArguments popUpArguments) { }

	// RVA: 0x185FC30 Offset: 0x185FC30 VA: 0x185FC30 Slot: 6
	public Task Hide() { }

	// RVA: 0x185FD50 Offset: 0x185FD50 VA: 0x185FD50 Slot: 7
	public GameObject GetGameObject() { }

	[AsyncStateMachine(typeof(AccountDeletionCancelPopup.<OnCancelButtonSelected>d__6))]
	// RVA: 0x185FD58 Offset: 0x185FD58 VA: 0x185FD58
	private void OnCancelButtonSelected() { }

	// RVA: 0x185FDF0 Offset: 0x185FDF0 VA: 0x185FDF0
	public void .ctor() { }
}

// Namespace: Modules.Contexts.Application.AccountDelete.UI