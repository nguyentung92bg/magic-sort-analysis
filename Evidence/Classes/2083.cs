public class EditTeamRequestModel : TeamCreateRequestModel // TypeDefIndex: 2083
{
	// Fields
	[CompilerGenerated]
	private string <TeamId>k__BackingField; // 0x30
	[CompilerGenerated]
	private int <Badge>k__BackingField; // 0x38
	[CompilerGenerated]
	private string <Description>k__BackingField; // 0x40
	[CompilerGenerated]
	private int <LevelRequirement>k__BackingField; // 0x48
	[CompilerGenerated]
	private bool <IsOpen>k__BackingField; // 0x4C

	// Properties
	[JsonProperty("team_id")]
	public string TeamId { get; set; }
	[JsonProperty("badge")]
	public int Badge { get; set; }
	[JsonProperty("description")]
	public string Description { get; set; }
	[JsonProperty("level_requirement")]
	public int LevelRequirement { get; set; }
	[JsonProperty("is_open_team")]
	public bool IsOpen { get; set; }

	// Methods

	[CompilerGenerated]
	// RVA: 0x35A92C8 Offset: 0x35A92C8 VA: 0x35A92C8
	public string get_TeamId() { }

	[CompilerGenerated]
	// RVA: 0x35A92D0 Offset: 0x35A92D0 VA: 0x35A92D0
	public void set_TeamId(string value) { }

	[CompilerGenerated]
	// RVA: 0x35A92D8 Offset: 0x35A92D8 VA: 0x35A92D8
	public int get_Badge() { }

	[CompilerGenerated]
	// RVA: 0x35A92E0 Offset: 0x35A92E0 VA: 0x35A92E0
	public void set_Badge(int value) { }

	[CompilerGenerated]
	// RVA: 0x35A92E8 Offset: 0x35A92E8 VA: 0x35A92E8
	public string get_Description() { }

	[CompilerGenerated]
	// RVA: 0x35A92F0 Offset: 0x35A92F0 VA: 0x35A92F0
	public void set_Description(string value) { }

	[CompilerGenerated]
	// RVA: 0x35A92F8 Offset: 0x35A92F8 VA: 0x35A92F8
	public int get_LevelRequirement() { }

	[CompilerGenerated]
	// RVA: 0x35A9300 Offset: 0x35A9300 VA: 0x35A9300
	public void set_LevelRequirement(int value) { }

	[CompilerGenerated]
	// RVA: 0x35A9308 Offset: 0x35A9308 VA: 0x35A9308
	public bool get_IsOpen() { }

	[CompilerGenerated]
	// RVA: 0x35A9310 Offset: 0x35A9310 VA: 0x35A9310
	public void set_IsOpen(bool value) { }

	// RVA: 0x35A931C Offset: 0x35A931C VA: 0x35A931C
	public void .ctor() { }
}

// Namespace: Modules.Contexts.Home.Teams.Scripts.UI