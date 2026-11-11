public struct GetTeamRequestResponse : IFlatbufferObject // TypeDefIndex: 5545
{
	// Fields
	private Table __p; // 0x0

	// Properties
	public ByteBuffer ByteBuffer { get; }
	public Nullable<TeamRequest> Request { get; }
	public Nullable<BaseResponse> BaseResponse { get; }

	// Methods

	// RVA: 0x1438D00 Offset: 0x1438D00 VA: 0x1438D00 Slot: 5
	public ByteBuffer get_ByteBuffer() { }

	// RVA: 0x1438D08 Offset: 0x1438D08 VA: 0x1438D08
	public static void ValidateVersion() { }

	// RVA: 0x1438D10 Offset: 0x1438D10 VA: 0x1438D10
	public static GetTeamRequestResponse GetRootAsGetTeamRequestResponse(ByteBuffer _bb) { }

	// RVA: 0x1438D1C Offset: 0x1438D1C VA: 0x1438D1C
	public static GetTeamRequestResponse GetRootAsGetTeamRequestResponse(ByteBuffer _bb, GetTeamRequestResponse obj) { }

	// RVA: 0x1438DA0 Offset: 0x1438DA0 VA: 0x1438DA0 Slot: 4
	public void __init(int _i, ByteBuffer _bb) { }

	// RVA: 0x1438D60 Offset: 0x1438D60 VA: 0x1438D60
	public GetTeamRequestResponse __assign(int _i, ByteBuffer _bb) { }

	// RVA: 0x1438DDC Offset: 0x1438DDC VA: 0x1438DDC
	public Nullable<TeamRequest> get_Request() { }

	// RVA: 0x1438ED8 Offset: 0x1438ED8 VA: 0x1438ED8
	public Nullable<BaseResponse> get_BaseResponse() { }

	// RVA: 0x1438F98 Offset: 0x1438F98 VA: 0x1438F98
	public static Offset<GetTeamRequestResponse> CreateGetTeamRequestResponse(FlatBufferBuilder builder, Offset<TeamRequest> requestOffset, Offset<BaseResponse> baseResponseOffset) { }

	// RVA: 0x1439080 Offset: 0x1439080 VA: 0x1439080
	public static void StartGetTeamRequestResponse(FlatBufferBuilder builder) { }

	// RVA: 0x1439010 Offset: 0x1439010 VA: 0x1439010
	public static void AddRequest(FlatBufferBuilder builder, Offset<TeamRequest> requestOffset) { }

	// RVA: 0x1438FF0 Offset: 0x1438FF0 VA: 0x1438FF0
	public static void AddBaseResponse(FlatBufferBuilder builder, Offset<BaseResponse> baseResponseOffset) { }

	// RVA: 0x1439030 Offset: 0x1439030 VA: 0x1439030
	public static Offset<GetTeamRequestResponse> EndGetTeamRequestResponse(FlatBufferBuilder builder) { }
}

// Namespace: magicsort.schemas.v1.team