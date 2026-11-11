public class MagicStreakGaeDataService : IRestartableService, IService, IInitializable, IDisposable, ILateUpdate, ISyncable, IDeletable // TypeDefIndex: 3844
{
	// Fields
	private readonly ISaveLoad<MagicStreakGaeModel> _saveLoad; // 0x10
	private bool _isMarkedForLateUpdate; // 0x18
	private bool _isDataChangedSinceLastSave; // 0x19
	private MagicStreakGaeModel _model; // 0x20
	private int _lastSeenStreakMultiplierIndex; // 0x28
	private int _lastSeenRewardScore; // 0x2C
	private int _levelMultiplierForLevelWinAnimation; // 0x30
	private bool _oneSuccessfulResponseFetched; // 0x34

	// Methods

	// RVA: 0x3CF62AC Offset: 0x3CF62AC VA: 0x3CF62AC
	public void .ctor(ISaveLoad<MagicStreakGaeModel> saveLoad) { }

	// RVA: 0x3CF62E4 Offset: 0x3CF62E4 VA: 0x3CF62E4 Slot: 4
	public void Initialize() { }

	// RVA: 0x3CF63A8 Offset: 0x3CF63A8 VA: 0x3CF63A8 Slot: 5
	public void Dispose() { }

	// RVA: 0x3CF63AC Offset: 0x3CF63AC VA: 0x3CF63AC Slot: 6
	public void LateUpdate() { }

	// RVA: 0x3CF6464 Offset: 0x3CF6464 VA: 0x3CF6464 Slot: 7
	public bool IsDataChangedSinceLastSave() { }

	// RVA: 0x3CF646C Offset: 0x3CF646C VA: 0x3CF646C Slot: 8
	public void DataSynced() { }

	// RVA: 0x3CF6474 Offset: 0x3CF6474 VA: 0x3CF6474 Slot: 9
	public string SerializeModelForSync() { }

	// RVA: 0x3CF64D4 Offset: 0x3CF64D4 VA: 0x3CF64D4 Slot: 10
	public string GetSyncName() { }

	// RVA: 0x3CF6514 Offset: 0x3CF6514 VA: 0x3CF6514 Slot: 11
	public void OverwriteModelFromSync(string data) { }

	// RVA: 0x3CF661C Offset: 0x3CF661C VA: 0x3CF661C Slot: 12
	public void DeleteData() { }

	// RVA: 0x3CF66EC Offset: 0x3CF66EC VA: 0x3CF66EC
	private void MarkDataForLateUpdate() { }

	// RVA: 0x3CF66F8 Offset: 0x3CF66F8 VA: 0x3CF66F8
	public MagicStreakGaeLiveOpModel GetCachedLiveOpModel() { }

	// RVA: 0x3CF6714 Offset: 0x3CF6714 VA: 0x3CF6714
	public void SetCachedLiveOpModel(MagicStreakGaeLiveOpModel MagicStreakGaeLiveOpModel) { }

	// RVA: 0x3CF6740 Offset: 0x3CF6740 VA: 0x3CF6740
	public void SetPlayOnCountBetweenSteps(int playOnCount) { }

	// RVA: 0x3CF6764 Offset: 0x3CF6764 VA: 0x3CF6764
	public int GetPlayOnCountBetweenSteps() { }

	// RVA: 0x3CF6780 Offset: 0x3CF6780 VA: 0x3CF6780
	public int GetCumulativePlayOnCount() { }

	// RVA: 0x3CF679C Offset: 0x3CF679C VA: 0x3CF679C
	public void SetCumulativePlayOnCount(int count) { }

	// RVA: 0x3CF67C0 Offset: 0x3CF67C0 VA: 0x3CF67C0
	public void SetSegment(string segment) { }

	// RVA: 0x3CF67EC Offset: 0x3CF67EC VA: 0x3CF67EC
	public string GetSegment() { }

	// RVA: 0x3CF6864 Offset: 0x3CF6864 VA: 0x3CF6864
	public int GetRewardScore() { }

	// RVA: 0x3CF6880 Offset: 0x3CF6880 VA: 0x3CF6880
	public bool GetIsEventIntroducedEverInLifeTime() { }

	// RVA: 0x3CF689C Offset: 0x3CF689C VA: 0x3CF689C
	public void SetIsEventIntroducedEverInLifeTime(bool isEventIntroducedEverInLifeTime) { }

	// RVA: 0x3CF68C4 Offset: 0x3CF68C4 VA: 0x3CF68C4
	public bool GetIsEventIntroduced() { }

	// RVA: 0x3CF68E0 Offset: 0x3CF68E0 VA: 0x3CF68E0
	public void SetEventIntroduced(bool isIntroduced) { }

	// RVA: 0x3CF6908 Offset: 0x3CF6908 VA: 0x3CF6908
	public void SetRewardScore(int score) { }

	// RVA: 0x3CF692C Offset: 0x3CF692C VA: 0x3CF692C
	public int GetStreakMultiplierIndex() { }

	// RVA: 0x3CF6948 Offset: 0x3CF6948 VA: 0x3CF6948
	public void SetStreakMultiplierIndex(int streakMultiplierIndex) { }

	// RVA: 0x3CF696C Offset: 0x3CF696C VA: 0x3CF696C
	public int GetLastSeenStreakMultiplierIndex() { }

	// RVA: 0x3CF6974 Offset: 0x3CF6974 VA: 0x3CF6974
	public void SetLastSeenStreakMultiplierIndex(int lastSeenIndex) { }

	// RVA: 0x3CF697C Offset: 0x3CF697C VA: 0x3CF697C
	public int GetLastSeenRewardScore() { }

	// RVA: 0x3CF6984 Offset: 0x3CF6984 VA: 0x3CF6984
	public void SetLastSeenRewardScore(int lastSeenScore) { }

	// RVA: 0x3CF698C Offset: 0x3CF698C VA: 0x3CF698C
	public void SetLevelMultiplierForLevelWinAnimation(int earnedScore) { }

	// RVA: 0x3CF6994 Offset: 0x3CF6994 VA: 0x3CF6994
	public int GetLevelMultiplierForLevelWinAnimation() { }

	// RVA: 0x3CF699C Offset: 0x3CF699C VA: 0x3CF699C
	public int GetMagicStreakGaeWinCount() { }

	// RVA: 0x3CF69B8 Offset: 0x3CF69B8 VA: 0x3CF69B8
	public void SetMagicStreakGaeWinCount(int winCount) { }

	// RVA: 0x3CF69DC Offset: 0x3CF69DC VA: 0x3CF69DC
	public void SetIsLastRewardClaimed(bool isClaimed) { }

	// RVA: 0x3CF6A0C Offset: 0x3CF6A0C VA: 0x3CF6A0C
	public bool GetIsLastRewardClaimed() { }

	// RVA: 0x3CF6A40 Offset: 0x3CF6A40 VA: 0x3CF6A40
	public void SetOneSuccessfulResponseFetched(bool isFetched) { }

	// RVA: 0x3CF6A4C Offset: 0x3CF6A4C VA: 0x3CF6A4C
	public bool GetOneSuccessfulResponseFetched() { }
}

// Namespace: 
[CompilerGenerated]