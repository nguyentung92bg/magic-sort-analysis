public struct TeamRequest : IFlatbufferObject // TypeDefIndex: 5561
{
	// Fields
	private Table __p; // 0x0

	// Properties
	public ByteBuffer ByteBuffer { get; }
	public string UserPublicID { get; }
	public string TeamID { get; }
	public long RequestedAt { get; }
	public string ImageUrl { get; }
	public string ImageID { get; }
	public string NickName { get; }
	public long Level { get; }
	public string FrameID { get; }
	public string NameStyle { get; }

	// Methods

	// RVA: 0x143D838 Offset: 0x143D838 VA: 0x143D838 Slot: 5
	public ByteBuffer get_ByteBuffer() { }

	// RVA: 0x143D840 Offset: 0x143D840 VA: 0x143D840
	public static void ValidateVersion() { }

	// RVA: 0x143D848 Offset: 0x143D848 VA: 0x143D848
	public static TeamRequest GetRootAsTeamRequest(ByteBuffer _bb) { }

	// RVA: 0x143D854 Offset: 0x143D854 VA: 0x143D854
	public static TeamRequest GetRootAsTeamRequest(ByteBuffer _bb, TeamRequest obj) { }

	// RVA: 0x143D898 Offset: 0x143D898 VA: 0x143D898 Slot: 4
	public void __init(int _i, ByteBuffer _bb) { }

	// RVA: 0x1438E98 Offset: 0x1438E98 VA: 0x1438E98
	public TeamRequest __assign(int _i, ByteBuffer _bb) { }

	// RVA: 0x143D8D4 Offset: 0x143D8D4 VA: 0x143D8D4
	public string get_UserPublicID() { }

	// RVA: 0x143D910 Offset: 0x143D910 VA: 0x143D910
	public Nullable<ArraySegment<byte>> GetUserPublicIDBytes() { }

	// RVA: 0x143D948 Offset: 0x143D948 VA: 0x143D948
	public byte[] GetUserPublicIDArray() { }

	// RVA: 0x143D994 Offset: 0x143D994 VA: 0x143D994
	public string get_TeamID() { }

	// RVA: 0x143D9D0 Offset: 0x143D9D0 VA: 0x143D9D0
	public Nullable<ArraySegment<byte>> GetTeamIDBytes() { }

	// RVA: 0x143DA08 Offset: 0x143DA08 VA: 0x143DA08
	public byte[] GetTeamIDArray() { }

	// RVA: 0x143DA54 Offset: 0x143DA54 VA: 0x143DA54
	public long get_RequestedAt() { }

	// RVA: 0x143DA9C Offset: 0x143DA9C VA: 0x143DA9C
	public string get_ImageUrl() { }

	// RVA: 0x143DAD8 Offset: 0x143DAD8 VA: 0x143DAD8
	public Nullable<ArraySegment<byte>> GetImageUrlBytes() { }

	// RVA: 0x143DB10 Offset: 0x143DB10 VA: 0x143DB10
	public byte[] GetImageUrlArray() { }

	// RVA: 0x143DB5C Offset: 0x143DB5C VA: 0x143DB5C
	public string get_ImageID() { }

	// RVA: 0x143DB98 Offset: 0x143DB98 VA: 0x143DB98
	public Nullable<ArraySegment<byte>> GetImageIDBytes() { }

	// RVA: 0x143DBD0 Offset: 0x143DBD0 VA: 0x143DBD0
	public byte[] GetImageIDArray() { }

	// RVA: 0x143DC1C Offset: 0x143DC1C VA: 0x143DC1C
	public string get_NickName() { }

	// RVA: 0x143DC58 Offset: 0x143DC58 VA: 0x143DC58
	public Nullable<ArraySegment<byte>> GetNickNameBytes() { }

	// RVA: 0x143DC90 Offset: 0x143DC90 VA: 0x143DC90
	public byte[] GetNickNameArray() { }

	// RVA: 0x143DCDC Offset: 0x143DCDC VA: 0x143DCDC
	public long get_Level() { }

	// RVA: 0x143DD24 Offset: 0x143DD24 VA: 0x143DD24
	public string get_FrameID() { }

	// RVA: 0x143DD60 Offset: 0x143DD60 VA: 0x143DD60
	public Nullable<ArraySegment<byte>> GetFrameIDBytes() { }

	// RVA: 0x143DD98 Offset: 0x143DD98 VA: 0x143DD98
	public byte[] GetFrameIDArray() { }

	// RVA: 0x143DDE4 Offset: 0x143DDE4 VA: 0x143DDE4
	public string get_NameStyle() { }

	// RVA: 0x143DE20 Offset: 0x143DE20 VA: 0x143DE20
	public Nullable<ArraySegment<byte>> GetNameStyleBytes() { }

	// RVA: 0x143DE58 Offset: 0x143DE58 VA: 0x143DE58
	public byte[] GetNameStyleArray() { }

	// RVA: 0x143DEA4 Offset: 0x143DEA4 VA: 0x143DEA4
	public static Offset<TeamRequest> CreateTeamRequest(FlatBufferBuilder builder, StringOffset userPublicIDOffset, StringOffset teamIDOffset, long requestedAt = 0, StringOffset imageUrlOffset, StringOffset imageIDOffset, StringOffset nickNameOffset, long level = 0, StringOffset frameIDOffset, StringOffset nameStyleOffset) { }

	// RVA: 0x143E0F8 Offset: 0x143E0F8 VA: 0x143E0F8
	public static void StartTeamRequest(FlatBufferBuilder builder) { }

	// RVA: 0x143E088 Offset: 0x143E088 VA: 0x143E088
	public static void AddUserPublicID(FlatBufferBuilder builder, StringOffset userPublicIDOffset) { }

	// RVA: 0x143E068 Offset: 0x143E068 VA: 0x143E068
	public static void AddTeamID(FlatBufferBuilder builder, StringOffset teamIDOffset) { }

	// RVA: 0x143DFA8 Offset: 0x143DFA8 VA: 0x143DFA8
	public static void AddRequestedAt(FlatBufferBuilder builder, long requestedAt) { }

	// RVA: 0x143E048 Offset: 0x143E048 VA: 0x143E048
	public static void AddImageUrl(FlatBufferBuilder builder, StringOffset imageUrlOffset) { }

	// RVA: 0x143E028 Offset: 0x143E028 VA: 0x143E028
	public static void AddImageID(FlatBufferBuilder builder, StringOffset imageIDOffset) { }

	// RVA: 0x143E008 Offset: 0x143E008 VA: 0x143E008
	public static void AddNickName(FlatBufferBuilder builder, StringOffset nickNameOffset) { }

	// RVA: 0x143DF88 Offset: 0x143DF88 VA: 0x143DF88
	public static void AddLevel(FlatBufferBuilder builder, long level) { }

	// RVA: 0x143DFE8 Offset: 0x143DFE8 VA: 0x143DFE8
	public static void AddFrameID(FlatBufferBuilder builder, StringOffset frameIDOffset) { }

	// RVA: 0x143DFC8 Offset: 0x143DFC8 VA: 0x143DFC8
	public static void AddNameStyle(FlatBufferBuilder builder, StringOffset nameStyleOffset) { }

	// RVA: 0x143E0A8 Offset: 0x143E0A8 VA: 0x143E0A8
	public static Offset<TeamRequest> EndTeamRequest(FlatBufferBuilder builder) { }
}

// Namespace: magicsort.schemas.v1.team