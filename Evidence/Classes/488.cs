public class HttpProxy : IInitializable, IDisposable // TypeDefIndex: 488
{
	// Fields
	private TokenService _tokenService; // 0x10
	private CancellationTokenSource _cancellationTokenSource; // 0x18
	private readonly IHttpRequestService _requestService; // 0x20
	private Dictionary<string, string> _deviceInfoHeadersCached; // 0x28

	// Methods

	// RVA: 0x3D2815C Offset: 0x3D2815C VA: 0x3D2815C
	public void .ctor(CancellationTokenSource cancellationTokenSource, TokenService tokenService, IHttpRequestService requestService) { }

	// RVA: 0x3D281BC Offset: 0x3D281BC VA: 0x3D281BC Slot: 4
	public void Initialize() { }

	// RVA: 0x3D28568 Offset: 0x3D28568 VA: 0x3D28568 Slot: 5
	public void Dispose() { }

	// RVA: -1 Offset: -1
	public Task<ApiResponse<T>> Post<T>(Uri uri, object payloadAsObject, CancellationTokenSource cancellationTokenSource, float timeoutInSeconds = 5, int retryCount = 0, float connectionTimeOutInSeconds = 2, bool preventRequestIfNotAuthorized = True, bool addDeviceInfoHeaders = False, HttpRequestContent httpRequestContent = 0) { }
	/* GenericInstMethod :
	|
	|-RVA: 0x29AE2D0 Offset: 0x29AE2D0 VA: 0x29AE2D0
	|-HttpProxy.Post<object>
	*/

	// RVA: -1 Offset: -1
	public Task<ApiResponse<T>> Get<T>(Uri uri, CancellationTokenSource cancellationTokenSource, float timeoutInSeconds = 5, int retryCount = 0, float connectionTimeOutInSeconds = 2, bool preventRequestIfNotAuthorized = True) { }
	/* GenericInstMethod :
	|
	|-RVA: 0x29ADE9C Offset: 0x29ADE9C VA: 0x29ADE9C
	|-HttpProxy.Get<object>
	*/

	// RVA: -1 Offset: -1
	public Task<ApiResponse<T>> GetWithoutHeaders<T>(Uri uri, CancellationTokenSource cancellationTokenSource, float timeoutInSeconds = 5, int retryCount = 0, float connectionTimeOutInSeconds = 2, bool preventRequestIfNotAuthorized = True, long bufferSize = -1) { }
	/* GenericInstMethod :
	|
	|-RVA: 0x29AE17C Offset: 0x29AE17C VA: 0x29AE17C
	|-HttpProxy.GetWithoutHeaders<object>
	*/

	// RVA: -1 Offset: -1
	public Task<ApiResponse<T>> Delete<T>(Uri uri, object payloadAsObject, CancellationTokenSource cancellationTokenSource, float timeoutInSeconds = 5, int retryCount = 0, float connectionTimeOutInSeconds = 2, bool preventRequestIfNotAuthorized = True) { }
	/* GenericInstMethod :
	|
	|-RVA: 0x29ADD2C Offset: 0x29ADD2C VA: 0x29ADD2C
	|-HttpProxy.Delete<object>
	*/

	// RVA: -1 Offset: -1
	public Task<ApiResponse<T>> PostWithAdditionalHeaders<T>(Uri uri, object payloadAsObject, CancellationTokenSource cancellationTokenSource, float timeoutInSeconds = 5, int retryCount = 0, float connectionTimeOutInSeconds = 2, bool preventRequestIfNotAuthorized = True, bool addDeviceInfoHeaders = False, HttpRequestContent httpRequestContent = 0, Dictionary<string, string> additionalHeaders, bool captureResponseHeaders = False) { }
	/* GenericInstMethod :
	|
	|-RVA: 0x29AE450 Offset: 0x29AE450 VA: 0x29AE450
	|-HttpProxy.PostWithAdditionalHeaders<object>
	*/

	// RVA: -1 Offset: -1
	public Task<ApiResponse<T>> GetWithAdditionalHeaders<T>(Uri uri, CancellationTokenSource cancellationTokenSource, float timeoutInSeconds = 5, int retryCount = 0, float connectionTimeOutInSeconds = 2, bool preventRequestIfNotAuthorized = True, Dictionary<string, string> additionalHeaders) { }
	/* GenericInstMethod :
	|
	|-RVA: 0x29AE008 Offset: 0x29AE008 VA: 0x29AE008
	|-HttpProxy.GetWithAdditionalHeaders<object>
	*/

	// RVA: 0x3D28584 Offset: 0x3D28584 VA: 0x3D28584
	private Dictionary<string, string> GetHeaders(bool addDeviceInfoHeaders) { }

	// RVA: 0x3D28750 Offset: 0x3D28750 VA: 0x3D28750
	private Dictionary<string, string> GetAuthHeaders() { }

	// RVA: 0x3D28870 Offset: 0x3D28870 VA: 0x3D28870
	private Dictionary<string, string> GetHeaders(bool addDeviceInfoHeaders, Dictionary<string, string> additionalHeaders) { }

	// RVA: 0x3D281C0 Offset: 0x3D281C0 VA: 0x3D281C0
	private void CacheDeviceInfoHeaders() { }

	// RVA: 0x3D28A58 Offset: 0x3D28A58 VA: 0x3D28A58
	private string LimitLength(string input, int maxLength = 90) { }
}

// Namespace: Modules.Infrastructure.Network.Http