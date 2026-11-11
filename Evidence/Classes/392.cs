public class AppleLoginHandler : IService, IInitializable, IDisposable // TypeDefIndex: 392
{
	// Fields
	private AppleLoginService _appleLoginService; // 0x10
	private IPlayerService _playerService; // 0x18
	private RemoteConfigs _remoteConfigs; // 0x20
	private TaskCompletionSource<AppleLoginResponseModel> _appleSignInTaskCompletionSource; // 0x28

	// Methods

	// RVA: 0x3DEB948 Offset: 0x3DEB948 VA: 0x3DEB948
	public void .ctor(AppleLoginService appleLoginService, IPlayerService playerService, RemoteConfigs remoteConfigs) { }

	// RVA: 0x3DEB9A8 Offset: 0x3DEB9A8 VA: 0x3DEB9A8
	public bool IsEnabled() { }

	// RVA: 0x3DEB9EC Offset: 0x3DEB9EC VA: 0x3DEB9EC Slot: 5
	public void Dispose() { }

	// RVA: 0x3DEBAD0 Offset: 0x3DEBAD0 VA: 0x3DEBAD0 Slot: 4
	public void Initialize() { }

	[AsyncStateMachine(typeof(AppleLoginHandler.<SignIn>d__8))]
	// RVA: 0x3DEBBB4 Offset: 0x3DEBBB4 VA: 0x3DEBBB4
	public Task SignIn() { }

	[AsyncStateMachine(typeof(AppleLoginHandler.<SignInAppleAsync>d__9))]
	// RVA: 0x3DEBCA0 Offset: 0x3DEBCA0 VA: 0x3DEBCA0
	private Task SignInAppleAsync() { }

	[AsyncStateMachine(typeof(AppleLoginHandler.<HandleAppleLoginResponse>d__10))]
	// RVA: 0x3DEBD8C Offset: 0x3DEBD8C VA: 0x3DEBD8C
	private Task HandleAppleLoginResponse(AppleLoginResponseModel responseModel) { }

	[AsyncStateMachine(typeof(AppleLoginHandler.<SyncBackendWithAppleId>d__11))]
	// RVA: 0x3DEBE90 Offset: 0x3DEBE90 VA: 0x3DEBE90
	private Task<AppleLoginResultPopupArguments> SyncBackendWithAppleId(string id) { }

	// RVA: 0x3DEBFBC Offset: 0x3DEBFBC VA: 0x3DEBFBC
	private void OnSignedIn(AppleLoginResponseModel result) { }

	[AsyncStateMachine(typeof(AppleLoginHandler.<SignOut>d__13))]
	// RVA: 0x3DEC01C Offset: 0x3DEC01C VA: 0x3DEC01C
	public Task SignOut() { }
}

// Namespace: 
[CompilerGenerated]