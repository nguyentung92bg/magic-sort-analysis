public class MagicStreakDataService : IRestartableService, IService, IInitializable, IDisposable, ILateUpdate, ISyncable, IDeletable // TypeDefIndex: 3719
{
	// Fields
	private readonly ISaveLoad<MagicStreakModel> _saveLoad; // 0x10
	private bool _isMarkedForLateUpdate; // 0x18
	private bool _isDataChangedSinceLastSave; // 0x19
	private MagicStreakModel _model; // 0x20
	private int _lastSeenProgressbarRewardScore; // 0x28
	private int _lastSeenProgressbarRewardIndex; // 0x2C
	private int _lastSeenTournamentScore; // 0x30
	private int _lastSeenMultiplierIndex; // 0x34
	private int _lastSeenRank; // 0x38
	private int _lastSeenLevel; // 0x3C

	// Methods

	// RVA: 0x411BBE4 Offset: 0x411BBE4 VA: 0x411BBE4
	public void .ctor(ISaveLoad<MagicStreakModel> saveLoad) { }

	// RVA: 0x411BC1C Offset: 0x411BC1C VA: 0x411BC1C Slot: 4
	public void Initialize() { }

	// RVA: 0x411BCDC Offset: 0x411BCDC VA: 0x411BCDC Slot: 5
	public void Dispose() { }

	// RVA: 0x411BCE0 Offset: 0x411BCE0 VA: 0x411BCE0 Slot: 6
	public void LateUpdate() { }

	// RVA: 0x411BD98 Offset: 0x411BD98 VA: 0x411BD98 Slot: 7
	public bool IsDataChangedSinceLastSave() { }

	// RVA: 0x411BDA0 Offset: 0x411BDA0 VA: 0x411BDA0 Slot: 8
	public void DataSynced() { }

	// RVA: 0x411BDA8 Offset: 0x411BDA8 VA: 0x411BDA8 Slot: 9
	public string SerializeModelForSync() { }

	// RVA: 0x411BE54 Offset: 0x411BE54 VA: 0x411BE54 Slot: 10
	public string GetSyncName() { }

	// RVA: 0x411BE94 Offset: 0x411BE94 VA: 0x411BE94 Slot: 11
	public void OverwriteModelFromSync(string data) { }

	// RVA: 0x411BF9C Offset: 0x411BF9C VA: 0x411BF9C Slot: 12
	public void DeleteData() { }

	// RVA: 0x411C06C Offset: 0x411C06C VA: 0x411C06C
	private void MarkDataForLateUpdate() { }

	[CanBeNull]
	// RVA: 0x411C078 Offset: 0x411C078 VA: 0x411C078
	public MagicStreakTournamentModel GetCachedTournamentModel() { }

	// RVA: 0x411C094 Offset: 0x411C094 VA: 0x411C094
	public void SetTournamentCache(MagicStreakTournamentModel model) { }

	// RVA: 0x411C0C0 Offset: 0x411C0C0 VA: 0x411C0C0
	public int GetLastSeenProgressbarRewardIndex() { }

	// RVA: 0x411C0C8 Offset: 0x411C0C8 VA: 0x411C0C8
	public void SetLastSeenProgressbarRewardIndex(int index) { }

	// RVA: 0x411C0D0 Offset: 0x411C0D0 VA: 0x411C0D0
	public int GetProgressbarRewardIndex() { }

	// RVA: 0x411C0EC Offset: 0x411C0EC VA: 0x411C0EC
	public void SetProgressbarRewardIndex(int rewardIndex) { }

	// RVA: 0x411C110 Offset: 0x411C110 VA: 0x411C110
	public int GetLastSeenProgressbarRewardScore() { }

	// RVA: 0x411C118 Offset: 0x411C118 VA: 0x411C118
	public void SetLastSeenProgressbarRewardScore(int score) { }

	// RVA: 0x411C120 Offset: 0x411C120 VA: 0x411C120
	public int GetProgressbarRewardScore() { }

	// RVA: 0x411C13C Offset: 0x411C13C VA: 0x411C13C
	public void SetProgressbarRewardScore(int rewardScore) { }

	// RVA: 0x411C160 Offset: 0x411C160 VA: 0x411C160
	public int GetLastSeenMultiplierIndex() { }

	// RVA: 0x411C168 Offset: 0x411C168 VA: 0x411C168
	public void SetLastSeenMultiplierIndex(int index) { }

	// RVA: 0x411C170 Offset: 0x411C170 VA: 0x411C170
	public int GetMultiplierIndex() { }

	// RVA: 0x411C18C Offset: 0x411C18C VA: 0x411C18C
	public void SetMultiplierIndex(int multiplierIndex) { }

	// RVA: 0x411C1B0 Offset: 0x411C1B0 VA: 0x411C1B0
	public void SetTournamentScore(int newScore) { }

	// RVA: 0x411C1DC Offset: 0x411C1DC VA: 0x411C1DC
	public bool GetIsIntroduced() { }

	// RVA: 0x411C1F8 Offset: 0x411C1F8 VA: 0x411C1F8
	public void SetIsIntroduced(bool isIntroduced) { }

	// RVA: 0x411C220 Offset: 0x411C220 VA: 0x411C220
	public bool GetIsClaimedLocally() { }

	// RVA: 0x411C23C Offset: 0x411C23C VA: 0x411C23C
	public void SetIsClaimedLocally(bool isClaimed) { }

	// RVA: 0x411C264 Offset: 0x411C264 VA: 0x411C264
	public void SetLastSeenRank(int rank) { }

	// RVA: 0x411C26C Offset: 0x411C26C VA: 0x411C26C
	public int GetLastSeenRank() { }

	// RVA: 0x411C274 Offset: 0x411C274 VA: 0x411C274
	public void SetLastSeenTournamentScore(int score) { }

	// RVA: 0x411C27C Offset: 0x411C27C VA: 0x411C27C
	public int GetLastSeenTournamentScore() { }

	// RVA: 0x411C284 Offset: 0x411C284 VA: 0x411C284
	public void SetLastSeenLevel(int level) { }

	// RVA: 0x411C28C Offset: 0x411C28C VA: 0x411C28C
	public int GetLastSeenLevel() { }

	// RVA: 0x411C294 Offset: 0x411C294 VA: 0x411C294
	public int GetTournamentWinCount() { }

	// RVA: 0x411C2B0 Offset: 0x411C2B0 VA: 0x411C2B0
	public void SetTournamentWinCount(int currentWinCount) { }
}

// Namespace: Modules.Contexts.Home.MagicStreakTournament.Scripts