public class StateMachine<T> // TypeDefIndex: 510
{
	// Fields
	private readonly Dictionary<T, IState<T>> _states; // 0x0
	private IState<T> _currentState; // 0x0
	private Queue<IState<T>> _queue; // 0x0
	private bool _isChangingState; // 0x0

	// Methods

	// RVA: -1 Offset: -1
	public void .ctor() { }
	/* GenericInstMethod :
	|
	|-RVA: 0x31287F8 Offset: 0x31287F8 VA: 0x31287F8
	|-StateMachine<Int32Enum>..ctor
	|
	|-RVA: 0x3128C3C Offset: 0x3128C3C VA: 0x3128C3C
	|-StateMachine<object>..ctor
	*/

	// RVA: -1 Offset: -1
	public IState<T> GetState() { }
	/* GenericInstMethod :
	|
	|-RVA: 0x31288B4 Offset: 0x31288B4 VA: 0x31288B4
	|-StateMachine<Int32Enum>.GetState
	|
	|-RVA: 0x3128CF8 Offset: 0x3128CF8 VA: 0x3128CF8
	|-StateMachine<object>.GetState
	*/

	// RVA: -1 Offset: -1
	public void AddState(IState<T> state) { }
	/* GenericInstMethod :
	|
	|-RVA: 0x31288BC Offset: 0x31288BC VA: 0x31288BC
	|-StateMachine<Int32Enum>.AddState
	|
	|-RVA: 0x3128D00 Offset: 0x3128D00 VA: 0x3128D00
	|-StateMachine<object>.AddState
	*/

	// RVA: -1 Offset: -1
	public void ChangeState(T stateType, StateArguments stateArguments) { }
	/* GenericInstMethod :
	|
	|-RVA: 0x3128978 Offset: 0x3128978 VA: 0x3128978
	|-StateMachine<Int32Enum>.ChangeState
	|
	|-RVA: 0x3128DBC Offset: 0x3128DBC VA: 0x3128DBC
	|-StateMachine<object>.ChangeState
	*/
}

// Namespace: Modules.Infrastructure.DI