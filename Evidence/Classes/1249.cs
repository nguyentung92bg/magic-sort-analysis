public class PillowView : MonoBehaviour // TypeDefIndex: 1249
{
	// Fields
	[SerializeField]
	private PillowViewAnimationConfig _pillowViewAnimationConfig; // 0x18
	[SerializeField]
	private MagicBottleAnimationView _magicBottleAnimationView; // 0x20
	[SerializeField]
	private Transform _pillowRotationPivotTransform; // 0x28
	[SerializeField]
	private SpriteRenderer _shadow; // 0x30
	[SerializeField]
	private ParticleSystem _pillowParticle; // 0x38
	[SerializeField]
	private List<ParticleSystem> _allParticles; // 0x40

	// Methods

	// RVA: 0x214BE2C Offset: 0x214BE2C VA: 0x214BE2C
	public Tween PlayEnterAnimation(BottleItem bottleComponent, int bottleRowCount, int highestBottleCountInOneRow) { }

	// RVA: 0x214C7B4 Offset: 0x214C7B4 VA: 0x214C7B4
	public void .ctor() { }
}

// Namespace: 
[CompilerGenerated]
[Serializable]