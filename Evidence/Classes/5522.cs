internal class JSONLazyCreator : JSONNode // TypeDefIndex: 5522
{
	// Fields
	private JSONNode m_Node; // 0x10
	private string m_Key; // 0x18

	// Properties
	public override JSONNode Item { get; set; }
	public override JSONNode Item { get; set; }
	public override int AsInt { get; set; }
	public override float AsFloat { get; set; }
	public override double AsDouble { get; set; }
	public override bool AsBool { get; set; }
	public override JSONArray AsArray { get; }
	public override JSONClass AsObject { get; }

	// Methods

	// RVA: 0x13A0B4C Offset: 0x13A0B4C VA: 0x13A0B4C
	public void .ctor(JSONNode aNode) { }

	// RVA: 0x13A1CBC Offset: 0x13A1CBC VA: 0x13A1CBC
	public void .ctor(JSONNode aNode, string aKey) { }

	// RVA: 0x13A3A28 Offset: 0x13A3A28 VA: 0x13A3A28
	private void Set(JSONNode aVal) { }

	// RVA: 0x13A3A88 Offset: 0x13A3A88 VA: 0x13A3A88 Slot: 5
	public override JSONNode get_Item(int aIndex) { }

	// RVA: 0x13A3AE8 Offset: 0x13A3AE8 VA: 0x13A3AE8 Slot: 6
	public override void set_Item(int aIndex, JSONNode value) { }

	// RVA: 0x13A3B68 Offset: 0x13A3B68 VA: 0x13A3B68 Slot: 7
	public override JSONNode get_Item(string aKey) { }

	// RVA: 0x13A3BD8 Offset: 0x13A3BD8 VA: 0x13A3BD8 Slot: 8
	public override void set_Item(string aKey, JSONNode value) { }

	// RVA: 0x13A3C60 Offset: 0x13A3C60 VA: 0x13A3C60 Slot: 12
	public override void Add(JSONNode aItem) { }

	// RVA: 0x13A3CE0 Offset: 0x13A3CE0 VA: 0x13A3CE0 Slot: 4
	public override void Add(string aKey, JSONNode aItem) { }

	// RVA: 0x13A3D68 Offset: 0x13A3D68 VA: 0x13A3D68
	public static bool op_Equality(JSONLazyCreator a, object b) { }

	// RVA: 0x13A3D80 Offset: 0x13A3D80 VA: 0x13A3D80
	public static bool op_Inequality(JSONLazyCreator a, object b) { }

	// RVA: 0x13A3D98 Offset: 0x13A3D98 VA: 0x13A3D98 Slot: 0
	public override bool Equals(object obj) { }

	// RVA: 0x13A3DB0 Offset: 0x13A3DB0 VA: 0x13A3DB0 Slot: 2
	public override int GetHashCode() { }

	// RVA: 0x13A3DB8 Offset: 0x13A3DB8 VA: 0x13A3DB8 Slot: 3
	public override string ToString() { }

	// RVA: 0x13A3DF8 Offset: 0x13A3DF8 VA: 0x13A3DF8 Slot: 17
	public override string ToString(string aPrefix) { }

	// RVA: 0x13A3E38 Offset: 0x13A3E38 VA: 0x13A3E38 Slot: 18
	public override int get_AsInt() { }

	// RVA: 0x13A3EBC Offset: 0x13A3EBC VA: 0x13A3EBC Slot: 19
	public override void set_AsInt(int value) { }

	// RVA: 0x13A3F44 Offset: 0x13A3F44 VA: 0x13A3F44 Slot: 20
	public override float get_AsFloat() { }

	// RVA: 0x13A3FC8 Offset: 0x13A3FC8 VA: 0x13A3FC8 Slot: 21
	public override void set_AsFloat(float value) { }

	// RVA: 0x13A4050 Offset: 0x13A4050 VA: 0x13A4050 Slot: 22
	public override double get_AsDouble() { }

	// RVA: 0x13A40D4 Offset: 0x13A40D4 VA: 0x13A40D4 Slot: 23
	public override void set_AsDouble(double value) { }

	// RVA: 0x13A415C Offset: 0x13A415C VA: 0x13A415C Slot: 24
	public override bool get_AsBool() { }

	// RVA: 0x13A41E0 Offset: 0x13A41E0 VA: 0x13A41E0 Slot: 25
	public override void set_AsBool(bool value) { }

	// RVA: 0x13A4268 Offset: 0x13A4268 VA: 0x13A4268 Slot: 26
	public override JSONArray get_AsArray() { }

	// RVA: 0x13A42D0 Offset: 0x13A42D0 VA: 0x13A42D0 Slot: 27
	public override JSONClass get_AsObject() { }
}

// Namespace: I2.Loc.SimpleJSON