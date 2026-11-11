public class ReferralService : IService, IInitializable, IDisposable, IDataInitializable // TypeDefIndex: 443
{
	// Fields
	private string _url; // 0x10
	private List<ReferralRewardItem> _referralRewards; // 0x18
	private readonly IPlayerService _playerService; // 0x20
	private readonly RemoteConfigs _remoteConfigs; // 0x28
	private readonly ReferralRemoteService _remoteService; // 0x30
	private readonly ReferralDataService _dataService; // 0x38
	private bool _showedInviteInSession; // 0x40
	private const string DefaultShareText = "ShareMessageTemplate";

	// Properties
	public bool HasReferralRewards { get; }

	// Methods

	// RVA: 0x3D1B9E0 Offset: 0x3D1B9E0 VA: 0x3D1B9E0
	public bool get_HasReferralRewards() { }

	// RVA: 0x3D1BA34 Offset: 0x3D1BA34 VA: 0x3D1BA34
	public void .ctor(IPlayerService playerService, RemoteConfigs remoteConfigs, ReferralRemoteService remoteService, ReferralDataService dataService) { }

	// RVA: 0x3D1BAA8 Offset: 0x3D1BAA8 VA: 0x3D1BAA8 Slot: 4
	public void Initialize() { }

	[AsyncStateMachine(typeof(ReferralService.<InitializeData>d__12))]
	// RVA: 0x3D1BB78 Offset: 0x3D1BB78 VA: 0x3D1BB78 Slot: 6
	public void InitializeData() { }

	// RVA: 0x3D1BC30 Offset: 0x3D1BC30 VA: 0x3D1BC30 Slot: 5
	public void Dispose() { }

	// RVA: 0x3D1BD00 Offset: 0x3D1BD00 VA: 0x3D1BD00
	private void CheckMilestoneStatus() { }

	[AsyncStateMachine(typeof(ReferralService.<LevelWin>d__15))]
	// RVA: 0x3D1BE08 Offset: 0x3D1BE08 VA: 0x3D1BE08
	private void LevelWin() { }

	// RVA: 0x3D1BEBC Offset: 0x3D1BEBC VA: 0x3D1BEBC
	public void OpenShareDialogue(string source) { }

	// RVA: 0x3D1BF18 Offset: 0x3D1BF18 VA: 0x3D1BF18
	private string BuildPayload() { }

	// RVA: 0x3D1C014 Offset: 0x3D1C014 VA: 0x3D1C014
	private void SendShareOpenedEvent(string source) { }

	// RVA: 0x3D1BDE4 Offset: 0x3D1BDE4 VA: 0x3D1BDE4
	private ReferralConfigModel GetConfig() { }

	[AsyncStateMachine(typeof(ReferralService.<InitializeInviteData>d__20))]
	// RVA: 0x3D1CC30 Offset: 0x3D1CC30 VA: 0x3D1CC30
	private Task InitializeInviteData() { }

	// RVA: 0x3D1CD20 Offset: 0x3D1CD20 VA: 0x3D1CD20
	private void CacheReferrerIdFromAttribution() { }

	// RVA: 0x3D1CEB4 Offset: 0x3D1CEB4 VA: 0x3D1CEB4
	private string GetReferrerPublicId() { }

	// RVA: 0x3D1D018 Offset: 0x3D1D018 VA: 0x3D1D018
	public List<RewardModel> GetEarnedRewards() { }

	// RVA: 0x3D1D2A4 Offset: 0x3D1D2A4 VA: 0x3D1D2A4
	public List<RewardModel> GetReferralRewards() { }

	[AsyncStateMachine(typeof(ReferralService.<RewardsClaimed>d__25))]
	// RVA: 0x3D1D2C0 Offset: 0x3D1D2C0 VA: 0x3D1D2C0
	public void RewardsClaimed() { }

	// RVA: 0x3D1D378 Offset: 0x3D1D378 VA: 0x3D1D378
	public bool CanShowInvite() { }

	// RVA: 0x3D1D3B0 Offset: 0x3D1D3B0 VA: 0x3D1D3B0
	public void MarkInviteShowed() { }

	// RVA: 0x3D1D3BC Offset: 0x3D1D3BC VA: 0x3D1D3BC
	public int GetMilestone() { }

	// RVA: 0x3D1D3D8 Offset: 0x3D1D3D8 VA: 0x3D1D3D8
	private static string GetStoreUrl(ReferralConfigModel config) { }

	// RVA: 0x3D1C070 Offset: 0x3D1C070 VA: 0x3D1C070
	private static void AndroidShare(string payload) { }

	// RVA: 0x3D1D3F0 Offset: 0x3D1D3F0 VA: 0x3D1D3F0
	private static void HandleShareCompleted(bool success) { }
}

// Namespace: Modules.Infrastructure.Service