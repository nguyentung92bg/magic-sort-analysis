public interface ISaveLoad<T> // TypeDefIndex: 451
{
	// Methods

	// RVA: -1 Offset: -1 Slot: 0
	public abstract void Save(T data);
	/* GenericInstMethod :
	|
	|-RVA: -1 Offset: -1
	|-ISaveLoad<object>.Save
	*/

	// RVA: -1 Offset: -1 Slot: 1
	public abstract T Load();
	/* GenericInstMethod :
	|
	|-RVA: -1 Offset: -1
	|-ISaveLoad<object>.Load
	*/

	// RVA: -1 Offset: -1 Slot: 2
	public abstract string Serialize(T data);
	/* GenericInstMethod :
	|
	|-RVA: -1 Offset: -1
	|-ISaveLoad<object>.Serialize
	*/
}

// Namespace: 
[CompilerGenerated]