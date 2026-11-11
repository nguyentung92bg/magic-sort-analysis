public class ChampionsLeagueLeaderboardPlayerViewModel : IChampionsLeagueLeaderboardViewModel // TypeDefIndex: 4667
{
	// Fields
	[CompilerGenerated]
	private bool <IsMe>k__BackingField; // 0x10
	[CompilerGenerated]
	private int <Rank>k__BackingField; // 0x14
	[CompilerGenerated]
	private string <Name>k__BackingField; // 0x18
	[CompilerGenerated]
	private int <Score>k__BackingField; // 0x20
	[CompilerGenerated]
	private RewardModel <RewardModel>k__BackingField; // 0x28
	[CompilerGenerated]
	private readonly string <UserId>k__BackingField; // 0x30
	[CompilerGenerated]
	private readonly string <PictureId>k__BackingField; // 0x38
	[CompilerGenerated]
	private readonly string <TokenId>k__BackingField; // 0x40
	[CompilerGenerated]
	private readonly string <FrameId>k__BackingField; // 0x48
	[CompilerGenerated]
	private readonly string <NameStyleId>k__BackingField; // 0x50
	[CompilerGenerated]
	private readonly string <TeamName>k__BackingField; // 0x58
	[CompilerGenerated]
	private readonly bool <IsSelectable>k__BackingField; // 0x60

	// Properties
	public bool IsMe { get; set; }
	public int Rank { get; set; }
	public string Name { get; set; }
	public int Score { get; set; }
	public RewardModel RewardModel { get; set; }
	public string UserId { get; }
	public string PictureId { get; }
	public string TokenId { get; }
	public string FrameId { get; }
	public string NameStyleId { get; }
	public string TeamName { get; }
	public bool IsSelectable { get; }

	// Methods

	[CompilerGenerated]
	// RVA: 0x3A78884 Offset: 0x3A78884 VA: 0x3A78884 Slot: 4
	public bool get_IsMe() { }

	[CompilerGenerated]
	// RVA: 0x3A7888C Offset: 0x3A7888C VA: 0x3A7888C Slot: 5
	public void set_IsMe(bool value) { }

	[CompilerGenerated]
	// RVA: 0x3A78898 Offset: 0x3A78898 VA: 0x3A78898
	public int get_Rank() { }

	[CompilerGenerated]
	// RVA: 0x3A788A0 Offset: 0x3A788A0 VA: 0x3A788A0
	private void set_Rank(int value) { }

	[CompilerGenerated]
	// RVA: 0x3A788A8 Offset: 0x3A788A8 VA: 0x3A788A8
	public string get_Name() { }

	[CompilerGenerated]
	// RVA: 0x3A788B0 Offset: 0x3A788B0 VA: 0x3A788B0
	private void set_Name(string value) { }

	[CompilerGenerated]
	// RVA: 0x3A788B8 Offset: 0x3A788B8 VA: 0x3A788B8
	public int get_Score() { }

	[CompilerGenerated]
	// RVA: 0x3A788C0 Offset: 0x3A788C0 VA: 0x3A788C0
	private void set_Score(int value) { }

	[CompilerGenerated]
	// RVA: 0x3A788C8 Offset: 0x3A788C8 VA: 0x3A788C8
	public RewardModel get_RewardModel() { }

	[CompilerGenerated]
	// RVA: 0x3A788D0 Offset: 0x3A788D0 VA: 0x3A788D0
	public void set_RewardModel(RewardModel value) { }

	[CompilerGenerated]
	// RVA: 0x3A788D8 Offset: 0x3A788D8 VA: 0x3A788D8
	public string get_UserId() { }

	[CompilerGenerated]
	// RVA: 0x3A788E0 Offset: 0x3A788E0 VA: 0x3A788E0
	public string get_PictureId() { }

	[CompilerGenerated]
	// RVA: 0x3A788E8 Offset: 0x3A788E8 VA: 0x3A788E8
	public string get_TokenId() { }

	[CompilerGenerated]
	// RVA: 0x3A788F0 Offset: 0x3A788F0 VA: 0x3A788F0
	public string get_FrameId() { }

	[CompilerGenerated]
	// RVA: 0x3A788F8 Offset: 0x3A788F8 VA: 0x3A788F8
	public string get_NameStyleId() { }

	[CompilerGenerated]
	// RVA: 0x3A78900 Offset: 0x3A78900 VA: 0x3A78900
	public string get_TeamName() { }

	[CompilerGenerated]
	// RVA: 0x3A78908 Offset: 0x3A78908 VA: 0x3A78908
	public bool get_IsSelectable() { }

	// RVA: 0x3A78910 Offset: 0x3A78910 VA: 0x3A78910
	public void .ctor(string name, int rank, bool isMe, int score, RewardModel rewardModel, string userId, string pictureId, string tokenId, string frameId, string nameStyleId, string teamName, bool isSelectable) { }

	// RVA: 0x3A78A24 Offset: 0x3A78A24 VA: 0x3A78A24 Slot: 6
	public void SetRank(int rank) { }
}

// Namespace: Modules.Contexts.Home.ChampionsLeague.UI