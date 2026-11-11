public sealed class VerifyPurchasesRequest : IMessage<VerifyPurchasesRequest>, IMessage, IEquatable<VerifyPurchasesRequest>, IDeepCloneable<VerifyPurchasesRequest>, IBufferMessage // TypeDefIndex: 124
{
	// Fields
	private static readonly MessageParser<VerifyPurchasesRequest> _parser; // 0x0
	private UnknownFieldSet _unknownFields; // 0x10
	public const int PurchasesFieldNumber = 1;
	private static readonly FieldCodec<VerifyPurchaseRequest> _repeated_purchases_codec; // 0x8
	private readonly RepeatedField<VerifyPurchaseRequest> purchases_; // 0x18

	// Properties
	[DebuggerNonUserCode]
	[GeneratedCode("protoc", null)]
	public static MessageParser<VerifyPurchasesRequest> Parser { get; }
	[DebuggerNonUserCode]
	[GeneratedCode("protoc", null)]
	public static MessageDescriptor Descriptor { get; }
	[DebuggerNonUserCode]
	[GeneratedCode("protoc", null)]
	private MessageDescriptor pb::Google.Protobuf.IMessage.Descriptor { get; }
	[GeneratedCode("protoc", null)]
	[DebuggerNonUserCode]
	public RepeatedField<VerifyPurchaseRequest> Purchases { get; }

	// Methods

	// RVA: 0x3AF8C4C Offset: 0x3AF8C4C VA: 0x3AF8C4C
	public static MessageParser<VerifyPurchasesRequest> get_Parser() { }

	// RVA: 0x3AF8CA4 Offset: 0x3AF8CA4 VA: 0x3AF8CA4
	public static MessageDescriptor get_Descriptor() { }

	// RVA: 0x3AF8DA8 Offset: 0x3AF8DA8 VA: 0x3AF8DA8 Slot: 8
	private MessageDescriptor pb::Google.Protobuf.IMessage.get_Descriptor() { }

	[GeneratedCode("protoc", null)]
	[DebuggerNonUserCode]
	// RVA: 0x3AF8DF4 Offset: 0x3AF8DF4 VA: 0x3AF8DF4
	public void .ctor() { }

	[DebuggerNonUserCode]
	[GeneratedCode("protoc", null)]
	// RVA: 0x3AF8E7C Offset: 0x3AF8E7C VA: 0x3AF8E7C
	public void .ctor(VerifyPurchasesRequest other) { }

	[GeneratedCode("protoc", null)]
	[DebuggerNonUserCode]
	// RVA: 0x3AF8F08 Offset: 0x3AF8F08 VA: 0x3AF8F08 Slot: 10
	public VerifyPurchasesRequest Clone() { }

	// RVA: 0x3AF8F68 Offset: 0x3AF8F68 VA: 0x3AF8F68
	public RepeatedField<VerifyPurchaseRequest> get_Purchases() { }

	[DebuggerNonUserCode]
	[GeneratedCode("protoc", null)]
	// RVA: 0x3AF8F70 Offset: 0x3AF8F70 VA: 0x3AF8F70 Slot: 0
	public override bool Equals(object other) { }

	[DebuggerNonUserCode]
	[GeneratedCode("protoc", null)]
	// RVA: 0x3AF8FD4 Offset: 0x3AF8FD4 VA: 0x3AF8FD4 Slot: 9
	public bool Equals(VerifyPurchasesRequest other) { }

	[DebuggerNonUserCode]
	[GeneratedCode("protoc", null)]
	// RVA: 0x3AF9064 Offset: 0x3AF9064 VA: 0x3AF9064 Slot: 2
	public override int GetHashCode() { }

	[DebuggerNonUserCode]
	[GeneratedCode("protoc", null)]
	// RVA: 0x3AF90B0 Offset: 0x3AF90B0 VA: 0x3AF90B0 Slot: 3
	public override string ToString() { }

	[DebuggerNonUserCode]
	[GeneratedCode("protoc", null)]
	// RVA: 0x3AF9108 Offset: 0x3AF9108 VA: 0x3AF9108 Slot: 6
	public void WriteTo(CodedOutputStream output) { }

	[DebuggerNonUserCode]
	[GeneratedCode("protoc", null)]
	// RVA: 0x3AF9128 Offset: 0x3AF9128 VA: 0x3AF9128 Slot: 12
	private void pb::Google.Protobuf.IBufferMessage.InternalWriteTo(ref WriteContext output) { }

	[DebuggerNonUserCode]
	[GeneratedCode("protoc", null)]
	// RVA: 0x3AF91E0 Offset: 0x3AF91E0 VA: 0x3AF91E0 Slot: 7
	public int CalculateSize() { }

	[DebuggerNonUserCode]
	[GeneratedCode("protoc", null)]
	// RVA: 0x3AF9288 Offset: 0x3AF9288 VA: 0x3AF9288 Slot: 4
	public void MergeFrom(VerifyPurchasesRequest other) { }

	[GeneratedCode("protoc", null)]
	[DebuggerNonUserCode]
	// RVA: 0x3AF9310 Offset: 0x3AF9310 VA: 0x3AF9310 Slot: 5
	public void MergeFrom(CodedInputStream input) { }

	[GeneratedCode("protoc", null)]
	[DebuggerNonUserCode]
	// RVA: 0x3AF9330 Offset: 0x3AF9330 VA: 0x3AF9330 Slot: 11
	private void pb::Google.Protobuf.IBufferMessage.InternalMergeFrom(ref ParseContext input) { }

	// RVA: 0x3AF946C Offset: 0x3AF946C VA: 0x3AF946C
	private static void .cctor() { }
}

// Namespace: 
[CompilerGenerated]
[Serializable]