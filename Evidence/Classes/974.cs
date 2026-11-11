public class ObjectPool<T> : IPool<T> // TypeDefIndex: 974
{
	// Fields
	private readonly Stack<T> _objects; // 0x0

	// Properties
	public List<T> PooledObjects { get; }

	// Methods

	// RVA: -1 Offset: -1 Slot: 4
	public List<T> get_PooledObjects() { }
	/* GenericInstMethod :
	|
	|-RVA: 0x30EA86C Offset: 0x30EA86C VA: 0x30EA86C
	|-ObjectPool<object>.get_PooledObjects
	*/

	// RVA: -1 Offset: -1
	public void .ctor(int size) { }
	/* GenericInstMethod :
	|
	|-RVA: 0x30EA8D0 Offset: 0x30EA8D0 VA: 0x30EA8D0
	|-ObjectPool<object>..ctor
	*/

	// RVA: -1 Offset: -1 Slot: 5
	public T Get() { }
	/* GenericInstMethod :
	|
	|-RVA: 0x30EA998 Offset: 0x30EA998 VA: 0x30EA998
	|-ObjectPool<object>.Get
	*/

	// RVA: -1 Offset: -1 Slot: 6
	public void Return(T pooled) { }
	/* GenericInstMethod :
	|
	|-RVA: 0x30EAA28 Offset: 0x30EAA28 VA: 0x30EAA28
	|-ObjectPool<object>.Return
	*/

	// RVA: -1 Offset: -1 Slot: 7
	public void Clear() { }
	/* GenericInstMethod :
	|
	|-RVA: 0x30EAA50 Offset: 0x30EAA50 VA: 0x30EAA50
	|-ObjectPool<object>.Clear
	*/
}

// Namespace: Modules.Infrastructure.Common.Scripts.Pool