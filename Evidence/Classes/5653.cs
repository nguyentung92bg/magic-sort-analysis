public struct BoardItemModel : IFlatbufferObject // TypeDefIndex: 5653
{
	// Fields
	private Table __p; // 0x0

	// Properties
	public ByteBuffer ByteBuffer { get; }
	public int Id { get; }
	public int CI { get; }
	public bool V { get; }

	// Methods

	// RVA: 0x17449E0 Offset: 0x17449E0 VA: 0x17449E0 Slot: 5
	public ByteBuffer get_ByteBuffer() { }

	// RVA: 0x17449E8 Offset: 0x17449E8 VA: 0x17449E8
	public static void ValidateVersion() { }

	// RVA: 0x17449F0 Offset: 0x17449F0 VA: 0x17449F0
	public static BoardItemModel GetRootAsBoardItemModel(ByteBuffer _bb) { }

	// RVA: 0x17449FC Offset: 0x17449FC VA: 0x17449FC
	public static BoardItemModel GetRootAsBoardItemModel(ByteBuffer _bb, BoardItemModel obj) { }

	// RVA: 0x1744A80 Offset: 0x1744A80 VA: 0x1744A80 Slot: 4
	public void __init(int _i, ByteBuffer _bb) { }

	// RVA: 0x1744A40 Offset: 0x1744A40 VA: 0x1744A40
	public BoardItemModel __assign(int _i, ByteBuffer _bb) { }

	// RVA: 0x1744ABC Offset: 0x1744ABC VA: 0x1744ABC
	public int get_Id() { }

	// RVA: 0x1744B00 Offset: 0x1744B00 VA: 0x1744B00
	public int get_CI() { }

	// RVA: 0x1744B44 Offset: 0x1744B44 VA: 0x1744B44
	public bool get_V() { }

	// RVA: 0x1744B8C Offset: 0x1744B8C VA: 0x1744B8C
	public static Offset<BoardItemModel> CreateBoardItemModel(FlatBufferBuilder builder, int Id = 0, int CI = 0, bool V = False) { }

	// RVA: 0x1744CAC Offset: 0x1744CAC VA: 0x1744CAC
	public static void StartBoardItemModel(FlatBufferBuilder builder) { }

	// RVA: 0x1744C1C Offset: 0x1744C1C VA: 0x1744C1C
	public static void AddId(FlatBufferBuilder builder, int id) { }

	// RVA: 0x1744BFC Offset: 0x1744BFC VA: 0x1744BFC
	public static void AddCI(FlatBufferBuilder builder, int cI) { }

	// RVA: 0x1744C3C Offset: 0x1744C3C VA: 0x1744C3C
	public static void AddV(FlatBufferBuilder builder, bool v) { }

	// RVA: 0x1744C5C Offset: 0x1744C5C VA: 0x1744C5C
	public static Offset<BoardItemModel> EndBoardItemModel(FlatBufferBuilder builder) { }
}

// Namespace: magicsort.schemas.v1.level