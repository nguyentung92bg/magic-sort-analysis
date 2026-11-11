public sealed class GetStrikeShowLeaderboardRequest : IMessage<GetStrikeShowLeaderboardRequest>, IMessage, IEquatable<GetStrikeShowLeaderboardRequest>, IDeepCloneable<GetStrikeShowLeaderboardRequest>, IBufferMessage // TypeDefIndex: 177
{
	// Fields
	private static readonly MessageParser<GetStrikeShowLeaderboardRequest> _parser; // 0x0
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
	public static MessageParser<GetStrikeShowLeaderboardRequest> Parser { get; }
	[DebuggerNonUserCode]
	[GeneratedCode("protoc", null)]
	public static MessageDescriptor Descriptor { get; }
	[DebuggerNonUserCode]
	[GeneratedCode("protoc", null)]
	private MessageDescriptor pb::Google.Protobuf.IMessage.Descriptor { get; }
	[DebuggerNonUserCode]
	[GeneratedCode("protoc", null)]
	public string TournamentId { get; set; }
	[GeneratedCode("protoc", null)]
	[DebuggerNonUserCode]
	public long TournamentType { get; set; }
	[GeneratedCode("protoc", null)]
	[DebuggerNonUserCode]
	public long Score { get; set; }

	// Methods

	// RVA: 0x3866D40 Offset: 0x3866D40 VA: 0x3866D40
	public static MessageParser<GetStrikeShowLeaderboardRequest> get_Parser() { }

	// RVA: 0x3866D98 Offset: 0x3866D98 VA: 0x3866D98
	public static MessageDescriptor get_Descriptor() { }

	// RVA: 0x3866E9C Offset: 0x3866E9C VA: 0x3866E9C Slot: 8
	private MessageDescriptor pb::Google.Protobuf.IMessage.get_Descriptor() { }

	[DebuggerNonUserCode]
	[GeneratedCode("protoc", null)]
	// RVA: 0x3866EE8 Offset: 0x3866EE8 VA: 0x3866EE8
	public void .ctor() { }

	[GeneratedCode("protoc", null)]
	[DebuggerNonUserCode]
	// RVA: 0x3866F40 Offset: 0x3866F40 VA: 0x3866F40
	public void .ctor(GetStrikeShowLeaderboardRequest other) { }

	[DebuggerNonUserCode]
	[GeneratedCode("protoc", null)]
	// RVA: 0x3866F98 Offset: 0x3866F98 VA: 0x3866F98 Slot: 10
	public GetStrikeShowLeaderboardRequest Clone() { }

	// RVA: 0x3866FF8 Offset: 0x3866FF8 VA: 0x3866FF8
	public string get_TournamentId() { }

	// RVA: 0x3867000 Offset: 0x3867000 VA: 0x3867000
	public void set_TournamentId(string value) { }

	// RVA: 0x386707C Offset: 0x386707C VA: 0x386707C
	public long get_TournamentType() { }

	// RVA: 0x3867084 Offset: 0x3867084 VA: 0x3867084
	public void set_TournamentType(long value) { }

	// RVA: 0x386708C Offset: 0x386708C VA: 0x386708C
	public long get_Score() { }

	// RVA: 0x3867094 Offset: 0x3867094 VA: 0x3867094
	public void set_Score(long value) { }

	[GeneratedCode("protoc", null)]
	[DebuggerNonUserCode]
	// RVA: 0x386709C Offset: 0x386709C VA: 0x386709C Slot: 0
	public override bool Equals(object other) { }

	[DebuggerNonUserCode]
	[GeneratedCode("protoc", null)]
	// RVA: 0x3867100 Offset: 0x3867100 VA: 0x3867100 Slot: 9
	public bool Equals(GetStrikeShowLeaderboardRequest other) { }

	[GeneratedCode("protoc", null)]
	[DebuggerNonUserCode]
	// RVA: 0x3867180 Offset: 0x3867180 VA: 0x3867180 Slot: 2
	public override int GetHashCode() { }

	[GeneratedCode("protoc", null)]
	[DebuggerNonUserCode]
	// RVA: 0x386721C Offset: 0x386721C VA: 0x386721C Slot: 3
	public override string ToString() { }

	[DebuggerNonUserCode]
	[GeneratedCode("protoc", null)]
	// RVA: 0x3867274 Offset: 0x3867274 VA: 0x3867274 Slot: 6
	public void WriteTo(CodedOutputStream output) { }

	[DebuggerNonUserCode]
	[GeneratedCode("protoc", null)]
	// RVA: 0x3867294 Offset: 0x3867294 VA: 0x3867294 Slot: 12
	private void pb::Google.Protobuf.IBufferMessage.InternalWriteTo(ref WriteContext output) { }

	[DebuggerNonUserCode]
	[GeneratedCode("protoc", null)]
	// RVA: 0x3867350 Offset: 0x3867350 VA: 0x3867350 Slot: 7
	public int CalculateSize() { }

	[GeneratedCode("protoc", null)]
	[DebuggerNonUserCode]
	// RVA: 0x3867444 Offset: 0x3867444 VA: 0x3867444 Slot: 4
	public void MergeFrom(GetStrikeShowLeaderboardRequest other) { }

	[DebuggerNonUserCode]
	[GeneratedCode("protoc", null)]
	// RVA: 0x38674C0 Offset: 0x38674C0 VA: 0x38674C0 Slot: 5
	public void MergeFrom(CodedInputStream input) { }

	[GeneratedCode("protoc", null)]
	[DebuggerNonUserCode]
	// RVA: 0x38674E0 Offset: 0x38674E0 VA: 0x38674E0 Slot: 11
	private void pb::Google.Protobuf.IBufferMessage.InternalMergeFrom(ref ParseContext input) { }

	// RVA: 0x38676DC Offset: 0x38676DC VA: 0x38676DC
	private static void .cctor() { }
}

// Namespace: 
[CompilerGenerated]
[Serializable]