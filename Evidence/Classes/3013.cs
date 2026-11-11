public class AddFriendView : MonoBehaviour // TypeDefIndex: 3013
{
	// Fields
	[SerializeField]
	private Button _inviteButton; // 0x18
	[SerializeField]
	private Button _findButton; // 0x20
	[SerializeField]
	private ScrollBar _scrollBar; // 0x28
	[SerializeField]
	private BasicScrollAdapter _scrollAdapter; // 0x30
	[SerializeField]
	private FriendsScrollViewAdapter _scrollViewAdapter; // 0x38
	private bool _isVisible; // 0x40
	private FriendsService _friendsService; // 0x48

	// Methods

	// RVA: 0x2AECC98 Offset: 0x2AECC98 VA: 0x2AECC98
	public void Initialize() { }

	// RVA: 0x2AECF28 Offset: 0x2AECF28 VA: 0x2AECF28
	public void Dispose() { }

	// RVA: 0x2AED15C Offset: 0x2AED15C VA: 0x2AED15C
	public void Show() { }

	// RVA: 0x2AED2A8 Offset: 0x2AED2A8 VA: 0x2AED2A8
	public void Hide() { }

	// RVA: 0x2AED2D0 Offset: 0x2AED2D0 VA: 0x2AED2D0
	private void OnInviteButtonSelected() { }

	// RVA: 0x2AED364 Offset: 0x2AED364 VA: 0x2AED364
	private void OnFindButtonSelected() { }

	// RVA: 0x2AED44C Offset: 0x2AED44C VA: 0x2AED44C
	private void OnFriendRequestSent(string userId) { }

	// RVA: 0x2AED4C8 Offset: 0x2AED4C8 VA: 0x2AED4C8
	private void OnFriendSuggestionDismissed(FriendSuggestionViewModel vm) { }

	// RVA: 0x2AED194 Offset: 0x2AED194 VA: 0x2AED194
	private void UpdateView() { }

	// RVA: 0x2AED544 Offset: 0x2AED544 VA: 0x2AED544
	public void .ctor() { }
}

// Namespace: Modules.Contexts.Home.PermanentLeaderboard.Scripts.UI