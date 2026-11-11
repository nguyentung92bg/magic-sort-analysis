public class TeamBanPopup : MonoBehaviour, IPopUp // TypeDefIndex: 2195
{
	// Fields
	[SerializeField]
	private Button _kickButton; // 0x18
	[SerializeField]
	private Button _cancelButton; // 0x20
	[SerializeField]
	private Button[] _closeButtons; // 0x28
	[SerializeField]
	private TMP_Text _sureText; // 0x30
	[SerializeField]
	private ProfileImageView _profileImageView; // 0x38
	[SerializeField]
	private ProfileFrameView _profileFrameView; // 0x40
	private string _kickMemberId; // 0x48
	private TaskCompletionSource<bool> _tcs; // 0x50

	// Methods

	// RVA: 0x2EF9EF8 Offset: 0x2EF9EF8 VA: 0x2EF9EF8 Slot: 4
	public void Show(PopUpArguments popUpArguments) { }

	// RVA: 0x2EFA040 Offset: 0x2EFA040 VA: 0x2EFA040 Slot: 5
	public Task ShowAsync(PopUpArguments popUpArguments) { }

	// RVA: 0x2EFA0E4 Offset: 0x2EFA0E4 VA: 0x2EFA0E4 Slot: 6
	public Task Hide() { }

	// RVA: 0x2EFA190 Offset: 0x2EFA190 VA: 0x2EFA190 Slot: 7
	public GameObject GetGameObject() { }

	// RVA: 0x2EFA198 Offset: 0x2EFA198 VA: 0x2EFA198
	private void Awake() { }

	// RVA: 0x2EFA2F4 Offset: 0x2EFA2F4 VA: 0x2EFA2F4
	private void OnDestroy() { }

	// RVA: 0x2EFA450 Offset: 0x2EFA450 VA: 0x2EFA450
	private void OnKickButtonSelected() { }

	// RVA: 0x2EFA4A4 Offset: 0x2EFA4A4 VA: 0x2EFA4A4
	private void OnCancelButtonSelected() { }

	// RVA: 0x2EFA4F8 Offset: 0x2EFA4F8 VA: 0x2EFA4F8
	public void .ctor() { }
}

// Namespace: Modules.Contexts.Home.Teams.Scripts.UI