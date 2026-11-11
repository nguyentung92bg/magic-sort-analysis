public sealed class GetStrikeShowPreJoinRequest : IMessage<GetStrikeShowPreJoinRequest>, IMessage, IEquatable<GetStrikeShowPreJoinRequest>, IDeepCloneable<GetStrikeShowPreJoinRequest>, IBufferMessage // TypeDefIndex: 173
{
	// Fields
	private static readonly MessageParser<GetStrikeShowPreJoinRequest> _parser; // 0x0
	private UnknownFieldSet _unknownFields; // 0x10
	public const int TournamentIdFieldNumber = 1;
	private string tournamentId_; // 0x18
	public const int ScoreFieldNumber = 2;
	private long score_; // 0x20

	// Properties
	[DebuggerNonUserCode]
	[GeneratedCode("protoc", null)]
	public static MessageParser<GetStrikeShowPreJoinRequest> Parser { get; }
	[GeneratedCode("protoc", null)]
	[DebuggerNonUserCode]
	public static MessageDescriptor Descriptor { get; }
	[DebuggerNonUserCode]
	[GeneratedCode("protoc", null)]
	private MessageDescriptor pb::Google.Protobuf.IMessage.Descriptor { get; }
	[DebuggerNonUserCode]
	[GeneratedCode("protoc", null)]
	public string TournamentId { get; set; }
	[DebuggerNonUserCode]
	[GeneratedCode("protoc", null)]
	public long Score { get; set; }

	// Methods

	// RVA: 0x3865A9C Offset: 0x3865A9C VA: 0x3865A9C
	public static MessageParser<GetStrikeShowPreJoinRequest> get_Parser() { }

	// RVA: 0x3865AF4 Offset: 0x3865AF4 VA: 0x3865AF4
	public static MessageDescriptor get_Descriptor() { }

	// RVA: 0x3865BF8 Offset: 0x3865BF8 VA: 0x3865BF8 Slot: 8
	private MessageDescriptor pb::Google.Protobuf.IMessage.get_Descriptor() { }

	[DebuggerNonUserCode]
	[GeneratedCode("protoc", null)]
	// RVA: 0x3865C44 Offset: 0x3865C44 VA: 0x3865C44
	public void .ctor() { }

	[DebuggerNonUserCode]
	[GeneratedCode("protoc", null)]
	// RVA: 0x3865C9C Offset: 0x3865C9C VA: 0x3865C9C
	public void .ctor(GetStrikeShowPreJoinRequest other) { }

	[GeneratedCode("protoc", null)]
	[DebuggerNonUserCode]
	// RVA: 0x3865CF4 Offset: 0x3865CF4 VA: 0x3865CF4 Slot: 10
	public GetStrikeShowPreJoinRequest Clone() { }

	// RVA: 0x3865D54 Offset: 0x3865D54 VA: 0x3865D54
	public string get_TournamentId() { }

	// RVA: 0x3865D5C Offset: 0x3865D5C VA: 0x3865D5C
	public void set_TournamentId(string value) { }

	// RVA: 0x3865DD8 Offset: 0x3865DD8 VA: 0x3865DD8
	public long get_Score() { }

	// RVA: 0x3865DE0 Offset: 0x3865DE0 VA: 0x3865DE0
	public void set_Score(long value) { }

	[DebuggerNonUserCode]
	[GeneratedCode("protoc", null)]
	// RVA: 0x3865DE8 Offset: 0x3865DE8 VA: 0x3865DE8 Slot: 0
	public override bool Equals(object other) { }

	[DebuggerNonUserCode]
	[GeneratedCode("protoc", null)]
	// RVA: 0x3865E4C Offset: 0x3865E4C VA: 0x3865E4C Slot: 9
	public bool Equals(GetStrikeShowPreJoinRequest other) { }

	[DebuggerNonUserCode]
	[GeneratedCode("protoc", null)]
	// RVA: 0x3865EBC Offset: 0x3865EBC VA: 0x3865EBC Slot: 2
	public override int GetHashCode() { }

	[DebuggerNonUserCode]
	[GeneratedCode("protoc", null)]
	// RVA: 0x3865F3C Offset: 0x3865F3C VA: 0x3865F3C Slot: 3
	public override string ToString() { }

	[DebuggerNonUserCode]
	[GeneratedCode("protoc", null)]
	// RVA: 0x3865F94 Offset: 0x3865F94 VA: 0x3865F94 Slot: 6
	public void WriteTo(CodedOutputStream output) { }

	[DebuggerNonUserCode]
	[GeneratedCode("protoc", null)]
	// RVA: 0x3865FB4 Offset: 0x3865FB4 VA: 0x3865FB4 Slot: 12
	private void pb::Google.Protobuf.IBufferMessage.InternalWriteTo(ref WriteContext output) { }

	[DebuggerNonUserCode]
	[GeneratedCode("protoc", null)]
	// RVA: 0x3866048 Offset: 0x3866048 VA: 0x3866048 Slot: 7
	public int CalculateSize() { }

	[DebuggerNonUserCode]
	[GeneratedCode("protoc", null)]
	// RVA: 0x3866110 Offset: 0x3866110 VA: 0x3866110 Slot: 4
	public void MergeFrom(GetStrikeShowPreJoinRequest other) { }

	[GeneratedCode("protoc", null)]
	[DebuggerNonUserCode]
	// RVA: 0x3866180 Offset: 0x3866180 VA: 0x3866180 Slot: 5
	public void MergeFrom(CodedInputStream input) { }

	[GeneratedCode("protoc", null)]
	[DebuggerNonUserCode]
	// RVA: 0x38661A0 Offset: 0x38661A0 VA: 0x38661A0 Slot: 11
	private void pb::Google.Protobuf.IBufferMessage.InternalMergeFrom(ref ParseContext input) { }

	// RVA: 0x3866358 Offset: 0x3866358 VA: 0x3866358
	private static void .cctor() { }
}

// Namespace: 
[CompilerGenerated]
[Serializable]