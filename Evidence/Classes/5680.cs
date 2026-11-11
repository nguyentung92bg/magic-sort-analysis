public struct Int64KeyValuePair : IFlatbufferObject // TypeDefIndex: 5680
{
	// Fields
	private Table __p; // 0x0

	// Properties
	public ByteBuffer ByteBuffer { get; }
	public long Key { get; }
	public long Value { get; }

	// Methods

	// RVA: 0x1602B64 Offset: 0x1602B64 VA: 0x1602B64 Slot: 5
	public ByteBuffer get_ByteBuffer() { }

	// RVA: 0x1602B6C Offset: 0x1602B6C VA: 0x1602B6C
	public static void ValidateVersion() { }

	// RVA: 0x1602B74 Offset: 0x1602B74 VA: 0x1602B74
	public static Int64KeyValuePair GetRootAsInt64KeyValuePair(ByteBuffer _bb) { }

	// RVA: 0x1602B80 Offset: 0x1602B80 VA: 0x1602B80
	public static Int64KeyValuePair GetRootAsInt64KeyValuePair(ByteBuffer _bb, Int64KeyValuePair obj) { }

	// RVA: 0x1602C04 Offset: 0x1602C04 VA: 0x1602C04 Slot: 4
	public void __init(int _i, ByteBuffer _bb) { }

	// RVA: 0x1602BC4 Offset: 0x1602BC4 VA: 0x1602BC4
	public Int64KeyValuePair __assign(int _i, ByteBuffer _bb) { }

	// RVA: 0x1602C40 Offset: 0x1602C40 VA: 0x1602C40
	public long get_Key() { }

	// RVA: 0x1602C88 Offset: 0x1602C88 VA: 0x1602C88
	public long get_Value() { }

	// RVA: 0x1602CD0 Offset: 0x1602CD0 VA: 0x1602CD0
	public static Offset<Int64KeyValuePair> CreateInt64KeyValuePair(FlatBufferBuilder builder, long key = 0, long value = 0) { }

	// RVA: 0x1602DB8 Offset: 0x1602DB8 VA: 0x1602DB8
	public static void StartInt64KeyValuePair(FlatBufferBuilder builder) { }

	// RVA: 0x1602D48 Offset: 0x1602D48 VA: 0x1602D48
	public static void AddKey(FlatBufferBuilder builder, long key) { }

	// RVA: 0x1602D28 Offset: 0x1602D28 VA: 0x1602D28
	public static void AddValue(FlatBufferBuilder builder, long value) { }

	// RVA: 0x1602D68 Offset: 0x1602D68 VA: 0x1602D68
	public static Offset<Int64KeyValuePair> EndInt64KeyValuePair(FlatBufferBuilder builder) { }
}

// Namespace: magicsort.schemas.v1.common