public class ChampionsLeagueDataService : IRestartableService, IService, IInitializable, IDisposable, ILateUpdate, IDeletable, ISyncable // TypeDefIndex: 4714
{
	// Fields
	private readonly ISaveLoad<ChampionsLeagueModel> _saveLoad; // 0x10
	private ChampionsLeagueModel _model; // 0x18
	private ChampionsLeagueLeaderboardPlayer _myPlayer; // 0x20
	private bool _isDataChangedSinceLastSave; // 0x28
	private bool _isMarkedForLateUpdate; // 0x29
	private ChampionsLeagueSessionCacheModel _sessionCacheModel; // 0x30

	// Methods

	// RVA: 0x3B26BB8 Offset: 0x3B26BB8 VA: 0x3B26BB8
	public void .ctor(ISaveLoad<ChampionsLeagueModel> saveLoad) { }

	// RVA: 0x3B26BE8 Offset: 0x3B26BE8 VA: 0x3B26BE8 Slot: 4
	public void Initialize() { }

	// RVA: 0x3B26D94 Offset: 0x3B26D94 VA: 0x3B26D94 Slot: 5
	public void Dispose() { }

	// RVA: 0x3B26D98 Offset: 0x3B26D98 VA: 0x3B26D98
	public bool HasCachedData() { }

	// RVA: 0x3B26DCC Offset: 0x3B26DCC VA: 0x3B26DCC
	public bool HasNoCachedLeaderboardData() { }

	// RVA: 0x3B26E34 Offset: 0x3B26E34 VA: 0x3B26E34
	public bool IsLocalTimeUpWithinTournament() { }

	// RVA: 0x3B26F7C Offset: 0x3B26F7C VA: 0x3B26F7C
	public bool IsPreJoinWindowLocalTimeUpWithinPreJoin() { }

	// RVA: 0x3B270C4 Offset: 0x3B270C4 VA: 0x3B270C4
	public bool IsTournamentLocalTimeUpWithinPreJoining() { }

	// RVA: 0x3B27104 Offset: 0x3B27104 VA: 0x3B27104
	public bool IsInClaimableFinish() { }

	// RVA: 0x3B27130 Offset: 0x3B27130 VA: 0x3B27130
	public bool IsInUnclaimableFinish() { }

	// RVA: 0x3B2715C Offset: 0x3B2715C VA: 0x3B2715C
	public bool IsNonJoinable() { }

	// RVA: 0x3B27188 Offset: 0x3B27188 VA: 0x3B27188
	public bool IsInPreJoinState() { }

	// RVA: 0x3B271B4 Offset: 0x3B271B4 VA: 0x3B271B4
	public bool IsClaimed() { }

	// RVA: 0x3B271E0 Offset: 0x3B271E0 VA: 0x3B271E0
	public long GetEndTime() { }

	// RVA: 0x3B27204 Offset: 0x3B27204 VA: 0x3B27204
	public long GetStartTime() { }

	// RVA: 0x3B27228 Offset: 0x3B27228 VA: 0x3B27228
	public long GetJoinWindowEndTime() { }

	// RVA: 0x3B2724C Offset: 0x3B2724C VA: 0x3B2724C
	public string GetTournamentId() { }

	// RVA: 0x3B27270 Offset: 0x3B27270 VA: 0x3B27270
	public void IncreasePreJoinScore() { }

	// RVA: 0x3B272B0 Offset: 0x3B272B0 VA: 0x3B272B0
	public void IncreaseLeaderboardScore() { }

	// RVA: 0x3B27310 Offset: 0x3B27310 VA: 0x3B27310
	public void UpdateLeaderboardLocally() { }

	// RVA: 0x3B277D8 Offset: 0x3B277D8 VA: 0x3B277D8
	public void SavePromotionAnimationShown() { }

	// RVA: 0x3B27808 Offset: 0x3B27808 VA: 0x3B27808
	public bool IsPromotionAnimationShown() { }

	// RVA: 0x3B2782C Offset: 0x3B2782C VA: 0x3B2782C
	public void SaveTournamentRewardClaimed() { }

	// RVA: 0x3B2785C Offset: 0x3B2785C VA: 0x3B2785C
	public bool IsTournamentRewardClaimed() { }

	// RVA: 0x3B27880 Offset: 0x3B27880 VA: 0x3B27880
	public void SaveLastElo() { }

	// RVA: 0x3B278BC Offset: 0x3B278BC VA: 0x3B278BC
	public int GetLastElo() { }

	// RVA: 0x3B278E0 Offset: 0x3B278E0 VA: 0x3B278E0
	public int GetPreviousPromotionInfo() { }

	// RVA: 0x3B276C4 Offset: 0x3B276C4 VA: 0x3B276C4
	public int GetCurrentElo() { }

	// RVA: 0x3B27904 Offset: 0x3B27904 VA: 0x3B27904
	public int GetPreJoinScore() { }

	// RVA: 0x3B27928 Offset: 0x3B27928 VA: 0x3B27928
	public Nullable<int> GetLastSeenRank() { }

	// RVA: 0x3B2794C Offset: 0x3B2794C VA: 0x3B2794C
	public void SetLastSeenRank(int lastSeenRank) { }

	// RVA: 0x3B279D0 Offset: 0x3B279D0 VA: 0x3B279D0
	public Nullable<bool> GetLastSeenPromotionZoneState() { }

