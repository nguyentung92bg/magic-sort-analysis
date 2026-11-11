public class SplashSupportButton : MonoBehaviour // TypeDefIndex: 5299
{
	// Fields
	[SerializeField]
	private Button _supportButton; // 0x18
	[SerializeField]
	private GameObject _root; // 0x20
	private const float ActivationDelay = 10;
	private CancellationTokenSource _cts; // 0x28

	// Methods

	// RVA: 0x1B50514 Offset: 0x1B50514 VA: 0x1B50514
	public void Show() { }

	// RVA: 0x1B506AC Offset: 0x1B506AC VA: 0x1B506AC
	public void Hide() { }

	// RVA: 0x1B50794 Offset: 0x1B50794 VA: 0x1B50794
	private void OnSupportButtonClicked() { }

	[AsyncStateMachine(typeof(SplashSupportButton.<WaitForActivation>d__7))]
	// RVA: 0x1B505F4 Offset: 0x1B505F4 VA: 0x1B505F4
	private void WaitForActivation() { }

	// RVA: 0x1B50798 Offset: 0x1B50798 VA: 0x1B50798
	private void SendEmail() { }

	// RVA: 0x1B50C2C Offset: 0x1B50C2C VA: 0x1B50C2C
	public void .ctor() { }
}

// Namespace: Modules.Contexts.Application.Common.Scripts