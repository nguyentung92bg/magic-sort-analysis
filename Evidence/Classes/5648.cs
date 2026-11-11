public struct GetChampionsLeagueLeaderboardResponse : IFlatbufferObject // TypeDefIndex: 5648
{
	// Fields
	private Table __p; // 0x0

	// Properties
	public ByteBuffer ByteBuffer { get; }
	public string TournamentId { get; }
	public string LeaderboardId { get; }
	public int PlayersLength { get; }
	public long StartTime { get; }
	public long FinishTime { get; }
	public long JoinWindowEndEpoch { get; }
	public int EloPromotedUserCountMapLength { get; }
	public int EloDemotedUserCountMapLength { get; }
	public long Capacity { get; }
	public long Elo { get; }
	public LeagueStatus State { get; }

	// Methods

	// RVA: 0x1742DDC Offset: 0x1742DDC VA: 0x1742DDC Slot: 5
	public ByteBuffer get_ByteBuffer() { }

	// RVA: 0x1742DE4 Offset: 0x1742DE4 VA: 0x1742DE4
	public static void ValidateVersion() { }

	// RVA: 0x1742DEC Offset: 0x1742DEC VA: 0x1742DEC
	public static GetChampionsLeagueLeaderboardResponse GetRootAsGetChampionsLeagueLeaderboardResponse(ByteBuffer _bb) { }

	// RVA: 0x1742DF8 Offset: 0x1742DF8 VA: 0x1742DF8
	public static GetChampionsLeagueLeaderboardResponse GetRootAsGetChampionsLeagueLeaderboardResponse(ByteBuffer _bb, GetChampionsLeagueLeaderboardResponse obj) { }

	// RVA: 0x1742E7C Offset: 0x1742E7C VA: 0x1742E7C
	public static bool VerifyGetChampionsLeagueLeaderboardResponse(ByteBuffer _bb) { }

	// RVA: 0x1742F50 Offset: 0x1742F50 VA: 0x1742F50 Slot: 4
	public void __init(int _i, ByteBuffer _bb) { }

	// RVA: 0x1742E3C Offset: 0x1742E3C VA: 0x1742E3C
	public GetChampionsLeagueLeaderboardResponse __assign(int _i, ByteBuffer _bb) { }

	// RVA: 0x1742F8C Offset: 0x1742F8C VA: 0x1742F8C
	public string get_TournamentId() { }

	// RVA: 0x1742FC8 Offset: 0x1742FC8 VA: 0x1742FC8
	public Nullable<ArraySegment<byte>> GetTournamentIdBytes() { }

	// RVA: 0x1743000 Offset: 0x1743000 VA: 0x1743000
	public byte[] GetTournamentIdArray() { }

	// RVA: 0x174304C Offset: 0x174304C VA: 0x174304C
	public string get_LeaderboardId() { }

	// RVA: 0x1743088 Offset: 0x1743088 VA: 0x1743088
	public Nullable<ArraySegment<byte>> GetLeaderboardIdBytes() { }

	// RVA: 0x17430C0 Offset: 0x17430C0 VA: 0x17430C0
	public byte[] GetLeaderboardIdArray() { }

	// RVA: 0x174310C Offset: 0x174310C VA: 0x174310C
	public Nullable<ChampionsLeagueLeaderboardPlayer> Players(int j) { }

	// RVA: 0x17431E0 Offset: 0x17431E0 VA: 0x17431E0
	public int get_PlayersLength() { }

	// RVA: 0x1743214 Offset: 0x1743214 VA: 0x1743214
	public long get_StartTime() { }

	// RVA: 0x174325C Offset: 0x174325C VA: 0x174325C
	public long get_FinishTime() { }

	// RVA: 0x17432A4 Offset: 0x17432A4 VA: 0x17432A4
	public long get_JoinWindowEndEpoch() { }

	// RVA: 0x17432EC Offset: 0x17432EC VA: 0x17432EC
	public Nullable<Int64KeyValuePair> EloPromotedUserCountMap(int j) { }

	// RVA: 0x17433C4 Offset: 0x17433C4 VA: 0x17433C4
	public int get_EloPromotedUserCountMapLength() { }

	// RVA: 0x17433F8 Offset: 0x17433F8 VA: 0x17433F8
	public Nullable<Int64KeyValuePair> EloDemotedUserCountMap(int j) { }

	// RVA: 0x17434D0 Offset: 0x17434D0 VA: 0x17434D0
	public int get_EloDemotedUserCountMapLength() { }

	// RVA: 0x1743504 Offset: 0x1743504 VA: 0x1743504
	public long get_Capacity() { }

	// RVA: 0x174354C Offset: 0x174354C VA: 0x174354C
	public long get_Elo() { }

	// RVA: 0x1743594 Offset: 0x1743594 VA: 0x1743594
	public LeagueStatus get_State() { }

	// RVA: 0x17435D8 Offset: 0x17435D8 VA: 0x17435D8
	public static Offset<GetChampionsLeagueLeaderboardResponse> CreateGetChampionsLeagueLeaderboardResponse(FlatBufferBuilder builder, StringOffset tournament_idOffset, StringOffset leaderboard_idOffset, VectorOffset playersOffset, long start_time = 0, long finish_time = 0, long join_window_end_epoch = 0, VectorOffset elo_promoted_user_count_mapOffset, VectorOffset elo_demoted_user_count_mapOffset, long capacity = 0, long elo = 0, LeagueStatus state = 0) { }

	// RVA: 0x1743898 Offset: 0x1743898 VA: 0x1743898
	public static void StartGetChampionsLeagueLeaderboardResponse(FlatBufferBuilder builder) { }

	// RVA: 0x1743808 Offset: 0x1743808 VA: 0x1743808
	public static void AddTournamentId(FlatBufferBuilder builder, StringOffset tournamentIdOffset) { }

	// RVA: 0x17437E8 Offset: 0x17437E8 VA: 0x17437E8
	public static void AddLeaderboardId(FlatBufferBuilder builder, StringOffset leaderboardIdOffset) { }

	// RVA: 0x17437C8 Offset: 0x17437C8 VA: 0x17437C8
	public static void AddPlayers(FlatBufferBuilder builder, VectorOffset playersOffset) { }

	// RVA: 0x17438B0 Offset: 0x17438B0 VA: 0x17438B0
	public static VectorOffset CreatePlayersVector(FlatBufferBuilder builder, Offset<ChampionsLeagueLeaderboardPlayer>[] data) { }

	// RVA: 0x1743958 Offset: 0x1743958 VA: 0x1743958
	public static VectorOffset CreatePlayersVectorBlock(FlatBufferBuilder builder, Offset<ChampionsLeagueLeaderboardPlayer>[] data) { }

	// RVA: 0x17439E0 Offset: 0x17439E0 VA: 0x17439E0
	public static VectorOffset CreatePlayersVectorBlock(FlatBufferBuilder builder, ArraySegment<Offset<ChampionsLeagueLeaderboardPlayer>> data) { }

	// RVA: 0x1743AA4 Offset: 0x1743AA4 VA: 0x1743AA4
	public static VectorOffset CreatePlayersVectorBlock(FlatBufferBuilder builder, IntPtr dataPtr, int sizeInBytes) { }

	// RVA: 0x1743B38 Offset: 0x1743B38 VA: 0x1743B38
	public static void StartPlayersVector(FlatBufferBuilder builder, int numElems) { }

	// RVA: 0x1743768 Offset: 0x1743768 VA: 0x1743768
	public static void AddStartTime(FlatBufferBuilder builder, long startTime) { }

	// RVA: 0x1743748 Offset: 0x1743748 VA: 0x1743748
	public static void AddFinishTime(FlatBufferBuilder builder, long finishTime) { }

	// RVA: 0x1743728 Offset: 0x1743728 VA: 0x1743728
	public static void AddJoinWindowEndEpoch(FlatBufferBuilder builder, long joinWindowEndEpoch) { }

	// RVA: 0x17437A8 Offset: 0x17437A8 VA: 0x17437A8
	public static void AddEloPromotedUserCountMap(FlatBufferBuilder builder, VectorOffset eloPromotedUserCountMapOffset) { }

	// RVA: 0x1743B58 Offset: 0x1743B58 VA: 0x1743B58
	public static VectorOffset CreateEloPromotedUserCountMapVector(FlatBufferBuilder builder, Offset<Int64KeyValuePair>[] data) { }

	// RVA: 0x1743C00 Offset: 0x1743C00 VA: 0x1743C00
	public static VectorOffset CreateEloPromotedUserCountMapVectorBlock(FlatBufferBuilder builder, Offset<Int64KeyValuePair>[] data) { }

	// RVA: 0x1743C88 Offset: 0x1743C88 VA: 0x1743C88
	public static VectorOffset CreateEloPromotedUserCountMapVectorBlock(FlatBufferBuilder builder, ArraySegment<Offset<Int64KeyValuePair>> data) { }

	// RVA: 0x1743D4C Offset: 0x1743D4C VA: 0x1743D4C
	public static VectorOffset CreateEloPromotedUserCountMapVectorBlock(FlatBufferBuilder builder, IntPtr dataPtr, int sizeInBytes) { }

	// RVA: 0x1743DE0 Offset: 0x1743DE0 VA: 0x1743DE0
	public static void StartEloPromotedUserCountMapVector(FlatBufferBuilder builder, int numElems) { }

	// RVA: 0x1743788 Offset: 0x1743788 VA: 0x1743788
	public static void AddEloDemotedUserCountMap(FlatBufferBuilder builder, VectorOffset eloDemotedUserCountMapOffset) { }

	// RVA: 0x1743E00 Offset: 0x1743E00 VA: 0x1743E00
	public static VectorOffset CreateEloDemotedUserCountMapVector(FlatBufferBuilder builder, Offset<Int64KeyValuePair>[] data) { }

	// RVA: 0x1743EA8 Offset: 0x1743EA8 VA: 0x1743EA8
	public static VectorOffset CreateEloDemotedUserCountMapVectorBlock(FlatBufferBuilder builder, Offset<Int64KeyValuePair>[] data) { }

	// RVA: 0x1743F30 Offset: 0x1743F30 VA: 0x1743F30
	public static VectorOffset CreateEloDemotedUserCountMapVectorBlock(FlatBufferBuilder builder, ArraySegment<Offset<Int64KeyValuePair>> data) { }

	// RVA: 0x1743FF4 Offset: 0x1743FF4 VA: 0x1743FF4
	public static VectorOffset CreateEloDemotedUserCountMapVectorBlock(FlatBufferBuilder builder, IntPtr dataPtr, int sizeInBytes) { }

	// RVA: 0x1744088 Offset: 0x1744088 VA: 0x1744088
	public static void StartEloDemotedUserCountMapVector(FlatBufferBuilder builder, int numElems) { }

	// RVA: 0x1743708 Offset: 0x1743708 VA: 0x1743708
	public static void AddCapacity(FlatBufferBuilder builder, long capacity) { }

	// RVA: 0x17436E8 Offset: 0x17436E8 VA: 0x17436E8
	public static void AddElo(FlatBufferBuilder builder, long elo) { }

	// RVA: 0x1743828 Offset: 0x1743828 VA: 0x1743828
	public static void AddState(FlatBufferBuilder builder, LeagueStatus state) { }

	// RVA: 0x1743848 Offset: 0x1743848 VA: 0x1743848
	public static Offset<GetChampionsLeagueLeaderboardResponse> EndGetChampionsLeagueLeaderboardResponse(FlatBufferBuilder builder) { }

	// RVA: 0x17440A8 Offset: 0x17440A8 VA: 0x17440A8
	public static void FinishGetChampionsLeagueLeaderboardResponseBuffer(FlatBufferBuilder builder, Offset<GetChampionsLeagueLeaderboardResponse> offset) { }

	// RVA: 0x17440BC Offset: 0x17440BC VA: 0x17440BC
	public static void FinishSizePrefixedGetChampionsLeagueLeaderboardResponseBuffer(FlatBufferBuilder builder, Offset<GetChampionsLeagueLeaderboardResponse> offset) { }
}

// Namespace: magicsort.schemas.v1.liveops.champions_league