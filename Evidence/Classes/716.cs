public class Signal<T> : ISignal // TypeDefIndex: 716
{
	// Fields
	[CompilerGenerated]
	private Action<T> _callback; // 0x0
	private T lastArgument; // 0x0
	private string _hash; // 0x0

	// Properties
	public string Hash { get; }

	// Methods

	[CompilerGenerated]
	// RVA: -1 Offset: -1
	private void add__callback(Action<T> value) { }
	/* GenericInstMethod :
	|
	|-RVA: 0x333CA08 Offset: 0x333CA08 VA: 0x333CA08
	|-Signal<bool>.add__callback
	|
	|-RVA: 0x333CC28 Offset: 0x333CC28 VA: 0x333CC28
	|-Signal<DateTime>.add__callback
	|
	|-RVA: 0x333CE44 Offset: 0x333CE44 VA: 0x333CE44
	|-Signal<int>.add__callback
	|
	|-RVA: 0x333D060 Offset: 0x333D060 VA: 0x333D060
	|-Signal<Int32Enum>.add__callback
	|
	|-RVA: 0x333D27C Offset: 0x333D27C VA: 0x333D27C
	|-Signal<object>.add__callback
	|
	|-RVA: 0x333D4A0 Offset: 0x333D4A0 VA: 0x333D4A0
	|-Signal<float>.add__callback
	|
	|-RVA: 0x333D6BC Offset: 0x333D6BC VA: 0x333D6BC
	|-Signal<Vector3>.add__callback
	*/

	[CompilerGenerated]
	// RVA: -1 Offset: -1
	private void remove__callback(Action<T> value) { }
	/* GenericInstMethod :
	|
	|-RVA: 0x333CAB4 Offset: 0x333CAB4 VA: 0x333CAB4
	|-Signal<bool>.remove__callback
	|
	|-RVA: 0x333CCD4 Offset: 0x333CCD4 VA: 0x333CCD4
	|-Signal<DateTime>.remove__callback
	|
	|-RVA: 0x333CEF0 Offset: 0x333CEF0 VA: 0x333CEF0
	|-Signal<int>.remove__callback
	|
	|-RVA: 0x333D10C Offset: 0x333D10C VA: 0x333D10C
	|-Signal<Int32Enum>.remove__callback
	|
	|-RVA: 0x333D328 Offset: 0x333D328 VA: 0x333D328
	|-Signal<object>.remove__callback
	|
	|-RVA: 0x333D54C Offset: 0x333D54C VA: 0x333D54C
	|-Signal<float>.remove__callback
	|
	|-RVA: 0x333D768 Offset: 0x333D768 VA: 0x333D768
	|-Signal<Vector3>.remove__callback
	*/

	// RVA: -1 Offset: -1
	public void Subscribe(Action<T> handler) { }
	/* GenericInstMethod :
	|
	|-RVA: 0x333CB60 Offset: 0x333CB60 VA: 0x333CB60
	|-Signal<bool>.Subscribe
	|
	|-RVA: 0x333CD80 Offset: 0x333CD80 VA: 0x333CD80
	|-Signal<DateTime>.Subscribe
	|
	|-RVA: 0x333CF9C Offset: 0x333CF9C VA: 0x333CF9C
	|-Signal<int>.Subscribe
	|
	|-RVA: 0x333D1B8 Offset: 0x333D1B8 VA: 0x333D1B8
	|-Signal<Int32Enum>.Subscribe
	|
	|-RVA: 0x333D3D4 Offset: 0x333D3D4 VA: 0x333D3D4
	|-Signal<object>.Subscribe
	|
	|-RVA: 0x333D5F8 Offset: 0x333D5F8 VA: 0x333D5F8
	|-Signal<float>.Subscribe
	|
	|-RVA: 0x333D814 Offset: 0x333D814 VA: 0x333D814
	|-Signal<Vector3>.Subscribe
	*/

	// RVA: -1 Offset: -1
	public void Unsubscribe(Action<T> handler) { }
	/* GenericInstMethod :
	|
	|-RVA: 0x333CB74 Offset: 0x333CB74 VA: 0x333CB74
	|-Signal<bool>.Unsubscribe
	|
	|-RVA: 0x333CD94 Offset: 0x333CD94 VA: 0x333CD94
	|-Signal<DateTime>.Unsubscribe
	|
	|-RVA: 0x333CFB0 Offset: 0x333CFB0 VA: 0x333CFB0
	|-Signal<int>.Unsubscribe
	|
	|-RVA: 0x333D1CC Offset: 0x333D1CC VA: 0x333D1CC
	|-Signal<Int32Enum>.Unsubscribe
	|
	|-RVA: 0x333D3E8 Offset: 0x333D3E8 VA: 0x333D3E8
	|-Signal<object>.Unsubscribe
	|
	|-RVA: 0x333D60C Offset: 0x333D60C VA: 0x333D60C
	|-Signal<float>.Unsubscribe
	|
	|-RVA: 0x333D828 Offset: 0x333D828 VA: 0x333D828
	|-Signal<Vector3>.Unsubscribe
	*/

	// RVA: -1 Offset: -1
	public void UnsubscribeAll() { }
	/* GenericInstMethod :
	|
	|-RVA: 0x333CB88 Offset: 0x333CB88 VA: 0x333CB88
	|-Signal<bool>.UnsubscribeAll
	|
	|-RVA: 0x333CDA8 Offset: 0x333CDA8 VA: 0x333CDA8
	|-Signal<DateTime>.UnsubscribeAll
	|
	|-RVA: 0x333CFC4 Offset: 0x333CFC4 VA: 0x333CFC4
	|-Signal<int>.UnsubscribeAll
	|
	|-RVA: 0x333D1E0 Offset: 0x333D1E0 VA: 0x333D1E0
	|-Signal<Int32Enum>.UnsubscribeAll
	|
	|-RVA: 0x333D3FC Offset: 0x333D3FC VA: 0x333D3FC
	|-Signal<object>.UnsubscribeAll
	|
	|-RVA: 0x333D620 Offset: 0x333D620 VA: 0x333D620
	|-Signal<float>.UnsubscribeAll
	|
	|-RVA: 0x333D83C Offset: 0x333D83C VA: 0x333D83C
	|-Signal<Vector3>.UnsubscribeAll
	*/

	// RVA: -1 Offset: -1
	public T GetLast(T defaultArgument) { }
	/* GenericInstMethod :
	|
	|-RVA: 0x333CB94 Offset: 0x333CB94 VA: 0x333CB94
	|-Signal<bool>.GetLast
	|
	|-RVA: 0x333CDB4 Offset: 0x333CDB4 VA: 0x333CDB4
	|-Signal<DateTime>.GetLast
	|
	|-RVA: 0x333CFD0 Offset: 0x333CFD0 VA: 0x333CFD0
	|-Signal<int>.GetLast
	|
	|-RVA: 0x333D1EC Offset: 0x333D1EC VA: 0x333D1EC
	|-Signal<Int32Enum>.GetLast
	|
	|-RVA: 0x333D408 Offset: 0x333D408 VA: 0x333D408
	|-Signal<object>.GetLast
	|
	|-RVA: 0x333D62C Offset: 0x333D62C VA: 0x333D62C
	|-Signal<float>.GetLast
	|
	|-RVA: 0x333D848 Offset: 0x333D848 VA: 0x333D848
	|-Signal<Vector3>.GetLast
	*/

	// RVA: -1 Offset: -1
	public void Invoke(T arg1) { }
	/* GenericInstMethod :
	|
	|-RVA: 0x333CB9C Offset: 0x333CB9C VA: 0x333CB9C
	|-Signal<bool>.Invoke
	|
	|-RVA: 0x333CDBC Offset: 0x333CDBC VA: 0x333CDBC
	|-Signal<DateTime>.Invoke
	|
	|-RVA: 0x333CFD8 Offset: 0x333CFD8 VA: 0x333CFD8
	|-Signal<int>.Invoke
	|
	|-RVA: 0x333D1F4 Offset: 0x333D1F4 VA: 0x333D1F4
	|-Signal<Int32Enum>.Invoke
	|
	|-RVA: 0x333D418 Offset: 0x333D418 VA: 0x333D418
	|-Signal<object>.Invoke
	|
	|-RVA: 0x333D634 Offset: 0x333D634 VA: 0x333D634
	|-Signal<float>.Invoke
	|
	|-RVA: 0x333D854 Offset: 0x333D854 VA: 0x333D854
	|-Signal<Vector3>.Invoke
	*/

	// RVA: -1 Offset: -1 Slot: 4
	public string get_Hash() { }
	/* GenericInstMethod :
	|
	|-RVA: 0x333CBC0 Offset: 0x333CBC0 VA: 0x333CBC0
	|-Signal<bool>.get_Hash
	|
	|-RVA: 0x333CDDC Offset: 0x333CDDC VA: 0x333CDDC
	|-Signal<DateTime>.get_Hash
	|
	|-RVA: 0x333CFF8 Offset: 0x333CFF8 VA: 0x333CFF8
	|-Signal<int>.get_Hash
	|
	|-RVA: 0x333D214 Offset: 0x333D214 VA: 0x333D214
	|-Signal<Int32Enum>.get_Hash
	|
	|-RVA: 0x333D438 Offset: 0x333D438 VA: 0x333D438
	|-Signal<object>.get_Hash
	|
	|-RVA: 0x333D654 Offset: 0x333D654 VA: 0x333D654
	|-Signal<float>.get_Hash
	|
	|-RVA: 0x333D874 Offset: 0x333D874 VA: 0x333D874
	|-Signal<Vector3>.get_Hash
	*/

	// RVA: -1 Offset: -1
	public void .ctor() { }
	/* GenericInstMethod :
	|
	|-RVA: 0x333CC20 Offset: 0x333CC20 VA: 0x333CC20
	|-Signal<bool>..ctor
	|
	|-RVA: 0x333CE3C Offset: 0x333CE3C VA: 0x333CE3C
	|-Signal<DateTime>..ctor
	|
	|-RVA: 0x333D058 Offset: 0x333D058 VA: 0x333D058
	|-Signal<int>..ctor
	|
	|-RVA: 0x333D274 Offset: 0x333D274 VA: 0x333D274
	|-Signal<Int32Enum>..ctor
	|
	|-RVA: 0x333D498 Offset: 0x333D498 VA: 0x333D498
	|-Signal<object>..ctor
	|
	|-RVA: 0x333D6B4 Offset: 0x333D6B4 VA: 0x333D6B4
	|-Signal<float>..ctor
	|
	|-RVA: 0x333D8D4 Offset: 0x333D8D4 VA: 0x333D8D4
	|-Signal<Vector3>..ctor
	*/
}

// Namespace: Modules.Infrastructure.Common.Scripts.SignalNS