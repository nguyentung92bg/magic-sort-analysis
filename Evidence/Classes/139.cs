public sealed class ClaimAppchargePurchaseRequest : IMessage<ClaimAppchargePurchaseRequest>, IMessage, IEquatable<ClaimAppchargePurchaseRequest>, IDeepCloneable<ClaimAppchargePurchaseRequest>, IBufferMessage // TypeDefIndex: 139
{
	// Fields
	private static readonly MessageParser<ClaimAppchargePurchaseRequest> _parser; // 0x0
	private UnknownFieldSet _unknownFields; // 0x10
	public const int PurchaseIdFieldNumber = 1;
	private string purchaseId_; // 0x18

	// Properties
	[GeneratedCode("protoc", null)]
	[DebuggerNonUserCode]
	public static MessageParser<ClaimAppchargePurchaseRequest> Parser { get; }
	[GeneratedCode("protoc", null)]
	[DebuggerNonUserCode]
	public static MessageDescriptor Descriptor { get; }
	[GeneratedCode("protoc", null)]
	[DebuggerNonUserCode]
	private MessageDescriptor pb::Google.Protobuf.IMessage.Descriptor { get; }
	[GeneratedCode("protoc", null)]
	[DebuggerNonUserCode]
	public string PurchaseId { get; set; }

	// Methods

	// RVA: 0x3853B78 Offset: 0x3853B78 VA: 0x3853B78
	public static MessageParser<ClaimAppchargePurchaseRequest> get_Parser() { }

	// RVA: 0x3853BD0 Offset: 0x3853BD0 VA: 0x3853BD0
	public static MessageDescriptor get_Descriptor() { }

	// RVA: 0x3853CD4 Offset: 0x3853CD4 VA: 0x3853CD4 Slot: 8
	private MessageDescriptor pb::Google.Protobuf.IMessage.get_Descriptor() { }

	[GeneratedCode("protoc", null)]
	[DebuggerNonUserCode]
	// RVA: 0x3853D20 Offset: 0x3853D20 VA: 0x3853D20
	public void .ctor() { }

	[DebuggerNonUserCode]
	[GeneratedCode("protoc", null)]
	// RVA: 0x3853D78 Offset: 0x3853D78 VA: 0x3853D78
	public void .ctor(ClaimAppchargePurchaseRequest other) { }

	[DebuggerNonUserCode]
	[GeneratedCode("protoc", null)]
	// RVA: 0x3853DC8 Offset: 0x3853DC8 VA: 0x3853DC8 Slot: 10
	public ClaimAppchargePurchaseRequest Clone() { }

	// RVA: 0x3853E28 Offset: 0x3853E28 VA: 0x3853E28
	public string get_PurchaseId() { }

	// RVA: 0x3853E30 Offset: 0x3853E30 VA: 0x3853E30
	public void set_PurchaseId(string value) { }

	[DebuggerNonUserCode]
	[GeneratedCode("protoc", null)]
	// RVA: 0x3853EAC Offset: 0x3853EAC VA: 0x3853EAC Slot: 0
	public override bool Equals(object other) { }

	[DebuggerNonUserCode]
	[GeneratedCode("protoc", null)]
	// RVA: 0x3853F10 Offset: 0x3853F10 VA: 0x3853F10 Slot: 9
	public bool Equals(ClaimAppchargePurchaseRequest other) { }

	[DebuggerNonUserCode]
	[GeneratedCode("protoc", null)]
	// RVA: 0x3853F70 Offset: 0x3853F70 VA: 0x3853F70 Slot: 2
	public override int GetHashCode() { }

	[DebuggerNonUserCode]
	[GeneratedCode("protoc", null)]
	// RVA: 0x3853FD0 Offset: 0x3853FD0 VA: 0x3853FD0 Slot: 3
	public override string ToString() { }

	[DebuggerNonUserCode]
	[GeneratedCode("protoc", null)]
	// RVA: 0x3854028 Offset: 0x3854028 VA: 0x3854028 Slot: 6
	public void WriteTo(CodedOutputStream output) { }

	[GeneratedCode("protoc", null)]
	[DebuggerNonUserCode]
	// RVA: 0x3854048 Offset: 0x3854048 VA: 0x3854048 Slot: 12
	private void pb::Google.Protobuf.IBufferMessage.InternalWriteTo(ref WriteContext output) { }

	[DebuggerNonUserCode]
	[GeneratedCode("protoc", null)]
	// RVA: 0x38540B4 Offset: 0x38540B4 VA: 0x38540B4 Slot: 7
	public int CalculateSize() { }

	[DebuggerNonUserCode]
	[GeneratedCode("protoc", null)]
	// RVA: 0x3854148 Offset: 0x3854148 VA: 0x3854148 Slot: 4
	public void MergeFrom(ClaimAppchargePurchaseRequest other) { }

	[DebuggerNonUserCode]
	[GeneratedCode("protoc", null)]
	// RVA: 0x38541AC Offset: 0x38541AC VA: 0x38541AC Slot: 5
	public void MergeFrom(CodedInputStream input) { }

	[DebuggerNonUserCode]
	[GeneratedCode("protoc", null)]
	// RVA: 0x38541CC Offset: 0x38541CC VA: 0x38541CC Slot: 11
	private void pb::Google.Protobuf.IBufferMessage.InternalMergeFrom(ref ParseContext input) { }

	// RVA: 0x385433C Offset: 0x385433C VA: 0x385433C
	private static void .cctor() { }
}

// Namespace: 
[CompilerGenerated]
[Serializable]