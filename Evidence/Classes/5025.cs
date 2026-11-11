public class AppleSyncResponse // TypeDefIndex: 5025
{
	// Fields
	[JsonProperty("user_id")]
	public string UserId; // 0x10
	[JsonProperty("username")]
	public string UserName; // 0x18
	[JsonProperty("progress")]
	public int Progress; // 0x20
	[JsonProperty("segment")]
	public string Segment; // 0x28

	// Methods

	// RVA: 0x3E2FBF4 Offset: 0x3E2FBF4 VA: 0x3E2FBF4
	public void .ctor() { }
}

// Namespace: Modules.Contexts.Application.ServerCommunication.Scripts