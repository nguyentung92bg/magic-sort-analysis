public class FriendsDataService : IRestartableService, IService, IInitializable, IDisposable, ILateUpdate, IDeletable, ISyncable // TypeDefIndex: 4290
{
	// Fields
	private FriendsModel _model; // 0x10
	private ISaveLoad<FriendsModel> _saveLoad; // 0x18
	private bool _isMarkedForLateUpdate; // 0x20
	private bool _isDataChangedSinceLastSave; // 0x21
	private readonly RemoteConfigs _remoteConfigs; // 0x28

	// Methods

	// RVA: 0x1C74090 Offset: 0x1C74090 VA: 0x1C74090
	public void .ctor(SaveLoad<FriendsModel> saveLoad, RemoteConfigs remoteConfigs) { }

	// RVA: 0x1C740DC Offset: 0x1C740DC VA: 0x1C740DC Slot: 4
	public void Initialize() { }

	// RVA: 0x1C741E0 Offset: 0x1C741E0 VA: 0x1C741E0 Slot: 5
	public void Dispose() { }

	// RVA: 0x1C741E4 Offset: 0x1C741E4 VA: 0x1C741E4 Slot: 6
	public void LateUpdate() { }

	// RVA: 0x1C7429C Offset: 0x1C7429C VA: 0x1C7429C Slot: 7
	public void DeleteData() { }

	// RVA: 0x1C74368 Offset: 0x1C74368 VA: 0x1C74368
	public void UpdateIncomingRequests(List<FriendRequestElementViewModel> incomingRequests) { }

	// RVA: 0x1C746F4 Offset: 0x1C746F4 VA: 0x1C746F4
	public bool GetDidClaimSyncReward() { }

	// RVA: 0x1C74718 Offset: 0x1C74718 VA: 0x1C74718
	public void SetDidClaimSyncReward(bool value) { }

	// RVA: 0x1C746E0 Offset: 0x1C746E0 VA: 0x1C746E0
	private void MarkForLateUpdate(bool shouldSyncWithBackend = False) { }

	// RVA: 0x1C7475C Offset: 0x1C7475C VA: 0x1C7475C Slot: 8
	public bool IsDataChangedSinceLastSave() { }

	// RVA: 0x1C74764 Offset: 0x1C74764 VA: 0x1C74764 Slot: 9
	public void DataSynced() { }

	// RVA: 0x1C7476C Offset: 0x1C7476C VA: 0x1C7476C Slot: 10
	public string SerializeModelForSync() { }

	// RVA: 0x1C747D4 Offset: 0x1C747D4 VA: 0x1C747D4 Slot: 11
	public string GetSyncName() { }

	// RVA: 0x1C74814 Offset: 0x1C74814 VA: 0x1C74814 Slot: 12
	public void OverwriteModelFromSync(string data) { }
}

// Namespace: Modules.Contexts.Home.Friends.Scripts