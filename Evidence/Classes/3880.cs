public class MagicStreakGaeStateService : IRestartableService, IService, IInitializable, IDisposable // TypeDefIndex: 3880
{
	// Fields
	private IPlayerService _playerService; // 0x10
	private RemoteConfigs _remoteConfigs; // 0x18
	private MagicStreakGaeDataService _dataService; // 0x20
	private MagicStreakGaeService _magicStreakGaeService; // 0x28

	// Methods

	// RVA: 0x3CFF558 Offset: 0x3CFF558 VA: 0x3CFF558
	public void .ctor(IPlayerService playerService, RemoteConfigs remoteConfigs, MagicStreakGaeDataService dataService, MagicStreakGaeService MagicStreakGaeService) { }

	// RVA: 0x3CFF5CC Offset: 0x3CFF5CC VA: 0x3CFF5CC Slot: 4
	public void Initialize() { }

	// RVA: 0x3CFF5D0 Offset: 0x3CFF5D0 VA: 0x3CFF5D0 Slot: 5
	public void Dispose() { }

	// RVA: 0x3CFF5D4 Offset: 0x3CFF5D4 VA: 0x3CFF5D4
	private MagicStreakGaeConfigModel GetConfig() { }

	// RVA: 0x3CFF5F8 Offset: 0x3CFF5F8 VA: 0x3CFF5F8
	private MagicStreakGaeStateType GetState() { }

	// RVA: 0x3CFE074 Offset: 0x3CFE074 VA: 0x3CFE074
	public bool ShouldSendRequest() { }

	// RVA: 0x3CF3F50 Offset: 0x3CF3F50 VA: 0x3CF3F50
	public bool ShouldShowMagicStreakGaeProgressBar() { }

	// RVA: 0x3CFF77C Offset: 0x3CFF77C VA: 0x3CFF77C
	public bool CanGetScoreForMagicLab() { }

	// RVA: 0x3CFF034 Offset: 0x3CFF034 VA: 0x3CFF034
	public bool ShouldIncreaseScore() { }

	// RVA: 0x3CFD71C Offset: 0x3CFD71C VA: 0x3CFD71C
	public bool ShouldShowAreYouSure() { }

	// RVA: 0x3CF9750 Offset: 0x3CF9750 VA: 0x3CF9750
	public bool IsEventNotIntroducedInLifeTime() { }

	// RVA: 0x3CF9738 Offset: 0x3CF9738 VA: 0x3CF9738
	public bool IsNotIntroduced() { }

	// RVA: 0x3CFF798 Offset: 0x3CFF798 VA: 0x3CFF798
	public bool ShouldShowBanner() { }

	// RVA: 0x3CFEBFC Offset: 0x3CFEBFC VA: 0x3CFEBFC
	public bool CanIncreasePlayOnCount() { }

	// RVA: 0x3CFEFF8 Offset: 0x3CFEFF8 VA: 0x3CFEFF8
	public bool IsAvailableForWheelOfFortune() { }
}

// Namespace: Modules.Contexts.Home.MagicStreakGAE.Scripts