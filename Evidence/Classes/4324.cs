public class FriendsRemoteService : IRestartableService, IService, IInitializable, IDisposable // TypeDefIndex: 4324
{
	// Fields
	private readonly HttpProxy _httpProxy; // 0x10
	private readonly BackendEnvironmentConfig _backendEnvironmentConfig; // 0x18
	private CancellationTokenSource _cts; // 0x20

	// Methods

	// RVA: 0x1C75028 Offset: 0x1C75028 VA: 0x1C75028
	public void .ctor(HttpProxy httpProxy, BackendEnvironmentConfig backendEnvironmentConfig) { }

	// RVA: 0x1C7506C Offset: 0x1C7506C VA: 0x1C7506C Slot: 4
	public void Initialize() { }

	// RVA: 0x1C750D4 Offset: 0x1C750D4 VA: 0x1C750D4 Slot: 5
	public void Dispose() { }

	// RVA: 0x1C7510C Offset: 0x1C7510C VA: 0x1C7510C
	public void CancelRequests() { }

	[AsyncStateMachine(typeof(FriendsRemoteService.<SendFriendRequest>d__7))]
	// RVA: 0x1C75194 Offset: 0x1C75194 VA: 0x1C75194
	public Task<ApiResponse<SendFriendRequestResponse>> SendFriendRequest(SendFriendRequestModel requestModel) { }

	[AsyncStateMachine(typeof(FriendsRemoteService.<GetMyFriendRequests>d__8))]
	// RVA: 0x1C752C0 Offset: 0x1C752C0 VA: 0x1C752C0
	public Task<ApiResponse<FriendRequestListResponse>> GetMyFriendRequests() { }

	[AsyncStateMachine(typeof(FriendsRemoteService.<GetMySentFriendRequests>d__9))]
	// RVA: 0x1C753CC Offset: 0x1C753CC VA: 0x1C753CC
	public Task<ApiResponse<FriendRequestListResponse>> GetMySentFriendRequests() { }

	[AsyncStateMachine(typeof(FriendsRemoteService.<AnswerFriendRequest>d__10))]
	// RVA: 0x1C754D8 Offset: 0x1C754D8 VA: 0x1C754D8
	public Task<ApiResponse<FriendsWebResponse>> AnswerFriendRequest(AnswerFriendRequestModel requestModel) { }

	[AsyncStateMachine(typeof(FriendsRemoteService.<CancelFriendRequest>d__11))]
	// RVA: 0x1C75604 Offset: 0x1C75604 VA: 0x1C75604
	public Task<ApiResponse<FriendsWebResponse>> CancelFriendRequest(CancelFriendRequestModel requestModel) { }

	[AsyncStateMachine(typeof(FriendsRemoteService.<GetMyFriendList>d__12))]
	// RVA: 0x1C75730 Offset: 0x1C75730 VA: 0x1C75730
	public Task<ApiResponse<FriendListResponse>> GetMyFriendList() { }

	[AsyncStateMachine(typeof(FriendsRemoteService.<GetFriendSuggestions>d__13))]
	// RVA: 0x1C7583C Offset: 0x1C7583C VA: 0x1C7583C
	public Task<ApiResponse<FriendSuggestionsResponse>> GetFriendSuggestions() { }

	[AsyncStateMachine(typeof(FriendsRemoteService.<DismissFriendSuggestion>d__14))]
	// RVA: 0x1C75948 Offset: 0x1C75948 VA: 0x1C75948
	public Task<ApiResponse<FriendsWebResponse>> DismissFriendSuggestion(DismissFriendSuggestionRequestModel requestModel) { }

	[AsyncStateMachine(typeof(FriendsRemoteService.<DeleteFriend>d__15))]
	// RVA: 0x1C75A74 Offset: 0x1C75A74 VA: 0x1C75A74
	public Task<ApiResponse<FriendsWebResponse>> DeleteFriend(DeleteFriendRequestModel requestModel) { }

	[AsyncStateMachine(typeof(FriendsRemoteService.<AutoAddFacebookFriends>d__16))]
	// RVA: 0x1C75BA0 Offset: 0x1C75BA0 VA: 0x1C75BA0
	public Task<ApiResponse<AutoAddFacebookFriendsResponse>> AutoAddFacebookFriends(AutoAddFacebookFriendsRequestModel requestModel) { }

	[AsyncStateMachine(typeof(FriendsRemoteService.<AutoAddFriend>d__17))]
	// RVA: 0x1C75CCC Offset: 0x1C75CCC VA: 0x1C75CCC
	public Task<ApiResponse<AutoAddFriendResponse>> AutoAddFriend(AutoAddFriendRequestModel requestModel) { }

	[AsyncStateMachine(typeof(FriendsRemoteService.<FindFriend>d__18))]
	// RVA: 0x1C75DF8 Offset: 0x1C75DF8 VA: 0x1C75DF8
	public Task<FriendProfileData> FindFriend(string publicId) { }
}

// Namespace: Modules.Contexts.Home.Friends.Scripts