public class InviteDataResponse : ReferralWebResponse // TypeDefIndex: 433
{
	// Fields
	[CompilerGenerated]
	private string <InviteLink>k__BackingField; // 0x20
	[CompilerGenerated]
	private List<ReferralRewardItem> <Rewards>k__BackingField; // 0x28

	// Properties
	[JsonProperty("invite_link")]
	public string InviteLink { get; set; }
	[JsonProperty("rewards")]
	public List<ReferralRewardItem> Rewards { get; set; }

	// Methods

	[CompilerGenerated]
	// RVA: 0x3D1A9F8 Offset: 0x3D1A9F8 VA: 0x3D1A9F8
	public string get_InviteLink() { }

	[CompilerGenerated]
	// RVA: 0x3D1AA00 Offset: 0x3D1AA00 VA: 0x3D1AA00
	public void set_InviteLink(string value) { }

	[CompilerGenerated]
	// RVA: 0x3D1AA08 Offset: 0x3D1AA08 VA: 0x3D1AA08
	public List<ReferralRewardItem> get_Rewards() { }

	[CompilerGenerated]
	// RVA: 0x3D1AA10 Offset: 0x3D1AA10 VA: 0x3D1AA10
	public void set_Rewards(List<ReferralRewardItem> value) { }

	// RVA: 0x3D1AA18 Offset: 0x3D1AA18 VA: 0x3D1AA18
	public void .ctor() { }
}

// Namespace: Modules.Infrastructure.Social