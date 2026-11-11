public class RemoteAssetController : MonoBehaviour, IRemoteAssetHolder // TypeDefIndex: 652
{
	// Fields
	[SerializeField]
	private string _bundleId; // 0x18
	[SerializeField]
	private RemoteSpriteReference[] _references; // 0x20
	[SerializeField]
	private RemoteSpineReference[] _spineReferences; // 0x28
	[SerializeField]
	private RemoteParticleReference[] _particleReferences; // 0x30
	[SerializeField]
	[Tooltip("RemoteAssetReferenceGroups living on the roots of prefabs spawned at runtime (e.g. board items) whose sprites belong to this bundle. Use the 'Slot remote sprites into listed prefabs' button to populate/refresh them.")]
	private List<RemoteAssetReferenceGroup> _externalReferenceGroups; // 0x38

	// Properties
	public RemoteSpriteReference[] References { get; }
	public RemoteSpineReference[] SpineReferences { get; }
	public RemoteParticleReference[] ParticleReferences { get; }
	public IReadOnlyList<RemoteAssetReferenceGroup> ExternalReferenceGroups { get; }
	public string BundleId { get; }
	public bool HasSpineReferences { get; }
	public bool HasParticleReferences { get; }

	// Methods

	// RVA: 0x40DAF34 Offset: 0x40DAF34 VA: 0x40DAF34
	public RemoteSpriteReference[] get_References() { }

	// RVA: 0x40DAF3C Offset: 0x40DAF3C VA: 0x40DAF3C
	public RemoteSpineReference[] get_SpineReferences() { }

	// RVA: 0x40DAF44 Offset: 0x40DAF44 VA: 0x40DAF44
	public RemoteParticleReference[] get_ParticleReferences() { }

	// RVA: 0x40DAF4C Offset: 0x40DAF4C VA: 0x40DAF4C
	public IReadOnlyList<RemoteAssetReferenceGroup> get_ExternalReferenceGroups() { }

	// RVA: 0x40DAF54 Offset: 0x40DAF54 VA: 0x40DAF54
	public string get_BundleId() { }

	// RVA: 0x40DAFCC Offset: 0x40DAFCC VA: 0x40DAFCC
	public bool get_HasSpineReferences() { }

	// RVA: 0x40DAFEC Offset: 0x40DAFEC VA: 0x40DAFEC
	public bool get_HasParticleReferences() { }

	// RVA: 0x40DB00C Offset: 0x40DB00C VA: 0x40DB00C Slot: 4
	public bool ApplyRemoteAssets() { }

	// RVA: 0x40DB910 Offset: 0x40DB910 VA: 0x40DB910
	private void ApplyParticleSpritesFromPrefab(RemoteBundleReferenceHolder bundleHolder) { }

	// RVA: 0x40DB844 Offset: 0x40DB844 VA: 0x40DB844
	private void ApplySpineTexturesFromPrefab(RemoteBundleReferenceHolder bundleHolder) { }

	// RVA: 0x40DB53C Offset: 0x40DB53C VA: 0x40DB53C
	private void ApplySpritesFromPrefab(RemoteBundleReferenceHolder bundle) { }

	// RVA: 0x40DB9DC Offset: 0x40DB9DC VA: 0x40DB9DC
	private void ApplyExternalGroupsFromPrefab(RemoteBundleReferenceHolder bundle) { }

	// RVA: 0x40DC390 Offset: 0x40DC390 VA: 0x40DC390
	private void OnValidate() { }

	// RVA: 0x40DC4D0 Offset: 0x40DC4D0 VA: 0x40DC4D0
	public void SetReferences(RemoteSpriteReference[] slots) { }

	// RVA: 0x40DC4D8 Offset: 0x40DC4D8 VA: 0x40DC4D8
	public void SetSpineReferences(RemoteSpineReference[] slots) { }

	// RVA: 0x40DC4E0 Offset: 0x40DC4E0 VA: 0x40DC4E0
	public void SetParticleReferences(RemoteParticleReference[] slots) { }

	// RVA: 0x40DC4E8 Offset: 0x40DC4E8 VA: 0x40DC4E8
	public void SetExternalReferenceGroups(List<RemoteAssetReferenceGroup> groups) { }

	// RVA: 0x40DC570 Offset: 0x40DC570 VA: 0x40DC570
	public bool AreReferencesValid() { }

	// RVA: 0x40DC884 Offset: 0x40DC884 VA: 0x40DC884
	public void .ctor() { }
}

// Namespace: Modules.Infrastructure.UI.Common.Scripts.RemoteAsset