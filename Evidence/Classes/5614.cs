public struct GetMagicStreakLeaderboardResponse : IFlatbufferObject // TypeDefIndex: 5614
{
	// Fields
	private Table __p; // 0x0

	// Properties
	public ByteBuffer ByteBuffer { get; }
	public string TournamentID { get; }
	public long TournamentType { get; }
	public long StreakCupWins { get; }
	public int PlayersLength { get; }
	public long StartTime { get; }
	public long FinishTime { get; }
	public bool IsClaimed { get; }
	public bool IsFinished { get; }
	public long UserScore { get; }

	// Methods

	// RVA: 0x1739970 Offset: 0x1739970 VA: 0x1739970 Slot: 5
	public ByteBuffer get_ByteBuffer() { }

	// RVA: 0x1739978 Offset: 0x1739978 VA: 0x1739978
	public static void ValidateVersion() { }

	// RVA: 0x1739980 Offset: 0x1739980 VA: 0x1739980
	public static GetMagicStreakLeaderboardResponse GetRootAsGetMagicStreakLeaderboardResponse(ByteBuffer _bb) { }

	// RVA: 0x173998C Offset: 0x173998C VA: 0x173998C
	public static GetMagicStreakLeaderboardResponse GetRootAsGetMagicStreakLeaderboardResponse(ByteBuffer _bb, GetMagicStreakLeaderboardResponse obj) { }

	// RVA: 0x1739A10 Offset: 0x1739A10 VA: 0x1739A10
	public static bool VerifyGetMagicStreakLeaderboardResponse(ByteBuffer _bb) { }

	// RVA: 0x1739AE4 Offset: 0x1739AE4 VA: 0x1739AE4 Slot: 4
	public void __init(int _i, ByteBuffer _bb) { }

	// RVA: 0x17399D0 Offset: 0x17399D0 VA: 0x17399D0
	public GetMagicStreakLeaderboardResponse __assign(int _i, ByteBuffer _bb) { }

	// RVA: 0x1739B20 Offset: 0x1739B20 VA: 0x1739B20
	public string get_TournamentID() { }

	// RVA: 0x1739B5C Offset: 0x1739B5C VA: 0x1739B5C
	public Nullable<ArraySegment<byte>> GetTournamentIDBytes() { }

	// RVA: 0x1739B94 Offset: 0x1739B94 VA: 0x1739B94
	public byte[] GetTournamentIDArray() { }

	// RVA: 0x1739BE0 Offset: 0x1739BE0 VA: 0x1739BE0
	public long get_TournamentType() { }

	// RVA: 0x1739C28 Offset: 0x1739C28 VA: 0x1739C28
	public long get_StreakCupWins() { }

	// RVA: 0x1739C70 Offset: 0x1739C70 VA: 0x1739C70
	public Nullable<StreakLeaderboardPlayer> Players(int j) { }

	// RVA: 0x1739D48 Offset: 0x1739D48 VA: 0x1739D48
	public int get_PlayersLength() { }

	// RVA: 0x1739D7C Offset: 0x1739D7C VA: 0x1739D7C
	public long get_StartTime() { }

	// RVA: 0x1739DC4 Offset: 0x1739DC4 VA: 0x1739DC4
	public long get_FinishTime() { }

	// RVA: 0x1739E0C Offset: 0x1739E0C VA: 0x1739E0C
	public bool get_IsClaimed() { }

	// RVA: 0x1739E54 Offset: 0x1739E54 VA: 0x1739E54
	public bool get_IsFinished() { }

	// RVA: 0x1739E9C Offset: 0x1739E9C VA: 0x1739E9C
	public long get_UserScore() { }

	// RVA: 0x1739EE4 Offset: 0x1739EE4 VA: 0x1739EE4
	public static Offset<GetMagicStreakLeaderboardResponse> CreateGetMagicStreakLeaderboardResponse(FlatBufferBuilder builder, StringOffset tournamentIDOffset, long tournamentType = 0, long streakCupWins = 0, VectorOffset playersOffset, long startTime = 0, long finishTime = 0, bool isClaimed = False, bool isFinished = False, long userScore = 0) { }

	// RVA: 0x173A13C Offset: 0x173A13C VA: 0x173A13C
	public static void StartGetMagicStreakLeaderboardResponse(FlatBufferBuilder builder) { }

	// RVA: 0x173A08C Offset: 0x173A08C VA: 0x173A08C
	public static void AddTournamentID(FlatBufferBuilder builder, StringOffset tournamentIDOffset) { }

	// RVA: 0x173A04C Offset: 0x173A04C VA: 0x173A04C
	public static void AddTournamentType(FlatBufferBuilder builder, long tournamentType) { }

	// RVA: 0x173A02C Offset: 0x173A02C VA: 0x173A02C
	public static void AddStreakCupWins(FlatBufferBuilder builder, long streakCupWins) { }

	// RVA: 0x173A06C Offset: 0x173A06C VA: 0x173A06C
	public static void AddPlayers(FlatBufferBuilder builder, VectorOffset playersOffset) { }

	// RVA: 0x173A154 Offset: 0x173A154 VA: 0x173A154
	public static VectorOffset CreatePlayersVector(FlatBufferBuilder builder, Offset<StreakLeaderboardPlayer>[] data) { }

	// RVA: 0x173A1FC Offset: 0x173A1FC VA: 0x173A1FC
	public static VectorOffset CreatePlayersVectorBlock(FlatBufferBuilder builder, Offset<StreakLeaderboardPlayer>[] data) { }

	// RVA: 0x173A284 Offset: 0x173A284 VA: 0x173A284
	public static VectorOffset CreatePlayersVectorBlock(FlatBufferBuilder builder, ArraySegment<Offset<StreakLeaderboardPlayer>> data) { }

	// RVA: 0x173A348 Offset: 0x173A348 VA: 0x173A348
	public static VectorOffset CreatePlayersVectorBlock(FlatBufferBuilder builder, IntPtr dataPtr, int sizeInBytes) { }

	// RVA: 0x173A3DC Offset: 0x173A3DC VA: 0x173A3DC
	public static void StartPlayersVector(FlatBufferBuilder builder, int numElems) { }

	// RVA: 0x173A00C Offset: 0x173A00C VA: 0x173A00C
	public static void AddStartTime(FlatBufferBuilder builder, long startTime) { }

	// RVA: 0x1739FEC Offset: 0x1739FEC VA: 0x1739FEC
	public static void AddFinishTime(FlatBufferBuilder builder, long finishTime) { }

	// RVA: 0x173A0CC Offset: 0x173A0CC VA: 0x173A0CC
	public static void AddIsClaimed(FlatBufferBuilder builder, bool isClaimed) { }

	// RVA: 0x173A0AC Offset: 0x173A0AC VA: 0x173A0AC
	public static void AddIsFinished(FlatBufferBuilder builder, bool isFinished) { }

	// RVA: 0x1739FCC Offset: 0x1739FCC VA: 0x1739FCC
	public static void AddUserScore(FlatBufferBuilder builder, long userScore) { }

	// RVA: 0x173A0EC Offset: 0x173A0EC VA: 0x173A0EC
	public static Offset<GetMagicStreakLeaderboardResponse> EndGetMagicStreakLeaderboardResponse(FlatBufferBuilder builder) { }

	// RVA: 0x173A3FC Offset: 0x173A3FC VA: 0x173A3FC
	public static void FinishGetMagicStreakLeaderboardResponseBuffer(FlatBufferBuilder builder, Offset<GetMagicStreakLeaderboardResponse> offset) { }

	// RVA: 0x173A410 Offset: 0x173A410 VA: 0x173A410
	public static void FinishSizePrefixedGetMagicStreakLeaderboardResponseBuffer(FlatBufferBuilder builder, Offset<GetMagicStreakLeaderboardResponse> offset) { }
}

// Namespace: magicsort.schemas.v1.liveops.magic_streak_leaderboard