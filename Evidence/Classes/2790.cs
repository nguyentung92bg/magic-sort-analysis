public class SkyJumpJoinPopUp : MonoBehaviour, IPopUp // TypeDefIndex: 2790
{
	// Fields
	private TaskCompletionSource<bool> _popupDisplayFlow; // 0x18
	[SerializeField]
	private Button _joinButton; // 0x20
	[SerializeField]
	private GameObject _joinableUIContainer; // 0x28
	[SerializeField]
	private GameObject _notJoinableUIContainer; // 0x30
	private SkyJumpService _skyJumpService; // 0x38
	private SkyJumpJoinPopUpArguments _popUpArguments; // 0x40

	// Methods

	// RVA: 0x2F1FB94 Offset: 0x2F1FB94 VA: 0x2F1FB94
	private void Awake() { }

	// RVA: 0x2F1FC20 Offset: 0x2F1FC20 VA: 0x2F1FC20
	private void OnDestroy() { }

	// RVA: 0x2F1FCAC Offset: 0x2F1FCAC VA: 0x2F1FCAC Slot: 4
	public void Show(PopUpArguments popUpArguments) { }

	[AsyncStateMachine(typeof(SkyJumpJoinPopUp.<OnJoinJoinButtonDown>d__9))]
	// RVA: 0x2F1FEA4 Offset: 0x2F1FEA4 VA: 0x2F1FEA4
	private void OnJoinJoinButtonDown() { }

	// RVA: 0x2F1FF5C Offset: 0x2F1FF5C VA: 0x2F1FF5C Slot: 5
	public Task ShowAsync(PopUpArguments popUpArguments) { }

	// RVA: 0x2F20010 Offset: 0x2F20010 VA: 0x2F20010 Slot: 6
	public Task Hide() { }

	// RVA: 0x2F200C4 Offset: 0x2F200C4 VA: 0x2F200C4 Slot: 7
	public GameObject GetGameObject() { }

	// RVA: 0x2F200CC Offset: 0x2F200CC VA: 0x2F200CC
	public void .ctor() { }
}

// Namespace: Modules.Contexts.Home.SkyJump.Scripts.UI