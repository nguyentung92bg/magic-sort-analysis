public class TeamsWebResponse // TypeDefIndex: 2078
{
	// Fields
	[JsonIgnore]
	public static TeamsWebResponse UnkownFail; // 0x0
	[CompilerGenerated]
	private int <ErrorCode>k__BackingField; // 0x10
	[CompilerGenerated]
	private string <ErrorMessage>k__BackingField; // 0x18

	// Properties
	[JsonProperty("custom_error")]
	public int ErrorCode { get; set; }
	[JsonProperty("message")]
	public string ErrorMessage { get; set; }

	// Methods

	[CompilerGenerated]
	// RVA: 0x35A9110 Offset: 0x35A9110 VA: 0x35A9110
	public int get_ErrorCode() { }

	[CompilerGenerated]
	// RVA: 0x35A9118 Offset: 0x35A9118 VA: 0x35A9118
	public void set_ErrorCode(int value) { }

	[CompilerGenerated]
	// RVA: 0x35A9120 Offset: 0x35A9120 VA: 0x35A9120
	public string get_ErrorMessage() { }

	[CompilerGenerated]
	// RVA: 0x35A9128 Offset: 0x35A9128 VA: 0x35A9128
	public void set_ErrorMessage(string value) { }

	// RVA: 0x35A9130 Offset: 0x35A9130 VA: 0x35A9130
	public void .ctor() { }

	// RVA: 0x35A9138 Offset: 0x35A9138 VA: 0x35A9138
	private static void .cctor() { }
}

// Namespace: Modules.Contexts.Home.Teams.Scripts.UI