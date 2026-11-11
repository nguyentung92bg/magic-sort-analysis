public interface IAsyncSaveLoad<T> // TypeDefIndex: 450
{
	// Methods

	// RVA: -1 Offset: -1 Slot: 0
	public abstract void Save(T data);
	/* GenericInstMethod :
	|
	|-RVA: -1 Offset: -1
	|-IAsyncSaveLoad<object>.Save
	*/

	// RVA: -1 Offset: -1 Slot: 1
	public abstract Task<T> Load();
	/* GenericInstMethod :
	|
	|-RVA: -1 Offset: -1
	|-IAsyncSaveLoad<object>.Load
	*/
}

// Namespace: Modules.Infrastructure.Persistence