public struct EditorBottle : IFlatbufferObject // TypeDefIndex: 5659
{
	// Fields
	private Table __p; // 0x0

	// Properties
	public ByteBuffer ByteBuffer { get; }
	public int Id { get; }
	public Nullable<Position> P { get; }
	public int CLength { get; }
	public Nullable<LinkBoardItemModel> LBIM { get; }
	public int OBIMLength { get; }

	// Methods

	// RVA: 0x1745594 Offset: 0x1745594 VA: 0x1745594 Slot: 5
	public ByteBuffer get_ByteBuffer() { }

	// RVA: 0x174559C Offset: 0x174559C VA: 0x174559C
	public static void ValidateVersion() { }

	// RVA: 0x17455A4 Offset: 0x17455A4 VA: 0x17455A4
	public static EditorBottle GetRootAsEditorBottle(ByteBuffer _bb) { }

	// RVA: 0x17455B0 Offset: 0x17455B0 VA: 0x17455B0
	public static EditorBottle GetRootAsEditorBottle(ByteBuffer _bb, EditorBottle obj) { }

	// RVA: 0x1745634 Offset: 0x1745634 VA: 0x1745634 Slot: 4
	public void __init(int _i, ByteBuffer _bb) { }

	// RVA: 0x17455F4 Offset: 0x17455F4 VA: 0x17455F4
	public EditorBottle __assign(int _i, ByteBuffer _bb) { }

	// RVA: 0x1745670 Offset: 0x1745670 VA: 0x1745670
	public int get_Id() { }

	// RVA: 0x17456B4 Offset: 0x17456B4 VA: 0x17456B4
	public Nullable<Position> get_P() { }

	// RVA: 0x1745764 Offset: 0x1745764 VA: 0x1745764
	public Nullable<Cell> C(int j) { }

	// RVA: 0x1745838 Offset: 0x1745838 VA: 0x1745838
	public int get_CLength() { }

	// RVA: 0x174586C Offset: 0x174586C VA: 0x174586C
	public Nullable<LinkBoardItemModel> get_LBIM() { }

	// RVA: 0x174592C Offset: 0x174592C VA: 0x174592C
	public Nullable<OverBoardItemModel> OBIM(int j) { }

	// RVA: 0x1745A04 Offset: 0x1745A04 VA: 0x1745A04
	public int get_OBIMLength() { }

	// RVA: 0x1745A38 Offset: 0x1745A38 VA: 0x1745A38
	public static void StartEditorBottle(FlatBufferBuilder builder) { }

	// RVA: 0x1745A50 Offset: 0x1745A50 VA: 0x1745A50
	public static void AddId(FlatBufferBuilder builder, int id) { }

	// RVA: 0x1745A70 Offset: 0x1745A70 VA: 0x1745A70
	public static void AddP(FlatBufferBuilder builder, Offset<Position> pOffset) { }

	// RVA: 0x1745A90 Offset: 0x1745A90 VA: 0x1745A90
	public static void AddC(FlatBufferBuilder builder, VectorOffset cOffset) { }

	// RVA: 0x1745AB0 Offset: 0x1745AB0 VA: 0x1745AB0
	public static VectorOffset CreateCVector(FlatBufferBuilder builder, Offset<Cell>[] data) { }

	// RVA: 0x1745B58 Offset: 0x1745B58 VA: 0x1745B58
	public static VectorOffset CreateCVectorBlock(FlatBufferBuilder builder, Offset<Cell>[] data) { }

	// RVA: 0x1745BE0 Offset: 0x1745BE0 VA: 0x1745BE0
	public static VectorOffset CreateCVectorBlock(FlatBufferBuilder builder, ArraySegment<Offset<Cell>> data) { }

	// RVA: 0x1745CA4 Offset: 0x1745CA4 VA: 0x1745CA4
	public static VectorOffset CreateCVectorBlock(FlatBufferBuilder builder, IntPtr dataPtr, int sizeInBytes) { }

	// RVA: 0x1745D38 Offset: 0x1745D38 VA: 0x1745D38
	public static void StartCVector(FlatBufferBuilder builder, int numElems) { }

	// RVA: 0x1745D58 Offset: 0x1745D58 VA: 0x1745D58
	public static void AddLBIM(FlatBufferBuilder builder, Offset<LinkBoardItemModel> lBIMOffset) { }

	// RVA: 0x1745D78 Offset: 0x1745D78 VA: 0x1745D78
	public static void AddOBIM(FlatBufferBuilder builder, VectorOffset oBIMOffset) { }

	// RVA: 0x1745D98 Offset: 0x1745D98 VA: 0x1745D98
	public static VectorOffset CreateOBIMVector(FlatBufferBuilder builder, Offset<OverBoardItemModel>[] data) { }

	// RVA: 0x1745E40 Offset: 0x1745E40 VA: 0x1745E40
	public static VectorOffset CreateOBIMVectorBlock(FlatBufferBuilder builder, Offset<OverBoardItemModel>[] data) { }

	// RVA: 0x1745EC8 Offset: 0x1745EC8 VA: 0x1745EC8
	public static VectorOffset CreateOBIMVectorBlock(FlatBufferBuilder builder, ArraySegment<Offset<OverBoardItemModel>> data) { }

	// RVA: 0x1745F8C Offset: 0x1745F8C VA: 0x1745F8C
	public static VectorOffset CreateOBIMVectorBlock(FlatBufferBuilder builder, IntPtr dataPtr, int sizeInBytes) { }

	// RVA: 0x1746020 Offset: 0x1746020 VA: 0x1746020
	public static void StartOBIMVector(FlatBufferBuilder builder, int numElems) { }

	// RVA: 0x1746040 Offset: 0x1746040 VA: 0x1746040
	public static Offset<EditorBottle> EndEditorBottle(FlatBufferBuilder builder) { }
}

// Namespace: magicsort.schemas.v1.level