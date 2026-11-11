public class FacebookLoginResultPopup : MonoBehaviour, IPopUp // TypeDefIndex: 413
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
	private const string FailDescriptionKey = "FacebookLoginResultPopupFailInfo";
	private const string FailFunctionButtonKey = "TryAgain";
	private const string SuccessHeaderKey = "Successful!";
	private const string SuccessDescriptionKey = "FacebookLoginResultPopupSuccessInfo";
	private const string SuccessFunctionButtonKey = "Continue";
	private const string CancelHeaderKey = "Cancelled!";
	private const string CancelDescriptionKey = "FacebookLoginResultPopupCancelInfo";
	private const string CancelFunctionButtonKey = "TryAgain";
	private const string SignOutHeaderKey = "Disconnected!";
	private const string SignOutDescriptionKey = "FacebookLoginResultPopupSignOutInfo";
	private const string SignOutFunctionButtonKey = "Continue";
	private TaskCompletionSource<bool> popupDisplayFlow; // 0x50
	private FacebookLoginResultPopupKind _popupKind; // 0x58

	// Methods

	// RVA: 0x3DF271C Offset: 0x3DF271C VA: 0x3DF271C Slot: 7
	public GameObject GetGameObject() { }

	// RVA: 0x3DF2724 Offset: 0x3DF2724 VA: 0x3DF2724 Slot: 6
	public Task Hide() { }

	// RVA: 0x3DF27F8 Offset: 0x3DF27F8 VA: 0x3DF27F8 Slot: 4
	public void Show(PopUpArguments popUpArguments) { }

	// RVA: 0x3DF28D8 Offset: 0x3DF28D8 VA: 0x3DF28D8 Slot: 5
	public Task ShowAsync(PopUpArguments popUpArguments) { }

	// RVA: 0x3DF289C Offset: 0x3DF289C VA: 0x3DF289C
	private void SetupPopupBasedOnResult(FacebookLoginResultPopupKind resultKind) { }

	// RVA: 0x3DF2D98 Offset: 0x3DF2D98 VA: 0x3DF2D98
	private void ActivateSignOut() { }

	// RVA: 0x3DF2A14 Offset: 0x3DF2A14 VA: 0x3DF2A14
	private void ActivateSuccess() { }

	// RVA: 0x3DF2B40 Offset: 0x3DF2B40 VA: 0x3DF2B40
	private void ActivateFail() { }

	// RVA: 0x3DF2C6C Offset: 0x3DF2C6C VA: 0x3DF2C6C
	private void ActivateCancel() { }

	// RVA: 0x3DF2EC4 Offset: 0x3DF2EC4 VA: 0x3DF2EC4
	private void SetHeaderText(string text) { }

	// RVA: 0x3DF2EE8 Offset: 0x3DF2EE8 VA: 0x3DF2EE8
	private void SetDescriptionText(string text) { }

	// RVA: 0x3DF2F0C Offset: 0x3DF2F0C VA: 0x3DF2F0C
	private void SetFunctionButtonText(string text) { }

	// RVA: 0x3DF2F30 Offset: 0x3DF2F30 VA: 0x3DF2F30
	private void Awake() { }

	// RVA: 0x3DF3010 Offset: 0x3DF3010 VA: 0x3DF3010
	private void OnDestroy() { }

	// RVA: 0x3DF30F0 Offset: 0x3DF30F0 VA: 0x3DF30F0
	private void ClosePopup() { }

	[AsyncStateMachine(typeof(FacebookLoginResultPopup.<OnFunctionButtonClick>d__36))]
	// RVA: 0x3DF31F0 Offset: 0x3DF31F0 VA: 0x3DF31F0
	private void OnFunctionButtonClick() { }

	// RVA: 0x3DF32A4 Offset: 0x3DF32A4 VA: 0x3DF32A4
	public void .ctor() { }
}

// Namespace: Modules.Infrastructure.Social