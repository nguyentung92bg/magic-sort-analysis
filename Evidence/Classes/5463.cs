public abstract class ILocalizeTargetDescriptor // TypeDefIndex: 5463
{
	// Fields
	public string Name; // 0x10
	public int Priority; // 0x18

	// Methods

	// RVA: -1 Offset: -1 Slot: 4
	public abstract bool CanLocalize(Localize cmp);

	// RVA: -1 Offset: -1 Slot: 5
	public abstract ILocalizeTarget CreateTarget(Localize cmp);

	// RVA: -1 Offset: -1 Slot: 6
	public abstract Type GetTargetType();

	// RVA: 0x13924EC Offset: 0x13924EC VA: 0x13924EC
	protected void .ctor() { }
}

// Namespace: I2.Loc