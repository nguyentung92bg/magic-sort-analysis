public class OnePlusFreeOfferRewardColumnView : MonoBehaviour // TypeDefIndex: 3264
{
	// Fields
	[SerializeField]
	private Transform _rewardRoot; // 0x18
	[SerializeField]
	private CurrencyViewFactory _currencyViewFactory; // 0x20
	[SerializeField]
	private float _spacing; // 0x28
	[SerializeField]
	private float _rewardScale; // 0x2C
	[SerializeField]
	private bool _setSortingOrder; // 0x30
	[SerializeField]
	private int _sortingOrder; // 0x34
	[SerializeField]
	private float _delay; // 0x38
	[SerializeField]
	private float _shineFrom; // 0x3C
	[SerializeField]
	private float _shineTo; // 0x40
	[SerializeField]
	private float _shineStagger; // 0x44
	[SerializeField]
	private CollectionCardPackVisualsConfig _collectionPackVisualsConfig; // 0x48
	private readonly List<CurrencyView> _currencyViews; // 0x50

	// Methods

	// RVA: 0x358FD6C Offset: 0x358FD6C VA: 0x358FD6C
	public void Show(List<RewardModel> rewardModels) { }

	// RVA: 0x358FF18 Offset: 0x358FF18 VA: 0x358FF18
	public void Recycle() { }

	// RVA: 0x3590174 Offset: 0x3590174 VA: 0x3590174
	private CurrencyView CreateCurrencyView(RewardModel rewardModel, Vector3 localPosition, int rewardIndex) { }

	// RVA: 0x3590494 Offset: 0x3590494 VA: 0x3590494
	public void .ctor() { }
}

// Namespace: Modules.Contexts.Home.Monetization.OnePlusFreeOffer.Scripts.UI