public interface IPool<T> // TypeDefIndex: 973
{
	// Properties
	public abstract List<T> PooledObjects { get; }

	// Methods

	// RVA: -1 Offset: -1 Slot: 0
	public abstract List<T> get_PooledObjects();
	/* GenericInstMethod :
	|
	|-RVA: -1 Offset: -1
	|-IPool<object>.get_PooledObjects
	*/

	// RVA: -1 Offset: -1 Slot: 1
	public abstract T Get();
	/* GenericInstMethod :
	|
	|-RVA: -1 Offset: -1
	|-IPool<object>.Get
	*/

	// RVA: -1 Offset: -1 Slot: 2
	public abstract void Return(T pooled);
	/* GenericInstMethod :
	|
	|-RVA: -1 Offset: -1
	|-IPool<object>.Return
	*/

	// RVA: -1 Offset: -1 Slot: 3
	public abstract void Clear();
	/* GenericInstMethod :
	|
	|-RVA: -1 Offset: -1
	|-IPool<object>.Clear
	*/
}

// Namespace: Modules.Infrastructure.Common.Scripts.Pool