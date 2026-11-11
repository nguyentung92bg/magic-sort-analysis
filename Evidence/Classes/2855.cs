public class SwipePageManager : UITouchableElement, IDraggable, IHomeIdleInterrupter // TypeDefIndex: 2855
{
	// Fields
	private const float SwipeThreshold = 0.2;
	private const float ScrollResistance = 5;
	[SerializeField]
	private SwipeMenuManager _swipeMenuManager; // 0x28
	[SerializeField]
	private List<SwipePageController> _swipePageControllers; // 0x30
	[SerializeField]
	private List<SwipePageController> _swipePageControllersJourneyOn; // 0x38
	[SerializeField]
	private List<SwipePageController> _swipePageControllersJourneyOff; // 0x40
	[SerializeField]
	private SwipeMenuScaleHandler _swipeMenuScaleHandler; // 0x48
	[SerializeField]
	private NavigationManagerAnimationConfig _navigationManagerAnimationConfig; // 0x50
	private readonly Queue<float> _displacementQueue; // 0x58
	private Vector2 _lastPosition; // 0x60
	private bool _isDragging; // 0x68
	private bool _isMoving; // 0x69
	private Tween _tween; // 0x70
	private readonly List<int> _peekedPageIndexes; // 0x78
	private MaxMin _limitCache; // 0x80
	private bool _isLimitCacheSet; // 0x88

	// Methods

	// RVA: 0x2DD01AC Offset: 0x2DD01AC VA: 0x2DD01AC
	public void Initialize() { }

	// RVA: 0x2DD0518 Offset: 0x2DD0518 VA: 0x2DD0518
	public int GetIndexByPageType(PageType pageType) { }

	// RVA: 0x2DD047C Offset: 0x2DD047C VA: 0x2DD047C
	public PageType GetPageTypeByIndex(int index) { }

	// RVA: 0x2DD0DAC Offset: 0x2DD0DAC VA: 0x2DD0DAC Slot: 11
	public override void OnTouchDown(Vector2 position) { }

	// RVA: 0x2DD0DB4 Offset: 0x2DD0DB4 VA: 0x2DD0DB4 Slot: 12
	public override void OnTouchUp(Vector2 position) { }

	// RVA: 0x2DD0E98 Offset: 0x2DD0E98 VA: 0x2DD0E98 Slot: 13
	public override void OnTouchCancel(Vector2 position) { }

	// RVA: 0x2DD0DB8 Offset: 0x2DD0DB8 VA: 0x2DD0DB8
	private void EndTouch() { }

	// RVA: 0x2DD0EA4 Offset: 0x2DD0EA4 VA: 0x2DD0EA4
	private void MoveToLeftPage() { }

	// RVA: 0x2DD103C Offset: 0x2DD103C VA: 0x2DD103C
	private void MoveToRightPage() { }

	// RVA: 0x2DD11D4 Offset: 0x2DD11D4 VA: 0x2DD11D4
	private void MoveToNearestPage() { }

	// RVA: 0x2DD1424 Offset: 0x2DD1424 VA: 0x2DD1424
	private float GetMovePositionByIndex(int index) { }

	// RVA: 0x2DD07C8 Offset: 0x2DD07C8 VA: 0x2DD07C8
	public void MoveToPage(int index) { }

	// RVA: 0x2DD0298 Offset: 0x2DD0298 VA: 0x2DD0298
	public void MoveToPageImmediately(int index) { }

	// RVA: 0x2DD133C Offset: 0x2DD133C VA: 0x2DD133C
	private int GetNearestPageIndex() { }

	// RVA: 0x2DD1628 Offset: 0x2DD1628 VA: 0x2DD1628
	private bool TryGetSecondNearestPageIndexByWorldDistanceInSwipeThreshold(out int secondNearestIndex) { }

	// RVA: 0x2DD175C Offset: 0x2DD175C VA: 0x2DD175C Slot: 14
	public void OnDragStart(Vector2 position) { }

	// RVA: 0x2DD1840 Offset: 0x2DD1840 VA: 0x2DD1840 Slot: 15
	public void OnDrag(Vector2 position) { }

	// RVA: 0x2DD1A04 Offset: 0x2DD1A04 VA: 0x2DD1A04 Slot: 16
	public bool IsDragging() { }

	// RVA: 0x2DD1864 Offset: 0x2DD1864 VA: 0x2DD1864
	private float GetResistedDragAmount(float dragAmount) { }

	// RVA: 0x2DD1AD0 Offset: 0x2DD1AD0 VA: 0x2DD1AD0
	private float GetResistedDragAmount(float dragAmount, float distanceFromLimit) { }

	// RVA: 0x2DD18EC Offset: 0x2DD18EC VA: 0x2DD18EC
	private void Drag(float amount) { }

	// RVA: 0x2DD1B0C Offset: 0x2DD1B0C VA: 0x2DD1B0C
	private void TryUpdatePeekPages() { }

	// RVA: 0x2DD1A0C Offset: 0x2DD1A0C VA: 0x2DD1A0C
	private MaxMin GetLimit() { }

	// RVA: 0x2DD1834 Offset: 0x2DD1834 VA: 0x2DD1834
	private void StartDragging() { }

	// RVA: 0x2DD0E9C Offset: 0x2DD0E9C VA: 0x2DD0E9C
	private void StopDragging() { }

	// RVA: 0x2DD149C Offset: 0x2DD149C VA: 0x2DD149C
	private void StartMove(Vector3 position) { }

	// RVA: 0x2DD1AEC Offset: 0x2DD1AEC VA: 0x2DD1AEC
	private void StopMove() { }

	// RVA: 0x2DD1CD0 Offset: 0x2DD1CD0 VA: 0x2DD1CD0
	private void SetLastPosition(Vector2 position) { }

	// RVA: 0x2DD15EC Offset: 0x2DD15EC VA: 0x2DD15EC
	private void SetPosition(Vector2 position) { }

	// RVA: 0x2DD0A20 Offset: 0x2DD0A20 VA: 0x2DD0A20
	public void Scale(Vector3 scaleRatio) { }

	// RVA: 0x2DD1CD8 Offset: 0x2DD1CD8 VA: 0x2DD1CD8 Slot: 17
	public bool IsInterrupting() { }

	// RVA: 0x2DD1D0C Offset: 0x2DD1D0C VA: 0x2DD1D0C
	public void .ctor() { }

	[CompilerGenerated]
	// RVA: 0x2DD1DE4 Offset: 0x2DD1DE4 VA: 0x2DD1DE4
	private void <StartMove>b__41_0() { }
}

// Namespace: Modules.Contexts.Home.UI.Settings