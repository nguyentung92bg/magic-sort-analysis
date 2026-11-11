public class GetChampionsLeagueLeaderboardRequest // TypeDefIndex: 4721
{
	// Fields
	[CompilerGenerated]
	private string <TournamentID>k__BackingField; // 0x10
	[CompilerGenerated]
	private long <TournamentType>k__BackingField; // 0x18
	[CompilerGenerated]
	private long <Score>k__BackingField; // 0x20

	// Properties
	[JsonProperty("tournament_id")]
	public string TournamentID { get; set; }
	[JsonProperty("tournament_type")]
	public long TournamentType { get; set; }
	[JsonProperty("score")]
	public long Score { get; set; }

	// Methods

	[CompilerGenerated]
	// RVA: 0x3B28BAC Offset: 0x3B28BAC VA: 0x3B28BAC
	public string get_TournamentID() { }

	[CompilerGenerated]
	// RVA: 0x3B28BB4 Offset: 0x3B28BB4 VA: 0x3B28BB4
	public void set_TournamentID(string value) { }

	[CompilerGenerated]
	// RVA: 0x3B28BBC Offset: 0x3B28BBC VA: 0x3B28BBC
	public long get_TournamentType() { }

	[CompilerGenerated]
	// RVA: 0x3B28BC4 Offset: 0x3B28BC4 VA: 0x3B28BC4
	public void set_TournamentType(long value) { }

	[CompilerGenerated]
	// RVA: 0x3B28BCC Offset: 0x3B28BCC VA: 0x3B28BCC
	public long get_Score() { }

	[CompilerGenerated]
	// RVA: 0x3B28BD4 Offset: 0x3B28BD4 VA: 0x3B28BD4
	public void set_Score(long value) { }

	// RVA: 0x3B28BDC Offset: 0x3B28BDC VA: 0x3B28BDC
	public void .ctor() { }
}

// Namespace: Modules.Contexts.Home.ChampionsLeague.Services