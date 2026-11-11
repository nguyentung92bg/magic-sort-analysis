public class TeamChatMessage // TypeDefIndex: 473
{
	// Fields
	[JsonProperty("user_id")]
	public string SenderId; // 0x10
	[JsonProperty("message_type")]
	public int Type; // 0x18
	[JsonProperty("message_text")]
	public string Text; // 0x20
	[JsonProperty("user_name")]
	public string UserName; // 0x28
	[JsonProperty("general_badge_id")]
	public string AvatarId; // 0x30
	[JsonProperty("image_url")]
	public string AvatarUrl; // 0x38
	[JsonProperty("frame_id")]
	public string FrameId; // 0x40
	[JsonProperty("name_style")]
	public string NameStyle; // 0x48

	// Methods

	// RVA: 0x3D25328 Offset: 0x3D25328 VA: 0x3D25328 Slot: 3
	public override string ToString() { }

	// RVA: 0x3D22A18 Offset: 0x3D22A18 VA: 0x3D22A18
	public void .ctor() { }
}

// Namespace: Modules.Infrastructure.Network.Socketv2