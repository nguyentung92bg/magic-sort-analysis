public interface IHttpRequestService // TypeDefIndex: 496
{
	// Methods

	// RVA: -1 Offset: -1 Slot: 0
	public abstract Task<ApiResponse<T>> SendRequest<T>(HttpRequestModel httpRequestModel);
	/* GenericInstMethod :
	|
	|-RVA: -1 Offset: -1
	|-IHttpRequestService.SendRequest<object>
	*/
}

// Namespace: 
[CompilerGenerated]