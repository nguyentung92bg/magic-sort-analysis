public class AppleButton : MonoBehaviour // TypeDefIndex: 2824
{
	// Fields
	[SerializeField]
	private GameObject _signOutGameObject; // 0x18
	[SerializeField]
	private GameObject _signInGameObject; // 0x20
	[SerializeField]
	private Button _signInButton; // 0x28
	[SerializeField]
	private Button _signOutButton; // 0x30
	private bool _isLoggedIn; // 0x38

	// Methods

	// RVA: 0x2DC7BA8 Offset: 0x2DC7BA8 VA: 0x2DC7BA8
	public void Awake() { }

	// RVA: 0x2DC7E54 Offset: 0x2DC7E54 VA: 0x2DC7E54
	public void OnDestroy() { }

	// RVA: 0x2DC7D14 Offset: 0x2DC7D14 VA: 0x2DC7D14
	private void UpdateView() { }

	// RVA: 0x2DC7FB8 Offset: 0x2DC7FB8 VA: 0x2DC7FB8
	private void OnButtonClick() { }

	// RVA: 0x2DC8060 Offset: 0x2DC8060 VA: 0x2DC8060
	private void Login() { }

	[AsyncStateMachine(typeof(AppleButton.<Disconnect>d__10))]
	// RVA: 0x2DC7FC8 Offset: 0x2DC7FC8 VA: 0x2DC7FC8
	private void Disconnect() { }

	// RVA: 0x2DC80DC Offset: 0x2DC80DC VA: 0x2DC80DC
	public void .ctor() { }
}

// Namespace: Modules.Contexts.Home.SettingsPopUp.Scripts