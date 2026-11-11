public class TermsOfUseController : MonoBehaviour // TypeDefIndex: 5302
{
	// Fields
	[SerializeField]
	private Button _termsOfUseButton; // 0x18
	[SerializeField]
	private Button _privacyPolicyButton; // 0x20
	[SerializeField]
	private Button _privacyPolicyButton2; // 0x28
	[SerializeField]
	private Button _confirmButton; // 0x30
	private TaskCompletionSource<bool> _showTaskCompletionSource; // 0x38

	// Methods

	// RVA: 0x1B5134C Offset: 0x1B5134C VA: 0x1B5134C
	public void Show() { }

	// RVA: 0x1B51444 Offset: 0x1B51444 VA: 0x1B51444
	private void CompleteShowTask() { }

	[AsyncStateMachine(typeof(TermsOfUseController.<GetCloseTask>d__7))]
	// RVA: 0x1B514B4 Offset: 0x1B514B4 VA: 0x1B514B4
	public Task GetCloseTask() { }

	// RVA: 0x1B515A0 Offset: 0x1B515A0 VA: 0x1B515A0
	public void .ctor() { }
}

// Namespace: 
[CompilerGenerated]