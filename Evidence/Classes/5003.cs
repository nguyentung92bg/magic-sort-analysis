public interface ISyncable // TypeDefIndex: 5003
{
	// Methods

	// RVA: -1 Offset: -1 Slot: 0
	public abstract bool IsDataChangedSinceLastSave();

	// RVA: -1 Offset: -1 Slot: 1
	public abstract void DataSynced();

	// RVA: -1 Offset: -1 Slot: 2
	public abstract string SerializeModelForSync();

	// RVA: -1 Offset: -1 Slot: 3
	public abstract string GetSyncName();

	// RVA: -1 Offset: -1 Slot: 4
	public abstract void OverwriteModelFromSync(string data);
}

// Namespace: Modules.Contexts.Application.ServerCommunication.Scripts