public struct ClientRewardModel : IFlatbufferObject // TypeDefIndex: 5678
{
	// Fields
	private Table __p; // 0x0

	// Properties
	public ByteBuffer ByteBuffer { get; }
	public long CurrencyType { get; }
	public long Amount { get; }
	public string TimeSpan { get; }
	public long ChestType { get; }
	public int SegmentedOfferPackageLength { get; }

	// Methods

	// RVA: 0x1602248 Offset: 0x1602248 VA: 0x1602248 Slot: 5
	public ByteBuffer get_ByteBuffer() { }

	// RVA: 0x1602250 Offset: 0x1602250 VA: 0x1602250
	public static void ValidateVersion() { }

	// RVA: 0x1602258 Offset: 0x1602258 VA: 0x1602258
	public static ClientRewardModel GetRootAsClientRewardModel(ByteBuffer _bb) { }

	// RVA: 0x1602264 Offset: 0x1602264 VA: 0x1602264
	public static ClientRewardModel GetRootAsClientRewardModel(ByteBuffer _bb, ClientRewardModel obj) { }

	// RVA: 0x16022E8 Offset: 0x16022E8 VA: 0x16022E8 Slot: 4
	public void __init(int _i, ByteBuffer _bb) { }

	// RVA: 0x16022A8 Offset: 0x16022A8 VA: 0x16022A8
	public ClientRewardModel __assign(int _i, ByteBuffer _bb) { }

	// RVA: 0x1602324 Offset: 0x1602324 VA: 0x1602324
	public long get_CurrencyType() { }

	// RVA: 0x160236C Offset: 0x160236C VA: 0x160236C
	public long get_Amount() { }

	// RVA: 0x16023B4 Offset: 0x16023B4 VA: 0x16023B4
	public string get_TimeSpan() { }

	// RVA: 0x16023F0 Offset: 0x16023F0 VA: 0x16023F0
	public Nullable<ArraySegment<byte>> GetTimeSpanBytes() { }

	// RVA: 0x1602428 Offset: 0x1602428 VA: 0x1602428
	public byte[] GetTimeSpanArray() { }

	// RVA: 0x1602474 Offset: 0x1602474 VA: 0x1602474
	public long get_ChestType() { }

	// RVA: 0x16024BC Offset: 0x16024BC VA: 0x16024BC
	public Nullable<ClientRewardModel> SegmentedOfferPackage(int j) { }

	// RVA: 0x1602590 Offset: 0x1602590 VA: 0x1602590
	public int get_SegmentedOfferPackageLength() { }

	// RVA: 0x16025C4 Offset: 0x16025C4 VA: 0x16025C4
	public static Offset<ClientRewardModel> CreateClientRewardModel(FlatBufferBuilder builder, long CurrencyType = 0, long Amount = 0, StringOffset TimeSpanOffset, long ChestType = 0, VectorOffset SegmentedOfferPackageOffset) { }

	// RVA: 0x160274C Offset: 0x160274C VA: 0x160274C
	public static void StartClientRewardModel(FlatBufferBuilder builder) { }

	// RVA: 0x160269C Offset: 0x160269C VA: 0x160269C
	public static void AddCurrencyType(FlatBufferBuilder builder, long currencyType) { }

	// RVA: 0x160267C Offset: 0x160267C VA: 0x160267C
	public static void AddAmount(FlatBufferBuilder builder, long amount) { }

	// RVA: 0x16026DC Offset: 0x16026DC VA: 0x16026DC
	public static void AddTimeSpan(FlatBufferBuilder builder, StringOffset timeSpanOffset) { }

	// RVA: 0x160265C Offset: 0x160265C VA: 0x160265C
	public static void AddChestType(FlatBufferBuilder builder, long chestType) { }

	// RVA: 0x16026BC Offset: 0x16026BC VA: 0x16026BC
	public static void AddSegmentedOfferPackage(FlatBufferBuilder builder, VectorOffset segmentedOfferPackageOffset) { }

	// RVA: 0x1602764 Offset: 0x1602764 VA: 0x1602764
	public static VectorOffset CreateSegmentedOfferPackageVector(FlatBufferBuilder builder, Offset<ClientRewardModel>[] data) { }

	// RVA: 0x160280C Offset: 0x160280C VA: 0x160280C
	public static VectorOffset CreateSegmentedOfferPackageVectorBlock(FlatBufferBuilder builder, Offset<ClientRewardModel>[] data) { }

	// RVA: 0x1602894 Offset: 0x1602894 VA: 0x1602894
	public static VectorOffset CreateSegmentedOfferPackageVectorBlock(FlatBufferBuilder builder, ArraySegment<Offset<ClientRewardModel>> data) { }

	// RVA: 0x1602958 Offset: 0x1602958 VA: 0x1602958
	public static VectorOffset CreateSegmentedOfferPackageVectorBlock(FlatBufferBuilder builder, IntPtr dataPtr, int sizeInBytes) { }

	// RVA: 0x16029EC Offset: 0x16029EC VA: 0x16029EC
	public static void StartSegmentedOfferPackageVector(FlatBufferBuilder builder, int numElems) { }

	// RVA: 0x16026FC Offset: 0x16026FC VA: 0x16026FC
	public static Offset<ClientRewardModel> EndClientRewardModel(FlatBufferBuilder builder) { }
}

// Namespace: magicsort.schemas.v1.common