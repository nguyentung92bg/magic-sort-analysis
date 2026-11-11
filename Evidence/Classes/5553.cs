public struct TeamCardHelp : IFlatbufferObject // TypeDefIndex: 5553
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
	public string CardID { get; }
	public string HelperFrameID { get; }
	public string HelperNameStyle { get; }

	// Methods

	// RVA: 0x143A87C Offset: 0x143A87C VA: 0x143A87C Slot: 5
	public ByteBuffer get_ByteBuffer() { }

	// RVA: 0x143A884 Offset: 0x143A884 VA: 0x143A884
	public static void ValidateVersion() { }

	// RVA: 0x143A88C Offset: 0x143A88C VA: 0x143A88C
	public static TeamCardHelp GetRootAsTeamCardHelp(ByteBuffer _bb) { }

	// RVA: 0x143A898 Offset: 0x143A898 VA: 0x143A898
	public static TeamCardHelp GetRootAsTeamCardHelp(ByteBuffer _bb, TeamCardHelp obj) { }

	// RVA: 0x143A8DC Offset: 0x143A8DC VA: 0x143A8DC Slot: 4
	public void __init(int _i, ByteBuffer _bb) { }

	// RVA: 0x1436C00 Offset: 0x1436C00 VA: 0x1436C00
	public TeamCardHelp __assign(int _i, ByteBuffer _bb) { }

	// RVA: 0x143A918 Offset: 0x143A918 VA: 0x143A918
	public string get_NickName() { }

	// RVA: 0x143A954 Offset: 0x143A954 VA: 0x143A954
	public Nullable<ArraySegment<byte>> GetNickNameBytes() { }

	// RVA: 0x143A98C Offset: 0x143A98C VA: 0x143A98C
	public byte[] GetNickNameArray() { }

	// RVA: 0x143A9D8 Offset: 0x143A9D8 VA: 0x143A9D8
	public string get_TeamID() { }

	// RVA: 0x143AA14 Offset: 0x143AA14 VA: 0x143AA14
	public Nullable<ArraySegment<byte>> GetTeamIDBytes() { }

	// RVA: 0x143AA4C Offset: 0x143AA4C VA: 0x143AA4C
	public byte[] GetTeamIDArray() { }

	// RVA: 0x143AA98 Offset: 0x143AA98 VA: 0x143AA98
	public string get_HelperUserPublicID() { }

	// RVA: 0x143AAD4 Offset: 0x143AAD4 VA: 0x143AAD4
	public Nullable<ArraySegment<byte>> GetHelperUserPublicIDBytes() { }

	// RVA: 0x143AB0C Offset: 0x143AB0C VA: 0x143AB0C
	public byte[] GetHelperUserPublicIDArray() { }

	// RVA: 0x143AB58 Offset: 0x143AB58 VA: 0x143AB58
	public string get_MessageID() { }

	// RVA: 0x143AB94 Offset: 0x143AB94 VA: 0x143AB94
	public Nullable<ArraySegment<byte>> GetMessageIDBytes() { }

	// RVA: 0x143ABCC Offset: 0x143ABCC VA: 0x143ABCC
	public byte[] GetMessageIDArray() { }

	// RVA: 0x143AC18 Offset: 0x143AC18 VA: 0x143AC18
	public string get_HelpedUserPublicID() { }

	// RVA: 0x143AC54 Offset: 0x143AC54 VA: 0x143AC54
	public Nullable<ArraySegment<byte>> GetHelpedUserPublicIDBytes() { }

	// RVA: 0x143AC8C Offset: 0x143AC8C VA: 0x143AC8C
	public byte[] GetHelpedUserPublicIDArray() { }

	// RVA: 0x143ACD8 Offset: 0x143ACD8 VA: 0x143ACD8
	public string get_HelperImageID() { }

	// RVA: 0x143AD14 Offset: 0x143AD14 VA: 0x143AD14
	public Nullable<ArraySegment<byte>> GetHelperImageIDBytes() { }

	// RVA: 0x143AD4C Offset: 0x143AD4C VA: 0x143AD4C
	public byte[] GetHelperImageIDArray() { }

	// RVA: 0x143AD98 Offset: 0x143AD98 VA: 0x143AD98
	public string get_HelperUserImageURL() { }

	// RVA: 0x143ADD4 Offset: 0x143ADD4 VA: 0x143ADD4
	public Nullable<ArraySegment<byte>> GetHelperUserImageURLBytes() { }

	// RVA: 0x143AE0C Offset: 0x143AE0C VA: 0x143AE0C
	public byte[] GetHelperUserImageURLArray() { }

	// RVA: 0x143AE58 Offset: 0x143AE58 VA: 0x143AE58
	public string get_CardID() { }

	// RVA: 0x143AE94 Offset: 0x143AE94 VA: 0x143AE94
	public Nullable<ArraySegment<byte>> GetCardIDBytes() { }

	// RVA: 0x143AECC Offset: 0x143AECC VA: 0x143AECC
	public byte[] GetCardIDArray() { }

	// RVA: 0x143AF18 Offset: 0x143AF18 VA: 0x143AF18
	public string get_HelperFrameID() { }

	// RVA: 0x143AF54 Offset: 0x143AF54 VA: 0x143AF54
	public Nullable<ArraySegment<byte>> GetHelperFrameIDBytes() { }

	// RVA: 0x143AF8C Offset: 0x143AF8C VA: 0x143AF8C
	public byte[] GetHelperFrameIDArray() { }

	// RVA: 0x143AFD8 Offset: 0x143AFD8 VA: 0x143AFD8
	public string get_HelperNameStyle() { }

	// RVA: 0x143B014 Offset: 0x143B014 VA: 0x143B014
	public Nullable<ArraySegment<byte>> GetHelperNameStyleBytes() { }

	// RVA: 0x143B04C Offset: 0x143B04C VA: 0x143B04C
	public byte[] GetHelperNameStyleArray() { }

	// RVA: 0x143B098 Offset: 0x143B098 VA: 0x143B098
	public static Offset<TeamCardHelp> CreateTeamCardHelp(FlatBufferBuilder builder, StringOffset nickNameOffset, StringOffset teamIDOffset, StringOffset helperUserPublicIDOffset, StringOffset messageIDOffset, StringOffset helpedUserPublicIDOffset, StringOffset helperImageIDOffset, StringOffset helperUserImageURLOffset, StringOffset cardIDOffset, StringOffset helperFrameIDOffset, StringOffset helperNameStyleOffset) { }

	// RVA: 0x143B31C Offset: 0x143B31C VA: 0x143B31C
	public static void StartTeamCardHelp(FlatBufferBuilder builder) { }

	// RVA: 0x143B2AC Offset: 0x143B2AC VA: 0x143B2AC
	public static void AddNickName(FlatBufferBuilder builder, StringOffset nickNameOffset) { }

	// RVA: 0x143B28C Offset: 0x143B28C VA: 0x143B28C
	public static void AddTeamID(FlatBufferBuilder builder, StringOffset teamIDOffset) { }

	// RVA: 0x143B26C Offset: 0x143B26C VA: 0x143B26C
	public static void AddHelperUserPublicID(FlatBufferBuilder builder, StringOffset helperUserPublicIDOffset) { }

	// RVA: 0x143B24C Offset: 0x143B24C VA: 0x143B24C
	public static void AddMessageID(FlatBufferBuilder builder, StringOffset messageIDOffset) { }

	// RVA: 0x143B22C Offset: 0x143B22C VA: 0x143B22C
	public static void AddHelpedUserPublicID(FlatBufferBuilder builder, StringOffset helpedUserPublicIDOffset) { }

	// RVA: 0x143B20C Offset: 0x143B20C VA: 0x143B20C
	public static void AddHelperImageID(FlatBufferBuilder builder, StringOffset helperImageIDOffset) { }

	// RVA: 0x143B1EC Offset: 0x143B1EC VA: 0x143B1EC
	public static void AddHelperUserImageURL(FlatBufferBuilder builder, StringOffset helperUserImageURLOffset) { }

	// RVA: 0x143B1CC Offset: 0x143B1CC VA: 0x143B1CC
	public static void AddCardID(FlatBufferBuilder builder, StringOffset cardIDOffset) { }

	// RVA: 0x143B1AC Offset: 0x143B1AC VA: 0x143B1AC
	public static void AddHelperFrameID(FlatBufferBuilder builder, StringOffset helperFrameIDOffset) { }

	// RVA: 0x143B18C Offset: 0x143B18C VA: 0x143B18C
	public static void AddHelperNameStyle(FlatBufferBuilder builder, StringOffset helperNameStyleOffset) { }

	// RVA: 0x143B2CC Offset: 0x143B2CC VA: 0x143B2CC
	public static Offset<TeamCardHelp> EndTeamCardHelp(FlatBufferBuilder builder) { }
}

// Namespace: magicsort.schemas.v1.team