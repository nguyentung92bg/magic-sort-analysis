public class AppleLoginResultPopUp : MonoBehaviour, IPopUp // TypeDefIndex: 394
{
	// Fields
	[SerializeField]
	private Button closeButton; // 0x18
	[SerializeField]
	private Button functionButton; // 0x20
	[SerializeField]
	private GameObject successImage; // 0x28
	[SerializeField]
	private GameObject failImage; // 0x30
	[SerializeField]
	private TextMeshPro headerText; // 0x38
	[SerializeField]
	private TextMeshPro descriptionText; // 0x40
	[SerializeField]
	private TextMeshPro functionButtonText; // 0x48
	private const string FailHeaderKey = "Fail!";
	private const string FailDescriptionKey = "AppleLoginResultPopupFailInfo";
	private const string FailFunctionButtonKey = "TryAgain";
	private const string SuccessHeaderKey = "Successful!";
	private const string SuccessDescriptionKey = "AppleLoginResultPopupSuccessInfo";
	private const string SuccessFunctionButtonKey = "Continue";
	private const string CancelHeaderKey = "Cancelled!";
	private const string CancelDescriptionKey = "AppleLoginResultPopupCancelInfo";
	private const string CancelFunctionButtonKey = "TryAgain";
	private const string SignOutHeaderKey = "Disconnected!";
	private const string SignOutDescriptionKey = "AppleLoginResultPopupSignOutInfo";
	private const string SignOutFunctionButtonKey = "Continue";
	private TaskCompletionSource<bool> _popupDisplayFlow; // 0x50
	private AppleLoginResultPopupKind _popupKind; // 0x58

	// Methods

	// RVA: 0x3DEDA90 Offset: 0x3DEDA90 VA: 0x3DEDA90 Slot: 4
	public void Show(PopUpArguments popUpArguments) { }

	// RVA: 0x3DEDB70 Offset: 0x3DEDB70 VA: 0x3DEDB70 Slot: 5
	public Task ShowAsync(PopUpArguments popUpArguments) { }

	// RVA: 0x3DEDCAC Offset: 0x3DEDCAC VA: 0x3DEDCAC Slot: 6
	public Task Hide() { }

	// RVA: 0x3DEDD80 Offset: 0x3DEDD80 VA: 0x3DEDD80 Slot: 7
	public GameObject GetGameObject() { }

	// RVA: 0x3DEDB34 Offset: 0x3DEDB34 VA: 0x3DEDB34
	private void SetupPopupBasedOnResult(AppleLoginResultPopupKind resultKind) { }

	// RVA: 0x3DEE10C Offset: 0x3DEE10C VA: 0x3DEE10C
	private void ActivateSignOut() { }

	// RVA: 0x3DEDD88 Offset: 0x3DEDD88 VA: 0x3DEDD88
	private void ActivateSuccess() { }

	// RVA: 0x3DEDEB4 Offset: 0x3DEDEB4 VA: 0x3DEDEB4
	private void ActivateFail() { }

	// RVA: 0x3DEDFE0 Offset: 0x3DEDFE0 VA: 0x3DEDFE0
	private void ActivateCancel() { }

	// RVA: 0x3DEE238 Offset: 0x3DEE238 VA: 0x3DEE238
	private void SetHeaderText(string text) { }

	// RVA: 0x3DEE25C Offset: 0x3DEE25C VA: 0x3DEE25C
	private void SetDescriptionText(string text) { }

	// RVA: 0x3DEE280 Offset: 0x3DEE280 VA: 0x3DEE280
	private void SetFunctionButtonText(string text) { }

	// RVA: 0x3DEE2A4 Offset: 0x3DEE2A4 VA: 0x3DEE2A4
	private void Awake() { }

	// RVA: 0x3DEE384 Offset: 0x3DEE384 VA: 0x3DEE384
	private void OnDestroy() { }

	// RVA: 0x3DEE464 Offset: 0x3DEE464 VA: 0x3DEE464
	private void ClosePopup() { }

	[AsyncStateMachine(typeof(AppleLoginResultPopUp.<OnFunctionButtonClick>d__36))]
	// RVA: 0x3DEE564 Offset: 0x3DEE564 VA: 0x3DEE564
	private void OnFunctionButtonClick() { }

	// RVA: 0x3DEE618 Offset: 0x3DEE618 VA: 0x3DEE618
	public void .ctor() { }
}

// Namespace: Modules.Infrastructure.Social