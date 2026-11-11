public class RemoteTimeService : IService, IInitializable, IDisposable, ISecondUpdate // TypeDefIndex: 5007
{
	// Fields
	private HttpProxy _httpProxy; // 0x10
	private BackendEnvironmentConfig _backendEnvironmentConfig; // 0x18
	private CustomUpdater _customUpdater; // 0x20
	[CompilerGenerated]
	private DateTime <RemoteTime>k__BackingField; // 0x28
	private int _coolDownDurationAsSeconds; // 0x30
	private int _elapsedCoolDown; // 0x34
	private int _maxCoolDownDurationAsSeconds; // 0x38
	[CompilerGenerated]
	private bool <ByPassRemoteTimeCheck>k__BackingField; // 0x3C

	// Properties
	public DateTime RemoteTime { get; set; }
	public bool ByPassRemoteTimeCheck { get; set; }

	// Methods

	[CompilerGenerated]
	// RVA: 0x3E2DB24 Offset: 0x3E2DB24 VA: 0x3E2DB24
	public DateTime get_RemoteTime() { }

	[CompilerGenerated]
	// RVA: 0x3E2DB2C Offset: 0x3E2DB2C VA: 0x3E2DB2C
	private void set_RemoteTime(DateTime value) { }

	[CompilerGenerated]
	// RVA: 0x3E2DB34 Offset: 0x3E2DB34 VA: 0x3E2DB34
	public bool get_ByPassRemoteTimeCheck() { }

	[CompilerGenerated]
	// RVA: 0x3E2DB3C Offset: 0x3E2DB3C VA: 0x3E2DB3C
	public void set_ByPassRemoteTimeCheck(bool value) { }

	// RVA: 0x3E2DB48 Offset: 0x3E2DB48 VA: 0x3E2DB48
	public void .ctor(HttpProxy httpProxy, BackendEnvironmentConfig backendEnvironmentConfig, CustomUpdater customUpdater) { }

	// RVA: 0x3E2DBA8 Offset: 0x3E2DBA8 VA: 0x3E2DBA8 Slot: 4
	public void Initialize() { }

	// RVA: 0x3E2DCF4 Offset: 0x3E2DCF4 VA: 0x3E2DCF4 Slot: 5
	public void Dispose() { }

	// RVA: 0x3E2DD14 Offset: 0x3E2DD14 VA: 0x3E2DD14 Slot: 6
	public void SecondUpdate() { }

	// RVA: 0x3E208A8 Offset: 0x3E208A8 VA: 0x3E208A8
	public bool IsRemoteDaySameWithLocalDay() { }

	[AsyncStateMachine(typeof(RemoteTimeService.<GetAndSetRemoteTime>d__19))]
	// RVA: 0x3E2DC3C Offset: 0x3E2DC3C VA: 0x3E2DC3C
	private void GetAndSetRemoteTime() { }

	[AsyncStateMachine(typeof(RemoteTimeService.<GetRemoteTime>d__20))]
	// RVA: 0x3E2DD60 Offset: 0x3E2DD60 VA: 0x3E2DD60
	private Task<ApiResponse<RemoteTimeResponse>> GetRemoteTime() { }
}

// Namespace: Modules.Contexts.Application.ServerCommunication.Scripts
[Serializable]