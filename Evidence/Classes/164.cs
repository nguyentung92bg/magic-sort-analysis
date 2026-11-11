public sealed class GetOnePlusOneOfferRequest : IMessage<GetOnePlusOneOfferRequest>, IMessage, IEquatable<GetOnePlusOneOfferRequest>, IDeepCloneable<GetOnePlusOneOfferRequest>, IBufferMessage // TypeDefIndex: 164
{
	// Fields
	private static readonly MessageParser<GetOnePlusOneOfferRequest> _parser; // 0x0
	private UnknownFieldSet _unknownFields; // 0x10
	public const int EventTypeFieldNumber = 1;
	private long eventType_; // 0x18

	// Properties
	[DebuggerNonUserCode]
	[GeneratedCode("protoc", null)]
	public static MessageParser<GetOnePlusOneOfferRequest> Parser { get; }
	[GeneratedCode("protoc", null)]
	[DebuggerNonUserCode]
	public static MessageDescriptor Descriptor { get; }
	[DebuggerNonUserCode]
	[GeneratedCode("protoc", null)]
	private MessageDescriptor pb::Google.Protobuf.IMessage.Descriptor { get; }
	[GeneratedCode("protoc", null)]
	[DebuggerNonUserCode]
	public long EventType { get; set; }

	// Methods

	// RVA: 0x385FB58 Offset: 0x385FB58 VA: 0x385FB58
	public static MessageParser<GetOnePlusOneOfferRequest> get_Parser() { }

	// RVA: 0x385FBB0 Offset: 0x385FBB0 VA: 0x385FBB0
	public static MessageDescriptor get_Descriptor() { }

	// RVA: 0x385FCB4 Offset: 0x385FCB4 VA: 0x385FCB4 Slot: 8
	private MessageDescriptor pb::Google.Protobuf.IMessage.get_Descriptor() { }

	[DebuggerNonUserCode]
	[GeneratedCode("protoc", null)]
	// RVA: 0x385FD00 Offset: 0x385FD00 VA: 0x385FD00
	public void .ctor() { }

	[DebuggerNonUserCode]
	[GeneratedCode("protoc", null)]
	// RVA: 0x385FD08 Offset: 0x385FD08 VA: 0x385FD08
	public void .ctor(GetOnePlusOneOfferRequest other) { }

	[DebuggerNonUserCode]
	[GeneratedCode("protoc", null)]
	// RVA: 0x385FD54 Offset: 0x385FD54 VA: 0x385FD54 Slot: 10
	public GetOnePlusOneOfferRequest Clone() { }

	// RVA: 0x385FDB4 Offset: 0x385FDB4 VA: 0x385FDB4
	public long get_EventType() { }

	// RVA: 0x385FDBC Offset: 0x385FDBC VA: 0x385FDBC
	public void set_EventType(long value) { }

	[DebuggerNonUserCode]
	[GeneratedCode("protoc", null)]
	// RVA: 0x385FDC4 Offset: 0x385FDC4 VA: 0x385FDC4 Slot: 0
	public override bool Equals(object other) { }

	[DebuggerNonUserCode]
	[GeneratedCode("protoc", null)]
	// RVA: 0x385FE28 Offset: 0x385FE28 VA: 0x385FE28 Slot: 9
	public bool Equals(GetOnePlusOneOfferRequest other) { }

	[DebuggerNonUserCode]
	[GeneratedCode("protoc", null)]
	// RVA: 0x385FE64 Offset: 0x385FE64 VA: 0x385FE64 Slot: 2
	public override int GetHashCode() { }

	[DebuggerNonUserCode]
	[GeneratedCode("protoc", null)]
	// RVA: 0x385FEC0 Offset: 0x385FEC0 VA: 0x385FEC0 Slot: 3
	public override string ToString() { }

	[DebuggerNonUserCode]
	[GeneratedCode("protoc", null)]
	// RVA: 0x385FF18 Offset: 0x385FF18 VA: 0x385FF18 Slot: 6
	public void WriteTo(CodedOutputStream output) { }

	[DebuggerNonUserCode]
	[GeneratedCode("protoc", null)]
	// RVA: 0x385FF38 Offset: 0x385FF38 VA: 0x385FF38 Slot: 12
	private void pb::Google.Protobuf.IBufferMessage.InternalWriteTo(ref WriteContext output) { }

	[DebuggerNonUserCode]
	[GeneratedCode("protoc", null)]
	// RVA: 0x385FF98 Offset: 0x385FF98 VA: 0x385FF98 Slot: 7
	public int CalculateSize() { }

	[DebuggerNonUserCode]
	[GeneratedCode("protoc", null)]
	// RVA: 0x3860018 Offset: 0x3860018 VA: 0x3860018 Slot: 4
	public void MergeFrom(GetOnePlusOneOfferRequest other) { }

	[DebuggerNonUserCode]
	[GeneratedCode("protoc", null)]
	// RVA: 0x3860058 Offset: 0x3860058 VA: 0x3860058 Slot: 5
	public void MergeFrom(CodedInputStream input) { }

	[DebuggerNonUserCode]
	[GeneratedCode("protoc", null)]
	// RVA: 0x3860078 Offset: 0x3860078 VA: 0x3860078 Slot: 11
	private void pb::Google.Protobuf.IBufferMessage.InternalMergeFrom(ref ParseContext input) { }

	// RVA: 0x3860174 Offset: 0x3860174 VA: 0x3860174
	private static void .cctor() { }
}

// Namespace: 
[CompilerGenerated]
[Serializable]