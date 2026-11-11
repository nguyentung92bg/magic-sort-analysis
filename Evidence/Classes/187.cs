public sealed class StrikeShowLeaderboardPlayer : IMessage<StrikeShowLeaderboardPlayer>, IMessage, IEquatable<StrikeShowLeaderboardPlayer>, IDeepCloneable<StrikeShowLeaderboardPlayer>, IBufferMessage // TypeDefIndex: 187
{
	// Fields
	private static readonly MessageParser<StrikeShowLeaderboardPlayer> _parser; // 0x0
	private UnknownFieldSet _unknownFields; // 0x10
	public const int PublicIdFieldNumber = 1;
	private string publicId_; // 0x18
	public const int NicknameFieldNumber = 2;
	private string nickname_; // 0x20
	public const int ScoreFieldNumber = 3;
	private long score_; // 0x28
	public const int RankFieldNumber = 4;
	private long rank_; // 0x30
	public const int IsBotFieldNumber = 5;
	private bool isBot_; // 0x38
	public const int IsMeFieldNumber = 6;
	private bool isMe_; // 0x39
	public const int IsInPromoteFieldNumber = 7;
	private bool isInPromote_; // 0x3A
	public const int IsInDemoteFieldNumber = 8;
	private bool isInDemote_; // 0x3B
	public const int ImageUrlFieldNumber = 9;
	private string imageUrl_; // 0x40
	public const int ImageIdFieldNumber = 10;
	private string imageId_; // 0x48
	public const int TokenIdFieldNumber = 11;
	private string tokenId_; // 0x50
	public const int FrameIdFieldNumber = 12;
	private string frameId_; // 0x58
	public const int NameStyleFieldNumber = 13;
	private string nameStyle_; // 0x60
	public const int TeamNameFieldNumber = 14;
	private string teamName_; // 0x68

	// Properties
	[GeneratedCode("protoc", null)]
	[DebuggerNonUserCode]
	public static MessageParser<StrikeShowLeaderboardPlayer> Parser { get; }
	[GeneratedCode("protoc", null)]
	[DebuggerNonUserCode]
	public static MessageDescriptor Descriptor { get; }
	[DebuggerNonUserCode]
	[GeneratedCode("protoc", null)]
	private MessageDescriptor pb::Google.Protobuf.IMessage.Descriptor { get; }
	[DebuggerNonUserCode]
	[GeneratedCode("protoc", null)]
	public string PublicId { get; set; }
	[DebuggerNonUserCode]
	[GeneratedCode("protoc", null)]
	public string Nickname { get; set; }
	[DebuggerNonUserCode]
	[GeneratedCode("protoc", null)]
	public long Score { get; set; }
	[DebuggerNonUserCode]
	[GeneratedCode("protoc", null)]
	public long Rank { get; set; }
	[GeneratedCode("protoc", null)]
	[DebuggerNonUserCode]
	public bool IsBot { get; set; }
	[GeneratedCode("protoc", null)]
	[DebuggerNonUserCode]
	public bool IsMe { get; set; }
	[GeneratedCode("protoc", null)]
	[DebuggerNonUserCode]
	public bool IsInPromote { get; set; }
	[GeneratedCode("protoc", null)]
	[DebuggerNonUserCode]
	public bool IsInDemote { get; set; }
	[GeneratedCode("protoc", null)]
	[DebuggerNonUserCode]
	public string ImageUrl { get; set; }
	[DebuggerNonUserCode]
	[GeneratedCode("protoc", null)]
	public string ImageId { get; set; }
	[DebuggerNonUserCode]
	[GeneratedCode("protoc", null)]
	public string TokenId { get; set; }
	[GeneratedCode("protoc", null)]
	[DebuggerNonUserCode]
	public string FrameId { get; set; }
	[DebuggerNonUserCode]
	[GeneratedCode("protoc", null)]
	public string NameStyle { get; set; }
	[DebuggerNonUserCode]
	[GeneratedCode("protoc", null)]
	public string TeamName { get; set; }

	// Methods

	// RVA: 0x386BAE4 Offset: 0x386BAE4 VA: 0x386BAE4
	public static MessageParser<StrikeShowLeaderboardPlayer> get_Parser() { }

	// RVA: 0x386BB3C Offset: 0x386BB3C VA: 0x386BB3C
	public static MessageDescriptor get_Descriptor() { }

	// RVA: 0x386BC40 Offset: 0x386BC40 VA: 0x386BC40 Slot: 8
	private MessageDescriptor pb::Google.Protobuf.IMessage.get_Descriptor() { }

	[GeneratedCode("protoc", null)]
	[DebuggerNonUserCode]
	// RVA: 0x386BC8C Offset: 0x386BC8C VA: 0x386BC8C
	public void .ctor() { }

	[DebuggerNonUserCode]
	[GeneratedCode("protoc", null)]
	// RVA: 0x386BD54 Offset: 0x386BD54 VA: 0x386BD54
	public void .ctor(StrikeShowLeaderboardPlayer other) { }

	[GeneratedCode("protoc", null)]
	[DebuggerNonUserCode]
	// RVA: 0x386BE3C Offset: 0x386BE3C VA: 0x386BE3C Slot: 10
	public StrikeShowLeaderboardPlayer Clone() { }

	// RVA: 0x386BE9C Offset: 0x386BE9C VA: 0x386BE9C
	public string get_PublicId() { }

	// RVA: 0x386BEA4 Offset: 0x386BEA4 VA: 0x386BEA4
	public void set_PublicId(string value) { }

	// RVA: 0x386BF20 Offset: 0x386BF20 VA: 0x386BF20
	public string get_Nickname() { }

	// RVA: 0x386BF28 Offset: 0x386BF28 VA: 0x386BF28
	public void set_Nickname(string value) { }

	// RVA: 0x386BFA4 Offset: 0x386BFA4 VA: 0x386BFA4
	public long get_Score() { }

	// RVA: 0x386BFAC Offset: 0x386BFAC VA: 0x386BFAC
	public void set_Score(long value) { }

	// RVA: 0x386BFB4 Offset: 0x386BFB4 VA: 0x386BFB4
	public long get_Rank() { }

	// RVA: 0x386BFBC Offset: 0x386BFBC VA: 0x386BFBC
	public void set_Rank(long value) { }

	// RVA: 0x386BFC4 Offset: 0x386BFC4 VA: 0x386BFC4
	public bool get_IsBot() { }

	// RVA: 0x386BFCC Offset: 0x386BFCC VA: 0x386BFCC
	public void set_IsBot(bool value) { }

	// RVA: 0x386BFD8 Offset: 0x386BFD8 VA: 0x386BFD8
	public bool get_IsMe() { }

	// RVA: 0x386BFE0 Offset: 0x386BFE0 VA: 0x386BFE0
	public void set_IsMe(bool value) { }

	// RVA: 0x386BFEC Offset: 0x386BFEC VA: 0x386BFEC
	public bool get_IsInPromote() { }

	// RVA: 0x386BFF4 Offset: 0x386BFF4 VA: 0x386BFF4
	public void set_IsInPromote(bool value) { }

	// RVA: 0x386C000 Offset: 0x386C000 VA: 0x386C000
	public bool get_IsInDemote() { }

	// RVA: 0x386C008 Offset: 0x386C008 VA: 0x386C008
	public void set_IsInDemote(bool value) { }

	// RVA: 0x386C014 Offset: 0x386C014 VA: 0x386C014
	public string get_ImageUrl() { }

	// RVA: 0x386C01C Offset: 0x386C01C VA: 0x386C01C
	public void set_ImageUrl(string value) { }

	// RVA: 0x386C098 Offset: 0x386C098 VA: 0x386C098
	public string get_ImageId() { }

	// RVA: 0x386C0A0 Offset: 0x386C0A0 VA: 0x386C0A0
	public void set_ImageId(string value) { }

	// RVA: 0x386C11C Offset: 0x386C11C VA: 0x386C11C
	public string get_TokenId() { }

	// RVA: 0x386C124 Offset: 0x386C124 VA: 0x386C124
	public void set_TokenId(string value) { }

	// RVA: 0x386C1A0 Offset: 0x386C1A0 VA: 0x386C1A0
	public string get_FrameId() { }

	// RVA: 0x386C1A8 Offset: 0x386C1A8 VA: 0x386C1A8
	public void set_FrameId(string value) { }

	// RVA: 0x386C224 Offset: 0x386C224 VA: 0x386C224
	public string get_NameStyle() { }

	// RVA: 0x386C22C Offset: 0x386C22C VA: 0x386C22C
	public void set_NameStyle(string value) { }

	// RVA: 0x386C2A8 Offset: 0x386C2A8 VA: 0x386C2A8
	public string get_TeamName() { }

	// RVA: 0x386C2B0 Offset: 0x386C2B0 VA: 0x386C2B0
	public void set_TeamName(string value) { }

	[DebuggerNonUserCode]
	[GeneratedCode("protoc", null)]
	// RVA: 0x386C32C Offset: 0x386C32C VA: 0x386C32C Slot: 0
	public override bool Equals(object other) { }

	[GeneratedCode("protoc", null)]
	[DebuggerNonUserCode]
	// RVA: 0x386C390 Offset: 0x386C390 VA: 0x386C390 Slot: 9
	public bool Equals(StrikeShowLeaderboardPlayer other) { }

	[GeneratedCode("protoc", null)]
	[DebuggerNonUserCode]
	// RVA: 0x386C51C Offset: 0x386C51C VA: 0x386C51C Slot: 2
	public override int GetHashCode() { }

	[GeneratedCode("protoc", null)]
	[DebuggerNonUserCode]
	// RVA: 0x386C78C Offset: 0x386C78C VA: 0x386C78C Slot: 3
	public override string ToString() { }

	[GeneratedCode("protoc", null)]
	[DebuggerNonUserCode]
	// RVA: 0x386C7E4 Offset: 0x386C7E4 VA: 0x386C7E4 Slot: 6
	public void WriteTo(CodedOutputStream output) { }

	[DebuggerNonUserCode]
	[GeneratedCode("protoc", null)]
	// RVA: 0x386C804 Offset: 0x386C804 VA: 0x386C804 Slot: 12
	private void pb::Google.Protobuf.IBufferMessage.InternalWriteTo(ref WriteContext output) { }

	[DebuggerNonUserCode]
	[GeneratedCode("protoc", null)]
	// RVA: 0x386CAB0 Offset: 0x386CAB0 VA: 0x386CAB0 Slot: 7
	public int CalculateSize() { }

	[DebuggerNonUserCode]
	[GeneratedCode("protoc", null)]
	// RVA: 0x386CD50 Offset: 0x386CD50 VA: 0x386CD50 Slot: 4
	public void MergeFrom(StrikeShowLeaderboardPlayer other) { }

	[DebuggerNonUserCode]
	[GeneratedCode("protoc", null)]
	// RVA: 0x386CEA4 Offset: 0x386CEA4 VA: 0x386CEA4 Slot: 5
	public void MergeFrom(CodedInputStream input) { }

	[DebuggerNonUserCode]
	[GeneratedCode("protoc", null)]
	// RVA: 0x386CEC4 Offset: 0x386CEC4 VA: 0x386CEC4 Slot: 11
	private void pb::Google.Protobuf.IBufferMessage.InternalMergeFrom(ref ParseContext input) { }

	// RVA: 0x386D6C0 Offset: 0x386D6C0 VA: 0x386D6C0
	private static void .cctor() { }
}

// Namespace: Modules.LevelEditor.WaterSort.UI.Scripts