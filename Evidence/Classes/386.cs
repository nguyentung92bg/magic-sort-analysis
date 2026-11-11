public class AppleGameCenterService : IService, IInitializable, IDisposable // TypeDefIndex: 386
{
	// Fields
	private string _signature; // 0x10
	private string _teamPlayerId; // 0x18
	private string _salt; // 0x20
	private string _publicKeyURL; // 0x28
	private ulong _timestamp; // 0x30
	private const string leaderboard_id = "leaderboard_level";
	private const string achievement_id_prefix = "achievement_level_";
	private const int achievement_min_level = 50;
	private const int achievement_level_interval = 100;
	private bool _isPlayerSignedIn; // 0x38

	// Methods

	// RVA: 0x3DEAFC8 Offset: 0x3DEAFC8 VA: 0x3DEAFC8 Slot: 4
	public void Initialize() { }

	// RVA: 0x3DEB020 Offset: 0x3DEB020 VA: 0x3DEB020 Slot: 5
	public void Dispose() { }

	// RVA: 0x3DEB018 Offset: 0x3DEB018 VA: 0x3DEB018
	public bool IsEnabled() { }

	[AsyncStateMachine(typeof(AppleGameCenterService.<Login>d__13))]
	// RVA: 0x3DEB070 Offset: 0x3DEB070 VA: 0x3DEB070
	public Task Login() { }

	[AsyncStateMachine(typeof(AppleGameCenterService.<EnsurePlayerSignedIn>d__14))]
	// RVA: 0x3DEB15C Offset: 0x3DEB15C VA: 0x3DEB15C
	private Task<bool> EnsurePlayerSignedIn() { }

	// RVA: 0x3DEB250 Offset: 0x3DEB250 VA: 0x3DEB250
	public bool IsPlayerSignedIn() { }

	// RVA: 0x3DEB258 Offset: 0x3DEB258 VA: 0x3DEB258
	private void InitializeLeaderboardAndAchievements() { }

	// RVA: 0x3DEB478 Offset: 0x3DEB478 VA: 0x3DEB478
	private void OnLevelWin() { }

	[AsyncStateMachine(typeof(AppleGameCenterService.<UpdateLeaderboard>d__18))]
	// RVA: 0x3DEB360 Offset: 0x3DEB360 VA: 0x3DEB360
	private void UpdateLeaderboard(long score) { }

	[AsyncStateMachine(typeof(AppleGameCenterService.<UnlockAchievement>d__19))]
	// RVA: 0x3DEB5E4 Offset: 0x3DEB5E4 VA: 0x3DEB5E4
	private void UnlockAchievement(string achievementId) { }

	[AsyncStateMachine(typeof(AppleGameCenterService.<UnlockPastAchievements>d__20))]
	// RVA: 0x3DEB3EC Offset: 0x3DEB3EC VA: 0x3DEB3EC
	private void UnlockPastAchievements(int playerLevel) { }

	// RVA: 0x3DEB670 Offset: 0x3DEB670 VA: 0x3DEB670
	public void OpenGameCenterDashboard() { }

	// RVA: 0x3DEB674 Offset: 0x3DEB674 VA: 0x3DEB674
	public void .ctor() { }
}

// Namespace: 
[CompilerGenerated]