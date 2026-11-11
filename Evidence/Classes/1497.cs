public class CurtainView : AItemView // TypeDefIndex: 1497
{
	// Fields
	[SerializeField]
	private ObjectiveView _objectiveView; // 0x20
	[SerializeField]
	private Animation _targetAnimator; // 0x28
	[SerializeField]
	private string _targetIdleAnimationKey; // 0x30
	[SerializeField]
	private string _targetCompletedAnimationKey; // 0x38
	[SerializeField]
	private ParticleSystem _curtainRevealParticle; // 0x40
	[SerializeField]
	private float _curtainRevealDelay; // 0x48
	[SerializeField]
	private float _particlePlayDelay; // 0x4C
	[SerializeField]
	private float _targetCompletedAnimationDelay; // 0x50
	[SerializeField]
	private Transform _snitchPivot; // 0x58
	[SerializeField]
	private List<CurtainVariant> _curtainVariants; // 0x60
	private CurtainVariant _curtainVariant; // 0x68

	// Methods

	// RVA: 0x2490B6C Offset: 0x2490B6C VA: 0x2490B6C Slot: 5
	public override void Initialize() { }

	// RVA: 0x2490B70 Offset: 0x2490B70 VA: 0x2490B70 Slot: 8
	public override void Show() { }

	// RVA: 0x2490BE8 Offset: 0x2490BE8 VA: 0x2490BE8 Slot: 9
	public override void Hide() { }

	// RVA: 0x2490C0C Offset: 0x2490C0C VA: 0x2490C0C
	private void SetVariant(int variantId) { }

	// RVA: 0x2490DBC Offset: 0x2490DBC VA: 0x2490DBC Slot: 6
	public override void Spawn() { }

	// RVA: 0x2490620 Offset: 0x2490620 VA: 0x2490620
	public void Prepare(Sorting sorting, Color color, int blockerVariant) { }

	// RVA: 0x2490BA0 Offset: 0x2490BA0 VA: 0x2490BA0
	private void TrySetIdleState() { }

	// RVA: 0x2490E1C Offset: 0x2490E1C VA: 0x2490E1C Slot: 7
	public override void Recycle() { }

	// RVA: 0x2490DC8 Offset: 0x2490DC8 VA: 0x2490DC8
	private void SetSorting(Sorting sorting) { }

	// RVA: 0x2490A54 Offset: 0x2490A54 VA: 0x2490A54
	public void RevealWithoutAnimation() { }

	// RVA: 0x2490E50 Offset: 0x2490E50 VA: 0x2490E50
	public void Reveal() { }

	// RVA: 0x2490F7C Offset: 0x2490F7C VA: 0x2490F7C
	public void RevealWithoutAnyDelay() { }

	// RVA: 0x2490AE4 Offset: 0x2490AE4 VA: 0x2490AE4
	public Vector3 GetSnitchTargetPosition() { }

	// RVA: 0x2491094 Offset: 0x2491094 VA: 0x2491094
	public void .ctor() { }

	[CompilerGenerated]
	// RVA: 0x24910B4 Offset: 0x24910B4 VA: 0x24910B4
	private void <Reveal>b__21_0() { }

	[CompilerGenerated]
	// RVA: 0x2491158 Offset: 0x2491158 VA: 0x2491158
	private void <Reveal>b__21_1() { }

	[CompilerGenerated]
	// RVA: 0x2491204 Offset: 0x2491204 VA: 0x2491204
	private void <Reveal>b__21_2() { }

	[CompilerGenerated]
	// RVA: 0x24912A4 Offset: 0x24912A4 VA: 0x24912A4
	private void <RevealWithoutAnyDelay>b__22_0() { }

	[CompilerGenerated]
	// RVA: 0x2491348 Offset: 0x2491348 VA: 0x2491348
	private void <RevealWithoutAnyDelay>b__22_1() { }

	[CompilerGenerated]
	// RVA: 0x24913F4 Offset: 0x24913F4 VA: 0x24913F4
	private void <RevealWithoutAnyDelay>b__22_2() { }
}

// Namespace: 
[CompilerGenerated]
[Serializable]