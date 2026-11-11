public sealed class JoinStrikeShowRequest : IMessage<JoinStrikeShowRequest>, IMessage, IEquatable<JoinStrikeShowRequest>, IDeepCloneable<JoinStrikeShowRequest>, IBufferMessage // TypeDefIndex: 175
{
	// Fields
	private static readonly MessageParser<JoinStrikeShowRequest> _parser; // 0x0
	private UnknownFieldSet _unknownFields; // 0x10
	public const int TournamentTypeFieldNumber = 1;
	private long tournamentType_; // 0x18

	// Properties
	[GeneratedCode("protoc", null)]
	[DebuggerNonUserCode]
	public static MessageParser<JoinStrikeShowRequest> Parser { get; }
	[DebuggerNonUserCode]
	[GeneratedCode("protoc", null)]
	public static MessageDescriptor Descriptor { get; }
	[DebuggerNonUserCode]
	[GeneratedCode("protoc", null)]
	private MessageDescriptor pb::Google.Protobuf.IMessage.Descriptor { get; }
	[DebuggerNonUserCode]
	[GeneratedCode("protoc", null)]
	public long TournamentType { get; set; }

	// Methods

	// RVA: 0x386653C Offset: 0x386653C VA: 0x386653C
	public static MessageParser<JoinStrikeShowRequest> get_Parser() { }

	// RVA: 0x3866594 Offset: 0x3866594 VA: 0x3866594
	public static MessageDescriptor get_Descriptor() { }

	// RVA: 0x3866698 Offset: 0x3866698 VA: 0x3866698 Slot: 8
	private MessageDescriptor pb::Google.Protobuf.IMessage.get_Descriptor() { }

	[GeneratedCode("protoc", null)]
	[DebuggerNonUserCode]
	// RVA: 0x38666E4 Offset: 0x38666E4 VA: 0x38666E4
	public void .ctor() { }

	[GeneratedCode("protoc", null)]
	[DebuggerNonUserCode]
	// RVA: 0x38666EC Offset: 0x38666EC VA: 0x38666EC
	public void .ctor(JoinStrikeShowRequest other) { }

	[GeneratedCode("protoc", null)]
	[DebuggerNonUserCode]
	// RVA: 0x3866738 Offset: 0x3866738 VA: 0x3866738 Slot: 10
	public JoinStrikeShowRequest Clone() { }

	// RVA: 0x3866798 Offset: 0x3866798 VA: 0x3866798
	public long get_TournamentType() { }

	// RVA: 0x38667A0 Offset: 0x38667A0 VA: 0x38667A0
	public void set_TournamentType(long value) { }

	[GeneratedCode("protoc", null)]
	[DebuggerNonUserCode]
	// RVA: 0x38667A8 Offset: 0x38667A8 VA: 0x38667A8 Slot: 0
	public override bool Equals(object other) { }

	[GeneratedCode("protoc", null)]
	[DebuggerNonUserCode]
	// RVA: 0x386680C Offset: 0x386680C VA: 0x386680C Slot: 9
	public bool Equals(JoinStrikeShowRequest other) { }

	[DebuggerNonUserCode]
	[GeneratedCode("protoc", null)]
	// RVA: 0x3866848 Offset: 0x3866848 VA: 0x3866848 Slot: 2
	public override int GetHashCode() { }

	[GeneratedCode("protoc", null)]
	[DebuggerNonUserCode]
	// RVA: 0x38668A4 Offset: 0x38668A4 VA: 0x38668A4 Slot: 3
	public override string ToString() { }

	[DebuggerNonUserCode]
	[GeneratedCode("protoc", null)]
	// RVA: 0x38668FC Offset: 0x38668FC VA: 0x38668FC Slot: 6
	public void WriteTo(CodedOutputStream output) { }

	[GeneratedCode("protoc", null)]
	[DebuggerNonUserCode]
	// RVA: 0x386691C Offset: 0x386691C VA: 0x386691C Slot: 12
	private void pb::Google.Protobuf.IBufferMessage.InternalWriteTo(ref WriteContext output) { }

	[GeneratedCode("protoc", null)]
	[DebuggerNonUserCode]
	// RVA: 0x386697C Offset: 0x386697C VA: 0x386697C Slot: 7
	public int CalculateSize() { }

	[GeneratedCode("protoc", null)]
	[DebuggerNonUserCode]
	// RVA: 0x38669FC Offset: 0x38669FC VA: 0x38669FC Slot: 4
	public void MergeFrom(JoinStrikeShowRequest other) { }

	[DebuggerNonUserCode]
	[GeneratedCode("protoc", null)]
	// RVA: 0x3866A3C Offset: 0x3866A3C VA: 0x3866A3C Slot: 5
	public void MergeFrom(CodedInputStream input) { }

	[DebuggerNonUserCode]
	[GeneratedCode("protoc", null)]
	// RVA: 0x3866A5C Offset: 0x3866A5C VA: 0x3866A5C Slot: 11
	private void pb::Google.Protobuf.IBufferMessage.InternalMergeFrom(ref ParseContext input) { }

	// RVA: 0x3866B58 Offset: 0x3866B58 VA: 0x3866B58
	private static void .cctor() { }
}

// Namespace: 
[CompilerGenerated]
[Serializable]