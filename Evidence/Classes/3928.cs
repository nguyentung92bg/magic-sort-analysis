public class MagicPassInfoPopUp : MonoBehaviour, IPopUp // TypeDefIndex: 3928
{
	// Fields
	[SerializeField]
	private StreakTournamentInfoPopupAnimationConfig _animationConfig; // 0x18
	[SerializeField]
	private List<Transform> _transforms; // 0x20
	[SerializeField]
	private Button _closeButton; // 0x28
	[SerializeField]
	private TextMeshPro _normalLevelKeyCountText; // 0x30
	[SerializeField]
	private TextMeshPro _hardLevelKeyCountText; // 0x38
	[SerializeField]
	private TextMeshPro _superHardLevelKeyCountText; // 0x40
	[SerializeField]
	private ProfileImageView _profileImageView; // 0x48
	private MagicPassViewModel _viewModel; // 0x50
	private bool _isForceOpened; // 0x58
	private TaskCompletionSource<bool> _popupDisplayFlow; // 0x60
	private Sequence _sequence; // 0x68

	// Methods

	// RVA: 0x38E2F44 Offset: 0x38E2F44 VA: 0x38E2F44 Slot: 4
	public void Show(PopUpArguments popUpArguments) { }

	// RVA: 0x38E3690 Offset: 0x38E3690 VA: 0x38E3690 Slot: 5
	public Task ShowAsync(PopUpArguments popUpArguments) { }

	// RVA: 0x38E3170 Offset: 0x38E3170 VA: 0x38E3170
	private void SetActiveAll(bool active) { }

	// RVA: 0x38E32E0 Offset: 0x38E32E0 VA: 0x38E32E0
	private void PlayAnimationsWithInterval() { }

	// RVA: 0x38E3774 Offset: 0x38E3774 VA: 0x38E3774
	private void SubscribeButton() { }

	// RVA: 0x38E3800 Offset: 0x38E3800 VA: 0x38E3800
	private void UnsubscribeButton() { }

	// RVA: 0x38E388C Offset: 0x38E388C VA: 0x38E388C
	private void ClosePopup() { }

	// RVA: 0x38E39A8 Offset: 0x38E39A8 VA: 0x38E39A8 Slot: 6
	public Task Hide() { }

	// RVA: 0x38E3A5C Offset: 0x38E3A5C VA: 0x38E3A5C Slot: 7
	public GameObject GetGameObject() { }

	// RVA: 0x38E3A64 Offset: 0x38E3A64 VA: 0x38E3A64
	private void OnDestroy() { }

	// RVA: 0x38E3A8C Offset: 0x38E3A8C VA: 0x38E3A8C
	public void .ctor() { }
}

// Namespace: Modules.Contexts.Home.MagicPass.Scripts.UI