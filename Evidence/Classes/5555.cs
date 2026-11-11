public struct TeamHelp : IFlatbufferObject // TypeDefIndex: 5555
{
	// Fields
	private Table __p; // 0x0

	// Properties
	public ByteBuffer ByteBuffer { get; }
	public string NickName { get; }
	public string TeamID { get; }
	public string HelperUserPublicID { get; }
	public string MessageID { get; }
	public string HelpedUserPublicID { get; }
	public string HelperImageID { get; }
	public string HelperUserImageURL { get; }
	public string HelperFrameID { get; }
	public string HelperNameStyle { get; }

	// Methods

	// RVA: 0x143B498 Offset: 0x143B498 VA: 0x143B498 Slot: 5
	public ByteBuffer get_ByteBuffer() { }

	// RVA: 0x143B4A0 Offset: 0x143B4A0 VA: 0x143B4A0
	public static void ValidateVersion() { }

	// RVA: 0x143B4A8 Offset: 0x143B4A8 VA: 0x143B4A8
	public static TeamHelp GetRootAsTeamHelp(ByteBuffer _bb) { }

	// RVA: 0x143B4B4 Offset: 0x143B4B4 VA: 0x143B4B4
	public static TeamHelp GetRootAsTeamHelp(ByteBuffer _bb, TeamHelp obj) { }

	// RVA: 0x143B4F8 Offset: 0x143B4F8 VA: 0x143B4F8 Slot: 4
	public void __init(int _i, ByteBuffer _bb) { }

	// RVA: 0x14378E0 Offset: 0x14378E0 VA: 0x14378E0
	public TeamHelp __assign(int _i, ByteBuffer _bb) { }

	// RVA: 0x143B534 Offset: 0x143B534 VA: 0x143B534
	public string get_NickName() { }

	// RVA: 0x143B570 Offset: 0x143B570 VA: 0x143B570
	public Nullable<ArraySegment<byte>> GetNickNameBytes() { }

	// RVA: 0x143B5A8 Offset: 0x143B5A8 VA: 0x143B5A8
	public byte[] GetNickNameArray() { }

	// RVA: 0x143B5F4 Offset: 0x143B5F4 VA: 0x143B5F4
	public string get_TeamID() { }

	// RVA: 0x143B630 Offset: 0x143B630 VA: 0x143B630
	public Nullable<ArraySegment<byte>> GetTeamIDBytes() { }

	// RVA: 0x143B668 Offset: 0x143B668 VA: 0x143B668
	public byte[] GetTeamIDArray() { }

	// RVA: 0x143B6B4 Offset: 0x143B6B4 VA: 0x143B6B4
	public string get_HelperUserPublicID() { }

	// RVA: 0x143B6F0 Offset: 0x143B6F0 VA: 0x143B6F0
	public Nullable<ArraySegment<byte>> GetHelperUserPublicIDBytes() { }

	// RVA: 0x143B728 Offset: 0x143B728 VA: 0x143B728
	public byte[] GetHelperUserPublicIDArray() { }

	// RVA: 0x143B774 Offset: 0x143B774 VA: 0x143B774
	public string get_MessageID() { }

	// RVA: 0x143B7B0 Offset: 0x143B7B0 VA: 0x143B7B0
	public Nullable<ArraySegment<byte>> GetMessageIDBytes() { }

	// RVA: 0x143B7E8 Offset: 0x143B7E8 VA: 0x143B7E8
	public byte[] GetMessageIDArray() { }

	// RVA: 0x143B834 Offset: 0x143B834 VA: 0x143B834
	public string get_HelpedUserPublicID() { }

	// RVA: 0x143B870 Offset: 0x143B870 VA: 0x143B870
	public Nullable<ArraySegment<byte>> GetHelpedUserPublicIDBytes() { }

	// RVA: 0x143B8A8 Offset: 0x143B8A8 VA: 0x143B8A8
	public byte[] GetHelpedUserPublicIDArray() { }

	// RVA: 0x143B8F4 Offset: 0x143B8F4 VA: 0x143B8F4
	public string get_HelperImageID() { }

	// RVA: 0x143B930 Offset: 0x143B930 VA: 0x143B930
	public Nullable<ArraySegment<byte>> GetHelperImageIDBytes() { }

	// RVA: 0x143B968 Offset: 0x143B968 VA: 0x143B968
	public byte[] GetHelperImageIDArray() { }

	// RVA: 0x143B9B4 Offset: 0x143B9B4 VA: 0x143B9B4
	public string get_HelperUserImageURL() { }

	// RVA: 0x143B9F0 Offset: 0x143B9F0 VA: 0x143B9F0
	public Nullable<ArraySegment<byte>> GetHelperUserImageURLBytes() { }

	// RVA: 0x143BA28 Offset: 0x143BA28 VA: 0x143BA28
	public byte[] GetHelperUserImageURLArray() { }

	// RVA: 0x143BA74 Offset: 0x143BA74 VA: 0x143BA74
	public string get_HelperFrameID() { }

	// RVA: 0x143BAB0 Offset: 0x143BAB0 VA: 0x143BAB0
	public Nullable<ArraySegment<byte>> GetHelperFrameIDBytes() { }

	// RVA: 0x143BAE8 Offset: 0x143BAE8 VA: 0x143BAE8
	public byte[] GetHelperFrameIDArray() { }

	// RVA: 0x143BB34 Offset: 0x143BB34 VA: 0x143BB34
	public string get_HelperNameStyle() { }

	// RVA: 0x143BB70 Offset: 0x143BB70 VA: 0x143BB70
	public Nullable<ArraySegment<byte>> GetHelperNameStyleBytes() { }

	// RVA: 0x143BBA8 Offset: 0x143BBA8 VA: 0x143BBA8
	public byte[] GetHelperNameStyleArray() { }

	// RVA: 0x143BBF4 Offset: 0x143BBF4 VA: 0x143BBF4
	public static Offset<TeamHelp> CreateTeamHelp(FlatBufferBuilder builder, StringOffset nickNameOffset, StringOffset teamIDOffset, StringOffset helperUserPublicIDOffset, StringOffset messageIDOffset, StringOffset helpedUserPublicIDOffset, StringOffset helperImageIDOffset, StringOffset helperUserImageURLOffset, StringOffset helperFrameIDOffset, StringOffset helperNameStyleOffset) { }

	// RVA: 0x143BE48 Offset: 0x143BE48 VA: 0x143BE48
	public static void StartTeamHelp(FlatBufferBuilder builder) { }

	// RVA: 0x143BDD8 Offset: 0x143BDD8 VA: 0x143BDD8
	public static void AddNickName(FlatBufferBuilder builder, StringOffset nickNameOffset) { }

	// RVA: 0x143BDB8 Offset: 0x143BDB8 VA: 0x143BDB8
	public static void AddTeamID(FlatBufferBuilder builder, StringOffset teamIDOffset) { }

	// RVA: 0x143BD98 Offset: 0x143BD98 VA: 0x143BD98
	public static void AddHelperUserPublicID(FlatBufferBuilder builder, StringOffset helperUserPublicIDOffset) { }

	// RVA: 0x143BD78 Offset: 0x143BD78 VA: 0x143BD78
	public static void AddMessageID(FlatBufferBuilder builder, StringOffset messageIDOffset) { }

	// RVA: 0x143BD58 Offset: 0x143BD58 VA: 0x143BD58
	public static void AddHelpedUserPublicID(FlatBufferBuilder builder, StringOffset helpedUserPublicIDOffset) { }

	// RVA: 0x143BD38 Offset: 0x143BD38 VA: 0x143BD38
	public static void AddHelperImageID(FlatBufferBuilder builder, StringOffset helperImageIDOffset) { }

	// RVA: 0x143BD18 Offset: 0x143BD18 VA: 0x143BD18
	public static void AddHelperUserImageURL(FlatBufferBuilder builder, StringOffset helperUserImageURLOffset) { }

	// RVA: 0x143BCF8 Offset: 0x143BCF8 VA: 0x143BCF8
	public static void AddHelperFrameID(FlatBufferBuilder builder, StringOffset helperFrameIDOffset) { }

	// RVA: 0x143BCD8 Offset: 0x143BCD8 VA: 0x143BCD8
	public static void AddHelperNameStyle(FlatBufferBuilder builder, StringOffset helperNameStyleOffset) { }

	// RVA: 0x143BDF8 Offset: 0x143BDF8 VA: 0x143BDF8
	public static Offset<TeamHelp> EndTeamHelp(FlatBufferBuilder builder) { }
}

// Namespace: magicsort.schemas.v1.team