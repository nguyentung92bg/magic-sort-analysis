public class FriendsScrollViewAdapter : ScrollViewAdapter // TypeDefIndex: 4370
{
	// Fields
	[SerializeField]
	private FriendsScrollViewFactory _factory; // 0x20
	private List<IFriendScrollElementViewModel> _viewModels; // 0x28
	private Dictionary<int, Vector3> _elementSizeCache; // 0x30

	// Properties
	public override int Count { get; }
	public List<IFriendScrollElementViewModel> ViewModels { get; }

	// Methods

	// RVA: 0x1B912DC Offset: 0x1B912DC VA: 0x1B912DC Slot: 5
	public override int get_Count() { }

	// RVA: 0x1B91328 Offset: 0x1B91328 VA: 0x1B91328
	public List<IFriendScrollElementViewModel> get_ViewModels() { }

	// RVA: 0x1B91330 Offset: 0x1B91330 VA: 0x1B91330
	public void SetViewModels(List<IFriendScrollElementViewModel> viewModels) { }

	// RVA: 0x1B91338 Offset: 0x1B91338 VA: 0x1B91338 Slot: 7
	public override void Initialize() { }

	// RVA: 0x1B91388 Offset: 0x1B91388 VA: 0x1B91388 Slot: 8
	public override Vector3 GetElementSize() { }

	// RVA: 0x1B913FC Offset: 0x1B913FC VA: 0x1B913FC Slot: 9
	public override Vector3 GetElementSizeByIndex(int index) { }

	// RVA: 0x1B91710 Offset: 0x1B91710 VA: 0x1B91710 Slot: 10
	public override BasicView GetView(int index = -1) { }

	// RVA: 0x1B91768 Offset: 0x1B91768 VA: 0x1B91768 Slot: 11
	public override void UpdateView(BasicView view, int index) { }

	// RVA: 0x1B91854 Offset: 0x1B91854 VA: 0x1B91854 Slot: 12
	public override void UpdateView(BasicView view, object viewModel) { }

	// RVA: 0x1B9194C Offset: 0x1B9194C VA: 0x1B9194C Slot: 13
	public override void Reverse() { }

	// RVA: 0x1B91528 Offset: 0x1B91528 VA: 0x1B91528
	private int GetViewIdByIndex(int index) { }

	// RVA: 0x1B919A4 Offset: 0x1B919A4 VA: 0x1B919A4
	public void AddFriendViewModel(FriendElementViewModel friendViewModel, int index) { }

	// RVA: 0x1B91A0C Offset: 0x1B91A0C VA: 0x1B91A0C
	public void RemoveViewModelAt(int removeIndex) { }

	// RVA: 0x1B91A64 Offset: 0x1B91A64 VA: 0x1B91A64
	public int GetIndexOf(IFriendScrollElementViewModel vm) { }

	// RVA: 0x1B91B00 Offset: 0x1B91B00 VA: 0x1B91B00
	public int GetIndexByUserId(string userId) { }

	// RVA: 0x1B91C28 Offset: 0x1B91C28 VA: 0x1B91C28
	public void .ctor() { }
}

// Namespace: Modules.Contexts.Home.Friends.Scripts.UI
[CreateAssetMenu(fileName = "FriendsScrollViewFactory", menuName = "Factory/FriendsScrollViewFactory")]