public class JSONClass : JSONNode, IEnumerable // TypeDefIndex: 5520
{
	// Fields
	private Dictionary<string, JSONNode> m_Dict; // 0x10

	// Properties
	public override JSONNode Item { get; set; }
	public override JSONNode Item { get; set; }
	public override int Count { get; }
	public override IEnumerable<JSONNode> Childs { get; }

	// Methods

	// RVA: 0x13A1BF8 Offset: 0x13A1BF8 VA: 0x13A1BF8 Slot: 7
	public override JSONNode get_Item(string aKey) { }

	// RVA: 0x13A1D00 Offset: 0x13A1D00 VA: 0x13A1D00 Slot: 8
	public override void set_Item(string aKey, JSONNode value) { }

	// RVA: 0x13A1DCC Offset: 0x13A1DCC VA: 0x13A1DCC Slot: 5
	public override JSONNode get_Item(int aIndex) { }

	// RVA: 0x13A1E6C Offset: 0x13A1E6C VA: 0x13A1E6C Slot: 6
	public override void set_Item(int aIndex, JSONNode value) { }

	// RVA: 0x13A1F48 Offset: 0x13A1F48 VA: 0x13A1F48 Slot: 11
	public override int get_Count() { }

	// RVA: 0x13A1F98 Offset: 0x13A1F98 VA: 0x13A1F98 Slot: 4
	public override void Add(string aKey, JSONNode aItem) { }

	// RVA: 0x13A20AC Offset: 0x13A20AC VA: 0x13A20AC Slot: 13
	public override JSONNode Remove(string aKey) { }

	// RVA: 0x13A2170 Offset: 0x13A2170 VA: 0x13A2170 Slot: 14
	public override JSONNode Remove(int aIndex) { }

	// RVA: 0x13A224C Offset: 0x13A224C VA: 0x13A224C Slot: 15
	public override JSONNode Remove(JSONNode aNode) { }

	[IteratorStateMachine(typeof(JSONClass.<get_Childs>d__14))]
	// RVA: 0x13A2424 Offset: 0x13A2424 VA: 0x13A2424 Slot: 16
	public override IEnumerable<JSONNode> get_Childs() { }

	[IteratorStateMachine(typeof(JSONClass.<GetEnumerator>d__15))]
	// RVA: 0x13A24DC Offset: 0x13A24DC VA: 0x13A24DC Slot: 29
	public IEnumerator GetEnumerator() { }

	// RVA: 0x13A2578 Offset: 0x13A2578 VA: 0x13A2578 Slot: 3
	public override string ToString() { }

	// RVA: 0x13A29A8 Offset: 0x13A29A8 VA: 0x13A29A8 Slot: 17
	public override string ToString(string aPrefix) { }

	// RVA: 0x13A2E6C Offset: 0x13A2E6C VA: 0x13A2E6C Slot: 28
	public override void Serialize(BinaryWriter aWriter) { }

	// RVA: 0x139F238 Offset: 0x139F238 VA: 0x139F238
	public void .ctor() { }
}

// Namespace: I2.Loc.SimpleJSON