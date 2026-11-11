public abstract class UITouchableElement : UIElement, ITouchable, IRaycastable, IComparable<UITouchableElement> // TypeDefIndex: 587
{
	// Fields
	[SerializeField]
	private int _raycastOrder; // 0x18
	[SerializeField]
	private bool _isRaycastable; // 0x1C
	[SerializeField]
	private BoxCollider2D _boxCollider2D; // 0x20

	// Properties
	public int RaycastOrder { get; set; }
	public bool IsRaycastable { get; }
	protected BoxCollider2D BoxCollider { get; }
	public override Vector2 Size { get; }

	// Methods

	// RVA: 0x400472C Offset: 0x400472C VA: 0x400472C Slot: 8
	public int get_RaycastOrder() { }

	// RVA: 0x4004734 Offset: 0x4004734 VA: 0x4004734
	public void set_RaycastOrder(int value) { }

	// RVA: 0x40044C0 Offset: 0x40044C0 VA: 0x40044C0 Slot: 9
	public bool get_IsRaycastable() { }

	// RVA: 0x40047D4 Offset: 0x40047D4 VA: 0x40047D4
	protected BoxCollider2D get_BoxCollider() { }

	// RVA: 0x40047DC Offset: 0x40047DC VA: 0x40047DC Slot: 4
	public override Vector2 get_Size() { }

	// RVA: 0x40047F8 Offset: 0x40047F8 VA: 0x40047F8
	public void SetRaycastable(bool isRaycastable) { }

	// RVA: 0x4004804 Offset: 0x4004804 VA: 0x4004804
	public void Awake() { }

	// RVA: 0x40048CC Offset: 0x40048CC VA: 0x40048CC
	public void OnDestroy() { }

	// RVA: 0x40044F4 Offset: 0x40044F4 VA: 0x40044F4
	public bool IsIntersectsRay(Ray ray) { }

	// RVA: 0x400495C Offset: 0x400495C VA: 0x400495C Slot: 10
	public int CompareTo(UITouchableElement uiTouchableElement) { }

	// RVA: -1 Offset: -1 Slot: 11
	public abstract void OnTouchDown(Vector2 position);

	// RVA: -1 Offset: -1 Slot: 12
	public abstract void OnTouchUp(Vector2 position);

	// RVA: -1 Offset: -1 Slot: 13
	public abstract void OnTouchCancel(Vector2 position);

	// RVA: 0x400498C Offset: 0x400498C VA: 0x400498C
	protected void .ctor() { }
}

// Namespace: Modules.Infrastructure.UI.Common.Scripts.Touch