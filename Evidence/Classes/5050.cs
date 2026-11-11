public class LoginResponse // TypeDefIndex: 5050
{
	// Fields
	[JsonProperty("user_id")]
	public string UserId; // 0x10
	[JsonProperty("user_public_id")]
	public string UserPublicId; // 0x18
	[JsonProperty("user_name")]
	public string UserName; // 0x20
	[JsonProperty("token")]
	public string Token; // 0x28
	[JsonProperty("progress")]
	public int Progress; // 0x30
	[JsonProperty("force_fetch")]
	public bool ForceFetch; // 0x34
	[JsonProperty("country")]
	public string CountryCode; // 0x38
	[JsonProperty("deletion_state")]
	public AccountDeleteStatus DeleteStatus; // 0x40

	// Methods

	// RVA: 0x3CD89D4 Offset: 0x3CD89D4 VA: 0x3CD89D4
	public void .ctor() { }
}

// Namespace: Modules.Contexts.Application.ServerCommunication.Scripts.Login