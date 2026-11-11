public class MagicBottleService : IService, IInitializable, IDisposable, IDataInitializable, ILobbyShownService // TypeDefIndex: 4041
{
	// Fields
	private RemoteConfigs _remoteConfigs; // 0x10
	private MagicBottleDataService _dataService; // 0x18
	private IPlayerService _playerService; // 0x20

	// Properties
	private MagicBottleConfigModel ConfigModel { get; }

	// Methods

	// RVA: 0x375D28C Offset: 0x375D28C VA: 0x375D28C
	private MagicBottleConfigModel get_ConfigModel() { }

	// RVA: 0x375D2B0 Offset: 0x375D2B0 VA: 0x375D2B0
	public void .ctor(RemoteConfigs remoteConfigs, MagicBottleDataService dataService, IPlayerService playerService) { }

	// RVA: 0x375D310 Offset: 0x375D310 VA: 0x375D310 Slot: 4
	public void Initialize() { }

	// RVA: 0x375D314 Offset: 0x375D314 VA: 0x375D314 Slot: 6
	public void InitializeData() { }

	// RVA: 0x375D354 Offset: 0x375D354 VA: 0x375D354 Slot: 5
	public void Dispose() { }

	// RVA: 0x375D358 Offset: 0x375D358 VA: 0x375D358
	public bool IsEligible() { }

	// RVA: 0x375D438 Offset: 0x375D438 VA: 0x375D438
	private int GetFirstLevelToShow() { }

	// RVA: 0x375D454 Offset: 0x375D454 VA: 0x375D454
	public bool TryResetProgress() { }

	// RVA: 0x375D53C Offset: 0x375D53C VA: 0x375D53C
	private bool IsActive() { }

	// RVA: 0x375D57C Offset: 0x375D57C VA: 0x375D57C
	public bool TryIncreaseProgress() { }

	// RVA: 0x375D620 Offset: 0x375D620 VA: 0x375D620
	public void TestMethodGainMagicBottle() { }

	// RVA: 0x375D4E4 Offset: 0x375D4E4 VA: 0x375D4E4
	public bool HasMagicBottle() { }

	// RVA: 0x375D694 Offset: 0x375D694 VA: 0x375D694
	public bool HasGainedMagicBottle() { }

	// RVA: 0x375D6BC Offset: 0x375D6BC VA: 0x375D6BC
	private bool IsLobbyButtonProgressIncreased() { }

	// RVA: 0x375D714 Offset: 0x375D714 VA: 0x375D714
	public int GetProgress() { }

	// RVA: 0x375D318 Offset: 0x375D318 VA: 0x375D318
	public void TrySetLastSeenLobbyButtonProgress() { }

	// RVA: 0x375D6F0 Offset: 0x375D6F0 VA: 0x375D6F0
	public int GetLastSeenLobbyButtonProgress() { }

	// RVA: 0x375D678 Offset: 0x375D678 VA: 0x375D678
	public int GetNeededProgress() { }

	// RVA: 0x375D738 Offset: 0x375D738 VA: 0x375D738
	public void MarkInfoPopUpIntroduced() { }

	// RVA: 0x375D760 Offset: 0x375D760 VA: 0x375D760
	public bool IsInfoPopUpIntroduced() { }

	// RVA: 0x375D784 Offset: 0x375D784 VA: 0x375D784
	public bool ShouldShowAreYouSure() { }

	// RVA: 0x375D788 Offset: 0x375D788 VA: 0x375D788
	public bool ShouldShowCollectibleEarnAnimationOnLobbyReturn() { }

	// RVA: 0x375D78C Offset: 0x375D78C VA: 0x375D78C
	public bool ShouldAutoOpenPopUp() { }

	// RVA: 0x375D7CC Offset: 0x375D7CC VA: 0x375D7CC
	public void MarkEventShownInLifeTime() { }

	// RVA: 0x375D7FC Offset: 0x375D7FC VA: 0x375D7FC Slot: 7
	public bool IsLobbyShown() { }

	// RVA: 0x375D800 Offset: 0x375D800 VA: 0x375D800 Slot: 8
	public bool IsLobbyGoingToBeShown() { }
}

// Namespace: 
[CompilerGenerated]