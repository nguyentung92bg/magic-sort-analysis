public class LevelBatch // TypeDefIndex: 1395
{
	// Fields
	public int FromLevel; // 0x10
	public int ToLevel; // 0x14
	[CompilerGenerated]
	private bool <IsRequestedToDownload>k__BackingField; // 0x18
	[CompilerGenerated]
	private bool <IsDownloadedAndSaved>k__BackingField; // 0x19
	[CompilerGenerated]
	private bool <IsFailed>k__BackingField; // 0x1A
	[CompilerGenerated]
	private readonly List<string> <Seeds>k__BackingField; // 0x20

	// Properties
	public bool IsRequestedToDownload { get; set; }
	public bool IsDownloadedAndSaved { get; set; }
	public bool IsFailed { get; set; }
	public List<string> Seeds { get; }
	public int Count { get; }

	// Methods

	[CompilerGenerated]
	// RVA: 0x1E8A048 Offset: 0x1E8A048 VA: 0x1E8A048
	public bool get_IsRequestedToDownload() { }

	[CompilerGenerated]
	// RVA: 0x1E8A050 Offset: 0x1E8A050 VA: 0x1E8A050
	public void set_IsRequestedToDownload(bool value) { }

	[CompilerGenerated]
	// RVA: 0x1E8A05C Offset: 0x1E8A05C VA: 0x1E8A05C
	public bool get_IsDownloadedAndSaved() { }

	[CompilerGenerated]
	// RVA: 0x1E8A064 Offset: 0x1E8A064 VA: 0x1E8A064
	public void set_IsDownloadedAndSaved(bool value) { }

	[CompilerGenerated]
	// RVA: 0x1E8A070 Offset: 0x1E8A070 VA: 0x1E8A070
	public bool get_IsFailed() { }

	[CompilerGenerated]
	// RVA: 0x1E8A078 Offset: 0x1E8A078 VA: 0x1E8A078
	public void set_IsFailed(bool value) { }

	[CompilerGenerated]
	// RVA: 0x1E8A084 Offset: 0x1E8A084 VA: 0x1E8A084
	public List<string> get_Seeds() { }

	// RVA: 0x1E8A08C Offset: 0x1E8A08C VA: 0x1E8A08C
	public int get_Count() { }

	// RVA: 0x1E8A0D4 Offset: 0x1E8A0D4 VA: 0x1E8A0D4
	public void .ctor(int fromLevel, int toLevel) { }

	// RVA: 0x1E8A17C Offset: 0x1E8A17C VA: 0x1E8A17C
	public void AddSeed(string seed) { }
}

// Namespace: 
[CompilerGenerated]
[Serializable]