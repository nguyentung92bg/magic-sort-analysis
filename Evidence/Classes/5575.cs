public struct MessageList : IFlatbufferObject // TypeDefIndex: 5575
{
	// Fields
	private Table __p; // 0x0

	// Properties
	public ByteBuffer ByteBuffer { get; }
	public int MessagesLength { get; }
	public string LastEvaluatedKey { get; }
	public Nullable<BaseResponse> Error { get; }

	// Methods

	// RVA: 0x1440CC8 Offset: 0x1440CC8 VA: 0x1440CC8 Slot: 5
	public ByteBuffer get_ByteBuffer() { }

	// RVA: 0x1440CD0 Offset: 0x1440CD0 VA: 0x1440CD0
	public static void ValidateVersion() { }

	// RVA: 0x1440CD8 Offset: 0x1440CD8 VA: 0x1440CD8
	public static MessageList GetRootAsMessageList(ByteBuffer _bb) { }

	// RVA: 0x1440CE4 Offset: 0x1440CE4 VA: 0x1440CE4
	public static MessageList GetRootAsMessageList(ByteBuffer _bb, MessageList obj) { }

	// RVA: 0x1440D68 Offset: 0x1440D68 VA: 0x1440D68 Slot: 4
	public void __init(int _i, ByteBuffer _bb) { }

	// RVA: 0x1440D28 Offset: 0x1440D28 VA: 0x1440D28
	public MessageList __assign(int _i, ByteBuffer _bb) { }

	// RVA: 0x1440DA4 Offset: 0x1440DA4 VA: 0x1440DA4
	public Nullable<SocketMessage> Messages(int j) { }

	// RVA: 0x1440EB8 Offset: 0x1440EB8 VA: 0x1440EB8
	public int get_MessagesLength() { }

	// RVA: 0x1440EEC Offset: 0x1440EEC VA: 0x1440EEC
	public string get_LastEvaluatedKey() { }

	// RVA: 0x1440F28 Offset: 0x1440F28 VA: 0x1440F28
	public Nullable<ArraySegment<byte>> GetLastEvaluatedKeyBytes() { }

	// RVA: 0x1440F60 Offset: 0x1440F60 VA: 0x1440F60
	public byte[] GetLastEvaluatedKeyArray() { }

	// RVA: 0x1440FAC Offset: 0x1440FAC VA: 0x1440FAC
	public Nullable<BaseResponse> get_Error() { }

	// RVA: 0x144106C Offset: 0x144106C VA: 0x144106C
	public static Offset<MessageList> CreateMessageList(FlatBufferBuilder builder, VectorOffset messagesOffset, StringOffset last_evaluated_keyOffset, Offset<BaseResponse> errorOffset) { }

	// RVA: 0x144118C Offset: 0x144118C VA: 0x144118C
	public static void StartMessageList(FlatBufferBuilder builder) { }

	// RVA: 0x144111C Offset: 0x144111C VA: 0x144111C
	public static void AddMessages(FlatBufferBuilder builder, VectorOffset messagesOffset) { }

	// RVA: 0x14411A4 Offset: 0x14411A4 VA: 0x14411A4
	public static VectorOffset CreateMessagesVector(FlatBufferBuilder builder, Offset<SocketMessage>[] data) { }

	// RVA: 0x144124C Offset: 0x144124C VA: 0x144124C
	public static VectorOffset CreateMessagesVectorBlock(FlatBufferBuilder builder, Offset<SocketMessage>[] data) { }

	// RVA: 0x14412D4 Offset: 0x14412D4 VA: 0x14412D4
	public static VectorOffset CreateMessagesVectorBlock(FlatBufferBuilder builder, ArraySegment<Offset<SocketMessage>> data) { }

	// RVA: 0x1441398 Offset: 0x1441398 VA: 0x1441398
	public static VectorOffset CreateMessagesVectorBlock(FlatBufferBuilder builder, IntPtr dataPtr, int sizeInBytes) { }

	// RVA: 0x144142C Offset: 0x144142C VA: 0x144142C
	public static void StartMessagesVector(FlatBufferBuilder builder, int numElems) { }

	// RVA: 0x14410FC Offset: 0x14410FC VA: 0x14410FC
	public static void AddLastEvaluatedKey(FlatBufferBuilder builder, StringOffset lastEvaluatedKeyOffset) { }

	// RVA: 0x14410DC Offset: 0x14410DC VA: 0x14410DC
	public static void AddError(FlatBufferBuilder builder, Offset<BaseResponse> errorOffset) { }

	// RVA: 0x144113C Offset: 0x144113C VA: 0x144113C
	public static Offset<MessageList> EndMessageList(FlatBufferBuilder builder) { }
}

// Namespace: magicsort.schemas.v1.message