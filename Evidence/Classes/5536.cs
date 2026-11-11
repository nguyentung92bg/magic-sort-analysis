public class BestHttpTransport : IHttpTransport // TypeDefIndex: 5536
{
	// Fields
	private static int _isSetup; // 0x0

	// Properties
	public bool UseJson { get; }
	private static bool IsSetup { get; }

	// Methods

	// RVA: 0x14338B4 Offset: 0x14338B4 VA: 0x14338B4 Slot: 4
	public bool get_UseJson() { }

	// RVA: 0x14338BC Offset: 0x14338BC VA: 0x14338BC
	public static void EnsureSetupInUnityEvent() { }

	// RVA: 0x1433A78 Offset: 0x1433A78 VA: 0x1433A78
	private static bool get_IsSetup() { }

	[NullableContext(2)]
	// RVA: 0x1433ACC Offset: 0x1433ACC VA: 0x1433ACC
	private static Nullable<long> TryParseServerUnixMsFromResponse(HTTPResponse resp) { }

	[AsyncStateMachine(typeof(BestHttpTransport.<PostAsync>d__7))]
	// RVA: 0x1433CB0 Offset: 0x1433CB0 VA: 0x1433CB0 Slot: 5
	public Task<byte[]> PostAsync(string url, byte[] payload, Dictionary<string, string> headers, CancellationToken cancellationToken) { }

	// RVA: 0x1433E0C Offset: 0x1433E0C VA: 0x1433E0C Slot: 6
	public Task<BatchSendResult> SendBatchAsync(string url, byte[] payload, Dictionary<string, string> headers, CancellationToken cancellationToken) { }

	// RVA: 0x1434550 Offset: 0x1434550 VA: 0x1434550 Slot: 7
	public Task<Nullable<long>> GetTimeAsync(string url, CancellationToken cancellationToken) { }

	// RVA: 0x1434A20 Offset: 0x1434A20 VA: 0x1434A20
	public void .ctor() { }
}

// Namespace: magicsort.schemas.v1.team