public class TargetBreakParticleController : MonoBehaviour // TypeDefIndex: 1674
{
	// Fields
	[Tooltip("Particle systems whose Start Color is tinted to the target color.")]
	[SerializeField]
	private List<ParticleSystem> _colorTargets; // 0x18
	[Tooltip("Particle systems that must overlap perfectly. They all receive the same random seed each play.")]
	[SerializeField]
	private List<ParticleSystem> _seedTargets; // 0x20
	[SerializeField]
	private ParticleSystem _breakParticle; // 0x28
	[SerializeField]
	private SortingGroup _sortingGroup; // 0x30

	// Methods

	// RVA: 0x2748518 Offset: 0x2748518 VA: 0x2748518
	public void Initialize(Color color) { }

	// RVA: 0x2749168 Offset: 0x2749168 VA: 0x2749168
	public void PlayBreak() { }

	// RVA: 0x274AE8C Offset: 0x274AE8C VA: 0x274AE8C
	private void SetColor(Color color) { }

	// RVA: 0x274B0A4 Offset: 0x274B0A4 VA: 0x274B0A4
	private void SyncSeeds() { }

	// RVA: 0x274B238 Offset: 0x274B238 VA: 0x274B238
	private void ApplySeed(ParticleSystem ps, uint seed) { }

	// RVA: 0x274910C Offset: 0x274910C VA: 0x274910C
	public void SetVfxSorting(Sorting sorting) { }

	// RVA: 0x274B284 Offset: 0x274B284 VA: 0x274B284
	public void .ctor() { }
}

// Namespace: Modules.Contexts.GamePlay.Board.Items.Scripts.MagicSeal