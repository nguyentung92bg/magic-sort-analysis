public class ProfileFrameInfo : IEquatable<ProfileFrameInfo> // TypeDefIndex: 5118
{
	// Fields
	[CompilerGenerated]
	private string <FrameId>k__BackingField; // 0x10
	[CompilerGenerated]
	private long <ExpireTime>k__BackingField; // 0x18

	// Properties
	public string FrameId { get; set; }
	public long ExpireTime { get; set; }
	public bool IsValid { get; }
	public bool IsTimeBased { get; }
	public static ProfileFrameInfo Default { get; }

	// Methods

	[CompilerGenerated]
	// RVA: 0x1379DEC Offset: 0x1379DEC VA: 0x1379DEC
	public string get_FrameId() { }

	[CompilerGenerated]
	// RVA: 0x1379DF4 Offset: 0x1379DF4 VA: 0x1379DF4
	public void set_FrameId(string value) { }

	[CompilerGenerated]
	// RVA: 0x1379DFC Offset: 0x1379DFC VA: 0x1379DFC
	public long get_ExpireTime() { }

	[CompilerGenerated]
	// RVA: 0x1379E04 Offset: 0x1379E04 VA: 0x1379E04
	public void set_ExpireTime(long value) { }

	// RVA: 0x1379E0C Offset: 0x1379E0C VA: 0x1379E0C
	public bool get_IsValid() { }

	// RVA: 0x1379F10 Offset: 0x1379F10 VA: 0x1379F10
	public bool get_IsTimeBased() { }

	// RVA: 0x1379F20 Offset: 0x1379F20 VA: 0x1379F20
	public static ProfileFrameInfo get_Default() { }

	// RVA: 0x1379FD8 Offset: 0x1379FD8 VA: 0x1379FD8 Slot: 4
	public bool Equals(ProfileFrameInfo other) { }

	// RVA: 0x137A004 Offset: 0x137A004 VA: 0x137A004 Slot: 0
	public override bool Equals(object obj) { }

	// RVA: 0x137A11C Offset: 0x137A11C VA: 0x137A11C Slot: 2
	public override int GetHashCode() { }

	// RVA: 0x1379F78 Offset: 0x1379F78 VA: 0x1379F78
	public void .ctor() { }
}

// Namespace: Modules.Contexts.Application.Player.Scripts