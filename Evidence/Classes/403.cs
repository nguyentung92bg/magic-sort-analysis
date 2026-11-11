public class AppleLoginService : IService, IInitializable, IDisposable, IFrameUpdate // TypeDefIndex: 403
{
	// Fields
	private const string SaveAuthenticationKey = "apple_user_authentication_data";
	private const string SavedIdentificationKey = "apple_user_identification_data";
	private AppleAuthManager _appleAuthManager; // 0x10
	private string _authorizationToken; // 0x18
	private CustomUpdater _customUpdater; // 0x20

	// Properties
	private bool PlatformSupported { get; }
	public bool CanSignIn { get; }
	private bool CanSignOut { get; }

	// Methods

	// RVA: 0x3DEEED0 Offset: 0x3DEEED0 VA: 0x3DEEED0
	private bool get_PlatformSupported() { }

	// RVA: 0x3DEB9E4 Offset: 0x3DEB9E4 VA: 0x3DEB9E4
	public bool get_CanSignIn() { }

	// RVA: 0x3DEEED8 Offset: 0x3DEEED8 VA: 0x3DEEED8
	private bool get_CanSignOut() { }

	// RVA: 0x3DEEEE0 Offset: 0x3DEEEE0 VA: 0x3DEEEE0 Slot: 4
	public void Initialize() { }

	// RVA: 0x3DEEF30 Offset: 0x3DEEF30 VA: 0x3DEEF30 Slot: 5
	public void Dispose() { }

	// RVA: 0x3DEEF34 Offset: 0x3DEEF34 VA: 0x3DEEF34 Slot: 6
	public void FrameUpdate(float elapsedSeconds) { }

	// RVA: 0x3DEEF48 Offset: 0x3DEEF48 VA: 0x3DEEF48
	private void SignInFailed() { }

	// RVA: 0x3DEEFE0 Offset: 0x3DEEFE0 VA: 0x3DEEFE0
	private void SignInCancelled() { }

	// RVA: 0x3DECDA0 Offset: 0x3DECDA0 VA: 0x3DECDA0
	public void SignIn() { }

	// RVA: 0x3DEF078 Offset: 0x3DEF078 VA: 0x3DEF078
	private bool PerformLoginUsingSavedAuthentication() { }

	// RVA: 0x3DEF534 Offset: 0x3DEF534 VA: 0x3DEF534
	private void PerformQuickLogin() { }

	// RVA: 0x3DEF2FC Offset: 0x3DEF2FC VA: 0x3DEF2FC
	private void PerformFullLogin() { }

	// RVA: 0x3DED390 Offset: 0x3DED390 VA: 0x3DED390
	public void SignOut() { }

	// RVA: 0x3DEF61C Offset: 0x3DEF61C VA: 0x3DEF61C
	private void OnAppleCredentialStateReceived(ApplePlatformUserCredentials credentials, CredentialState credentialState) { }

	// RVA: 0x3DEF854 Offset: 0x3DEF854 VA: 0x3DEF854
	private void OnAppleSigninSuccess(ICredential credential) { }

	// RVA: 0x3DEF6F8 Offset: 0x3DEF6F8 VA: 0x3DEF6F8
	private void OnAppleSigninSuccess(ApplePlatformUserCredentials credential, ApplePlatformUserIdentification identification) { }

	// RVA: 0x3DF00A8 Offset: 0x3DF00A8 VA: 0x3DF00A8
	private void OnAppleSignInFail(IAppleError error, bool isQuickLogin) { }

	// RVA: 0x3DEF83C Offset: 0x3DEF83C VA: 0x3DEF83C
	private void OnAppleSignInFail(AuthorizationErrorCode errorCode, string errorMsg, bool isQuickLogin) { }

	// RVA: 0x3DEFF10 Offset: 0x3DEFF10 VA: 0x3DEFF10
	private ApplePlatformUserIdentification TryGetSavedIdentificationData() { }

	// RVA: 0x3DEFE50 Offset: 0x3DEFE50 VA: 0x3DEFE50
	private ApplePlatformUserIdentification TryUpdateIdentificationData(IAppleIDCredential credential) { }

	// RVA: 0x3DEF434 Offset: 0x3DEF434 VA: 0x3DEF434
	private bool IsTokenExpired(long expirationTime) { }

	// RVA: 0x3DEF9AC Offset: 0x3DEF9AC VA: 0x3DEF9AC
	private bool GetTokenData(IAppleIDCredential credential, out string userId, out string token, out long expirationTime) { }

	// RVA: 0x3DF0178 Offset: 0x3DF0178 VA: 0x3DF0178
	public void .ctor() { }

	[CompilerGenerated]
	// RVA: 0x3DF0180 Offset: 0x3DF0180 VA: 0x3DF0180
	private void <PerformQuickLogin>b__18_0(IAppleError error) { }

	[CompilerGenerated]
	// RVA: 0x3DF0188 Offset: 0x3DF0188 VA: 0x3DF0188
	private void <PerformFullLogin>b__19_0(IAppleError error) { }
}

// Namespace: 
[CompilerGenerated]