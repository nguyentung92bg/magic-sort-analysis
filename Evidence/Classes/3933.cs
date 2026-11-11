public class MagicPassPopUp : MonoBehaviour, IPopUp // TypeDefIndex: 3933
{
	// Fields
	[SerializeField]
	private MagicPassRewardsSwipeController _swipeController; // 0x18
	[SerializeField]
	private MagicPassProgressBarView _progressBarView; // 0x20
	[SerializeField]
	private Timer _timer; // 0x28
	[SerializeField]
	private Button _infoButton; // 0x30
	[SerializeField]
	private Button _activateButton; // 0x38
	[SerializeField]
	private Transform _activateButtonParent; // 0x40
	[SerializeField]
	private Transform _activatedButtonParent; // 0x48
	[SerializeField]
	private Transform _inputBlocker; // 0x50
	[SerializeField]
	private MagicPassAnimationConfig _animationConfig; // 0x58
	private MagicPassService _service; // 0x60
	private MagicPassViewModel _viewModel; // 0x68
	private Sequence _progressSequence; // 0x70
	private bool _playIntroduction; // 0x78
	private bool _playInfoIntroduction; // 0x79
	private TaskCompletionSource<bool> _popupDisplayFlow; // 0x80

	// Methods

	// RVA: 0x38E4EB8 Offset: 0x38E4EB8 VA: 0x38E4EB8 Slot: 4
	public void Show(PopUpArguments popUpArguments) { }

	// RVA: 0x38E5680 Offset: 0x38E5680 VA: 0x38E5680
	private void UpdateActivateButtonView() { }

	// RVA: 0x38E56E8 Offset: 0x38E56E8 VA: 0x38E56E8
	private void PlayProgressAnimation() { }

	// RVA: 0x38E7224 Offset: 0x38E7224 VA: 0x38E7224
	private void UpdateLastSeenProgress() { }

	// RVA: 0x38E72B4 Offset: 0x38E72B4 VA: 0x38E72B4
	private void UpdateViewModel() { }

	// RVA: 0x38E731C Offset: 0x38E731C VA: 0x38E731C
	private void OnMagicPassActivated() { }

	// RVA: 0x38E7348 Offset: 0x38E7348 VA: 0x38E7348
	private void OnStepClaimed(int step) { }

	// RVA: 0x38E734C Offset: 0x38E734C VA: 0x38E734C
	private void OnInfoButtonClicked() { }

	// RVA: 0x38E7354 Offset: 0x38E7354 VA: 0x38E7354
	private void OpenInfoPopUp(MagicPassInfoPopUpImpressionSource source) { }

	// RVA: 0x38E7430 Offset: 0x38E7430 VA: 0x38E7430
	private void OnActivateButtonClicked() { }

	// RVA: 0x38E7438 Offset: 0x38E7438 VA: 0x38E7438
	private void OpenActivationPopUp(MagicPassActivationSource source) { }

	// RVA: 0x38E7514 Offset: 0x38E7514 VA: 0x38E7514
	private void SetInputBlockerActive(bool isActive) { }

	// RVA: 0x38E7544 Offset: 0x38E7544 VA: 0x38E7544 Slot: 5
	public Task ShowAsync(PopUpArguments popUpArguments) { }

	// RVA: 0x38E7620 Offset: 0x38E7620 VA: 0x38E7620 Slot: 6
	public Task Hide() { }

	// RVA: 0x38E793C Offset: 0x38E793C VA: 0x38E793C Slot: 7
	public GameObject GetGameObject() { }

	// RVA: 0x38E7944 Offset: 0x38E7944 VA: 0x38E7944
	public void .ctor() { }

	[CompilerGenerated]
	// RVA: 0x38E794C Offset: 0x38E794C VA: 0x38E794C
	private void <PlayProgressAnimation>b__17_0() { }

	[CompilerGenerated]
	// RVA: 0x38E7954 Offset: 0x38E7954 VA: 0x38E7954
	private void <PlayProgressAnimation>b__17_1() { }

	[CompilerGenerated]
	// RVA: 0x38E795C Offset: 0x38E795C VA: 0x38E795C
	private void <PlayProgressAnimation>b__17_2() { }

	[CompilerGenerated]
	// RVA: 0x38E7974 Offset: 0x38E7974 VA: 0x38E7974
	private void <PlayProgressAnimation>b__17_3() { }

	[CompilerGenerated]
	// RVA: 0x38E797C Offset: 0x38E797C VA: 0x38E797C
	private void <PlayProgressAnimation>b__17_4() { }
}

// Namespace: 
[CompilerGenerated]
[Serializable]