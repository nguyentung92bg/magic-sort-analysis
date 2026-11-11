public class FriendsListView : MonoBehaviour // TypeDefIndex: 3016
{
	// Fields
	[SerializeField]
	private ScrollBar _scrollBar; // 0x18
	[SerializeField]
	private BasicScrollAdapter _scrollAdapter; // 0x20
	[SerializeField]
	private FriendsScrollViewAdapter _scrollViewAdapter; // 0x28
	[SerializeField]
	private GameObject _connectWithFb; // 0x30
	[SerializeField]
	private GameObject _exclamationContainer; // 0x38
	private FriendsService _friendsService; // 0x40
	private bool _isVisible; // 0x48

	// Methods

	// RVA: 0x2AED54C Offset: 0x2AED54C VA: 0x2AED54C
	public void Initialize() { }

	// RVA: 0x2AED9F4 Offset: 0x2AED9F4 VA: 0x2AED9F4
	public void Dispose() { }

	// RVA: 0x2AEDFD8 Offset: 0x2AEDFD8 VA: 0x2AEDFD8
	public void Show() { }

	// RVA: 0x2AEE010 Offset: 0x2AEE010 VA: 0x2AEE010
	public void Hide() { }

	// RVA: 0x2AEE218 Offset: 0x2AEE218 VA: 0x2AEE218
	private void UpdateView() { }

	// RVA: 0x2AEE63C Offset: 0x2AEE63C VA: 0x2AEE63C
	private void OnFacebookStateChanged() { }

	// RVA: 0x2AEE64C Offset: 0x2AEE64C VA: 0x2AEE64C
	private void OnFriendAdded(FriendElementViewModel friendViewModel) { }

	// RVA: 0x2AEE650 Offset: 0x2AEE650 VA: 0x2AEE650
	private int GetNewFriendIndex(FriendElementViewModel friendVm) { }

	// RVA: 0x2AEE778 Offset: 0x2AEE778 VA: 0x2AEE778
	private void OnFriendRequestRemoved(FriendRequestElementViewModel requestViewModel) { }

	// RVA: 0x2AEE77C Offset: 0x2AEE77C VA: 0x2AEE77C
	private void OnFriendRemoved(FriendElementViewModel friendViewModel) { }

	// RVA: 0x2AEE780 Offset: 0x2AEE780 VA: 0x2AEE780
	private bool CheckContentIsEmpty() { }

	// RVA: 0x2AEE7C8 Offset: 0x2AEE7C8 VA: 0x2AEE7C8
	public void .ctor() { }
}

// Namespace: Modules.Contexts.Home.PermanentLeaderboard.Scripts.UI