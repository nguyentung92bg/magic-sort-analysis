public class ScrollBar : UITouchableElement, IDraggable // TypeDefIndex: 606
{
	// Fields
	[SerializeField]
	private Transform _contentTransform; // 0x28
	private IScrollAdapter _scrollAdapter; // 0x30
	private int _minIndexVisible; // 0x38
	private int _maxIndexVisible; // 0x3C
	private Vector2 _lastTouchPosition; // 0x40
	private Vector2 _lastTouchDownPosition; // 0x48
	[CompilerGenerated]
	private Vector3 <TotalDisplacement>k__BackingField; // 0x50
	[SerializeField]
	private InertialMovement _inertialMovement; // 0x60
	[SerializeField]
	private float _scrollResistance; // 0x68
	private MaxMin _contentTransformMaxMin; // 0x6C
	private bool _isDragging; // 0x74
	private bool _isUnderUserControl; // 0x75
	private Tween _moveTween; // 0x78
	private Bounds _colliderLocalBounds; // 0x80
	private Queue<float> _displacementQueue; // 0x98
	[SerializeField]
	private Transform _upperPosition; // 0xA0
	[SerializeField]
	private Transform _lowerPosition; // 0xA8
	private bool _isInitialized; // 0xB0
	[CompilerGenerated]
	private Action OnDragged; // 0xB8
	[CompilerGenerated]
	private Action OnInitialized; // 0xC0
	[CompilerGenerated]
	private Action<Direction, float> OnDragEnd; // 0xC8

	// Properties
	public int MinIndexVisible { get; }
	public int MaxIndexVisible { get; }
	public Vector3 TotalDisplacement { get; set; }
	private Orientation Orientation { get; }
	public bool IsInitialized { get; }

	// Methods

	// RVA: 0x4009030 Offset: 0x4009030 VA: 0x4009030
	public int get_MinIndexVisible() { }

	// RVA: 0x4009038 Offset: 0x4009038 VA: 0x4009038
	public int get_MaxIndexVisible() { }

	[CompilerGenerated]
	// RVA: 0x4009040 Offset: 0x4009040 VA: 0x4009040
	public Vector3 get_TotalDisplacement() { }

	[CompilerGenerated]
	// RVA: 0x400904C Offset: 0x400904C VA: 0x400904C
	private void set_TotalDisplacement(Vector3 value) { }

	// RVA: 0x4009058 Offset: 0x4009058 VA: 0x4009058
	private Orientation get_Orientation() { }

	// RVA: 0x40090FC Offset: 0x40090FC VA: 0x40090FC
	public bool get_IsInitialized() { }

	[CompilerGenerated]
	// RVA: 0x4005D74 Offset: 0x4005D74 VA: 0x4005D74
	public void add_OnDragged(Action value) { }

	[CompilerGenerated]
	// RVA: 0x40062FC Offset: 0x40062FC VA: 0x40062FC
	public void remove_OnDragged(Action value) { }

	[CompilerGenerated]
	// RVA: 0x4005E10 Offset: 0x4005E10 VA: 0x4005E10
	public void add_OnInitialized(Action value) { }

	[CompilerGenerated]
	// RVA: 0x4006398 Offset: 0x4006398 VA: 0x4006398
	public void remove_OnInitialized(Action value) { }

	[CompilerGenerated]
	// RVA: 0x4009104 Offset: 0x4009104 VA: 0x4009104
	public void add_OnDragEnd(Action<Direction, float> value) { }

	[CompilerGenerated]
	// RVA: 0x40091B4 Offset: 0x40091B4 VA: 0x40091B4
	public void remove_OnDragEnd(Action<Direction, float> value) { }

	// RVA: 0x4009264 Offset: 0x4009264 VA: 0x4009264
	public Vector3 GetBoundsSize() { }

	// RVA: 0x4009288 Offset: 0x4009288 VA: 0x4009288
	public void Initialize(IScrollAdapter scrollAdapter, int index = 0) { }

	// RVA: 0x400999C Offset: 0x400999C VA: 0x400999C
	private void CalculateMaxMin() { }

	// RVA: 0x4009B38 Offset: 0x4009B38 VA: 0x4009B38
	private float GetScreenBottomWorldPosition() { }

	// RVA: 0x4009BE4 Offset: 0x4009BE4 VA: 0x4009BE4
	private Vector2 GetViewSize() { }

	// RVA: 0x4009BE8 Offset: 0x4009BE8 VA: 0x4009BE8
	public Vector3 GetColliderCenter() { }

	// RVA: 0x4009C38 Offset: 0x4009C38 VA: 0x4009C38
	private static float RubberDelta(float overStretching, float viewSize) { }

	// RVA: 0x4009C74 Offset: 0x4009C74 VA: 0x4009C74
	private bool IsExceedingTheUpperElement() { }

	// RVA: 0x4009D84 Offset: 0x4009D84 VA: 0x4009D84
	private bool IsNewUpElementBecameVisible() { }

	// RVA: 0x4009F18 Offset: 0x4009F18 VA: 0x4009F18
	private bool IsExceedingTheBottomElement() { }

	// RVA: 0x400A028 Offset: 0x400A028 VA: 0x400A028
	private bool IsNewDownElementBecameVisible() { }

	// RVA: 0x400A23C Offset: 0x400A23C VA: 0x400A23C
	private void Drag(float scrollAmount) { }

	// RVA: 0x400A2A8 Offset: 0x400A2A8 VA: 0x400A2A8
	private void ChangeContentPosition(float scrollAmount, float contentNewPosition) { }

	// RVA: 0x400A8BC Offset: 0x400A8BC VA: 0x400A8BC
	private void UpdateScrollAdapterViews(int previousMinIndexVisible, int previousMaxIndexVisible, int currentMinIndexVisible, int currentMaxIndexVisible) { }

	// RVA: 0x400A724 Offset: 0x400A724 VA: 0x400A724
	private void MoveContentUp() { }

	// RVA: 0x400A878 Offset: 0x400A878 VA: 0x400A878
	public void MoveContentDown() { }

	// RVA: 0x400AA40 Offset: 0x400AA40 VA: 0x400AA40
	public void IncreaseMaxIndexVisible(int value) { }

	// RVA: 0x400A534 Offset: 0x400A534 VA: 0x400A534
	private void UpdateScrollElementsBounds() { }

	// RVA: 0x400A4C0 Offset: 0x400A4C0 VA: 0x400A4C0
	private Vector3 GetDisplacement(float scrollAmount, float contentNewPosition) { }

	// RVA: 0x400AB2C Offset: 0x400AB2C VA: 0x400AB2C
	private float GetResistedScrollAmount(float scrollAmount, float distanceFromLimit) { }

	// RVA: 0x400AB48 Offset: 0x400AB48 VA: 0x400AB48
	private bool IsContentExceedingUpperLimitAndScrolledUp(float scrollAmount, float contentPosition) { }

	// RVA: 0x400AB64 Offset: 0x400AB64 VA: 0x400AB64
	private bool IsContentExceedingUpper(float contentPosition) { }

	// RVA: 0x400AB10 Offset: 0x400AB10 VA: 0x400AB10
	private bool IsContentExceedingLowerLimitAndScrolledDown(float scrollAmount, float contentPosition) { }

	// RVA: 0x400AB74 Offset: 0x400AB74 VA: 0x400AB74
	private bool IsContentExceedingLowerLimit(float contentPosition) { }

	// RVA: 0x400A718 Offset: 0x400A718 VA: 0x400A718
	private bool DoesContentMovingUp(float scrollAmount) { }

	// RVA: 0x400AB84 Offset: 0x400AB84 VA: 0x400AB84 Slot: 11
	public override void OnTouchDown(Vector2 position) { }

	// RVA: 0x400ABA0 Offset: 0x400ABA0 VA: 0x400ABA0 Slot: 13
	public override void OnTouchCancel(Vector2 position) { }

	// RVA: 0x400ABA4 Offset: 0x400ABA4 VA: 0x400ABA4 Slot: 14
	public void OnDragStart(Vector2 position) { }

	// RVA: 0x400AC20 Offset: 0x400AC20 VA: 0x400AC20 Slot: 15
	public void OnDrag(Vector2 position) { }

	// RVA: 0x400AD50 Offset: 0x400AD50 VA: 0x400AD50 Slot: 16
	public bool IsDragging() { }

	// RVA: 0x400AD58 Offset: 0x400AD58 VA: 0x400AD58 Slot: 12
	public override void OnTouchUp(Vector2 position) { }

	// RVA: 0x400AC5C Offset: 0x400AC5C VA: 0x400AC5C
	private float GetClampedScrollAmount(Vector2 displacementLastTouchAndCurrent) { }

	[Button]
	// RVA: 0x400AEEC Offset: 0x400AEEC VA: 0x400AEEC
	public void MoveTo(int index) { }

	// RVA: 0x40064C8 Offset: 0x40064C8 VA: 0x40064C8
	public Tween MoveTo(int index, float duration) { }

	// RVA: 0x400B1E0 Offset: 0x400B1E0 VA: 0x400B1E0
	public void Update() { }

	// RVA: 0x400B384 Offset: 0x400B384 VA: 0x400B384
	private float GetDistanceFromUpperLimit() { }

	// RVA: 0x400B3CC Offset: 0x400B3CC VA: 0x400B3CC
	private float GetDistanceFromLowerLimit() { }

	// RVA: 0x400B414 Offset: 0x400B414 VA: 0x400B414
	public void Dispose() { }

	// RVA: 0x400B4F0 Offset: 0x400B4F0 VA: 0x400B4F0
	public void RecalculateVisibleItems() { }

	// RVA: 0x400B880 Offset: 0x400B880 VA: 0x400B880
	public float GetScrollNormalizedPosition() { }

	// RVA: 0x400B508 Offset: 0x400B508 VA: 0x400B508
	private void RefreshVisibleItems() { }

	// RVA: 0x400B8E0 Offset: 0x400B8E0 VA: 0x400B8E0
	public void .ctor() { }

	[CompilerGenerated]
	// RVA: 0x400B978 Offset: 0x400B978 VA: 0x400B978
	private void <MoveTo>b__71_0(float newLocalPosition) { }

	[CompilerGenerated]
	// RVA: 0x400B9B4 Offset: 0x400B9B4 VA: 0x400B9B4
	private void <MoveTo>b__71_1(float newLocalPosition) { }
}

// Namespace: Modules.Infrastructure.UI.Common.Scripts.Scroll