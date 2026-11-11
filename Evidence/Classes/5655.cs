public struct Cell : IFlatbufferObject // TypeDefIndex: 5655
{
	// Fields
	private Table __p; // 0x0

	// Properties
	public ByteBuffer ByteBuffer { get; }
	public Nullable<Position> LP { get; }
	public Nullable<BoardItemModel> BIM { get; }
	public Nullable<CellBoardItemModel> CBIM { get; }

	// Methods

	// RVA: 0x1744D7C Offset: 0x1744D7C VA: 0x1744D7C Slot: 5
	public ByteBuffer get_ByteBuffer() { }

	// RVA: 0x1744D84 Offset: 0x1744D84 VA: 0x1744D84
	public static void ValidateVersion() { }

	// RVA: 0x1744D8C Offset: 0x1744D8C VA: 0x1744D8C
	public static Cell GetRootAsCell(ByteBuffer _bb) { }

	// RVA: 0x1744D98 Offset: 0x1744D98 VA: 0x1744D98
	public static Cell GetRootAsCell(ByteBuffer _bb, Cell obj) { }

	// RVA: 0x1744E1C Offset: 0x1744E1C VA: 0x1744E1C Slot: 4
	public void __init(int _i, ByteBuffer _bb) { }

	// RVA: 0x1744DDC Offset: 0x1744DDC VA: 0x1744DDC
	public Cell __assign(int _i, ByteBuffer _bb) { }

	// RVA: 0x1744E58 Offset: 0x1744E58 VA: 0x1744E58
	public Nullable<Position> get_LP() { }

	// RVA: 0x1744F08 Offset: 0x1744F08 VA: 0x1744F08
	public Nullable<BoardItemModel> get_BIM() { }

	// RVA: 0x1744FC4 Offset: 0x1744FC4 VA: 0x1744FC4
	public Nullable<CellBoardItemModel> get_CBIM() { }

	// RVA: 0x17450C0 Offset: 0x17450C0 VA: 0x17450C0
	public static void StartCell(FlatBufferBuilder builder) { }

	// RVA: 0x17450D8 Offset: 0x17450D8 VA: 0x17450D8
	public static void AddLP(FlatBufferBuilder builder, Offset<Position> lPOffset) { }

	// RVA: 0x17450F8 Offset: 0x17450F8 VA: 0x17450F8
	public static void AddBIM(FlatBufferBuilder builder, Offset<BoardItemModel> bIMOffset) { }

	// RVA: 0x1745118 Offset: 0x1745118 VA: 0x1745118
	public static void AddCBIM(FlatBufferBuilder builder, Offset<CellBoardItemModel> cBIMOffset) { }

	// RVA: 0x1745138 Offset: 0x1745138 VA: 0x1745138
	public static Offset<Cell> EndCell(FlatBufferBuilder builder) { }
}

// Namespace: magicsort.schemas.v1.level