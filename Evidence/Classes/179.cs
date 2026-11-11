public sealed class SetStrikeShowScoreRequest : IMessage<SetStrikeShowScoreRequest>, IMessage, IEquatable<SetStrikeShowScoreRequest>, IDeepCloneable<SetStrikeShowScoreRequest>, IBufferMessage // TypeDefIndex: 179
{
	// Fields
	private static readonly MessageParser<SetStrikeShowScoreRequest> _parser; // 0x0
	private UnknownFieldSet _unknownFields; // 0x10
	public const int TournamentIdFieldNumber = 1;
	private string tournamentId_; // 0x18
	public const int TournamentTypeFieldNumber = 2;
	private long tournamentType_; // 0x20
	public const int ScoreFieldNumber = 3;
	private long score_; // 0x28

	// Properties
	[GeneratedCode("protoc", null)]
	[DebuggerNonUserCode]
	public static MessageParser<SetStrikeShowScoreRequest> Parser { get; }
	[GeneratedCode("protoc", null)]
	[DebuggerNonUserCode]
	public static MessageDescriptor Descriptor { get; }
	[DebuggerNonUserCode]
	[GeneratedCode("protoc", null)]
	private MessageDescriptor pb::Google.Protobuf.IMessage.Descriptor { get; }
	[GeneratedCode("protoc", null)]
	[DebuggerNonUserCode]
	public string TournamentId { get; set; }
	[DebuggerNonUserCode]
	[GeneratedCode("protoc", null)]
	public long TournamentType { get; set; }
	[DebuggerNonUserCode]
	[GeneratedCode("protoc", null)]
	public long Score { get; set; }

	// Methods

	// RVA: 0x38678C0 Offset: 0x38678C0 VA: 0x38678C0
	public static MessageParser<SetStrikeShowScoreRequest> get_Parser() { }

	// RVA: 0x3867918 Offset: 0x3867918 VA: 0x3867918
	public static MessageDescriptor get_Descriptor() { }

	// RVA: 0x3867A1C Offset: 0x3867A1C VA: 0x3867A1C Slot: 8
	private MessageDescriptor pb::Google.Protobuf.IMessage.get_Descriptor() { }

	[GeneratedCode("protoc", null)]
	[DebuggerNonUserCode]
	// RVA: 0x3867A68 Offset: 0x3867A68 VA: 0x3867A68
	public void .ctor() { }

	[GeneratedCode("protoc", null)]
	[DebuggerNonUserCode]
	// RVA: 0x3867AC0 Offset: 0x3867AC0 VA: 0x3867AC0
	public void .ctor(SetStrikeShowScoreRequest other) { }

	[DebuggerNonUserCode]
	[GeneratedCode("protoc", null)]
	// RVA: 0x3867B18 Offset: 0x3867B18 VA: 0x3867B18 Slot: 10
	public SetStrikeShowScoreRequest Clone() { }

	// RVA: 0x3867B78 Offset: 0x3867B78 VA: 0x3867B78
	public string get_TournamentId() { }

	// RVA: 0x3867B80 Offset: 0x3867B80 VA: 0x3867B80
	public void set_TournamentId(string value) { }

	// RVA: 0x3867BFC Offset: 0x3867BFC VA: 0x3867BFC
	public long get_TournamentType() { }

	// RVA: 0x3867C04 Offset: 0x3867C04 VA: 0x3867C04
	public void set_TournamentType(long value) { }

	// RVA: 0x3867C0C Offset: 0x3867C0C VA: 0x3867C0C
	public long get_Score() { }

	// RVA: 0x3867C14 Offset: 0x3867C14 VA: 0x3867C14
	public void set_Score(long value) { }

	[DebuggerNonUserCode]
	[GeneratedCode("protoc", null)]
	// RVA: 0x3867C1C Offset: 0x3867C1C VA: 0x3867C1C Slot: 0
	public override bool Equals(object other) { }

	[GeneratedCode("protoc", null)]
	[DebuggerNonUserCode]
	// RVA: 0x3867C80 Offset: 0x3867C80 VA: 0x3867C80 Slot: 9
	public bool Equals(SetStrikeShowScoreRequest other) { }

	[DebuggerNonUserCode]
	[GeneratedCode("protoc", null)]
	// RVA: 0x3867D00 Offset: 0x3867D00 VA: 0x3867D00 Slot: 2
	public override int GetHashCode() { }

	[DebuggerNonUserCode]
	[GeneratedCode("protoc", null)]
	// RVA: 0x3867D9C Offset: 0x3867D9C VA: 0x3867D9C Slot: 3
	public override string ToString() { }

	[DebuggerNonUserCode]
	[GeneratedCode("protoc", null)]
	// RVA: 0x3867DF4 Offset: 0x3867DF4 VA: 0x3867DF4 Slot: 6
	public void WriteTo(CodedOutputStream output) { }

	[DebuggerNonUserCode]
	[GeneratedCode("protoc", null)]
	// RVA: 0x3867E14 Offset: 0x3867E14 VA: 0x3867E14 Slot: 12
	private void pb::Google.Protobuf.IBufferMessage.InternalWriteTo(ref WriteContext output) { }

	[DebuggerNonUserCode]
	[GeneratedCode("protoc", null)]
	// RVA: 0x3867ED0 Offset: 0x3867ED0 VA: 0x3867ED0 Slot: 7
	public int CalculateSize() { }

	[DebuggerNonUserCode]
	[GeneratedCode("protoc", null)]
	// RVA: 0x3867FC4 Offset: 0x3867FC4 VA: 0x3867FC4 Slot: 4
	public void MergeFrom(SetStrikeShowScoreRequest other) { }

	[GeneratedCode("protoc", null)]
	[DebuggerNonUserCode]
	// RVA: 0x3868040 Offset: 0x3868040 VA: 0x3868040 Slot: 5
	public void MergeFrom(CodedInputStream input) { }

	[DebuggerNonUserCode]
	[GeneratedCode("protoc", null)]
	// RVA: 0x3868060 Offset: 0x3868060 VA: 0x3868060 Slot: 11
	private void pb::Google.Protobuf.IBufferMessage.InternalMergeFrom(ref ParseContext input) { }

	// RVA: 0x386825C Offset: 0x386825C VA: 0x386825C
	private static void .cctor() { }
}

// Namespace: 
[CompilerGenerated]
[Serializable]