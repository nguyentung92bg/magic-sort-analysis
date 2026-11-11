public sealed class ClientCommonRewardModel : IMessage<ClientCommonRewardModel>, IMessage, IEquatable<ClientCommonRewardModel>, IDeepCloneable<ClientCommonRewardModel>, IBufferMessage // TypeDefIndex: 157
{
	// Fields
	private static readonly MessageParser<ClientCommonRewardModel> _parser; // 0x0
	private UnknownFieldSet _unknownFields; // 0x10
	public const int CurrencyTypeFieldNumber = 1;
	private long currencyType_; // 0x18
	public const int AmountFieldNumber = 2;
	private long amount_; // 0x20
	public const int TimespanFieldNumber = 3;
	private string timespan_; // 0x28
	public const int ChestTypeFieldNumber = 4;
	private long chestType_; // 0x30
	public const int RewardsFieldNumber = 5;
	private static readonly FieldCodec<ClientCommonRewardModel> _repeated_rewards_codec; // 0x8
	private readonly RepeatedField<ClientCommonRewardModel> rewards_; // 0x38
	public const int PrimaryRewardsFieldNumber = 6;
	private static readonly FieldCodec<ClientCommonRewardModel> _repeated_primaryRewards_codec; // 0x10
	private readonly RepeatedField<ClientCommonRewardModel> primaryRewards_; // 0x40

	// Properties
	[DebuggerNonUserCode]
	[GeneratedCode("protoc", null)]
	public static MessageParser<ClientCommonRewardModel> Parser { get; }
	[DebuggerNonUserCode]
	[GeneratedCode("protoc", null)]
	public static MessageDescriptor Descriptor { get; }
	[DebuggerNonUserCode]
	[GeneratedCode("protoc", null)]
	private MessageDescriptor pb::Google.Protobuf.IMessage.Descriptor { get; }
	[GeneratedCode("protoc", null)]
	[DebuggerNonUserCode]
	public long CurrencyType { get; set; }
	[GeneratedCode("protoc", null)]
	[DebuggerNonUserCode]
	public long Amount { get; set; }
	[DebuggerNonUserCode]
	[GeneratedCode("protoc", null)]
	public string Timespan { get; set; }
	[DebuggerNonUserCode]
	[GeneratedCode("protoc", null)]
	public long ChestType { get; set; }
	[DebuggerNonUserCode]
	[GeneratedCode("protoc", null)]
	public RepeatedField<ClientCommonRewardModel> Rewards { get; }
	[DebuggerNonUserCode]
	[GeneratedCode("protoc", null)]
	public RepeatedField<ClientCommonRewardModel> PrimaryRewards { get; }

	// Methods

	// RVA: 0x385BD80 Offset: 0x385BD80 VA: 0x385BD80
	public static MessageParser<ClientCommonRewardModel> get_Parser() { }

	// RVA: 0x385BDD8 Offset: 0x385BDD8 VA: 0x385BDD8
	public static MessageDescriptor get_Descriptor() { }

	// RVA: 0x385BEDC Offset: 0x385BEDC VA: 0x385BEDC Slot: 8
	private MessageDescriptor pb::Google.Protobuf.IMessage.get_Descriptor() { }

	[DebuggerNonUserCode]
	[GeneratedCode("protoc", null)]
	// RVA: 0x385BF28 Offset: 0x385BF28 VA: 0x385BF28
	public void .ctor() { }

	[GeneratedCode("protoc", null)]
	[DebuggerNonUserCode]
	// RVA: 0x385C004 Offset: 0x385C004 VA: 0x385C004
	public void .ctor(ClientCommonRewardModel other) { }

	[DebuggerNonUserCode]
	[GeneratedCode("protoc", null)]
	// RVA: 0x385C0D4 Offset: 0x385C0D4 VA: 0x385C0D4 Slot: 10
	public ClientCommonRewardModel Clone() { }

	// RVA: 0x385C134 Offset: 0x385C134 VA: 0x385C134
	public long get_CurrencyType() { }

	// RVA: 0x385C13C Offset: 0x385C13C VA: 0x385C13C
	public void set_CurrencyType(long value) { }

	// RVA: 0x385C144 Offset: 0x385C144 VA: 0x385C144
	public long get_Amount() { }

	// RVA: 0x385C14C Offset: 0x385C14C VA: 0x385C14C
	public void set_Amount(long value) { }

	// RVA: 0x385C154 Offset: 0x385C154 VA: 0x385C154
	public string get_Timespan() { }

	// RVA: 0x385C15C Offset: 0x385C15C VA: 0x385C15C
	public void set_Timespan(string value) { }

	// RVA: 0x385C1D8 Offset: 0x385C1D8 VA: 0x385C1D8
	public long get_ChestType() { }

	// RVA: 0x385C1E0 Offset: 0x385C1E0 VA: 0x385C1E0
	public void set_ChestType(long value) { }

	// RVA: 0x385C1E8 Offset: 0x385C1E8 VA: 0x385C1E8
	public RepeatedField<ClientCommonRewardModel> get_Rewards() { }

	// RVA: 0x385C1F0 Offset: 0x385C1F0 VA: 0x385C1F0
	public RepeatedField<ClientCommonRewardModel> get_PrimaryRewards() { }

	[DebuggerNonUserCode]
	[GeneratedCode("protoc", null)]
	// RVA: 0x385C1F8 Offset: 0x385C1F8 VA: 0x385C1F8 Slot: 0
	public override bool Equals(object other) { }

	[GeneratedCode("protoc", null)]
	[DebuggerNonUserCode]
	// RVA: 0x385C25C Offset: 0x385C25C VA: 0x385C25C Slot: 9
	public bool Equals(ClientCommonRewardModel other) { }

	[DebuggerNonUserCode]
	[GeneratedCode("protoc", null)]
	// RVA: 0x385C348 Offset: 0x385C348 VA: 0x385C348 Slot: 2
	public override int GetHashCode() { }

	[GeneratedCode("protoc", null)]
	[DebuggerNonUserCode]
	// RVA: 0x385C438 Offset: 0x385C438 VA: 0x385C438 Slot: 3
	public override string ToString() { }

	[GeneratedCode("protoc", null)]
	[DebuggerNonUserCode]
	// RVA: 0x385C490 Offset: 0x385C490 VA: 0x385C490 Slot: 6
	public void WriteTo(CodedOutputStream output) { }

	[GeneratedCode("protoc", null)]
	[DebuggerNonUserCode]
	// RVA: 0x385C4B0 Offset: 0x385C4B0 VA: 0x385C4B0 Slot: 12
	private void pb::Google.Protobuf.IBufferMessage.InternalWriteTo(ref WriteContext output) { }

	[GeneratedCode("protoc", null)]
	[DebuggerNonUserCode]
	// RVA: 0x385C630 Offset: 0x385C630 VA: 0x385C630 Slot: 7
	public int CalculateSize() { }

	[GeneratedCode("protoc", null)]
	[DebuggerNonUserCode]
	// RVA: 0x385C7D4 Offset: 0x385C7D4 VA: 0x385C7D4 Slot: 4
	public void MergeFrom(ClientCommonRewardModel other) { }

	[DebuggerNonUserCode]
	[GeneratedCode("protoc", null)]
	// RVA: 0x385C8AC Offset: 0x385C8AC VA: 0x385C8AC Slot: 5
	public void MergeFrom(CodedInputStream input) { }

	[DebuggerNonUserCode]
	[GeneratedCode("protoc", null)]
	// RVA: 0x385C8CC Offset: 0x385C8CC VA: 0x385C8CC Slot: 11
	private void pb::Google.Protobuf.IBufferMessage.InternalMergeFrom(ref ParseContext input) { }

	// RVA: 0x385CBD0 Offset: 0x385CBD0 VA: 0x385CBD0
	private static void .cctor() { }
}

// Namespace: 
[CompilerGenerated]
[Serializable]