public sealed class VerifyPurchasesResponse : IMessage<VerifyPurchasesResponse>, IMessage, IEquatable<VerifyPurchasesResponse>, IDeepCloneable<VerifyPurchasesResponse>, IBufferMessage // TypeDefIndex: 128
{
	// Fields
	private static readonly MessageParser<VerifyPurchasesResponse> _parser; // 0x0
	private UnknownFieldSet _unknownFields; // 0x10
	public const int ResultsFieldNumber = 1;
	private static readonly FieldCodec<VerifyPurchaseResult> _repeated_results_codec; // 0x8
	private readonly RepeatedField<VerifyPurchaseResult> results_; // 0x18

	// Properties
	[DebuggerNonUserCode]
	[GeneratedCode("protoc", null)]
	public static MessageParser<VerifyPurchasesResponse> Parser { get; }
	[GeneratedCode("protoc", null)]
	[DebuggerNonUserCode]
	public static MessageDescriptor Descriptor { get; }
	[GeneratedCode("protoc", null)]
	[DebuggerNonUserCode]
	private MessageDescriptor pb::Google.Protobuf.IMessage.Descriptor { get; }
	[DebuggerNonUserCode]
	[GeneratedCode("protoc", null)]
	public RepeatedField<VerifyPurchaseResult> Results { get; }

	// Methods

	// RVA: 0x3AFA9C0 Offset: 0x3AFA9C0 VA: 0x3AFA9C0
	public static MessageParser<VerifyPurchasesResponse> get_Parser() { }

	// RVA: 0x3AFAA18 Offset: 0x3AFAA18 VA: 0x3AFAA18
	public static MessageDescriptor get_Descriptor() { }

	// RVA: 0x3AFAB1C Offset: 0x3AFAB1C VA: 0x3AFAB1C Slot: 8
	private MessageDescriptor pb::Google.Protobuf.IMessage.get_Descriptor() { }

	[GeneratedCode("protoc", null)]
	[DebuggerNonUserCode]
	// RVA: 0x3AFAB68 Offset: 0x3AFAB68 VA: 0x3AFAB68
	public void .ctor() { }

	[GeneratedCode("protoc", null)]
	[DebuggerNonUserCode]
	// RVA: 0x3AFABF0 Offset: 0x3AFABF0 VA: 0x3AFABF0
	public void .ctor(VerifyPurchasesResponse other) { }

	[DebuggerNonUserCode]
	[GeneratedCode("protoc", null)]
	// RVA: 0x3AFAC7C Offset: 0x3AFAC7C VA: 0x3AFAC7C Slot: 10
	public VerifyPurchasesResponse Clone() { }

	// RVA: 0x3AFACDC Offset: 0x3AFACDC VA: 0x3AFACDC
	public RepeatedField<VerifyPurchaseResult> get_Results() { }

	[DebuggerNonUserCode]
	[GeneratedCode("protoc", null)]
	// RVA: 0x3AFACE4 Offset: 0x3AFACE4 VA: 0x3AFACE4 Slot: 0
	public override bool Equals(object other) { }

	[GeneratedCode("protoc", null)]
	[DebuggerNonUserCode]
	// RVA: 0x3AFAD48 Offset: 0x3AFAD48 VA: 0x3AFAD48 Slot: 9
	public bool Equals(VerifyPurchasesResponse other) { }

	[DebuggerNonUserCode]
	[GeneratedCode("protoc", null)]
	// RVA: 0x3AFADD8 Offset: 0x3AFADD8 VA: 0x3AFADD8 Slot: 2
	public override int GetHashCode() { }

	[DebuggerNonUserCode]
	[GeneratedCode("protoc", null)]
	// RVA: 0x3AFAE24 Offset: 0x3AFAE24 VA: 0x3AFAE24 Slot: 3
	public override string ToString() { }

	[DebuggerNonUserCode]
	[GeneratedCode("protoc", null)]
	// RVA: 0x3AFAE7C Offset: 0x3AFAE7C VA: 0x3AFAE7C Slot: 6
	public void WriteTo(CodedOutputStream output) { }

	[DebuggerNonUserCode]
	[GeneratedCode("protoc", null)]
	// RVA: 0x3AFAE9C Offset: 0x3AFAE9C VA: 0x3AFAE9C Slot: 12
	private void pb::Google.Protobuf.IBufferMessage.InternalWriteTo(ref WriteContext output) { }

	[GeneratedCode("protoc", null)]
	[DebuggerNonUserCode]
	// RVA: 0x3AFAF54 Offset: 0x3AFAF54 VA: 0x3AFAF54 Slot: 7
	public int CalculateSize() { }

	[GeneratedCode("protoc", null)]
	[DebuggerNonUserCode]
	// RVA: 0x3AFAFFC Offset: 0x3AFAFFC VA: 0x3AFAFFC Slot: 4
	public void MergeFrom(VerifyPurchasesResponse other) { }

	[GeneratedCode("protoc", null)]
	[DebuggerNonUserCode]
	// RVA: 0x3AFB084 Offset: 0x3AFB084 VA: 0x3AFB084 Slot: 5
	public void MergeFrom(CodedInputStream input) { }

	[GeneratedCode("protoc", null)]
	[DebuggerNonUserCode]
	// RVA: 0x3AFB0A4 Offset: 0x3AFB0A4 VA: 0x3AFB0A4 Slot: 11
	private void pb::Google.Protobuf.IBufferMessage.InternalMergeFrom(ref ParseContext input) { }

	// RVA: 0x3AFB1E0 Offset: 0x3AFB1E0 VA: 0x3AFB1E0
	private static void .cctor() { }
}

// Namespace: MagicSort.V1