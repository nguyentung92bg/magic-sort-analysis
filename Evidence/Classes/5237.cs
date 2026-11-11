public class FirebaseConfigPersistenceService // TypeDefIndex: 5237
{
	// Fields
	private const string CachedDirectoryName = "Configs";
	private const string CachedFileName = "CachedRemoteConfigs";
	private const string ResourcesDirectoryName = "DefaultConfigs";
	private FirebaseRemoteConfigs _defaultConfigs; // 0x10

	// Methods

	// RVA: 0x1CC1970 Offset: 0x1CC1970 VA: 0x1CC1970
	public void .ctor() { }

	// RVA: 0x1CC124C Offset: 0x1CC124C VA: 0x1CC124C
	public void CacheConfigs(FirebaseRemoteConfigs remoteConfigs) { }

	// RVA: 0x1CC12A4 Offset: 0x1CC12A4 VA: 0x1CC12A4
	public FirebaseRemoteConfigs GetRemoteConfigs() { }

	// RVA: 0x1CC1334 Offset: 0x1CC1334 VA: 0x1CC1334
	public FirebaseRemoteConfigs GetDefaultConfigs() { }

	// RVA: 0x1CC19D4 Offset: 0x1CC19D4 VA: 0x1CC19D4
	private FirebaseRemoteConfigs LoadDefaultConfigs() { }

	// RVA: -1 Offset: -1
	private T GetDefaultConfig<T>(string fileName, T defaultValue) { }
	/* GenericInstMethod :
	|
	|-RVA: 0x2381C40 Offset: 0x2381C40 VA: 0x2381C40
	|-FirebaseConfigPersistenceService.GetDefaultConfig<object>
	*/

	// RVA: -1 Offset: -1
	private void Cache<T>(T model) { }
	/* GenericInstMethod :
	|
	|-RVA: 0x2381BB0 Offset: 0x2381BB0 VA: 0x2381BB0
	|-FirebaseConfigPersistenceService.Cache<object>
	*/

	// RVA: -1 Offset: -1
	private T LoadCachedConfig<T>() { }
	/* GenericInstMethod :
	|
	|-RVA: 0x2381D50 Offset: 0x2381D50 VA: 0x2381D50
	|-FirebaseConfigPersistenceService.LoadCachedConfig<object>
	*/

	// RVA: 0x1CC1978 Offset: 0x1CC1978 VA: 0x1CC1978
	private bool IsCached() { }

	// RVA: 0x1CC38C8 Offset: 0x1CC38C8 VA: 0x1CC38C8
	public void Dispose() { }
}

// Namespace: Modules.Contexts.Application.RemoteConfig.Scripts