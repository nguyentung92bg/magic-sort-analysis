public struct GetJetPackEndTimeResponseV2 : IFlatbufferObject // TypeDefIndex: 5622
{
	// Fields
	private Table __p; // 0x0

	// Properties
	public ByteBuffer ByteBuffer { get; }
	public long FinishTime { get; }
	public long MaxReachableScore { get; }
	public long Stage { get; }

	// Methods

	// RVA: 0x173C490 Offset: 0x173C490 VA: 0x173C490 Slot: 5
	public ByteBuffer get_ByteBuffer() { }

	// RVA: 0x173C498 Offset: 0x173C498 VA: 0x173C498
	public static void ValidateVersion() { }

	// RVA: 0x173C4A0 Offset: 0x173C4A0 VA: 0x173C4A0
	public static GetJetPackEndTimeResponseV2 GetRootAsGetJetPackEndTimeResponseV2(ByteBuffer _bb) { }

	// RVA: 0x173C4AC Offset: 0x173C4AC VA: 0x173C4AC
	public static GetJetPackEndTimeResponseV2 GetRootAsGetJetPackEndTimeResponseV2(ByteBuffer _bb, GetJetPackEndTimeResponseV2 obj) { }

	// RVA: 0x173C530 Offset: 0x173C530 VA: 0x173C530 Slot: 4
	public void __init(int _i, ByteBuffer _bb) { }

	// RVA: 0x173C4F0 Offset: 0x173C4F0 VA: 0x173C4F0
	public GetJetPackEndTimeResponseV2 __assign(int _i, ByteBuffer _bb) { }

	// RVA: 0x173C56C Offset: 0x173C56C VA: 0x173C56C
	public long get_FinishTime() { }

	// RVA: 0x173C5B4 Offset: 0x173C5B4 VA: 0x173C5B4
	public long get_MaxReachableScore() { }

	// RVA: 0x173C5FC Offset: 0x173C5FC VA: 0x173C5FC
	public long get_Stage() { }

	// RVA: 0x173C644 Offset: 0x173C644 VA: 0x173C644
	public static Offset<GetJetPackEndTimeResponseV2> CreateGetJetPackEndTimeResponseV2(FlatBufferBuilder builder, long finishTime = 0, long maxReachableScore = 0, long stage = 0) { }

	// RVA: 0x173C764 Offset: 0x173C764 VA: 0x173C764
	public static void StartGetJetPackEndTimeResponseV2(FlatBufferBuilder builder) { }

	// RVA: 0x173C6F4 Offset: 0x173C6F4 VA: 0x173C6F4
	public static void AddFinishTime(FlatBufferBuilder builder, long finishTime) { }

	// RVA: 0x173C6D4 Offset: 0x173C6D4 VA: 0x173C6D4
	public static void AddMaxReachableScore(FlatBufferBuilder builder, long maxReachableScore) { }

	// RVA: 0x173C6B4 Offset: 0x173C6B4 VA: 0x173C6B4
	public static void AddStage(FlatBufferBuilder builder, long stage) { }

	// RVA: 0x173C714 Offset: 0x173C714 VA: 0x173C714
	public static Offset<GetJetPackEndTimeResponseV2> EndGetJetPackEndTimeResponseV2(FlatBufferBuilder builder) { }
}

// Namespace: magicsort.schemas.v1.liveops.jet_pack_v2