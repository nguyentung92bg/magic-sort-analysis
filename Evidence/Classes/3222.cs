public class TreasureDrillProgressView : MonoBehaviour // TypeDefIndex: 3222
{
	// Fields
	[SerializeField]
	private SpriteRenderer _progressHole; // 0x18
	[SerializeField]
	private Transform _progressHoleTransform; // 0x20
	[SerializeField]
	private Transform _drillPivot; // 0x28
	[SerializeField]
	private Transform _drillHead; // 0x30
	[SerializeField]
	private List<ParticleSystem> _drillSplashParticles; // 0x38
	[SerializeField]
	private Animator _drillSplashAnimator; // 0x40
	[SerializeField]
	private TreasureDrillAnimationConfig _drillAnimationConfig; // 0x48
	[SerializeField]
	private Transform _progressViewPivot; // 0x50
	private static readonly int DrillTrigger; // 0x0
	private static readonly int StopDrillTrigger; // 0x4
	private TreasureDrillViewModel _viewModel; // 0x58

	// Methods

	// RVA: 0x33073E8 Offset: 0x33073E8 VA: 0x33073E8
	public void InitializeDrillView(TreasureDrillViewModel viewModel) { }

	[Button]
	// RVA: 0x33089F4 Offset: 0x33089F4 VA: 0x33089F4
	public Sequence PlayDrillProgressAnimation(int stepDifference) { }

	// RVA: 0x330D33C Offset: 0x330D33C VA: 0x330D33C
	private bool HasDrillBeenIntroduced() { }

	// RVA: 0x330D360 Offset: 0x330D360 VA: 0x330D360
	private Tween MoveDrillHead(float moveOffset, float duration) { }

	// RVA: 0x330D4EC Offset: 0x330D4EC VA: 0x330D4EC
	private Tween ShakeDrillHead(float duration) { }

	// RVA: 0x330D604 Offset: 0x330D604 VA: 0x330D604
	private Tween Vibrate(float duration, int stepDifference) { }

	// RVA: 0x330D7A4 Offset: 0x330D7A4 VA: 0x330D7A4
	private void StopDrillProgressAnimation() { }

	// RVA: 0x330D944 Offset: 0x330D944 VA: 0x330D944
	private void OnProgressAnimationFinished() { }

	// RVA: 0x330D3E0 Offset: 0x330D3E0 VA: 0x330D3E0
	private Tween HoleDrillAnimation(float offsetYSize, float duration) { }

	// RVA: 0x330D950 Offset: 0x330D950 VA: 0x330D950
	public void .ctor() { }

	// RVA: 0x330D958 Offset: 0x330D958 VA: 0x330D958
	private static void .cctor() { }

	[CompilerGenerated]
	// RVA: 0x330D9F4 Offset: 0x330D9F4 VA: 0x330D9F4
	private void <PlayDrillProgressAnimation>b__12_0() { }

	[CompilerGenerated]
	// RVA: 0x330DB84 Offset: 0x330DB84 VA: 0x330DB84
	private void <ShakeDrillHead>b__15_0() { }
}

// Namespace: 
[CompilerGenerated]
[Serializable]