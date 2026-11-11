public class FriendsService : IRestartableService, IService, IInitializable, IDisposable, IDataInitializable, IIntervalUpdate // TypeDefIndex: 4341
{
	// Fields
	private readonly IPlayerService _playerService; // 0x10
	private readonly FriendsRemoteService _remoteService; // 0x18
	private readonly FriendsDataService _dataService; // 0x20
	private readonly RemoteConfigs _remoteConfigs; // 0x28
	private readonly FacebookLoginService _facebookLoginService; // 0x30
	private readonly RewardService _rewardService; // 0x38
	private readonly ProfileSpriteCacheService _profileSpriteCacheService; // 0x40
	private readonly CustomUpdater _customUpdater; // 0x48
	private List<FriendElementViewModel> _friends; // 0x50
	private List<FriendRequestElementViewModel> _incomingRequests; // 0x58
	private List<FriendRequestElementViewModel> _sentRequests; // 0x60
	private List<FriendSuggestionViewModel> _friendSuggestions; // 0x68
	private bool _shouldSyncRemote; // 0x70
	[CompilerGenerated]
	private bool <ShouldShowNavBarNotif>k__BackingField; // 0x71
	[CompilerGenerated]
	private FriendsServiceStatus <Status>k__BackingField; // 0x74
	private const int SuggestionPageSize = 5;

	// Properties
	public bool ShouldShowNavBarNotif { get; set; }
	public FriendsServiceStatus Status { get; set; }

	// Methods

	[CompilerGenerated]
	// RVA: 0x1C78CB0 Offset: 0x1C78CB0 VA: 0x1C78CB0
	public bool get_ShouldShowNavBarNotif() { }

	[CompilerGenerated]
	// RVA: 0x1C78CB8 Offset: 0x1C78CB8 VA: 0x1C78CB8
	private void set_ShouldShowNavBarNotif(bool value) { }

	[CompilerGenerated]
	// RVA: 0x1C78CC4 Offset: 0x1C78CC4 VA: 0x1C78CC4
	public FriendsServiceStatus get_Status() { }

	[CompilerGenerated]
	// RVA: 0x1C78CCC Offset: 0x1C78CCC VA: 0x1C78CCC
	private void set_Status(FriendsServiceStatus value) { }

	// RVA: 0x1C78CD4 Offset: 0x1C78CD4 VA: 0x1C78CD4
	public void .ctor(IPlayerService playerService, FriendsRemoteService remoteService, FriendsDataService dataService, RemoteConfigs remoteConfigs, FacebookLoginService facebookLoginService, RewardService rewardService, ProfileSpriteCacheService profileSpriteCacheService, CustomUpdater customUpdater) { }

	// RVA: 0x1C78DA8 Offset: 0x1C78DA8 VA: 0x1C78DA8 Slot: 4
	public void Initialize() { }

	[AsyncStateMachine(typeof(FriendsService.<InitializeData>d__24))]
	// RVA: 0x1C78EFC Offset: 0x1C78EFC VA: 0x1C78EFC Slot: 6
	public void InitializeData() { }

	// RVA: 0x1C78FB4 Offset: 0x1C78FB4 VA: 0x1C78FB4
	private void RequestProfileImages() { }

	// RVA: 0x1C79398 Offset: 0x1C79398 VA: 0x1C79398 Slot: 5
	public void Dispose() { }

	// RVA: 0x1C79548 Offset: 0x1C79548 VA: 0x1C79548 Slot: 7
	public void IntervalUpdate() { }

	// RVA: 0x1C79554 Offset: 0x1C79554 VA: 0x1C79554
	private void OnLevelWin() { }

	// RVA: 0x1C79654 Offset: 0x1C79654 VA: 0x1C79654
	private void OnFacebookFriendsFetched() { }

	// RVA: 0x1C79780 Offset: 0x1C79780 VA: 0x1C79780
	private void OnFacebookStateChanged() { }

	// RVA: 0x1C7997C Offset: 0x1C7997C VA: 0x1C7997C
	public bool IsEnabled() { }

	// RVA: 0x1C79998 Offset: 0x1C79998 VA: 0x1C79998
	public List<FriendElementViewModel> GetFriends() { }

	// RVA: 0x1C799A0 Offset: 0x1C799A0 VA: 0x1C799A0
	public FriendElementViewModel GetFriend(string publicId) { }

	// RVA: 0x1C79B2C Offset: 0x1C79B2C VA: 0x1C79B2C
	public List<FriendRequestElementViewModel> GetIncomingFriendRequests() { }

	[AsyncStateMachine(typeof(FriendsService.<RefreshAll>d__35))]
	// RVA: 0x1C79568 Offset: 0x1C79568 VA: 0x1C79568
	private Task RefreshAll() { }

	[AsyncStateMachine(typeof(FriendsService.<RefreshFriends>d__36))]
	// RVA: 0x1C79B34 Offset: 0x1C79B34 VA: 0x1C79B34
	private Task RefreshFriends() { }

	[AsyncStateMachine(typeof(FriendsService.<RefreshIncomingRequests>d__37))]
	// RVA: 0x1C79C20 Offset: 0x1C79C20 VA: 0x1C79C20
	private Task RefreshIncomingRequests() { }

	[AsyncStateMachine(typeof(FriendsService.<RefreshOutgoingRequests>d__38))]
	// RVA: 0x1C79D0C Offset: 0x1C79D0C VA: 0x1C79D0C
	private Task RefreshOutgoingRequests() { }

	[AsyncStateMachine(typeof(FriendsService.<RefreshFriendSuggestions>d__39))]
	// RVA: 0x1C79DF8 Offset: 0x1C79DF8 VA: 0x1C79DF8
	private Task RefreshFriendSuggestions() { }

	[AsyncStateMachine(typeof(FriendsService.<SendFriendRequest>d__40))]
	// RVA: 0x1C79EE4 Offset: 0x1C79EE4 VA: 0x1C79EE4
	public Task<bool> SendFriendRequest(FriendUserViewModel user, string directory) { }

	// RVA: 0x1C7A028 Offset: 0x1C7A028 VA: 0x1C7A028
	public void DismissFriendSuggestion(string publicId, bool notifyBackend = True) { }

	[AsyncStateMachine(typeof(FriendsService.<SendDismissSuggestion>d__42))]
	// RVA: 0x1C7A2F4 Offset: 0x1C7A2F4 VA: 0x1C7A2F4
	private void SendDismissSuggestion(string publicId) { }

	[AsyncStateMachine(typeof(FriendsService.<AnswerFriendRequest>d__43))]
	// RVA: 0x1C7A3C8 Offset: 0x1C7A3C8 VA: 0x1C7A3C8
	public Task<int> AnswerFriendRequest(string userPublicId, bool isAccepted) { }

	[AsyncStateMachine(typeof(FriendsService.<DeleteFriend>d__44))]
	// RVA: 0x1C7A500 Offset: 0x1C7A500 VA: 0x1C7A500
	public Task<bool> DeleteFriend(string publicId) { }

	[AsyncStateMachine(typeof(FriendsService.<FindFriend>d__45))]
	// RVA: 0x1C7A634 Offset: 0x1C7A634 VA: 0x1C7A634
	public Task<FriendUserViewModel> FindFriend(string publicId) { }

	// RVA: 0x1C7A760 Offset: 0x1C7A760 VA: 0x1C7A760
	public bool IsMyFriend(string publicId) { }

	// RVA: 0x1C7A8EC Offset: 0x1C7A8EC VA: 0x1C7A8EC
	public int GetFriendsCount() { }

	// RVA: 0x1C7A934 Offset: 0x1C7A934 VA: 0x1C7A934
	public int GetRequestsCount() { }

	// RVA: 0x1C7A97C Offset: 0x1C7A97C VA: 0x1C7A97C
	public bool HasAnyFriends() { }

	// RVA: 0x1C7AAF8 Offset: 0x1C7AAF8 VA: 0x1C7AAF8
	public bool HasAnyRequests() { }

	// RVA: 0x1C7AB48 Offset: 0x1C7AB48 VA: 0x1C7AB48
	public bool HasUnseenRequests() { }

	// RVA: 0x1C7AB7C Offset: 0x1C7AB7C VA: 0x1C7AB7C
	public bool IsFriendListFull() { }

	// RVA: 0x1C7ABDC Offset: 0x1C7ABDC VA: 0x1C7ABDC
	private FriendElementViewModel MapFriend(FriendUserData data) { }

	// RVA: 0x1C7AD9C Offset: 0x1C7AD9C VA: 0x1C7AD9C
	private FriendElementViewModel MapAutoAddedFriend(AutoAddedFriendData data) { }

	// RVA: 0x1C7AE38 Offset: 0x1C7AE38 VA: 0x1C7AE38
	private FriendRequestElementViewModel MapRequest(FriendRequestData data) { }

	// RVA: 0x1C7AC78 Offset: 0x1C7AC78 VA: 0x1C7AC78
	private FriendUserViewModel MapUser(string publicId, string userName, string avatarUrl, string avatarId, int progress, string frameId, string nameStyle, string teamName, string tokenId) { }

	// RVA: 0x1C7AEE0 Offset: 0x1C7AEE0 VA: 0x1C7AEE0
	private void RemoveFromFriends(string publicId) { }

	// RVA: 0x1C7B260 Offset: 0x1C7B260 VA: 0x1C7B260
	private void UpdateFriends(FriendListResponse response) { }

	// RVA: 0x1C7B0FC Offset: 0x1C7B0FC VA: 0x1C7B0FC
	private void SortFriends() { }

	// RVA: 0x1C7B8B4 Offset: 0x1C7B8B4 VA: 0x1C7B8B4
	private void UpdateRequests(FriendRequestListResponse response, bool isIncoming) { }

	// RVA: 0x1C7BAD8 Offset: 0x1C7BAD8 VA: 0x1C7BAD8
	private FriendRequestElementViewModel RemoveIncomingFriendRequest(string publicId) { }

	// RVA: 0x1C7BD08 Offset: 0x1C7BD08 VA: 0x1C7BD08
	private void AddFriendFromRequest(FriendRequestElementViewModel vm) { }

	// RVA: 0x1C79958 Offset: 0x1C79958 VA: 0x1C79958
	private FriendsConfigModel GetConfig() { }

	// RVA: 0x1C7BE78 Offset: 0x1C7BE78 VA: 0x1C7BE78
	public bool HasPendingRequest(string friendId) { }

	[AsyncStateMachine(typeof(FriendsService.<AutoAddFacebookFriends>d__65))]
	// RVA: 0x1C79680 Offset: 0x1C79680 VA: 0x1C79680
	private Task AutoAddFacebookFriends(List<string> facebookIds) { }

	// RVA: 0x1C7BFFC Offset: 0x1C7BFFC VA: 0x1C7BFFC
	public List<IFriendScrollElementViewModel> GetFriendSuggestions() { }

	// RVA: 0x1C7C158 Offset: 0x1C7C158 VA: 0x1C7C158
	public bool HasAnySuggestions() { }

	// RVA: 0x1C7C1AC Offset: 0x1C7C1AC VA: 0x1C7C1AC
	private List<string> SanitizeFacebookIds(List<string> facebookIds) { }

	// RVA: 0x1C7C3FC Offset: 0x1C7C3FC VA: 0x1C7C3FC
	public bool CanClaimSyncReward() { }

	// RVA: 0x1C7C4E8 Offset: 0x1C7C4E8 VA: 0x1C7C4E8
	public RewardModel GetSyncReward() { }

	// RVA: 0x1C7C504 Offset: 0x1C7C504 VA: 0x1C7C504
	private void InitializeFacebookSyncRewardClaimStatus() { }

	// RVA: 0x1C7C5C8 Offset: 0x1C7C5C8 VA: 0x1C7C5C8
	public void Refresh() { }

	// RVA: 0x1C7C4CC Offset: 0x1C7C4CC VA: 0x1C7C4CC
	public bool GetFacebookFriendsEnabled() { }

	[AsyncStateMachine(typeof(FriendsService.<TryAddFriendsFromDeeplink>d__74))]
	// RVA: 0x1C7C5CC Offset: 0x1C7C5CC VA: 0x1C7C5CC
	private void TryAddFriendsFromDeeplink() { }

	// RVA: 0x1C7C680 Offset: 0x1C7C680 VA: 0x1C7C680
	private void RemoveFromIncomingRequests(FriendElementViewModel viewModel) { }

	// RVA: 0x1C7C84C Offset: 0x1C7C84C VA: 0x1C7C84C
	public bool HasIncomingRequest(string senderPublicId) { }

	// RVA: 0x1C7C9D8 Offset: 0x1C7C9D8 VA: 0x1C7C9D8
	public void ResetNavBarNotif() { }
}

// Namespace: Modules.Contexts.Home.Friends.Scripts