public sealed class AppchargeClaimablePurchasesResponse : IMessage<AppchargeClaimablePurchasesResponse>, IMessage, IEquatable<AppchargeClaimablePurchasesResponse>, IDeepCloneable<AppchargeClaimablePurchasesResponse>, IBufferMessage // TypeDefIndex: 153
{
	// Fields
	private static readonly MessageParser<AppchargeClaimablePurchasesResponse> _parser; // 0x0
	private UnknownFieldSet _unknownFields; // 0x10
	public const int PurchasesFieldNumber = 1;
	private static readonly FieldCodec<AppchargeClaimablePurchase> _repeated_purchases_codec; // 0x8
	private readonly RepeatedField<AppchargeClaimablePurchase> purchases_; // 0x18

	// Properties
	[GeneratedCode("protoc", null)]
	[DebuggerNonUserCode]
	public static MessageParser<AppchargeClaimablePurchasesResponse> Parser { get; }
	[DebuggerNonUserCode]
	[GeneratedCode("protoc", null)]
	public static MessageDescriptor Descriptor { get; }
	[GeneratedCode("protoc", null)]
	[DebuggerNonUserCode]
	private MessageDescriptor pb::Google.Protobuf.IMessage.Descriptor { get; }
	[GeneratedCode("protoc", null)]
	[DebuggerNonUserCode]
	public RepeatedField<AppchargeClaimablePurchase> Purchases { get; }

	// Methods

	// RVA: 0x38594F0 Offset: 0x38594F0 VA: 0x38594F0
	public static MessageParser<AppchargeClaimablePurchasesResponse> get_Parser() { }

	// RVA: 0x3859548 Offset: 0x3859548 VA: 0x3859548
	public static MessageDescriptor get_Descriptor() { }

	// RVA: 0x385964C Offset: 0x385964C VA: 0x385964C Slot: 8
	private MessageDescriptor pb::Google.Protobuf.IMessage.get_Descriptor() { }

	[DebuggerNonUserCode]
	[GeneratedCode("protoc", null)]
	// RVA: 0x3859698 Offset: 0x3859698 VA: 0x3859698
	public void .ctor() { }

	[DebuggerNonUserCode]
	[GeneratedCode("protoc", null)]
	// RVA: 0x3859720 Offset: 0x3859720 VA: 0x3859720
	public void .ctor(AppchargeClaimablePurchasesResponse other) { }

	[GeneratedCode("protoc", null)]
	[DebuggerNonUserCode]
	// RVA: 0x38597AC Offset: 0x38597AC VA: 0x38597AC Slot: 10
	public AppchargeClaimablePurchasesResponse Clone() { }

	// RVA: 0x385980C Offset: 0x385980C VA: 0x385980C
	public RepeatedField<AppchargeClaimablePurchase> get_Purchases() { }

	[DebuggerNonUserCode]
	[GeneratedCode("protoc", null)]
	// RVA: 0x3859814 Offset: 0x3859814 VA: 0x3859814 Slot: 0
	public override bool Equals(object other) { }

	[DebuggerNonUserCode]
	[GeneratedCode("protoc", null)]
	// RVA: 0x3859878 Offset: 0x3859878 VA: 0x3859878 Slot: 9
	public bool Equals(AppchargeClaimablePurchasesResponse other) { }

	[DebuggerNonUserCode]
	[GeneratedCode("protoc", null)]
	// RVA: 0x3859908 Offset: 0x3859908 VA: 0x3859908 Slot: 2
	public override int GetHashCode() { }

	[DebuggerNonUserCode]
	[GeneratedCode("protoc", null)]
	// RVA: 0x3859954 Offset: 0x3859954 VA: 0x3859954 Slot: 3
	public override string ToString() { }

	[GeneratedCode("protoc", null)]
	[DebuggerNonUserCode]
	// RVA: 0x38599AC Offset: 0x38599AC VA: 0x38599AC Slot: 6
	public void WriteTo(CodedOutputStream output) { }

	[DebuggerNonUserCode]
	[GeneratedCode("protoc", null)]
	// RVA: 0x38599CC Offset: 0x38599CC VA: 0x38599CC Slot: 12
	private void pb::Google.Protobuf.IBufferMessage.InternalWriteTo(ref WriteContext output) { }

	[GeneratedCode("protoc", null)]
	[DebuggerNonUserCode]
	// RVA: 0x3859A84 Offset: 0x3859A84 VA: 0x3859A84 Slot: 7
	public int CalculateSize() { }

	[GeneratedCode("protoc", null)]
	[DebuggerNonUserCode]
	// RVA: 0x3859B2C Offset: 0x3859B2C VA: 0x3859B2C Slot: 4
	public void MergeFrom(AppchargeClaimablePurchasesResponse other) { }

	[DebuggerNonUserCode]
	[GeneratedCode("protoc", null)]
	// RVA: 0x3859BB4 Offset: 0x3859BB4 VA: 0x3859BB4 Slot: 5
	public void MergeFrom(CodedInputStream input) { }

	[DebuggerNonUserCode]
	[GeneratedCode("protoc", null)]
	// RVA: 0x3859BD4 Offset: 0x3859BD4 VA: 0x3859BD4 Slot: 11
	private void pb::Google.Protobuf.IBufferMessage.InternalMergeFrom(ref ParseContext input) { }

	// RVA: 0x3859D10 Offset: 0x3859D10 VA: 0x3859D10
	private static void .cctor() { }
}

// Namespace: MagicSort.V1