public sealed class ClaimedAppchargePurchase : IMessage<ClaimedAppchargePurchase>, IMessage, IEquatable<ClaimedAppchargePurchase>, IDeepCloneable<ClaimedAppchargePurchase>, IBufferMessage // TypeDefIndex: 145
{
	// Fields
	private static readonly MessageParser<ClaimedAppchargePurchase> _parser; // 0x0
	private UnknownFieldSet _unknownFields; // 0x10
	public const int PurchaseIdFieldNumber = 1;
	private string purchaseId_; // 0x18
	public const int StatusFieldNumber = 2;
	private string status_; // 0x20
	public const int AlreadyClaimedFieldNumber = 3;
	private bool alreadyClaimed_; // 0x28
	public const int RewardPayloadFieldNumber = 4;
	private ByteString rewardPayload_; // 0x30
	public const int ErrorFieldNumber = 5;
	private string error_; // 0x38

	// Properties
	[DebuggerNonUserCode]
	[GeneratedCode("protoc", null)]
	public static MessageParser<ClaimedAppchargePurchase> Parser { get; }
	[DebuggerNonUserCode]
	[GeneratedCode("protoc", null)]
	public static MessageDescriptor Descriptor { get; }
	[DebuggerNonUserCode]
	[GeneratedCode("protoc", null)]
	private MessageDescriptor pb::Google.Protobuf.IMessage.Descriptor { get; }
	[GeneratedCode("protoc", null)]
	[DebuggerNonUserCode]
	public string PurchaseId { get; set; }
	[DebuggerNonUserCode]
	[GeneratedCode("protoc", null)]
	public string Status { get; set; }
	[DebuggerNonUserCode]
	[GeneratedCode("protoc", null)]
	public bool AlreadyClaimed { get; set; }
	[GeneratedCode("protoc", null)]
	[DebuggerNonUserCode]
	public ByteString RewardPayload { get; set; }
	[GeneratedCode("protoc", null)]
	[DebuggerNonUserCode]
	public string Error { get; set; }

	// Methods

	// RVA: 0x3855F40 Offset: 0x3855F40 VA: 0x3855F40
	public static MessageParser<ClaimedAppchargePurchase> get_Parser() { }

	// RVA: 0x3855F98 Offset: 0x3855F98 VA: 0x3855F98
	public static MessageDescriptor get_Descriptor() { }

	// RVA: 0x385609C Offset: 0x385609C VA: 0x385609C Slot: 8
	private MessageDescriptor pb::Google.Protobuf.IMessage.get_Descriptor() { }

	[DebuggerNonUserCode]
	[GeneratedCode("protoc", null)]
	// RVA: 0x38560E8 Offset: 0x38560E8 VA: 0x38560E8
	public void .ctor() { }

	[DebuggerNonUserCode]
	[GeneratedCode("protoc", null)]
	// RVA: 0x38561D4 Offset: 0x38561D4 VA: 0x38561D4
	public void .ctor(ClaimedAppchargePurchase other) { }

	[GeneratedCode("protoc", null)]
	[DebuggerNonUserCode]
	// RVA: 0x385625C Offset: 0x385625C VA: 0x385625C Slot: 10
	public ClaimedAppchargePurchase Clone() { }

	// RVA: 0x38562BC Offset: 0x38562BC VA: 0x38562BC
	public string get_PurchaseId() { }

	// RVA: 0x38562C4 Offset: 0x38562C4 VA: 0x38562C4
	public void set_PurchaseId(string value) { }

	// RVA: 0x3856340 Offset: 0x3856340 VA: 0x3856340
	public string get_Status() { }

	// RVA: 0x3856348 Offset: 0x3856348 VA: 0x3856348
	public void set_Status(string value) { }

	// RVA: 0x38563C4 Offset: 0x38563C4 VA: 0x38563C4
	public bool get_AlreadyClaimed() { }

	// RVA: 0x38563CC Offset: 0x38563CC VA: 0x38563CC
	public void set_AlreadyClaimed(bool value) { }

	// RVA: 0x38563D8 Offset: 0x38563D8 VA: 0x38563D8
	public ByteString get_RewardPayload() { }

	// RVA: 0x38563E0 Offset: 0x38563E0 VA: 0x38563E0
	public void set_RewardPayload(ByteString value) { }

	// RVA: 0x385645C Offset: 0x385645C VA: 0x385645C
	public string get_Error() { }

	// RVA: 0x3856464 Offset: 0x3856464 VA: 0x3856464
	public void set_Error(string value) { }

	[GeneratedCode("protoc", null)]
	[DebuggerNonUserCode]
	// RVA: 0x38564E0 Offset: 0x38564E0 VA: 0x38564E0 Slot: 0
	public override bool Equals(object other) { }

	[DebuggerNonUserCode]
	[GeneratedCode("protoc", null)]
	// RVA: 0x3856544 Offset: 0x3856544 VA: 0x3856544 Slot: 9
	public bool Equals(ClaimedAppchargePurchase other) { }

	[DebuggerNonUserCode]
	[GeneratedCode("protoc", null)]
	// RVA: 0x385664C Offset: 0x385664C VA: 0x385664C Slot: 2
	public override int GetHashCode() { }

	[DebuggerNonUserCode]
	[GeneratedCode("protoc", null)]
	// RVA: 0x3856774 Offset: 0x3856774 VA: 0x3856774 Slot: 3
	public override string ToString() { }

	[DebuggerNonUserCode]
	[GeneratedCode("protoc", null)]
	// RVA: 0x38567CC Offset: 0x38567CC VA: 0x38567CC Slot: 6
	public void WriteTo(CodedOutputStream output) { }

	[DebuggerNonUserCode]
	[GeneratedCode("protoc", null)]
	// RVA: 0x38567EC Offset: 0x38567EC VA: 0x38567EC Slot: 12
	private void pb::Google.Protobuf.IBufferMessage.InternalWriteTo(ref WriteContext output) { }

	[DebuggerNonUserCode]
	[GeneratedCode("protoc", null)]
	// RVA: 0x3856914 Offset: 0x3856914 VA: 0x3856914 Slot: 7
	public int CalculateSize() { }

	[DebuggerNonUserCode]
	[GeneratedCode("protoc", null)]
	// RVA: 0x3856A64 Offset: 0x3856A64 VA: 0x3856A64 Slot: 4
	public void MergeFrom(ClaimedAppchargePurchase other) { }

	[GeneratedCode("protoc", null)]
	[DebuggerNonUserCode]
	// RVA: 0x3856B24 Offset: 0x3856B24 VA: 0x3856B24 Slot: 5
	public void MergeFrom(CodedInputStream input) { }

	[GeneratedCode("protoc", null)]
	[DebuggerNonUserCode]
	// RVA: 0x3856B44 Offset: 0x3856B44 VA: 0x3856B44 Slot: 11
	private void pb::Google.Protobuf.IBufferMessage.InternalMergeFrom(ref ParseContext input) { }

	// RVA: 0x3856F50 Offset: 0x3856F50 VA: 0x3856F50
	private static void .cctor() { }
}

// Namespace: 
[CompilerGenerated]
[Serializable]