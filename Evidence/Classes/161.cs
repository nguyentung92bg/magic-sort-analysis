public sealed class BaseResponse : IMessage<BaseResponse>, IMessage, IEquatable<BaseResponse>, IDeepCloneable<BaseResponse>, IBufferMessage // TypeDefIndex: 161
{
	// Fields
	private static readonly MessageParser<BaseResponse> _parser; // 0x0
	private UnknownFieldSet _unknownFields; // 0x10
	public const int CustomErrorFieldNumber = 1;
	private ErrorCode customError_; // 0x18
	public const int MessageFieldNumber = 2;
	private string message_; // 0x20

	// Properties
	[DebuggerNonUserCode]
	[GeneratedCode("protoc", null)]
	public static MessageParser<BaseResponse> Parser { get; }
	[DebuggerNonUserCode]
	[GeneratedCode("protoc", null)]
	public static MessageDescriptor Descriptor { get; }
	[GeneratedCode("protoc", null)]
	[DebuggerNonUserCode]
	private MessageDescriptor pb::Google.Protobuf.IMessage.Descriptor { get; }
	[DebuggerNonUserCode]
	[GeneratedCode("protoc", null)]
	public ErrorCode CustomError { get; set; }
	[GeneratedCode("protoc", null)]
	[DebuggerNonUserCode]
	public string Message { get; set; }

	// Methods

	// RVA: 0x385E06C Offset: 0x385E06C VA: 0x385E06C
	public static MessageParser<BaseResponse> get_Parser() { }

	// RVA: 0x385E0C4 Offset: 0x385E0C4 VA: 0x385E0C4
	public static MessageDescriptor get_Descriptor() { }

	// RVA: 0x385E1C8 Offset: 0x385E1C8 VA: 0x385E1C8 Slot: 8
	private MessageDescriptor pb::Google.Protobuf.IMessage.get_Descriptor() { }

	[GeneratedCode("protoc", null)]
	[DebuggerNonUserCode]
	// RVA: 0x385E214 Offset: 0x385E214 VA: 0x385E214
	public void .ctor() { }

	[DebuggerNonUserCode]
	[GeneratedCode("protoc", null)]
	// RVA: 0x385E26C Offset: 0x385E26C VA: 0x385E26C
	public void .ctor(BaseResponse other) { }

	[DebuggerNonUserCode]
	[GeneratedCode("protoc", null)]
	// RVA: 0x385E2C4 Offset: 0x385E2C4 VA: 0x385E2C4 Slot: 10
	public BaseResponse Clone() { }

	// RVA: 0x385E324 Offset: 0x385E324 VA: 0x385E324
	public ErrorCode get_CustomError() { }

	// RVA: 0x385E32C Offset: 0x385E32C VA: 0x385E32C
	public void set_CustomError(ErrorCode value) { }

	// RVA: 0x385E334 Offset: 0x385E334 VA: 0x385E334
	public string get_Message() { }

	// RVA: 0x385E33C Offset: 0x385E33C VA: 0x385E33C
	public void set_Message(string value) { }

	[DebuggerNonUserCode]
	[GeneratedCode("protoc", null)]
	// RVA: 0x385E3B8 Offset: 0x385E3B8 VA: 0x385E3B8 Slot: 0
	public override bool Equals(object other) { }

	[GeneratedCode("protoc", null)]
	[DebuggerNonUserCode]
	// RVA: 0x385E41C Offset: 0x385E41C VA: 0x385E41C Slot: 9
	public bool Equals(BaseResponse other) { }

	[GeneratedCode("protoc", null)]
	[DebuggerNonUserCode]
	// RVA: 0x385E48C Offset: 0x385E48C VA: 0x385E48C Slot: 2
	public override int GetHashCode() { }

	[GeneratedCode("protoc", null)]
	[DebuggerNonUserCode]
	// RVA: 0x385E50C Offset: 0x385E50C VA: 0x385E50C Slot: 3
	public override string ToString() { }

	[DebuggerNonUserCode]
	[GeneratedCode("protoc", null)]
	// RVA: 0x385E564 Offset: 0x385E564 VA: 0x385E564 Slot: 6
	public void WriteTo(CodedOutputStream output) { }

	[GeneratedCode("protoc", null)]
	[DebuggerNonUserCode]
	// RVA: 0x385E584 Offset: 0x385E584 VA: 0x385E584 Slot: 12
	private void pb::Google.Protobuf.IBufferMessage.InternalWriteTo(ref WriteContext output) { }

	[GeneratedCode("protoc", null)]
	[DebuggerNonUserCode]
	// RVA: 0x385E618 Offset: 0x385E618 VA: 0x385E618 Slot: 7
	public int CalculateSize() { }

	[GeneratedCode("protoc", null)]
	[DebuggerNonUserCode]
	// RVA: 0x385E6D8 Offset: 0x385E6D8 VA: 0x385E6D8 Slot: 4
	public void MergeFrom(BaseResponse other) { }

	[DebuggerNonUserCode]
	[GeneratedCode("protoc", null)]
	// RVA: 0x385E748 Offset: 0x385E748 VA: 0x385E748 Slot: 5
	public void MergeFrom(CodedInputStream input) { }

	[DebuggerNonUserCode]
	[GeneratedCode("protoc", null)]
	// RVA: 0x385E768 Offset: 0x385E768 VA: 0x385E768 Slot: 11
	private void pb::Google.Protobuf.IBufferMessage.InternalMergeFrom(ref ParseContext input) { }

	// RVA: 0x385E920 Offset: 0x385E920 VA: 0x385E920
	private static void .cctor() { }
}

// Namespace: MagicSort.V1