public class AppleSignOutPopup : MonoBehaviour, IPopUp // TypeDefIndex: 405
{
	// Fields
	[SerializeField]
	private Button signOutButton; // 0x18
	private TaskCompletionSource<bool> popupDisplayFlow; // 0x20

	// Methods

	// RVA: 0x3DF01D0 Offset: 0x3DF01D0 VA: 0x3DF01D0
	private void Awake() { }

	// RVA: 0x3DF025C Offset: 0x3DF025C VA: 0x3DF025C
	private void OnDestroy() { }

	[AsyncStateMachine(typeof(AppleSignOutPopup.<SignOut>d__4))]
	// RVA: 0x3DF02E8 Offset: 0x3DF02E8 VA: 0x3DF02E8
	private void SignOut() { }

	// RVA: 0x3DF0380 Offset: 0x3DF0380 VA: 0x3DF0380 Slot: 4
	public void Show(PopUpArguments popUpArguments) { }

	// RVA: 0x3DF0384 Offset: 0x3DF0384 VA: 0x3DF0384 Slot: 5
	public Task ShowAsync(PopUpArguments popUpArguments) { }

	// RVA: 0x3DF0464 Offset: 0x3DF0464 VA: 0x3DF0464 Slot: 6
	public Task Hide() { }

	// RVA: 0x3DF0538 Offset: 0x3DF0538 VA: 0x3DF0538 Slot: 7
	public GameObject GetGameObject() { }

	// RVA: 0x3DF0540 Offset: 0x3DF0540 VA: 0x3DF0540
	public void .ctor() { }
}

// Namespace: 
[CompilerGenerated]