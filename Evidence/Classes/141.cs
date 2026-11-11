public sealed class ClaimAppchargePurchaseResponse : IMessage<ClaimAppchargePurchaseResponse>, IMessage, IEquatable<ClaimAppchargePurchaseResponse>, IDeepCloneable<ClaimAppchargePurchaseResponse>, IBufferMessage // TypeDefIndex: 141
{
	// Fields
	private static readonly MessageParser<ClaimAppchargePurchaseResponse> _parser; // 0x0
	private UnknownFieldSet _unknownFields; // 0x10
	public const int PurchaseIdFieldNumber = 1;
	private string purchaseId_; // 0x18
	public const int StatusFieldNumber = 2;
	private string status_; // 0x20
	public const int AlreadyClaimedFieldNumber = 3;
	private bool alreadyClaimed_; // 0x28
	public const int RewardPayloadFieldNumber = 4;
	private ByteString rewardPayload_; // 0x30

	// Properties
	[GeneratedCode("protoc", null)]
	[DebuggerNonUserCode]
	public static MessageParser<ClaimAppchargePurchaseResponse> Parser { get; }
	[GeneratedCode("protoc", null)]
	[DebuggerNonUserCode]
	public static MessageDescriptor Descriptor { get; }
	[GeneratedCode("protoc", null)]
	[DebuggerNonUserCode]
	private MessageDescriptor pb::Google.Protobuf.IMessage.Descriptor { get; }
	[DebuggerNonUserCode]
	[GeneratedCode("protoc", null)]
	public string PurchaseId { get; set; }
	[DebuggerNonUserCode]
	[GeneratedCode("protoc", null)]
	public string Status { get; set; }
	[GeneratedCode("protoc", null)]
	[DebuggerNonUserCode]
	public bool AlreadyClaimed { get; set; }
	[GeneratedCode("protoc", null)]
	[DebuggerNonUserCode]
	public ByteString RewardPayload { get; set; }

	// Methods

	// RVA: 0x3854520 Offset: 0x3854520 VA: 0x3854520
	public static MessageParser<ClaimAppchargePurchaseResponse> get_Parser() { }

	// RVA: 0x3854578 Offset: 0x3854578 VA: 0x3854578
	public static MessageDescriptor get_Descriptor() { }

	// RVA: 0x385467C Offset: 0x385467C VA: 0x385467C Slot: 8
	private MessageDescriptor pb::Google.Protobuf.IMessage.get_Descriptor() { }

	[DebuggerNonUserCode]
	[GeneratedCode("protoc", null)]
	// RVA: 0x38546C8 Offset: 0x38546C8 VA: 0x38546C8
	public void .ctor() { }

	[DebuggerNonUserCode]
	[GeneratedCode("protoc", null)]
	// RVA: 0x38547A4 Offset: 0x38547A4 VA: 0x38547A4
	public void .ctor(ClaimAppchargePurchaseResponse other) { }

	[DebuggerNonUserCode]
	[GeneratedCode("protoc", null)]
	// RVA: 0x385481C Offset: 0x385481C VA: 0x385481C Slot: 10
	public ClaimAppchargePurchaseResponse Clone() { }

	// RVA: 0x385487C Offset: 0x385487C VA: 0x385487C
	public string get_PurchaseId() { }

	// RVA: 0x3854884 Offset: 0x3854884 VA: 0x3854884
	public void set_PurchaseId(string value) { }

	// RVA: 0x3854900 Offset: 0x3854900 VA: 0x3854900
	public string get_Status() { }

	// RVA: 0x3854908 Offset: 0x3854908 VA: 0x3854908
	public void set_Status(string value) { }

	// RVA: 0x3854984 Offset: 0x3854984 VA: 0x3854984
	public bool get_AlreadyClaimed() { }

	// RVA: 0x385498C Offset: 0x385498C VA: 0x385498C
	public void set_AlreadyClaimed(bool value) { }

	// RVA: 0x3854998 Offset: 0x3854998 VA: 0x3854998
	public ByteString get_RewardPayload() { }

	// RVA: 0x38549A0 Offset: 0x38549A0 VA: 0x38549A0
	public void set_RewardPayload(ByteString value) { }

	[DebuggerNonUserCode]
	[GeneratedCode("protoc", null)]
	// RVA: 0x3854A1C Offset: 0x3854A1C VA: 0x3854A1C Slot: 0
	public override bool Equals(object other) { }

	[GeneratedCode("protoc", null)]
	[DebuggerNonUserCode]
	// RVA: 0x3854A80 Offset: 0x3854A80 VA: 0x3854A80 Slot: 9
	public bool Equals(ClaimAppchargePurchaseResponse other) { }

	[GeneratedCode("protoc", null)]
	[DebuggerNonUserCode]
	// RVA: 0x3854B74 Offset: 0x3854B74 VA: 0x3854B74 Slot: 2
	public override int GetHashCode() { }

	[DebuggerNonUserCode]
	[GeneratedCode("protoc", null)]
	// RVA: 0x3854C7C Offset: 0x3854C7C VA: 0x3854C7C Slot: 3
	public override string ToString() { }

	[GeneratedCode("protoc", null)]
	[DebuggerNonUserCode]
	// RVA: 0x3854CD4 Offset: 0x3854CD4 VA: 0x3854CD4 Slot: 6
	public void WriteTo(CodedOutputStream output) { }

	[GeneratedCode("protoc", null)]
	[DebuggerNonUserCode]
	// RVA: 0x3854CF4 Offset: 0x3854CF4 VA: 0x3854CF4 Slot: 12
	private void pb::Google.Protobuf.IBufferMessage.InternalWriteTo(ref WriteContext output) { }

	[GeneratedCode("protoc", null)]
	[DebuggerNonUserCode]
	// RVA: 0x3854DEC Offset: 0x3854DEC VA: 0x3854DEC Slot: 7
	public int CalculateSize() { }

	[DebuggerNonUserCode]
	[GeneratedCode("protoc", null)]
	// RVA: 0x3854F08 Offset: 0x3854F08 VA: 0x3854F08 Slot: 4
	public void MergeFrom(ClaimAppchargePurchaseResponse other) { }

	[DebuggerNonUserCode]
	[GeneratedCode("protoc", null)]
	// RVA: 0x3854FB0 Offset: 0x3854FB0 VA: 0x3854FB0 Slot: 5
	public void MergeFrom(CodedInputStream input) { }

	[DebuggerNonUserCode]
	[GeneratedCode("protoc", null)]
	// RVA: 0x3854FD0 Offset: 0x3854FD0 VA: 0x3854FD0 Slot: 11
	private void pb::Google.Protobuf.IBufferMessage.InternalMergeFrom(ref ParseContext input) { }

	// RVA: 0x3855334 Offset: 0x3855334 VA: 0x3855334
	private static void .cctor() { }
}

// Namespace: 
[CompilerGenerated]
[Serializable]