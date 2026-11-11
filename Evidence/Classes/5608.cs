public struct SkyJumpStepDetail : IFlatbufferObject // TypeDefIndex: 5608
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

	// RVA: 0x1737650 Offset: 0x1737650 VA: 0x1737650 Slot: 5
	public ByteBuffer get_ByteBuffer() { }

	// RVA: 0x1737658 Offset: 0x1737658 VA: 0x1737658
	public static void ValidateVersion() { }

	// RVA: 0x1737660 Offset: 0x1737660 VA: 0x1737660
	public static SkyJumpStepDetail GetRootAsSkyJumpStepDetail(ByteBuffer _bb) { }

	// RVA: 0x173766C Offset: 0x173766C VA: 0x173766C
	public static SkyJumpStepDetail GetRootAsSkyJumpStepDetail(ByteBuffer _bb, SkyJumpStepDetail obj) { }

	// RVA: 0x17376F0 Offset: 0x17376F0 VA: 0x17376F0 Slot: 4
	public void __init(int _i, ByteBuffer _bb) { }

	// RVA: 0x17376B0 Offset: 0x17376B0 VA: 0x17376B0
	public SkyJumpStepDetail __assign(int _i, ByteBuffer _bb) { }

	// RVA: 0x173772C Offset: 0x173772C VA: 0x173772C
	public long get_StepId() { }

	// RVA: 0x1737774 Offset: 0x1737774 VA: 0x1737774
	public string AllUserIds(int j) { }

	// RVA: 0x17377CC Offset: 0x17377CC VA: 0x17377CC
	public int get_AllUserIdsLength() { }

	// RVA: 0x1737800 Offset: 0x1737800 VA: 0x1737800
	public string LoserUserIds(int j) { }

	// RVA: 0x1737858 Offset: 0x1737858 VA: 0x1737858
	public int get_LoserUserIdsLength() { }

	// RVA: 0x173788C Offset: 0x173788C VA: 0x173788C
	public long get_TotalUserCount() { }

	// RVA: 0x17378D4 Offset: 0x17378D4 VA: 0x17378D4
	public static Offset<SkyJumpStepDetail> CreateSkyJumpStepDetail(FlatBufferBuilder builder, long step_id = 0, VectorOffset all_user_idsOffset, VectorOffset loser_user_idsOffset, long total_user_count = 0) { }

	// RVA: 0x1737A24 Offset: 0x1737A24 VA: 0x1737A24
	public static void StartSkyJumpStepDetail(FlatBufferBuilder builder) { }

	// RVA: 0x1737974 Offset: 0x1737974 VA: 0x1737974
	public static void AddStepId(FlatBufferBuilder builder, long stepId) { }

	// RVA: 0x17379B4 Offset: 0x17379B4 VA: 0x17379B4
	public static void AddAllUserIds(FlatBufferBuilder builder, VectorOffset allUserIdsOffset) { }

	// RVA: 0x1737A3C Offset: 0x1737A3C VA: 0x1737A3C
	public static VectorOffset CreateAllUserIdsVector(FlatBufferBuilder builder, StringOffset[] data) { }

	// RVA: 0x1737AE4 Offset: 0x1737AE4 VA: 0x1737AE4
	public static VectorOffset CreateAllUserIdsVectorBlock(FlatBufferBuilder builder, StringOffset[] data) { }

	// RVA: 0x1737B6C Offset: 0x1737B6C VA: 0x1737B6C
	public static VectorOffset CreateAllUserIdsVectorBlock(FlatBufferBuilder builder, ArraySegment<StringOffset> data) { }

	// RVA: 0x1737C30 Offset: 0x1737C30 VA: 0x1737C30
	public static VectorOffset CreateAllUserIdsVectorBlock(FlatBufferBuilder builder, IntPtr dataPtr, int sizeInBytes) { }

	// RVA: 0x1737CC4 Offset: 0x1737CC4 VA: 0x1737CC4
	public static void StartAllUserIdsVector(FlatBufferBuilder builder, int numElems) { }

	// RVA: 0x1737994 Offset: 0x1737994 VA: 0x1737994
	public static void AddLoserUserIds(FlatBufferBuilder builder, VectorOffset loserUserIdsOffset) { }

	// RVA: 0x1737CE4 Offset: 0x1737CE4 VA: 0x1737CE4
	public static VectorOffset CreateLoserUserIdsVector(FlatBufferBuilder builder, StringOffset[] data) { }

	// RVA: 0x1737D8C Offset: 0x1737D8C VA: 0x1737D8C
	public static VectorOffset CreateLoserUserIdsVectorBlock(FlatBufferBuilder builder, StringOffset[] data) { }

	// RVA: 0x1737E14 Offset: 0x1737E14 VA: 0x1737E14
	public static VectorOffset CreateLoserUserIdsVectorBlock(FlatBufferBuilder builder, ArraySegment<StringOffset> data) { }

	// RVA: 0x1737ED8 Offset: 0x1737ED8 VA: 0x1737ED8
	public static VectorOffset CreateLoserUserIdsVectorBlock(FlatBufferBuilder builder, IntPtr dataPtr, int sizeInBytes) { }

	// RVA: 0x1737F6C Offset: 0x1737F6C VA: 0x1737F6C
	public static void StartLoserUserIdsVector(FlatBufferBuilder builder, int numElems) { }

	// RVA: 0x1737954 Offset: 0x1737954 VA: 0x1737954
	public static void AddTotalUserCount(FlatBufferBuilder builder, long totalUserCount) { }

	// RVA: 0x17379D4 Offset: 0x17379D4 VA: 0x17379D4
	public static Offset<SkyJumpStepDetail> EndSkyJumpStepDetail(FlatBufferBuilder builder) { }
}

// Namespace: magicsort.schemas.v1.liveops.skyjump