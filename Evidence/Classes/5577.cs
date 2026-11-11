public struct SocketMessage : IFlatbufferObject // TypeDefIndex: 5577
{
	// Fields
	private Table __p; // 0x0

	// Properties
	public ByteBuffer ByteBuffer { get; }
	public string Action { get; }
	public string ConnectionId { get; }
	public string ChatId { get; }
	public string MessageId { get; }
	public string Channel { get; }
	public long OrderId { get; }
	public Content ContentType { get; }
	public long Timestamp { get; }

	// Methods

	// RVA: 0x1441598 Offset: 0x1441598 VA: 0x1441598 Slot: 5
	public ByteBuffer get_ByteBuffer() { }

	// RVA: 0x14415A0 Offset: 0x14415A0 VA: 0x14415A0
	public static void ValidateVersion() { }

	// RVA: 0x14415A8 Offset: 0x14415A8 VA: 0x14415A8
	public static SocketMessage GetRootAsSocketMessage(ByteBuffer _bb) { }

	// RVA: 0x14415B4 Offset: 0x14415B4 VA: 0x14415B4
	public static SocketMessage GetRootAsSocketMessage(ByteBuffer _bb, SocketMessage obj) { }

	// RVA: 0x14415F8 Offset: 0x14415F8 VA: 0x14415F8
	public static bool VerifySocketMessage(ByteBuffer _bb) { }

	// RVA: 0x14416CC Offset: 0x14416CC VA: 0x14416CC Slot: 4
	public void __init(int _i, ByteBuffer _bb) { }

	// RVA: 0x1440E78 Offset: 0x1440E78 VA: 0x1440E78
	public SocketMessage __assign(int _i, ByteBuffer _bb) { }

	// RVA: 0x1441708 Offset: 0x1441708 VA: 0x1441708
	public string get_Action() { }

	// RVA: 0x1441744 Offset: 0x1441744 VA: 0x1441744
	public Nullable<ArraySegment<byte>> GetActionBytes() { }

	// RVA: 0x144177C Offset: 0x144177C VA: 0x144177C
	public byte[] GetActionArray() { }

	// RVA: 0x14417C8 Offset: 0x14417C8 VA: 0x14417C8
	public string get_ConnectionId() { }

	// RVA: 0x1441804 Offset: 0x1441804 VA: 0x1441804
	public Nullable<ArraySegment<byte>> GetConnectionIdBytes() { }

	// RVA: 0x144183C Offset: 0x144183C VA: 0x144183C
	public byte[] GetConnectionIdArray() { }

	// RVA: 0x1441888 Offset: 0x1441888 VA: 0x1441888
	public string get_ChatId() { }

	// RVA: 0x14418C4 Offset: 0x14418C4 VA: 0x14418C4
	public Nullable<ArraySegment<byte>> GetChatIdBytes() { }

	// RVA: 0x14418FC Offset: 0x14418FC VA: 0x14418FC
	public byte[] GetChatIdArray() { }

	// RVA: 0x1441948 Offset: 0x1441948 VA: 0x1441948
	public string get_MessageId() { }

	// RVA: 0x1441984 Offset: 0x1441984 VA: 0x1441984
	public Nullable<ArraySegment<byte>> GetMessageIdBytes() { }

	// RVA: 0x14419BC Offset: 0x14419BC VA: 0x14419BC
	public byte[] GetMessageIdArray() { }

	// RVA: 0x1441A08 Offset: 0x1441A08 VA: 0x1441A08
	public string get_Channel() { }

	// RVA: 0x1441A44 Offset: 0x1441A44 VA: 0x1441A44
	public Nullable<ArraySegment<byte>> GetChannelBytes() { }

	// RVA: 0x1441A7C Offset: 0x1441A7C VA: 0x1441A7C
	public byte[] GetChannelArray() { }

	// RVA: 0x1441AC8 Offset: 0x1441AC8 VA: 0x1441AC8
	public long get_OrderId() { }

	// RVA: 0x1441B10 Offset: 0x1441B10 VA: 0x1441B10
	public Content get_ContentType() { }

	// RVA: -1 Offset: -1
	public Nullable<TTable> Content<TTable>() { }
	/* GenericInstMethod :
	|
	|-RVA: 0x268F81C Offset: 0x268F81C VA: 0x268F81C
	|-SocketMessage.Content<ChatMessage>
	|
	|-RVA: 0x268F89C Offset: 0x268F89C VA: 0x268F89C
	|-SocketMessage.Content<EmptyContent>
	*/

	// RVA: 0x1441B54 Offset: 0x1441B54 VA: 0x1441B54
	public ChatMessage ContentAsChatMessage() { }

	// RVA: 0x1441BEC Offset: 0x1441BEC VA: 0x1441BEC
	public EmptyContent ContentAsEmptyContent() { }

	// RVA: 0x1441C84 Offset: 0x1441C84 VA: 0x1441C84
	public long get_Timestamp() { }

	// RVA: 0x1441CCC Offset: 0x1441CCC VA: 0x1441CCC
	public static Offset<SocketMessage> CreateSocketMessage(FlatBufferBuilder builder, StringOffset actionOffset, StringOffset connection_idOffset, StringOffset chat_idOffset, StringOffset message_idOffset, StringOffset channelOffset, long order_id = 0, Content content_type = 0, int contentOffset = 0, long timestamp = 0) { }

	// RVA: 0x1441F24 Offset: 0x1441F24 VA: 0x1441F24
	public static void StartSocketMessage(FlatBufferBuilder builder) { }

	// RVA: 0x1441E94 Offset: 0x1441E94 VA: 0x1441E94
	public static void AddAction(FlatBufferBuilder builder, StringOffset actionOffset) { }

	// RVA: 0x1441E74 Offset: 0x1441E74 VA: 0x1441E74
	public static void AddConnectionId(FlatBufferBuilder builder, StringOffset connectionIdOffset) { }

	// RVA: 0x1441E54 Offset: 0x1441E54 VA: 0x1441E54
	public static void AddChatId(FlatBufferBuilder builder, StringOffset chatIdOffset) { }

	// RVA: 0x1441E34 Offset: 0x1441E34 VA: 0x1441E34
	public static void AddMessageId(FlatBufferBuilder builder, StringOffset messageIdOffset) { }

	// RVA: 0x1441E14 Offset: 0x1441E14 VA: 0x1441E14
	public static void AddChannel(FlatBufferBuilder builder, StringOffset channelOffset) { }

	// RVA: 0x1441DD4 Offset: 0x1441DD4 VA: 0x1441DD4
	public static void AddOrderId(FlatBufferBuilder builder, long orderId) { }

	// RVA: 0x1441EB4 Offset: 0x1441EB4 VA: 0x1441EB4
	public static void AddContentType(FlatBufferBuilder builder, Content contentType) { }

	// RVA: 0x1441DF4 Offset: 0x1441DF4 VA: 0x1441DF4
	public static void AddContent(FlatBufferBuilder builder, int contentOffset) { }

	// RVA: 0x1441DB4 Offset: 0x1441DB4 VA: 0x1441DB4
	public static void AddTimestamp(FlatBufferBuilder builder, long timestamp) { }

	// RVA: 0x1441ED4 Offset: 0x1441ED4 VA: 0x1441ED4
	public static Offset<SocketMessage> EndSocketMessage(FlatBufferBuilder builder) { }

	// RVA: 0x1441F3C Offset: 0x1441F3C VA: 0x1441F3C
	public static void FinishSocketMessageBuffer(FlatBufferBuilder builder, Offset<SocketMessage> offset) { }

	// RVA: 0x1441F50 Offset: 0x1441F50 VA: 0x1441F50
	public static void FinishSizePrefixedSocketMessageBuffer(FlatBufferBuilder builder, Offset<SocketMessage> offset) { }
}

// Namespace: magicsort.schemas.v1.message