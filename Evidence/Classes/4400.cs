public class DuckFestivalStateService // TypeDefIndex: 4400
{
	// Fields
	private readonly DuckFestivalDataService _dataService; // 0x10
	private readonly DuckFestivalService _duckFestivalService; // 0x18
	private readonly IPlayerService _playerService; // 0x20
	private DuckFestivalStateType _cacheState; // 0x28

	// Methods

	// RVA: 0x1B99C6C Offset: 0x1B99C6C VA: 0x1B99C6C
	public void .ctor(DuckFestivalDataService dataService, IPlayerService playerService, DuckFestivalService duckFestivalService) { }

	// RVA: 0x1B99CCC Offset: 0x1B99CCC VA: 0x1B99CCC
	private DuckFestivalStateType GetState() { }

	// RVA: 0x1B99BCC Offset: 0x1B99BCC VA: 0x1B99BCC
	public bool ShouldSendGetLeaderboardRequest() { }

	// RVA: 0x1B96DE8 Offset: 0x1B96DE8 VA: 0x1B96DE8
	public bool ShouldShowLobbyIcon() { }

	// RVA: 0x1B98B44 Offset: 0x1B98B44 VA: 0x1B98B44
	public bool IsEventActive() { }

	// RVA: 0x1B98A50 Offset: 0x1B98A50 VA: 0x1B98A50
	public bool ShouldShowLobbyRewardText() { }

	// RVA: 0x1B96524 Offset: 0x1B96524 VA: 0x1B96524
	public bool CanEarnScore() { }

	// RVA: 0x1B96D1C Offset: 0x1B96D1C VA: 0x1B96D1C
	public bool ShouldForceIntroduce() { }

	// RVA: 0x1B96BEC Offset: 0x1B96BEC VA: 0x1B96BEC
	public DuckFestivalPopupStateType GetPopupState() { }

	// RVA: 0x1B99B90 Offset: 0x1B99B90 VA: 0x1B99B90
	public bool ShouldSendPreJoinRequest() { }

	// RVA: 0x1B99BB4 Offset: 0x1B99BB4 VA: 0x1B99BB4
	public bool ShouldSendJoinRequest() { }

	// RVA: 0x1B96AD0 Offset: 0x1B96AD0 VA: 0x1B96AD0
	public void UpdateState() { }

	// RVA: 0x1B96D4C Offset: 0x1B96D4C VA: 0x1B96D4C
	public bool CanClaim() { }

	// RVA: 0x1B96D04 Offset: 0x1B96D04 VA: 0x1B96D04
	public bool IsDisabled() { }

	// RVA: 0x1B98D94 Offset: 0x1B98D94 VA: 0x1B98D94
	public bool IsAvailableForWheelOfFortune() { }
}

// Namespace: Modules.Contexts.Home.DuckFestival.Scripts.UI