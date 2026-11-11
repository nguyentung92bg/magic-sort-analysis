public class SnitchService : IService, IInitializable, IDisposable, IDataInitializable, ILobbyShownService // TypeDefIndex: 2611
{
	// Fields
	private RemoteConfigs _remoteConfigs; // 0x10
	private SnitchDataService _dataService; // 0x18
	private IPlayerService _playerService; // 0x20

	// Methods

	// RVA: 0x246D2AC Offset: 0x246D2AC VA: 0x246D2AC
	public void .ctor(RemoteConfigs remoteConfigs, SnitchDataService dataService, IPlayerService playerService) { }

	// RVA: 0x246D30C Offset: 0x246D30C VA: 0x246D30C Slot: 4
	public void Initialize() { }

	// RVA: 0x246D310 Offset: 0x246D310 VA: 0x246D310 Slot: 6
	public void InitializeData() { }

	// RVA: 0x246D35C Offset: 0x246D35C VA: 0x246D35C Slot: 5
	public void Dispose() { }

	// RVA: 0x246D404 Offset: 0x246D404 VA: 0x246D404
	public bool IsActive() { }

	// RVA: 0x246D454 Offset: 0x246D454 VA: 0x246D454
	public bool IsEligible() { }

	// RVA: 0x246D58C Offset: 0x246D58C VA: 0x246D58C
	public void TryResetProgress() { }

	// RVA: 0x246D608 Offset: 0x246D608 VA: 0x246D608
	public void TryIncreaseProgress() { }

	// RVA: 0x246D528 Offset: 0x246D528 VA: 0x246D528
	public int GetProgress() { }

	// RVA: 0x246D6C4 Offset: 0x246D6C4 VA: 0x246D6C4
	public int GetClampedProgress() { }

	// RVA: 0x246D54C Offset: 0x246D54C VA: 0x246D54C
	public int GetTargetLevelProgress() { }

	// RVA: 0x246D7B0 Offset: 0x246D7B0 VA: 0x246D7B0
	public bool IsFallbackPremiumHitActive() { }

	// RVA: 0x246D7CC Offset: 0x246D7CC VA: 0x246D7CC
	public bool IsWaterColorChangeActive() { }

	// RVA: 0x246D568 Offset: 0x246D568 VA: 0x246D568
	private SnitchConfigModel GetConfig() { }

	// RVA: 0x246D7E8 Offset: 0x246D7E8 VA: 0x246D7E8
	public bool IsLobbyIconVisible() { }

	// RVA: 0x246D7EC Offset: 0x246D7EC VA: 0x246D7EC
	private bool IsLobbyButtonProgressIncreased() { }

	// RVA: 0x246D81C Offset: 0x246D81C VA: 0x246D81C
	public int GetLastSeenLobbyButtonProgress() { }

	// RVA: 0x246D314 Offset: 0x246D314 VA: 0x246D314
	public void TrySetLastSeenLobbyButtonProgress() { }

	// RVA: 0x246D840 Offset: 0x246D840 VA: 0x246D840
	public bool ShouldShowAreYouSure() { }

	// RVA: 0x246D844 Offset: 0x246D844 VA: 0x246D844
	public void MarkInfoPopUpAsIntroduced() { }

	// RVA: 0x246D874 Offset: 0x246D874 VA: 0x246D874
	public bool IsInfoPopUpIntroduced() { }

	// RVA: 0x246D898 Offset: 0x246D898 VA: 0x246D898
	public void MarkLevelTutorialAsIntroduced() { }

	// RVA: 0x246D8C8 Offset: 0x246D8C8 VA: 0x246D8C8
	public bool ShouldShowLevelTutorial() { }

	// RVA: 0x246D908 Offset: 0x246D908 VA: 0x246D908
	public bool ShouldShowCollectibleEarnAnimationOnLobbyReturn() { }

	// RVA: 0x246D938 Offset: 0x246D938 VA: 0x246D938
	public bool ShouldAutoOpenPopUp() { }

	// RVA: 0x246D978 Offset: 0x246D978 VA: 0x246D978
	public void MarkEventShownInLifeTime() { }

	// RVA: 0x246D9A8 Offset: 0x246D9A8 VA: 0x246D9A8 Slot: 7
	public bool IsLobbyShown() { }

	// RVA: 0x246D9AC Offset: 0x246D9AC VA: 0x246D9AC Slot: 8
	public bool IsLobbyGoingToBeShown() { }
}

// Namespace: 
[CompilerGenerated]