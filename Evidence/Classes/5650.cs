public struct GetPreJoinLeagueLeaderboardResponse : IFlatbufferObject // TypeDefIndex: 5650
{
	// Fields
	private Table __p; // 0x0

	// Properties
	public ByteBuffer ByteBuffer { get; }
	public string TournamentId { get; }
	public long StartTime { get; }
	public long FinishTime { get; }
	public long JoinWindowEndEpoch { get; }
	public long PreJoinScore { get; }
	public LeagueStatus State { get; }
	public long Elo { get; }

	// Methods

	// RVA: 0x1744350 Offset: 0x1744350 VA: 0x1744350 Slot: 5
	public ByteBuffer get_ByteBuffer() { }

	// RVA: 0x1744358 Offset: 0x1744358 VA: 0x1744358
	public static void ValidateVersion() { }

	// RVA: 0x1744360 Offset: 0x1744360 VA: 0x1744360
	public static GetPreJoinLeagueLeaderboardResponse GetRootAsGetPreJoinLeagueLeaderboardResponse(ByteBuffer _bb) { }

	// RVA: 0x174436C Offset: 0x174436C VA: 0x174436C
	public static GetPreJoinLeagueLeaderboardResponse GetRootAsGetPreJoinLeagueLeaderboardResponse(ByteBuffer _bb, GetPreJoinLeagueLeaderboardResponse obj) { }

	// RVA: 0x17443F0 Offset: 0x17443F0 VA: 0x17443F0 Slot: 4
	public void __init(int _i, ByteBuffer _bb) { }

	// RVA: 0x17443B0 Offset: 0x17443B0 VA: 0x17443B0
	public GetPreJoinLeagueLeaderboardResponse __assign(int _i, ByteBuffer _bb) { }

	// RVA: 0x174442C Offset: 0x174442C VA: 0x174442C
	public string get_TournamentId() { }

	// RVA: 0x1744468 Offset: 0x1744468 VA: 0x1744468
	public Nullable<ArraySegment<byte>> GetTournamentIdBytes() { }

	// RVA: 0x17444A0 Offset: 0x17444A0 VA: 0x17444A0
	public byte[] GetTournamentIdArray() { }

	// RVA: 0x17444EC Offset: 0x17444EC VA: 0x17444EC
	public long get_StartTime() { }

	// RVA: 0x1744534 Offset: 0x1744534 VA: 0x1744534
	public long get_FinishTime() { }

	// RVA: 0x174457C Offset: 0x174457C VA: 0x174457C
	public long get_JoinWindowEndEpoch() { }

	// RVA: 0x17445C4 Offset: 0x17445C4 VA: 0x17445C4
	public long get_PreJoinScore() { }

	// RVA: 0x174460C Offset: 0x174460C VA: 0x174460C
	public LeagueStatus get_State() { }

	// RVA: 0x1744650 Offset: 0x1744650 VA: 0x1744650
	public long get_Elo() { }

	// RVA: 0x1744698 Offset: 0x1744698 VA: 0x1744698
	public static Offset<GetPreJoinLeagueLeaderboardResponse> CreateGetPreJoinLeagueLeaderboardResponse(FlatBufferBuilder builder, StringOffset tournament_idOffset, long start_time = 0, long finish_time = 0, long join_window_end_epoch = 0, long pre_join_score = 0, LeagueStatus state = 0, long elo = 0) { }

	// RVA: 0x1744888 Offset: 0x1744888 VA: 0x1744888
	public static void StartGetPreJoinLeagueLeaderboardResponse(FlatBufferBuilder builder) { }

	// RVA: 0x17447F8 Offset: 0x17447F8 VA: 0x17447F8
	public static void AddTournamentId(FlatBufferBuilder builder, StringOffset tournamentIdOffset) { }

	// RVA: 0x17447D8 Offset: 0x17447D8 VA: 0x17447D8
	public static void AddStartTime(FlatBufferBuilder builder, long startTime) { }

	// RVA: 0x17447B8 Offset: 0x17447B8 VA: 0x17447B8
	public static void AddFinishTime(FlatBufferBuilder builder, long finishTime) { }

	// RVA: 0x1744798 Offset: 0x1744798 VA: 0x1744798
	public static void AddJoinWindowEndEpoch(FlatBufferBuilder builder, long joinWindowEndEpoch) { }

	// RVA: 0x1744778 Offset: 0x1744778 VA: 0x1744778
	public static void AddPreJoinScore(FlatBufferBuilder builder, long preJoinScore) { }

	// RVA: 0x1744818 Offset: 0x1744818 VA: 0x1744818
	public static void AddState(FlatBufferBuilder builder, LeagueStatus state) { }

	// RVA: 0x1744758 Offset: 0x1744758 VA: 0x1744758
	public static void AddElo(FlatBufferBuilder builder, long elo) { }

	// RVA: 0x1744838 Offset: 0x1744838 VA: 0x1744838
	public static Offset<GetPreJoinLeagueLeaderboardResponse> EndGetPreJoinLeagueLeaderboardResponse(FlatBufferBuilder builder) { }
}

// Namespace: magicsort.schemas.v1.liveops.champions_league