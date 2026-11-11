public struct LinkBoardItemModel : IFlatbufferObject // TypeDefIndex: 5665
{
	// Fields
	private Table __p; // 0x0

	// Properties
	public ByteBuffer ByteBuffer { get; }
	public int Id { get; }
	public int CLength { get; }

	// Methods

	// RVA: 0x15FFD18 Offset: 0x15FFD18 VA: 0x15FFD18 Slot: 5
	public ByteBuffer get_ByteBuffer() { }

	// RVA: 0x15FFD20 Offset: 0x15FFD20 VA: 0x15FFD20
	public static void ValidateVersion() { }

	// RVA: 0x15FFD28 Offset: 0x15FFD28 VA: 0x15FFD28
	public static LinkBoardItemModel GetRootAsLinkBoardItemModel(ByteBuffer _bb) { }

	// RVA: 0x15FFD34 Offset: 0x15FFD34 VA: 0x15FFD34
	public static LinkBoardItemModel GetRootAsLinkBoardItemModel(ByteBuffer _bb, LinkBoardItemModel obj) { }

	// RVA: 0x15FFDB8 Offset: 0x15FFDB8 VA: 0x15FFDB8 Slot: 4
	public void __init(int _i, ByteBuffer _bb) { }

	// RVA: 0x15FFD78 Offset: 0x15FFD78 VA: 0x15FFD78
	public LinkBoardItemModel __assign(int _i, ByteBuffer _bb) { }

	// RVA: 0x15FFDF4 Offset: 0x15FFDF4 VA: 0x15FFDF4
	public int get_Id() { }

	// RVA: 0x15FFE38 Offset: 0x15FFE38 VA: 0x15FFE38
	public Nullable<Cell> C(int j) { }

	// RVA: 0x15FFF10 Offset: 0x15FFF10 VA: 0x15FFF10
	public int get_CLength() { }

	// RVA: 0x15FFF44 Offset: 0x15FFF44 VA: 0x15FFF44
	public static Offset<LinkBoardItemModel> CreateLinkBoardItemModel(FlatBufferBuilder builder, int Id = 0, VectorOffset COffset) { }

	// RVA: 0x160002C Offset: 0x160002C VA: 0x160002C
	public static void StartLinkBoardItemModel(FlatBufferBuilder builder) { }

	// RVA: 0x15FFFBC Offset: 0x15FFFBC VA: 0x15FFFBC
	public static void AddId(FlatBufferBuilder builder, int id) { }

	// RVA: 0x15FFF9C Offset: 0x15FFF9C VA: 0x15FFF9C
	public static void AddC(FlatBufferBuilder builder, VectorOffset cOffset) { }

	// RVA: 0x1600044 Offset: 0x1600044 VA: 0x1600044
	public static VectorOffset CreateCVector(FlatBufferBuilder builder, Offset<Cell>[] data) { }

	// RVA: 0x16000EC Offset: 0x16000EC VA: 0x16000EC
	public static VectorOffset CreateCVectorBlock(FlatBufferBuilder builder, Offset<Cell>[] data) { }

	// RVA: 0x1600174 Offset: 0x1600174 VA: 0x1600174
	public static VectorOffset CreateCVectorBlock(FlatBufferBuilder builder, ArraySegment<Offset<Cell>> data) { }

	// RVA: 0x1600238 Offset: 0x1600238 VA: 0x1600238
	public static VectorOffset CreateCVectorBlock(FlatBufferBuilder builder, IntPtr dataPtr, int sizeInBytes) { }

	// RVA: 0x16002CC Offset: 0x16002CC VA: 0x16002CC
	public static void StartCVector(FlatBufferBuilder builder, int numElems) { }

	// RVA: 0x15FFFDC Offset: 0x15FFFDC VA: 0x15FFFDC
	public static Offset<LinkBoardItemModel> EndLinkBoardItemModel(FlatBufferBuilder builder) { }
}

// Namespace: magicsort.schemas.v1.level