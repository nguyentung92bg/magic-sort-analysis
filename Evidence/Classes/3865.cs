public class MagicStreakGaeProgressBarView : MonoBehaviour // TypeDefIndex: 3865
{
	// Fields
	[SerializeField]
	private MagicStreakGaeAnimationConfig _animationConfig; // 0x18
	[SerializeField]
	private CurrencyViewFactory _magicStreakGaeCurrencyViewFactory; // 0x20
	[SerializeField]
	private CurrencyViewFactory _defaultCurrencyViewFactory; // 0x28
	[SerializeField]
	private CurrencyViewFactory _outlineCurrencyViewFactory; // 0x30
	[SerializeField]
	private TextMeshPro _currentProgressText; // 0x38
	[SerializeField]
	private Transform _rewardPosition; // 0x40
	[SerializeField]
	private Transform _currencyViewTargetPosition; // 0x48
	[SerializeField]
	private Transform _currencyViewScaleParent; // 0x50
	[SerializeField]
	private SpriteRenderer _progressBar; // 0x58
	[SerializeField]
	private ParticleSystem _stepCompleteParticle; // 0x60
	[SerializeField]
	private ParticleSystem _currencyOnPlaceParticle; // 0x68
	[SerializeField]
	private TextSequenceAnimator _textSequenceAnimator; // 0x70
	[SerializeField]
	private GameObject _allStepsClaimedGameObject; // 0x78
	[SerializeField]
	private Vector3 _collectionPackCustomPosition; // 0x80
	private const string _allStepsCompletedLocalizationKey = "PurchaseResultPopupSuccessTitle";
	private readonly List<CurrencyView> _usingCurrencyViews; // 0x90
	private Sequence _rewardSequence; // 0x98
	private CurrencyView _activeCurrencyView; // 0xA0
	private CurrencyView _soloCurrencyView; // 0xA8
	private RewardModel _soloCurrencyRewardModel; // 0xB0
	private InventoryService _inventoryService; // 0xB8
	private Sequence _stepIncreaseSequence; // 0xC0

	// Methods

	// RVA: 0x3CF9B38 Offset: 0x3CF9B38 VA: 0x3CF9B38
	private void Awake() { }

	// RVA: 0x3CF9BBC Offset: 0x3CF9BBC VA: 0x3CF9BBC
	public void DisposeAnimations() { }

	// RVA: 0x3CF41DC Offset: 0x3CF41DC VA: 0x3CF41DC
	public void SetViewModel(MagicStreakGaeStepViewModel viewModel, bool isAllStepsClaimed) { }

	// RVA: 0x3CF53B8 Offset: 0x3CF53B8 VA: 0x3CF53B8
	public Tween PlayStepIncreaseAnimation(List<MagicStreakGaeStepViewModel> animationSteps, bool isAllStepsClaimed) { }

	// RVA: 0x3CFA25C Offset: 0x3CFA25C VA: 0x3CFA25C
	private Sequence PlayFloatingCurrencyView(RewardModel rewardModel) { }

	// RVA: 0x3CF9EAC Offset: 0x3CF9EAC VA: 0x3CF9EAC
	private Tween SampleScale(Transform target, bool inScale) { }

	// RVA: 0x3CFA5FC Offset: 0x3CFA5FC VA: 0x3CFA5FC
	private void PlayStepCompleteParticle() { }

	// RVA: 0x3CFA138 Offset: 0x3CFA138 VA: 0x3CFA138
	private Tween PlayProgressBarTextIncrease(int current, int target, int max, AnimationCurve curve, float duration) { }

	[Button]
	// RVA: 0x3CF9FB0 Offset: 0x3CF9FB0 VA: 0x3CF9FB0
	private Tween PlayProgressBarFillAmount(int target, int max, AnimationCurve curve, float duration) { }

	[Button]
	// RVA: 0x3CF9E1C Offset: 0x3CF9E1C VA: 0x3CF9E1C
	private void SetProgressBarFillAmount(int current, int max) { }

	// RVA: 0x3CF9BD4 Offset: 0x3CF9BD4 VA: 0x3CF9BD4
	private CurrencyView SetAndGetCurrencyView(MagicStreakGaeStepViewModel stepViewModel, bool withAnimation) { }

	// RVA: 0x3CF3F6C Offset: 0x3CF3F6C VA: 0x3CF3F6C
	public void ReturnCurrencyViews() { }

	// RVA: 0x3CFA620 Offset: 0x3CFA620 VA: 0x3CFA620
	public void .ctor() { }

	[CompilerGenerated]
	// RVA: 0x3CFA6A8 Offset: 0x3CFA6A8 VA: 0x3CFA6A8
	private float <PlayProgressBarFillAmount>b__30_0() { }

	[CompilerGenerated]
	// RVA: 0x3CFA6C4 Offset: 0x3CFA6C4 VA: 0x3CFA6C4
	private void <PlayProgressBarFillAmount>b__30_1(float x) { }
}

// Namespace: Modules.Contexts.Home.MagicStreakGAE.Scripts