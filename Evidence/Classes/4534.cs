public class CollectionDataService : IRestartableService, IService, IInitializable, IDisposable, ILateUpdate, ISyncable, IDeletable // TypeDefIndex: 4534
{
	// Fields
	private CollectionModel _model; // 0x10
	private ISaveLoad<CollectionModel> _saveLoad; // 0x18
	private bool _isMarkedForLateUpdate; // 0x20
	private bool _isDataChangedSinceLastSave; // 0x21

	// Methods

	// RVA: 0x37686D0 Offset: 0x37686D0 VA: 0x37686D0
	public void .ctor(ISaveLoad<CollectionModel> saveLoad) { }

	// RVA: 0x3768708 Offset: 0x3768708 VA: 0x3768708 Slot: 4
	public void Initialize() { }

	// RVA: 0x37687C8 Offset: 0x37687C8 VA: 0x37687C8 Slot: 5
	public void Dispose() { }

	// RVA: 0x37687CC Offset: 0x37687CC VA: 0x37687CC Slot: 6
	public void LateUpdate() { }

	// RVA: 0x3768884 Offset: 0x3768884 VA: 0x3768884 Slot: 7
	public bool IsDataChangedSinceLastSave() { }

	// RVA: 0x376888C Offset: 0x376888C VA: 0x376888C Slot: 8
	public void DataSynced() { }

	// RVA: 0x3768894 Offset: 0x3768894 VA: 0x3768894 Slot: 9
	public string SerializeModelForSync() { }

	// RVA: 0x3768940 Offset: 0x3768940 VA: 0x3768940 Slot: 10
	public string GetSyncName() { }

	// RVA: 0x3768980 Offset: 0x3768980 VA: 0x3768980 Slot: 11
	public void OverwriteModelFromSync(string data) { }

	// RVA: 0x3768A88 Offset: 0x3768A88 VA: 0x3768A88 Slot: 12
	public void DeleteData() { }

	// RVA: 0x3768B58 Offset: 0x3768B58 VA: 0x3768B58
	private void MarkDataForLateUpdate() { }

	// RVA: 0x3768B64 Offset: 0x3768B64 VA: 0x3768B64
	public void StartNewEvent(CollectionResponseModel response) { }

	// RVA: 0x3768DB8 Offset: 0x3768DB8 VA: 0x3768DB8
	public CollectionCacheModel GetCachedEventInfo() { }

	// RVA: 0x3768DD4 Offset: 0x3768DD4 VA: 0x3768DD4
	public bool IsClaimed() { }

	// RVA: 0x3768E08 Offset: 0x3768E08 VA: 0x3768E08
	public void ClaimEvent() { }

	// RVA: 0x3768EAC Offset: 0x3768EAC VA: 0x3768EAC
	public bool IsIntroducedInLifeTime() { }

	// RVA: 0x3768EC8 Offset: 0x3768EC8 VA: 0x3768EC8
	public void MarkIntroducedInLifeTime() { }

	// RVA: 0x3768EF0 Offset: 0x3768EF0 VA: 0x3768EF0
	public bool IsCollectionCountMigrationCompleted() { }

	// RVA: 0x3768F0C Offset: 0x3768F0C VA: 0x3768F0C
	public void MarkCollectionCountMigrationCompleted() { }

	// RVA: 0x3768F34 Offset: 0x3768F34 VA: 0x3768F34
	public void IncreaseCollectionCompletedCount() { }

	// RVA: 0x3768F60 Offset: 0x3768F60 VA: 0x3768F60
	public void SetTotalCollectionCompletedCount(int count) { }

	// RVA: 0x3768F84 Offset: 0x3768F84 VA: 0x3768F84
	public int GetTotalCollectionCompletedCount() { }

	// RVA: 0x3768FA0 Offset: 0x3768FA0 VA: 0x3768FA0
	public void AddCardToInventory(string cardId) { }

	// RVA: 0x37691FC Offset: 0x37691FC VA: 0x37691FC
	public void RemoveCardFromInventory(string cardId, int removeCount = 1) { }

	// RVA: 0x37692B0 Offset: 0x37692B0 VA: 0x37692B0
	public bool IsCardInInventory(string cardId) { }

	// RVA: 0x37692C8 Offset: 0x37692C8 VA: 0x37692C8
	public bool IsCardNew(string cardId) { }

	// RVA: 0x37692E8 Offset: 0x37692E8 VA: 0x37692E8
	public void MarkCardAsSeen(string cardId) { }

	// RVA: 0x37690F0 Offset: 0x37690F0 VA: 0x37690F0
	public CardInventoryDataModel GetCardInventoryData(string cardId) { }

	// RVA: 0x3769314 Offset: 0x3769314 VA: 0x3769314
	public List<CardInventoryDataModel> GetCardInventory() { }

	// RVA: 0x37693A0 Offset: 0x37693A0 VA: 0x37693A0
	public void ResetInventory() { }

	// RVA: 0x3769434 Offset: 0x3769434 VA: 0x3769434
	public void SetNewCardOpeningBoost(int boost) { }

	// RVA: 0x3769460 Offset: 0x3769460 VA: 0x3769460
	public int GetNewCardOpeningBoost() { }

	// RVA: 0x3769484 Offset: 0x3769484 VA: 0x3769484
	public bool IsGoldCollectionActive() { }

	// RVA: 0x37694B8 Offset: 0x37694B8 VA: 0x37694B8
	public void SetGoldCollectionActive(bool isActive) { }

	// RVA: 0x37694E8 Offset: 0x37694E8 VA: 0x37694E8
	public bool IsRepeatCollectionActive() { }

	// RVA: 0x376951C Offset: 0x376951C VA: 0x376951C
	public void SetRepeatCollectionActive(bool isActive) { }

	// RVA: 0x376954C Offset: 0x376954C VA: 0x376954C
	public int GetRepeatCompletedCount() { }

	// RVA: 0x3769578 Offset: 0x3769578 VA: 0x3769578
	public void IncreaseRepeatCompletedCount() { }

	// RVA: 0x37695AC Offset: 0x37695AC VA: 0x37695AC
	public void AddCompletedTheme(string themeId) { }

	// RVA: 0x376970C Offset: 0x376970C VA: 0x376970C
	public void RemoveCompletedTheme(string themeId) { }

	// RVA: 0x3769694 Offset: 0x3769694 VA: 0x3769694
	public bool IsThemeCompleted(string themeId) { }

	// RVA: 0x3769780 Offset: 0x3769780 VA: 0x3769780
	public List<string> GetCompletedThemes() { }

	// RVA: 0x376980C Offset: 0x376980C VA: 0x376980C
	public bool HasAnyCompletedTheme() { }

	// RVA: 0x3769874 Offset: 0x3769874 VA: 0x3769874
	public List<CardHelpDataModel> GetSentCards() { }

	// RVA: 0x3769900 Offset: 0x3769900 VA: 0x3769900
	public List<CardHelpDataModel> GetReceivedCards() { }

	// RVA: 0x376998C Offset: 0x376998C VA: 0x376998C
	public void AddSentCard(CardHelpDataModel cardHelpDataModel) { }

	// RVA: 0x3769AC4 Offset: 0x3769AC4 VA: 0x3769AC4
	public void UpdateSentCards(List<CardHelpDataModel> sentCardsLocal) { }

	// RVA: 0x3769B8C Offset: 0x3769B8C VA: 0x3769B8C
	public void UpdateReceivedCards(List<CardHelpDataModel> receivedCardsLocal) { }

	// RVA: 0x3769C54 Offset: 0x3769C54 VA: 0x3769C54
	public void MarkAllReceivedCardAsClaimed() { }

	// RVA: 0x3769DBC Offset: 0x3769DBC VA: 0x3769DBC
	public bool IsClaimedActivationReward() { }

	// RVA: 0x3769DF0 Offset: 0x3769DF0 VA: 0x3769DF0
	public void MarkAsActivationRewardClaimed() { }

	// RVA: 0x3769E20 Offset: 0x3769E20 VA: 0x3769E20
	public void MarkAsActivationRewardUnclaimed() { }

	// RVA: 0x3769E4C Offset: 0x3769E4C VA: 0x3769E4C
	public long GetStartTime() { }

	// RVA: 0x3769E78 Offset: 0x3769E78 VA: 0x3769E78
	public string GetSegment() { }

	// RVA: 0x3769EA4 Offset: 0x3769EA4 VA: 0x3769EA4
	public void ClearCacheForDebug() { }
}

// Namespace: Modules.Contexts.Home.Collection.Scripts