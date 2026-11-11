public sealed class ClaimStrikeShowRequest : IMessage<ClaimStrikeShowRequest>, IMessage, IEquatable<ClaimStrikeShowRequest>, IDeepCloneable<ClaimStrikeShowRequest>, IBufferMessage // TypeDefIndex: 181
{
	// Fields
	private static readonly MessageParser<ClaimStrikeShowRequest> _parser; // 0x0
	private UnknownFieldSet _unknownFields; // 0x10

	// Properties
	[GeneratedCode("protoc", null)]
	[DebuggerNonUserCode]
	public static MessageParser<ClaimStrikeShowRequest> Parser { get; }
	[GeneratedCode("protoc", null)]
	[DebuggerNonUserCode]
	public static MessageDescriptor Descriptor { get; }
	[GeneratedCode("protoc", null)]
	[DebuggerNonUserCode]
	private MessageDescriptor pb::Google.Protobuf.IMessage.Descriptor { get; }

	// Methods

	// RVA: 0x3868440 Offset: 0x3868440 VA: 0x3868440
	public static MessageParser<ClaimStrikeShowRequest> get_Parser() { }

	// RVA: 0x3868498 Offset: 0x3868498 VA: 0x3868498
	public static MessageDescriptor get_Descriptor() { }

	// RVA: 0x386859C Offset: 0x386859C VA: 0x386859C Slot: 8
	private MessageDescriptor pb::Google.Protobuf.IMessage.get_Descriptor() { }

	[DebuggerNonUserCode]
	[GeneratedCode("protoc", null)]
	// RVA: 0x38685E8 Offset: 0x38685E8 VA: 0x38685E8
	public void .ctor() { }

	[GeneratedCode("protoc", null)]
	[DebuggerNonUserCode]
	// RVA: 0x38685F0 Offset: 0x38685F0 VA: 0x38685F0
	public void .ctor(ClaimStrikeShowRequest other) { }

	[GeneratedCode("protoc", null)]
	[DebuggerNonUserCode]
	// RVA: 0x3868634 Offset: 0x3868634 VA: 0x3868634 Slot: 10
	public ClaimStrikeShowRequest Clone() { }

	[GeneratedCode("protoc", null)]
	[DebuggerNonUserCode]
	// RVA: 0x3868694 Offset: 0x3868694 VA: 0x3868694 Slot: 0
	public override bool Equals(object other) { }

	[GeneratedCode("protoc", null)]
	[DebuggerNonUserCode]
	// RVA: 0x3868718 Offset: 0x3868718 VA: 0x3868718 Slot: 9
	public bool Equals(ClaimStrikeShowRequest other) { }

	[DebuggerNonUserCode]
	[GeneratedCode("protoc", null)]
	// RVA: 0x3868744 Offset: 0x3868744 VA: 0x3868744 Slot: 2
	public override int GetHashCode() { }

	[DebuggerNonUserCode]
	[GeneratedCode("protoc", null)]
	// RVA: 0x3868770 Offset: 0x3868770 VA: 0x3868770 Slot: 3
	public override string ToString() { }

	[DebuggerNonUserCode]
	[GeneratedCode("protoc", null)]
	// RVA: 0x38687C8 Offset: 0x38687C8 VA: 0x38687C8 Slot: 6
	public void WriteTo(CodedOutputStream output) { }

	[DebuggerNonUserCode]
	[GeneratedCode("protoc", null)]
	// RVA: 0x38687E8 Offset: 0x38687E8 VA: 0x38687E8 Slot: 12
	private void pb::Google.Protobuf.IBufferMessage.InternalWriteTo(ref WriteContext output) { }

	[DebuggerNonUserCode]
	[GeneratedCode("protoc", null)]
	// RVA: 0x38687FC Offset: 0x38687FC VA: 0x38687FC Slot: 7
	public int CalculateSize() { }

	[DebuggerNonUserCode]
	[GeneratedCode("protoc", null)]
	// RVA: 0x3868810 Offset: 0x3868810 VA: 0x3868810 Slot: 4
	public void MergeFrom(ClaimStrikeShowRequest other) { }

	[DebuggerNonUserCode]
	[GeneratedCode("protoc", null)]
	// RVA: 0x3868844 Offset: 0x3868844 VA: 0x3868844 Slot: 5
	public void MergeFrom(CodedInputStream input) { }

	[GeneratedCode("protoc", null)]
	[DebuggerNonUserCode]
	// RVA: 0x3868864 Offset: 0x3868864 VA: 0x3868864 Slot: 11
	private void pb::Google.Protobuf.IBufferMessage.InternalMergeFrom(ref ParseContext input) { }

	// RVA: 0x386890C Offset: 0x386890C VA: 0x386890C
	private static void .cctor() { }
}

// Namespace: 
[CompilerGenerated]
[Serializable]