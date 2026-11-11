public class TreasureDrillRewardContainer : MonoBehaviour // TypeDefIndex: 3224
{
	// Fields
	[SerializeField]
	private List<TreasureDrillRewardPositionHolder> _rewardPositionHolders; // 0x18
	[SerializeField]
	private CurrencyViewFactory _currencyViewFactory; // 0x20
	[SerializeField]
	private RevealAnimationConfig _animationsConfig; // 0x28
	[SerializeField]
	private Material _greenMaterial; // 0x30
	[SerializeField]
	private Material _redMaterial; // 0x38
	[SerializeField]
	private TreasureDrillSpriteConfig _spriteConfig; // 0x40
	[SerializeField]
	private SpriteRenderer _backgroundRenderer; // 0x48
	[SerializeField]
	private TreasureDrillAnimationConfig _animationConfig; // 0x50
	[SerializeField]
	private Transform _tickContainer; // 0x58
	[SerializeField]
	private ParticleSystem _tickParticle; // 0x60
	private TreasureDrillRewardPositionHolder _currentRewardPositionHolder; // 0x68
	private TreasureDrillStepViewModel _stepViewModel; // 0x70
	private readonly List<CurrencyView> _currentCurrencyViews; // 0x78
	private Sequence _revealSequence; // 0x80

	// Methods

	// RVA: 0x330DD28 Offset: 0x330DD28 VA: 0x330DD28
	public void SetReward(TreasureDrillStepViewModel treasureDrillStepViewModel) { }

	// RVA: 0x330E0C0 Offset: 0x330E0C0 VA: 0x330E0C0
	private List<RewardModel> GetRewardsSortedByPriority(List<RewardModel> rewardModels) { }

	// RVA: 0x330E26C Offset: 0x330E26C VA: 0x330E26C
	public void HideRewards() { }

	// RVA: 0x330E300 Offset: 0x330E300 VA: 0x330E300
	public void SetBackground() { }

	// RVA: 0x330E368 Offset: 0x330E368 VA: 0x330E368
	public void SetClaimableBackground() { }

	// RVA: 0x330E340 Offset: 0x330E340 VA: 0x330E340
	public void SetClaimedBackground() { }

	// RVA: 0x330E390 Offset: 0x330E390 VA: 0x330E390
	public void SetLockedBackground() { }

	// RVA: 0x330E244 Offset: 0x330E244 VA: 0x330E244
	private void SetTickView() { }

	// RVA: 0x330E3B8 Offset: 0x330E3B8 VA: 0x330E3B8
	private void ShowTick() { }

	// RVA: 0x330E408 Offset: 0x330E408 VA: 0x330E408
	public void HideTick() { }

	// RVA: 0x330E458 Offset: 0x330E458 VA: 0x330E458
	private Sequence PlayTickAnimation() { }

	// RVA: 0x330E5DC Offset: 0x330E5DC VA: 0x330E5DC
	public void PrepareTick() { }

	// RVA: 0x330E64C Offset: 0x330E64C VA: 0x330E64C
	public void SetRewardTextAsClaimable() { }

	// RVA: 0x330E868 Offset: 0x330E868 VA: 0x330E868
	public void RecycleCurrencyView() { }

	// RVA: 0x330EAA8 Offset: 0x330EAA8 VA: 0x330EAA8
	public Sequence PlayRevealAnimation() { }

	// RVA: 0x330DEF4 Offset: 0x330DEF4 VA: 0x330DEF4
	private void PrepareRewardPositionHolder(int rewardCount) { }

	// RVA: 0x330E1DC Offset: 0x330E1DC VA: 0x330E1DC
	private void SetRewardTextColor(CurrencyView currencyView) { }

	// RVA: 0x330EC8C Offset: 0x330EC8C VA: 0x330EC8C
	public void .ctor() { }
}

// Namespace: Modules.Contexts.Home.Monetization.TreasureDrill.Scripts.UI