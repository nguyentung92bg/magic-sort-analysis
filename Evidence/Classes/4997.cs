public class ApiResponse<T> // TypeDefIndex: 4997
{
	// Fields
	private bool _isSuccess; // 0x0
	[CompilerGenerated]
	private string <Message>k__BackingField; // 0x0
	[CompilerGenerated]
	private T <Data>k__BackingField; // 0x0
	[CompilerGenerated]
	private int <StatusCode>k__BackingField; // 0x0
	[CompilerGenerated]
	private Dictionary<string, string> <ResponseHeaders>k__BackingField; // 0x0
	private const int NotAvailableStatusCode = 425;

	// Properties
	public bool Success { get; }
	public string Message { get; set; }
	public T Data { get; set; }
	public int StatusCode { get; set; }
	public Dictionary<string, string> ResponseHeaders { get; set; }

	// Methods

	// RVA: -1 Offset: -1
	public bool get_Success() { }
	/* GenericInstMethod :
	|
	|-RVA: 0x1BB3160 Offset: 0x1BB3160 VA: 0x1BB3160
	|-ApiResponse<GetLeaderboardsResponse>.get_Success
	|
	|-RVA: 0x1BB3518 Offset: 0x1BB3518 VA: 0x1BB3518
	|-ApiResponse<object>.get_Success
	*/

	[CompilerGenerated]
	// RVA: -1 Offset: -1
	public string get_Message() { }
	/* GenericInstMethod :
	|
	|-RVA: 0x1BB31C8 Offset: 0x1BB31C8 VA: 0x1BB31C8
	|-ApiResponse<GetLeaderboardsResponse>.get_Message
	|
	|-RVA: 0x1BB3550 Offset: 0x1BB3550 VA: 0x1BB3550
	|-ApiResponse<object>.get_Message
	*/

	[CompilerGenerated]
	// RVA: -1 Offset: -1
	public void set_Message(string value) { }
	/* GenericInstMethod :
	|
	|-RVA: 0x1BB31D0 Offset: 0x1BB31D0 VA: 0x1BB31D0
	|-ApiResponse<GetLeaderboardsResponse>.set_Message
	|
	|-RVA: 0x1BB3558 Offset: 0x1BB3558 VA: 0x1BB3558
	|-ApiResponse<object>.set_Message
	*/

	[CompilerGenerated]
	// RVA: -1 Offset: -1
	public T get_Data() { }
	/* GenericInstMethod :
	|
	|-RVA: 0x1BB31D8 Offset: 0x1BB31D8 VA: 0x1BB31D8
	|-ApiResponse<GetLeaderboardsResponse>.get_Data
	|
	|-RVA: 0x1BB3560 Offset: 0x1BB3560 VA: 0x1BB3560
	|-ApiResponse<object>.get_Data
	*/

	[CompilerGenerated]
	// RVA: -1 Offset: -1
	public void set_Data(T value) { }
	/* GenericInstMethod :
	|
	|-RVA: 0x1BB31E4 Offset: 0x1BB31E4 VA: 0x1BB31E4
	|-ApiResponse<GetLeaderboardsResponse>.set_Data
	|
	|-RVA: 0x1BB3568 Offset: 0x1BB3568 VA: 0x1BB3568
	|-ApiResponse<object>.set_Data
	*/

	[CompilerGenerated]
	// RVA: -1 Offset: -1
	public int get_StatusCode() { }
	/* GenericInstMethod :
	|
	|-RVA: 0x1BB31F4 Offset: 0x1BB31F4 VA: 0x1BB31F4
	|-ApiResponse<GetLeaderboardsResponse>.get_StatusCode
	|
	|-RVA: 0x1BB3570 Offset: 0x1BB3570 VA: 0x1BB3570
	|-ApiResponse<object>.get_StatusCode
	*/

	[CompilerGenerated]
	// RVA: -1 Offset: -1
	public void set_StatusCode(int value) { }
	/* GenericInstMethod :
	|
	|-RVA: 0x1BB31FC Offset: 0x1BB31FC VA: 0x1BB31FC
	|-ApiResponse<GetLeaderboardsResponse>.set_StatusCode
	|
	|-RVA: 0x1BB3578 Offset: 0x1BB3578 VA: 0x1BB3578
	|-ApiResponse<object>.set_StatusCode
	*/

	[CompilerGenerated]
	// RVA: -1 Offset: -1
	public Dictionary<string, string> get_ResponseHeaders() { }
	/* GenericInstMethod :
	|
	|-RVA: 0x1BB3204 Offset: 0x1BB3204 VA: 0x1BB3204
	|-ApiResponse<GetLeaderboardsResponse>.get_ResponseHeaders
	|
	|-RVA: 0x1BB3580 Offset: 0x1BB3580 VA: 0x1BB3580
	|-ApiResponse<object>.get_ResponseHeaders
	*/

	[CompilerGenerated]
	// RVA: -1 Offset: -1
	public void set_ResponseHeaders(Dictionary<string, string> value) { }
	/* GenericInstMethod :
	|
	|-RVA: 0x1BB320C Offset: 0x1BB320C VA: 0x1BB320C
	|-ApiResponse<GetLeaderboardsResponse>.set_ResponseHeaders
	|
	|-RVA: 0x1BB3588 Offset: 0x1BB3588 VA: 0x1BB3588
	|-ApiResponse<object>.set_ResponseHeaders
	*/

	// RVA: -1 Offset: -1
	public void .ctor(bool success, string message, int statusCode, T data) { }
	/* GenericInstMethod :
	|
	|-RVA: 0x1BB3214 Offset: 0x1BB3214 VA: 0x1BB3214
	|-ApiResponse<GetLeaderboardsResponse>..ctor
	|
	|-RVA: 0x1BB3590 Offset: 0x1BB3590 VA: 0x1BB3590
	|-ApiResponse<object>..ctor
	*/

	// RVA: -1 Offset: -1
	public static ApiResponse<T> Fail(string message, int statusCode = -1) { }
	/* GenericInstMethod :
	|
	|-RVA: 0x1BB32B4 Offset: 0x1BB32B4 VA: 0x1BB32B4
	|-ApiResponse<GetLeaderboardsResponse>.Fail
	|
	|-RVA: 0x1BB3628 Offset: 0x1BB3628 VA: 0x1BB3628
	|-ApiResponse<object>.Fail
	*/

	// RVA: -1 Offset: -1
	public static ApiResponse<T> Ok(T data, string message = "") { }
	/* GenericInstMethod :
	|
	|-RVA: 0x1BB3380 Offset: 0x1BB3380 VA: 0x1BB3380
	|-ApiResponse<GetLeaderboardsResponse>.Ok
	|
	|-RVA: 0x1BB36F0 Offset: 0x1BB36F0 VA: 0x1BB36F0
	|-ApiResponse<object>.Ok
	*/

	// RVA: -1 Offset: -1
	public bool IsNotAvailable() { }
	/* GenericInstMethod :
	|
	|-RVA: 0x1BB3450 Offset: 0x1BB3450 VA: 0x1BB3450
	|-ApiResponse<GetLeaderboardsResponse>.IsNotAvailable
	|
	|-RVA: 0x1BB37B8 Offset: 0x1BB37B8 VA: 0x1BB37B8
	|-ApiResponse<object>.IsNotAvailable
	*/

	// RVA: -1 Offset: -1
	public string GetResponseHeader(string name) { }
	/* GenericInstMethod :
	|
	|-RVA: 0x1BB3478 Offset: 0x1BB3478 VA: 0x1BB3478
	|-ApiResponse<GetLeaderboardsResponse>.GetResponseHeader
	|
	|-RVA: 0x1BB37E0 Offset: 0x1BB37E0 VA: 0x1BB37E0
	|-ApiResponse<object>.GetResponseHeader
	*/
}

// Namespace: 
[Serializable]