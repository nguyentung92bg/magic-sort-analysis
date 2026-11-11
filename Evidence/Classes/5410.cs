public class BaseSpecializationManager // TypeDefIndex: 5410
{
	// Fields
	public string[] mSpecializations; // 0x10
	public Dictionary<string, string> mSpecializationsFallbacks; // 0x18

	// Methods

	// RVA: 0x18650D0 Offset: 0x18650D0 VA: 0x18650D0 Slot: 4
	public virtual void InitializeSpecializations() { }

	// RVA: 0x18657D4 Offset: 0x18657D4 VA: 0x18657D4 Slot: 5
	public virtual string GetCurrentSpecialization() { }

	// RVA: 0x1865830 Offset: 0x1865830 VA: 0x1865830
	private bool IsTouchInputSupported() { }

	// RVA: 0x1865838 Offset: 0x1865838 VA: 0x1865838 Slot: 6
	public virtual string GetFallbackSpecialization(string specialization) { }

	// RVA: 0x18658E0 Offset: 0x18658E0 VA: 0x18658E0
	public void .ctor() { }
}

// Namespace: I2.Loc