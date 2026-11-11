public class WaterParticleView : MonoBehaviour // TypeDefIndex: 1537
{
	// Fields
	[SerializeField]
	private ParticleSystem _denseParticleSystem; // 0x18
	[SerializeField]
	private List<ParticleSystem> _denseParticleSystems; // 0x20
	[SerializeField]
	private ParticleSystem _bouncyParticlesSystem; // 0x28
	[SerializeField]
	[FormerlySerializedAs("_particleSystems")]
	private List<ParticleSystem> _frontParticleSystems; // 0x30
	[SerializeField]
	private List<ParticleSystem> _backParticleSystem; // 0x38
	[SerializeField]
	private ParticleSystem _ringParticleSystem; // 0x40
	[SerializeField]
	private WaterParticleConfig _waterParticleConfig; // 0x48
	[SerializeField]
	private ParticleSystem _biggerDenseParticleSystem; // 0x50
	[SerializeField]
	private List<ParticleSystem> _biggerDenseParticleSystems; // 0x58
	private Tween _denseAndRingTween; // 0x60
	private Tween _bouncyTween; // 0x68

	// Methods

	// RVA: 0x22FE9B8 Offset: 0x22FE9B8 VA: 0x22FE9B8
	public void Play(ColorAndColorId colorAndColorId, WaterItem waterItem, int heightToMove) { }

	// RVA: 0x22FF39C Offset: 0x22FF39C VA: 0x22FF39C
	public void DailyPlay(ColorAndColorId colorAndColorId, WaterItem waterItem, int waterHeightToMove) { }

	// RVA: 0x22FF29C Offset: 0x22FF29C VA: 0x22FF29C
	private void ClearTween() { }

	// RVA: 0x22FFE6C Offset: 0x22FFE6C VA: 0x22FFE6C
	public void StopAndClearParticles() { }

	// RVA: 0x22FFEDC Offset: 0x22FFEDC VA: 0x22FFEDC
	public void .ctor() { }
}

// Namespace: Modules.Contexts.GamePlay.BoardItems.Scripts.Bottle