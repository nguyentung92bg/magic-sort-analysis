public class FacebookSyncRequestModel // TypeDefIndex: 5024
{
	// Fields
	[JsonProperty("fb_id")]
	public string FacebookId; // 0x10
	[JsonProperty("fb_image_url")]
	public string FacebookImageUrl; // 0x18
	[JsonProperty("fb_name")]
	public string FacebookName; // 0x20
	[JsonProperty("fb_friends_ids")]
	public List<string> FriendsList; // 0x28

	// Methods

	// RVA: 0x3E2FBEC Offset: 0x3E2FBEC VA: 0x3E2FBEC
	public void .ctor() { }
}

// Namespace: Modules.Contexts.Application.ServerCommunication.Scripts