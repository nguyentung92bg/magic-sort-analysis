public class JSONNode // TypeDefIndex: 5513
{
	// Properties
	public virtual JSONNode Item { get; set; }
	public virtual JSONNode Item { get; set; }
	public virtual string Value { get; set; }
	public virtual int Count { get; }
	public virtual IEnumerable<JSONNode> Childs { get; }
	public IEnumerable<JSONNode> DeepChilds { get; }
	public virtual int AsInt { get; set; }
	public virtual float AsFloat { get; set; }
	public virtual double AsDouble { get; set; }
	public virtual bool AsBool { get; set; }
	public virtual JSONArray AsArray { get; }
	public virtual JSONClass AsObject { get; }

	// Methods

	// RVA: 0x139E0EC Offset: 0x139E0EC VA: 0x139E0EC Slot: 4
	public virtual void Add(string aKey, JSONNode aItem) { }

	// RVA: 0x139E0F0 Offset: 0x139E0F0 VA: 0x139E0F0 Slot: 5
	public virtual JSONNode get_Item(int aIndex) { }

	// RVA: 0x139E0F8 Offset: 0x139E0F8 VA: 0x139E0F8 Slot: 6
	public virtual void set_Item(int aIndex, JSONNode value) { }

	// RVA: 0x139E0FC Offset: 0x139E0FC VA: 0x139E0FC Slot: 7
	public virtual JSONNode get_Item(string aKey) { }

	// RVA: 0x139E104 Offset: 0x139E104 VA: 0x139E104 Slot: 8
	public virtual void set_Item(string aKey, JSONNode value) { }

	// RVA: 0x139E108 Offset: 0x139E108 VA: 0x139E108 Slot: 9
	public virtual string get_Value() { }

	// RVA: 0x139E148 Offset: 0x139E148 VA: 0x139E148 Slot: 10
	public virtual void set_Value(string value) { }

	// RVA: 0x139E14C Offset: 0x139E14C VA: 0x139E14C Slot: 11
	public virtual int get_Count() { }

	// RVA: 0x139E154 Offset: 0x139E154 VA: 0x139E154 Slot: 12
	public virtual void Add(JSONNode aItem) { }

	// RVA: 0x139E1B4 Offset: 0x139E1B4 VA: 0x139E1B4 Slot: 13
	public virtual JSONNode Remove(string aKey) { }

	// RVA: 0x139E1BC Offset: 0x139E1BC VA: 0x139E1BC Slot: 14
	public virtual JSONNode Remove(int aIndex) { }

	// RVA: 0x139E1C4 Offset: 0x139E1C4 VA: 0x139E1C4 Slot: 15
	public virtual JSONNode Remove(JSONNode aNode) { }

	[IteratorStateMachine(typeof(JSONNode.<get_Childs>d__17))]
	// RVA: 0x139E1CC Offset: 0x139E1CC VA: 0x139E1CC Slot: 16
	public virtual IEnumerable<JSONNode> get_Childs() { }

	[IteratorStateMachine(typeof(JSONNode.<get_DeepChilds>d__19))]
	// RVA: 0x139E270 Offset: 0x139E270 VA: 0x139E270
	public IEnumerable<JSONNode> get_DeepChilds() { }

	// RVA: 0x139E328 Offset: 0x139E328 VA: 0x139E328 Slot: 3
	public override string ToString() { }

	// RVA: 0x139E368 Offset: 0x139E368 VA: 0x139E368 Slot: 17
	public virtual string ToString(string aPrefix) { }

	// RVA: 0x139E3A8 Offset: 0x139E3A8 VA: 0x139E3A8 Slot: 18
	public virtual int get_AsInt() { }

	// RVA: 0x139E3DC Offset: 0x139E3DC VA: 0x139E3DC Slot: 19
	public virtual void set_AsInt(int value) { }

	// RVA: 0x139E418 Offset: 0x139E418 VA: 0x139E418 Slot: 20
	public virtual float get_AsFloat() { }

	// RVA: 0x139E450 Offset: 0x139E450 VA: 0x139E450 Slot: 21
	public virtual void set_AsFloat(float value) { }

	// RVA: 0x139E48C Offset: 0x139E48C VA: 0x139E48C Slot: 22
	public virtual double get_AsDouble() { }

	// RVA: 0x139E4C4 Offset: 0x139E4C4 VA: 0x139E4C4 Slot: 23
	public virtual void set_AsDouble(double value) { }

	// RVA: 0x139E500 Offset: 0x139E500 VA: 0x139E500 Slot: 24
	public virtual bool get_AsBool() { }

	// RVA: 0x139E5B8 Offset: 0x139E5B8 VA: 0x139E5B8 Slot: 25
	public virtual void set_AsBool(bool value) { }

	// RVA: 0x139E630 Offset: 0x139E630 VA: 0x139E630 Slot: 26
	public virtual JSONArray get_AsArray() { }

	// RVA: 0x139E6A8 Offset: 0x139E6A8 VA: 0x139E6A8 Slot: 27
	public virtual JSONClass get_AsObject() { }

	// RVA: 0x139E720 Offset: 0x139E720 VA: 0x139E720
	public static JSONNode op_Implicit(string s) { }

	// RVA: 0x139E7C0 Offset: 0x139E7C0 VA: 0x139E7C0
	public static string op_Implicit(JSONNode d) { }

	// RVA: 0x139E7FC Offset: 0x139E7FC VA: 0x139E7FC
	public static bool op_Equality(JSONNode a, object b) { }

	// RVA: 0x139E884 Offset: 0x139E884 VA: 0x139E884
	public static bool op_Inequality(JSONNode a, object b) { }

	// RVA: 0x139E89C Offset: 0x139E89C VA: 0x139E89C Slot: 0
	public override bool Equals(object obj) { }

	// RVA: 0x139E8A8 Offset: 0x139E8A8 VA: 0x139E8A8 Slot: 2
	public override int GetHashCode() { }

	// RVA: 0x139E8B0 Offset: 0x139E8B0 VA: 0x139E8B0
	internal static string Escape(string aText) { }

	// RVA: 0x139EAA0 Offset: 0x139EAA0 VA: 0x139EAA0
	public static JSONNode Parse(string aJSON) { }

	// RVA: 0x139F3B4 Offset: 0x139F3B4 VA: 0x139F3B4 Slot: 28
	public virtual void Serialize(BinaryWriter aWriter) { }

	// RVA: 0x139F3B8 Offset: 0x139F3B8 VA: 0x139F3B8
	public void SaveToStream(Stream aData) { }

	// RVA: 0x139F438 Offset: 0x139F438 VA: 0x139F438
	public void SaveToCompressedStream(Stream aData) { }

	// RVA: 0x139F488 Offset: 0x139F488 VA: 0x139F488
	public void SaveToCompressedFile(string aFileName) { }

	// RVA: 0x139F4D8 Offset: 0x139F4D8 VA: 0x139F4D8
	public string SaveToCompressedBase64() { }

	// RVA: 0x139F528 Offset: 0x139F528 VA: 0x139F528
	public void SaveToFile(string aFileName) { }

	// RVA: 0x139F6F8 Offset: 0x139F6F8 VA: 0x139F6F8
	public string SaveToBase64() { }

	// RVA: 0x139F8F8 Offset: 0x139F8F8 VA: 0x139F8F8
	public static JSONNode Deserialize(BinaryReader aReader) { }

	// RVA: 0x139FD70 Offset: 0x139FD70 VA: 0x139FD70
	public static JSONNode LoadFromCompressedFile(string aFileName) { }

	// RVA: 0x139FDC0 Offset: 0x139FDC0 VA: 0x139FDC0
	public static JSONNode LoadFromCompressedStream(Stream aData) { }

	// RVA: 0x139FE10 Offset: 0x139FE10 VA: 0x139FE10
	public static JSONNode LoadFromCompressedBase64(string aBase64) { }

	// RVA: 0x139FE60 Offset: 0x139FE60 VA: 0x139FE60
	public static JSONNode LoadFromStream(Stream aData) { }

	// RVA: 0x139FFF4 Offset: 0x139FFF4 VA: 0x139FFF4
	public static JSONNode LoadFromFile(string aFileName) { }

	// RVA: 0x13A0170 Offset: 0x13A0170 VA: 0x13A0170
	public static JSONNode LoadFromBase64(string aBase64) { }

	// RVA: 0x13A0224 Offset: 0x13A0224 VA: 0x13A0224
	public void .ctor() { }
}

// Namespace: 
[CompilerGenerated]