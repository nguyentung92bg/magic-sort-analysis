public struct TeamMemberSummary : IFlatbufferObject // TypeDefIndex: 5559
{
	// Fields
	private Table __p; // 0x0

	// Properties
	public ByteBuffer ByteBuffer { get; }
	public string UserPublicID { get; }
	public string UserName { get; }
	public long Progress { get; }
	public string FbImageURL { get; }
	public string FbAPIImageURL { get; }
	public string ImageID { get; }
	public long Role { get; }
	public long Permissions { get; }
	public long WeeklyHelp { get; }
	public bool IsMe { get; }
	public string TeamID { get; }
	public string TokenID { get; }
	public string FrameID { get; }
	public string NameStyle { get; }

	// Methods

	// RVA: 0x143C9CC Offset: 0x143C9CC VA: 0x143C9CC Slot: 5
	public ByteBuffer get_ByteBuffer() { }

	// RVA: 0x143C9D4 Offset: 0x143C9D4 VA: 0x143C9D4
	public static void ValidateVersion() { }

	// RVA: 0x143C9DC Offset: 0x143C9DC VA: 0x143C9DC
	public static TeamMemberSummary GetRootAsTeamMemberSummary(ByteBuffer _bb) { }

	// RVA: 0x143C9E8 Offset: 0x143C9E8 VA: 0x143C9E8
	public static TeamMemberSummary GetRootAsTeamMemberSummary(ByteBuffer _bb, TeamMemberSummary obj) { }

	// RVA: 0x143CA6C Offset: 0x143CA6C VA: 0x143CA6C Slot: 4
	public void __init(int _i, ByteBuffer _bb) { }

	// RVA: 0x143CA2C Offset: 0x143CA2C VA: 0x143CA2C
	public TeamMemberSummary __assign(int _i, ByteBuffer _bb) { }

	// RVA: 0x143CAA8 Offset: 0x143CAA8 VA: 0x143CAA8
	public string get_UserPublicID() { }

	// RVA: 0x143CAE4 Offset: 0x143CAE4 VA: 0x143CAE4
	public Nullable<ArraySegment<byte>> GetUserPublicIDBytes() { }

	// RVA: 0x143CB1C Offset: 0x143CB1C VA: 0x143CB1C
	public byte[] GetUserPublicIDArray() { }

	// RVA: 0x143CB68 Offset: 0x143CB68 VA: 0x143CB68
	public string get_UserName() { }

	// RVA: 0x143CBA4 Offset: 0x143CBA4 VA: 0x143CBA4
	public Nullable<ArraySegment<byte>> GetUserNameBytes() { }

	// RVA: 0x143CBDC Offset: 0x143CBDC VA: 0x143CBDC
	public byte[] GetUserNameArray() { }

	// RVA: 0x143CC28 Offset: 0x143CC28 VA: 0x143CC28
	public long get_Progress() { }

	// RVA: 0x143CC70 Offset: 0x143CC70 VA: 0x143CC70
	public string get_FbImageURL() { }

	// RVA: 0x143CCAC Offset: 0x143CCAC VA: 0x143CCAC
	public Nullable<ArraySegment<byte>> GetFbImageURLBytes() { }

	// RVA: 0x143CCE4 Offset: 0x143CCE4 VA: 0x143CCE4
	public byte[] GetFbImageURLArray() { }

	// RVA: 0x143CD30 Offset: 0x143CD30 VA: 0x143CD30
	public string get_FbAPIImageURL() { }

	// RVA: 0x143CD6C Offset: 0x143CD6C VA: 0x143CD6C
	public Nullable<ArraySegment<byte>> GetFbAPIImageURLBytes() { }

	// RVA: 0x143CDA4 Offset: 0x143CDA4 VA: 0x143CDA4
	public byte[] GetFbAPIImageURLArray() { }

	// RVA: 0x143CDF0 Offset: 0x143CDF0 VA: 0x143CDF0
	public string get_ImageID() { }

	// RVA: 0x143CE2C Offset: 0x143CE2C VA: 0x143CE2C
	public Nullable<ArraySegment<byte>> GetImageIDBytes() { }

	// RVA: 0x143CE64 Offset: 0x143CE64 VA: 0x143CE64
	public byte[] GetImageIDArray() { }

	// RVA: 0x143CEB0 Offset: 0x143CEB0 VA: 0x143CEB0
	public long get_Role() { }

	// RVA: 0x143CEF8 Offset: 0x143CEF8 VA: 0x143CEF8
	public long get_Permissions() { }

	// RVA: 0x143CF40 Offset: 0x143CF40 VA: 0x143CF40
	public long get_WeeklyHelp() { }

	// RVA: 0x143CF88 Offset: 0x143CF88 VA: 0x143CF88
	public bool get_IsMe() { }

	// RVA: 0x143CFD0 Offset: 0x143CFD0 VA: 0x143CFD0
	public string get_TeamID() { }

	// RVA: 0x143D00C Offset: 0x143D00C VA: 0x143D00C
	public Nullable<ArraySegment<byte>> GetTeamIDBytes() { }

	// RVA: 0x143D044 Offset: 0x143D044 VA: 0x143D044
	public byte[] GetTeamIDArray() { }

	// RVA: 0x143D090 Offset: 0x143D090 VA: 0x143D090
	public string get_TokenID() { }

	// RVA: 0x143D0CC Offset: 0x143D0CC VA: 0x143D0CC
	public Nullable<ArraySegment<byte>> GetTokenIDBytes() { }

	// RVA: 0x143D104 Offset: 0x143D104 VA: 0x143D104
	public byte[] GetTokenIDArray() { }

	// RVA: 0x143D150 Offset: 0x143D150 VA: 0x143D150
	public string get_FrameID() { }

	// RVA: 0x143D18C Offset: 0x143D18C VA: 0x143D18C
	public Nullable<ArraySegment<byte>> GetFrameIDBytes() { }

	// RVA: 0x143D1C4 Offset: 0x143D1C4 VA: 0x143D1C4
	public byte[] GetFrameIDArray() { }

	// RVA: 0x143D210 Offset: 0x143D210 VA: 0x143D210
	public string get_NameStyle() { }

	// RVA: 0x143D24C Offset: 0x143D24C VA: 0x143D24C
	public Nullable<ArraySegment<byte>> GetNameStyleBytes() { }

	// RVA: 0x143D284 Offset: 0x143D284 VA: 0x143D284
	public byte[] GetNameStyleArray() { }

	// RVA: 0x143D2D0 Offset: 0x143D2D0 VA: 0x143D2D0
	public static Offset<TeamMemberSummary> CreateTeamMemberSummary(FlatBufferBuilder builder, StringOffset userPublicIDOffset, StringOffset userNameOffset, long progress = 0, StringOffset fbImageURLOffset, StringOffset fbAPIImageURLOffset, StringOffset imageIDOffset, long role = 0, long permissions = 0, long weeklyHelp = 0, bool isMe = False, StringOffset teamIDOffset, StringOffset tokenIDOffset, StringOffset frameIDOffset, StringOffset nameStyleOffset) { }

	// RVA: 0x143D624 Offset: 0x143D624 VA: 0x143D624
	public static void StartTeamMemberSummary(FlatBufferBuilder builder) { }

	// RVA: 0x143D594 Offset: 0x143D594 VA: 0x143D594
	public static void AddUserPublicID(FlatBufferBuilder builder, StringOffset userPublicIDOffset) { }

	// RVA: 0x143D574 Offset: 0x143D574 VA: 0x143D574
	public static void AddUserName(FlatBufferBuilder builder, StringOffset userNameOffset) { }

	// RVA: 0x143D474 Offset: 0x143D474 VA: 0x143D474
	public static void AddProgress(FlatBufferBuilder builder, long progress) { }

	// RVA: 0x143D554 Offset: 0x143D554 VA: 0x143D554
	public static void AddFbImageURL(FlatBufferBuilder builder, StringOffset fbImageURLOffset) { }

	// RVA: 0x143D534 Offset: 0x143D534 VA: 0x143D534
	public static void AddFbAPIImageURL(FlatBufferBuilder builder, StringOffset fbAPIImageURLOffset) { }

	// RVA: 0x143D514 Offset: 0x143D514 VA: 0x143D514
	public static void AddImageID(FlatBufferBuilder builder, StringOffset imageIDOffset) { }

	// RVA: 0x143D454 Offset: 0x143D454 VA: 0x143D454
	public static void AddRole(FlatBufferBuilder builder, long role) { }

	// RVA: 0x143D434 Offset: 0x143D434 VA: 0x143D434
	public static void AddPermissions(FlatBufferBuilder builder, long permissions) { }

	// RVA: 0x143D414 Offset: 0x143D414 VA: 0x143D414
	public static void AddWeeklyHelp(FlatBufferBuilder builder, long weeklyHelp) { }

	// RVA: 0x143D5B4 Offset: 0x143D5B4 VA: 0x143D5B4
	public static void AddIsMe(FlatBufferBuilder builder, bool isMe) { }

	// RVA: 0x143D4F4 Offset: 0x143D4F4 VA: 0x143D4F4
	public static void AddTeamID(FlatBufferBuilder builder, StringOffset teamIDOffset) { }

	// RVA: 0x143D4D4 Offset: 0x143D4D4 VA: 0x143D4D4
	public static void AddTokenID(FlatBufferBuilder builder, StringOffset tokenIDOffset) { }

	// RVA: 0x143D4B4 Offset: 0x143D4B4 VA: 0x143D4B4
	public static void AddFrameID(FlatBufferBuilder builder, StringOffset frameIDOffset) { }

	// RVA: 0x143D494 Offset: 0x143D494 VA: 0x143D494
	public static void AddNameStyle(FlatBufferBuilder builder, StringOffset nameStyleOffset) { }

	// RVA: 0x143D5D4 Offset: 0x143D5D4 VA: 0x143D5D4
	public static Offset<TeamMemberSummary> EndTeamMemberSummary(FlatBufferBuilder builder) { }
}

// Namespace: magicsort.schemas.v1.team