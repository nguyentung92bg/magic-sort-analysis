public struct BaseResponse : IFlatbufferObject // TypeDefIndex: 5676
{
	// Fields
	private Table __p; // 0x0

	// Properties
	public ByteBuffer ByteBuffer { get; }
	public long CustomError { get; }
	public string Message { get; }

	// Methods

	// RVA: 0x1601ED8 Offset: 0x1601ED8 VA: 0x1601ED8 Slot: 5
	public ByteBuffer get_ByteBuffer() { }

	// RVA: 0x1601EE0 Offset: 0x1601EE0 VA: 0x1601EE0
	public static void ValidateVersion() { }

	// RVA: 0x1601EE8 Offset: 0x1601EE8 VA: 0x1601EE8
	public static BaseResponse GetRootAsBaseResponse(ByteBuffer _bb) { }

	// RVA: 0x1601EF4 Offset: 0x1601EF4 VA: 0x1601EF4
	public static BaseResponse GetRootAsBaseResponse(ByteBuffer _bb, BaseResponse obj) { }

	// RVA: 0x1601F78 Offset: 0x1601F78 VA: 0x1601F78 Slot: 4
	public void __init(int _i, ByteBuffer _bb) { }

	// RVA: 0x1601F38 Offset: 0x1601F38 VA: 0x1601F38
	public BaseResponse __assign(int _i, ByteBuffer _bb) { }

	// RVA: 0x1601FB4 Offset: 0x1601FB4 VA: 0x1601FB4
	public long get_CustomError() { }

	// RVA: 0x1601FFC Offset: 0x1601FFC VA: 0x1601FFC
	public string get_Message() { }

	// RVA: 0x1602038 Offset: 0x1602038 VA: 0x1602038
	public Nullable<ArraySegment<byte>> GetMessageBytes() { }

	// RVA: 0x1602070 Offset: 0x1602070 VA: 0x1602070
	public byte[] GetMessageArray() { }

	// RVA: 0x16020BC Offset: 0x16020BC VA: 0x16020BC
	public static Offset<BaseResponse> CreateBaseResponse(FlatBufferBuilder builder, long custom_error = 0, StringOffset messageOffset) { }

	// RVA: 0x16021A4 Offset: 0x16021A4 VA: 0x16021A4
	public static void StartBaseResponse(FlatBufferBuilder builder) { }

	// RVA: 0x1602114 Offset: 0x1602114 VA: 0x1602114
	public static void AddCustomError(FlatBufferBuilder builder, long customError) { }

	// RVA: 0x1602134 Offset: 0x1602134 VA: 0x1602134
	public static void AddMessage(FlatBufferBuilder builder, StringOffset messageOffset) { }

	// RVA: 0x1602154 Offset: 0x1602154 VA: 0x1602154
	public static Offset<BaseResponse> EndBaseResponse(FlatBufferBuilder builder) { }
}

// Namespace: magicsort.schemas.v1.common