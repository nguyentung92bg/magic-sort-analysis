public sealed class VerifyPurchaseResult : IMessage<VerifyPurchaseResult>, IMessage, IEquatable<VerifyPurchaseResult>, IDeepCloneable<VerifyPurchaseResult>, IBufferMessage // TypeDefIndex: 126
{
	// Fields
	private static readonly MessageParser<VerifyPurchaseResult> _parser; // 0x0
	private UnknownFieldSet _unknownFields; // 0x10
	public const int IndexFieldNumber = 1;
	private int index_; // 0x18
	public const int PlatformFieldNumber = 2;
	private string platform_; // 0x20
	public const int UserIdFieldNumber = 3;
	private string userId_; // 0x28
	public const int ProductIdFieldNumber = 4;
	private string productId_; // 0x30
	public const int IsValidFieldNumber = 5;
	private bool isValid_; // 0x38
	public const int ErrorFieldNumber = 6;
	private string error_; // 0x40
	public const int VerificationStatusFieldNumber = 7;
	private VerificationStatus verificationStatus_; // 0x48

	// Properties
	[DebuggerNonUserCode]
	[GeneratedCode("protoc", null)]
	public static MessageParser<VerifyPurchaseResult> Parser { get; }
	[DebuggerNonUserCode]
	[GeneratedCode("protoc", null)]
	public static MessageDescriptor Descriptor { get; }
	[GeneratedCode("protoc", null)]
	[DebuggerNonUserCode]
	private MessageDescriptor pb::Google.Protobuf.IMessage.Descriptor { get; }
	[DebuggerNonUserCode]
	[GeneratedCode("protoc", null)]
	public int Index { get; set; }
	[DebuggerNonUserCode]
	[GeneratedCode("protoc", null)]
	public string Platform { get; set; }
	[DebuggerNonUserCode]
	[GeneratedCode("protoc", null)]
	public string UserId { get; set; }
	[DebuggerNonUserCode]
	[GeneratedCode("protoc", null)]
	public string ProductId { get; set; }
	[DebuggerNonUserCode]
	[GeneratedCode("protoc", null)]
	public bool IsValid { get; set; }
	[GeneratedCode("protoc", null)]
	[DebuggerNonUserCode]
	public string Error { get; set; }
	[DebuggerNonUserCode]
	[GeneratedCode("protoc", null)]
	public VerificationStatus VerificationStatus { get; set; }

	// Methods

	// RVA: 0x3AF96F0 Offset: 0x3AF96F0 VA: 0x3AF96F0
	public static MessageParser<VerifyPurchaseResult> get_Parser() { }

	// RVA: 0x3AF9748 Offset: 0x3AF9748 VA: 0x3AF9748
	public static MessageDescriptor get_Descriptor() { }

	// RVA: 0x3AF984C Offset: 0x3AF984C VA: 0x3AF984C Slot: 8
	private MessageDescriptor pb::Google.Protobuf.IMessage.get_Descriptor() { }

	[DebuggerNonUserCode]
	[GeneratedCode("protoc", null)]
	// RVA: 0x3AF9898 Offset: 0x3AF9898 VA: 0x3AF9898
	public void .ctor() { }

	[GeneratedCode("protoc", null)]
	[DebuggerNonUserCode]
	// RVA: 0x3AF9920 Offset: 0x3AF9920 VA: 0x3AF9920
	public void .ctor(VerifyPurchaseResult other) { }

	[DebuggerNonUserCode]
	[GeneratedCode("protoc", null)]
	// RVA: 0x3AF99B8 Offset: 0x3AF99B8 VA: 0x3AF99B8 Slot: 10
	public VerifyPurchaseResult Clone() { }

	// RVA: 0x3AF9A18 Offset: 0x3AF9A18 VA: 0x3AF9A18
	public int get_Index() { }

	// RVA: 0x3AF9A20 Offset: 0x3AF9A20 VA: 0x3AF9A20
	public void set_Index(int value) { }

	// RVA: 0x3AF9A28 Offset: 0x3AF9A28 VA: 0x3AF9A28
	public string get_Platform() { }

	// RVA: 0x3AF9A30 Offset: 0x3AF9A30 VA: 0x3AF9A30
	public void set_Platform(string value) { }

	// RVA: 0x3AF9AAC Offset: 0x3AF9AAC VA: 0x3AF9AAC
	public string get_UserId() { }

	// RVA: 0x3AF9AB4 Offset: 0x3AF9AB4 VA: 0x3AF9AB4
	public void set_UserId(string value) { }

	// RVA: 0x3AF9B30 Offset: 0x3AF9B30 VA: 0x3AF9B30
	public string get_ProductId() { }

	// RVA: 0x3AF9B38 Offset: 0x3AF9B38 VA: 0x3AF9B38
	public void set_ProductId(string value) { }

	// RVA: 0x3AF9BB4 Offset: 0x3AF9BB4 VA: 0x3AF9BB4
	public bool get_IsValid() { }

	// RVA: 0x3AF9BBC Offset: 0x3AF9BBC VA: 0x3AF9BBC
	public void set_IsValid(bool value) { }

	// RVA: 0x3AF9BC8 Offset: 0x3AF9BC8 VA: 0x3AF9BC8
	public string get_Error() { }

	// RVA: 0x3AF9BD0 Offset: 0x3AF9BD0 VA: 0x3AF9BD0
	public void set_Error(string value) { }

	// RVA: 0x3AF9C4C Offset: 0x3AF9C4C VA: 0x3AF9C4C
	public VerificationStatus get_VerificationStatus() { }

	// RVA: 0x3AF9C54 Offset: 0x3AF9C54 VA: 0x3AF9C54
	public void set_VerificationStatus(VerificationStatus value) { }

	[DebuggerNonUserCode]
	[GeneratedCode("protoc", null)]
	// RVA: 0x3AF9C5C Offset: 0x3AF9C5C VA: 0x3AF9C5C Slot: 0
	public override bool Equals(object other) { }

	[DebuggerNonUserCode]
	[GeneratedCode("protoc", null)]
	// RVA: 0x3AF9CC0 Offset: 0x3AF9CC0 VA: 0x3AF9CC0 Slot: 9
	public bool Equals(VerifyPurchaseResult other) { }

	[DebuggerNonUserCode]
	[GeneratedCode("protoc", null)]
	// RVA: 0x3AF9D9C Offset: 0x3AF9D9C VA: 0x3AF9D9C Slot: 2
	public override int GetHashCode() { }

	[GeneratedCode("protoc", null)]
	[DebuggerNonUserCode]
	// RVA: 0x3AF9F00 Offset: 0x3AF9F00 VA: 0x3AF9F00 Slot: 3
	public override string ToString() { }

	[DebuggerNonUserCode]
	[GeneratedCode("protoc", null)]
	// RVA: 0x3AF9F58 Offset: 0x3AF9F58 VA: 0x3AF9F58 Slot: 6
	public void WriteTo(CodedOutputStream output) { }

	[DebuggerNonUserCode]
	[GeneratedCode("protoc", null)]
	// RVA: 0x3AF9F78 Offset: 0x3AF9F78 VA: 0x3AF9F78 Slot: 12
	private void pb::Google.Protobuf.IBufferMessage.InternalWriteTo(ref WriteContext output) { }

	[DebuggerNonUserCode]
	[GeneratedCode("protoc", null)]
	// RVA: 0x3AFA0EC Offset: 0x3AFA0EC VA: 0x3AFA0EC Slot: 7
	public int CalculateSize() { }

	[DebuggerNonUserCode]
	[GeneratedCode("protoc", null)]
	// RVA: 0x3AFA28C Offset: 0x3AFA28C VA: 0x3AFA28C Slot: 4
	public void MergeFrom(VerifyPurchaseResult other) { }

	[DebuggerNonUserCode]
	[GeneratedCode("protoc", null)]
	// RVA: 0x3AFA35C Offset: 0x3AFA35C VA: 0x3AFA35C Slot: 5
	public void MergeFrom(CodedInputStream input) { }

	[DebuggerNonUserCode]
	[GeneratedCode("protoc", null)]
	// RVA: 0x3AFA37C Offset: 0x3AFA37C VA: 0x3AFA37C Slot: 11
	private void pb::Google.Protobuf.IBufferMessage.InternalMergeFrom(ref ParseContext input) { }

	// RVA: 0x3AFA7DC Offset: 0x3AFA7DC VA: 0x3AFA7DC
	private static void .cctor() { }
}

// Namespace: 
[CompilerGenerated]
[Serializable]