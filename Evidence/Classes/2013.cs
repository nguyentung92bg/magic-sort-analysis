public class TowerWinStreakEventInfoResponse // TypeDefIndex: 2013
{
	// Fields
	[CompilerGenerated]
	private string <EventId>k__BackingField; // 0x10
	[CompilerGenerated]
	private int <TournamentType>k__BackingField; // 0x18
	[CompilerGenerated]
	private long <StartTime>k__BackingField; // 0x20
	[CompilerGenerated]
	private long <FinishTime>k__BackingField; // 0x28

	// Properties
	[JsonProperty("tournamentID")]
	public string EventId { get; set; }
	[JsonProperty("tournamentType")]
	public int TournamentType { get; set; }
	[JsonProperty("startTime")]
	public long StartTime { get; set; }
	[JsonProperty("finishTime")]
	public long FinishTime { get; set; }

	// Methods

	[CompilerGenerated]
	// RVA: 0x32E1AE0 Offset: 0x32E1AE0 VA: 0x32E1AE0
	public string get_EventId() { }

	[CompilerGenerated]
	// RVA: 0x32E1AE8 Offset: 0x32E1AE8 VA: 0x32E1AE8
	public void set_EventId(string value) { }

	[CompilerGenerated]
	// RVA: 0x32E1AF0 Offset: 0x32E1AF0 VA: 0x32E1AF0
	public int get_TournamentType() { }

	[CompilerGenerated]
	// RVA: 0x32E1AF8 Offset: 0x32E1AF8 VA: 0x32E1AF8
	public void set_TournamentType(int value) { }

	[CompilerGenerated]
	// RVA: 0x32E1B00 Offset: 0x32E1B00 VA: 0x32E1B00
	public long get_StartTime() { }

	[CompilerGenerated]
	// RVA: 0x32E1B08 Offset: 0x32E1B08 VA: 0x32E1B08
	public void set_StartTime(long value) { }

	[CompilerGenerated]
	// RVA: 0x32E1B10 Offset: 0x32E1B10 VA: 0x32E1B10
	public long get_FinishTime() { }

	[CompilerGenerated]
	// RVA: 0x32E1B18 Offset: 0x32E1B18 VA: 0x32E1B18
	public void set_FinishTime(long value) { }

	// RVA: 0x32E1B20 Offset: 0x32E1B20 VA: 0x32E1B20
	public void .ctor() { }
}

// Namespace: Modules.Contexts.Home.TowerWinStreak.Scripts