public sealed class VerifyPurchaseRequest : IMessage<VerifyPurchaseRequest>, IMessage, IEquatable<VerifyPurchaseRequest>, IDeepCloneable<VerifyPurchaseRequest>, IBufferMessage // TypeDefIndex: 120
{
	// Fields
	private static readonly MessageParser<VerifyPurchaseRequest> _parser; // 0x0
	private UnknownFieldSet _unknownFields; // 0x10
	public const int PlatformFieldNumber = 1;
	private string platform_; // 0x18
	public const int UserIdFieldNumber = 2;
	private string userId_; // 0x20
	public const int ProductIdFieldNumber = 3;
	private string productId_; // 0x28
	public const int PurchaseTokenFieldNumber = 4;
	private string purchaseToken_; // 0x30
	public const int AdjustIdFieldNumber = 5;
	private string adjustId_; // 0x38

	// Properties
	[GeneratedCode("protoc", null)]
	[DebuggerNonUserCode]
	public static MessageParser<VerifyPurchaseRequest> Parser { get; }
	[DebuggerNonUserCode]
	[GeneratedCode("protoc", null)]
	public static MessageDescriptor Descriptor { get; }
	[DebuggerNonUserCode]
	[GeneratedCode("protoc", null)]
	private MessageDescriptor pb::Google.Protobuf.IMessage.Descriptor { get; }
	[DebuggerNonUserCode]
	[GeneratedCode("protoc", null)]
	public string Platform { get; set; }
	[DebuggerNonUserCode]
	[GeneratedCode("protoc", null)]
	public string UserId { get; set; }
	[DebuggerNonUserCode]
	[GeneratedCode("protoc", null)]
	public string ProductId { get; set; }
	[GeneratedCode("protoc", null)]
	[DebuggerNonUserCode]
	public string PurchaseToken { get; set; }
	[GeneratedCode("protoc", null)]
	[DebuggerNonUserCode]
	public string AdjustId { get; set; }

	// Methods

	// RVA: 0x3AF72A4 Offset: 0x3AF72A4 VA: 0x3AF72A4
	public static MessageParser<VerifyPurchaseRequest> get_Parser() { }

	// RVA: 0x3AF72FC Offset: 0x3AF72FC VA: 0x3AF72FC
	public static MessageDescriptor get_Descriptor() { }

	// RVA: 0x3AF7400 Offset: 0x3AF7400 VA: 0x3AF7400 Slot: 8
	private MessageDescriptor pb::Google.Protobuf.IMessage.get_Descriptor() { }

	[GeneratedCode("protoc", null)]
	[DebuggerNonUserCode]
	// RVA: 0x3AF744C Offset: 0x3AF744C VA: 0x3AF744C
	public void .ctor() { }

	[DebuggerNonUserCode]
	[GeneratedCode("protoc", null)]
	// RVA: 0x3AF74E4 Offset: 0x3AF74E4 VA: 0x3AF74E4
	public void .ctor(VerifyPurchaseRequest other) { }

	[DebuggerNonUserCode]
	[GeneratedCode("protoc", null)]
	// RVA: 0x3AF7574 Offset: 0x3AF7574 VA: 0x3AF7574 Slot: 10
	public VerifyPurchaseRequest Clone() { }

	// RVA: 0x3AF75D4 Offset: 0x3AF75D4 VA: 0x3AF75D4
	public string get_Platform() { }

	// RVA: 0x3AF75DC Offset: 0x3AF75DC VA: 0x3AF75DC
	public void set_Platform(string value) { }

	// RVA: 0x3AF7658 Offset: 0x3AF7658 VA: 0x3AF7658
	public string get_UserId() { }

	// RVA: 0x3AF7660 Offset: 0x3AF7660 VA: 0x3AF7660
	public void set_UserId(string value) { }

	// RVA: 0x3AF76DC Offset: 0x3AF76DC VA: 0x3AF76DC
	public string get_ProductId() { }

	// RVA: 0x3AF76E4 Offset: 0x3AF76E4 VA: 0x3AF76E4
	public void set_ProductId(string value) { }

	// RVA: 0x3AF7760 Offset: 0x3AF7760 VA: 0x3AF7760
	public string get_PurchaseToken() { }

	// RVA: 0x3AF7768 Offset: 0x3AF7768 VA: 0x3AF7768
	public void set_PurchaseToken(string value) { }

	// RVA: 0x3AF77E4 Offset: 0x3AF77E4 VA: 0x3AF77E4
	public string get_AdjustId() { }

	// RVA: 0x3AF77EC Offset: 0x3AF77EC VA: 0x3AF77EC
	public void set_AdjustId(string value) { }

	[DebuggerNonUserCode]
	[GeneratedCode("protoc", null)]
	// RVA: 0x3AF7868 Offset: 0x3AF7868 VA: 0x3AF7868 Slot: 0
	public override bool Equals(object other) { }

	[DebuggerNonUserCode]
	[GeneratedCode("protoc", null)]
	// RVA: 0x3AF78CC Offset: 0x3AF78CC VA: 0x3AF78CC Slot: 9
	public bool Equals(VerifyPurchaseRequest other) { }

	[DebuggerNonUserCode]
	[GeneratedCode("protoc", null)]
	// RVA: 0x3AF797C Offset: 0x3AF797C VA: 0x3AF797C Slot: 2
	public override int GetHashCode() { }

	[DebuggerNonUserCode]
	[GeneratedCode("protoc", null)]
	// RVA: 0x3AF7A5C Offset: 0x3AF7A5C VA: 0x3AF7A5C Slot: 3
	public override string ToString() { }

	[DebuggerNonUserCode]
	[GeneratedCode("protoc", null)]
	// RVA: 0x3AF7AB4 Offset: 0x3AF7AB4 VA: 0x3AF7AB4 Slot: 6
	public void WriteTo(CodedOutputStream output) { }

	[DebuggerNonUserCode]
	[GeneratedCode("protoc", null)]
	// RVA: 0x3AF7AD4 Offset: 0x3AF7AD4 VA: 0x3AF7AD4 Slot: 12
	private void pb::Google.Protobuf.IBufferMessage.InternalWriteTo(ref WriteContext output) { }

	[GeneratedCode("protoc", null)]
	[DebuggerNonUserCode]
	// RVA: 0x3AF7C00 Offset: 0x3AF7C00 VA: 0x3AF7C00 Slot: 7
	public int CalculateSize() { }

	[GeneratedCode("protoc", null)]
	[DebuggerNonUserCode]
	// RVA: 0x3AF7D6C Offset: 0x3AF7D6C VA: 0x3AF7D6C Slot: 4
	public void MergeFrom(VerifyPurchaseRequest other) { }

	[DebuggerNonUserCode]
	[GeneratedCode("protoc", null)]
	// RVA: 0x3AF7E30 Offset: 0x3AF7E30 VA: 0x3AF7E30 Slot: 5
	public void MergeFrom(CodedInputStream input) { }

	[GeneratedCode("protoc", null)]
	[DebuggerNonUserCode]
	// RVA: 0x3AF7E50 Offset: 0x3AF7E50 VA: 0x3AF7E50 Slot: 11
	private void pb::Google.Protobuf.IBufferMessage.InternalMergeFrom(ref ParseContext input) { }

	// RVA: 0x3AF8268 Offset: 0x3AF8268 VA: 0x3AF8268
	private static void .cctor() { }
}

// Namespace: 
[CompilerGenerated]
[Serializable]