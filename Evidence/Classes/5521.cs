public class JSONData : JSONNode // TypeDefIndex: 5521
{
	// Fields
	private string m_Data; // 0x10

	// Properties
	public override string Value { get; set; }

	// Methods

	// RVA: 0x13A3698 Offset: 0x13A3698 VA: 0x13A3698 Slot: 9
	public override string get_Value() { }

	// RVA: 0x13A36A0 Offset: 0x13A36A0 VA: 0x13A36A0 Slot: 10
	public override void set_Value(string value) { }

	// RVA: 0x139E790 Offset: 0x139E790 VA: 0x139E790
	public void .ctor(string aData) { }

	// RVA: 0x139FD38 Offset: 0x139FD38 VA: 0x139FD38
	public void .ctor(float aData) { }

	// RVA: 0x139FCC8 Offset: 0x139FCC8 VA: 0x139FCC8
	public void .ctor(double aData) { }

	// RVA: 0x139FD00 Offset: 0x139FD00 VA: 0x139FD00
	public void .ctor(bool aData) { }

	// RVA: 0x139FC90 Offset: 0x139FC90 VA: 0x139FC90
	public void .ctor(int aData) { }

	// RVA: 0x13A36A8 Offset: 0x13A36A8 VA: 0x13A36A8 Slot: 3
	public override string ToString() { }

	// RVA: 0x13A3700 Offset: 0x13A3700 VA: 0x13A3700 Slot: 17
	public override string ToString(string aPrefix) { }

	// RVA: 0x13A3758 Offset: 0x13A3758 VA: 0x13A3758 Slot: 28
	public override void Serialize(BinaryWriter aWriter) { }
}

// Namespace: I2.Loc.SimpleJSON
[DefaultMember("Item")]