public struct EmptyContent : IFlatbufferObject // TypeDefIndex: 5573
{
	// Fields
	private Table __p; // 0x0

	// Properties
	public ByteBuffer ByteBuffer { get; }

	// Methods

	// RVA: 0x1440B84 Offset: 0x1440B84 VA: 0x1440B84 Slot: 5
	public ByteBuffer get_ByteBuffer() { }

	// RVA: 0x1440B8C Offset: 0x1440B8C VA: 0x1440B8C
	public static void ValidateVersion() { }

	// RVA: 0x1440B94 Offset: 0x1440B94 VA: 0x1440B94
	public static EmptyContent GetRootAsEmptyContent(ByteBuffer _bb) { }

	// RVA: 0x1440BA0 Offset: 0x1440BA0 VA: 0x1440BA0
	public static EmptyContent GetRootAsEmptyContent(ByteBuffer _bb, EmptyContent obj) { }

	// RVA: 0x1440C24 Offset: 0x1440C24 VA: 0x1440C24 Slot: 4
	public void __init(int _i, ByteBuffer _bb) { }

	// RVA: 0x1440BE4 Offset: 0x1440BE4 VA: 0x1440BE4
	public EmptyContent __assign(int _i, ByteBuffer _bb) { }

	// RVA: 0x1440C60 Offset: 0x1440C60 VA: 0x1440C60
	public static void StartEmptyContent(FlatBufferBuilder builder) { }

	// RVA: 0x1440C78 Offset: 0x1440C78 VA: 0x1440C78
	public static Offset<EmptyContent> EndEmptyContent(FlatBufferBuilder builder) { }
}

// Namespace: magicsort.schemas.v1.message