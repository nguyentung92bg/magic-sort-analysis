public class VerticalLayoutItem : MonoBehaviour // TypeDefIndex: 2594
{
	// Fields
	[SerializeField]
	private float _bottomSpacing; // 0x18
	[SerializeField]
	private float _topSpacing; // 0x1C
	private BoxCollider2D _boxCollider2D; // 0x20
	[SerializeField]
	private bool _shouldOrderHorizontally; // 0x28

	// Properties
	public BoxCollider2D BoxCollider { get; }
	public bool ShouldOrderHorizontally { get; }
	public float BottomSpacing { get; set; }
	public float TopSpacing { get; }

	// Methods

	// RVA: 0x246BBB4 Offset: 0x246BBB4 VA: 0x246BBB4
	public BoxCollider2D get_BoxCollider() { }

	// RVA: 0x246BBBC Offset: 0x246BBBC VA: 0x246BBBC
	public bool get_ShouldOrderHorizontally() { }

	// RVA: 0x246BBC4 Offset: 0x246BBC4 VA: 0x246BBC4
	private void Awake() { }

	// RVA: 0x246BC1C Offset: 0x246BC1C VA: 0x246BC1C
	public float get_BottomSpacing() { }

	// RVA: 0x246BC24 Offset: 0x246BC24 VA: 0x246BC24
	public void set_BottomSpacing(float value) { }

	// RVA: 0x246BC2C Offset: 0x246BC2C VA: 0x246BC2C
	public float get_TopSpacing() { }

	// RVA: 0x246BC34 Offset: 0x246BC34 VA: 0x246BC34
	public void .ctor() { }
}

// Namespace: Modules.Contexts.Home.Store.Scripts.StoreScroll