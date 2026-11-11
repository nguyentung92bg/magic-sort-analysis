public class WeeklyLeaderBoardPlayer // TypeDefIndex: 1963
{
	// Fields
	[JsonProperty("Nickname")]
	public string NickName; // 0x10
	[JsonProperty("Score")]
	public int Score; // 0x18
	[JsonProperty("PublicID")]
	public string PublicId; // 0x20
	[JsonProperty("Rank")]
	public int Rank; // 0x28
	[JsonProperty("IsMe")]
	public bool IsMe; // 0x2C
	[JsonProperty("IsBot")]
	public bool IsBot; // 0x2D
	[JsonProperty("ImageUrl")]
	public string ImageUrl; // 0x30
	[JsonProperty("ImageID")]
	public string ImageID; // 0x38
	[JsonProperty("TokenID")]
	public string TokenID; // 0x40
	[JsonProperty("FrameID")]
	public string FrameID; // 0x48
	[JsonProperty("NameStyle")]
	public string NameStyle; // 0x50
	[JsonProperty("TeamName")]
	public string TeamName; // 0x58

	// Methods

	// RVA: 0x32D6DB4 Offset: 0x32D6DB4 VA: 0x32D6DB4
	public void .ctor() { }
}

// Namespace: Modules.Contexts.Home.WeeklyTournament.Scripts