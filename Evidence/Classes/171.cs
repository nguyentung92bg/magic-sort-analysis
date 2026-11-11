public sealed class PreJoinStrikeShowRequest : IMessage<PreJoinStrikeShowRequest>, IMessage, IEquatable<PreJoinStrikeShowRequest>, IDeepCloneable<PreJoinStrikeShowRequest>, IBufferMessage // TypeDefIndex: 171
{
	// Fields
	private static readonly MessageParser<PreJoinStrikeShowRequest> _parser; // 0x0
	private UnknownFieldSet _unknownFields; // 0x10
	public const int TournamentTypeFieldNumber = 1;
	private long tournamentType_; // 0x18

	// Properties
	[DebuggerNonUserCode]
	[GeneratedCode("protoc", null)]
	public static MessageParser<PreJoinStrikeShowRequest> Parser { get; }
	[DebuggerNonUserCode]
	[GeneratedCode("protoc", null)]
	public static MessageDescriptor Descriptor { get; }
	[GeneratedCode("protoc", null)]
	[DebuggerNonUserCode]
	private MessageDescriptor pb::Google.Protobuf.IMessage.Descriptor { get; }
	[GeneratedCode("protoc", null)]
	[DebuggerNonUserCode]
	public long TournamentType { get; set; }

	// Methods

	// RVA: 0x3865298 Offset: 0x3865298 VA: 0x3865298
	public static MessageParser<PreJoinStrikeShowRequest> get_Parser() { }

	// RVA: 0x38652F0 Offset: 0x38652F0 VA: 0x38652F0
	public static MessageDescriptor get_Descriptor() { }

	// RVA: 0x38653F4 Offset: 0x38653F4 VA: 0x38653F4 Slot: 8
	private MessageDescriptor pb::Google.Protobuf.IMessage.get_Descriptor() { }

	[GeneratedCode("protoc", null)]
	[DebuggerNonUserCode]
	// RVA: 0x3865440 Offset: 0x3865440 VA: 0x3865440
	public void .ctor() { }

	[DebuggerNonUserCode]
	[GeneratedCode("protoc", null)]
	// RVA: 0x3865448 Offset: 0x3865448 VA: 0x3865448
	public void .ctor(PreJoinStrikeShowRequest other) { }

	[GeneratedCode("protoc", null)]
	[DebuggerNonUserCode]
	// RVA: 0x3865494 Offset: 0x3865494 VA: 0x3865494 Slot: 10
	public PreJoinStrikeShowRequest Clone() { }

	// RVA: 0x38654F4 Offset: 0x38654F4 VA: 0x38654F4
	public long get_TournamentType() { }

	// RVA: 0x38654FC Offset: 0x38654FC VA: 0x38654FC
	public void set_TournamentType(long value) { }

	[GeneratedCode("protoc", null)]
	[DebuggerNonUserCode]
	// RVA: 0x3865504 Offset: 0x3865504 VA: 0x3865504 Slot: 0
	public override bool Equals(object other) { }

	[GeneratedCode("protoc", null)]
	[DebuggerNonUserCode]
	// RVA: 0x3865568 Offset: 0x3865568 VA: 0x3865568 Slot: 9
	public bool Equals(PreJoinStrikeShowRequest other) { }

	[GeneratedCode("protoc", null)]
	[DebuggerNonUserCode]
	// RVA: 0x38655A4 Offset: 0x38655A4 VA: 0x38655A4 Slot: 2
	public override int GetHashCode() { }

	[GeneratedCode("protoc", null)]
	[DebuggerNonUserCode]
	// RVA: 0x3865600 Offset: 0x3865600 VA: 0x3865600 Slot: 3
	public override string ToString() { }

	[GeneratedCode("protoc", null)]
	[DebuggerNonUserCode]
	// RVA: 0x3865658 Offset: 0x3865658 VA: 0x3865658 Slot: 6
	public void WriteTo(CodedOutputStream output) { }

	[DebuggerNonUserCode]
	[GeneratedCode("protoc", null)]
	// RVA: 0x3865678 Offset: 0x3865678 VA: 0x3865678 Slot: 12
	private void pb::Google.Protobuf.IBufferMessage.InternalWriteTo(ref WriteContext output) { }

	[DebuggerNonUserCode]
	[GeneratedCode("protoc", null)]
	// RVA: 0x38656D8 Offset: 0x38656D8 VA: 0x38656D8 Slot: 7
	public int CalculateSize() { }

	[DebuggerNonUserCode]
	[GeneratedCode("protoc", null)]
	// RVA: 0x3865758 Offset: 0x3865758 VA: 0x3865758 Slot: 4
	public void MergeFrom(PreJoinStrikeShowRequest other) { }

	[DebuggerNonUserCode]
	[GeneratedCode("protoc", null)]
	// RVA: 0x3865798 Offset: 0x3865798 VA: 0x3865798 Slot: 5
	public void MergeFrom(CodedInputStream input) { }

	[DebuggerNonUserCode]
	[GeneratedCode("protoc", null)]
	// RVA: 0x38657B8 Offset: 0x38657B8 VA: 0x38657B8 Slot: 11
	private void pb::Google.Protobuf.IBufferMessage.InternalMergeFrom(ref ParseContext input) { }

	// RVA: 0x38658B4 Offset: 0x38658B4 VA: 0x38658B4
	private static void .cctor() { }
}

// Namespace: 
[CompilerGenerated]
[Serializable]