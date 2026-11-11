public struct GetTeamWithMembersResponse : IFlatbufferObject // TypeDefIndex: 5551
{
	// Fields
	private Table __p; // 0x0

	// Properties
	public ByteBuffer ByteBuffer { get; }
	public Nullable<TeamWithMembers> Team { get; }
	public Nullable<BaseResponse> BaseResponse { get; }

	// Methods

	// RVA: 0x143A2B8 Offset: 0x143A2B8 VA: 0x143A2B8 Slot: 5
	public ByteBuffer get_ByteBuffer() { }

	// RVA: 0x143A2C0 Offset: 0x143A2C0 VA: 0x143A2C0
	public static void ValidateVersion() { }

	// RVA: 0x143A2C8 Offset: 0x143A2C8 VA: 0x143A2C8
	public static GetTeamWithMembersResponse GetRootAsGetTeamWithMembersResponse(ByteBuffer _bb) { }

	// RVA: 0x143A2D4 Offset: 0x143A2D4 VA: 0x143A2D4
	public static GetTeamWithMembersResponse GetRootAsGetTeamWithMembersResponse(ByteBuffer _bb, GetTeamWithMembersResponse obj) { }

	// RVA: 0x143A358 Offset: 0x143A358 VA: 0x143A358
	public static bool VerifyGetTeamWithMembersResponse(ByteBuffer _bb) { }

	// RVA: 0x143A42C Offset: 0x143A42C VA: 0x143A42C Slot: 4
	public void __init(int _i, ByteBuffer _bb) { }

	// RVA: 0x143A318 Offset: 0x143A318 VA: 0x143A318
	public GetTeamWithMembersResponse __assign(int _i, ByteBuffer _bb) { }

	// RVA: 0x143A468 Offset: 0x143A468 VA: 0x143A468
	public Nullable<TeamWithMembers> get_Team() { }

	// RVA: 0x143A564 Offset: 0x143A564 VA: 0x143A564
	public Nullable<BaseResponse> get_BaseResponse() { }

	// RVA: 0x143A624 Offset: 0x143A624 VA: 0x143A624
	public static Offset<GetTeamWithMembersResponse> CreateGetTeamWithMembersResponse(FlatBufferBuilder builder, Offset<TeamWithMembers> teamOffset, Offset<BaseResponse> baseResponseOffset) { }

	// RVA: 0x143A70C Offset: 0x143A70C VA: 0x143A70C
	public static void StartGetTeamWithMembersResponse(FlatBufferBuilder builder) { }

	// RVA: 0x143A69C Offset: 0x143A69C VA: 0x143A69C
	public static void AddTeam(FlatBufferBuilder builder, Offset<TeamWithMembers> teamOffset) { }

	// RVA: 0x143A67C Offset: 0x143A67C VA: 0x143A67C
	public static void AddBaseResponse(FlatBufferBuilder builder, Offset<BaseResponse> baseResponseOffset) { }

	// RVA: 0x143A6BC Offset: 0x143A6BC VA: 0x143A6BC
	public static Offset<GetTeamWithMembersResponse> EndGetTeamWithMembersResponse(FlatBufferBuilder builder) { }

	// RVA: 0x143A724 Offset: 0x143A724 VA: 0x143A724
	public static void FinishGetTeamWithMembersResponseBuffer(FlatBufferBuilder builder, Offset<GetTeamWithMembersResponse> offset) { }

	// RVA: 0x143A738 Offset: 0x143A738 VA: 0x143A738
	public static void FinishSizePrefixedGetTeamWithMembersResponseBuffer(FlatBufferBuilder builder, Offset<GetTeamWithMembersResponse> offset) { }
}

// Namespace: magicsort.schemas.v1.team