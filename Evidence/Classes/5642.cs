public struct CompensationResponse : IFlatbufferObject // TypeDefIndex: 5642
{
	// Fields
	private Table __p; // 0x0

	// Properties
	public ByteBuffer ByteBuffer { get; }
	public string CompensationId { get; }
	public int RewardsLength { get; }
	public bool IsClaimed { get; }

	// Methods

	// RVA: 0x1740C84 Offset: 0x1740C84 VA: 0x1740C84 Slot: 5
	public ByteBuffer get_ByteBuffer() { }

	// RVA: 0x1740C8C Offset: 0x1740C8C VA: 0x1740C8C
	public static void ValidateVersion() { }

	// RVA: 0x1740C94 Offset: 0x1740C94 VA: 0x1740C94
	public static CompensationResponse GetRootAsCompensationResponse(ByteBuffer _bb) { }

	// RVA: 0x1740CA0 Offset: 0x1740CA0 VA: 0x1740CA0
	public static CompensationResponse GetRootAsCompensationResponse(ByteBuffer _bb, CompensationResponse obj) { }

	// RVA: 0x1740D24 Offset: 0x1740D24 VA: 0x1740D24
	public static bool VerifyCompensationResponse(ByteBuffer _bb) { }

	// RVA: 0x1740DF8 Offset: 0x1740DF8 VA: 0x1740DF8 Slot: 4
	public void __init(int _i, ByteBuffer _bb) { }

	// RVA: 0x1740CE4 Offset: 0x1740CE4 VA: 0x1740CE4
	public CompensationResponse __assign(int _i, ByteBuffer _bb) { }

	// RVA: 0x1740E34 Offset: 0x1740E34 VA: 0x1740E34
	public string get_CompensationId() { }

	// RVA: 0x1740E70 Offset: 0x1740E70 VA: 0x1740E70
	public Nullable<ArraySegment<byte>> GetCompensationIdBytes() { }

	// RVA: 0x1740EA8 Offset: 0x1740EA8 VA: 0x1740EA8
	public byte[] GetCompensationIdArray() { }

	// RVA: 0x1740EF4 Offset: 0x1740EF4 VA: 0x1740EF4
	public Nullable<ClientRewardModel> Rewards(int j) { }

	// RVA: 0x1740FCC Offset: 0x1740FCC VA: 0x1740FCC
	public int get_RewardsLength() { }

	// RVA: 0x1741000 Offset: 0x1741000 VA: 0x1741000
	public bool get_IsClaimed() { }

	// RVA: 0x1741048 Offset: 0x1741048 VA: 0x1741048
	public static Offset<CompensationResponse> CreateCompensationResponse(FlatBufferBuilder builder, StringOffset compensation_idOffset, VectorOffset rewardsOffset, bool is_claimed = False) { }

	// RVA: 0x1741168 Offset: 0x1741168 VA: 0x1741168
	public static void StartCompensationResponse(FlatBufferBuilder builder) { }

	// RVA: 0x17410D8 Offset: 0x17410D8 VA: 0x17410D8
	public static void AddCompensationId(FlatBufferBuilder builder, StringOffset compensationIdOffset) { }

	// RVA: 0x17410B8 Offset: 0x17410B8 VA: 0x17410B8
	public static void AddRewards(FlatBufferBuilder builder, VectorOffset rewardsOffset) { }

	// RVA: 0x1741180 Offset: 0x1741180 VA: 0x1741180
	public static VectorOffset CreateRewardsVector(FlatBufferBuilder builder, Offset<ClientRewardModel>[] data) { }

	// RVA: 0x1741228 Offset: 0x1741228 VA: 0x1741228
	public static VectorOffset CreateRewardsVectorBlock(FlatBufferBuilder builder, Offset<ClientRewardModel>[] data) { }

	// RVA: 0x17412B0 Offset: 0x17412B0 VA: 0x17412B0
	public static VectorOffset CreateRewardsVectorBlock(FlatBufferBuilder builder, ArraySegment<Offset<ClientRewardModel>> data) { }

	// RVA: 0x1741374 Offset: 0x1741374 VA: 0x1741374
	public static VectorOffset CreateRewardsVectorBlock(FlatBufferBuilder builder, IntPtr dataPtr, int sizeInBytes) { }

	// RVA: 0x1741408 Offset: 0x1741408 VA: 0x1741408
	public static void StartRewardsVector(FlatBufferBuilder builder, int numElems) { }

	// RVA: 0x17410F8 Offset: 0x17410F8 VA: 0x17410F8
	public static void AddIsClaimed(FlatBufferBuilder builder, bool isClaimed) { }

	// RVA: 0x1741118 Offset: 0x1741118 VA: 0x1741118
	public static Offset<CompensationResponse> EndCompensationResponse(FlatBufferBuilder builder) { }

	// RVA: 0x1741428 Offset: 0x1741428 VA: 0x1741428
	public static void FinishCompensationResponseBuffer(FlatBufferBuilder builder, Offset<CompensationResponse> offset) { }

	// RVA: 0x174143C Offset: 0x174143C VA: 0x174143C
	public static void FinishSizePrefixedCompensationResponseBuffer(FlatBufferBuilder builder, Offset<CompensationResponse> offset) { }
}

// Namespace: magicsort.schemas.v1.liveops.compensation