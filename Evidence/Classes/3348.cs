public class NoAdsOfferPopUp : MonoBehaviour, IPopUp // TypeDefIndex: 3348
{
	// Fields
	[SerializeField]
	private Button _button; // 0x18
	[SerializeField]
	private IAPPriceView _iapPriceView; // 0x20
	[SerializeField]
	private NoAdsOfferTitle _title; // 0x28
	[SerializeField]
	private TextMeshPro[] _coinTexts; // 0x30
	[SerializeField]
	private TextMeshPro _undoText; // 0x38
	[SerializeField]
	private TextMeshPro _shuffleText; // 0x40
	[SerializeField]
	private TextMeshPro _extraBottleText; // 0x48
	[SerializeField]
	private GameObject _rewardContainer; // 0x50
	[SerializeField]
	private GameObject _descriptionContainer; // 0x58
	[SerializeField]
	private GameObject _5RewardUI; // 0x60
	[SerializeField]
	private GameObject _2RewardUI; // 0x68
	private TaskCompletionSource<bool> _popupDisplayFlow; // 0x70
	private NoAdsOfferViewModel _viewModel; // 0x78

	// Methods

	// RVA: 0x346547C Offset: 0x346547C VA: 0x346547C Slot: 4
	public void Show(PopUpArguments popUpArguments) { }

	// RVA: 0x3465BB0 Offset: 0x3465BB0 VA: 0x3465BB0
	private void ClosePopupAfterPurchase(bool isSuccess) { }

	// RVA: 0x3465C38 Offset: 0x3465C38 VA: 0x3465C38 Slot: 5
	public Task ShowAsync(PopUpArguments popUpArguments) { }

	// RVA: 0x3465D04 Offset: 0x3465D04 VA: 0x3465D04 Slot: 6
	public Task Hide() { }

	// RVA: 0x3465EF8 Offset: 0x3465EF8 VA: 0x3465EF8 Slot: 7
	public GameObject GetGameObject() { }

	[AsyncStateMachine(typeof(NoAdsOfferPopUp.<OnClick>d__18))]
	// RVA: 0x3465F00 Offset: 0x3465F00 VA: 0x3465F00
	private void OnClick() { }

	// RVA: 0x3465724 Offset: 0x3465724 VA: 0x3465724
	private void ShowRewards(List<RewardModel> rewardModels) { }

	// RVA: 0x3465FB8 Offset: 0x3465FB8 VA: 0x3465FB8
	public void .ctor() { }
}

// Namespace: Modules.Contexts.Home.Monetization.NoAdsOffer.Scripts.UI