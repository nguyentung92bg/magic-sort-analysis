public class Bus // TypeDefIndex: 712
{
	// Fields
	private readonly Dictionary<Type, ISignal> _signals; // 0x10

	// Methods

	// RVA: -1 Offset: -1
	public T Get<T>() { }
	/* GenericInstMethod :
	|
	|-RVA: 0x270C78C Offset: 0x270C78C VA: 0x270C78C
	|-Bus.Get<object>
	*/

	// RVA: 0x40E6974 Offset: 0x40E6974 VA: 0x40E6974
	private ISignal Bind(Type signalType) { }

	// RVA: -1 Offset: -1
	private ISignal Bind<T>() { }
	/* GenericInstMethod :
	|
	|-RVA: 0x270C710 Offset: 0x270C710 VA: 0x270C710
	|-Bus.Bind<object>
	*/

	// RVA: 0x40E6A60 Offset: 0x40E6A60 VA: 0x40E6A60
	private ISignal GetSignalByHash(string signalHash) { }

	// RVA: 0x40E6C6C Offset: 0x40E6C6C VA: 0x40E6C6C
	public void .ctor() { }
}

// Namespace: Modules.Infrastructure.Common.Scripts.SignalNS