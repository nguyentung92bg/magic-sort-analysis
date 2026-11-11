public class MergeMiniGameJoinPopUp : MonoBehaviour, IPopUp // TypeDefIndex: 3612
{
	// Fields
	[SerializeField]
	private Button _infoPopupButton; // 0x18
	[SerializeField]
	private Button _closeButton; // 0x20
	[SerializeField]
	private Button _joinButton; // 0x28
	[SerializeField]
	private Timer _timer; // 0x30
	private TaskCompletionSource<bool> _popupDisplayFlow; // 0x38
	private MergeMiniGameService _mergeMiniGameService; // 0x40

	// Methods

	// RVA: 0x3FADCB8 Offset: 0x3FADCB8 VA: 0x3FADCB8
	private void Awake() { }

	// RVA: 0x3FADDE4 Offset: 0x3FADDE4 VA: 0x3FADDE4
	private void OnDestroy() { }

	// RVA: 0x3FADF10 Offset: 0x3FADF10 VA: 0x3FADF10
	private void OpenMergeMiniGameInfoPopUp() { }

	// RVA: 0x3FADFF8 Offset: 0x3FADFF8 VA: 0x3FADFF8 Slot: 4
	public void Show(PopUpArguments popUpArguments) { }

	[AsyncStateMachine(typeof(MergeMiniGameJoinPopUp.<JoinButtonOnSelectSuccessEvent>d__10))]
	// RVA: 0x3FAE138 Offset: 0x3FAE138 VA: 0x3FAE138
	private void JoinButtonOnSelectSuccessEvent() { }

	// RVA: 0x3FAE1EC Offset: 0x3FAE1EC VA: 0x3FAE1EC
	private void CloseButtonSuccessEvent() { }

	// RVA: 0x3FAE274 Offset: 0x3FAE274 VA: 0x3FAE274 Slot: 5
	public Task ShowAsync(PopUpArguments popUpArguments) { }

	// RVA: 0x3FAE340 Offset: 0x3FAE340 VA: 0x3FAE340 Slot: 6
	public Task Hide() { }

	// RVA: 0x3FAE3F4 Offset: 0x3FAE3F4 VA: 0x3FAE3F4 Slot: 7
	public GameObject GetGameObject() { }

	// RVA: 0x3FAE3FC Offset: 0x3FAE3FC VA: 0x3FAE3FC
	public void .ctor() { }
}

// Namespace: 
[CompilerGenerated]