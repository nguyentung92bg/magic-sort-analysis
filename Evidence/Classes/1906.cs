public class WheelOfFortuneRewardContainer : MonoBehaviour // TypeDefIndex: 1906
{
	// Fields
	[SerializeField]
	private Button _closeButton; // 0x18
	[SerializeField]
	private CurrencyViewFactory _currencyViewFactory; // 0x20
	[SerializeField]
	private Transform _currencyContainer; // 0x28
	[SerializeField]
	private int _rewardIndex; // 0x30
	[SerializeField]
	private Transform _rewardContainer; // 0x38
	[SerializeField]
	private Vector3[] _pathPoints; // 0x40
	[SerializeField]
	private WheelOfFortuneAnimationConfig _animationConfig; // 0x48
	[SerializeField]
	private WheelOfFortuneTapToClaimView _tapToClaimView; // 0x50
	[SerializeField]
	private Transform[] _pathTransforms; // 0x58
	private CurrencyView _currentCurrencyView; // 0x60
	private Transform _currentCurrencyViewTransform; // 0x68
	private WheelOfFortuneRewardVFX _rewardVFX; // 0x70
	private RewardModel _rewardModel; // 0x78
	private Sequence _revealSequence; // 0x80

	// Methods

	// RVA: 0x31A0AE0 Offset: 0x31A0AE0 VA: 0x31A0AE0
	public void SetReward(RewardModel rewardModel) { }

	// RVA: 0x31A0C60 Offset: 0x31A0C60 VA: 0x31A0C60
	private void PrepareChosenRewardAnimation() { }

	[Button]
	// RVA: 0x31A0E14 Offset: 0x31A0E14 VA: 0x31A0E14
	public Sequence PlayChosenRewardAnimation() { }

	// RVA: 0x31A1050 Offset: 0x31A1050 VA: 0x31A1050
	private Sequence ScaleAndMoveToTarget() { }

	// RVA: 0x31A1198 Offset: 0x31A1198 VA: 0x31A1198
	private Sequence OnRewardReachedToTarget() { }

	[Button]
	// RVA: 0x31A0CE0 Offset: 0x31A0CE0 VA: 0x31A0CE0
	private void CachePathPoints() { }

	[Button]
	// RVA: 0x31A1470 Offset: 0x31A1470 VA: 0x31A1470
	private void Reset() { }

	// RVA: 0x31A1524 Offset: 0x31A1524 VA: 0x31A1524
	private Tween SetRewardScale(Vector3 scale, float duration = 0) { }

	[Button]
	// RVA: 0x31A1530 Offset: 0x31A1530 VA: 0x31A1530
	private Sequence PlayRevealAnimation() { }

	[Button]
	// RVA: 0x31A1604 Offset: 0x31A1604 VA: 0x31A1604
	private void PlayClaimRewardAnimation() { }

	// RVA: 0x31A1AB4 Offset: 0x31A1AB4 VA: 0x31A1AB4
	private void SubscribeButton() { }

	// RVA: 0x31A1934 Offset: 0x31A1934 VA: 0x31A1934
	private void UnsubscribeButton() { }

	// RVA: 0x31A1B40 Offset: 0x31A1B40 VA: 0x31A1B40
	public void Dispose() { }

	// RVA: 0x31A1B88 Offset: 0x31A1B88 VA: 0x31A1B88
	public void .ctor() { }

	[CompilerGenerated]
	// RVA: 0x31A1B90 Offset: 0x31A1B90 VA: 0x31A1B90
	private void <OnRewardReachedToTarget>b__18_1() { }
}

// Namespace: Modules.Contexts.Home.WheelOfFortune.Scripts.UI