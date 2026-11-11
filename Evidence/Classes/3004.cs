public class PermanentLeaderboardDataService : IRestartableService, IService, IInitializable, IDisposable, ILateUpdate, IDeletable // TypeDefIndex: 3004
{
	// Fields
	private LeaderboardModel _model; // 0x10
	private ISaveLoad<LeaderboardModel> _saveLoad; // 0x18
	private bool _isMarkedForLateUpdate; // 0x20
	private ObjectPool<LeaderboardPlayer> _objectPool; // 0x28

	// Methods

	// RVA: 0x2AEA4A4 Offset: 0x2AEA4A4 VA: 0x2AEA4A4
	public void .ctor(ISaveLoad<LeaderboardModel> saveLoad) { }

	// RVA: 0x2AEA4D4 Offset: 0x2AEA4D4 VA: 0x2AEA4D4 Slot: 4
	public void Initialize() { }

	// RVA: 0x2AEA670 Offset: 0x2AEA670 VA: 0x2AEA670 Slot: 5
	public void Dispose() { }

	// RVA: 0x2AEA674 Offset: 0x2AEA674 VA: 0x2AEA674
	public List<LeaderboardPlayer> GetCachedWorldLeaderboard() { }

	// RVA: 0x2AEA690 Offset: 0x2AEA690 VA: 0x2AEA690
	public List<LeaderboardPlayer> GetCachedCountryLeaderboard() { }

	// RVA: 0x2AEA6AC Offset: 0x2AEA6AC VA: 0x2AEA6AC
	public void SetWorldLeaderboard(GetLeaderboardsResponse model) { }

	// RVA: 0x2AEAAC4 Offset: 0x2AEAAC4 VA: 0x2AEAAC4
	public void SetCountryLeaderboard(GetLeaderboardsResponse model) { }

	// RVA: 0x2AEAEFC Offset: 0x2AEAEFC VA: 0x2AEAEFC
	public void SetWorldLeaderboard(List<PermanentLeaderboardPlayerResponse> remoteLeaderboardPlayers) { }

	// RVA: 0x2AEB35C Offset: 0x2AEB35C VA: 0x2AEB35C
	public void SetCountryLeaderboard(List<PermanentLeaderboardPlayerResponse> remoteLeaderboardPlayers, string country) { }

	// RVA: 0x2AEAF28 Offset: 0x2AEAF28 VA: 0x2AEAF28
	private void CacheRemoteLeaderboard(List<PermanentLeaderboardPlayerResponse> remoteLeaderboardPlayers, List<LeaderboardPlayer> cachedLeaderboardPlayers) { }

	// RVA: 0x2AEB3A8 Offset: 0x2AEB3A8 VA: 0x2AEB3A8 Slot: 6
	public void LateUpdate() { }

	// RVA: 0x2AEAAB8 Offset: 0x2AEAAB8 VA: 0x2AEAAB8
	private void MarkDataForLateUpdate() { }

	// RVA: 0x2AEB460 Offset: 0x2AEB460 VA: 0x2AEB460 Slot: 7
	public void DeleteData() { }
}

// Namespace: Modules.Contexts.Home.PermanentLeaderboard.Scripts