public class WinParticle : MonoBehaviour // TypeDefIndex: 1538
{
	// Fields
	[SerializeField]
	private ParticleSystem[] _allParticles; // 0x18
	[SerializeField]
	private ParticleSystem[] _gradientParticles1; // 0x20
	[SerializeField]
	private ParticleSystem[] _gradientParticles2; // 0x28
	[SerializeField]
	private ParticleSystem[] _gradientParticles3; // 0x30
	[SerializeField]
	private ParticleSystem[] _gradientParticles4; // 0x38
	[SerializeField]
	private ParticleSystem[] _revealParticles; // 0x40
	private ParticleSystem _parentParticle; // 0x48

	// Methods

	// RVA: 0x23002A4 Offset: 0x23002A4 VA: 0x23002A4
	private void Awake() { }

	// RVA: 0x2300334 Offset: 0x2300334 VA: 0x2300334
	public void SetColorOfWinParticles(ColorAndColorId color, bool isNewParticlesEnabled) { }

	// RVA: 0x2300438 Offset: 0x2300438 VA: 0x2300438
	private void SetColorOverLifetime(IEnumerable<ParticleSystem> particles, Gradient color) { }

	// RVA: 0x2300778 Offset: 0x2300778 VA: 0x2300778
	public void PlayRevealParticles() { }

	// RVA: 0x2300890 Offset: 0x2300890 VA: 0x2300890
	public void PlayParticle() { }

	// RVA: 0x23008AC Offset: 0x23008AC VA: 0x23008AC
	public void .ctor() { }
}

// Namespace: Modules.Contexts.GamePlay.BoardItems.Scripts.Bottle
[CreateAssetMenu(fileName = "GameplayAssets", menuName = "Configs/GameplayAssets")]