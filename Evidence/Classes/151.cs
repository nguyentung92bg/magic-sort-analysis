public sealed class AppchargeFulfilledPurchasesResponse : IMessage<AppchargeFulfilledPurchasesResponse>, IMessage, IEquatable<AppchargeFulfilledPurchasesResponse>, IDeepCloneable<AppchargeFulfilledPurchasesResponse>, IBufferMessage // TypeDefIndex: 151
{
	// Fields
	private static readonly MessageParser<AppchargeFulfilledPurchasesResponse> _parser; // 0x0
	private UnknownFieldSet _unknownFields; // 0x10
	public const int PurchaseIdsFieldNumber = 1;
	private static readonly FieldCodec<string> _repeated_purchaseIds_codec; // 0x8
	private readonly RepeatedField<string> purchaseIds_; // 0x18

	// Properties
	[DebuggerNonUserCode]
	[GeneratedCode("protoc", null)]
	public static MessageParser<AppchargeFulfilledPurchasesResponse> Parser { get; }
	[DebuggerNonUserCode]
	[GeneratedCode("protoc", null)]
	public static MessageDescriptor Descriptor { get; }
	[DebuggerNonUserCode]
	[GeneratedCode("protoc", null)]
	private MessageDescriptor pb::Google.Protobuf.IMessage.Descriptor { get; }
	[DebuggerNonUserCode]
	[GeneratedCode("protoc", null)]
	public RepeatedField<string> PurchaseIds { get; }

	// Methods

	// RVA: 0x3858AC8 Offset: 0x3858AC8 VA: 0x3858AC8
	public static MessageParser<AppchargeFulfilledPurchasesResponse> get_Parser() { }

	// RVA: 0x3858B20 Offset: 0x3858B20 VA: 0x3858B20
	public static MessageDescriptor get_Descriptor() { }

	// RVA: 0x3858C24 Offset: 0x3858C24 VA: 0x3858C24 Slot: 8
	private MessageDescriptor pb::Google.Protobuf.IMessage.get_Descriptor() { }

	[GeneratedCode("protoc", null)]
	[DebuggerNonUserCode]
	// RVA: 0x3858C70 Offset: 0x3858C70 VA: 0x3858C70
	public void .ctor() { }

	[DebuggerNonUserCode]
	[GeneratedCode("protoc", null)]
	// RVA: 0x3858CF8 Offset: 0x3858CF8 VA: 0x3858CF8
	public void .ctor(AppchargeFulfilledPurchasesResponse other) { }

	[DebuggerNonUserCode]
	[GeneratedCode("protoc", null)]
	// RVA: 0x3858D84 Offset: 0x3858D84 VA: 0x3858D84 Slot: 10
	public AppchargeFulfilledPurchasesResponse Clone() { }

	// RVA: 0x3858DE4 Offset: 0x3858DE4 VA: 0x3858DE4
	public RepeatedField<string> get_PurchaseIds() { }

	[DebuggerNonUserCode]
	[GeneratedCode("protoc", null)]
	// RVA: 0x3858DEC Offset: 0x3858DEC VA: 0x3858DEC Slot: 0
	public override bool Equals(object other) { }

	[DebuggerNonUserCode]
	[GeneratedCode("protoc", null)]
	// RVA: 0x3858E50 Offset: 0x3858E50 VA: 0x3858E50 Slot: 9
	public bool Equals(AppchargeFulfilledPurchasesResponse other) { }

	[DebuggerNonUserCode]
	[GeneratedCode("protoc", null)]
	// RVA: 0x3858EE0 Offset: 0x3858EE0 VA: 0x3858EE0 Slot: 2
	public override int GetHashCode() { }

	[DebuggerNonUserCode]
	[GeneratedCode("protoc", null)]
	// RVA: 0x3858F2C Offset: 0x3858F2C VA: 0x3858F2C Slot: 3
	public override string ToString() { }

	[DebuggerNonUserCode]
	[GeneratedCode("protoc", null)]
	// RVA: 0x3858F84 Offset: 0x3858F84 VA: 0x3858F84 Slot: 6
	public void WriteTo(CodedOutputStream output) { }

	[DebuggerNonUserCode]
	[GeneratedCode("protoc", null)]
	// RVA: 0x3858FA4 Offset: 0x3858FA4 VA: 0x3858FA4 Slot: 12
	private void pb::Google.Protobuf.IBufferMessage.InternalWriteTo(ref WriteContext output) { }

	[DebuggerNonUserCode]
	[GeneratedCode("protoc", null)]
	// RVA: 0x385905C Offset: 0x385905C VA: 0x385905C Slot: 7
	public int CalculateSize() { }

	[DebuggerNonUserCode]
	[GeneratedCode("protoc", null)]
	// RVA: 0x3859104 Offset: 0x3859104 VA: 0x3859104 Slot: 4
	public void MergeFrom(AppchargeFulfilledPurchasesResponse other) { }

	[GeneratedCode("protoc", null)]
	[DebuggerNonUserCode]
	// RVA: 0x385918C Offset: 0x385918C VA: 0x385918C Slot: 5
	public void MergeFrom(CodedInputStream input) { }

	[DebuggerNonUserCode]
	[GeneratedCode("protoc", null)]
	// RVA: 0x38591AC Offset: 0x38591AC VA: 0x38591AC Slot: 11
	private void pb::Google.Protobuf.IBufferMessage.InternalMergeFrom(ref ParseContext input) { }

	// RVA: 0x38592E8 Offset: 0x38592E8 VA: 0x38592E8
	private static void .cctor() { }
}

// Namespace: 
[CompilerGenerated]
[Serializable]