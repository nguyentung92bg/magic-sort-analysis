public sealed class CreateAppchargeSessionResponse : IMessage<CreateAppchargeSessionResponse>, IMessage, IEquatable<CreateAppchargeSessionResponse>, IDeepCloneable<CreateAppchargeSessionResponse>, IBufferMessage // TypeDefIndex: 133
{
	// Fields
	private static readonly MessageParser<CreateAppchargeSessionResponse> _parser; // 0x0
	private UnknownFieldSet _unknownFields; // 0x10
	public const int PurchaseIdFieldNumber = 1;
	private string purchaseId_; // 0x18
	public const int ParsedUrlFieldNumber = 2;
	private string parsedUrl_; // 0x20
	public const int StatusFieldNumber = 3;
	private string status_; // 0x28

	// Properties
	[DebuggerNonUserCode]
	[GeneratedCode("protoc", null)]
	public static MessageParser<CreateAppchargeSessionResponse> Parser { get; }
	[DebuggerNonUserCode]
	[GeneratedCode("protoc", null)]
	public static MessageDescriptor Descriptor { get; }
	[DebuggerNonUserCode]
	[GeneratedCode("protoc", null)]
	private MessageDescriptor pb::Google.Protobuf.IMessage.Descriptor { get; }
	[GeneratedCode("protoc", null)]
	[DebuggerNonUserCode]
	public string PurchaseId { get; set; }
	[GeneratedCode("protoc", null)]
	[DebuggerNonUserCode]
	public string ParsedUrl { get; set; }
	[DebuggerNonUserCode]
	[GeneratedCode("protoc", null)]
	public string Status { get; set; }

	// Methods

	// RVA: 0x3AFE8F4 Offset: 0x3AFE8F4 VA: 0x3AFE8F4
	public static MessageParser<CreateAppchargeSessionResponse> get_Parser() { }

	// RVA: 0x3AFE94C Offset: 0x3AFE94C VA: 0x3AFE94C
	public static MessageDescriptor get_Descriptor() { }

	// RVA: 0x3AFEA50 Offset: 0x3AFEA50 VA: 0x3AFEA50 Slot: 8
	private MessageDescriptor pb::Google.Protobuf.IMessage.get_Descriptor() { }

	[DebuggerNonUserCode]
	[GeneratedCode("protoc", null)]
	// RVA: 0x3AFEA9C Offset: 0x3AFEA9C VA: 0x3AFEA9C
	public void .ctor() { }

	[DebuggerNonUserCode]
	[GeneratedCode("protoc", null)]
	// RVA: 0x3AFEB14 Offset: 0x3AFEB14 VA: 0x3AFEB14
	public void .ctor(CreateAppchargeSessionResponse other) { }

	[DebuggerNonUserCode]
	[GeneratedCode("protoc", null)]
	// RVA: 0x3AFEB84 Offset: 0x3AFEB84 VA: 0x3AFEB84 Slot: 10
	public CreateAppchargeSessionResponse Clone() { }

	// RVA: 0x3AFEBE4 Offset: 0x3AFEBE4 VA: 0x3AFEBE4
	public string get_PurchaseId() { }

	// RVA: 0x3AFEBEC Offset: 0x3AFEBEC VA: 0x3AFEBEC
	public void set_PurchaseId(string value) { }

	// RVA: 0x3AFEC68 Offset: 0x3AFEC68 VA: 0x3AFEC68
	public string get_ParsedUrl() { }

	// RVA: 0x3AFEC70 Offset: 0x3AFEC70 VA: 0x3AFEC70
	public void set_ParsedUrl(string value) { }

	// RVA: 0x3AFECEC Offset: 0x3AFECEC VA: 0x3AFECEC
	public string get_Status() { }

	// RVA: 0x3AFECF4 Offset: 0x3AFECF4 VA: 0x3AFECF4
	public void set_Status(string value) { }

	[DebuggerNonUserCode]
	[GeneratedCode("protoc", null)]
	// RVA: 0x3AFED70 Offset: 0x3AFED70 VA: 0x3AFED70 Slot: 0
	public override bool Equals(object other) { }

	[GeneratedCode("protoc", null)]
	[DebuggerNonUserCode]
	// RVA: 0x3AFEDD4 Offset: 0x3AFEDD4 VA: 0x3AFEDD4 Slot: 9
	public bool Equals(CreateAppchargeSessionResponse other) { }

	[GeneratedCode("protoc", null)]
	[DebuggerNonUserCode]
	// RVA: 0x3AFEE5C Offset: 0x3AFEE5C VA: 0x3AFEE5C Slot: 2
	public override int GetHashCode() { }

	[DebuggerNonUserCode]
	[GeneratedCode("protoc", null)]
	// RVA: 0x3AFEEFC Offset: 0x3AFEEFC VA: 0x3AFEEFC Slot: 3
	public override string ToString() { }

	[DebuggerNonUserCode]
	[GeneratedCode("protoc", null)]
	// RVA: 0x3AFEF54 Offset: 0x3AFEF54 VA: 0x3AFEF54 Slot: 6
	public void WriteTo(CodedOutputStream output) { }

	[DebuggerNonUserCode]
	[GeneratedCode("protoc", null)]
	// RVA: 0x3AFEF74 Offset: 0x3AFEF74 VA: 0x3AFEF74 Slot: 12
	private void pb::Google.Protobuf.IBufferMessage.InternalWriteTo(ref WriteContext output) { }

	[DebuggerNonUserCode]
	[GeneratedCode("protoc", null)]
	// RVA: 0x3AFF040 Offset: 0x3AFF040 VA: 0x3AFF040 Slot: 7
	public int CalculateSize() { }

	[GeneratedCode("protoc", null)]
	[DebuggerNonUserCode]
	// RVA: 0x3AFF144 Offset: 0x3AFF144 VA: 0x3AFF144 Slot: 4
	public void MergeFrom(CreateAppchargeSessionResponse other) { }

	[DebuggerNonUserCode]
	[GeneratedCode("protoc", null)]
	// RVA: 0x3AFF1D8 Offset: 0x3AFF1D8 VA: 0x3AFF1D8 Slot: 5
	public void MergeFrom(CodedInputStream input) { }

	[DebuggerNonUserCode]
	[GeneratedCode("protoc", null)]
	// RVA: 0x3AFF1F8 Offset: 0x3AFF1F8 VA: 0x3AFF1F8 Slot: 11
	private void pb::Google.Protobuf.IBufferMessage.InternalMergeFrom(ref ParseContext input) { }

	// RVA: 0x3AFF4B8 Offset: 0x3AFF4B8 VA: 0x3AFF4B8
	private static void .cctor() { }
}

// Namespace: 
[CompilerGenerated]
[Serializable]