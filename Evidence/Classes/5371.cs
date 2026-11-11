public class AdConfigRemoteService // TypeDefIndex: 5371
{
	// Fields
	private HttpProxy _httpProxy; // 0x10
	private BackendEnvironmentConfig _backendEnvironmentConfig; // 0x18
	private CancellationTokenSource _cancellationTokenSource; // 0x20

	// Methods

	// RVA: 0x185BB90 Offset: 0x185BB90 VA: 0x185BB90
	public void .ctor(HttpProxy httpProxy, BackendEnvironmentConfig backendEnvironmentConfig) { }

	// RVA: 0x185BBD4 Offset: 0x185BBD4 VA: 0x185BBD4
	public void Initialize() { }

	// RVA: 0x185BC3C Offset: 0x185BC3C VA: 0x185BC3C
	public void CancelRequests() { }

	// RVA: 0x185BCB4 Offset: 0x185BCB4 VA: 0x185BCB4
	public void Dispose() { }

	[AsyncStateMachine(typeof(AdConfigRemoteService.<GetAdConfigModel>d__7))]
	// RVA: 0x185BCC8 Offset: 0x185BCC8 VA: 0x185BCC8
	public Task<ApiResponse<AdConfigResponseModel>> GetAdConfigModel(double firstCpmAsDollar, AdjustAttributionModel adjustAttributionModel, int configType, bool isNewUser) { }
}

// Namespace: 
[CompilerGenerated]