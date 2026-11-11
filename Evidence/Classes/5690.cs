public struct StringKeyValuePair : IFlatbufferObject // TypeDefIndex: 5690
{
	// Fields
	private Table __p; // 0x0

	// Properties
	public ByteBuffer ByteBuffer { get; }
	public string Key { get; }
	public string Value { get; }

	// Methods

	// RVA: 0x1605EF8 Offset: 0x1605EF8 VA: 0x1605EF8 Slot: 5
	public ByteBuffer get_ByteBuffer() { }

	// RVA: 0x1605F00 Offset: 0x1605F00 VA: 0x1605F00
	public static void ValidateVersion() { }

	// RVA: 0x1605F08 Offset: 0x1605F08 VA: 0x1605F08
	public static StringKeyValuePair GetRootAsStringKeyValuePair(ByteBuffer _bb) { }

	// RVA: 0x1605F14 Offset: 0x1605F14 VA: 0x1605F14
	public static StringKeyValuePair GetRootAsStringKeyValuePair(ByteBuffer _bb, StringKeyValuePair obj) { }

	// RVA: 0x1605F98 Offset: 0x1605F98 VA: 0x1605F98 Slot: 4
	public void __init(int _i, ByteBuffer _bb) { }

	// RVA: 0x1605F58 Offset: 0x1605F58 VA: 0x1605F58
	public StringKeyValuePair __assign(int _i, ByteBuffer _bb) { }

	// RVA: 0x1605FD4 Offset: 0x1605FD4 VA: 0x1605FD4
	public string get_Key() { }

	// RVA: 0x1606010 Offset: 0x1606010 VA: 0x1606010
	public Nullable<ArraySegment<byte>> GetKeyBytes() { }

	// RVA: 0x1606048 Offset: 0x1606048 VA: 0x1606048
	public byte[] GetKeyArray() { }

	// RVA: 0x1606094 Offset: 0x1606094 VA: 0x1606094
	public string get_Value() { }

	// RVA: 0x16060D0 Offset: 0x16060D0 VA: 0x16060D0
	public Nullable<ArraySegment<byte>> GetValueBytes() { }

	// RVA: 0x1606108 Offset: 0x1606108 VA: 0x1606108
	public byte[] GetValueArray() { }

	// RVA: 0x1606154 Offset: 0x1606154 VA: 0x1606154
	public static Offset<StringKeyValuePair> CreateStringKeyValuePair(FlatBufferBuilder builder, StringOffset keyOffset, StringOffset valueOffset) { }

	// RVA: 0x160623C Offset: 0x160623C VA: 0x160623C
	public static void StartStringKeyValuePair(FlatBufferBuilder builder) { }

	// RVA: 0x16061CC Offset: 0x16061CC VA: 0x16061CC
	public static void AddKey(FlatBufferBuilder builder, StringOffset keyOffset) { }

	// RVA: 0x16061AC Offset: 0x16061AC VA: 0x16061AC
	public static void AddValue(FlatBufferBuilder builder, StringOffset valueOffset) { }

	// RVA: 0x16061EC Offset: 0x16061EC VA: 0x16061EC
	public static Offset<StringKeyValuePair> EndStringKeyValuePair(FlatBufferBuilder builder) { }
}

// Namespace: magicsort.schemas.v1.common