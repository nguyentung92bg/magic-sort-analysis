public class BoardItemContainer : MonoBehaviour, ISerializationCallbackReceiver // TypeDefIndex: 989
{
	// Fields
	public string SerializedContent; // 0x18
	public List<UnityObjectKeyValue> UnityObjectKeyValues; // 0x20

	// Properties
	private JsonSerializerSettings SerializerSettings { get; }

	// Methods

	// RVA: 0x40EA9D4 Offset: 0x40EA9D4 VA: 0x40EA9D4
	private JsonSerializerSettings get_SerializerSettings() { }

	// RVA: 0x40EAB60 Offset: 0x40EAB60 VA: 0x40EAB60 Slot: 4
	public void OnBeforeSerialize() { }

	// RVA: 0x40EAB64 Offset: 0x40EAB64 VA: 0x40EAB64 Slot: 5
	public void OnAfterDeserialize() { }

	// RVA: 0x40EAB68 Offset: 0x40EAB68 VA: 0x40EAB68
	public void .ctor() { }
}

// Namespace: Modules.Infrastructure.Common.Scripts.Component
[Usage(32767)]