public class MagicPassDataService : IRestartableService, IService, IInitializable, IDisposable, ILateUpdate, IDeletable, ISyncable // TypeDefIndex: 3895
{
	// Fields
	private MagicPassModel _model; // 0x10
	private readonly ISaveLoad<MagicPassModel> _saveLoad; // 0x18
	private bool _isDataChangedSinceLastSave; // 0x20
	private bool _isMarkedForLateUpdate; // 0x21

	// Methods

	// RVA: 0x3D01828 Offset: 0x3D01828 VA: 0x3D01828
	public void .ctor(ISaveLoad<MagicPassModel> saveLoad) { }

	// RVA: 0x3D01858 Offset: 0x3D01858 VA: 0x3D01858 Slot: 4
	public void Initialize() { }

	// RVA: 0x3D01918 Offset: 0x3D01918 VA: 0x3D01918 Slot: 5
	public void Dispose() { }

	// RVA: 0x3D0191C Offset: 0x3D0191C VA: 0x3D0191C
	public void StartNewEvent(MagicPassEventInfoResponse response) { }

	// RVA: 0x3D01B18 Offset: 0x3D01B18 VA: 0x3D01B18
	public void ClearCache() { }

	// RVA: 0x3D01B48 Offset: 0x3D01B48 VA: 0x3D01B48
	public string GetEventId() { }

	// RVA: 0x3D01BB0 Offset: 0x3D01BB0 VA: 0x3D01BB0
	public bool IsEventCached() { }

	// RVA: 0x3D01BD4 Offset: 0x3D01BD4 VA: 0x3D01BD4
	public MagicPassCacheModel GetCachedEventInfo() { }

	// RVA: 0x3D01BF0 Offset: 0x3D01BF0 VA: 0x3D01BF0
	public void AddKey(int keyCount) { }

	// RVA: 0x3D01C24 Offset: 0x3D01C24 VA: 0x3D01C24
	public int GetKeyCount() { }

	// RVA: 0x3D01C50 Offset: 0x3D01C50 VA: 0x3D01C50
	public void SetLastSeenKeyCount(int count) { }

	// RVA: 0x3D01C7C Offset: 0x3D01C7C VA: 0x3D01C7C
	public int GetLastSeenKeyCount() { }

	// RVA: 0x3D01CA8 Offset: 0x3D01CA8 VA: 0x3D01CA8
	public void SetLastCompletedStep(int step) { }

	// RVA: 0x3D01CD4 Offset: 0x3D01CD4 VA: 0x3D01CD4
	public int GetLastCompletedStep() { }

	// RVA: 0x3D01D00 Offset: 0x3D01D00 VA: 0x3D01D00
	public bool IsIntroduced() { }

	// RVA: 0x3D01D34 Offset: 0x3D01D34 VA: 0x3D01D34
	public void MarkAsIntroduced() { }

	// RVA: 0x3D01D64 Offset: 0x3D01D64 VA: 0x3D01D64
	public bool IsEventIntroducedEverInLifeTime() { }

	// RVA: 0x3D01D80 Offset: 0x3D01D80 VA: 0x3D01D80
	public void MarkEventIntroducedEverInLifeTime() { }

	// RVA: 0x3D01DA8 Offset: 0x3D01DA8 VA: 0x3D01DA8
	public void SetFreeStepAsClaimed(int step) { }

	// RVA: 0x3D01E84 Offset: 0x3D01E84 VA: 0x3D01E84
	public bool IsFreeStepClaimed(int step) { }

	// RVA: 0x3D01F00 Offset: 0x3D01F00 VA: 0x3D01F00
	public List<int> GetClaimedFreeSteps() { }

	// RVA: 0x3D01F8C Offset: 0x3D01F8C VA: 0x3D01F8C
	public void SetPaidStepAsClaimed(int step) { }

	// RVA: 0x3D02068 Offset: 0x3D02068 VA: 0x3D02068
	public bool IsPaidStepClaimed(int step) { }

