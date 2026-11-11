public class BestHttpRequestService : IHttpRequestService // TypeDefIndex: 484
{
	// Fields
	private readonly CancellationTokenSource _cancellationTokenSource; // 0x10
	private readonly JsonSerializerSettings _jsonSerializerSettings; // 0x18
	private static readonly Dictionary<Type, MessageParser> _parserCache; // 0x0

	// Methods

	// RVA: 0x3D27038 Offset: 0x3D27038 VA: 0x3D27038
	public void .ctor(CancellationTokenSource cancellationTokenSource, JsonSerializerSettings jsonSerializerSettings) { }

	[AsyncStateMachine(typeof(BestHttpRequestService.<SendRequest>d__4<T>))]
	// RVA: -1 Offset: -1 Slot: 4
	public Task<ApiResponse<T>> SendRequest<T>(HttpRequestModel httpRequestModel) { }
	/* GenericInstMethod :
	|
	|-RVA: 0x2640DA4 Offset: 0x2640DA4 VA: 0x2640DA4
	|-BestHttpRequestService.SendRequest<object>
	*/

	// RVA: 0x3D2707C Offset: 0x3D2707C VA: 0x3D2707C
	private static Dictionary<string, string> CaptureResponseHeaders(HTTPResponse httpResponse) { }

	// RVA: -1 Offset: -1
	private T ProcessResponseBody<T>(HTTPResponse httpResponse) { }
	/* GenericInstMethod :
	|
	|-RVA: 0x2640A94 Offset: 0x2640A94 VA: 0x2640A94
	|-BestHttpRequestService.ProcessResponseBody<object>
	*/

	// RVA: -1 Offset: -1
	private static MessageParser GetOrCreateParser<T>() { }
	/* GenericInstMethod :
	|
	|-RVA: 0x26408B8 Offset: 0x26408B8 VA: 0x26408B8
	|-BestHttpRequestService.GetOrCreateParser<object>
	*/

	[AsyncStateMachine(typeof(BestHttpRequestService.<GetResponse>d__8))]
	// RVA: 0x3D27318 Offset: 0x3D27318 VA: 0x3D27318
	private Task<HTTPResponse> GetResponse(HTTPRequest httpRequest, CancellationTokenSource source) { }

	// RVA: 0x3D27440 Offset: 0x3D27440 VA: 0x3D27440
	private HTTPRequest MakeRequest(HttpRequestModel httpRequestModel) { }

	// RVA: 0x3D27578 Offset: 0x3D27578 VA: 0x3D27578
	private void AddRequestId(HTTPRequest httpRequest) { }

	// RVA: 0x3D275F4 Offset: 0x3D275F4 VA: 0x3D275F4
	private void TrySetTimeout(HttpRequestModel httpRequestModel, HTTPRequest httpRequest) { }

	// RVA: 0x3D2785C Offset: 0x3D2785C VA: 0x3D2785C
	private void TrySetRetry(HttpRequestModel httpRequestModel, HTTPRequest httpRequest) { }

	// RVA: 0x3D276E8 Offset: 0x3D276E8 VA: 0x3D276E8
	private void TrySetHeaders(HttpRequestModel httpRequestModel, HTTPRequest httpRequest) { }

	// RVA: 0x3D278EC Offset: 0x3D278EC VA: 0x3D278EC
	private void SetPayload(HttpRequestModel httpRequestModel, HTTPRequest httpRequest) { }

	// RVA: 0x3D27AD8 Offset: 0x3D27AD8 VA: 0x3D27AD8
	private static void .cctor() { }
}

// Namespace: Modules.Infrastructure.Network.Http