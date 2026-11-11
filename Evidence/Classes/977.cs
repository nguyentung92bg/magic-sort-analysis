public class Pool<T> : IPool<T> // TypeDefIndex: 977
{
	// Fields
	private readonly IGenerator<T> _generator; // 0x0
	[CompilerGenerated]
	private readonly List<T> <PooledObjects>k__BackingField; // 0x0

	// Properties
	public List<T> PooledObjects { get; }

	// Methods

	[CompilerGenerated]
	// RVA: -1 Offset: -1 Slot: 4
	public List<T> get_PooledObjects() { }
	/* GenericInstMethod :
	|
	|-RVA: 0x30F9554 Offset: 0x30F9554 VA: 0x30F9554
	|-Pool<object>.get_PooledObjects
	*/

	// RVA: -1 Offset: -1
	public void .ctor(IGenerator<T> generator, int initialSize) { }
	/* GenericInstMethod :
	|
	|-RVA: 0x30F955C Offset: 0x30F955C VA: 0x30F955C
	|-Pool<object>..ctor
	*/

	// RVA: -1 Offset: -1 Slot: 6
	public void Return(T pooled) { }
	/* GenericInstMethod :
	|
	|-RVA: 0x30F964C Offset: 0x30F964C VA: 0x30F964C
	|-Pool<object>.Return
	*/

	// RVA: -1 Offset: -1 Slot: 5
	public T Get() { }
	/* GenericInstMethod :
	|
	|-RVA: 0x30F96E0 Offset: 0x30F96E0 VA: 0x30F96E0
	|-Pool<object>.Get
	*/

	// RVA: -1 Offset: -1
	private T CreateNew() { }
	/* GenericInstMethod :
	|
	|-RVA: 0x30F9774 Offset: 0x30F9774 VA: 0x30F9774
	|-Pool<object>.CreateNew
	*/

	// RVA: -1 Offset: -1
	private T GetFromPool() { }
	/* GenericInstMethod :
	|
	|-RVA: 0x30F97FC Offset: 0x30F97FC VA: 0x30F97FC
	|-Pool<object>.GetFromPool
	*/

	// RVA: -1 Offset: -1 Slot: 8
	public virtual void Clear() { }
	/* GenericInstMethod :
	|
	|-RVA: 0x30F98E4 Offset: 0x30F98E4 VA: 0x30F98E4
	|-Pool<object>.Clear
	*/
}

// Namespace: 
[CompilerGenerated]