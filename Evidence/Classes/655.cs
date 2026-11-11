public class RemoteAssetReferenceGroup : MonoBehaviour // TypeDefIndex: 655
{
	// Fields
	[SerializeField]
	private RemoteSpriteReference[] _references; // 0x18
	[SerializeField]
	private RemoteSpineReference[] _spineReferences; // 0x20
	[SerializeField]
	private RemoteParticleReference[] _particleReferences; // 0x28

	// Properties
	public RemoteSpriteReference[] References { get; }
	public RemoteSpineReference[] SpineReferences { get; }
	public RemoteParticleReference[] ParticleReferences { get; }

	// Methods

	// RVA: 0x40DC998 Offset: 0x40DC998 VA: 0x40DC998
	public RemoteSpriteReference[] get_References() { }

	// RVA: 0x40DC9A0 Offset: 0x40DC9A0 VA: 0x40DC9A0
	public RemoteSpineReference[] get_SpineReferences() { }

	// RVA: 0x40DC9A8 Offset: 0x40DC9A8 VA: 0x40DC9A8
	public RemoteParticleReference[] get_ParticleReferences() { }

	// RVA: 0x40DC9B0 Offset: 0x40DC9B0 VA: 0x40DC9B0
	public void SetReferences(RemoteSpriteReference[] references, RemoteSpineReference[] spineReferences, RemoteParticleReference[] particleReferences) { }

	// RVA: 0x40DC9F4 Offset: 0x40DC9F4 VA: 0x40DC9F4
	public void .ctor() { }
}

// Namespace: Modules.Infrastructure.UI.Common.Scripts.RemoteAsset
[Serializable]