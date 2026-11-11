public struct GetTeamLeaderboardResponse : IFlatbufferObject // TypeDefIndex: 5543
{
	// Fields
	private Table __p; // 0x0

	// Properties
	public ByteBuffer ByteBuffer { get; }
	public int CountryTeamLeaderboardLength { get; }
	public int GlobalTeamLeaderboardLength { get; }
	public string CountryCode { get; }
	public Nullable<BaseResponse> BaseResponse { get; }

	// Methods

	// RVA: 0x1437F14 Offset: 0x1437F14 VA: 0x1437F14 Slot: 5
	public ByteBuffer get_ByteBuffer() { }

	// RVA: 0x1437F1C Offset: 0x1437F1C VA: 0x1437F1C
	public static void ValidateVersion() { }

	// RVA: 0x1437F24 Offset: 0x1437F24 VA: 0x1437F24
	public static GetTeamLeaderboardResponse GetRootAsGetTeamLeaderboardResponse(ByteBuffer _bb) { }

	// RVA: 0x1437F30 Offset: 0x1437F30 VA: 0x1437F30
	public static GetTeamLeaderboardResponse GetRootAsGetTeamLeaderboardResponse(ByteBuffer _bb, GetTeamLeaderboardResponse obj) { }

	// RVA: 0x1437FB4 Offset: 0x1437FB4 VA: 0x1437FB4
	public static bool VerifyGetTeamLeaderboardResponse(ByteBuffer _bb) { }

	// RVA: 0x1438088 Offset: 0x1438088 VA: 0x1438088 Slot: 4
	public void __init(int _i, ByteBuffer _bb) { }

	// RVA: 0x1437F74 Offset: 0x1437F74 VA: 0x1437F74
	public GetTeamLeaderboardResponse __assign(int _i, ByteBuffer _bb) { }

	// RVA: 0x14380C4 Offset: 0x14380C4 VA: 0x14380C4
	public Nullable<TeamLeaderboardSummary> CountryTeamLeaderboard(int j) { }

	// RVA: 0x14381D8 Offset: 0x14381D8 VA: 0x14381D8
	public int get_CountryTeamLeaderboardLength() { }

	// RVA: 0x143820C Offset: 0x143820C VA: 0x143820C
	public Nullable<TeamLeaderboardSummary> GlobalTeamLeaderboard(int j) { }

	// RVA: 0x14382E0 Offset: 0x14382E0 VA: 0x14382E0
	public int get_GlobalTeamLeaderboardLength() { }

	// RVA: 0x1438314 Offset: 0x1438314 VA: 0x1438314
	public string get_CountryCode() { }

	// RVA: 0x1438350 Offset: 0x1438350 VA: 0x1438350
	public Nullable<ArraySegment<byte>> GetCountryCodeBytes() { }

	// RVA: 0x1438388 Offset: 0x1438388 VA: 0x1438388
	public byte[] GetCountryCodeArray() { }

	// RVA: 0x14383D4 Offset: 0x14383D4 VA: 0x14383D4
	public Nullable<BaseResponse> get_BaseResponse() { }

	// RVA: 0x1438494 Offset: 0x1438494 VA: 0x1438494
	public static Offset<GetTeamLeaderboardResponse> CreateGetTeamLeaderboardResponse(FlatBufferBuilder builder, VectorOffset countryTeamLeaderboardOffset, VectorOffset globalTeamLeaderboardOffset, StringOffset countryCodeOffset, Offset<BaseResponse> baseResponseOffset) { }

	// RVA: 0x14385E4 Offset: 0x14385E4 VA: 0x14385E4
	public static void StartGetTeamLeaderboardResponse(FlatBufferBuilder builder) { }

	// RVA: 0x1438574 Offset: 0x1438574 VA: 0x1438574
	public static void AddCountryTeamLeaderboard(FlatBufferBuilder builder, VectorOffset countryTeamLeaderboardOffset) { }

	// RVA: 0x14385FC Offset: 0x14385FC VA: 0x14385FC
	public static VectorOffset CreateCountryTeamLeaderboardVector(FlatBufferBuilder builder, Offset<TeamLeaderboardSummary>[] data) { }

	// RVA: 0x14386A4 Offset: 0x14386A4 VA: 0x14386A4
	public static VectorOffset CreateCountryTeamLeaderboardVectorBlock(FlatBufferBuilder builder, Offset<TeamLeaderboardSummary>[] data) { }

	// RVA: 0x143872C Offset: 0x143872C VA: 0x143872C
	public static VectorOffset CreateCountryTeamLeaderboardVectorBlock(FlatBufferBuilder builder, ArraySegment<Offset<TeamLeaderboardSummary>> data) { }

	// RVA: 0x14387F0 Offset: 0x14387F0 VA: 0x14387F0
	public static VectorOffset CreateCountryTeamLeaderboardVectorBlock(FlatBufferBuilder builder, IntPtr dataPtr, int sizeInBytes) { }

	// RVA: 0x1438884 Offset: 0x1438884 VA: 0x1438884
	public static void StartCountryTeamLeaderboardVector(FlatBufferBuilder builder, int numElems) { }

	// RVA: 0x1438554 Offset: 0x1438554 VA: 0x1438554
	public static void AddGlobalTeamLeaderboard(FlatBufferBuilder builder, VectorOffset globalTeamLeaderboardOffset) { }

	// RVA: 0x14388A4 Offset: 0x14388A4 VA: 0x14388A4
	public static VectorOffset CreateGlobalTeamLeaderboardVector(FlatBufferBuilder builder, Offset<TeamLeaderboardSummary>[] data) { }

	// RVA: 0x143894C Offset: 0x143894C VA: 0x143894C
	public static VectorOffset CreateGlobalTeamLeaderboardVectorBlock(FlatBufferBuilder builder, Offset<TeamLeaderboardSummary>[] data) { }

	// RVA: 0x14389D4 Offset: 0x14389D4 VA: 0x14389D4
	public static VectorOffset CreateGlobalTeamLeaderboardVectorBlock(FlatBufferBuilder builder, ArraySegment<Offset<TeamLeaderboardSummary>> data) { }

	// RVA: 0x1438A98 Offset: 0x1438A98 VA: 0x1438A98
	public static VectorOffset CreateGlobalTeamLeaderboardVectorBlock(FlatBufferBuilder builder, IntPtr dataPtr, int sizeInBytes) { }

	// RVA: 0x1438B2C Offset: 0x1438B2C VA: 0x1438B2C
	public static void StartGlobalTeamLeaderboardVector(FlatBufferBuilder builder, int numElems) { }

	// RVA: 0x1438534 Offset: 0x1438534 VA: 0x1438534
	public static void AddCountryCode(FlatBufferBuilder builder, StringOffset countryCodeOffset) { }

	// RVA: 0x1438514 Offset: 0x1438514 VA: 0x1438514
	public static void AddBaseResponse(FlatBufferBuilder builder, Offset<BaseResponse> baseResponseOffset) { }

	// RVA: 0x1438594 Offset: 0x1438594 VA: 0x1438594
	public static Offset<GetTeamLeaderboardResponse> EndGetTeamLeaderboardResponse(FlatBufferBuilder builder) { }

	// RVA: 0x1438B4C Offset: 0x1438B4C VA: 0x1438B4C
	public static void FinishGetTeamLeaderboardResponseBuffer(FlatBufferBuilder builder, Offset<GetTeamLeaderboardResponse> offset) { }

	// RVA: 0x1438B60 Offset: 0x1438B60 VA: 0x1438B60
	public static void FinishSizePrefixedGetTeamLeaderboardResponseBuffer(FlatBufferBuilder builder, Offset<GetTeamLeaderboardResponse> offset) { }
}

// Namespace: magicsort.schemas.v1.team