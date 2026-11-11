public class AssetManager : MonoBehaviour // TypeDefIndex: 681
{
	// Fields
	[SerializeField]
	private AssetBundleVersions _remoteAssetBundleVersions; // 0x18
	private string _remoteAssetBundlePath; // 0x20
	private const int ConcurrentDownloadLimit = 3;
	private List<DownloadRequest> _downloadRequestsById; // 0x28
	private List<LoadRequest> _loadRequestsById; // 0x30
	private Dictionary<string, List<GameObject>> _instantiatedObjectPool; // 0x38
	private List<string> _persistentBundles; // 0x40
	private List<string> _resourcesAssets; // 0x48
	private Task _initializeTask; // 0x50
	private int _downloadingAssetCount; // 0x58
	private HttpProxy _httpProxy; // 0x60

	// Methods

	// RVA: 0x40DD4B8 Offset: 0x40DD4B8 VA: 0x40DD4B8
	public void Initialize(HttpProxy httpProxy) { }

	// RVA: 0x40DD6F4 Offset: 0x40DD6F4 VA: 0x40DD6F4
	private List<string> GetBundlesInPath(string path) { }

	// RVA: 0x40DD7E0 Offset: 0x40DD7E0 VA: 0x40DD7E0
	private List<string> GetAssetsInResources() { }

	// RVA: 0x40DD904 Offset: 0x40DD904 VA: 0x40DD904
	public Task WaitForInitializationAsync() { }

	// RVA: 0x40DD90C Offset: 0x40DD90C VA: 0x40DD90C
	private bool IsInitialized() { }

	// RVA: 0x40DD920 Offset: 0x40DD920 VA: 0x40DD920
	public void RequestDownload(string id, int priority = 10000000) { }

	// RVA: 0x40DDD90 Offset: 0x40DDD90 VA: 0x40DDD90
	public void RequestLoad(string id, int priority = 10000000, bool immediate = False) { }

	// RVA: 0x40DE610 Offset: 0x40DE610 VA: 0x40DE610
	public void Update() { }

	[AsyncStateMachine(typeof(AssetManager.<Download>d__19))]
	// RVA: 0x40DE96C Offset: 0x40DE96C VA: 0x40DE96C
	private void Download(DownloadRequest downloadRequest) { }

	[AsyncStateMachine(typeof(AssetManager.<Download>d__20))]
	// RVA: 0x40DEA80 Offset: 0x40DEA80 VA: 0x40DEA80
	private Task<bool> Download(string id) { }

	// RVA: 0x40DEBB4 Offset: 0x40DEBB4 VA: 0x40DEBB4
	private void DeleteLowerVersionsOfBundle(string id, int version) { }

	// RVA: 0x40DED7C Offset: 0x40DED7C VA: 0x40DED7C
	private bool IsExistInDownloadedRemoteBundleFiles(string id) { }

	// RVA: 0x40DDD24 Offset: 0x40DDD24 VA: 0x40DDD24
	public bool IsExistInResources(string id) { }

	// RVA: 0x40DEA40 Offset: 0x40DEA40 VA: 0x40DEA40
	public bool IsRemoteBundle(string id) { }

	[AsyncStateMachine(typeof(AssetManager.<GetBundleAsync>d__25))]
	// RVA: 0x40DEE7C Offset: 0x40DEE7C VA: 0x40DEE7C
	private Task<byte[]> GetBundleAsync(string id, string bundleName) { }

	// RVA: 0x40DB3D0 Offset: 0x40DB3D0 VA: 0x40DB3D0
	public bool IsDownloaded(string id) { }

	// RVA: 0x40DB19C Offset: 0x40DB19C VA: 0x40DB19C
	public bool IsLoaded(string id) { }

	// RVA: 0x40DB40C Offset: 0x40DB40C VA: 0x40DB40C
	public GameObject GetLoadedPrefab(string id) { }

	// RVA: 0x40DEFC0 Offset: 0x40DEFC0 VA: 0x40DEFC0
	private bool IsLoadRequested(string id) { }

	[AsyncStateMachine(typeof(AssetManager.<LoadAssetAsync>d__30))]
	// RVA: 0x40DE538 Offset: 0x40DE538 VA: 0x40DE538
	private void LoadAssetAsync(LoadRequest loadRequest) { }

	// RVA: 0x40DE230 Offset: 0x40DE230 VA: 0x40DE230
	private void LoadAsset(LoadRequest loadRequest) { }

	[AsyncStateMachine(typeof(AssetManager.<LoadAssetBundleAsync>d__32))]
	// RVA: 0x40DF1F4 Offset: 0x40DF1F4 VA: 0x40DF1F4
	private Task<AssetBundle> LoadAssetBundleAsync(string path) { }

	[AsyncStateMachine(typeof(AssetManager.<LoadAssetFromAssetBundleAsync>d__33<T>))]
	// RVA: -1 Offset: -1
	private Task<T> LoadAssetFromAssetBundleAsync<T>(AssetBundle bundle, string assetName) { }
	/* GenericInstMethod :
	|
	|-RVA: 0x1F43B74 Offset: 0x1F43B74 VA: 0x1F43B74
	|-AssetManager.LoadAssetFromAssetBundleAsync<object>
	*/

	// RVA: -1 Offset: -1
	private T LoadAssetFromAssetBundle<T>(AssetBundle bundle, string assetName) { }
	/* GenericInstMethod :
	|
	|-RVA: 0x1F43B48 Offset: 0x1F43B48 VA: 0x1F43B48
	|-AssetManager.LoadAssetFromAssetBundle<object>
	*/

	// RVA: 0x40DF144 Offset: 0x40DF144 VA: 0x40DF144
	private void LoadAssetFromResources(LoadRequest loadRequest) { }

	[AsyncStateMachine(typeof(AssetManager.<LoadAssetFromResourcesAsync>d__36))]
	// RVA: 0x40DF304 Offset: 0x40DF304 VA: 0x40DF304
	private void LoadAssetFromResourcesAsync(LoadRequest loadRequest) { }

	[AsyncStateMachine(typeof(AssetManager.<LoadResourcesAsync>d__37))]
	// RVA: 0x40DF3D8 Offset: 0x40DF3D8 VA: 0x40DF3D8
	private Task<GameObject> LoadResourcesAsync(string id) { }

	[AsyncStateMachine(typeof(AssetManager.<AwaitLoad>d__38))]
	// RVA: 0x40DF4E8 Offset: 0x40DF4E8 VA: 0x40DF4E8
	public Task AwaitLoad(string id) { }

	// RVA: 0x40DF5EC Offset: 0x40DF5EC VA: 0x40DF5EC
	public GameObject Instantiate(string id) { }

	// RVA: 0x40DF874 Offset: 0x40DF874 VA: 0x40DF874
	public void Recycle(string id, GameObject instantiatedGameObject) { }

	// RVA: 0x40DFA38 Offset: 0x40DFA38 VA: 0x40DFA38
	public void ClearBundles() { }

	// RVA: 0x40DFE98 Offset: 0x40DFE98 VA: 0x40DFE98
	private string GetPlatformFolder() { }

	// RVA: 0x40DFF24 Offset: 0x40DFF24 VA: 0x40DFF24
	public void .ctor() { }
}

// Namespace: Modules.Infrastructure.AssetManagement