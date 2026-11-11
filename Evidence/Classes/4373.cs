public class FriendSuggestionElementView : FriendsElementViewBase // TypeDefIndex: 4373
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
	private FriendSuggestionViewModel _viewModel; // 0x48
	private FriendsService _friendsService; // 0x50

	// Properties
	public override Vector3 Size { get; }

	// Methods

	// RVA: 0x1B91D30 Offset: 0x1B91D30 VA: 0x1B91D30 Slot: 9
	public override Vector3 get_Size() { }

	// RVA: 0x1B91D58 Offset: 0x1B91D58 VA: 0x1B91D58 Slot: 7
	public override void Initialize() { }

	// RVA: 0x1B91DDC Offset: 0x1B91DDC VA: 0x1B91DDC Slot: 10
	public override void SetViewModel(IFriendScrollElementViewModel viewModel) { }

	// RVA: 0x1B91F58 Offset: 0x1B91F58 VA: 0x1B91F58
	private void OnEnable() { }

	// RVA: 0x1B92038 Offset: 0x1B92038 VA: 0x1B92038
	private void OnDisable() { }

	// RVA: 0x1B92118 Offset: 0x1B92118 VA: 0x1B92118
	private void OnAcceptButtonSelected() { }

	// RVA: 0x1B92284 Offset: 0x1B92284 VA: 0x1B92284
	private void OnRejectButtonSelected() { }

	// RVA: 0x1B922B8 Offset: 0x1B922B8 VA: 0x1B922B8
	public void .ctor() { }
}

// Namespace: 
[CompilerGenerated]