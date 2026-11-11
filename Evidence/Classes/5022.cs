public class ChangeProfileRequestModel // TypeDefIndex: 5022
{
	// Fields
	[JsonProperty("username")]
	public string UserName; // 0x10
	[JsonProperty("image_id")]
	public string ImageId; // 0x18
	[JsonProperty("token_id")]
	public string TokenId; // 0x20
	[JsonProperty("frame_id")]
	public string FrameId; // 0x28
	[JsonProperty("name_style")]
	public string NameStyleId; // 0x30
	[JsonProperty("frame_id_expires_at")]
	public long FrameIdExpireTime; // 0x38
	[JsonProperty("name_style_expires_at")]
	public long NameStyleIdExpireTime; // 0x40

	// Methods

	// RVA: 0x3E2FBDC Offset: 0x3E2FBDC VA: 0x3E2FBDC
	public void .ctor() { }
}

// Namespace: Modules.Contexts.Application.ServerCommunication.Scripts