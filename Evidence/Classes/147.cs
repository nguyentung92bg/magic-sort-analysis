public sealed class AppchargeClaimablePurchase : IMessage<AppchargeClaimablePurchase>, IMessage, IEquatable<AppchargeClaimablePurchase>, IDeepCloneable<AppchargeClaimablePurchase>, IBufferMessage // TypeDefIndex: 147
{
	// Fields
	private static readonly MessageParser<AppchargeClaimablePurchase> _parser; // 0x0
	private UnknownFieldSet _unknownFields; // 0x10
	public const int PurchaseIdFieldNumber = 1;
	private string purchaseId_; // 0x18
	public const int OfferIdFieldNumber = 2;
	private string offerId_; // 0x20
	public const int FulfilledAtFieldNumber = 3;
	private long fulfilledAt_; // 0x28

	// Properties
	[DebuggerNonUserCode]
	[GeneratedCode("protoc", null)]
	public static MessageParser<AppchargeClaimablePurchase> Parser { get; }
	[DebuggerNonUserCode]
	[GeneratedCode("protoc", null)]
	public static MessageDescriptor Descriptor { get; }
	[DebuggerNonUserCode]
	[GeneratedCode("protoc", null)]
	private MessageDescriptor pb::Google.Protobuf.IMessage.Descriptor { get; }
	[DebuggerNonUserCode]
	[GeneratedCode("protoc", null)]
	public string PurchaseId { get; set; }
	[GeneratedCode("protoc", null)]
	[DebuggerNonUserCode]
	public string OfferId { get; set; }
	[GeneratedCode("protoc", null)]
	[DebuggerNonUserCode]
	public long FulfilledAt { get; set; }

	// Methods

	// RVA: 0x3857134 Offset: 0x3857134 VA: 0x3857134
	public static MessageParser<AppchargeClaimablePurchase> get_Parser() { }

	// RVA: 0x385718C Offset: 0x385718C VA: 0x385718C
	public static MessageDescriptor get_Descriptor() { }

	// RVA: 0x3857290 Offset: 0x3857290 VA: 0x3857290 Slot: 8
	private MessageDescriptor pb::Google.Protobuf.IMessage.get_Descriptor() { }

	[DebuggerNonUserCode]
	[GeneratedCode("protoc", null)]
	// RVA: 0x38572DC Offset: 0x38572DC VA: 0x38572DC
	public void .ctor() { }

	[DebuggerNonUserCode]
	[GeneratedCode("protoc", null)]
	// RVA: 0x3857344 Offset: 0x3857344 VA: 0x3857344
	public void .ctor(AppchargeClaimablePurchase other) { }

	[DebuggerNonUserCode]
	[GeneratedCode("protoc", null)]
	// RVA: 0x38573AC Offset: 0x38573AC VA: 0x38573AC Slot: 10
	public AppchargeClaimablePurchase Clone() { }

	// RVA: 0x385740C Offset: 0x385740C VA: 0x385740C
	public string get_PurchaseId() { }

	// RVA: 0x3857414 Offset: 0x3857414 VA: 0x3857414
	public void set_PurchaseId(string value) { }

	// RVA: 0x3857490 Offset: 0x3857490 VA: 0x3857490
	public string get_OfferId() { }

	// RVA: 0x3857498 Offset: 0x3857498 VA: 0x3857498
	public void set_OfferId(string value) { }

	// RVA: 0x3857514 Offset: 0x3857514 VA: 0x3857514
	public long get_FulfilledAt() { }

	// RVA: 0x385751C Offset: 0x385751C VA: 0x385751C
	public void set_FulfilledAt(long value) { }

	[DebuggerNonUserCode]
	[GeneratedCode("protoc", null)]
	// RVA: 0x3857524 Offset: 0x3857524 VA: 0x3857524 Slot: 0
	public override bool Equals(object other) { }

	[DebuggerNonUserCode]
	[GeneratedCode("protoc", null)]
	// RVA: 0x3857588 Offset: 0x3857588 VA: 0x3857588 Slot: 9
	public bool Equals(AppchargeClaimablePurchase other) { }

	[DebuggerNonUserCode]
	[GeneratedCode("protoc", null)]
	// RVA: 0x385760C Offset: 0x385760C VA: 0x385760C Slot: 2
	public override int GetHashCode() { }

	[DebuggerNonUserCode]
	[GeneratedCode("protoc", null)]
	// RVA: 0x38576AC Offset: 0x38576AC VA: 0x38576AC Slot: 3
	public override string ToString() { }

	[DebuggerNonUserCode]
	[GeneratedCode("protoc", null)]
	// RVA: 0x3857704 Offset: 0x3857704 VA: 0x3857704 Slot: 6
	public void WriteTo(CodedOutputStream output) { }

	[DebuggerNonUserCode]
	[GeneratedCode("protoc", null)]
	// RVA: 0x3857724 Offset: 0x3857724 VA: 0x3857724 Slot: 12
	private void pb::Google.Protobuf.IBufferMessage.InternalWriteTo(ref WriteContext output) { }

	[DebuggerNonUserCode]
	[GeneratedCode("protoc", null)]
	// RVA: 0x38577E8 Offset: 0x38577E8 VA: 0x38577E8 Slot: 7
	public int CalculateSize() { }

	[DebuggerNonUserCode]
	[GeneratedCode("protoc", null)]
	// RVA: 0x38578E4 Offset: 0x38578E4 VA: 0x38578E4 Slot: 4
	public void MergeFrom(AppchargeClaimablePurchase other) { }

	[DebuggerNonUserCode]
	[GeneratedCode("protoc", null)]
	// RVA: 0x385796C Offset: 0x385796C VA: 0x385796C Slot: 5
	public void MergeFrom(CodedInputStream input) { }

	[DebuggerNonUserCode]
	[GeneratedCode("protoc", null)]
	// RVA: 0x385798C Offset: 0x385798C VA: 0x385798C Slot: 11
	private void pb::Google.Protobuf.IBufferMessage.InternalMergeFrom(ref ParseContext input) { }

	// RVA: 0x3857BEC Offset: 0x3857BEC VA: 0x3857BEC
	private static void .cctor() { }
}

// Namespace: 
[CompilerGenerated]
[Serializable]