public class WindQuestStateService : IRestartableService, IService, IInitializable, IDisposable // TypeDefIndex: 1843
{
	// Fields
	private readonly WindQuestService _windQuestService; // 0x10
	private readonly WindQuestDataService _dataService; // 0x18
	private readonly IPlayerService _playerService; // 0x20
	private WindQuestState _lastState; // 0x28

	// Methods

	// RVA: 0x2D9FF48 Offset: 0x2D9FF48 VA: 0x2D9FF48
	public void .ctor(WindQuestService windQuestService, WindQuestDataService dataService, IPlayerService playerService) { }

	// RVA: 0x2D9FFB0 Offset: 0x2D9FFB0 VA: 0x2D9FFB0 Slot: 4
	public void Initialize() { }

	// RVA: 0x2D9FFBC Offset: 0x2D9FFBC VA: 0x2D9FFBC Slot: 5
	public void Dispose() { }

	// RVA: 0x2D9FFC0 Offset: 0x2D9FFC0 VA: 0x2D9FFC0
	private WindQuestState GetState() { }

	// RVA: 0x2D9DAD4 Offset: 0x2D9DAD4 VA: 0x2D9DAD4
	public void UpdateState() { }

	// RVA: 0x2D9FF10 Offset: 0x2D9FF10 VA: 0x2D9FF10
	public bool ShouldSendGetRequest() { }

	// RVA: 0x2D9E47C Offset: 0x2D9E47C VA: 0x2D9E47C
	public bool CanIncreaseTaskProgress() { }

	// RVA: 0x2D9DBF0 Offset: 0x2D9DBF0 VA: 0x2D9DBF0
	public bool ShouldStartTaskTimer() { }

	// RVA: 0x2DA019C Offset: 0x2DA019C VA: 0x2DA019C
	public bool IsInProgress() { }

	// RVA: 0x2D9DEA8 Offset: 0x2D9DEA8 VA: 0x2D9DEA8
	public bool ShouldShowClaim() { }

	// RVA: 0x2D9DEC0 Offset: 0x2D9DEC0 VA: 0x2D9DEC0
	public bool ShouldShowFinished() { }

	// RVA: 0x2D9F6C4 Offset: 0x2D9F6C4 VA: 0x2D9F6C4
	public bool ShouldAutoClaim() { }

	// RVA: 0x2DA01B4 Offset: 0x2DA01B4 VA: 0x2DA01B4
	public bool ShouldShowForcePopup() { }

	// RVA: 0x2D9E1EC Offset: 0x2D9E1EC VA: 0x2D9E1EC
	public bool ShouldShowLobbyIcon() { }

	// RVA: 0x2D9F044 Offset: 0x2D9F044 VA: 0x2D9F044
	public bool ShouldDownloadAssets() { }
}

// Namespace: 
[CompilerGenerated]