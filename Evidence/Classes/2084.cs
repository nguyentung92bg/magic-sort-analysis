public class TeamReplyJoinRequestModel // TypeDefIndex: 2084
{
	// Fields
	[CompilerGenerated]
	private string <TeamId>k__BackingField; // 0x10
	[CompilerGenerated]
	private string <RequesterId>k__BackingField; // 0x18
	[CompilerGenerated]
	private bool <IsAccepted>k__BackingField; // 0x20

	// Properties
	[JsonProperty("team_id")]
	public string TeamId { get; set; }
	[JsonProperty("requester_id")]
	public string RequesterId { get; set; }
	[JsonProperty("is_accepted")]
	public bool IsAccepted { get; set; }

	// Methods

	[CompilerGenerated]
	// RVA: 0x35A9324 Offset: 0x35A9324 VA: 0x35A9324
	public string get_TeamId() { }

	[CompilerGenerated]
	// RVA: 0x35A932C Offset: 0x35A932C VA: 0x35A932C
	public void set_TeamId(string value) { }

	[CompilerGenerated]
	// RVA: 0x35A9334 Offset: 0x35A9334 VA: 0x35A9334
	public string get_RequesterId() { }

	[CompilerGenerated]
	// RVA: 0x35A933C Offset: 0x35A933C VA: 0x35A933C
	public void set_RequesterId(string value) { }

	[CompilerGenerated]
	// RVA: 0x35A9344 Offset: 0x35A9344 VA: 0x35A9344
	public bool get_IsAccepted() { }

	[CompilerGenerated]
	// RVA: 0x35A934C Offset: 0x35A934C VA: 0x35A934C
	public void set_IsAccepted(bool value) { }

	// RVA: 0x35A9358 Offset: 0x35A9358 VA: 0x35A9358
	public void .ctor() { }
}

// Namespace: Modules.Contexts.Home.Teams.Scripts.UI