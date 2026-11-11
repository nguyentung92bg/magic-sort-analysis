public class ChooseOneSpecialOfferView : MonoBehaviour // TypeDefIndex: 3473
{
	// Fields
	[SerializeField]
	private List<IAPPriceView> _iapPriceViews; // 0x18
	[SerializeField]
	private List<ChooseOneSpecialOfferRewardView> _package1RewardViews; // 0x20
	[SerializeField]
	private List<ChooseOneSpecialOfferRewardView> _package2RewardViews; // 0x28
	[SerializeField]
	private List<ChooseOneSpecialOfferRewardView> _package3RewardViews; // 0x30
	[SerializeField]
	private List<Transform> _firstColumnTargets; // 0x38
	[SerializeField]
	private List<Transform> _secondColumnTargets; // 0x40
	[SerializeField]
	private List<Transform> _thirdColumnTargets; // 0x48
	[SerializeField]
	private List<ParticleSystem> _firstColumnParticles; // 0x50
	[SerializeField]
	private List<ParticleSystem> _secondColumnParticles; // 0x58
	[SerializeField]
	private List<ParticleSystem> _thirdColumnParticles; // 0x60
	[SerializeField]
	private TextMeshPro _offText; // 0x68
	[SerializeField]
	private ChooseOneSpecialOfferIAPButton _buyAllButton; // 0x70
	[SerializeField]
	private ChooseOneSpecialOfferIAPButton _package1Button; // 0x78
	[SerializeField]
	private ChooseOneSpecialOfferIAPButton _package2Button; // 0x80
	[SerializeField]
	private ChooseOneSpecialOfferIAPButton _package3Button; // 0x88
	[SerializeField]
	private Sprite _undoSprite; // 0x90
	[SerializeField]
	private Sprite _shuffleSprite; // 0x98
	[SerializeField]
	private Sprite _extraBottleSprite; // 0xA0
	[SerializeField]
	private Sprite _lifeSprite; // 0xA8
	[SerializeField]
	private Sprite _coinSprite1; // 0xB0
	[SerializeField]
	private Sprite _coinSprite2; // 0xB8
	[SerializeField]
	private float _scaleDuration; // 0xC0
	[SerializeField]
	private AnimationCurve _scaleCurve; // 0xC8
	[SerializeField]
	private float _startScale; // 0xD0
	[SerializeField]
	private float _consecutiveDelay; // 0xD4
	[SerializeField]
	private float _startDelay; // 0xD8
	[SerializeField]
	private float _particleDelay; // 0xDC
	private List<IAPConfigModel> _iapConfigModels; // 0xE0

	// Methods

	// RVA: 0x20AEEEC Offset: 0x20AEEEC VA: 0x20AEEEC
	public void Show(List<SegmentedChooseOneOfferPackage> segmentedChooseOneOfferPackage, List<IAPConfigModel> iapConfigModels) { }

	// RVA: 0x20AF194 Offset: 0x20AF194 VA: 0x20AF194
	public void Hide() { }

	// RVA: 0x20B17A0 Offset: 0x20B17A0 VA: 0x20B17A0
	private void Awake() { }

	// RVA: 0x20B18CC Offset: 0x20B18CC VA: 0x20B18CC
	private void OnDestroy() { }

	[AsyncStateMachine(typeof(ChooseOneSpecialOfferView.<OnIAPButtonClicked>d__32))]
	// RVA: 0x20B19F8 Offset: 0x20B19F8 VA: 0x20B19F8
	private void OnIAPButtonClicked(ChooseOneSpecialOfferPackageType packageType) { }

	// RVA: 0x20B1AB8 Offset: 0x20B1AB8 VA: 0x20B1AB8
	public Sprite GetRewardSpriteForCurrencyType(CurrencyType currencyType, int amount) { }

	// RVA: 0x20B0C10 Offset: 0x20B0C10 VA: 0x20B0C10
	private void ShowRewards(List<SegmentedChooseOneOfferPackage> segmentedChooseOneOfferPackages) { }

	// RVA: 0x20B1404 Offset: 0x20B1404 VA: 0x20B1404
	public void SetScaleOfTargetTransforms(float scale) { }

	[Button]
	// RVA: 0x20AE84C Offset: 0x20AE84C VA: 0x20AE84C
	public void PlayRewardRevealAnimation(int column) { }

	// RVA: 0x20B1B28 Offset: 0x20B1B28 VA: 0x20B1B28
	public void .ctor() { }
}

// Namespace: 
[CompilerGenerated]