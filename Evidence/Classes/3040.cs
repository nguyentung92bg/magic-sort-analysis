public class WelcomeBackDataService : IRestartableService, IService, IInitializable, IDisposable, ILateUpdate, ISyncable, IDeletable // TypeDefIndex: 3040
{
	// Fields
	private readonly ISaveLoad<WelcomeBackDataModel> _saveLoad; // 0x10
	private WelcomeBackDataModel _model; // 0x18
	private bool _isMarkedForLateUpdate; // 0x20
	private bool _isDataChangedSinceLastSave; // 0x21

	// Methods

	// RVA: 0x315D660 Offset: 0x315D660 VA: 0x315D660
	public void .ctor(ISaveLoad<WelcomeBackDataModel> saveLoad) { }

	// RVA: 0x315D698 Offset: 0x315D698 VA: 0x315D698 Slot: 4
	public void Initialize() { }

	// RVA: 0x315D81C Offset: 0x315D81C VA: 0x315D81C Slot: 5
	public void Dispose() { }

	// RVA: 0x315D820 Offset: 0x315D820 VA: 0x315D820 Slot: 6
	public void LateUpdate() { }

	// RVA: 0x315D8D8 Offset: 0x315D8D8 VA: 0x315D8D8 Slot: 7
	public bool IsDataChangedSinceLastSave() { }

	// RVA: 0x315D8E0 Offset: 0x315D8E0 VA: 0x315D8E0 Slot: 8
	public void DataSynced() { }

	// RVA: 0x315D8E8 Offset: 0x315D8E8 VA: 0x315D8E8 Slot: 9
	public string SerializeModelForSync() { }

	// RVA: 0x315D950 Offset: 0x315D950 VA: 0x315D950 Slot: 10
	public string GetSyncName() { }

	// RVA: 0x315D990 Offset: 0x315D990 VA: 0x315D990 Slot: 11
	public void OverwriteModelFromSync(string data) { }

	// RVA: 0x315DB58 Offset: 0x315DB58 VA: 0x315DB58 Slot: 12
	public void DeleteData() { }

	// RVA: 0x315DCC8 Offset: 0x315DCC8 VA: 0x315DCC8
	private void MarkDataForLateUpdate(bool shouldSyncWithBackend) { }

	// RVA: 0x315DCDC Offset: 0x315DCDC VA: 0x315DCDC
	public bool HasWelcomeBack() { }

	// RVA: 0x315DD00 Offset: 0x315DD00 VA: 0x315DD00
	public bool HasWelcomeBackToClaim() { }

	[CanBeNull]
	// RVA: 0x315DD34 Offset: 0x315DD34 VA: 0x315DD34
	public WelcomeBackPackage GetWelcomeBackToClaim() { }

	[CanBeNull]
	// RVA: 0x315DD68 Offset: 0x315DD68 VA: 0x315DD68
	public WelcomeBackPackage GetWelcomeBackToSendClaimRequest() { }

	// RVA: 0x315DD9C Offset: 0x315DD9C VA: 0x315DD9C
	public void AddWelcomeBack(WelcomeBackPackage welcomeBack) { }

	// RVA: 0x315DDC8 Offset: 0x315DDC8 VA: 0x315DDC8
	public void RemoveWelcomeBack() { }

	// RVA: 0x315DDF8 Offset: 0x315DDF8 VA: 0x315DDF8
	public void SetWelcomeBackIsClaimed(bool isClaimed) { }

	// RVA: 0x315DE28 Offset: 0x315DE28 VA: 0x315DE28
	public void AddPreviousWelcomeBackId(string welcomeBackId) { }

	// RVA: 0x315DEF0 Offset: 0x315DEF0 VA: 0x315DEF0
	public bool ContainsPreviousWelcomeBack(string welcomeBackId) { }
}

// Namespace: Modules.Contexts.Home.Monetization.WelcomeBack.Scripts