public class AsyncThreadedSaveLoad<T> : ISaveLoad<T> // TypeDefIndex: 449
{
	// Fields
	private readonly string _modelName; // 0x0
	private readonly JsonSerializerSettings _jsonSerializerSettings; // 0x0
	private const string SaveFolder = "SaveData";
	private readonly string _filePath; // 0x0
	private readonly string _tempFilePath; // 0x0
	private readonly object _fileLock; // 0x0

	// Methods

	// RVA: -1 Offset: -1
	public void .ctor(string modelName) { }
	/* GenericInstMethod :
	|
	|-RVA: 0x17B3348 Offset: 0x17B3348 VA: 0x17B3348
	|-AsyncThreadedSaveLoad<object>..ctor
	*/

	// RVA: -1 Offset: -1 Slot: 4
	public void Save(T data) { }
	/* GenericInstMethod :
	|
	|-RVA: 0x17B35B0 Offset: 0x17B35B0 VA: 0x17B35B0
	|-AsyncThreadedSaveLoad<object>.Save
	*/

	// RVA: -1 Offset: -1
	private void CreateDirectoryIfNotExists() { }
	/* GenericInstMethod :
	|
	|-RVA: 0x17B36C8 Offset: 0x17B36C8 VA: 0x17B36C8
	|-AsyncThreadedSaveLoad<object>.CreateDirectoryIfNotExists
	*/

	// RVA: -1 Offset: -1 Slot: 5
	private T Modules.Infrastructure.Persistence.ISaveLoad<T>.Load() { }
	/* GenericInstMethod :
	|
	|-RVA: 0x17B375C Offset: 0x17B375C VA: 0x17B375C
	|-AsyncThreadedSaveLoad<object>.Modules.Infrastructure.Persistence.ISaveLoad<T>.Load
	*/

	// RVA: -1 Offset: -1 Slot: 6
	public string Serialize(T data) { }
	/* GenericInstMethod :
	|
	|-RVA: 0x17B38D8 Offset: 0x17B38D8 VA: 0x17B38D8
	|-AsyncThreadedSaveLoad<object>.Serialize
	*/

	// RVA: -1 Offset: -1
	private void WriteDataToFile(string data) { }
	/* GenericInstMethod :
	|
	|-RVA: 0x17B3948 Offset: 0x17B3948 VA: 0x17B3948
	|-AsyncThreadedSaveLoad<object>.WriteDataToFile
	*/
}

// Namespace: Modules.Infrastructure.Persistence