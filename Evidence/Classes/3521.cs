public class MiniGameProgressBarRewardView : MonoBehaviour // TypeDefIndex: 3521
{
	// Fields
	[SerializeField]
	private CurrencyViewFactory _currencyViewFactory; // 0x18
	[SerializeField]
	private MiniGameAnimationConfig _animationConfig; // 0x20
	[SerializeField]
	private ParticleSystem _stageMoveEndParticle; // 0x28
	[SerializeField]
	private Transform _rewardParent; // 0x30
	[SerializeField]
	private Transform _claimedView; // 0x38
	[SerializeField]
	private Vector3 _progressBarStagePosition; // 0x40
	private MiniGameStageViewModel _viewModel; // 0x50
	private CurrencyView _currencyView; // 0x58
	private ChestView _chestView; // 0x60

	// Methods

	// RVA: 0x21840C4 Offset: 0x21840C4 VA: 0x21840C4
	public void Initialize(MiniGameStageViewModel viewModel) { }

	// RVA: 0x21840E0 Offset: 0x21840E0 VA: 0x21840E0
	private void InitializeReward() { }

	// RVA: 0x2184380 Offset: 0x2184380 VA: 0x2184380
	public Tween PlayClaimAnimation() { }

	// RVA: 0x218456C Offset: 0x218456C VA: 0x218456C
	public Vector3 GetProgressBarStagePosition() { }

	// RVA: 0x2184578 Offset: 0x2184578 VA: 0x2184578
	public void Dispose() { }

	// RVA: 0x21846B0 Offset: 0x21846B0 VA: 0x21846B0
	public void .ctor() { }

	[CompilerGenerated]
	// RVA: 0x21846B8 Offset: 0x21846B8 VA: 0x21846B8
	private void <PlayClaimAnimation>b__11_0() { }
}

// Namespace: 
[CompilerGenerated]