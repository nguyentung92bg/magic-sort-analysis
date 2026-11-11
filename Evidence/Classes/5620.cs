public struct LavaTournamentStartTime : IFlatbufferObject // TypeDefIndex: 5620
{
	// Fields
	private Table __p; // 0x0

	// Properties
	public ByteBuffer ByteBuffer { get; }
	public long TournamentType { get; }
	public long TournamentStartTime { get; }
	public long TournamentEndTime { get; }

	// Methods

	// RVA: 0x173C0EC Offset: 0x173C0EC VA: 0x173C0EC Slot: 5
	public ByteBuffer get_ByteBuffer() { }

	// RVA: 0x173C0F4 Offset: 0x173C0F4 VA: 0x173C0F4
	public static void ValidateVersion() { }

	// RVA: 0x173C0FC Offset: 0x173C0FC VA: 0x173C0FC
	public static LavaTournamentStartTime GetRootAsLavaTournamentStartTime(ByteBuffer _bb) { }

	// RVA: 0x173C108 Offset: 0x173C108 VA: 0x173C108
	public static LavaTournamentStartTime GetRootAsLavaTournamentStartTime(ByteBuffer _bb, LavaTournamentStartTime obj) { }

	// RVA: 0x173C18C Offset: 0x173C18C VA: 0x173C18C Slot: 4
	public void __init(int _i, ByteBuffer _bb) { }

	// RVA: 0x173C14C Offset: 0x173C14C VA: 0x173C14C
	public LavaTournamentStartTime __assign(int _i, ByteBuffer _bb) { }

	// RVA: 0x173C1C8 Offset: 0x173C1C8 VA: 0x173C1C8
	public long get_TournamentType() { }

	// RVA: 0x173C210 Offset: 0x173C210 VA: 0x173C210
	public long get_TournamentStartTime() { }

	// RVA: 0x173C258 Offset: 0x173C258 VA: 0x173C258
	public long get_TournamentEndTime() { }

	// RVA: 0x173C2A0 Offset: 0x173C2A0 VA: 0x173C2A0
	public static Offset<LavaTournamentStartTime> CreateLavaTournamentStartTime(FlatBufferBuilder builder, long tournament_type = 0, long tournament_start_time = 0, long tournament_end_time = 0) { }

	// RVA: 0x173C3C0 Offset: 0x173C3C0 VA: 0x173C3C0
	public static void StartLavaTournamentStartTime(FlatBufferBuilder builder) { }

	// RVA: 0x173C350 Offset: 0x173C350 VA: 0x173C350
	public static void AddTournamentType(FlatBufferBuilder builder, long tournamentType) { }

	// RVA: 0x173C330 Offset: 0x173C330 VA: 0x173C330
	public static void AddTournamentStartTime(FlatBufferBuilder builder, long tournamentStartTime) { }

	// RVA: 0x173C310 Offset: 0x173C310 VA: 0x173C310
	public static void AddTournamentEndTime(FlatBufferBuilder builder, long tournamentEndTime) { }

	// RVA: 0x173C370 Offset: 0x173C370 VA: 0x173C370
	public static Offset<LavaTournamentStartTime> EndLavaTournamentStartTime(FlatBufferBuilder builder) { }
}

// Namespace: magicsort.schemas.v1.liveops.lava_leaderboard