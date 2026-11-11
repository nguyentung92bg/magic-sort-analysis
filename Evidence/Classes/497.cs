private struct UnityWebRequestService.<SendRequest>d__4<T> : IAsyncStateMachine // TypeDefIndex: 497
{
	// Fields
	public int <>1__state; // 0x0
	public AsyncTaskMethodBuilder<ApiResponse<T>> <>t__builder; // 0x0
	public HttpRequestModel httpRequestModel; // 0x0
	public UnityWebRequestService <>4__this; // 0x0
	private UnityWebRequest <request>5__2; // 0x0
	private bool <isDisposed>5__3; // 0x0
	private Stopwatch <stopwatch>5__4; // 0x0
	private int <timeOutInSeconds>5__5; // 0x0
	private UnityWebRequestAsyncOperation <operation>5__6; // 0x0
	private YieldAwaitable.YieldAwaiter <>u__1; // 0x0

	// Methods

	// RVA: -1 Offset: -1 Slot: 4
	private void MoveNext() { }
	/* GenericInstMethod :
	|
	|-RVA: 0x1632B94 Offset: 0x1632B94 VA: 0x1632B94
	|-UnityWebRequestService.<SendRequest>d__4<object>.MoveNext
	*/

	[DebuggerHidden]
	// RVA: -1 Offset: -1 Slot: 5
	private void SetStateMachine(IAsyncStateMachine stateMachine) { }
	/* GenericInstMethod :
	|
	|-RVA: 0x1633ABC Offset: 0x1633ABC VA: 0x1633ABC
	|-UnityWebRequestService.<SendRequest>d__4<object>.SetStateMachine
	*/
}

// Namespace: Modules.Infrastructure.Network.Http