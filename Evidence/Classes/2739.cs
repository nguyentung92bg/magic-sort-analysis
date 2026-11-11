public class SkyJumpResponseModel // TypeDefIndex: 2739
{
	// Fields
	[CompilerGenerated]
	private string <TournamentId>k__BackingField; // 0x10
	[CompilerGenerated]
	private int <TournamentType>k__BackingField; // 0x18
	[CompilerGenerated]
	private long <StartTime>k__BackingField; // 0x20
	[CompilerGenerated]
	private long <FinishTime>k__BackingField; // 0x28
	[CompilerGenerated]
	private bool <IsFinished>k__BackingField; // 0x30
	[CompilerGenerated]
	private bool <IsClaimed>k__BackingField; // 0x31
	[CompilerGenerated]
	private int <Score>k__BackingField; // 0x34
	[CompilerGenerated]
	private int <MaxScoreReached>k__BackingField; // 0x38
	[CompilerGenerated]
	private Dictionary<string, SkyJumpUserDetailsByStepsResponseModel> <SkyJumpUserDetailsBySteps>k__BackingField; // 0x40
	[CompilerGenerated]
	private Dictionary<string, string> <PlayerImages>k__BackingField; // 0x48

	// Properties
	[JsonProperty("tournament_id")]
	public string TournamentId { get; set; }
	[JsonProperty("tournament_type")]
	public int TournamentType { get; set; }
	[JsonProperty("start_time")]
	public long StartTime { get; set; }
	[JsonProperty("finish_time")]
	public long FinishTime { get; set; }
	[JsonProperty("is_finished")]
	public bool IsFinished { get; set; }
	[JsonProperty("is_claimed")]
	public bool IsClaimed { get; set; }
	[JsonProperty("user_score")]
	public int Score { get; set; }
	[JsonProperty("user_max_score")]
	public int MaxScoreReached { get; set; }
	[JsonProperty("user_details_by_steps")]
	public Dictionary<string, SkyJumpUserDetailsByStepsResponseModel> SkyJumpUserDetailsBySteps { get; set; }
	[JsonProperty("players_images")]
	public Dictionary<string, string> PlayerImages { get; set; }

	// Methods

	[CompilerGenerated]
	// RVA: 0x2F12310 Offset: 0x2F12310 VA: 0x2F12310
	public string get_TournamentId() { }

	[CompilerGenerated]
	// RVA: 0x2F12318 Offset: 0x2F12318 VA: 0x2F12318
	public void set_TournamentId(string value) { }

	[CompilerGenerated]
	// RVA: 0x2F12320 Offset: 0x2F12320 VA: 0x2F12320
	public int get_TournamentType() { }

	[CompilerGenerated]
	// RVA: 0x2F12328 Offset: 0x2F12328 VA: 0x2F12328
	public void set_TournamentType(int value) { }

	[CompilerGenerated]
	// RVA: 0x2F12330 Offset: 0x2F12330 VA: 0x2F12330
	public long get_StartTime() { }

	[CompilerGenerated]
	// RVA: 0x2F12338 Offset: 0x2F12338 VA: 0x2F12338
	public void set_StartTime(long value) { }

	[CompilerGenerated]
	// RVA: 0x2F12340 Offset: 0x2F12340 VA: 0x2F12340
	public long get_FinishTime() { }

	[CompilerGenerated]
	// RVA: 0x2F12348 Offset: 0x2F12348 VA: 0x2F12348
	public void set_FinishTime(long value) { }

	[CompilerGenerated]
	// RVA: 0x2F12350 Offset: 0x2F12350 VA: 0x2F12350
	public bool get_IsFinished() { }

	[CompilerGenerated]
	// RVA: 0x2F12358 Offset: 0x2F12358 VA: 0x2F12358
	public void set_IsFinished(bool value) { }

	[CompilerGenerated]
	// RVA: 0x2F12364 Offset: 0x2F12364 VA: 0x2F12364
	public bool get_IsClaimed() { }

	[CompilerGenerated]
	// RVA: 0x2F1236C Offset: 0x2F1236C VA: 0x2F1236C
	public void set_IsClaimed(bool value) { }

	[CompilerGenerated]
	// RVA: 0x2F12378 Offset: 0x2F12378 VA: 0x2F12378
	public int get_Score() { }

	[CompilerGenerated]
	// RVA: 0x2F12380 Offset: 0x2F12380 VA: 0x2F12380
	public void set_Score(int value) { }

	[CompilerGenerated]
	// RVA: 0x2F12388 Offset: 0x2F12388 VA: 0x2F12388
	public int get_MaxScoreReached() { }

	[CompilerGenerated]
	// RVA: 0x2F12390 Offset: 0x2F12390 VA: 0x2F12390
	public void set_MaxScoreReached(int value) { }

	[CompilerGenerated]
	// RVA: 0x2F12398 Offset: 0x2F12398 VA: 0x2F12398
	public Dictionary<string, SkyJumpUserDetailsByStepsResponseModel> get_SkyJumpUserDetailsBySteps() { }

	[CompilerGenerated]
	// RVA: 0x2F123A0 Offset: 0x2F123A0 VA: 0x2F123A0
	public void set_SkyJumpUserDetailsBySteps(Dictionary<string, SkyJumpUserDetailsByStepsResponseModel> value) { }

	[CompilerGenerated]
	// RVA: 0x2F123A8 Offset: 0x2F123A8 VA: 0x2F123A8
	public Dictionary<string, string> get_PlayerImages() { }

	[CompilerGenerated]
	// RVA: 0x2F123B0 Offset: 0x2F123B0 VA: 0x2F123B0
	public void set_PlayerImages(Dictionary<string, string> value) { }

	// RVA: 0x2F123B8 Offset: 0x2F123B8 VA: 0x2F123B8
	public void .ctor() { }
}

// Namespace: Modules.Contexts.Home.SkyJump.Scripts