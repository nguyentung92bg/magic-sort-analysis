public class SkyJumpWithStageResponseModel // TypeDefIndex: 2645
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
	private Dictionary<string, SkyJumpWithStageUserDetailsByStepsResponseModel> <SkyJumpWithStageUserDetailsBySteps>k__BackingField; // 0x40
	[CompilerGenerated]
	private Dictionary<string, string> <PlayerImages>k__BackingField; // 0x48
	[CompilerGenerated]
	private int <CurrentStage>k__BackingField; // 0x50

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
	[JsonProperty("user_max_step_reached")]
	public int MaxScoreReached { get; set; }
	[JsonProperty("user_details_by_steps")]
	public Dictionary<string, SkyJumpWithStageUserDetailsByStepsResponseModel> SkyJumpWithStageUserDetailsBySteps { get; set; }
	[JsonProperty("players_images")]
	public Dictionary<string, string> PlayerImages { get; set; }
	[JsonProperty("stage")]
	public int CurrentStage { get; set; }

	// Methods

	[CompilerGenerated]
	// RVA: 0x2473570 Offset: 0x2473570 VA: 0x2473570
	public string get_TournamentId() { }

	[CompilerGenerated]
	// RVA: 0x2473578 Offset: 0x2473578 VA: 0x2473578
	public void set_TournamentId(string value) { }

	[CompilerGenerated]
	// RVA: 0x2473580 Offset: 0x2473580 VA: 0x2473580
	public int get_TournamentType() { }

	[CompilerGenerated]
	// RVA: 0x2473588 Offset: 0x2473588 VA: 0x2473588
	public void set_TournamentType(int value) { }

	[CompilerGenerated]
	// RVA: 0x2473590 Offset: 0x2473590 VA: 0x2473590
	public long get_StartTime() { }

	[CompilerGenerated]
	// RVA: 0x2473598 Offset: 0x2473598 VA: 0x2473598
	public void set_StartTime(long value) { }

	[CompilerGenerated]
	// RVA: 0x24735A0 Offset: 0x24735A0 VA: 0x24735A0
	public long get_FinishTime() { }

	[CompilerGenerated]
	// RVA: 0x24735A8 Offset: 0x24735A8 VA: 0x24735A8
	public void set_FinishTime(long value) { }

	[CompilerGenerated]
	// RVA: 0x24735B0 Offset: 0x24735B0 VA: 0x24735B0
	public bool get_IsFinished() { }

	[CompilerGenerated]
	// RVA: 0x24735B8 Offset: 0x24735B8 VA: 0x24735B8
	public void set_IsFinished(bool value) { }

	[CompilerGenerated]
	// RVA: 0x24735C4 Offset: 0x24735C4 VA: 0x24735C4
	public bool get_IsClaimed() { }

	[CompilerGenerated]
	// RVA: 0x24735CC Offset: 0x24735CC VA: 0x24735CC
	public void set_IsClaimed(bool value) { }

	[CompilerGenerated]
	// RVA: 0x24735D8 Offset: 0x24735D8 VA: 0x24735D8
	public int get_Score() { }

	[CompilerGenerated]
	// RVA: 0x24735E0 Offset: 0x24735E0 VA: 0x24735E0
	public void set_Score(int value) { }

	[CompilerGenerated]
	// RVA: 0x24735E8 Offset: 0x24735E8 VA: 0x24735E8
	public int get_MaxScoreReached() { }

	[CompilerGenerated]
	// RVA: 0x24735F0 Offset: 0x24735F0 VA: 0x24735F0
	public void set_MaxScoreReached(int value) { }

	[CompilerGenerated]
	// RVA: 0x24735F8 Offset: 0x24735F8 VA: 0x24735F8
	public Dictionary<string, SkyJumpWithStageUserDetailsByStepsResponseModel> get_SkyJumpWithStageUserDetailsBySteps() { }

	[CompilerGenerated]
	// RVA: 0x2473600 Offset: 0x2473600 VA: 0x2473600
	public void set_SkyJumpWithStageUserDetailsBySteps(Dictionary<string, SkyJumpWithStageUserDetailsByStepsResponseModel> value) { }

	[CompilerGenerated]
	// RVA: 0x2473608 Offset: 0x2473608 VA: 0x2473608
	public Dictionary<string, string> get_PlayerImages() { }

	[CompilerGenerated]
	// RVA: 0x2473610 Offset: 0x2473610 VA: 0x2473610
	public void set_PlayerImages(Dictionary<string, string> value) { }

	[CompilerGenerated]
	// RVA: 0x2473618 Offset: 0x2473618 VA: 0x2473618
	public int get_CurrentStage() { }

	[CompilerGenerated]
	// RVA: 0x2473620 Offset: 0x2473620 VA: 0x2473620
	public void set_CurrentStage(int value) { }

	// RVA: 0x2473628 Offset: 0x2473628 VA: 0x2473628
	public void .ctor() { }
}

// Namespace: Modules.Contexts.Home.SkyJumpWithStage.Scripts