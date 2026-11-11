public class PreGameService : IRestartableService, IService, IInitializable, IDisposable // TypeDefIndex: 2863
{
	// Fields
	private RemoteConfigs _remoteConfigs; // 0x10
	private IPlayerService _playerService; // 0x18
	private MultiplierService _multiplierService; // 0x20

	// Methods

	// RVA: 0x2DD2BC8 Offset: 0x2DD2BC8 VA: 0x2DD2BC8
	public void .ctor(RemoteConfigs remoteConfigs, IPlayerService playerService, MultiplierService multiplierService) { }

	// RVA: 0x2DD2C28 Offset: 0x2DD2C28 VA: 0x2DD2C28 Slot: 4
	public void Initialize() { }

	// RVA: 0x2DD2C2C Offset: 0x2DD2C2C VA: 0x2DD2C2C Slot: 5
	public void Dispose() { }

	// RVA: 0x2DD2C30 Offset: 0x2DD2C30 VA: 0x2DD2C30
	public bool ShouldShowPreGamePopup(LevelDifficultyType difficulty) { }

	// RVA: 0x2DD2D34 Offset: 0x2DD2D34 VA: 0x2DD2D34
	private PreGameConfigModel GetConfig() { }
}

// Namespace: Modules.Contexts.Home.UI.PreGame.Scripts
[Serializable]