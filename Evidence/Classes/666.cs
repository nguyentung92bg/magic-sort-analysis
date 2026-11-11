public class AssetBundleVersions : ScriptableObject // TypeDefIndex: 666
{
	// Fields
	public List<AssetBundleVersionInfo> androidVersionInfo; // 0x18
	public List<AssetBundleVersionInfo> iosVersionInfo; // 0x20

	// Methods

	// RVA: 0x40DD1EC Offset: 0x40DD1EC VA: 0x40DD1EC
	private List<AssetBundleVersionInfo> GetTargetVersionInfo() { }

	// RVA: 0x40DD1F4 Offset: 0x40DD1F4 VA: 0x40DD1F4
	public AssetBundleVersionInfo GetBundleInfo(string bundleName) { }

	// RVA: 0x40DD2E4 Offset: 0x40DD2E4 VA: 0x40DD2E4
	public bool HasBundle(string bundleName) { }

	// RVA: 0x40DD2FC Offset: 0x40DD2FC VA: 0x40DD2FC
	public int GetBundleVersion(string bundleName) { }

	// RVA: 0x40DD318 Offset: 0x40DD318 VA: 0x40DD318
	public string GetBucketFolder(string bundleName) { }

	// RVA: 0x40DD334 Offset: 0x40DD334 VA: 0x40DD334
	public void .ctor() { }
}

// Namespace: Modules.Infrastructure.AssetManagement