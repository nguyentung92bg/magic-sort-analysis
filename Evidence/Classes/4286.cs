public class DeleteFriendPopup : MonoBehaviour, IPopUp // TypeDefIndex: 4286
{
	// Fields
	[SerializeField]
	private Button _sureButton; // 0x18
	[SerializeField]
	private Button _cancelButton; // 0x20
	[SerializeField]
	private Button[] _closeButtons; // 0x28
	[SerializeField]
	private ProfileImageView _profileImage; // 0x30
	[SerializeField]
	private ProfileFrameView _profileFrameView; // 0x38
	[SerializeField]
	private TMP_Text _removeText; // 0x40
	private DeleteFriendPopupArgs _args; // 0x48

	// Methods

	// RVA: 0x1C73850 Offset: 0x1C73850 VA: 0x1C73850 Slot: 4
	public void Show(PopUpArguments popUpArguments) { }

	// RVA: 0x1C739D0 Offset: 0x1C739D0 VA: 0x1C739D0 Slot: 5
	public Task ShowAsync(PopUpArguments popUpArguments) { }

	// RVA: 0x1C73A74 Offset: 0x1C73A74 VA: 0x1C73A74 Slot: 6
	public Task Hide() { }

	// RVA: 0x1C73B20 Offset: 0x1C73B20 VA: 0x1C73B20 Slot: 7
	public GameObject GetGameObject() { }

	// RVA: 0x1C73B28 Offset: 0x1C73B28 VA: 0x1C73B28
	private void OnEnable() { }

	// RVA: 0x1C73C98 Offset: 0x1C73C98 VA: 0x1C73C98
	private void OnDisable() { }

	// RVA: 0x1C73E08 Offset: 0x1C73E08 VA: 0x1C73E08
	private void OnSureButtonSelected() { }

	// RVA: 0x1C73E64 Offset: 0x1C73E64 VA: 0x1C73E64
	private void OnCancelButtonSelected() { }

	// RVA: 0x1C73EC0 Offset: 0x1C73EC0 VA: 0x1C73EC0
	private void OnCloseButtonSelected() { }

	// RVA: 0x1C73F1C Offset: 0x1C73F1C VA: 0x1C73F1C
	public void .ctor() { }
}

// Namespace: Modules.Contexts.Home.Friends.Scripts