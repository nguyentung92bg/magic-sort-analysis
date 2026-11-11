public struct StagedSkyJumpTournamentLeaderboardResponse : IFlatbufferObject // TypeDefIndex: 5610
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
	public long Stage { get; }
	public long UserMaxStepReached { get; }

	// Methods

	// RVA: 0x1738058 Offset: 0x1738058 VA: 0x1738058 Slot: 5
	public ByteBuffer get_ByteBuffer() { }

	// RVA: 0x1738060 Offset: 0x1738060 VA: 0x1738060
	public static void ValidateVersion() { }

	// RVA: 0x1738068 Offset: 0x1738068 VA: 0x1738068
	public static StagedSkyJumpTournamentLeaderboardResponse GetRootAsStagedSkyJumpTournamentLeaderboardResponse(ByteBuffer _bb) { }

	// RVA: 0x1738074 Offset: 0x1738074 VA: 0x1738074
	public static StagedSkyJumpTournamentLeaderboardResponse GetRootAsStagedSkyJumpTournamentLeaderboardResponse(ByteBuffer _bb, StagedSkyJumpTournamentLeaderboardResponse obj) { }

	// RVA: 0x17380F8 Offset: 0x17380F8 VA: 0x17380F8
	public static bool VerifyStagedSkyJumpTournamentLeaderboardResponse(ByteBuffer _bb) { }

	// RVA: 0x17381CC Offset: 0x17381CC VA: 0x17381CC Slot: 4
	public void __init(int _i, ByteBuffer _bb) { }

	// RVA: 0x17380B8 Offset: 0x17380B8 VA: 0x17380B8
	public StagedSkyJumpTournamentLeaderboardResponse __assign(int _i, ByteBuffer _bb) { }

	// RVA: 0x1738208 Offset: 0x1738208 VA: 0x1738208
	public string get_TournamentId() { }

	// RVA: 0x1738244 Offset: 0x1738244 VA: 0x1738244
	public Nullable<ArraySegment<byte>> GetTournamentIdBytes() { }

	// RVA: 0x173827C Offset: 0x173827C VA: 0x173827C
	public byte[] GetTournamentIdArray() { }

	// RVA: 0x17382C8 Offset: 0x17382C8 VA: 0x17382C8
	public long get_TournamentType() { }

	// RVA: 0x1738310 Offset: 0x1738310 VA: 0x1738310
	public Nullable<SkyJumpStepDetail> UserDetailsBySteps(int j) { }

	// RVA: 0x17383E4 Offset: 0x17383E4 VA: 0x17383E4
	public int get_UserDetailsByStepsLength() { }

	// RVA: 0x1738418 Offset: 0x1738418 VA: 0x1738418
	public Nullable<StringKeyValuePair> PlayersImages(int j) { }

	// RVA: 0x17384F0 Offset: 0x17384F0 VA: 0x17384F0
	public int get_PlayersImagesLength() { }

	// RVA: 0x1738524 Offset: 0x1738524 VA: 0x1738524
	public long get_StartTime() { }

	// RVA: 0x173856C Offset: 0x173856C VA: 0x173856C
	public long get_FinishTime() { }

	// RVA: 0x17385B4 Offset: 0x17385B4 VA: 0x17385B4
	public bool get_IsClaimed() { }

	// RVA: 0x17385FC Offset: 0x17385FC VA: 0x17385FC
	public bool get_IsFinished() { }

	// RVA: 0x1738644 Offset: 0x1738644 VA: 0x1738644
	public long get_UserScore() { }

	// RVA: 0x173868C Offset: 0x173868C VA: 0x173868C
	public long get_Stage() { }

	// RVA: 0x17386D4 Offset: 0x17386D4 VA: 0x17386D4
	public long get_UserMaxStepReached() { }

	// RVA: 0x173871C Offset: 0x173871C VA: 0x173871C
	public static Offset<StagedSkyJumpTournamentLeaderboardResponse> CreateStagedSkyJumpTournamentLeaderboardResponse(FlatBufferBuilder builder, StringOffset tournament_idOffset, long tournament_type = 0, VectorOffset user_details_by_stepsOffset, VectorOffset players_imagesOffset, long start_time = 0, long finish_time = 0, bool is_claimed = False, bool is_finished = False, long user_score = 0, long stage = 0, long user_max_step_reached = 0) { }

	// RVA: 0x17389DC Offset: 0x17389DC VA: 0x17389DC
	public static void StartStagedSkyJumpTournamentLeaderboardResponse(FlatBufferBuilder builder) { }

	// RVA: 0x173892C Offset: 0x173892C VA: 0x173892C
	public static void AddTournamentId(FlatBufferBuilder builder, StringOffset tournamentIdOffset) { }

	// RVA: 0x17388CC Offset: 0x17388CC VA: 0x17388CC
	public static void AddTournamentType(FlatBufferBuilder builder, long tournamentType) { }

	// RVA: 0x173890C Offset: 0x173890C VA: 0x173890C
	public static void AddUserDetailsBySteps(FlatBufferBuilder builder, VectorOffset userDetailsByStepsOffset) { }

	// RVA: 0x17389F4 Offset: 0x17389F4 VA: 0x17389F4
	public static VectorOffset CreateUserDetailsByStepsVector(FlatBufferBuilder builder, Offset<SkyJumpStepDetail>[] data) { }

	// RVA: 0x1738A9C Offset: 0x1738A9C VA: 0x1738A9C
	public static VectorOffset CreateUserDetailsByStepsVectorBlock(FlatBufferBuilder builder, Offset<SkyJumpStepDetail>[] data) { }

	// RVA: 0x1738B24 Offset: 0x1738B24 VA: 0x1738B24
	public static VectorOffset CreateUserDetailsByStepsVectorBlock(FlatBufferBuilder builder, ArraySegment<Offset<SkyJumpStepDetail>> data) { }

	// RVA: 0x1738BE8 Offset: 0x1738BE8 VA: 0x1738BE8
	public static VectorOffset CreateUserDetailsByStepsVectorBlock(FlatBufferBuilder builder, IntPtr dataPtr, int sizeInBytes) { }

	// RVA: 0x1738C7C Offset: 0x1738C7C VA: 0x1738C7C
	public static void StartUserDetailsByStepsVector(FlatBufferBuilder builder, int numElems) { }

	// RVA: 0x17388EC Offset: 0x17388EC VA: 0x17388EC
	public static void AddPlayersImages(FlatBufferBuilder builder, VectorOffset playersImagesOffset) { }

	// RVA: 0x1738C9C Offset: 0x1738C9C VA: 0x1738C9C
	public static VectorOffset CreatePlayersImagesVector(FlatBufferBuilder builder, Offset<StringKeyValuePair>[] data) { }

	// RVA: 0x1738D44 Offset: 0x1738D44 VA: 0x1738D44
	public static VectorOffset CreatePlayersImagesVectorBlock(FlatBufferBuilder builder, Offset<StringKeyValuePair>[] data) { }

	// RVA: 0x1738DCC Offset: 0x1738DCC VA: 0x1738DCC
	public static VectorOffset CreatePlayersImagesVectorBlock(FlatBufferBuilder builder, ArraySegment<Offset<StringKeyValuePair>> data) { }

	// RVA: 0x1738E90 Offset: 0x1738E90 VA: 0x1738E90
	public static VectorOffset CreatePlayersImagesVectorBlock(FlatBufferBuilder builder, IntPtr dataPtr, int sizeInBytes) { }

	// RVA: 0x1738F24 Offset: 0x1738F24 VA: 0x1738F24
	public static void StartPlayersImagesVector(FlatBufferBuilder builder, int numElems) { }

	// RVA: 0x17388AC Offset: 0x17388AC VA: 0x17388AC
	public static void AddStartTime(FlatBufferBuilder builder, long startTime) { }

	// RVA: 0x173888C Offset: 0x173888C VA: 0x173888C
	public static void AddFinishTime(FlatBufferBuilder builder, long finishTime) { }

	// RVA: 0x173896C Offset: 0x173896C VA: 0x173896C
	public static void AddIsClaimed(FlatBufferBuilder builder, bool isClaimed) { }

	// RVA: 0x173894C Offset: 0x173894C VA: 0x173894C
	public static void AddIsFinished(FlatBufferBuilder builder, bool isFinished) { }

	// RVA: 0x173886C Offset: 0x173886C VA: 0x173886C
	public static void AddUserScore(FlatBufferBuilder builder, long userScore) { }

	// RVA: 0x173884C Offset: 0x173884C VA: 0x173884C
	public static void AddStage(FlatBufferBuilder builder, long stage) { }

	// RVA: 0x173882C Offset: 0x173882C VA: 0x173882C
	public static void AddUserMaxStepReached(FlatBufferBuilder builder, long userMaxStepReached) { }

	// RVA: 0x173898C Offset: 0x173898C VA: 0x173898C
	public static Offset<StagedSkyJumpTournamentLeaderboardResponse> EndStagedSkyJumpTournamentLeaderboardResponse(FlatBufferBuilder builder) { }

	// RVA: 0x1738F44 Offset: 0x1738F44 VA: 0x1738F44
	public static void FinishStagedSkyJumpTournamentLeaderboardResponseBuffer(FlatBufferBuilder builder, Offset<StagedSkyJumpTournamentLeaderboardResponse> offset) { }

	// RVA: 0x1738F58 Offset: 0x1738F58 VA: 0x1738F58
	public static void FinishSizePrefixedStagedSkyJumpTournamentLeaderboardResponseBuffer(FlatBufferBuilder builder, Offset<StagedSkyJumpTournamentLeaderboardResponse> offset) { }
}

// Namespace: magicsort.schemas.v1.liveops.skyjump