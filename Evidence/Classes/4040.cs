public class MagicBottleDataService : IRestartableService, IService, IInitializable, IDisposable, ILateUpdate, ISyncable, IDeletable // TypeDefIndex: 4040
{
	// Fields
	private readonly ISaveLoad<MagicBottleModel> _saveLoad; // 0x10
	private bool _isMarkedForLateUpdate; // 0x18
	private bool _isDataChangedSinceLastSave; // 0x19
	private MagicBottleModel _model; // 0x20

	// Methods

	// RVA: 0x375CCCC Offset: 0x375CCCC VA: 0x375CCCC
	public void .ctor(ISaveLoad<MagicBottleModel> saveLoad) { }

	// RVA: 0x375CD04 Offset: 0x375CD04 VA: 0x375CD04 Slot: 4
	public void Initialize() { }

	// RVA: 0x375CDC4 Offset: 0x375CDC4 VA: 0x375CDC4 Slot: 5
	public void Dispose() { }

	// RVA: 0x375CDC8 Offset: 0x375CDC8 VA: 0x375CDC8 Slot: 6
	public void LateUpdate() { }

	// RVA: 0x375CE80 Offset: 0x375CE80 VA: 0x375CE80 Slot: 7
	public bool IsDataChangedSinceLastSave() { }

	// RVA: 0x375CE88 Offset: 0x375CE88 VA: 0x375CE88 Slot: 8
	public void DataSynced() { }

	// RVA: 0x375CE90 Offset: 0x375CE90 VA: 0x375CE90 Slot: 9
	public string SerializeModelForSync() { }

	// RVA: 0x375CF3C Offset: 0x375CF3C VA: 0x375CF3C Slot: 10
	public string GetSyncName() { }

	// RVA: 0x375CF7C Offset: 0x375CF7C VA: 0x375CF7C Slot: 11
	public void OverwriteModelFromSync(string data) { }

	// RVA: 0x375D084 Offset: 0x375D084 VA: 0x375D084 Slot: 12
	public void DeleteData() { }

	// RVA: 0x375D154 Offset: 0x375D154 VA: 0x375D154
	private void MarkDataForLateUpdate() { }

	// RVA: 0x375D160 Offset: 0x375D160 VA: 0x375D160
	public void IncreaseProgress() { }

	// RVA: 0x375D18C Offset: 0x375D18C VA: 0x375D18C
	public void SetLastSeenLobbyButtonProgress(int progress) { }

	// RVA: 0x375D1B0 Offset: 0x375D1B0 VA: 0x375D1B0
	public int GetLastSeenLobbyButtonProgress() { }

	// RVA: 0x375D1CC Offset: 0x375D1CC VA: 0x375D1CC
	public void ResetProgress() { }

	// RVA: 0x375D1F0 Offset: 0x375D1F0 VA: 0x375D1F0
	public int GetProgress() { }

	// RVA: 0x375D20C Offset: 0x375D20C VA: 0x375D20C
	public void MarkInfoPopUpIntroduced() { }

	// RVA: 0x375D22C Offset: 0x375D22C VA: 0x375D22C
	public bool IsInfoPopUpIntroduced() { }

	// RVA: 0x375D248 Offset: 0x375D248 VA: 0x375D248
	public void MarkEventShownInLifeTime() { }

	// RVA: 0x375D270 Offset: 0x375D270 VA: 0x375D270
	public bool IsEventShownInLifeTime() { }
}

// Namespace: Modules.Contexts.Home.MagicBottle.Scripts