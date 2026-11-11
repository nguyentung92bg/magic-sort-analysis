public class RemoteParticleReference : RemoteAssetReferenceBase // TypeDefIndex: 659
{
	// Fields
	[SerializeField]
	private ParticleSystem _particleSystem; // 0x18
	[SerializeField]
	private ParticleSpriteEntry[] _spriteEntries; // 0x20

	// Properties
	public ParticleSystem ParticleSystem { get; }
	public ParticleSpriteEntry[] SpriteEntries { get; }

	// Methods

	// RVA: 0x40DCA24 Offset: 0x40DCA24 VA: 0x40DCA24
	public ParticleSystem get_ParticleSystem() { }

	// RVA: 0x40DCA2C Offset: 0x40DCA2C VA: 0x40DCA2C
	public ParticleSpriteEntry[] get_SpriteEntries() { }

	// RVA: 0x40DBF98 Offset: 0x40DBF98 VA: 0x40DBF98
	public bool TryApplySprites(RemoteBundleReferenceHolder bundleHolder) { }

	// RVA: 0x40DCA34 Offset: 0x40DCA34 VA: 0x40DCA34
	private static Sprite FindSpriteInBundle(RemoteBundleReferenceHolder holder, string spriteId) { }

	// RVA: 0x40DCC34 Offset: 0x40DCC34 VA: 0x40DCC34
	public void ClearSprites() { }

	// RVA: 0x40DC7BC Offset: 0x40DC7BC VA: 0x40DC7BC
	public bool IsValid() { }

	// RVA: 0x40DCD44 Offset: 0x40DCD44 VA: 0x40DCD44
	public void SetSpriteEntries(ParticleSpriteEntry[] entries) { }

	// RVA: 0x40DCD4C Offset: 0x40DCD4C VA: 0x40DCD4C
	private void OnValidate() { }

	// RVA: 0x40DCDFC Offset: 0x40DCDFC VA: 0x40DCDFC
	public void .ctor() { }
}

// Namespace: Modules.Infrastructure.UI.Common.Scripts.RemoteAsset
[Serializable]