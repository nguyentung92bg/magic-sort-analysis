public sealed class AppchargePurchaseStatusRequest : IMessage<AppchargePurchaseStatusRequest>, IMessage, IEquatable<AppchargePurchaseStatusRequest>, IDeepCloneable<AppchargePurchaseStatusRequest>, IBufferMessage // TypeDefIndex: 135
{
	// Fields
	private static readonly MessageParser<AppchargePurchaseStatusRequest> _parser; // 0x0
	private UnknownFieldSet _unknownFields; // 0x10
	public const int PurchaseIdFieldNumber = 1;
	private string purchaseId_; // 0x18

	// Properties
	[DebuggerNonUserCode]
	[GeneratedCode("protoc", null)]
	public static MessageParser<AppchargePurchaseStatusRequest> Parser { get; }
	[DebuggerNonUserCode]
	[GeneratedCode("protoc", null)]
	public static MessageDescriptor Descriptor { get; }
	[DebuggerNonUserCode]
	[GeneratedCode("protoc", null)]
	private MessageDescriptor pb::Google.Protobuf.IMessage.Descriptor { get; }
	[GeneratedCode("protoc", null)]
	[DebuggerNonUserCode]
	public string PurchaseId { get; set; }

	// Methods

	// RVA: 0x3AFF69C Offset: 0x3AFF69C VA: 0x3AFF69C
	public static MessageParser<AppchargePurchaseStatusRequest> get_Parser() { }

	// RVA: 0x3AFF6F4 Offset: 0x3AFF6F4 VA: 0x3AFF6F4
	public static MessageDescriptor get_Descriptor() { }

	// RVA: 0x3AFF7F8 Offset: 0x3AFF7F8 VA: 0x3AFF7F8 Slot: 8
	private MessageDescriptor pb::Google.Protobuf.IMessage.get_Descriptor() { }

	[DebuggerNonUserCode]
	[GeneratedCode("protoc", null)]
	// RVA: 0x3AFF844 Offset: 0x3AFF844 VA: 0x3AFF844
	public void .ctor() { }

	[DebuggerNonUserCode]
	[GeneratedCode("protoc", null)]
	// RVA: 0x3AFF89C Offset: 0x3AFF89C VA: 0x3AFF89C
	public void .ctor(AppchargePurchaseStatusRequest other) { }

	[DebuggerNonUserCode]
	[GeneratedCode("protoc", null)]
	// RVA: 0x3AFF8EC Offset: 0x3AFF8EC VA: 0x3AFF8EC Slot: 10
	public AppchargePurchaseStatusRequest Clone() { }

	// RVA: 0x3AFF94C Offset: 0x3AFF94C VA: 0x3AFF94C
	public string get_PurchaseId() { }

	// RVA: 0x3AFF954 Offset: 0x3AFF954 VA: 0x3AFF954
	public void set_PurchaseId(string value) { }

	[DebuggerNonUserCode]
	[GeneratedCode("protoc", null)]
	// RVA: 0x3AFF9D0 Offset: 0x3AFF9D0 VA: 0x3AFF9D0 Slot: 0
	public override bool Equals(object other) { }

	[DebuggerNonUserCode]
	[GeneratedCode("protoc", null)]
	// RVA: 0x3AFFA34 Offset: 0x3AFFA34 VA: 0x3AFFA34 Slot: 9
	public bool Equals(AppchargePurchaseStatusRequest other) { }

	[GeneratedCode("protoc", null)]
	[DebuggerNonUserCode]
	// RVA: 0x3AFFA94 Offset: 0x3AFFA94 VA: 0x3AFFA94 Slot: 2
	public override int GetHashCode() { }

	[GeneratedCode("protoc", null)]
	[DebuggerNonUserCode]
	// RVA: 0x3AFFAF4 Offset: 0x3AFFAF4 VA: 0x3AFFAF4 Slot: 3
	public override string ToString() { }

	[GeneratedCode("protoc", null)]
	[DebuggerNonUserCode]
	// RVA: 0x3AFFB4C Offset: 0x3AFFB4C VA: 0x3AFFB4C Slot: 6
	public void WriteTo(CodedOutputStream output) { }

	[GeneratedCode("protoc", null)]
	[DebuggerNonUserCode]
	// RVA: 0x3AFFB6C Offset: 0x3AFFB6C VA: 0x3AFFB6C Slot: 12
	private void pb::Google.Protobuf.IBufferMessage.InternalWriteTo(ref WriteContext output) { }

	[GeneratedCode("protoc", null)]
	[DebuggerNonUserCode]
	// RVA: 0x3AFFBD8 Offset: 0x3AFFBD8 VA: 0x3AFFBD8 Slot: 7
	public int CalculateSize() { }

	[GeneratedCode("protoc", null)]
	[DebuggerNonUserCode]
	// RVA: 0x3AFFC6C Offset: 0x3AFFC6C VA: 0x3AFFC6C Slot: 4
	public void MergeFrom(AppchargePurchaseStatusRequest other) { }

	[GeneratedCode("protoc", null)]
	[DebuggerNonUserCode]
	// RVA: 0x3AFFCD0 Offset: 0x3AFFCD0 VA: 0x3AFFCD0 Slot: 5
	public void MergeFrom(CodedInputStream input) { }

	[DebuggerNonUserCode]
	[GeneratedCode("protoc", null)]
	// RVA: 0x3AFFCF0 Offset: 0x3AFFCF0 VA: 0x3AFFCF0 Slot: 11
	private void pb::Google.Protobuf.IBufferMessage.InternalMergeFrom(ref ParseContext input) { }

	// RVA: 0x3AFFE60 Offset: 0x3AFFE60 VA: 0x3AFFE60
	private static void .cctor() { }
}

// Namespace: 
[CompilerGenerated]
[Serializable]