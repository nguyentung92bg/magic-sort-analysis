public class UnityWebRequestService : IHttpRequestService // TypeDefIndex: 498
{
	// Fields
	private readonly CancellationTokenSource _cancellationTokenSource; // 0x10
	private readonly JsonSerializerSettings _jsonSerializerSettings; // 0x18
	private static readonly Dictionary<Type, MessageParser> _parserCache; // 0x0

	// Methods

	// RVA: 0x3D28E14 Offset: 0x3D28E14 VA: 0x3D28E14
	public void .ctor(CancellationTokenSource cancellationTokenSource, JsonSerializerSettings jsonSerializerSettings) { }

	[AsyncStateMachine(typeof(UnityWebRequestService.<SendRequest>d__4<T>))]
	// RVA: -1 Offset: -1 Slot: 4
	public Task<ApiResponse<T>> SendRequest<T>(HttpRequestModel httpRequestModel) { }
	/* GenericInstMethod :
	|
	|-RVA: 0x234ADB8 Offset: 0x234ADB8 VA: 0x234ADB8
	|-UnityWebRequestService.SendRequest<object>
	*/

	// RVA: 0x3D29304 Offset: 0x3D29304 VA: 0x3D29304
	private UnityWebRequest CreateUnityWebRequest(HttpRequestModel httpRequestModel) { }

	// RVA: 0x3D29848 Offset: 0x3D29848 VA: 0x3D29848
	private static Dictionary<string, string> CaptureResponseHeaders(UnityWebRequest request) { }

	// RVA: -1 Offset: -1
	private T ProcessResponseBody<T>(UnityWebRequest request) { }
	/* GenericInstMethod :
	|
	|-RVA: 0x234AA5C Offset: 0x234AA5C VA: 0x234AA5C
	|-UnityWebRequestService.ProcessResponseBody<object>
	*/

	// RVA: -1 Offset: -1
	private static MessageParser GetOrCreateParser<T>() { }
	/* GenericInstMethod :
	|
	|-RVA: 0x234A880 Offset: 0x234A880 VA: 0x234A880
	|-UnityWebRequestService.GetOrCreateParser<object>
	*/

	// RVA: 0x3D29AB0 Offset: 0x3D29AB0 VA: 0x3D29AB0
	private static void .cctor() { }
}

// Namespace: Modules.Infrastructure.Network.Http
[Extension]