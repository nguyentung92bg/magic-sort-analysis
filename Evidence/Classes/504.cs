public class HttpRequestNetworkFailException : Exception // TypeDefIndex: 504
{
	// Fields
	[CompilerGenerated]
	private readonly HTTPRequest <Request>k__BackingField; // 0x90
	[CompilerGenerated]
	private readonly HTTPResponse <Response>k__BackingField; // 0x98

	// Properties
	public HTTPRequest Request { get; }
	public HTTPResponse Response { get; }
	public bool IsTimeOut { get; }

	// Methods

	[CompilerGenerated]
	// RVA: 0x3D29BF0 Offset: 0x3D29BF0 VA: 0x3D29BF0
	public HTTPRequest get_Request() { }

	[CompilerGenerated]
	// RVA: 0x3D29BF8 Offset: 0x3D29BF8 VA: 0x3D29BF8
	public HTTPResponse get_Response() { }

	// RVA: 0x3D29C00 Offset: 0x3D29C00 VA: 0x3D29C00
	public bool get_IsTimeOut() { }

	// RVA: 0x3D29C28 Offset: 0x3D29C28 VA: 0x3D29C28
	public void .ctor(HTTPRequest request, HTTPResponse response) { }

	// RVA: 0x3D29CC4 Offset: 0x3D29CC4 VA: 0x3D29CC4
	public static string GetErrorMessage(HTTPRequest request) { }
}

// Namespace: Modules.Infrastructure.Log