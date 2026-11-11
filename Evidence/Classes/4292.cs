public class FriendsWebResponse // TypeDefIndex: 4292
{
	// Fields
	[JsonIgnore]
	public static readonly FriendsWebResponse UnknownFail; // 0x0
	[CompilerGenerated]
	private int <ErrorCode>k__BackingField; // 0x10
	[CompilerGenerated]
	private string <Message>k__BackingField; // 0x18

	// Properties
	[JsonIgnore]
	public bool IsOk { get; }
	[JsonProperty("custom_error")]
	public int ErrorCode { get; set; }
	[JsonProperty("message")]
	public string Message { get; set; }

	// Methods

	// RVA: 0x1C748A8 Offset: 0x1C748A8 VA: 0x1C748A8
	public bool get_IsOk() { }

	[CompilerGenerated]
	// RVA: 0x1C748B8 Offset: 0x1C748B8 VA: 0x1C748B8
	public int get_ErrorCode() { }

	[CompilerGenerated]
	// RVA: 0x1C748C0 Offset: 0x1C748C0 VA: 0x1C748C0
	public void set_ErrorCode(int value) { }

	[CompilerGenerated]
	// RVA: 0x1C748C8 Offset: 0x1C748C8 VA: 0x1C748C8
	public string get_Message() { }

	[CompilerGenerated]
	// RVA: 0x1C748D0 Offset: 0x1C748D0 VA: 0x1C748D0
	public void set_Message(string value) { }

	// RVA: 0x1C748D8 Offset: 0x1C748D8 VA: 0x1C748D8
	public void .ctor() { }

	// RVA: 0x1C748E0 Offset: 0x1C748E0 VA: 0x1C748E0
	private static void .cctor() { }
}

// Namespace: Modules.Contexts.Home.Friends.Scripts