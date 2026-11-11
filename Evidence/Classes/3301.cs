public class SpecialOfferEgoUIVariantView : MonoBehaviour // TypeDefIndex: 3301
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
	private Timer _timer; // 0x40
	[SerializeField]
	private Transform _playOnTag; // 0x48
	[SerializeField]
	private Transform _metaBackground; // 0x50
	[SerializeField]
	private Button _buyButton; // 0x58
	[SerializeField]
	private IAPPriceView _iapPriceView; // 0x60
	[SerializeField]
	private TMP_Text _offText; // 0x68
	[SerializeField]
	private Transform _tickContainer; // 0x70
	[SerializeField]
	private Transform _buyButtonTransform; // 0x78
	[SerializeField]
	private ParticleSystem _tickHitParticle; // 0x80
	[SerializeField]
	private SpecialOfferBannerAnimationConfig _animation; // 0x88
	private IAPConfigModel _iapConfigModel; // 0x90
	private SpecialOfferService _service; // 0x98
	private ILevelManager _levelManager; // 0xA0
	private bool _isPlayOnOffered; // 0xA8
	private bool _buttonTriggered; // 0xA9
	private bool _isHidden; // 0xAA
	private bool _isHiding; // 0xAB

	// Methods

	// RVA: 0x3597834 Offset: 0x3597834 VA: 0x3597834
	public void Show() { }

	// RVA: 0x3597980 Offset: 0x3597980 VA: 0x3597980
	private void SetUI() { }

	// RVA: 0x3597C2C Offset: 0x3597C2C VA: 0x3597C2C
	private void ShowRewards(List<RewardModel> rewardModels) { }

	[AsyncStateMachine(typeof(SpecialOfferEgoUIVariantView.<OnClickBuyButton>d__25))]
	// RVA: 0x3597F84 Offset: 0x3597F84 VA: 0x3597F84
	private void OnClickBuyButton() { }

	// RVA: 0x359803C Offset: 0x359803C VA: 0x359803C
	public void Hide() { }

	// RVA: 0x3598060 Offset: 0x3598060 VA: 0x3598060
	private void Hide(bool isPurchased) { }

	// RVA: 0x35981BC Offset: 0x35981BC VA: 0x35981BC
	private Sequence PlayPurchaseAnimation() { }

	// RVA: 0x3598448 Offset: 0x3598448 VA: 0x3598448
	private Sequence PlayCardHideAnimation() { }

	// RVA: 0x35985A0 Offset: 0x35985A0 VA: 0x35985A0
	private void OnHide() { }

	// RVA: 0x3598648 Offset: 0x3598648 VA: 0x3598648
	private void OnDestroy() { }

	// RVA: 0x359864C Offset: 0x359864C VA: 0x359864C
	public void .ctor() { }

	[CompilerGenerated]
	// RVA: 0x3598654 Offset: 0x3598654 VA: 0x3598654
	private void <SetUI>b__23_0() { }

	[CompilerGenerated]
	// RVA: 0x359865C Offset: 0x359865C VA: 0x359865C
	private void <Hide>b__27_0() { }

	[CompilerGenerated]
	// RVA: 0x359868C Offset: 0x359868C VA: 0x359868C
	private void <PlayPurchaseAnimation>b__28_0() { }

	[CompilerGenerated]
	// RVA: 0x35986B8 Offset: 0x35986B8 VA: 0x35986B8
	private void <PlayPurchaseAnimation>b__28_1() { }

	[CompilerGenerated]
	// RVA: 0x35986E4 Offset: 0x35986E4 VA: 0x35986E4
	private void <PlayPurchaseAnimation>b__28_2() { }

	[CompilerGenerated]
	// RVA: 0x3598700 Offset: 0x3598700 VA: 0x3598700
	private void <PlayCardHideAnimation>b__29_0() { }
}

// Namespace: Modules.Contexts.Home.Monetization.SpecialOffer.Scripts.UI