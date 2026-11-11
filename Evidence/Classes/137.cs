public sealed class AppchargePurchaseStatusResponse : IMessage<AppchargePurchaseStatusResponse>, IMessage, IEquatable<AppchargePurchaseStatusResponse>, IDeepCloneable<AppchargePurchaseStatusResponse>, IBufferMessage // TypeDefIndex: 137
{
	// Fields
	private static readonly MessageParser<AppchargePurchaseStatusResponse> _parser; // 0x0
	private UnknownFieldSet _unknownFields; // 0x10
	public const int PurchaseIdFieldNumber = 1;
	private string purchaseId_; // 0x18
	public const int StatusFieldNumber = 2;
	private string status_; // 0x20
	public const int OfferIdFieldNumber = 3;
	private string offerId_; // 0x28

	// Properties
	[DebuggerNonUserCode]
	[GeneratedCode("protoc", null)]
	public static MessageParser<AppchargePurchaseStatusResponse> Parser { get; }
	[DebuggerNonUserCode]
	[GeneratedCode("protoc", null)]
	public static MessageDescriptor Descriptor { get; }
	[DebuggerNonUserCode]
	[GeneratedCode("protoc", null)]
	private MessageDescriptor pb::Google.Protobuf.IMessage.Descriptor { get; }
	[GeneratedCode("protoc", null)]
	[DebuggerNonUserCode]
	public string PurchaseId { get; set; }
	[GeneratedCode("protoc", null)]
	[DebuggerNonUserCode]
	public string Status { get; set; }
	[GeneratedCode("protoc", null)]
	[DebuggerNonUserCode]
	public string OfferId { get; set; }

	// Methods

	// RVA: 0x3B00044 Offset: 0x3B00044 VA: 0x3B00044
	public static MessageParser<AppchargePurchaseStatusResponse> get_Parser() { }

	// RVA: 0x3B0009C Offset: 0x3B0009C VA: 0x3B0009C
	public static MessageDescriptor get_Descriptor() { }

	// RVA: 0x3B001A0 Offset: 0x3B001A0 VA: 0x3B001A0 Slot: 8
	private MessageDescriptor pb::Google.Protobuf.IMessage.get_Descriptor() { }

	[DebuggerNonUserCode]
	[GeneratedCode("protoc", null)]
	// RVA: 0x3B001EC Offset: 0x3B001EC VA: 0x3B001EC
	public void .ctor() { }

	[DebuggerNonUserCode]
	[GeneratedCode("protoc", null)]
	// RVA: 0x3B00264 Offset: 0x3B00264 VA: 0x3B00264
	public void .ctor(AppchargePurchaseStatusResponse other) { }

	[DebuggerNonUserCode]
	[GeneratedCode("protoc", null)]
	// RVA: 0x3B002D4 Offset: 0x3B002D4 VA: 0x3B002D4 Slot: 10
	public AppchargePurchaseStatusResponse Clone() { }

	// RVA: 0x3B00334 Offset: 0x3B00334 VA: 0x3B00334
	public string get_PurchaseId() { }

	// RVA: 0x3B0033C Offset: 0x3B0033C VA: 0x3B0033C
	public void set_PurchaseId(string value) { }

	// RVA: 0x3B003B8 Offset: 0x3B003B8 VA: 0x3B003B8
	public string get_Status() { }

	// RVA: 0x3B003C0 Offset: 0x3B003C0 VA: 0x3B003C0
	public void set_Status(string value) { }

	// RVA: 0x3B0043C Offset: 0x3B0043C VA: 0x3B0043C
	public string get_OfferId() { }

	// RVA: 0x3B00444 Offset: 0x3B00444 VA: 0x3B00444
	public void set_OfferId(string value) { }

	[GeneratedCode("protoc", null)]
	[DebuggerNonUserCode]
	// RVA: 0x3B004C0 Offset: 0x3B004C0 VA: 0x3B004C0 Slot: 0
	public override bool Equals(object other) { }

	[GeneratedCode("protoc", null)]
	[DebuggerNonUserCode]
	// RVA: 0x3B00524 Offset: 0x3B00524 VA: 0x3B00524 Slot: 9
	public bool Equals(AppchargePurchaseStatusResponse other) { }

	[GeneratedCode("protoc", null)]
	[DebuggerNonUserCode]
	// RVA: 0x3B005AC Offset: 0x3B005AC VA: 0x3B005AC Slot: 2
	public override int GetHashCode() { }

	[DebuggerNonUserCode]
	[GeneratedCode("protoc", null)]
	// RVA: 0x3B0064C Offset: 0x3B0064C VA: 0x3B0064C Slot: 3
	public override string ToString() { }

	[GeneratedCode("protoc", null)]
	[DebuggerNonUserCode]
	// RVA: 0x3B006A4 Offset: 0x3B006A4 VA: 0x3B006A4 Slot: 6
	public void WriteTo(CodedOutputStream output) { }

	[GeneratedCode("protoc", null)]
	[DebuggerNonUserCode]
	// RVA: 0x3B006C4 Offset: 0x3B006C4 VA: 0x3B006C4 Slot: 12
	private void pb::Google.Protobuf.IBufferMessage.InternalWriteTo(ref WriteContext output) { }

	[DebuggerNonUserCode]
	[GeneratedCode("protoc", null)]
	// RVA: 0x3B00790 Offset: 0x3B00790 VA: 0x3B00790 Slot: 7
	public int CalculateSize() { }

	[DebuggerNonUserCode]
	[GeneratedCode("protoc", null)]
	// RVA: 0x3B00894 Offset: 0x3B00894 VA: 0x3B00894 Slot: 4
	public void MergeFrom(AppchargePurchaseStatusResponse other) { }

	[DebuggerNonUserCode]
	[GeneratedCode("protoc", null)]
	// RVA: 0x3B00928 Offset: 0x3B00928 VA: 0x3B00928 Slot: 5
	public void MergeFrom(CodedInputStream input) { }

	[DebuggerNonUserCode]
	[GeneratedCode("protoc", null)]
	// RVA: 0x3B00948 Offset: 0x3B00948 VA: 0x3B00948 Slot: 11
	private void pb::Google.Protobuf.IBufferMessage.InternalMergeFrom(ref ParseContext input) { }

	// RVA: 0x3B00C08 Offset: 0x3B00C08 VA: 0x3B00C08
	private static void .cctor() { }
}

// Namespace: 
[CompilerGenerated]
[Serializable]