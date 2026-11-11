public class ChampionsLeagueStateService : IRestartableService, IService, IInitializable, IDisposable // TypeDefIndex: 4742
{
	// Fields
	private readonly IPlayerService _playerService; // 0x10
	private readonly RemoteConfigs _remoteConfigs; // 0x18
	private readonly ChampionsLeagueDataService _championsLeagueDataService; // 0x20

	// Methods

	// RVA: 0x3B30E70 Offset: 0x3B30E70 VA: 0x3B30E70
	public void .ctor(IPlayerService playerService, RemoteConfigs remoteConfigs, ChampionsLeagueDataService championsLeagueDataService) { }

	// RVA: 0x3B30ED0 Offset: 0x3B30ED0 VA: 0x3B30ED0 Slot: 4
	public void Initialize() { }

	// RVA: 0x3B30ED4 Offset: 0x3B30ED4 VA: 0x3B30ED4 Slot: 5
	public void Dispose() { }

	// RVA: 0x3B30ED8 Offset: 0x3B30ED8 VA: 0x3B30ED8
	private ChampionsLeagueState GetState() { }

	// RVA: 0x3B2D848 Offset: 0x3B2D848 VA: 0x3B2D848
	public bool IsLobbyButtonVisible() { }

	// RVA: 0x3B2F358 Offset: 0x3B2F358 VA: 0x3B2F358
	public bool ShouldSendPreJoinRequest() { }

	// RVA: 0x3B2D888 Offset: 0x3B2D888 VA: 0x3B2D888
	public bool ShouldSendGetScoreRequest() { }

	// RVA: 0x3B2D960 Offset: 0x3B2D960 VA: 0x3B2D960
	public bool ShouldSendJoinRequest() { }

	// RVA: 0x3B2F388 Offset: 0x3B2F388 VA: 0x3B2F388
	public bool ShouldSendGetLeaderboardRequest() { }

	// RVA: 0x3B310B8 Offset: 0x3B310B8 VA: 0x3B310B8
	public bool ShouldPlayPlayButtonCrownAnimation() { }

	// RVA: 0x3B2DAE4 Offset: 0x3B2DAE4 VA: 0x3B2DAE4
	public bool CanIncreaseLeaderboardScore() { }

	// RVA: 0x3B2D904 Offset: 0x3B2D904 VA: 0x3B2D904
	public bool IsInPreJoin() { }

	// RVA: 0x3B2E7B0 Offset: 0x3B2E7B0 VA: 0x3B2E7B0
	public bool IsJoined() { }

	// RVA: 0x3B2DAA8 Offset: 0x3B2DAA8 VA: 0x3B2DAA8
	public bool IsClaimed() { }

	// RVA: 0x3B2CE0C Offset: 0x3B2CE0C VA: 0x3B2CE0C
	public bool IsDisabled() { }

	// RVA: 0x3B2D9B8 Offset: 0x3B2D9B8 VA: 0x3B2D9B8
	public bool CanShowLeaderboardPopup() { }

	// RVA: 0x3B2DA2C Offset: 0x3B2DA2C VA: 0x3B2DA2C
	public bool IsInLocalTimeFinishedClaimable() { }

	// RVA: 0x3B2D9EC Offset: 0x3B2D9EC VA: 0x3B2D9EC
	public bool CanShowLeaderboardResult() { }

	// RVA: 0x3B2DA78 Offset: 0x3B2DA78 VA: 0x3B2DA78
	public bool CanShowClaimButton() { }

	// RVA: 0x3B3108C Offset: 0x3B3108C VA: 0x3B3108C
	private bool IsFeatureEnabled() { }

	// RVA: 0x3B310D0 Offset: 0x3B310D0 VA: 0x3B310D0
	public bool ShouldShowCollectibleEarnAnimationOnLobbyReturn() { }

	// RVA: 0x3B2CE48 Offset: 0x3B2CE48 VA: 0x3B2CE48
	public bool ShouldShowInProfile() { }
}

// Namespace: Modules.Contexts.Home.BroomStreak.Scripts
[CreateAssetMenu(fileName = "BroomStreakAnimationsConfig", menuName = "Configs/BroomStreakAnimationsConfig")]