private struct BestHttpRequestService.<SendRequest>d__4<T> : IAsyncStateMachine // TypeDefIndex: 483
{
	// Fields
	public int <>1__state; // 0x0
	public AsyncTaskMethodBuilder<ApiResponse<T>> <>t__builder; // 0x0
	public HttpRequestModel httpRequestModel; // 0x0
	public BestHttpRequestService <>4__this; // 0x0
	private HTTPRequest <request>5__2; // 0x0
	private Stopwatch <stopWatch>5__3; // 0x0
	private TaskAwaiter<HTTPResponse> <>u__1; // 0x0

	// Methods

	// RVA: -1 Offset: -1 Slot: 4
	private void MoveNext() { }
	/* GenericInstMethod :
	|
	|-RVA: 0x1714618 Offset: 0x1714618 VA: 0x1714618
	|-BestHttpRequestService.<SendRequest>d__4<object>.MoveNext
	*/

	[DebuggerHidden]
	// RVA: -1 Offset: -1 Slot: 5
	private void SetStateMachine(IAsyncStateMachine stateMachine) { }
	/* GenericInstMethod :
	|
	|-RVA: 0x1715400 Offset: 0x1715400 VA: 0x1715400
	|-BestHttpRequestService.<SendRequest>d__4<object>.SetStateMachine
	*/
}

// Namespace: Modules.Infrastructure.Network.Http