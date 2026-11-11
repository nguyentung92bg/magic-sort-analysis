public class SaveLoad<T> : ISaveLoad<T> // TypeDefIndex: 459
{
	// Fields
	private string _modelName; // 0x0
	private readonly JsonSerializerSettings _jsonSerializerSettings; // 0x0

	// Methods

	// RVA: -1 Offset: -1
	public void .ctor(string modelName) { }
	/* GenericInstMethod :
	|
	|-RVA: 0x3670B80 Offset: 0x3670B80 VA: 0x3670B80
	|-SaveLoad<object>..ctor
	*/

	// RVA: -1 Offset: -1 Slot: 6
	public string Serialize(T data) { }
	/* GenericInstMethod :
	|
	|-RVA: 0x3670CA8 Offset: 0x3670CA8 VA: 0x3670CA8
	|-SaveLoad<object>.Serialize
	*/

	// RVA: -1 Offset: -1 Slot: 4
	public void Save(T data) { }
	/* GenericInstMethod :
	|
	|-RVA: 0x3670D18 Offset: 0x3670D18 VA: 0x3670D18
	|-SaveLoad<object>.Save
	*/

	// RVA: -1 Offset: -1 Slot: 5
	public T Load() { }
	/* GenericInstMethod :
	|
	|-RVA: 0x3670DA0 Offset: 0x3670DA0 VA: 0x3670DA0
	|-SaveLoad<object>.Load
	*/
}

// Namespace: Modules.Infrastructure.Notifications.Scripts
[CreateAssetMenu(fileName = "LocalNotificationSo", menuName = "Notifications/LocalNotificationSo")]