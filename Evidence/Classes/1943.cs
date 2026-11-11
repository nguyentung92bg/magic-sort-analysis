public class WheelOfFortunePopUp : MonoBehaviour, IPopUp // TypeDefIndex: 1943
{
	// Fields
	[SerializeField]
	private WheelOfFortuneTitle _title; // 0x18
	[SerializeField]
	private Button _infoButton; // 0x20
	[SerializeField]
	private Button _closeButton; // 0x28
	[SerializeField]
	private Timer _timer; // 0x30
	[SerializeField]
	private WheelOfFortuneController _wheelOfFortuneController; // 0x38
	private WheelOfFortuneViewModel _viewModel; // 0x40
	private WheelOfFortuneService _service; // 0x48
	private TaskCompletionSource<bool> _popupDisplayFlow; // 0x50
	private bool _playInfoIntroduction; // 0x58
	private Sequence _progressSequence; // 0x60

	// Methods

	// RVA: 0x31A9F80 Offset: 0x31A9F80 VA: 0x31A9F80 Slot: 4
	public void Show(PopUpArguments popUpArguments) { }

	// RVA: 0x31AA5C0 Offset: 0x31AA5C0 VA: 0x31AA5C0 Slot: 5
	public Task ShowAsync(PopUpArguments popUpArguments) { }

	// RVA: 0x31AA69C Offset: 0x31AA69C VA: 0x31AA69C Slot: 6
	public Task Hide() { }

	// RVA: 0x31AA8DC Offset: 0x31AA8DC VA: 0x31AA8DC
	private void OnCloseButtonClicked() { }

	// RVA: 0x31AA57C Offset: 0x31AA57C VA: 0x31AA57C
	private void PlayNextStageAnimationReturnFromCollection() { }

	// RVA: 0x31AA830 Offset: 0x31AA830 VA: 0x31AA830
	private void UpdateLastSeenProgress() { }

	// RVA: 0x31AAA18 Offset: 0x31AAA18 VA: 0x31AAA18 Slot: 7
	public GameObject GetGameObject() { }

	// RVA: 0x31AAA20 Offset: 0x31AAA20 VA: 0x31AAA20
	private void OnInfoButtonClicked() { }

	// RVA: 0x31AA480 Offset: 0x31AA480 VA: 0x31AA480
	private void OpenInfoPopUp(WheelOfFortuneInfoPopUpImpressionSource source) { }

	// RVA: 0x31AAA28 Offset: 0x31AAA28 VA: 0x31AAA28
	public void .ctor() { }
}

// Namespace: Modules.Contexts.Home.WheelOfFortune.Commands