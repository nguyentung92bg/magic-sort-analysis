public class TreasureDrillLockAnimationView : MonoBehaviour // TypeDefIndex: 3208
{
	// Fields
	[SerializeField]
	private SpriteRenderer _lockBottom; // 0x18
	[SerializeField]
	private SpriteRenderer _lockTop; // 0x20
	[SerializeField]
	private Transform _lockParent; // 0x28
	[SerializeField]
	private TreasureDrillAnimationConfig _animationConfig; // 0x30
	[SerializeField]
	private ParticleSystem _lockParticle; // 0x38
	private int _bottomInitialSortOrder; // 0x40
	private int _topInitialSortOrder; // 0x44

	// Methods

	// RVA: 0x330B1A4 Offset: 0x330B1A4 VA: 0x330B1A4
	private void Awake() { }

	// RVA: 0x330B1E4 Offset: 0x330B1E4 VA: 0x330B1E4
	public Tween PlayLockShakeAnimation() { }

	// RVA: 0x330B2F4 Offset: 0x330B2F4 VA: 0x330B2F4
	public void ResetLockAnimation() { }

	// RVA: 0x330B364 Offset: 0x330B364 VA: 0x330B364
	public Sequence PlayLockFallAnimation() { }

	// RVA: 0x330B838 Offset: 0x330B838 VA: 0x330B838
	private void ResetSortOrder() { }

	// RVA: 0x330B888 Offset: 0x330B888 VA: 0x330B888
	private void Reset() { }

	// RVA: 0x330BA04 Offset: 0x330BA04 VA: 0x330BA04
	public void .ctor() { }

	[CompilerGenerated]
	// RVA: 0x330BA0C Offset: 0x330BA0C VA: 0x330BA0C
	private void <PlayLockFallAnimation>b__10_0() { }
}

// Namespace: Modules.Contexts.Home.Monetization.TreasureDrill.Scripts.UI