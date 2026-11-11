public class AdConfigService // TypeDefIndex: 5373
{
	// Fields
	private const string CachedDirectoryName = "GrandConfigs";
	private const string CachedFileName = "GrandCachedAdConfig";
	private AdConfigRemoteService _adConfigRemoteService; // 0x10
	private AdConfigModel _grandAdConfigModel; // 0x18
	private AdConfigModel _firebaseAdConfigModel; // 0x20
	private AdConfigModelFromBackend _firebaseAdConfigModelFromBackend; // 0x28
	private AddProviderConfigModel _adProviderConfigModel; // 0x30
	private IPlayerService _playerService; // 0x38

	// Methods

	// RVA: 0x185C4EC Offset: 0x185C4EC VA: 0x185C4EC
	public void .ctor(AdConfigRemoteService adConfigRemoteService, IPlayerService playerService) { }

	// RVA: 0x185C530 Offset: 0x185C530 VA: 0x185C530
	public void Initialize() { }

	// RVA: 0x185C790 Offset: 0x185C790 VA: 0x185C790
	public bool IsFirebaseAdConfigModelSet() { }

	// RVA: 0x185C7A0 Offset: 0x185C7A0 VA: 0x185C7A0
	public void SetAdConfigModels(AdConfigModel firebaseAdConfigModel, AdConfigModelFromBackend adConfigModelFromBackend, AddProviderConfigModel addProviderConfigModel) { }

	// RVA: 0x185C7E4 Offset: 0x185C7E4 VA: 0x185C7E4
	public void OnAttributionModelChanged() { }

	// RVA: 0x1858F40 Offset: 0x1858F40 VA: 0x1858F40
	public void OnCpmChanged() { }

	[AsyncStateMachine(typeof(AdConfigService.<SendGetRequest>d__14))]
	// RVA: 0x185C6D8 Offset: 0x185C6D8 VA: 0x185C6D8
	private void SendGetRequest() { }

	// RVA: 0x185C7E8 Offset: 0x185C7E8 VA: 0x185C7E8
	public AdConfigModel GetAdConfigModel() { }

	// RVA: 0x185C828 Offset: 0x185C828 VA: 0x185C828
	public AddProviderConfigModel GetAdProvider() { }

	// RVA: 0x185C830 Offset: 0x185C830 VA: 0x185C830
	private void CacheAdConfigs(AdConfigModel adConfigModel) { }

	// RVA: 0x185C608 Offset: 0x185C608 VA: 0x185C608
	private bool TryGetCachedAdConfig(out AdConfigModel adConfigModel) { }

	// RVA: -1 Offset: -1
	private void Cache<T>(T model, string fileName) { }
	/* GenericInstMethod :
	|
	|-RVA: 0x293709C Offset: 0x293709C VA: 0x293709C
	|-AdConfigService.Cache<object>
	*/

	// RVA: -1 Offset: -1
	private T LoadCachedConfig<T>(string fileName) { }
	/* GenericInstMethod :
	|
	|-RVA: 0x2937124 Offset: 0x2937124 VA: 0x2937124
	|-AdConfigService.LoadCachedConfig<object>
	*/

	// RVA: 0x185C8C0 Offset: 0x185C8C0 VA: 0x185C8C0
	private bool IsCached(string fileName) { }

	// RVA: 0x185C90C Offset: 0x185C90C VA: 0x185C90C
	private void DeleteCachedConfig(string fileName) { }
}

// Namespace: Modules.Contexts.Application.AccountDelete