	// RVA: 0x3B279F4 Offset: 0x3B279F4 VA: 0x3B279F4
	public void SetLastSeenPromotionZoneState(bool lastSeenPromotionZoneState) { }

	// RVA: 0x3B27A78 Offset: 0x3B27A78 VA: 0x3B27A78
	public Nullable<int> GetLastSeenScore() { }

	// RVA: 0x3B27A9C Offset: 0x3B27A9C VA: 0x3B27A9C
	public Nullable<int> GetPreviousScore() { }

	// RVA: 0x3B27B08 Offset: 0x3B27B08 VA: 0x3B27B08
	public void SetPreviousScore(int score) { }

	// RVA: 0x3B27B34 Offset: 0x3B27B34 VA: 0x3B27B34
	public void SetLastSeenScore(int lastSeenScore) { }

	// RVA: 0x3B276E8 Offset: 0x3B276E8 VA: 0x3B276E8
	public int GetPromotionCountOfElo(int elo) { }

	// RVA: 0x3B27760 Offset: 0x3B27760 VA: 0x3B27760
	public int GetDemotionCountOfElo(int elo) { }

	// RVA: 0x3B26E74 Offset: 0x3B26E74 VA: 0x3B26E74
	public int GetRemainingSecondsOfEvent() { }

	// RVA: 0x3B26FBC Offset: 0x3B26FBC VA: 0x3B26FBC
	public int GetRemainingSecondsToPreJoinWindow() { }

	[CanBeNull]
	// RVA: 0x3B27BB8 Offset: 0x3B27BB8 VA: 0x3B27BB8
	public List<ChampionsLeagueLeaderboardPlayer> GetLeaderboardPlayerList() { }

	// RVA: 0x3B27BE4 Offset: 0x3B27BE4 VA: 0x3B27BE4
	public void IncreaseEloProfileWinCount(int elo) { }

	// RVA: 0x3B27CA0 Offset: 0x3B27CA0 VA: 0x3B27CA0
	public void CacheState(GetPreJoinLeagueLeaderboardResponse responseData) { }

	// RVA: 0x3B27F80 Offset: 0x3B27F80 VA: 0x3B27F80
	public void CacheState(GetChampionsLeagueLeaderboardResponse responseData) { }

	// RVA: 0x3B282E4 Offset: 0x3B282E4 VA: 0x3B282E4
	public void CacheStateOverwrite(GetPreJoinLeagueLeaderboardResponse responseData) { }

	// RVA: 0x3B27DD8 Offset: 0x3B27DD8 VA: 0x3B27DD8
	private void ResetSyncModel() { }

	// RVA: 0x3B28400 Offset: 0x3B28400 VA: 0x3B28400
	public void SavePreviousPromotionInfo(int previousPromotionInfo) { }

	[CanBeNull]
	// RVA: 0x3B272EC Offset: 0x3B272EC VA: 0x3B272EC
	public ChampionsLeagueLeaderboardPlayer GetMyPlayer() { }

	// RVA: 0x3B2817C Offset: 0x3B2817C VA: 0x3B2817C
	private void CacheMyPlayerFresh() { }

	// RVA: 0x3B2842C Offset: 0x3B2842C VA: 0x3B2842C
	public void ClearCacheState() { }

	// RVA: 0x3B2850C Offset: 0x3B2850C VA: 0x3B2850C Slot: 6
	public void LateUpdate() { }

	// RVA: 0x3B285C4 Offset: 0x3B285C4 VA: 0x3B285C4 Slot: 7
	public void DeleteData() { }

	// RVA: 0x3B285C8 Offset: 0x3B285C8 VA: 0x3B285C8 Slot: 8
	public bool IsDataChangedSinceLastSave() { }

	// RVA: 0x3B285D0 Offset: 0x3B285D0 VA: 0x3B285D0 Slot: 9
	public void DataSynced() { }

	// RVA: 0x3B272A4 Offset: 0x3B272A4 VA: 0x3B272A4
	private void MarkDataForLateUpdate() { }

	// RVA: 0x3B285D8 Offset: 0x3B285D8 VA: 0x3B285D8 Slot: 10
	public string SerializeModelForSync() { }

	// RVA: 0x3B28670 Offset: 0x3B28670 VA: 0x3B28670 Slot: 11
	public string GetSyncName() { }

	// RVA: 0x3B286B0 Offset: 0x3B286B0 VA: 0x3B286B0 Slot: 12
	public void OverwriteModelFromSync(string data) { }

	// RVA: 0x3B287C0 Offset: 0x3B287C0 VA: 0x3B287C0
	public void ResetLeaderboard() { }

	// RVA: 0x3B28868 Offset: 0x3B28868 VA: 0x3B28868
	public ChampionsLeagueSessionCacheModel GetSessionCacheModel() { }

	// RVA: 0x3B288D0 Offset: 0x3B288D0 VA: 0x3B288D0
	public ChampionsLeagueProfileData GetProfileData() { }

	// RVA: 0x3B28900 Offset: 0x3B28900 VA: 0x3B28900
	public bool GetIsPosterSelected() { }

	// RVA: 0x3B28924 Offset: 0x3B28924 VA: 0x3B28924
	public void SetIsPosterSelected(bool isPosterSelected) { }
}

// Namespace: Modules.Contexts.Home.ChampionsLeague.Services