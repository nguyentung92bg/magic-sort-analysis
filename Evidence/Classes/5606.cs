public struct GetStagedSkyJumpTournamentEndTimeResponse : IFlatbufferObject // TypeDefIndex: 5606
{
	// Fields
	private Table __p; // 0x0

	// Properties
	public ByteBuffer ByteBuffer { get; }
	public long TournamentType { get; }
	public long TournamentStartTime { get; }
	public long CurrentStage { get; }
	public long TournamentEndTime { get; }

	// Methods

	// RVA: 0x1737210 Offset: 0x1737210 VA: 0x1737210 Slot: 5
	public ByteBuffer get_ByteBuffer() { }

	// RVA: 0x1737218 Offset: 0x1737218 VA: 0x1737218
	public static void ValidateVersion() { }

	// RVA: 0x1737220 Offset: 0x1737220 VA: 0x1737220
	public static GetStagedSkyJumpTournamentEndTimeResponse GetRootAsGetStagedSkyJumpTournamentEndTimeResponse(ByteBuffer _bb) { }

	// RVA: 0x173722C Offset: 0x173722C VA: 0x173722C
	public static GetStagedSkyJumpTournamentEndTimeResponse GetRootAsGetStagedSkyJumpTournamentEndTimeResponse(ByteBuffer _bb, GetStagedSkyJumpTournamentEndTimeResponse obj) { }

	// RVA: 0x17372B0 Offset: 0x17372B0 VA: 0x17372B0 Slot: 4
	public void __init(int _i, ByteBuffer _bb) { }

	// RVA: 0x1737270 Offset: 0x1737270 VA: 0x1737270
	public GetStagedSkyJumpTournamentEndTimeResponse __assign(int _i, ByteBuffer _bb) { }

	// RVA: 0x17372EC Offset: 0x17372EC VA: 0x17372EC
	public long get_TournamentType() { }

	// RVA: 0x1737334 Offset: 0x1737334 VA: 0x1737334
	public long get_TournamentStartTime() { }

	// RVA: 0x173737C Offset: 0x173737C VA: 0x173737C
	public long get_CurrentStage() { }

	// RVA: 0x17373C4 Offset: 0x17373C4 VA: 0x17373C4
	public long get_TournamentEndTime() { }

	// RVA: 0x173740C Offset: 0x173740C VA: 0x173740C
	public static Offset<GetStagedSkyJumpTournamentEndTimeResponse> CreateGetStagedSkyJumpTournamentEndTimeResponse(FlatBufferBuilder builder, long tournament_type = 0, long tournament_start_time = 0, long current_stage = 0, long tournament_end_time = 0) { }

	// RVA: 0x173755C Offset: 0x173755C VA: 0x173755C
	public static void StartGetStagedSkyJumpTournamentEndTimeResponse(FlatBufferBuilder builder) { }

	// RVA: 0x17374EC Offset: 0x17374EC VA: 0x17374EC
	public static void AddTournamentType(FlatBufferBuilder builder, long tournamentType) { }

	// RVA: 0x17374CC Offset: 0x17374CC VA: 0x17374CC
	public static void AddTournamentStartTime(FlatBufferBuilder builder, long tournamentStartTime) { }

	// RVA: 0x17374AC Offset: 0x17374AC VA: 0x17374AC
	public static void AddCurrentStage(FlatBufferBuilder builder, long currentStage) { }

	// RVA: 0x173748C Offset: 0x173748C VA: 0x173748C
	public static void AddTournamentEndTime(FlatBufferBuilder builder, long tournamentEndTime) { }

	// RVA: 0x173750C Offset: 0x173750C VA: 0x173750C
	public static Offset<GetStagedSkyJumpTournamentEndTimeResponse> EndGetStagedSkyJumpTournamentEndTimeResponse(FlatBufferBuilder builder) { }
}

// Namespace: magicsort.schemas.v1.liveops.skyjump