public class Signal<TArg1, TArg2, TArg3, TArg4> : ISignal // TypeDefIndex: 719
{
	// Fields
	private string _hash; // 0x0
	[CompilerGenerated]
	private Action<TArg1, TArg2, TArg3, TArg4> _callback; // 0x0

	// Properties
	public string Hash { get; }

	// Methods

	[CompilerGenerated]
	// RVA: -1 Offset: -1
	private void add__callback(Action<TArg1, TArg2, TArg3, TArg4> value) { }
	/* GenericInstMethod :
	|
	|-RVA: 0x333F5FC Offset: 0x333F5FC VA: 0x333F5FC
	|-Signal<object, object, object, object>.add__callback
	*/

	[CompilerGenerated]
	// RVA: -1 Offset: -1
	private void remove__callback(Action<TArg1, TArg2, TArg3, TArg4> value) { }
	/* GenericInstMethod :
	|
	|-RVA: 0x333F6A8 Offset: 0x333F6A8 VA: 0x333F6A8
	|-Signal<object, object, object, object>.remove__callback
	*/

	// RVA: -1 Offset: -1
	public void Subscribe(Action<TArg1, TArg2, TArg3, TArg4> handler) { }
	/* GenericInstMethod :
	|
	|-RVA: 0x333F754 Offset: 0x333F754 VA: 0x333F754
	|-Signal<object, object, object, object>.Subscribe
	*/

	// RVA: -1 Offset: -1
	public void Unsubscribe(Action<TArg1, TArg2, TArg3, TArg4> handler) { }
	/* GenericInstMethod :
	|
	|-RVA: 0x333F768 Offset: 0x333F768 VA: 0x333F768
	|-Signal<object, object, object, object>.Unsubscribe
	*/

	// RVA: -1 Offset: -1
	public void UnsubscribeAll() { }
	/* GenericInstMethod :
	|
	|-RVA: 0x333F77C Offset: 0x333F77C VA: 0x333F77C
	|-Signal<object, object, object, object>.UnsubscribeAll
	*/

	// RVA: -1 Offset: -1
	public void Invoke(TArg1 arg1, TArg2 arg2, TArg3 arg3, TArg4 arg4) { }
	/* GenericInstMethod :
	|
	|-RVA: 0x333F788 Offset: 0x333F788 VA: 0x333F788
	|-Signal<object, object, object, object>.Invoke
	*/

	// RVA: -1 Offset: -1 Slot: 4
	public string get_Hash() { }
	/* GenericInstMethod :
	|
	|-RVA: 0x333F7A8 Offset: 0x333F7A8 VA: 0x333F7A8
	|-Signal<object, object, object, object>.get_Hash
	*/

	// RVA: -1 Offset: -1
	public void .ctor() { }
	/* GenericInstMethod :
	|
	|-RVA: 0x333F808 Offset: 0x333F808 VA: 0x333F808
	|-Signal<object, object, object, object>..ctor
	*/
}

// Namespace: Modules.Infrastructure.Common.Scripts.SignalNS