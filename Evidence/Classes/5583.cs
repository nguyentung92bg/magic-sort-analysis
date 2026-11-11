public struct GetWinStreakTournamentResponse : IFlatbufferObject // TypeDefIndex: 5583
{
	// Fields
	private Table __p; // 0x0

	// Properties
	public ByteBuffer ByteBuffer { get; }
	public string TournamentID { get; }
	public long TournamentType { get; }
	public long StartTime { get; }
	public long FinishTime { get; }

	// Methods

	// RVA: 0x1442DF0 Offset: 0x1442DF0 VA: 0x1442DF0 Slot: 5
	public ByteBuffer get_ByteBuffer() { }

	// RVA: 0x1442DF8 Offset: 0x1442DF8 VA: 0x1442DF8
	public static void ValidateVersion() { }

	// RVA: 0x1442E00 Offset: 0x1442E00 VA: 0x1442E00
	public static GetWinStreakTournamentResponse GetRootAsGetWinStreakTournamentResponse(ByteBuffer _bb) { }

	// RVA: 0x1442E0C Offset: 0x1442E0C VA: 0x1442E0C
	public static GetWinStreakTournamentResponse GetRootAsGetWinStreakTournamentResponse(ByteBuffer _bb, GetWinStreakTournamentResponse obj) { }

	// RVA: 0x1442E90 Offset: 0x1442E90 VA: 0x1442E90
	public static bool VerifyGetWinStreakTournamentResponse(ByteBuffer _bb) { }

	// RVA: 0x1442F64 Offset: 0x1442F64 VA: 0x1442F64 Slot: 4
	public void __init(int _i, ByteBuffer _bb) { }

	// RVA: 0x1442E50 Offset: 0x1442E50 VA: 0x1442E50
	public GetWinStreakTournamentResponse __assign(int _i, ByteBuffer _bb) { }

	// RVA: 0x1442FA0 Offset: 0x1442FA0 VA: 0x1442FA0
	public string get_TournamentID() { }

	// RVA: 0x1442FDC Offset: 0x1442FDC VA: 0x1442FDC
	public Nullable<ArraySegment<byte>> GetTournamentIDBytes() { }

	// RVA: 0x1443014 Offset: 0x1443014 VA: 0x1443014
	public byte[] GetTournamentIDArray() { }

	// RVA: 0x1443060 Offset: 0x1443060 VA: 0x1443060
	public long get_TournamentType() { }

	// RVA: 0x14430A8 Offset: 0x14430A8 VA: 0x14430A8
	public long get_StartTime() { }

	// RVA: 0x14430F0 Offset: 0x14430F0 VA: 0x14430F0
	public long get_FinishTime() { }

	// RVA: 0x1443138 Offset: 0x1443138 VA: 0x1443138
	public static Offset<GetWinStreakTournamentResponse> CreateGetWinStreakTournamentResponse(FlatBufferBuilder builder, StringOffset tournamentIDOffset, long tournamentType = 0, long startTime = 0, long finishTime = 0) { }

	// RVA: 0x1443288 Offset: 0x1443288 VA: 0x1443288
	public static void StartGetWinStreakTournamentResponse(FlatBufferBuilder builder) { }

	// RVA: 0x1443218 Offset: 0x1443218 VA: 0x1443218
	public static void AddTournamentID(FlatBufferBuilder builder, StringOffset tournamentIDOffset) { }

	// RVA: 0x14431F8 Offset: 0x14431F8 VA: 0x14431F8
	public static void AddTournamentType(FlatBufferBuilder builder, long tournamentType) { }

	// RVA: 0x14431D8 Offset: 0x14431D8 VA: 0x14431D8
	public static void AddStartTime(FlatBufferBuilder builder, long startTime) { }

	// RVA: 0x14431B8 Offset: 0x14431B8 VA: 0x14431B8
	public static void AddFinishTime(FlatBufferBuilder builder, long finishTime) { }

	// RVA: 0x1443238 Offset: 0x1443238 VA: 0x1443238
	public static Offset<GetWinStreakTournamentResponse> EndGetWinStreakTournamentResponse(FlatBufferBuilder builder) { }

	// RVA: 0x14432A0 Offset: 0x14432A0 VA: 0x14432A0
	public static void FinishGetWinStreakTournamentResponseBuffer(FlatBufferBuilder builder, Offset<GetWinStreakTournamentResponse> offset) { }

	// RVA: 0x14432B4 Offset: 0x14432B4 VA: 0x14432B4
	public static void FinishSizePrefixedGetWinStreakTournamentResponseBuffer(FlatBufferBuilder builder, Offset<GetWinStreakTournamentResponse> offset) { }
}

// Namespace: magicsort.schemas.v1.liveops.win_streak