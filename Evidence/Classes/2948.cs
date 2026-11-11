public class ProfilePopup : MonoBehaviour, IPopUp // TypeDefIndex: 2948
{
	// Fields
	[SerializeField]
	private List<Button> _profilePopupCloseButtons; // 0x18
	[SerializeField]
	private PopupAnimationController _popupAnimationController; // 0x20
	private Tween _animationTween; // 0x28

	// Methods

	// RVA: 0x298BEB8 Offset: 0x298BEB8 VA: 0x298BEB8 Slot: 4
	public void Show(PopUpArguments popUpArguments) { }

	// RVA: 0x298C0D0 Offset: 0x298C0D0 VA: 0x298C0D0 Slot: 5
	public Task ShowAsync(PopUpArguments popUpArguments) { }

	// RVA: 0x298C164 Offset: 0x298C164 VA: 0x298C164 Slot: 6
	public Task Hide() { }

	// RVA: 0x298C39C Offset: 0x298C39C VA: 0x298C39C Slot: 7
	public GameObject GetGameObject() { }

	[AsyncStateMachine(typeof(ProfilePopup.<ClosePopup>d__7))]
	// RVA: 0x298C3A4 Offset: 0x298C3A4 VA: 0x298C3A4
	private void ClosePopup() { }

	[AsyncStateMachine(typeof(ProfilePopup.<CloseAsync>d__8))]
	// RVA: 0x298C45C Offset: 0x298C45C VA: 0x298C45C
	private Task CloseAsync() { }

	// RVA: 0x298C528 Offset: 0x298C528 VA: 0x298C528
	public void .ctor() { }
}

// Namespace: Modules.Contexts.Home.UI.Profile.Scripts
[CreateAssetMenu(fileName = "ProfilePopupAnimationConfig", menuName = "Configs/ProfilePopupAnimationConfig")]