	// RVA: 0x3D020E4 Offset: 0x3D020E4 VA: 0x3D020E4
	public List<int> GetClaimedPaidSteps() { }

	// RVA: 0x3D02170 Offset: 0x3D02170 VA: 0x3D02170
	public void MarkPassAsActivated() { }

	// RVA: 0x3D021A0 Offset: 0x3D021A0 VA: 0x3D021A0
	public bool IsPassActivated() { }

	// RVA: 0x3D021D4 Offset: 0x3D021D4 VA: 0x3D021D4
	public void MarkVaultAsClaimed() { }

	// RVA: 0x3D02204 Offset: 0x3D02204 VA: 0x3D02204
	public bool IsVaultClaimed() { }

	// RVA: 0x3D02238 Offset: 0x3D02238 VA: 0x3D02238
	public bool IsClaimed() { }

	// RVA: 0x3D0226C Offset: 0x3D0226C VA: 0x3D0226C
	public bool IsClaimedLocally() { }

	// RVA: 0x3D022A0 Offset: 0x3D022A0 VA: 0x3D022A0
	public void MarkAsClaimedLocally() { }

	// RVA: 0x3D022D0 Offset: 0x3D022D0 VA: 0x3D022D0
	public bool IsFinished() { }

	// RVA: 0x3D02304 Offset: 0x3D02304 VA: 0x3D02304
	public void MarkAsFinished() { }

	// RVA: 0x3D02334 Offset: 0x3D02334 VA: 0x3D02334
	public int GetLastSeenLobbyButtonKeyCount() { }

	// RVA: 0x3D02360 Offset: 0x3D02360 VA: 0x3D02360
	public void SetLastSeenLobbyButtonKeyCount(int keyCount) { }

	// RVA: 0x3D0238C Offset: 0x3D0238C VA: 0x3D0238C Slot: 7
	public void DeleteData() { }

	// RVA: 0x3D0245C Offset: 0x3D0245C VA: 0x3D0245C Slot: 6
	public void LateUpdate() { }

	// RVA: 0x3D01B0C Offset: 0x3D01B0C VA: 0x3D01B0C
	private void MarkDataForLateUpdate() { }

	// RVA: 0x3D02514 Offset: 0x3D02514 VA: 0x3D02514 Slot: 8
	public bool IsDataChangedSinceLastSave() { }

	// RVA: 0x3D0251C Offset: 0x3D0251C VA: 0x3D0251C Slot: 9
	public void DataSynced() { }

	// RVA: 0x3D02524 Offset: 0x3D02524 VA: 0x3D02524 Slot: 10
	public string SerializeModelForSync() { }

	// RVA: 0x3D025D0 Offset: 0x3D025D0 VA: 0x3D025D0 Slot: 11
	public string GetSyncName() { }

	// RVA: 0x3D02610 Offset: 0x3D02610 VA: 0x3D02610 Slot: 12
	public void OverwriteModelFromSync(string data) { }

	// RVA: 0x3D02718 Offset: 0x3D02718 VA: 0x3D02718
	public string GetSegment() { }

	// RVA: 0x3D02744 Offset: 0x3D02744 VA: 0x3D02744
	public void ResetProgress() { }

	// RVA: 0x3D02844 Offset: 0x3D02844 VA: 0x3D02844
	public void ClaimedTicket(string messageId) { }

	// RVA: 0x3D02948 Offset: 0x3D02948 VA: 0x3D02948
	public bool IsTicketClaimed(string messageId) { }

	// RVA: 0x3D029C0 Offset: 0x3D029C0 VA: 0x3D029C0
	public void ClearClaimedTickets() { }

	// RVA: 0x3D02A50 Offset: 0x3D02A50 VA: 0x3D02A50
	public List<MagicPassStepModel> GetSteps() { }
}

// Namespace: Modules.Contexts.Home.MagicPass.Scripts