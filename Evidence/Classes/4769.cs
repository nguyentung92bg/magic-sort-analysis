public class BroomStreakStateService : IRestartableService, IService, IInitializable, IDisposable // TypeDefIndex: 4769
{
	// Fields
	private BroomStreakStateType _lastState; // 0x10
	private IPlayerService _playerService; // 0x18
	private RemoteConfigs _remoteConfigs; // 0x20
	private BroomStreakDataService _broomStreakDataService; // 0x28
	private BroomStreakService _broomStreakService; // 0x30

	// Methods

	// RVA: 0x3FBFD7C Offset: 0x3FBFD7C VA: 0x3FBFD7C
	public void .ctor(IPlayerService playerService, RemoteConfigs remoteConfigs, BroomStreakDataService broomStreakDataService, BroomStreakService broomStreakService) { }

	// RVA: 0x3FBFDF0 Offset: 0x3FBFDF0 VA: 0x3FBFDF0 Slot: 4
	public void Initialize() { }

	// RVA: 0x3FBFE6C Offset: 0x3FBFE6C VA: 0x3FBFE6C Slot: 5
	public void Dispose() { }

	// RVA: 0x3FBFE70 Offset: 0x3FBFE70 VA: 0x3FBFE70
	private BroomStreakConfigModel GetConfig() { }

	// RVA: 0x3FBFE94 Offset: 0x3FBFE94 VA: 0x3FBFE94
	public BroomStreakStateType GetEventState() { }

	// RVA: 0x3FBCE8C Offset: 0x3FBCE8C VA: 0x3FBCE8C
	public bool ShouldFetchCurrentEvent() { }

	// RVA: 0x3FBD028 Offset: 0x3FBD028 VA: 0x3FBD028
	public bool ShouldStartNewEvent() { }

	// RVA: 0x3FBF400 Offset: 0x3FBF400 VA: 0x3FBF400
	public bool IsLobbyIconVisible() { }

	// RVA: 0x3FC0080 Offset: 0x3FC0080 VA: 0x3FC0080
	private bool IsLobbyIconVisibleAndNotIntroduced() { }

	// RVA: 0x3FBD508 Offset: 0x3FBD508 VA: 0x3FBD508
	public bool CanIncreaseScore() { }

	// RVA: 0x3FBD69C Offset: 0x3FBD69C VA: 0x3FBD69C
	public bool CanResetScore() { }

	// RVA: 0x3FC00B8 Offset: 0x3FC00B8 VA: 0x3FC00B8
	public bool ShouldShowBroomAnimationOnLobbyReturn() { }

	// RVA: 0x3FC00F0 Offset: 0x3FC00F0 VA: 0x3FC00F0
	public bool ShouldOpenAutomaticallyOnLobbyReturn(out BroomStreakSource broomStreakSource) { }

	// RVA: 0x3FBC3A4 Offset: 0x3FBC3A4 VA: 0x3FBC3A4
	public bool ShouldOpenAutomaticallyOnSessionStart(out BroomStreakSource broomStreakSource) { }

	// RVA: 0x3FBBCC4 Offset: 0x3FBBCC4 VA: 0x3FBBCC4
	public bool ShouldShowForceHomeWelcoming() { }

	// RVA: 0x3FC018C Offset: 0x3FC018C VA: 0x3FC018C
	public bool ShouldShowBroomStreakBanner() { }

	// RVA: 0x3FC01A4 Offset: 0x3FC01A4 VA: 0x3FC01A4
	public BroomStreakPopUpState GetPopUpState() { }

	// RVA: 0x3FC020C Offset: 0x3FC020C VA: 0x3FC020C
	public bool ShouldShowInLevelStreakView() { }

	// RVA: 0x3FC024C Offset: 0x3FC024C VA: 0x3FC024C
	public bool ShouldShowOnAreYouSure() { }

	// RVA: 0x3FC02A4 Offset: 0x3FC02A4 VA: 0x3FC02A4
	public bool ShouldShowFailAnimationOnTryAgain(int lastScoreBeforeFail) { }

	// RVA: 0x3FC02F4 Offset: 0x3FC02F4 VA: 0x3FC02F4
	public bool CanGetScoreForMagicLab() { }

	// RVA: 0x3FBF398 Offset: 0x3FBF398 VA: 0x3FBF398
	public int GetLiveOpsStateForLevelEvent() { }

	// RVA: 0x3FBF5A8 Offset: 0x3FBF5A8 VA: 0x3FBF5A8
	public bool IsAvailableForWheelOfFortune() { }
}

// Namespace: 
[CompilerGenerated]