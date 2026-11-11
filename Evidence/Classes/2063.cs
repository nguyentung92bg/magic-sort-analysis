public class TeamsChatMessageViewModel // TypeDefIndex: 2063
{
	// Fields
	public string MessageId; // 0x10
	public string SenderId; // 0x18
	public int Type; // 0x20
	public string Text; // 0x28
	public string UserName; // 0x30
	public string AvatarId; // 0x38
	public string AvatarUrl; // 0x40
	public long CreatedAt; // 0x48
	public bool FromMe; // 0x50
	public string FrameId; // 0x58
	public string NameStyleId; // 0x60
	public int HelpCount; // 0x68
	public bool CanHelp; // 0x6C
	public int RequiredHelpCount; // 0x70
	public bool CanClaimMagicPass; // 0x74

	// Properties
	public bool HelpCompleted { get; }

	// Methods

	// RVA: 0x35A1D08 Offset: 0x35A1D08 VA: 0x35A1D08
	public bool get_HelpCompleted() { }

	// RVA: 0x35A1D1C Offset: 0x35A1D1C VA: 0x35A1D1C
	public void IncreaseHelpCount() { }

	// RVA: 0x35A1DB8 Offset: 0x35A1DB8 VA: 0x35A1DB8
	public void .ctor() { }
}

// Namespace: 
[CompilerGenerated]
[Serializable]