public class FriendsRequestElementView : FriendsElementViewBase // TypeDefIndex: 4368
{
	// Fields
	[SerializeField]
	private Button _acceptButton; // 0x28
	[SerializeField]
	private Button _rejectButton; // 0x30
	[SerializeField]
	private UserProfileView _userProfileView; // 0x38
	[SerializeField]
	private BasicUIElement _uiElement; // 0x40
	private FriendRequestElementViewModel _viewModel; // 0x48

	// Properties
	public override Vector3 Size { get; }

	// Methods

	// RVA: 0x1B90CF8 Offset: 0x1B90CF8 VA: 0x1B90CF8 Slot: 9
	public override Vector3 get_Size() { }

	// RVA: 0x1B90D20 Offset: 0x1B90D20 VA: 0x1B90D20 Slot: 7
	public override void Initialize() { }

	// RVA: 0x1B90D24 Offset: 0x1B90D24 VA: 0x1B90D24 Slot: 10
	public override void SetViewModel(IFriendScrollElementViewModel viewModel) { }

	// RVA: 0x1B90EA0 Offset: 0x1B90EA0 VA: 0x1B90EA0
	private void OnEnable() { }

	// RVA: 0x1B90F80 Offset: 0x1B90F80 VA: 0x1B90F80
	private void OnDisable() { }

	// RVA: 0x1B91060 Offset: 0x1B91060 VA: 0x1B91060
	private void OnAcceptButtonSelected() { }

	// RVA: 0x1B91204 Offset: 0x1B91204 VA: 0x1B91204
	private void OnRejectButtonSelected() { }

	// RVA: 0x1B9129C Offset: 0x1B9129C VA: 0x1B9129C
	public void .ctor() { }
}

// Namespace: Modules.Contexts.Home.Friends.Scripts.UI