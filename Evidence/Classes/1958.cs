public class WeeklyTournamentDataService : IRestartableService, IService, IInitializable, IDisposable, ILateUpdate, ISyncable, IDeletable // TypeDefIndex: 1958
{
	// Fields
	private ISaveLoad<WeeklyTournamentModel> _saveLoad; // 0x10
	private bool _isMarkedForLateUpdate; // 0x18
	private bool _isDataChangedSinceLastSave; // 0x19
	private WeeklyTournamentModel _model; // 0x20
	private WeeklyTournamentSyncModel _modelForSync; // 0x28

	// Methods

	// RVA: 0x32D5D3C Offset: 0x32D5D3C VA: 0x32D5D3C
	public void .ctor(ISaveLoad<WeeklyTournamentModel> saveLoad) { }

	// RVA: 0x32D5D74 Offset: 0x32D5D74 VA: 0x32D5D74 Slot: 4
	public void Initialize() { }

	// RVA: 0x32D5E70 Offset: 0x32D5E70 VA: 0x32D5E70 Slot: 5
	public void Dispose() { }

	// RVA: 0x32D5E74 Offset: 0x32D5E74 VA: 0x32D5E74
	public void SetScore(int score) { }

	// RVA: 0x32D5E90 Offset: 0x32D5E90 VA: 0x32D5E90
	public int GetCurrentScore() { }

	// RVA: 0x32D5EAC Offset: 0x32D5EAC VA: 0x32D5EAC
	public string GetTournamentId() { }

	// RVA: 0x32D5F0C Offset: 0x32D5F0C VA: 0x32D5F0C
	public WeeklyGetLeaderboardResponse GetCachedLeaderboard() { }

	// RVA: 0x32D5F28 Offset: 0x32D5F28 VA: 0x32D5F28
	public void CacheLeaderboardResponse(WeeklyGetLeaderboardResponse weeklyGetLeaderboardResponse) { }

	// RVA: 0x32D5F60 Offset: 0x32D5F60 VA: 0x32D5F60
	public int GetRank() { }

	// RVA: 0x32D608C Offset: 0x32D608C VA: 0x32D608C
	public void IncreaseWinCount() { }

	// RVA: 0x32D60B8 Offset: 0x32D60B8 VA: 0x32D60B8
	public int GetWeeklyTournamentWinCount() { }

	// RVA: 0x32D60D4 Offset: 0x32D60D4 VA: 0x32D60D4
	public void MarkWeeklyIntroduced() { }

	// RVA: 0x32D60FC Offset: 0x32D60FC VA: 0x32D60FC
	public bool IsWeeklyIntroduced() { }

	// RVA: 0x32D6118 Offset: 0x32D6118 VA: 0x32D6118
	public void SetLastSeenRank(int rank) { }

	// RVA: 0x32D613C Offset: 0x32D613C VA: 0x32D613C
	public void SetLastFetchedRank(int rank) { }

	// RVA: 0x32D6160 Offset: 0x32D6160 VA: 0x32D6160
	public int GetLastFetchRank() { }

	// RVA: 0x32D617C Offset: 0x32D617C VA: 0x32D617C
	public bool DidUserRankChange() { }

	// RVA: 0x32D61A0 Offset: 0x32D61A0 VA: 0x32D61A0 Slot: 12
	public void DeleteData() { }

	// RVA: 0x32D6280 Offset: 0x32D6280 VA: 0x32D6280 Slot: 6
	public void LateUpdate() { }

	// RVA: 0x32D5F54 Offset: 0x32D5F54 VA: 0x32D5F54
	private void MarkDataForLateUpdate() { }

	// RVA: 0x32D6338 Offset: 0x32D6338 VA: 0x32D6338 Slot: 7
	public bool IsDataChangedSinceLastSave() { }

	// RVA: 0x32D6340 Offset: 0x32D6340 VA: 0x32D6340 Slot: 8
	public void DataSynced() { }

	// RVA: 0x32D6348 Offset: 0x32D6348 VA: 0x32D6348 Slot: 9
	public string SerializeModelForSync() { }

	// RVA: 0x32D63C8 Offset: 0x32D63C8 VA: 0x32D63C8 Slot: 10
	public string GetSyncName() { }

	// RVA: 0x32D6408 Offset: 0x32D6408 VA: 0x32D6408 Slot: 11
	public void OverwriteModelFromSync(string data) { }

	// RVA: 0x32D6554 Offset: 0x32D6554 VA: 0x32D6554
	public bool IsResultIntroduced() { }

	// RVA: 0x32D6570 Offset: 0x32D6570 VA: 0x32D6570
	public void SetIsResultIntroduced(bool isResultIntroduced) { }
}

// Namespace: 
[CompilerGenerated]