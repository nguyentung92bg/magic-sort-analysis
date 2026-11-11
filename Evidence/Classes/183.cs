public sealed class GetPreJoinStrikeShowResponse : IMessage<GetPreJoinStrikeShowResponse>, IMessage, IEquatable<GetPreJoinStrikeShowResponse>, IDeepCloneable<GetPreJoinStrikeShowResponse>, IBufferMessage // TypeDefIndex: 183
{
	// Fields
	private static readonly MessageParser<GetPreJoinStrikeShowResponse> _parser; // 0x0
	private UnknownFieldSet _unknownFields; // 0x10
	public const int TournamentIdFieldNumber = 1;
	private string tournamentId_; // 0x18
	public const int StartTimeFieldNumber = 2;
	private long startTime_; // 0x20
	public const int FinishTimeFieldNumber = 3;
	private long finishTime_; // 0x28
	public const int JoinWindowEndEpochFieldNumber = 4;
	private long joinWindowEndEpoch_; // 0x30
	public const int PreJoinScoreFieldNumber = 5;
	private long preJoinScore_; // 0x38
	public const int StateFieldNumber = 6;
	private string state_; // 0x40
	public const int EloFieldNumber = 7;
	private long elo_; // 0x48
	public const int StateIntFieldNumber = 8;
	private long stateInt_; // 0x50
	public const int IsStreakEnabledFieldNumber = 9;
	private bool isStreakEnabled_; // 0x58
	public const int ServerEloFieldNumber = 10;
	private long serverElo_; // 0x60

	// Properties
	[GeneratedCode("protoc", null)]
	[DebuggerNonUserCode]
	public static MessageParser<GetPreJoinStrikeShowResponse> Parser { get; }
	[DebuggerNonUserCode]
	[GeneratedCode("protoc", null)]
	public static MessageDescriptor Descriptor { get; }
	[GeneratedCode("protoc", null)]
	[DebuggerNonUserCode]
	private MessageDescriptor pb::Google.Protobuf.IMessage.Descriptor { get; }
	[DebuggerNonUserCode]
	[GeneratedCode("protoc", null)]
	public string TournamentId { get; set; }
	[DebuggerNonUserCode]
	[GeneratedCode("protoc", null)]
	public long StartTime { get; set; }
	[DebuggerNonUserCode]
	[GeneratedCode("protoc", null)]
	public long FinishTime { get; set; }
	[GeneratedCode("protoc", null)]
	[DebuggerNonUserCode]
	public long JoinWindowEndEpoch { get; set; }
	[GeneratedCode("protoc", null)]
	[DebuggerNonUserCode]
	public long PreJoinScore { get; set; }
	[GeneratedCode("protoc", null)]
	[DebuggerNonUserCode]
	public string State { get; set; }
	[DebuggerNonUserCode]
	[GeneratedCode("protoc", null)]
	public long Elo { get; set; }
	[DebuggerNonUserCode]
	[GeneratedCode("protoc", null)]
	public long StateInt { get; set; }
	[DebuggerNonUserCode]
	[GeneratedCode("protoc", null)]
	public bool IsStreakEnabled { get; set; }
	[GeneratedCode("protoc", null)]
	[DebuggerNonUserCode]
	public long ServerElo { get; set; }

	// Methods

	// RVA: 0x3868AF4 Offset: 0x3868AF4 VA: 0x3868AF4
	public static MessageParser<GetPreJoinStrikeShowResponse> get_Parser() { }

	// RVA: 0x3868B4C Offset: 0x3868B4C VA: 0x3868B4C
	public static MessageDescriptor get_Descriptor() { }

	// RVA: 0x3868C50 Offset: 0x3868C50 VA: 0x3868C50 Slot: 8
	private MessageDescriptor pb::Google.Protobuf.IMessage.get_Descriptor() { }

	[DebuggerNonUserCode]
	[GeneratedCode("protoc", null)]
	// RVA: 0x3868C9C Offset: 0x3868C9C VA: 0x3868C9C
	public void .ctor() { }

	[DebuggerNonUserCode]
	[GeneratedCode("protoc", null)]
	// RVA: 0x3868D04 Offset: 0x3868D04 VA: 0x3868D04
	public void .ctor(GetPreJoinStrikeShowResponse other) { }

	[GeneratedCode("protoc", null)]
	[DebuggerNonUserCode]
	// RVA: 0x3868D8C Offset: 0x3868D8C VA: 0x3868D8C Slot: 10
	public GetPreJoinStrikeShowResponse Clone() { }

	// RVA: 0x3868DEC Offset: 0x3868DEC VA: 0x3868DEC
	public string get_TournamentId() { }

	// RVA: 0x3868DF4 Offset: 0x3868DF4 VA: 0x3868DF4
	public void set_TournamentId(string value) { }

	// RVA: 0x3868E70 Offset: 0x3868E70 VA: 0x3868E70
	public long get_StartTime() { }

	// RVA: 0x3868E78 Offset: 0x3868E78 VA: 0x3868E78
	public void set_StartTime(long value) { }

	// RVA: 0x3868E80 Offset: 0x3868E80 VA: 0x3868E80
	public long get_FinishTime() { }

	// RVA: 0x3868E88 Offset: 0x3868E88 VA: 0x3868E88
	public void set_FinishTime(long value) { }

	// RVA: 0x3868E90 Offset: 0x3868E90 VA: 0x3868E90
	public long get_JoinWindowEndEpoch() { }

	// RVA: 0x3868E98 Offset: 0x3868E98 VA: 0x3868E98
	public void set_JoinWindowEndEpoch(long value) { }

	// RVA: 0x3868EA0 Offset: 0x3868EA0 VA: 0x3868EA0
	public long get_PreJoinScore() { }

	// RVA: 0x3868EA8 Offset: 0x3868EA8 VA: 0x3868EA8
	public void set_PreJoinScore(long value) { }

	// RVA: 0x3868EB0 Offset: 0x3868EB0 VA: 0x3868EB0
	public string get_State() { }

	// RVA: 0x3868EB8 Offset: 0x3868EB8 VA: 0x3868EB8
	public void set_State(string value) { }

	// RVA: 0x3868F34 Offset: 0x3868F34 VA: 0x3868F34
	public long get_Elo() { }

	// RVA: 0x3868F3C Offset: 0x3868F3C VA: 0x3868F3C
	public void set_Elo(long value) { }

	// RVA: 0x3868F44 Offset: 0x3868F44 VA: 0x3868F44
	public long get_StateInt() { }

	// RVA: 0x3868F4C Offset: 0x3868F4C VA: 0x3868F4C
	public void set_StateInt(long value) { }

	// RVA: 0x3868F54 Offset: 0x3868F54 VA: 0x3868F54
	public bool get_IsStreakEnabled() { }

	// RVA: 0x3868F5C Offset: 0x3868F5C VA: 0x3868F5C
	public void set_IsStreakEnabled(bool value) { }

	// RVA: 0x3868F68 Offset: 0x3868F68 VA: 0x3868F68
	public long get_ServerElo() { }

	// RVA: 0x3868F70 Offset: 0x3868F70 VA: 0x3868F70
	public void set_ServerElo(long value) { }

	[DebuggerNonUserCode]
	[GeneratedCode("protoc", null)]
	// RVA: 0x3868F78 Offset: 0x3868F78 VA: 0x3868F78 Slot: 0
	public override bool Equals(object other) { }

	[DebuggerNonUserCode]
	[GeneratedCode("protoc", null)]
	// RVA: 0x3868FDC Offset: 0x3868FDC VA: 0x3868FDC Slot: 9
	public bool Equals(GetPreJoinStrikeShowResponse other) { }

	[DebuggerNonUserCode]
	[GeneratedCode("protoc", null)]
	// RVA: 0x38690E0 Offset: 0x38690E0 VA: 0x38690E0 Slot: 2
	public override int GetHashCode() { }

	[GeneratedCode("protoc", null)]
	[DebuggerNonUserCode]
	// RVA: 0x386928C Offset: 0x386928C VA: 0x386928C Slot: 3
	public override string ToString() { }

	[GeneratedCode("protoc", null)]
	[DebuggerNonUserCode]
	// RVA: 0x38692E4 Offset: 0x38692E4 VA: 0x38692E4 Slot: 6
	public void WriteTo(CodedOutputStream output) { }

	[GeneratedCode("protoc", null)]
	[DebuggerNonUserCode]
	// RVA: 0x3869304 Offset: 0x3869304 VA: 0x3869304 Slot: 12
	private void pb::Google.Protobuf.IBufferMessage.InternalWriteTo(ref WriteContext output) { }

	[GeneratedCode("protoc", null)]
	[DebuggerNonUserCode]
	// RVA: 0x38694E0 Offset: 0x38694E0 VA: 0x38694E0 Slot: 7
	public int CalculateSize() { }

	[GeneratedCode("protoc", null)]
	[DebuggerNonUserCode]
	// RVA: 0x38696F4 Offset: 0x38696F4 VA: 0x38696F4 Slot: 4
	public void MergeFrom(GetPreJoinStrikeShowResponse other) { }

	[GeneratedCode("protoc", null)]
	[DebuggerNonUserCode]
	// RVA: 0x38697D0 Offset: 0x38697D0 VA: 0x38697D0 Slot: 5
	public void MergeFrom(CodedInputStream input) { }

	[GeneratedCode("protoc", null)]
	[DebuggerNonUserCode]
	// RVA: 0x38697F0 Offset: 0x38697F0 VA: 0x38697F0 Slot: 11
	private void pb::Google.Protobuf.IBufferMessage.InternalMergeFrom(ref ParseContext input) { }

	// RVA: 0x3869C54 Offset: 0x3869C54 VA: 0x3869C54
	private static void .cctor() { }
}

// Namespace: 
[CompilerGenerated]
[Serializable]