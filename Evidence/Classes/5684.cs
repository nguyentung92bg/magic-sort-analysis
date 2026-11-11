public struct SegmentedOfferPackage : IFlatbufferObject // TypeDefIndex: 5684
{
	// Fields
	private Table __p; // 0x0

	// Properties
	public ByteBuffer ByteBuffer { get; }
	public string IAPProductId { get; }
	public long IAPProductDiscountAmount { get; }
	public int RewardModelsLength { get; }

	// Methods

	// RVA: 0x1604624 Offset: 0x1604624 VA: 0x1604624 Slot: 5
	public ByteBuffer get_ByteBuffer() { }

	// RVA: 0x160462C Offset: 0x160462C VA: 0x160462C
	public static void ValidateVersion() { }

	// RVA: 0x1604634 Offset: 0x1604634 VA: 0x1604634
	public static SegmentedOfferPackage GetRootAsSegmentedOfferPackage(ByteBuffer _bb) { }

	// RVA: 0x1604640 Offset: 0x1604640 VA: 0x1604640
	public static SegmentedOfferPackage GetRootAsSegmentedOfferPackage(ByteBuffer _bb, SegmentedOfferPackage obj) { }

	// RVA: 0x16046C4 Offset: 0x16046C4 VA: 0x16046C4 Slot: 4
	public void __init(int _i, ByteBuffer _bb) { }

	// RVA: 0x1604684 Offset: 0x1604684 VA: 0x1604684
	public SegmentedOfferPackage __assign(int _i, ByteBuffer _bb) { }

	// RVA: 0x1604700 Offset: 0x1604700 VA: 0x1604700
	public string get_IAPProductId() { }

	// RVA: 0x160473C Offset: 0x160473C VA: 0x160473C
	public Nullable<ArraySegment<byte>> GetIAPProductIdBytes() { }

	// RVA: 0x1604774 Offset: 0x1604774 VA: 0x1604774
	public byte[] GetIAPProductIdArray() { }

	// RVA: 0x16047C0 Offset: 0x16047C0 VA: 0x16047C0
	public long get_IAPProductDiscountAmount() { }

	// RVA: 0x1604808 Offset: 0x1604808 VA: 0x1604808
	public Nullable<ClientRewardModel> RewardModels(int j) { }

	// RVA: 0x16048DC Offset: 0x16048DC VA: 0x16048DC
	public int get_RewardModelsLength() { }

	// RVA: 0x1604910 Offset: 0x1604910 VA: 0x1604910
	public static Offset<SegmentedOfferPackage> CreateSegmentedOfferPackage(FlatBufferBuilder builder, StringOffset IAPProductIdOffset, long IAPProductDiscountAmount = 0, VectorOffset RewardModelsOffset) { }

	// RVA: 0x1604A30 Offset: 0x1604A30 VA: 0x1604A30
	public static void StartSegmentedOfferPackage(FlatBufferBuilder builder) { }

	// RVA: 0x16049C0 Offset: 0x16049C0 VA: 0x16049C0
	public static void AddIAPProductId(FlatBufferBuilder builder, StringOffset iAPProductIdOffset) { }

	// RVA: 0x1604980 Offset: 0x1604980 VA: 0x1604980
	public static void AddIAPProductDiscountAmount(FlatBufferBuilder builder, long iAPProductDiscountAmount) { }

	// RVA: 0x16049A0 Offset: 0x16049A0 VA: 0x16049A0
	public static void AddRewardModels(FlatBufferBuilder builder, VectorOffset rewardModelsOffset) { }

	// RVA: 0x1604A48 Offset: 0x1604A48 VA: 0x1604A48
	public static VectorOffset CreateRewardModelsVector(FlatBufferBuilder builder, Offset<ClientRewardModel>[] data) { }

	// RVA: 0x1604AF0 Offset: 0x1604AF0 VA: 0x1604AF0
	public static VectorOffset CreateRewardModelsVectorBlock(FlatBufferBuilder builder, Offset<ClientRewardModel>[] data) { }

	// RVA: 0x1604B78 Offset: 0x1604B78 VA: 0x1604B78
	public static VectorOffset CreateRewardModelsVectorBlock(FlatBufferBuilder builder, ArraySegment<Offset<ClientRewardModel>> data) { }

	// RVA: 0x1604C3C Offset: 0x1604C3C VA: 0x1604C3C
	public static VectorOffset CreateRewardModelsVectorBlock(FlatBufferBuilder builder, IntPtr dataPtr, int sizeInBytes) { }

	// RVA: 0x1604CD0 Offset: 0x1604CD0 VA: 0x1604CD0
	public static void StartRewardModelsVector(FlatBufferBuilder builder, int numElems) { }

	// RVA: 0x16049E0 Offset: 0x16049E0 VA: 0x16049E0
	public static Offset<SegmentedOfferPackage> EndSegmentedOfferPackage(FlatBufferBuilder builder) { }
}

// Namespace: magicsort.schemas.v1.common