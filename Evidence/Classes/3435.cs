public class CompensationService : IRestartableService, IService, IInitializable, IDisposable, IDataInitializable // TypeDefIndex: 3435
{
	// Fields
	private const int RetryLimit = 5;
	private const int RetryDelayInSeconds = 30;
	[CompilerGenerated]
	private readonly CompensationDataService <DataService>k__BackingField; // 0x10
	[CompilerGenerated]
	private readonly CompensationStateService <StateService>k__BackingField; // 0x18
	[CompilerGenerated]
	private readonly CompensationRemoteService <RemoteService>k__BackingField; // 0x20
	private readonly CustomUpdater _customUpdater; // 0x28
	private NewSecondTimer _secondTimer; // 0x30
	private int _retryCount; // 0x38

	// Properties
	public CompensationDataService DataService { get; }
	public CompensationStateService StateService { get; }
	private CompensationRemoteService RemoteService { get; }

	// Methods

	[CompilerGenerated]
	// RVA: 0x20A9524 Offset: 0x20A9524 VA: 0x20A9524
	public CompensationDataService get_DataService() { }

	[CompilerGenerated]
	// RVA: 0x20A952C Offset: 0x20A952C VA: 0x20A952C
	public CompensationStateService get_StateService() { }

	[CompilerGenerated]
	// RVA: 0x20A9534 Offset: 0x20A9534 VA: 0x20A9534
	private CompensationRemoteService get_RemoteService() { }

	// RVA: 0x20A953C Offset: 0x20A953C VA: 0x20A953C
	public void .ctor(CompensationDataService dataService, CompensationStateService stateService, CompensationRemoteService remoteService, CustomUpdater customUpdater) { }

	// RVA: 0x20A95B0 Offset: 0x20A95B0 VA: 0x20A95B0 Slot: 4
	public void Initialize() { }

	// RVA: 0x20A9620 Offset: 0x20A9620 VA: 0x20A9620 Slot: 5
	public void Dispose() { }

	// RVA: 0x20A9648 Offset: 0x20A9648 VA: 0x20A9648 Slot: 6
	public void InitializeData() { }

	[AsyncStateMachine(typeof(CompensationService.<TryFetchData>d__18))]
	// RVA: 0x20A964C Offset: 0x20A964C VA: 0x20A964C
	private void TryFetchData() { }

	[AsyncStateMachine(typeof(CompensationService.<SendGetCompensationRequest>d__19))]
	// RVA: 0x20A9704 Offset: 0x20A9704 VA: 0x20A9704
	private Task SendGetCompensationRequest() { }

	// RVA: 0x20A97F4 Offset: 0x20A97F4 VA: 0x20A97F4
	private void RetrySendGetCompensationRequest() { }

	[AsyncStateMachine(typeof(CompensationService.<TrySendClaimCompensationRequest>d__21))]
	// RVA: 0x20A98E8 Offset: 0x20A98E8 VA: 0x20A98E8
	private Task TrySendClaimCompensationRequest() { }

	[AsyncStateMachine(typeof(CompensationService.<SendClaimCompensationRequest>d__22))]
	// RVA: 0x20A99D4 Offset: 0x20A99D4 VA: 0x20A99D4
	private Task SendClaimCompensationRequest(string compensationId) { }

	// RVA: 0x20A9AD8 Offset: 0x20A9AD8 VA: 0x20A9AD8
	public void ClaimReward() { }

	[CompilerGenerated]
	// RVA: 0x20A9CC8 Offset: 0x20A9CC8 VA: 0x20A9CC8
	private void <RetrySendGetCompensationRequest>b__20_0() { }
}

// Namespace: 