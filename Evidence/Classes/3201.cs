public class TreasureDrillEgoView : MonoBehaviour // TypeDefIndex: 3201
{
	// Fields
	[SerializeField]
	private Timer _timer; // 0x18
	[SerializeField]
	private Button _buyButton; // 0x20
	[SerializeField]
	private IAPPriceView _iapPriceView; // 0x28
	[SerializeField]
	private TMP_Text _upToText; // 0x30
	[SerializeField]
	private Transform _tickContainer; // 0x38
	[SerializeField]
	private Transform _buyButtonTransform; // 0x40
	[SerializeField]
	private ParticleSystem _tickHitParticle; // 0x48
	[SerializeField]
	private TreasureDrillAnimationConfig _animation; // 0x50
	private IAPConfigModel _iapConfigModel; // 0x58
	private TreasureDrillService _service; // 0x60
	private bool _buttonTriggered; // 0x68
	private bool _isHidden; // 0x69
	private bool _isHiding; // 0x6A

	// Methods

	// RVA: 0x3308F20 Offset: 0x3308F20 VA: 0x3308F20
	public void Show() { }

	// RVA: 0x3309028 Offset: 0x3309028 VA: 0x3309028
	private void SetUI() { }

	[AsyncStateMachine(typeof(TreasureDrillEgoView.<OnClickBuyButton>d__15))]
	// RVA: 0x3309164 Offset: 0x3309164 VA: 0x3309164
	private void OnClickBuyButton() { }

	// RVA: 0x330921C Offset: 0x330921C VA: 0x330921C
	private void Hide(bool isPurchased) { }

	// RVA: 0x3309378 Offset: 0x3309378 VA: 0x3309378
	private Sequence PlayPurchaseAnimation() { }

	// RVA: 0x330961C Offset: 0x330961C VA: 0x330961C
	private Sequence PlayCardHideAnimation() { }

	// RVA: 0x330977C Offset: 0x330977C VA: 0x330977C
	private void OnHide() { }

	// RVA: 0x3309824 Offset: 0x3309824 VA: 0x3309824
	private void OnDestroy() { }

	// RVA: 0x3309828 Offset: 0x3309828 VA: 0x3309828
	public void .ctor() { }

	[CompilerGenerated]
	// RVA: 0x3309830 Offset: 0x3309830 VA: 0x3309830
	private void <SetUI>b__14_0() { }

	[CompilerGenerated]
	// RVA: 0x3309838 Offset: 0x3309838 VA: 0x3309838
	private void <Hide>b__16_0() { }

	[CompilerGenerated]
	// RVA: 0x3309868 Offset: 0x3309868 VA: 0x3309868
	private void <PlayPurchaseAnimation>b__17_0() { }

	[CompilerGenerated]
	// RVA: 0x3309894 Offset: 0x3309894 VA: 0x3309894
	private void <PlayPurchaseAnimation>b__17_1() { }

	[CompilerGenerated]
	// RVA: 0x33098C0 Offset: 0x33098C0 VA: 0x33098C0
	private void <PlayPurchaseAnimation>b__17_2() { }

	[CompilerGenerated]
	// RVA: 0x33098DC Offset: 0x33098DC VA: 0x33098DC
	private void <PlayCardHideAnimation>b__18_0() { }
}

// Namespace: Modules.Contexts.Home.Monetization.TreasureDrill.Scripts.UI