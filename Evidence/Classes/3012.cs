public class PermanentLeaderboardService : IRestartableService, IService, IInitializable, IDisposable, IIntervalUpdate, ILateLoginService // TypeDefIndex: 3012
{
	// Fields
	private PermanentLeaderboardRemoteService _permanentLeaderboardRemoteService; // 0x10
	private PermanentLeaderboardDataService _permanentLeaderboardDataService; // 0x18
	private CustomUpdater _customUpdater; // 0x20
	private readonly RemoteConfigs _remoteConfigs; // 0x28
	private bool _shouldSyncLeaderboard; // 0x30

	// Methods

	// RVA: 0x2AEC128 Offset: 0x2AEC128 VA: 0x2AEC128
	public void .ctor(PermanentLeaderboardRemoteService permanentLeaderboardRemoteService, PermanentLeaderboardDataService permanentLeaderboardDataService, CustomUpdater customUpdater, RemoteConfigs remoteConfigs) { }

	// RVA: 0x2AEC19C Offset: 0x2AEC19C VA: 0x2AEC19C Slot: 4
	public void Initialize() { }

	// RVA: 0x2AEC2D0 Offset: 0x2AEC2D0 VA: 0x2AEC2D0 Slot: 5
	public void Dispose() { }

	// RVA: 0x2AEC3BC Offset: 0x2AEC3BC VA: 0x2AEC3BC Slot: 6
	public void IntervalUpdate() { }

	// RVA: 0x2AEC3C8 Offset: 0x2AEC3C8 VA: 0x2AEC3C8
	private void OnLevelWin() { }

	// RVA: 0x2AEC298 Offset: 0x2AEC298 VA: 0x2AEC298
	private void UpdateLeaderboard() { }

	[AsyncStateMachine(typeof(PermanentLeaderboardService.<UpdateLeaderboardAsFlatBuffer>d__11))]
	// RVA: 0x2AEC3DC Offset: 0x2AEC3DC VA: 0x2AEC3DC
	private void UpdateLeaderboardAsFlatBuffer() { }

	[AsyncStateMachine(typeof(PermanentLeaderboardService.<UpdateLeaderboardAsJson>d__12))]
	// RVA: 0x2AEC494 Offset: 0x2AEC494 VA: 0x2AEC494
	private void UpdateLeaderboardAsJson() { }

	// RVA: 0x2AEC54C Offset: 0x2AEC54C VA: 0x2AEC54C
	public List<LeaderboardPlayer> GetWorldLeaderboard() { }

	// RVA: 0x2AEC570 Offset: 0x2AEC570 VA: 0x2AEC570
	public List<LeaderboardPlayer> GetCountryLeaderboard() { }
}

// Namespace: Modules.Contexts.Home.PermanentLeaderboard.Scripts.UI