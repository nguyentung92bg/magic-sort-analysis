public struct GetStreakLeaderboardResponse : IFlatbufferObject // TypeDefIndex: 5600
{
	// Fields
	private Table __p; // 0x0

	// Properties
	public ByteBuffer ByteBuffer { get; }
	public string TournamentID { get; }
	public int PlayersLength { get; }
	public long StartTime { get; }
	public long FinishTime { get; }
	public bool IsClaimed { get; }
	public bool IsFinished { get; }
	public long TournamentType { get; }
	public long UserScore { get; }
	public long MaxReachableScore { get; }

	// Methods

	// RVA: 0x1735864 Offset: 0x1735864 VA: 0x1735864 Slot: 5
	public ByteBuffer get_ByteBuffer() { }

	// RVA: 0x173586C Offset: 0x173586C VA: 0x173586C
	public static void ValidateVersion() { }

	// RVA: 0x1735874 Offset: 0x1735874 VA: 0x1735874
	public static GetStreakLeaderboardResponse GetRootAsGetStreakLeaderboardResponse(ByteBuffer _bb) { }

	// RVA: 0x1735880 Offset: 0x1735880 VA: 0x1735880
	public static GetStreakLeaderboardResponse GetRootAsGetStreakLeaderboardResponse(ByteBuffer _bb, GetStreakLeaderboardResponse obj) { }

	// RVA: 0x1735904 Offset: 0x1735904 VA: 0x1735904
	public static bool VerifyGetStreakLeaderboardResponse(ByteBuffer _bb) { }

	// RVA: 0x17359D8 Offset: 0x17359D8 VA: 0x17359D8 Slot: 4
	public void __init(int _i, ByteBuffer _bb) { }

	// RVA: 0x17358C4 Offset: 0x17358C4 VA: 0x17358C4
	public GetStreakLeaderboardResponse __assign(int _i, ByteBuffer _bb) { }

	// RVA: 0x1735A14 Offset: 0x1735A14 VA: 0x1735A14
	public string get_TournamentID() { }

	// RVA: 0x1735A50 Offset: 0x1735A50 VA: 0x1735A50
	public Nullable<ArraySegment<byte>> GetTournamentIDBytes() { }

	// RVA: 0x1735A88 Offset: 0x1735A88 VA: 0x1735A88
	public byte[] GetTournamentIDArray() { }

	// RVA: 0x1735AD4 Offset: 0x1735AD4 VA: 0x1735AD4
	public Nullable<StreakLeaderboardPlayer> Players(int j) { }

	// RVA: 0x1735BAC Offset: 0x1735BAC VA: 0x1735BAC
	public int get_PlayersLength() { }

	// RVA: 0x1735BE0 Offset: 0x1735BE0 VA: 0x1735BE0
	public long get_StartTime() { }

	// RVA: 0x1735C28 Offset: 0x1735C28 VA: 0x1735C28
	public long get_FinishTime() { }

	// RVA: 0x1735C70 Offset: 0x1735C70 VA: 0x1735C70
	public bool get_IsClaimed() { }

	// RVA: 0x1735CB8 Offset: 0x1735CB8 VA: 0x1735CB8
	public bool get_IsFinished() { }

	// RVA: 0x1735D00 Offset: 0x1735D00 VA: 0x1735D00
	public long get_TournamentType() { }

	// RVA: 0x1735D48 Offset: 0x1735D48 VA: 0x1735D48
	public long get_UserScore() { }

	// RVA: 0x1735D90 Offset: 0x1735D90 VA: 0x1735D90
	public long get_MaxReachableScore() { }

	// RVA: 0x1735DD8 Offset: 0x1735DD8 VA: 0x1735DD8
	public static Offset<GetStreakLeaderboardResponse> CreateGetStreakLeaderboardResponse(FlatBufferBuilder builder, StringOffset tournamentIDOffset, VectorOffset playersOffset, long startTime = 0, long finishTime = 0, bool isClaimed = False, bool isFinished = False, long tournamentType = 0, long userScore = 0, long maxReachableScore = 0) { }

	// RVA: 0x173602C Offset: 0x173602C VA: 0x173602C
	public static void StartGetStreakLeaderboardResponse(FlatBufferBuilder builder) { }

	// RVA: 0x1735F7C Offset: 0x1735F7C VA: 0x1735F7C
	public static void AddTournamentID(FlatBufferBuilder builder, StringOffset tournamentIDOffset) { }

	// RVA: 0x1735F5C Offset: 0x1735F5C VA: 0x1735F5C
	public static void AddPlayers(FlatBufferBuilder builder, VectorOffset playersOffset) { }

	// RVA: 0x1736044 Offset: 0x1736044 VA: 0x1736044
	public static VectorOffset CreatePlayersVector(FlatBufferBuilder builder, Offset<StreakLeaderboardPlayer>[] data) { }

	// RVA: 0x17360EC Offset: 0x17360EC VA: 0x17360EC
	public static VectorOffset CreatePlayersVectorBlock(FlatBufferBuilder builder, Offset<StreakLeaderboardPlayer>[] data) { }

	// RVA: 0x1736174 Offset: 0x1736174 VA: 0x1736174
	public static VectorOffset CreatePlayersVectorBlock(FlatBufferBuilder builder, ArraySegment<Offset<StreakLeaderboardPlayer>> data) { }

	// RVA: 0x1736238 Offset: 0x1736238 VA: 0x1736238
	public static VectorOffset CreatePlayersVectorBlock(FlatBufferBuilder builder, IntPtr dataPtr, int sizeInBytes) { }

	// RVA: 0x17362CC Offset: 0x17362CC VA: 0x17362CC
	public static void StartPlayersVector(FlatBufferBuilder builder, int numElems) { }

	// RVA: 0x1735F3C Offset: 0x1735F3C VA: 0x1735F3C
	public static void AddStartTime(FlatBufferBuilder builder, long startTime) { }

	// RVA: 0x1735F1C Offset: 0x1735F1C VA: 0x1735F1C
	public static void AddFinishTime(FlatBufferBuilder builder, long finishTime) { }

	// RVA: 0x1735FBC Offset: 0x1735FBC VA: 0x1735FBC
	public static void AddIsClaimed(FlatBufferBuilder builder, bool isClaimed) { }

	// RVA: 0x1735F9C Offset: 0x1735F9C VA: 0x1735F9C
	public static void AddIsFinished(FlatBufferBuilder builder, bool isFinished) { }

	// RVA: 0x1735EFC Offset: 0x1735EFC VA: 0x1735EFC
	public static void AddTournamentType(FlatBufferBuilder builder, long tournamentType) { }

	// RVA: 0x1735EDC Offset: 0x1735EDC VA: 0x1735EDC
	public static void AddUserScore(FlatBufferBuilder builder, long userScore) { }

	// RVA: 0x1735EBC Offset: 0x1735EBC VA: 0x1735EBC
	public static void AddMaxReachableScore(FlatBufferBuilder builder, long maxReachableScore) { }

	// RVA: 0x1735FDC Offset: 0x1735FDC VA: 0x1735FDC
	public static Offset<GetStreakLeaderboardResponse> EndGetStreakLeaderboardResponse(FlatBufferBuilder builder) { }

	// RVA: 0x17362EC Offset: 0x17362EC VA: 0x17362EC
	public static void FinishGetStreakLeaderboardResponseBuffer(FlatBufferBuilder builder, Offset<GetStreakLeaderboardResponse> offset) { }

	// RVA: 0x1736300 Offset: 0x1736300 VA: 0x1736300
	public static void FinishSizePrefixedGetStreakLeaderboardResponseBuffer(FlatBufferBuilder builder, Offset<GetStreakLeaderboardResponse> offset) { }
}

// Namespace: magicsort.schemas.v1.liveops.streak_leaderboard