public class FacebookButton : MonoBehaviour // TypeDefIndex: 2925
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
	[SerializeField]
	private Transform _signInIcon; // 0x38
	[SerializeField]
	private Transform _signOutIcon; // 0x40
	[SerializeField]
	private GameObject _rewardContainer; // 0x48
	[SerializeField]
	private FacebookSignInRewardView _rewardView; // 0x50
	[SerializeField]
	private RectTransform _signInLabelRect; // 0x58
	[SerializeField]
	private float _defaultWidthSignInRect; // 0x60
	[SerializeField]
	private float _noRewardsWidthSignInRect; // 0x64
	private bool _isLoggedIn; // 0x68

	// Methods

	// RVA: 0x29863DC Offset: 0x29863DC VA: 0x29863DC
	public void Awake() { }

	// RVA: 0x2986690 Offset: 0x2986690 VA: 0x2986690
	public void OnDestroy() { }

	// RVA: 0x2986548 Offset: 0x2986548 VA: 0x2986548
	private void UpdateView() { }

	// RVA: 0x2986948 Offset: 0x2986948 VA: 0x2986948
	private void OnButtonClick() { }

	// RVA: 0x29869F0 Offset: 0x29869F0 VA: 0x29869F0
	private void Login() { }

	[AsyncStateMachine(typeof(FacebookButton.<Disconnect>d__17))]
	// RVA: 0x2986958 Offset: 0x2986958 VA: 0x2986958
	private void Disconnect() { }

	// RVA: 0x29867FC Offset: 0x29867FC VA: 0x29867FC
	private void InitializeRewardContainer() { }

	// RVA: 0x2986A6C Offset: 0x2986A6C VA: 0x2986A6C
	public void .ctor() { }
}

// Namespace: Modules.Contexts.Home.UI.SettingsPopUp.Scripts