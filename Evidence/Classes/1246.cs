public class MagicBottleAnimationView : MonoBehaviour // TypeDefIndex: 1246
{
	// Fields
	[SerializeField]
	private MagicBottleAnimationConfig _magicBottleAnimationConfig; // 0x18
	[SerializeField]
	private SpriteRenderer _magicBottleBackgroundSpriteRenderer; // 0x20
	[SerializeField]
	private SpriteRenderer _magicBottleBackgroundSpriteRenderer2; // 0x28
	[SerializeField]
	private SpriteRenderer _magicBottleFrontSpriteRenderer; // 0x30
	[SerializeField]
	private List<ParticleSystem> _particleSystems; // 0x38
	[SerializeField]
	private ParticleSystem _sitParticle; // 0x40
	[SerializeField]
	private SpriteRenderer _silhouetteSpriteRenderer; // 0x48
	[SerializeField]
	private SpriteRenderer _rotationGlowSpriteRenderer; // 0x50
	[SerializeField]
	private ParticleSystem _magicBottleTrailParticle; // 0x58
	[SerializeField]
	private SortingGroup _sortingGroup; // 0x60
	private Color _magicBottleBackgroundSpriteRenderer2InitialColor; // 0x68
	private Color _silhouetteInitialColor; // 0x78
	private Color _rotationGlowInitialColor; // 0x88
	private static readonly int ShinePosition; // 0x0
	private Vector3 _initialLocalPosition; // 0x98

	// Methods

	// RVA: 0x214A48C Offset: 0x214A48C VA: 0x214A48C
	private void Awake() { }

	// RVA: 0x214A504 Offset: 0x214A504 VA: 0x214A504
	public Tween PlayEnterAnimation() { }

	// RVA: 0x214A644 Offset: 0x214A644 VA: 0x214A644
	public Tween PlayJumpToInLevelPositionAnimation(Vector3 bottleTargetPosition, BottleItem bottleComponent, int bottleRowCount) { }

	// RVA: 0x214B274 Offset: 0x214B274 VA: 0x214B274
	private Tween SampleZRotation() { }

	// RVA: 0x214AD3C Offset: 0x214AD3C VA: 0x214AD3C
	private Sequence PlayScaleXY() { }

	// RVA: 0x214AE4C Offset: 0x214AE4C VA: 0x214AE4C
	private Tween PlayShine() { }

	// RVA: 0x214B31C Offset: 0x214B31C VA: 0x214B31C
	public void .ctor() { }

	// RVA: 0x214B324 Offset: 0x214B324 VA: 0x214B324
	private static void .cctor() { }

	[CompilerGenerated]
	// RVA: 0x214B38C Offset: 0x214B38C VA: 0x214B38C
	private void <PlayEnterAnimation>b__16_0() { }

	[CompilerGenerated]
	// RVA: 0x214B648 Offset: 0x214B648 VA: 0x214B648
	private void <SampleZRotation>b__18_0(float value) { }
}

// Namespace: Modules.Contexts.GamePlay.MagicBottle.Scripts