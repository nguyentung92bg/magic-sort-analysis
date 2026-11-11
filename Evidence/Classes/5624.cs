public struct JetPackResponseV2 : IFlatbufferObject // TypeDefIndex: 5624
{
	// Fields
	private Table __p; // 0x0

	// Properties
	public ByteBuffer ByteBuffer { get; }
	public string TournamentID { get; }
	public string LeaderboardID { get; }
	public long TournamentType { get; }
	public int PlayersLength { get; }
	public long StartTime { get; }
	public long FinishTime { get; }
	public bool HasUsedLimitlessLife { get; }
	public bool IsClaimed { get; }
	public bool IsFinished { get; }
	public bool HasCompletedAllStages { get; }
	public long UserScore { get; }
	public long CurrentStage { get; }
	public long MaxReachableStageScore { get; }
	public long TotalStageCount { get; }
	public long MaxCompetitorCount { get; }

	// Methods

	// RVA: 0x173C834 Offset: 0x173C834 VA: 0x173C834 Slot: 5
	public ByteBuffer get_ByteBuffer() { }

	// RVA: 0x173C83C Offset: 0x173C83C VA: 0x173C83C
	public static void ValidateVersion() { }

	// RVA: 0x173C844 Offset: 0x173C844 VA: 0x173C844
	public static JetPackResponseV2 GetRootAsJetPackResponseV2(ByteBuffer _bb) { }

	// RVA: 0x173C850 Offset: 0x173C850 VA: 0x173C850
	public static JetPackResponseV2 GetRootAsJetPackResponseV2(ByteBuffer _bb, JetPackResponseV2 obj) { }

	// RVA: 0x173C8D4 Offset: 0x173C8D4 VA: 0x173C8D4
	public static bool VerifyJetPackResponseV2(ByteBuffer _bb) { }

	// RVA: 0x173C9A8 Offset: 0x173C9A8 VA: 0x173C9A8 Slot: 4
	public void __init(int _i, ByteBuffer _bb) { }

	// RVA: 0x173C894 Offset: 0x173C894 VA: 0x173C894
	public JetPackResponseV2 __assign(int _i, ByteBuffer _bb) { }

	// RVA: 0x173C9E4 Offset: 0x173C9E4 VA: 0x173C9E4
	public string get_TournamentID() { }

	// RVA: 0x173CA20 Offset: 0x173CA20 VA: 0x173CA20
	public Nullable<ArraySegment<byte>> GetTournamentIDBytes() { }

	// RVA: 0x173CA58 Offset: 0x173CA58 VA: 0x173CA58
	public byte[] GetTournamentIDArray() { }

	// RVA: 0x173CAA4 Offset: 0x173CAA4 VA: 0x173CAA4
	public string get_LeaderboardID() { }

	// RVA: 0x173CAE0 Offset: 0x173CAE0 VA: 0x173CAE0
	public Nullable<ArraySegment<byte>> GetLeaderboardIDBytes() { }

	// RVA: 0x173CB18 Offset: 0x173CB18 VA: 0x173CB18
	public byte[] GetLeaderboardIDArray() { }

	// RVA: 0x173CB64 Offset: 0x173CB64 VA: 0x173CB64
	public long get_TournamentType() { }

	// RVA: 0x173CBAC Offset: 0x173CBAC VA: 0x173CBAC
	public Nullable<StreakLeaderboardPlayer> Players(int j) { }

	// RVA: 0x173CC84 Offset: 0x173CC84 VA: 0x173CC84
	public int get_PlayersLength() { }

	// RVA: 0x173CCB8 Offset: 0x173CCB8 VA: 0x173CCB8
	public long get_StartTime() { }

	// RVA: 0x173CD00 Offset: 0x173CD00 VA: 0x173CD00
	public long get_FinishTime() { }

	// RVA: 0x173CD48 Offset: 0x173CD48 VA: 0x173CD48
	public bool get_HasUsedLimitlessLife() { }

	// RVA: 0x173CD90 Offset: 0x173CD90 VA: 0x173CD90
	public bool get_IsClaimed() { }

	// RVA: 0x173CDD8 Offset: 0x173CDD8 VA: 0x173CDD8
	public bool get_IsFinished() { }

	// RVA: 0x173CE20 Offset: 0x173CE20 VA: 0x173CE20
	public bool get_HasCompletedAllStages() { }

	// RVA: 0x173CE68 Offset: 0x173CE68 VA: 0x173CE68
	public long get_UserScore() { }

	// RVA: 0x173CEB0 Offset: 0x173CEB0 VA: 0x173CEB0
	public long get_CurrentStage() { }

	// RVA: 0x173CEF8 Offset: 0x173CEF8 VA: 0x173CEF8
	public long get_MaxReachableStageScore() { }

	// RVA: 0x173CF40 Offset: 0x173CF40 VA: 0x173CF40
	public long get_TotalStageCount() { }

	// RVA: 0x173CF88 Offset: 0x173CF88 VA: 0x173CF88
	public long get_MaxCompetitorCount() { }

	// RVA: 0x173CFD0 Offset: 0x173CFD0 VA: 0x173CFD0
	public static Offset<JetPackResponseV2> CreateJetPackResponseV2(FlatBufferBuilder builder, StringOffset tournamentIDOffset, StringOffset leaderboardIDOffset, long tournamentType = 0, VectorOffset playersOffset, long startTime = 0, long finishTime = 0, bool hasUsedLimitlessLife = False, bool isClaimed = False, bool isFinished = False, bool hasCompletedAllStages = False, long userScore = 0, long currentStage = 0, long maxReachableStageScore = 0, long totalStageCount = 0, long maxCompetitorCount = 0) { }

	// RVA: 0x173D364 Offset: 0x173D364 VA: 0x173D364
	public static void StartJetPackResponseV2(FlatBufferBuilder builder) { }

	// RVA: 0x173D274 Offset: 0x173D274 VA: 0x173D274
	public static void AddTournamentID(FlatBufferBuilder builder, StringOffset tournamentIDOffset) { }

	// RVA: 0x173D254 Offset: 0x173D254 VA: 0x173D254
	public static void AddLeaderboardID(FlatBufferBuilder builder, StringOffset leaderboardIDOffset) { }

	// RVA: 0x173D214 Offset: 0x173D214 VA: 0x173D214
	public static void AddTournamentType(FlatBufferBuilder builder, long tournamentType) { }

	// RVA: 0x173D234 Offset: 0x173D234 VA: 0x173D234
	public static void AddPlayers(FlatBufferBuilder builder, VectorOffset playersOffset) { }

	// RVA: 0x173D37C Offset: 0x173D37C VA: 0x173D37C
	public static VectorOffset CreatePlayersVector(FlatBufferBuilder builder, Offset<StreakLeaderboardPlayer>[] data) { }

	// RVA: 0x173D424 Offset: 0x173D424 VA: 0x173D424
	public static VectorOffset CreatePlayersVectorBlock(FlatBufferBuilder builder, Offset<StreakLeaderboardPlayer>[] data) { }

	// RVA: 0x173D4AC Offset: 0x173D4AC VA: 0x173D4AC
	public static VectorOffset CreatePlayersVectorBlock(FlatBufferBuilder builder, ArraySegment<Offset<StreakLeaderboardPlayer>> data) { }

	// RVA: 0x173D570 Offset: 0x173D570 VA: 0x173D570
	public static VectorOffset CreatePlayersVectorBlock(FlatBufferBuilder builder, IntPtr dataPtr, int sizeInBytes) { }

	// RVA: 0x173D604 Offset: 0x173D604 VA: 0x173D604
	public static void StartPlayersVector(FlatBufferBuilder builder, int numElems) { }

	// RVA: 0x173D1F4 Offset: 0x173D1F4 VA: 0x173D1F4
	public static void AddStartTime(FlatBufferBuilder builder, long startTime) { }

	// RVA: 0x173D1D4 Offset: 0x173D1D4 VA: 0x173D1D4
	public static void AddFinishTime(FlatBufferBuilder builder, long finishTime) { }

	// RVA: 0x173D2F4 Offset: 0x173D2F4 VA: 0x173D2F4
	public static void AddHasUsedLimitlessLife(FlatBufferBuilder builder, bool hasUsedLimitlessLife) { }

	// RVA: 0x173D2D4 Offset: 0x173D2D4 VA: 0x173D2D4
	public static void AddIsClaimed(FlatBufferBuilder builder, bool isClaimed) { }

	// RVA: 0x173D2B4 Offset: 0x173D2B4 VA: 0x173D2B4
	public static void AddIsFinished(FlatBufferBuilder builder, bool isFinished) { }

	// RVA: 0x173D294 Offset: 0x173D294 VA: 0x173D294
	public static void AddHasCompletedAllStages(FlatBufferBuilder builder, bool hasCompletedAllStages) { }

	// RVA: 0x173D1B4 Offset: 0x173D1B4 VA: 0x173D1B4
	public static void AddUserScore(FlatBufferBuilder builder, long userScore) { }

	// RVA: 0x173D194 Offset: 0x173D194 VA: 0x173D194
	public static void AddCurrentStage(FlatBufferBuilder builder, long currentStage) { }

	// RVA: 0x173D174 Offset: 0x173D174 VA: 0x173D174
	public static void AddMaxReachableStageScore(FlatBufferBuilder builder, long maxReachableStageScore) { }

	// RVA: 0x173D154 Offset: 0x173D154 VA: 0x173D154
	public static void AddTotalStageCount(FlatBufferBuilder builder, long totalStageCount) { }

	// RVA: 0x173D134 Offset: 0x173D134 VA: 0x173D134
	public static void AddMaxCompetitorCount(FlatBufferBuilder builder, long maxCompetitorCount) { }

	// RVA: 0x173D314 Offset: 0x173D314 VA: 0x173D314
	public static Offset<JetPackResponseV2> EndJetPackResponseV2(FlatBufferBuilder builder) { }

	// RVA: 0x173D624 Offset: 0x173D624 VA: 0x173D624
	public static void FinishJetPackResponseV2Buffer(FlatBufferBuilder builder, Offset<JetPackResponseV2> offset) { }

	// RVA: 0x173D638 Offset: 0x173D638 VA: 0x173D638
	public static void FinishSizePrefixedJetPackResponseV2Buffer(FlatBufferBuilder builder, Offset<JetPackResponseV2> offset) { }
}

// Namespace: magicsort.schemas.v1.liveops.jet_pack_v2