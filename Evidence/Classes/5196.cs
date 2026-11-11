public class GrandConfigPersistenceService // TypeDefIndex: 5196
{
	// Fields
	private const string CachedDirectoryName = "GrandConfigs";
	private const string CachedRegularLevelsFileName = "GrandCachedRemoteConfigs";
	private const string CachedDailyLevelsFileName = "GrandCachedDailyLevelsRemoteConfigs";
	private const string ResourcesDirectoryName = "DefaultConfigs";
	private GrandRemoteRegularLevelsConfigs _defaultRegularLevelsRegularLevelsConfigs; // 0x10
	private GrandRemoteDailyLevelsConfig _defaultDailyLevelsConfig; // 0x18

	// Methods

	// RVA: 0x1CB4984 Offset: 0x1CB4984 VA: 0x1CB4984
	public void CacheRegularLevelsConfigs(GrandRemoteRegularLevelsConfigs remoteRegularLevelsConfigs) { }

	// RVA: 0x1CB49F4 Offset: 0x1CB49F4 VA: 0x1CB49F4
	public void CacheDailyLevelConfigs(GrandRemoteDailyLevelsConfig grandRemoteDailyLevelsConfig) { }

	// RVA: 0x1CB4A64 Offset: 0x1CB4A64 VA: 0x1CB4A64
	public bool TryGetCachedGrandRemoteRegularLevelsConfigsOrFallback(out GrandRemoteRegularLevelsConfigs remoteRegularLevelsConfigs) { }

	// RVA: 0x1CB4BC8 Offset: 0x1CB4BC8 VA: 0x1CB4BC8
	public bool TryGetCachedGrandRemoteDailyLevelsConfigsOrFallback(out GrandRemoteDailyLevelsConfig remoteConfigs) { }

	// RVA: 0x1CB4B88 Offset: 0x1CB4B88 VA: 0x1CB4B88
	public GrandRemoteRegularLevelsConfigs GetDefaultRegularLevelsConfigs() { }

	// RVA: 0x1CB4CA0 Offset: 0x1CB4CA0 VA: 0x1CB4CA0
	public GrandRemoteDailyLevelsConfig GetDefaultDailyLevelsConfigs() { }

	// RVA: 0x1CB4D60 Offset: 0x1CB4D60 VA: 0x1CB4D60
	private GrandRemoteRegularLevelsConfigs LoadDefaultRegularConfigs() { }

	// RVA: -1 Offset: -1
	private T GetDefaultConfig<T>(string fileName, T defaultValue) { }
	/* GenericInstMethod :
	|
	|-RVA: 0x23910F8 Offset: 0x23910F8 VA: 0x23910F8
	|-GrandConfigPersistenceService.GetDefaultConfig<object>
	*/

	// RVA: -1 Offset: -1
	private void Cache<T>(T model, string fileName) { }
	/* GenericInstMethod :
	|
	|-RVA: 0x2391070 Offset: 0x2391070 VA: 0x2391070
	|-GrandConfigPersistenceService.Cache<object>
	*/

	// RVA: -1 Offset: -1
	private T LoadCachedConfig<T>(string fileName) { }
	/* GenericInstMethod :
	|
	|-RVA: 0x2391208 Offset: 0x2391208 VA: 0x2391208
	|-GrandConfigPersistenceService.LoadCachedConfig<object>
	*/

	// RVA: 0x1CB4B3C Offset: 0x1CB4B3C VA: 0x1CB4B3C
	private bool IsCached(string fileName) { }

	// RVA: 0x1CB4F18 Offset: 0x1CB4F18 VA: 0x1CB4F18
	public void Dispose() { }

	// RVA: 0x1CB4F1C Offset: 0x1CB4F1C VA: 0x1CB4F1C
	public void .ctor() { }
}

// Namespace: 
[CompilerGenerated]