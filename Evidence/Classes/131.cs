public sealed class CreateAppchargeSessionRequest : IMessage<CreateAppchargeSessionRequest>, IMessage, IEquatable<CreateAppchargeSessionRequest>, IDeepCloneable<CreateAppchargeSessionRequest>, IBufferMessage // TypeDefIndex: 131
{
	// Fields
	private static readonly MessageParser<CreateAppchargeSessionRequest> _parser; // 0x0
	private UnknownFieldSet _unknownFields; // 0x10
	public const int OfferIdFieldNumber = 1;
	private string offerId_; // 0x18
	public const int PlatformFieldNumber = 2;
	private string platform_; // 0x20
	public const int ClientVersionFieldNumber = 3;
	private string clientVersion_; // 0x28
	public const int CountryCode2FieldNumber = 4;
	private string countryCode2_; // 0x30

	// Properties
	[GeneratedCode("protoc", null)]
	[DebuggerNonUserCode]
	public static MessageParser<CreateAppchargeSessionRequest> Parser { get; }
	[DebuggerNonUserCode]
	[GeneratedCode("protoc", null)]
	public static MessageDescriptor Descriptor { get; }
	[DebuggerNonUserCode]
	[GeneratedCode("protoc", null)]
	private MessageDescriptor pb::Google.Protobuf.IMessage.Descriptor { get; }
	[DebuggerNonUserCode]
	[GeneratedCode("protoc", null)]
	public string OfferId { get; set; }
	[DebuggerNonUserCode]
	[GeneratedCode("protoc", null)]
	public string Platform { get; set; }
	[DebuggerNonUserCode]
	[GeneratedCode("protoc", null)]
	public string ClientVersion { get; set; }
	[DebuggerNonUserCode]
	[GeneratedCode("protoc", null)]
	public string CountryCode2 { get; set; }

	// Methods

	// RVA: 0x3AFD948 Offset: 0x3AFD948 VA: 0x3AFD948
	public static MessageParser<CreateAppchargeSessionRequest> get_Parser() { }

	// RVA: 0x3AFD9A0 Offset: 0x3AFD9A0 VA: 0x3AFD9A0
	public static MessageDescriptor get_Descriptor() { }

	// RVA: 0x3AFDAA4 Offset: 0x3AFDAA4 VA: 0x3AFDAA4 Slot: 8
	private MessageDescriptor pb::Google.Protobuf.IMessage.get_Descriptor() { }

	[GeneratedCode("protoc", null)]
	[DebuggerNonUserCode]
	// RVA: 0x3AFDAF0 Offset: 0x3AFDAF0 VA: 0x3AFDAF0
	public void .ctor() { }

	[GeneratedCode("protoc", null)]
	[DebuggerNonUserCode]
	// RVA: 0x3AFDB78 Offset: 0x3AFDB78 VA: 0x3AFDB78
	public void .ctor(CreateAppchargeSessionRequest other) { }

	[DebuggerNonUserCode]
	[GeneratedCode("protoc", null)]
	// RVA: 0x3AFDBF8 Offset: 0x3AFDBF8 VA: 0x3AFDBF8 Slot: 10
	public CreateAppchargeSessionRequest Clone() { }

	// RVA: 0x3AFDC58 Offset: 0x3AFDC58 VA: 0x3AFDC58
	public string get_OfferId() { }

	// RVA: 0x3AFDC60 Offset: 0x3AFDC60 VA: 0x3AFDC60
	public void set_OfferId(string value) { }

	// RVA: 0x3AFDCDC Offset: 0x3AFDCDC VA: 0x3AFDCDC
	public string get_Platform() { }

	// RVA: 0x3AFDCE4 Offset: 0x3AFDCE4 VA: 0x3AFDCE4
	public void set_Platform(string value) { }

	// RVA: 0x3AFDD60 Offset: 0x3AFDD60 VA: 0x3AFDD60
	public string get_ClientVersion() { }

	// RVA: 0x3AFDD68 Offset: 0x3AFDD68 VA: 0x3AFDD68
	public void set_ClientVersion(string value) { }

	// RVA: 0x3AFDDE4 Offset: 0x3AFDDE4 VA: 0x3AFDDE4
	public string get_CountryCode2() { }

	// RVA: 0x3AFDDEC Offset: 0x3AFDDEC VA: 0x3AFDDEC
	public void set_CountryCode2(string value) { }

	[DebuggerNonUserCode]
	[GeneratedCode("protoc", null)]
	// RVA: 0x3AFDE68 Offset: 0x3AFDE68 VA: 0x3AFDE68 Slot: 0
	public override bool Equals(object other) { }

	[GeneratedCode("protoc", null)]
	[DebuggerNonUserCode]
	// RVA: 0x3AFDECC Offset: 0x3AFDECC VA: 0x3AFDECC Slot: 9
	public bool Equals(CreateAppchargeSessionRequest other) { }

	[GeneratedCode("protoc", null)]
	[DebuggerNonUserCode]
	// RVA: 0x3AFDF68 Offset: 0x3AFDF68 VA: 0x3AFDF68 Slot: 2
	public override int GetHashCode() { }

	[GeneratedCode("protoc", null)]
	[DebuggerNonUserCode]
	// RVA: 0x3AFE028 Offset: 0x3AFE028 VA: 0x3AFE028 Slot: 3
	public override string ToString() { }

	[GeneratedCode("protoc", null)]
	[DebuggerNonUserCode]
	// RVA: 0x3AFE080 Offset: 0x3AFE080 VA: 0x3AFE080 Slot: 6
	public void WriteTo(CodedOutputStream output) { }

	[DebuggerNonUserCode]
	[GeneratedCode("protoc", null)]
	// RVA: 0x3AFE0A0 Offset: 0x3AFE0A0 VA: 0x3AFE0A0 Slot: 12
	private void pb::Google.Protobuf.IBufferMessage.InternalWriteTo(ref WriteContext output) { }

	[DebuggerNonUserCode]
	[GeneratedCode("protoc", null)]
	// RVA: 0x3AFE19C Offset: 0x3AFE19C VA: 0x3AFE19C Slot: 7
	public int CalculateSize() { }

	[DebuggerNonUserCode]
	[GeneratedCode("protoc", null)]
	// RVA: 0x3AFE2D4 Offset: 0x3AFE2D4 VA: 0x3AFE2D4 Slot: 4
	public void MergeFrom(CreateAppchargeSessionRequest other) { }

	[DebuggerNonUserCode]
	[GeneratedCode("protoc", null)]
	// RVA: 0x3AFE380 Offset: 0x3AFE380 VA: 0x3AFE380 Slot: 5
	public void MergeFrom(CodedInputStream input) { }

	[DebuggerNonUserCode]
	[GeneratedCode("protoc", null)]
	// RVA: 0x3AFE3A0 Offset: 0x3AFE3A0 VA: 0x3AFE3A0 Slot: 11
	private void pb::Google.Protobuf.IBufferMessage.InternalMergeFrom(ref ParseContext input) { }

	// RVA: 0x3AFE710 Offset: 0x3AFE710 VA: 0x3AFE710
	private static void .cctor() { }
}

// Namespace: 
[CompilerGenerated]
[Serializable]