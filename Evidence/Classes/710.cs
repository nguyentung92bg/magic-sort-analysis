public abstract class TileMap<T> : IEnumerable<T>, IEnumerable // TypeDefIndex: 710
{
	// Fields
	[CompilerGenerated]
	private int <MaxLayer>k__BackingField; // 0x0
	[CompilerGenerated]
	private Dictionary<int, Dictionary<Vector2, T>> <Tiles>k__BackingField; // 0x0

	// Properties
	public int MaxLayer { get; set; }
	public Dictionary<int, Dictionary<Vector2, T>> Tiles { get; set; }

	// Methods

	[CompilerGenerated]
	// RVA: -1 Offset: -1
	public int get_MaxLayer() { }
	/* GenericInstMethod :
	|
	|-RVA: 0x340B5E0 Offset: 0x340B5E0 VA: 0x340B5E0
	|-TileMap<object>.get_MaxLayer
	*/

	[CompilerGenerated]
	// RVA: -1 Offset: -1
	public void set_MaxLayer(int value) { }
	/* GenericInstMethod :
	|
	|-RVA: 0x340B5E8 Offset: 0x340B5E8 VA: 0x340B5E8
	|-TileMap<object>.set_MaxLayer
	*/

	[CompilerGenerated]
	// RVA: -1 Offset: -1
	public Dictionary<int, Dictionary<Vector2, T>> get_Tiles() { }
	/* GenericInstMethod :
	|
	|-RVA: 0x340B5F0 Offset: 0x340B5F0 VA: 0x340B5F0
	|-TileMap<object>.get_Tiles
	*/

	[CompilerGenerated]
	// RVA: -1 Offset: -1
	protected void set_Tiles(Dictionary<int, Dictionary<Vector2, T>> value) { }
	/* GenericInstMethod :
	|
	|-RVA: 0x340B5F8 Offset: 0x340B5F8 VA: 0x340B5F8
	|-TileMap<object>.set_Tiles
	*/

	// RVA: -1 Offset: -1 Slot: 6
	public abstract IEnumerator<T> GetEnumerator();
	/* GenericInstMethod :
	|
	|-RVA: -1 Offset: -1
	|-TileMap<object>.GetEnumerator
	*/

	// RVA: -1 Offset: -1
	public void Add(T tile, int layer, Vector2 vector2) { }
	/* GenericInstMethod :
	|
	|-RVA: 0x340B600 Offset: 0x340B600 VA: 0x340B600
	|-TileMap<object>.Add
	*/

	// RVA: -1 Offset: -1
	public void ClearCell(int layer, Vector2 position) { }
	/* GenericInstMethod :
	|
	|-RVA: 0x340B760 Offset: 0x340B760 VA: 0x340B760
	|-TileMap<object>.ClearCell
	*/

	// RVA: -1 Offset: -1
	public T GetAtPosition(int layer, Vector2 position) { }
	/* GenericInstMethod :
	|
	|-RVA: 0x340B868 Offset: 0x340B868 VA: 0x340B868
	|-TileMap<object>.GetAtPosition
	*/

	// RVA: -1 Offset: -1
	public bool Contains(int layer, Vector2 vector2) { }
	/* GenericInstMethod :
	|
	|-RVA: 0x340B970 Offset: 0x340B970 VA: 0x340B970
	|-TileMap<object>.Contains
	*/

	// RVA: -1 Offset: -1 Slot: 5
	private IEnumerator System.Collections.IEnumerable.GetEnumerator() { }
	/* GenericInstMethod :
	|
	|-RVA: 0x340BA3C Offset: 0x340BA3C VA: 0x340BA3C
	|-TileMap<object>.System.Collections.IEnumerable.GetEnumerator
	*/

	// RVA: -1 Offset: -1
	protected void .ctor() { }
	/* GenericInstMethod :
	|
	|-RVA: 0x340BA48 Offset: 0x340BA48 VA: 0x340BA48
	|-TileMap<object>..ctor
	*/
}

// Namespace: Modules.Infrastructure.Common.Scripts.TileMapNS