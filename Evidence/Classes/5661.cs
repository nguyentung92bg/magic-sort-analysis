public struct EditorJSON : IFlatbufferObject // TypeDefIndex: 5661
{
	// Fields
	private Table __p; // 0x0

	// Properties
	public ByteBuffer ByteBuffer { get; }
	public int UCCC { get; }
	public int CC { get; }
	public string LId { get; }
	public int BLength { get; }

	// Methods

	// RVA: 0x174625C Offset: 0x174625C VA: 0x174625C Slot: 5
	public ByteBuffer get_ByteBuffer() { }

	// RVA: 0x1746264 Offset: 0x1746264 VA: 0x1746264
	public static void ValidateVersion() { }

	// RVA: 0x174626C Offset: 0x174626C VA: 0x174626C
	public static EditorJSON GetRootAsEditorJSON(ByteBuffer _bb) { }

	// RVA: 0x1746278 Offset: 0x1746278 VA: 0x1746278
	public static EditorJSON GetRootAsEditorJSON(ByteBuffer _bb, EditorJSON obj) { }

	// RVA: 0x17462FC Offset: 0x17462FC VA: 0x17462FC Slot: 4
	public void __init(int _i, ByteBuffer _bb) { }

	// RVA: 0x17462BC Offset: 0x17462BC VA: 0x17462BC
	public EditorJSON __assign(int _i, ByteBuffer _bb) { }

	// RVA: 0x1746338 Offset: 0x1746338 VA: 0x1746338
	public int get_UCCC() { }

	// RVA: 0x174637C Offset: 0x174637C VA: 0x174637C
	public int get_CC() { }

	// RVA: 0x17463C0 Offset: 0x17463C0 VA: 0x17463C0
	public string get_LId() { }

	// RVA: 0x17463FC Offset: 0x17463FC VA: 0x17463FC
	public Nullable<ArraySegment<byte>> GetLIdBytes() { }

	// RVA: 0x1746434 Offset: 0x1746434 VA: 0x1746434
	public byte[] GetLIdArray() { }

	// RVA: 0x1746480 Offset: 0x1746480 VA: 0x1746480
	public Nullable<EditorBottle> B(int j) { }

	// RVA: 0x1746554 Offset: 0x1746554 VA: 0x1746554
	public int get_BLength() { }

	// RVA: 0x1746588 Offset: 0x1746588 VA: 0x1746588
	public static Offset<EditorJSON> CreateEditorJSON(FlatBufferBuilder builder, int UCCC = 0, int CC = 0, StringOffset LIdOffset, VectorOffset BOffset) { }

	// RVA: 0x17466D8 Offset: 0x17466D8 VA: 0x17466D8
	public static void StartEditorJSON(FlatBufferBuilder builder) { }

	// RVA: 0x1746668 Offset: 0x1746668 VA: 0x1746668
	public static void AddUCCC(FlatBufferBuilder builder, int uCCC) { }

	// RVA: 0x1746648 Offset: 0x1746648 VA: 0x1746648
	public static void AddCC(FlatBufferBuilder builder, int cC) { }

	// RVA: 0x1746628 Offset: 0x1746628 VA: 0x1746628
	public static void AddLId(FlatBufferBuilder builder, StringOffset lIdOffset) { }

	// RVA: 0x1746608 Offset: 0x1746608 VA: 0x1746608
	public static void AddB(FlatBufferBuilder builder, VectorOffset bOffset) { }

	// RVA: 0x17466F0 Offset: 0x17466F0 VA: 0x17466F0
	public static VectorOffset CreateBVector(FlatBufferBuilder builder, Offset<EditorBottle>[] data) { }

	// RVA: 0x1746798 Offset: 0x1746798 VA: 0x1746798
	public static VectorOffset CreateBVectorBlock(FlatBufferBuilder builder, Offset<EditorBottle>[] data) { }

	// RVA: 0x1746820 Offset: 0x1746820 VA: 0x1746820
	public static VectorOffset CreateBVectorBlock(FlatBufferBuilder builder, ArraySegment<Offset<EditorBottle>> data) { }

	// RVA: 0x17468E4 Offset: 0x17468E4 VA: 0x17468E4
	public static VectorOffset CreateBVectorBlock(FlatBufferBuilder builder, IntPtr dataPtr, int sizeInBytes) { }

	// RVA: 0x1746978 Offset: 0x1746978 VA: 0x1746978
	public static void StartBVector(FlatBufferBuilder builder, int numElems) { }

	// RVA: 0x1746688 Offset: 0x1746688 VA: 0x1746688
	public static Offset<EditorJSON> EndEditorJSON(FlatBufferBuilder builder) { }
}

// Namespace: magicsort.schemas.v1.level