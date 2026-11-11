public class JetpackRaceLobbyButtonAnimationView : MonoBehaviour // TypeDefIndex: 4262
{
	// Fields
	[SerializeField]
	private Animation _animator; // 0x18
	[SerializeField]
	private float _animationTypeInterval; // 0x20
	[SerializeField]
	private List<ParticleSystem> _particleSystems; // 0x28
	[SerializeField]
	private ParticleSystem _smokeParticle; // 0x30
	[SerializeField]
	private Transform _rocketTransform; // 0x38
	private float _timeSinceLastAction; // 0x40
	private Vector3 _rocketInitialPosition; // 0x44

	// Methods

	// RVA: 0x1C6BA30 Offset: 0x1C6BA30 VA: 0x1C6BA30
	private void Awake() { }

	// RVA: 0x1C6BA5C Offset: 0x1C6BA5C VA: 0x1C6BA5C
	private void OnEnable() { }

	// RVA: 0x1C6BA84 Offset: 0x1C6BA84 VA: 0x1C6BA84
	private void Update() { }

	// RVA: 0x1C6BAEC Offset: 0x1C6BAEC VA: 0x1C6BAEC
	private void PlayAnimation() { }

	// RVA: 0x1C6BB08 Offset: 0x1C6BB08 VA: 0x1C6BB08
	public void RiseStartEvent() { }

	// RVA: 0x1C6BB94 Offset: 0x1C6BB94 VA: 0x1C6BB94
	public void DuringFallingEvent() { }

	// RVA: 0x1C6BC28 Offset: 0x1C6BC28 VA: 0x1C6BC28
	public void PlaySmokeParticleEvent() { }

	// RVA: 0x1C6BC44 Offset: 0x1C6BC44 VA: 0x1C6BC44
	public void .ctor() { }
}

// Namespace: Modules.Contexts.Home.JetpackRace.Scripts.UI