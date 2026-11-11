public class StrikeShowLeaderboardPlayerViewModel : IStrikeShowLeaderboardRowViewModel // TypeDefIndex: 2517
{
	// Fields
	public string UserId; // 0x10
	public string UserName; // 0x18
	public string TeamName; // 0x20
	public string PictureId; // 0x28
	public string TokenId; // 0x30
	public string FrameId; // 0x38
	public string NameStyleId; // 0x40
	public int Score; // 0x48
	public int Rank; // 0x4C
	public bool IsMe; // 0x50
	public bool IsSelectable; // 0x51
	public bool IsInPromote; // 0x52
	public bool IsInDemote; // 0x53
	public List<RewardModel> Rewards; // 0x58
	public StrikeShowLeagueType CurrentLeague; // 0x60

	// Methods

	// RVA: 0x2AF7DC4 Offset: 0x2AF7DC4 VA: 0x2AF7DC4
	public void .ctor() { }
}

// Namespace: Modules.Contexts.Home.StrikeShow.Scripts.UI