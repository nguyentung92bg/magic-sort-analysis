public class ShelfConfig : ScriptableObject // TypeDefIndex: 1633
{
	// Fields
	[SerializeField]
	private List<float> _scaleAccordingToBottleCount; // 0x18
	[SerializeField]
	private Vector3 _offset; // 0x20
	[SerializeField]
	private float scale; // 0x2C

	// Properties
	public List<float> ScaleAccordingToBottleCount { get; }
	public Vector3 Offset { get; }
	public float Scale { get; }

	// Methods

	// RVA: 0x2613178 Offset: 0x2613178 VA: 0x2613178
	public List<float> get_ScaleAccordingToBottleCount() { }

	// RVA: 0x2613180 Offset: 0x2613180 VA: 0x2613180
	public Vector3 get_Offset() { }

	// RVA: 0x261318C Offset: 0x261318C VA: 0x261318C
	public float get_Scale() { }

	// RVA: 0x2613194 Offset: 0x2613194 VA: 0x2613194
	public void .ctor() { }
}

// Namespace: Modules.Contexts.GamePlay.Board.Items.Scripts.Shelf