public sealed class ClaimOnePlusOneOfferRequest : IMessage<ClaimOnePlusOneOfferRequest>, IMessage, IEquatable<ClaimOnePlusOneOfferRequest>, IDeepCloneable<ClaimOnePlusOneOfferRequest>, IBufferMessage // TypeDefIndex: 166
{
	// Fields
	private static readonly MessageParser<ClaimOnePlusOneOfferRequest> _parser; // 0x0
	private UnknownFieldSet _unknownFields; // 0x10
	public const int EventTypeFieldNumber = 1;
	private long eventType_; // 0x18
	public const int EventIdFieldNumber = 2;
	private string eventId_; // 0x20

	// Properties
	[DebuggerNonUserCode]
	[GeneratedCode("protoc", null)]
	public static MessageParser<ClaimOnePlusOneOfferRequest> Parser { get; }
	[GeneratedCode("protoc", null)]
	[DebuggerNonUserCode]
	public static MessageDescriptor Descriptor { get; }
	[DebuggerNonUserCode]
	[GeneratedCode("protoc", null)]
	private MessageDescriptor pb::Google.Protobuf.IMessage.Descriptor { get; }
	[DebuggerNonUserCode]
	[GeneratedCode("protoc", null)]
	public long EventType { get; set; }
	[DebuggerNonUserCode]
	[GeneratedCode("protoc", null)]
	public string EventId { get; set; }

	// Methods

	// RVA: 0x386035C Offset: 0x386035C VA: 0x386035C
	public static MessageParser<ClaimOnePlusOneOfferRequest> get_Parser() { }

	// RVA: 0x38603B4 Offset: 0x38603B4 VA: 0x38603B4
	public static MessageDescriptor get_Descriptor() { }

	// RVA: 0x38604B8 Offset: 0x38604B8 VA: 0x38604B8 Slot: 8
	private MessageDescriptor pb::Google.Protobuf.IMessage.get_Descriptor() { }

	[GeneratedCode("protoc", null)]
	[DebuggerNonUserCode]
	// RVA: 0x3860504 Offset: 0x3860504 VA: 0x3860504
	public void .ctor() { }

	[DebuggerNonUserCode]
	[GeneratedCode("protoc", null)]
	// RVA: 0x386055C Offset: 0x386055C VA: 0x386055C
	public void .ctor(ClaimOnePlusOneOfferRequest other) { }

	[DebuggerNonUserCode]
	[GeneratedCode("protoc", null)]
	// RVA: 0x38605B4 Offset: 0x38605B4 VA: 0x38605B4 Slot: 10
	public ClaimOnePlusOneOfferRequest Clone() { }

	// RVA: 0x3860614 Offset: 0x3860614 VA: 0x3860614
	public long get_EventType() { }

	// RVA: 0x386061C Offset: 0x386061C VA: 0x386061C
	public void set_EventType(long value) { }

	// RVA: 0x3860624 Offset: 0x3860624 VA: 0x3860624
	public string get_EventId() { }

	// RVA: 0x386062C Offset: 0x386062C VA: 0x386062C
	public void set_EventId(string value) { }

	[DebuggerNonUserCode]
	[GeneratedCode("protoc", null)]
	// RVA: 0x38606A8 Offset: 0x38606A8 VA: 0x38606A8 Slot: 0
	public override bool Equals(object other) { }

	[GeneratedCode("protoc", null)]
	[DebuggerNonUserCode]
	// RVA: 0x386070C Offset: 0x386070C VA: 0x386070C Slot: 9
	public bool Equals(ClaimOnePlusOneOfferRequest other) { }

	[DebuggerNonUserCode]
	[GeneratedCode("protoc", null)]
	// RVA: 0x386077C Offset: 0x386077C VA: 0x386077C Slot: 2
	public override int GetHashCode() { }

	[DebuggerNonUserCode]
	[GeneratedCode("protoc", null)]
	// RVA: 0x38607FC Offset: 0x38607FC VA: 0x38607FC Slot: 3
	public override string ToString() { }

	[DebuggerNonUserCode]
	[GeneratedCode("protoc", null)]
	// RVA: 0x3860854 Offset: 0x3860854 VA: 0x3860854 Slot: 6
	public void WriteTo(CodedOutputStream output) { }

	[DebuggerNonUserCode]
	[GeneratedCode("protoc", null)]
	// RVA: 0x3860874 Offset: 0x3860874 VA: 0x3860874 Slot: 12
	private void pb::Google.Protobuf.IBufferMessage.InternalWriteTo(ref WriteContext output) { }

	[DebuggerNonUserCode]
	[GeneratedCode("protoc", null)]
	// RVA: 0x3860908 Offset: 0x3860908 VA: 0x3860908 Slot: 7
	public int CalculateSize() { }

	[DebuggerNonUserCode]
	[GeneratedCode("protoc", null)]
	// RVA: 0x38609C8 Offset: 0x38609C8 VA: 0x38609C8 Slot: 4
	public void MergeFrom(ClaimOnePlusOneOfferRequest other) { }

	[GeneratedCode("protoc", null)]
	[DebuggerNonUserCode]
	// RVA: 0x3860A38 Offset: 0x3860A38 VA: 0x3860A38 Slot: 5
	public void MergeFrom(CodedInputStream input) { }

	[DebuggerNonUserCode]
	[GeneratedCode("protoc", null)]
	// RVA: 0x3860A58 Offset: 0x3860A58 VA: 0x3860A58 Slot: 11
	private void pb::Google.Protobuf.IBufferMessage.InternalMergeFrom(ref ParseContext input) { }

	// RVA: 0x3860C10 Offset: 0x3860C10 VA: 0x3860C10
	private static void .cctor() { }
}

// Namespace: 
[CompilerGenerated]
[Serializable]