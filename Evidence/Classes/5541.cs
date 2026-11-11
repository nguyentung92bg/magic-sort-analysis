public struct GetTeamHelpsResponse : IFlatbufferObject // TypeDefIndex: 5541
{
	// Fields
	private Table __p; // 0x0

	// Properties
	public ByteBuffer ByteBuffer { get; }
	public int HelpsLength { get; }
	public Nullable<BaseResponse> BaseResponse { get; }

	// Methods

	// RVA: 0x143765C Offset: 0x143765C VA: 0x143765C Slot: 5
	public ByteBuffer get_ByteBuffer() { }

	// RVA: 0x1437664 Offset: 0x1437664 VA: 0x1437664
	public static void ValidateVersion() { }

	// RVA: 0x143766C Offset: 0x143766C VA: 0x143766C
	public static GetTeamHelpsResponse GetRootAsGetTeamHelpsResponse(ByteBuffer _bb) { }

	// RVA: 0x1437678 Offset: 0x1437678 VA: 0x1437678
	public static GetTeamHelpsResponse GetRootAsGetTeamHelpsResponse(ByteBuffer _bb, GetTeamHelpsResponse obj) { }

	// RVA: 0x14376FC Offset: 0x14376FC VA: 0x14376FC
	public static bool VerifyGetTeamHelpsResponse(ByteBuffer _bb) { }

	// RVA: 0x14377D0 Offset: 0x14377D0 VA: 0x14377D0 Slot: 4
	public void __init(int _i, ByteBuffer _bb) { }

	// RVA: 0x14376BC Offset: 0x14376BC VA: 0x14376BC
	public GetTeamHelpsResponse __assign(int _i, ByteBuffer _bb) { }

	// RVA: 0x143780C Offset: 0x143780C VA: 0x143780C
	public Nullable<TeamHelp> Helps(int j) { }

	// RVA: 0x1437920 Offset: 0x1437920 VA: 0x1437920
	public int get_HelpsLength() { }

	// RVA: 0x1437954 Offset: 0x1437954 VA: 0x1437954
	public Nullable<BaseResponse> get_BaseResponse() { }

	// RVA: 0x1437A14 Offset: 0x1437A14 VA: 0x1437A14
	public static Offset<GetTeamHelpsResponse> CreateGetTeamHelpsResponse(FlatBufferBuilder builder, VectorOffset helpsOffset, Offset<BaseResponse> baseResponseOffset) { }

	// RVA: 0x1437AFC Offset: 0x1437AFC VA: 0x1437AFC
	public static void StartGetTeamHelpsResponse(FlatBufferBuilder builder) { }

	// RVA: 0x1437A8C Offset: 0x1437A8C VA: 0x1437A8C
	public static void AddHelps(FlatBufferBuilder builder, VectorOffset helpsOffset) { }

	// RVA: 0x1437B14 Offset: 0x1437B14 VA: 0x1437B14
	public static VectorOffset CreateHelpsVector(FlatBufferBuilder builder, Offset<TeamHelp>[] data) { }

	// RVA: 0x1437BBC Offset: 0x1437BBC VA: 0x1437BBC
	public static VectorOffset CreateHelpsVectorBlock(FlatBufferBuilder builder, Offset<TeamHelp>[] data) { }

	// RVA: 0x1437C44 Offset: 0x1437C44 VA: 0x1437C44
	public static VectorOffset CreateHelpsVectorBlock(FlatBufferBuilder builder, ArraySegment<Offset<TeamHelp>> data) { }

	// RVA: 0x1437D08 Offset: 0x1437D08 VA: 0x1437D08
	public static VectorOffset CreateHelpsVectorBlock(FlatBufferBuilder builder, IntPtr dataPtr, int sizeInBytes) { }

	// RVA: 0x1437D9C Offset: 0x1437D9C VA: 0x1437D9C
	public static void StartHelpsVector(FlatBufferBuilder builder, int numElems) { }

	// RVA: 0x1437A6C Offset: 0x1437A6C VA: 0x1437A6C
	public static void AddBaseResponse(FlatBufferBuilder builder, Offset<BaseResponse> baseResponseOffset) { }

	// RVA: 0x1437AAC Offset: 0x1437AAC VA: 0x1437AAC
	public static Offset<GetTeamHelpsResponse> EndGetTeamHelpsResponse(FlatBufferBuilder builder) { }

	// RVA: 0x1437DBC Offset: 0x1437DBC VA: 0x1437DBC
	public static void FinishGetTeamHelpsResponseBuffer(FlatBufferBuilder builder, Offset<GetTeamHelpsResponse> offset) { }

	// RVA: 0x1437DD0 Offset: 0x1437DD0 VA: 0x1437DD0
	public static void FinishSizePrefixedGetTeamHelpsResponseBuffer(FlatBufferBuilder builder, Offset<GetTeamHelpsResponse> offset) { }
}

// Namespace: magicsort.schemas.v1.team