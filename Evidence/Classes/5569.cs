public struct ChatMessage : IFlatbufferObject // TypeDefIndex: 5569
{
	// Fields
	private Table __p; // 0x0

	// Properties
	public ByteBuffer ByteBuffer { get; }
	public string Text { get; }
	public string SenderId { get; }
	public int Type { get; }
	public string UserName { get; }
	public long BadgeId { get; }
	public string ImageUrl { get; }
	public string GeneralBadgeId { get; }
	public string FrameId { get; }
	public string NameStyle { get; }

	// Methods

	// RVA: 0x14400A0 Offset: 0x14400A0 VA: 0x14400A0 Slot: 5
	public ByteBuffer get_ByteBuffer() { }

	// RVA: 0x14400A8 Offset: 0x14400A8 VA: 0x14400A8
	public static void ValidateVersion() { }

	// RVA: 0x14400B0 Offset: 0x14400B0 VA: 0x14400B0
	public static ChatMessage GetRootAsChatMessage(ByteBuffer _bb) { }

	// RVA: 0x14400BC Offset: 0x14400BC VA: 0x14400BC
	public static ChatMessage GetRootAsChatMessage(ByteBuffer _bb, ChatMessage obj) { }

	// RVA: 0x1440140 Offset: 0x1440140 VA: 0x1440140 Slot: 4
	public void __init(int _i, ByteBuffer _bb) { }

	// RVA: 0x1440100 Offset: 0x1440100 VA: 0x1440100
	public ChatMessage __assign(int _i, ByteBuffer _bb) { }

	// RVA: 0x144017C Offset: 0x144017C VA: 0x144017C
	public string get_Text() { }

	// RVA: 0x14401B8 Offset: 0x14401B8 VA: 0x14401B8
	public Nullable<ArraySegment<byte>> GetTextBytes() { }

	// RVA: 0x14401F0 Offset: 0x14401F0 VA: 0x14401F0
	public byte[] GetTextArray() { }

	// RVA: 0x144023C Offset: 0x144023C VA: 0x144023C
	public string get_SenderId() { }

	// RVA: 0x1440278 Offset: 0x1440278 VA: 0x1440278
	public Nullable<ArraySegment<byte>> GetSenderIdBytes() { }

	// RVA: 0x14402B0 Offset: 0x14402B0 VA: 0x14402B0
	public byte[] GetSenderIdArray() { }

	// RVA: 0x14402FC Offset: 0x14402FC VA: 0x14402FC
	public int get_Type() { }

	// RVA: 0x1440340 Offset: 0x1440340 VA: 0x1440340
	public string get_UserName() { }

	// RVA: 0x144037C Offset: 0x144037C VA: 0x144037C
	public Nullable<ArraySegment<byte>> GetUserNameBytes() { }

	// RVA: 0x14403B4 Offset: 0x14403B4 VA: 0x14403B4
	public byte[] GetUserNameArray() { }

	// RVA: 0x1440400 Offset: 0x1440400 VA: 0x1440400
	public long get_BadgeId() { }

	// RVA: 0x1440448 Offset: 0x1440448 VA: 0x1440448
	public string get_ImageUrl() { }

	// RVA: 0x1440484 Offset: 0x1440484 VA: 0x1440484
	public Nullable<ArraySegment<byte>> GetImageUrlBytes() { }

	// RVA: 0x14404BC Offset: 0x14404BC VA: 0x14404BC
	public byte[] GetImageUrlArray() { }

	// RVA: 0x1440508 Offset: 0x1440508 VA: 0x1440508
	public string get_GeneralBadgeId() { }

	// RVA: 0x1440544 Offset: 0x1440544 VA: 0x1440544
	public Nullable<ArraySegment<byte>> GetGeneralBadgeIdBytes() { }

	// RVA: 0x144057C Offset: 0x144057C VA: 0x144057C
	public byte[] GetGeneralBadgeIdArray() { }

	// RVA: 0x14405C8 Offset: 0x14405C8 VA: 0x14405C8
	public string get_FrameId() { }

	// RVA: 0x1440604 Offset: 0x1440604 VA: 0x1440604
	public Nullable<ArraySegment<byte>> GetFrameIdBytes() { }

	// RVA: 0x144063C Offset: 0x144063C VA: 0x144063C
	public byte[] GetFrameIdArray() { }

	// RVA: 0x1440688 Offset: 0x1440688 VA: 0x1440688
	public string get_NameStyle() { }

	// RVA: 0x14406C4 Offset: 0x14406C4 VA: 0x14406C4
	public Nullable<ArraySegment<byte>> GetNameStyleBytes() { }

	// RVA: 0x14406FC Offset: 0x14406FC VA: 0x14406FC
	public byte[] GetNameStyleArray() { }

	// RVA: 0x1440748 Offset: 0x1440748 VA: 0x1440748
	public static Offset<ChatMessage> CreateChatMessage(FlatBufferBuilder builder, StringOffset textOffset, StringOffset sender_idOffset, int type = 0, StringOffset user_nameOffset, long badge_id = 0, StringOffset image_urlOffset, StringOffset general_badge_idOffset, StringOffset frame_idOffset, StringOffset name_styleOffset) { }

	// RVA: 0x144099C Offset: 0x144099C VA: 0x144099C
	public static void StartChatMessage(FlatBufferBuilder builder) { }

	// RVA: 0x144092C Offset: 0x144092C VA: 0x144092C
	public static void AddText(FlatBufferBuilder builder, StringOffset textOffset) { }

	// RVA: 0x144090C Offset: 0x144090C VA: 0x144090C
	public static void AddSenderId(FlatBufferBuilder builder, StringOffset senderIdOffset) { }

	// RVA: 0x14408EC Offset: 0x14408EC VA: 0x14408EC
	public static void AddType(FlatBufferBuilder builder, int type) { }

	// RVA: 0x14408CC Offset: 0x14408CC VA: 0x14408CC
	public static void AddUserName(FlatBufferBuilder builder, StringOffset userNameOffset) { }

	// RVA: 0x144082C Offset: 0x144082C VA: 0x144082C
	public static void AddBadgeId(FlatBufferBuilder builder, long badgeId) { }

	// RVA: 0x14408AC Offset: 0x14408AC VA: 0x14408AC
	public static void AddImageUrl(FlatBufferBuilder builder, StringOffset imageUrlOffset) { }

	// RVA: 0x144088C Offset: 0x144088C VA: 0x144088C
	public static void AddGeneralBadgeId(FlatBufferBuilder builder, StringOffset generalBadgeIdOffset) { }

	// RVA: 0x144086C Offset: 0x144086C VA: 0x144086C
	public static void AddFrameId(FlatBufferBuilder builder, StringOffset frameIdOffset) { }

	// RVA: 0x144084C Offset: 0x144084C VA: 0x144084C
	public static void AddNameStyle(FlatBufferBuilder builder, StringOffset nameStyleOffset) { }

	// RVA: 0x144094C Offset: 0x144094C VA: 0x144094C
	public static Offset<ChatMessage> EndChatMessage(FlatBufferBuilder builder) { }
}

// Namespace: magicsort.schemas.v1.message