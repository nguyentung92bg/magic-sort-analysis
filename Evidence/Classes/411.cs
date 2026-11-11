public class FacebookLoginHandler : IService, IInitializable, IDisposable // TypeDefIndex: 411
{
	// Fields
	private FacebookLoginService _facebookLoginService; // 0x10
	private IPlayerService _playerService; // 0x18
	private ProfileSpriteService _profileSpriteService; // 0x20
	private TaskCompletionSource<FacebookLoginResponseModel> _facebookSignInTaskCompletionSource; // 0x28

	// Methods

	// RVA: 0x3DF07B8 Offset: 0x3DF07B8 VA: 0x3DF07B8
	public void .ctor(FacebookLoginService facebookLoginService, IPlayerService playerService, ProfileSpriteService profileSpriteService) { }

	// RVA: 0x3DF0818 Offset: 0x3DF0818 VA: 0x3DF0818 Slot: 4
	public void Initialize() { }

	// RVA: 0x3DF08FC Offset: 0x3DF08FC VA: 0x3DF08FC Slot: 5
	public void Dispose() { }

	[AsyncStateMachine(typeof(FacebookLoginHandler.<SignIn>d__7))]
	// RVA: 0x3DF09E0 Offset: 0x3DF09E0 VA: 0x3DF09E0
	public Task SignIn() { }

	[AsyncStateMachine(typeof(FacebookLoginHandler.<SignInFacebookAsync>d__8))]
	// RVA: 0x3DF0ACC Offset: 0x3DF0ACC VA: 0x3DF0ACC
	private Task SignInFacebookAsync() { }

	// RVA: 0x3DF0BB8 Offset: 0x3DF0BB8 VA: 0x3DF0BB8
	private void OnSignedIn(FacebookLoginResponseModel result) { }

	[AsyncStateMachine(typeof(FacebookLoginHandler.<HandleFacebookLoginResponse>d__10))]
	// RVA: 0x3DF0C18 Offset: 0x3DF0C18 VA: 0x3DF0C18
	private Task HandleFacebookLoginResponse(FacebookLoginResponseModel responseModel) { }

	[AsyncStateMachine(typeof(FacebookLoginHandler.<SyncBackendWithFacebookId>d__11))]
	// RVA: 0x3DF0D1C Offset: 0x3DF0D1C VA: 0x3DF0D1C
	private Task<FacebookLoginResultPopupArguments> SyncBackendWithFacebookId(string id, string imageUrl, string name, List<string> friends) { }

	[AsyncStateMachine(typeof(FacebookLoginHandler.<SignOut>d__12))]
	// RVA: 0x3DF0E8C Offset: 0x3DF0E8C VA: 0x3DF0E8C
	public Task SignOut() { }
}

// Namespace: 
[CompilerGenerated]