public struct GetStreakRaceTournamentEndTimeResponse : IFlatbufferObject // TypeDefIndex: 5602
{
	// Fields
	private Table __p; // 0x0

	// Properties
	public ByteBuffer ByteBuffer { get; }
	public long FinishTime { get; }
	public long MaxReachableScore { get; }

	// Methods

	// RVA: 0x17364FC Offset: 0x17364FC VA: 0x17364FC Slot: 5
	public ByteBuffer get_ByteBuffer() { }

	// RVA: 0x1736504 Offset: 0x1736504 VA: 0x1736504
	public static void ValidateVersion() { }

	// RVA: 0x173650C Offset: 0x173650C VA: 0x173650C
	public static GetStreakRaceTournamentEndTimeResponse GetRootAsGetStreakRaceTournamentEndTimeResponse(ByteBuffer _bb) { }

	// RVA: 0x1736518 Offset: 0x1736518 VA: 0x1736518
	public static GetStreakRaceTournamentEndTimeResponse GetRootAsGetStreakRaceTournamentEndTimeResponse(ByteBuffer _bb, GetStreakRaceTournamentEndTimeResponse obj) { }

	// RVA: 0x173659C Offset: 0x173659C VA: 0x173659C Slot: 4
	public void __init(int _i, ByteBuffer _bb) { }

	// RVA: 0x173655C Offset: 0x173655C VA: 0x173655C
	public GetStreakRaceTournamentEndTimeResponse __assign(int _i, ByteBuffer _bb) { }

	// RVA: 0x17365D8 Offset: 0x17365D8 VA: 0x17365D8
	public long get_FinishTime() { }

	// RVA: 0x1736620 Offset: 0x1736620 VA: 0x1736620
	public long get_MaxReachableScore() { }

	// RVA: 0x1736668 Offset: 0x1736668 VA: 0x1736668
	public static Offset<GetStreakRaceTournamentEndTimeResponse> CreateGetStreakRaceTournamentEndTimeResponse(FlatBufferBuilder builder, long finishTime = 0, long maxReachableScore = 0) { }

	// RVA: 0x1736750 Offset: 0x1736750 VA: 0x1736750
	public static void StartGetStreakRaceTournamentEndTimeResponse(FlatBufferBuilder builder) { }

	// RVA: 0x17366E0 Offset: 0x17366E0 VA: 0x17366E0
	public static void AddFinishTime(FlatBufferBuilder builder, long finishTime) { }

	// RVA: 0x17366C0 Offset: 0x17366C0 VA: 0x17366C0
	public static void AddMaxReachableScore(FlatBufferBuilder builder, long maxReachableScore) { }

	// RVA: 0x1736700 Offset: 0x1736700 VA: 0x1736700
	public static Offset<GetStreakRaceTournamentEndTimeResponse> EndGetStreakRaceTournamentEndTimeResponse(FlatBufferBuilder builder) { }
}

// Namespace: magicsort.schemas.v1.liveops.streak_leaderboard