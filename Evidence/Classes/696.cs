public class SerializableDictionary<TKey, TValue> : Dictionary<TKey, TValue>, ISerializationCallbackReceiver // TypeDefIndex: 696
{
	// Fields
	[SerializeField]
	private List<TKey> keys; // 0x0
	[SerializeField]
	private List<TValue> values; // 0x0

	// Methods

	// RVA: -1 Offset: -1 Slot: 46
	public void OnBeforeSerialize() { }
	/* GenericInstMethod :
	|
	|-RVA: 0x3338AC0 Offset: 0x3338AC0 VA: 0x3338AC0
	|-SerializableDictionary<object, object>.OnBeforeSerialize
	*/

	// RVA: -1 Offset: -1 Slot: 47
	public void OnAfterDeserialize() { }
	/* GenericInstMethod :
	|
	|-RVA: 0x3338C4C Offset: 0x3338C4C VA: 0x3338C4C
	|-SerializableDictionary<object, object>.OnAfterDeserialize
	*/

	// RVA: -1 Offset: -1
	public void .ctor() { }
	/* GenericInstMethod :
	|
	|-RVA: 0x3338DE0 Offset: 0x3338DE0 VA: 0x3338DE0
	|-SerializableDictionary<object, object>..ctor
	*/
}

// Namespace: Modules.Infrastructure.Common.Scripts