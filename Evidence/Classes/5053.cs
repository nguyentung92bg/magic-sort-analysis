public class LoginRemoteService // TypeDefIndex: 5053
{
	// Fields
	private HttpProxy _httpProxy; // 0x10
	private BackendEnvironmentConfig _backendEnvironmentConfig; // 0x18
	private const float _timeout = 3;

	// Methods

	// RVA: 0x3CD89E4 Offset: 0x3CD89E4 VA: 0x3CD89E4
	public void .ctor(HttpProxy httpProxy, BackendEnvironmentConfig backendEnvironmentConfig) { }

	[AsyncStateMachine(typeof(LoginRemoteService.<LoginAsync>d__4))]
	// RVA: 0x3CD8A28 Offset: 0x3CD8A28 VA: 0x3CD8A28
	public Task<ApiResponse<LoginResponse>> LoginAsync(string userId, string facebookId) { }
}

// Namespace: 
[CompilerGenerated]