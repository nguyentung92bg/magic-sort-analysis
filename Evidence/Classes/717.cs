public class Signal<TArg1, TArg2> : ISignal // TypeDefIndex: 717
{
	// Fields
	private string _hash; // 0x0
	[CompilerGenerated]
	private Action<TArg1, TArg2> _callback; // 0x0

	// Properties
	public string Hash { get; }

	// Methods

	[CompilerGenerated]
	// RVA: -1 Offset: -1
	private void add__callback(Action<TArg1, TArg2> value) { }
	/* GenericInstMethod :
	|
	|-RVA: 0x333D8DC Offset: 0x333D8DC VA: 0x333D8DC
	|-Signal<int, int>.add__callback
	|
	|-RVA: 0x333DAF0 Offset: 0x333DAF0 VA: 0x333DAF0
	|-Signal<Int32Enum, bool>.add__callback
	|
	|-RVA: 0x333DD08 Offset: 0x333DD08 VA: 0x333DD08
	|-Signal<Int32Enum, DateTime>.add__callback
	|
	|-RVA: 0x333DF1C Offset: 0x333DF1C VA: 0x333DF1C
	|-Signal<Int32Enum, int>.add__callback
	|
	|-RVA: 0x333E130 Offset: 0x333E130 VA: 0x333E130
	|-Signal<Int32Enum, object>.add__callback
	|
	|-RVA: 0x333E344 Offset: 0x333E344 VA: 0x333E344
	|-Signal<object, bool>.add__callback
	|
	|-RVA: 0x333E55C Offset: 0x333E55C VA: 0x333E55C
	|-Signal<object, Int32Enum>.add__callback
	|
	|-RVA: 0x333E770 Offset: 0x333E770 VA: 0x333E770
	|-Signal<object, object>.add__callback
	|
	|-RVA: 0x333E984 Offset: 0x333E984 VA: 0x333E984
	|-Signal<object, Vector3>.add__callback
	|
	|-RVA: 0x333EB98 Offset: 0x333EB98 VA: 0x333EB98
	|-Signal<Vector3, int>.add__callback
	*/

	[CompilerGenerated]
	// RVA: -1 Offset: -1
	private void remove__callback(Action<TArg1, TArg2> value) { }
	/* GenericInstMethod :
	|
	|-RVA: 0x333D988 Offset: 0x333D988 VA: 0x333D988
	|-Signal<int, int>.remove__callback
	|
	|-RVA: 0x333DB9C Offset: 0x333DB9C VA: 0x333DB9C
	|-Signal<Int32Enum, bool>.remove__callback
	|
	|-RVA: 0x333DDB4 Offset: 0x333DDB4 VA: 0x333DDB4
	|-Signal<Int32Enum, DateTime>.remove__callback
	|
	|-RVA: 0x333DFC8 Offset: 0x333DFC8 VA: 0x333DFC8
	|-Signal<Int32Enum, int>.remove__callback
	|
	|-RVA: 0x333E1DC Offset: 0x333E1DC VA: 0x333E1DC
	|-Signal<Int32Enum, object>.remove__callback
	|
	|-RVA: 0x333E3F0 Offset: 0x333E3F0 VA: 0x333E3F0
	|-Signal<object, bool>.remove__callback
	|
	|-RVA: 0x333E608 Offset: 0x333E608 VA: 0x333E608
	|-Signal<object, Int32Enum>.remove__callback
	|
	|-RVA: 0x333E81C Offset: 0x333E81C VA: 0x333E81C
	|-Signal<object, object>.remove__callback
	|
	|-RVA: 0x333EA30 Offset: 0x333EA30 VA: 0x333EA30
	|-Signal<object, Vector3>.remove__callback
	|
	|-RVA: 0x333EC44 Offset: 0x333EC44 VA: 0x333EC44
	|-Signal<Vector3, int>.remove__callback
	*/

	// RVA: -1 Offset: -1
	public void Subscribe(Action<TArg1, TArg2> handler) { }
	/* GenericInstMethod :
	|
	|-RVA: 0x333DA34 Offset: 0x333DA34 VA: 0x333DA34
	|-Signal<int, int>.Subscribe
	|
	|-RVA: 0x333DC48 Offset: 0x333DC48 VA: 0x333DC48
	|-Signal<Int32Enum, bool>.Subscribe
	|
	|-RVA: 0x333DE60 Offset: 0x333DE60 VA: 0x333DE60
	|-Signal<Int32Enum, DateTime>.Subscribe
	|
	|-RVA: 0x333E074 Offset: 0x333E074 VA: 0x333E074
	|-Signal<Int32Enum, int>.Subscribe
	|
	|-RVA: 0x333E288 Offset: 0x333E288 VA: 0x333E288
	|-Signal<Int32Enum, object>.Subscribe
	|
	|-RVA: 0x333E49C Offset: 0x333E49C VA: 0x333E49C
	|-Signal<object, bool>.Subscribe
	|
	|-RVA: 0x333E6B4 Offset: 0x333E6B4 VA: 0x333E6B4
	|-Signal<object, Int32Enum>.Subscribe
	|
	|-RVA: 0x333E8C8 Offset: 0x333E8C8 VA: 0x333E8C8
	|-Signal<object, object>.Subscribe
	|
	|-RVA: 0x333EADC Offset: 0x333EADC VA: 0x333EADC
	|-Signal<object, Vector3>.Subscribe
	|
	|-RVA: 0x333ECF0 Offset: 0x333ECF0 VA: 0x333ECF0
	|-Signal<Vector3, int>.Subscribe
	*/

	// RVA: -1 Offset: -1
	public void Unsubscribe(Action<TArg1, TArg2> handler) { }
	/* GenericInstMethod :
	|
	|-RVA: 0x333DA48 Offset: 0x333DA48 VA: 0x333DA48
	|-Signal<int, int>.Unsubscribe
	|
	|-RVA: 0x333DC5C Offset: 0x333DC5C VA: 0x333DC5C
	|-Signal<Int32Enum, bool>.Unsubscribe
	|
	|-RVA: 0x333DE74 Offset: 0x333DE74 VA: 0x333DE74
	|-Signal<Int32Enum, DateTime>.Unsubscribe
	|
	|-RVA: 0x333E088 Offset: 0x333E088 VA: 0x333E088
	|-Signal<Int32Enum, int>.Unsubscribe
	|
	|-RVA: 0x333E29C Offset: 0x333E29C VA: 0x333E29C
	|-Signal<Int32Enum, object>.Unsubscribe
	|
	|-RVA: 0x333E4B0 Offset: 0x333E4B0 VA: 0x333E4B0
	|-Signal<object, bool>.Unsubscribe
	|
	|-RVA: 0x333E6C8 Offset: 0x333E6C8 VA: 0x333E6C8
	|-Signal<object, Int32Enum>.Unsubscribe
	|
	|-RVA: 0x333E8DC Offset: 0x333E8DC VA: 0x333E8DC
	|-Signal<object, object>.Unsubscribe
	|
	|-RVA: 0x333EAF0 Offset: 0x333EAF0 VA: 0x333EAF0
	|-Signal<object, Vector3>.Unsubscribe
	|
	|-RVA: 0x333ED04 Offset: 0x333ED04 VA: 0x333ED04
	|-Signal<Vector3, int>.Unsubscribe
	*/

	// RVA: -1 Offset: -1
	public void UnsubscribeAll() { }
	/* GenericInstMethod :
	|
	|-RVA: 0x333DA5C Offset: 0x333DA5C VA: 0x333DA5C
	|-Signal<int, int>.UnsubscribeAll
	|
	|-RVA: 0x333DC70 Offset: 0x333DC70 VA: 0x333DC70
	|-Signal<Int32Enum, bool>.UnsubscribeAll
	|
	|-RVA: 0x333DE88 Offset: 0x333DE88 VA: 0x333DE88
	|-Signal<Int32Enum, DateTime>.UnsubscribeAll
	|
	|-RVA: 0x333E09C Offset: 0x333E09C VA: 0x333E09C
	|-Signal<Int32Enum, int>.UnsubscribeAll
	|
	|-RVA: 0x333E2B0 Offset: 0x333E2B0 VA: 0x333E2B0
	|-Signal<Int32Enum, object>.UnsubscribeAll
	|
	|-RVA: 0x333E4C4 Offset: 0x333E4C4 VA: 0x333E4C4
	|-Signal<object, bool>.UnsubscribeAll
	|
	|-RVA: 0x333E6DC Offset: 0x333E6DC VA: 0x333E6DC
	|-Signal<object, Int32Enum>.UnsubscribeAll
	|
	|-RVA: 0x333E8F0 Offset: 0x333E8F0 VA: 0x333E8F0
	|-Signal<object, object>.UnsubscribeAll
	|
	|-RVA: 0x333EB04 Offset: 0x333EB04 VA: 0x333EB04
	|-Signal<object, Vector3>.UnsubscribeAll
	|
	|-RVA: 0x333ED18 Offset: 0x333ED18 VA: 0x333ED18
	|-Signal<Vector3, int>.UnsubscribeAll
	*/

	// RVA: -1 Offset: -1
	public void Invoke(TArg1 arg1, TArg2 arg2) { }
	/* GenericInstMethod :
	|
	|-RVA: 0x333DA68 Offset: 0x333DA68 VA: 0x333DA68
	|-Signal<int, int>.Invoke
	|
	|-RVA: 0x333DC7C Offset: 0x333DC7C VA: 0x333DC7C
	|-Signal<Int32Enum, bool>.Invoke
	|
	|-RVA: 0x333DE94 Offset: 0x333DE94 VA: 0x333DE94
	|-Signal<Int32Enum, DateTime>.Invoke
	|
	|-RVA: 0x333E0A8 Offset: 0x333E0A8 VA: 0x333E0A8
	|-Signal<Int32Enum, int>.Invoke
	|
	|-RVA: 0x333E2BC Offset: 0x333E2BC VA: 0x333E2BC
	|-Signal<Int32Enum, object>.Invoke
	|
	|-RVA: 0x333E4D0 Offset: 0x333E4D0 VA: 0x333E4D0
	|-Signal<object, bool>.Invoke
	|
	|-RVA: 0x333E6E8 Offset: 0x333E6E8 VA: 0x333E6E8
	|-Signal<object, Int32Enum>.Invoke
	|
	|-RVA: 0x333E8FC Offset: 0x333E8FC VA: 0x333E8FC
	|-Signal<object, object>.Invoke
	|
	|-RVA: 0x333EB10 Offset: 0x333EB10 VA: 0x333EB10
	|-Signal<object, Vector3>.Invoke
	|
	|-RVA: 0x333ED24 Offset: 0x333ED24 VA: 0x333ED24
	|-Signal<Vector3, int>.Invoke
	*/

	// RVA: -1 Offset: -1 Slot: 4
	public string get_Hash() { }
	/* GenericInstMethod :
	|
	|-RVA: 0x333DA88 Offset: 0x333DA88 VA: 0x333DA88
	|-Signal<int, int>.get_Hash
	|
	|-RVA: 0x333DCA0 Offset: 0x333DCA0 VA: 0x333DCA0
	|-Signal<Int32Enum, bool>.get_Hash
	|
	|-RVA: 0x333DEB4 Offset: 0x333DEB4 VA: 0x333DEB4
	|-Signal<Int32Enum, DateTime>.get_Hash
	|
	|-RVA: 0x333E0C8 Offset: 0x333E0C8 VA: 0x333E0C8
	|-Signal<Int32Enum, int>.get_Hash
	|
	|-RVA: 0x333E2DC Offset: 0x333E2DC VA: 0x333E2DC
	|-Signal<Int32Enum, object>.get_Hash
	|
	|-RVA: 0x333E4F4 Offset: 0x333E4F4 VA: 0x333E4F4
	|-Signal<object, bool>.get_Hash
	|
	|-RVA: 0x333E708 Offset: 0x333E708 VA: 0x333E708
	|-Signal<object, Int32Enum>.get_Hash
	|
	|-RVA: 0x333E91C Offset: 0x333E91C VA: 0x333E91C
	|-Signal<object, object>.get_Hash
	|
	|-RVA: 0x333EB30 Offset: 0x333EB30 VA: 0x333EB30
	|-Signal<object, Vector3>.get_Hash
	|
	|-RVA: 0x333ED44 Offset: 0x333ED44 VA: 0x333ED44
	|-Signal<Vector3, int>.get_Hash
	*/

	// RVA: -1 Offset: -1
	public void .ctor() { }
	/* GenericInstMethod :
	|
	|-RVA: 0x333DAE8 Offset: 0x333DAE8 VA: 0x333DAE8
	|-Signal<int, int>..ctor
	|
	|-RVA: 0x333DD00 Offset: 0x333DD00 VA: 0x333DD00
	|-Signal<Int32Enum, bool>..ctor
	|
	|-RVA: 0x333DF14 Offset: 0x333DF14 VA: 0x333DF14
	|-Signal<Int32Enum, DateTime>..ctor
	|
	|-RVA: 0x333E128 Offset: 0x333E128 VA: 0x333E128
	|-Signal<Int32Enum, int>..ctor
	|
	|-RVA: 0x333E33C Offset: 0x333E33C VA: 0x333E33C
	|-Signal<Int32Enum, object>..ctor
	|
	|-RVA: 0x333E554 Offset: 0x333E554 VA: 0x333E554
	|-Signal<object, bool>..ctor
	|
	|-RVA: 0x333E768 Offset: 0x333E768 VA: 0x333E768
	|-Signal<object, Int32Enum>..ctor
	|
	|-RVA: 0x333E97C Offset: 0x333E97C VA: 0x333E97C
	|-Signal<object, object>..ctor
	|
	|-RVA: 0x333EB90 Offset: 0x333EB90 VA: 0x333EB90
	|-Signal<object, Vector3>..ctor
	|
	|-RVA: 0x333EDA4 Offset: 0x333EDA4 VA: 0x333EDA4
	|-Signal<Vector3, int>..ctor
	*/
}

// Namespace: Modules.Infrastructure.Common.Scripts.SignalNS