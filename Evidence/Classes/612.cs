public class SimpleScrollBar : UITouchableElement, IDraggable // TypeDefIndex: 612
{
	// Fields
	[SerializeField]
	private float _scrollResistance; // 0x28
	[SerializeField]
	private InertialMovement _inertialMovement; // 0x30
	[SerializeField]
	private Transform _contentTransform; // 0x38
	[SerializeField]
	private Direction _elementPlacementDirection; // 0x40
	[SerializeField]
	private Orientation _scrollOrientation; // 0x44
	[CompilerGenerated]
	private Action<Direction, float> OnDragEnd; // 0x48
	private Vector2 _lastTouchPosition; // 0x50
	private Vector2 _lastTouchDownPosition; // 0x58
	[CompilerGenerated]
	private Vector3 <TotalDisplacement>k__BackingField; // 0x60
	public Tween _moveTween; // 0x70
	private Bounds _colliderLocalBounds; // 0x78
	private Queue<float> _displacementQueue; // 0x90
	private bool _isDragging; // 0x98
	private bool _isUnderUserControl; // 0x99
	private bool _isLocalLimitsSet; // 0x9A
	private MaxMin _contentTransformMaxMin; // 0x9C
	[SerializeField]
	private List<Transform> _parallaxObjects; // 0xA8
	[SerializeField]
	private float _parallaxFactor; // 0xB0

	// Properties
	public Vector3 TotalDisplacement { get; set; }

	// Methods

	[CompilerGenerated]
	// RVA: 0x400BDD8 Offset: 0x400BDD8 VA: 0x400BDD8
	public void add_OnDragEnd(Action<Direction, float> value) { }

	[CompilerGenerated]
	// RVA: 0x400BE88 Offset: 0x400BE88 VA: 0x400BE88
	public void remove_OnDragEnd(Action<Direction, float> value) { }

	[CompilerGenerated]
	// RVA: 0x400BF38 Offset: 0x400BF38 VA: 0x400BF38
	public Vector3 get_TotalDisplacement() { }

	[CompilerGenerated]
	// RVA: 0x400BF44 Offset: 0x400BF44 VA: 0x400BF44
	private void set_TotalDisplacement(Vector3 value) { }

	// RVA: 0x400BF50 Offset: 0x400BF50 VA: 0x400BF50
	public void SetContentLocalLimits(MaxMin contentElementsMaxMinLocalPositions) { }

	// RVA: 0x400C094 Offset: 0x400C094 VA: 0x400C094
	private void Drag(float scrollAmount) { }

	// RVA: 0x400C0C0 Offset: 0x400C0C0 VA: 0x400C0C0
	private void ChangeContentPosition(float scrollAmount, float contentNewPosition) { }

	// RVA: 0x400C2A4 Offset: 0x400C2A4 VA: 0x400C2A4
	private void UpdateParallaxObjects(Vector3 displacement) { }

	// RVA: 0x400C434 Offset: 0x400C434 VA: 0x400C434
	public void SetParallaxYPosition(float y) { }

	// RVA: 0x400C228 Offset: 0x400C228 VA: 0x400C228
	private Vector3 GetDisplacement(float scrollAmount, float contentNewPosition) { }

	// RVA: 0x400C5F4 Offset: 0x400C5F4 VA: 0x400C5F4
	private bool IsContentExceedingUpperLimitAndScrolledUp(float scrollAmount, float contentPosition) { }

	// RVA: 0x400C610 Offset: 0x400C610 VA: 0x400C610
	private bool IsContentExceedingUpper(float contentPosition) { }

	// RVA: 0x400C5BC Offset: 0x400C5BC VA: 0x400C5BC
	private bool IsContentExceedingLowerLimitAndScrolledDown(float scrollAmount, float contentPosition) { }

	// RVA: 0x400C620 Offset: 0x400C620 VA: 0x400C620
	private bool IsContentExceedingLowerLimit(float contentPosition) { }

	// RVA: 0x400C5D8 Offset: 0x400C5D8 VA: 0x400C5D8
	private float GetResistedScrollAmount(float scrollAmount, float distanceFromLimit) { }

	// RVA: 0x400C630 Offset: 0x400C630 VA: 0x400C630 Slot: 11
	public override void OnTouchDown(Vector2 position) { }

	// RVA: 0x400C644 Offset: 0x400C644 VA: 0x400C644 Slot: 12
	public override void OnTouchUp(Vector2 position) { }

	// RVA: 0x400C7CC Offset: 0x400C7CC VA: 0x400C7CC Slot: 13
	public override void OnTouchCancel(Vector2 position) { }

	// RVA: 0x400C7D0 Offset: 0x400C7D0 VA: 0x400C7D0 Slot: 14
	public void OnDragStart(Vector2 position) { }

	// RVA: 0x400C814 Offset: 0x400C814 VA: 0x400C814 Slot: 15
	public void OnDrag(Vector2 position) { }

	// RVA: 0x400C874 Offset: 0x400C874 VA: 0x400C874
	private float GetClampedScrollAmount(Vector2 displacementLastTouchAndCurrent) { }

	// RVA: 0x400C8C4 Offset: 0x400C8C4 VA: 0x400C8C4
	public void ForceStopInertialMovement() { }

	// RVA: 0x400C8E0 Offset: 0x400C8E0 VA: 0x400C8E0
	public void Update() { }

	// RVA: 0x400CA70 Offset: 0x400CA70 VA: 0x400CA70
	private float GetDistanceFromUpperLimit() { }

	// RVA: 0x400CAB0 Offset: 0x400CAB0 VA: 0x400CAB0
	private float GetDistanceFromLowerLimit() { }

	[Button]
	// RVA: 0x400CAF0 Offset: 0x400CAF0 VA: 0x400CAF0
	public void MoveTo(float localPosition) { }

	[Button]
	// RVA: 0x400CB54 Offset: 0x400CB54 VA: 0x400CB54
	public Tween MoveToTween(float localPosition, float duration, AnimationCurve curve) { }

	[Button]
	// RVA: 0x400CD38 Offset: 0x400CD38 VA: 0x400CD38
	public Tween MoveToTween(Vector3 localPosition, float duration) { }

	// RVA: 0x400CF04 Offset: 0x400CF04 VA: 0x400CF04 Slot: 16
	public bool IsDragging() { }

	// RVA: 0x400CF0C Offset: 0x400CF0C VA: 0x400CF0C
	public void Dispose() { }

	// RVA: 0x400CF44 Offset: 0x400CF44 VA: 0x400CF44
	public void SetDisplacement(Vector3 cachedTotalDisplacement) { }

	// RVA: 0x400CFDC Offset: 0x400CFDC VA: 0x400CFDC
	public void .ctor() { }
}

// Namespace: Modules.Infrastructure.UI.Common.Scripts.Scroll