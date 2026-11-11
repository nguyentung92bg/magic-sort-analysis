public struct OverBoardItemModel : IFlatbufferObject // TypeDefIndex: 5669
{
	// Fields
	private Table __p; // 0x0

	// Properties
	public ByteBuffer ByteBuffer { get; }
	public int Id { get; }
	public Nullable<OBIMObject> Obj { get; }
	public int CI { get; }
	public int KLT { get; }

	// Methods

	// RVA: 0x1600778 Offset: 0x1600778 VA: 0x1600778 Slot: 5
	public ByteBuffer get_ByteBuffer() { }

	// RVA: 0x1600780 Offset: 0x1600780 VA: 0x1600780
	public static void ValidateVersion() { }

	// RVA: 0x1600788 Offset: 0x1600788 VA: 0x1600788
	public static OverBoardItemModel GetRootAsOverBoardItemModel(ByteBuffer _bb) { }

	// RVA: 0x1600794 Offset: 0x1600794 VA: 0x1600794
	public static OverBoardItemModel GetRootAsOverBoardItemModel(ByteBuffer _bb, OverBoardItemModel obj) { }

	// RVA: 0x1600818 Offset: 0x1600818 VA: 0x1600818 Slot: 4
	public void __init(int _i, ByteBuffer _bb) { }

	// RVA: 0x16007D8 Offset: 0x16007D8 VA: 0x16007D8
	public OverBoardItemModel __assign(int _i, ByteBuffer _bb) { }

	// RVA: 0x1600854 Offset: 0x1600854 VA: 0x1600854
	public int get_Id() { }

	// RVA: 0x1600898 Offset: 0x1600898 VA: 0x1600898
	public Nullable<OBIMObject> get_Obj() { }

	// RVA: 0x1600954 Offset: 0x1600954 VA: 0x1600954
	public int get_CI() { }

	// RVA: 0x1600998 Offset: 0x1600998 VA: 0x1600998
	public int get_KLT() { }

	// RVA: 0x16009DC Offset: 0x16009DC VA: 0x16009DC
	public static Offset<OverBoardItemModel> CreateOverBoardItemModel(FlatBufferBuilder builder, int Id = 0, Offset<OBIMObject> ObjOffset, int CI = 0, int KLT = 0) { }

	// RVA: 0x1600B2C Offset: 0x1600B2C VA: 0x1600B2C
	public static void StartOverBoardItemModel(FlatBufferBuilder builder) { }

	// RVA: 0x1600ABC Offset: 0x1600ABC VA: 0x1600ABC
	public static void AddId(FlatBufferBuilder builder, int id) { }

	// RVA: 0x1600A9C Offset: 0x1600A9C VA: 0x1600A9C
	public static void AddObj(FlatBufferBuilder builder, Offset<OBIMObject> objOffset) { }

	// RVA: 0x1600A7C Offset: 0x1600A7C VA: 0x1600A7C
	public static void AddCI(FlatBufferBuilder builder, int cI) { }

	// RVA: 0x1600A5C Offset: 0x1600A5C VA: 0x1600A5C
	public static void AddKLT(FlatBufferBuilder builder, int kLT) { }

	// RVA: 0x1600ADC Offset: 0x1600ADC VA: 0x1600ADC
	public static Offset<OverBoardItemModel> EndOverBoardItemModel(FlatBufferBuilder builder) { }
}

// Namespace: magicsort.schemas.v1.level