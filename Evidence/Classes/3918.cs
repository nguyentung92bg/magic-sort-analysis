public class MagicPassBuyPopUp : MonoBehaviour, IPopUp // TypeDefIndex: 3918
{
	// Fields
	[SerializeField]
	private Timer _timer; // 0x18
	[SerializeField]
	private Button _buyButton; // 0x20
	[SerializeField]
	private IAPPriceView _priceView; // 0x28
	[SerializeField]
	private ProfileImageView[] _profileImageViews; // 0x30
	private MagicPassActivationSource _impressionSource; // 0x38
	private TaskCompletionSource<bool> _popupDisplayFlow; // 0x40
	private const string localization_finished_term = "MagicPassIsFinished";

	// Methods

	// RVA: 0x38E1EC0 Offset: 0x38E1EC0 VA: 0x38E1EC0 Slot: 4
	public void Show(PopUpArguments popUpArguments) { }

	[AsyncStateMachine(typeof(MagicPassBuyPopUp.<OnBuyButtonClicked>d__8))]
	// RVA: 0x38E2064 Offset: 0x38E2064 VA: 0x38E2064
	private void OnBuyButtonClicked() { }

	// RVA: 0x38E211C Offset: 0x38E211C VA: 0x38E211C Slot: 5
	public Task ShowAsync(PopUpArguments popUpArguments) { }

	// RVA: 0x38E21D0 Offset: 0x38E21D0 VA: 0x38E21D0 Slot: 6
	public Task Hide() { }

	// RVA: 0x38E2284 Offset: 0x38E2284 VA: 0x38E2284 Slot: 7
	public GameObject GetGameObject() { }

	// RVA: 0x38E228C Offset: 0x38E228C VA: 0x38E228C
	public void .ctor() { }
}

// Namespace: Modules.Contexts.Home.MagicPass.Scripts.UI