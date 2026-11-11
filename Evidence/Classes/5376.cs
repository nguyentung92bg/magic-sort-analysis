public class AccountDeleteDataService : IRestartableService, IService, IInitializable, IDisposable, ILateUpdate, IDeletable // TypeDefIndex: 5376
{
	// Fields
	private ISaveLoad<AccountDeleteDataModel> _saveLoad; // 0x10
	private bool _isMarkedForLateUpdate; // 0x18
	private bool _isDataChangedSinceLastSave; // 0x19
	private AccountDeleteDataModel _model; // 0x20

	// Methods

	// RVA: 0x185CFB8 Offset: 0x185CFB8 VA: 0x185CFB8
	public void .ctor(ISaveLoad<AccountDeleteDataModel> saveLoad) { }

	// RVA: 0x185CFF0 Offset: 0x185CFF0 VA: 0x185CFF0 Slot: 4
	public void Initialize() { }

	// RVA: 0x185D0F8 Offset: 0x185D0F8 VA: 0x185D0F8 Slot: 5
	public void Dispose() { }

	// RVA: 0x185D0FC Offset: 0x185D0FC VA: 0x185D0FC
	public bool IsDataChangedSinceLastSave() { }

	// RVA: 0x185D104 Offset: 0x185D104 VA: 0x185D104
	public void DataSynced() { }

	// RVA: 0x185D10C Offset: 0x185D10C VA: 0x185D10C
	public string SerializeModelForSync() { }

	// RVA: 0x185D1B8 Offset: 0x185D1B8 VA: 0x185D1B8
	public string GetSyncName() { }

	// RVA: 0x185D1F8 Offset: 0x185D1F8 VA: 0x185D1F8
	public void OverwriteModelFromSync(string data) { }

	// RVA: 0x185D300 Offset: 0x185D300 VA: 0x185D300 Slot: 6
	public void LateUpdate() { }

	// RVA: 0x185D3B8 Offset: 0x185D3B8 VA: 0x185D3B8
	private void MarkDataForLateUpdate() { }

	// RVA: 0x185D3C4 Offset: 0x185D3C4 VA: 0x185D3C4 Slot: 7
	public void DeleteData() { }

	// RVA: 0x185D494 Offset: 0x185D494 VA: 0x185D494
	public void AccountDeletionRequested() { }

	// RVA: 0x185D4BC Offset: 0x185D4BC VA: 0x185D4BC
	public void AccountDeleteCanceled() { }

	// RVA: 0x185D4E0 Offset: 0x185D4E0 VA: 0x185D4E0
	public void SetDeletionStatus(AccountDeleteStatus deletionStatus) { }

	// RVA: 0x185D504 Offset: 0x185D504 VA: 0x185D504
	public AccountDeleteStatus GetDeleteRequested() { }
}

// Namespace: Modules.Contexts.Application.AccountDelete