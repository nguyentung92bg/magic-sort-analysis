public sealed class VerifyPurchaseResponse : IMessage<VerifyPurchaseResponse>, IMessage, IEquatable<VerifyPurchaseResponse>, IDeepCloneable<VerifyPurchaseResponse>, IBufferMessage // TypeDefIndex: 122
{
	// Fields
	private static readonly MessageParser<VerifyPurchaseResponse> _parser; // 0x0
	private UnknownFieldSet _unknownFields; // 0x10
	public const int IsValidFieldNumber = 1;
	private bool isValid_; // 0x18

	// Properties
	[GeneratedCode("protoc", null)]
	[DebuggerNonUserCode]
	public static MessageParser<VerifyPurchaseResponse> Parser { get; }
	[GeneratedCode("protoc", null)]
	[DebuggerNonUserCode]
	public static MessageDescriptor Descriptor { get; }
	[GeneratedCode("protoc", null)]
	[DebuggerNonUserCode]
	private MessageDescriptor pb::Google.Protobuf.IMessage.Descriptor { get; }
	[DebuggerNonUserCode]
	[GeneratedCode("protoc", null)]
	public bool IsValid { get; set; }

	// Methods

	// RVA: 0x3AF844C Offset: 0x3AF844C VA: 0x3AF844C
	public static MessageParser<VerifyPurchaseResponse> get_Parser() { }

	// RVA: 0x3AF84A4 Offset: 0x3AF84A4 VA: 0x3AF84A4
	public static MessageDescriptor get_Descriptor() { }

	// RVA: 0x3AF85A8 Offset: 0x3AF85A8 VA: 0x3AF85A8 Slot: 8
	private MessageDescriptor pb::Google.Protobuf.IMessage.get_Descriptor() { }

	[GeneratedCode("protoc", null)]
	[DebuggerNonUserCode]
	// RVA: 0x3AF85F4 Offset: 0x3AF85F4 VA: 0x3AF85F4
	public void .ctor() { }

	[DebuggerNonUserCode]
	[GeneratedCode("protoc", null)]
	// RVA: 0x3AF85FC Offset: 0x3AF85FC VA: 0x3AF85FC
	public void .ctor(VerifyPurchaseResponse other) { }

	[DebuggerNonUserCode]
	[GeneratedCode("protoc", null)]
	// RVA: 0x3AF8648 Offset: 0x3AF8648 VA: 0x3AF8648 Slot: 10
	public VerifyPurchaseResponse Clone() { }

	// RVA: 0x3AF86A8 Offset: 0x3AF86A8 VA: 0x3AF86A8
	public bool get_IsValid() { }

	// RVA: 0x3AF86B0 Offset: 0x3AF86B0 VA: 0x3AF86B0
	public void set_IsValid(bool value) { }

	[GeneratedCode("protoc", null)]
	[DebuggerNonUserCode]
	// RVA: 0x3AF86BC Offset: 0x3AF86BC VA: 0x3AF86BC Slot: 0
	public override bool Equals(object other) { }

	[GeneratedCode("protoc", null)]
	[DebuggerNonUserCode]
	// RVA: 0x3AF8720 Offset: 0x3AF8720 VA: 0x3AF8720 Slot: 9
	public bool Equals(VerifyPurchaseResponse other) { }

	[GeneratedCode("protoc", null)]
	[DebuggerNonUserCode]
	// RVA: 0x3AF876C Offset: 0x3AF876C VA: 0x3AF876C Slot: 2
	public override int GetHashCode() { }

	[GeneratedCode("protoc", null)]
	[DebuggerNonUserCode]
	// RVA: 0x3AF87FC Offset: 0x3AF87FC VA: 0x3AF87FC Slot: 3
	public override string ToString() { }

	[GeneratedCode("protoc", null)]
	[DebuggerNonUserCode]
	// RVA: 0x3AF8854 Offset: 0x3AF8854 VA: 0x3AF8854 Slot: 6
	public void WriteTo(CodedOutputStream output) { }

	[DebuggerNonUserCode]
	[GeneratedCode("protoc", null)]
	// RVA: 0x3AF8874 Offset: 0x3AF8874 VA: 0x3AF8874 Slot: 12
	private void pb::Google.Protobuf.IBufferMessage.InternalWriteTo(ref WriteContext output) { }

	[DebuggerNonUserCode]
	[GeneratedCode("protoc", null)]
	// RVA: 0x3AF88D4 Offset: 0x3AF88D4 VA: 0x3AF88D4 Slot: 7
	public int CalculateSize() { }

	[GeneratedCode("protoc", null)]
	[DebuggerNonUserCode]
	// RVA: 0x3AF8900 Offset: 0x3AF8900 VA: 0x3AF8900 Slot: 4
	public void MergeFrom(VerifyPurchaseResponse other) { }

	[GeneratedCode("protoc", null)]
	[DebuggerNonUserCode]
	// RVA: 0x3AF8940 Offset: 0x3AF8940 VA: 0x3AF8940 Slot: 5
	public void MergeFrom(CodedInputStream input) { }

	[GeneratedCode("protoc", null)]
	[DebuggerNonUserCode]
	// RVA: 0x3AF8960 Offset: 0x3AF8960 VA: 0x3AF8960 Slot: 11
	private void pb::Google.Protobuf.IBufferMessage.InternalMergeFrom(ref ParseContext input) { }

	// RVA: 0x3AF8A64 Offset: 0x3AF8A64 VA: 0x3AF8A64
	private static void .cctor() { }
}

// Namespace: 
[CompilerGenerated]
[Serializable]