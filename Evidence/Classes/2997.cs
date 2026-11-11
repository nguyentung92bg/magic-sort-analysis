public class ShowUserProfileCommand : ICommand // TypeDefIndex: 2997
{
	// Fields
	private readonly string _userPublicId; // 0x10
	private readonly IPopUpService _popUpService; // 0x18
	private readonly ProfileSpriteCacheService _cacheService; // 0x20
	private readonly UserProfileService _userProfileService; // 0x28
	private readonly ShowProfileCommandSource _source; // 0x30
	private readonly bool _canShowAddFriend; // 0x34

	// Methods

	// RVA: 0x2AE4368 Offset: 0x2AE4368 VA: 0x2AE4368
	public void .ctor(string userPublicId, ShowProfileCommandSource source, bool canShowAddFriend) { }

	[AsyncStateMachine(typeof(ShowUserProfileCommand.<ExecuteAsync>d__7))]
	// RVA: 0x2AE44B8 Offset: 0x2AE44B8 VA: 0x2AE44B8 Slot: 4
	public Task ExecuteAsync() { }

	// RVA: 0x2AE726C Offset: 0x2AE726C VA: 0x2AE726C Slot: 5
	public void Dispose() { }

	// RVA: 0x2AE7270 Offset: 0x2AE7270 VA: 0x2AE7270
	private void ShowUserProfilePopup() { }

	// RVA: 0x2AE73D0 Offset: 0x2AE73D0 VA: 0x2AE73D0
	private void ShowOtherUserProfilePopup(UserProfileModel profile) { }
}

// Namespace: Modules.Contexts.Home.PreBoosterWinStreak.Scripts