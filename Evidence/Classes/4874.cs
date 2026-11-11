public class BoatRushPopUp : MonoBehaviour, IPopUp // TypeDefIndex: 4874
{
	// Fields
	[SerializeField]
	private BoatRushView _boatRushView; // 0x18
	[SerializeField]
	private Timer _timer; // 0x20
	[SerializeField]
	private TMP_Text _continueButtonText; // 0x28
	[SerializeField]
	private Button _continueButton; // 0x30
	[SerializeField]
	private Button _infoButton; // 0x38
	[SerializeField]
	private GameObject _closeButton; // 0x40
	private TaskCompletionSource<bool> _popupDisplayFlow; // 0x48
	private BoatRushService _boatRushService; // 0x50
	private BoatRushRaceViewModel _viewModel; // 0x58

	// Methods

	// RVA: 0x40FBEA4 Offset: 0x40FBEA4 VA: 0x40FBEA4
	private void Awake() { }

	// RVA: 0x40FC01C Offset: 0x40FC01C VA: 0x40FC01C
	private void OnDestroy() { }

	// RVA: 0x40FC194 Offset: 0x40FC194 VA: 0x40FC194 Slot: 4
	public void Show(PopUpArguments popUpArguments) { }

	// RVA: 0x40FC2C0 Offset: 0x40FC2C0 VA: 0x40FC2C0
	private void PrepareUIView() { }

	// RVA: 0x40FC728 Offset: 0x40FC728 VA: 0x40FC728
	private void SetInProgressView() { }

	// RVA: 0x40FC550 Offset: 0x40FC550 VA: 0x40FC550
	private void SetFirstShowView() { }

	// RVA: 0x40FC338 Offset: 0x40FC338 VA: 0x40FC338
	private void SetResultView() { }

	// RVA: 0x40FCCF4 Offset: 0x40FCCF4 VA: 0x40FCCF4
	public Task PlayClaimAnimation() { }

	// RVA: 0x40FCDF8 Offset: 0x40FCDF8 VA: 0x40FCDF8
	private void TryClaimRace() { }

	// RVA: 0x40FD1C4 Offset: 0x40FD1C4 VA: 0x40FD1C4
	private void OnContinueButtonClicked() { }

	// RVA: 0x40FD1C8 Offset: 0x40FD1C8 VA: 0x40FD1C8
	private void OnInfoButtonSelected() { }

	// RVA: 0x40FD290 Offset: 0x40FD290 VA: 0x40FD290 Slot: 5
	public Task ShowAsync(PopUpArguments popUpArguments) { }

	// RVA: 0x40FD36C Offset: 0x40FD36C VA: 0x40FD36C Slot: 6
	public Task Hide() { }

	// RVA: 0x40FD46C Offset: 0x40FD46C VA: 0x40FD46C Slot: 7
	public GameObject GetGameObject() { }

	// RVA: 0x40FC6F4 Offset: 0x40FC6F4 VA: 0x40FC6F4
	private void MarkEventIntroduced() { }

	// RVA: 0x40FD474 Offset: 0x40FD474 VA: 0x40FD474
	public void .ctor() { }
}

// Namespace: Modules.Contexts.Home.BoatRush.Scripts.UI