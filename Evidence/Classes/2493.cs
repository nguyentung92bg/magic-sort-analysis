public class StrikeShowLeaderboardViewAdapter : ScrollViewAdapter // TypeDefIndex: 2493
{
	// Fields
	private const int PlayerViewId = 0;
	private const int DividerViewId = 1;
	[SerializeField]
	private StrikeShowLeaderboardViewFactory _viewFactory; // 0x20
	private List<IStrikeShowLeaderboardRowViewModel> _viewModels; // 0x28
	private Vector3 _playerElementSize; // 0x30
	private Vector3 _dividerElementSize; // 0x3C
	private bool _sizesCached; // 0x48

	// Properties
	public override int Count { get; }

	// Methods

	// RVA: 0x2AFC39C Offset: 0x2AFC39C VA: 0x2AFC39C Slot: 5
	public override int get_Count() { }

	// RVA: 0x2AFC3E4 Offset: 0x2AFC3E4 VA: 0x2AFC3E4
	public void SetViewModels(List<IStrikeShowLeaderboardRowViewModel> viewModels) { }

	// RVA: 0x2AFC3EC Offset: 0x2AFC3EC VA: 0x2AFC3EC Slot: 7
	public override void Initialize() { }

	// RVA: 0x2AFC4A0 Offset: 0x2AFC4A0 VA: 0x2AFC4A0 Slot: 8
	public override Vector3 GetElementSize() { }

	// RVA: 0x2AFC4BC Offset: 0x2AFC4BC VA: 0x2AFC4BC Slot: 9
	public override Vector3 GetElementSizeByIndex(int index) { }

	// RVA: 0x2AFC5E0 Offset: 0x2AFC5E0 VA: 0x2AFC5E0 Slot: 10
	public override BasicView GetView(int index = -1) { }

	// RVA: 0x2AFC634 Offset: 0x2AFC634 VA: 0x2AFC634 Slot: 11
	public override void UpdateView(BasicView view, int index) { }

	// RVA: 0x2AFC720 Offset: 0x2AFC720 VA: 0x2AFC720 Slot: 12
	public override void UpdateView(BasicView basicView, object viewModel) { }

	// RVA: 0x2AFC818 Offset: 0x2AFC818 VA: 0x2AFC818 Slot: 13
	public override void Reverse() { }

	// RVA: 0x2AFC51C Offset: 0x2AFC51C VA: 0x2AFC51C
	private int GetViewIdByIndex(int index) { }

	// RVA: 0x2AFC3F0 Offset: 0x2AFC3F0 VA: 0x2AFC3F0
	private void CacheElementSizes() { }

	// RVA: 0x2AFC868 Offset: 0x2AFC868 VA: 0x2AFC868
	public void .ctor() { }
}

// Namespace: Modules.Contexts.Home.StrikeShow.Scripts.UI
[CreateAssetMenu(fileName = "StrikeShowLeaderboardViewFactory", menuName = "Factory/StrikeShowLeaderboardViewFactory")]