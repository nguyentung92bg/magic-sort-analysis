public sealed class ClaimAppchargePurchasesRequest : IMessage<ClaimAppchargePurchasesRequest>, IMessage, IEquatable<ClaimAppchargePurchasesRequest>, IDeepCloneable<ClaimAppchargePurchasesRequest>, IBufferMessage // TypeDefIndex: 143
{
	// Fields
	private static readonly MessageParser<ClaimAppchargePurchasesRequest> _parser; // 0x0
	private UnknownFieldSet _unknownFields; // 0x10
	public const int PurchaseIdsFieldNumber = 1;
	private static readonly FieldCodec<string> _repeated_purchaseIds_codec; // 0x8
	private readonly RepeatedField<string> purchaseIds_; // 0x18

	// Properties
	[DebuggerNonUserCode]
	[GeneratedCode("protoc", null)]
	public static MessageParser<ClaimAppchargePurchasesRequest> Parser { get; }
	[GeneratedCode("protoc", null)]
	[DebuggerNonUserCode]
	public static MessageDescriptor Descriptor { get; }
	[DebuggerNonUserCode]
	[GeneratedCode("protoc", null)]
	private MessageDescriptor pb::Google.Protobuf.IMessage.Descriptor { get; }
	[DebuggerNonUserCode]
	[GeneratedCode("protoc", null)]
	public RepeatedField<string> PurchaseIds { get; }

	// Methods

	// RVA: 0x3855518 Offset: 0x3855518 VA: 0x3855518
	public static MessageParser<ClaimAppchargePurchasesRequest> get_Parser() { }

	// RVA: 0x3855570 Offset: 0x3855570 VA: 0x3855570
	public static MessageDescriptor get_Descriptor() { }

	// RVA: 0x3855674 Offset: 0x3855674 VA: 0x3855674 Slot: 8
	private MessageDescriptor pb::Google.Protobuf.IMessage.get_Descriptor() { }

	[DebuggerNonUserCode]
	[GeneratedCode("protoc", null)]
	// RVA: 0x38556C0 Offset: 0x38556C0 VA: 0x38556C0
	public void .ctor() { }

	[DebuggerNonUserCode]
	[GeneratedCode("protoc", null)]
	// RVA: 0x3855748 Offset: 0x3855748 VA: 0x3855748
	public void .ctor(ClaimAppchargePurchasesRequest other) { }

	[DebuggerNonUserCode]
	[GeneratedCode("protoc", null)]
	// RVA: 0x38557D4 Offset: 0x38557D4 VA: 0x38557D4 Slot: 10
	public ClaimAppchargePurchasesRequest Clone() { }

	// RVA: 0x3855834 Offset: 0x3855834 VA: 0x3855834
	public RepeatedField<string> get_PurchaseIds() { }

	[DebuggerNonUserCode]
	[GeneratedCode("protoc", null)]
	// RVA: 0x385583C Offset: 0x385583C VA: 0x385583C Slot: 0
	public override bool Equals(object other) { }

	[DebuggerNonUserCode]
	[GeneratedCode("protoc", null)]
	// RVA: 0x38558A0 Offset: 0x38558A0 VA: 0x38558A0 Slot: 9
	public bool Equals(ClaimAppchargePurchasesRequest other) { }

	[DebuggerNonUserCode]
	[GeneratedCode("protoc", null)]
	// RVA: 0x3855930 Offset: 0x3855930 VA: 0x3855930 Slot: 2
	public override int GetHashCode() { }

	[DebuggerNonUserCode]
	[GeneratedCode("protoc", null)]
	// RVA: 0x385597C Offset: 0x385597C VA: 0x385597C Slot: 3
	public override string ToString() { }

	[GeneratedCode("protoc", null)]
	[DebuggerNonUserCode]
	// RVA: 0x38559D4 Offset: 0x38559D4 VA: 0x38559D4 Slot: 6
	public void WriteTo(CodedOutputStream output) { }

	[DebuggerNonUserCode]
	[GeneratedCode("protoc", null)]
	// RVA: 0x38559F4 Offset: 0x38559F4 VA: 0x38559F4 Slot: 12
	private void pb::Google.Protobuf.IBufferMessage.InternalWriteTo(ref WriteContext output) { }

	[DebuggerNonUserCode]
	[GeneratedCode("protoc", null)]
	// RVA: 0x3855AAC Offset: 0x3855AAC VA: 0x3855AAC Slot: 7
	public int CalculateSize() { }

	[DebuggerNonUserCode]
	[GeneratedCode("protoc", null)]
	// RVA: 0x3855B54 Offset: 0x3855B54 VA: 0x3855B54 Slot: 4
	public void MergeFrom(ClaimAppchargePurchasesRequest other) { }

	[DebuggerNonUserCode]
	[GeneratedCode("protoc", null)]
	// RVA: 0x3855BDC Offset: 0x3855BDC VA: 0x3855BDC Slot: 5
	public void MergeFrom(CodedInputStream input) { }

	[DebuggerNonUserCode]
	[GeneratedCode("protoc", null)]
	// RVA: 0x3855BFC Offset: 0x3855BFC VA: 0x3855BFC Slot: 11
	private void pb::Google.Protobuf.IBufferMessage.InternalMergeFrom(ref ParseContext input) { }

	// RVA: 0x3855D38 Offset: 0x3855D38 VA: 0x3855D38
	private static void .cctor() { }
}

// Namespace: 
[CompilerGenerated]
[Serializable]