public struct OBIMObject : IFlatbufferObject // TypeDefIndex: 5667
{
	// Fields
	private Table __p; // 0x0

	// Properties
	public ByteBuffer ByteBuffer { get; }
	public int Id { get; }
	public int TA { get; }
	public int CI { get; }

	// Methods

	// RVA: 0x16003E0 Offset: 0x16003E0 VA: 0x16003E0 Slot: 5
	public ByteBuffer get_ByteBuffer() { }

	// RVA: 0x16003E8 Offset: 0x16003E8 VA: 0x16003E8
	public static void ValidateVersion() { }

	// RVA: 0x16003F0 Offset: 0x16003F0 VA: 0x16003F0
	public static OBIMObject GetRootAsOBIMObject(ByteBuffer _bb) { }

	// RVA: 0x16003FC Offset: 0x16003FC VA: 0x16003FC
	public static OBIMObject GetRootAsOBIMObject(ByteBuffer _bb, OBIMObject obj) { }

	// RVA: 0x1600480 Offset: 0x1600480 VA: 0x1600480 Slot: 4
	public void __init(int _i, ByteBuffer _bb) { }

	// RVA: 0x1600440 Offset: 0x1600440 VA: 0x1600440
	public OBIMObject __assign(int _i, ByteBuffer _bb) { }

	// RVA: 0x16004BC Offset: 0x16004BC VA: 0x16004BC
	public int get_Id() { }

	// RVA: 0x1600500 Offset: 0x1600500 VA: 0x1600500
	public int get_TA() { }

	// RVA: 0x1600544 Offset: 0x1600544 VA: 0x1600544
	public int get_CI() { }

	// RVA: 0x1600588 Offset: 0x1600588 VA: 0x1600588
	public static Offset<OBIMObject> CreateOBIMObject(FlatBufferBuilder builder, int Id = 0, int TA = 0, int CI = 0) { }

	// RVA: 0x16006A8 Offset: 0x16006A8 VA: 0x16006A8
	public static void StartOBIMObject(FlatBufferBuilder builder) { }

	// RVA: 0x1600638 Offset: 0x1600638 VA: 0x1600638
	public static void AddId(FlatBufferBuilder builder, int id) { }

	// RVA: 0x1600618 Offset: 0x1600618 VA: 0x1600618
	public static void AddTA(FlatBufferBuilder builder, int tA) { }

	// RVA: 0x16005F8 Offset: 0x16005F8 VA: 0x16005F8
	public static void AddCI(FlatBufferBuilder builder, int cI) { }

	// RVA: 0x1600658 Offset: 0x1600658 VA: 0x1600658
	public static Offset<OBIMObject> EndOBIMObject(FlatBufferBuilder builder) { }
}

// Namespace: magicsort.schemas.v1.level