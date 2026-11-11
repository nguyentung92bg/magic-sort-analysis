public class ProfileNameStyleInfo : IEquatable<ProfileNameStyleInfo> // TypeDefIndex: 5119
{
	// Fields
	[CompilerGenerated]
	private string <NameStyleId>k__BackingField; // 0x10
	[CompilerGenerated]
	private long <ExpireTime>k__BackingField; // 0x18

	// Properties
	public string NameStyleId { get; set; }
	public long ExpireTime { get; set; }
	public bool IsValid { get; }
	public bool IsTimeBased { get; }
	public static ProfileNameStyleInfo Default { get; }

	// Methods

	[CompilerGenerated]
	// RVA: 0x137A18C Offset: 0x137A18C VA: 0x137A18C
	public string get_NameStyleId() { }

	[CompilerGenerated]
	// RVA: 0x137A194 Offset: 0x137A194 VA: 0x137A194
	public void set_NameStyleId(string value) { }

	[CompilerGenerated]
	// RVA: 0x137A19C Offset: 0x137A19C VA: 0x137A19C
	public long get_ExpireTime() { }

	[CompilerGenerated]
	// RVA: 0x137A1A4 Offset: 0x137A1A4 VA: 0x137A1A4
	public void set_ExpireTime(long value) { }

	// RVA: 0x137A1AC Offset: 0x137A1AC VA: 0x137A1AC
	public bool get_IsValid() { }

	// RVA: 0x137A2B0 Offset: 0x137A2B0 VA: 0x137A2B0
	public bool get_IsTimeBased() { }

	// RVA: 0x137A2C0 Offset: 0x137A2C0 VA: 0x137A2C0
	public static ProfileNameStyleInfo get_Default() { }

	// RVA: 0x137A378 Offset: 0x137A378 VA: 0x137A378 Slot: 4
	public bool Equals(ProfileNameStyleInfo other) { }

	// RVA: 0x137A3A4 Offset: 0x137A3A4 VA: 0x137A3A4 Slot: 0
	public override bool Equals(object obj) { }

	// RVA: 0x137A4BC Offset: 0x137A4BC VA: 0x137A4BC Slot: 2
	public override int GetHashCode() { }

	// RVA: 0x137A318 Offset: 0x137A318 VA: 0x137A318
	public void .ctor() { }
}

// Namespace: Modules.Contexts.Application.Notification.Scripts
[CreateAssetMenu(fileName = "NotificationConfig", menuName = "Configs/NotificationConfig")]