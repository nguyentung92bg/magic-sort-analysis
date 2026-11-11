public abstract class ViewFactory<T> : ScriptableObject, IFactory<T>, IInitializable, IDisposable // TypeDefIndex: 1010
{
	// Fields
	[SerializeField]
	private FactoryPrefab[] _factoryPrefabs; // 0x0
	protected Dictionary<int, IPool<T>> _pools; // 0x0

	// Methods

	// RVA: -1 Offset: -1 Slot: 6
	public void Initialize() { }
	/* GenericInstMethod :
	|
	|-RVA: 0x27C27D8 Offset: 0x27C27D8 VA: 0x27C27D8
	|-ViewFactory<object>.Initialize
	*/

	// RVA: -1 Offset: -1 Slot: 8
	public abstract void Dispose();
	/* GenericInstMethod :
	|
	|-RVA: -1 Offset: -1
	|-ViewFactory<object>.Dispose
	*/

	// RVA: -1 Offset: -1 Slot: 9
	public abstract T Get(int id);
	/* GenericInstMethod :
	|
	|-RVA: -1 Offset: -1
	|-ViewFactory<object>.Get
	*/

	// RVA: -1 Offset: -1 Slot: 10
	public abstract void Return(T id);
	/* GenericInstMethod :
	|
	|-RVA: -1 Offset: -1
	|-ViewFactory<object>.Return
	*/

	// RVA: -1 Offset: -1
	protected void .ctor() { }
	/* GenericInstMethod :
	|
	|-RVA: 0x27C2954 Offset: 0x27C2954 VA: 0x27C2954
	|-ViewFactory<object>..ctor
	*/
}

// Namespace: 
[CompilerGenerated]