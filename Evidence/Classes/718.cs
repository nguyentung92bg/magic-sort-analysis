public class Signal<TArg1, TArg2, TArg3> : ISignal // TypeDefIndex: 718
{
	// Fields
	private string _hash; // 0x0
	[CompilerGenerated]
	private Action<TArg1, TArg2, TArg3> _callback; // 0x0

	// Properties
	public string Hash { get; }

	// Methods

	[CompilerGenerated]
	// RVA: -1 Offset: -1
	private void add__callback(Action<TArg1, TArg2, TArg3> value) { }
	/* GenericInstMethod :
	|
	|-RVA: 0x333EDAC Offset: 0x333EDAC VA: 0x333EDAC
	|-Signal<int, int, int>.add__callback
	|
	|-RVA: 0x333EFC0 Offset: 0x333EFC0 VA: 0x333EFC0
	|-Signal<int, int, Int32Enum>.add__callback
	|
	|-RVA: 0x333F1D4 Offset: 0x333F1D4 VA: 0x333F1D4
	|-Signal<int, int, Vector3>.add__callback
	|
	|-RVA: 0x333F3E8 Offset: 0x333F3E8 VA: 0x333F3E8
	|-Signal<object, object, object>.add__callback
	*/

	[CompilerGenerated]
	// RVA: -1 Offset: -1
	private void remove__callback(Action<TArg1, TArg2, TArg3> value) { }
	/* GenericInstMethod :
	|
	|-RVA: 0x333EE58 Offset: 0x333EE58 VA: 0x333EE58
	|-Signal<int, int, int>.remove__callback
	|
	|-RVA: 0x333F06C Offset: 0x333F06C VA: 0x333F06C
	|-Signal<int, int, Int32Enum>.remove__callback
	|
	|-RVA: 0x333F280 Offset: 0x333F280 VA: 0x333F280
	|-Signal<int, int, Vector3>.remove__callback
	|
	|-RVA: 0x333F494 Offset: 0x333F494 VA: 0x333F494
	|-Signal<object, object, object>.remove__callback
	*/

	// RVA: -1 Offset: -1
	public void Subscribe(Action<TArg1, TArg2, TArg3> handler) { }
	/* GenericInstMethod :
	|
	|-RVA: 0x333EF04 Offset: 0x333EF04 VA: 0x333EF04
	|-Signal<int, int, int>.Subscribe
	|
	|-RVA: 0x333F118 Offset: 0x333F118 VA: 0x333F118
	|-Signal<int, int, Int32Enum>.Subscribe
	|
	|-RVA: 0x333F32C Offset: 0x333F32C VA: 0x333F32C
	|-Signal<int, int, Vector3>.Subscribe
	|
	|-RVA: 0x333F540 Offset: 0x333F540 VA: 0x333F540
	|-Signal<object, object, object>.Subscribe
	*/

	// RVA: -1 Offset: -1
	public void Unsubscribe(Action<TArg1, TArg2, TArg3> handler) { }
	/* GenericInstMethod :
	|
	|-RVA: 0x333EF18 Offset: 0x333EF18 VA: 0x333EF18
	|-Signal<int, int, int>.Unsubscribe
	|
	|-RVA: 0x333F12C Offset: 0x333F12C VA: 0x333F12C
	|-Signal<int, int, Int32Enum>.Unsubscribe
	|
	|-RVA: 0x333F340 Offset: 0x333F340 VA: 0x333F340
	|-Signal<int, int, Vector3>.Unsubscribe
	|
	|-RVA: 0x333F554 Offset: 0x333F554 VA: 0x333F554
	|-Signal<object, object, object>.Unsubscribe
	*/

	// RVA: -1 Offset: -1
	public void UnsubscribeAll() { }
	/* GenericInstMethod :
	|
	|-RVA: 0x333EF2C Offset: 0x333EF2C VA: 0x333EF2C
	|-Signal<int, int, int>.UnsubscribeAll
	|
	|-RVA: 0x333F140 Offset: 0x333F140 VA: 0x333F140
	|-Signal<int, int, Int32Enum>.UnsubscribeAll
	|
	|-RVA: 0x333F354 Offset: 0x333F354 VA: 0x333F354
	|-Signal<int, int, Vector3>.UnsubscribeAll
	|
	|-RVA: 0x333F568 Offset: 0x333F568 VA: 0x333F568
	|-Signal<object, object, object>.UnsubscribeAll
	*/

	// RVA: -1 Offset: -1
	public void Invoke(TArg1 arg1, TArg2 arg2, TArg3 arg3) { }
	/* GenericInstMethod :
	|
	|-RVA: 0x333EF38 Offset: 0x333EF38 VA: 0x333EF38
	|-Signal<int, int, int>.Invoke
	|
	|-RVA: 0x333F14C Offset: 0x333F14C VA: 0x333F14C
	|-Signal<int, int, Int32Enum>.Invoke
	|
	|-RVA: 0x333F360 Offset: 0x333F360 VA: 0x333F360
	|-Signal<int, int, Vector3>.Invoke
	|
	|-RVA: 0x333F574 Offset: 0x333F574 VA: 0x333F574
	|-Signal<object, object, object>.Invoke
	*/

	// RVA: -1 Offset: -1 Slot: 4
	public string get_Hash() { }
	/* GenericInstMethod :
	|
	|-RVA: 0x333EF58 Offset: 0x333EF58 VA: 0x333EF58
	|-Signal<int, int, int>.get_Hash
	|
	|-RVA: 0x333F16C Offset: 0x333F16C VA: 0x333F16C
	|-Signal<int, int, Int32Enum>.get_Hash
	|
	|-RVA: 0x333F380 Offset: 0x333F380 VA: 0x333F380
	|-Signal<int, int, Vector3>.get_Hash
	|
	|-RVA: 0x333F594 Offset: 0x333F594 VA: 0x333F594
	|-Signal<object, object, object>.get_Hash
	*/

	// RVA: -1 Offset: -1
	public void .ctor() { }
	/* GenericInstMethod :
	|
	|-RVA: 0x333EFB8 Offset: 0x333EFB8 VA: 0x333EFB8
	|-Signal<int, int, int>..ctor
	|
	|-RVA: 0x333F1CC Offset: 0x333F1CC VA: 0x333F1CC
	|-Signal<int, int, Int32Enum>..ctor
	|
	|-RVA: 0x333F3E0 Offset: 0x333F3E0 VA: 0x333F3E0
	|-Signal<int, int, Vector3>..ctor
	|
	|-RVA: 0x333F5F4 Offset: 0x333F5F4 VA: 0x333F5F4
	|-Signal<object, object, object>..ctor
	*/
}

// Namespace: Modules.Infrastructure.Common.Scripts.SignalNS