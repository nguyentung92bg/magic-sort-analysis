public struct GetLeaderboardsResponse : IFlatbufferObject // TypeDefIndex: 5626
{
	// Fields
	private Table __p; // 0x0

	// Properties
	public ByteBuffer ByteBuffer { get; }
	public int GlobalPlayersLength { get; }
	public int CountryPlayersLength { get; }
	public string Country { get; }

	// Methods

	// RVA: 0x173D904 Offset: 0x173D904 VA: 0x173D904 Slot: 5
	public ByteBuffer get_ByteBuffer() { }

	// RVA: 0x173D90C Offset: 0x173D90C VA: 0x173D90C
	public static void ValidateVersion() { }

	// RVA: 0x173D914 Offset: 0x173D914 VA: 0x173D914
	public static GetLeaderboardsResponse GetRootAsGetLeaderboardsResponse(ByteBuffer _bb) { }

	// RVA: 0x173D920 Offset: 0x173D920 VA: 0x173D920
	public static GetLeaderboardsResponse GetRootAsGetLeaderboardsResponse(ByteBuffer _bb, GetLeaderboardsResponse obj) { }

	// RVA: 0x173D9A4 Offset: 0x173D9A4 VA: 0x173D9A4
	public static bool VerifyGetLeaderboardsResponse(ByteBuffer _bb) { }

	// RVA: 0x173DA78 Offset: 0x173DA78 VA: 0x173DA78 Slot: 4
	public void __init(int _i, ByteBuffer _bb) { }

	// RVA: 0x173D964 Offset: 0x173D964 VA: 0x173D964
	public GetLeaderboardsResponse __assign(int _i, ByteBuffer _bb) { }

	// RVA: 0x173DAB4 Offset: 0x173DAB4 VA: 0x173DAB4
	public Nullable<GlobalLeaderboardPlayer> GlobalPlayers(int j) { }

	// RVA: 0x173DBC8 Offset: 0x173DBC8 VA: 0x173DBC8
	public int get_GlobalPlayersLength() { }

	// RVA: 0x173DBFC Offset: 0x173DBFC VA: 0x173DBFC
	public Nullable<GlobalLeaderboardPlayer> CountryPlayers(int j) { }

	// RVA: 0x173DCD0 Offset: 0x173DCD0 VA: 0x173DCD0
	public int get_CountryPlayersLength() { }

	// RVA: 0x173DD04 Offset: 0x173DD04 VA: 0x173DD04
	public string get_Country() { }

	// RVA: 0x173DD40 Offset: 0x173DD40 VA: 0x173DD40
	public Nullable<ArraySegment<byte>> GetCountryBytes() { }

	// RVA: 0x173DD78 Offset: 0x173DD78 VA: 0x173DD78
	public byte[] GetCountryArray() { }

	// RVA: 0x173DDC4 Offset: 0x173DDC4 VA: 0x173DDC4
	public static Offset<GetLeaderboardsResponse> CreateGetLeaderboardsResponse(FlatBufferBuilder builder, VectorOffset globalPlayersOffset, VectorOffset countryPlayersOffset, StringOffset countryOffset) { }

	// RVA: 0x173DEE4 Offset: 0x173DEE4 VA: 0x173DEE4
	public static void StartGetLeaderboardsResponse(FlatBufferBuilder builder) { }

	// RVA: 0x173DE74 Offset: 0x173DE74 VA: 0x173DE74
	public static void AddGlobalPlayers(FlatBufferBuilder builder, VectorOffset globalPlayersOffset) { }

	// RVA: 0x173DEFC Offset: 0x173DEFC VA: 0x173DEFC
	public static VectorOffset CreateGlobalPlayersVector(FlatBufferBuilder builder, Offset<GlobalLeaderboardPlayer>[] data) { }

	// RVA: 0x173DFA4 Offset: 0x173DFA4 VA: 0x173DFA4
	public static VectorOffset CreateGlobalPlayersVectorBlock(FlatBufferBuilder builder, Offset<GlobalLeaderboardPlayer>[] data) { }

	// RVA: 0x173E02C Offset: 0x173E02C VA: 0x173E02C
	public static VectorOffset CreateGlobalPlayersVectorBlock(FlatBufferBuilder builder, ArraySegment<Offset<GlobalLeaderboardPlayer>> data) { }

	// RVA: 0x173E0F0 Offset: 0x173E0F0 VA: 0x173E0F0
	public static VectorOffset CreateGlobalPlayersVectorBlock(FlatBufferBuilder builder, IntPtr dataPtr, int sizeInBytes) { }

	// RVA: 0x173E184 Offset: 0x173E184 VA: 0x173E184
	public static void StartGlobalPlayersVector(FlatBufferBuilder builder, int numElems) { }

	// RVA: 0x173DE54 Offset: 0x173DE54 VA: 0x173DE54
	public static void AddCountryPlayers(FlatBufferBuilder builder, VectorOffset countryPlayersOffset) { }

	// RVA: 0x173E1A4 Offset: 0x173E1A4 VA: 0x173E1A4
	public static VectorOffset CreateCountryPlayersVector(FlatBufferBuilder builder, Offset<GlobalLeaderboardPlayer>[] data) { }

	// RVA: 0x173E24C Offset: 0x173E24C VA: 0x173E24C
	public static VectorOffset CreateCountryPlayersVectorBlock(FlatBufferBuilder builder, Offset<GlobalLeaderboardPlayer>[] data) { }

	// RVA: 0x173E2D4 Offset: 0x173E2D4 VA: 0x173E2D4
	public static VectorOffset CreateCountryPlayersVectorBlock(FlatBufferBuilder builder, ArraySegment<Offset<GlobalLeaderboardPlayer>> data) { }

	// RVA: 0x173E398 Offset: 0x173E398 VA: 0x173E398
	public static VectorOffset CreateCountryPlayersVectorBlock(FlatBufferBuilder builder, IntPtr dataPtr, int sizeInBytes) { }

	// RVA: 0x173E42C Offset: 0x173E42C VA: 0x173E42C
	public static void StartCountryPlayersVector(FlatBufferBuilder builder, int numElems) { }

	// RVA: 0x173DE34 Offset: 0x173DE34 VA: 0x173DE34
	public static void AddCountry(FlatBufferBuilder builder, StringOffset countryOffset) { }

	// RVA: 0x173DE94 Offset: 0x173DE94 VA: 0x173DE94
	public static Offset<GetLeaderboardsResponse> EndGetLeaderboardsResponse(FlatBufferBuilder builder) { }

	// RVA: 0x173E44C Offset: 0x173E44C VA: 0x173E44C
	public static void FinishGetLeaderboardsResponseBuffer(FlatBufferBuilder builder, Offset<GetLeaderboardsResponse> offset) { }

	// RVA: 0x173E460 Offset: 0x173E460 VA: 0x173E460
	public static void FinishSizePrefixedGetLeaderboardsResponseBuffer(FlatBufferBuilder builder, Offset<GetLeaderboardsResponse> offset) { }
}

// Namespace: magicsort.schemas.v1.liveops.global_leaderboard