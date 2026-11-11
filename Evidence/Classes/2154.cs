public class TeamsAskCardThemeViewAdapter : ScrollViewAdapter // TypeDefIndex: 2154
{
	// Fields
	[SerializeField]
	private TeamsAskCardThemeViewFactory _viewFactory; // 0x20
	private List<TeamsAskCardThemeViewModel> _viewModels; // 0x28

	// Properties
	public override int Count { get; }

	// Methods

	// RVA: 0x34527D0 Offset: 0x34527D0 VA: 0x34527D0 Slot: 5
	public override int get_Count() { }

	// RVA: 0x345281C Offset: 0x345281C VA: 0x345281C
	public void SetViewModels(List<TeamsAskCardThemeViewModel> viewModels) { }

	// RVA: 0x3452824 Offset: 0x3452824 VA: 0x3452824 Slot: 7
	public override void Initialize() { }

	// RVA: 0x3452828 Offset: 0x3452828 VA: 0x3452828 Slot: 8
	public override Vector3 GetElementSize() { }

	// RVA: 0x345286C Offset: 0x345286C VA: 0x345286C Slot: 10
	public override BasicView GetView(int index = -1) { }

	// RVA: 0x34528B8 Offset: 0x34528B8 VA: 0x34528B8 Slot: 11
	public override void UpdateView(BasicView view, int index) { }

	// RVA: 0x3452978 Offset: 0x3452978 VA: 0x3452978 Slot: 12
	public override void UpdateView(BasicView basicView, object viewModel) { }

	// RVA: 0x3452A4C Offset: 0x3452A4C VA: 0x3452A4C Slot: 13
	public override void Reverse() { }

	// RVA: 0x3452A9C Offset: 0x3452A9C VA: 0x3452A9C Slot: 9
	public override Vector3 GetElementSizeByIndex(int index) { }

	// RVA: 0x3452BB0 Offset: 0x3452BB0 VA: 0x3452BB0
	public void .ctor() { }
}

// Namespace: Modules.Contexts.Home.Teams.Scripts.UI
[CreateAssetMenu(fileName = "TeamsAskCardThemeViewFactory", menuName = "Factory/TeamsAskCardThemeViewFactory")]