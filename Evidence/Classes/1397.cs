public class LevelBatches // TypeDefIndex: 1397
{
	// Fields
	public List<LevelBatch> BatchesToDownload; // 0x10
	public int MaxToLevel; // 0x18

	// Properties
	public int Count { get; }
	public bool IsEmpty { get; }
	public bool IsAllDownloadedAndSaved { get; }
	public bool AnyDownloading { get; }
	public bool AnyFailed { get; }

	// Methods

	// RVA: 0x1E8A22C Offset: 0x1E8A22C VA: 0x1E8A22C
	public int get_Count() { }

	// RVA: 0x1E8A278 Offset: 0x1E8A278 VA: 0x1E8A278
	public bool get_IsEmpty() { }

	// RVA: 0x1E8A2CC Offset: 0x1E8A2CC VA: 0x1E8A2CC
	public bool get_IsAllDownloadedAndSaved() { }

	// RVA: 0x1E8A3E8 Offset: 0x1E8A3E8 VA: 0x1E8A3E8
	public bool get_AnyDownloading() { }

	// RVA: 0x1E8A504 Offset: 0x1E8A504 VA: 0x1E8A504
	public bool get_AnyFailed() { }

	// RVA: 0x1E8A620 Offset: 0x1E8A620 VA: 0x1E8A620
	public void .ctor() { }

	// RVA: 0x1E8A6A8 Offset: 0x1E8A6A8 VA: 0x1E8A6A8
	public void ResetFailed() { }

	// RVA: 0x1E8A7E8 Offset: 0x1E8A7E8 VA: 0x1E8A7E8
	public void AddBatches(List<LevelBatch> listOfBatch, int toLevel) { }
}

// Namespace: 
[CompilerGenerated]