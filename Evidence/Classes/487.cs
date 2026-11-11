public class HttpRequestModel // TypeDefIndex: 487
{
	// Fields
	[CompilerGenerated]
	private readonly Uri <Uri>k__BackingField; // 0x10
	[CompilerGenerated]
	private readonly object <PayloadAsObject>k__BackingField; // 0x18
	[CompilerGenerated]
	private readonly HTTPMethods <HttpMethods>k__BackingField; // 0x20
	[CompilerGenerated]
	private readonly HttpRequestContent <HttpRequestContent>k__BackingField; // 0x24
	[CompilerGenerated]
	private readonly Dictionary<string, string> <Headers>k__BackingField; // 0x28
	[CompilerGenerated]
	private readonly bool <UseCompression>k__BackingField; // 0x30
	[CompilerGenerated]
	private readonly bool <DisableCache>k__BackingField; // 0x31
	[CompilerGenerated]
	private readonly float <TimeoutInSeconds>k__BackingField; // 0x34
	[CompilerGenerated]
	private readonly float <ConnectionTimeOutInSeconds>k__BackingField; // 0x38
	[CompilerGenerated]
	private readonly int <RetryCount>k__BackingField; // 0x3C
	[CompilerGenerated]
	private readonly CancellationTokenSource <CancellationTokenSource>k__BackingField; // 0x40
	[CompilerGenerated]
	private readonly bool <PreventRequestIfNotAuthorized>k__BackingField; // 0x48
	[CompilerGenerated]
	private readonly long <BufferSize>k__BackingField; // 0x50
	[CompilerGenerated]
	private readonly bool <CaptureResponseHeaders>k__BackingField; // 0x58

	// Properties
	public Uri Uri { get; }
	public object PayloadAsObject { get; }
	public HTTPMethods HttpMethods { get; }
	public HttpRequestContent HttpRequestContent { get; }
	public Dictionary<string, string> Headers { get; }
	public bool UseCompression { get; }
	public bool DisableCache { get; }
	public float TimeoutInSeconds { get; }
	public float ConnectionTimeOutInSeconds { get; }
	public int RetryCount { get; }
	public CancellationTokenSource CancellationTokenSource { get; }
	public bool PreventRequestIfNotAuthorized { get; }
	public long BufferSize { get; }
	public bool CaptureResponseHeaders { get; }

	// Methods

	[CompilerGenerated]
	// RVA: 0x3D28008 Offset: 0x3D28008 VA: 0x3D28008
	public Uri get_Uri() { }

	[CompilerGenerated]
	// RVA: 0x3D28010 Offset: 0x3D28010 VA: 0x3D28010
	public object get_PayloadAsObject() { }

	[CompilerGenerated]
	// RVA: 0x3D28018 Offset: 0x3D28018 VA: 0x3D28018
	public HTTPMethods get_HttpMethods() { }

	[CompilerGenerated]
	// RVA: 0x3D28020 Offset: 0x3D28020 VA: 0x3D28020
	public HttpRequestContent get_HttpRequestContent() { }

	[CompilerGenerated]
	// RVA: 0x3D28028 Offset: 0x3D28028 VA: 0x3D28028
	public Dictionary<string, string> get_Headers() { }

	[CompilerGenerated]
	// RVA: 0x3D28030 Offset: 0x3D28030 VA: 0x3D28030
	public bool get_UseCompression() { }

	[CompilerGenerated]
	// RVA: 0x3D28038 Offset: 0x3D28038 VA: 0x3D28038
	public bool get_DisableCache() { }

	[CompilerGenerated]
	// RVA: 0x3D28040 Offset: 0x3D28040 VA: 0x3D28040
	public float get_TimeoutInSeconds() { }

	[CompilerGenerated]
	// RVA: 0x3D28048 Offset: 0x3D28048 VA: 0x3D28048
	public float get_ConnectionTimeOutInSeconds() { }

	[CompilerGenerated]
	// RVA: 0x3D28050 Offset: 0x3D28050 VA: 0x3D28050
	public int get_RetryCount() { }

	[CompilerGenerated]
	// RVA: 0x3D28058 Offset: 0x3D28058 VA: 0x3D28058
	public CancellationTokenSource get_CancellationTokenSource() { }

	[CompilerGenerated]
	// RVA: 0x3D28060 Offset: 0x3D28060 VA: 0x3D28060
	public bool get_PreventRequestIfNotAuthorized() { }

	[CompilerGenerated]
	// RVA: 0x3D28068 Offset: 0x3D28068 VA: 0x3D28068
	public long get_BufferSize() { }

	[CompilerGenerated]
	// RVA: 0x3D28070 Offset: 0x3D28070 VA: 0x3D28070
	public bool get_CaptureResponseHeaders() { }

	// RVA: 0x3D28078 Offset: 0x3D28078 VA: 0x3D28078
	public void .ctor(HTTPMethods httpMethods, Uri uri, object payloadAsObject, CancellationTokenSource cancellationTokenSource, Dictionary<string, string> headers, float timeoutInSeconds, int retryCount, float connectionTimeOutInSeconds, bool preventRequestIfNotAuthorized, HttpRequestContent httpRequestContent, long bufferSize = -1, bool captureResponseHeaders = False) { }
}

// Namespace: Modules.Infrastructure.Network.Http