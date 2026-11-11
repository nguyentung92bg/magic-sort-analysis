public class BestWebSocketProxy : IWebSocketProxy, IDisposable // TypeDefIndex: 463
{
	// Fields
	[CompilerGenerated]
	private Action OnOpen; // 0x10
	[CompilerGenerated]
	private Action<WebSocketStatusCodes, string> OnClose; // 0x18
	[CompilerGenerated]
	private Action<string> OnError; // 0x20
	[CompilerGenerated]
	private Action<string> OnMessage; // 0x28
	[CompilerGenerated]
	private Action<BufferSegment> OnBinaryMessage; // 0x30
	private WebSocket _webSocket; // 0x38
	private Uri _uri; // 0x40
	private const bool CONVERT_MESSAGE_TO_BYTES = False;

	// Properties
	public bool IsOpen { get; }
	public WebSocketStates State { get; }

	// Methods

	[CompilerGenerated]
	// RVA: 0x3D20B58 Offset: 0x3D20B58 VA: 0x3D20B58 Slot: 4
	public void add_OnOpen(Action value) { }

	[CompilerGenerated]
	// RVA: 0x3D20BF4 Offset: 0x3D20BF4 VA: 0x3D20BF4 Slot: 5
	public void remove_OnOpen(Action value) { }

	[CompilerGenerated]
	// RVA: 0x3D20C90 Offset: 0x3D20C90 VA: 0x3D20C90 Slot: 6
	public void add_OnClose(Action<WebSocketStatusCodes, string> value) { }

	[CompilerGenerated]
	// RVA: 0x3D20D40 Offset: 0x3D20D40 VA: 0x3D20D40 Slot: 7
	public void remove_OnClose(Action<WebSocketStatusCodes, string> value) { }

	[CompilerGenerated]
	// RVA: 0x3D20DF0 Offset: 0x3D20DF0 VA: 0x3D20DF0 Slot: 8
	public void add_OnError(Action<string> value) { }

	[CompilerGenerated]
	// RVA: 0x3D20EA0 Offset: 0x3D20EA0 VA: 0x3D20EA0 Slot: 9
	public void remove_OnError(Action<string> value) { }

	[CompilerGenerated]
	// RVA: 0x3D20F50 Offset: 0x3D20F50 VA: 0x3D20F50 Slot: 10
	public void add_OnMessage(Action<string> value) { }

	[CompilerGenerated]
	// RVA: 0x3D21000 Offset: 0x3D21000 VA: 0x3D21000 Slot: 11
	public void remove_OnMessage(Action<string> value) { }

	[CompilerGenerated]
	// RVA: 0x3D210B0 Offset: 0x3D210B0 VA: 0x3D210B0 Slot: 12
	public void add_OnBinaryMessage(Action<BufferSegment> value) { }

	[CompilerGenerated]
	// RVA: 0x3D21160 Offset: 0x3D21160 VA: 0x3D21160 Slot: 13
	public void remove_OnBinaryMessage(Action<BufferSegment> value) { }

	// RVA: 0x3D21210 Offset: 0x3D21210 VA: 0x3D21210 Slot: 14
	public bool get_IsOpen() { }

	// RVA: 0x3D21224 Offset: 0x3D21224 VA: 0x3D21224 Slot: 15
	public WebSocketStates get_State() { }

	// RVA: 0x3D2123C Offset: 0x3D2123C VA: 0x3D2123C Slot: 16
	public void SetUri(Uri uri) { }

	// RVA: 0x3D21244 Offset: 0x3D21244 VA: 0x3D21244 Slot: 17
	public void Open() { }

	// RVA: 0x3D21618 Offset: 0x3D21618 VA: 0x3D21618 Slot: 18
	public void Close(bool forceCleanUp = False) { }

	// RVA: -1 Offset: -1 Slot: 19
	public void Send<T>(SocketMessage<T> message) { }
	/* GenericInstMethod :
	|
	|-RVA: 0x2640FB0 Offset: 0x2640FB0 VA: 0x2640FB0
	|-BestWebSocketProxy.Send<EmptyContent>
	|
	|-RVA: 0x2640FFC Offset: 0x2640FFC VA: 0x2640FFC
	|-BestWebSocketProxy.Send<object>
	*/

	// RVA: -1 Offset: -1
	private void SendMassageAsBytes<T>(SocketMessage<T> message) { }
	/* GenericInstMethod :
	|
	|-RVA: 0x2641048 Offset: 0x2641048 VA: 0x2641048
	|-BestWebSocketProxy.SendMassageAsBytes<object>
	*/

	// RVA: -1 Offset: -1
	private void SendMessageAsJson<T>(SocketMessage<T> message) { }
	/* GenericInstMethod :
	|
	|-RVA: 0x2641088 Offset: 0x2641088 VA: 0x2641088
	|-BestWebSocketProxy.SendMessageAsJson<EmptyContent>
	|
	|-RVA: 0x2641188 Offset: 0x2641188 VA: 0x2641188
	|-BestWebSocketProxy.SendMessageAsJson<object>
	*/

	// RVA: 0x3D219EC Offset: 0x3D219EC VA: 0x3D219EC
	private void OnSocketOpened(WebSocket webSocket) { }

	// RVA: 0x3D21A14 Offset: 0x3D21A14 VA: 0x3D21A14
	private void OnMessageReceived(WebSocket webSocket, string message) { }

	// RVA: 0x3D21A44 Offset: 0x3D21A44 VA: 0x3D21A44
	private void OnBinaryMessageReceived(WebSocket webSocket, BufferSegment data) { }

	// RVA: 0x3D21B14 Offset: 0x3D21B14 VA: 0x3D21B14
	private void OnSocketClosed(WebSocket webSocket, WebSocketStatusCodes code, string message) { }

	// RVA: 0x3D21B74 Offset: 0x3D21B74 VA: 0x3D21B74 Slot: 20
	public void Dispose() { }

	// RVA: 0x3D21688 Offset: 0x3D21688 VA: 0x3D21688
	private void DisposeCurrentSocket(bool closeSocket = True, bool forceCleanUp = False) { }

	// RVA: -1 Offset: -1
	private byte[] GetMessageAsBytes<T>(SocketMessage<T> message) { }
	/* GenericInstMethod :
	|
	|-RVA: 0x2640E9C Offset: 0x2640E9C VA: 0x2640E9C
	|-BestWebSocketProxy.GetMessageAsBytes<object>
	*/

	// RVA: 0x3D21BCC Offset: 0x3D21BCC VA: 0x3D21BCC
	public void .ctor() { }
}

// Namespace: Modules.Infrastructure.Network.Socketv2