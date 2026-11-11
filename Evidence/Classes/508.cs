public interface IState<T> // TypeDefIndex: 508
{
	// Properties
	public abstract T StateType { get; }

	// Methods

	// RVA: -1 Offset: -1 Slot: 0
	public abstract T get_StateType();
	/* GenericInstMethod :
	|
	|-RVA: -1 Offset: -1
	|-IState<object>.get_StateType
	*/

	// RVA: -1 Offset: -1 Slot: 1
	public abstract void Enter(StateArguments stateArguments);
	/* GenericInstMethod :
	|
	|-RVA: -1 Offset: -1
	|-IState<object>.Enter
	*/

	// RVA: -1 Offset: -1 Slot: 2
	public abstract void Exit();
	/* GenericInstMethod :
	|
	|-RVA: -1 Offset: -1
	|-IState<object>.Exit
	*/
}

// Namespace: Modules.Infrastructure.FiniteStateMachine