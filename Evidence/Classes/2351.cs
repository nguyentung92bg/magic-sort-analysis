public class TeamArenaUserData // TypeDefIndex: 2351
{
	// Fields
	[JsonProperty("userPublicId")]
	public string PublicId; // 0x10
	[JsonProperty("userName")]
	public string Name; // 0x18
	[JsonProperty("score")]
	public int Score; // 0x20
	[JsonProperty("fbImageUrl")]
	public string AvatarUrl; // 0x28
	[JsonProperty("imageID")]
	public string AvatarId; // 0x30
	[JsonProperty("tokenID")]
	public string TokenId; // 0x38
	[JsonProperty("frameID")]
	public string FrameId; // 0x40
	[JsonProperty("nameStyle")]
	public string NameStyleId; // 0x48
	[JsonProperty("isMe")]
	public bool IsMe; // 0x50

	// Methods

	// RVA: 0x2DE405C Offset: 0x2DE405C VA: 0x2DE405C
	public void .ctor() { }
}

// Namespace: Modules.Contexts.Home.TeamArena