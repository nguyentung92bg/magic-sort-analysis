public struct CellBoardItemModel : IFlatbufferObject // TypeDefIndex: 5657
{
	// Fields
	private Table __p; // 0x0

	// Properties
	public ByteBuffer ByteBuffer { get; }
	public int Id { get; }
	public int KLT { get; }

	// Methods

	// RVA: 0x17452DC Offset: 0x17452DC VA: 0x17452DC Slot: 5
	public ByteBuffer get_ByteBuffer() { }

	// RVA: 0x17452E4 Offset: 0x17452E4 VA: 0x17452E4
	public static void ValidateVersion() { }

	// RVA: 0x17452EC Offset: 0x17452EC VA: 0x17452EC
	public static CellBoardItemModel GetRootAsCellBoardItemModel(ByteBuffer _bb) { }

	// RVA: 0x17452F8 Offset: 0x17452F8 VA: 0x17452F8
	public static CellBoardItemModel GetRootAsCellBoardItemModel(ByteBuffer _bb, CellBoardItemModel obj) { }

	// RVA: 0x174533C Offset: 0x174533C VA: 0x174533C Slot: 4
	public void __init(int _i, ByteBuffer _bb) { }

	// RVA: 0x1745080 Offset: 0x1745080 VA: 0x1745080
	public CellBoardItemModel __assign(int _i, ByteBuffer _bb) { }

	// RVA: 0x1745378 Offset: 0x1745378 VA: 0x1745378
	public int get_Id() { }

	// RVA: 0x17453BC Offset: 0x17453BC VA: 0x17453BC
	public int get_KLT() { }

	// RVA: 0x1745400 Offset: 0x1745400 VA: 0x1745400
	public static Offset<CellBoardItemModel> CreateCellBoardItemModel(FlatBufferBuilder builder, int Id = 0, int KLT = 0) { }

	// RVA: 0x17454E8 Offset: 0x17454E8 VA: 0x17454E8
	public static void StartCellBoardItemModel(FlatBufferBuilder builder) { }

	// RVA: 0x1745478 Offset: 0x1745478 VA: 0x1745478
	public static void AddId(FlatBufferBuilder builder, int id) { }

	// RVA: 0x1745458 Offset: 0x1745458 VA: 0x1745458
	public static void AddKLT(FlatBufferBuilder builder, int kLT) { }

	// RVA: 0x1745498 Offset: 0x1745498 VA: 0x1745498
	public static Offset<CellBoardItemModel> EndCellBoardItemModel(FlatBufferBuilder builder) { }
}

// Namespace: magicsort.schemas.v1.level