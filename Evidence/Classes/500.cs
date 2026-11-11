public class AuthServiceLoginResponse // TypeDefIndex: 500
{
	// Fields
	public AuthServiceLoginUser user; // 0x10
	public string token; // 0x18
	public string appUpdateMethod; // 0x20
	public string appUpdateUrl; // 0x28
	public string authenticationFallback; // 0x30
	public AuthServiceProviderData socialData; // 0x38

	// Methods

	// RVA: 0x3D29BD0 Offset: 0x3D29BD0 VA: 0x3D29BD0
	public void .ctor() { }
}

// Namespace: Modules.Infrastructure.Network.Examples