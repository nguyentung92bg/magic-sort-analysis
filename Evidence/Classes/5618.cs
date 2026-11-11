public struct LavaTournamentData : IFlatbufferObject // TypeDefIndex: 5618
{
	// Fields
	private Table __p; // 0x0

	// Properties
	public ByteBuffer ByteBuffer { get; }
	public string TournamentId { get; }
	public long TournamentType { get; }
	public int UserDetailsByStepsLength { get; }
	public int PlayersImagesLength { get; }
	public long StartTime { get; }
	public long FinishTime { get; }
	public bool IsClaimed { get; }
	public bool IsFinished { get; }
	public long UserScore { get; }
	public long UserMaxStepReached { get; }

	// Methods

	// RVA: 0x173B014 Offset: 0x173B014 VA: 0x173B014 Slot: 5
	public ByteBuffer get_ByteBuffer() { }

	// RVA: 0x173B01C Offset: 0x173B01C VA: 0x173B01C
	public static void ValidateVersion() { }

	// RVA: 0x173B024 Offset: 0x173B024 VA: 0x173B024
	public static LavaTournamentData GetRootAsLavaTournamentData(ByteBuffer _bb) { }

	// RVA: 0x173B030 Offset: 0x173B030 VA: 0x173B030
	public static LavaTournamentData GetRootAsLavaTournamentData(ByteBuffer _bb, LavaTournamentData obj) { }

	// RVA: 0x173B0B4 Offset: 0x173B0B4 VA: 0x173B0B4
	public static bool VerifyLavaTournamentData(ByteBuffer _bb) { }

	// RVA: 0x173B188 Offset: 0x173B188 VA: 0x173B188 Slot: 4
	public void __init(int _i, ByteBuffer _bb) { }

	// RVA: 0x173B074 Offset: 0x173B074 VA: 0x173B074
	public LavaTournamentData __assign(int _i, ByteBuffer _bb) { }

	// RVA: 0x173B1C4 Offset: 0x173B1C4 VA: 0x173B1C4
	public string get_TournamentId() { }

	// RVA: 0x173B200 Offset: 0x173B200 VA: 0x173B200
	public Nullable<ArraySegment<byte>> GetTournamentIdBytes() { }

	// RVA: 0x173B238 Offset: 0x173B238 VA: 0x173B238
	public byte[] GetTournamentIdArray() { }

	// RVA: 0x173B284 Offset: 0x173B284 VA: 0x173B284
	public long get_TournamentType() { }

	// RVA: 0x173B2CC Offset: 0x173B2CC VA: 0x173B2CC
	public Nullable<LavaDummyStepDetail> UserDetailsBySteps(int j) { }

	// RVA: 0x173B3A0 Offset: 0x173B3A0 VA: 0x173B3A0
	public int get_UserDetailsByStepsLength() { }

	// RVA: 0x173B3D4 Offset: 0x173B3D4 VA: 0x173B3D4
	public Nullable<StringKeyValuePair> PlayersImages(int j) { }

	// RVA: 0x173B4AC Offset: 0x173B4AC VA: 0x173B4AC
	public int get_PlayersImagesLength() { }

	// RVA: 0x173B4E0 Offset: 0x173B4E0 VA: 0x173B4E0
	public long get_StartTime() { }

	// RVA: 0x173B528 Offset: 0x173B528 VA: 0x173B528
	public long get_FinishTime() { }

	// RVA: 0x173B570 Offset: 0x173B570 VA: 0x173B570
	public bool get_IsClaimed() { }

	// RVA: 0x173B5B8 Offset: 0x173B5B8 VA: 0x173B5B8
	public bool get_IsFinished() { }

	// RVA: 0x173B600 Offset: 0x173B600 VA: 0x173B600
	public long get_UserScore() { }

	// RVA: 0x173B648 Offset: 0x173B648 VA: 0x173B648
	public long get_UserMaxStepReached() { }

	// RVA: 0x173B690 Offset: 0x173B690 VA: 0x173B690
	public static Offset<LavaTournamentData> CreateLavaTournamentData(FlatBufferBuilder builder, StringOffset tournament_idOffset, long tournament_type = 0, VectorOffset user_details_by_stepsOffset, VectorOffset players_imagesOffset, long start_time = 0, long finish_time = 0, bool is_claimed = False, bool is_finished = False, long user_score = 0, long user_max_step_reached = 0) { }

	// RVA: 0x173B914 Offset: 0x173B914 VA: 0x173B914
	public static void StartLavaTournamentData(FlatBufferBuilder builder) { }

	// RVA: 0x173B864 Offset: 0x173B864 VA: 0x173B864
	public static void AddTournamentId(FlatBufferBuilder builder, StringOffset tournamentIdOffset) { }

	// RVA: 0x173B804 Offset: 0x173B804 VA: 0x173B804
	public static void AddTournamentType(FlatBufferBuilder builder, long tournamentType) { }

	// RVA: 0x173B844 Offset: 0x173B844 VA: 0x173B844
	public static void AddUserDetailsBySteps(FlatBufferBuilder builder, VectorOffset userDetailsByStepsOffset) { }

	// RVA: 0x173B92C Offset: 0x173B92C VA: 0x173B92C
	public static VectorOffset CreateUserDetailsByStepsVector(FlatBufferBuilder builder, Offset<LavaDummyStepDetail>[] data) { }

	// RVA: 0x173B9D4 Offset: 0x173B9D4 VA: 0x173B9D4
	public static VectorOffset CreateUserDetailsByStepsVectorBlock(FlatBufferBuilder builder, Offset<LavaDummyStepDetail>[] data) { }

	// RVA: 0x173BA5C Offset: 0x173BA5C VA: 0x173BA5C
	public static VectorOffset CreateUserDetailsByStepsVectorBlock(FlatBufferBuilder builder, ArraySegment<Offset<LavaDummyStepDetail>> data) { }

	// RVA: 0x173BB20 Offset: 0x173BB20 VA: 0x173BB20
	public static VectorOffset CreateUserDetailsByStepsVectorBlock(FlatBufferBuilder builder, IntPtr dataPtr, int sizeInBytes) { }

	// RVA: 0x173BBB4 Offset: 0x173BBB4 VA: 0x173BBB4
	public static void StartUserDetailsByStepsVector(FlatBufferBuilder builder, int numElems) { }

	// RVA: 0x173B824 Offset: 0x173B824 VA: 0x173B824
	public static void AddPlayersImages(FlatBufferBuilder builder, VectorOffset playersImagesOffset) { }

	// RVA: 0x173BBD4 Offset: 0x173BBD4 VA: 0x173BBD4
	public static VectorOffset CreatePlayersImagesVector(FlatBufferBuilder builder, Offset<StringKeyValuePair>[] data) { }

	// RVA: 0x173BC7C Offset: 0x173BC7C VA: 0x173BC7C
	public static VectorOffset CreatePlayersImagesVectorBlock(FlatBufferBuilder builder, Offset<StringKeyValuePair>[] data) { }

	// RVA: 0x173BD04 Offset: 0x173BD04 VA: 0x173BD04
	public static VectorOffset CreatePlayersImagesVectorBlock(FlatBufferBuilder builder, ArraySegment<Offset<StringKeyValuePair>> data) { }

	// RVA: 0x173BDC8 Offset: 0x173BDC8 VA: 0x173BDC8
	public static VectorOffset CreatePlayersImagesVectorBlock(FlatBufferBuilder builder, IntPtr dataPtr, int sizeInBytes) { }

	// RVA: 0x173BE5C Offset: 0x173BE5C VA: 0x173BE5C
	public static void StartPlayersImagesVector(FlatBufferBuilder builder, int numElems) { }

	// RVA: 0x173B7E4 Offset: 0x173B7E4 VA: 0x173B7E4
	public static void AddStartTime(FlatBufferBuilder builder, long startTime) { }

	// RVA: 0x173B7C4 Offset: 0x173B7C4 VA: 0x173B7C4
	public static void AddFinishTime(FlatBufferBuilder builder, long finishTime) { }

	// RVA: 0x173B8A4 Offset: 0x173B8A4 VA: 0x173B8A4
	public static void AddIsClaimed(FlatBufferBuilder builder, bool isClaimed) { }

	// RVA: 0x173B884 Offset: 0x173B884 VA: 0x173B884
	public static void AddIsFinished(FlatBufferBuilder builder, bool isFinished) { }

	// RVA: 0x173B7A4 Offset: 0x173B7A4 VA: 0x173B7A4
	public static void AddUserScore(FlatBufferBuilder builder, long userScore) { }

	// RVA: 0x173B784 Offset: 0x173B784 VA: 0x173B784
	public static void AddUserMaxStepReached(FlatBufferBuilder builder, long userMaxStepReached) { }

	// RVA: 0x173B8C4 Offset: 0x173B8C4 VA: 0x173B8C4
	public static Offset<LavaTournamentData> EndLavaTournamentData(FlatBufferBuilder builder) { }

	// RVA: 0x173BE7C Offset: 0x173BE7C VA: 0x173BE7C
	public static void FinishLavaTournamentDataBuffer(FlatBufferBuilder builder, Offset<LavaTournamentData> offset) { }

	// RVA: 0x173BE90 Offset: 0x173BE90 VA: 0x173BE90
	public static void FinishSizePrefixedLavaTournamentDataBuffer(FlatBufferBuilder builder, Offset<LavaTournamentData> offset) { }
}

// Namespace: magicsort.schemas.v1.liveops.lava_leaderboard