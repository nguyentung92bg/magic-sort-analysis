public struct GetWeeklyLeaderboardResponse : IFlatbufferObject // TypeDefIndex: 5589
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

	// Methods

	// RVA: 0x1443F4C Offset: 0x1443F4C VA: 0x1443F4C Slot: 5
	public ByteBuffer get_ByteBuffer() { }

	// RVA: 0x1443F54 Offset: 0x1443F54 VA: 0x1443F54
	public static void ValidateVersion() { }

	// RVA: 0x1443F5C Offset: 0x1443F5C VA: 0x1443F5C
	public static GetWeeklyLeaderboardResponse GetRootAsGetWeeklyLeaderboardResponse(ByteBuffer _bb) { }

	// RVA: 0x1443F68 Offset: 0x1443F68 VA: 0x1443F68
	public static GetWeeklyLeaderboardResponse GetRootAsGetWeeklyLeaderboardResponse(ByteBuffer _bb, GetWeeklyLeaderboardResponse obj) { }

	// RVA: 0x1443FEC Offset: 0x1443FEC VA: 0x1443FEC
	public static bool VerifyGetWeeklyLeaderboardResponse(ByteBuffer _bb) { }

	// RVA: 0x14440C0 Offset: 0x14440C0 VA: 0x14440C0 Slot: 4
	public void __init(int _i, ByteBuffer _bb) { }

	// RVA: 0x1443FAC Offset: 0x1443FAC VA: 0x1443FAC
	public GetWeeklyLeaderboardResponse __assign(int _i, ByteBuffer _bb) { }

	// RVA: 0x14440FC Offset: 0x14440FC VA: 0x14440FC
	public string get_TournamentID() { }

	// RVA: 0x1444138 Offset: 0x1444138 VA: 0x1444138
	public Nullable<ArraySegment<byte>> GetTournamentIDBytes() { }

	// RVA: 0x1444170 Offset: 0x1444170 VA: 0x1444170
	public byte[] GetTournamentIDArray() { }

	// RVA: 0x14441BC Offset: 0x14441BC VA: 0x14441BC
	public Nullable<WeeklyLeaderboardPlayer> Players(int j) { }

	// RVA: 0x14442D0 Offset: 0x14442D0 VA: 0x14442D0
	public int get_PlayersLength() { }

	// RVA: 0x1444304 Offset: 0x1444304 VA: 0x1444304
	public long get_StartTime() { }

	// RVA: 0x144434C Offset: 0x144434C VA: 0x144434C
	public long get_FinishTime() { }

	// RVA: 0x1444394 Offset: 0x1444394 VA: 0x1444394
	public bool get_IsClaimed() { }

	// RVA: 0x14443DC Offset: 0x14443DC VA: 0x14443DC
	public bool get_IsFinished() { }

	// RVA: 0x1444424 Offset: 0x1444424 VA: 0x1444424
	public static Offset<GetWeeklyLeaderboardResponse> CreateGetWeeklyLeaderboardResponse(FlatBufferBuilder builder, StringOffset tournamentIDOffset, VectorOffset playersOffset, long startTime = 0, long finishTime = 0, bool isClaimed = False, bool isFinished = False) { }

	// RVA: 0x14445DC Offset: 0x14445DC VA: 0x14445DC
	public static void StartGetWeeklyLeaderboardResponse(FlatBufferBuilder builder) { }

	// RVA: 0x144452C Offset: 0x144452C VA: 0x144452C
	public static void AddTournamentID(FlatBufferBuilder builder, StringOffset tournamentIDOffset) { }

	// RVA: 0x144450C Offset: 0x144450C VA: 0x144450C
	public static void AddPlayers(FlatBufferBuilder builder, VectorOffset playersOffset) { }

	// RVA: 0x14445F4 Offset: 0x14445F4 VA: 0x14445F4
	public static VectorOffset CreatePlayersVector(FlatBufferBuilder builder, Offset<WeeklyLeaderboardPlayer>[] data) { }

	// RVA: 0x144469C Offset: 0x144469C VA: 0x144469C
	public static VectorOffset CreatePlayersVectorBlock(FlatBufferBuilder builder, Offset<WeeklyLeaderboardPlayer>[] data) { }

	// RVA: 0x1444724 Offset: 0x1444724 VA: 0x1444724
	public static VectorOffset CreatePlayersVectorBlock(FlatBufferBuilder builder, ArraySegment<Offset<WeeklyLeaderboardPlayer>> data) { }

	// RVA: 0x14447E8 Offset: 0x14447E8 VA: 0x14447E8
	public static VectorOffset CreatePlayersVectorBlock(FlatBufferBuilder builder, IntPtr dataPtr, int sizeInBytes) { }

	// RVA: 0x144487C Offset: 0x144487C VA: 0x144487C
	public static void StartPlayersVector(FlatBufferBuilder builder, int numElems) { }

	// RVA: 0x14444EC Offset: 0x14444EC VA: 0x14444EC
	public static void AddStartTime(FlatBufferBuilder builder, long startTime) { }

	// RVA: 0x14444CC Offset: 0x14444CC VA: 0x14444CC
	public static void AddFinishTime(FlatBufferBuilder builder, long finishTime) { }

	// RVA: 0x144456C Offset: 0x144456C VA: 0x144456C
	public static void AddIsClaimed(FlatBufferBuilder builder, bool isClaimed) { }

	// RVA: 0x144454C Offset: 0x144454C VA: 0x144454C
	public static void AddIsFinished(FlatBufferBuilder builder, bool isFinished) { }

	// RVA: 0x144458C Offset: 0x144458C VA: 0x144458C
	public static Offset<GetWeeklyLeaderboardResponse> EndGetWeeklyLeaderboardResponse(FlatBufferBuilder builder) { }

	// RVA: 0x144489C Offset: 0x144489C VA: 0x144489C
	public static void FinishGetWeeklyLeaderboardResponseBuffer(FlatBufferBuilder builder, Offset<GetWeeklyLeaderboardResponse> offset) { }

	// RVA: 0x14448B0 Offset: 0x14448B0 VA: 0x14448B0
	public static void FinishSizePrefixedGetWeeklyLeaderboardResponseBuffer(FlatBufferBuilder builder, Offset<GetWeeklyLeaderboardResponse> offset) { }
}

// Namespace: magicsort.schemas.v1.liveops.weekly_leaderboard