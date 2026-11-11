public struct GetTeamsResponse : IFlatbufferObject // TypeDefIndex: 5549
{
	// Fields
	private Table __p; // 0x0

	// Properties
	public ByteBuffer ByteBuffer { get; }
	public int TeamsLength { get; }
	public Nullable<BaseResponse> BaseResponse { get; }

	// Methods

	// RVA: 0x1439A40 Offset: 0x1439A40 VA: 0x1439A40 Slot: 5
	public ByteBuffer get_ByteBuffer() { }

	// RVA: 0x1439A48 Offset: 0x1439A48 VA: 0x1439A48
	public static void ValidateVersion() { }

	// RVA: 0x1439A50 Offset: 0x1439A50 VA: 0x1439A50
	public static GetTeamsResponse GetRootAsGetTeamsResponse(ByteBuffer _bb) { }

	// RVA: 0x1439A5C Offset: 0x1439A5C VA: 0x1439A5C
	public static GetTeamsResponse GetRootAsGetTeamsResponse(ByteBuffer _bb, GetTeamsResponse obj) { }

	// RVA: 0x1439AE0 Offset: 0x1439AE0 VA: 0x1439AE0
	public static bool VerifyGetTeamsResponse(ByteBuffer _bb) { }

	// RVA: 0x1439BB4 Offset: 0x1439BB4 VA: 0x1439BB4 Slot: 4
	public void __init(int _i, ByteBuffer _bb) { }

	// RVA: 0x1439AA0 Offset: 0x1439AA0 VA: 0x1439AA0
	public GetTeamsResponse __assign(int _i, ByteBuffer _bb) { }

	// RVA: 0x1439BF0 Offset: 0x1439BF0 VA: 0x1439BF0
	public Nullable<TeamSummary> Teams(int j) { }

	// RVA: 0x1439CC4 Offset: 0x1439CC4 VA: 0x1439CC4
	public int get_TeamsLength() { }

	// RVA: 0x1439CF8 Offset: 0x1439CF8 VA: 0x1439CF8
	public Nullable<BaseResponse> get_BaseResponse() { }

	// RVA: 0x1439DB8 Offset: 0x1439DB8 VA: 0x1439DB8
	public static Offset<GetTeamsResponse> CreateGetTeamsResponse(FlatBufferBuilder builder, VectorOffset teamsOffset, Offset<BaseResponse> baseResponseOffset) { }

	// RVA: 0x1439EA0 Offset: 0x1439EA0 VA: 0x1439EA0
	public static void StartGetTeamsResponse(FlatBufferBuilder builder) { }

	// RVA: 0x1439E30 Offset: 0x1439E30 VA: 0x1439E30
	public static void AddTeams(FlatBufferBuilder builder, VectorOffset teamsOffset) { }

	// RVA: 0x1439EB8 Offset: 0x1439EB8 VA: 0x1439EB8
	public static VectorOffset CreateTeamsVector(FlatBufferBuilder builder, Offset<TeamSummary>[] data) { }

	// RVA: 0x1439F60 Offset: 0x1439F60 VA: 0x1439F60
	public static VectorOffset CreateTeamsVectorBlock(FlatBufferBuilder builder, Offset<TeamSummary>[] data) { }

	// RVA: 0x1439FE8 Offset: 0x1439FE8 VA: 0x1439FE8
	public static VectorOffset CreateTeamsVectorBlock(FlatBufferBuilder builder, ArraySegment<Offset<TeamSummary>> data) { }

	// RVA: 0x143A0AC Offset: 0x143A0AC VA: 0x143A0AC
	public static VectorOffset CreateTeamsVectorBlock(FlatBufferBuilder builder, IntPtr dataPtr, int sizeInBytes) { }

	// RVA: 0x143A140 Offset: 0x143A140 VA: 0x143A140
	public static void StartTeamsVector(FlatBufferBuilder builder, int numElems) { }

	// RVA: 0x1439E10 Offset: 0x1439E10 VA: 0x1439E10
	public static void AddBaseResponse(FlatBufferBuilder builder, Offset<BaseResponse> baseResponseOffset) { }

	// RVA: 0x1439E50 Offset: 0x1439E50 VA: 0x1439E50
	public static Offset<GetTeamsResponse> EndGetTeamsResponse(FlatBufferBuilder builder) { }

	// RVA: 0x143A160 Offset: 0x143A160 VA: 0x143A160
	public static void FinishGetTeamsResponseBuffer(FlatBufferBuilder builder, Offset<GetTeamsResponse> offset) { }

	// RVA: 0x143A174 Offset: 0x143A174 VA: 0x143A174
	public static void FinishSizePrefixedGetTeamsResponseBuffer(FlatBufferBuilder builder, Offset<GetTeamsResponse> offset) { }
}

// Namespace: magicsort.schemas.v1.team