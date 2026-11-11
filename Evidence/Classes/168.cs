public sealed class OnePlusOneOfferResponse : IMessage<OnePlusOneOfferResponse>, IMessage, IEquatable<OnePlusOneOfferResponse>, IDeepCloneable<OnePlusOneOfferResponse>, IBufferMessage // TypeDefIndex: 168
{
	// Fields
	private static readonly MessageParser<OnePlusOneOfferResponse> _parser; // 0x0
	private UnknownFieldSet _unknownFields; // 0x10
	public const int EventIdFieldNumber = 1;
	private string eventId_; // 0x18
	public const int EventTypeFieldNumber = 2;
	private long eventType_; // 0x20
	public const int StartTimeFieldNumber = 3;
	private long startTime_; // 0x28
	public const int EndTimeFieldNumber = 4;
	private long endTime_; // 0x30
	public const int IsFinishedFieldNumber = 5;
	private bool isFinished_; // 0x38
	public const int IsClaimedFieldNumber = 6;
	private bool isClaimed_; // 0x39
	public const int SegmentFieldNumber = 7;
	private string segment_; // 0x40
	public const int ProductIdFieldNumber = 8;
	private string productId_; // 0x48
	public const int FreeRewardFieldNumber = 9;
	private ClientCommonRewardModelWithCollection freeReward_; // 0x50
	public const int PaidRewardFieldNumber = 10;
	private ClientCommonRewardModelWithCollection paidReward_; // 0x58

	// Properties
	[DebuggerNonUserCode]
	[GeneratedCode("protoc", null)]
	public static MessageParser<OnePlusOneOfferResponse> Parser { get; }
	[GeneratedCode("protoc", null)]
	[DebuggerNonUserCode]
	public static MessageDescriptor Descriptor { get; }
	[GeneratedCode("protoc", null)]
	[DebuggerNonUserCode]
	private MessageDescriptor pb::Google.Protobuf.IMessage.Descriptor { get; }
	[GeneratedCode("protoc", null)]
	[DebuggerNonUserCode]
	public string EventId { get; set; }
	[GeneratedCode("protoc", null)]
	[DebuggerNonUserCode]
	public long EventType { get; set; }
	[DebuggerNonUserCode]
	[GeneratedCode("protoc", null)]
	public long StartTime { get; set; }
	[DebuggerNonUserCode]
	[GeneratedCode("protoc", null)]
	public long EndTime { get; set; }
	[DebuggerNonUserCode]
	[GeneratedCode("protoc", null)]
	public bool IsFinished { get; set; }
	[DebuggerNonUserCode]
	[GeneratedCode("protoc", null)]
	public bool IsClaimed { get; set; }
	[GeneratedCode("protoc", null)]
	[DebuggerNonUserCode]
	public string Segment { get; set; }
	[GeneratedCode("protoc", null)]
	[DebuggerNonUserCode]
	public string ProductId { get; set; }
	[GeneratedCode("protoc", null)]
	[DebuggerNonUserCode]
	public ClientCommonRewardModelWithCollection FreeReward { get; set; }
	[DebuggerNonUserCode]
	[GeneratedCode("protoc", null)]
	public ClientCommonRewardModelWithCollection PaidReward { get; set; }

	// Methods

	// RVA: 0x3860DF4 Offset: 0x3860DF4 VA: 0x3860DF4
	public static MessageParser<OnePlusOneOfferResponse> get_Parser() { }

	// RVA: 0x3860E4C Offset: 0x3860E4C VA: 0x3860E4C
	public static MessageDescriptor get_Descriptor() { }

	// RVA: 0x3860F50 Offset: 0x3860F50 VA: 0x3860F50 Slot: 8
	private MessageDescriptor pb::Google.Protobuf.IMessage.get_Descriptor() { }

	[DebuggerNonUserCode]
	[GeneratedCode("protoc", null)]
	// RVA: 0x3860F9C Offset: 0x3860F9C VA: 0x3860F9C
	public void .ctor() { }

	[GeneratedCode("protoc", null)]
	[DebuggerNonUserCode]
	// RVA: 0x3861014 Offset: 0x3861014 VA: 0x3861014
	public void .ctor(OnePlusOneOfferResponse other) { }

	[GeneratedCode("protoc", null)]
	[DebuggerNonUserCode]
	// RVA: 0x38610EC Offset: 0x38610EC VA: 0x38610EC Slot: 10
	public OnePlusOneOfferResponse Clone() { }

	// RVA: 0x386114C Offset: 0x386114C VA: 0x386114C
	public string get_EventId() { }

	// RVA: 0x3861154 Offset: 0x3861154 VA: 0x3861154
	public void set_EventId(string value) { }

	// RVA: 0x38611D0 Offset: 0x38611D0 VA: 0x38611D0
	public long get_EventType() { }

	// RVA: 0x38611D8 Offset: 0x38611D8 VA: 0x38611D8
	public void set_EventType(long value) { }

	// RVA: 0x38611E0 Offset: 0x38611E0 VA: 0x38611E0
	public long get_StartTime() { }

	// RVA: 0x38611E8 Offset: 0x38611E8 VA: 0x38611E8
	public void set_StartTime(long value) { }

	// RVA: 0x38611F0 Offset: 0x38611F0 VA: 0x38611F0
	public long get_EndTime() { }

	// RVA: 0x38611F8 Offset: 0x38611F8 VA: 0x38611F8
	public void set_EndTime(long value) { }

	// RVA: 0x3861200 Offset: 0x3861200 VA: 0x3861200
	public bool get_IsFinished() { }

	// RVA: 0x3861208 Offset: 0x3861208 VA: 0x3861208
	public void set_IsFinished(bool value) { }

	// RVA: 0x3861214 Offset: 0x3861214 VA: 0x3861214
	public bool get_IsClaimed() { }

	// RVA: 0x386121C Offset: 0x386121C VA: 0x386121C
	public void set_IsClaimed(bool value) { }

	// RVA: 0x3861228 Offset: 0x3861228 VA: 0x3861228
	public string get_Segment() { }

	// RVA: 0x3861230 Offset: 0x3861230 VA: 0x3861230
	public void set_Segment(string value) { }

	// RVA: 0x38612AC Offset: 0x38612AC VA: 0x38612AC
	public string get_ProductId() { }

	// RVA: 0x38612B4 Offset: 0x38612B4 VA: 0x38612B4
	public void set_ProductId(string value) { }

	// RVA: 0x3861330 Offset: 0x3861330 VA: 0x3861330
	public ClientCommonRewardModelWithCollection get_FreeReward() { }

	// RVA: 0x3861338 Offset: 0x3861338 VA: 0x3861338
	public void set_FreeReward(ClientCommonRewardModelWithCollection value) { }

	// RVA: 0x3861340 Offset: 0x3861340 VA: 0x3861340
	public ClientCommonRewardModelWithCollection get_PaidReward() { }

	// RVA: 0x3861348 Offset: 0x3861348 VA: 0x3861348
	public void set_PaidReward(ClientCommonRewardModelWithCollection value) { }

	[DebuggerNonUserCode]
	[GeneratedCode("protoc", null)]
	// RVA: 0x3861350 Offset: 0x3861350 VA: 0x3861350 Slot: 0
	public override bool Equals(object other) { }

	[GeneratedCode("protoc", null)]
	[DebuggerNonUserCode]
	// RVA: 0x38613B4 Offset: 0x38613B4 VA: 0x38613B4 Slot: 9
	public bool Equals(OnePlusOneOfferResponse other) { }

	[DebuggerNonUserCode]
	[GeneratedCode("protoc", null)]
	// RVA: 0x38614D4 Offset: 0x38614D4 VA: 0x38614D4 Slot: 2
	public override int GetHashCode() { }

	[GeneratedCode("protoc", null)]
	[DebuggerNonUserCode]
	// RVA: 0x3861690 Offset: 0x3861690 VA: 0x3861690 Slot: 3
	public override string ToString() { }

	[DebuggerNonUserCode]
	[GeneratedCode("protoc", null)]
	// RVA: 0x38616E8 Offset: 0x38616E8 VA: 0x38616E8 Slot: 6
	public void WriteTo(CodedOutputStream output) { }

	[DebuggerNonUserCode]
	[GeneratedCode("protoc", null)]
	// RVA: 0x3861708 Offset: 0x3861708 VA: 0x3861708 Slot: 12
	private void pb::Google.Protobuf.IBufferMessage.InternalWriteTo(ref WriteContext output) { }

	[DebuggerNonUserCode]
	[GeneratedCode("protoc", null)]
	// RVA: 0x38618EC Offset: 0x38618EC VA: 0x38618EC Slot: 7
	public int CalculateSize() { }

	[DebuggerNonUserCode]
	[GeneratedCode("protoc", null)]
	// RVA: 0x3861AEC Offset: 0x3861AEC VA: 0x3861AEC Slot: 4
	public void MergeFrom(OnePlusOneOfferResponse other) { }

	[GeneratedCode("protoc", null)]
	[DebuggerNonUserCode]
	// RVA: 0x3861C80 Offset: 0x3861C80 VA: 0x3861C80 Slot: 5
	public void MergeFrom(CodedInputStream input) { }

	[GeneratedCode("protoc", null)]
	[DebuggerNonUserCode]
	// RVA: 0x3861CA0 Offset: 0x3861CA0 VA: 0x3861CA0 Slot: 11
	private void pb::Google.Protobuf.IBufferMessage.InternalMergeFrom(ref ParseContext input) { }

	// RVA: 0x3862230 Offset: 0x3862230 VA: 0x3862230
	private static void .cctor() { }
}

// Namespace: MagicSort.V1