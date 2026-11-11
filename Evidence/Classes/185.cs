public sealed class StrikeShowLeaderboardResponse : IMessage<StrikeShowLeaderboardResponse>, IMessage, IEquatable<StrikeShowLeaderboardResponse>, IDeepCloneable<StrikeShowLeaderboardResponse>, IBufferMessage // TypeDefIndex: 185
{
	// Fields
	private static readonly MessageParser<StrikeShowLeaderboardResponse> _parser; // 0x0
	private UnknownFieldSet _unknownFields; // 0x10
	public const int TournamentIdFieldNumber = 1;
	private string tournamentId_; // 0x18
	public const int LeaderboardIdFieldNumber = 2;
	private string leaderboardId_; // 0x20
	public const int PlayersFieldNumber = 3;
	private static readonly FieldCodec<StrikeShowLeaderboardPlayer> _repeated_players_codec; // 0x8
	private readonly RepeatedField<StrikeShowLeaderboardPlayer> players_; // 0x28
	public const int StartTimeFieldNumber = 4;
	private long startTime_; // 0x30
	public const int FinishTimeFieldNumber = 5;
	private long finishTime_; // 0x38
	public const int JoinWindowEndEpochFieldNumber = 6;
	private long joinWindowEndEpoch_; // 0x40
	public const int EloPromotedUserCountMapFieldNumber = 7;
	private static readonly MapField.Codec<long, long> _map_eloPromotedUserCountMap_codec; // 0x10
	private readonly MapField<long, long> eloPromotedUserCountMap_; // 0x48
	public const int EloDemotedUserCountMapFieldNumber = 8;
	private static readonly MapField.Codec<long, long> _map_eloDemotedUserCountMap_codec; // 0x18
	private readonly MapField<long, long> eloDemotedUserCountMap_; // 0x50
	public const int CapacityFieldNumber = 9;
	private long capacity_; // 0x58
	public const int EloFieldNumber = 10;
	private long elo_; // 0x60
	public const int StateFieldNumber = 11;
	private string state_; // 0x68
	public const int StateIntFieldNumber = 12;
	private long stateInt_; // 0x70
	public const int IsStreakEnabledFieldNumber = 13;
	private bool isStreakEnabled_; // 0x78
	public const int ServerEloFieldNumber = 14;
	private long serverElo_; // 0x80

	// Properties
	[DebuggerNonUserCode]
	[GeneratedCode("protoc", null)]
	public static MessageParser<StrikeShowLeaderboardResponse> Parser { get; }
	[DebuggerNonUserCode]
	[GeneratedCode("protoc", null)]
	public static MessageDescriptor Descriptor { get; }
	[DebuggerNonUserCode]
	[GeneratedCode("protoc", null)]
	private MessageDescriptor pb::Google.Protobuf.IMessage.Descriptor { get; }
	[GeneratedCode("protoc", null)]
	[DebuggerNonUserCode]
	public string TournamentId { get; set; }
	[GeneratedCode("protoc", null)]
	[DebuggerNonUserCode]
	public string LeaderboardId { get; set; }
	[GeneratedCode("protoc", null)]
	[DebuggerNonUserCode]
	public RepeatedField<StrikeShowLeaderboardPlayer> Players { get; }
	[GeneratedCode("protoc", null)]
	[DebuggerNonUserCode]
	public long StartTime { get; set; }
	[GeneratedCode("protoc", null)]
	[DebuggerNonUserCode]
	public long FinishTime { get; set; }
	[GeneratedCode("protoc", null)]
	[DebuggerNonUserCode]
	public long JoinWindowEndEpoch { get; set; }
	[DebuggerNonUserCode]
	[GeneratedCode("protoc", null)]
	public MapField<long, long> EloPromotedUserCountMap { get; }
	[DebuggerNonUserCode]
	[GeneratedCode("protoc", null)]
	public MapField<long, long> EloDemotedUserCountMap { get; }
	[DebuggerNonUserCode]
	[GeneratedCode("protoc", null)]
	public long Capacity { get; set; }
	[DebuggerNonUserCode]
	[GeneratedCode("protoc", null)]
	public long Elo { get; set; }
	[GeneratedCode("protoc", null)]
	[DebuggerNonUserCode]
	public string State { get; set; }
	[DebuggerNonUserCode]
	[GeneratedCode("protoc", null)]
	public long StateInt { get; set; }
	[DebuggerNonUserCode]
	[GeneratedCode("protoc", null)]
	public bool IsStreakEnabled { get; set; }
	[DebuggerNonUserCode]
	[GeneratedCode("protoc", null)]
	public long ServerElo { get; set; }

	// Methods

	// RVA: 0x3869E38 Offset: 0x3869E38 VA: 0x3869E38
	public static MessageParser<StrikeShowLeaderboardResponse> get_Parser() { }

	// RVA: 0x3869E90 Offset: 0x3869E90 VA: 0x3869E90
	public static MessageDescriptor get_Descriptor() { }

	// RVA: 0x3869F94 Offset: 0x3869F94 VA: 0x3869F94 Slot: 8
	private MessageDescriptor pb::Google.Protobuf.IMessage.get_Descriptor() { }

	[DebuggerNonUserCode]
	[GeneratedCode("protoc", null)]
	// RVA: 0x3869FE0 Offset: 0x3869FE0 VA: 0x3869FE0
	public void .ctor() { }

	[DebuggerNonUserCode]
	[GeneratedCode("protoc", null)]
	// RVA: 0x386A12C Offset: 0x386A12C VA: 0x386A12C
	public void .ctor(StrikeShowLeaderboardResponse other) { }

	[GeneratedCode("protoc", null)]
	[DebuggerNonUserCode]
	// RVA: 0x386A270 Offset: 0x386A270 VA: 0x386A270 Slot: 10
	public StrikeShowLeaderboardResponse Clone() { }

	// RVA: 0x386A2D0 Offset: 0x386A2D0 VA: 0x386A2D0
	public string get_TournamentId() { }

	// RVA: 0x386A2D8 Offset: 0x386A2D8 VA: 0x386A2D8
	public void set_TournamentId(string value) { }

	// RVA: 0x386A354 Offset: 0x386A354 VA: 0x386A354
	public string get_LeaderboardId() { }

	// RVA: 0x386A35C Offset: 0x386A35C VA: 0x386A35C
	public void set_LeaderboardId(string value) { }

	// RVA: 0x386A3D8 Offset: 0x386A3D8 VA: 0x386A3D8
	public RepeatedField<StrikeShowLeaderboardPlayer> get_Players() { }

	// RVA: 0x386A3E0 Offset: 0x386A3E0 VA: 0x386A3E0
	public long get_StartTime() { }

	// RVA: 0x386A3E8 Offset: 0x386A3E8 VA: 0x386A3E8
	public void set_StartTime(long value) { }

	// RVA: 0x386A3F0 Offset: 0x386A3F0 VA: 0x386A3F0
	public long get_FinishTime() { }

	// RVA: 0x386A3F8 Offset: 0x386A3F8 VA: 0x386A3F8
	public void set_FinishTime(long value) { }

	// RVA: 0x386A400 Offset: 0x386A400 VA: 0x386A400
	public long get_JoinWindowEndEpoch() { }

	// RVA: 0x386A408 Offset: 0x386A408 VA: 0x386A408
	public void set_JoinWindowEndEpoch(long value) { }

	// RVA: 0x386A410 Offset: 0x386A410 VA: 0x386A410
	public MapField<long, long> get_EloPromotedUserCountMap() { }

	// RVA: 0x386A418 Offset: 0x386A418 VA: 0x386A418
	public MapField<long, long> get_EloDemotedUserCountMap() { }

	// RVA: 0x386A420 Offset: 0x386A420 VA: 0x386A420
	public long get_Capacity() { }

	// RVA: 0x386A428 Offset: 0x386A428 VA: 0x386A428
	public void set_Capacity(long value) { }

	// RVA: 0x386A430 Offset: 0x386A430 VA: 0x386A430
	public long get_Elo() { }

	// RVA: 0x386A438 Offset: 0x386A438 VA: 0x386A438
	public void set_Elo(long value) { }

	// RVA: 0x386A440 Offset: 0x386A440 VA: 0x386A440
	public string get_State() { }

	// RVA: 0x386A448 Offset: 0x386A448 VA: 0x386A448
	public void set_State(string value) { }

	// RVA: 0x386A4C4 Offset: 0x386A4C4 VA: 0x386A4C4
	public long get_StateInt() { }

	// RVA: 0x386A4CC Offset: 0x386A4CC VA: 0x386A4CC
	public void set_StateInt(long value) { }

	// RVA: 0x386A4D4 Offset: 0x386A4D4 VA: 0x386A4D4
	public bool get_IsStreakEnabled() { }

	// RVA: 0x386A4DC Offset: 0x386A4DC VA: 0x386A4DC
	public void set_IsStreakEnabled(bool value) { }

	// RVA: 0x386A4E8 Offset: 0x386A4E8 VA: 0x386A4E8
	public long get_ServerElo() { }

	// RVA: 0x386A4F0 Offset: 0x386A4F0 VA: 0x386A4F0
	public void set_ServerElo(long value) { }

	[GeneratedCode("protoc", null)]
	[DebuggerNonUserCode]
	// RVA: 0x386A4F8 Offset: 0x386A4F8 VA: 0x386A4F8 Slot: 0
	public override bool Equals(object other) { }

	[DebuggerNonUserCode]
	[GeneratedCode("protoc", null)]
	// RVA: 0x386A55C Offset: 0x386A55C VA: 0x386A55C Slot: 9
	public bool Equals(StrikeShowLeaderboardResponse other) { }

	[DebuggerNonUserCode]
	[GeneratedCode("protoc", null)]
	// RVA: 0x386A6FC Offset: 0x386A6FC VA: 0x386A6FC Slot: 2
	public override int GetHashCode() { }

	[DebuggerNonUserCode]
	[GeneratedCode("protoc", null)]
	// RVA: 0x386A914 Offset: 0x386A914 VA: 0x386A914 Slot: 3
	public override string ToString() { }

	[DebuggerNonUserCode]
	[GeneratedCode("protoc", null)]
	// RVA: 0x386A96C Offset: 0x386A96C VA: 0x386A96C Slot: 6
	public void WriteTo(CodedOutputStream output) { }

	[DebuggerNonUserCode]
	[GeneratedCode("protoc", null)]
	// RVA: 0x386A98C Offset: 0x386A98C VA: 0x386A98C Slot: 12
	private void pb::Google.Protobuf.IBufferMessage.InternalWriteTo(ref WriteContext output) { }

	[DebuggerNonUserCode]
	[GeneratedCode("protoc", null)]
	// RVA: 0x386AC7C Offset: 0x386AC7C VA: 0x386AC7C Slot: 7
	public int CalculateSize() { }

	[GeneratedCode("protoc", null)]
	[DebuggerNonUserCode]
	// RVA: 0x386AF94 Offset: 0x386AF94 VA: 0x386AF94 Slot: 4
	public void MergeFrom(StrikeShowLeaderboardResponse other) { }

	[DebuggerNonUserCode]
	[GeneratedCode("protoc", null)]
	// RVA: 0x386B100 Offset: 0x386B100 VA: 0x386B100 Slot: 5
	public void MergeFrom(CodedInputStream input) { }

	[DebuggerNonUserCode]
	[GeneratedCode("protoc", null)]
	// RVA: 0x386B120 Offset: 0x386B120 VA: 0x386B120 Slot: 11
	private void pb::Google.Protobuf.IBufferMessage.InternalMergeFrom(ref ParseContext input) { }

	// RVA: 0x386B768 Offset: 0x386B768 VA: 0x386B768
	private static void .cctor() { }
}

// Namespace: 
[CompilerGenerated]
[Serializable]