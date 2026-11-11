public class SuperChargerTrailAnimationController : MonoBehaviour // TypeDefIndex: 1175
{
	// Fields
	[SerializeField]
	private List<ParticleSystem> _trailPool; // 0x18
	[SerializeField]
	public SuperChargerTrailAnimationConfig AnimationConfig; // 0x20

	// Methods

	// RVA: 0x20E5B10 Offset: 0x20E5B10 VA: 0x20E5B10
	public void Initialize() { }

	// RVA: 0x20E5C74 Offset: 0x20E5C74 VA: 0x20E5C74
	public void PlayTrailAnimation(List<Vector3> targets, Transform from, int count, float trailDuration, Action onComplete, float trailDelay = 0) { }

	// RVA: 0x20E5F60 Offset: 0x20E5F60 VA: 0x20E5F60
	private List<ParticleSystem> GetTrails(int count) { }

	// RVA: 0x20E6220 Offset: 0x20E6220 VA: 0x20E6220
	public void Dispose() { }

	// RVA: 0x20E63C0 Offset: 0x20E63C0 VA: 0x20E63C0
	public void .ctor() { }
}

// Namespace: 
[CompilerGenerated]