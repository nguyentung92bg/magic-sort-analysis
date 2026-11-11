public class DuckHouseBrokeParticle : MonoBehaviour // TypeDefIndex: 1719
{
	// Fields
	[SerializeField]
	private DuckHouseColorConfig _config; // 0x18
	[SerializeField]
	private ParticleSystem[] _circleParticles; // 0x20
	[SerializeField]
	private ParticleSystem _crystalParticle; // 0x28
	[SerializeField]
	private ParticleSystem _mainParticle; // 0x30

	// Properties
	public ParticleSystem Particle { get; }

	// Methods

	// RVA: 0x27567D8 Offset: 0x27567D8 VA: 0x27567D8
	public ParticleSystem get_Particle() { }

	// RVA: 0x27567E0 Offset: 0x27567E0 VA: 0x27567E0
	public void SetDuckType(DuckType duckType) { }

	// RVA: 0x2756A08 Offset: 0x2756A08 VA: 0x2756A08
	public void .ctor() { }
}

// Namespace: Modules.Contexts.GamePlay.Board.Items.Scripts.Duck
[Serializable]