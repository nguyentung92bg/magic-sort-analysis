public struct GetTeamCardHelpsResponse : IFlatbufferObject // TypeDefIndex: 5539
{
	// Fields
	private Table __p; // 0x0

	// Properties
	public ByteBuffer ByteBuffer { get; }
	public int ReceivedHelpsLength { get; }
	public int SentHelpsLength { get; }
	public Nullable<BaseResponse> BaseResponse { get; }

	// Methods

	// RVA: 0x143697C Offset: 0x143697C VA: 0x143697C Slot: 5
	public ByteBuffer get_ByteBuffer() { }

	// RVA: 0x1436984 Offset: 0x1436984 VA: 0x1436984
	public static void ValidateVersion() { }

	// RVA: 0x143698C Offset: 0x143698C VA: 0x143698C
	public static GetTeamCardHelpsResponse GetRootAsGetTeamCardHelpsResponse(ByteBuffer _bb) { }

	// RVA: 0x1436998 Offset: 0x1436998 VA: 0x1436998
	public static GetTeamCardHelpsResponse GetRootAsGetTeamCardHelpsResponse(ByteBuffer _bb, GetTeamCardHelpsResponse obj) { }

	// RVA: 0x1436A1C Offset: 0x1436A1C VA: 0x1436A1C
	public static bool VerifyGetTeamCardHelpsResponse(ByteBuffer _bb) { }

	// RVA: 0x1436AF0 Offset: 0x1436AF0 VA: 0x1436AF0 Slot: 4
	public void __init(int _i, ByteBuffer _bb) { }

	// RVA: 0x14369DC Offset: 0x14369DC VA: 0x14369DC
	public GetTeamCardHelpsResponse __assign(int _i, ByteBuffer _bb) { }

	// RVA: 0x1436B2C Offset: 0x1436B2C VA: 0x1436B2C
	public Nullable<TeamCardHelp> ReceivedHelps(int j) { }

	// RVA: 0x1436C40 Offset: 0x1436C40 VA: 0x1436C40
	public int get_ReceivedHelpsLength() { }

	// RVA: 0x1436C74 Offset: 0x1436C74 VA: 0x1436C74
	public Nullable<TeamCardHelp> SentHelps(int j) { }

	// RVA: 0x1436D48 Offset: 0x1436D48 VA: 0x1436D48
	public int get_SentHelpsLength() { }

	// RVA: 0x1436D7C Offset: 0x1436D7C VA: 0x1436D7C
	public Nullable<BaseResponse> get_BaseResponse() { }

	// RVA: 0x1436E3C Offset: 0x1436E3C VA: 0x1436E3C
	public static Offset<GetTeamCardHelpsResponse> CreateGetTeamCardHelpsResponse(FlatBufferBuilder builder, VectorOffset received_helpsOffset, VectorOffset sent_helpsOffset, Offset<BaseResponse> baseResponseOffset) { }

	// RVA: 0x1436F5C Offset: 0x1436F5C VA: 0x1436F5C
	public static void StartGetTeamCardHelpsResponse(FlatBufferBuilder builder) { }

	// RVA: 0x1436EEC Offset: 0x1436EEC VA: 0x1436EEC
	public static void AddReceivedHelps(FlatBufferBuilder builder, VectorOffset receivedHelpsOffset) { }

	// RVA: 0x1436F74 Offset: 0x1436F74 VA: 0x1436F74
	public static VectorOffset CreateReceivedHelpsVector(FlatBufferBuilder builder, Offset<TeamCardHelp>[] data) { }

	// RVA: 0x143701C Offset: 0x143701C VA: 0x143701C
	public static VectorOffset CreateReceivedHelpsVectorBlock(FlatBufferBuilder builder, Offset<TeamCardHelp>[] data) { }

	// RVA: 0x14370A4 Offset: 0x14370A4 VA: 0x14370A4
	public static VectorOffset CreateReceivedHelpsVectorBlock(FlatBufferBuilder builder, ArraySegment<Offset<TeamCardHelp>> data) { }

	// RVA: 0x1437168 Offset: 0x1437168 VA: 0x1437168
	public static VectorOffset CreateReceivedHelpsVectorBlock(FlatBufferBuilder builder, IntPtr dataPtr, int sizeInBytes) { }

	// RVA: 0x14371FC Offset: 0x14371FC VA: 0x14371FC
	public static void StartReceivedHelpsVector(FlatBufferBuilder builder, int numElems) { }

	// RVA: 0x1436ECC Offset: 0x1436ECC VA: 0x1436ECC
	public static void AddSentHelps(FlatBufferBuilder builder, VectorOffset sentHelpsOffset) { }

	// RVA: 0x143721C Offset: 0x143721C VA: 0x143721C
	public static VectorOffset CreateSentHelpsVector(FlatBufferBuilder builder, Offset<TeamCardHelp>[] data) { }

	// RVA: 0x14372C4 Offset: 0x14372C4 VA: 0x14372C4
	public static VectorOffset CreateSentHelpsVectorBlock(FlatBufferBuilder builder, Offset<TeamCardHelp>[] data) { }

	// RVA: 0x143734C Offset: 0x143734C VA: 0x143734C
	public static VectorOffset CreateSentHelpsVectorBlock(FlatBufferBuilder builder, ArraySegment<Offset<TeamCardHelp>> data) { }

	// RVA: 0x1437410 Offset: 0x1437410 VA: 0x1437410
	public static VectorOffset CreateSentHelpsVectorBlock(FlatBufferBuilder builder, IntPtr dataPtr, int sizeInBytes) { }

	// RVA: 0x14374A4 Offset: 0x14374A4 VA: 0x14374A4
	public static void StartSentHelpsVector(FlatBufferBuilder builder, int numElems) { }

	// RVA: 0x1436EAC Offset: 0x1436EAC VA: 0x1436EAC
	public static void AddBaseResponse(FlatBufferBuilder builder, Offset<BaseResponse> baseResponseOffset) { }

	// RVA: 0x1436F0C Offset: 0x1436F0C VA: 0x1436F0C
	public static Offset<GetTeamCardHelpsResponse> EndGetTeamCardHelpsResponse(FlatBufferBuilder builder) { }

	// RVA: 0x14374C4 Offset: 0x14374C4 VA: 0x14374C4
	public static void FinishGetTeamCardHelpsResponseBuffer(FlatBufferBuilder builder, Offset<GetTeamCardHelpsResponse> offset) { }

	// RVA: 0x14374D8 Offset: 0x14374D8 VA: 0x14374D8
	public static void FinishSizePrefixedGetTeamCardHelpsResponseBuffer(FlatBufferBuilder builder, Offset<GetTeamCardHelpsResponse> offset) { }
}

// Namespace: magicsort.schemas.v1.team