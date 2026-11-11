public class DownloadRequest // TypeDefIndex: 667
{
	// Fields
	public string Id; // 0x10
	public bool DidRequestSent; // 0x18
	public int Retries; // 0x1C
	public bool IsSuccessful; // 0x20
	public bool RequestLoadOnSuccess; // 0x21
	public int Priority; // 0x24

	// Methods

	// RVA: 0x40DD410 Offset: 0x40DD410 VA: 0x40DD410
	public void .ctor(string id, int priority) { }
}

// Namespace: Modules.Infrastructure.AssetManagement