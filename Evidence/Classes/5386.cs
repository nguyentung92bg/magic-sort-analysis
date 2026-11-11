public class AccountDeleteConfirmationPopup : MonoBehaviour, IPopUp // TypeDefIndex: 5386
{
	// Fields
	[SerializeField]
	private Button _cancelButton; // 0x18
	[SerializeField]
	private Button _deleteButton; // 0x20
	[SerializeField]
	private Button _closeButton; // 0x28
	[SerializeField]
	private TMP_InputField _inputField; // 0x30
	private TaskCompletionSource<bool> _popupDisplayFlow; // 0x38
	private AccountDeletionInfoPopupArgs _args; // 0x40
	private const string _deleteText = "delete my account";

	// Methods

	// RVA: 0x185F1F8 Offset: 0x185F1F8 VA: 0x185F1F8 Slot: 4
	public void Show(PopUpArguments popUpArguments) { }

	// RVA: 0x185F384 Offset: 0x185F384 VA: 0x185F384 Slot: 5
	public Task ShowAsync(PopUpArguments popUpArguments) { }

	// RVA: 0x185F460 Offset: 0x185F460 VA: 0x185F460 Slot: 6
	public Task Hide() { }

	// RVA: 0x185F604 Offset: 0x185F604 VA: 0x185F604
	private void OnDeleteButtonSelected() { }

	// RVA: 0x185F7E0 Offset: 0x185F7E0 VA: 0x185F7E0
	private void OnCancelButtonSelected() { }

	// RVA: 0x185F888 Offset: 0x185F888 VA: 0x185F888 Slot: 7
	public GameObject GetGameObject() { }

	// RVA: 0x185F890 Offset: 0x185F890 VA: 0x185F890
	public void .ctor() { }
}

// Namespace: Modules.Contexts.Application.AccountDelete.UI