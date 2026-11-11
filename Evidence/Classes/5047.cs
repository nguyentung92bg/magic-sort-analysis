public class SyncService : IService, IInitializable, IDisposable // TypeDefIndex: 5047
{
	// Fields
	private List<ISyncable> _syncables; // 0x10
	private SyncRemoteService _syncRemoteService; // 0x18
	private IPlayerService _playerService; // 0x20
	private SegmentService _segmentService; // 0x28
	private SyncRequestModel _syncRequestModel; // 0x30
	private RemoteConfigs _remoteConfigs; // 0x38
	[CompilerGenerated]
	private bool <ShouldOverwriteDataFromRemote>k__BackingField; // 0x40
	[CompilerGenerated]
	private bool <InForceNameChangeState>k__BackingField; // 0x41
	private Task<ApiResponse<GetDataResponse>> _getDataResponseTask; // 0x48
	private ApiResponse<AppleSyncResponse> _appleSyncResponse; // 0x50
	private const string _profileNameChangeClickedKey = "ProfileNameChangeClicked";
	private const string _profileNameChangeForceCountKey = "ProfileNameChangeForceCount";

	// Properties
	public bool ShouldOverwriteDataFromRemote { get; set; }
	public bool InForceNameChangeState { get; set; }

	// Methods

	[CompilerGenerated]
	// RVA: 0x3E32894 Offset: 0x3E32894 VA: 0x3E32894
	public bool get_ShouldOverwriteDataFromRemote() { }

	[CompilerGenerated]
	// RVA: 0x3E3289C Offset: 0x3E3289C VA: 0x3E3289C
	private void set_ShouldOverwriteDataFromRemote(bool value) { }

	[CompilerGenerated]
	// RVA: 0x3E328A8 Offset: 0x3E328A8 VA: 0x3E328A8
	public bool get_InForceNameChangeState() { }

	[CompilerGenerated]
	// RVA: 0x3E328B0 Offset: 0x3E328B0 VA: 0x3E328B0
	private void set_InForceNameChangeState(bool value) { }

	// RVA: 0x3E328BC Offset: 0x3E328BC VA: 0x3E328BC
	public void .ctor(IPlayerService playerService, SegmentService segmentService, HttpProxy httpProxy, BackendEnvironmentConfig backendEnvironmentConfig) { }

	// RVA: 0x3E32974 Offset: 0x3E32974 VA: 0x3E32974 Slot: 4
	public void Initialize() { }

	// RVA: 0x3E32A3C Offset: 0x3E32A3C VA: 0x3E32A3C Slot: 5
	public void Dispose() { }

	[AsyncStateMachine(typeof(SyncService.<SyncFacebookAsync>d__21))]
	// RVA: 0x3E32A40 Offset: 0x3E32A40 VA: 0x3E32A40
	public Task<FacebookSyncResponse> SyncFacebookAsync(string facebookId, string facebookImageUrl, string facebookName, List<string> friendsList) { }

	[AsyncStateMachine(typeof(SyncService.<SyncAppleAsync>d__22))]
	// RVA: 0x3E32BB4 Offset: 0x3E32BB4 VA: 0x3E32BB4
	public Task<ApiResponse<AppleSyncResponse>> SyncAppleAsync(string appleId) { }

	[AsyncStateMachine(typeof(SyncService.<ChangeProfileInfo>d__23))]
	// RVA: 0x3E32CE0 Offset: 0x3E32CE0 VA: 0x3E32CE0
	public Task<bool> ChangeProfileInfo(ProfileInfo profileInfo) { }

	[AsyncStateMachine(typeof(SyncService.<TryLoadDataFromRemote>d__24))]
	// RVA: 0x3E32E14 Offset: 0x3E32E14 VA: 0x3E32E14
	public Task TryLoadDataFromRemote(int progress) { }

	[AsyncStateMachine(typeof(SyncService.<TryLoadDataFromRemote>d__25))]
	// RVA: 0x3E32F0C Offset: 0x3E32F0C VA: 0x3E32F0C
	public Task<bool> TryLoadDataFromRemote(LoginResponse loginResponse) { }

	[AsyncStateMachine(typeof(SyncService.<AckForceFetched>d__26))]
	// RVA: 0x3E33040 Offset: 0x3E33040 VA: 0x3E33040
	private void AckForceFetched() { }

	[AsyncStateMachine(typeof(SyncService.<OverwriteDataFromRemote>d__27))]
	// RVA: 0x3E330F8 Offset: 0x3E330F8 VA: 0x3E330F8
	private Task<bool> OverwriteDataFromRemote() { }

	[AsyncStateMachine(typeof(SyncService.<TryOverwriteDataFromRemote>d__28))]
	// RVA: 0x3E3320C Offset: 0x3E3320C VA: 0x3E3320C
	public Task<bool> TryOverwriteDataFromRemote() { }

	// RVA: 0x3E33320 Offset: 0x3E33320 VA: 0x3E33320
	public void TrySyncAllData(bool shouldFetchSegment = False) { }

	[AsyncStateMachine(typeof(SyncService.<StartSyncFlow>d__30))]
	// RVA: 0x3E335CC Offset: 0x3E335CC VA: 0x3E335CC
	private void StartSyncFlow(Dictionary<string, string> dataDictionary, bool shouldFetchSegment) { }

	// RVA: 0x3E336AC Offset: 0x3E336AC VA: 0x3E336AC
	public void MarkDataAsSynced() { }

	[AsyncStateMachine(typeof(SyncService.<DeleteAllDataAsync>d__32))]
	// RVA: 0x3E33860 Offset: 0x3E33860 VA: 0x3E33860
	public void DeleteAllDataAsync() { }

	[AsyncStateMachine(typeof(SyncService.<DeleteAllDataWithProdAsync>d__33))]
	// RVA: 0x3E33918 Offset: 0x3E33918 VA: 0x3E33918
	public void DeleteAllDataWithProdAsync() { }

	// RVA: 0x3E339D0 Offset: 0x3E339D0 VA: 0x3E339D0
	public bool ShouldShowProfileAlertView() { }

	// RVA: 0x3E33B4C Offset: 0x3E33B4C VA: 0x3E33B4C
	public bool ShouldShowProfileFingerView() { }

	// RVA: 0x3E33B7C Offset: 0x3E33B7C VA: 0x3E33B7C
	public bool ShouldShowForceProfileNameChange() { }

	// RVA: 0x3E33A54 Offset: 0x3E33A54 VA: 0x3E33A54
	private bool IsNameChanged() { }

	// RVA: 0x3E33A00 Offset: 0x3E33A00 VA: 0x3E33A00
	private bool IsNameChangeClicked() { }

	// RVA: 0x3E33CD4 Offset: 0x3E33CD4 VA: 0x3E33CD4
	public void MarkProfileOpened() { }

	// RVA: 0x3E33C8C Offset: 0x3E33C8C VA: 0x3E33C8C
	public int GetProfileNameChangeForceCount() { }

	// RVA: 0x3E33D1C Offset: 0x3E33D1C VA: 0x3E33D1C
	public void IncreaseProfileNameChangeForceCount() { }

	// RVA: 0x3E33D6C Offset: 0x3E33D6C VA: 0x3E33D6C
	public void SetInForceNameChangeState(bool inForceState) { }
}

// Namespace: Modules.Contexts.Application.ServerCommunication.Scripts