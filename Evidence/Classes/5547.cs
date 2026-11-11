public struct GetTeamRequestsResponse : IFlatbufferObject // TypeDefIndex: 5547
{
	// Fields
	private Table __p; // 0x0

	// Properties
	public ByteBuffer ByteBuffer { get; }
	public int RequestsLength { get; }
	public Nullable<BaseResponse> BaseResponse { get; }

	// Methods

	// RVA: 0x14391C8 Offset: 0x14391C8 VA: 0x14391C8 Slot: 5
	public ByteBuffer get_ByteBuffer() { }

	// RVA: 0x14391D0 Offset: 0x14391D0 VA: 0x14391D0
	public static void ValidateVersion() { }

	// RVA: 0x14391D8 Offset: 0x14391D8 VA: 0x14391D8
	public static GetTeamRequestsResponse GetRootAsGetTeamRequestsResponse(ByteBuffer _bb) { }

	// RVA: 0x14391E4 Offset: 0x14391E4 VA: 0x14391E4
	public static GetTeamRequestsResponse GetRootAsGetTeamRequestsResponse(ByteBuffer _bb, GetTeamRequestsResponse obj) { }

	// RVA: 0x1439268 Offset: 0x1439268 VA: 0x1439268
	public static bool VerifyGetTeamRequestsResponse(ByteBuffer _bb) { }

	// RVA: 0x143933C Offset: 0x143933C VA: 0x143933C Slot: 4
	public void __init(int _i, ByteBuffer _bb) { }

	// RVA: 0x1439228 Offset: 0x1439228 VA: 0x1439228
	public GetTeamRequestsResponse __assign(int _i, ByteBuffer _bb) { }

	// RVA: 0x1439378 Offset: 0x1439378 VA: 0x1439378
	public Nullable<TeamRequest> Requests(int j) { }

	// RVA: 0x143944C Offset: 0x143944C VA: 0x143944C
	public int get_RequestsLength() { }

	// RVA: 0x1439480 Offset: 0x1439480 VA: 0x1439480
	public Nullable<BaseResponse> get_BaseResponse() { }

	// RVA: 0x1439540 Offset: 0x1439540 VA: 0x1439540
	public static Offset<GetTeamRequestsResponse> CreateGetTeamRequestsResponse(FlatBufferBuilder builder, VectorOffset requestsOffset, Offset<BaseResponse> baseResponseOffset) { }

	// RVA: 0x1439628 Offset: 0x1439628 VA: 0x1439628
	public static void StartGetTeamRequestsResponse(FlatBufferBuilder builder) { }

	// RVA: 0x14395B8 Offset: 0x14395B8 VA: 0x14395B8
	public static void AddRequests(FlatBufferBuilder builder, VectorOffset requestsOffset) { }

	// RVA: 0x1439640 Offset: 0x1439640 VA: 0x1439640
	public static VectorOffset CreateRequestsVector(FlatBufferBuilder builder, Offset<TeamRequest>[] data) { }

	// RVA: 0x14396E8 Offset: 0x14396E8 VA: 0x14396E8
	public static VectorOffset CreateRequestsVectorBlock(FlatBufferBuilder builder, Offset<TeamRequest>[] data) { }

	// RVA: 0x1439770 Offset: 0x1439770 VA: 0x1439770
	public static VectorOffset CreateRequestsVectorBlock(FlatBufferBuilder builder, ArraySegment<Offset<TeamRequest>> data) { }

	// RVA: 0x1439834 Offset: 0x1439834 VA: 0x1439834
	public static VectorOffset CreateRequestsVectorBlock(FlatBufferBuilder builder, IntPtr dataPtr, int sizeInBytes) { }

	// RVA: 0x14398C8 Offset: 0x14398C8 VA: 0x14398C8
	public static void StartRequestsVector(FlatBufferBuilder builder, int numElems) { }

	// RVA: 0x1439598 Offset: 0x1439598 VA: 0x1439598
	public static void AddBaseResponse(FlatBufferBuilder builder, Offset<BaseResponse> baseResponseOffset) { }

	// RVA: 0x14395D8 Offset: 0x14395D8 VA: 0x14395D8
	public static Offset<GetTeamRequestsResponse> EndGetTeamRequestsResponse(FlatBufferBuilder builder) { }

	// RVA: 0x14398E8 Offset: 0x14398E8 VA: 0x14398E8
	public static void FinishGetTeamRequestsResponseBuffer(FlatBufferBuilder builder, Offset<GetTeamRequestsResponse> offset) { }

	// RVA: 0x14398FC Offset: 0x14398FC VA: 0x14398FC
	public static void FinishSizePrefixedGetTeamRequestsResponseBuffer(FlatBufferBuilder builder, Offset<GetTeamRequestsResponse> offset) { }
}

// Namespace: magicsort.schemas.v1.team