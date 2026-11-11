public struct SegmentedOfferPackageWithID : IFlatbufferObject // TypeDefIndex: 5686
{
	// Fields
	private Table __p; // 0x0

	// Properties
	public ByteBuffer ByteBuffer { get; }
	public long PackageID { get; }
	public string IAPProductId { get; }
	public long IAPProductDiscountAmount { get; }
	public int RewardModelsLength { get; }

	// Methods

	// RVA: 0x1604E00 Offset: 0x1604E00 VA: 0x1604E00 Slot: 5
	public ByteBuffer get_ByteBuffer() { }

	// RVA: 0x1604E08 Offset: 0x1604E08 VA: 0x1604E08
	public static void ValidateVersion() { }

	// RVA: 0x1604E10 Offset: 0x1604E10 VA: 0x1604E10
	public static SegmentedOfferPackageWithID GetRootAsSegmentedOfferPackageWithID(ByteBuffer _bb) { }

	// RVA: 0x1604E1C Offset: 0x1604E1C VA: 0x1604E1C
	public static SegmentedOfferPackageWithID GetRootAsSegmentedOfferPackageWithID(ByteBuffer _bb, SegmentedOfferPackageWithID obj) { }

	// RVA: 0x1604EA0 Offset: 0x1604EA0 VA: 0x1604EA0 Slot: 4
	public void __init(int _i, ByteBuffer _bb) { }

	// RVA: 0x1604E60 Offset: 0x1604E60 VA: 0x1604E60
	public SegmentedOfferPackageWithID __assign(int _i, ByteBuffer _bb) { }

	// RVA: 0x1604EDC Offset: 0x1604EDC VA: 0x1604EDC
	public long get_PackageID() { }

	// RVA: 0x1604F24 Offset: 0x1604F24 VA: 0x1604F24
	public string get_IAPProductId() { }

	// RVA: 0x1604F60 Offset: 0x1604F60 VA: 0x1604F60
	public Nullable<ArraySegment<byte>> GetIAPProductIdBytes() { }

	// RVA: 0x1604F98 Offset: 0x1604F98 VA: 0x1604F98
	public byte[] GetIAPProductIdArray() { }

	// RVA: 0x1604FE4 Offset: 0x1604FE4 VA: 0x1604FE4
	public long get_IAPProductDiscountAmount() { }

	// RVA: 0x160502C Offset: 0x160502C VA: 0x160502C
	public Nullable<ClientRewardModel> RewardModels(int j) { }

	// RVA: 0x1605100 Offset: 0x1605100 VA: 0x1605100
	public int get_RewardModelsLength() { }

	// RVA: 0x1605134 Offset: 0x1605134 VA: 0x1605134
	public static Offset<SegmentedOfferPackageWithID> CreateSegmentedOfferPackageWithID(FlatBufferBuilder builder, long PackageID = 0, StringOffset IAPProductIdOffset, long IAPProductDiscountAmount = 0, VectorOffset RewardModelsOffset) { }

	// RVA: 0x1605284 Offset: 0x1605284 VA: 0x1605284
	public static void StartSegmentedOfferPackageWithID(FlatBufferBuilder builder) { }

	// RVA: 0x16051D4 Offset: 0x16051D4 VA: 0x16051D4
	public static void AddPackageID(FlatBufferBuilder builder, long packageID) { }

	// RVA: 0x1605214 Offset: 0x1605214 VA: 0x1605214
	public static void AddIAPProductId(FlatBufferBuilder builder, StringOffset iAPProductIdOffset) { }

	// RVA: 0x16051B4 Offset: 0x16051B4 VA: 0x16051B4
	public static void AddIAPProductDiscountAmount(FlatBufferBuilder builder, long iAPProductDiscountAmount) { }

	// RVA: 0x16051F4 Offset: 0x16051F4 VA: 0x16051F4
	public static void AddRewardModels(FlatBufferBuilder builder, VectorOffset rewardModelsOffset) { }

	// RVA: 0x160529C Offset: 0x160529C VA: 0x160529C
	public static VectorOffset CreateRewardModelsVector(FlatBufferBuilder builder, Offset<ClientRewardModel>[] data) { }

	// RVA: 0x1605344 Offset: 0x1605344 VA: 0x1605344
	public static VectorOffset CreateRewardModelsVectorBlock(FlatBufferBuilder builder, Offset<ClientRewardModel>[] data) { }

	// RVA: 0x16053CC Offset: 0x16053CC VA: 0x16053CC
	public static VectorOffset CreateRewardModelsVectorBlock(FlatBufferBuilder builder, ArraySegment<Offset<ClientRewardModel>> data) { }

	// RVA: 0x1605490 Offset: 0x1605490 VA: 0x1605490
	public static VectorOffset CreateRewardModelsVectorBlock(FlatBufferBuilder builder, IntPtr dataPtr, int sizeInBytes) { }

	// RVA: 0x1605524 Offset: 0x1605524 VA: 0x1605524
	public static void StartRewardModelsVector(FlatBufferBuilder builder, int numElems) { }

	// RVA: 0x1605234 Offset: 0x1605234 VA: 0x1605234
	public static Offset<SegmentedOfferPackageWithID> EndSegmentedOfferPackageWithID(FlatBufferBuilder builder) { }
}

// Namespace: magicsort.schemas.v1.common