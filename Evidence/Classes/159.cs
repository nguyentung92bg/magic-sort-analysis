public sealed class ClientCommonRewardModelWithCollection : IMessage<ClientCommonRewardModelWithCollection>, IMessage, IEquatable<ClientCommonRewardModelWithCollection>, IDeepCloneable<ClientCommonRewardModelWithCollection>, IBufferMessage // TypeDefIndex: 159
{
	// Fields
	private static readonly MessageParser<ClientCommonRewardModelWithCollection> _parser; // 0x0
	private UnknownFieldSet _unknownFields; // 0x10
	public const int CurrencyTypeFieldNumber = 1;
	private long currencyType_; // 0x18
	public const int AmountFieldNumber = 2;
	private long amount_; // 0x20
	public const int TimespanFieldNumber = 3;
	private string timespan_; // 0x28
	public const int ChestTypeFieldNumber = 4;
	private long chestType_; // 0x30
	public const int CollectionPackTypeFieldNumber = 5;
	private long collectionPackType_; // 0x38
	public const int RewardsFieldNumber = 6;
	private static readonly FieldCodec<ClientCommonRewardModelWithCollection> _repeated_rewards_codec; // 0x8
	private readonly RepeatedField<ClientCommonRewardModelWithCollection> rewards_; // 0x40
	public const int PrimaryRewardsFieldNumber = 7;
	private static readonly FieldCodec<ClientCommonRewardModelWithCollection> _repeated_primaryRewards_codec; // 0x10
	private readonly RepeatedField<ClientCommonRewardModelWithCollection> primaryRewards_; // 0x48

	// Properties
	[GeneratedCode("protoc", null)]
	[DebuggerNonUserCode]
	public static MessageParser<ClientCommonRewardModelWithCollection> Parser { get; }
	[DebuggerNonUserCode]
	[GeneratedCode("protoc", null)]
	public static MessageDescriptor Descriptor { get; }
	[DebuggerNonUserCode]
	[GeneratedCode("protoc", null)]
	private MessageDescriptor pb::Google.Protobuf.IMessage.Descriptor { get; }
	[DebuggerNonUserCode]
	[GeneratedCode("protoc", null)]
	public long CurrencyType { get; set; }
	[DebuggerNonUserCode]
	[GeneratedCode("protoc", null)]
	public long Amount { get; set; }
	[DebuggerNonUserCode]
	[GeneratedCode("protoc", null)]
	public string Timespan { get; set; }
	[GeneratedCode("protoc", null)]
	[DebuggerNonUserCode]
	public long ChestType { get; set; }
	[GeneratedCode("protoc", null)]
	[DebuggerNonUserCode]
	public long CollectionPackType { get; set; }
	[GeneratedCode("protoc", null)]
	[DebuggerNonUserCode]
	public RepeatedField<ClientCommonRewardModelWithCollection> Rewards { get; }
	[DebuggerNonUserCode]
	[GeneratedCode("protoc", null)]
	public RepeatedField<ClientCommonRewardModelWithCollection> PrimaryRewards { get; }

	// Methods

	// RVA: 0x385CE84 Offset: 0x385CE84 VA: 0x385CE84
	public static MessageParser<ClientCommonRewardModelWithCollection> get_Parser() { }

	// RVA: 0x385CEDC Offset: 0x385CEDC VA: 0x385CEDC
	public static MessageDescriptor get_Descriptor() { }

	// RVA: 0x385CFE0 Offset: 0x385CFE0 VA: 0x385CFE0 Slot: 8
	private MessageDescriptor pb::Google.Protobuf.IMessage.get_Descriptor() { }

	[DebuggerNonUserCode]
	[GeneratedCode("protoc", null)]
	// RVA: 0x385D02C Offset: 0x385D02C VA: 0x385D02C
	public void .ctor() { }

	[DebuggerNonUserCode]
	[GeneratedCode("protoc", null)]
	// RVA: 0x385D108 Offset: 0x385D108 VA: 0x385D108
	public void .ctor(ClientCommonRewardModelWithCollection other) { }

	[DebuggerNonUserCode]
	[GeneratedCode("protoc", null)]
	// RVA: 0x385D1D8 Offset: 0x385D1D8 VA: 0x385D1D8 Slot: 10
	public ClientCommonRewardModelWithCollection Clone() { }

	// RVA: 0x385D238 Offset: 0x385D238 VA: 0x385D238
	public long get_CurrencyType() { }

	// RVA: 0x385D240 Offset: 0x385D240 VA: 0x385D240
	public void set_CurrencyType(long value) { }

	// RVA: 0x385D248 Offset: 0x385D248 VA: 0x385D248
	public long get_Amount() { }

	// RVA: 0x385D250 Offset: 0x385D250 VA: 0x385D250
	public void set_Amount(long value) { }

	// RVA: 0x385D258 Offset: 0x385D258 VA: 0x385D258
	public string get_Timespan() { }

	// RVA: 0x385D260 Offset: 0x385D260 VA: 0x385D260
	public void set_Timespan(string value) { }

	// RVA: 0x385D2DC Offset: 0x385D2DC VA: 0x385D2DC
	public long get_ChestType() { }

	// RVA: 0x385D2E4 Offset: 0x385D2E4 VA: 0x385D2E4
	public void set_ChestType(long value) { }

	// RVA: 0x385D2EC Offset: 0x385D2EC VA: 0x385D2EC
	public long get_CollectionPackType() { }

	// RVA: 0x385D2F4 Offset: 0x385D2F4 VA: 0x385D2F4
	public void set_CollectionPackType(long value) { }

	// RVA: 0x385D2FC Offset: 0x385D2FC VA: 0x385D2FC
	public RepeatedField<ClientCommonRewardModelWithCollection> get_Rewards() { }

	// RVA: 0x385D304 Offset: 0x385D304 VA: 0x385D304
	public RepeatedField<ClientCommonRewardModelWithCollection> get_PrimaryRewards() { }

	[DebuggerNonUserCode]
	[GeneratedCode("protoc", null)]
	// RVA: 0x385D30C Offset: 0x385D30C VA: 0x385D30C Slot: 0
	public override bool Equals(object other) { }

	[DebuggerNonUserCode]
	[GeneratedCode("protoc", null)]
	// RVA: 0x385D370 Offset: 0x385D370 VA: 0x385D370 Slot: 9
	public bool Equals(ClientCommonRewardModelWithCollection other) { }

	[GeneratedCode("protoc", null)]
	[DebuggerNonUserCode]
	// RVA: 0x385D46C Offset: 0x385D46C VA: 0x385D46C Slot: 2
	public override int GetHashCode() { }

	[DebuggerNonUserCode]
	[GeneratedCode("protoc", null)]
	// RVA: 0x385D578 Offset: 0x385D578 VA: 0x385D578 Slot: 3
	public override string ToString() { }

	[GeneratedCode("protoc", null)]
	[DebuggerNonUserCode]
	// RVA: 0x385D5D0 Offset: 0x385D5D0 VA: 0x385D5D0 Slot: 6
	public void WriteTo(CodedOutputStream output) { }

	[DebuggerNonUserCode]
	[GeneratedCode("protoc", null)]
	// RVA: 0x385D5F0 Offset: 0x385D5F0 VA: 0x385D5F0 Slot: 12
	private void pb::Google.Protobuf.IBufferMessage.InternalWriteTo(ref WriteContext output) { }

	[DebuggerNonUserCode]
	[GeneratedCode("protoc", null)]
	// RVA: 0x385D798 Offset: 0x385D798 VA: 0x385D798 Slot: 7
	public int CalculateSize() { }

	[DebuggerNonUserCode]
	[GeneratedCode("protoc", null)]
	// RVA: 0x385D968 Offset: 0x385D968 VA: 0x385D968 Slot: 4
	public void MergeFrom(ClientCommonRewardModelWithCollection other) { }

	[DebuggerNonUserCode]
	[GeneratedCode("protoc", null)]
	// RVA: 0x385DA4C Offset: 0x385DA4C VA: 0x385DA4C Slot: 5
	public void MergeFrom(CodedInputStream input) { }

	[DebuggerNonUserCode]
	[GeneratedCode("protoc", null)]
	// RVA: 0x385DA6C Offset: 0x385DA6C VA: 0x385DA6C Slot: 11
	private void pb::Google.Protobuf.IBufferMessage.InternalMergeFrom(ref ParseContext input) { }

	// RVA: 0x385DDB8 Offset: 0x385DDB8 VA: 0x385DDB8
	private static void .cctor() { }
}

// Namespace: 
[CompilerGenerated]
[Serializable]