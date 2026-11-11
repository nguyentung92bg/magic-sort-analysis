public class LevelModelRemoteService : IRestartableService, IService, IInitializable, IDisposable // TypeDefIndex: 1405
{
	// Fields
	private HttpProxy _httpProxy; // 0x10
	private BackendEnvironmentConfig _backendEnvironmentConfig; // 0x18

	// Methods

	// RVA: 0x1E8C780 Offset: 0x1E8C780 VA: 0x1E8C780
	public void .ctor(HttpProxy httpProxy, BackendEnvironmentConfig backendEnvironmentConfig) { }

	// RVA: 0x1E8C7C4 Offset: 0x1E8C7C4 VA: 0x1E8C7C4 Slot: 4
	public void Initialize() { }

	[AsyncStateMachine(typeof(LevelModelRemoteService.<GetGivenSeedsAsString>d__4))]
	// RVA: 0x1E8C5C8 Offset: 0x1E8C5C8 VA: 0x1E8C5C8
	public Task<List<string>> GetGivenSeedsAsString(List<string> fileNames) { }

	// RVA: 0x1E8C7C8 Offset: 0x1E8C7C8 VA: 0x1E8C7C8
	private List<string> ParseSeedsJson(string json) { }

	// RVA: 0x1E8CB0C Offset: 0x1E8CB0C VA: 0x1E8CB0C
	private List<string> ParseSeedsJsonOptimized(string json) { }

	// RVA: 0x1E8CD04 Offset: 0x1E8CD04 VA: 0x1E8CD04 Slot: 5
	public void Dispose() { }
}

// Namespace: Modules.Contexts.GamePlay.Levels.Scripts.LevelModelService
[CreateAssetMenu(fileName = "LevelModels", menuName = "Level/LevelModels")]