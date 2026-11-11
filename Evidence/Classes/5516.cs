public class JSONArray : JSONNode, IEnumerable // TypeDefIndex: 5516
{
	// Fields
	private List<JSONNode> m_List; // 0x10

	// Properties
	public override JSONNode Item { get; set; }
	public override JSONNode Item { get; set; }
	public override int Count { get; }
	public override IEnumerable<JSONNode> Childs { get; }

	// Methods

	// RVA: 0x13A0A9C Offset: 0x13A0A9C VA: 0x13A0A9C Slot: 5
	public override JSONNode get_Item(int aIndex) { }

	// RVA: 0x13A0B8C Offset: 0x13A0B8C VA: 0x13A0B8C Slot: 6
	public override void set_Item(int aIndex, JSONNode value) { }

	// RVA: 0x13A0C9C Offset: 0x13A0C9C VA: 0x13A0C9C Slot: 7
	public override JSONNode get_Item(string aKey) { }

	// RVA: 0x13A0CFC Offset: 0x13A0CFC VA: 0x13A0CFC Slot: 8
	public override void set_Item(string aKey, JSONNode value) { }

	// RVA: 0x13A0DAC Offset: 0x13A0DAC VA: 0x13A0DAC Slot: 11
	public override int get_Count() { }

	// RVA: 0x13A0DF4 Offset: 0x13A0DF4 VA: 0x13A0DF4 Slot: 4
	public override void Add(string aKey, JSONNode aItem) { }

	// RVA: 0x13A0EA4 Offset: 0x13A0EA4 VA: 0x13A0EA4 Slot: 14
	public override JSONNode Remove(int aIndex) { }

	// RVA: 0x13A0F58 Offset: 0x13A0F58 VA: 0x13A0F58 Slot: 15
	public override JSONNode Remove(JSONNode aNode) { }

	[IteratorStateMachine(typeof(JSONArray.<get_Childs>d__13))]
	// RVA: 0x13A0FB8 Offset: 0x13A0FB8 VA: 0x13A0FB8 Slot: 16
	public override IEnumerable<JSONNode> get_Childs() { }

	[IteratorStateMachine(typeof(JSONArray.<GetEnumerator>d__14))]
	// RVA: 0x13A1070 Offset: 0x13A1070 VA: 0x13A1070 Slot: 29
	public IEnumerator GetEnumerator() { }

	// RVA: 0x13A110C Offset: 0x13A110C VA: 0x13A110C Slot: 3
	public override string ToString() { }

	// RVA: 0x13A1324 Offset: 0x13A1324 VA: 0x13A1324 Slot: 17
	public override string ToString(string aPrefix) { }

	// RVA: 0x13A15A4 Offset: 0x13A15A4 VA: 0x13A15A4 Slot: 28
	public override void Serialize(BinaryWriter aWriter) { }

	// RVA: 0x139F32C Offset: 0x139F32C VA: 0x139F32C
	public void .ctor() { }
}

// Namespace: 
[CompilerGenerated]