public class LoginService // TypeDefIndex: 5060
{
	// Fields
	public readonly TokenService TokenService; // 0x10
	private readonly LoginRemoteService _loginRemoteService; // 0x18
	private readonly IPlayerService _playerService; // 0x20
	private HomeIdleDetectionManager _homeIdleDetectionManager; // 0x28
	private ApiResponse<LoginResponse> _loginResponse; // 0x30
	private readonly float _maxCoolDownDurationAsSeconds; // 0x38
	private readonly int _splashShowDurationMs; // 0x3C
	private readonly int _idleEndWaitDurationMs; // 0x40
	private float _coolDownDurationAsSeconds; // 0x44

	// Methods

	// RVA: 0x3CD9068 Offset: 0x3CD9068 VA: 0x3CD9068
	public void .ctor(HttpProxy httpProxyLogin, IPlayerService playerService, BackendEnvironmentConfig backendEnvironmentConfig) { }

	// RVA: 0x3CD9164 Offset: 0x3CD9164 VA: 0x3CD9164
	public void StartLoginRetryIfNeeded() { }

	[AsyncStateMachine(typeof(LoginService.<TryLoginUserAsync>d__11))]
	// RVA: 0x3CD9328 Offset: 0x3CD9328 VA: 0x3CD9328
	public Task TryLoginUserAsync() { }

	[AsyncStateMachine(typeof(LoginService.<RetryLogin>d__12))]
	// RVA: 0x3CD9238 Offset: 0x3CD9238 VA: 0x3CD9238
	private Task RetryLogin() { }

	[AsyncStateMachine(typeof(LoginService.<HandleLateLoginSuccess>d__13))]
	// RVA: 0x3CD9414 Offset: 0x3CD9414 VA: 0x3CD9414
	private Task HandleLateLoginSuccess() { }

	// RVA: 0x3CD9504 Offset: 0x3CD9504 VA: 0x3CD9504
	private bool ShouldOverwriteData() { }

	[AsyncStateMachine(typeof(LoginService.<RestartGame>d__15))]
	// RVA: 0x3CD95F8 Offset: 0x3CD95F8 VA: 0x3CD95F8
	private Task RestartGame() { }

	// RVA: 0x3CD96E4 Offset: 0x3CD96E4 VA: 0x3CD96E4
	public void SetPlayerIdleDetectionService(HomeIdleDetectionManager homeIdleDetectionManager) { }

	// RVA: 0x3CD96EC Offset: 0x3CD96EC VA: 0x3CD96EC
	private void UpdateServiceData() { }

	// RVA: 0x3CD98B4 Offset: 0x3CD98B4 VA: 0x3CD98B4
	public void TryUpdateAuthToken() { }

	[AsyncStateMachine(typeof(LoginService.<TryLoadDataFromRemote>d__19))]
	// RVA: 0x3CD9944 Offset: 0x3CD9944 VA: 0x3CD9944
	public Task TryLoadDataFromRemote() { }

	[AsyncStateMachine(typeof(LoginService.<TryOverwriteRemoteData>d__20))]
	// RVA: 0x3CD9A30 Offset: 0x3CD9A30 VA: 0x3CD9A30
	public Task<bool> TryOverwriteRemoteData() { }

	// RVA: 0x3CD9B44 Offset: 0x3CD9B44 VA: 0x3CD9B44
	public bool TryGetDeletionStatus(out AccountDeleteStatus status) { }

	// RVA: 0x3CD9BDC Offset: 0x3CD9BDC VA: 0x3CD9BDC
	public void ResetDeletionStatus() { }
}

// Namespace: 
[CompilerGenerated]
[Serializable]