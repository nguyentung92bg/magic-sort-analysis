public class FacebookSignOutPopup : MonoBehaviour, IPopUp // TypeDefIndex: 425
{
	// Fields
	[SerializeField]
	private Button signOutButton; // 0x18
	private TaskCompletionSource<bool> popupDisplayFlow; // 0x20

	// Methods

	// RVA: 0x3D19834 Offset: 0x3D19834 VA: 0x3D19834
	private void Awake() { }

	// RVA: 0x3D198C0 Offset: 0x3D198C0 VA: 0x3D198C0
	private void OnDestroy() { }

	[AsyncStateMachine(typeof(FacebookSignOutPopup.<SignOut>d__4))]
	// RVA: 0x3D1994C Offset: 0x3D1994C VA: 0x3D1994C
	private void SignOut() { }

	// RVA: 0x3D199E4 Offset: 0x3D199E4 VA: 0x3D199E4 Slot: 4
	public void Show(PopUpArguments popUpArguments) { }

	// RVA: 0x3D199E8 Offset: 0x3D199E8 VA: 0x3D199E8 Slot: 5
	public Task ShowAsync(PopUpArguments popUpArguments) { }

	// RVA: 0x3D19AC8 Offset: 0x3D19AC8 VA: 0x3D19AC8 Slot: 6
	public Task Hide() { }

	// RVA: 0x3D19B9C Offset: 0x3D19B9C VA: 0x3D19B9C Slot: 7
	public GameObject GetGameObject() { }

	// RVA: 0x3D19BA4 Offset: 0x3D19BA4 VA: 0x3D19BA4
	public void .ctor() { }
}

// Namespace: Modules.Infrastructure.Social