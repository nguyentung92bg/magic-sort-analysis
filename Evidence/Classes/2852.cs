public class SwipeMenuManager : MonoBehaviour, IScalable // TypeDefIndex: 2852
{
	// Fields
	[CompilerGenerated]
	private int <CurrentPageIndex>k__BackingField; // 0x18
	[SerializeField]
	private SwipePageManager _swipePageManager; // 0x20
	[SerializeField]
	private NavigationManagerDaily _navigationManagerDaily; // 0x28

	// Properties
	public bool IsScalable { get; }
	public int CurrentPageIndex { get; set; }

	// Methods

	// RVA: 0x2DCFFBC Offset: 0x2DCFFBC VA: 0x2DCFFBC Slot: 4
	public bool get_IsScalable() { }

	[CompilerGenerated]
	// RVA: 0x2DCFFC4 Offset: 0x2DCFFC4 VA: 0x2DCFFC4
	public int get_CurrentPageIndex() { }

	[CompilerGenerated]
	// RVA: 0x2DCFFCC Offset: 0x2DCFFCC VA: 0x2DCFFCC
	private void set_CurrentPageIndex(int value) { }

	// RVA: 0x2DCFFD4 Offset: 0x2DCFFD4 VA: 0x2DCFFD4
	private void Awake() { }

	// RVA: 0x2DD02DC Offset: 0x2DD02DC VA: 0x2DD02DC
	private void OnDestroy() { }

	// RVA: 0x2DD045C Offset: 0x2DD045C VA: 0x2DD045C
	public PageType GetCurrentPageType() { }

	// RVA: 0x2DD0280 Offset: 0x2DD0280 VA: 0x2DD0280
	public int GetIndexByPageType(PageType pageType) { }

	// RVA: 0x2DD05BC Offset: 0x2DD05BC VA: 0x2DD05BC
	public PageType GetPageTypeByIndex(int pageIndex) { }

	// RVA: 0x2DD05D4 Offset: 0x2DD05D4 VA: 0x2DD05D4
	public void MoveToPage(PageType pageType) { }

	// RVA: 0x2DD0810 Offset: 0x2DD0810 VA: 0x2DD0810
	public void MoveToPageImmediately(PageType pageType, bool playAnimation) { }

	// RVA: 0x2DD0A08 Offset: 0x2DD0A08 VA: 0x2DD0A08 Slot: 5
	public void Scale(Vector3 scaleRatio) { }

	// RVA: 0x2DD0A40 Offset: 0x2DD0A40 VA: 0x2DD0A40
	public void .ctor() { }
}

// Namespace: Modules.Contexts.Home.UI.SwipeMenu.Scripts