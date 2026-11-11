public class GameEconomyConfigService // TypeDefIndex: 5257
{
	// Fields
	private const string CachedDirectoryName = "GrandConfigs";
	private const string CachedFileName = "GrandCachedGameEconomyConfig";
	private GameEconomyModel _grandGameEconomyModel; // 0x10
	private GameEconomyModel _firebaseGameEconomyModel; // 0x18
	private GameEconomyConfigModelFromBackend _firebaseGameEconomyConfigModelFromBackend; // 0x20
	private readonly GameEconomyConfigRemoteService _gameEconomyConfigRemoteService; // 0x28
	private readonly IPlayerService _playerService; // 0x30

	// Methods

	// RVA: 0x1CC577C Offset: 0x1CC577C VA: 0x1CC577C
	public void .ctor(GameEconomyConfigRemoteService gameEconomyConfigRemoteService, IPlayerService playerService) { }

	// RVA: 0x1CC57C0 Offset: 0x1CC57C0 VA: 0x1CC57C0
	public void Initialize() { }

	// RVA: 0x1CC58DC Offset: 0x1CC58DC VA: 0x1CC58DC
	public void SetGameEconomyConfigModels(GameEconomyModel firebaseGameEconomyModel, GameEconomyConfigModelFromBackend gameEconomyConfigModelFromBackend) { }

	// RVA: 0x1CC590C Offset: 0x1CC590C VA: 0x1CC590C
	public void FetchGameEconomyModelFromBackend() { }

	// RVA: 0x1CC59C4 Offset: 0x1CC59C4 VA: 0x1CC59C4
	public GameEconomyModel GetGameEconomyModel() { }

	[AsyncStateMachine(typeof(GameEconomyConfigService.<SendGetRequest>d__12))]
	// RVA: 0x1CC5910 Offset: 0x1CC5910 VA: 0x1CC5910
	private void SendGetRequest() { }

	// RVA: 0x1CC59EC Offset: 0x1CC59EC VA: 0x1CC59EC
	private GameEconomyModel CreateGameEconomyModel(GameEconomyResponseModel responseModel) { }

	// RVA: 0x1CC5CE0 Offset: 0x1CC5CE0 VA: 0x1CC5CE0
	private void CacheGameEconomyConfig(GameEconomyModel gameEconomyModel) { }

	// RVA: 0x1CC5804 Offset: 0x1CC5804 VA: 0x1CC5804
	private bool TryGetCachedGameEconomyConfig(out CachedGameEconomyConfigModel cachedGameEconomyConfigModel) { }

	// RVA: 0x1CC5DF4 Offset: 0x1CC5DF4 VA: 0x1CC5DF4
	public long GetActiveConfigHierarchy() { }

	// RVA: -1 Offset: -1
	private void Cache<T>(T model, string fileName) { }
	/* GenericInstMethod :
	|
	|-RVA: 0x2390390 Offset: 0x2390390 VA: 0x2390390
	|-GameEconomyConfigService.Cache<object>
	*/

	// RVA: -1 Offset: -1
	private T LoadCachedConfig<T>(string fileName) { }
	/* GenericInstMethod :
	|
	|-RVA: 0x239051C Offset: 0x239051C VA: 0x239051C
	|-GameEconomyConfigService.LoadCachedConfig<object>
	*/

	// RVA: 0x1CC5DA8 Offset: 0x1CC5DA8 VA: 0x1CC5DA8
	private bool IsCached(string fileName) { }

	// RVA: 0x1CC5E30 Offset: 0x1CC5E30 VA: 0x1CC5E30
	public void Dispose() { }
}

// Namespace: Modules.Contexts.Application.Events.Scripts