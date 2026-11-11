public interface IFactory<T> : IInitializable, IDisposable // TypeDefIndex: 1006
{
	// Methods

	// RVA: -1 Offset: -1 Slot: 0
	public abstract T Get(int id);
	/* GenericInstMethod :
	|
	|-RVA: -1 Offset: -1
	|-IFactory<object>.Get
	*/

	// RVA: -1 Offset: -1 Slot: 1
	public abstract void Return(T id);
	/* GenericInstMethod :
	|
	|-RVA: -1 Offset: -1
	|-IFactory<object>.Return
	*/
}

// Namespace: Modules.Infrastructure.Common.Scripts.Generation.Basic