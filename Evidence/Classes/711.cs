public class TileMapIterator<T> : IEnumerator<T>, IEnumerator, IDisposable // TypeDefIndex: 711
{
	// Fields
	private TileMap<T> _tileMap; // 0x0
	private int _currentLayerIndex; // 0x0
	private IEnumerator<KeyValuePair<Vector2, T>> _currentLayerEnumerator; // 0x0

	// Properties
	public T Current { get; }
	private object System.Collections.IEnumerator.Current { get; }

	// Methods

	// RVA: -1 Offset: -1
	public void .ctor(TileMap<T> tileMap) { }
	/* GenericInstMethod :
	|
	|-RVA: 0x340B214 Offset: 0x340B214 VA: 0x340B214
	|-TileMapIterator<object>..ctor
	*/

	// RVA: -1 Offset: -1 Slot: 4
	public T get_Current() { }
	/* GenericInstMethod :
	|
	|-RVA: 0x340B260 Offset: 0x340B260 VA: 0x340B260
	|-TileMapIterator<object>.get_Current
	*/

	// RVA: -1 Offset: -1 Slot: 7
	private object System.Collections.IEnumerator.get_Current() { }
	/* GenericInstMethod :
	|
	|-RVA: 0x340B2F0 Offset: 0x340B2F0 VA: 0x340B2F0
	|-TileMapIterator<object>.System.Collections.IEnumerator.get_Current
	*/

	// RVA: -1 Offset: -1 Slot: 5
	public void Dispose() { }
	/* GenericInstMethod :
	|
	|-RVA: 0x340B304 Offset: 0x340B304 VA: 0x340B304
	|-TileMapIterator<object>.Dispose
	*/

	// RVA: -1 Offset: -1 Slot: 6
	public bool MoveNext() { }
	/* GenericInstMethod :
	|
	|-RVA: 0x340B308 Offset: 0x340B308 VA: 0x340B308
	|-TileMapIterator<object>.MoveNext
	*/

	// RVA: -1 Offset: -1 Slot: 8
	public void Reset() { }
	/* GenericInstMethod :
	|
	|-RVA: 0x340B4C0 Offset: 0x340B4C0 VA: 0x340B4C0
	|-TileMapIterator<object>.Reset
	*/
}

// Namespace: Modules.Infrastructure.Common.Scripts.SignalNS