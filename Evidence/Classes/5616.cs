public struct LavaDummyStepDetail : IFlatbufferObject // TypeDefIndex: 5616
{
	// Fields
	private Table __p; // 0x0

	// Properties
	public ByteBuffer ByteBuffer { get; }
	public long StepId { get; }
	public int AllUserIdsLength { get; }
	public int LoserUserIdsLength { get; }
	public long TotalUserCount { get; }

	// Methods

	// RVA: 0x173A60C Offset: 0x173A60C VA: 0x173A60C Slot: 5
	public ByteBuffer get_ByteBuffer() { }

	// RVA: 0x173A614 Offset: 0x173A614 VA: 0x173A614
	public static void ValidateVersion() { }

	// RVA: 0x173A61C Offset: 0x173A61C VA: 0x173A61C
	public static LavaDummyStepDetail GetRootAsLavaDummyStepDetail(ByteBuffer _bb) { }

	// RVA: 0x173A628 Offset: 0x173A628 VA: 0x173A628
	public static LavaDummyStepDetail GetRootAsLavaDummyStepDetail(ByteBuffer _bb, LavaDummyStepDetail obj) { }

	// RVA: 0x173A6AC Offset: 0x173A6AC VA: 0x173A6AC Slot: 4
	public void __init(int _i, ByteBuffer _bb) { }

	// RVA: 0x173A66C Offset: 0x173A66C VA: 0x173A66C
	public LavaDummyStepDetail __assign(int _i, ByteBuffer _bb) { }

	// RVA: 0x173A6E8 Offset: 0x173A6E8 VA: 0x173A6E8
	public long get_StepId() { }

	// RVA: 0x173A730 Offset: 0x173A730 VA: 0x173A730
	public string AllUserIds(int j) { }

	// RVA: 0x173A788 Offset: 0x173A788 VA: 0x173A788
	public int get_AllUserIdsLength() { }

	// RVA: 0x173A7BC Offset: 0x173A7BC VA: 0x173A7BC
	public string LoserUserIds(int j) { }

	// RVA: 0x173A814 Offset: 0x173A814 VA: 0x173A814
	public int get_LoserUserIdsLength() { }

	// RVA: 0x173A848 Offset: 0x173A848 VA: 0x173A848
	public long get_TotalUserCount() { }

	// RVA: 0x173A890 Offset: 0x173A890 VA: 0x173A890
	public static Offset<LavaDummyStepDetail> CreateLavaDummyStepDetail(FlatBufferBuilder builder, long step_id = 0, VectorOffset all_user_idsOffset, VectorOffset loser_user_idsOffset, long total_user_count = 0) { }

	// RVA: 0x173A9E0 Offset: 0x173A9E0 VA: 0x173A9E0
	public static void StartLavaDummyStepDetail(FlatBufferBuilder builder) { }

	// RVA: 0x173A930 Offset: 0x173A930 VA: 0x173A930
	public static void AddStepId(FlatBufferBuilder builder, long stepId) { }

	// RVA: 0x173A970 Offset: 0x173A970 VA: 0x173A970
	public static void AddAllUserIds(FlatBufferBuilder builder, VectorOffset allUserIdsOffset) { }

	// RVA: 0x173A9F8 Offset: 0x173A9F8 VA: 0x173A9F8
	public static VectorOffset CreateAllUserIdsVector(FlatBufferBuilder builder, StringOffset[] data) { }

	// RVA: 0x173AAA0 Offset: 0x173AAA0 VA: 0x173AAA0
	public static VectorOffset CreateAllUserIdsVectorBlock(FlatBufferBuilder builder, StringOffset[] data) { }

	// RVA: 0x173AB28 Offset: 0x173AB28 VA: 0x173AB28
	public static VectorOffset CreateAllUserIdsVectorBlock(FlatBufferBuilder builder, ArraySegment<StringOffset> data) { }

	// RVA: 0x173ABEC Offset: 0x173ABEC VA: 0x173ABEC
	public static VectorOffset CreateAllUserIdsVectorBlock(FlatBufferBuilder builder, IntPtr dataPtr, int sizeInBytes) { }

	// RVA: 0x173AC80 Offset: 0x173AC80 VA: 0x173AC80
	public static void StartAllUserIdsVector(FlatBufferBuilder builder, int numElems) { }

	// RVA: 0x173A950 Offset: 0x173A950 VA: 0x173A950
	public static void AddLoserUserIds(FlatBufferBuilder builder, VectorOffset loserUserIdsOffset) { }

	// RVA: 0x173ACA0 Offset: 0x173ACA0 VA: 0x173ACA0
	public static VectorOffset CreateLoserUserIdsVector(FlatBufferBuilder builder, StringOffset[] data) { }

	// RVA: 0x173AD48 Offset: 0x173AD48 VA: 0x173AD48
	public static VectorOffset CreateLoserUserIdsVectorBlock(FlatBufferBuilder builder, StringOffset[] data) { }

	// RVA: 0x173ADD0 Offset: 0x173ADD0 VA: 0x173ADD0
	public static VectorOffset CreateLoserUserIdsVectorBlock(FlatBufferBuilder builder, ArraySegment<StringOffset> data) { }

	// RVA: 0x173AE94 Offset: 0x173AE94 VA: 0x173AE94
	public static VectorOffset CreateLoserUserIdsVectorBlock(FlatBufferBuilder builder, IntPtr dataPtr, int sizeInBytes) { }

	// RVA: 0x173AF28 Offset: 0x173AF28 VA: 0x173AF28
	public static void StartLoserUserIdsVector(FlatBufferBuilder builder, int numElems) { }

	// RVA: 0x173A910 Offset: 0x173A910 VA: 0x173A910
	public static void AddTotalUserCount(FlatBufferBuilder builder, long totalUserCount) { }

	// RVA: 0x173A990 Offset: 0x173A990 VA: 0x173A990
	public static Offset<LavaDummyStepDetail> EndLavaDummyStepDetail(FlatBufferBuilder builder) { }
}

// Namespace: magicsort.schemas.v1.liveops.lava_leaderboard