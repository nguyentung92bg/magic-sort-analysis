public class PawTouchOfferContainerView : MonoBehaviour // TypeDefIndex: 3417
{
	// Fields
	[SerializeField]
	private Timer _timer; // 0x18
	[SerializeField]
	private Button _buyButton; // 0x20
	[SerializeField]
	private TextMeshPro _coinText; // 0x28
	[SerializeField]
	private TextMeshPro _limitlessLifeText; // 0x30
	[SerializeField]
	private TextMeshPro _offText; // 0x38
	[SerializeField]
	private IAPPriceView _iapPriceView; // 0x40
	[SerializeField]
	private Transform _tickContainer; // 0x48
	[SerializeField]
	private Transform _buyButtonTransform; // 0x50
	[SerializeField]
	private ParticleSystem _tickHitParticle; // 0x58
	[SerializeField]
	private PawTouchOfferContainerAnimationConfig _animation; // 0x60
	private IAPConfigModel _iapConfigModel; // 0x68
	private bool _isHidden; // 0x70
	private bool _isHiding; // 0x71
	private bool _buttonTriggered; // 0x72

	// Methods

	// RVA: 0x20A6FB0 Offset: 0x20A6FB0 VA: 0x20A6FB0
	public void Show(PawTouchOfferPackage offerPackage, IAPConfigModel iapConfigModel) { }

	[AsyncStateMachine(typeof(PawTouchOfferContainerView.<OnClickBuyButton>d__15))]
	// RVA: 0x20A7390 Offset: 0x20A7390 VA: 0x20A7390
	private void OnClickBuyButton() { }

	// RVA: 0x20A7448 Offset: 0x20A7448 VA: 0x20A7448
	private Sequence PlayPurchaseAnimation() { }

	// RVA: 0x20A76D4 Offset: 0x20A76D4 VA: 0x20A76D4
	private Sequence PlayCardHideAnimation() { }

	// RVA: 0x20A782C Offset: 0x20A782C VA: 0x20A782C
	private void Hide(bool isPurchased) { }

	// RVA: 0x20A7988 Offset: 0x20A7988 VA: 0x20A7988
	private void OnHide() { }

	// RVA: 0x20A7A30 Offset: 0x20A7A30 VA: 0x20A7A30
	private void OnDestroy() { }

	// RVA: 0x20A7A34 Offset: 0x20A7A34 VA: 0x20A7A34
	public void .ctor() { }

	[CompilerGenerated]
	// RVA: 0x20A7A3C Offset: 0x20A7A3C VA: 0x20A7A3C
	private void <Show>b__14_0() { }

	[CompilerGenerated]
	// RVA: 0x20A7A44 Offset: 0x20A7A44 VA: 0x20A7A44
	private void <PlayPurchaseAnimation>b__16_0() { }

	[CompilerGenerated]
	// RVA: 0x20A7A70 Offset: 0x20A7A70 VA: 0x20A7A70
	private void <PlayPurchaseAnimation>b__16_1() { }

	[CompilerGenerated]
	// RVA: 0x20A7A9C Offset: 0x20A7A9C VA: 0x20A7A9C
	private void <PlayPurchaseAnimation>b__16_2() { }

	[CompilerGenerated]
	// RVA: 0x20A7AB8 Offset: 0x20A7AB8 VA: 0x20A7AB8
	private void <PlayCardHideAnimation>b__17_0() { }

	[CompilerGenerated]
	// RVA: 0x20A7ADC Offset: 0x20A7ADC VA: 0x20A7ADC
	private void <Hide>b__18_0() { }
}

// Namespace: Modules.Contexts.Home.Monetization.EndGameOffer
[Serializable]