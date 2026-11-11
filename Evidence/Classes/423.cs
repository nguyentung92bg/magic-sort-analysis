public class FacebookLoginService : IService, IInitializable, IDisposable // TypeDefIndex: 423
{
	// Fields
	private static readonly string[] FBPermissions; // 0x0
	private bool _sdkInitialized; // 0x10
	private string _accessToken; // 0x18
	private string _authToken; // 0x20
	private List<string> _friendList; // 0x28

	// Properties
	public bool CanSignIn { get; }
	public bool CanSignOut { get; }

	// Methods

	// RVA: 0x3D16B2C Offset: 0x3D16B2C VA: 0x3D16B2C
	public bool get_CanSignIn() { }

	// RVA: 0x3D16B34 Offset: 0x3D16B34 VA: 0x3D16B34
	public bool get_CanSignOut() { }

	// RVA: 0x3D16B3C Offset: 0x3D16B3C VA: 0x3D16B3C Slot: 4
	public void Initialize() { }

	// RVA: 0x3D16B40 Offset: 0x3D16B40 VA: 0x3D16B40 Slot: 5
	public void Dispose() { }

	// RVA: 0x3D16B44 Offset: 0x3D16B44 VA: 0x3D16B44
	public void OnFacebookInitialized() { }

	// RVA: 0x3D16B50 Offset: 0x3D16B50 VA: 0x3D16B50
	private void UpdateAdConsent() { }

	// RVA: 0x3D16B54 Offset: 0x3D16B54 VA: 0x3D16B54
	public void SignIn() { }

	// RVA: 0x3D16DAC Offset: 0x3D16DAC VA: 0x3D16DAC
	private void PerformSDKSignIn() { }

	// RVA: 0x3D16EF4 Offset: 0x3D16EF4 VA: 0x3D16EF4
	private void OnSignedIn(ILoginResult result) { }

	// RVA: 0x3D16CC4 Offset: 0x3D16CC4 VA: 0x3D16CC4
	private void OnSignedInWithToken(string token) { }

	// RVA: 0x3D16D38 Offset: 0x3D16D38 VA: 0x3D16D38
	private void OnSignedInWithAuthToken(string token) { }

	// RVA: 0x3D17358 Offset: 0x3D17358 VA: 0x3D17358
	private void RequestUserInfoWhenAuthTokenReceive() { }

	// RVA: 0x3D173D8 Offset: 0x3D173D8 VA: 0x3D173D8
	private void CurrentProfileReceived(IProfileResult result) { }

	// RVA: 0x3D17260 Offset: 0x3D17260 VA: 0x3D17260
	private void RequestUserInfoWhenAccessTokenReceive() { }

	// RVA: 0x3D17C38 Offset: 0x3D17C38 VA: 0x3D17C38
	private void UserIdentificationReceived(IGraphResult result) { }

	// RVA: 0x3D180F4 Offset: 0x3D180F4 VA: 0x3D180F4
	private void RequestFriendsList(string id, string imageUrl, string displayName) { }

	// RVA: 0x3D18248 Offset: 0x3D18248 VA: 0x3D18248
	private void FriendsListReceived(IGraphResult result, string id, string imageUrl, string displayName) { }

	[AsyncStateMachine(typeof(FacebookLoginService.<LoadProfilePhoto>d__24))]
	// RVA: 0x3D17B64 Offset: 0x3D17B64 VA: 0x3D17B64
	private void LoadProfilePhoto(string url) { }

	[AsyncStateMachine(typeof(FacebookLoginService.<LoadAndSaveImage>d__25))]
	// RVA: 0x3D187FC Offset: 0x3D187FC VA: 0x3D187FC
	private Task LoadAndSaveImage(string url) { }

	[AsyncStateMachine(typeof(FacebookLoginService.<LoadImageAsync>d__26))]
	// RVA: 0x3D18900 Offset: 0x3D18900 VA: 0x3D18900
	public Task<Texture2D> LoadImageAsync(string url) { }

	// RVA: 0x3D18A10 Offset: 0x3D18A10 VA: 0x3D18A10
	private void OnRequestCompleted(AsyncOperation obj) { }

	// RVA: 0x3D1799C Offset: 0x3D1799C VA: 0x3D1799C
	private void ProcessAPIError(IResult result) { }

	// RVA: 0x3D18A14 Offset: 0x3D18A14 VA: 0x3D18A14
	public void SignOut() { }

	// RVA: 0x3D18AA8 Offset: 0x3D18AA8 VA: 0x3D18AA8
	public List<string> GetFacebookFriends() { }

	// RVA: 0x3D18B10 Offset: 0x3D18B10 VA: 0x3D18B10
	public void .ctor() { }

	// RVA: 0x3D18B18 Offset: 0x3D18B18 VA: 0x3D18B18
	private static void .cctor() { }
}

// Namespace: 
[CompilerGenerated]