public class TreasureDrillRibbonView : MonoBehaviour // TypeDefIndex: 3225
{
	// Fields
	[SerializeField]
	private TextMeshPro _beforePurchaseText; // 0x18
	[SerializeField]
	private TextMeshPro _afterPurchaseText; // 0x20
	[SerializeField]
	private Transform _purchaseButtonParent; // 0x28
	[SerializeField]
	private Button _purchaseButton; // 0x30
	[SerializeField]
	private ParticleSystem _purchaseButtonParticle; // 0x38
	[SerializeField]
	private IAPPriceView _priceView; // 0x40
	[SerializeField]
	private TreasureDrillAnimationConfig _animationConfig; // 0x48
	private bool _purchaseButtonAnimationIsPlaying; // 0x50
	private Sequence _purchaseButtonAnimationSequence; // 0x58

	// Methods

	// RVA: 0x33074D0 Offset: 0x33074D0 VA: 0x33074D0
	public void Initialize(TreasureDrillViewModel viewModel) { }

	// RVA: 0x330EF1C Offset: 0x330EF1C VA: 0x330EF1C
	private void OnClickPurchaseButton() { }

	// RVA: 0x330EE38 Offset: 0x330EE38 VA: 0x330EE38
	private void SetView(bool isPurchased) { }

	// RVA: 0x3308CD0 Offset: 0x3308CD0 VA: 0x3308CD0
	public void OnUnlock() { }

	// RVA: 0x3307C18 Offset: 0x3307C18 VA: 0x3307C18
	public void Dispose() { }

	// RVA: 0x330EF00 Offset: 0x330EF00 VA: 0x330EF00
	private void SetOfferPriceView(IAPConfigModel iapConfigModel) { }

	// RVA: 0x330EF90 Offset: 0x330EF90 VA: 0x330EF90
	private void ScalePurchaseButton() { }

	// RVA: 0x330F188 Offset: 0x330F188 VA: 0x330F188
	public void .ctor() { }

	[CompilerGenerated]
	// RVA: 0x330F190 Offset: 0x330F190 VA: 0x330F190
	private void <ScalePurchaseButton>b__15_0() { }

	[CompilerGenerated]
	// RVA: 0x330F1AC Offset: 0x330F1AC VA: 0x330F1AC
	private void <ScalePurchaseButton>b__15_1() { }
}

// Namespace: Modules.Contexts.Home.Monetization.TreasureDrill.Scripts.UI