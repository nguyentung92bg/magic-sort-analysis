public class MiniGamePopUp : MonoBehaviour, IPopUp // TypeDefIndex: 3517
{
	// Fields
	[SerializeField]
	private MiniGameController _controller; // 0x18
	[SerializeField]
	private MiniGameProgressBarView _progressBarView; // 0x20
	[SerializeField]
	private Timer _timer; // 0x28
	[SerializeField]
	private Button _infoButton; // 0x30
	[SerializeField]
	private Button _closeButton; // 0x38
	[Header("Offer Popup")]
	[SerializeField]
	private MiniGameOfferPopup _offerPopup; // 0x40
	[SerializeField]
	private Button _offerButton; // 0x48
	[SerializeField]
	private GameObject _offerButtonParent; // 0x50
	[SerializeField]
	private GameObject _phoneButtonBg; // 0x58
	[SerializeField]
	private GameObject _tabletButtonBg; // 0x60
	[SerializeField]
	private GameObject _alertParent; // 0x68
	private MiniGameService _service; // 0x70
	private MiniGameViewModel _viewModel; // 0x78
	private TaskCompletionSource<bool> _popupDisplayFlow; // 0x80

	// Methods

	// RVA: 0x2182C38 Offset: 0x2182C38 VA: 0x2182C38 Slot: 4
	public void Show(PopUpArguments popUpArguments) { }

	// RVA: 0x21833A8 Offset: 0x21833A8 VA: 0x21833A8
	private void OnStageRewardClaimed(int stageIndex) { }

	// RVA: 0x2183414 Offset: 0x2183414 VA: 0x2183414
	private void OnInfoButtonClicked() { }

	// RVA: 0x21832C8 Offset: 0x21832C8 VA: 0x21832C8
	private void OpenInfoPopUp(MiniGameInfoPopUpImpressionSource source) { }

	// RVA: 0x218341C Offset: 0x218341C VA: 0x218341C
	private void OnCloseButtonClicked() { }

	// RVA: 0x2183558 Offset: 0x2183558 VA: 0x2183558
	private void UpdateLobbyButtonState() { }

	// RVA: 0x21835D4 Offset: 0x21835D4 VA: 0x21835D4 Slot: 5
	public Task ShowAsync(PopUpArguments popUpArguments) { }

	// RVA: 0x21836B0 Offset: 0x21836B0 VA: 0x21836B0 Slot: 6
	public Task Hide() { }

	// RVA: 0x2183DA4 Offset: 0x2183DA4 VA: 0x2183DA4 Slot: 7
	public GameObject GetGameObject() { }

	// RVA: 0x2183DAC Offset: 0x2183DAC VA: 0x2183DAC
	private void ShowOfferPopup() { }

	// RVA: 0x2183E40 Offset: 0x2183E40 VA: 0x2183E40
	private void OfferUpdated() { }

	// RVA: 0x21831AC Offset: 0x21831AC VA: 0x21831AC
	private void InitializeOfferButton() { }

	// RVA: 0x2183E44 Offset: 0x2183E44 VA: 0x2183E44
	public void .ctor() { }
}

// Namespace: Modules.Contexts.Home.MiniGame.Scripts.UI