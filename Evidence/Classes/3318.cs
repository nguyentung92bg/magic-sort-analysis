public class SpecialOfferUIVariant : MonoBehaviour // TypeDefIndex: 3318
{
	// Fields
	[SerializeField]
	private TextMeshPro _coinText; // 0x18
	[SerializeField]
	private TextMeshPro _limitlessLifeText; // 0x20
	[SerializeField]
	private TextMeshPro _undoText; // 0x28
	[SerializeField]
	private TextMeshPro _shuffleText; // 0x30
	[SerializeField]
	private TextMeshPro _extraBottleText; // 0x38
	[SerializeField]
	private TextMeshPro _offText; // 0x40
	[SerializeField]
	private IAPPriceView _iapPriceView; // 0x48
	[SerializeField]
	private Button _iapButton; // 0x50
	[SerializeField]
	private SpecialOfferThemeTpye _specialOfferTheme; // 0x58
	private IAPConfigModel _iapConfigModel; // 0x60
	private IAPContext _context; // 0x68

	// Properties
	public SpecialOfferThemeTpye SpecialOfferTheme { get; }

	// Methods

	// RVA: 0x345FF58 Offset: 0x345FF58 VA: 0x345FF58
	public SpecialOfferThemeTpye get_SpecialOfferTheme() { }

	// RVA: 0x345FD8C Offset: 0x345FD8C VA: 0x345FD8C
	public void Show(SegmentedOfferPackage segmentedOfferPackage, IAPConfigModel iapConfigModel, IAPContext context) { }

	// RVA: 0x345FD68 Offset: 0x345FD68 VA: 0x345FD68
	public void Hide() { }

	// RVA: 0x34602B8 Offset: 0x34602B8 VA: 0x34602B8
	private void Awake() { }

	// RVA: 0x3460344 Offset: 0x3460344 VA: 0x3460344
	private void OnDestroy() { }

	[AsyncStateMachine(typeof(SpecialOfferUIVariant.<OnClick>d__17))]
	// RVA: 0x34603D0 Offset: 0x34603D0 VA: 0x34603D0
	private void OnClick() { }

	// RVA: 0x345FF60 Offset: 0x345FF60 VA: 0x345FF60
	private void ShowRewards(List<RewardModel> rewardModels) { }

	// RVA: 0x3460488 Offset: 0x3460488 VA: 0x3460488
	public void .ctor() { }
}

// Namespace: Modules.Contexts.Home.Monetization.SpecialOffer.Scripts.UI