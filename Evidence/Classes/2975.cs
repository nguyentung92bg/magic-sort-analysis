public class ProfileForceNameChangeArrowPopup : MonoBehaviour, IPopUp // TypeDefIndex: 2975
{
	// Fields
	[SerializeField]
	private SortingGroup _sortingGroup; // 0x18
	[SerializeField]
	private SpriteRenderer _background; // 0x20
	[SerializeField]
	private UITouchableElement _backgroundTouchableElement; // 0x28
	[SerializeField]
	private AnimationCurve _backgroundFadeInCurve; // 0x30
	[SerializeField]
	private Transform _arrowTransform; // 0x38
	[SerializeField]
	private Vector3 _arrowOffset; // 0x40
	private ProfileButton _profileButton; // 0x50
	private SortingGroup _profileButtonSortingGroup; // 0x58
	private int _profileButtonDefaultRaycastOrder; // 0x60
	private SyncService _syncService; // 0x68
	private TaskCompletionSource<bool> _popupDisplayFlow; // 0x70
	private Tween _arrowTween; // 0x78
	private Tween _backgroundFadeTween; // 0x80

	// Methods

	// RVA: 0x2AE2F04 Offset: 0x2AE2F04 VA: 0x2AE2F04 Slot: 5
	public Task ShowAsync(PopUpArguments popUpArguments) { }

	// RVA: 0x2AE2FE0 Offset: 0x2AE2FE0 VA: 0x2AE2FE0 Slot: 4
	public void Show(PopUpArguments popUpArguments) { }

	// RVA: 0x2AE344C Offset: 0x2AE344C VA: 0x2AE344C Slot: 6
	public Task Hide() { }

	// RVA: 0x2AE3634 Offset: 0x2AE3634 VA: 0x2AE3634
	private void OnProfileButtonClicked() { }

	// RVA: 0x2AE32DC Offset: 0x2AE32DC VA: 0x2AE32DC
	private void FadeInBackground() { }

	// RVA: 0x2AE3394 Offset: 0x2AE3394 VA: 0x2AE3394
	private void PlayArrowAnimation() { }

	// RVA: 0x2AE3758 Offset: 0x2AE3758 VA: 0x2AE3758 Slot: 7
	public GameObject GetGameObject() { }

	// RVA: 0x2AE3760 Offset: 0x2AE3760 VA: 0x2AE3760
	public void .ctor() { }
}

// Namespace: Modules.Contexts.Home.Profile.Scripts