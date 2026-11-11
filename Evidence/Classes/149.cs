public sealed class ClaimAppchargePurchasesResponse : IMessage<ClaimAppchargePurchasesResponse>, IMessage, IEquatable<ClaimAppchargePurchasesResponse>, IDeepCloneable<ClaimAppchargePurchasesResponse>, IBufferMessage // TypeDefIndex: 149
{
	// Fields
	private static readonly MessageParser<ClaimAppchargePurchasesResponse> _parser; // 0x0
	private UnknownFieldSet _unknownFields; // 0x10
	public const int PurchasesFieldNumber = 1;
	private static readonly FieldCodec<ClaimedAppchargePurchase> _repeated_purchases_codec; // 0x8
	private readonly RepeatedField<ClaimedAppchargePurchase> purchases_; // 0x18
	public const int ClaimableFieldNumber = 2;
	private static readonly FieldCodec<AppchargeClaimablePurchase> _repeated_claimable_codec; // 0x10
	private readonly RepeatedField<AppchargeClaimablePurchase> claimable_; // 0x20

	// Properties
	[DebuggerNonUserCode]
	[GeneratedCode("protoc", null)]
	public static MessageParser<ClaimAppchargePurchasesResponse> Parser { get; }
	[DebuggerNonUserCode]
	[GeneratedCode("protoc", null)]
	public static MessageDescriptor Descriptor { get; }
	[DebuggerNonUserCode]
	[GeneratedCode("protoc", null)]
	private MessageDescriptor pb::Google.Protobuf.IMessage.Descriptor { get; }
	[DebuggerNonUserCode]
	[GeneratedCode("protoc", null)]
	public RepeatedField<ClaimedAppchargePurchase> Purchases { get; }
	[GeneratedCode("protoc", null)]
	[DebuggerNonUserCode]
	public RepeatedField<AppchargeClaimablePurchase> Claimable { get; }

	// Methods

	// RVA: 0x3857DD0 Offset: 0x3857DD0 VA: 0x3857DD0
	public static MessageParser<ClaimAppchargePurchasesResponse> get_Parser() { }

	// RVA: 0x3857E28 Offset: 0x3857E28 VA: 0x3857E28
	public static MessageDescriptor get_Descriptor() { }

	// RVA: 0x3857F2C Offset: 0x3857F2C VA: 0x3857F2C Slot: 8
	private MessageDescriptor pb::Google.Protobuf.IMessage.get_Descriptor() { }

	[DebuggerNonUserCode]
	[GeneratedCode("protoc", null)]
	// RVA: 0x3857F78 Offset: 0x3857F78 VA: 0x3857F78
	public void .ctor() { }

	[DebuggerNonUserCode]
	[GeneratedCode("protoc", null)]
	// RVA: 0x3858050 Offset: 0x3858050 VA: 0x3858050
	public void .ctor(ClaimAppchargePurchasesResponse other) { }

	[GeneratedCode("protoc", null)]
	[DebuggerNonUserCode]
	// RVA: 0x3858110 Offset: 0x3858110 VA: 0x3858110 Slot: 10
	public ClaimAppchargePurchasesResponse Clone() { }

	// RVA: 0x3858170 Offset: 0x3858170 VA: 0x3858170
	public RepeatedField<ClaimedAppchargePurchase> get_Purchases() { }

	// RVA: 0x3858178 Offset: 0x3858178 VA: 0x3858178
	public RepeatedField<AppchargeClaimablePurchase> get_Claimable() { }

	[GeneratedCode("protoc", null)]
	[DebuggerNonUserCode]
	// RVA: 0x3858180 Offset: 0x3858180 VA: 0x3858180 Slot: 0
	public override bool Equals(object other) { }

	[DebuggerNonUserCode]
	[GeneratedCode("protoc", null)]
	// RVA: 0x38581E4 Offset: 0x38581E4 VA: 0x38581E4 Slot: 9
	public bool Equals(ClaimAppchargePurchasesResponse other) { }

	[DebuggerNonUserCode]
	[GeneratedCode("protoc", null)]
	// RVA: 0x38582A0 Offset: 0x38582A0 VA: 0x38582A0 Slot: 2
	public override int GetHashCode() { }

	[GeneratedCode("protoc", null)]
	[DebuggerNonUserCode]
	// RVA: 0x3858314 Offset: 0x3858314 VA: 0x3858314 Slot: 3
	public override string ToString() { }

	[GeneratedCode("protoc", null)]
	[DebuggerNonUserCode]
	// RVA: 0x385836C Offset: 0x385836C VA: 0x385836C Slot: 6
	public void WriteTo(CodedOutputStream output) { }

	[DebuggerNonUserCode]
	[GeneratedCode("protoc", null)]
	// RVA: 0x385838C Offset: 0x385838C VA: 0x385838C Slot: 12
	private void pb::Google.Protobuf.IBufferMessage.InternalWriteTo(ref WriteContext output) { }

	[DebuggerNonUserCode]
	[GeneratedCode("protoc", null)]
	// RVA: 0x3858478 Offset: 0x3858478 VA: 0x3858478 Slot: 7
	public int CalculateSize() { }

	[DebuggerNonUserCode]
	[GeneratedCode("protoc", null)]
	// RVA: 0x3858558 Offset: 0x3858558 VA: 0x3858558 Slot: 4
	public void MergeFrom(ClaimAppchargePurchasesResponse other) { }

	[DebuggerNonUserCode]
	[GeneratedCode("protoc", null)]
	// RVA: 0x3858608 Offset: 0x3858608 VA: 0x3858608 Slot: 5
	public void MergeFrom(CodedInputStream input) { }

	[GeneratedCode("protoc", null)]
	[DebuggerNonUserCode]
	// RVA: 0x3858628 Offset: 0x3858628 VA: 0x3858628 Slot: 11
	private void pb::Google.Protobuf.IBufferMessage.InternalMergeFrom(ref ParseContext input) { }

	// RVA: 0x38587AC Offset: 0x38587AC VA: 0x38587AC
	private static void .cctor() { }
}

// Namespace: 
[CompilerGenerated]
[Serializable]