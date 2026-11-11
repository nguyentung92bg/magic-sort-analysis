public class RemoteSpineReference : RemoteAssetReferenceBase // TypeDefIndex: 661
{
	// Fields
	[SerializeField]
	private SpineMaterialTextureEntry[] _materialEntries; // 0x18

	// Properties
	public SpineMaterialTextureEntry[] MaterialEntries { get; }

	// Methods

	// RVA: 0x40DCE0C Offset: 0x40DCE0C VA: 0x40DCE0C
	public SpineMaterialTextureEntry[] get_MaterialEntries() { }

	// RVA: 0x40DC144 Offset: 0x40DC144 VA: 0x40DC144
	public bool TryApplyTextures(RemoteBundleReferenceHolder bundleHolder) { }

	// RVA: 0x40DCE14 Offset: 0x40DCE14 VA: 0x40DCE14
	private static Sprite FindSpriteInBundle(RemoteBundleReferenceHolder holder, string textureId) { }

	// RVA: 0x40DD014 Offset: 0x40DD014 VA: 0x40DD014
	public void ClearMaterialTextures() { }

	// RVA: 0x40DC724 Offset: 0x40DC724 VA: 0x40DC724
	public bool IsValid() { }

	// RVA: 0x40DD0F4 Offset: 0x40DD0F4 VA: 0x40DD0F4
	public void SetMaterialEntries(SpineMaterialTextureEntry[] entries) { }

	// RVA: 0x40DD0FC Offset: 0x40DD0FC VA: 0x40DD0FC
	public void .ctor() { }
}

// Namespace: Modules.Infrastructure.UI.Common.Scripts.RemoteAsset
[RequireComponent(typeof(SpriteRenderer))]