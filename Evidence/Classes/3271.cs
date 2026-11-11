public class OnePlusFreeOfferView : MonoBehaviour // TypeDefIndex: 3271
{
	// Fields
	[SerializeField]
	private IAPPriceView _iapPriceView; // 0x18
	[SerializeField]
	private OnePlusFreeOfferRewardColumnView _paidRewardColumn; // 0x20
	[SerializeField]
	private OnePlusFreeOfferRewardColumnView _freeRewardColumn; // 0x28
	[SerializeField]
	private OnePlusFreeOfferIAPButton _buyButton; // 0x30
	[SerializeField]
	private OnePlusFreeOfferIAPButton _freeButton; // 0x38
	[SerializeField]
	private GameObject _lockIcon; // 0x40
	[SerializeField]
	private GameObject _freeButtonRoot; // 0x48
	[SerializeField]
	private GameObject _freeButtonCheckMark; // 0x50
	[SerializeField]
	private ParticleSystem _freeUnlockParticle; // 0x58
	[SerializeField]
	private GameObject _buyButtonRoot; // 0x60
	[SerializeField]
	private GameObject _buyCheckmark; // 0x68
	[SerializeField]
	private ParticleSystem _paidCheckMarkParticle; // 0x70
	[SerializeField]
	private TextMeshPro _descriptionText; // 0x78
	[SerializeField]
	[Header("Intro Animation")]
	private Animation _introAnimator; // 0x80
	[SerializeField]
	private string _introStateName; // 0x88
	[SerializeField]
	private string _idleStateName; // 0x90
	[SerializeField]
	private TextSequenceAnimator _textSequenceAnimator; // 0x98
	[SerializeField]
	private PopupAnimationController _popupAnimationController; // 0xA0
	private OnePlusFreeOfferViewModel _viewModel; // 0xA8

	// Methods

	// RVA: 0x359054C Offset: 0x359054C VA: 0x359054C
	private void Awake() { }

	// RVA: 0x3590610 Offset: 0x3590610 VA: 0x3590610
	private void OnDestroy() { }

	// RVA: 0x358F318 Offset: 0x358F318 VA: 0x358F318
	public void Show(OnePlusFreeOfferViewModel viewModel) { }

	// RVA: 0x358F780 Offset: 0x358F780 VA: 0x358F780
	public void Hide() { }

	// RVA: 0x35906D4 Offset: 0x35906D4 VA: 0x35906D4
	private void UpdateStepStates() { }

	// RVA: 0x35907F4 Offset: 0x35907F4 VA: 0x35907F4
	private void PlayIntroAnimationIfNeeded() { }

	[AsyncStateMachine(typeof(OnePlusFreeOfferView.<OnOfferButtonClicked>d__25))]
	// RVA: 0x359098C Offset: 0x359098C VA: 0x359098C
	private void OnOfferButtonClicked(OnePlusFreeOfferPackageType packageType) { }

	[AsyncStateMachine(typeof(OnePlusFreeOfferView.<TryClaimFreeStep>d__26))]
	// RVA: 0x3590A4C Offset: 0x3590A4C VA: 0x3590A4C
	private void TryClaimFreeStep() { }

	// RVA: 0x3590B04 Offset: 0x3590B04 VA: 0x3590B04
	private void PlayLockAnimation() { }

	[AsyncStateMachine(typeof(OnePlusFreeOfferView.<PlayFreePackageClaimAnimation>d__28))]
	// RVA: 0x3590D70 Offset: 0x3590D70 VA: 0x3590D70
	private Task PlayFreePackageClaimAnimation() { }

	[AsyncStateMachine(typeof(OnePlusFreeOfferView.<PlayPaidPackageClaimAnimation>d__29))]
	// RVA: 0x358FADC Offset: 0x358FADC VA: 0x358FADC
	public Task PlayPaidPackageClaimAnimation() { }

	// RVA: 0x3590E5C Offset: 0x3590E5C VA: 0x3590E5C
	public void .ctor() { }

	[CompilerGenerated]
	// RVA: 0x3590EE0 Offset: 0x3590EE0 VA: 0x3590EE0
	private void <PlayIntroAnimationIfNeeded>b__24_0() { }

	[CompilerGenerated]
	// RVA: 0x3590F9C Offset: 0x3590F9C VA: 0x3590F9C
	private void <PlayFreePackageClaimAnimation>b__28_0() { }

	[CompilerGenerated]
	// RVA: 0x3590FB8 Offset: 0x3590FB8 VA: 0x3590FB8
	private void <PlayPaidPackageClaimAnimation>b__29_0() { }
}

// Namespace: Modules.Contexts.Home.Monetization.OnePlusFreeOffer.Scripts.UI