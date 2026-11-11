public class NavigationManagerDaily : MonoBehaviour // TypeDefIndex: 2887
{
	// Fields
	[SerializeField]
	private NavigationManagerAnimationConfig _config; // 0x18
	[SerializeField]
	private List<Button> _clickableButtons; // 0x20
	[SerializeField]
	private List<GameObject> _activeViews; // 0x28
	[SerializeField]
	private List<GameObject> _activeViewsJourneyOn; // 0x30
	[SerializeField]
	private List<GameObject> _activeViewsJourneyOff; // 0x38
	[SerializeField]
	private List<HomeTabTransforms> _scaleTransforms; // 0x40
	[SerializeField]
	private List<HomeTabTransforms> _scaleTransformsJourneyOn; // 0x48
	[SerializeField]
	private List<HomeTabTransforms> _scaleTransformsJourneyOff; // 0x50
	private readonly List<Tween> _tweens; // 0x58
	private int _currentIndex; // 0x60
	private Tween _tween; // 0x68
	[SerializeField]
	private SwipeMenuManager _swipeMenuManager; // 0x70

	// Methods

	// RVA: 0x297C608 Offset: 0x297C608 VA: 0x297C608
	public void Initialize() { }

	// RVA: 0x297C638 Offset: 0x297C638 VA: 0x297C638
	public void OnEnable() { }

	// RVA: 0x297C888 Offset: 0x297C888 VA: 0x297C888
	public void OnDisable() { }

	// RVA: 0x297CAD8 Offset: 0x297CAD8 VA: 0x297CAD8
	private void SwipeToShop() { }

	// RVA: 0x297CB7C Offset: 0x297CB7C VA: 0x297CB7C
	private void SwipeToHome() { }

	// RVA: 0x297CC20 Offset: 0x297CC20 VA: 0x297CC20
	private void SwipeToLeaderboard() { }

	// RVA: 0x297CCC4 Offset: 0x297CCC4 VA: 0x297CCC4
	private void SwipeToCollection() { }

	// RVA: 0x297CD68 Offset: 0x297CD68 VA: 0x297CD68
	private void SwipeToSettings() { }

	// RVA: 0x297CE0C Offset: 0x297CE0C VA: 0x297CE0C
	private void SwipteToTeams() { }

	// RVA: 0x297CEB0 Offset: 0x297CEB0 VA: 0x297CEB0
	public void MoveToPage(PageType pageType, bool playAnimation) { }

	// RVA: 0x297D108 Offset: 0x297D108 VA: 0x297D108
	private void OnDestroy() { }

	// RVA: 0x297D264 Offset: 0x297D264 VA: 0x297D264
	private void PlayPunchScale(List<Transform> targets, bool playAnimation) { }

	// RVA: 0x297CF18 Offset: 0x297CF18 VA: 0x297CF18
	private void SetSelectedIndexView(int index, bool playAnimation) { }

	// RVA: 0x297D6C0 Offset: 0x297D6C0 VA: 0x297D6C0
	public void SetSelectedIndexViewDirectly(int index) { }

	// RVA: 0x297CEFC Offset: 0x297CEFC VA: 0x297CEFC
	private int GetIndexByPageType(PageType pageType) { }

	// RVA: 0x297D85C Offset: 0x297D85C VA: 0x297D85C
	public void .ctor() { }
}

// Namespace: Modules.Contexts.Home.UI.Common.Scripts